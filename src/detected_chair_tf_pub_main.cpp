// Copyright 2021 (c) StressOverflow
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

#include <memory>

#include "perception_asr_stressoverflow/DetectedChairTfPub.hpp"

#include "rclcpp/rclcpp.hpp"

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);

  auto detected_chair_tf_pub =
    std::make_shared<perception_asr_stressoverflow::DetectedChairTfPub>();

  rclcpp::spin(detected_chair_tf_pub);

  rclcpp::shutdown();

  return 0;
}
