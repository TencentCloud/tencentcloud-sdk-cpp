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

set(tdmq_public_header
  include/tencentcloud/tdmq/v20200217/TdmqClient.h
  )

set(tdmq_public_header_model
  include/tencentcloud/tdmq/v20200217/model/DescribeRolesResponse.h
  include/tencentcloud/tdmq/v20200217/model/DescribeBindClustersResponse.h
  include/tencentcloud/tdmq/v20200217/model/CmqDeadLetterPolicy.h
  include/tencentcloud/tdmq/v20200217/model/BundleSetOpt.h
  include/tencentcloud/tdmq/v20200217/model/DescribeSubscriptionsRequest.h
  include/tencentcloud/tdmq/v20200217/model/Role.h
  include/tencentcloud/tdmq/v20200217/model/DeleteClusterResponse.h
  include/tencentcloud/tdmq/v20200217/model/SendBatchMessagesResponse.h
  include/tencentcloud/tdmq/v20200217/model/ModifyCmqSubscriptionAttributeResponse.h
  include/tencentcloud/tdmq/v20200217/model/CreateCmqTopicRequest.h
  include/tencentcloud/tdmq/v20200217/model/ReceiveMessageRequest.h
  include/tencentcloud/tdmq/v20200217/model/BindCluster.h
  include/tencentcloud/tdmq/v20200217/model/ModifyClusterResponse.h
  include/tencentcloud/tdmq/v20200217/model/DescribeCmqQueuesResponse.h
  include/tencentcloud/tdmq/v20200217/model/DeleteCmqQueueResponse.h
  include/tencentcloud/tdmq/v20200217/model/CreateCmqSubscribeRequest.h
  include/tencentcloud/tdmq/v20200217/model/RewindCmqQueueResponse.h
  include/tencentcloud/tdmq/v20200217/model/DeleteClusterRequest.h
  include/tencentcloud/tdmq/v20200217/model/CmqSubscription.h
  include/tencentcloud/tdmq/v20200217/model/DeleteCmqTopicResponse.h
  include/tencentcloud/tdmq/v20200217/model/CreateSubscriptionRequest.h
  include/tencentcloud/tdmq/v20200217/model/DescribeCmqTopicDetailResponse.h
  include/tencentcloud/tdmq/v20200217/model/CmqQueue.h
  include/tencentcloud/tdmq/v20200217/model/CreateEnvironmentResponse.h
  include/tencentcloud/tdmq/v20200217/model/Producer.h
  include/tencentcloud/tdmq/v20200217/model/CreateSubscriptionResponse.h
  include/tencentcloud/tdmq/v20200217/model/SendMsgResponse.h
  include/tencentcloud/tdmq/v20200217/model/ModifyCmqTopicAttributeResponse.h
  include/tencentcloud/tdmq/v20200217/model/DescribeCmqSubscriptionDetailRequest.h
  include/tencentcloud/tdmq/v20200217/model/Topic.h
  include/tencentcloud/tdmq/v20200217/model/DescribeEnvironmentsRequest.h
  include/tencentcloud/tdmq/v20200217/model/DescribeCmqQueueDetailResponse.h
  include/tencentcloud/tdmq/v20200217/model/CreateEnvironmentRequest.h
  include/tencentcloud/tdmq/v20200217/model/DeleteTopicsResponse.h
  include/tencentcloud/tdmq/v20200217/model/DescribeClustersRequest.h
  include/tencentcloud/tdmq/v20200217/model/ModifyEnvironmentAttributesRequest.h
  include/tencentcloud/tdmq/v20200217/model/DescribeCmqSubscriptionDetailResponse.h
  include/tencentcloud/tdmq/v20200217/model/VpcBindRecord.h
  include/tencentcloud/tdmq/v20200217/model/RewindCmqQueueRequest.h
  include/tencentcloud/tdmq/v20200217/model/ModifyClusterRequest.h
  include/tencentcloud/tdmq/v20200217/model/DescribeEnvironmentAttributesRequest.h
  include/tencentcloud/tdmq/v20200217/model/AcknowledgeMessageRequest.h
  include/tencentcloud/tdmq/v20200217/model/DescribeTopicsResponse.h
  include/tencentcloud/tdmq/v20200217/model/PublishCmqMsgResponse.h
  include/tencentcloud/tdmq/v20200217/model/SendCmqMsgRequest.h
  include/tencentcloud/tdmq/v20200217/model/AcknowledgeMessageResponse.h
  include/tencentcloud/tdmq/v20200217/model/DeleteEnvironmentRolesResponse.h
  include/tencentcloud/tdmq/v20200217/model/DescribeClusterDetailRequest.h
  include/tencentcloud/tdmq/v20200217/model/ModifyRoleResponse.h
  include/tencentcloud/tdmq/v20200217/model/Tag.h
  include/tencentcloud/tdmq/v20200217/model/DescribeNamespaceBundlesOptResponse.h
  include/tencentcloud/tdmq/v20200217/model/SendMessagesRequest.h
  include/tencentcloud/tdmq/v20200217/model/ModifyCmqTopicAttributeRequest.h
  include/tencentcloud/tdmq/v20200217/model/DeleteRolesRequest.h
  include/tencentcloud/tdmq/v20200217/model/Subscription.h
  include/tencentcloud/tdmq/v20200217/model/CreateCmqSubscribeResponse.h
  include/tencentcloud/tdmq/v20200217/model/DescribeSubscriptionsResponse.h
  include/tencentcloud/tdmq/v20200217/model/ModifyRoleRequest.h
  include/tencentcloud/tdmq/v20200217/model/SendMessagesResponse.h
  include/tencentcloud/tdmq/v20200217/model/CreateTopicRequest.h
  include/tencentcloud/tdmq/v20200217/model/DescribeTopicsRequest.h
  include/tencentcloud/tdmq/v20200217/model/DeleteEnvironmentsResponse.h
  include/tencentcloud/tdmq/v20200217/model/DescribeEnvironmentRolesResponse.h
  include/tencentcloud/tdmq/v20200217/model/ClearCmqQueueRequest.h
  include/tencentcloud/tdmq/v20200217/model/FilterSubscription.h
  include/tencentcloud/tdmq/v20200217/model/DescribeCmqTopicsResponse.h
  include/tencentcloud/tdmq/v20200217/model/DescribeCmqTopicDetailRequest.h
  include/tencentcloud/tdmq/v20200217/model/CmqTopic.h
  include/tencentcloud/tdmq/v20200217/model/UnbindCmqDeadLetterResponse.h
  include/tencentcloud/tdmq/v20200217/model/DescribeNodeHealthOptRequest.h
  include/tencentcloud/tdmq/v20200217/model/DescribeBindVpcsRequest.h
  include/tencentcloud/tdmq/v20200217/model/DescribeClustersResponse.h
  include/tencentcloud/tdmq/v20200217/model/ClearCmqSubscriptionFilterTagsRequest.h
  include/tencentcloud/tdmq/v20200217/model/TopicRecord.h
  include/tencentcloud/tdmq/v20200217/model/DescribeEnvironmentRolesRequest.h
  include/tencentcloud/tdmq/v20200217/model/DeleteRolesResponse.h
  include/tencentcloud/tdmq/v20200217/model/Environment.h
  include/tencentcloud/tdmq/v20200217/model/CreateCmqQueueResponse.h
  include/tencentcloud/tdmq/v20200217/model/PartitionsTopic.h
  include/tencentcloud/tdmq/v20200217/model/ResetMsgSubOffsetByTimestampResponse.h
  include/tencentcloud/tdmq/v20200217/model/CreateClusterResponse.h
  include/tencentcloud/tdmq/v20200217/model/DescribeCmqDeadLetterSourceQueuesRequest.h
  include/tencentcloud/tdmq/v20200217/model/DescribeNodeHealthOptResponse.h
  include/tencentcloud/tdmq/v20200217/model/CreateClusterRequest.h
  include/tencentcloud/tdmq/v20200217/model/ModifyCmqQueueAttributeResponse.h
  include/tencentcloud/tdmq/v20200217/model/CreateTopicResponse.h
  include/tencentcloud/tdmq/v20200217/model/DescribeCmqQueuesRequest.h
  include/tencentcloud/tdmq/v20200217/model/DescribeEnvironmentsResponse.h
  include/tencentcloud/tdmq/v20200217/model/ModifyCmqSubscriptionAttributeRequest.h
  include/tencentcloud/tdmq/v20200217/model/ModifyTopicResponse.h
  include/tencentcloud/tdmq/v20200217/model/ReceiveMessageResponse.h
  include/tencentcloud/tdmq/v20200217/model/CreateCmqTopicResponse.h
  include/tencentcloud/tdmq/v20200217/model/CmqDeadLetterSource.h
  include/tencentcloud/tdmq/v20200217/model/ClearCmqSubscriptionFilterTagsResponse.h
  include/tencentcloud/tdmq/v20200217/model/DescribeCmqTopicsRequest.h
  include/tencentcloud/tdmq/v20200217/model/Filter.h
  include/tencentcloud/tdmq/v20200217/model/Connection.h
  include/tencentcloud/tdmq/v20200217/model/DeleteTopicsRequest.h
  include/tencentcloud/tdmq/v20200217/model/CmqTransactionPolicy.h
  include/tencentcloud/tdmq/v20200217/model/DescribeNamespaceBundlesOptRequest.h
  include/tencentcloud/tdmq/v20200217/model/ModifyTopicRequest.h
  include/tencentcloud/tdmq/v20200217/model/ResetMsgSubOffsetByTimestampRequest.h
  include/tencentcloud/tdmq/v20200217/model/CreateEnvironmentRoleResponse.h
  include/tencentcloud/tdmq/v20200217/model/Consumer.h
  include/tencentcloud/tdmq/v20200217/model/DescribeBindVpcsResponse.h
  include/tencentcloud/tdmq/v20200217/model/DeleteCmqSubscribeRequest.h
  include/tencentcloud/tdmq/v20200217/model/DescribeCmqDeadLetterSourceQueuesResponse.h
  include/tencentcloud/tdmq/v20200217/model/DeleteSubscriptionsResponse.h
  include/tencentcloud/tdmq/v20200217/model/ConsumersSchedule.h
  include/tencentcloud/tdmq/v20200217/model/Cluster.h
  include/tencentcloud/tdmq/v20200217/model/RetentionPolicy.h
  include/tencentcloud/tdmq/v20200217/model/SendMsgRequest.h
  include/tencentcloud/tdmq/v20200217/model/DescribeCmqQueueDetailRequest.h
  include/tencentcloud/tdmq/v20200217/model/CreateRoleResponse.h
  include/tencentcloud/tdmq/v20200217/model/DeleteEnvironmentRolesRequest.h
  include/tencentcloud/tdmq/v20200217/model/ClearCmqQueueResponse.h
  include/tencentcloud/tdmq/v20200217/model/DeleteEnvironmentsRequest.h
  include/tencentcloud/tdmq/v20200217/model/DescribeBindClustersRequest.h
  include/tencentcloud/tdmq/v20200217/model/ModifyEnvironmentAttributesResponse.h
  include/tencentcloud/tdmq/v20200217/model/EnvironmentRole.h
  include/tencentcloud/tdmq/v20200217/model/CreateCmqQueueRequest.h
  include/tencentcloud/tdmq/v20200217/model/ModifyEnvironmentRoleResponse.h
  include/tencentcloud/tdmq/v20200217/model/DeleteCmqQueueRequest.h
  include/tencentcloud/tdmq/v20200217/model/CreateRoleRequest.h
  include/tencentcloud/tdmq/v20200217/model/DescribeProducersRequest.h
  include/tencentcloud/tdmq/v20200217/model/ModifyEnvironmentRoleRequest.h
  include/tencentcloud/tdmq/v20200217/model/DescribeEnvironmentAttributesResponse.h
  include/tencentcloud/tdmq/v20200217/model/SubscriptionTopic.h
  include/tencentcloud/tdmq/v20200217/model/DescribeProducersResponse.h
  include/tencentcloud/tdmq/v20200217/model/SendBatchMessagesRequest.h
  include/tencentcloud/tdmq/v20200217/model/DeleteCmqTopicRequest.h
  include/tencentcloud/tdmq/v20200217/model/SendCmqMsgResponse.h
  include/tencentcloud/tdmq/v20200217/model/PublishCmqMsgRequest.h
  include/tencentcloud/tdmq/v20200217/model/UnbindCmqDeadLetterRequest.h
  include/tencentcloud/tdmq/v20200217/model/ModifyCmqQueueAttributeRequest.h
  include/tencentcloud/tdmq/v20200217/model/DeleteCmqSubscribeResponse.h
  include/tencentcloud/tdmq/v20200217/model/DescribeRolesRequest.h
  include/tencentcloud/tdmq/v20200217/model/DeleteSubscriptionsRequest.h
  include/tencentcloud/tdmq/v20200217/model/DescribeClusterDetailResponse.h
  include/tencentcloud/tdmq/v20200217/model/CreateEnvironmentRoleRequest.h
  )

set(tdmq_src
  src/v20200217/TdmqClient.cpp
  src/v20200217/model/DescribeRolesResponse.cpp
  src/v20200217/model/DescribeBindClustersResponse.cpp
  src/v20200217/model/CmqDeadLetterPolicy.cpp
  src/v20200217/model/BundleSetOpt.cpp
  src/v20200217/model/DescribeSubscriptionsRequest.cpp
  src/v20200217/model/Role.cpp
  src/v20200217/model/DeleteClusterResponse.cpp
  src/v20200217/model/SendBatchMessagesResponse.cpp
  src/v20200217/model/ModifyCmqSubscriptionAttributeResponse.cpp
  src/v20200217/model/CreateCmqTopicRequest.cpp
  src/v20200217/model/ReceiveMessageRequest.cpp
  src/v20200217/model/BindCluster.cpp
  src/v20200217/model/ModifyClusterResponse.cpp
  src/v20200217/model/DescribeCmqQueuesResponse.cpp
  src/v20200217/model/DeleteCmqQueueResponse.cpp
  src/v20200217/model/CreateCmqSubscribeRequest.cpp
  src/v20200217/model/RewindCmqQueueResponse.cpp
  src/v20200217/model/DeleteClusterRequest.cpp
  src/v20200217/model/CmqSubscription.cpp
  src/v20200217/model/DeleteCmqTopicResponse.cpp
  src/v20200217/model/CreateSubscriptionRequest.cpp
  src/v20200217/model/DescribeCmqTopicDetailResponse.cpp
  src/v20200217/model/CmqQueue.cpp
  src/v20200217/model/CreateEnvironmentResponse.cpp
  src/v20200217/model/Producer.cpp
  src/v20200217/model/CreateSubscriptionResponse.cpp
  src/v20200217/model/SendMsgResponse.cpp
  src/v20200217/model/ModifyCmqTopicAttributeResponse.cpp
  src/v20200217/model/DescribeCmqSubscriptionDetailRequest.cpp
  src/v20200217/model/Topic.cpp
  src/v20200217/model/DescribeEnvironmentsRequest.cpp
  src/v20200217/model/DescribeCmqQueueDetailResponse.cpp
  src/v20200217/model/CreateEnvironmentRequest.cpp
  src/v20200217/model/DeleteTopicsResponse.cpp
  src/v20200217/model/DescribeClustersRequest.cpp
  src/v20200217/model/ModifyEnvironmentAttributesRequest.cpp
  src/v20200217/model/DescribeCmqSubscriptionDetailResponse.cpp
  src/v20200217/model/VpcBindRecord.cpp
  src/v20200217/model/RewindCmqQueueRequest.cpp
  src/v20200217/model/ModifyClusterRequest.cpp
  src/v20200217/model/DescribeEnvironmentAttributesRequest.cpp
  src/v20200217/model/AcknowledgeMessageRequest.cpp
  src/v20200217/model/DescribeTopicsResponse.cpp
  src/v20200217/model/PublishCmqMsgResponse.cpp
  src/v20200217/model/SendCmqMsgRequest.cpp
  src/v20200217/model/AcknowledgeMessageResponse.cpp
  src/v20200217/model/DeleteEnvironmentRolesResponse.cpp
  src/v20200217/model/DescribeClusterDetailRequest.cpp
  src/v20200217/model/ModifyRoleResponse.cpp
  src/v20200217/model/Tag.cpp
  src/v20200217/model/DescribeNamespaceBundlesOptResponse.cpp
  src/v20200217/model/SendMessagesRequest.cpp
  src/v20200217/model/ModifyCmqTopicAttributeRequest.cpp
  src/v20200217/model/DeleteRolesRequest.cpp
  src/v20200217/model/Subscription.cpp
  src/v20200217/model/CreateCmqSubscribeResponse.cpp
  src/v20200217/model/DescribeSubscriptionsResponse.cpp
  src/v20200217/model/ModifyRoleRequest.cpp
  src/v20200217/model/SendMessagesResponse.cpp
  src/v20200217/model/CreateTopicRequest.cpp
  src/v20200217/model/DescribeTopicsRequest.cpp
  src/v20200217/model/DeleteEnvironmentsResponse.cpp
  src/v20200217/model/DescribeEnvironmentRolesResponse.cpp
  src/v20200217/model/ClearCmqQueueRequest.cpp
  src/v20200217/model/FilterSubscription.cpp
  src/v20200217/model/DescribeCmqTopicsResponse.cpp
  src/v20200217/model/DescribeCmqTopicDetailRequest.cpp
  src/v20200217/model/CmqTopic.cpp
  src/v20200217/model/UnbindCmqDeadLetterResponse.cpp
  src/v20200217/model/DescribeNodeHealthOptRequest.cpp
  src/v20200217/model/DescribeBindVpcsRequest.cpp
  src/v20200217/model/DescribeClustersResponse.cpp
  src/v20200217/model/ClearCmqSubscriptionFilterTagsRequest.cpp
  src/v20200217/model/TopicRecord.cpp
  src/v20200217/model/DescribeEnvironmentRolesRequest.cpp
  src/v20200217/model/DeleteRolesResponse.cpp
  src/v20200217/model/Environment.cpp
  src/v20200217/model/CreateCmqQueueResponse.cpp
  src/v20200217/model/PartitionsTopic.cpp
  src/v20200217/model/ResetMsgSubOffsetByTimestampResponse.cpp
  src/v20200217/model/CreateClusterResponse.cpp
  src/v20200217/model/DescribeCmqDeadLetterSourceQueuesRequest.cpp
  src/v20200217/model/DescribeNodeHealthOptResponse.cpp
  src/v20200217/model/CreateClusterRequest.cpp
  src/v20200217/model/ModifyCmqQueueAttributeResponse.cpp
  src/v20200217/model/CreateTopicResponse.cpp
  src/v20200217/model/DescribeCmqQueuesRequest.cpp
  src/v20200217/model/DescribeEnvironmentsResponse.cpp
  src/v20200217/model/ModifyCmqSubscriptionAttributeRequest.cpp
  src/v20200217/model/ModifyTopicResponse.cpp
  src/v20200217/model/ReceiveMessageResponse.cpp
  src/v20200217/model/CreateCmqTopicResponse.cpp
  src/v20200217/model/CmqDeadLetterSource.cpp
  src/v20200217/model/ClearCmqSubscriptionFilterTagsResponse.cpp
  src/v20200217/model/DescribeCmqTopicsRequest.cpp
  src/v20200217/model/Filter.cpp
  src/v20200217/model/Connection.cpp
  src/v20200217/model/DeleteTopicsRequest.cpp
  src/v20200217/model/CmqTransactionPolicy.cpp
  src/v20200217/model/DescribeNamespaceBundlesOptRequest.cpp
  src/v20200217/model/ModifyTopicRequest.cpp
  src/v20200217/model/ResetMsgSubOffsetByTimestampRequest.cpp
  src/v20200217/model/CreateEnvironmentRoleResponse.cpp
  src/v20200217/model/Consumer.cpp
  src/v20200217/model/DescribeBindVpcsResponse.cpp
  src/v20200217/model/DeleteCmqSubscribeRequest.cpp
  src/v20200217/model/DescribeCmqDeadLetterSourceQueuesResponse.cpp
  src/v20200217/model/DeleteSubscriptionsResponse.cpp
  src/v20200217/model/ConsumersSchedule.cpp
  src/v20200217/model/Cluster.cpp
  src/v20200217/model/RetentionPolicy.cpp
  src/v20200217/model/SendMsgRequest.cpp
  src/v20200217/model/DescribeCmqQueueDetailRequest.cpp
  src/v20200217/model/CreateRoleResponse.cpp
  src/v20200217/model/DeleteEnvironmentRolesRequest.cpp
  src/v20200217/model/ClearCmqQueueResponse.cpp
  src/v20200217/model/DeleteEnvironmentsRequest.cpp
  src/v20200217/model/DescribeBindClustersRequest.cpp
  src/v20200217/model/ModifyEnvironmentAttributesResponse.cpp
  src/v20200217/model/EnvironmentRole.cpp
  src/v20200217/model/CreateCmqQueueRequest.cpp
  src/v20200217/model/ModifyEnvironmentRoleResponse.cpp
  src/v20200217/model/DeleteCmqQueueRequest.cpp
  src/v20200217/model/CreateRoleRequest.cpp
  src/v20200217/model/DescribeProducersRequest.cpp
  src/v20200217/model/ModifyEnvironmentRoleRequest.cpp
  src/v20200217/model/DescribeEnvironmentAttributesResponse.cpp
  src/v20200217/model/SubscriptionTopic.cpp
  src/v20200217/model/DescribeProducersResponse.cpp
  src/v20200217/model/SendBatchMessagesRequest.cpp
  src/v20200217/model/DeleteCmqTopicRequest.cpp
  src/v20200217/model/SendCmqMsgResponse.cpp
  src/v20200217/model/PublishCmqMsgRequest.cpp
  src/v20200217/model/UnbindCmqDeadLetterRequest.cpp
  src/v20200217/model/ModifyCmqQueueAttributeRequest.cpp
  src/v20200217/model/DeleteCmqSubscribeResponse.cpp
  src/v20200217/model/DescribeRolesRequest.cpp
  src/v20200217/model/DeleteSubscriptionsRequest.cpp
  src/v20200217/model/DescribeClusterDetailResponse.cpp
  src/v20200217/model/CreateEnvironmentRoleRequest.cpp
  )

set(tdmq_include
    include/tencentcloud/tdmq
  )

add_library(tdmq ${LIB_TYPE}
  ${tdmq_public_header}
  ${tdmq_public_header_model}
  ${tdmq_src})

set_target_properties(tdmq
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tdmq
  )

target_include_directories(tdmq
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tdmq
  core)

#install(FILES ${tdmq_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tdmq/v20200217)
#install(FILES ${tdmq_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tdmq/v20200217/model)
install(DIRECTORY ${tdmq_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tdmq
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
