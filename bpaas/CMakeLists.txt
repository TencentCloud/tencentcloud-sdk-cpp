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

set(bpaas_public_header
  include/tencentcloud/bpaas/v20181217/BpaasClient.h
  )

set(bpaas_public_header_model
  include/tencentcloud/bpaas/v20181217/model/StatusNode.h
  include/tencentcloud/bpaas/v20181217/model/Scf.h
  include/tencentcloud/bpaas/v20181217/model/ApproveOpinion.h
  include/tencentcloud/bpaas/v20181217/model/OutApproveBpaasApplicationResponse.h
  include/tencentcloud/bpaas/v20181217/model/GetBpaasApproveDetailRequest.h
  include/tencentcloud/bpaas/v20181217/model/ApproveUser.h
  include/tencentcloud/bpaas/v20181217/model/GetBpaasApproveDetailResponse.h
  include/tencentcloud/bpaas/v20181217/model/OutApproveBpaasApplicationRequest.h
  include/tencentcloud/bpaas/v20181217/model/ScfParam.h
  include/tencentcloud/bpaas/v20181217/model/ApplyParam.h
  )

set(bpaas_src
  src/v20181217/BpaasClient.cpp
  src/v20181217/model/StatusNode.cpp
  src/v20181217/model/Scf.cpp
  src/v20181217/model/ApproveOpinion.cpp
  src/v20181217/model/OutApproveBpaasApplicationResponse.cpp
  src/v20181217/model/GetBpaasApproveDetailRequest.cpp
  src/v20181217/model/ApproveUser.cpp
  src/v20181217/model/GetBpaasApproveDetailResponse.cpp
  src/v20181217/model/OutApproveBpaasApplicationRequest.cpp
  src/v20181217/model/ScfParam.cpp
  src/v20181217/model/ApplyParam.cpp
  )

set(bpaas_include
    include/tencentcloud/bpaas
  )

add_library(bpaas ${LIB_TYPE}
  ${bpaas_public_header}
  ${bpaas_public_header_model}
  ${bpaas_src})

set_target_properties(bpaas
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}bpaas
  )

target_include_directories(bpaas
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(bpaas
  core)

#install(FILES ${bpaas_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/bpaas/v20181217)
#install(FILES ${bpaas_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/bpaas/v20181217/model)
install(DIRECTORY ${bpaas_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS bpaas
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
