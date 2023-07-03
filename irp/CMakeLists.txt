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

set(irp_public_header
  include/tencentcloud/irp/v20220805/IrpClient.h
  include/tencentcloud/irp/v20220324/IrpClient.h
  )

set(irp_public_header_model
  include/tencentcloud/irp/v20220805/model/FeedUserInfo.h
  include/tencentcloud/irp/v20220805/model/DocItem.h
  include/tencentcloud/irp/v20220805/model/ReportFeedItemRequest.h
  include/tencentcloud/irp/v20220805/model/ReportGoodsBehaviorResponse.h
  include/tencentcloud/irp/v20220805/model/UserIdInfo.h
  include/tencentcloud/irp/v20220805/model/FeedRecommendResponse.h
  include/tencentcloud/irp/v20220805/model/UserPortraitInfo.h
  include/tencentcloud/irp/v20220805/model/RecGoodsData.h
  include/tencentcloud/irp/v20220805/model/GoodsInfo.h
  include/tencentcloud/irp/v20220805/model/DislikeInfo.h
  include/tencentcloud/irp/v20220805/model/ReportFeedBehaviorResponse.h
  include/tencentcloud/irp/v20220805/model/ReportGoodsInfoResponse.h
  include/tencentcloud/irp/v20220805/model/ReportFeedUserRequest.h
  include/tencentcloud/irp/v20220805/model/RecItemData.h
  include/tencentcloud/irp/v20220805/model/FeedBehaviorInfo.h
  include/tencentcloud/irp/v20220805/model/ReportFeedUserResponse.h
  include/tencentcloud/irp/v20220805/model/StrUserIdInfo.h
  include/tencentcloud/irp/v20220805/model/ReportFeedItemResponse.h
  include/tencentcloud/irp/v20220805/model/DescribeGoodsRecommendRequest.h
  include/tencentcloud/irp/v20220805/model/ReportGoodsBehaviorRequest.h
  include/tencentcloud/irp/v20220805/model/ReportGoodsInfoRequest.h
  include/tencentcloud/irp/v20220805/model/ReportFeedBehaviorRequest.h
  include/tencentcloud/irp/v20220805/model/GoodsBehaviorInfo.h
  include/tencentcloud/irp/v20220805/model/DescribeGoodsRecommendResponse.h
  include/tencentcloud/irp/v20220805/model/FeedRecommendRequest.h
  include/tencentcloud/irp/v20220324/model/UserIdInfo.h
  include/tencentcloud/irp/v20220324/model/ReportMaterialResponse.h
  include/tencentcloud/irp/v20220324/model/DocBehavior.h
  include/tencentcloud/irp/v20220324/model/AuthorInfo.h
  include/tencentcloud/irp/v20220324/model/DocItem.h
  include/tencentcloud/irp/v20220324/model/ReportActionResponse.h
  include/tencentcloud/irp/v20220324/model/DislikeInfo.h
  include/tencentcloud/irp/v20220324/model/ReportPortraitRequest.h
  include/tencentcloud/irp/v20220324/model/ReportPortraitResponse.h
  include/tencentcloud/irp/v20220324/model/ReportActionRequest.h
  include/tencentcloud/irp/v20220324/model/PortraitInfo.h
  include/tencentcloud/irp/v20220324/model/RecommendContentRequest.h
  include/tencentcloud/irp/v20220324/model/RecItemData.h
  include/tencentcloud/irp/v20220324/model/ReportMaterialRequest.h
  include/tencentcloud/irp/v20220324/model/RecommendContentResponse.h
  include/tencentcloud/irp/v20220324/model/TagInfo.h
  )

set(irp_src
  src/v20220805/IrpClient.cpp
  src/v20220324/IrpClient.cpp
  src/v20220805/model/FeedUserInfo.cpp
  src/v20220805/model/DocItem.cpp
  src/v20220805/model/ReportFeedItemRequest.cpp
  src/v20220805/model/ReportGoodsBehaviorResponse.cpp
  src/v20220805/model/UserIdInfo.cpp
  src/v20220805/model/FeedRecommendResponse.cpp
  src/v20220805/model/UserPortraitInfo.cpp
  src/v20220805/model/RecGoodsData.cpp
  src/v20220805/model/GoodsInfo.cpp
  src/v20220805/model/DislikeInfo.cpp
  src/v20220805/model/ReportFeedBehaviorResponse.cpp
  src/v20220805/model/ReportGoodsInfoResponse.cpp
  src/v20220805/model/ReportFeedUserRequest.cpp
  src/v20220805/model/RecItemData.cpp
  src/v20220805/model/FeedBehaviorInfo.cpp
  src/v20220805/model/ReportFeedUserResponse.cpp
  src/v20220805/model/StrUserIdInfo.cpp
  src/v20220805/model/ReportFeedItemResponse.cpp
  src/v20220805/model/DescribeGoodsRecommendRequest.cpp
  src/v20220805/model/ReportGoodsBehaviorRequest.cpp
  src/v20220805/model/ReportGoodsInfoRequest.cpp
  src/v20220805/model/ReportFeedBehaviorRequest.cpp
  src/v20220805/model/GoodsBehaviorInfo.cpp
  src/v20220805/model/DescribeGoodsRecommendResponse.cpp
  src/v20220805/model/FeedRecommendRequest.cpp
  src/v20220324/model/UserIdInfo.cpp
  src/v20220324/model/ReportMaterialResponse.cpp
  src/v20220324/model/DocBehavior.cpp
  src/v20220324/model/AuthorInfo.cpp
  src/v20220324/model/DocItem.cpp
  src/v20220324/model/ReportActionResponse.cpp
  src/v20220324/model/DislikeInfo.cpp
  src/v20220324/model/ReportPortraitRequest.cpp
  src/v20220324/model/ReportPortraitResponse.cpp
  src/v20220324/model/ReportActionRequest.cpp
  src/v20220324/model/PortraitInfo.cpp
  src/v20220324/model/RecommendContentRequest.cpp
  src/v20220324/model/RecItemData.cpp
  src/v20220324/model/ReportMaterialRequest.cpp
  src/v20220324/model/RecommendContentResponse.cpp
  src/v20220324/model/TagInfo.cpp
  )

set(irp_include
    include/tencentcloud/irp
  )

add_library(irp ${LIB_TYPE}
  ${irp_public_header}
  ${irp_public_header_model}
  ${irp_src})

set_target_properties(irp
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}irp
  )

target_include_directories(irp
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(irp
  core)

#install(FILES ${irp_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/irp/v20220324)
#install(FILES ${irp_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/irp/v20220324/model)
install(DIRECTORY ${irp_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS irp
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
