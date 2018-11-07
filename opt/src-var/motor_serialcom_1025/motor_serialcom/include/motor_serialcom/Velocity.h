/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by genmsg_cpp from file /home/zsh/catkin/src/openni_move/msg/Velocity.msg
 *
 */


#ifndef DLUT_MOVE_BASE_MESSAGE_VELOCITY_H
#define DLUT_MOVE_BASE_MESSAGE_VELOCITY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dlut_move_base
{
template <class ContainerAllocator>
struct Velocity_
{
  typedef Velocity_<ContainerAllocator> Type;

  Velocity_()
    : linear(0.0)
    , angular(0.0)  {
    }
  Velocity_(const ContainerAllocator& _alloc)
    : linear(0.0)
    , angular(0.0)  {
    }



   typedef float _linear_type;
  _linear_type linear;

   typedef float _angular_type;
  _angular_type angular;




  typedef boost::shared_ptr< ::dlut_move_base::Velocity_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dlut_move_base::Velocity_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct Velocity_

typedef ::dlut_move_base::Velocity_<std::allocator<void> > Velocity;

typedef boost::shared_ptr< ::dlut_move_base::Velocity > VelocityPtr;
typedef boost::shared_ptr< ::dlut_move_base::Velocity const> VelocityConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dlut_move_base::Velocity_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dlut_move_base::Velocity_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dlut_move_base

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'dlut_move_base': ['/home/zsh/catkin/src/openni_move/msg'], 'std_msgs': ['/opt/ros/groovy/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dlut_move_base::Velocity_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dlut_move_base::Velocity_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dlut_move_base::Velocity_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dlut_move_base::Velocity_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dlut_move_base::Velocity_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dlut_move_base::Velocity_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dlut_move_base::Velocity_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9d5c2dcd348ac8f76ce2a4307bd63a13";
  }

  static const char* value(const ::dlut_move_base::Velocity_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9d5c2dcd348ac8f7ULL;
  static const uint64_t static_value2 = 0x6ce2a4307bd63a13ULL;
};

template<class ContainerAllocator>
struct DataType< ::dlut_move_base::Velocity_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dlut_move_base/Velocity";
  }

  static const char* value(const ::dlut_move_base::Velocity_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dlut_move_base::Velocity_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 linear\n\
float32 angular\n\
";
  }

  static const char* value(const ::dlut_move_base::Velocity_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dlut_move_base::Velocity_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.linear);
      stream.next(m.angular);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct Velocity_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dlut_move_base::Velocity_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dlut_move_base::Velocity_<ContainerAllocator>& v)
  {
    s << indent << "linear: ";
    Printer<float>::stream(s, indent + "  ", v.linear);
    s << indent << "angular: ";
    Printer<float>::stream(s, indent + "  ", v.angular);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DLUT_MOVE_BASE_MESSAGE_VELOCITY_H