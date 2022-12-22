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

set(anicloud_public_header
  include/tencentcloud/anicloud/v20220923/AnicloudClient.h
  )

set(anicloud_public_header_model
  include/tencentcloud/anicloud/v20220923/model/CheckAppidExistRequest.h
  include/tencentcloud/anicloud/v20220923/model/QueryResourceInfoResponse.h
  include/tencentcloud/anicloud/v20220923/model/CheckAppidExistResponse.h
  include/tencentcloud/anicloud/v20220923/model/GoodsDetail.h
  include/tencentcloud/anicloud/v20220923/model/QueryResourceInfoRequest.h
  include/tencentcloud/anicloud/v20220923/model/QueryResourceResponse.h
  include/tencentcloud/anicloud/v20220923/model/QueryResourceRequest.h
  include/tencentcloud/anicloud/v20220923/model/Resource.h
  )

set(anicloud_src
  src/v20220923/AnicloudClient.cpp
  src/v20220923/model/CheckAppidExistRequest.cpp
  src/v20220923/model/QueryResourceInfoResponse.cpp
  src/v20220923/model/CheckAppidExistResponse.cpp
  src/v20220923/model/GoodsDetail.cpp
  src/v20220923/model/QueryResourceInfoRequest.cpp
  src/v20220923/model/QueryResourceResponse.cpp
  src/v20220923/model/QueryResourceRequest.cpp
  src/v20220923/model/Resource.cpp
  )

set(anicloud_include
    include/tencentcloud/anicloud
  )

add_library(anicloud ${LIB_TYPE}
  ${anicloud_public_header}
  ${anicloud_public_header_model}
  ${anicloud_src})

set_target_properties(anicloud
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}anicloud
  )

target_include_directories(anicloud
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(anicloud
  core)

#install(FILES ${anicloud_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/anicloud/v20220923)
#install(FILES ${anicloud_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/anicloud/v20220923/model)
install(DIRECTORY ${anicloud_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS anicloud
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
