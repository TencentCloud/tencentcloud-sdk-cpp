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

set(ckafka_public_header
  include/tencentcloud/ckafka/v20190819/CkafkaClient.h
  )

set(ckafka_public_header_model
  include/tencentcloud/ckafka/v20190819/model/TopicDetail.h
  include/tencentcloud/ckafka/v20190819/model/DeleteAclRequest.h
  include/tencentcloud/ckafka/v20190819/model/GroupInfoMember.h
  include/tencentcloud/ckafka/v20190819/model/DeleteUserRequest.h
  include/tencentcloud/ckafka/v20190819/model/PartitionOffset.h
  include/tencentcloud/ckafka/v20190819/model/DescribeACLRequest.h
  include/tencentcloud/ckafka/v20190819/model/DescribeTopicAttributesRequest.h
  include/tencentcloud/ckafka/v20190819/model/DescribeInstanceAttributesRequest.h
  include/tencentcloud/ckafka/v20190819/model/ConsumerGroup.h
  include/tencentcloud/ckafka/v20190819/model/Assignment.h
  include/tencentcloud/ckafka/v20190819/model/DescribeConsumerGroupResponse.h
  include/tencentcloud/ckafka/v20190819/model/DeleteTopicRequest.h
  include/tencentcloud/ckafka/v20190819/model/DescribeInstancesResponse.h
  include/tencentcloud/ckafka/v20190819/model/GroupInfoTopics.h
  include/tencentcloud/ckafka/v20190819/model/TopicResult.h
  include/tencentcloud/ckafka/v20190819/model/DescribeInstancesDetailResponse.h
  include/tencentcloud/ckafka/v20190819/model/DescribeACLResponse.h
  include/tencentcloud/ckafka/v20190819/model/JgwOperateResponse.h
  include/tencentcloud/ckafka/v20190819/model/Topic.h
  include/tencentcloud/ckafka/v20190819/model/Tag.h
  include/tencentcloud/ckafka/v20190819/model/GroupResponse.h
  include/tencentcloud/ckafka/v20190819/model/DescribeTopicAttributesResponse.h
  include/tencentcloud/ckafka/v20190819/model/RouteResponse.h
  include/tencentcloud/ckafka/v20190819/model/DescribeGroupResponse.h
  include/tencentcloud/ckafka/v20190819/model/ModifyInstanceAttributesConfig.h
  include/tencentcloud/ckafka/v20190819/model/OperateResponseData.h
  include/tencentcloud/ckafka/v20190819/model/CreateUserResponse.h
  include/tencentcloud/ckafka/v20190819/model/ModifyInstanceAttributesResponse.h
  include/tencentcloud/ckafka/v20190819/model/CreatePartitionResponse.h
  include/tencentcloud/ckafka/v20190819/model/DeleteUserResponse.h
  include/tencentcloud/ckafka/v20190819/model/CreateAclRequest.h
  include/tencentcloud/ckafka/v20190819/model/DescribeAppInfoRequest.h
  include/tencentcloud/ckafka/v20190819/model/DescribeTopicResponse.h
  include/tencentcloud/ckafka/v20190819/model/ConsumerGroupResponse.h
  include/tencentcloud/ckafka/v20190819/model/CreateTopicIpWhiteListResponse.h
  include/tencentcloud/ckafka/v20190819/model/GroupOffsetTopic.h
  include/tencentcloud/ckafka/v20190819/model/ModifyGroupOffsetsResponse.h
  include/tencentcloud/ckafka/v20190819/model/Partition.h
  include/tencentcloud/ckafka/v20190819/model/CreateAclResponse.h
  include/tencentcloud/ckafka/v20190819/model/CreateTopicRequest.h
  include/tencentcloud/ckafka/v20190819/model/DeleteAclResponse.h
  include/tencentcloud/ckafka/v20190819/model/DescribeRouteRequest.h
  include/tencentcloud/ckafka/v20190819/model/InstanceConfigDO.h
  include/tencentcloud/ckafka/v20190819/model/UserResponse.h
  include/tencentcloud/ckafka/v20190819/model/DescribeGroupInfoRequest.h
  include/tencentcloud/ckafka/v20190819/model/DescribeGroupInfoResponse.h
  include/tencentcloud/ckafka/v20190819/model/DescribeUserResponse.h
  include/tencentcloud/ckafka/v20190819/model/AppIdResponse.h
  include/tencentcloud/ckafka/v20190819/model/DescribeTopicRequest.h
  include/tencentcloud/ckafka/v20190819/model/CreatePartitionRequest.h
  include/tencentcloud/ckafka/v20190819/model/Group.h
  include/tencentcloud/ckafka/v20190819/model/DescribeAppInfoResponse.h
  include/tencentcloud/ckafka/v20190819/model/AclResponse.h
  include/tencentcloud/ckafka/v20190819/model/Instance.h
  include/tencentcloud/ckafka/v20190819/model/DescribeInstanceAttributesResponse.h
  include/tencentcloud/ckafka/v20190819/model/TopicDetailResponse.h
  include/tencentcloud/ckafka/v20190819/model/Config.h
  include/tencentcloud/ckafka/v20190819/model/ModifyPasswordRequest.h
  include/tencentcloud/ckafka/v20190819/model/ModifyInstanceAttributesRequest.h
  include/tencentcloud/ckafka/v20190819/model/ModifyTopicAttributesResponse.h
  include/tencentcloud/ckafka/v20190819/model/DescribeConsumerGroupRequest.h
  include/tencentcloud/ckafka/v20190819/model/VipEntity.h
  include/tencentcloud/ckafka/v20190819/model/ConsumerGroupTopic.h
  include/tencentcloud/ckafka/v20190819/model/User.h
  include/tencentcloud/ckafka/v20190819/model/GroupOffsetPartition.h
  include/tencentcloud/ckafka/v20190819/model/DeleteTopicResponse.h
  include/tencentcloud/ckafka/v20190819/model/DescribeInstancesRequest.h
  include/tencentcloud/ckafka/v20190819/model/InstanceAttributesResponse.h
  include/tencentcloud/ckafka/v20190819/model/DescribeGroupRequest.h
  include/tencentcloud/ckafka/v20190819/model/Filter.h
  include/tencentcloud/ckafka/v20190819/model/GroupOffsetResponse.h
  include/tencentcloud/ckafka/v20190819/model/CreateUserRequest.h
  include/tencentcloud/ckafka/v20190819/model/DeleteTopicIpWhiteListResponse.h
  include/tencentcloud/ckafka/v20190819/model/DescribeInstancesDetailRequest.h
  include/tencentcloud/ckafka/v20190819/model/ModifyPasswordResponse.h
  include/tencentcloud/ckafka/v20190819/model/InstanceDetailResponse.h
  include/tencentcloud/ckafka/v20190819/model/GroupInfoResponse.h
  include/tencentcloud/ckafka/v20190819/model/TopicAttributesResponse.h
  include/tencentcloud/ckafka/v20190819/model/InstanceResponse.h
  include/tencentcloud/ckafka/v20190819/model/DescribeGroup.h
  include/tencentcloud/ckafka/v20190819/model/TopicPartitionDO.h
  include/tencentcloud/ckafka/v20190819/model/CreateTopicResp.h
  include/tencentcloud/ckafka/v20190819/model/DescribeRouteResponse.h
  include/tencentcloud/ckafka/v20190819/model/DescribeTopicDetailRequest.h
  include/tencentcloud/ckafka/v20190819/model/DescribeGroupOffsetsResponse.h
  include/tencentcloud/ckafka/v20190819/model/ModifyGroupOffsetsRequest.h
  include/tencentcloud/ckafka/v20190819/model/CreateTopicIpWhiteListRequest.h
  include/tencentcloud/ckafka/v20190819/model/Route.h
  include/tencentcloud/ckafka/v20190819/model/Acl.h
  include/tencentcloud/ckafka/v20190819/model/ModifyTopicAttributesRequest.h
  include/tencentcloud/ckafka/v20190819/model/CreateTopicResponse.h
  include/tencentcloud/ckafka/v20190819/model/DeleteTopicIpWhiteListRequest.h
  include/tencentcloud/ckafka/v20190819/model/DescribeGroupOffsetsRequest.h
  include/tencentcloud/ckafka/v20190819/model/DescribeUserRequest.h
  include/tencentcloud/ckafka/v20190819/model/InstanceDetail.h
  include/tencentcloud/ckafka/v20190819/model/DescribeTopicDetailResponse.h
  include/tencentcloud/ckafka/v20190819/model/SubscribedInfo.h
  )

set(ckafka_src
  src/v20190819/CkafkaClient.cpp
  src/v20190819/model/TopicDetail.cpp
  src/v20190819/model/DeleteAclRequest.cpp
  src/v20190819/model/GroupInfoMember.cpp
  src/v20190819/model/DeleteUserRequest.cpp
  src/v20190819/model/PartitionOffset.cpp
  src/v20190819/model/DescribeACLRequest.cpp
  src/v20190819/model/DescribeTopicAttributesRequest.cpp
  src/v20190819/model/DescribeInstanceAttributesRequest.cpp
  src/v20190819/model/ConsumerGroup.cpp
  src/v20190819/model/Assignment.cpp
  src/v20190819/model/DescribeConsumerGroupResponse.cpp
  src/v20190819/model/DeleteTopicRequest.cpp
  src/v20190819/model/DescribeInstancesResponse.cpp
  src/v20190819/model/GroupInfoTopics.cpp
  src/v20190819/model/TopicResult.cpp
  src/v20190819/model/DescribeInstancesDetailResponse.cpp
  src/v20190819/model/DescribeACLResponse.cpp
  src/v20190819/model/JgwOperateResponse.cpp
  src/v20190819/model/Topic.cpp
  src/v20190819/model/Tag.cpp
  src/v20190819/model/GroupResponse.cpp
  src/v20190819/model/DescribeTopicAttributesResponse.cpp
  src/v20190819/model/RouteResponse.cpp
  src/v20190819/model/DescribeGroupResponse.cpp
  src/v20190819/model/ModifyInstanceAttributesConfig.cpp
  src/v20190819/model/OperateResponseData.cpp
  src/v20190819/model/CreateUserResponse.cpp
  src/v20190819/model/ModifyInstanceAttributesResponse.cpp
  src/v20190819/model/CreatePartitionResponse.cpp
  src/v20190819/model/DeleteUserResponse.cpp
  src/v20190819/model/CreateAclRequest.cpp
  src/v20190819/model/DescribeAppInfoRequest.cpp
  src/v20190819/model/DescribeTopicResponse.cpp
  src/v20190819/model/ConsumerGroupResponse.cpp
  src/v20190819/model/CreateTopicIpWhiteListResponse.cpp
  src/v20190819/model/GroupOffsetTopic.cpp
  src/v20190819/model/ModifyGroupOffsetsResponse.cpp
  src/v20190819/model/Partition.cpp
  src/v20190819/model/CreateAclResponse.cpp
  src/v20190819/model/CreateTopicRequest.cpp
  src/v20190819/model/DeleteAclResponse.cpp
  src/v20190819/model/DescribeRouteRequest.cpp
  src/v20190819/model/InstanceConfigDO.cpp
  src/v20190819/model/UserResponse.cpp
  src/v20190819/model/DescribeGroupInfoRequest.cpp
  src/v20190819/model/DescribeGroupInfoResponse.cpp
  src/v20190819/model/DescribeUserResponse.cpp
  src/v20190819/model/AppIdResponse.cpp
  src/v20190819/model/DescribeTopicRequest.cpp
  src/v20190819/model/CreatePartitionRequest.cpp
  src/v20190819/model/Group.cpp
  src/v20190819/model/DescribeAppInfoResponse.cpp
  src/v20190819/model/AclResponse.cpp
  src/v20190819/model/Instance.cpp
  src/v20190819/model/DescribeInstanceAttributesResponse.cpp
  src/v20190819/model/TopicDetailResponse.cpp
  src/v20190819/model/Config.cpp
  src/v20190819/model/ModifyPasswordRequest.cpp
  src/v20190819/model/ModifyInstanceAttributesRequest.cpp
  src/v20190819/model/ModifyTopicAttributesResponse.cpp
  src/v20190819/model/DescribeConsumerGroupRequest.cpp
  src/v20190819/model/VipEntity.cpp
  src/v20190819/model/ConsumerGroupTopic.cpp
  src/v20190819/model/User.cpp
  src/v20190819/model/GroupOffsetPartition.cpp
  src/v20190819/model/DeleteTopicResponse.cpp
  src/v20190819/model/DescribeInstancesRequest.cpp
  src/v20190819/model/InstanceAttributesResponse.cpp
  src/v20190819/model/DescribeGroupRequest.cpp
  src/v20190819/model/Filter.cpp
  src/v20190819/model/GroupOffsetResponse.cpp
  src/v20190819/model/CreateUserRequest.cpp
  src/v20190819/model/DeleteTopicIpWhiteListResponse.cpp
  src/v20190819/model/DescribeInstancesDetailRequest.cpp
  src/v20190819/model/ModifyPasswordResponse.cpp
  src/v20190819/model/InstanceDetailResponse.cpp
  src/v20190819/model/GroupInfoResponse.cpp
  src/v20190819/model/TopicAttributesResponse.cpp
  src/v20190819/model/InstanceResponse.cpp
  src/v20190819/model/DescribeGroup.cpp
  src/v20190819/model/TopicPartitionDO.cpp
  src/v20190819/model/CreateTopicResp.cpp
  src/v20190819/model/DescribeRouteResponse.cpp
  src/v20190819/model/DescribeTopicDetailRequest.cpp
  src/v20190819/model/DescribeGroupOffsetsResponse.cpp
  src/v20190819/model/ModifyGroupOffsetsRequest.cpp
  src/v20190819/model/CreateTopicIpWhiteListRequest.cpp
  src/v20190819/model/Route.cpp
  src/v20190819/model/Acl.cpp
  src/v20190819/model/ModifyTopicAttributesRequest.cpp
  src/v20190819/model/CreateTopicResponse.cpp
  src/v20190819/model/DeleteTopicIpWhiteListRequest.cpp
  src/v20190819/model/DescribeGroupOffsetsRequest.cpp
  src/v20190819/model/DescribeUserRequest.cpp
  src/v20190819/model/InstanceDetail.cpp
  src/v20190819/model/DescribeTopicDetailResponse.cpp
  src/v20190819/model/SubscribedInfo.cpp
  )

set(ckafka_include
    include/tencentcloud/ckafka
  )

add_library(ckafka ${LIB_TYPE}
  ${ckafka_public_header}
  ${ckafka_public_header_model}
  ${ckafka_src})

set_target_properties(ckafka
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ckafka
  )

target_include_directories(ckafka
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(ckafka
  core)

#install(FILES ${ckafka_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ckafka/v20190819)
#install(FILES ${ckafka_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ckafka/v20190819/model)
install(DIRECTORY ${ckafka_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS ckafka
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
