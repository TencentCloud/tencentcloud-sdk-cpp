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

set(thpc_public_header
  include/tencentcloud/thpc/v20211109/ThpcClient.h
  )

set(thpc_public_header_model
  include/tencentcloud/thpc/v20211109/model/DeleteClusterRequest.h
  include/tencentcloud/thpc/v20211109/model/SystemDisk.h
  include/tencentcloud/thpc/v20211109/model/ManagerNode.h
  include/tencentcloud/thpc/v20211109/model/Placement.h
  include/tencentcloud/thpc/v20211109/model/CreateClusterRequest.h
  include/tencentcloud/thpc/v20211109/model/LoginSettings.h
  include/tencentcloud/thpc/v20211109/model/InternetAccessible.h
  include/tencentcloud/thpc/v20211109/model/ComputeNode.h
  include/tencentcloud/thpc/v20211109/model/VirtualPrivateCloud.h
  include/tencentcloud/thpc/v20211109/model/DeleteClusterResponse.h
  include/tencentcloud/thpc/v20211109/model/InstanceChargePrepaid.h
  include/tencentcloud/thpc/v20211109/model/CreateClusterResponse.h
  include/tencentcloud/thpc/v20211109/model/DataDisk.h
  )

set(thpc_src
  src/v20211109/ThpcClient.cpp
  src/v20211109/model/DeleteClusterRequest.cpp
  src/v20211109/model/SystemDisk.cpp
  src/v20211109/model/ManagerNode.cpp
  src/v20211109/model/Placement.cpp
  src/v20211109/model/CreateClusterRequest.cpp
  src/v20211109/model/LoginSettings.cpp
  src/v20211109/model/InternetAccessible.cpp
  src/v20211109/model/ComputeNode.cpp
  src/v20211109/model/VirtualPrivateCloud.cpp
  src/v20211109/model/DeleteClusterResponse.cpp
  src/v20211109/model/InstanceChargePrepaid.cpp
  src/v20211109/model/CreateClusterResponse.cpp
  src/v20211109/model/DataDisk.cpp
  )

set(thpc_include
    include/tencentcloud/thpc
  )

add_library(thpc ${LIB_TYPE}
  ${thpc_public_header}
  ${thpc_public_header_model}
  ${thpc_src})

set_target_properties(thpc
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}thpc
  )

target_include_directories(thpc
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(thpc
  core)

#install(FILES ${thpc_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/thpc/v20211109)
#install(FILES ${thpc_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/thpc/v20211109/model)
install(DIRECTORY ${thpc_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS thpc
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
