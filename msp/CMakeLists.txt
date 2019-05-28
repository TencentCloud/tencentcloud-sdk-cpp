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

set(msp_public_header
  include/tencentcloud/msp/v20180319/MspClient.h
  )

set(msp_public_header_model
  include/tencentcloud/msp/v20180319/model/DstInfo.h
  include/tencentcloud/msp/v20180319/model/SrcInfo.h
  include/tencentcloud/msp/v20180319/model/DescribeMigrationTaskRequest.h
  include/tencentcloud/msp/v20180319/model/TimeObj.h
  include/tencentcloud/msp/v20180319/model/ModifyMigrationTaskBelongToProjectRequest.h
  include/tencentcloud/msp/v20180319/model/TaskStatus.h
  include/tencentcloud/msp/v20180319/model/ModifyMigrationTaskStatusResponse.h
  include/tencentcloud/msp/v20180319/model/ListMigrationTaskRequest.h
  include/tencentcloud/msp/v20180319/model/DeregisterMigrationTaskResponse.h
  include/tencentcloud/msp/v20180319/model/Project.h
  include/tencentcloud/msp/v20180319/model/ModifyMigrationTaskBelongToProjectResponse.h
  include/tencentcloud/msp/v20180319/model/ListMigrationProjectResponse.h
  include/tencentcloud/msp/v20180319/model/Task.h
  include/tencentcloud/msp/v20180319/model/RegisterMigrationTaskResponse.h
  include/tencentcloud/msp/v20180319/model/ModifyMigrationTaskStatusRequest.h
  include/tencentcloud/msp/v20180319/model/ListMigrationProjectRequest.h
  include/tencentcloud/msp/v20180319/model/DeregisterMigrationTaskRequest.h
  include/tencentcloud/msp/v20180319/model/ListMigrationTaskResponse.h
  include/tencentcloud/msp/v20180319/model/DescribeMigrationTaskResponse.h
  include/tencentcloud/msp/v20180319/model/RegisterMigrationTaskRequest.h
  )

set(msp_src
  src/v20180319/MspClient.cpp
  src/v20180319/model/DstInfo.cpp
  src/v20180319/model/SrcInfo.cpp
  src/v20180319/model/DescribeMigrationTaskRequest.cpp
  src/v20180319/model/TimeObj.cpp
  src/v20180319/model/ModifyMigrationTaskBelongToProjectRequest.cpp
  src/v20180319/model/TaskStatus.cpp
  src/v20180319/model/ModifyMigrationTaskStatusResponse.cpp
  src/v20180319/model/ListMigrationTaskRequest.cpp
  src/v20180319/model/DeregisterMigrationTaskResponse.cpp
  src/v20180319/model/Project.cpp
  src/v20180319/model/ModifyMigrationTaskBelongToProjectResponse.cpp
  src/v20180319/model/ListMigrationProjectResponse.cpp
  src/v20180319/model/Task.cpp
  src/v20180319/model/RegisterMigrationTaskResponse.cpp
  src/v20180319/model/ModifyMigrationTaskStatusRequest.cpp
  src/v20180319/model/ListMigrationProjectRequest.cpp
  src/v20180319/model/DeregisterMigrationTaskRequest.cpp
  src/v20180319/model/ListMigrationTaskResponse.cpp
  src/v20180319/model/DescribeMigrationTaskResponse.cpp
  src/v20180319/model/RegisterMigrationTaskRequest.cpp
  )

set(msp_include
    include/tencentcloud/msp
  )

add_library(msp ${LIB_TYPE}
  ${msp_public_header}
  ${msp_public_header_model}
  ${msp_src})

set_target_properties(msp
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}msp
  )

target_include_directories(msp
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(msp
  core)

#install(FILES ${msp_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/msp/v20180319)
#install(FILES ${msp_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/msp/v20180319/model)
install(DIRECTORY ${msp_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS msp
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
