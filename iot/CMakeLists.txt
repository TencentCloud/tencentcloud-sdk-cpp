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

set(iot_public_header
  include/tencentcloud/iot/v20180123/IotClient.h
  )

set(iot_public_header_model
  include/tencentcloud/iot/v20180123/model/AppUpdateDeviceRequest.h
  include/tencentcloud/iot/v20180123/model/GetDeviceResponse.h
  include/tencentcloud/iot/v20180123/model/GetDeviceDataResponse.h
  include/tencentcloud/iot/v20180123/model/AppResetPasswordResponse.h
  include/tencentcloud/iot/v20180123/model/DeleteRuleRequest.h
  include/tencentcloud/iot/v20180123/model/ActivateRuleResponse.h
  include/tencentcloud/iot/v20180123/model/UpdateRuleRequest.h
  include/tencentcloud/iot/v20180123/model/DeviceSignature.h
  include/tencentcloud/iot/v20180123/model/AppGetDevicesRequest.h
  include/tencentcloud/iot/v20180123/model/AppGetDeviceDataResponse.h
  include/tencentcloud/iot/v20180123/model/GetTopicResponse.h
  include/tencentcloud/iot/v20180123/model/DeactivateRuleResponse.h
  include/tencentcloud/iot/v20180123/model/IssueDeviceControlRequest.h
  include/tencentcloud/iot/v20180123/model/GetDeviceStatisticsRequest.h
  include/tencentcloud/iot/v20180123/model/ResetDeviceResponse.h
  include/tencentcloud/iot/v20180123/model/GetDeviceLogResponse.h
  include/tencentcloud/iot/v20180123/model/AddRuleRequest.h
  include/tencentcloud/iot/v20180123/model/ResetDeviceRequest.h
  include/tencentcloud/iot/v20180123/model/ServiceAction.h
  include/tencentcloud/iot/v20180123/model/DataTemplate.h
  include/tencentcloud/iot/v20180123/model/DeleteTopicRequest.h
  include/tencentcloud/iot/v20180123/model/AddProductResponse.h
  include/tencentcloud/iot/v20180123/model/UpdateProductResponse.h
  include/tencentcloud/iot/v20180123/model/DataHistoryEntry.h
  include/tencentcloud/iot/v20180123/model/AppGetDeviceResponse.h
  include/tencentcloud/iot/v20180123/model/UpdateRuleResponse.h
  include/tencentcloud/iot/v20180123/model/AppDeviceDetail.h
  include/tencentcloud/iot/v20180123/model/GetDeviceStatisticsResponse.h
  include/tencentcloud/iot/v20180123/model/UnassociateSubDeviceFromGatewayProductResponse.h
  include/tencentcloud/iot/v20180123/model/Topic.h
  include/tencentcloud/iot/v20180123/model/AssociateSubDeviceToGatewayProductResponse.h
  include/tencentcloud/iot/v20180123/model/GetProductRequest.h
  include/tencentcloud/iot/v20180123/model/AppGetTokenRequest.h
  include/tencentcloud/iot/v20180123/model/GetRuleRequest.h
  include/tencentcloud/iot/v20180123/model/DeleteProductRequest.h
  include/tencentcloud/iot/v20180123/model/AppGetUserRequest.h
  include/tencentcloud/iot/v20180123/model/GetProductsResponse.h
  include/tencentcloud/iot/v20180123/model/AppGetDeviceRequest.h
  include/tencentcloud/iot/v20180123/model/GetDataHistoryRequest.h
  include/tencentcloud/iot/v20180123/model/AddTopicResponse.h
  include/tencentcloud/iot/v20180123/model/AddProductRequest.h
  include/tencentcloud/iot/v20180123/model/ProductEntry.h
  include/tencentcloud/iot/v20180123/model/GetRulesResponse.h
  include/tencentcloud/iot/v20180123/model/DeleteDeviceRequest.h
  include/tencentcloud/iot/v20180123/model/AssociateSubDeviceToGatewayProductRequest.h
  include/tencentcloud/iot/v20180123/model/GetDeviceSignaturesResponse.h
  include/tencentcloud/iot/v20180123/model/RuleQuery.h
  include/tencentcloud/iot/v20180123/model/AppUser.h
  include/tencentcloud/iot/v20180123/model/BoolData.h
  include/tencentcloud/iot/v20180123/model/PublishMsgRequest.h
  include/tencentcloud/iot/v20180123/model/GetProductsRequest.h
  include/tencentcloud/iot/v20180123/model/AddTopicRequest.h
  include/tencentcloud/iot/v20180123/model/AppGetDeviceStatusesRequest.h
  include/tencentcloud/iot/v20180123/model/DeviceLogEntry.h
  include/tencentcloud/iot/v20180123/model/GetDebugLogRequest.h
  include/tencentcloud/iot/v20180123/model/GetDeviceRequest.h
  include/tencentcloud/iot/v20180123/model/GetDeviceDataRequest.h
  include/tencentcloud/iot/v20180123/model/DeactivateRuleRequest.h
  include/tencentcloud/iot/v20180123/model/GetTopicRequest.h
  include/tencentcloud/iot/v20180123/model/GetDevicesResponse.h
  include/tencentcloud/iot/v20180123/model/NumberData.h
  include/tencentcloud/iot/v20180123/model/GetDevicesRequest.h
  include/tencentcloud/iot/v20180123/model/AppGetTokenResponse.h
  include/tencentcloud/iot/v20180123/model/GetProductResponse.h
  include/tencentcloud/iot/v20180123/model/AppAddUserRequest.h
  include/tencentcloud/iot/v20180123/model/AddRuleResponse.h
  include/tencentcloud/iot/v20180123/model/AppDeleteDeviceResponse.h
  include/tencentcloud/iot/v20180123/model/AppIssueDeviceControlRequest.h
  include/tencentcloud/iot/v20180123/model/DeviceStatus.h
  include/tencentcloud/iot/v20180123/model/DeleteProductResponse.h
  include/tencentcloud/iot/v20180123/model/AppGetUserResponse.h
  include/tencentcloud/iot/v20180123/model/AppUpdateUserRequest.h
  include/tencentcloud/iot/v20180123/model/GetDebugLogResponse.h
  include/tencentcloud/iot/v20180123/model/AppUpdateUserResponse.h
  include/tencentcloud/iot/v20180123/model/Device.h
  include/tencentcloud/iot/v20180123/model/GetRulesRequest.h
  include/tencentcloud/iot/v20180123/model/Rule.h
  include/tencentcloud/iot/v20180123/model/IssueDeviceControlResponse.h
  include/tencentcloud/iot/v20180123/model/GetDataHistoryResponse.h
  include/tencentcloud/iot/v20180123/model/Action.h
  include/tencentcloud/iot/v20180123/model/PublishMsgResponse.h
  include/tencentcloud/iot/v20180123/model/AppGetDevicesResponse.h
  include/tencentcloud/iot/v20180123/model/CkafkaAction.h
  include/tencentcloud/iot/v20180123/model/AddDeviceRequest.h
  include/tencentcloud/iot/v20180123/model/UpdateProductRequest.h
  include/tencentcloud/iot/v20180123/model/DeleteRuleResponse.h
  include/tencentcloud/iot/v20180123/model/GetDeviceSignaturesRequest.h
  include/tencentcloud/iot/v20180123/model/GetRuleResponse.h
  include/tencentcloud/iot/v20180123/model/AppUpdateDeviceResponse.h
  include/tencentcloud/iot/v20180123/model/Product.h
  include/tencentcloud/iot/v20180123/model/DebugLogEntry.h
  include/tencentcloud/iot/v20180123/model/GetDeviceStatusesRequest.h
  include/tencentcloud/iot/v20180123/model/GetDeviceStatusesResponse.h
  include/tencentcloud/iot/v20180123/model/UnassociateSubDeviceFromGatewayProductRequest.h
  include/tencentcloud/iot/v20180123/model/AppDeleteDeviceRequest.h
  include/tencentcloud/iot/v20180123/model/StringData.h
  include/tencentcloud/iot/v20180123/model/AppGetDeviceStatusesResponse.h
  include/tencentcloud/iot/v20180123/model/GetTopicsResponse.h
  include/tencentcloud/iot/v20180123/model/AppGetDeviceDataRequest.h
  include/tencentcloud/iot/v20180123/model/AppAddUserResponse.h
  include/tencentcloud/iot/v20180123/model/DeviceEntry.h
  include/tencentcloud/iot/v20180123/model/GetDeviceLogRequest.h
  include/tencentcloud/iot/v20180123/model/AddDeviceResponse.h
  include/tencentcloud/iot/v20180123/model/ActivateRuleRequest.h
  include/tencentcloud/iot/v20180123/model/AppResetPasswordRequest.h
  include/tencentcloud/iot/v20180123/model/DeleteTopicResponse.h
  include/tencentcloud/iot/v20180123/model/AppDevice.h
  include/tencentcloud/iot/v20180123/model/GetTopicsRequest.h
  include/tencentcloud/iot/v20180123/model/DeviceStatData.h
  include/tencentcloud/iot/v20180123/model/EnumData.h
  include/tencentcloud/iot/v20180123/model/DeleteDeviceResponse.h
  include/tencentcloud/iot/v20180123/model/AppSecureAddDeviceResponse.h
  include/tencentcloud/iot/v20180123/model/AppSecureAddDeviceRequest.h
  include/tencentcloud/iot/v20180123/model/AppIssueDeviceControlResponse.h
  include/tencentcloud/iot/v20180123/model/TopicAction.h
  )

set(iot_src
  src/v20180123/IotClient.cpp
  src/v20180123/model/AppUpdateDeviceRequest.cpp
  src/v20180123/model/GetDeviceResponse.cpp
  src/v20180123/model/GetDeviceDataResponse.cpp
  src/v20180123/model/AppResetPasswordResponse.cpp
  src/v20180123/model/DeleteRuleRequest.cpp
  src/v20180123/model/ActivateRuleResponse.cpp
  src/v20180123/model/UpdateRuleRequest.cpp
  src/v20180123/model/DeviceSignature.cpp
  src/v20180123/model/AppGetDevicesRequest.cpp
  src/v20180123/model/AppGetDeviceDataResponse.cpp
  src/v20180123/model/GetTopicResponse.cpp
  src/v20180123/model/DeactivateRuleResponse.cpp
  src/v20180123/model/IssueDeviceControlRequest.cpp
  src/v20180123/model/GetDeviceStatisticsRequest.cpp
  src/v20180123/model/ResetDeviceResponse.cpp
  src/v20180123/model/GetDeviceLogResponse.cpp
  src/v20180123/model/AddRuleRequest.cpp
  src/v20180123/model/ResetDeviceRequest.cpp
  src/v20180123/model/ServiceAction.cpp
  src/v20180123/model/DataTemplate.cpp
  src/v20180123/model/DeleteTopicRequest.cpp
  src/v20180123/model/AddProductResponse.cpp
  src/v20180123/model/UpdateProductResponse.cpp
  src/v20180123/model/DataHistoryEntry.cpp
  src/v20180123/model/AppGetDeviceResponse.cpp
  src/v20180123/model/UpdateRuleResponse.cpp
  src/v20180123/model/AppDeviceDetail.cpp
  src/v20180123/model/GetDeviceStatisticsResponse.cpp
  src/v20180123/model/UnassociateSubDeviceFromGatewayProductResponse.cpp
  src/v20180123/model/Topic.cpp
  src/v20180123/model/AssociateSubDeviceToGatewayProductResponse.cpp
  src/v20180123/model/GetProductRequest.cpp
  src/v20180123/model/AppGetTokenRequest.cpp
  src/v20180123/model/GetRuleRequest.cpp
  src/v20180123/model/DeleteProductRequest.cpp
  src/v20180123/model/AppGetUserRequest.cpp
  src/v20180123/model/GetProductsResponse.cpp
  src/v20180123/model/AppGetDeviceRequest.cpp
  src/v20180123/model/GetDataHistoryRequest.cpp
  src/v20180123/model/AddTopicResponse.cpp
  src/v20180123/model/AddProductRequest.cpp
  src/v20180123/model/ProductEntry.cpp
  src/v20180123/model/GetRulesResponse.cpp
  src/v20180123/model/DeleteDeviceRequest.cpp
  src/v20180123/model/AssociateSubDeviceToGatewayProductRequest.cpp
  src/v20180123/model/GetDeviceSignaturesResponse.cpp
  src/v20180123/model/RuleQuery.cpp
  src/v20180123/model/AppUser.cpp
  src/v20180123/model/BoolData.cpp
  src/v20180123/model/PublishMsgRequest.cpp
  src/v20180123/model/GetProductsRequest.cpp
  src/v20180123/model/AddTopicRequest.cpp
  src/v20180123/model/AppGetDeviceStatusesRequest.cpp
  src/v20180123/model/DeviceLogEntry.cpp
  src/v20180123/model/GetDebugLogRequest.cpp
  src/v20180123/model/GetDeviceRequest.cpp
  src/v20180123/model/GetDeviceDataRequest.cpp
  src/v20180123/model/DeactivateRuleRequest.cpp
  src/v20180123/model/GetTopicRequest.cpp
  src/v20180123/model/GetDevicesResponse.cpp
  src/v20180123/model/NumberData.cpp
  src/v20180123/model/GetDevicesRequest.cpp
  src/v20180123/model/AppGetTokenResponse.cpp
  src/v20180123/model/GetProductResponse.cpp
  src/v20180123/model/AppAddUserRequest.cpp
  src/v20180123/model/AddRuleResponse.cpp
  src/v20180123/model/AppDeleteDeviceResponse.cpp
  src/v20180123/model/AppIssueDeviceControlRequest.cpp
  src/v20180123/model/DeviceStatus.cpp
  src/v20180123/model/DeleteProductResponse.cpp
  src/v20180123/model/AppGetUserResponse.cpp
  src/v20180123/model/AppUpdateUserRequest.cpp
  src/v20180123/model/GetDebugLogResponse.cpp
  src/v20180123/model/AppUpdateUserResponse.cpp
  src/v20180123/model/Device.cpp
  src/v20180123/model/GetRulesRequest.cpp
  src/v20180123/model/Rule.cpp
  src/v20180123/model/IssueDeviceControlResponse.cpp
  src/v20180123/model/GetDataHistoryResponse.cpp
  src/v20180123/model/Action.cpp
  src/v20180123/model/PublishMsgResponse.cpp
  src/v20180123/model/AppGetDevicesResponse.cpp
  src/v20180123/model/CkafkaAction.cpp
  src/v20180123/model/AddDeviceRequest.cpp
  src/v20180123/model/UpdateProductRequest.cpp
  src/v20180123/model/DeleteRuleResponse.cpp
  src/v20180123/model/GetDeviceSignaturesRequest.cpp
  src/v20180123/model/GetRuleResponse.cpp
  src/v20180123/model/AppUpdateDeviceResponse.cpp
  src/v20180123/model/Product.cpp
  src/v20180123/model/DebugLogEntry.cpp
  src/v20180123/model/GetDeviceStatusesRequest.cpp
  src/v20180123/model/GetDeviceStatusesResponse.cpp
  src/v20180123/model/UnassociateSubDeviceFromGatewayProductRequest.cpp
  src/v20180123/model/AppDeleteDeviceRequest.cpp
  src/v20180123/model/StringData.cpp
  src/v20180123/model/AppGetDeviceStatusesResponse.cpp
  src/v20180123/model/GetTopicsResponse.cpp
  src/v20180123/model/AppGetDeviceDataRequest.cpp
  src/v20180123/model/AppAddUserResponse.cpp
  src/v20180123/model/DeviceEntry.cpp
  src/v20180123/model/GetDeviceLogRequest.cpp
  src/v20180123/model/AddDeviceResponse.cpp
  src/v20180123/model/ActivateRuleRequest.cpp
  src/v20180123/model/AppResetPasswordRequest.cpp
  src/v20180123/model/DeleteTopicResponse.cpp
  src/v20180123/model/AppDevice.cpp
  src/v20180123/model/GetTopicsRequest.cpp
  src/v20180123/model/DeviceStatData.cpp
  src/v20180123/model/EnumData.cpp
  src/v20180123/model/DeleteDeviceResponse.cpp
  src/v20180123/model/AppSecureAddDeviceResponse.cpp
  src/v20180123/model/AppSecureAddDeviceRequest.cpp
  src/v20180123/model/AppIssueDeviceControlResponse.cpp
  src/v20180123/model/TopicAction.cpp
  )

set(iot_include
    include/tencentcloud/iot
  )

add_library(iot ${LIB_TYPE}
  ${iot_public_header}
  ${iot_public_header_model}
  ${iot_src})

set_target_properties(iot
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}iot
  )

target_include_directories(iot
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(iot
  core)

#install(FILES ${iot_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/iot/v20180123)
#install(FILES ${iot_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/iot/v20180123/model)
install(DIRECTORY ${iot_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS iot
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
