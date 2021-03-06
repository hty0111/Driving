// Generated by gencpp from file yhs_can_msgs/io_cmd.msg
// DO NOT EDIT!


#ifndef YHS_CAN_MSGS_MESSAGE_IO_CMD_H
#define YHS_CAN_MSGS_MESSAGE_IO_CMD_H


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
struct io_cmd_
{
  typedef io_cmd_<ContainerAllocator> Type;

  io_cmd_()
    : io_cmd_enable(false)
    , io_cmd_upper_beam_headlamp(false)
    , io_cmd_turn_lamp(0)
    , io_cmd_speaker(false)  {
    }
  io_cmd_(const ContainerAllocator& _alloc)
    : io_cmd_enable(false)
    , io_cmd_upper_beam_headlamp(false)
    , io_cmd_turn_lamp(0)
    , io_cmd_speaker(false)  {
  (void)_alloc;
    }



   typedef uint8_t _io_cmd_enable_type;
  _io_cmd_enable_type io_cmd_enable;

   typedef uint8_t _io_cmd_upper_beam_headlamp_type;
  _io_cmd_upper_beam_headlamp_type io_cmd_upper_beam_headlamp;

   typedef uint8_t _io_cmd_turn_lamp_type;
  _io_cmd_turn_lamp_type io_cmd_turn_lamp;

   typedef uint8_t _io_cmd_speaker_type;
  _io_cmd_speaker_type io_cmd_speaker;





  typedef boost::shared_ptr< ::yhs_can_msgs::io_cmd_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::yhs_can_msgs::io_cmd_<ContainerAllocator> const> ConstPtr;

}; // struct io_cmd_

typedef ::yhs_can_msgs::io_cmd_<std::allocator<void> > io_cmd;

typedef boost::shared_ptr< ::yhs_can_msgs::io_cmd > io_cmdPtr;
typedef boost::shared_ptr< ::yhs_can_msgs::io_cmd const> io_cmdConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::yhs_can_msgs::io_cmd_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::yhs_can_msgs::io_cmd_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::yhs_can_msgs::io_cmd_<ContainerAllocator1> & lhs, const ::yhs_can_msgs::io_cmd_<ContainerAllocator2> & rhs)
{
  return lhs.io_cmd_enable == rhs.io_cmd_enable &&
    lhs.io_cmd_upper_beam_headlamp == rhs.io_cmd_upper_beam_headlamp &&
    lhs.io_cmd_turn_lamp == rhs.io_cmd_turn_lamp &&
    lhs.io_cmd_speaker == rhs.io_cmd_speaker;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::yhs_can_msgs::io_cmd_<ContainerAllocator1> & lhs, const ::yhs_can_msgs::io_cmd_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace yhs_can_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::yhs_can_msgs::io_cmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::yhs_can_msgs::io_cmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::yhs_can_msgs::io_cmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::yhs_can_msgs::io_cmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::yhs_can_msgs::io_cmd_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::yhs_can_msgs::io_cmd_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::yhs_can_msgs::io_cmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e3863e36a9e91d857f6ff6d329c8c283";
  }

  static const char* value(const ::yhs_can_msgs::io_cmd_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe3863e36a9e91d85ULL;
  static const uint64_t static_value2 = 0x7f6ff6d329c8c283ULL;
};

template<class ContainerAllocator>
struct DataType< ::yhs_can_msgs::io_cmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "yhs_can_msgs/io_cmd";
  }

  static const char* value(const ::yhs_can_msgs::io_cmd_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::yhs_can_msgs::io_cmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool	 io_cmd_enable\n"
"bool	 io_cmd_upper_beam_headlamp\n"
"uint8	 io_cmd_turn_lamp\n"
"bool	 io_cmd_speaker\n"
;
  }

  static const char* value(const ::yhs_can_msgs::io_cmd_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::yhs_can_msgs::io_cmd_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.io_cmd_enable);
      stream.next(m.io_cmd_upper_beam_headlamp);
      stream.next(m.io_cmd_turn_lamp);
      stream.next(m.io_cmd_speaker);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct io_cmd_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::yhs_can_msgs::io_cmd_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::yhs_can_msgs::io_cmd_<ContainerAllocator>& v)
  {
    s << indent << "io_cmd_enable: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.io_cmd_enable);
    s << indent << "io_cmd_upper_beam_headlamp: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.io_cmd_upper_beam_headlamp);
    s << indent << "io_cmd_turn_lamp: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.io_cmd_turn_lamp);
    s << indent << "io_cmd_speaker: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.io_cmd_speaker);
  }
};

} // namespace message_operations
} // namespace ros

#endif // YHS_CAN_MSGS_MESSAGE_IO_CMD_H
