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
  include/tencentcloud/cms/v20190321/model/CustomResult.h
  include/tencentcloud/cms/v20190321/model/TextData.h
  include/tencentcloud/cms/v20190321/model/TextModerationRequest.h
  include/tencentcloud/cms/v20190321/model/DetailResult.h
  include/tencentcloud/cms/v20190321/model/ImageModerationResponse.h
  include/tencentcloud/cms/v20190321/model/TextModerationResponse.h
  include/tencentcloud/cms/v20190321/model/ImageModerationRequest.h
  include/tencentcloud/cms/v20190321/model/CreateFileSampleRequest.h
  include/tencentcloud/cms/v20190321/model/ImageData.h
  include/tencentcloud/cms/v20190321/model/ImagePornDetect.h
  include/tencentcloud/cms/v20190321/model/DeleteTextSampleResponse.h
  include/tencentcloud/cms/v20190321/model/TextSample.h
  include/tencentcloud/cms/v20190321/model/CreateTextSampleResponse.h
  include/tencentcloud/cms/v20190321/model/TextOutputID.h
  include/tencentcloud/cms/v20190321/model/ManualReviewRequest.h
  include/tencentcloud/cms/v20190321/model/User.h
  include/tencentcloud/cms/v20190321/model/FileSampleInfo.h
  include/tencentcloud/cms/v20190321/model/DescribeFileSampleRequest.h
  include/tencentcloud/cms/v20190321/model/Device.h
  include/tencentcloud/cms/v20190321/model/CodeDetect.h
  include/tencentcloud/cms/v20190321/model/ImageTerrorDetect.h
  include/tencentcloud/cms/v20190321/model/DescribeTextSampleResponse.h
  include/tencentcloud/cms/v20190321/model/CodePosition.h
  include/tencentcloud/cms/v20190321/model/DeleteFileSampleResponse.h
  include/tencentcloud/cms/v20190321/model/FileSample.h
  include/tencentcloud/cms/v20190321/model/DescribeFileSampleResponse.h
  include/tencentcloud/cms/v20190321/model/TextOutputRes.h
  include/tencentcloud/cms/v20190321/model/RiskDetails.h
  include/tencentcloud/cms/v20190321/model/CreateTextSampleRequest.h
  include/tencentcloud/cms/v20190321/model/DeleteFileSampleRequest.h
  include/tencentcloud/cms/v20190321/model/Filter.h
  include/tencentcloud/cms/v20190321/model/ManualReviewData.h
  include/tencentcloud/cms/v20190321/model/OCRDetect.h
  include/tencentcloud/cms/v20190321/model/ManualReviewContent.h
  include/tencentcloud/cms/v20190321/model/Coordinate.h
  include/tencentcloud/cms/v20190321/model/Similar.h
  include/tencentcloud/cms/v20190321/model/ImageHotDetect.h
  include/tencentcloud/cms/v20190321/model/TextOutputComm.h
  include/tencentcloud/cms/v20190321/model/DescribeTextSampleRequest.h
  include/tencentcloud/cms/v20190321/model/CodeDetail.h
  include/tencentcloud/cms/v20190321/model/ImagePolityDetect.h
  include/tencentcloud/cms/v20190321/model/OCRItem.h
  include/tencentcloud/cms/v20190321/model/ImageIllegalDetect.h
  include/tencentcloud/cms/v20190321/model/RrectF.h
  include/tencentcloud/cms/v20190321/model/CreateFileSampleResponse.h
  include/tencentcloud/cms/v20190321/model/ManualReviewResponse.h
  include/tencentcloud/cms/v20190321/model/LogoDetail.h
  include/tencentcloud/cms/v20190321/model/Logo.h
  include/tencentcloud/cms/v20190321/model/PhoneDetect.h
  include/tencentcloud/cms/v20190321/model/DeleteTextSampleRequest.h
  )

set(cms_src
  src/v20190321/CmsClient.cpp
  src/v20190321/model/CustomResult.cpp
  src/v20190321/model/TextData.cpp
  src/v20190321/model/TextModerationRequest.cpp
  src/v20190321/model/DetailResult.cpp
  src/v20190321/model/ImageModerationResponse.cpp
  src/v20190321/model/TextModerationResponse.cpp
  src/v20190321/model/ImageModerationRequest.cpp
  src/v20190321/model/CreateFileSampleRequest.cpp
  src/v20190321/model/ImageData.cpp
  src/v20190321/model/ImagePornDetect.cpp
  src/v20190321/model/DeleteTextSampleResponse.cpp
  src/v20190321/model/TextSample.cpp
  src/v20190321/model/CreateTextSampleResponse.cpp
  src/v20190321/model/TextOutputID.cpp
  src/v20190321/model/ManualReviewRequest.cpp
  src/v20190321/model/User.cpp
  src/v20190321/model/FileSampleInfo.cpp
  src/v20190321/model/DescribeFileSampleRequest.cpp
  src/v20190321/model/Device.cpp
  src/v20190321/model/CodeDetect.cpp
  src/v20190321/model/ImageTerrorDetect.cpp
  src/v20190321/model/DescribeTextSampleResponse.cpp
  src/v20190321/model/CodePosition.cpp
  src/v20190321/model/DeleteFileSampleResponse.cpp
  src/v20190321/model/FileSample.cpp
  src/v20190321/model/DescribeFileSampleResponse.cpp
  src/v20190321/model/TextOutputRes.cpp
  src/v20190321/model/RiskDetails.cpp
  src/v20190321/model/CreateTextSampleRequest.cpp
  src/v20190321/model/DeleteFileSampleRequest.cpp
  src/v20190321/model/Filter.cpp
  src/v20190321/model/ManualReviewData.cpp
  src/v20190321/model/OCRDetect.cpp
  src/v20190321/model/ManualReviewContent.cpp
  src/v20190321/model/Coordinate.cpp
  src/v20190321/model/Similar.cpp
  src/v20190321/model/ImageHotDetect.cpp
  src/v20190321/model/TextOutputComm.cpp
  src/v20190321/model/DescribeTextSampleRequest.cpp
  src/v20190321/model/CodeDetail.cpp
  src/v20190321/model/ImagePolityDetect.cpp
  src/v20190321/model/OCRItem.cpp
  src/v20190321/model/ImageIllegalDetect.cpp
  src/v20190321/model/RrectF.cpp
  src/v20190321/model/CreateFileSampleResponse.cpp
  src/v20190321/model/ManualReviewResponse.cpp
  src/v20190321/model/LogoDetail.cpp
  src/v20190321/model/Logo.cpp
  src/v20190321/model/PhoneDetect.cpp
  src/v20190321/model/DeleteTextSampleRequest.cpp
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
