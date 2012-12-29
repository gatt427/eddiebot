/* Auto-generated by genmsg_cpp for file /home/paralax2/fuerte_workspace/sandbox/eddiebot/eddiebot_node/msg/EddieSensorState.msg */
#ifndef EDDIEBOT_NODE_MESSAGE_EDDIESENSORSTATE_H
#define EDDIEBOT_NODE_MESSAGE_EDDIESENSORSTATE_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "std_msgs/Header.h"

namespace eddiebot_node
{
template <class ContainerAllocator>
struct EddieSensorState_ {
  typedef EddieSensorState_<ContainerAllocator> Type;

  EddieSensorState_()
  : header()
  , bumps_wheeldrops(0)
  , wall(false)
  , cliff_left(false)
  , cliff_front_left(false)
  , cliff_front_right(false)
  , cliff_right(false)
  , virtual_wall(false)
  , motor_overcurrents(0)
  , dirt_detector_left(0)
  , dirt_detector_right(0)
  , remote_opcode(0)
  , buttons(0)
  , distance(0)
  , angle(0)
  , charging_state(0)
  , voltage(0)
  , current(0)
  , temperature(0)
  , charge(0)
  , capacity(0)
  {
  }

  EddieSensorState_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , bumps_wheeldrops(0)
  , wall(false)
  , cliff_left(false)
  , cliff_front_left(false)
  , cliff_front_right(false)
  , cliff_right(false)
  , virtual_wall(false)
  , motor_overcurrents(0)
  , dirt_detector_left(0)
  , dirt_detector_right(0)
  , remote_opcode(0)
  , buttons(0)
  , distance(0)
  , angle(0)
  , charging_state(0)
  , voltage(0)
  , current(0)
  , temperature(0)
  , charge(0)
  , capacity(0)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef uint8_t _bumps_wheeldrops_type;
  uint8_t bumps_wheeldrops;

  typedef uint8_t _wall_type;
  uint8_t wall;

  typedef uint8_t _cliff_left_type;
  uint8_t cliff_left;

  typedef uint8_t _cliff_front_left_type;
  uint8_t cliff_front_left;

  typedef uint8_t _cliff_front_right_type;
  uint8_t cliff_front_right;

  typedef uint8_t _cliff_right_type;
  uint8_t cliff_right;

  typedef uint8_t _virtual_wall_type;
  uint8_t virtual_wall;

  typedef uint8_t _motor_overcurrents_type;
  uint8_t motor_overcurrents;

  typedef uint8_t _dirt_detector_left_type;
  uint8_t dirt_detector_left;

  typedef uint8_t _dirt_detector_right_type;
  uint8_t dirt_detector_right;

  typedef uint8_t _remote_opcode_type;
  uint8_t remote_opcode;

  typedef uint8_t _buttons_type;
  uint8_t buttons;

  typedef int16_t _distance_type;
  int16_t distance;

  typedef int16_t _angle_type;
  int16_t angle;

  typedef uint8_t _charging_state_type;
  uint8_t charging_state;

  typedef uint16_t _voltage_type;
  uint16_t voltage;

  typedef int16_t _current_type;
  int16_t current;

  typedef int8_t _temperature_type;
  int8_t temperature;

  typedef uint16_t _charge_type;
  uint16_t charge;

  typedef uint16_t _capacity_type;
  uint16_t capacity;

  enum { CHARGING_NOT_CHARGING = 0 };
  enum { CHARGING_CHARGING_RECOVERY = 1 };
  enum { CHARGING_CHARGING = 2 };
  enum { CHARGING_TRICKLE_CHARGING = 3 };
  enum { CHARGING_WAITING = 4 };
  enum { CHARGING_CHARGING_ERROR = 5 };

  typedef boost::shared_ptr< ::eddiebot_node::EddieSensorState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::eddiebot_node::EddieSensorState_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct EddieSensorState
typedef  ::eddiebot_node::EddieSensorState_<std::allocator<void> > EddieSensorState;

typedef boost::shared_ptr< ::eddiebot_node::EddieSensorState> EddieSensorStatePtr;
typedef boost::shared_ptr< ::eddiebot_node::EddieSensorState const> EddieSensorStateConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::eddiebot_node::EddieSensorState_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::eddiebot_node::EddieSensorState_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace eddiebot_node

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::eddiebot_node::EddieSensorState_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::eddiebot_node::EddieSensorState_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::eddiebot_node::EddieSensorState_<ContainerAllocator> > {
  static const char* value() 
  {
    return "9e8632c0937537603a670e96e85cd991";
  }

  static const char* value(const  ::eddiebot_node::EddieSensorState_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x9e8632c093753760ULL;
  static const uint64_t static_value2 = 0x3a670e96e85cd991ULL;
};

template<class ContainerAllocator>
struct DataType< ::eddiebot_node::EddieSensorState_<ContainerAllocator> > {
  static const char* value() 
  {
    return "eddiebot_node/EddieSensorState";
  }

  static const char* value(const  ::eddiebot_node::EddieSensorState_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::eddiebot_node::EddieSensorState_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
\n\
uint8 CHARGING_NOT_CHARGING = 0\n\
uint8 CHARGING_CHARGING_RECOVERY = 1\n\
uint8 CHARGING_CHARGING = 2\n\
uint8 CHARGING_TRICKLE_CHARGING = 3\n\
uint8 CHARGING_WAITING = 4 \n\
uint8 CHARGING_CHARGING_ERROR = 5\n\
\n\
uint8 bumps_wheeldrops\n\
bool wall\n\
bool cliff_left\n\
bool cliff_front_left\n\
bool cliff_front_right\n\
bool cliff_right\n\
bool virtual_wall\n\
uint8 motor_overcurrents\n\
uint8 dirt_detector_left  #roomba_only\n\
uint8 dirt_detector_right #roomba_only\n\
uint8 remote_opcode\n\
uint8 buttons\n\
int16 distance  # mm\n\
int16 angle # degrees\n\
uint8 charging_state\n\
uint16 voltage  # mV\n\
int16 current  # mA\n\
int8 temperature  # C\n\
uint16 charge  # mAh\n\
uint16 capacity  # mAh\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
";
  }

  static const char* value(const  ::eddiebot_node::EddieSensorState_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::eddiebot_node::EddieSensorState_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::eddiebot_node::EddieSensorState_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::eddiebot_node::EddieSensorState_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.bumps_wheeldrops);
    stream.next(m.wall);
    stream.next(m.cliff_left);
    stream.next(m.cliff_front_left);
    stream.next(m.cliff_front_right);
    stream.next(m.cliff_right);
    stream.next(m.virtual_wall);
    stream.next(m.motor_overcurrents);
    stream.next(m.dirt_detector_left);
    stream.next(m.dirt_detector_right);
    stream.next(m.remote_opcode);
    stream.next(m.buttons);
    stream.next(m.distance);
    stream.next(m.angle);
    stream.next(m.charging_state);
    stream.next(m.voltage);
    stream.next(m.current);
    stream.next(m.temperature);
    stream.next(m.charge);
    stream.next(m.capacity);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct EddieSensorState_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::eddiebot_node::EddieSensorState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::eddiebot_node::EddieSensorState_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "bumps_wheeldrops: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.bumps_wheeldrops);
    s << indent << "wall: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.wall);
    s << indent << "cliff_left: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cliff_left);
    s << indent << "cliff_front_left: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cliff_front_left);
    s << indent << "cliff_front_right: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cliff_front_right);
    s << indent << "cliff_right: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cliff_right);
    s << indent << "virtual_wall: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.virtual_wall);
    s << indent << "motor_overcurrents: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.motor_overcurrents);
    s << indent << "dirt_detector_left: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.dirt_detector_left);
    s << indent << "dirt_detector_right: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.dirt_detector_right);
    s << indent << "remote_opcode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.remote_opcode);
    s << indent << "buttons: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.buttons);
    s << indent << "distance: ";
    Printer<int16_t>::stream(s, indent + "  ", v.distance);
    s << indent << "angle: ";
    Printer<int16_t>::stream(s, indent + "  ", v.angle);
    s << indent << "charging_state: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.charging_state);
    s << indent << "voltage: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.voltage);
    s << indent << "current: ";
    Printer<int16_t>::stream(s, indent + "  ", v.current);
    s << indent << "temperature: ";
    Printer<int8_t>::stream(s, indent + "  ", v.temperature);
    s << indent << "charge: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.charge);
    s << indent << "capacity: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.capacity);
  }
};


} // namespace message_operations
} // namespace ros

#endif // EDDIEBOT_NODE_MESSAGE_EDDIESENSORSTATE_H
