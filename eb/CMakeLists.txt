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

set(eb_public_header
  include/tencentcloud/eb/v20210416/EbClient.h
  )

set(eb_public_header_model
  include/tencentcloud/eb/v20210416/model/CkafkaTargetParams.h
  include/tencentcloud/eb/v20210416/model/DeleteTargetResponse.h
  include/tencentcloud/eb/v20210416/model/DeleteRuleRequest.h
  include/tencentcloud/eb/v20210416/model/CheckRuleRequest.h
  include/tencentcloud/eb/v20210416/model/LogFilters.h
  include/tencentcloud/eb/v20210416/model/CreateEventBusRequest.h
  include/tencentcloud/eb/v20210416/model/PlatformEventSummary.h
  include/tencentcloud/eb/v20210416/model/RetryPolicy.h
  include/tencentcloud/eb/v20210416/model/CreateTransformationRequest.h
  include/tencentcloud/eb/v20210416/model/SearchLogResponse.h
  include/tencentcloud/eb/v20210416/model/ListEventBusesResponse.h
  include/tencentcloud/eb/v20210416/model/CreateTargetRequest.h
  include/tencentcloud/eb/v20210416/model/SearchLogResult.h
  include/tencentcloud/eb/v20210416/model/CreateRuleResponse.h
  include/tencentcloud/eb/v20210416/model/UpdateRuleResponse.h
  include/tencentcloud/eb/v20210416/model/DeleteTransformationResponse.h
  include/tencentcloud/eb/v20210416/model/ListPlatformProductsResponse.h
  include/tencentcloud/eb/v20210416/model/GetEventBusRequest.h
  include/tencentcloud/eb/v20210416/model/UpdateConnectionRequest.h
  include/tencentcloud/eb/v20210416/model/OutputStructParam.h
  include/tencentcloud/eb/v20210416/model/Tag.h
  include/tencentcloud/eb/v20210416/model/GetRuleRequest.h
  include/tencentcloud/eb/v20210416/model/LogFilter.h
  include/tencentcloud/eb/v20210416/model/APIGWParams.h
  include/tencentcloud/eb/v20210416/model/PlatformProduct.h
  include/tencentcloud/eb/v20210416/model/Extraction.h
  include/tencentcloud/eb/v20210416/model/DTSParams.h
  include/tencentcloud/eb/v20210416/model/CreateTargetResponse.h
  include/tencentcloud/eb/v20210416/model/UpdateRuleRequest.h
  include/tencentcloud/eb/v20210416/model/CreateConnectionResponse.h
  include/tencentcloud/eb/v20210416/model/ListTargetsRequest.h
  include/tencentcloud/eb/v20210416/model/Transformation.h
  include/tencentcloud/eb/v20210416/model/UpdateTransformationResponse.h
  include/tencentcloud/eb/v20210416/model/CheckTransformationResponse.h
  include/tencentcloud/eb/v20210416/model/ListTargetsResponse.h
  include/tencentcloud/eb/v20210416/model/EtlFilter.h
  include/tencentcloud/eb/v20210416/model/ConnectionDescription.h
  include/tencentcloud/eb/v20210416/model/Target.h
  include/tencentcloud/eb/v20210416/model/DeleteEventBusRequest.h
  include/tencentcloud/eb/v20210416/model/ListEventBusesRequest.h
  include/tencentcloud/eb/v20210416/model/CreateTransformationResponse.h
  include/tencentcloud/eb/v20210416/model/PlatformEventDetail.h
  include/tencentcloud/eb/v20210416/model/DeleteTransformationRequest.h
  include/tencentcloud/eb/v20210416/model/CkafkaParams.h
  include/tencentcloud/eb/v20210416/model/Event.h
  include/tencentcloud/eb/v20210416/model/UpdateTargetRequest.h
  include/tencentcloud/eb/v20210416/model/ListConnectionsResponse.h
  include/tencentcloud/eb/v20210416/model/ListPlatformProductsRequest.h
  include/tencentcloud/eb/v20210416/model/PublishEventRequest.h
  include/tencentcloud/eb/v20210416/model/Transform.h
  include/tencentcloud/eb/v20210416/model/ListPlatformEventNamesRequest.h
  include/tencentcloud/eb/v20210416/model/EventBus.h
  include/tencentcloud/eb/v20210416/model/ListPlatformEventPatternsResponse.h
  include/tencentcloud/eb/v20210416/model/ListRulesRequest.h
  include/tencentcloud/eb/v20210416/model/CreateRuleRequest.h
  include/tencentcloud/eb/v20210416/model/DeleteConnectionResponse.h
  include/tencentcloud/eb/v20210416/model/GetTransformationResponse.h
  include/tencentcloud/eb/v20210416/model/CheckRuleResponse.h
  include/tencentcloud/eb/v20210416/model/UpdateTargetResponse.h
  include/tencentcloud/eb/v20210416/model/PublishEventResponse.h
  include/tencentcloud/eb/v20210416/model/Rule.h
  include/tencentcloud/eb/v20210416/model/Filter.h
  include/tencentcloud/eb/v20210416/model/Connection.h
  include/tencentcloud/eb/v20210416/model/DeleteEventBusResponse.h
  include/tencentcloud/eb/v20210416/model/CreateEventBusResponse.h
  include/tencentcloud/eb/v20210416/model/DeleteConnectionRequest.h
  include/tencentcloud/eb/v20210416/model/UpdateTransformationRequest.h
  include/tencentcloud/eb/v20210416/model/GetPlatformEventTemplateRequest.h
  include/tencentcloud/eb/v20210416/model/PutEventsResponse.h
  include/tencentcloud/eb/v20210416/model/CheckTransformationRequest.h
  include/tencentcloud/eb/v20210416/model/UpdateConnectionResponse.h
  include/tencentcloud/eb/v20210416/model/UpdateEventBusResponse.h
  include/tencentcloud/eb/v20210416/model/TDMQParams.h
  include/tencentcloud/eb/v20210416/model/GetEventBusResponse.h
  include/tencentcloud/eb/v20210416/model/DeleteRuleResponse.h
  include/tencentcloud/eb/v20210416/model/DescribeLogTagValueRequest.h
  include/tencentcloud/eb/v20210416/model/TargetBrief.h
  include/tencentcloud/eb/v20210416/model/ListRulesResponse.h
  include/tencentcloud/eb/v20210416/model/ESTargetParams.h
  include/tencentcloud/eb/v20210416/model/GetRuleResponse.h
  include/tencentcloud/eb/v20210416/model/UpdateEventBusRequest.h
  include/tencentcloud/eb/v20210416/model/GetPlatformEventTemplateResponse.h
  include/tencentcloud/eb/v20210416/model/SCFParams.h
  include/tencentcloud/eb/v20210416/model/DeadLetterConfig.h
  include/tencentcloud/eb/v20210416/model/ListConnectionsRequest.h
  include/tencentcloud/eb/v20210416/model/TextParams.h
  include/tencentcloud/eb/v20210416/model/SearchLogRequest.h
  include/tencentcloud/eb/v20210416/model/CkafkaDeliveryParams.h
  include/tencentcloud/eb/v20210416/model/CreateConnectionRequest.h
  include/tencentcloud/eb/v20210416/model/ListPlatformEventPatternsRequest.h
  include/tencentcloud/eb/v20210416/model/GetTransformationRequest.h
  include/tencentcloud/eb/v20210416/model/ConnectionBrief.h
  include/tencentcloud/eb/v20210416/model/PutEventsRequest.h
  include/tencentcloud/eb/v20210416/model/TargetDescription.h
  include/tencentcloud/eb/v20210416/model/DeleteTargetRequest.h
  include/tencentcloud/eb/v20210416/model/DescribeLogTagValueResponse.h
  include/tencentcloud/eb/v20210416/model/ListPlatformEventNamesResponse.h
  )

set(eb_src
  src/v20210416/EbClient.cpp
  src/v20210416/model/CkafkaTargetParams.cpp
  src/v20210416/model/DeleteTargetResponse.cpp
  src/v20210416/model/DeleteRuleRequest.cpp
  src/v20210416/model/CheckRuleRequest.cpp
  src/v20210416/model/LogFilters.cpp
  src/v20210416/model/CreateEventBusRequest.cpp
  src/v20210416/model/PlatformEventSummary.cpp
  src/v20210416/model/RetryPolicy.cpp
  src/v20210416/model/CreateTransformationRequest.cpp
  src/v20210416/model/SearchLogResponse.cpp
  src/v20210416/model/ListEventBusesResponse.cpp
  src/v20210416/model/CreateTargetRequest.cpp
  src/v20210416/model/SearchLogResult.cpp
  src/v20210416/model/CreateRuleResponse.cpp
  src/v20210416/model/UpdateRuleResponse.cpp
  src/v20210416/model/DeleteTransformationResponse.cpp
  src/v20210416/model/ListPlatformProductsResponse.cpp
  src/v20210416/model/GetEventBusRequest.cpp
  src/v20210416/model/UpdateConnectionRequest.cpp
  src/v20210416/model/OutputStructParam.cpp
  src/v20210416/model/Tag.cpp
  src/v20210416/model/GetRuleRequest.cpp
  src/v20210416/model/LogFilter.cpp
  src/v20210416/model/APIGWParams.cpp
  src/v20210416/model/PlatformProduct.cpp
  src/v20210416/model/Extraction.cpp
  src/v20210416/model/DTSParams.cpp
  src/v20210416/model/CreateTargetResponse.cpp
  src/v20210416/model/UpdateRuleRequest.cpp
  src/v20210416/model/CreateConnectionResponse.cpp
  src/v20210416/model/ListTargetsRequest.cpp
  src/v20210416/model/Transformation.cpp
  src/v20210416/model/UpdateTransformationResponse.cpp
  src/v20210416/model/CheckTransformationResponse.cpp
  src/v20210416/model/ListTargetsResponse.cpp
  src/v20210416/model/EtlFilter.cpp
  src/v20210416/model/ConnectionDescription.cpp
  src/v20210416/model/Target.cpp
  src/v20210416/model/DeleteEventBusRequest.cpp
  src/v20210416/model/ListEventBusesRequest.cpp
  src/v20210416/model/CreateTransformationResponse.cpp
  src/v20210416/model/PlatformEventDetail.cpp
  src/v20210416/model/DeleteTransformationRequest.cpp
  src/v20210416/model/CkafkaParams.cpp
  src/v20210416/model/Event.cpp
  src/v20210416/model/UpdateTargetRequest.cpp
  src/v20210416/model/ListConnectionsResponse.cpp
  src/v20210416/model/ListPlatformProductsRequest.cpp
  src/v20210416/model/PublishEventRequest.cpp
  src/v20210416/model/Transform.cpp
  src/v20210416/model/ListPlatformEventNamesRequest.cpp
  src/v20210416/model/EventBus.cpp
  src/v20210416/model/ListPlatformEventPatternsResponse.cpp
  src/v20210416/model/ListRulesRequest.cpp
  src/v20210416/model/CreateRuleRequest.cpp
  src/v20210416/model/DeleteConnectionResponse.cpp
  src/v20210416/model/GetTransformationResponse.cpp
  src/v20210416/model/CheckRuleResponse.cpp
  src/v20210416/model/UpdateTargetResponse.cpp
  src/v20210416/model/PublishEventResponse.cpp
  src/v20210416/model/Rule.cpp
  src/v20210416/model/Filter.cpp
  src/v20210416/model/Connection.cpp
  src/v20210416/model/DeleteEventBusResponse.cpp
  src/v20210416/model/CreateEventBusResponse.cpp
  src/v20210416/model/DeleteConnectionRequest.cpp
  src/v20210416/model/UpdateTransformationRequest.cpp
  src/v20210416/model/GetPlatformEventTemplateRequest.cpp
  src/v20210416/model/PutEventsResponse.cpp
  src/v20210416/model/CheckTransformationRequest.cpp
  src/v20210416/model/UpdateConnectionResponse.cpp
  src/v20210416/model/UpdateEventBusResponse.cpp
  src/v20210416/model/TDMQParams.cpp
  src/v20210416/model/GetEventBusResponse.cpp
  src/v20210416/model/DeleteRuleResponse.cpp
  src/v20210416/model/DescribeLogTagValueRequest.cpp
  src/v20210416/model/TargetBrief.cpp
  src/v20210416/model/ListRulesResponse.cpp
  src/v20210416/model/ESTargetParams.cpp
  src/v20210416/model/GetRuleResponse.cpp
  src/v20210416/model/UpdateEventBusRequest.cpp
  src/v20210416/model/GetPlatformEventTemplateResponse.cpp
  src/v20210416/model/SCFParams.cpp
  src/v20210416/model/DeadLetterConfig.cpp
  src/v20210416/model/ListConnectionsRequest.cpp
  src/v20210416/model/TextParams.cpp
  src/v20210416/model/SearchLogRequest.cpp
  src/v20210416/model/CkafkaDeliveryParams.cpp
  src/v20210416/model/CreateConnectionRequest.cpp
  src/v20210416/model/ListPlatformEventPatternsRequest.cpp
  src/v20210416/model/GetTransformationRequest.cpp
  src/v20210416/model/ConnectionBrief.cpp
  src/v20210416/model/PutEventsRequest.cpp
  src/v20210416/model/TargetDescription.cpp
  src/v20210416/model/DeleteTargetRequest.cpp
  src/v20210416/model/DescribeLogTagValueResponse.cpp
  src/v20210416/model/ListPlatformEventNamesResponse.cpp
  )

set(eb_include
    include/tencentcloud/eb
  )

add_library(eb ${LIB_TYPE}
  ${eb_public_header}
  ${eb_public_header_model}
  ${eb_src})

set_target_properties(eb
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}eb
  )

target_include_directories(eb
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(eb
  core)

#install(FILES ${eb_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/eb/v20210416)
#install(FILES ${eb_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/eb/v20210416/model)
install(DIRECTORY ${eb_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS eb
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
