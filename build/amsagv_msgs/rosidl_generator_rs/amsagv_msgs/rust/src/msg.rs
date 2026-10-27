#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to amsagv_msgs__msg__Action

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Action {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub distance: f32,

}



impl Default for Action {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Action::default())
  }
}

impl rosidl_runtime_rs::Message for Action {
  type RmwMsg = super::msg::rmw::Action;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        id: msg.id,
        distance: msg.distance,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
      id: msg.id,
      distance: msg.distance,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      id: msg.id,
      distance: msg.distance,
    }
  }
}


// Corresponds to amsagv_msgs__msg__ActionStamped

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActionStamped {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub action: super::msg::Action,

}



impl Default for ActionStamped {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ActionStamped::default())
  }
}

impl rosidl_runtime_rs::Message for ActionStamped {
  type RmwMsg = super::msg::rmw::ActionStamped;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        action: super::msg::Action::into_rmw_message(std::borrow::Cow::Owned(msg.action)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        action: super::msg::Action::into_rmw_message(std::borrow::Cow::Borrowed(&msg.action)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      action: super::msg::Action::from_rmw_message(msg.action),
    }
  }
}


// Corresponds to amsagv_msgs__msg__Actions

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Actions {

    // This member is not documented.
    #[allow(missing_docs)]
    pub actions: Vec<super::msg::Action>,

}



impl Default for Actions {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Actions::default())
  }
}

impl rosidl_runtime_rs::Message for Actions {
  type RmwMsg = super::msg::rmw::Actions;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        actions: msg.actions
          .into_iter()
          .map(|elem| super::msg::Action::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        actions: msg.actions
          .iter()
          .map(|elem| super::msg::Action::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      actions: msg.actions
          .into_iter()
          .map(super::msg::Action::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to amsagv_msgs__msg__ActionsStamped

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActionsStamped {

    // This member is not documented.
    #[allow(missing_docs)]
    pub actions: Vec<super::msg::ActionStamped>,

}



impl Default for ActionsStamped {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ActionsStamped::default())
  }
}

impl rosidl_runtime_rs::Message for ActionsStamped {
  type RmwMsg = super::msg::rmw::ActionsStamped;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        actions: msg.actions
          .into_iter()
          .map(|elem| super::msg::ActionStamped::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        actions: msg.actions
          .iter()
          .map(|elem| super::msg::ActionStamped::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      actions: msg.actions
          .into_iter()
          .map(super::msg::ActionStamped::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to amsagv_msgs__msg__Line

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Line {

    // This member is not documented.
    #[allow(missing_docs)]
    pub values: Vec<u8>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub left: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub heading: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub distance: f32,

}



impl Default for Line {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Line::default())
  }
}

impl rosidl_runtime_rs::Message for Line {
  type RmwMsg = super::msg::rmw::Line;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        values: msg.values.as_slice().into(),
        left: msg.left,
        right: msg.right,
        heading: msg.heading,
        distance: msg.distance,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        values: msg.values.as_slice().into(),
      left: msg.left,
      right: msg.right,
      heading: msg.heading,
      distance: msg.distance,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      values: msg.values.into(),
      left: msg.left,
      right: msg.right,
      heading: msg.heading,
      distance: msg.distance,
    }
  }
}


// Corresponds to amsagv_msgs__msg__LineStamped

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LineStamped {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub line: super::msg::Line,

}



impl Default for LineStamped {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LineStamped::default())
  }
}

impl rosidl_runtime_rs::Message for LineStamped {
  type RmwMsg = super::msg::rmw::LineStamped;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        line: super::msg::Line::into_rmw_message(std::borrow::Cow::Owned(msg.line)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        line: super::msg::Line::into_rmw_message(std::borrow::Cow::Borrowed(&msg.line)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      line: super::msg::Line::from_rmw_message(msg.line),
    }
  }
}


// Corresponds to amsagv_msgs__msg__Tag

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Tag {

    // This member is not documented.
    #[allow(missing_docs)]
    pub id: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub a: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub b: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub d: f32,

}



impl Default for Tag {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Tag::default())
  }
}

impl rosidl_runtime_rs::Message for Tag {
  type RmwMsg = super::msg::rmw::Tag;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        id: msg.id,
        a: msg.a,
        b: msg.b,
        d: msg.d,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      id: msg.id,
      a: msg.a,
      b: msg.b,
      d: msg.d,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      id: msg.id,
      a: msg.a,
      b: msg.b,
      d: msg.d,
    }
  }
}


// Corresponds to amsagv_msgs__msg__TagStamped

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TagStamped {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tag: super::msg::Tag,

}



impl Default for TagStamped {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TagStamped::default())
  }
}

impl rosidl_runtime_rs::Message for TagStamped {
  type RmwMsg = super::msg::rmw::TagStamped;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        tag: super::msg::Tag::into_rmw_message(std::borrow::Cow::Owned(msg.tag)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        tag: super::msg::Tag::into_rmw_message(std::borrow::Cow::Borrowed(&msg.tag)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      tag: super::msg::Tag::from_rmw_message(msg.tag),
    }
  }
}


// Corresponds to amsagv_msgs__msg__Tags

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Tags {

    // This member is not documented.
    #[allow(missing_docs)]
    pub tags: Vec<super::msg::Tag>,

}



impl Default for Tags {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Tags::default())
  }
}

impl rosidl_runtime_rs::Message for Tags {
  type RmwMsg = super::msg::rmw::Tags;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        tags: msg.tags
          .into_iter()
          .map(|elem| super::msg::Tag::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        tags: msg.tags
          .iter()
          .map(|elem| super::msg::Tag::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      tags: msg.tags
          .into_iter()
          .map(super::msg::Tag::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to amsagv_msgs__msg__TagsStamped

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TagsStamped {

    // This member is not documented.
    #[allow(missing_docs)]
    pub tags: Vec<super::msg::TagStamped>,

}



impl Default for TagsStamped {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TagsStamped::default())
  }
}

impl rosidl_runtime_rs::Message for TagsStamped {
  type RmwMsg = super::msg::rmw::TagsStamped;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        tags: msg.tags
          .into_iter()
          .map(|elem| super::msg::TagStamped::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        tags: msg.tags
          .iter()
          .map(|elem| super::msg::TagStamped::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      tags: msg.tags
          .into_iter()
          .map(super::msg::TagStamped::from_rmw_message)
          .collect(),
    }
  }
}


