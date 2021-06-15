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

set(wav_public_header
  include/tencentcloud/wav/v20210129/WavClient.h
  )

set(wav_public_header_model
  include/tencentcloud/wav/v20210129/model/ActivityJoinDetail.h
  include/tencentcloud/wav/v20210129/model/CreateCorpTagResponse.h
  include/tencentcloud/wav/v20210129/model/QueryChatArchivingListResponse.h
  include/tencentcloud/wav/v20210129/model/QueryExternalContactDetailRequest.h
  include/tencentcloud/wav/v20210129/model/ChannelCodeInnerDetail.h
  include/tencentcloud/wav/v20210129/model/ExternalContact.h
  include/tencentcloud/wav/v20210129/model/ExternalContactSimpleInfo.h
  include/tencentcloud/wav/v20210129/model/TagInfo.h
  include/tencentcloud/wav/v20210129/model/TagDetailInfo.h
  include/tencentcloud/wav/v20210129/model/ChatArchivingMsgTypeVideo.h
  include/tencentcloud/wav/v20210129/model/QueryExternalContactListRequest.h
  include/tencentcloud/wav/v20210129/model/MiniAppCodeInfo.h
  include/tencentcloud/wav/v20210129/model/CreateChannelCodeRequest.h
  include/tencentcloud/wav/v20210129/model/QueryExternalContactDetailResponse.h
  include/tencentcloud/wav/v20210129/model/LiveCodeDetail.h
  include/tencentcloud/wav/v20210129/model/QueryExternalContactListResponse.h
  include/tencentcloud/wav/v20210129/model/FollowUser.h
  include/tencentcloud/wav/v20210129/model/QueryActivityLiveCodeListResponse.h
  include/tencentcloud/wav/v20210129/model/QueryActivityJoinListResponse.h
  include/tencentcloud/wav/v20210129/model/QueryMiniAppCodeListResponse.h
  include/tencentcloud/wav/v20210129/model/ActivityDetail.h
  include/tencentcloud/wav/v20210129/model/ExternalContactTag.h
  include/tencentcloud/wav/v20210129/model/ChatArchivingDetail.h
  include/tencentcloud/wav/v20210129/model/QueryActivityListResponse.h
  include/tencentcloud/wav/v20210129/model/QueryActivityJoinListRequest.h
  include/tencentcloud/wav/v20210129/model/TagGroup.h
  include/tencentcloud/wav/v20210129/model/QueryChannelCodeListRequest.h
  include/tencentcloud/wav/v20210129/model/WeComTagDetail.h
  include/tencentcloud/wav/v20210129/model/QueryActivityLiveCodeListRequest.h
  include/tencentcloud/wav/v20210129/model/CreateCorpTagRequest.h
  include/tencentcloud/wav/v20210129/model/CreateChannelCodeResponse.h
  include/tencentcloud/wav/v20210129/model/QueryActivityListRequest.h
  include/tencentcloud/wav/v20210129/model/QueryMiniAppCodeListRequest.h
  include/tencentcloud/wav/v20210129/model/QueryChatArchivingListRequest.h
  include/tencentcloud/wav/v20210129/model/QueryChannelCodeListResponse.h
  )

set(wav_src
  src/v20210129/WavClient.cpp
  src/v20210129/model/ActivityJoinDetail.cpp
  src/v20210129/model/CreateCorpTagResponse.cpp
  src/v20210129/model/QueryChatArchivingListResponse.cpp
  src/v20210129/model/QueryExternalContactDetailRequest.cpp
  src/v20210129/model/ChannelCodeInnerDetail.cpp
  src/v20210129/model/ExternalContact.cpp
  src/v20210129/model/ExternalContactSimpleInfo.cpp
  src/v20210129/model/TagInfo.cpp
  src/v20210129/model/TagDetailInfo.cpp
  src/v20210129/model/ChatArchivingMsgTypeVideo.cpp
  src/v20210129/model/QueryExternalContactListRequest.cpp
  src/v20210129/model/MiniAppCodeInfo.cpp
  src/v20210129/model/CreateChannelCodeRequest.cpp
  src/v20210129/model/QueryExternalContactDetailResponse.cpp
  src/v20210129/model/LiveCodeDetail.cpp
  src/v20210129/model/QueryExternalContactListResponse.cpp
  src/v20210129/model/FollowUser.cpp
  src/v20210129/model/QueryActivityLiveCodeListResponse.cpp
  src/v20210129/model/QueryActivityJoinListResponse.cpp
  src/v20210129/model/QueryMiniAppCodeListResponse.cpp
  src/v20210129/model/ActivityDetail.cpp
  src/v20210129/model/ExternalContactTag.cpp
  src/v20210129/model/ChatArchivingDetail.cpp
  src/v20210129/model/QueryActivityListResponse.cpp
  src/v20210129/model/QueryActivityJoinListRequest.cpp
  src/v20210129/model/TagGroup.cpp
  src/v20210129/model/QueryChannelCodeListRequest.cpp
  src/v20210129/model/WeComTagDetail.cpp
  src/v20210129/model/QueryActivityLiveCodeListRequest.cpp
  src/v20210129/model/CreateCorpTagRequest.cpp
  src/v20210129/model/CreateChannelCodeResponse.cpp
  src/v20210129/model/QueryActivityListRequest.cpp
  src/v20210129/model/QueryMiniAppCodeListRequest.cpp
  src/v20210129/model/QueryChatArchivingListRequest.cpp
  src/v20210129/model/QueryChannelCodeListResponse.cpp
  )

set(wav_include
    include/tencentcloud/wav
  )

add_library(wav ${LIB_TYPE}
  ${wav_public_header}
  ${wav_public_header_model}
  ${wav_src})

set_target_properties(wav
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}wav
  )

target_include_directories(wav
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(wav
  core)

#install(FILES ${wav_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/wav/v20210129)
#install(FILES ${wav_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/wav/v20210129/model)
install(DIRECTORY ${wav_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS wav
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
