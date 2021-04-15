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

set(gme_public_header
  include/tencentcloud/gme/v20180711/GmeClient.h
  )

set(gme_public_header_model
  include/tencentcloud/gme/v20180711/model/ScanVoiceResponse.h
  include/tencentcloud/gme/v20180711/model/AppStatisticsItem.h
  include/tencentcloud/gme/v20180711/model/ModifyAppStatusRequest.h
  include/tencentcloud/gme/v20180711/model/InOutTimeInfo.h
  include/tencentcloud/gme/v20180711/model/DescribeScanResultListResponse.h
  include/tencentcloud/gme/v20180711/model/DescribeApplicationDataRequest.h
  include/tencentcloud/gme/v20180711/model/VoiceFilterRequest.h
  include/tencentcloud/gme/v20180711/model/VoiceMessageStatisticsItem.h
  include/tencentcloud/gme/v20180711/model/DescribeScanResultListRequest.h
  include/tencentcloud/gme/v20180711/model/RealTimeSpeechStatisticsItem.h
  include/tencentcloud/gme/v20180711/model/VoiceFilterResponse.h
  include/tencentcloud/gme/v20180711/model/Tag.h
  include/tencentcloud/gme/v20180711/model/VoiceMessageConf.h
  include/tencentcloud/gme/v20180711/model/ApplicationDataStatistics.h
  include/tencentcloud/gme/v20180711/model/DescribeFilterResultListResponse.h
  include/tencentcloud/gme/v20180711/model/DescribeAppStatisticsResponse.h
  include/tencentcloud/gme/v20180711/model/DescribeApplicationDataResponse.h
  include/tencentcloud/gme/v20180711/model/Task.h
  include/tencentcloud/gme/v20180711/model/VoiceFilterStatisticsItem.h
  include/tencentcloud/gme/v20180711/model/StatisticsItem.h
  include/tencentcloud/gme/v20180711/model/DescribeUserInAndOutTimeResponse.h
  include/tencentcloud/gme/v20180711/model/VoiceFilterInfo.h
  include/tencentcloud/gme/v20180711/model/DescribeFilterResultResponse.h
  include/tencentcloud/gme/v20180711/model/ModifyRoomInfoResponse.h
  include/tencentcloud/gme/v20180711/model/DescribeScanResult.h
  include/tencentcloud/gme/v20180711/model/DescribeFilterResultListRequest.h
  include/tencentcloud/gme/v20180711/model/VoiceFilter.h
  include/tencentcloud/gme/v20180711/model/ScanDetail.h
  include/tencentcloud/gme/v20180711/model/ModifyRoomInfoRequest.h
  include/tencentcloud/gme/v20180711/model/CreateAppRequest.h
  include/tencentcloud/gme/v20180711/model/RealtimeSpeechConf.h
  include/tencentcloud/gme/v20180711/model/ScanVoiceResult.h
  include/tencentcloud/gme/v20180711/model/CreateAppResponse.h
  include/tencentcloud/gme/v20180711/model/DescribeAppStatisticsRequest.h
  include/tencentcloud/gme/v20180711/model/ScanPiece.h
  include/tencentcloud/gme/v20180711/model/ModifyAppStatusResponse.h
  include/tencentcloud/gme/v20180711/model/ScanVoiceRequest.h
  include/tencentcloud/gme/v20180711/model/VoiceFilterConf.h
  include/tencentcloud/gme/v20180711/model/DescribeFilterResultRequest.h
  include/tencentcloud/gme/v20180711/model/DescribeUserInAndOutTimeRequest.h
  )

set(gme_src
  src/v20180711/GmeClient.cpp
  src/v20180711/model/ScanVoiceResponse.cpp
  src/v20180711/model/AppStatisticsItem.cpp
  src/v20180711/model/ModifyAppStatusRequest.cpp
  src/v20180711/model/InOutTimeInfo.cpp
  src/v20180711/model/DescribeScanResultListResponse.cpp
  src/v20180711/model/DescribeApplicationDataRequest.cpp
  src/v20180711/model/VoiceFilterRequest.cpp
  src/v20180711/model/VoiceMessageStatisticsItem.cpp
  src/v20180711/model/DescribeScanResultListRequest.cpp
  src/v20180711/model/RealTimeSpeechStatisticsItem.cpp
  src/v20180711/model/VoiceFilterResponse.cpp
  src/v20180711/model/Tag.cpp
  src/v20180711/model/VoiceMessageConf.cpp
  src/v20180711/model/ApplicationDataStatistics.cpp
  src/v20180711/model/DescribeFilterResultListResponse.cpp
  src/v20180711/model/DescribeAppStatisticsResponse.cpp
  src/v20180711/model/DescribeApplicationDataResponse.cpp
  src/v20180711/model/Task.cpp
  src/v20180711/model/VoiceFilterStatisticsItem.cpp
  src/v20180711/model/StatisticsItem.cpp
  src/v20180711/model/DescribeUserInAndOutTimeResponse.cpp
  src/v20180711/model/VoiceFilterInfo.cpp
  src/v20180711/model/DescribeFilterResultResponse.cpp
  src/v20180711/model/ModifyRoomInfoResponse.cpp
  src/v20180711/model/DescribeScanResult.cpp
  src/v20180711/model/DescribeFilterResultListRequest.cpp
  src/v20180711/model/VoiceFilter.cpp
  src/v20180711/model/ScanDetail.cpp
  src/v20180711/model/ModifyRoomInfoRequest.cpp
  src/v20180711/model/CreateAppRequest.cpp
  src/v20180711/model/RealtimeSpeechConf.cpp
  src/v20180711/model/ScanVoiceResult.cpp
  src/v20180711/model/CreateAppResponse.cpp
  src/v20180711/model/DescribeAppStatisticsRequest.cpp
  src/v20180711/model/ScanPiece.cpp
  src/v20180711/model/ModifyAppStatusResponse.cpp
  src/v20180711/model/ScanVoiceRequest.cpp
  src/v20180711/model/VoiceFilterConf.cpp
  src/v20180711/model/DescribeFilterResultRequest.cpp
  src/v20180711/model/DescribeUserInAndOutTimeRequest.cpp
  )

set(gme_include
    include/tencentcloud/gme
  )

add_library(gme ${LIB_TYPE}
  ${gme_public_header}
  ${gme_public_header_model}
  ${gme_src})

set_target_properties(gme
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}gme
  )

target_include_directories(gme
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(gme
  core)

#install(FILES ${gme_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/gme/v20180711)
#install(FILES ${gme_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/gme/v20180711/model)
install(DIRECTORY ${gme_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS gme
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
