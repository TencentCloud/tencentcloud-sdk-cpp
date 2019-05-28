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

set(emr_public_header
  include/tencentcloud/emr/v20190103/EmrClient.h
  )

set(emr_public_header_model
  include/tencentcloud/emr/v20190103/model/CreateInstanceResult.h
  include/tencentcloud/emr/v20190103/model/LoginSettings.h
  include/tencentcloud/emr/v20190103/model/VPCSettings.h
  include/tencentcloud/emr/v20190103/model/TerminateTasksResponse.h
  include/tencentcloud/emr/v20190103/model/ScaleOutInstanceResponse.h
  include/tencentcloud/emr/v20190103/model/InquiryPriceCreateInstanceRequest.h
  include/tencentcloud/emr/v20190103/model/ClusterInstanceInfo.h
  include/tencentcloud/emr/v20190103/model/ClusterInfoResult.h
  include/tencentcloud/emr/v20190103/model/ResourceSpec.h
  include/tencentcloud/emr/v20190103/model/CreateInstanceResponse.h
  include/tencentcloud/emr/v20190103/model/ScaleOutInstanceResult.h
  include/tencentcloud/emr/v20190103/model/InquiryPriceCreateInstanceResponse.h
  include/tencentcloud/emr/v20190103/model/PreExecuteFileSettings.h
  include/tencentcloud/emr/v20190103/model/CreateInstanceRequest.h
  include/tencentcloud/emr/v20190103/model/DescribeInstancesResponse.h
  include/tencentcloud/emr/v20190103/model/InquiryPriceScaleOutInstanceRequest.h
  include/tencentcloud/emr/v20190103/model/Placement.h
  include/tencentcloud/emr/v20190103/model/DescribeInstancesRequest.h
  include/tencentcloud/emr/v20190103/model/COSSettings.h
  include/tencentcloud/emr/v20190103/model/ScaleOutInstanceRequest.h
  include/tencentcloud/emr/v20190103/model/InquiryPriceScaleOutInstanceResponse.h
  include/tencentcloud/emr/v20190103/model/TerminateTasksRequest.h
  include/tencentcloud/emr/v20190103/model/EMRProductConfigSettings.h
  include/tencentcloud/emr/v20190103/model/NodeSpec.h
  include/tencentcloud/emr/v20190103/model/TerminateInstanceRequest.h
  include/tencentcloud/emr/v20190103/model/TerminateInstanceResponse.h
  include/tencentcloud/emr/v20190103/model/InquiryPriceResult.h
  include/tencentcloud/emr/v20190103/model/TerminateResult.h
  include/tencentcloud/emr/v20190103/model/MultiDisk.h
  )

set(emr_src
  src/v20190103/EmrClient.cpp
  src/v20190103/model/CreateInstanceResult.cpp
  src/v20190103/model/LoginSettings.cpp
  src/v20190103/model/VPCSettings.cpp
  src/v20190103/model/TerminateTasksResponse.cpp
  src/v20190103/model/ScaleOutInstanceResponse.cpp
  src/v20190103/model/InquiryPriceCreateInstanceRequest.cpp
  src/v20190103/model/ClusterInstanceInfo.cpp
  src/v20190103/model/ClusterInfoResult.cpp
  src/v20190103/model/ResourceSpec.cpp
  src/v20190103/model/CreateInstanceResponse.cpp
  src/v20190103/model/ScaleOutInstanceResult.cpp
  src/v20190103/model/InquiryPriceCreateInstanceResponse.cpp
  src/v20190103/model/PreExecuteFileSettings.cpp
  src/v20190103/model/CreateInstanceRequest.cpp
  src/v20190103/model/DescribeInstancesResponse.cpp
  src/v20190103/model/InquiryPriceScaleOutInstanceRequest.cpp
  src/v20190103/model/Placement.cpp
  src/v20190103/model/DescribeInstancesRequest.cpp
  src/v20190103/model/COSSettings.cpp
  src/v20190103/model/ScaleOutInstanceRequest.cpp
  src/v20190103/model/InquiryPriceScaleOutInstanceResponse.cpp
  src/v20190103/model/TerminateTasksRequest.cpp
  src/v20190103/model/EMRProductConfigSettings.cpp
  src/v20190103/model/NodeSpec.cpp
  src/v20190103/model/TerminateInstanceRequest.cpp
  src/v20190103/model/TerminateInstanceResponse.cpp
  src/v20190103/model/InquiryPriceResult.cpp
  src/v20190103/model/TerminateResult.cpp
  src/v20190103/model/MultiDisk.cpp
  )

set(emr_include
    include/tencentcloud/emr
  )

add_library(emr ${LIB_TYPE}
  ${emr_public_header}
  ${emr_public_header_model}
  ${emr_src})

set_target_properties(emr
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}emr
  )

target_include_directories(emr
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(emr
  core)

#install(FILES ${emr_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/emr/v20190103)
#install(FILES ${emr_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/emr/v20190103/model)
install(DIRECTORY ${emr_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS emr
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
