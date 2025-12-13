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
  include/tencentcloud/ai3d/v20250513/model/Convert3DFormatRequest.h
  include/tencentcloud/ai3d/v20250513/model/DescribeReduceFaceJobResponse.h
  include/tencentcloud/ai3d/v20250513/model/SubmitReduceFaceJobResponse.h
  include/tencentcloud/ai3d/v20250513/model/Convert3DFormatResponse.h
  include/tencentcloud/ai3d/v20250513/model/QueryHunyuanTo3DProJobRequest.h
  include/tencentcloud/ai3d/v20250513/model/QueryHunyuan3DPartJobResponse.h
  include/tencentcloud/ai3d/v20250513/model/QueryHunyuanTo3DRapidJobResponse.h
  include/tencentcloud/ai3d/v20250513/model/SubmitTextureTo3DJobRequest.h
  include/tencentcloud/ai3d/v20250513/model/DescribeReduceFaceJobRequest.h
  include/tencentcloud/ai3d/v20250513/model/SubmitHunyuanTo3DRapidJobResponse.h
  include/tencentcloud/ai3d/v20250513/model/SubmitHunyuanTo3DUVJobRequest.h
  include/tencentcloud/ai3d/v20250513/model/File3D.h
  include/tencentcloud/ai3d/v20250513/model/DescribeTextureTo3DJobResponse.h
  include/tencentcloud/ai3d/v20250513/model/InputFile3D.h
  include/tencentcloud/ai3d/v20250513/model/ViewImage.h
  include/tencentcloud/ai3d/v20250513/model/SubmitHunyuanTo3DRapidJobRequest.h
  include/tencentcloud/ai3d/v20250513/model/SubmitHunyuanTo3DUVJobResponse.h
  include/tencentcloud/ai3d/v20250513/model/SubmitHunyuan3DPartJobResponse.h
  include/tencentcloud/ai3d/v20250513/model/SubmitHunyuanTo3DProJobRequest.h
  include/tencentcloud/ai3d/v20250513/model/DescribeHunyuanTo3DUVJobResponse.h
  include/tencentcloud/ai3d/v20250513/model/SubmitReduceFaceJobRequest.h
  include/tencentcloud/ai3d/v20250513/model/DescribeTextureTo3DJobRequest.h
  include/tencentcloud/ai3d/v20250513/model/DescribeHunyuanTo3DUVJobRequest.h
  include/tencentcloud/ai3d/v20250513/model/SubmitHunyuan3DPartJobRequest.h
  include/tencentcloud/ai3d/v20250513/model/SubmitHunyuanTo3DProJobResponse.h
  include/tencentcloud/ai3d/v20250513/model/SubmitTextureTo3DJobResponse.h
  include/tencentcloud/ai3d/v20250513/model/Image.h
  include/tencentcloud/ai3d/v20250513/model/QueryHunyuanTo3DProJobResponse.h
  include/tencentcloud/ai3d/v20250513/model/QueryHunyuan3DPartJobRequest.h
  include/tencentcloud/ai3d/v20250513/model/QueryHunyuanTo3DRapidJobRequest.h
  )

set(ai3d_src
  src/v20250513/Ai3dClient.cpp
  src/v20250513/model/Convert3DFormatRequest.cpp
  src/v20250513/model/DescribeReduceFaceJobResponse.cpp
  src/v20250513/model/SubmitReduceFaceJobResponse.cpp
  src/v20250513/model/Convert3DFormatResponse.cpp
  src/v20250513/model/QueryHunyuanTo3DProJobRequest.cpp
  src/v20250513/model/QueryHunyuan3DPartJobResponse.cpp
  src/v20250513/model/QueryHunyuanTo3DRapidJobResponse.cpp
  src/v20250513/model/SubmitTextureTo3DJobRequest.cpp
  src/v20250513/model/DescribeReduceFaceJobRequest.cpp
  src/v20250513/model/SubmitHunyuanTo3DRapidJobResponse.cpp
  src/v20250513/model/SubmitHunyuanTo3DUVJobRequest.cpp
  src/v20250513/model/File3D.cpp
  src/v20250513/model/DescribeTextureTo3DJobResponse.cpp
  src/v20250513/model/InputFile3D.cpp
  src/v20250513/model/ViewImage.cpp
  src/v20250513/model/SubmitHunyuanTo3DRapidJobRequest.cpp
  src/v20250513/model/SubmitHunyuanTo3DUVJobResponse.cpp
  src/v20250513/model/SubmitHunyuan3DPartJobResponse.cpp
  src/v20250513/model/SubmitHunyuanTo3DProJobRequest.cpp
  src/v20250513/model/DescribeHunyuanTo3DUVJobResponse.cpp
  src/v20250513/model/SubmitReduceFaceJobRequest.cpp
  src/v20250513/model/DescribeTextureTo3DJobRequest.cpp
  src/v20250513/model/DescribeHunyuanTo3DUVJobRequest.cpp
  src/v20250513/model/SubmitHunyuan3DPartJobRequest.cpp
  src/v20250513/model/SubmitHunyuanTo3DProJobResponse.cpp
  src/v20250513/model/SubmitTextureTo3DJobResponse.cpp
  src/v20250513/model/Image.cpp
  src/v20250513/model/QueryHunyuanTo3DProJobResponse.cpp
  src/v20250513/model/QueryHunyuan3DPartJobRequest.cpp
  src/v20250513/model/QueryHunyuanTo3DRapidJobRequest.cpp
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
