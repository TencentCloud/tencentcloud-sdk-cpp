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

set(bda_public_header
  include/tencentcloud/bda/v20200324/BdaClient.h
  )

set(bda_public_header_model
  include/tencentcloud/bda/v20200324/model/SegmentPortraitPicResponse.h
  include/tencentcloud/bda/v20200324/model/DetectBodyJointsResponse.h
  include/tencentcloud/bda/v20200324/model/Candidate.h
  include/tencentcloud/bda/v20200324/model/VideoBasicInformation.h
  include/tencentcloud/bda/v20200324/model/DeletePersonRequest.h
  include/tencentcloud/bda/v20200324/model/ModifyGroupResponse.h
  include/tencentcloud/bda/v20200324/model/TerminateSegmentationTaskResponse.h
  include/tencentcloud/bda/v20200324/model/BodyAttributeInfo.h
  include/tencentcloud/bda/v20200324/model/GetSummaryInfoRequest.h
  include/tencentcloud/bda/v20200324/model/GetGroupListResponse.h
  include/tencentcloud/bda/v20200324/model/GroupInfo.h
  include/tencentcloud/bda/v20200324/model/DescribeSegmentationTaskRequest.h
  include/tencentcloud/bda/v20200324/model/SegmentationOptions.h
  include/tencentcloud/bda/v20200324/model/UpperBodyClothTexture.h
  include/tencentcloud/bda/v20200324/model/TerminateSegmentationTaskRequest.h
  include/tencentcloud/bda/v20200324/model/ModifyGroupRequest.h
  include/tencentcloud/bda/v20200324/model/CreatePersonRequest.h
  include/tencentcloud/bda/v20200324/model/ModifyPersonInfoResponse.h
  include/tencentcloud/bda/v20200324/model/CreateSegmentationTaskResponse.h
  include/tencentcloud/bda/v20200324/model/DeleteGroupRequest.h
  include/tencentcloud/bda/v20200324/model/GetSummaryInfoResponse.h
  include/tencentcloud/bda/v20200324/model/ModifyPersonInfoRequest.h
  include/tencentcloud/bda/v20200324/model/Gender.h
  include/tencentcloud/bda/v20200324/model/SegmentCustomizedPortraitPicRequest.h
  include/tencentcloud/bda/v20200324/model/CreateGroupRequest.h
  include/tencentcloud/bda/v20200324/model/LowerBodyCloth.h
  include/tencentcloud/bda/v20200324/model/CreateSegmentationTaskRequest.h
  include/tencentcloud/bda/v20200324/model/TraceInfo.h
  include/tencentcloud/bda/v20200324/model/DeleteGroupResponse.h
  include/tencentcloud/bda/v20200324/model/BodyRect.h
  include/tencentcloud/bda/v20200324/model/DescribeSegmentationTaskResponse.h
  include/tencentcloud/bda/v20200324/model/DetectBodyRequest.h
  include/tencentcloud/bda/v20200324/model/Age.h
  include/tencentcloud/bda/v20200324/model/SearchTraceRequest.h
  include/tencentcloud/bda/v20200324/model/KeyPointInfo.h
  include/tencentcloud/bda/v20200324/model/DetectBodyResponse.h
  include/tencentcloud/bda/v20200324/model/PersonInfo.h
  include/tencentcloud/bda/v20200324/model/Bag.h
  include/tencentcloud/bda/v20200324/model/SegmentCustomizedPortraitPicResponse.h
  include/tencentcloud/bda/v20200324/model/Trace.h
  include/tencentcloud/bda/v20200324/model/DetectBodyJointsRequest.h
  include/tencentcloud/bda/v20200324/model/SegmentPortraitPicRequest.h
  include/tencentcloud/bda/v20200324/model/UpperBodyClothColor.h
  include/tencentcloud/bda/v20200324/model/GetGroupListRequest.h
  include/tencentcloud/bda/v20200324/model/ImageRect.h
  include/tencentcloud/bda/v20200324/model/BodyDetectResult.h
  include/tencentcloud/bda/v20200324/model/Orientation.h
  include/tencentcloud/bda/v20200324/model/BodyJointsResult.h
  include/tencentcloud/bda/v20200324/model/UpperBodyClothSleeve.h
  include/tencentcloud/bda/v20200324/model/UpperBodyCloth.h
  include/tencentcloud/bda/v20200324/model/LowerBodyClothLength.h
  include/tencentcloud/bda/v20200324/model/SearchTraceResponse.h
  include/tencentcloud/bda/v20200324/model/CreateTraceResponse.h
  include/tencentcloud/bda/v20200324/model/CreatePersonResponse.h
  include/tencentcloud/bda/v20200324/model/BoundRect.h
  include/tencentcloud/bda/v20200324/model/LowerBodyClothColor.h
  include/tencentcloud/bda/v20200324/model/GetPersonListResponse.h
  include/tencentcloud/bda/v20200324/model/GetPersonListRequest.h
  include/tencentcloud/bda/v20200324/model/LowerBodyClothType.h
  include/tencentcloud/bda/v20200324/model/CreateTraceRequest.h
  include/tencentcloud/bda/v20200324/model/DeletePersonResponse.h
  include/tencentcloud/bda/v20200324/model/AttributesOptions.h
  include/tencentcloud/bda/v20200324/model/CreateGroupResponse.h
  )

set(bda_src
  src/v20200324/BdaClient.cpp
  src/v20200324/model/SegmentPortraitPicResponse.cpp
  src/v20200324/model/DetectBodyJointsResponse.cpp
  src/v20200324/model/Candidate.cpp
  src/v20200324/model/VideoBasicInformation.cpp
  src/v20200324/model/DeletePersonRequest.cpp
  src/v20200324/model/ModifyGroupResponse.cpp
  src/v20200324/model/TerminateSegmentationTaskResponse.cpp
  src/v20200324/model/BodyAttributeInfo.cpp
  src/v20200324/model/GetSummaryInfoRequest.cpp
  src/v20200324/model/GetGroupListResponse.cpp
  src/v20200324/model/GroupInfo.cpp
  src/v20200324/model/DescribeSegmentationTaskRequest.cpp
  src/v20200324/model/SegmentationOptions.cpp
  src/v20200324/model/UpperBodyClothTexture.cpp
  src/v20200324/model/TerminateSegmentationTaskRequest.cpp
  src/v20200324/model/ModifyGroupRequest.cpp
  src/v20200324/model/CreatePersonRequest.cpp
  src/v20200324/model/ModifyPersonInfoResponse.cpp
  src/v20200324/model/CreateSegmentationTaskResponse.cpp
  src/v20200324/model/DeleteGroupRequest.cpp
  src/v20200324/model/GetSummaryInfoResponse.cpp
  src/v20200324/model/ModifyPersonInfoRequest.cpp
  src/v20200324/model/Gender.cpp
  src/v20200324/model/SegmentCustomizedPortraitPicRequest.cpp
  src/v20200324/model/CreateGroupRequest.cpp
  src/v20200324/model/LowerBodyCloth.cpp
  src/v20200324/model/CreateSegmentationTaskRequest.cpp
  src/v20200324/model/TraceInfo.cpp
  src/v20200324/model/DeleteGroupResponse.cpp
  src/v20200324/model/BodyRect.cpp
  src/v20200324/model/DescribeSegmentationTaskResponse.cpp
  src/v20200324/model/DetectBodyRequest.cpp
  src/v20200324/model/Age.cpp
  src/v20200324/model/SearchTraceRequest.cpp
  src/v20200324/model/KeyPointInfo.cpp
  src/v20200324/model/DetectBodyResponse.cpp
  src/v20200324/model/PersonInfo.cpp
  src/v20200324/model/Bag.cpp
  src/v20200324/model/SegmentCustomizedPortraitPicResponse.cpp
  src/v20200324/model/Trace.cpp
  src/v20200324/model/DetectBodyJointsRequest.cpp
  src/v20200324/model/SegmentPortraitPicRequest.cpp
  src/v20200324/model/UpperBodyClothColor.cpp
  src/v20200324/model/GetGroupListRequest.cpp
  src/v20200324/model/ImageRect.cpp
  src/v20200324/model/BodyDetectResult.cpp
  src/v20200324/model/Orientation.cpp
  src/v20200324/model/BodyJointsResult.cpp
  src/v20200324/model/UpperBodyClothSleeve.cpp
  src/v20200324/model/UpperBodyCloth.cpp
  src/v20200324/model/LowerBodyClothLength.cpp
  src/v20200324/model/SearchTraceResponse.cpp
  src/v20200324/model/CreateTraceResponse.cpp
  src/v20200324/model/CreatePersonResponse.cpp
  src/v20200324/model/BoundRect.cpp
  src/v20200324/model/LowerBodyClothColor.cpp
  src/v20200324/model/GetPersonListResponse.cpp
  src/v20200324/model/GetPersonListRequest.cpp
  src/v20200324/model/LowerBodyClothType.cpp
  src/v20200324/model/CreateTraceRequest.cpp
  src/v20200324/model/DeletePersonResponse.cpp
  src/v20200324/model/AttributesOptions.cpp
  src/v20200324/model/CreateGroupResponse.cpp
  )

set(bda_include
    include/tencentcloud/bda
  )

add_library(bda ${LIB_TYPE}
  ${bda_public_header}
  ${bda_public_header_model}
  ${bda_src})

set_target_properties(bda
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}bda
  )

target_include_directories(bda
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(bda
  core)

#install(FILES ${bda_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/bda/v20200324)
#install(FILES ${bda_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/bda/v20200324/model)
install(DIRECTORY ${bda_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS bda
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
