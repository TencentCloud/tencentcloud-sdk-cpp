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

set(ai3d_public_header
  include/tencentcloud/ai3d/v20250513/Ai3dClient.h
  )

set(ai3d_public_header_model
  include/tencentcloud/ai3d/v20250513/model/SubmitHunyuanTo3DRapidJobResponse.h
  include/tencentcloud/ai3d/v20250513/model/SubmitHunyuanTo3DRapidJobRequest.h
  include/tencentcloud/ai3d/v20250513/model/SubmitHunyuanTo3DProJobResponse.h
  include/tencentcloud/ai3d/v20250513/model/SubmitHunyuanTo3DJobResponse.h
  include/tencentcloud/ai3d/v20250513/model/QueryHunyuanTo3DJobRequest.h
  include/tencentcloud/ai3d/v20250513/model/SubmitHunyuanTo3DProJobRequest.h
  include/tencentcloud/ai3d/v20250513/model/QueryHunyuanTo3DProJobRequest.h
  include/tencentcloud/ai3d/v20250513/model/File3D.h
  include/tencentcloud/ai3d/v20250513/model/QueryHunyuanTo3DRapidJobResponse.h
  include/tencentcloud/ai3d/v20250513/model/ViewImage.h
  include/tencentcloud/ai3d/v20250513/model/QueryHunyuanTo3DProJobResponse.h
  include/tencentcloud/ai3d/v20250513/model/SubmitHunyuanTo3DJobRequest.h
  include/tencentcloud/ai3d/v20250513/model/QueryHunyuanTo3DRapidJobRequest.h
  include/tencentcloud/ai3d/v20250513/model/QueryHunyuanTo3DJobResponse.h
  )

set(ai3d_src
  src/v20250513/Ai3dClient.cpp
  src/v20250513/model/SubmitHunyuanTo3DRapidJobResponse.cpp
  src/v20250513/model/SubmitHunyuanTo3DRapidJobRequest.cpp
  src/v20250513/model/SubmitHunyuanTo3DProJobResponse.cpp
  src/v20250513/model/SubmitHunyuanTo3DJobResponse.cpp
  src/v20250513/model/QueryHunyuanTo3DJobRequest.cpp
  src/v20250513/model/SubmitHunyuanTo3DProJobRequest.cpp
  src/v20250513/model/QueryHunyuanTo3DProJobRequest.cpp
  src/v20250513/model/File3D.cpp
  src/v20250513/model/QueryHunyuanTo3DRapidJobResponse.cpp
  src/v20250513/model/ViewImage.cpp
  src/v20250513/model/QueryHunyuanTo3DProJobResponse.cpp
  src/v20250513/model/SubmitHunyuanTo3DJobRequest.cpp
  src/v20250513/model/QueryHunyuanTo3DRapidJobRequest.cpp
  src/v20250513/model/QueryHunyuanTo3DJobResponse.cpp
  )

set(ai3d_include
    include/tencentcloud/ai3d
  )

add_library(ai3d ${LIB_TYPE}
  ${ai3d_public_header}
  ${ai3d_public_header_model}
  ${ai3d_src})

set_target_properties(ai3d
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ai3d
  )

target_include_directories(ai3d
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(ai3d
  core)

#install(FILES ${ai3d_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ai3d/v20250513)
#install(FILES ${ai3d_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ai3d/v20250513/model)
install(DIRECTORY ${ai3d_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS ai3d
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
