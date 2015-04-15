/*
 * Copyright 2015 Aldebaran
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
*/

/**
* LOCAL includes
*/
#include "float.hpp"

namespace alros
{
namespace publisher
{

FloatPublisher::FloatPublisher( const std::string& topic ):
  BasePublisher( topic )
{}

void FloatPublisher::publish( const std_msgs::Float32& msg )
{
  pub_.publish( msg );
}

void FloatPublisher::reset( ros::NodeHandle& nh )
{
  pub_ = nh.advertise< std_msgs::Float32>( topic_, 10 );
  is_initialized_ = true;
}

} //publisher
} // alros
