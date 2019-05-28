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

set(tia_public_header
  include/tencentcloud/tia/v20180226/TiaClient.h
  )

set(tia_public_header_model
  include/tencentcloud/tia/v20180226/model/DeleteModelRequest.h
  include/tencentcloud/tia/v20180226/model/Log.h
  include/tencentcloud/tia/v20180226/model/DeleteJobResponse.h
  include/tencentcloud/tia/v20180226/model/CreateJobRequest.h
  include/tencentcloud/tia/v20180226/model/CreateJobResponse.h
  include/tencentcloud/tia/v20180226/model/InstallAgentResponse.h
  include/tencentcloud/tia/v20180226/model/DescribeModelResponse.h
  include/tencentcloud/tia/v20180226/model/DescribeModelRequest.h
  include/tencentcloud/tia/v20180226/model/DescribeJobRequest.h
  include/tencentcloud/tia/v20180226/model/ListJobsRequest.h
  include/tencentcloud/tia/v20180226/model/Job.h
  include/tencentcloud/tia/v20180226/model/CreateModelResponse.h
  include/tencentcloud/tia/v20180226/model/ListModelsRequest.h
  include/tencentcloud/tia/v20180226/model/QueryLogsResponse.h
  include/tencentcloud/tia/v20180226/model/InstallAgentRequest.h
  include/tencentcloud/tia/v20180226/model/ListJobsResponse.h
  include/tencentcloud/tia/v20180226/model/QueryLogsRequest.h
  include/tencentcloud/tia/v20180226/model/Model.h
  include/tencentcloud/tia/v20180226/model/DeleteModelResponse.h
  include/tencentcloud/tia/v20180226/model/ListModelsResponse.h
  include/tencentcloud/tia/v20180226/model/DeleteJobRequest.h
  include/tencentcloud/tia/v20180226/model/CreateModelRequest.h
  include/tencentcloud/tia/v20180226/model/DescribeJobResponse.h
  )

set(tia_src
  src/v20180226/TiaClient.cpp
  src/v20180226/model/DeleteModelRequest.cpp
  src/v20180226/model/Log.cpp
  src/v20180226/model/DeleteJobResponse.cpp
  src/v20180226/model/CreateJobRequest.cpp
  src/v20180226/model/CreateJobResponse.cpp
  src/v20180226/model/InstallAgentResponse.cpp
  src/v20180226/model/DescribeModelResponse.cpp
  src/v20180226/model/DescribeModelRequest.cpp
  src/v20180226/model/DescribeJobRequest.cpp
  src/v20180226/model/ListJobsRequest.cpp
  src/v20180226/model/Job.cpp
  src/v20180226/model/CreateModelResponse.cpp
  src/v20180226/model/ListModelsRequest.cpp
  src/v20180226/model/QueryLogsResponse.cpp
  src/v20180226/model/InstallAgentRequest.cpp
  src/v20180226/model/ListJobsResponse.cpp
  src/v20180226/model/QueryLogsRequest.cpp
  src/v20180226/model/Model.cpp
  src/v20180226/model/DeleteModelResponse.cpp
  src/v20180226/model/ListModelsResponse.cpp
  src/v20180226/model/DeleteJobRequest.cpp
  src/v20180226/model/CreateModelRequest.cpp
  src/v20180226/model/DescribeJobResponse.cpp
  )

set(tia_include
    include/tencentcloud/tia
  )

add_library(tia ${LIB_TYPE}
  ${tia_public_header}
  ${tia_public_header_model}
  ${tia_src})

set_target_properties(tia
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tia
  )

target_include_directories(tia
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tia
  core)

#install(FILES ${tia_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tia/v20180226)
#install(FILES ${tia_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tia/v20180226/model)
install(DIRECTORY ${tia_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tia
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
