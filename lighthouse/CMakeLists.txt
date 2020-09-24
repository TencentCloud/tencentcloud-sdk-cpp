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

set(lighthouse_public_header
  include/tencentcloud/lighthouse/v20200324/LighthouseClient.h
  )

set(lighthouse_public_header_model
  include/tencentcloud/lighthouse/v20200324/model/DescribeBlueprintsResponse.h
  include/tencentcloud/lighthouse/v20200324/model/DescribeInstancesTrafficPackagesRequest.h
  include/tencentcloud/lighthouse/v20200324/model/DeleteFirewallRulesRequest.h
  include/tencentcloud/lighthouse/v20200324/model/LoginSettings.h
  include/tencentcloud/lighthouse/v20200324/model/InstanceTrafficPackage.h
  include/tencentcloud/lighthouse/v20200324/model/StartInstancesResponse.h
  include/tencentcloud/lighthouse/v20200324/model/Instance.h
  include/tencentcloud/lighthouse/v20200324/model/DescribeInstancesTrafficPackagesResponse.h
  include/tencentcloud/lighthouse/v20200324/model/TrafficPackage.h
  include/tencentcloud/lighthouse/v20200324/model/RebootInstancesResponse.h
  include/tencentcloud/lighthouse/v20200324/model/DescribeBundlesRequest.h
  include/tencentcloud/lighthouse/v20200324/model/Blueprint.h
  include/tencentcloud/lighthouse/v20200324/model/Price.h
  include/tencentcloud/lighthouse/v20200324/model/Bundle.h
  include/tencentcloud/lighthouse/v20200324/model/StartInstancesRequest.h
  include/tencentcloud/lighthouse/v20200324/model/DeleteFirewallRulesResponse.h
  include/tencentcloud/lighthouse/v20200324/model/RebootInstancesRequest.h
  include/tencentcloud/lighthouse/v20200324/model/DescribeBlueprintsRequest.h
  include/tencentcloud/lighthouse/v20200324/model/DescribeInstancesResponse.h
  include/tencentcloud/lighthouse/v20200324/model/InstancePrice.h
  include/tencentcloud/lighthouse/v20200324/model/SystemDisk.h
  include/tencentcloud/lighthouse/v20200324/model/ResetInstanceRequest.h
  include/tencentcloud/lighthouse/v20200324/model/DescribeBundlesResponse.h
  include/tencentcloud/lighthouse/v20200324/model/DescribeInstancesRequest.h
  include/tencentcloud/lighthouse/v20200324/model/Filter.h
  include/tencentcloud/lighthouse/v20200324/model/ResetInstanceResponse.h
  include/tencentcloud/lighthouse/v20200324/model/CreateFirewallRulesRequest.h
  include/tencentcloud/lighthouse/v20200324/model/DescribeFirewallRulesRequest.h
  include/tencentcloud/lighthouse/v20200324/model/DescribeFirewallRulesResponse.h
  include/tencentcloud/lighthouse/v20200324/model/FirewallRule.h
  include/tencentcloud/lighthouse/v20200324/model/FirewallRuleInfo.h
  include/tencentcloud/lighthouse/v20200324/model/CreateFirewallRulesResponse.h
  include/tencentcloud/lighthouse/v20200324/model/StopInstancesResponse.h
  include/tencentcloud/lighthouse/v20200324/model/InternetAccessible.h
  include/tencentcloud/lighthouse/v20200324/model/StopInstancesRequest.h
  )

set(lighthouse_src
  src/v20200324/LighthouseClient.cpp
  src/v20200324/model/DescribeBlueprintsResponse.cpp
  src/v20200324/model/DescribeInstancesTrafficPackagesRequest.cpp
  src/v20200324/model/DeleteFirewallRulesRequest.cpp
  src/v20200324/model/LoginSettings.cpp
  src/v20200324/model/InstanceTrafficPackage.cpp
  src/v20200324/model/StartInstancesResponse.cpp
  src/v20200324/model/Instance.cpp
  src/v20200324/model/DescribeInstancesTrafficPackagesResponse.cpp
  src/v20200324/model/TrafficPackage.cpp
  src/v20200324/model/RebootInstancesResponse.cpp
  src/v20200324/model/DescribeBundlesRequest.cpp
  src/v20200324/model/Blueprint.cpp
  src/v20200324/model/Price.cpp
  src/v20200324/model/Bundle.cpp
  src/v20200324/model/StartInstancesRequest.cpp
  src/v20200324/model/DeleteFirewallRulesResponse.cpp
  src/v20200324/model/RebootInstancesRequest.cpp
  src/v20200324/model/DescribeBlueprintsRequest.cpp
  src/v20200324/model/DescribeInstancesResponse.cpp
  src/v20200324/model/InstancePrice.cpp
  src/v20200324/model/SystemDisk.cpp
  src/v20200324/model/ResetInstanceRequest.cpp
  src/v20200324/model/DescribeBundlesResponse.cpp
  src/v20200324/model/DescribeInstancesRequest.cpp
  src/v20200324/model/Filter.cpp
  src/v20200324/model/ResetInstanceResponse.cpp
  src/v20200324/model/CreateFirewallRulesRequest.cpp
  src/v20200324/model/DescribeFirewallRulesRequest.cpp
  src/v20200324/model/DescribeFirewallRulesResponse.cpp
  src/v20200324/model/FirewallRule.cpp
  src/v20200324/model/FirewallRuleInfo.cpp
  src/v20200324/model/CreateFirewallRulesResponse.cpp
  src/v20200324/model/StopInstancesResponse.cpp
  src/v20200324/model/InternetAccessible.cpp
  src/v20200324/model/StopInstancesRequest.cpp
  )

set(lighthouse_include
    include/tencentcloud/lighthouse
  )

add_library(lighthouse ${LIB_TYPE}
  ${lighthouse_public_header}
  ${lighthouse_public_header_model}
  ${lighthouse_src})

set_target_properties(lighthouse
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}lighthouse
  )

target_include_directories(lighthouse
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(lighthouse
  core)

#install(FILES ${lighthouse_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/lighthouse/v20200324)
#install(FILES ${lighthouse_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/lighthouse/v20200324/model)
install(DIRECTORY ${lighthouse_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS lighthouse
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
