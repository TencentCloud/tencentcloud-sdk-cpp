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

set(oceanus_public_header
  include/tencentcloud/oceanus/v20190422/OceanusClient.h
  )

set(oceanus_public_header_model
  include/tencentcloud/oceanus/v20190422/model/CreateResourceRequest.h
  include/tencentcloud/oceanus/v20190422/model/CreateJobRequest.h
  include/tencentcloud/oceanus/v20190422/model/ResourceRefDetail.h
  include/tencentcloud/oceanus/v20190422/model/StopJobsRequest.h
  include/tencentcloud/oceanus/v20190422/model/CreateJobResponse.h
  include/tencentcloud/oceanus/v20190422/model/RunJobsRequest.h
  include/tencentcloud/oceanus/v20190422/model/StopJobDescription.h
  include/tencentcloud/oceanus/v20190422/model/DeleteTableConfigResponse.h
  include/tencentcloud/oceanus/v20190422/model/CreateResourceConfigResponse.h
  include/tencentcloud/oceanus/v20190422/model/CreateJobConfigRequest.h
  include/tencentcloud/oceanus/v20190422/model/CreateResourceConfigRequest.h
  include/tencentcloud/oceanus/v20190422/model/CreateResourceResponse.h
  include/tencentcloud/oceanus/v20190422/model/DeleteTableConfigRequest.h
  include/tencentcloud/oceanus/v20190422/model/SystemResourceItem.h
  include/tencentcloud/oceanus/v20190422/model/StopJobsResponse.h
  include/tencentcloud/oceanus/v20190422/model/CreateJobConfigResponse.h
  include/tencentcloud/oceanus/v20190422/model/ResourceLocParam.h
  include/tencentcloud/oceanus/v20190422/model/RunJobsResponse.h
  include/tencentcloud/oceanus/v20190422/model/Filter.h
  include/tencentcloud/oceanus/v20190422/model/DescribeJobsResponse.h
  include/tencentcloud/oceanus/v20190422/model/Property.h
  include/tencentcloud/oceanus/v20190422/model/DescribeSystemResourcesRequest.h
  include/tencentcloud/oceanus/v20190422/model/DescribeJobConfigsRequest.h
  include/tencentcloud/oceanus/v20190422/model/RunJobDescription.h
  include/tencentcloud/oceanus/v20190422/model/DescribeJobConfigsResponse.h
  include/tencentcloud/oceanus/v20190422/model/ResourceLoc.h
  include/tencentcloud/oceanus/v20190422/model/ResourceRef.h
  include/tencentcloud/oceanus/v20190422/model/DescribeJobsRequest.h
  include/tencentcloud/oceanus/v20190422/model/JobV1.h
  include/tencentcloud/oceanus/v20190422/model/JobConfig.h
  include/tencentcloud/oceanus/v20190422/model/DescribeSystemResourcesResponse.h
  )

set(oceanus_src
  src/v20190422/OceanusClient.cpp
  src/v20190422/model/CreateResourceRequest.cpp
  src/v20190422/model/CreateJobRequest.cpp
  src/v20190422/model/ResourceRefDetail.cpp
  src/v20190422/model/StopJobsRequest.cpp
  src/v20190422/model/CreateJobResponse.cpp
  src/v20190422/model/RunJobsRequest.cpp
  src/v20190422/model/StopJobDescription.cpp
  src/v20190422/model/DeleteTableConfigResponse.cpp
  src/v20190422/model/CreateResourceConfigResponse.cpp
  src/v20190422/model/CreateJobConfigRequest.cpp
  src/v20190422/model/CreateResourceConfigRequest.cpp
  src/v20190422/model/CreateResourceResponse.cpp
  src/v20190422/model/DeleteTableConfigRequest.cpp
  src/v20190422/model/SystemResourceItem.cpp
  src/v20190422/model/StopJobsResponse.cpp
  src/v20190422/model/CreateJobConfigResponse.cpp
  src/v20190422/model/ResourceLocParam.cpp
  src/v20190422/model/RunJobsResponse.cpp
  src/v20190422/model/Filter.cpp
  src/v20190422/model/DescribeJobsResponse.cpp
  src/v20190422/model/Property.cpp
  src/v20190422/model/DescribeSystemResourcesRequest.cpp
  src/v20190422/model/DescribeJobConfigsRequest.cpp
  src/v20190422/model/RunJobDescription.cpp
  src/v20190422/model/DescribeJobConfigsResponse.cpp
  src/v20190422/model/ResourceLoc.cpp
  src/v20190422/model/ResourceRef.cpp
  src/v20190422/model/DescribeJobsRequest.cpp
  src/v20190422/model/JobV1.cpp
  src/v20190422/model/JobConfig.cpp
  src/v20190422/model/DescribeSystemResourcesResponse.cpp
  )

set(oceanus_include
    include/tencentcloud/oceanus
  )

add_library(oceanus ${LIB_TYPE}
  ${oceanus_public_header}
  ${oceanus_public_header_model}
  ${oceanus_src})

set_target_properties(oceanus
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}oceanus
  )

target_include_directories(oceanus
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(oceanus
  core)

#install(FILES ${oceanus_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/oceanus/v20190422)
#install(FILES ${oceanus_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/oceanus/v20190422/model)
install(DIRECTORY ${oceanus_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS oceanus
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
