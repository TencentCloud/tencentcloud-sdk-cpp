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

set(cdc_public_header
  include/tencentcloud/cdc/v20201214/CdcClient.h
  )

set(cdc_public_header_model
  include/tencentcloud/cdc/v20201214/model/DescribeDedicatedClusterInstanceTypesResponse.h
  include/tencentcloud/cdc/v20201214/model/RegionZoneInfo.h
  include/tencentcloud/cdc/v20201214/model/DescribeDedicatedClustersRequest.h
  include/tencentcloud/cdc/v20201214/model/DescribeDedicatedClusterTypesResponse.h
  include/tencentcloud/cdc/v20201214/model/CreateDedicatedClusterImageCacheRequest.h
  include/tencentcloud/cdc/v20201214/model/DedicatedClusterInstanceType.h
  include/tencentcloud/cdc/v20201214/model/DedicatedClusterType.h
  include/tencentcloud/cdc/v20201214/model/DeleteSitesRequest.h
  include/tencentcloud/cdc/v20201214/model/CosInfo.h
  include/tencentcloud/cdc/v20201214/model/ZoneInfo.h
  include/tencentcloud/cdc/v20201214/model/DescribeDedicatedClusterOverviewResponse.h
  include/tencentcloud/cdc/v20201214/model/DescribeSitesRequest.h
  include/tencentcloud/cdc/v20201214/model/HostInfo.h
  include/tencentcloud/cdc/v20201214/model/CreateSiteResponse.h
  include/tencentcloud/cdc/v20201214/model/DescribeDedicatedSupportedZonesResponse.h
  include/tencentcloud/cdc/v20201214/model/ModifySiteInfoResponse.h
  include/tencentcloud/cdc/v20201214/model/CreateDedicatedClusterOrderRequest.h
  include/tencentcloud/cdc/v20201214/model/ModifyOrderStatusRequest.h
  include/tencentcloud/cdc/v20201214/model/DedicatedClusterOrderItem.h
  include/tencentcloud/cdc/v20201214/model/CreateSiteRequest.h
  include/tencentcloud/cdc/v20201214/model/DescribeDedicatedSupportedZonesRequest.h
  include/tencentcloud/cdc/v20201214/model/DedicatedClusterTypeInfo.h
  include/tencentcloud/cdc/v20201214/model/ModifyOrderStatusResponse.h
  include/tencentcloud/cdc/v20201214/model/SetInfo.h
  include/tencentcloud/cdc/v20201214/model/InBandwidth.h
  include/tencentcloud/cdc/v20201214/model/DeleteDedicatedClustersRequest.h
  include/tencentcloud/cdc/v20201214/model/DeleteDedicatedClusterImageCacheRequest.h
  include/tencentcloud/cdc/v20201214/model/DescribeSitesResponse.h
  include/tencentcloud/cdc/v20201214/model/DescribeSitesDetailRequest.h
  include/tencentcloud/cdc/v20201214/model/DetailData.h
  include/tencentcloud/cdc/v20201214/model/DedicatedClusterOrder.h
  include/tencentcloud/cdc/v20201214/model/ModifyDedicatedClusterInfoRequest.h
  include/tencentcloud/cdc/v20201214/model/DescribeDedicatedClusterCbsStatisticsRequest.h
  include/tencentcloud/cdc/v20201214/model/DescribeDedicatedClusterHostsRequest.h
  include/tencentcloud/cdc/v20201214/model/CreateDedicatedClusterOrderResponse.h
  include/tencentcloud/cdc/v20201214/model/DescribeDedicatedClusterCosCapacityResponse.h
  include/tencentcloud/cdc/v20201214/model/DeleteDedicatedClusterImageCacheResponse.h
  include/tencentcloud/cdc/v20201214/model/CreateDedicatedClusterResponse.h
  include/tencentcloud/cdc/v20201214/model/OutBandwidth.h
  include/tencentcloud/cdc/v20201214/model/DedicatedCluster.h
  include/tencentcloud/cdc/v20201214/model/DescribeSitesDetailResponse.h
  include/tencentcloud/cdc/v20201214/model/DescribeDedicatedClusterOrdersRequest.h
  include/tencentcloud/cdc/v20201214/model/DescribeDedicatedClustersResponse.h
  include/tencentcloud/cdc/v20201214/model/HostStatistic.h
  include/tencentcloud/cdc/v20201214/model/HostDetailInfo.h
  include/tencentcloud/cdc/v20201214/model/CbsInfo.h
  include/tencentcloud/cdc/v20201214/model/ModifySiteDeviceInfoResponse.h
  include/tencentcloud/cdc/v20201214/model/CreateDedicatedClusterRequest.h
  include/tencentcloud/cdc/v20201214/model/DescribeDedicatedClusterHostsResponse.h
  include/tencentcloud/cdc/v20201214/model/LocalNetInfo.h
  include/tencentcloud/cdc/v20201214/model/DescribeDedicatedClusterInstanceTypesRequest.h
  include/tencentcloud/cdc/v20201214/model/ModifyDedicatedClusterInfoResponse.h
  include/tencentcloud/cdc/v20201214/model/ModifySiteInfoRequest.h
  include/tencentcloud/cdc/v20201214/model/SiteDetail.h
  include/tencentcloud/cdc/v20201214/model/DeleteSitesResponse.h
  include/tencentcloud/cdc/v20201214/model/CosCapacity.h
  include/tencentcloud/cdc/v20201214/model/VpngwBandwidthData.h
  include/tencentcloud/cdc/v20201214/model/ModifySiteDeviceInfoRequest.h
  include/tencentcloud/cdc/v20201214/model/DescribeDedicatedClusterHostStatisticsResponse.h
  include/tencentcloud/cdc/v20201214/model/Site.h
  include/tencentcloud/cdc/v20201214/model/DescribeDedicatedClusterTypesRequest.h
  include/tencentcloud/cdc/v20201214/model/DescribeDedicatedClusterOrdersResponse.h
  include/tencentcloud/cdc/v20201214/model/DescribeDedicatedClusterHostStatisticsRequest.h
  include/tencentcloud/cdc/v20201214/model/CreateDedicatedClusterImageCacheResponse.h
  include/tencentcloud/cdc/v20201214/model/DescribeDedicatedClusterCbsStatisticsResponse.h
  include/tencentcloud/cdc/v20201214/model/DescribeDedicatedClusterOverviewRequest.h
  include/tencentcloud/cdc/v20201214/model/DescribeDedicatedClusterCosCapacityRequest.h
  include/tencentcloud/cdc/v20201214/model/DeleteDedicatedClustersResponse.h
  )

set(cdc_src
  src/v20201214/CdcClient.cpp
  src/v20201214/model/DescribeDedicatedClusterInstanceTypesResponse.cpp
  src/v20201214/model/RegionZoneInfo.cpp
  src/v20201214/model/DescribeDedicatedClustersRequest.cpp
  src/v20201214/model/DescribeDedicatedClusterTypesResponse.cpp
  src/v20201214/model/CreateDedicatedClusterImageCacheRequest.cpp
  src/v20201214/model/DedicatedClusterInstanceType.cpp
  src/v20201214/model/DedicatedClusterType.cpp
  src/v20201214/model/DeleteSitesRequest.cpp
  src/v20201214/model/CosInfo.cpp
  src/v20201214/model/ZoneInfo.cpp
  src/v20201214/model/DescribeDedicatedClusterOverviewResponse.cpp
  src/v20201214/model/DescribeSitesRequest.cpp
  src/v20201214/model/HostInfo.cpp
  src/v20201214/model/CreateSiteResponse.cpp
  src/v20201214/model/DescribeDedicatedSupportedZonesResponse.cpp
  src/v20201214/model/ModifySiteInfoResponse.cpp
  src/v20201214/model/CreateDedicatedClusterOrderRequest.cpp
  src/v20201214/model/ModifyOrderStatusRequest.cpp
  src/v20201214/model/DedicatedClusterOrderItem.cpp
  src/v20201214/model/CreateSiteRequest.cpp
  src/v20201214/model/DescribeDedicatedSupportedZonesRequest.cpp
  src/v20201214/model/DedicatedClusterTypeInfo.cpp
  src/v20201214/model/ModifyOrderStatusResponse.cpp
  src/v20201214/model/SetInfo.cpp
  src/v20201214/model/InBandwidth.cpp
  src/v20201214/model/DeleteDedicatedClustersRequest.cpp
  src/v20201214/model/DeleteDedicatedClusterImageCacheRequest.cpp
  src/v20201214/model/DescribeSitesResponse.cpp
  src/v20201214/model/DescribeSitesDetailRequest.cpp
  src/v20201214/model/DetailData.cpp
  src/v20201214/model/DedicatedClusterOrder.cpp
  src/v20201214/model/ModifyDedicatedClusterInfoRequest.cpp
  src/v20201214/model/DescribeDedicatedClusterCbsStatisticsRequest.cpp
  src/v20201214/model/DescribeDedicatedClusterHostsRequest.cpp
  src/v20201214/model/CreateDedicatedClusterOrderResponse.cpp
  src/v20201214/model/DescribeDedicatedClusterCosCapacityResponse.cpp
  src/v20201214/model/DeleteDedicatedClusterImageCacheResponse.cpp
  src/v20201214/model/CreateDedicatedClusterResponse.cpp
  src/v20201214/model/OutBandwidth.cpp
  src/v20201214/model/DedicatedCluster.cpp
  src/v20201214/model/DescribeSitesDetailResponse.cpp
  src/v20201214/model/DescribeDedicatedClusterOrdersRequest.cpp
  src/v20201214/model/DescribeDedicatedClustersResponse.cpp
  src/v20201214/model/HostStatistic.cpp
  src/v20201214/model/HostDetailInfo.cpp
  src/v20201214/model/CbsInfo.cpp
  src/v20201214/model/ModifySiteDeviceInfoResponse.cpp
  src/v20201214/model/CreateDedicatedClusterRequest.cpp
  src/v20201214/model/DescribeDedicatedClusterHostsResponse.cpp
  src/v20201214/model/LocalNetInfo.cpp
  src/v20201214/model/DescribeDedicatedClusterInstanceTypesRequest.cpp
  src/v20201214/model/ModifyDedicatedClusterInfoResponse.cpp
  src/v20201214/model/ModifySiteInfoRequest.cpp
  src/v20201214/model/SiteDetail.cpp
  src/v20201214/model/DeleteSitesResponse.cpp
  src/v20201214/model/CosCapacity.cpp
  src/v20201214/model/VpngwBandwidthData.cpp
  src/v20201214/model/ModifySiteDeviceInfoRequest.cpp
  src/v20201214/model/DescribeDedicatedClusterHostStatisticsResponse.cpp
  src/v20201214/model/Site.cpp
  src/v20201214/model/DescribeDedicatedClusterTypesRequest.cpp
  src/v20201214/model/DescribeDedicatedClusterOrdersResponse.cpp
  src/v20201214/model/DescribeDedicatedClusterHostStatisticsRequest.cpp
  src/v20201214/model/CreateDedicatedClusterImageCacheResponse.cpp
  src/v20201214/model/DescribeDedicatedClusterCbsStatisticsResponse.cpp
  src/v20201214/model/DescribeDedicatedClusterOverviewRequest.cpp
  src/v20201214/model/DescribeDedicatedClusterCosCapacityRequest.cpp
  src/v20201214/model/DeleteDedicatedClustersResponse.cpp
  )

set(cdc_include
    include/tencentcloud/cdc
  )

add_library(cdc ${LIB_TYPE}
  ${cdc_public_header}
  ${cdc_public_header_model}
  ${cdc_src})

set_target_properties(cdc
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cdc
  )

target_include_directories(cdc
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(cdc
  core)

#install(FILES ${cdc_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cdc/v20201214)
#install(FILES ${cdc_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cdc/v20201214/model)
install(DIRECTORY ${cdc_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS cdc
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
