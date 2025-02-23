// Copyright (c) 2023 StressOverflow
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef PERCEPTION_ASR_STRESSOVERFLOW__DETECTEDPERSONMONITOR_HPP_
#define PERCEPTION_ASR_STRESSOVERFLOW__DETECTEDPERSONMONITOR_HPP_

#include <tf2_ros/buffer.h>
#include <tf2_ros/transform_listener.h>

#include <memory>

#include "sensor_msgs/msg/laser_scan.hpp"
#include "visualization_msgs/msg/marker.hpp"

#include "rclcpp/rclcpp.hpp"

namespace perception_asr_stressoverflow
{

class DetectedPersonMonitor : public rclcpp::Node
{
public:
  DetectedPersonMonitor();

private:
  void control_cycle();
  rclcpp::TimerBase::SharedPtr timer_;

  tf2::BufferCore tf_buffer_;
  tf2_ros::TransformListener tf_listener_;

  rclcpp::Publisher<visualization_msgs::msg::Marker>::SharedPtr marker_pub_;
};

}  // namespace perception_asr_stressoverflow

#endif  // PERCEPTION_ASR_STRESSOVERFLOW__DETECTEDPERSONMONITOR_HPP_
