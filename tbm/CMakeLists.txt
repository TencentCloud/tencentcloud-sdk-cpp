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

set(tbm_public_header
  include/tencentcloud/tbm/v20180129/TbmClient.h
  )

set(tbm_public_header_model
  include/tencentcloud/tbm/v20180129/model/DescribeBrandPosCommentsRequest.h
  include/tencentcloud/tbm/v20180129/model/BrandReportArticle.h
  include/tencentcloud/tbm/v20180129/model/DescribeBrandSocialOpinionResponse.h
  include/tencentcloud/tbm/v20180129/model/DescribeBrandExposureResponse.h
  include/tencentcloud/tbm/v20180129/model/DescribeBrandPosCommentsResponse.h
  include/tencentcloud/tbm/v20180129/model/DescribeIndustryNewsRequest.h
  include/tencentcloud/tbm/v20180129/model/DescribeBrandSocialOpinionRequest.h
  include/tencentcloud/tbm/v20180129/model/DescribeBrandSocialReportRequest.h
  include/tencentcloud/tbm/v20180129/model/DescribeBrandSocialReportResponse.h
  include/tencentcloud/tbm/v20180129/model/DescribeBrandExposureRequest.h
  include/tencentcloud/tbm/v20180129/model/CommentInfo.h
  include/tencentcloud/tbm/v20180129/model/StarPortrait.h
  include/tencentcloud/tbm/v20180129/model/DateCount.h
  include/tencentcloud/tbm/v20180129/model/GenderPortraitInfo.h
  include/tencentcloud/tbm/v20180129/model/IndustryNews.h
  include/tencentcloud/tbm/v20180129/model/ProvincePortrait.h
  include/tencentcloud/tbm/v20180129/model/StarPortraitInfo.h
  include/tencentcloud/tbm/v20180129/model/AgePortraitInfo.h
  include/tencentcloud/tbm/v20180129/model/DescribeUserPortraitResponse.h
  include/tencentcloud/tbm/v20180129/model/DescribeBrandCommentCountRequest.h
  include/tencentcloud/tbm/v20180129/model/DescribeBrandMediaReportRequest.h
  include/tencentcloud/tbm/v20180129/model/DescribeBrandMediaReportResponse.h
  include/tencentcloud/tbm/v20180129/model/Comment.h
  include/tencentcloud/tbm/v20180129/model/ProvincePortraitInfo.h
  include/tencentcloud/tbm/v20180129/model/DescribeBrandCommentCountResponse.h
  include/tencentcloud/tbm/v20180129/model/MoviePortrait.h
  include/tencentcloud/tbm/v20180129/model/DescribeIndustryNewsResponse.h
  include/tencentcloud/tbm/v20180129/model/DescribeBrandNegCommentsResponse.h
  include/tencentcloud/tbm/v20180129/model/DescribeUserPortraitRequest.h
  include/tencentcloud/tbm/v20180129/model/DescribeBrandNegCommentsRequest.h
  include/tencentcloud/tbm/v20180129/model/AgePortrait.h
  include/tencentcloud/tbm/v20180129/model/MoviePortraitInfo.h
  include/tencentcloud/tbm/v20180129/model/GenderPortrait.h
  )

set(tbm_src
  src/v20180129/TbmClient.cpp
  src/v20180129/model/DescribeBrandPosCommentsRequest.cpp
  src/v20180129/model/BrandReportArticle.cpp
  src/v20180129/model/DescribeBrandSocialOpinionResponse.cpp
  src/v20180129/model/DescribeBrandExposureResponse.cpp
  src/v20180129/model/DescribeBrandPosCommentsResponse.cpp
  src/v20180129/model/DescribeIndustryNewsRequest.cpp
  src/v20180129/model/DescribeBrandSocialOpinionRequest.cpp
  src/v20180129/model/DescribeBrandSocialReportRequest.cpp
  src/v20180129/model/DescribeBrandSocialReportResponse.cpp
  src/v20180129/model/DescribeBrandExposureRequest.cpp
  src/v20180129/model/CommentInfo.cpp
  src/v20180129/model/StarPortrait.cpp
  src/v20180129/model/DateCount.cpp
  src/v20180129/model/GenderPortraitInfo.cpp
  src/v20180129/model/IndustryNews.cpp
  src/v20180129/model/ProvincePortrait.cpp
  src/v20180129/model/StarPortraitInfo.cpp
  src/v20180129/model/AgePortraitInfo.cpp
  src/v20180129/model/DescribeUserPortraitResponse.cpp
  src/v20180129/model/DescribeBrandCommentCountRequest.cpp
  src/v20180129/model/DescribeBrandMediaReportRequest.cpp
  src/v20180129/model/DescribeBrandMediaReportResponse.cpp
  src/v20180129/model/Comment.cpp
  src/v20180129/model/ProvincePortraitInfo.cpp
  src/v20180129/model/DescribeBrandCommentCountResponse.cpp
  src/v20180129/model/MoviePortrait.cpp
  src/v20180129/model/DescribeIndustryNewsResponse.cpp
  src/v20180129/model/DescribeBrandNegCommentsResponse.cpp
  src/v20180129/model/DescribeUserPortraitRequest.cpp
  src/v20180129/model/DescribeBrandNegCommentsRequest.cpp
  src/v20180129/model/AgePortrait.cpp
  src/v20180129/model/MoviePortraitInfo.cpp
  src/v20180129/model/GenderPortrait.cpp
  )

set(tbm_include
    include/tencentcloud/tbm
  )

add_library(tbm ${LIB_TYPE}
  ${tbm_public_header}
  ${tbm_public_header_model}
  ${tbm_src})

set_target_properties(tbm
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tbm
  )

target_include_directories(tbm
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tbm
  core)

#install(FILES ${tbm_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tbm/v20180129)
#install(FILES ${tbm_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tbm/v20180129/model)
install(DIRECTORY ${tbm_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tbm
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
