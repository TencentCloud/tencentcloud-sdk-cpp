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

set(cmq_public_header
  include/tencentcloud/cmq/v20190304/CmqClient.h
  )

set(cmq_public_header_model
  include/tencentcloud/cmq/v20190304/model/TopicSet.h
  include/tencentcloud/cmq/v20190304/model/RewindQueueRequest.h
  include/tencentcloud/cmq/v20190304/model/DescribeSubscriptionDetailRequest.h
  include/tencentcloud/cmq/v20190304/model/ModifyQueueAttributeResponse.h
  include/tencentcloud/cmq/v20190304/model/CreateQueueRequest.h
  include/tencentcloud/cmq/v20190304/model/ModifySubscriptionAttributeResponse.h
  include/tencentcloud/cmq/v20190304/model/DeadLetterPolicy.h
  include/tencentcloud/cmq/v20190304/model/ModifyTopicAttributeResponse.h
  include/tencentcloud/cmq/v20190304/model/DeleteSubscribeRequest.h
  include/tencentcloud/cmq/v20190304/model/DescribeSubscriptionDetailResponse.h
  include/tencentcloud/cmq/v20190304/model/CreateSubscribeRequest.h
  include/tencentcloud/cmq/v20190304/model/ClearQueueRequest.h
  include/tencentcloud/cmq/v20190304/model/CreateTopicResponse.h
  include/tencentcloud/cmq/v20190304/model/ClearSubscriptionFilterTagsResponse.h
  include/tencentcloud/cmq/v20190304/model/UnbindDeadLetterResponse.h
  include/tencentcloud/cmq/v20190304/model/TransactionPolicy.h
  include/tencentcloud/cmq/v20190304/model/DescribeTopicDetailRequest.h
  include/tencentcloud/cmq/v20190304/model/DeleteTopicRequest.h
  include/tencentcloud/cmq/v20190304/model/DescribeTopicDetailResponse.h
  include/tencentcloud/cmq/v20190304/model/DescribeQueueDetailResponse.h
  include/tencentcloud/cmq/v20190304/model/UnbindDeadLetterRequest.h
  include/tencentcloud/cmq/v20190304/model/CreateTopicRequest.h
  include/tencentcloud/cmq/v20190304/model/DeleteQueueRequest.h
  include/tencentcloud/cmq/v20190304/model/Filter.h
  include/tencentcloud/cmq/v20190304/model/DescribeDeadLetterSourceQueuesResponse.h
  include/tencentcloud/cmq/v20190304/model/RewindQueueResponse.h
  include/tencentcloud/cmq/v20190304/model/ModifyTopicAttributeRequest.h
  include/tencentcloud/cmq/v20190304/model/DescribeQueueDetailRequest.h
  include/tencentcloud/cmq/v20190304/model/QueueSet.h
  include/tencentcloud/cmq/v20190304/model/DeleteTopicResponse.h
  include/tencentcloud/cmq/v20190304/model/ClearSubscriptionFilterTagsRequest.h
  include/tencentcloud/cmq/v20190304/model/CreateQueueResponse.h
  include/tencentcloud/cmq/v20190304/model/DeleteSubscribeResponse.h
  include/tencentcloud/cmq/v20190304/model/DescribeDeadLetterSourceQueuesRequest.h
  include/tencentcloud/cmq/v20190304/model/Tag.h
  include/tencentcloud/cmq/v20190304/model/DeadLetterSource.h
  include/tencentcloud/cmq/v20190304/model/CreateSubscribeResponse.h
  include/tencentcloud/cmq/v20190304/model/ClearQueueResponse.h
  include/tencentcloud/cmq/v20190304/model/ModifySubscriptionAttributeRequest.h
  include/tencentcloud/cmq/v20190304/model/Subscription.h
  include/tencentcloud/cmq/v20190304/model/DeleteQueueResponse.h
  include/tencentcloud/cmq/v20190304/model/ModifyQueueAttributeRequest.h
  )

set(cmq_src
  src/v20190304/CmqClient.cpp
  src/v20190304/model/TopicSet.cpp
  src/v20190304/model/RewindQueueRequest.cpp
  src/v20190304/model/DescribeSubscriptionDetailRequest.cpp
  src/v20190304/model/ModifyQueueAttributeResponse.cpp
  src/v20190304/model/CreateQueueRequest.cpp
  src/v20190304/model/ModifySubscriptionAttributeResponse.cpp
  src/v20190304/model/DeadLetterPolicy.cpp
  src/v20190304/model/ModifyTopicAttributeResponse.cpp
  src/v20190304/model/DeleteSubscribeRequest.cpp
  src/v20190304/model/DescribeSubscriptionDetailResponse.cpp
  src/v20190304/model/CreateSubscribeRequest.cpp
  src/v20190304/model/ClearQueueRequest.cpp
  src/v20190304/model/CreateTopicResponse.cpp
  src/v20190304/model/ClearSubscriptionFilterTagsResponse.cpp
  src/v20190304/model/UnbindDeadLetterResponse.cpp
  src/v20190304/model/TransactionPolicy.cpp
  src/v20190304/model/DescribeTopicDetailRequest.cpp
  src/v20190304/model/DeleteTopicRequest.cpp
  src/v20190304/model/DescribeTopicDetailResponse.cpp
  src/v20190304/model/DescribeQueueDetailResponse.cpp
  src/v20190304/model/UnbindDeadLetterRequest.cpp
  src/v20190304/model/CreateTopicRequest.cpp
  src/v20190304/model/DeleteQueueRequest.cpp
  src/v20190304/model/Filter.cpp
  src/v20190304/model/DescribeDeadLetterSourceQueuesResponse.cpp
  src/v20190304/model/RewindQueueResponse.cpp
  src/v20190304/model/ModifyTopicAttributeRequest.cpp
  src/v20190304/model/DescribeQueueDetailRequest.cpp
  src/v20190304/model/QueueSet.cpp
  src/v20190304/model/DeleteTopicResponse.cpp
  src/v20190304/model/ClearSubscriptionFilterTagsRequest.cpp
  src/v20190304/model/CreateQueueResponse.cpp
  src/v20190304/model/DeleteSubscribeResponse.cpp
  src/v20190304/model/DescribeDeadLetterSourceQueuesRequest.cpp
  src/v20190304/model/Tag.cpp
  src/v20190304/model/DeadLetterSource.cpp
  src/v20190304/model/CreateSubscribeResponse.cpp
  src/v20190304/model/ClearQueueResponse.cpp
  src/v20190304/model/ModifySubscriptionAttributeRequest.cpp
  src/v20190304/model/Subscription.cpp
  src/v20190304/model/DeleteQueueResponse.cpp
  src/v20190304/model/ModifyQueueAttributeRequest.cpp
  )

set(cmq_include
    include/tencentcloud/cmq
  )

add_library(cmq ${LIB_TYPE}
  ${cmq_public_header}
  ${cmq_public_header_model}
  ${cmq_src})

set_target_properties(cmq
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cmq
  )

target_include_directories(cmq
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(cmq
  core)

#install(FILES ${cmq_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cmq/v20190304)
#install(FILES ${cmq_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cmq/v20190304/model)
install(DIRECTORY ${cmq_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS cmq
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
