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

set(yunsou_public_header
  include/tencentcloud/yunsou/v20180504/YunsouClient.h
  include/tencentcloud/yunsou/v20191115/YunsouClient.h
  )

set(yunsou_public_header_model
  include/tencentcloud/yunsou/v20180504/model/DataSearchResponse.h
  include/tencentcloud/yunsou/v20180504/model/DataSearchRequest.h
  include/tencentcloud/yunsou/v20180504/model/DataManipulationRequest.h
  include/tencentcloud/yunsou/v20180504/model/DataManipulationResponse.h
  include/tencentcloud/yunsou/v20191115/model/SearchResult.h
  include/tencentcloud/yunsou/v20191115/model/SearchResultSeg.h
  include/tencentcloud/yunsou/v20191115/model/DataManipulationResult.h
  include/tencentcloud/yunsou/v20191115/model/SearchResultItem.h
  include/tencentcloud/yunsou/v20191115/model/DataSearchResponse.h
  include/tencentcloud/yunsou/v20191115/model/DataSearchRequest.h
  include/tencentcloud/yunsou/v20191115/model/DataManipulationResultItem.h
  include/tencentcloud/yunsou/v20191115/model/DataManipulationRequest.h
  include/tencentcloud/yunsou/v20191115/model/DataManipulationResponse.h
  )

set(yunsou_src
  src/v20180504/YunsouClient.cpp
  src/v20191115/YunsouClient.cpp
  src/v20180504/model/DataSearchResponse.cpp
  src/v20180504/model/DataSearchRequest.cpp
  src/v20180504/model/DataManipulationRequest.cpp
  src/v20180504/model/DataManipulationResponse.cpp
  src/v20191115/model/SearchResult.cpp
  src/v20191115/model/SearchResultSeg.cpp
  src/v20191115/model/DataManipulationResult.cpp
  src/v20191115/model/SearchResultItem.cpp
  src/v20191115/model/DataSearchResponse.cpp
  src/v20191115/model/DataSearchRequest.cpp
  src/v20191115/model/DataManipulationResultItem.cpp
  src/v20191115/model/DataManipulationRequest.cpp
  src/v20191115/model/DataManipulationResponse.cpp
  )

set(yunsou_include
    include/tencentcloud/yunsou
  )

add_library(yunsou ${LIB_TYPE}
  ${yunsou_public_header}
  ${yunsou_public_header_model}
  ${yunsou_src})

set_target_properties(yunsou
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}yunsou
  )

target_include_directories(yunsou
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(yunsou
  core)

#install(FILES ${yunsou_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/yunsou/v20191115)
#install(FILES ${yunsou_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/yunsou/v20191115/model)
install(DIRECTORY ${yunsou_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS yunsou
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
