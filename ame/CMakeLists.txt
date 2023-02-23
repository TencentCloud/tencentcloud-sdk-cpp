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

set(ame_public_header
  include/tencentcloud/ame/v20190916/AmeClient.h
  )

set(ame_public_header_model
  include/tencentcloud/ame/v20190916/model/DescribeMusicResponse.h
  include/tencentcloud/ame/v20190916/model/DescribeKTVSuggestionsResponse.h
  include/tencentcloud/ame/v20190916/model/ChorusClip.h
  include/tencentcloud/ame/v20190916/model/ModifyMusicOnShelvesResponse.h
  include/tencentcloud/ame/v20190916/model/Station.h
  include/tencentcloud/ame/v20190916/model/DescribeKTVMusicDetailRequest.h
  include/tencentcloud/ame/v20190916/model/KTVMusicTopInfo.h
  include/tencentcloud/ame/v20190916/model/DescribeKTVSingerCategoriesRequest.h
  include/tencentcloud/ame/v20190916/model/KTVSingerBaseInfo.h
  include/tencentcloud/ame/v20190916/model/ModifyMusicOnShelvesRequest.h
  include/tencentcloud/ame/v20190916/model/SetRealVolumeCommandInput.h
  include/tencentcloud/ame/v20190916/model/PlayCommandInput.h
  include/tencentcloud/ame/v20190916/model/DescribeMusicRequest.h
  include/tencentcloud/ame/v20190916/model/KTVMusicDetailInfo.h
  include/tencentcloud/ame/v20190916/model/DescribeMusicSaleStatusRequest.h
  include/tencentcloud/ame/v20190916/model/TakeMusicOffShelvesRequest.h
  include/tencentcloud/ame/v20190916/model/DescribeCloudMusicResponse.h
  include/tencentcloud/ame/v20190916/model/MusicDetailInfo.h
  include/tencentcloud/ame/v20190916/model/ImagePath.h
  include/tencentcloud/ame/v20190916/model/KTVMusicTagInfo.h
  include/tencentcloud/ame/v20190916/model/DestroyKTVRobotRequest.h
  include/tencentcloud/ame/v20190916/model/DescribeAuthInfoResponse.h
  include/tencentcloud/ame/v20190916/model/DescribeLyricRequest.h
  include/tencentcloud/ame/v20190916/model/ReportDataRequest.h
  include/tencentcloud/ame/v20190916/model/SeekCommandInput.h
  include/tencentcloud/ame/v20190916/model/DescribePkgOfflineMusicRequest.h
  include/tencentcloud/ame/v20190916/model/TimeRange.h
  include/tencentcloud/ame/v20190916/model/DescribeMusicSaleStatusResponse.h
  include/tencentcloud/ame/v20190916/model/CreateKTVRobotResponse.h
  include/tencentcloud/ame/v20190916/model/DescribePackageItemsResponse.h
  include/tencentcloud/ame/v20190916/model/DescribeCloudMusicPurchasedResponse.h
  include/tencentcloud/ame/v20190916/model/KTVMusicTagGroup.h
  include/tencentcloud/ame/v20190916/model/DataInfo.h
  include/tencentcloud/ame/v20190916/model/ApplicationLicenseInput.h
  include/tencentcloud/ame/v20190916/model/Artist.h
  include/tencentcloud/ame/v20190916/model/SetDestroyModeCommandInput.h
  include/tencentcloud/ame/v20190916/model/ReportDataResponse.h
  include/tencentcloud/ame/v20190916/model/SearchKTVMusicsResponse.h
  include/tencentcloud/ame/v20190916/model/DescribeItemByIdRequest.h
  include/tencentcloud/ame/v20190916/model/PutMusicOnTheShelvesResponse.h
  include/tencentcloud/ame/v20190916/model/SyncRobotCommand.h
  include/tencentcloud/ame/v20190916/model/DescribeKTVSingerMusicsResponse.h
  include/tencentcloud/ame/v20190916/model/DescribeItemsResponse.h
  include/tencentcloud/ame/v20190916/model/DescribePkgOfflineMusicResponse.h
  include/tencentcloud/ame/v20190916/model/KTVSingerInfo.h
  include/tencentcloud/ame/v20190916/model/SetVolumeCommandInput.h
  include/tencentcloud/ame/v20190916/model/PutMusicOnTheShelvesRequest.h
  include/tencentcloud/ame/v20190916/model/DescribeCloudMusicRequest.h
  include/tencentcloud/ame/v20190916/model/SortBy.h
  include/tencentcloud/ame/v20190916/model/DescribeKTVMusicDetailResponse.h
  include/tencentcloud/ame/v20190916/model/DescribeKTVRobotsRequest.h
  include/tencentcloud/ame/v20190916/model/DescribeKTVMusicTagsResponse.h
  include/tencentcloud/ame/v20190916/model/DescribeKTVMusicTagsRequest.h
  include/tencentcloud/ame/v20190916/model/JoinRoomInput.h
  include/tencentcloud/ame/v20190916/model/DestroyKTVRobotResponse.h
  include/tencentcloud/ame/v20190916/model/CreateKTVRobotRequest.h
  include/tencentcloud/ame/v20190916/model/KTVSuggestionInfo.h
  include/tencentcloud/ame/v20190916/model/DescribeKTVTopListRequest.h
  include/tencentcloud/ame/v20190916/model/DescribeKTVPlaylistDetailRequest.h
  include/tencentcloud/ame/v20190916/model/Music.h
  include/tencentcloud/ame/v20190916/model/DescribeStationsResponse.h
  include/tencentcloud/ame/v20190916/model/DescribeCloudMusicPurchasedRequest.h
  include/tencentcloud/ame/v20190916/model/PackageItem.h
  include/tencentcloud/ame/v20190916/model/DescribeKTVPlaylistsRequest.h
  include/tencentcloud/ame/v20190916/model/TRTCJoinRoomInput.h
  include/tencentcloud/ame/v20190916/model/DescribePackageItemsRequest.h
  include/tencentcloud/ame/v20190916/model/AuthInfo.h
  include/tencentcloud/ame/v20190916/model/DescribeKTVRobotsResponse.h
  include/tencentcloud/ame/v20190916/model/UseRange.h
  include/tencentcloud/ame/v20190916/model/DescribeStationsRequest.h
  include/tencentcloud/ame/v20190916/model/DescribeKTVSingerMusicsRequest.h
  include/tencentcloud/ame/v20190916/model/DescribeKTVSingerCategoriesResponse.h
  include/tencentcloud/ame/v20190916/model/DescribeKTVSingersRequest.h
  include/tencentcloud/ame/v20190916/model/SetPlaylistCommandInput.h
  include/tencentcloud/ame/v20190916/model/SyncKTVRobotCommandResponse.h
  include/tencentcloud/ame/v20190916/model/BatchDescribeKTVMusicDetailsResponse.h
  include/tencentcloud/ame/v20190916/model/SearchKTVMusicsRequest.h
  include/tencentcloud/ame/v20190916/model/KTVPlaylistBaseInfo.h
  include/tencentcloud/ame/v20190916/model/DescribeKTVSingersResponse.h
  include/tencentcloud/ame/v20190916/model/DescribeItemByIdResponse.h
  include/tencentcloud/ame/v20190916/model/MusicStatus.h
  include/tencentcloud/ame/v20190916/model/KTVSingerCategoryInfo.h
  include/tencentcloud/ame/v20190916/model/BatchDescribeKTVMusicDetailsRequest.h
  include/tencentcloud/ame/v20190916/model/SendMessageCommandInput.h
  include/tencentcloud/ame/v20190916/model/KTVMusicDefinitionInfo.h
  include/tencentcloud/ame/v20190916/model/Album.h
  include/tencentcloud/ame/v20190916/model/DescribeLyricResponse.h
  include/tencentcloud/ame/v20190916/model/KTVMusicBaseInfo.h
  include/tencentcloud/ame/v20190916/model/SyncKTVRobotCommandRequest.h
  include/tencentcloud/ame/v20190916/model/DescribeKTVSuggestionsRequest.h
  include/tencentcloud/ame/v20190916/model/DescribeKTVPlaylistsResponse.h
  include/tencentcloud/ame/v20190916/model/DescribeKTVPlaylistDetailResponse.h
  include/tencentcloud/ame/v20190916/model/SetAudioParamCommandInput.h
  include/tencentcloud/ame/v20190916/model/TakeMusicOffShelves.h
  include/tencentcloud/ame/v20190916/model/OfflineMusicDetail.h
  include/tencentcloud/ame/v20190916/model/DescribeAuthInfoRequest.h
  include/tencentcloud/ame/v20190916/model/Package.h
  include/tencentcloud/ame/v20190916/model/SetPlayModeCommandInput.h
  include/tencentcloud/ame/v20190916/model/KTVRobotInfo.h
  include/tencentcloud/ame/v20190916/model/DescribeItemsRequest.h
  include/tencentcloud/ame/v20190916/model/Item.h
  include/tencentcloud/ame/v20190916/model/DescribeKTVTopListResponse.h
  include/tencentcloud/ame/v20190916/model/MusicOpenDetail.h
  include/tencentcloud/ame/v20190916/model/DescribePackagesRequest.h
  include/tencentcloud/ame/v20190916/model/DescribePackagesResponse.h
  include/tencentcloud/ame/v20190916/model/Lyric.h
  include/tencentcloud/ame/v20190916/model/TakeMusicOffShelvesResponse.h
  )

set(ame_src
  src/v20190916/AmeClient.cpp
  src/v20190916/model/DescribeMusicResponse.cpp
  src/v20190916/model/DescribeKTVSuggestionsResponse.cpp
  src/v20190916/model/ChorusClip.cpp
  src/v20190916/model/ModifyMusicOnShelvesResponse.cpp
  src/v20190916/model/Station.cpp
  src/v20190916/model/DescribeKTVMusicDetailRequest.cpp
  src/v20190916/model/KTVMusicTopInfo.cpp
  src/v20190916/model/DescribeKTVSingerCategoriesRequest.cpp
  src/v20190916/model/KTVSingerBaseInfo.cpp
  src/v20190916/model/ModifyMusicOnShelvesRequest.cpp
  src/v20190916/model/SetRealVolumeCommandInput.cpp
  src/v20190916/model/PlayCommandInput.cpp
  src/v20190916/model/DescribeMusicRequest.cpp
  src/v20190916/model/KTVMusicDetailInfo.cpp
  src/v20190916/model/DescribeMusicSaleStatusRequest.cpp
  src/v20190916/model/TakeMusicOffShelvesRequest.cpp
  src/v20190916/model/DescribeCloudMusicResponse.cpp
  src/v20190916/model/MusicDetailInfo.cpp
  src/v20190916/model/ImagePath.cpp
  src/v20190916/model/KTVMusicTagInfo.cpp
  src/v20190916/model/DestroyKTVRobotRequest.cpp
  src/v20190916/model/DescribeAuthInfoResponse.cpp
  src/v20190916/model/DescribeLyricRequest.cpp
  src/v20190916/model/ReportDataRequest.cpp
  src/v20190916/model/SeekCommandInput.cpp
  src/v20190916/model/DescribePkgOfflineMusicRequest.cpp
  src/v20190916/model/TimeRange.cpp
  src/v20190916/model/DescribeMusicSaleStatusResponse.cpp
  src/v20190916/model/CreateKTVRobotResponse.cpp
  src/v20190916/model/DescribePackageItemsResponse.cpp
  src/v20190916/model/DescribeCloudMusicPurchasedResponse.cpp
  src/v20190916/model/KTVMusicTagGroup.cpp
  src/v20190916/model/DataInfo.cpp
  src/v20190916/model/ApplicationLicenseInput.cpp
  src/v20190916/model/Artist.cpp
  src/v20190916/model/SetDestroyModeCommandInput.cpp
  src/v20190916/model/ReportDataResponse.cpp
  src/v20190916/model/SearchKTVMusicsResponse.cpp
  src/v20190916/model/DescribeItemByIdRequest.cpp
  src/v20190916/model/PutMusicOnTheShelvesResponse.cpp
  src/v20190916/model/SyncRobotCommand.cpp
  src/v20190916/model/DescribeKTVSingerMusicsResponse.cpp
  src/v20190916/model/DescribeItemsResponse.cpp
  src/v20190916/model/DescribePkgOfflineMusicResponse.cpp
  src/v20190916/model/KTVSingerInfo.cpp
  src/v20190916/model/SetVolumeCommandInput.cpp
  src/v20190916/model/PutMusicOnTheShelvesRequest.cpp
  src/v20190916/model/DescribeCloudMusicRequest.cpp
  src/v20190916/model/SortBy.cpp
  src/v20190916/model/DescribeKTVMusicDetailResponse.cpp
  src/v20190916/model/DescribeKTVRobotsRequest.cpp
  src/v20190916/model/DescribeKTVMusicTagsResponse.cpp
  src/v20190916/model/DescribeKTVMusicTagsRequest.cpp
  src/v20190916/model/JoinRoomInput.cpp
  src/v20190916/model/DestroyKTVRobotResponse.cpp
  src/v20190916/model/CreateKTVRobotRequest.cpp
  src/v20190916/model/KTVSuggestionInfo.cpp
  src/v20190916/model/DescribeKTVTopListRequest.cpp
  src/v20190916/model/DescribeKTVPlaylistDetailRequest.cpp
  src/v20190916/model/Music.cpp
  src/v20190916/model/DescribeStationsResponse.cpp
  src/v20190916/model/DescribeCloudMusicPurchasedRequest.cpp
  src/v20190916/model/PackageItem.cpp
  src/v20190916/model/DescribeKTVPlaylistsRequest.cpp
  src/v20190916/model/TRTCJoinRoomInput.cpp
  src/v20190916/model/DescribePackageItemsRequest.cpp
  src/v20190916/model/AuthInfo.cpp
  src/v20190916/model/DescribeKTVRobotsResponse.cpp
  src/v20190916/model/UseRange.cpp
  src/v20190916/model/DescribeStationsRequest.cpp
  src/v20190916/model/DescribeKTVSingerMusicsRequest.cpp
  src/v20190916/model/DescribeKTVSingerCategoriesResponse.cpp
  src/v20190916/model/DescribeKTVSingersRequest.cpp
  src/v20190916/model/SetPlaylistCommandInput.cpp
  src/v20190916/model/SyncKTVRobotCommandResponse.cpp
  src/v20190916/model/BatchDescribeKTVMusicDetailsResponse.cpp
  src/v20190916/model/SearchKTVMusicsRequest.cpp
  src/v20190916/model/KTVPlaylistBaseInfo.cpp
  src/v20190916/model/DescribeKTVSingersResponse.cpp
  src/v20190916/model/DescribeItemByIdResponse.cpp
  src/v20190916/model/MusicStatus.cpp
  src/v20190916/model/KTVSingerCategoryInfo.cpp
  src/v20190916/model/BatchDescribeKTVMusicDetailsRequest.cpp
  src/v20190916/model/SendMessageCommandInput.cpp
  src/v20190916/model/KTVMusicDefinitionInfo.cpp
  src/v20190916/model/Album.cpp
  src/v20190916/model/DescribeLyricResponse.cpp
  src/v20190916/model/KTVMusicBaseInfo.cpp
  src/v20190916/model/SyncKTVRobotCommandRequest.cpp
  src/v20190916/model/DescribeKTVSuggestionsRequest.cpp
  src/v20190916/model/DescribeKTVPlaylistsResponse.cpp
  src/v20190916/model/DescribeKTVPlaylistDetailResponse.cpp
  src/v20190916/model/SetAudioParamCommandInput.cpp
  src/v20190916/model/TakeMusicOffShelves.cpp
  src/v20190916/model/OfflineMusicDetail.cpp
  src/v20190916/model/DescribeAuthInfoRequest.cpp
  src/v20190916/model/Package.cpp
  src/v20190916/model/SetPlayModeCommandInput.cpp
  src/v20190916/model/KTVRobotInfo.cpp
  src/v20190916/model/DescribeItemsRequest.cpp
  src/v20190916/model/Item.cpp
  src/v20190916/model/DescribeKTVTopListResponse.cpp
  src/v20190916/model/MusicOpenDetail.cpp
  src/v20190916/model/DescribePackagesRequest.cpp
  src/v20190916/model/DescribePackagesResponse.cpp
  src/v20190916/model/Lyric.cpp
  src/v20190916/model/TakeMusicOffShelvesResponse.cpp
  )

set(ame_include
    include/tencentcloud/ame
  )

add_library(ame ${LIB_TYPE}
  ${ame_public_header}
  ${ame_public_header_model}
  ${ame_src})

set_target_properties(ame
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ame
  )

target_include_directories(ame
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(ame
  core)

#install(FILES ${ame_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ame/v20190916)
#install(FILES ${ame_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ame/v20190916/model)
install(DIRECTORY ${ame_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS ame
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
