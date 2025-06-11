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

set(hai_public_header
  include/tencentcloud/hai/v20230812/HaiClient.h
  )

set(hai_public_header_model
  include/tencentcloud/hai/v20230812/model/NetworkStatus.h
  include/tencentcloud/hai/v20230812/model/InquirePriceRunInstancesResponse.h
  include/tencentcloud/hai/v20230812/model/ResizeInstanceDiskResponse.h
  include/tencentcloud/hai/v20230812/model/DescribeServiceLoginSettingsResponse.h
  include/tencentcloud/hai/v20230812/model/ResetInstancesPasswordResponse.h
  include/tencentcloud/hai/v20230812/model/DescribeInstanceNetworkStatusResponse.h
  include/tencentcloud/hai/v20230812/model/Instance.h
  include/tencentcloud/hai/v20230812/model/TerminateInstancesRequest.h
  include/tencentcloud/hai/v20230812/model/TerminateInstancesResponse.h
  include/tencentcloud/hai/v20230812/model/DescribeApplicationsResponse.h
  include/tencentcloud/hai/v20230812/model/StartInstanceRequest.h
  include/tencentcloud/hai/v20230812/model/LoginSetting.h
  include/tencentcloud/hai/v20230812/model/RegionInfo.h
  include/tencentcloud/hai/v20230812/model/ResizeInstanceDiskRequest.h
  include/tencentcloud/hai/v20230812/model/Price.h
  include/tencentcloud/hai/v20230812/model/StopInstanceRequest.h
  include/tencentcloud/hai/v20230812/model/DescribeMuskPromptsRequest.h
  include/tencentcloud/hai/v20230812/model/DescribeScenesResponse.h
  include/tencentcloud/hai/v20230812/model/DescribeApplicationsRequest.h
  include/tencentcloud/hai/v20230812/model/SceneInfo.h
  include/tencentcloud/hai/v20230812/model/CreateApplicationRequest.h
  include/tencentcloud/hai/v20230812/model/ResetInstancesPasswordRequest.h
  include/tencentcloud/hai/v20230812/model/RunInstancesRequest.h
  include/tencentcloud/hai/v20230812/model/DescribeInstancesResponse.h
  include/tencentcloud/hai/v20230812/model/SystemDisk.h
  include/tencentcloud/hai/v20230812/model/RunInstancesResponse.h
  include/tencentcloud/hai/v20230812/model/DescribeInstancesRequest.h
  include/tencentcloud/hai/v20230812/model/Filter.h
  include/tencentcloud/hai/v20230812/model/MuskPromptInfo.h
  include/tencentcloud/hai/v20230812/model/DescribeScenesRequest.h
  include/tencentcloud/hai/v20230812/model/DescribeRegionsResponse.h
  include/tencentcloud/hai/v20230812/model/InquirePriceRunInstancesRequest.h
  include/tencentcloud/hai/v20230812/model/StartInstanceResponse.h
  include/tencentcloud/hai/v20230812/model/CreateMuskPromptResponse.h
  include/tencentcloud/hai/v20230812/model/DescribeServiceLoginSettingsRequest.h
  include/tencentcloud/hai/v20230812/model/ApplicationInfo.h
  include/tencentcloud/hai/v20230812/model/CreateApplicationResponse.h
  include/tencentcloud/hai/v20230812/model/ItemPriceDetail.h
  include/tencentcloud/hai/v20230812/model/CreateMuskPromptRequest.h
  include/tencentcloud/hai/v20230812/model/DescribeRegionsRequest.h
  include/tencentcloud/hai/v20230812/model/ItemPrice.h
  include/tencentcloud/hai/v20230812/model/DescribeInstanceNetworkStatusRequest.h
  include/tencentcloud/hai/v20230812/model/LoginService.h
  include/tencentcloud/hai/v20230812/model/StopInstanceResponse.h
  include/tencentcloud/hai/v20230812/model/InstanceChargePrepaid.h
  include/tencentcloud/hai/v20230812/model/DescribeMuskPromptsResponse.h
  )

set(hai_src
  src/v20230812/HaiClient.cpp
  src/v20230812/model/NetworkStatus.cpp
  src/v20230812/model/InquirePriceRunInstancesResponse.cpp
  src/v20230812/model/ResizeInstanceDiskResponse.cpp
  src/v20230812/model/DescribeServiceLoginSettingsResponse.cpp
  src/v20230812/model/ResetInstancesPasswordResponse.cpp
  src/v20230812/model/DescribeInstanceNetworkStatusResponse.cpp
  src/v20230812/model/Instance.cpp
  src/v20230812/model/TerminateInstancesRequest.cpp
  src/v20230812/model/TerminateInstancesResponse.cpp
  src/v20230812/model/DescribeApplicationsResponse.cpp
  src/v20230812/model/StartInstanceRequest.cpp
  src/v20230812/model/LoginSetting.cpp
  src/v20230812/model/RegionInfo.cpp
  src/v20230812/model/ResizeInstanceDiskRequest.cpp
  src/v20230812/model/Price.cpp
  src/v20230812/model/StopInstanceRequest.cpp
  src/v20230812/model/DescribeMuskPromptsRequest.cpp
  src/v20230812/model/DescribeScenesResponse.cpp
  src/v20230812/model/DescribeApplicationsRequest.cpp
  src/v20230812/model/SceneInfo.cpp
  src/v20230812/model/CreateApplicationRequest.cpp
  src/v20230812/model/ResetInstancesPasswordRequest.cpp
  src/v20230812/model/RunInstancesRequest.cpp
  src/v20230812/model/DescribeInstancesResponse.cpp
  src/v20230812/model/SystemDisk.cpp
  src/v20230812/model/RunInstancesResponse.cpp
  src/v20230812/model/DescribeInstancesRequest.cpp
  src/v20230812/model/Filter.cpp
  src/v20230812/model/MuskPromptInfo.cpp
  src/v20230812/model/DescribeScenesRequest.cpp
  src/v20230812/model/DescribeRegionsResponse.cpp
  src/v20230812/model/InquirePriceRunInstancesRequest.cpp
  src/v20230812/model/StartInstanceResponse.cpp
  src/v20230812/model/CreateMuskPromptResponse.cpp
  src/v20230812/model/DescribeServiceLoginSettingsRequest.cpp
  src/v20230812/model/ApplicationInfo.cpp
  src/v20230812/model/CreateApplicationResponse.cpp
  src/v20230812/model/ItemPriceDetail.cpp
  src/v20230812/model/CreateMuskPromptRequest.cpp
  src/v20230812/model/DescribeRegionsRequest.cpp
  src/v20230812/model/ItemPrice.cpp
  src/v20230812/model/DescribeInstanceNetworkStatusRequest.cpp
  src/v20230812/model/LoginService.cpp
  src/v20230812/model/StopInstanceResponse.cpp
  src/v20230812/model/InstanceChargePrepaid.cpp
  src/v20230812/model/DescribeMuskPromptsResponse.cpp
  )

set(hai_include
    include/tencentcloud/hai
  )

add_library(hai ${LIB_TYPE}
  ${hai_public_header}
  ${hai_public_header_model}
  ${hai_src})

set_target_properties(hai
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}hai
  )

target_include_directories(hai
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(hai
  core)

#install(FILES ${hai_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/hai/v20230812)
#install(FILES ${hai_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/hai/v20230812/model)
install(DIRECTORY ${hai_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS hai
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
