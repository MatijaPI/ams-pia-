#!/usr/bin/python3
# -*- coding: utf-8 -*-
''' NFC-tag reader

This program publishes a ROS message with the ID of the tag whenever a new tag is detected with MFRC-522 module that is attached to the Raspberry Pi. 

# Installation

This program requires an enabled SPI interface on the Raspberry Pi and Python libraries for that interface.

```bash
#Use sudo raspi-config to enable SPI interface or:
sudo sed -i '/^[# ]*dtparam=spi=.*/d' /boot/config.txt
echo 'dtparam=spi=on' | sudo tee -a /boot/config.txt

sudo apt-get update
sudo apt-get upgrade

sudo apt-get install python3-dev python3-pip
sudo pip3 install RPi.GPIO

cd
git clone https://github.com/lthiery/SPI-Py.git

cd ~/SPI-Py
sudo python3 setup.py install

#cd
#git clone https://github.com/pimylifeup/MFRC522-python.git
#git clone https://github.com/naleefer/MFRC522-python.git
```

# Subscribing to the tag topic

To subscribe to the tag topic, add the following lines to your program.

Add the following line to the import section:
```python
from amsagv_msgs.msg import TagStamped
```

Add the following line to the `__init__` method of your class (`node` is your rclpy node):
```python
self._sub_tag = node.create_subscription(TagStamped, 'tag', self._handle_tag, 10)
```

Add the following method to your class:
```python
def _handle_tag(self, msg):
    print('Tag data: {}'.format(msg.tag.id))
```
'''
from amsagv import mfrc522
import rclpy
from rclpy.executors import ExternalShutdownException
from amsagv.ams import Node
from amsagv_msgs.msg import TagStamped
from time import sleep



class TagReader(object):
    REPEAT = 2

    def __init__(self):
        self._reader = None
    
    def __enter__(self):
        self._reader = mfrc522.MFRC522()
        return self
    
    def __exit__(self, *args, **kwargs):
        self._reader.close_mfrc522()

    def read(self):
        status = None
        uid = None
        n = TagReader.REPEAT
        while n > 0:
            n -= 1
            (status, type) = self._reader.mfrc522_request(self._reader.PICC_REQIDL)
            if status != self._reader.MI_OK:
                continue
            uid = None
            (status, uid) = self._reader.mfrc522_anticoll()
            if status == self._reader.MI_OK:
                break

        return TagReader.uid_to_num(uid)

    @staticmethod
    def uid_to_num(uid):
        if uid is None or len(uid) != 5:
            return None
        else:
            n = 0
            for i in range(5):
                n = n * 256 + uid[i]
            return n



def main():
    with TagReader() as reader:
        rclpy.init()
        node = Node('tag_reader')
        
        try:

            # Tag publisher
            pub = node.create_publisher(TagStamped, 'tag', 1)

            # Tag message
            msg = TagStamped()

            last = None
            while rclpy.ok():
                tag_id = reader.read()
                if tag_id != last and tag_id is not None:
                    msg.header.stamp = node.get_clock().now().to_msg()
                    msg.tag.id = int(tag_id)
                    pub.publish(msg)
                last = tag_id
                sleep(0.03)
        except (KeyboardInterrupt, ExternalShutdownException):
            pass
        finally:
            node.destroy_node()
            if rclpy.ok():
                rclpy.shutdown()



if __name__ == '__main__':
    main()
