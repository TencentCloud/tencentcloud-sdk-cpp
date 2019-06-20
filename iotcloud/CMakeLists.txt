#
# Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(iotcloud_public_header
  include/tencentcloud/iotcloud/v20180614/IotcloudClient.h
  )

set(iotcloud_public_header_model
  include/tencentcloud/iotcloud/v20180614/model/PublishMessageRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DeleteProductRequest.h
  include/tencentcloud/iotcloud/v20180614/model/UpdateDeviceShadowResponse.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeTasksRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DisableTopicRuleResponse.h
  include/tencentcloud/iotcloud/v20180614/model/ReplaceTopicRuleRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DeleteTopicRuleRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeMultiDevicesRequest.h
  include/tencentcloud/iotcloud/v20180614/model/MultiDevicesInfo.h
  include/tencentcloud/iotcloud/v20180614/model/PublishAsDeviceRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeDeviceClientKeyRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeTaskResponse.h
  include/tencentcloud/iotcloud/v20180614/model/CancelTaskRequest.h
  include/tencentcloud/iotcloud/v20180614/model/PublishToDeviceResponse.h
  include/tencentcloud/iotcloud/v20180614/model/CreateTaskResponse.h
  include/tencentcloud/iotcloud/v20180614/model/BatchPublishMessage.h
  include/tencentcloud/iotcloud/v20180614/model/BatchUpdateShadow.h
  include/tencentcloud/iotcloud/v20180614/model/Filter.h
  include/tencentcloud/iotcloud/v20180614/model/DeleteDeviceRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DeleteProductResponse.h
  include/tencentcloud/iotcloud/v20180614/model/ResetDeviceStateResponse.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeMultiDevTaskResponse.h
  include/tencentcloud/iotcloud/v20180614/model/TopicRulePayload.h
  include/tencentcloud/iotcloud/v20180614/model/UpdateTopicPolicyRequest.h
  include/tencentcloud/iotcloud/v20180614/model/ProductInfo.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeDevicesResponse.h
  include/tencentcloud/iotcloud/v20180614/model/DeviceTag.h
  include/tencentcloud/iotcloud/v20180614/model/DeleteTopicRuleResponse.h
  include/tencentcloud/iotcloud/v20180614/model/ProductProperties.h
  include/tencentcloud/iotcloud/v20180614/model/DeleteLoraDeviceResponse.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeDeviceRequest.h
  include/tencentcloud/iotcloud/v20180614/model/CreateLoraDeviceRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeTaskRequest.h
  include/tencentcloud/iotcloud/v20180614/model/Task.h
  include/tencentcloud/iotcloud/v20180614/model/ResetDeviceStateRequest.h
  include/tencentcloud/iotcloud/v20180614/model/CreateTopicPolicyRequest.h
  include/tencentcloud/iotcloud/v20180614/model/PublishMessageResponse.h
  include/tencentcloud/iotcloud/v20180614/model/PublishToDeviceRequest.h
  include/tencentcloud/iotcloud/v20180614/model/ProductMetadata.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeLoraDeviceResponse.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeTasksResponse.h
  include/tencentcloud/iotcloud/v20180614/model/EnableTopicRuleResponse.h
  include/tencentcloud/iotcloud/v20180614/model/CreateProductResponse.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeProductsRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeDevicesRequest.h
  include/tencentcloud/iotcloud/v20180614/model/BrokerSubscribe.h
  include/tencentcloud/iotcloud/v20180614/model/CreateTaskRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DisableTopicRuleRequest.h
  include/tencentcloud/iotcloud/v20180614/model/CreateTopicPolicyResponse.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeMultiDevTaskRequest.h
  include/tencentcloud/iotcloud/v20180614/model/CreateTopicRuleResponse.h
  include/tencentcloud/iotcloud/v20180614/model/CancelTaskResponse.h
  include/tencentcloud/iotcloud/v20180614/model/CreateDeviceResponse.h
  include/tencentcloud/iotcloud/v20180614/model/CreateTopicRuleRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DeleteLoraDeviceRequest.h
  include/tencentcloud/iotcloud/v20180614/model/CreateDeviceRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeProductsResponse.h
  include/tencentcloud/iotcloud/v20180614/model/UpdateDeviceShadowRequest.h
  include/tencentcloud/iotcloud/v20180614/model/CreateProductRequest.h
  include/tencentcloud/iotcloud/v20180614/model/Attribute.h
  include/tencentcloud/iotcloud/v20180614/model/DeleteDeviceResponse.h
  include/tencentcloud/iotcloud/v20180614/model/CreateLoraDeviceResponse.h
  include/tencentcloud/iotcloud/v20180614/model/DeviceInfo.h
  include/tencentcloud/iotcloud/v20180614/model/CreateMultiDeviceResponse.h
  include/tencentcloud/iotcloud/v20180614/model/ReplaceTopicRuleResponse.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeLoraDeviceRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeDeviceShadowResponse.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeDeviceClientKeyResponse.h
  include/tencentcloud/iotcloud/v20180614/model/PublishAsDeviceResponse.h
  include/tencentcloud/iotcloud/v20180614/model/CreateMultiDeviceRequest.h
  include/tencentcloud/iotcloud/v20180614/model/EnableTopicRuleRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeDeviceResponse.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeDeviceShadowRequest.h
  include/tencentcloud/iotcloud/v20180614/model/DescribeMultiDevicesResponse.h
  include/tencentcloud/iotcloud/v20180614/model/UpdateTopicPolicyResponse.h
  include/tencentcloud/iotcloud/v20180614/model/TaskInfo.h
  )

set(iotcloud_src
  src/v20180614/IotcloudClient.cpp
  src/v20180614/model/PublishMessageRequest.cpp
  src/v20180614/model/DeleteProductRequest.cpp
  src/v20180614/model/UpdateDeviceShadowResponse.cpp
  src/v20180614/model/DescribeTasksRequest.cpp
  src/v20180614/model/DisableTopicRuleResponse.cpp
  src/v20180614/model/ReplaceTopicRuleRequest.cpp
  src/v20180614/model/DeleteTopicRuleRequest.cpp
  src/v20180614/model/DescribeMultiDevicesRequest.cpp
  src/v20180614/model/MultiDevicesInfo.cpp
  src/v20180614/model/PublishAsDeviceRequest.cpp
  src/v20180614/model/DescribeDeviceClientKeyRequest.cpp
  src/v20180614/model/DescribeTaskResponse.cpp
  src/v20180614/model/CancelTaskRequest.cpp
  src/v20180614/model/PublishToDeviceResponse.cpp
  src/v20180614/model/CreateTaskResponse.cpp
  src/v20180614/model/BatchPublishMessage.cpp
  src/v20180614/model/BatchUpdateShadow.cpp
  src/v20180614/model/Filter.cpp
  src/v20180614/model/DeleteDeviceRequest.cpp
  src/v20180614/model/DeleteProductResponse.cpp
  src/v20180614/model/ResetDeviceStateResponse.cpp
  src/v20180614/model/DescribeMultiDevTaskResponse.cpp
  src/v20180614/model/TopicRulePayload.cpp
  src/v20180614/model/UpdateTopicPolicyRequest.cpp
  src/v20180614/model/ProductInfo.cpp
  src/v20180614/model/DescribeDevicesResponse.cpp
  src/v20180614/model/DeviceTag.cpp
  src/v20180614/model/DeleteTopicRuleResponse.cpp
  src/v20180614/model/ProductProperties.cpp
  src/v20180614/model/DeleteLoraDeviceResponse.cpp
  src/v20180614/model/DescribeDeviceRequest.cpp
  src/v20180614/model/CreateLoraDeviceRequest.cpp
  src/v20180614/model/DescribeTaskRequest.cpp
  src/v20180614/model/Task.cpp
  src/v20180614/model/ResetDeviceStateRequest.cpp
  src/v20180614/model/CreateTopicPolicyRequest.cpp
  src/v20180614/model/PublishMessageResponse.cpp
  src/v20180614/model/PublishToDeviceRequest.cpp
  src/v20180614/model/ProductMetadata.cpp
  src/v20180614/model/DescribeLoraDeviceResponse.cpp
  src/v20180614/model/DescribeTasksResponse.cpp
  src/v20180614/model/EnableTopicRuleResponse.cpp
  src/v20180614/model/CreateProductResponse.cpp
  src/v20180614/model/DescribeProductsRequest.cpp
  src/v20180614/model/DescribeDevicesRequest.cpp
  src/v20180614/model/BrokerSubscribe.cpp
  src/v20180614/model/CreateTaskRequest.cpp
  src/v20180614/model/DisableTopicRuleRequest.cpp
  src/v20180614/model/CreateTopicPolicyResponse.cpp
  src/v20180614/model/DescribeMultiDevTaskRequest.cpp
  src/v20180614/model/CreateTopicRuleResponse.cpp
  src/v20180614/model/CancelTaskResponse.cpp
  src/v20180614/model/CreateDeviceResponse.cpp
  src/v20180614/model/CreateTopicRuleRequest.cpp
  src/v20180614/model/DeleteLoraDeviceRequest.cpp
  src/v20180614/model/CreateDeviceRequest.cpp
  src/v20180614/model/DescribeProductsResponse.cpp
  src/v20180614/model/UpdateDeviceShadowRequest.cpp
  src/v20180614/model/CreateProductRequest.cpp
  src/v20180614/model/Attribute.cpp
  src/v20180614/model/DeleteDeviceResponse.cpp
  src/v20180614/model/CreateLoraDeviceResponse.cpp
  src/v20180614/model/DeviceInfo.cpp
  src/v20180614/model/CreateMultiDeviceResponse.cpp
  src/v20180614/model/ReplaceTopicRuleResponse.cpp
  src/v20180614/model/DescribeLoraDeviceRequest.cpp
  src/v20180614/model/DescribeDeviceShadowResponse.cpp
  src/v20180614/model/DescribeDeviceClientKeyResponse.cpp
  src/v20180614/model/PublishAsDeviceResponse.cpp
  src/v20180614/model/CreateMultiDeviceRequest.cpp
  src/v20180614/model/EnableTopicRuleRequest.cpp
  src/v20180614/model/DescribeDeviceResponse.cpp
  src/v20180614/model/DescribeDeviceShadowRequest.cpp
  src/v20180614/model/DescribeMultiDevicesResponse.cpp
  src/v20180614/model/UpdateTopicPolicyResponse.cpp
  src/v20180614/model/TaskInfo.cpp
  )

set(iotcloud_include
    include/tencentcloud/iotcloud
  )

add_library(iotcloud ${LIB_TYPE}
  ${iotcloud_public_header}
  ${iotcloud_public_header_model}
  ${iotcloud_src})

set_target_properties(iotcloud
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}iotcloud
  )

target_include_directories(iotcloud
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(iotcloud
  core)

#install(FILES ${iotcloud_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/iotcloud/v20180614)
#install(FILES ${iotcloud_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/iotcloud/v20180614/model)
install(DIRECTORY ${iotcloud_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS iotcloud
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
