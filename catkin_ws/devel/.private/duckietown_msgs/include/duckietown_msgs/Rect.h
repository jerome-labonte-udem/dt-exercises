// Generated by gencpp from file duckietown_msgs/Rect.msg
// DO NOT EDIT!


#ifndef DUCKIETOWN_MSGS_MESSAGE_RECT_H
#define DUCKIETOWN_MSGS_MESSAGE_RECT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace duckietown_msgs
{
template <class ContainerAllocator>
struct Rect_
{
  typedef Rect_<ContainerAllocator> Type;

  Rect_()
    : x(0)
    , y(0)
    , w(0)
    , h(0)  {
    }
  Rect_(const ContainerAllocator& _alloc)
    : x(0)
    , y(0)
    , w(0)
    , h(0)  {
  (void)_alloc;
    }



   typedef int32_t _x_type;
  _x_type x;

   typedef int32_t _y_type;
  _y_type y;

   typedef int32_t _w_type;
  _w_type w;

   typedef int32_t _h_type;
  _h_type h;





  typedef boost::shared_ptr< ::duckietown_msgs::Rect_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::duckietown_msgs::Rect_<ContainerAllocator> const> ConstPtr;

}; // struct Rect_

typedef ::duckietown_msgs::Rect_<std::allocator<void> > Rect;

typedef boost::shared_ptr< ::duckietown_msgs::Rect > RectPtr;
typedef boost::shared_ptr< ::duckietown_msgs::Rect const> RectConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::duckietown_msgs::Rect_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::duckietown_msgs::Rect_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::duckietown_msgs::Rect_<ContainerAllocator1> & lhs, const ::duckietown_msgs::Rect_<ContainerAllocator2> & rhs)
{
  return lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.w == rhs.w &&
    lhs.h == rhs.h;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::duckietown_msgs::Rect_<ContainerAllocator1> & lhs, const ::duckietown_msgs::Rect_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace duckietown_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::Rect_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::Rect_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::Rect_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::Rect_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::Rect_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::Rect_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::duckietown_msgs::Rect_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4a7147213b29db1bb19b0427bbb901ac";
  }

  static const char* value(const ::duckietown_msgs::Rect_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4a7147213b29db1bULL;
  static const uint64_t static_value2 = 0xb19b0427bbb901acULL;
};

template<class ContainerAllocator>
struct DataType< ::duckietown_msgs::Rect_<ContainerAllocator> >
{
  static const char* value()
  {
    return "duckietown_msgs/Rect";
  }

  static const char* value(const ::duckietown_msgs::Rect_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::duckietown_msgs::Rect_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# all in pixel coordinate\n"
"# (x, y, w, h) defines a rectangle\n"
"int32 x\n"
"int32 y\n"
"int32 w\n"
"int32 h\n"
;
  }

  static const char* value(const ::duckietown_msgs::Rect_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::duckietown_msgs::Rect_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.w);
      stream.next(m.h);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Rect_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::duckietown_msgs::Rect_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::duckietown_msgs::Rect_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<int32_t>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<int32_t>::stream(s, indent + "  ", v.y);
    s << indent << "w: ";
    Printer<int32_t>::stream(s, indent + "  ", v.w);
    s << indent << "h: ";
    Printer<int32_t>::stream(s, indent + "  ", v.h);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DUCKIETOWN_MSGS_MESSAGE_RECT_H