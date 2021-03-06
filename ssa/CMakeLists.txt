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

set(ssa_public_header
  include/tencentcloud/ssa/v20180608/SsaClient.h
  )

set(ssa_public_header_model
  include/tencentcloud/ssa/v20180608/model/DescribeAssetDetailRequest.h
  include/tencentcloud/ssa/v20180608/model/DescribeVulListResponse.h
  include/tencentcloud/ssa/v20180608/model/DescribeComplianceAssetListResponse.h
  include/tencentcloud/ssa/v20180608/model/DataCheck.h
  include/tencentcloud/ssa/v20180608/model/DescribeCheckConfigAssetListRequest.h
  include/tencentcloud/ssa/v20180608/model/Asset.h
  include/tencentcloud/ssa/v20180608/model/DescribeComplianceListResponse.h
  include/tencentcloud/ssa/v20180608/model/DescribeConfigListResponse.h
  include/tencentcloud/ssa/v20180608/model/AggregationObj.h
  include/tencentcloud/ssa/v20180608/model/DescribeCheckConfigDetailResponse.h
  include/tencentcloud/ssa/v20180608/model/DescribeAssetListResponse.h
  include/tencentcloud/ssa/v20180608/model/DescribeCheckConfigAssetListResponse.h
  include/tencentcloud/ssa/v20180608/model/DescribeCheckConfigDetailRequest.h
  include/tencentcloud/ssa/v20180608/model/SaDivulgeDataQueryPub.h
  include/tencentcloud/ssa/v20180608/model/DescribeAssetListRequest.h
  include/tencentcloud/ssa/v20180608/model/DescribeComplianceDetailResponse.h
  include/tencentcloud/ssa/v20180608/model/DescribeAssetsMappingListResponse.h
  include/tencentcloud/ssa/v20180608/model/Tag.h
  include/tencentcloud/ssa/v20180608/model/VulItem.h
  include/tencentcloud/ssa/v20180608/model/DescribeComplianceListRequest.h
  include/tencentcloud/ssa/v20180608/model/DescribeVulListRequest.h
  include/tencentcloud/ssa/v20180608/model/DescribeLeakDetectionListRequest.h
  include/tencentcloud/ssa/v20180608/model/DescribeEventDetailResponse.h
  include/tencentcloud/ssa/v20180608/model/DescribeSafetyEventListResponse.h
  include/tencentcloud/ssa/v20180608/model/SaDivulgeDataQueryPubList.h
  include/tencentcloud/ssa/v20180608/model/DescribeSafetyEventListRequest.h
  include/tencentcloud/ssa/v20180608/model/ComplianceCheckDetail.h
  include/tencentcloud/ssa/v20180608/model/SaDivulgeDataQueryPubResponse.h
  include/tencentcloud/ssa/v20180608/model/Bucket.h
  include/tencentcloud/ssa/v20180608/model/DescribeConfigListRequest.h
  include/tencentcloud/ssa/v20180608/model/Filter.h
  include/tencentcloud/ssa/v20180608/model/AssetList.h
  include/tencentcloud/ssa/v20180608/model/DataAssetMapping.h
  include/tencentcloud/ssa/v20180608/model/VulList.h
  include/tencentcloud/ssa/v20180608/model/DescribeLeakDetectionListResponse.h
  include/tencentcloud/ssa/v20180608/model/DataEvent.h
  include/tencentcloud/ssa/v20180608/model/CheckConfigDetail.h
  include/tencentcloud/ssa/v20180608/model/DescribeEventDetailRequest.h
  include/tencentcloud/ssa/v20180608/model/CheckAssetItem.h
  include/tencentcloud/ssa/v20180608/model/SaDivulgeDataQueryPubRequest.h
  include/tencentcloud/ssa/v20180608/model/DescribeVulDetailRequest.h
  include/tencentcloud/ssa/v20180608/model/DataCompliance.h
  include/tencentcloud/ssa/v20180608/model/DescribeAssetsMappingListRequest.h
  include/tencentcloud/ssa/v20180608/model/DescribeComplianceDetailRequest.h
  include/tencentcloud/ssa/v20180608/model/AssetDetail.h
  include/tencentcloud/ssa/v20180608/model/DescribeComplianceAssetListRequest.h
  include/tencentcloud/ssa/v20180608/model/DescribeAssetDetailResponse.h
  include/tencentcloud/ssa/v20180608/model/DescribeVulDetailResponse.h
  )

set(ssa_src
  src/v20180608/SsaClient.cpp
  src/v20180608/model/DescribeAssetDetailRequest.cpp
  src/v20180608/model/DescribeVulListResponse.cpp
  src/v20180608/model/DescribeComplianceAssetListResponse.cpp
  src/v20180608/model/DataCheck.cpp
  src/v20180608/model/DescribeCheckConfigAssetListRequest.cpp
  src/v20180608/model/Asset.cpp
  src/v20180608/model/DescribeComplianceListResponse.cpp
  src/v20180608/model/DescribeConfigListResponse.cpp
  src/v20180608/model/AggregationObj.cpp
  src/v20180608/model/DescribeCheckConfigDetailResponse.cpp
  src/v20180608/model/DescribeAssetListResponse.cpp
  src/v20180608/model/DescribeCheckConfigAssetListResponse.cpp
  src/v20180608/model/DescribeCheckConfigDetailRequest.cpp
  src/v20180608/model/SaDivulgeDataQueryPub.cpp
  src/v20180608/model/DescribeAssetListRequest.cpp
  src/v20180608/model/DescribeComplianceDetailResponse.cpp
  src/v20180608/model/DescribeAssetsMappingListResponse.cpp
  src/v20180608/model/Tag.cpp
  src/v20180608/model/VulItem.cpp
  src/v20180608/model/DescribeComplianceListRequest.cpp
  src/v20180608/model/DescribeVulListRequest.cpp
  src/v20180608/model/DescribeLeakDetectionListRequest.cpp
  src/v20180608/model/DescribeEventDetailResponse.cpp
  src/v20180608/model/DescribeSafetyEventListResponse.cpp
  src/v20180608/model/SaDivulgeDataQueryPubList.cpp
  src/v20180608/model/DescribeSafetyEventListRequest.cpp
  src/v20180608/model/ComplianceCheckDetail.cpp
  src/v20180608/model/SaDivulgeDataQueryPubResponse.cpp
  src/v20180608/model/Bucket.cpp
  src/v20180608/model/DescribeConfigListRequest.cpp
  src/v20180608/model/Filter.cpp
  src/v20180608/model/AssetList.cpp
  src/v20180608/model/DataAssetMapping.cpp
  src/v20180608/model/VulList.cpp
  src/v20180608/model/DescribeLeakDetectionListResponse.cpp
  src/v20180608/model/DataEvent.cpp
  src/v20180608/model/CheckConfigDetail.cpp
  src/v20180608/model/DescribeEventDetailRequest.cpp
  src/v20180608/model/CheckAssetItem.cpp
  src/v20180608/model/SaDivulgeDataQueryPubRequest.cpp
  src/v20180608/model/DescribeVulDetailRequest.cpp
  src/v20180608/model/DataCompliance.cpp
  src/v20180608/model/DescribeAssetsMappingListRequest.cpp
  src/v20180608/model/DescribeComplianceDetailRequest.cpp
  src/v20180608/model/AssetDetail.cpp
  src/v20180608/model/DescribeComplianceAssetListRequest.cpp
  src/v20180608/model/DescribeAssetDetailResponse.cpp
  src/v20180608/model/DescribeVulDetailResponse.cpp
  )

set(ssa_include
    include/tencentcloud/ssa
  )

add_library(ssa ${LIB_TYPE}
  ${ssa_public_header}
  ${ssa_public_header_model}
  ${ssa_src})

set_target_properties(ssa
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ssa
  )

target_include_directories(ssa
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(ssa
  core)

#install(FILES ${ssa_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ssa/v20180608)
#install(FILES ${ssa_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ssa/v20180608/model)
install(DIRECTORY ${ssa_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS ssa
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
