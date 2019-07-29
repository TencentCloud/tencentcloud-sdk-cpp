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

set(tiia_public_header
  include/tencentcloud/tiia/v20190529/TiiaClient.h
  )

set(tiia_public_header_model
  include/tencentcloud/tiia/v20190529/model/DetectProductResponse.h
  include/tencentcloud/tiia/v20190529/model/ImageModerationRequest.h
  include/tencentcloud/tiia/v20190529/model/Product.h
  include/tencentcloud/tiia/v20190529/model/Candidate.h
  include/tencentcloud/tiia/v20190529/model/TerrorismResult.h
  include/tencentcloud/tiia/v20190529/model/DetectLabelRequest.h
  include/tencentcloud/tiia/v20190529/model/RecognizeCarRequest.h
  include/tencentcloud/tiia/v20190529/model/Coord.h
  include/tencentcloud/tiia/v20190529/model/DetectLabelResponse.h
  include/tencentcloud/tiia/v20190529/model/PoliticsResult.h
  include/tencentcloud/tiia/v20190529/model/PornResult.h
  include/tencentcloud/tiia/v20190529/model/DisgustResult.h
  include/tencentcloud/tiia/v20190529/model/CarTagItem.h
  include/tencentcloud/tiia/v20190529/model/FaceRect.h
  include/tencentcloud/tiia/v20190529/model/FaceResult.h
  include/tencentcloud/tiia/v20190529/model/RecognizeCarResponse.h
  include/tencentcloud/tiia/v20190529/model/DetectProductRequest.h
  include/tencentcloud/tiia/v20190529/model/ImageModerationResponse.h
  include/tencentcloud/tiia/v20190529/model/DetectLabelItem.h
  )

set(tiia_src
  src/v20190529/TiiaClient.cpp
  src/v20190529/model/DetectProductResponse.cpp
  src/v20190529/model/ImageModerationRequest.cpp
  src/v20190529/model/Product.cpp
  src/v20190529/model/Candidate.cpp
  src/v20190529/model/TerrorismResult.cpp
  src/v20190529/model/DetectLabelRequest.cpp
  src/v20190529/model/RecognizeCarRequest.cpp
  src/v20190529/model/Coord.cpp
  src/v20190529/model/DetectLabelResponse.cpp
  src/v20190529/model/PoliticsResult.cpp
  src/v20190529/model/PornResult.cpp
  src/v20190529/model/DisgustResult.cpp
  src/v20190529/model/CarTagItem.cpp
  src/v20190529/model/FaceRect.cpp
  src/v20190529/model/FaceResult.cpp
  src/v20190529/model/RecognizeCarResponse.cpp
  src/v20190529/model/DetectProductRequest.cpp
  src/v20190529/model/ImageModerationResponse.cpp
  src/v20190529/model/DetectLabelItem.cpp
  )

set(tiia_include
    include/tencentcloud/tiia
  )

add_library(tiia ${LIB_TYPE}
  ${tiia_public_header}
  ${tiia_public_header_model}
  ${tiia_src})

set_target_properties(tiia
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tiia
  )

target_include_directories(tiia
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tiia
  core)

#install(FILES ${tiia_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tiia/v20190529)
#install(FILES ${tiia_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tiia/v20190529/model)
install(DIRECTORY ${tiia_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tiia
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
