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

set(dsgc_public_header
  include/tencentcloud/dsgc/v20190723/DsgcClient.h
  )

set(dsgc_public_header_model
  include/tencentcloud/dsgc/v20190723/model/CreateDSPADbMetaResourcesRequest.h
  include/tencentcloud/dsgc/v20190723/model/CreateDSPADbMetaResourcesResponse.h
  include/tencentcloud/dsgc/v20190723/model/DspaCloudResourceMeta.h
  )

set(dsgc_src
  src/v20190723/DsgcClient.cpp
  src/v20190723/model/CreateDSPADbMetaResourcesRequest.cpp
  src/v20190723/model/CreateDSPADbMetaResourcesResponse.cpp
  src/v20190723/model/DspaCloudResourceMeta.cpp
  )

set(dsgc_include
    include/tencentcloud/dsgc
  )

add_library(dsgc ${LIB_TYPE}
  ${dsgc_public_header}
  ${dsgc_public_header_model}
  ${dsgc_src})

set_target_properties(dsgc
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}dsgc
  )

target_include_directories(dsgc
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(dsgc
  core)

#install(FILES ${dsgc_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/dsgc/v20190723)
#install(FILES ${dsgc_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/dsgc/v20190723/model)
install(DIRECTORY ${dsgc_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS dsgc
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
