#
# Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

set(wimgs_public_header
  include/tencentcloud/wimgs/v20251106/WimgsClient.h
  )

set(wimgs_public_header_model
  include/tencentcloud/wimgs/v20251106/model/SearchByTextResponse.h
  include/tencentcloud/wimgs/v20251106/model/SearchByTextRequest.h
  )

set(wimgs_src
  src/v20251106/WimgsClient.cpp
  src/v20251106/model/SearchByTextResponse.cpp
  src/v20251106/model/SearchByTextRequest.cpp
  )

set(wimgs_include
    include/tencentcloud/wimgs
  )

add_library(wimgs ${LIB_TYPE}
  ${wimgs_public_header}
  ${wimgs_public_header_model}
  ${wimgs_src})

set_target_properties(wimgs
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}wimgs
  )

target_include_directories(wimgs
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(wimgs
  core)

#install(FILES ${wimgs_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/wimgs/v20251106)
#install(FILES ${wimgs_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/wimgs/v20251106/model)
install(DIRECTORY ${wimgs_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS wimgs
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
