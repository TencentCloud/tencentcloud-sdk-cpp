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

set(cdn_public_header
  include/tencentcloud/cdn/v20180606/CdnClient.h
  )

set(cdn_public_header_model
  include/tencentcloud/cdn/v20180606/model/PurgePathCacheRequest.h
  include/tencentcloud/cdn/v20180606/model/CdnData.h
  include/tencentcloud/cdn/v20180606/model/PurgeUrlsCacheRequest.h
  include/tencentcloud/cdn/v20180606/model/ResourceData.h
  include/tencentcloud/cdn/v20180606/model/UrlRecord.h
  include/tencentcloud/cdn/v20180606/model/DescribeOriginDataRequest.h
  include/tencentcloud/cdn/v20180606/model/PushTask.h
  include/tencentcloud/cdn/v20180606/model/TimestampData.h
  include/tencentcloud/cdn/v20180606/model/DescribeCdnIpRequest.h
  include/tencentcloud/cdn/v20180606/model/PushUrlsCacheRequest.h
  include/tencentcloud/cdn/v20180606/model/DescribePushTasksRequest.h
  include/tencentcloud/cdn/v20180606/model/DescribeIpVisitResponse.h
  include/tencentcloud/cdn/v20180606/model/PurgePathCacheResponse.h
  include/tencentcloud/cdn/v20180606/model/PurgeTask.h
  include/tencentcloud/cdn/v20180606/model/DescribePurgeTasksRequest.h
  include/tencentcloud/cdn/v20180606/model/CacheOptResult.h
  include/tencentcloud/cdn/v20180606/model/ListTopDataResponse.h
  include/tencentcloud/cdn/v20180606/model/DescribeMapInfoResponse.h
  include/tencentcloud/cdn/v20180606/model/DescribeMapInfoRequest.h
  include/tencentcloud/cdn/v20180606/model/EnableCachesResponse.h
  include/tencentcloud/cdn/v20180606/model/DescribePayTypeRequest.h
  include/tencentcloud/cdn/v20180606/model/DescribeIpVisitRequest.h
  include/tencentcloud/cdn/v20180606/model/DescribePayTypeResponse.h
  include/tencentcloud/cdn/v20180606/model/GetDisableRecordsRequest.h
  include/tencentcloud/cdn/v20180606/model/PurgeUrlsCacheResponse.h
  include/tencentcloud/cdn/v20180606/model/ListTopDataRequest.h
  include/tencentcloud/cdn/v20180606/model/DisableCachesResponse.h
  include/tencentcloud/cdn/v20180606/model/DescribePurgeTasksResponse.h
  include/tencentcloud/cdn/v20180606/model/DescribePushTasksResponse.h
  include/tencentcloud/cdn/v20180606/model/ResourceOriginData.h
  include/tencentcloud/cdn/v20180606/model/DescribeOriginDataResponse.h
  include/tencentcloud/cdn/v20180606/model/DescribeCdnIpResponse.h
  include/tencentcloud/cdn/v20180606/model/DescribeCdnDataResponse.h
  include/tencentcloud/cdn/v20180606/model/CdnIp.h
  include/tencentcloud/cdn/v20180606/model/DisableCachesRequest.h
  include/tencentcloud/cdn/v20180606/model/DescribeCdnDataRequest.h
  include/tencentcloud/cdn/v20180606/model/TopData.h
  include/tencentcloud/cdn/v20180606/model/EnableCachesRequest.h
  include/tencentcloud/cdn/v20180606/model/PushUrlsCacheResponse.h
  include/tencentcloud/cdn/v20180606/model/MapInfo.h
  include/tencentcloud/cdn/v20180606/model/TopDetailData.h
  include/tencentcloud/cdn/v20180606/model/GetDisableRecordsResponse.h
  include/tencentcloud/cdn/v20180606/model/CdnIpHistory.h
  include/tencentcloud/cdn/v20180606/model/SummarizedData.h
  )

set(cdn_src
  src/v20180606/CdnClient.cpp
  src/v20180606/model/PurgePathCacheRequest.cpp
  src/v20180606/model/CdnData.cpp
  src/v20180606/model/PurgeUrlsCacheRequest.cpp
  src/v20180606/model/ResourceData.cpp
  src/v20180606/model/UrlRecord.cpp
  src/v20180606/model/DescribeOriginDataRequest.cpp
  src/v20180606/model/PushTask.cpp
  src/v20180606/model/TimestampData.cpp
  src/v20180606/model/DescribeCdnIpRequest.cpp
  src/v20180606/model/PushUrlsCacheRequest.cpp
  src/v20180606/model/DescribePushTasksRequest.cpp
  src/v20180606/model/DescribeIpVisitResponse.cpp
  src/v20180606/model/PurgePathCacheResponse.cpp
  src/v20180606/model/PurgeTask.cpp
  src/v20180606/model/DescribePurgeTasksRequest.cpp
  src/v20180606/model/CacheOptResult.cpp
  src/v20180606/model/ListTopDataResponse.cpp
  src/v20180606/model/DescribeMapInfoResponse.cpp
  src/v20180606/model/DescribeMapInfoRequest.cpp
  src/v20180606/model/EnableCachesResponse.cpp
  src/v20180606/model/DescribePayTypeRequest.cpp
  src/v20180606/model/DescribeIpVisitRequest.cpp
  src/v20180606/model/DescribePayTypeResponse.cpp
  src/v20180606/model/GetDisableRecordsRequest.cpp
  src/v20180606/model/PurgeUrlsCacheResponse.cpp
  src/v20180606/model/ListTopDataRequest.cpp
  src/v20180606/model/DisableCachesResponse.cpp
  src/v20180606/model/DescribePurgeTasksResponse.cpp
  src/v20180606/model/DescribePushTasksResponse.cpp
  src/v20180606/model/ResourceOriginData.cpp
  src/v20180606/model/DescribeOriginDataResponse.cpp
  src/v20180606/model/DescribeCdnIpResponse.cpp
  src/v20180606/model/DescribeCdnDataResponse.cpp
  src/v20180606/model/CdnIp.cpp
  src/v20180606/model/DisableCachesRequest.cpp
  src/v20180606/model/DescribeCdnDataRequest.cpp
  src/v20180606/model/TopData.cpp
  src/v20180606/model/EnableCachesRequest.cpp
  src/v20180606/model/PushUrlsCacheResponse.cpp
  src/v20180606/model/MapInfo.cpp
  src/v20180606/model/TopDetailData.cpp
  src/v20180606/model/GetDisableRecordsResponse.cpp
  src/v20180606/model/CdnIpHistory.cpp
  src/v20180606/model/SummarizedData.cpp
  )

set(cdn_include
    include/tencentcloud/cdn
  )

add_library(cdn ${LIB_TYPE}
  ${cdn_public_header}
  ${cdn_public_header_model}
  ${cdn_src})

set_target_properties(cdn
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cdn
  )

target_include_directories(cdn
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(cdn
  core)

#install(FILES ${cdn_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cdn/v20180606)
#install(FILES ${cdn_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cdn/v20180606/model)
install(DIRECTORY ${cdn_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS cdn
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
