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

set(yinsuda_public_header
  include/tencentcloud/yinsuda/v20220527/YinsudaClient.h
  )

set(yinsuda_public_header_model
  include/tencentcloud/yinsuda/v20220527/model/ApplyChorusResponse.h
  include/tencentcloud/yinsuda/v20220527/model/KTVBPMInfo.h
  include/tencentcloud/yinsuda/v20220527/model/DescribeKTVSuggestionsResponse.h
  include/tencentcloud/yinsuda/v20220527/model/KTVMatchRuleMusicInfo.h
  include/tencentcloud/yinsuda/v20220527/model/JoinRoomInput.h
  include/tencentcloud/yinsuda/v20220527/model/DestroyKTVRobotResponse.h
  include/tencentcloud/yinsuda/v20220527/model/MusicAlbumCoverInfo.h
  include/tencentcloud/yinsuda/v20220527/model/CreateKTVRobotRequest.h
  include/tencentcloud/yinsuda/v20220527/model/KTVSuggestionInfo.h
  include/tencentcloud/yinsuda/v20220527/model/SyncKTVRobotCommandRequest.h
  include/tencentcloud/yinsuda/v20220527/model/KTVTagInfo.h
  include/tencentcloud/yinsuda/v20220527/model/DescribeKTVPlaylistDetailRequest.h
  include/tencentcloud/yinsuda/v20220527/model/SyncKTVRobotCommandResponse.h
  include/tencentcloud/yinsuda/v20220527/model/KTVMusicDetailInfo.h
  include/tencentcloud/yinsuda/v20220527/model/CreateKTVRobotResponse.h
  include/tencentcloud/yinsuda/v20220527/model/DescribeKTVMusicAccompanySegmentUrlVipResponse.h
  include/tencentcloud/yinsuda/v20220527/model/LiveVipUserInfo.h
  include/tencentcloud/yinsuda/v20220527/model/DescribeKTVSuggestionsRequest.h
  include/tencentcloud/yinsuda/v20220527/model/DescribeKTVMatchMusicsRequest.h
  include/tencentcloud/yinsuda/v20220527/model/DescribeKTVPlaylistsResponse.h
  include/tencentcloud/yinsuda/v20220527/model/RechargeLiveVipResponse.h
  include/tencentcloud/yinsuda/v20220527/model/DescribeKTVPlaylistsRequest.h
  include/tencentcloud/yinsuda/v20220527/model/DescribeKTVPlaylistDetailResponse.h
  include/tencentcloud/yinsuda/v20220527/model/DescribeLiveVipTradeInfosRequest.h
  include/tencentcloud/yinsuda/v20220527/model/SetDestroyModeCommandInput.h
  include/tencentcloud/yinsuda/v20220527/model/SetAudioParamCommandInput.h
  include/tencentcloud/yinsuda/v20220527/model/KTVMatchMusic.h
  include/tencentcloud/yinsuda/v20220527/model/TRTCJoinRoomInput.h
  include/tencentcloud/yinsuda/v20220527/model/RechargeVipResponse.h
  include/tencentcloud/yinsuda/v20220527/model/KTVOtherSegments.h
  include/tencentcloud/yinsuda/v20220527/model/DescribeKTVRobotsResponse.h
  include/tencentcloud/yinsuda/v20220527/model/DescribeKTVMusicAccompanySegmentUrlRequest.h
  include/tencentcloud/yinsuda/v20220527/model/KTVTagGroupInfo.h
  include/tencentcloud/yinsuda/v20220527/model/DescribeVipUserInfoRequest.h
  include/tencentcloud/yinsuda/v20220527/model/BatchDescribeKTVMusicDetailsRequest.h
  include/tencentcloud/yinsuda/v20220527/model/AMEMusicBaseInfo.h
  include/tencentcloud/yinsuda/v20220527/model/DescribeKTVMusicsByTagResponse.h
  include/tencentcloud/yinsuda/v20220527/model/DescribeLiveVipTradeInfosResponse.h
  include/tencentcloud/yinsuda/v20220527/model/MusicAlbumInfo.h
  include/tencentcloud/yinsuda/v20220527/model/SetPlayModeCommandInput.h
  include/tencentcloud/yinsuda/v20220527/model/SyncRobotCommand.h
  include/tencentcloud/yinsuda/v20220527/model/DescribeVipUserInfoResponse.h
  include/tencentcloud/yinsuda/v20220527/model/KTVRobotInfo.h
  include/tencentcloud/yinsuda/v20220527/model/DescribeKTVMatchMusicsResponse.h
  include/tencentcloud/yinsuda/v20220527/model/DescribeKTVTagsResponse.h
  include/tencentcloud/yinsuda/v20220527/model/RechargeLiveVipRequest.h
  include/tencentcloud/yinsuda/v20220527/model/SearchKTVMusicsResponse.h
  include/tencentcloud/yinsuda/v20220527/model/ChorusClip.h
  include/tencentcloud/yinsuda/v20220527/model/RechargeVipRequest.h
  include/tencentcloud/yinsuda/v20220527/model/SetPlaylistCommandInput.h
  include/tencentcloud/yinsuda/v20220527/model/ApplyChorusRequest.h
  include/tencentcloud/yinsuda/v20220527/model/BatchDescribeKTVMusicDetailsResponse.h
  include/tencentcloud/yinsuda/v20220527/model/KTVMatchRule.h
  include/tencentcloud/yinsuda/v20220527/model/KTVMusicBaseInfo.h
  include/tencentcloud/yinsuda/v20220527/model/DescribeKTVMusicsByTagRequest.h
  include/tencentcloud/yinsuda/v20220527/model/SearchKTVMusicsRequest.h
  include/tencentcloud/yinsuda/v20220527/model/PlayCommandInput.h
  include/tencentcloud/yinsuda/v20220527/model/TimeRange.h
  include/tencentcloud/yinsuda/v20220527/model/DescribeKTVMusicAccompanySegmentUrlResponse.h
  include/tencentcloud/yinsuda/v20220527/model/KTVPlaylistBaseInfo.h
  include/tencentcloud/yinsuda/v20220527/model/DescribeUserInfoRequest.h
  include/tencentcloud/yinsuda/v20220527/model/SendMessageCommandInput.h
  include/tencentcloud/yinsuda/v20220527/model/DescribeKTVMusicAccompanySegmentUrlVipRequest.h
  include/tencentcloud/yinsuda/v20220527/model/DestroyKTVRobotRequest.h
  include/tencentcloud/yinsuda/v20220527/model/LiveVipTradeInfo.h
  include/tencentcloud/yinsuda/v20220527/model/UserInfo.h
  include/tencentcloud/yinsuda/v20220527/model/DescribeUserInfoResponse.h
  include/tencentcloud/yinsuda/v20220527/model/DescribeKTVRobotsRequest.h
  include/tencentcloud/yinsuda/v20220527/model/DescribeKTVTagsRequest.h
  include/tencentcloud/yinsuda/v20220527/model/SeekCommandInput.h
  )

set(yinsuda_src
  src/v20220527/YinsudaClient.cpp
  src/v20220527/model/ApplyChorusResponse.cpp
  src/v20220527/model/KTVBPMInfo.cpp
  src/v20220527/model/DescribeKTVSuggestionsResponse.cpp
  src/v20220527/model/KTVMatchRuleMusicInfo.cpp
  src/v20220527/model/JoinRoomInput.cpp
  src/v20220527/model/DestroyKTVRobotResponse.cpp
  src/v20220527/model/MusicAlbumCoverInfo.cpp
  src/v20220527/model/CreateKTVRobotRequest.cpp
  src/v20220527/model/KTVSuggestionInfo.cpp
  src/v20220527/model/SyncKTVRobotCommandRequest.cpp
  src/v20220527/model/KTVTagInfo.cpp
  src/v20220527/model/DescribeKTVPlaylistDetailRequest.cpp
  src/v20220527/model/SyncKTVRobotCommandResponse.cpp
  src/v20220527/model/KTVMusicDetailInfo.cpp
  src/v20220527/model/CreateKTVRobotResponse.cpp
  src/v20220527/model/DescribeKTVMusicAccompanySegmentUrlVipResponse.cpp
  src/v20220527/model/LiveVipUserInfo.cpp
  src/v20220527/model/DescribeKTVSuggestionsRequest.cpp
  src/v20220527/model/DescribeKTVMatchMusicsRequest.cpp
  src/v20220527/model/DescribeKTVPlaylistsResponse.cpp
  src/v20220527/model/RechargeLiveVipResponse.cpp
  src/v20220527/model/DescribeKTVPlaylistsRequest.cpp
  src/v20220527/model/DescribeKTVPlaylistDetailResponse.cpp
  src/v20220527/model/DescribeLiveVipTradeInfosRequest.cpp
  src/v20220527/model/SetDestroyModeCommandInput.cpp
  src/v20220527/model/SetAudioParamCommandInput.cpp
  src/v20220527/model/KTVMatchMusic.cpp
  src/v20220527/model/TRTCJoinRoomInput.cpp
  src/v20220527/model/RechargeVipResponse.cpp
  src/v20220527/model/KTVOtherSegments.cpp
  src/v20220527/model/DescribeKTVRobotsResponse.cpp
  src/v20220527/model/DescribeKTVMusicAccompanySegmentUrlRequest.cpp
  src/v20220527/model/KTVTagGroupInfo.cpp
  src/v20220527/model/DescribeVipUserInfoRequest.cpp
  src/v20220527/model/BatchDescribeKTVMusicDetailsRequest.cpp
  src/v20220527/model/AMEMusicBaseInfo.cpp
  src/v20220527/model/DescribeKTVMusicsByTagResponse.cpp
  src/v20220527/model/DescribeLiveVipTradeInfosResponse.cpp
  src/v20220527/model/MusicAlbumInfo.cpp
  src/v20220527/model/SetPlayModeCommandInput.cpp
  src/v20220527/model/SyncRobotCommand.cpp
  src/v20220527/model/DescribeVipUserInfoResponse.cpp
  src/v20220527/model/KTVRobotInfo.cpp
  src/v20220527/model/DescribeKTVMatchMusicsResponse.cpp
  src/v20220527/model/DescribeKTVTagsResponse.cpp
  src/v20220527/model/RechargeLiveVipRequest.cpp
  src/v20220527/model/SearchKTVMusicsResponse.cpp
  src/v20220527/model/ChorusClip.cpp
  src/v20220527/model/RechargeVipRequest.cpp
  src/v20220527/model/SetPlaylistCommandInput.cpp
  src/v20220527/model/ApplyChorusRequest.cpp
  src/v20220527/model/BatchDescribeKTVMusicDetailsResponse.cpp
  src/v20220527/model/KTVMatchRule.cpp
  src/v20220527/model/KTVMusicBaseInfo.cpp
  src/v20220527/model/DescribeKTVMusicsByTagRequest.cpp
  src/v20220527/model/SearchKTVMusicsRequest.cpp
  src/v20220527/model/PlayCommandInput.cpp
  src/v20220527/model/TimeRange.cpp
  src/v20220527/model/DescribeKTVMusicAccompanySegmentUrlResponse.cpp
  src/v20220527/model/KTVPlaylistBaseInfo.cpp
  src/v20220527/model/DescribeUserInfoRequest.cpp
  src/v20220527/model/SendMessageCommandInput.cpp
  src/v20220527/model/DescribeKTVMusicAccompanySegmentUrlVipRequest.cpp
  src/v20220527/model/DestroyKTVRobotRequest.cpp
  src/v20220527/model/LiveVipTradeInfo.cpp
  src/v20220527/model/UserInfo.cpp
  src/v20220527/model/DescribeUserInfoResponse.cpp
  src/v20220527/model/DescribeKTVRobotsRequest.cpp
  src/v20220527/model/DescribeKTVTagsRequest.cpp
  src/v20220527/model/SeekCommandInput.cpp
  )

set(yinsuda_include
    include/tencentcloud/yinsuda
  )

add_library(yinsuda ${LIB_TYPE}
  ${yinsuda_public_header}
  ${yinsuda_public_header_model}
  ${yinsuda_src})

set_target_properties(yinsuda
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}yinsuda
  )

target_include_directories(yinsuda
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(yinsuda
  core)

#install(FILES ${yinsuda_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/yinsuda/v20220527)
#install(FILES ${yinsuda_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/yinsuda/v20220527/model)
install(DIRECTORY ${yinsuda_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS yinsuda
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
