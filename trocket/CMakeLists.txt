#
# Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

set(trocket_public_header
  include/tencentcloud/trocket/v20230308/TrocketClient.h
  )

set(trocket_public_header_model
  include/tencentcloud/trocket/v20230308/model/DetailedRolePerm.h
  include/tencentcloud/trocket/v20230308/model/DescribeProductSKUsRequest.h
  include/tencentcloud/trocket/v20230308/model/CreateMigrationTaskRequest.h
  include/tencentcloud/trocket/v20230308/model/ResetConsumerGroupOffsetResponse.h
  include/tencentcloud/trocket/v20230308/model/DescribeSmoothMigrationTaskListRequest.h
  include/tencentcloud/trocket/v20230308/model/ProductSKU.h
  include/tencentcloud/trocket/v20230308/model/DescribeRoleListResponse.h
  include/tencentcloud/trocket/v20230308/model/CreateInstanceResponse.h
  include/tencentcloud/trocket/v20230308/model/SourceClusterTopicConfig.h
  include/tencentcloud/trocket/v20230308/model/ConsumeGroupItem.h
  include/tencentcloud/trocket/v20230308/model/DescribeMessageListRequest.h
  include/tencentcloud/trocket/v20230308/model/RetryPolicy.h
  include/tencentcloud/trocket/v20230308/model/ModifyInstanceRequest.h
  include/tencentcloud/trocket/v20230308/model/MigrationTaskItem.h
  include/tencentcloud/trocket/v20230308/model/FusionInstanceItem.h
  include/tencentcloud/trocket/v20230308/model/InstanceItemExtraInfo.h
  include/tencentcloud/trocket/v20230308/model/DescribeConsumerGroupResponse.h
  include/tencentcloud/trocket/v20230308/model/ImportSourceClusterConsumerGroupsResponse.h
  include/tencentcloud/trocket/v20230308/model/DeleteTopicRequest.h
  include/tencentcloud/trocket/v20230308/model/DescribeSmoothMigrationTaskListResponse.h
  include/tencentcloud/trocket/v20230308/model/DescribeMigrationTaskListResponse.h
  include/tencentcloud/trocket/v20230308/model/VpcInfo.h
  include/tencentcloud/trocket/v20230308/model/DescribeRoleListRequest.h
  include/tencentcloud/trocket/v20230308/model/DescribeMigratingTopicStatsResponse.h
  include/tencentcloud/trocket/v20230308/model/ImportSourceClusterConsumerGroupsRequest.h
  include/tencentcloud/trocket/v20230308/model/DescribeConsumerLagRequest.h
  include/tencentcloud/trocket/v20230308/model/SendMessageRequest.h
  include/tencentcloud/trocket/v20230308/model/DescribeMigratingGroupStatsRequest.h
  include/tencentcloud/trocket/v20230308/model/Tag.h
  include/tencentcloud/trocket/v20230308/model/DescribeSourceClusterGroupListResponse.h
  include/tencentcloud/trocket/v20230308/model/DescribeMessageListResponse.h
  include/tencentcloud/trocket/v20230308/model/DeleteSmoothMigrationTaskRequest.h
  include/tencentcloud/trocket/v20230308/model/DescribeInstanceListResponse.h
  include/tencentcloud/trocket/v20230308/model/DescribeConsumerClientListResponse.h
  include/tencentcloud/trocket/v20230308/model/ModifyInstanceResponse.h
  include/tencentcloud/trocket/v20230308/model/CreateConsumerGroupRequest.h
  include/tencentcloud/trocket/v20230308/model/ClientSubscriptionInfo.h
  include/tencentcloud/trocket/v20230308/model/ChangeMigratingTopicToNextStageResponse.h
  include/tencentcloud/trocket/v20230308/model/DescribeSourceClusterGroupListRequest.h
  include/tencentcloud/trocket/v20230308/model/DescribeInstanceListRequest.h
  include/tencentcloud/trocket/v20230308/model/DescribeMigrationTaskListRequest.h
  include/tencentcloud/trocket/v20230308/model/VerifyMessageConsumptionResponse.h
  include/tencentcloud/trocket/v20230308/model/ModifyRoleResponse.h
  include/tencentcloud/trocket/v20230308/model/TopicStageChangeResult.h
  include/tencentcloud/trocket/v20230308/model/ImportSourceClusterTopicsRequest.h
  include/tencentcloud/trocket/v20230308/model/SourceClusterGroupConfig.h
  include/tencentcloud/trocket/v20230308/model/DeleteInstanceResponse.h
  include/tencentcloud/trocket/v20230308/model/DescribeTopicResponse.h
  include/tencentcloud/trocket/v20230308/model/SmoothMigrationTaskItem.h
  include/tencentcloud/trocket/v20230308/model/ModifyRoleRequest.h
  include/tencentcloud/trocket/v20230308/model/DescribeFusionInstanceListResponse.h
  include/tencentcloud/trocket/v20230308/model/CreateTopicRequest.h
  include/tencentcloud/trocket/v20230308/model/DescribeMessageRequest.h
  include/tencentcloud/trocket/v20230308/model/DeleteRoleRequest.h
  include/tencentcloud/trocket/v20230308/model/ResendDeadLetterMessageResponse.h
  include/tencentcloud/trocket/v20230308/model/ModifyConsumerGroupResponse.h
  include/tencentcloud/trocket/v20230308/model/DescribeMigratingTopicStatsRequest.h
  include/tencentcloud/trocket/v20230308/model/DeleteConsumerGroupRequest.h
  include/tencentcloud/trocket/v20230308/model/CreateConsumerGroupResponse.h
  include/tencentcloud/trocket/v20230308/model/RollbackMigratingTopicStageRequest.h
  include/tencentcloud/trocket/v20230308/model/DescribeTopicListByGroupResponse.h
  include/tencentcloud/trocket/v20230308/model/DescribeMessageTraceResponse.h
  include/tencentcloud/trocket/v20230308/model/DoHealthCheckOnMigratingTopicRequest.h
  include/tencentcloud/trocket/v20230308/model/DescribeProducerListRequest.h
  include/tencentcloud/trocket/v20230308/model/DescribeMigratingTopicListResponse.h
  include/tencentcloud/trocket/v20230308/model/InstanceItem.h
  include/tencentcloud/trocket/v20230308/model/VerifyMessageConsumptionRequest.h
  include/tencentcloud/trocket/v20230308/model/DescribeTopicRequest.h
  include/tencentcloud/trocket/v20230308/model/DescribeMessageTraceRequest.h
  include/tencentcloud/trocket/v20230308/model/DeleteSmoothMigrationTaskResponse.h
  include/tencentcloud/trocket/v20230308/model/CreateTopicResponse.h
  include/tencentcloud/trocket/v20230308/model/DescribeMigratingGroupStatsResponse.h
  include/tencentcloud/trocket/v20230308/model/TopicConsumeStats.h
  include/tencentcloud/trocket/v20230308/model/RemoveMigratingTopicRequest.h
  include/tencentcloud/trocket/v20230308/model/DescribeMessageResponse.h
  include/tencentcloud/trocket/v20230308/model/ZoneScheduledItem.h
  include/tencentcloud/trocket/v20230308/model/ImportSourceClusterTopicsResponse.h
  include/tencentcloud/trocket/v20230308/model/DescribeTopicListRequest.h
  include/tencentcloud/trocket/v20230308/model/ModifyConsumerGroupRequest.h
  include/tencentcloud/trocket/v20230308/model/DescribeConsumerGroupRequest.h
  include/tencentcloud/trocket/v20230308/model/DescribeConsumerGroupListRequest.h
  include/tencentcloud/trocket/v20230308/model/TopicItem.h
  include/tencentcloud/trocket/v20230308/model/SubscriptionData.h
  include/tencentcloud/trocket/v20230308/model/CreateInstanceRequest.h
  include/tencentcloud/trocket/v20230308/model/ConsumerClient.h
  include/tencentcloud/trocket/v20230308/model/MessageTraceItem.h
  include/tencentcloud/trocket/v20230308/model/DescribeConsumerClientRequest.h
  include/tencentcloud/trocket/v20230308/model/ModifyTopicResponse.h
  include/tencentcloud/trocket/v20230308/model/SendMessageResponse.h
  include/tencentcloud/trocket/v20230308/model/DescribeConsumerLagResponse.h
  include/tencentcloud/trocket/v20230308/model/ChangeMigratingTopicToNextStageRequest.h
  include/tencentcloud/trocket/v20230308/model/DeleteRoleResponse.h
  include/tencentcloud/trocket/v20230308/model/DescribeTopicListByGroupRequest.h
  include/tencentcloud/trocket/v20230308/model/DescribeMigratingTopicListRequest.h
  include/tencentcloud/trocket/v20230308/model/Filter.h
  include/tencentcloud/trocket/v20230308/model/ModifyTopicRequest.h
  include/tencentcloud/trocket/v20230308/model/DescribeInstanceResponse.h
  include/tencentcloud/trocket/v20230308/model/DescribeConsumerClientResponse.h
  include/tencentcloud/trocket/v20230308/model/DeleteInstanceRequest.h
  include/tencentcloud/trocket/v20230308/model/MessageTrackItem.h
  include/tencentcloud/trocket/v20230308/model/DescribeProducerListResponse.h
  include/tencentcloud/trocket/v20230308/model/ResendDeadLetterMessageRequest.h
  include/tencentcloud/trocket/v20230308/model/RollbackMigratingTopicStageResponse.h
  include/tencentcloud/trocket/v20230308/model/DescribeFusionInstanceListRequest.h
  include/tencentcloud/trocket/v20230308/model/DoHealthCheckOnMigratingTopicResponse.h
  include/tencentcloud/trocket/v20230308/model/CreateRoleResponse.h
  include/tencentcloud/trocket/v20230308/model/ModifyInstanceEndpointRequest.h
  include/tencentcloud/trocket/v20230308/model/CreateMigrationTaskResponse.h
  include/tencentcloud/trocket/v20230308/model/DescribeTopicListResponse.h
  include/tencentcloud/trocket/v20230308/model/DescribeConsumerClientListRequest.h
  include/tencentcloud/trocket/v20230308/model/MigratingTopic.h
  include/tencentcloud/trocket/v20230308/model/CreateRoleRequest.h
  include/tencentcloud/trocket/v20230308/model/DeleteConsumerGroupResponse.h
  include/tencentcloud/trocket/v20230308/model/Endpoint.h
  include/tencentcloud/trocket/v20230308/model/MessageItem.h
  include/tencentcloud/trocket/v20230308/model/RoleItem.h
  include/tencentcloud/trocket/v20230308/model/TagFilter.h
  include/tencentcloud/trocket/v20230308/model/DescribeConsumerGroupListResponse.h
  include/tencentcloud/trocket/v20230308/model/PriceTag.h
  include/tencentcloud/trocket/v20230308/model/ProducerInfo.h
  include/tencentcloud/trocket/v20230308/model/DeleteTopicResponse.h
  include/tencentcloud/trocket/v20230308/model/ModifyInstanceEndpointResponse.h
  include/tencentcloud/trocket/v20230308/model/DescribeInstanceRequest.h
  include/tencentcloud/trocket/v20230308/model/DescribeProductSKUsResponse.h
  include/tencentcloud/trocket/v20230308/model/RemoveMigratingTopicResponse.h
  include/tencentcloud/trocket/v20230308/model/IpRule.h
  include/tencentcloud/trocket/v20230308/model/ResetConsumerGroupOffsetRequest.h
  )

set(trocket_src
  src/v20230308/TrocketClient.cpp
  src/v20230308/model/DetailedRolePerm.cpp
  src/v20230308/model/DescribeProductSKUsRequest.cpp
  src/v20230308/model/CreateMigrationTaskRequest.cpp
  src/v20230308/model/ResetConsumerGroupOffsetResponse.cpp
  src/v20230308/model/DescribeSmoothMigrationTaskListRequest.cpp
  src/v20230308/model/ProductSKU.cpp
  src/v20230308/model/DescribeRoleListResponse.cpp
  src/v20230308/model/CreateInstanceResponse.cpp
  src/v20230308/model/SourceClusterTopicConfig.cpp
  src/v20230308/model/ConsumeGroupItem.cpp
  src/v20230308/model/DescribeMessageListRequest.cpp
  src/v20230308/model/RetryPolicy.cpp
  src/v20230308/model/ModifyInstanceRequest.cpp
  src/v20230308/model/MigrationTaskItem.cpp
  src/v20230308/model/FusionInstanceItem.cpp
  src/v20230308/model/InstanceItemExtraInfo.cpp
  src/v20230308/model/DescribeConsumerGroupResponse.cpp
  src/v20230308/model/ImportSourceClusterConsumerGroupsResponse.cpp
  src/v20230308/model/DeleteTopicRequest.cpp
  src/v20230308/model/DescribeSmoothMigrationTaskListResponse.cpp
  src/v20230308/model/DescribeMigrationTaskListResponse.cpp
  src/v20230308/model/VpcInfo.cpp
  src/v20230308/model/DescribeRoleListRequest.cpp
  src/v20230308/model/DescribeMigratingTopicStatsResponse.cpp
  src/v20230308/model/ImportSourceClusterConsumerGroupsRequest.cpp
  src/v20230308/model/DescribeConsumerLagRequest.cpp
  src/v20230308/model/SendMessageRequest.cpp
  src/v20230308/model/DescribeMigratingGroupStatsRequest.cpp
  src/v20230308/model/Tag.cpp
  src/v20230308/model/DescribeSourceClusterGroupListResponse.cpp
  src/v20230308/model/DescribeMessageListResponse.cpp
  src/v20230308/model/DeleteSmoothMigrationTaskRequest.cpp
  src/v20230308/model/DescribeInstanceListResponse.cpp
  src/v20230308/model/DescribeConsumerClientListResponse.cpp
  src/v20230308/model/ModifyInstanceResponse.cpp
  src/v20230308/model/CreateConsumerGroupRequest.cpp
  src/v20230308/model/ClientSubscriptionInfo.cpp
  src/v20230308/model/ChangeMigratingTopicToNextStageResponse.cpp
  src/v20230308/model/DescribeSourceClusterGroupListRequest.cpp
  src/v20230308/model/DescribeInstanceListRequest.cpp
  src/v20230308/model/DescribeMigrationTaskListRequest.cpp
  src/v20230308/model/VerifyMessageConsumptionResponse.cpp
  src/v20230308/model/ModifyRoleResponse.cpp
  src/v20230308/model/TopicStageChangeResult.cpp
  src/v20230308/model/ImportSourceClusterTopicsRequest.cpp
  src/v20230308/model/SourceClusterGroupConfig.cpp
  src/v20230308/model/DeleteInstanceResponse.cpp
  src/v20230308/model/DescribeTopicResponse.cpp
  src/v20230308/model/SmoothMigrationTaskItem.cpp
  src/v20230308/model/ModifyRoleRequest.cpp
  src/v20230308/model/DescribeFusionInstanceListResponse.cpp
  src/v20230308/model/CreateTopicRequest.cpp
  src/v20230308/model/DescribeMessageRequest.cpp
  src/v20230308/model/DeleteRoleRequest.cpp
  src/v20230308/model/ResendDeadLetterMessageResponse.cpp
  src/v20230308/model/ModifyConsumerGroupResponse.cpp
  src/v20230308/model/DescribeMigratingTopicStatsRequest.cpp
  src/v20230308/model/DeleteConsumerGroupRequest.cpp
  src/v20230308/model/CreateConsumerGroupResponse.cpp
  src/v20230308/model/RollbackMigratingTopicStageRequest.cpp
  src/v20230308/model/DescribeTopicListByGroupResponse.cpp
  src/v20230308/model/DescribeMessageTraceResponse.cpp
  src/v20230308/model/DoHealthCheckOnMigratingTopicRequest.cpp
  src/v20230308/model/DescribeProducerListRequest.cpp
  src/v20230308/model/DescribeMigratingTopicListResponse.cpp
  src/v20230308/model/InstanceItem.cpp
  src/v20230308/model/VerifyMessageConsumptionRequest.cpp
  src/v20230308/model/DescribeTopicRequest.cpp
  src/v20230308/model/DescribeMessageTraceRequest.cpp
  src/v20230308/model/DeleteSmoothMigrationTaskResponse.cpp
  src/v20230308/model/CreateTopicResponse.cpp
  src/v20230308/model/DescribeMigratingGroupStatsResponse.cpp
  src/v20230308/model/TopicConsumeStats.cpp
  src/v20230308/model/RemoveMigratingTopicRequest.cpp
  src/v20230308/model/DescribeMessageResponse.cpp
  src/v20230308/model/ZoneScheduledItem.cpp
  src/v20230308/model/ImportSourceClusterTopicsResponse.cpp
  src/v20230308/model/DescribeTopicListRequest.cpp
  src/v20230308/model/ModifyConsumerGroupRequest.cpp
  src/v20230308/model/DescribeConsumerGroupRequest.cpp
  src/v20230308/model/DescribeConsumerGroupListRequest.cpp
  src/v20230308/model/TopicItem.cpp
  src/v20230308/model/SubscriptionData.cpp
  src/v20230308/model/CreateInstanceRequest.cpp
  src/v20230308/model/ConsumerClient.cpp
  src/v20230308/model/MessageTraceItem.cpp
  src/v20230308/model/DescribeConsumerClientRequest.cpp
  src/v20230308/model/ModifyTopicResponse.cpp
  src/v20230308/model/SendMessageResponse.cpp
  src/v20230308/model/DescribeConsumerLagResponse.cpp
  src/v20230308/model/ChangeMigratingTopicToNextStageRequest.cpp
  src/v20230308/model/DeleteRoleResponse.cpp
  src/v20230308/model/DescribeTopicListByGroupRequest.cpp
  src/v20230308/model/DescribeMigratingTopicListRequest.cpp
  src/v20230308/model/Filter.cpp
  src/v20230308/model/ModifyTopicRequest.cpp
  src/v20230308/model/DescribeInstanceResponse.cpp
  src/v20230308/model/DescribeConsumerClientResponse.cpp
  src/v20230308/model/DeleteInstanceRequest.cpp
  src/v20230308/model/MessageTrackItem.cpp
  src/v20230308/model/DescribeProducerListResponse.cpp
  src/v20230308/model/ResendDeadLetterMessageRequest.cpp
  src/v20230308/model/RollbackMigratingTopicStageResponse.cpp
  src/v20230308/model/DescribeFusionInstanceListRequest.cpp
  src/v20230308/model/DoHealthCheckOnMigratingTopicResponse.cpp
  src/v20230308/model/CreateRoleResponse.cpp
  src/v20230308/model/ModifyInstanceEndpointRequest.cpp
  src/v20230308/model/CreateMigrationTaskResponse.cpp
  src/v20230308/model/DescribeTopicListResponse.cpp
  src/v20230308/model/DescribeConsumerClientListRequest.cpp
  src/v20230308/model/MigratingTopic.cpp
  src/v20230308/model/CreateRoleRequest.cpp
  src/v20230308/model/DeleteConsumerGroupResponse.cpp
  src/v20230308/model/Endpoint.cpp
  src/v20230308/model/MessageItem.cpp
  src/v20230308/model/RoleItem.cpp
  src/v20230308/model/TagFilter.cpp
  src/v20230308/model/DescribeConsumerGroupListResponse.cpp
  src/v20230308/model/PriceTag.cpp
  src/v20230308/model/ProducerInfo.cpp
  src/v20230308/model/DeleteTopicResponse.cpp
  src/v20230308/model/ModifyInstanceEndpointResponse.cpp
  src/v20230308/model/DescribeInstanceRequest.cpp
  src/v20230308/model/DescribeProductSKUsResponse.cpp
  src/v20230308/model/RemoveMigratingTopicResponse.cpp
  src/v20230308/model/IpRule.cpp
  src/v20230308/model/ResetConsumerGroupOffsetRequest.cpp
  )

set(trocket_include
    include/tencentcloud/trocket
  )

add_library(trocket ${LIB_TYPE}
  ${trocket_public_header}
  ${trocket_public_header_model}
  ${trocket_src})

set_target_properties(trocket
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}trocket
  )

target_include_directories(trocket
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(trocket
  core)

#install(FILES ${trocket_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/trocket/v20230308)
#install(FILES ${trocket_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/trocket/v20230308/model)
install(DIRECTORY ${trocket_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS trocket
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
