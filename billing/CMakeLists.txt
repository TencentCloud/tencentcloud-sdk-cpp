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

set(billing_public_header
  include/tencentcloud/billing/v20180709/BillingClient.h
  )

set(billing_public_header_model
  include/tencentcloud/billing/v20180709/model/CostComponentSet.h
  include/tencentcloud/billing/v20180709/model/DescribeCostSummaryByProductRequest.h
  include/tencentcloud/billing/v20180709/model/DescribeCostSummaryByProjectResponse.h
  include/tencentcloud/billing/v20180709/model/DescribeDosageDetailByDateRequest.h
  include/tencentcloud/billing/v20180709/model/ProjectSummaryOverviewItem.h
  include/tencentcloud/billing/v20180709/model/ConditionRegion.h
  include/tencentcloud/billing/v20180709/model/DescribeBillSummaryByProductRequest.h
  include/tencentcloud/billing/v20180709/model/ConsumptionBusinessSummaryDataItem.h
  include/tencentcloud/billing/v20180709/model/DetailPoint.h
  include/tencentcloud/billing/v20180709/model/CostDetail.h
  include/tencentcloud/billing/v20180709/model/DescribeBillSummaryByPayModeResponse.h
  include/tencentcloud/billing/v20180709/model/BillResourceSummary.h
  include/tencentcloud/billing/v20180709/model/DescribeBillSummaryByTagRequest.h
  include/tencentcloud/billing/v20180709/model/Conditions.h
  include/tencentcloud/billing/v20180709/model/DescribeBillSummaryByProductResponse.h
  include/tencentcloud/billing/v20180709/model/BillTagInfo.h
  include/tencentcloud/billing/v20180709/model/DescribeBillSummaryByRegionResponse.h
  include/tencentcloud/billing/v20180709/model/DetailSet.h
  include/tencentcloud/billing/v20180709/model/BillTransactionInfo.h
  include/tencentcloud/billing/v20180709/model/RegionSummaryOverviewItem.h
  include/tencentcloud/billing/v20180709/model/ConsumptionResourceSummaryDataItem.h
  include/tencentcloud/billing/v20180709/model/DescribeAccountBalanceRequest.h
  include/tencentcloud/billing/v20180709/model/DescribeBillDetailRequest.h
  include/tencentcloud/billing/v20180709/model/ConsumptionProjectSummaryDataItem.h
  include/tencentcloud/billing/v20180709/model/DescribeCostSummaryByProductResponse.h
  include/tencentcloud/billing/v20180709/model/ProductInfo.h
  include/tencentcloud/billing/v20180709/model/DescribeDosageDetailByDateResponse.h
  include/tencentcloud/billing/v20180709/model/DescribeBillListResponse.h
  include/tencentcloud/billing/v20180709/model/DescribeAccountBalanceResponse.h
  include/tencentcloud/billing/v20180709/model/DescribeCostSummaryByRegionRequest.h
  include/tencentcloud/billing/v20180709/model/BusinessSummaryOverviewItem.h
  include/tencentcloud/billing/v20180709/model/BillDetailComponent.h
  include/tencentcloud/billing/v20180709/model/ConsumptionSummaryTrend.h
  include/tencentcloud/billing/v20180709/model/DescribeBillSummaryByRegionRequest.h
  include/tencentcloud/billing/v20180709/model/DescribeBillSummaryByPayModeRequest.h
  include/tencentcloud/billing/v20180709/model/DescribeCostSummaryByProjectRequest.h
  include/tencentcloud/billing/v20180709/model/ConsumptionRegionSummaryDataItem.h
  include/tencentcloud/billing/v20180709/model/DescribeBillResourceSummaryResponse.h
  include/tencentcloud/billing/v20180709/model/ActionSummaryOverviewItem.h
  include/tencentcloud/billing/v20180709/model/ConditionPayMode.h
  include/tencentcloud/billing/v20180709/model/DescribeDealsByCondRequest.h
  include/tencentcloud/billing/v20180709/model/DescribeBillResourceSummaryRequest.h
  include/tencentcloud/billing/v20180709/model/DescribeBillListRequest.h
  include/tencentcloud/billing/v20180709/model/PayDealsResponse.h
  include/tencentcloud/billing/v20180709/model/BillDetail.h
  include/tencentcloud/billing/v20180709/model/DescribeBillSummaryByTagResponse.h
  include/tencentcloud/billing/v20180709/model/TagSummaryOverviewItem.h
  include/tencentcloud/billing/v20180709/model/DescribeCostSummaryByResourceResponse.h
  include/tencentcloud/billing/v20180709/model/DescribeBillDetailResponse.h
  include/tencentcloud/billing/v20180709/model/ConsumptionResourceSummaryConditionValue.h
  include/tencentcloud/billing/v20180709/model/Deal.h
  include/tencentcloud/billing/v20180709/model/DescribeCostDetailRequest.h
  include/tencentcloud/billing/v20180709/model/DescribeDealsByCondResponse.h
  include/tencentcloud/billing/v20180709/model/ConditionProject.h
  include/tencentcloud/billing/v20180709/model/ConsumptionSummaryTotal.h
  include/tencentcloud/billing/v20180709/model/DescribeBillSummaryByProjectRequest.h
  include/tencentcloud/billing/v20180709/model/DescribeBillSummaryByProjectResponse.h
  include/tencentcloud/billing/v20180709/model/ConditionBusiness.h
  include/tencentcloud/billing/v20180709/model/DescribeCostSummaryByResourceRequest.h
  include/tencentcloud/billing/v20180709/model/DescribeCostDetailResponse.h
  include/tencentcloud/billing/v20180709/model/PayDealsRequest.h
  include/tencentcloud/billing/v20180709/model/PayModeSummaryOverviewItem.h
  include/tencentcloud/billing/v20180709/model/BusinessSummaryTotal.h
  include/tencentcloud/billing/v20180709/model/DescribeCostSummaryByRegionResponse.h
  )

set(billing_src
  src/v20180709/BillingClient.cpp
  src/v20180709/model/CostComponentSet.cpp
  src/v20180709/model/DescribeCostSummaryByProductRequest.cpp
  src/v20180709/model/DescribeCostSummaryByProjectResponse.cpp
  src/v20180709/model/DescribeDosageDetailByDateRequest.cpp
  src/v20180709/model/ProjectSummaryOverviewItem.cpp
  src/v20180709/model/ConditionRegion.cpp
  src/v20180709/model/DescribeBillSummaryByProductRequest.cpp
  src/v20180709/model/ConsumptionBusinessSummaryDataItem.cpp
  src/v20180709/model/DetailPoint.cpp
  src/v20180709/model/CostDetail.cpp
  src/v20180709/model/DescribeBillSummaryByPayModeResponse.cpp
  src/v20180709/model/BillResourceSummary.cpp
  src/v20180709/model/DescribeBillSummaryByTagRequest.cpp
  src/v20180709/model/Conditions.cpp
  src/v20180709/model/DescribeBillSummaryByProductResponse.cpp
  src/v20180709/model/BillTagInfo.cpp
  src/v20180709/model/DescribeBillSummaryByRegionResponse.cpp
  src/v20180709/model/DetailSet.cpp
  src/v20180709/model/BillTransactionInfo.cpp
  src/v20180709/model/RegionSummaryOverviewItem.cpp
  src/v20180709/model/ConsumptionResourceSummaryDataItem.cpp
  src/v20180709/model/DescribeAccountBalanceRequest.cpp
  src/v20180709/model/DescribeBillDetailRequest.cpp
  src/v20180709/model/ConsumptionProjectSummaryDataItem.cpp
  src/v20180709/model/DescribeCostSummaryByProductResponse.cpp
  src/v20180709/model/ProductInfo.cpp
  src/v20180709/model/DescribeDosageDetailByDateResponse.cpp
  src/v20180709/model/DescribeBillListResponse.cpp
  src/v20180709/model/DescribeAccountBalanceResponse.cpp
  src/v20180709/model/DescribeCostSummaryByRegionRequest.cpp
  src/v20180709/model/BusinessSummaryOverviewItem.cpp
  src/v20180709/model/BillDetailComponent.cpp
  src/v20180709/model/ConsumptionSummaryTrend.cpp
  src/v20180709/model/DescribeBillSummaryByRegionRequest.cpp
  src/v20180709/model/DescribeBillSummaryByPayModeRequest.cpp
  src/v20180709/model/DescribeCostSummaryByProjectRequest.cpp
  src/v20180709/model/ConsumptionRegionSummaryDataItem.cpp
  src/v20180709/model/DescribeBillResourceSummaryResponse.cpp
  src/v20180709/model/ActionSummaryOverviewItem.cpp
  src/v20180709/model/ConditionPayMode.cpp
  src/v20180709/model/DescribeDealsByCondRequest.cpp
  src/v20180709/model/DescribeBillResourceSummaryRequest.cpp
  src/v20180709/model/DescribeBillListRequest.cpp
  src/v20180709/model/PayDealsResponse.cpp
  src/v20180709/model/BillDetail.cpp
  src/v20180709/model/DescribeBillSummaryByTagResponse.cpp
  src/v20180709/model/TagSummaryOverviewItem.cpp
  src/v20180709/model/DescribeCostSummaryByResourceResponse.cpp
  src/v20180709/model/DescribeBillDetailResponse.cpp
  src/v20180709/model/ConsumptionResourceSummaryConditionValue.cpp
  src/v20180709/model/Deal.cpp
  src/v20180709/model/DescribeCostDetailRequest.cpp
  src/v20180709/model/DescribeDealsByCondResponse.cpp
  src/v20180709/model/ConditionProject.cpp
  src/v20180709/model/ConsumptionSummaryTotal.cpp
  src/v20180709/model/DescribeBillSummaryByProjectRequest.cpp
  src/v20180709/model/DescribeBillSummaryByProjectResponse.cpp
  src/v20180709/model/ConditionBusiness.cpp
  src/v20180709/model/DescribeCostSummaryByResourceRequest.cpp
  src/v20180709/model/DescribeCostDetailResponse.cpp
  src/v20180709/model/PayDealsRequest.cpp
  src/v20180709/model/PayModeSummaryOverviewItem.cpp
  src/v20180709/model/BusinessSummaryTotal.cpp
  src/v20180709/model/DescribeCostSummaryByRegionResponse.cpp
  )

set(billing_include
    include/tencentcloud/billing
  )

add_library(billing ${LIB_TYPE}
  ${billing_public_header}
  ${billing_public_header_model}
  ${billing_src})

set_target_properties(billing
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}billing
  )

target_include_directories(billing
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(billing
  core)

#install(FILES ${billing_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/billing/v20180709)
#install(FILES ${billing_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/billing/v20180709/model)
install(DIRECTORY ${billing_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS billing
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
