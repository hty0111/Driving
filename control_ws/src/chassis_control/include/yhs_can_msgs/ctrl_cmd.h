// Generated by gencpp from file yhs_can_msgs/ctrl_cmd.msg
// DO NOT EDIT!


#ifndef YHS_CAN_MSGS_MESSAGE_CTRL_CMD_H
#define YHS_CAN_MSGS_MESSAGE_CTRL_CMD_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace yhs_can_msgs
{
template <class ContainerAllocator>
struct ctrl_cmd_
{
  typedef ctrl_cmd_<ContainerAllocator> Type;

  ctrl_cmd_()
    : ctrl_cmd_gear(0)
    , ctrl_cmd_velocity(0.0)
    , ctrl_cmd_steering(0.0)
    , ctrl_cmd_Brake(0)  {
    }
  ctrl_cmd_(const ContainerAllocator& _alloc)
    : ctrl_cmd_gear(0)
    , ctrl_cmd_velocity(0.0)
    , ctrl_cmd_steering(0.0)
    , ctrl_cmd_Brake(0)  {
  (void)_alloc;
    }



   typedef uint8_t _ctrl_cmd_gear_type;
  _ctrl_cmd_gear_type ctrl_cmd_gear;

   typedef float _ctrl_cmd_velocity_type;
  _ctrl_cmd_velocity_type ctrl_cmd_velocity;

   typedef float _ctrl_cmd_steering_type;
  _ctrl_cmd_steering_type ctrl_cmd_steering;

   typedef uint8_t _ctrl_cmd_Brake_type;
  _ctrl_cmd_Brake_type ctrl_cmd_Brake;





  typedef boost::shared_ptr< ::yhs_can_msgs::ctrl_cmd_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::yhs_can_msgs::ctrl_cmd_<ContainerAllocator> const> ConstPtr;

}; // struct ctrl_cmd_

typedef ::yhs_can_msgs::ctrl_cmd_<std::allocator<void> > ctrl_cmd;

typedef boost::shared_ptr< ::yhs_can_msgs::ctrl_cmd > ctrl_cmdPtr;
typedef boost::shared_ptr< ::yhs_can_msgs::ctrl_cmd const> ctrl_cmdConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::yhs_can_msgs::ctrl_cmd_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::yhs_can_msgs::ctrl_cmd_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::yhs_can_msgs::ctrl_cmd_<ContainerAllocator1> & lhs, const ::yhs_can_msgs::ctrl_cmd_<ContainerAllocator2> & rhs)
{
  return lhs.ctrl_cmd_gear == rhs.ctrl_cmd_gear &&
    lhs.ctrl_cmd_velocity == rhs.ctrl_cmd_velocity &&
    lhs.ctrl_cmd_steering == rhs.ctrl_cmd_steering &&
    lhs.ctrl_cmd_Brake == rhs.ctrl_cmd_Brake;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::yhs_can_msgs::ctrl_cmd_<ContainerAllocator1> & lhs, const ::yhs_can_msgs::ctrl_cmd_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace yhs_can_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::yhs_can_msgs::ctrl_cmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::yhs_can_msgs::ctrl_cmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::yhs_can_msgs::ctrl_cmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::yhs_can_msgs::ctrl_cmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::yhs_can_msgs::ctrl_cmd_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::yhs_can_msgs::ctrl_cmd_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::yhs_can_msgs::ctrl_cmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e5325173f5ea4ea0d9c257b7db42aa1d";
  }

  static const char* value(const ::yhs_can_msgs::ctrl_cmd_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe5325173f5ea4ea0ULL;
  static const uint64_t static_value2 = 0xd9c257b7db42aa1dULL;
};

template<class ContainerAllocator>
struct DataType< ::yhs_can_msgs::ctrl_cmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "yhs_can_msgs/ctrl_cmd";
  }

  static const char* value(const ::yhs_can_msgs::ctrl_cmd_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::yhs_can_msgs::ctrl_cmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8    ctrl_cmd_gear\n"
"float32  ctrl_cmd_velocity\n"
"float32  ctrl_cmd_steering\n"
"uint8    ctrl_cmd_Brake\n"
;
  }

  static const char* value(const ::yhs_can_msgs::ctrl_cmd_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::yhs_can_msgs::ctrl_cmd_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.ctrl_cmd_gear);
      stream.next(m.ctrl_cmd_velocity);
      stream.next(m.ctrl_cmd_steering);
      stream.next(m.ctrl_cmd_Brake);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ctrl_cmd_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::yhs_can_msgs::ctrl_cmd_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::yhs_can_msgs::ctrl_cmd_<ContainerAllocator>& v)
  {
    s << indent << "ctrl_cmd_gear: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ctrl_cmd_gear);
    s << indent << "ctrl_cmd_velocity: ";
    Printer<float>::stream(s, indent + "  ", v.ctrl_cmd_velocity);
    s << indent << "ctrl_cmd_steering: ";
    Printer<float>::stream(s, indent + "  ", v.ctrl_cmd_steering);
    s << indent << "ctrl_cmd_Brake: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ctrl_cmd_Brake);
  }
};

} // namespace message_operations
} // namespace ros

#endif // YHS_CAN_MSGS_MESSAGE_CTRL_CMD_H