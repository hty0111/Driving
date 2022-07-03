// Generated by gencpp from file yhs_can_msgs/odo_fb.msg
// DO NOT EDIT!


#ifndef YHS_CAN_MSGS_MESSAGE_ODO_FB_H
#define YHS_CAN_MSGS_MESSAGE_ODO_FB_H


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
struct odo_fb_
{
  typedef odo_fb_<ContainerAllocator> Type;

  odo_fb_()
    : odo_fb_accumulative_mileage(0.0)
    , odo_fb_accumulative_angular(0.0)  {
    }
  odo_fb_(const ContainerAllocator& _alloc)
    : odo_fb_accumulative_mileage(0.0)
    , odo_fb_accumulative_angular(0.0)  {
  (void)_alloc;
    }



   typedef float _odo_fb_accumulative_mileage_type;
  _odo_fb_accumulative_mileage_type odo_fb_accumulative_mileage;

   typedef float _odo_fb_accumulative_angular_type;
  _odo_fb_accumulative_angular_type odo_fb_accumulative_angular;





  typedef boost::shared_ptr< ::yhs_can_msgs::odo_fb_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::yhs_can_msgs::odo_fb_<ContainerAllocator> const> ConstPtr;

}; // struct odo_fb_

typedef ::yhs_can_msgs::odo_fb_<std::allocator<void> > odo_fb;

typedef boost::shared_ptr< ::yhs_can_msgs::odo_fb > odo_fbPtr;
typedef boost::shared_ptr< ::yhs_can_msgs::odo_fb const> odo_fbConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::yhs_can_msgs::odo_fb_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::yhs_can_msgs::odo_fb_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::yhs_can_msgs::odo_fb_<ContainerAllocator1> & lhs, const ::yhs_can_msgs::odo_fb_<ContainerAllocator2> & rhs)
{
  return lhs.odo_fb_accumulative_mileage == rhs.odo_fb_accumulative_mileage &&
    lhs.odo_fb_accumulative_angular == rhs.odo_fb_accumulative_angular;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::yhs_can_msgs::odo_fb_<ContainerAllocator1> & lhs, const ::yhs_can_msgs::odo_fb_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace yhs_can_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::yhs_can_msgs::odo_fb_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::yhs_can_msgs::odo_fb_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::yhs_can_msgs::odo_fb_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::yhs_can_msgs::odo_fb_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::yhs_can_msgs::odo_fb_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::yhs_can_msgs::odo_fb_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::yhs_can_msgs::odo_fb_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1f2b11cdb6b794cf8847471608f0a5ec";
  }

  static const char* value(const ::yhs_can_msgs::odo_fb_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1f2b11cdb6b794cfULL;
  static const uint64_t static_value2 = 0x8847471608f0a5ecULL;
};

template<class ContainerAllocator>
struct DataType< ::yhs_can_msgs::odo_fb_<ContainerAllocator> >
{
  static const char* value()
  {
    return "yhs_can_msgs/odo_fb";
  }

  static const char* value(const ::yhs_can_msgs::odo_fb_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::yhs_can_msgs::odo_fb_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32  odo_fb_accumulative_mileage\n"
"float32  odo_fb_accumulative_angular\n"
;
  }

  static const char* value(const ::yhs_can_msgs::odo_fb_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::yhs_can_msgs::odo_fb_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.odo_fb_accumulative_mileage);
      stream.next(m.odo_fb_accumulative_angular);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct odo_fb_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::yhs_can_msgs::odo_fb_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::yhs_can_msgs::odo_fb_<ContainerAllocator>& v)
  {
    s << indent << "odo_fb_accumulative_mileage: ";
    Printer<float>::stream(s, indent + "  ", v.odo_fb_accumulative_mileage);
    s << indent << "odo_fb_accumulative_angular: ";
    Printer<float>::stream(s, indent + "  ", v.odo_fb_accumulative_angular);
  }
};

} // namespace message_operations
} // namespace ros

#endif // YHS_CAN_MSGS_MESSAGE_ODO_FB_H
