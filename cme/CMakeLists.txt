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

set(cme_public_header
  include/tencentcloud/cme/v20191029/CmeClient.h
  )

set(cme_public_header_model
  include/tencentcloud/cme/v20191029/model/AudioStreamInfo.h
  include/tencentcloud/cme/v20191029/model/DescribeTasksRequest.h
  include/tencentcloud/cme/v20191029/model/DeleteProjectRequest.h
  include/tencentcloud/cme/v20191029/model/ImportMediaToProjectResponse.h
  include/tencentcloud/cme/v20191029/model/DescribeLoginStatusRequest.h
  include/tencentcloud/cme/v20191029/model/DescribeProjectsRequest.h
  include/tencentcloud/cme/v20191029/model/DescribeLoginStatusResponse.h
  include/tencentcloud/cme/v20191029/model/DeleteLoginStatusResponse.h
  include/tencentcloud/cme/v20191029/model/MaterialBaseInfo.h
  include/tencentcloud/cme/v20191029/model/DescribeTaskDetailResponse.h
  include/tencentcloud/cme/v20191029/model/ExportVideoEditProjectRequest.h
  include/tencentcloud/cme/v20191029/model/DescribeProjectsResponse.h
  include/tencentcloud/cme/v20191029/model/ModifyProjectResponse.h
  include/tencentcloud/cme/v20191029/model/DescribeTaskDetailRequest.h
  include/tencentcloud/cme/v20191029/model/ModifyProjectRequest.h
  include/tencentcloud/cme/v20191029/model/VideoStreamInfo.h
  include/tencentcloud/cme/v20191029/model/DescribeTasksResponse.h
  include/tencentcloud/cme/v20191029/model/ProjectInfo.h
  include/tencentcloud/cme/v20191029/model/LoginStatusInfo.h
  include/tencentcloud/cme/v20191029/model/ExportVideoEditProjectResponse.h
  include/tencentcloud/cme/v20191029/model/CreateProjectResponse.h
  include/tencentcloud/cme/v20191029/model/MediaMetaData.h
  include/tencentcloud/cme/v20191029/model/DeleteProjectResponse.h
  include/tencentcloud/cme/v20191029/model/TaskBaseInfo.h
  include/tencentcloud/cme/v20191029/model/DeleteLoginStatusRequest.h
  include/tencentcloud/cme/v20191029/model/CMEExportInfo.h
  include/tencentcloud/cme/v20191029/model/Entity.h
  include/tencentcloud/cme/v20191029/model/ImportMediaToProjectRequest.h
  include/tencentcloud/cme/v20191029/model/VODExportInfo.h
  include/tencentcloud/cme/v20191029/model/VideoEditProjectOutput.h
  include/tencentcloud/cme/v20191029/model/CreateProjectRequest.h
  )

set(cme_src
  src/v20191029/CmeClient.cpp
  src/v20191029/model/AudioStreamInfo.cpp
  src/v20191029/model/DescribeTasksRequest.cpp
  src/v20191029/model/DeleteProjectRequest.cpp
  src/v20191029/model/ImportMediaToProjectResponse.cpp
  src/v20191029/model/DescribeLoginStatusRequest.cpp
  src/v20191029/model/DescribeProjectsRequest.cpp
  src/v20191029/model/DescribeLoginStatusResponse.cpp
  src/v20191029/model/DeleteLoginStatusResponse.cpp
  src/v20191029/model/MaterialBaseInfo.cpp
  src/v20191029/model/DescribeTaskDetailResponse.cpp
  src/v20191029/model/ExportVideoEditProjectRequest.cpp
  src/v20191029/model/DescribeProjectsResponse.cpp
  src/v20191029/model/ModifyProjectResponse.cpp
  src/v20191029/model/DescribeTaskDetailRequest.cpp
  src/v20191029/model/ModifyProjectRequest.cpp
  src/v20191029/model/VideoStreamInfo.cpp
  src/v20191029/model/DescribeTasksResponse.cpp
  src/v20191029/model/ProjectInfo.cpp
  src/v20191029/model/LoginStatusInfo.cpp
  src/v20191029/model/ExportVideoEditProjectResponse.cpp
  src/v20191029/model/CreateProjectResponse.cpp
  src/v20191029/model/MediaMetaData.cpp
  src/v20191029/model/DeleteProjectResponse.cpp
  src/v20191029/model/TaskBaseInfo.cpp
  src/v20191029/model/DeleteLoginStatusRequest.cpp
  src/v20191029/model/CMEExportInfo.cpp
  src/v20191029/model/Entity.cpp
  src/v20191029/model/ImportMediaToProjectRequest.cpp
  src/v20191029/model/VODExportInfo.cpp
  src/v20191029/model/VideoEditProjectOutput.cpp
  src/v20191029/model/CreateProjectRequest.cpp
  )

set(cme_include
    include/tencentcloud/cme
  )

add_library(cme ${LIB_TYPE}
  ${cme_public_header}
  ${cme_public_header_model}
  ${cme_src})

set_target_properties(cme
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cme
  )

target_include_directories(cme
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(cme
  core)

#install(FILES ${cme_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cme/v20191029)
#install(FILES ${cme_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cme/v20191029/model)
install(DIRECTORY ${cme_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS cme
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
