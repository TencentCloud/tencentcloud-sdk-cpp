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

set(ivld_public_header
  include/tencentcloud/ivld/v20210903/IvldClient.h
  )

set(ivld_public_header_model
  include/tencentcloud/ivld/v20210903/model/MultiLevelTag.h
  include/tencentcloud/ivld/v20210903/model/AddCustomPersonImageRequest.h
  include/tencentcloud/ivld/v20210903/model/L2Tag.h
  include/tencentcloud/ivld/v20210903/model/DescribeVideoSummaryDetailRequest.h
  include/tencentcloud/ivld/v20210903/model/DescribeTaskDetailResponse.h
  include/tencentcloud/ivld/v20210903/model/DeleteCustomCategoryRequest.h
  include/tencentcloud/ivld/v20210903/model/MediaFilter.h
  include/tencentcloud/ivld/v20210903/model/CustomCategory.h
  include/tencentcloud/ivld/v20210903/model/DescribeCustomCategoriesRequest.h
  include/tencentcloud/ivld/v20210903/model/DescribeTasksResponse.h
  include/tencentcloud/ivld/v20210903/model/CustomPersonFilter.h
  include/tencentcloud/ivld/v20210903/model/DescribeVideoSummaryDetailResponse.h
  include/tencentcloud/ivld/v20210903/model/CreateCustomPersonResponse.h
  include/tencentcloud/ivld/v20210903/model/VideoRotationMode.h
  include/tencentcloud/ivld/v20210903/model/DescribeUsageAmountRequest.h
  include/tencentcloud/ivld/v20210903/model/ImportMediaResponse.h
  include/tencentcloud/ivld/v20210903/model/QueryCallbackRequest.h
  include/tencentcloud/ivld/v20210903/model/DescribeMediaRequest.h
  include/tencentcloud/ivld/v20210903/model/TaskInfo.h
  include/tencentcloud/ivld/v20210903/model/ShowInfo.h
  include/tencentcloud/ivld/v20210903/model/DescribeTasksRequest.h
  include/tencentcloud/ivld/v20210903/model/DescribeCustomPersonsResponse.h
  include/tencentcloud/ivld/v20210903/model/TextData.h
  include/tencentcloud/ivld/v20210903/model/ImageMetadata.h
  include/tencentcloud/ivld/v20210903/model/CreateCustomGroupRequest.h
  include/tencentcloud/ivld/v20210903/model/TextMetadata.h
  include/tencentcloud/ivld/v20210903/model/AddCustomPersonImageResponse.h
  include/tencentcloud/ivld/v20210903/model/CreateDefaultCategoriesRequest.h
  include/tencentcloud/ivld/v20210903/model/TaskFilter.h
  include/tencentcloud/ivld/v20210903/model/TextAppearInfo.h
  include/tencentcloud/ivld/v20210903/model/MediaPreknownInfo.h
  include/tencentcloud/ivld/v20210903/model/CustomPersonInfo.h
  include/tencentcloud/ivld/v20210903/model/UpdateCustomPersonResponse.h
  include/tencentcloud/ivld/v20210903/model/UpdateCustomCategoryRequest.h
  include/tencentcloud/ivld/v20210903/model/CreateTaskRequest.h
  include/tencentcloud/ivld/v20210903/model/DescribeCustomCategoriesResponse.h
  include/tencentcloud/ivld/v20210903/model/DescribeCustomGroupResponse.h
  include/tencentcloud/ivld/v20210903/model/PersonImageInfo.h
  include/tencentcloud/ivld/v20210903/model/SortBy.h
  include/tencentcloud/ivld/v20210903/model/DeleteCustomPersonImageRequest.h
  include/tencentcloud/ivld/v20210903/model/DeleteMediaResponse.h
  include/tencentcloud/ivld/v20210903/model/Rectf.h
  include/tencentcloud/ivld/v20210903/model/ModifyCallbackRequest.h
  include/tencentcloud/ivld/v20210903/model/DeleteCustomPersonResponse.h
  include/tencentcloud/ivld/v20210903/model/DeleteTaskRequest.h
  include/tencentcloud/ivld/v20210903/model/ImportMediaRequest.h
  include/tencentcloud/ivld/v20210903/model/DescribeMediasRequest.h
  include/tencentcloud/ivld/v20210903/model/CreateDefaultCategoriesResponse.h
  include/tencentcloud/ivld/v20210903/model/AsrResult.h
  include/tencentcloud/ivld/v20210903/model/ClassifiedPersonInfo.h
  include/tencentcloud/ivld/v20210903/model/DescribeCustomPersonsRequest.h
  include/tencentcloud/ivld/v20210903/model/DescribeMediaResponse.h
  include/tencentcloud/ivld/v20210903/model/TextSegMatchShotScore.h
  include/tencentcloud/ivld/v20210903/model/Data.h
  include/tencentcloud/ivld/v20210903/model/DescribeUsageAmountResponse.h
  include/tencentcloud/ivld/v20210903/model/AppearInfo.h
  include/tencentcloud/ivld/v20210903/model/PersonInfo.h
  include/tencentcloud/ivld/v20210903/model/AudioInfo.h
  include/tencentcloud/ivld/v20210903/model/ImageOcr.h
  include/tencentcloud/ivld/v20210903/model/DeleteCustomPersonImageResponse.h
  include/tencentcloud/ivld/v20210903/model/TextInfo.h
  include/tencentcloud/ivld/v20210903/model/CreateCustomCategoryResponse.h
  include/tencentcloud/ivld/v20210903/model/CreateVideoSummaryTaskRequest.h
  include/tencentcloud/ivld/v20210903/model/QueryCallbackResponse.h
  include/tencentcloud/ivld/v20210903/model/MultiLevelPersonInfo.h
  include/tencentcloud/ivld/v20210903/model/CreateCustomGroupResponse.h
  include/tencentcloud/ivld/v20210903/model/UpdateCustomCategoryResponse.h
  include/tencentcloud/ivld/v20210903/model/TTSMode.h
  include/tencentcloud/ivld/v20210903/model/DescribeMediasResponse.h
  include/tencentcloud/ivld/v20210903/model/UnknownPerson.h
  include/tencentcloud/ivld/v20210903/model/MediaMetadata.h
  include/tencentcloud/ivld/v20210903/model/DeleteCustomPersonRequest.h
  include/tencentcloud/ivld/v20210903/model/AudioMetadata.h
  include/tencentcloud/ivld/v20210903/model/DescribeCustomPersonDetailResponse.h
  include/tencentcloud/ivld/v20210903/model/DeleteMediaRequest.h
  include/tencentcloud/ivld/v20210903/model/CreateCustomCategoryRequest.h
  include/tencentcloud/ivld/v20210903/model/VideoAppearInfo.h
  include/tencentcloud/ivld/v20210903/model/DescribeTaskResponse.h
  include/tencentcloud/ivld/v20210903/model/AppearIndexPair.h
  include/tencentcloud/ivld/v20210903/model/CreateTaskResponse.h
  include/tencentcloud/ivld/v20210903/model/DescribeCustomPersonDetailRequest.h
  include/tencentcloud/ivld/v20210903/model/ImageData.h
  include/tencentcloud/ivld/v20210903/model/DescribeTaskDetailRequest.h
  include/tencentcloud/ivld/v20210903/model/DeleteTaskResponse.h
  include/tencentcloud/ivld/v20210903/model/DescribeTaskRequest.h
  include/tencentcloud/ivld/v20210903/model/UpdateCustomPersonRequest.h
  include/tencentcloud/ivld/v20210903/model/L1Tag.h
  include/tencentcloud/ivld/v20210903/model/ModifyCallbackResponse.h
  include/tencentcloud/ivld/v20210903/model/ImageLogo.h
  include/tencentcloud/ivld/v20210903/model/L3Tag.h
  include/tencentcloud/ivld/v20210903/model/CreateVideoSummaryTaskResponse.h
  include/tencentcloud/ivld/v20210903/model/AudioData.h
  include/tencentcloud/ivld/v20210903/model/CreateCustomPersonRequest.h
  include/tencentcloud/ivld/v20210903/model/ShotInfo.h
  include/tencentcloud/ivld/v20210903/model/MediaInfo.h
  include/tencentcloud/ivld/v20210903/model/DeleteCustomCategoryResponse.h
  include/tencentcloud/ivld/v20210903/model/DescribeCustomGroupRequest.h
  )

set(ivld_src
  src/v20210903/IvldClient.cpp
  src/v20210903/model/MultiLevelTag.cpp
  src/v20210903/model/AddCustomPersonImageRequest.cpp
  src/v20210903/model/L2Tag.cpp
  src/v20210903/model/DescribeVideoSummaryDetailRequest.cpp
  src/v20210903/model/DescribeTaskDetailResponse.cpp
  src/v20210903/model/DeleteCustomCategoryRequest.cpp
  src/v20210903/model/MediaFilter.cpp
  src/v20210903/model/CustomCategory.cpp
  src/v20210903/model/DescribeCustomCategoriesRequest.cpp
  src/v20210903/model/DescribeTasksResponse.cpp
  src/v20210903/model/CustomPersonFilter.cpp
  src/v20210903/model/DescribeVideoSummaryDetailResponse.cpp
  src/v20210903/model/CreateCustomPersonResponse.cpp
  src/v20210903/model/VideoRotationMode.cpp
  src/v20210903/model/DescribeUsageAmountRequest.cpp
  src/v20210903/model/ImportMediaResponse.cpp
  src/v20210903/model/QueryCallbackRequest.cpp
  src/v20210903/model/DescribeMediaRequest.cpp
  src/v20210903/model/TaskInfo.cpp
  src/v20210903/model/ShowInfo.cpp
  src/v20210903/model/DescribeTasksRequest.cpp
  src/v20210903/model/DescribeCustomPersonsResponse.cpp
  src/v20210903/model/TextData.cpp
  src/v20210903/model/ImageMetadata.cpp
  src/v20210903/model/CreateCustomGroupRequest.cpp
  src/v20210903/model/TextMetadata.cpp
  src/v20210903/model/AddCustomPersonImageResponse.cpp
  src/v20210903/model/CreateDefaultCategoriesRequest.cpp
  src/v20210903/model/TaskFilter.cpp
  src/v20210903/model/TextAppearInfo.cpp
  src/v20210903/model/MediaPreknownInfo.cpp
  src/v20210903/model/CustomPersonInfo.cpp
  src/v20210903/model/UpdateCustomPersonResponse.cpp
  src/v20210903/model/UpdateCustomCategoryRequest.cpp
  src/v20210903/model/CreateTaskRequest.cpp
  src/v20210903/model/DescribeCustomCategoriesResponse.cpp
  src/v20210903/model/DescribeCustomGroupResponse.cpp
  src/v20210903/model/PersonImageInfo.cpp
  src/v20210903/model/SortBy.cpp
  src/v20210903/model/DeleteCustomPersonImageRequest.cpp
  src/v20210903/model/DeleteMediaResponse.cpp
  src/v20210903/model/Rectf.cpp
  src/v20210903/model/ModifyCallbackRequest.cpp
  src/v20210903/model/DeleteCustomPersonResponse.cpp
  src/v20210903/model/DeleteTaskRequest.cpp
  src/v20210903/model/ImportMediaRequest.cpp
  src/v20210903/model/DescribeMediasRequest.cpp
  src/v20210903/model/CreateDefaultCategoriesResponse.cpp
  src/v20210903/model/AsrResult.cpp
  src/v20210903/model/ClassifiedPersonInfo.cpp
  src/v20210903/model/DescribeCustomPersonsRequest.cpp
  src/v20210903/model/DescribeMediaResponse.cpp
  src/v20210903/model/TextSegMatchShotScore.cpp
  src/v20210903/model/Data.cpp
  src/v20210903/model/DescribeUsageAmountResponse.cpp
  src/v20210903/model/AppearInfo.cpp
  src/v20210903/model/PersonInfo.cpp
  src/v20210903/model/AudioInfo.cpp
  src/v20210903/model/ImageOcr.cpp
  src/v20210903/model/DeleteCustomPersonImageResponse.cpp
  src/v20210903/model/TextInfo.cpp
  src/v20210903/model/CreateCustomCategoryResponse.cpp
  src/v20210903/model/CreateVideoSummaryTaskRequest.cpp
  src/v20210903/model/QueryCallbackResponse.cpp
  src/v20210903/model/MultiLevelPersonInfo.cpp
  src/v20210903/model/CreateCustomGroupResponse.cpp
  src/v20210903/model/UpdateCustomCategoryResponse.cpp
  src/v20210903/model/TTSMode.cpp
  src/v20210903/model/DescribeMediasResponse.cpp
  src/v20210903/model/UnknownPerson.cpp
  src/v20210903/model/MediaMetadata.cpp
  src/v20210903/model/DeleteCustomPersonRequest.cpp
  src/v20210903/model/AudioMetadata.cpp
  src/v20210903/model/DescribeCustomPersonDetailResponse.cpp
  src/v20210903/model/DeleteMediaRequest.cpp
  src/v20210903/model/CreateCustomCategoryRequest.cpp
  src/v20210903/model/VideoAppearInfo.cpp
  src/v20210903/model/DescribeTaskResponse.cpp
  src/v20210903/model/AppearIndexPair.cpp
  src/v20210903/model/CreateTaskResponse.cpp
  src/v20210903/model/DescribeCustomPersonDetailRequest.cpp
  src/v20210903/model/ImageData.cpp
  src/v20210903/model/DescribeTaskDetailRequest.cpp
  src/v20210903/model/DeleteTaskResponse.cpp
  src/v20210903/model/DescribeTaskRequest.cpp
  src/v20210903/model/UpdateCustomPersonRequest.cpp
  src/v20210903/model/L1Tag.cpp
  src/v20210903/model/ModifyCallbackResponse.cpp
  src/v20210903/model/ImageLogo.cpp
  src/v20210903/model/L3Tag.cpp
  src/v20210903/model/CreateVideoSummaryTaskResponse.cpp
  src/v20210903/model/AudioData.cpp
  src/v20210903/model/CreateCustomPersonRequest.cpp
  src/v20210903/model/ShotInfo.cpp
  src/v20210903/model/MediaInfo.cpp
  src/v20210903/model/DeleteCustomCategoryResponse.cpp
  src/v20210903/model/DescribeCustomGroupRequest.cpp
  )

set(ivld_include
    include/tencentcloud/ivld
  )

add_library(ivld ${LIB_TYPE}
  ${ivld_public_header}
  ${ivld_public_header_model}
  ${ivld_src})

set_target_properties(ivld
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ivld
  )

target_include_directories(ivld
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(ivld
  core)

#install(FILES ${ivld_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ivld/v20210903)
#install(FILES ${ivld_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ivld/v20210903/model)
install(DIRECTORY ${ivld_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS ivld
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
