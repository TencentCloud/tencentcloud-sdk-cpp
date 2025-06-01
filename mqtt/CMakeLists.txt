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
  include/tencentcloud/mqtt/v20240516/model/MQTTClientSubscription.h
  include/tencentcloud/mqtt/v20240516/model/DeleteUserRequest.h
  include/tencentcloud/mqtt/v20240516/model/ModifyJWTAuthenticatorResponse.h
  include/tencentcloud/mqtt/v20240516/model/CaCertificateItem.h
  include/tencentcloud/mqtt/v20240516/model/ModifyAuthorizationPolicyResponse.h
  include/tencentcloud/mqtt/v20240516/model/ActivateDeviceCertificateRequest.h
  include/tencentcloud/mqtt/v20240516/model/CreateInstanceResponse.h
  include/tencentcloud/mqtt/v20240516/model/ApplyRegistrationCodeRequest.h
  include/tencentcloud/mqtt/v20240516/model/DescribeMessageListRequest.h
  include/tencentcloud/mqtt/v20240516/model/ModifyJWTAuthenticatorRequest.h
  include/tencentcloud/mqtt/v20240516/model/AuthorizationPolicyPriority.h
  include/tencentcloud/mqtt/v20240516/model/DescribeInsPublicEndpointsResponse.h
  include/tencentcloud/mqtt/v20240516/model/DescribeSharedSubscriptionLagResponse.h
  include/tencentcloud/mqtt/v20240516/model/DeleteTopicRequest.h
  include/tencentcloud/mqtt/v20240516/model/ModifyUserResponse.h
  include/tencentcloud/mqtt/v20240516/model/DescribeCaCertificateResponse.h
  include/tencentcloud/mqtt/v20240516/model/DescribeDeviceCertificatesRequest.h
  include/tencentcloud/mqtt/v20240516/model/DeleteAuthenticatorRequest.h
  include/tencentcloud/mqtt/v20240516/model/PublicAccessRule.h
  include/tencentcloud/mqtt/v20240516/model/VpcInfo.h
  include/tencentcloud/mqtt/v20240516/model/DeleteAuthorizationPolicyResponse.h
  include/tencentcloud/mqtt/v20240516/model/ProductSkuItem.h
  include/tencentcloud/mqtt/v20240516/model/ModifyJWKSAuthenticatorRequest.h
  include/tencentcloud/mqtt/v20240516/model/RegisterCaCertificateResponse.h
  include/tencentcloud/mqtt/v20240516/model/DeleteInstanceRequest.h
  include/tencentcloud/mqtt/v20240516/model/ModifyInstanceRequest.h
  include/tencentcloud/mqtt/v20240516/model/RegisterDeviceCertificateResponse.h
  include/tencentcloud/mqtt/v20240516/model/MQTTAuthenticatorItem.h
  include/tencentcloud/mqtt/v20240516/model/DescribeClientListResponse.h
  include/tencentcloud/mqtt/v20240516/model/Tag.h
  include/tencentcloud/mqtt/v20240516/model/DescribeMessageListResponse.h
  include/tencentcloud/mqtt/v20240516/model/HeaderItem.h
  include/tencentcloud/mqtt/v20240516/model/MQTTInstanceItem.h
  include/tencentcloud/mqtt/v20240516/model/DescribeInstanceListResponse.h
  include/tencentcloud/mqtt/v20240516/model/ApplyRegistrationCodeResponse.h
  include/tencentcloud/mqtt/v20240516/model/ModifyInstanceResponse.h
  include/tencentcloud/mqtt/v20240516/model/CreateHttpAuthenticatorResponse.h
  include/tencentcloud/mqtt/v20240516/model/MQTTMessage.h
  include/tencentcloud/mqtt/v20240516/model/MQTTMessageItem.h
  include/tencentcloud/mqtt/v20240516/model/ModifyJWKSAuthenticatorResponse.h
  include/tencentcloud/mqtt/v20240516/model/CreateInsPublicEndpointResponse.h
  include/tencentcloud/mqtt/v20240516/model/CreateUserResponse.h
  include/tencentcloud/mqtt/v20240516/model/CreateAuthorizationPolicyRequest.h
  include/tencentcloud/mqtt/v20240516/model/PublishMessageResponse.h
  include/tencentcloud/mqtt/v20240516/model/DescribeAuthenticatorResponse.h
  include/tencentcloud/mqtt/v20240516/model/DeactivateCaCertificateResponse.h
  include/tencentcloud/mqtt/v20240516/model/DeleteCaCertificateRequest.h
  include/tencentcloud/mqtt/v20240516/model/DeleteDeviceCertificateRequest.h
  include/tencentcloud/mqtt/v20240516/model/DescribeMessageByTopicRequest.h
  include/tencentcloud/mqtt/v20240516/model/DescribeInsPublicEndpointsRequest.h
  include/tencentcloud/mqtt/v20240516/model/DeleteUserResponse.h
  include/tencentcloud/mqtt/v20240516/model/ActivateCaCertificateResponse.h
  include/tencentcloud/mqtt/v20240516/model/DeleteDeviceCertificateResponse.h
  include/tencentcloud/mqtt/v20240516/model/DescribeMessageByTopicResponse.h
  include/tencentcloud/mqtt/v20240516/model/DeleteInstanceResponse.h
  include/tencentcloud/mqtt/v20240516/model/DescribeProductSKUListResponse.h
  include/tencentcloud/mqtt/v20240516/model/CreateJWKSAuthenticatorRequest.h
  include/tencentcloud/mqtt/v20240516/model/DescribeTopicResponse.h
  include/tencentcloud/mqtt/v20240516/model/CreateJWKSAuthenticatorResponse.h
  include/tencentcloud/mqtt/v20240516/model/ModifyHttpAuthenticatorResponse.h
  include/tencentcloud/mqtt/v20240516/model/DescribeAuthorizationPoliciesResponse.h
  include/tencentcloud/mqtt/v20240516/model/CreateTopicRequest.h
  include/tencentcloud/mqtt/v20240516/model/DeleteCaCertificateResponse.h
  include/tencentcloud/mqtt/v20240516/model/TagFilter.h
  include/tencentcloud/mqtt/v20240516/model/DescribeUserListResponse.h
  include/tencentcloud/mqtt/v20240516/model/ModifyTopicResponse.h
  include/tencentcloud/mqtt/v20240516/model/DeactivateDeviceCertificateResponse.h
  include/tencentcloud/mqtt/v20240516/model/MQTTUserItem.h
  include/tencentcloud/mqtt/v20240516/model/ActivateCaCertificateRequest.h
  include/tencentcloud/mqtt/v20240516/model/BodyItem.h
  include/tencentcloud/mqtt/v20240516/model/ActivateDeviceCertificateResponse.h
  include/tencentcloud/mqtt/v20240516/model/DescribeTopicRequest.h
  include/tencentcloud/mqtt/v20240516/model/PublishMessageRequest.h
  include/tencentcloud/mqtt/v20240516/model/AuthorizationPolicyItem.h
  include/tencentcloud/mqtt/v20240516/model/DescribeClientListRequest.h
  include/tencentcloud/mqtt/v20240516/model/DeleteInsPublicEndpointResponse.h
  include/tencentcloud/mqtt/v20240516/model/MQTTEndpointItem.h
  include/tencentcloud/mqtt/v20240516/model/DescribeInsVPCEndpointsRequest.h
  include/tencentcloud/mqtt/v20240516/model/DescribeTopicListRequest.h
  include/tencentcloud/mqtt/v20240516/model/CreateTopicResponse.h
  include/tencentcloud/mqtt/v20240516/model/RevokedDeviceCertificateRequest.h
  include/tencentcloud/mqtt/v20240516/model/ModifyInsPublicEndpointResponse.h
  include/tencentcloud/mqtt/v20240516/model/CreateAuthorizationPolicyResponse.h
  include/tencentcloud/mqtt/v20240516/model/DescribeAuthenticatorRequest.h
  include/tencentcloud/mqtt/v20240516/model/RegisterCaCertificateRequest.h
  include/tencentcloud/mqtt/v20240516/model/CreateInstanceRequest.h
  include/tencentcloud/mqtt/v20240516/model/CreateInsPublicEndpointRequest.h
  include/tencentcloud/mqtt/v20240516/model/RegisterDeviceCertificateRequest.h
  include/tencentcloud/mqtt/v20240516/model/Filter.h
  include/tencentcloud/mqtt/v20240516/model/DeactivateDeviceCertificateRequest.h
  include/tencentcloud/mqtt/v20240516/model/DescribeDeviceCertificatesResponse.h
  include/tencentcloud/mqtt/v20240516/model/ModifyTopicRequest.h
  include/tencentcloud/mqtt/v20240516/model/CreateUserRequest.h
  include/tencentcloud/mqtt/v20240516/model/DescribeInstanceResponse.h
  include/tencentcloud/mqtt/v20240516/model/ModifyInstanceCertBindingResponse.h
  include/tencentcloud/mqtt/v20240516/model/DescribeInsVPCEndpointsResponse.h
  include/tencentcloud/mqtt/v20240516/model/DescribeDeviceCertificateRequest.h
  include/tencentcloud/mqtt/v20240516/model/ModifyInsPublicEndpointRequest.h
  include/tencentcloud/mqtt/v20240516/model/DeleteInsPublicEndpointRequest.h
  include/tencentcloud/mqtt/v20240516/model/DescribeUserListRequest.h
  include/tencentcloud/mqtt/v20240516/model/DescribeCaCertificateRequest.h
  include/tencentcloud/mqtt/v20240516/model/UpdateAuthorizationPolicyPriorityRequest.h
  include/tencentcloud/mqtt/v20240516/model/CreateJWTAuthenticatorResponse.h
  include/tencentcloud/mqtt/v20240516/model/DeleteAuthorizationPolicyRequest.h
  include/tencentcloud/mqtt/v20240516/model/DescribeAuthorizationPoliciesRequest.h
  include/tencentcloud/mqtt/v20240516/model/RevokedDeviceCertificateResponse.h
  include/tencentcloud/mqtt/v20240516/model/CreateHttpAuthenticatorRequest.h
  include/tencentcloud/mqtt/v20240516/model/DescribeProductSKUListRequest.h
  include/tencentcloud/mqtt/v20240516/model/DescribeTopicListResponse.h
  include/tencentcloud/mqtt/v20240516/model/DescribeDeviceCertificateResponse.h
  include/tencentcloud/mqtt/v20240516/model/DescribeInstanceListRequest.h
  include/tencentcloud/mqtt/v20240516/model/DeactivateCaCertificateRequest.h
  include/tencentcloud/mqtt/v20240516/model/CreateJWTAuthenticatorRequest.h
  include/tencentcloud/mqtt/v20240516/model/DescribeCaCertificatesRequest.h
  include/tencentcloud/mqtt/v20240516/model/DeviceCertificateItem.h
  include/tencentcloud/mqtt/v20240516/model/MQTTClientInfo.h
  include/tencentcloud/mqtt/v20240516/model/MQTTTopicItem.h
  include/tencentcloud/mqtt/v20240516/model/PriceTag.h
  include/tencentcloud/mqtt/v20240516/model/ModifyAuthorizationPolicyRequest.h
  include/tencentcloud/mqtt/v20240516/model/DescribeSharedSubscriptionLagRequest.h
  include/tencentcloud/mqtt/v20240516/model/DeleteTopicResponse.h
  include/tencentcloud/mqtt/v20240516/model/ModifyInstanceCertBindingRequest.h
  include/tencentcloud/mqtt/v20240516/model/ModifyHttpAuthenticatorRequest.h
  include/tencentcloud/mqtt/v20240516/model/DescribeInstanceRequest.h
  include/tencentcloud/mqtt/v20240516/model/DescribeCaCertificatesResponse.h
  include/tencentcloud/mqtt/v20240516/model/ModifyUserRequest.h
  include/tencentcloud/mqtt/v20240516/model/DeleteAuthenticatorResponse.h
  include/tencentcloud/mqtt/v20240516/model/IpRule.h
  )

set(mqtt_src
  src/v20240516/MqttClient.cpp
  src/v20240516/model/UpdateAuthorizationPolicyPriorityResponse.cpp
  src/v20240516/model/MQTTClientSubscription.cpp
  src/v20240516/model/DeleteUserRequest.cpp
  src/v20240516/model/ModifyJWTAuthenticatorResponse.cpp
  src/v20240516/model/CaCertificateItem.cpp
  src/v20240516/model/ModifyAuthorizationPolicyResponse.cpp
  src/v20240516/model/ActivateDeviceCertificateRequest.cpp
  src/v20240516/model/CreateInstanceResponse.cpp
  src/v20240516/model/ApplyRegistrationCodeRequest.cpp
  src/v20240516/model/DescribeMessageListRequest.cpp
  src/v20240516/model/ModifyJWTAuthenticatorRequest.cpp
  src/v20240516/model/AuthorizationPolicyPriority.cpp
  src/v20240516/model/DescribeInsPublicEndpointsResponse.cpp
  src/v20240516/model/DescribeSharedSubscriptionLagResponse.cpp
  src/v20240516/model/DeleteTopicRequest.cpp
  src/v20240516/model/ModifyUserResponse.cpp
  src/v20240516/model/DescribeCaCertificateResponse.cpp
  src/v20240516/model/DescribeDeviceCertificatesRequest.cpp
  src/v20240516/model/DeleteAuthenticatorRequest.cpp
  src/v20240516/model/PublicAccessRule.cpp
  src/v20240516/model/VpcInfo.cpp
  src/v20240516/model/DeleteAuthorizationPolicyResponse.cpp
  src/v20240516/model/ProductSkuItem.cpp
  src/v20240516/model/ModifyJWKSAuthenticatorRequest.cpp
  src/v20240516/model/RegisterCaCertificateResponse.cpp
  src/v20240516/model/DeleteInstanceRequest.cpp
  src/v20240516/model/ModifyInstanceRequest.cpp
  src/v20240516/model/RegisterDeviceCertificateResponse.cpp
  src/v20240516/model/MQTTAuthenticatorItem.cpp
  src/v20240516/model/DescribeClientListResponse.cpp
  src/v20240516/model/Tag.cpp
  src/v20240516/model/DescribeMessageListResponse.cpp
  src/v20240516/model/HeaderItem.cpp
  src/v20240516/model/MQTTInstanceItem.cpp
  src/v20240516/model/DescribeInstanceListResponse.cpp
  src/v20240516/model/ApplyRegistrationCodeResponse.cpp
  src/v20240516/model/ModifyInstanceResponse.cpp
  src/v20240516/model/CreateHttpAuthenticatorResponse.cpp
  src/v20240516/model/MQTTMessage.cpp
  src/v20240516/model/MQTTMessageItem.cpp
  src/v20240516/model/ModifyJWKSAuthenticatorResponse.cpp
  src/v20240516/model/CreateInsPublicEndpointResponse.cpp
  src/v20240516/model/CreateUserResponse.cpp
  src/v20240516/model/CreateAuthorizationPolicyRequest.cpp
  src/v20240516/model/PublishMessageResponse.cpp
  src/v20240516/model/DescribeAuthenticatorResponse.cpp
  src/v20240516/model/DeactivateCaCertificateResponse.cpp
  src/v20240516/model/DeleteCaCertificateRequest.cpp
  src/v20240516/model/DeleteDeviceCertificateRequest.cpp
  src/v20240516/model/DescribeMessageByTopicRequest.cpp
  src/v20240516/model/DescribeInsPublicEndpointsRequest.cpp
  src/v20240516/model/DeleteUserResponse.cpp
  src/v20240516/model/ActivateCaCertificateResponse.cpp
  src/v20240516/model/DeleteDeviceCertificateResponse.cpp
  src/v20240516/model/DescribeMessageByTopicResponse.cpp
  src/v20240516/model/DeleteInstanceResponse.cpp
  src/v20240516/model/DescribeProductSKUListResponse.cpp
  src/v20240516/model/CreateJWKSAuthenticatorRequest.cpp
  src/v20240516/model/DescribeTopicResponse.cpp
  src/v20240516/model/CreateJWKSAuthenticatorResponse.cpp
  src/v20240516/model/ModifyHttpAuthenticatorResponse.cpp
  src/v20240516/model/DescribeAuthorizationPoliciesResponse.cpp
  src/v20240516/model/CreateTopicRequest.cpp
  src/v20240516/model/DeleteCaCertificateResponse.cpp
  src/v20240516/model/TagFilter.cpp
  src/v20240516/model/DescribeUserListResponse.cpp
  src/v20240516/model/ModifyTopicResponse.cpp
  src/v20240516/model/DeactivateDeviceCertificateResponse.cpp
  src/v20240516/model/MQTTUserItem.cpp
  src/v20240516/model/ActivateCaCertificateRequest.cpp
  src/v20240516/model/BodyItem.cpp
  src/v20240516/model/ActivateDeviceCertificateResponse.cpp
  src/v20240516/model/DescribeTopicRequest.cpp
  src/v20240516/model/PublishMessageRequest.cpp
  src/v20240516/model/AuthorizationPolicyItem.cpp
  src/v20240516/model/DescribeClientListRequest.cpp
  src/v20240516/model/DeleteInsPublicEndpointResponse.cpp
  src/v20240516/model/MQTTEndpointItem.cpp
  src/v20240516/model/DescribeInsVPCEndpointsRequest.cpp
  src/v20240516/model/DescribeTopicListRequest.cpp
  src/v20240516/model/CreateTopicResponse.cpp
  src/v20240516/model/RevokedDeviceCertificateRequest.cpp
  src/v20240516/model/ModifyInsPublicEndpointResponse.cpp
  src/v20240516/model/CreateAuthorizationPolicyResponse.cpp
  src/v20240516/model/DescribeAuthenticatorRequest.cpp
  src/v20240516/model/RegisterCaCertificateRequest.cpp
  src/v20240516/model/CreateInstanceRequest.cpp
  src/v20240516/model/CreateInsPublicEndpointRequest.cpp
  src/v20240516/model/RegisterDeviceCertificateRequest.cpp
  src/v20240516/model/Filter.cpp
  src/v20240516/model/DeactivateDeviceCertificateRequest.cpp
  src/v20240516/model/DescribeDeviceCertificatesResponse.cpp
  src/v20240516/model/ModifyTopicRequest.cpp
  src/v20240516/model/CreateUserRequest.cpp
  src/v20240516/model/DescribeInstanceResponse.cpp
  src/v20240516/model/ModifyInstanceCertBindingResponse.cpp
  src/v20240516/model/DescribeInsVPCEndpointsResponse.cpp
  src/v20240516/model/DescribeDeviceCertificateRequest.cpp
  src/v20240516/model/ModifyInsPublicEndpointRequest.cpp
  src/v20240516/model/DeleteInsPublicEndpointRequest.cpp
  src/v20240516/model/DescribeUserListRequest.cpp
  src/v20240516/model/DescribeCaCertificateRequest.cpp
  src/v20240516/model/UpdateAuthorizationPolicyPriorityRequest.cpp
  src/v20240516/model/CreateJWTAuthenticatorResponse.cpp
  src/v20240516/model/DeleteAuthorizationPolicyRequest.cpp
  src/v20240516/model/DescribeAuthorizationPoliciesRequest.cpp
  src/v20240516/model/RevokedDeviceCertificateResponse.cpp
  src/v20240516/model/CreateHttpAuthenticatorRequest.cpp
  src/v20240516/model/DescribeProductSKUListRequest.cpp
  src/v20240516/model/DescribeTopicListResponse.cpp
  src/v20240516/model/DescribeDeviceCertificateResponse.cpp
  src/v20240516/model/DescribeInstanceListRequest.cpp
  src/v20240516/model/DeactivateCaCertificateRequest.cpp
  src/v20240516/model/CreateJWTAuthenticatorRequest.cpp
  src/v20240516/model/DescribeCaCertificatesRequest.cpp
  src/v20240516/model/DeviceCertificateItem.cpp
  src/v20240516/model/MQTTClientInfo.cpp
  src/v20240516/model/MQTTTopicItem.cpp
  src/v20240516/model/PriceTag.cpp
  src/v20240516/model/ModifyAuthorizationPolicyRequest.cpp
  src/v20240516/model/DescribeSharedSubscriptionLagRequest.cpp
  src/v20240516/model/DeleteTopicResponse.cpp
  src/v20240516/model/ModifyInstanceCertBindingRequest.cpp
  src/v20240516/model/ModifyHttpAuthenticatorRequest.cpp
  src/v20240516/model/DescribeInstanceRequest.cpp
  src/v20240516/model/DescribeCaCertificatesResponse.cpp
  src/v20240516/model/ModifyUserRequest.cpp
  src/v20240516/model/DeleteAuthenticatorResponse.cpp
  src/v20240516/model/IpRule.cpp
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
