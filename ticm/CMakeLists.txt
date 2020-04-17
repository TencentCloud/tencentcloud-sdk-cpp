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

set(ticm_public_header
  include/tencentcloud/ticm/v20181127/TicmClient.h
  )

set(ticm_public_header_model
  include/tencentcloud/ticm/v20181127/model/VodPoliticalOcrReviewResult.h
  include/tencentcloud/ticm/v20181127/model/Candidate.h
  include/tencentcloud/ticm/v20181127/model/TerrorismResult.h
  include/tencentcloud/ticm/v20181127/model/VodPoliticalAsrReviewResult.h
  include/tencentcloud/ticm/v20181127/model/VideoModerationResponse.h
  include/tencentcloud/ticm/v20181127/model/VodMetaData.h
  include/tencentcloud/ticm/v20181127/model/ImageModerationResponse.h
  include/tencentcloud/ticm/v20181127/model/VodVideoStreamItem.h
  include/tencentcloud/ticm/v20181127/model/ImageModerationRequest.h
  include/tencentcloud/ticm/v20181127/model/VideoModerationRequest.h
  include/tencentcloud/ticm/v20181127/model/VodPoliticalReviewSegmentItem.h
  include/tencentcloud/ticm/v20181127/model/VodPornReviewResult.h
  include/tencentcloud/ticm/v20181127/model/DisgustResult.h
  include/tencentcloud/ticm/v20181127/model/VodPornReviewSegmentItem.h
  include/tencentcloud/ticm/v20181127/model/VodPoliticalReviewResult.h
  include/tencentcloud/ticm/v20181127/model/VodAudioStreamItem.h
  include/tencentcloud/ticm/v20181127/model/VodOcrTextSegmentItem.h
  include/tencentcloud/ticm/v20181127/model/PoliticsResult.h
  include/tencentcloud/ticm/v20181127/model/VodAsrTextSegmentItem.h
  include/tencentcloud/ticm/v20181127/model/PornResult.h
  include/tencentcloud/ticm/v20181127/model/DescribeVideoTaskRequest.h
  include/tencentcloud/ticm/v20181127/model/VodTerrorismReviewResult.h
  include/tencentcloud/ticm/v20181127/model/FaceResult.h
  include/tencentcloud/ticm/v20181127/model/VodPornAsrReviewResult.h
  include/tencentcloud/ticm/v20181127/model/DescribeVideoTaskResponse.h
  include/tencentcloud/ticm/v20181127/model/FaceRect.h
  include/tencentcloud/ticm/v20181127/model/VodPornOcrResult.h
  )

set(ticm_src
  src/v20181127/TicmClient.cpp
  src/v20181127/model/VodPoliticalOcrReviewResult.cpp
  src/v20181127/model/Candidate.cpp
  src/v20181127/model/TerrorismResult.cpp
  src/v20181127/model/VodPoliticalAsrReviewResult.cpp
  src/v20181127/model/VideoModerationResponse.cpp
  src/v20181127/model/VodMetaData.cpp
  src/v20181127/model/ImageModerationResponse.cpp
  src/v20181127/model/VodVideoStreamItem.cpp
  src/v20181127/model/ImageModerationRequest.cpp
  src/v20181127/model/VideoModerationRequest.cpp
  src/v20181127/model/VodPoliticalReviewSegmentItem.cpp
  src/v20181127/model/VodPornReviewResult.cpp
  src/v20181127/model/DisgustResult.cpp
  src/v20181127/model/VodPornReviewSegmentItem.cpp
  src/v20181127/model/VodPoliticalReviewResult.cpp
  src/v20181127/model/VodAudioStreamItem.cpp
  src/v20181127/model/VodOcrTextSegmentItem.cpp
  src/v20181127/model/PoliticsResult.cpp
  src/v20181127/model/VodAsrTextSegmentItem.cpp
  src/v20181127/model/PornResult.cpp
  src/v20181127/model/DescribeVideoTaskRequest.cpp
  src/v20181127/model/VodTerrorismReviewResult.cpp
  src/v20181127/model/FaceResult.cpp
  src/v20181127/model/VodPornAsrReviewResult.cpp
  src/v20181127/model/DescribeVideoTaskResponse.cpp
  src/v20181127/model/FaceRect.cpp
  src/v20181127/model/VodPornOcrResult.cpp
  )

set(ticm_include
    include/tencentcloud/ticm
  )

add_library(ticm ${LIB_TYPE}
  ${ticm_public_header}
  ${ticm_public_header_model}
  ${ticm_src})

set_target_properties(ticm
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ticm
  )

target_include_directories(ticm
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(ticm
  core)

#install(FILES ${ticm_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ticm/v20181127)
#install(FILES ${ticm_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ticm/v20181127/model)
install(DIRECTORY ${ticm_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS ticm
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
