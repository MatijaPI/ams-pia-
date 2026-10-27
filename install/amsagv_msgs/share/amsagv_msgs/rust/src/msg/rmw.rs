#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "amsagv_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__amsagv_msgs__msg__Action() -> *const std::ffi::c_void;
}

#[link(name = "amsagv_msgs__rosidl_generator_c")]
extern "C" {
    fn amsagv_msgs__msg__Action__init(msg: *mut Action) -> bool;
    fn amsagv_msgs__msg__Action__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Action>, size: usize) -> bool;
    fn amsagv_msgs__msg__Action__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Action>);
    fn amsagv_msgs__msg__Action__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Action>, out_seq: *mut rosidl_runtime_rs::Sequence<Action>) -> bool;
}

// Corresponds to amsagv_msgs__msg__Action
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Action {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub distance: f32,

}



impl Default for Action {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !amsagv_msgs__msg__Action__init(&mut msg as *mut _) {
        panic!("Call to amsagv_msgs__msg__Action__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Action {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amsagv_msgs__msg__Action__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amsagv_msgs__msg__Action__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amsagv_msgs__msg__Action__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Action {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Action where Self: Sized {
  const TYPE_NAME: &'static str = "amsagv_msgs/msg/Action";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__amsagv_msgs__msg__Action() }
  }
}


#[link(name = "amsagv_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__amsagv_msgs__msg__ActionStamped() -> *const std::ffi::c_void;
}

#[link(name = "amsagv_msgs__rosidl_generator_c")]
extern "C" {
    fn amsagv_msgs__msg__ActionStamped__init(msg: *mut ActionStamped) -> bool;
    fn amsagv_msgs__msg__ActionStamped__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ActionStamped>, size: usize) -> bool;
    fn amsagv_msgs__msg__ActionStamped__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ActionStamped>);
    fn amsagv_msgs__msg__ActionStamped__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ActionStamped>, out_seq: *mut rosidl_runtime_rs::Sequence<ActionStamped>) -> bool;
}

// Corresponds to amsagv_msgs__msg__ActionStamped
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActionStamped {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub action: super::super::msg::rmw::Action,

}



impl Default for ActionStamped {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !amsagv_msgs__msg__ActionStamped__init(&mut msg as *mut _) {
        panic!("Call to amsagv_msgs__msg__ActionStamped__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ActionStamped {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amsagv_msgs__msg__ActionStamped__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amsagv_msgs__msg__ActionStamped__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amsagv_msgs__msg__ActionStamped__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ActionStamped {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ActionStamped where Self: Sized {
  const TYPE_NAME: &'static str = "amsagv_msgs/msg/ActionStamped";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__amsagv_msgs__msg__ActionStamped() }
  }
}


#[link(name = "amsagv_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__amsagv_msgs__msg__Actions() -> *const std::ffi::c_void;
}

#[link(name = "amsagv_msgs__rosidl_generator_c")]
extern "C" {
    fn amsagv_msgs__msg__Actions__init(msg: *mut Actions) -> bool;
    fn amsagv_msgs__msg__Actions__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Actions>, size: usize) -> bool;
    fn amsagv_msgs__msg__Actions__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Actions>);
    fn amsagv_msgs__msg__Actions__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Actions>, out_seq: *mut rosidl_runtime_rs::Sequence<Actions>) -> bool;
}

// Corresponds to amsagv_msgs__msg__Actions
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Actions {

    // This member is not documented.
    #[allow(missing_docs)]
    pub actions: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Action>,

}



impl Default for Actions {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !amsagv_msgs__msg__Actions__init(&mut msg as *mut _) {
        panic!("Call to amsagv_msgs__msg__Actions__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Actions {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amsagv_msgs__msg__Actions__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amsagv_msgs__msg__Actions__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amsagv_msgs__msg__Actions__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Actions {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Actions where Self: Sized {
  const TYPE_NAME: &'static str = "amsagv_msgs/msg/Actions";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__amsagv_msgs__msg__Actions() }
  }
}


#[link(name = "amsagv_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__amsagv_msgs__msg__ActionsStamped() -> *const std::ffi::c_void;
}

#[link(name = "amsagv_msgs__rosidl_generator_c")]
extern "C" {
    fn amsagv_msgs__msg__ActionsStamped__init(msg: *mut ActionsStamped) -> bool;
    fn amsagv_msgs__msg__ActionsStamped__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ActionsStamped>, size: usize) -> bool;
    fn amsagv_msgs__msg__ActionsStamped__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ActionsStamped>);
    fn amsagv_msgs__msg__ActionsStamped__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ActionsStamped>, out_seq: *mut rosidl_runtime_rs::Sequence<ActionsStamped>) -> bool;
}

// Corresponds to amsagv_msgs__msg__ActionsStamped
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActionsStamped {

    // This member is not documented.
    #[allow(missing_docs)]
    pub actions: rosidl_runtime_rs::Sequence<super::super::msg::rmw::ActionStamped>,

}



impl Default for ActionsStamped {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !amsagv_msgs__msg__ActionsStamped__init(&mut msg as *mut _) {
        panic!("Call to amsagv_msgs__msg__ActionsStamped__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ActionsStamped {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amsagv_msgs__msg__ActionsStamped__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amsagv_msgs__msg__ActionsStamped__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amsagv_msgs__msg__ActionsStamped__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ActionsStamped {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ActionsStamped where Self: Sized {
  const TYPE_NAME: &'static str = "amsagv_msgs/msg/ActionsStamped";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__amsagv_msgs__msg__ActionsStamped() }
  }
}


#[link(name = "amsagv_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__amsagv_msgs__msg__Line() -> *const std::ffi::c_void;
}

#[link(name = "amsagv_msgs__rosidl_generator_c")]
extern "C" {
    fn amsagv_msgs__msg__Line__init(msg: *mut Line) -> bool;
    fn amsagv_msgs__msg__Line__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Line>, size: usize) -> bool;
    fn amsagv_msgs__msg__Line__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Line>);
    fn amsagv_msgs__msg__Line__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Line>, out_seq: *mut rosidl_runtime_rs::Sequence<Line>) -> bool;
}

// Corresponds to amsagv_msgs__msg__Line
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Line {

    // This member is not documented.
    #[allow(missing_docs)]
    pub values: rosidl_runtime_rs::Sequence<u8>,


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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !amsagv_msgs__msg__Line__init(&mut msg as *mut _) {
        panic!("Call to amsagv_msgs__msg__Line__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Line {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amsagv_msgs__msg__Line__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amsagv_msgs__msg__Line__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amsagv_msgs__msg__Line__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Line {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Line where Self: Sized {
  const TYPE_NAME: &'static str = "amsagv_msgs/msg/Line";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__amsagv_msgs__msg__Line() }
  }
}


#[link(name = "amsagv_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__amsagv_msgs__msg__LineStamped() -> *const std::ffi::c_void;
}

#[link(name = "amsagv_msgs__rosidl_generator_c")]
extern "C" {
    fn amsagv_msgs__msg__LineStamped__init(msg: *mut LineStamped) -> bool;
    fn amsagv_msgs__msg__LineStamped__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LineStamped>, size: usize) -> bool;
    fn amsagv_msgs__msg__LineStamped__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LineStamped>);
    fn amsagv_msgs__msg__LineStamped__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LineStamped>, out_seq: *mut rosidl_runtime_rs::Sequence<LineStamped>) -> bool;
}

// Corresponds to amsagv_msgs__msg__LineStamped
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LineStamped {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub line: super::super::msg::rmw::Line,

}



impl Default for LineStamped {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !amsagv_msgs__msg__LineStamped__init(&mut msg as *mut _) {
        panic!("Call to amsagv_msgs__msg__LineStamped__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LineStamped {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amsagv_msgs__msg__LineStamped__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amsagv_msgs__msg__LineStamped__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amsagv_msgs__msg__LineStamped__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LineStamped {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LineStamped where Self: Sized {
  const TYPE_NAME: &'static str = "amsagv_msgs/msg/LineStamped";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__amsagv_msgs__msg__LineStamped() }
  }
}


#[link(name = "amsagv_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__amsagv_msgs__msg__Tag() -> *const std::ffi::c_void;
}

#[link(name = "amsagv_msgs__rosidl_generator_c")]
extern "C" {
    fn amsagv_msgs__msg__Tag__init(msg: *mut Tag) -> bool;
    fn amsagv_msgs__msg__Tag__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Tag>, size: usize) -> bool;
    fn amsagv_msgs__msg__Tag__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Tag>);
    fn amsagv_msgs__msg__Tag__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Tag>, out_seq: *mut rosidl_runtime_rs::Sequence<Tag>) -> bool;
}

// Corresponds to amsagv_msgs__msg__Tag
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !amsagv_msgs__msg__Tag__init(&mut msg as *mut _) {
        panic!("Call to amsagv_msgs__msg__Tag__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Tag {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amsagv_msgs__msg__Tag__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amsagv_msgs__msg__Tag__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amsagv_msgs__msg__Tag__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Tag {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Tag where Self: Sized {
  const TYPE_NAME: &'static str = "amsagv_msgs/msg/Tag";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__amsagv_msgs__msg__Tag() }
  }
}


#[link(name = "amsagv_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__amsagv_msgs__msg__TagStamped() -> *const std::ffi::c_void;
}

#[link(name = "amsagv_msgs__rosidl_generator_c")]
extern "C" {
    fn amsagv_msgs__msg__TagStamped__init(msg: *mut TagStamped) -> bool;
    fn amsagv_msgs__msg__TagStamped__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TagStamped>, size: usize) -> bool;
    fn amsagv_msgs__msg__TagStamped__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TagStamped>);
    fn amsagv_msgs__msg__TagStamped__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TagStamped>, out_seq: *mut rosidl_runtime_rs::Sequence<TagStamped>) -> bool;
}

// Corresponds to amsagv_msgs__msg__TagStamped
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TagStamped {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tag: super::super::msg::rmw::Tag,

}



impl Default for TagStamped {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !amsagv_msgs__msg__TagStamped__init(&mut msg as *mut _) {
        panic!("Call to amsagv_msgs__msg__TagStamped__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TagStamped {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amsagv_msgs__msg__TagStamped__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amsagv_msgs__msg__TagStamped__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amsagv_msgs__msg__TagStamped__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TagStamped {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TagStamped where Self: Sized {
  const TYPE_NAME: &'static str = "amsagv_msgs/msg/TagStamped";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__amsagv_msgs__msg__TagStamped() }
  }
}


#[link(name = "amsagv_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__amsagv_msgs__msg__Tags() -> *const std::ffi::c_void;
}

#[link(name = "amsagv_msgs__rosidl_generator_c")]
extern "C" {
    fn amsagv_msgs__msg__Tags__init(msg: *mut Tags) -> bool;
    fn amsagv_msgs__msg__Tags__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Tags>, size: usize) -> bool;
    fn amsagv_msgs__msg__Tags__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Tags>);
    fn amsagv_msgs__msg__Tags__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Tags>, out_seq: *mut rosidl_runtime_rs::Sequence<Tags>) -> bool;
}

// Corresponds to amsagv_msgs__msg__Tags
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Tags {

    // This member is not documented.
    #[allow(missing_docs)]
    pub tags: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Tag>,

}



impl Default for Tags {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !amsagv_msgs__msg__Tags__init(&mut msg as *mut _) {
        panic!("Call to amsagv_msgs__msg__Tags__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Tags {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amsagv_msgs__msg__Tags__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amsagv_msgs__msg__Tags__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amsagv_msgs__msg__Tags__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Tags {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Tags where Self: Sized {
  const TYPE_NAME: &'static str = "amsagv_msgs/msg/Tags";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__amsagv_msgs__msg__Tags() }
  }
}


#[link(name = "amsagv_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__amsagv_msgs__msg__TagsStamped() -> *const std::ffi::c_void;
}

#[link(name = "amsagv_msgs__rosidl_generator_c")]
extern "C" {
    fn amsagv_msgs__msg__TagsStamped__init(msg: *mut TagsStamped) -> bool;
    fn amsagv_msgs__msg__TagsStamped__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TagsStamped>, size: usize) -> bool;
    fn amsagv_msgs__msg__TagsStamped__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TagsStamped>);
    fn amsagv_msgs__msg__TagsStamped__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TagsStamped>, out_seq: *mut rosidl_runtime_rs::Sequence<TagsStamped>) -> bool;
}

// Corresponds to amsagv_msgs__msg__TagsStamped
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TagsStamped {

    // This member is not documented.
    #[allow(missing_docs)]
    pub tags: rosidl_runtime_rs::Sequence<super::super::msg::rmw::TagStamped>,

}



impl Default for TagsStamped {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !amsagv_msgs__msg__TagsStamped__init(&mut msg as *mut _) {
        panic!("Call to amsagv_msgs__msg__TagsStamped__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TagsStamped {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amsagv_msgs__msg__TagsStamped__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amsagv_msgs__msg__TagsStamped__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amsagv_msgs__msg__TagsStamped__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TagsStamped {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TagsStamped where Self: Sized {
  const TYPE_NAME: &'static str = "amsagv_msgs/msg/TagsStamped";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__amsagv_msgs__msg__TagsStamped() }
  }
}


