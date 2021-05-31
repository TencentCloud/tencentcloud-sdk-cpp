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
  include/tencentcloud/ame/v20190916/model/Album.h
  include/tencentcloud/ame/v20190916/model/DescribeMusicResponse.h
  include/tencentcloud/ame/v20190916/model/DescribeLyricResponse.h
  include/tencentcloud/ame/v20190916/model/ModifyMusicOnShelvesResponse.h
  include/tencentcloud/ame/v20190916/model/Station.h
  include/tencentcloud/ame/v20190916/model/Music.h
  include/tencentcloud/ame/v20190916/model/DescribeKTVMusicDetailRequest.h
  include/tencentcloud/ame/v20190916/model/DescribeStationsResponse.h
  include/tencentcloud/ame/v20190916/model/DescribePackageItemsResponse.h
  include/tencentcloud/ame/v20190916/model/DescribeCloudMusicPurchasedRequest.h
  include/tencentcloud/ame/v20190916/model/PackageItem.h
  include/tencentcloud/ame/v20190916/model/DescribeCloudMusicPurchasedResponse.h
  include/tencentcloud/ame/v20190916/model/DataInfo.h
  include/tencentcloud/ame/v20190916/model/KTVMusicBaseInfo.h
  include/tencentcloud/ame/v20190916/model/Package.h
  include/tencentcloud/ame/v20190916/model/ReportDataResponse.h
  include/tencentcloud/ame/v20190916/model/ModifyMusicOnShelvesRequest.h
  include/tencentcloud/ame/v20190916/model/DescribePackageItemsRequest.h
  include/tencentcloud/ame/v20190916/model/AuthInfo.h
  include/tencentcloud/ame/v20190916/model/TakeMusicOffShelvesRequest.h
  include/tencentcloud/ame/v20190916/model/SearchKTVMusicsResponse.h
  include/tencentcloud/ame/v20190916/model/TakeMusicOffShelves.h
  include/tencentcloud/ame/v20190916/model/Lyric.h
  include/tencentcloud/ame/v20190916/model/DescribeItemByIdRequest.h
  include/tencentcloud/ame/v20190916/model/DescribeMusicRequest.h
  include/tencentcloud/ame/v20190916/model/UseRange.h
  include/tencentcloud/ame/v20190916/model/Artist.h
  include/tencentcloud/ame/v20190916/model/DescribeStationsRequest.h
  include/tencentcloud/ame/v20190916/model/PutMusicOnTheShelvesResponse.h
  include/tencentcloud/ame/v20190916/model/DescribeItemsRequest.h
  include/tencentcloud/ame/v20190916/model/Item.h
  include/tencentcloud/ame/v20190916/model/DescribeCloudMusicResponse.h
  include/tencentcloud/ame/v20190916/model/MusicOpenDetail.h
  include/tencentcloud/ame/v20190916/model/DescribePackagesRequest.h
  include/tencentcloud/ame/v20190916/model/MusicDetailInfo.h
  include/tencentcloud/ame/v20190916/model/SearchKTVMusicsRequest.h
  include/tencentcloud/ame/v20190916/model/ImagePath.h
  include/tencentcloud/ame/v20190916/model/DescribeItemsResponse.h
  include/tencentcloud/ame/v20190916/model/DescribeItemByIdResponse.h
  include/tencentcloud/ame/v20190916/model/PutMusicOnTheShelvesRequest.h
  include/tencentcloud/ame/v20190916/model/DescribePackagesResponse.h
  include/tencentcloud/ame/v20190916/model/DescribeCloudMusicRequest.h
  include/tencentcloud/ame/v20190916/model/DescribeAuthInfoResponse.h
  include/tencentcloud/ame/v20190916/model/TakeMusicOffShelvesResponse.h
  include/tencentcloud/ame/v20190916/model/DescribeLyricRequest.h
  include/tencentcloud/ame/v20190916/model/DescribeKTVMusicDetailResponse.h
  include/tencentcloud/ame/v20190916/model/DescribeAuthInfoRequest.h
  include/tencentcloud/ame/v20190916/model/ReportDataRequest.h
  )

set(ame_src
  src/v20190916/AmeClient.cpp
  src/v20190916/model/Album.cpp
  src/v20190916/model/DescribeMusicResponse.cpp
  src/v20190916/model/DescribeLyricResponse.cpp
  src/v20190916/model/ModifyMusicOnShelvesResponse.cpp
  src/v20190916/model/Station.cpp
  src/v20190916/model/Music.cpp
  src/v20190916/model/DescribeKTVMusicDetailRequest.cpp
  src/v20190916/model/DescribeStationsResponse.cpp
  src/v20190916/model/DescribePackageItemsResponse.cpp
  src/v20190916/model/DescribeCloudMusicPurchasedRequest.cpp
  src/v20190916/model/PackageItem.cpp
  src/v20190916/model/DescribeCloudMusicPurchasedResponse.cpp
  src/v20190916/model/DataInfo.cpp
  src/v20190916/model/KTVMusicBaseInfo.cpp
  src/v20190916/model/Package.cpp
  src/v20190916/model/ReportDataResponse.cpp
  src/v20190916/model/ModifyMusicOnShelvesRequest.cpp
  src/v20190916/model/DescribePackageItemsRequest.cpp
  src/v20190916/model/AuthInfo.cpp
  src/v20190916/model/TakeMusicOffShelvesRequest.cpp
  src/v20190916/model/SearchKTVMusicsResponse.cpp
  src/v20190916/model/TakeMusicOffShelves.cpp
  src/v20190916/model/Lyric.cpp
  src/v20190916/model/DescribeItemByIdRequest.cpp
  src/v20190916/model/DescribeMusicRequest.cpp
  src/v20190916/model/UseRange.cpp
  src/v20190916/model/Artist.cpp
  src/v20190916/model/DescribeStationsRequest.cpp
  src/v20190916/model/PutMusicOnTheShelvesResponse.cpp
  src/v20190916/model/DescribeItemsRequest.cpp
  src/v20190916/model/Item.cpp
  src/v20190916/model/DescribeCloudMusicResponse.cpp
  src/v20190916/model/MusicOpenDetail.cpp
  src/v20190916/model/DescribePackagesRequest.cpp
  src/v20190916/model/MusicDetailInfo.cpp
  src/v20190916/model/SearchKTVMusicsRequest.cpp
  src/v20190916/model/ImagePath.cpp
  src/v20190916/model/DescribeItemsResponse.cpp
  src/v20190916/model/DescribeItemByIdResponse.cpp
  src/v20190916/model/PutMusicOnTheShelvesRequest.cpp
  src/v20190916/model/DescribePackagesResponse.cpp
  src/v20190916/model/DescribeCloudMusicRequest.cpp
  src/v20190916/model/DescribeAuthInfoResponse.cpp
  src/v20190916/model/TakeMusicOffShelvesResponse.cpp
  src/v20190916/model/DescribeLyricRequest.cpp
  src/v20190916/model/DescribeKTVMusicDetailResponse.cpp
  src/v20190916/model/DescribeAuthInfoRequest.cpp
  src/v20190916/model/ReportDataRequest.cpp
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
