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

set(cms_public_header
  include/tencentcloud/cms/v20190321/CmsClient.h
  )

set(cms_public_header_model
  include/tencentcloud/cms/v20190321/model/AudioModerationResponse.h
  include/tencentcloud/cms/v20190321/model/DescribeModerationOverviewRequest.h
  include/tencentcloud/cms/v20190321/model/AudioModerationRequest.h
  include/tencentcloud/cms/v20190321/model/ImageData.h
  include/tencentcloud/cms/v20190321/model/OverviewRecord.h
  include/tencentcloud/cms/v20190321/model/Similar.h
  include/tencentcloud/cms/v20190321/model/ImagePornDetect.h
  include/tencentcloud/cms/v20190321/model/TextData.h
  include/tencentcloud/cms/v20190321/model/ImageTerrorDetect.h
  include/tencentcloud/cms/v20190321/model/ImageIllegalDetect.h
  include/tencentcloud/cms/v20190321/model/ImageModerationRequest.h
  include/tencentcloud/cms/v20190321/model/VideoModerationRequest.h
  include/tencentcloud/cms/v20190321/model/DescribeModerationOverviewResponse.h
  include/tencentcloud/cms/v20190321/model/VideoModerationResponse.h
  include/tencentcloud/cms/v20190321/model/ImagePolityDetect.h
  include/tencentcloud/cms/v20190321/model/ImageModerationResponse.h
  include/tencentcloud/cms/v20190321/model/TextModerationResponse.h
  include/tencentcloud/cms/v20190321/model/TextModerationRequest.h
  )

set(cms_src
  src/v20190321/CmsClient.cpp
  src/v20190321/model/AudioModerationResponse.cpp
  src/v20190321/model/DescribeModerationOverviewRequest.cpp
  src/v20190321/model/AudioModerationRequest.cpp
  src/v20190321/model/ImageData.cpp
  src/v20190321/model/OverviewRecord.cpp
  src/v20190321/model/Similar.cpp
  src/v20190321/model/ImagePornDetect.cpp
  src/v20190321/model/TextData.cpp
  src/v20190321/model/ImageTerrorDetect.cpp
  src/v20190321/model/ImageIllegalDetect.cpp
  src/v20190321/model/ImageModerationRequest.cpp
  src/v20190321/model/VideoModerationRequest.cpp
  src/v20190321/model/DescribeModerationOverviewResponse.cpp
  src/v20190321/model/VideoModerationResponse.cpp
  src/v20190321/model/ImagePolityDetect.cpp
  src/v20190321/model/ImageModerationResponse.cpp
  src/v20190321/model/TextModerationResponse.cpp
  src/v20190321/model/TextModerationRequest.cpp
  )

set(cms_include
    include/tencentcloud/cms
  )

add_library(cms ${LIB_TYPE}
  ${cms_public_header}
  ${cms_public_header_model}
  ${cms_src})

set_target_properties(cms
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cms
  )

target_include_directories(cms
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(cms
  core)

#install(FILES ${cms_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cms/v20190321)
#install(FILES ${cms_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cms/v20190321/model)
install(DIRECTORY ${cms_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS cms
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
