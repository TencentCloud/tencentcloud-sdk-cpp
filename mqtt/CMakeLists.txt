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

set(mqtt_public_header
  include/tencentcloud/mqtt/v20240516/MqttClient.h
  )

set(mqtt_public_header_model
  include/tencentcloud/mqtt/v20240516/model/UpdateAuthorizationPolicyPriorityResponse.h
  include/tencentcloud/mqtt/v20240516/model/UpdateAuthorizationPolicyPriorityRequest.h
  include/tencentcloud/mqtt/v20240516/model/AuthorizationPolicyItem.h
  include/tencentcloud/mqtt/v20240516/model/CreateJWTAuthenticatorResponse.h
  include/tencentcloud/mqtt/v20240516/model/DeleteAuthorizationPolicyRequest.h
  include/tencentcloud/mqtt/v20240516/model/ModifyJWKSAuthenticatorResponse.h
  include/tencentcloud/mqtt/v20240516/model/RegisterDeviceCertificateResponse.h
  include/tencentcloud/mqtt/v20240516/model/ModifyJWTAuthenticatorResponse.h
  include/tencentcloud/mqtt/v20240516/model/DescribeAuthorizationPoliciesRequest.h
  include/tencentcloud/mqtt/v20240516/model/DescribeTopicListRequest.h
  include/tencentcloud/mqtt/v20240516/model/DescribeInstanceListRequest.h
  include/tencentcloud/mqtt/v20240516/model/ModifyAuthorizationPolicyResponse.h
  include/tencentcloud/mqtt/v20240516/model/CreateAuthorizationPolicyRequest.h
  include/tencentcloud/mqtt/v20240516/model/DescribeInstanceResponse.h
  include/tencentcloud/mqtt/v20240516/model/DescribeAuthenticatorResponse.h
  include/tencentcloud/mqtt/v20240516/model/CreateTopicResponse.h
  include/tencentcloud/mqtt/v20240516/model/ModifyJWTAuthenticatorRequest.h
  include/tencentcloud/mqtt/v20240516/model/AuthorizationPolicyPriority.h
  include/tencentcloud/mqtt/v20240516/model/CreateAuthorizationPolicyResponse.h
  include/tencentcloud/mqtt/v20240516/model/CreateJWTAuthenticatorRequest.h
  include/tencentcloud/mqtt/v20240516/model/DeleteTopicRequest.h
  include/tencentcloud/mqtt/v20240516/model/CreateJWKSAuthenticatorRequest.h
  include/tencentcloud/mqtt/v20240516/model/ModifyTopicResponse.h
  include/tencentcloud/mqtt/v20240516/model/DescribeTopicResponse.h
  include/tencentcloud/mqtt/v20240516/model/CreateJWKSAuthenticatorResponse.h
  include/tencentcloud/mqtt/v20240516/model/DeleteAuthenticatorRequest.h
  include/tencentcloud/mqtt/v20240516/model/DescribeAuthorizationPoliciesResponse.h
  include/tencentcloud/mqtt/v20240516/model/RegisterDeviceCertificateRequest.h
  include/tencentcloud/mqtt/v20240516/model/CreateTopicRequest.h
  include/tencentcloud/mqtt/v20240516/model/MQTTTopicItem.h
  include/tencentcloud/mqtt/v20240516/model/Filter.h
  include/tencentcloud/mqtt/v20240516/model/DeleteAuthorizationPolicyResponse.h
  include/tencentcloud/mqtt/v20240516/model/ModifyJWKSAuthenticatorRequest.h
  include/tencentcloud/mqtt/v20240516/model/ModifyTopicRequest.h
  include/tencentcloud/mqtt/v20240516/model/DescribeTopicListResponse.h
  include/tencentcloud/mqtt/v20240516/model/DescribeAuthenticatorRequest.h
  include/tencentcloud/mqtt/v20240516/model/DeleteTopicResponse.h
  include/tencentcloud/mqtt/v20240516/model/ModifyAuthorizationPolicyRequest.h
  include/tencentcloud/mqtt/v20240516/model/DescribeInstanceRequest.h
  include/tencentcloud/mqtt/v20240516/model/MQTTAuthenticatorItem.h
  include/tencentcloud/mqtt/v20240516/model/DeleteAuthenticatorResponse.h
  include/tencentcloud/mqtt/v20240516/model/TagFilter.h
  include/tencentcloud/mqtt/v20240516/model/MQTTInstanceItem.h
  include/tencentcloud/mqtt/v20240516/model/DescribeInstanceListResponse.h
  include/tencentcloud/mqtt/v20240516/model/DescribeTopicRequest.h
  )

set(mqtt_src
  src/v20240516/MqttClient.cpp
  src/v20240516/model/UpdateAuthorizationPolicyPriorityResponse.cpp
  src/v20240516/model/UpdateAuthorizationPolicyPriorityRequest.cpp
  src/v20240516/model/AuthorizationPolicyItem.cpp
  src/v20240516/model/CreateJWTAuthenticatorResponse.cpp
  src/v20240516/model/DeleteAuthorizationPolicyRequest.cpp
  src/v20240516/model/ModifyJWKSAuthenticatorResponse.cpp
  src/v20240516/model/RegisterDeviceCertificateResponse.cpp
  src/v20240516/model/ModifyJWTAuthenticatorResponse.cpp
  src/v20240516/model/DescribeAuthorizationPoliciesRequest.cpp
  src/v20240516/model/DescribeTopicListRequest.cpp
  src/v20240516/model/DescribeInstanceListRequest.cpp
  src/v20240516/model/ModifyAuthorizationPolicyResponse.cpp
  src/v20240516/model/CreateAuthorizationPolicyRequest.cpp
  src/v20240516/model/DescribeInstanceResponse.cpp
  src/v20240516/model/DescribeAuthenticatorResponse.cpp
  src/v20240516/model/CreateTopicResponse.cpp
  src/v20240516/model/ModifyJWTAuthenticatorRequest.cpp
  src/v20240516/model/AuthorizationPolicyPriority.cpp
  src/v20240516/model/CreateAuthorizationPolicyResponse.cpp
  src/v20240516/model/CreateJWTAuthenticatorRequest.cpp
  src/v20240516/model/DeleteTopicRequest.cpp
  src/v20240516/model/CreateJWKSAuthenticatorRequest.cpp
  src/v20240516/model/ModifyTopicResponse.cpp
  src/v20240516/model/DescribeTopicResponse.cpp
  src/v20240516/model/CreateJWKSAuthenticatorResponse.cpp
  src/v20240516/model/DeleteAuthenticatorRequest.cpp
  src/v20240516/model/DescribeAuthorizationPoliciesResponse.cpp
  src/v20240516/model/RegisterDeviceCertificateRequest.cpp
  src/v20240516/model/CreateTopicRequest.cpp
  src/v20240516/model/MQTTTopicItem.cpp
  src/v20240516/model/Filter.cpp
  src/v20240516/model/DeleteAuthorizationPolicyResponse.cpp
  src/v20240516/model/ModifyJWKSAuthenticatorRequest.cpp
  src/v20240516/model/ModifyTopicRequest.cpp
  src/v20240516/model/DescribeTopicListResponse.cpp
  src/v20240516/model/DescribeAuthenticatorRequest.cpp
  src/v20240516/model/DeleteTopicResponse.cpp
  src/v20240516/model/ModifyAuthorizationPolicyRequest.cpp
  src/v20240516/model/DescribeInstanceRequest.cpp
  src/v20240516/model/MQTTAuthenticatorItem.cpp
  src/v20240516/model/DeleteAuthenticatorResponse.cpp
  src/v20240516/model/TagFilter.cpp
  src/v20240516/model/MQTTInstanceItem.cpp
  src/v20240516/model/DescribeInstanceListResponse.cpp
  src/v20240516/model/DescribeTopicRequest.cpp
  )

set(mqtt_include
    include/tencentcloud/mqtt
  )

add_library(mqtt ${LIB_TYPE}
  ${mqtt_public_header}
  ${mqtt_public_header_model}
  ${mqtt_src})

set_target_properties(mqtt
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}mqtt
  )

target_include_directories(mqtt
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(mqtt
  core)

#install(FILES ${mqtt_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/mqtt/v20240516)
#install(FILES ${mqtt_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/mqtt/v20240516/model)
install(DIRECTORY ${mqtt_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS mqtt
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
