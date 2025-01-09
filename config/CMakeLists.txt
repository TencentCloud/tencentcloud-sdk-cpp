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

set(config_public_header
  include/tencentcloud/config/v20220802/ConfigClient.h
  )

set(config_public_header_model
  include/tencentcloud/config/v20220802/model/ResourceListInfo.h
  include/tencentcloud/config/v20220802/model/ListAggregateDiscoveredResourcesRequest.h
  include/tencentcloud/config/v20220802/model/DescribeAggregateDiscoveredResourceRequest.h
  include/tencentcloud/config/v20220802/model/SourceConditionForManage.h
  include/tencentcloud/config/v20220802/model/ListAggregateConfigRulesRequest.h
  include/tencentcloud/config/v20220802/model/DescribeDiscoveredResourceRequest.h
  include/tencentcloud/config/v20220802/model/PutEvaluationsResponse.h
  include/tencentcloud/config/v20220802/model/Evaluation.h
  include/tencentcloud/config/v20220802/model/DescribeDiscoveredResourceResponse.h
  include/tencentcloud/config/v20220802/model/InputParameterForManage.h
  include/tencentcloud/config/v20220802/model/ListConfigRulesResponse.h
  include/tencentcloud/config/v20220802/model/Tag.h
  include/tencentcloud/config/v20220802/model/ListDiscoveredResourcesRequest.h
  include/tencentcloud/config/v20220802/model/Annotation.h
  include/tencentcloud/config/v20220802/model/ConfigRule.h
  include/tencentcloud/config/v20220802/model/TriggerType.h
  include/tencentcloud/config/v20220802/model/PutEvaluationsRequest.h
  include/tencentcloud/config/v20220802/model/Filter.h
  include/tencentcloud/config/v20220802/model/ListAggregateConfigRulesResponse.h
  include/tencentcloud/config/v20220802/model/ListAggregateDiscoveredResourcesResponse.h
  include/tencentcloud/config/v20220802/model/DescribeAggregateDiscoveredResourceResponse.h
  include/tencentcloud/config/v20220802/model/ListConfigRulesRequest.h
  include/tencentcloud/config/v20220802/model/AggregateResourceInfo.h
  include/tencentcloud/config/v20220802/model/ListDiscoveredResourcesResponse.h
  include/tencentcloud/config/v20220802/model/InputParameter.h
  )

set(config_src
  src/v20220802/ConfigClient.cpp
  src/v20220802/model/ResourceListInfo.cpp
  src/v20220802/model/ListAggregateDiscoveredResourcesRequest.cpp
  src/v20220802/model/DescribeAggregateDiscoveredResourceRequest.cpp
  src/v20220802/model/SourceConditionForManage.cpp
  src/v20220802/model/ListAggregateConfigRulesRequest.cpp
  src/v20220802/model/DescribeDiscoveredResourceRequest.cpp
  src/v20220802/model/PutEvaluationsResponse.cpp
  src/v20220802/model/Evaluation.cpp
  src/v20220802/model/DescribeDiscoveredResourceResponse.cpp
  src/v20220802/model/InputParameterForManage.cpp
  src/v20220802/model/ListConfigRulesResponse.cpp
  src/v20220802/model/Tag.cpp
  src/v20220802/model/ListDiscoveredResourcesRequest.cpp
  src/v20220802/model/Annotation.cpp
  src/v20220802/model/ConfigRule.cpp
  src/v20220802/model/TriggerType.cpp
  src/v20220802/model/PutEvaluationsRequest.cpp
  src/v20220802/model/Filter.cpp
  src/v20220802/model/ListAggregateConfigRulesResponse.cpp
  src/v20220802/model/ListAggregateDiscoveredResourcesResponse.cpp
  src/v20220802/model/DescribeAggregateDiscoveredResourceResponse.cpp
  src/v20220802/model/ListConfigRulesRequest.cpp
  src/v20220802/model/AggregateResourceInfo.cpp
  src/v20220802/model/ListDiscoveredResourcesResponse.cpp
  src/v20220802/model/InputParameter.cpp
  )

set(config_include
    include/tencentcloud/config
  )

add_library(config ${LIB_TYPE}
  ${config_public_header}
  ${config_public_header_model}
  ${config_src})

set_target_properties(config
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}config
  )

target_include_directories(config
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(config
  core)

#install(FILES ${config_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/config/v20220802)
#install(FILES ${config_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/config/v20220802/model)
install(DIRECTORY ${config_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS config
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
