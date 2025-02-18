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

set(trabbit_public_header
  include/tencentcloud/trabbit/v20230418/TrabbitClient.h
  )

set(trabbit_public_header_model
  include/tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessConnectionResponse.h
  include/tencentcloud/trabbit/v20230418/model/DeleteRabbitMQServerlessPermissionResponse.h
  include/tencentcloud/trabbit/v20230418/model/RabbitMQBindingListInfo.h
  include/tencentcloud/trabbit/v20230418/model/ModifyRabbitMQServerlessUserResponse.h
  include/tencentcloud/trabbit/v20230418/model/CreateRabbitMQServerlessVirtualHostRequest.h
  include/tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessUserResponse.h
  include/tencentcloud/trabbit/v20230418/model/ModifyRabbitMQServerlessExchangeResponse.h
  include/tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessConsumersResponse.h
  include/tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessQueueDetailResponse.h
  include/tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessVirtualHostRequest.h
  include/tencentcloud/trabbit/v20230418/model/ModifyRabbitMQServerlessVirtualHostRequest.h
  include/tencentcloud/trabbit/v20230418/model/CreateRabbitMQServerlessUserResponse.h
  include/tencentcloud/trabbit/v20230418/model/DeleteRabbitMQServerlessQueueRequest.h
  include/tencentcloud/trabbit/v20230418/model/ListRabbitMQServerlessInstancesResponse.h
  include/tencentcloud/trabbit/v20230418/model/CreateRabbitMQServerlessUserRequest.h
  include/tencentcloud/trabbit/v20230418/model/ModifyRabbitMQServerlessUserRequest.h
  include/tencentcloud/trabbit/v20230418/model/DeleteRabbitMQServerlessPermissionRequest.h
  include/tencentcloud/trabbit/v20230418/model/CreateRabbitMQServerlessVirtualHostResponse.h
  include/tencentcloud/trabbit/v20230418/model/ModifyRabbitMQServerlessInstanceRequest.h
  include/tencentcloud/trabbit/v20230418/model/RabbitMQServerlessInstance.h
  include/tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessExchangesResponse.h
  include/tencentcloud/trabbit/v20230418/model/DeleteRabbitMQServerlessVirtualHostResponse.h
  include/tencentcloud/trabbit/v20230418/model/RabbitMQUser.h
  include/tencentcloud/trabbit/v20230418/model/RabbitMQServerlessAccessInfo.h
  include/tencentcloud/trabbit/v20230418/model/RabbitMQPermission.h
  include/tencentcloud/trabbit/v20230418/model/QueueQuota.h
  include/tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessVirtualHostResponse.h
  include/tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessQueuesResponse.h
  include/tencentcloud/trabbit/v20230418/model/ModifyRabbitMQServerlessInstanceResponse.h
  include/tencentcloud/trabbit/v20230418/model/ModifyRabbitMQServerlessVirtualHostResponse.h
  include/tencentcloud/trabbit/v20230418/model/CreateRabbitMQServerlessExchangeRequest.h
  include/tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessConnectionRequest.h
  include/tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessUserRequest.h
  include/tencentcloud/trabbit/v20230418/model/DeleteRabbitMQServerlessUserResponse.h
  include/tencentcloud/trabbit/v20230418/model/RabbitMQClusterInfo.h
  include/tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessBindingsResponse.h
  include/tencentcloud/trabbit/v20230418/model/CreateRabbitMQServerlessExchangeResponse.h
  include/tencentcloud/trabbit/v20230418/model/DeleteRabbitMQServerlessExchangeResponse.h
  include/tencentcloud/trabbit/v20230418/model/DeleteRabbitMQServerlessUserRequest.h
  include/tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessConsumersRequest.h
  include/tencentcloud/trabbit/v20230418/model/RabbitMQConsumersListInfo.h
  include/tencentcloud/trabbit/v20230418/model/CreateRabbitMQServerlessBindingResponse.h
  include/tencentcloud/trabbit/v20230418/model/UserQuota.h
  include/tencentcloud/trabbit/v20230418/model/ModifyRabbitMQServerlessPermissionRequest.h
  include/tencentcloud/trabbit/v20230418/model/CreateRabbitMQServerlessQueueRequest.h
  include/tencentcloud/trabbit/v20230418/model/DeleteRabbitMQServerlessBindingRequest.h
  include/tencentcloud/trabbit/v20230418/model/RabbitMQVirtualHostStatistics.h
  include/tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessQueueDetailRequest.h
  include/tencentcloud/trabbit/v20230418/model/RabbitMQQueueListInfo.h
  include/tencentcloud/trabbit/v20230418/model/Filter.h
  include/tencentcloud/trabbit/v20230418/model/ModifyRabbitMQServerlessPermissionResponse.h
  include/tencentcloud/trabbit/v20230418/model/DeleteRabbitMQServerlessExchangeRequest.h
  include/tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessExchangeDetailRequest.h
  include/tencentcloud/trabbit/v20230418/model/RabbitMQClusterSpecInfo.h
  include/tencentcloud/trabbit/v20230418/model/ModifyRabbitMQServerlessQueueResponse.h
  include/tencentcloud/trabbit/v20230418/model/CreateRabbitMQServerlessBindingRequest.h
  include/tencentcloud/trabbit/v20230418/model/RabbitMQServerlessEndpoint.h
  include/tencentcloud/trabbit/v20230418/model/RabbitMQVirtualHostInfo.h
  include/tencentcloud/trabbit/v20230418/model/ExchangeQuota.h
  include/tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessInstanceResponse.h
  include/tencentcloud/trabbit/v20230418/model/ListRabbitMQServerlessInstancesRequest.h
  include/tencentcloud/trabbit/v20230418/model/RabbitMQConnection.h
  include/tencentcloud/trabbit/v20230418/model/RabbitMQQueueListConsumerDetailInfo.h
  include/tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessInstanceRequest.h
  include/tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessPermissionRequest.h
  include/tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessExchangeDetailResponse.h
  include/tencentcloud/trabbit/v20230418/model/VpcEndpointInfo.h
  include/tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessExchangesRequest.h
  include/tencentcloud/trabbit/v20230418/model/RabbitMQServerlessWhiteListInfo.h
  include/tencentcloud/trabbit/v20230418/model/DeleteRabbitMQServerlessQueueResponse.h
  include/tencentcloud/trabbit/v20230418/model/CreateRabbitMQServerlessQueueResponse.h
  include/tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessQueuesRequest.h
  include/tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessBindingsRequest.h
  include/tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessPermissionResponse.h
  include/tencentcloud/trabbit/v20230418/model/DeleteRabbitMQServerlessBindingResponse.h
  include/tencentcloud/trabbit/v20230418/model/VirtualHostQuota.h
  include/tencentcloud/trabbit/v20230418/model/DeleteRabbitMQServerlessVirtualHostRequest.h
  include/tencentcloud/trabbit/v20230418/model/ModifyRabbitMQServerlessExchangeRequest.h
  include/tencentcloud/trabbit/v20230418/model/RabbitMQExchangeListInfo.h
  include/tencentcloud/trabbit/v20230418/model/ModifyRabbitMQServerlessQueueRequest.h
  )

set(trabbit_src
  src/v20230418/TrabbitClient.cpp
  src/v20230418/model/DescribeRabbitMQServerlessConnectionResponse.cpp
  src/v20230418/model/DeleteRabbitMQServerlessPermissionResponse.cpp
  src/v20230418/model/RabbitMQBindingListInfo.cpp
  src/v20230418/model/ModifyRabbitMQServerlessUserResponse.cpp
  src/v20230418/model/CreateRabbitMQServerlessVirtualHostRequest.cpp
  src/v20230418/model/DescribeRabbitMQServerlessUserResponse.cpp
  src/v20230418/model/ModifyRabbitMQServerlessExchangeResponse.cpp
  src/v20230418/model/DescribeRabbitMQServerlessConsumersResponse.cpp
  src/v20230418/model/DescribeRabbitMQServerlessQueueDetailResponse.cpp
  src/v20230418/model/DescribeRabbitMQServerlessVirtualHostRequest.cpp
  src/v20230418/model/ModifyRabbitMQServerlessVirtualHostRequest.cpp
  src/v20230418/model/CreateRabbitMQServerlessUserResponse.cpp
  src/v20230418/model/DeleteRabbitMQServerlessQueueRequest.cpp
  src/v20230418/model/ListRabbitMQServerlessInstancesResponse.cpp
  src/v20230418/model/CreateRabbitMQServerlessUserRequest.cpp
  src/v20230418/model/ModifyRabbitMQServerlessUserRequest.cpp
  src/v20230418/model/DeleteRabbitMQServerlessPermissionRequest.cpp
  src/v20230418/model/CreateRabbitMQServerlessVirtualHostResponse.cpp
  src/v20230418/model/ModifyRabbitMQServerlessInstanceRequest.cpp
  src/v20230418/model/RabbitMQServerlessInstance.cpp
  src/v20230418/model/DescribeRabbitMQServerlessExchangesResponse.cpp
  src/v20230418/model/DeleteRabbitMQServerlessVirtualHostResponse.cpp
  src/v20230418/model/RabbitMQUser.cpp
  src/v20230418/model/RabbitMQServerlessAccessInfo.cpp
  src/v20230418/model/RabbitMQPermission.cpp
  src/v20230418/model/QueueQuota.cpp
  src/v20230418/model/DescribeRabbitMQServerlessVirtualHostResponse.cpp
  src/v20230418/model/DescribeRabbitMQServerlessQueuesResponse.cpp
  src/v20230418/model/ModifyRabbitMQServerlessInstanceResponse.cpp
  src/v20230418/model/ModifyRabbitMQServerlessVirtualHostResponse.cpp
  src/v20230418/model/CreateRabbitMQServerlessExchangeRequest.cpp
  src/v20230418/model/DescribeRabbitMQServerlessConnectionRequest.cpp
  src/v20230418/model/DescribeRabbitMQServerlessUserRequest.cpp
  src/v20230418/model/DeleteRabbitMQServerlessUserResponse.cpp
  src/v20230418/model/RabbitMQClusterInfo.cpp
  src/v20230418/model/DescribeRabbitMQServerlessBindingsResponse.cpp
  src/v20230418/model/CreateRabbitMQServerlessExchangeResponse.cpp
  src/v20230418/model/DeleteRabbitMQServerlessExchangeResponse.cpp
  src/v20230418/model/DeleteRabbitMQServerlessUserRequest.cpp
  src/v20230418/model/DescribeRabbitMQServerlessConsumersRequest.cpp
  src/v20230418/model/RabbitMQConsumersListInfo.cpp
  src/v20230418/model/CreateRabbitMQServerlessBindingResponse.cpp
  src/v20230418/model/UserQuota.cpp
  src/v20230418/model/ModifyRabbitMQServerlessPermissionRequest.cpp
  src/v20230418/model/CreateRabbitMQServerlessQueueRequest.cpp
  src/v20230418/model/DeleteRabbitMQServerlessBindingRequest.cpp
  src/v20230418/model/RabbitMQVirtualHostStatistics.cpp
  src/v20230418/model/DescribeRabbitMQServerlessQueueDetailRequest.cpp
  src/v20230418/model/RabbitMQQueueListInfo.cpp
  src/v20230418/model/Filter.cpp
  src/v20230418/model/ModifyRabbitMQServerlessPermissionResponse.cpp
  src/v20230418/model/DeleteRabbitMQServerlessExchangeRequest.cpp
  src/v20230418/model/DescribeRabbitMQServerlessExchangeDetailRequest.cpp
  src/v20230418/model/RabbitMQClusterSpecInfo.cpp
  src/v20230418/model/ModifyRabbitMQServerlessQueueResponse.cpp
  src/v20230418/model/CreateRabbitMQServerlessBindingRequest.cpp
  src/v20230418/model/RabbitMQServerlessEndpoint.cpp
  src/v20230418/model/RabbitMQVirtualHostInfo.cpp
  src/v20230418/model/ExchangeQuota.cpp
  src/v20230418/model/DescribeRabbitMQServerlessInstanceResponse.cpp
  src/v20230418/model/ListRabbitMQServerlessInstancesRequest.cpp
  src/v20230418/model/RabbitMQConnection.cpp
  src/v20230418/model/RabbitMQQueueListConsumerDetailInfo.cpp
  src/v20230418/model/DescribeRabbitMQServerlessInstanceRequest.cpp
  src/v20230418/model/DescribeRabbitMQServerlessPermissionRequest.cpp
  src/v20230418/model/DescribeRabbitMQServerlessExchangeDetailResponse.cpp
  src/v20230418/model/VpcEndpointInfo.cpp
  src/v20230418/model/DescribeRabbitMQServerlessExchangesRequest.cpp
  src/v20230418/model/RabbitMQServerlessWhiteListInfo.cpp
  src/v20230418/model/DeleteRabbitMQServerlessQueueResponse.cpp
  src/v20230418/model/CreateRabbitMQServerlessQueueResponse.cpp
  src/v20230418/model/DescribeRabbitMQServerlessQueuesRequest.cpp
  src/v20230418/model/DescribeRabbitMQServerlessBindingsRequest.cpp
  src/v20230418/model/DescribeRabbitMQServerlessPermissionResponse.cpp
  src/v20230418/model/DeleteRabbitMQServerlessBindingResponse.cpp
  src/v20230418/model/VirtualHostQuota.cpp
  src/v20230418/model/DeleteRabbitMQServerlessVirtualHostRequest.cpp
  src/v20230418/model/ModifyRabbitMQServerlessExchangeRequest.cpp
  src/v20230418/model/RabbitMQExchangeListInfo.cpp
  src/v20230418/model/ModifyRabbitMQServerlessQueueRequest.cpp
  )

set(trabbit_include
    include/tencentcloud/trabbit
  )

add_library(trabbit ${LIB_TYPE}
  ${trabbit_public_header}
  ${trabbit_public_header_model}
  ${trabbit_src})

set_target_properties(trabbit
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}trabbit
  )

target_include_directories(trabbit
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(trabbit
  core)

#install(FILES ${trabbit_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/trabbit/v20230418)
#install(FILES ${trabbit_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/trabbit/v20230418/model)
install(DIRECTORY ${trabbit_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS trabbit
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
