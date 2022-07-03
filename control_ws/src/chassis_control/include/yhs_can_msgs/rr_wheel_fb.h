// Generated by gencpp from file yhs_can_msgs/rr_wheel_fb.msg
// DO NOT EDIT!


#ifndef YHS_CAN_MSGS_MESSAGE_RR_WHEEL_FB_H
#define YHS_CAN_MSGS_MESSAGE_RR_WHEEL_FB_H


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
struct rr_wheel_fb_
{
  typedef rr_wheel_fb_<ContainerAllocator> Type;

  rr_wheel_fb_()
    : rr_wheel_fb_velocity(0.0)
    , rr_wheel_fb_pulse(0)  {
    }
  rr_wheel_fb_(const ContainerAllocator& _alloc)
    : rr_wheel_fb_velocity(0.0)
    , rr_wheel_fb_pulse(0)  {
  (void)_alloc;
    }



   typedef float _rr_wheel_fb_velocity_type;
  _rr_wheel_fb_velocity_type rr_wheel_fb_velocity;

   typedef int32_t _rr_wheel_fb_pulse_type;
  _rr_wheel_fb_pulse_type rr_wheel_fb_pulse;





  typedef boost::shared_ptr< ::yhs_can_msgs::rr_wheel_fb_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::yhs_can_msgs::rr_wheel_fb_<ContainerAllocator> const> ConstPtr;

}; // struct rr_wheel_fb_

typedef ::yhs_can_msgs::rr_wheel_fb_<std::allocator<void> > rr_wheel_fb;

typedef boost::shared_ptr< ::yhs_can_msgs::rr_wheel_fb > rr_wheel_fbPtr;
typedef boost::shared_ptr< ::yhs_can_msgs::rr_wheel_fb const> rr_wheel_fbConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::yhs_can_msgs::rr_wheel_fb_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::yhs_can_msgs::rr_wheel_fb_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::yhs_can_msgs::rr_wheel_fb_<ContainerAllocator1> & lhs, const ::yhs_can_msgs::rr_wheel_fb_<ContainerAllocator2> & rhs)
{
  return lhs.rr_wheel_fb_velocity == rhs.rr_wheel_fb_velocity &&
    lhs.rr_wheel_fb_pulse == rhs.rr_wheel_fb_pulse;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::yhs_can_msgs::rr_wheel_fb_<ContainerAllocator1> & lhs, const ::yhs_can_msgs::rr_wheel_fb_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace yhs_can_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::yhs_can_msgs::rr_wheel_fb_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::yhs_can_msgs::rr_wheel_fb_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::yhs_can_msgs::rr_wheel_fb_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::yhs_can_msgs::rr_wheel_fb_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::yhs_can_msgs::rr_wheel_fb_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::yhs_can_msgs::rr_wheel_fb_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::yhs_can_msgs::rr_wheel_fb_<ContainerAllocator> >
{
  static const char* value()
  {
    return "324129a5017e82d81661c682ea2777a3";
  }

  static const char* value(const ::yhs_can_msgs::rr_wheel_fb_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x324129a5017e82d8ULL;
  static const uint64_t static_value2 = 0x1661c682ea2777a3ULL;
};

template<class ContainerAllocator>
struct DataType< ::yhs_can_msgs::rr_wheel_fb_<ContainerAllocator> >
{
  static const char* value()
  {
    return "yhs_can_msgs/rr_wheel_fb";
  }

  static const char* value(const ::yhs_can_msgs::rr_wheel_fb_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::yhs_can_msgs::rr_wheel_fb_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32    rr_wheel_fb_velocity\n"
"int32      rr_wheel_fb_pulse\n"
;
  }

  static const char* value(const ::yhs_can_msgs::rr_wheel_fb_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::yhs_can_msgs::rr_wheel_fb_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.rr_wheel_fb_velocity);
      stream.next(m.rr_wheel_fb_pulse);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct rr_wheel_fb_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::yhs_can_msgs::rr_wheel_fb_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::yhs_can_msgs::rr_wheel_fb_<ContainerAllocator>& v)
  {
    s << indent << "rr_wheel_fb_velocity: ";
    Printer<float>::stream(s, indent + "  ", v.rr_wheel_fb_velocity);
    s << indent << "rr_wheel_fb_pulse: ";
    Printer<int32_t>::stream(s, indent + "  ", v.rr_wheel_fb_pulse);
  }
};

} // namespace message_operations
} // namespace ros

#endif // YHS_CAN_MSGS_MESSAGE_RR_WHEEL_FB_H