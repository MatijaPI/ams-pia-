source /opt/ros/lyrical/setup.bash
if [[ -f ~/ros/install/setup.bash ]]; then source ~/ros/install/setup.bash; fi

export ROS_DOMAIN_ID=26
export ROS_NAMESPACE="/luka"

ros2() {
    if [[ "$1" == "run" && -n "$ROS_NAMESPACE" && "$ROS_NAMESPACE" != "/" ]]; then
        local arg
        for arg in "$@"; do
            if [[ "$arg" == *__ns:=* ]]; then
                command ros2 "$@"
                return
            fi
        done
        command ros2 "$@" --ros-args -r "__ns:=$ROS_NAMESPACE"
    else
        command ros2 "$@"
    fi
}
