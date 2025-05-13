/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_BILLING_V20180709_BILLINGCLIENT_H_
#define TENCENTCLOUD_BILLING_V20180709_BILLINGCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/billing/v20180709/model/CreateAllocationRuleRequest.h>
#include <tencentcloud/billing/v20180709/model/CreateAllocationRuleResponse.h>
#include <tencentcloud/billing/v20180709/model/CreateAllocationTagRequest.h>
#include <tencentcloud/billing/v20180709/model/CreateAllocationTagResponse.h>
#include <tencentcloud/billing/v20180709/model/CreateAllocationUnitRequest.h>
#include <tencentcloud/billing/v20180709/model/CreateAllocationUnitResponse.h>
#include <tencentcloud/billing/v20180709/model/CreateGatherRuleRequest.h>
#include <tencentcloud/billing/v20180709/model/CreateGatherRuleResponse.h>
#include <tencentcloud/billing/v20180709/model/DeleteAllocationRuleRequest.h>
#include <tencentcloud/billing/v20180709/model/DeleteAllocationRuleResponse.h>
#include <tencentcloud/billing/v20180709/model/DeleteAllocationTagRequest.h>
#include <tencentcloud/billing/v20180709/model/DeleteAllocationTagResponse.h>
#include <tencentcloud/billing/v20180709/model/DeleteAllocationUnitRequest.h>
#include <tencentcloud/billing/v20180709/model/DeleteAllocationUnitResponse.h>
#include <tencentcloud/billing/v20180709/model/DeleteGatherRuleRequest.h>
#include <tencentcloud/billing/v20180709/model/DeleteGatherRuleResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeAccountBalanceRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeAccountBalanceResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeAllocateConditionsRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeAllocateConditionsResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeAllocationBillConditionsRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeAllocationBillConditionsResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeAllocationBillDetailRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeAllocationBillDetailResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeAllocationMonthOverviewRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeAllocationMonthOverviewResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeAllocationOverviewRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeAllocationOverviewResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeAllocationRuleDetailRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeAllocationRuleDetailResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeAllocationRuleSummaryRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeAllocationRuleSummaryResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeAllocationSummaryByBusinessRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeAllocationSummaryByBusinessResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeAllocationSummaryByItemRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeAllocationSummaryByItemResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeAllocationSummaryByResourceRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeAllocationSummaryByResourceResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeAllocationTreeRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeAllocationTreeResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeAllocationTrendByMonthRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeAllocationTrendByMonthResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeAllocationUnitDetailRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeAllocationUnitDetailResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillAdjustInfoRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillAdjustInfoResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillDetailRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillDetailResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillDetailForOrganizationRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillDetailForOrganizationResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillDownloadUrlRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillDownloadUrlResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillListRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillListResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillResourceSummaryRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillResourceSummaryResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillResourceSummaryForOrganizationRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillResourceSummaryForOrganizationResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillSummaryRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillSummaryResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillSummaryByPayModeRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillSummaryByPayModeResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillSummaryByProductRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillSummaryByProductResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillSummaryByProjectRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillSummaryByProjectResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillSummaryByRegionRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillSummaryByRegionResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillSummaryByTagRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillSummaryByTagResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillSummaryForOrganizationRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillSummaryForOrganizationResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeCostDetailRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeCostDetailResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeCostExplorerSummaryRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeCostExplorerSummaryResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeCostSummaryByProductRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeCostSummaryByProductResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeCostSummaryByProjectRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeCostSummaryByProjectResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeCostSummaryByRegionRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeCostSummaryByRegionResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeCostSummaryByResourceRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeCostSummaryByResourceResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeDealsByCondRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeDealsByCondResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeDosageCosDetailByDateRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeDosageCosDetailByDateResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeDosageDetailByDateRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeDosageDetailByDateResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeDosageDetailListRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeDosageDetailListResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeGatherResourceRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeGatherResourceResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeGatherRuleDetailRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeGatherRuleDetailResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeSavingPlanResourceInfoRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeSavingPlanResourceInfoResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeTagListRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeTagListResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeVoucherInfoRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeVoucherInfoResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeVoucherUsageDetailsRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeVoucherUsageDetailsResponse.h>
#include <tencentcloud/billing/v20180709/model/ModifyAllocationRuleRequest.h>
#include <tencentcloud/billing/v20180709/model/ModifyAllocationRuleResponse.h>
#include <tencentcloud/billing/v20180709/model/ModifyAllocationUnitRequest.h>
#include <tencentcloud/billing/v20180709/model/ModifyAllocationUnitResponse.h>
#include <tencentcloud/billing/v20180709/model/ModifyGatherRuleRequest.h>
#include <tencentcloud/billing/v20180709/model/ModifyGatherRuleResponse.h>
#include <tencentcloud/billing/v20180709/model/PayDealsRequest.h>
#include <tencentcloud/billing/v20180709/model/PayDealsResponse.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            class BillingClient : public AbstractClient
            {
            public:
                BillingClient(const Credential &credential, const std::string &region);
                BillingClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateAllocationRuleResponse> CreateAllocationRuleOutcome;
                typedef std::future<CreateAllocationRuleOutcome> CreateAllocationRuleOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::CreateAllocationRuleRequest&, CreateAllocationRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAllocationRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAllocationTagResponse> CreateAllocationTagOutcome;
                typedef std::future<CreateAllocationTagOutcome> CreateAllocationTagOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::CreateAllocationTagRequest&, CreateAllocationTagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAllocationTagAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAllocationUnitResponse> CreateAllocationUnitOutcome;
                typedef std::future<CreateAllocationUnitOutcome> CreateAllocationUnitOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::CreateAllocationUnitRequest&, CreateAllocationUnitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAllocationUnitAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateGatherRuleResponse> CreateGatherRuleOutcome;
                typedef std::future<CreateGatherRuleOutcome> CreateGatherRuleOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::CreateGatherRuleRequest&, CreateGatherRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGatherRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAllocationRuleResponse> DeleteAllocationRuleOutcome;
                typedef std::future<DeleteAllocationRuleOutcome> DeleteAllocationRuleOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DeleteAllocationRuleRequest&, DeleteAllocationRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAllocationRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAllocationTagResponse> DeleteAllocationTagOutcome;
                typedef std::future<DeleteAllocationTagOutcome> DeleteAllocationTagOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DeleteAllocationTagRequest&, DeleteAllocationTagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAllocationTagAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAllocationUnitResponse> DeleteAllocationUnitOutcome;
                typedef std::future<DeleteAllocationUnitOutcome> DeleteAllocationUnitOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DeleteAllocationUnitRequest&, DeleteAllocationUnitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAllocationUnitAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteGatherRuleResponse> DeleteGatherRuleOutcome;
                typedef std::future<DeleteGatherRuleOutcome> DeleteGatherRuleOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DeleteGatherRuleRequest&, DeleteGatherRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGatherRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccountBalanceResponse> DescribeAccountBalanceOutcome;
                typedef std::future<DescribeAccountBalanceOutcome> DescribeAccountBalanceOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeAccountBalanceRequest&, DescribeAccountBalanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountBalanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAllocateConditionsResponse> DescribeAllocateConditionsOutcome;
                typedef std::future<DescribeAllocateConditionsOutcome> DescribeAllocateConditionsOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeAllocateConditionsRequest&, DescribeAllocateConditionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllocateConditionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAllocationBillConditionsResponse> DescribeAllocationBillConditionsOutcome;
                typedef std::future<DescribeAllocationBillConditionsOutcome> DescribeAllocationBillConditionsOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeAllocationBillConditionsRequest&, DescribeAllocationBillConditionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllocationBillConditionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAllocationBillDetailResponse> DescribeAllocationBillDetailOutcome;
                typedef std::future<DescribeAllocationBillDetailOutcome> DescribeAllocationBillDetailOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeAllocationBillDetailRequest&, DescribeAllocationBillDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllocationBillDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAllocationMonthOverviewResponse> DescribeAllocationMonthOverviewOutcome;
                typedef std::future<DescribeAllocationMonthOverviewOutcome> DescribeAllocationMonthOverviewOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeAllocationMonthOverviewRequest&, DescribeAllocationMonthOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllocationMonthOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAllocationOverviewResponse> DescribeAllocationOverviewOutcome;
                typedef std::future<DescribeAllocationOverviewOutcome> DescribeAllocationOverviewOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeAllocationOverviewRequest&, DescribeAllocationOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllocationOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAllocationRuleDetailResponse> DescribeAllocationRuleDetailOutcome;
                typedef std::future<DescribeAllocationRuleDetailOutcome> DescribeAllocationRuleDetailOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeAllocationRuleDetailRequest&, DescribeAllocationRuleDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllocationRuleDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAllocationRuleSummaryResponse> DescribeAllocationRuleSummaryOutcome;
                typedef std::future<DescribeAllocationRuleSummaryOutcome> DescribeAllocationRuleSummaryOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeAllocationRuleSummaryRequest&, DescribeAllocationRuleSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllocationRuleSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAllocationSummaryByBusinessResponse> DescribeAllocationSummaryByBusinessOutcome;
                typedef std::future<DescribeAllocationSummaryByBusinessOutcome> DescribeAllocationSummaryByBusinessOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeAllocationSummaryByBusinessRequest&, DescribeAllocationSummaryByBusinessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllocationSummaryByBusinessAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAllocationSummaryByItemResponse> DescribeAllocationSummaryByItemOutcome;
                typedef std::future<DescribeAllocationSummaryByItemOutcome> DescribeAllocationSummaryByItemOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeAllocationSummaryByItemRequest&, DescribeAllocationSummaryByItemOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllocationSummaryByItemAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAllocationSummaryByResourceResponse> DescribeAllocationSummaryByResourceOutcome;
                typedef std::future<DescribeAllocationSummaryByResourceOutcome> DescribeAllocationSummaryByResourceOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeAllocationSummaryByResourceRequest&, DescribeAllocationSummaryByResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllocationSummaryByResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAllocationTreeResponse> DescribeAllocationTreeOutcome;
                typedef std::future<DescribeAllocationTreeOutcome> DescribeAllocationTreeOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeAllocationTreeRequest&, DescribeAllocationTreeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllocationTreeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAllocationTrendByMonthResponse> DescribeAllocationTrendByMonthOutcome;
                typedef std::future<DescribeAllocationTrendByMonthOutcome> DescribeAllocationTrendByMonthOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeAllocationTrendByMonthRequest&, DescribeAllocationTrendByMonthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllocationTrendByMonthAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAllocationUnitDetailResponse> DescribeAllocationUnitDetailOutcome;
                typedef std::future<DescribeAllocationUnitDetailOutcome> DescribeAllocationUnitDetailOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeAllocationUnitDetailRequest&, DescribeAllocationUnitDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllocationUnitDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillAdjustInfoResponse> DescribeBillAdjustInfoOutcome;
                typedef std::future<DescribeBillAdjustInfoOutcome> DescribeBillAdjustInfoOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeBillAdjustInfoRequest&, DescribeBillAdjustInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillAdjustInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillDetailResponse> DescribeBillDetailOutcome;
                typedef std::future<DescribeBillDetailOutcome> DescribeBillDetailOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeBillDetailRequest&, DescribeBillDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillDetailForOrganizationResponse> DescribeBillDetailForOrganizationOutcome;
                typedef std::future<DescribeBillDetailForOrganizationOutcome> DescribeBillDetailForOrganizationOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeBillDetailForOrganizationRequest&, DescribeBillDetailForOrganizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillDetailForOrganizationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillDownloadUrlResponse> DescribeBillDownloadUrlOutcome;
                typedef std::future<DescribeBillDownloadUrlOutcome> DescribeBillDownloadUrlOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeBillDownloadUrlRequest&, DescribeBillDownloadUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillDownloadUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillListResponse> DescribeBillListOutcome;
                typedef std::future<DescribeBillListOutcome> DescribeBillListOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeBillListRequest&, DescribeBillListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillResourceSummaryResponse> DescribeBillResourceSummaryOutcome;
                typedef std::future<DescribeBillResourceSummaryOutcome> DescribeBillResourceSummaryOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeBillResourceSummaryRequest&, DescribeBillResourceSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillResourceSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillResourceSummaryForOrganizationResponse> DescribeBillResourceSummaryForOrganizationOutcome;
                typedef std::future<DescribeBillResourceSummaryForOrganizationOutcome> DescribeBillResourceSummaryForOrganizationOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeBillResourceSummaryForOrganizationRequest&, DescribeBillResourceSummaryForOrganizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillResourceSummaryForOrganizationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillSummaryResponse> DescribeBillSummaryOutcome;
                typedef std::future<DescribeBillSummaryOutcome> DescribeBillSummaryOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeBillSummaryRequest&, DescribeBillSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillSummaryByPayModeResponse> DescribeBillSummaryByPayModeOutcome;
                typedef std::future<DescribeBillSummaryByPayModeOutcome> DescribeBillSummaryByPayModeOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeBillSummaryByPayModeRequest&, DescribeBillSummaryByPayModeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillSummaryByPayModeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillSummaryByProductResponse> DescribeBillSummaryByProductOutcome;
                typedef std::future<DescribeBillSummaryByProductOutcome> DescribeBillSummaryByProductOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeBillSummaryByProductRequest&, DescribeBillSummaryByProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillSummaryByProductAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillSummaryByProjectResponse> DescribeBillSummaryByProjectOutcome;
                typedef std::future<DescribeBillSummaryByProjectOutcome> DescribeBillSummaryByProjectOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeBillSummaryByProjectRequest&, DescribeBillSummaryByProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillSummaryByProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillSummaryByRegionResponse> DescribeBillSummaryByRegionOutcome;
                typedef std::future<DescribeBillSummaryByRegionOutcome> DescribeBillSummaryByRegionOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeBillSummaryByRegionRequest&, DescribeBillSummaryByRegionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillSummaryByRegionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillSummaryByTagResponse> DescribeBillSummaryByTagOutcome;
                typedef std::future<DescribeBillSummaryByTagOutcome> DescribeBillSummaryByTagOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeBillSummaryByTagRequest&, DescribeBillSummaryByTagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillSummaryByTagAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillSummaryForOrganizationResponse> DescribeBillSummaryForOrganizationOutcome;
                typedef std::future<DescribeBillSummaryForOrganizationOutcome> DescribeBillSummaryForOrganizationOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeBillSummaryForOrganizationRequest&, DescribeBillSummaryForOrganizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillSummaryForOrganizationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCostDetailResponse> DescribeCostDetailOutcome;
                typedef std::future<DescribeCostDetailOutcome> DescribeCostDetailOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeCostDetailRequest&, DescribeCostDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCostDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCostExplorerSummaryResponse> DescribeCostExplorerSummaryOutcome;
                typedef std::future<DescribeCostExplorerSummaryOutcome> DescribeCostExplorerSummaryOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeCostExplorerSummaryRequest&, DescribeCostExplorerSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCostExplorerSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCostSummaryByProductResponse> DescribeCostSummaryByProductOutcome;
                typedef std::future<DescribeCostSummaryByProductOutcome> DescribeCostSummaryByProductOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeCostSummaryByProductRequest&, DescribeCostSummaryByProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCostSummaryByProductAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCostSummaryByProjectResponse> DescribeCostSummaryByProjectOutcome;
                typedef std::future<DescribeCostSummaryByProjectOutcome> DescribeCostSummaryByProjectOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeCostSummaryByProjectRequest&, DescribeCostSummaryByProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCostSummaryByProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCostSummaryByRegionResponse> DescribeCostSummaryByRegionOutcome;
                typedef std::future<DescribeCostSummaryByRegionOutcome> DescribeCostSummaryByRegionOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeCostSummaryByRegionRequest&, DescribeCostSummaryByRegionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCostSummaryByRegionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCostSummaryByResourceResponse> DescribeCostSummaryByResourceOutcome;
                typedef std::future<DescribeCostSummaryByResourceOutcome> DescribeCostSummaryByResourceOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeCostSummaryByResourceRequest&, DescribeCostSummaryByResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCostSummaryByResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDealsByCondResponse> DescribeDealsByCondOutcome;
                typedef std::future<DescribeDealsByCondOutcome> DescribeDealsByCondOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeDealsByCondRequest&, DescribeDealsByCondOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDealsByCondAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDosageCosDetailByDateResponse> DescribeDosageCosDetailByDateOutcome;
                typedef std::future<DescribeDosageCosDetailByDateOutcome> DescribeDosageCosDetailByDateOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeDosageCosDetailByDateRequest&, DescribeDosageCosDetailByDateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDosageCosDetailByDateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDosageDetailByDateResponse> DescribeDosageDetailByDateOutcome;
                typedef std::future<DescribeDosageDetailByDateOutcome> DescribeDosageDetailByDateOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeDosageDetailByDateRequest&, DescribeDosageDetailByDateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDosageDetailByDateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDosageDetailListResponse> DescribeDosageDetailListOutcome;
                typedef std::future<DescribeDosageDetailListOutcome> DescribeDosageDetailListOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeDosageDetailListRequest&, DescribeDosageDetailListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDosageDetailListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGatherResourceResponse> DescribeGatherResourceOutcome;
                typedef std::future<DescribeGatherResourceOutcome> DescribeGatherResourceOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeGatherResourceRequest&, DescribeGatherResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatherResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGatherRuleDetailResponse> DescribeGatherRuleDetailOutcome;
                typedef std::future<DescribeGatherRuleDetailOutcome> DescribeGatherRuleDetailOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeGatherRuleDetailRequest&, DescribeGatherRuleDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatherRuleDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSavingPlanResourceInfoResponse> DescribeSavingPlanResourceInfoOutcome;
                typedef std::future<DescribeSavingPlanResourceInfoOutcome> DescribeSavingPlanResourceInfoOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeSavingPlanResourceInfoRequest&, DescribeSavingPlanResourceInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSavingPlanResourceInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTagListResponse> DescribeTagListOutcome;
                typedef std::future<DescribeTagListOutcome> DescribeTagListOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeTagListRequest&, DescribeTagListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVoucherInfoResponse> DescribeVoucherInfoOutcome;
                typedef std::future<DescribeVoucherInfoOutcome> DescribeVoucherInfoOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeVoucherInfoRequest&, DescribeVoucherInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVoucherInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVoucherUsageDetailsResponse> DescribeVoucherUsageDetailsOutcome;
                typedef std::future<DescribeVoucherUsageDetailsOutcome> DescribeVoucherUsageDetailsOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeVoucherUsageDetailsRequest&, DescribeVoucherUsageDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVoucherUsageDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAllocationRuleResponse> ModifyAllocationRuleOutcome;
                typedef std::future<ModifyAllocationRuleOutcome> ModifyAllocationRuleOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::ModifyAllocationRuleRequest&, ModifyAllocationRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAllocationRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAllocationUnitResponse> ModifyAllocationUnitOutcome;
                typedef std::future<ModifyAllocationUnitOutcome> ModifyAllocationUnitOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::ModifyAllocationUnitRequest&, ModifyAllocationUnitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAllocationUnitAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyGatherRuleResponse> ModifyGatherRuleOutcome;
                typedef std::future<ModifyGatherRuleOutcome> ModifyGatherRuleOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::ModifyGatherRuleRequest&, ModifyGatherRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGatherRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::PayDealsResponse> PayDealsOutcome;
                typedef std::future<PayDealsOutcome> PayDealsOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::PayDealsRequest&, PayDealsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PayDealsAsyncHandler;



                /**
                 *创建公摊规则
                 * @param req CreateAllocationRuleRequest
                 * @return CreateAllocationRuleOutcome
                 */
                CreateAllocationRuleOutcome CreateAllocationRule(const Model::CreateAllocationRuleRequest &request);
                void CreateAllocationRuleAsync(const Model::CreateAllocationRuleRequest& request, const CreateAllocationRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAllocationRuleOutcomeCallable CreateAllocationRuleCallable(const Model::CreateAllocationRuleRequest& request);

                /**
                 *批量设置分账标签
                 * @param req CreateAllocationTagRequest
                 * @return CreateAllocationTagOutcome
                 */
                CreateAllocationTagOutcome CreateAllocationTag(const Model::CreateAllocationTagRequest &request);
                void CreateAllocationTagAsync(const Model::CreateAllocationTagRequest& request, const CreateAllocationTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAllocationTagOutcomeCallable CreateAllocationTagCallable(const Model::CreateAllocationTagRequest& request);

                /**
                 *创建分账单元
                 * @param req CreateAllocationUnitRequest
                 * @return CreateAllocationUnitOutcome
                 */
                CreateAllocationUnitOutcome CreateAllocationUnit(const Model::CreateAllocationUnitRequest &request);
                void CreateAllocationUnitAsync(const Model::CreateAllocationUnitRequest& request, const CreateAllocationUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAllocationUnitOutcomeCallable CreateAllocationUnitCallable(const Model::CreateAllocationUnitRequest& request);

                /**
                 *创建归集规则
                 * @param req CreateGatherRuleRequest
                 * @return CreateGatherRuleOutcome
                 */
                CreateGatherRuleOutcome CreateGatherRule(const Model::CreateGatherRuleRequest &request);
                void CreateGatherRuleAsync(const Model::CreateGatherRuleRequest& request, const CreateGatherRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGatherRuleOutcomeCallable CreateGatherRuleCallable(const Model::CreateGatherRuleRequest& request);

                /**
                 *公摊规则删除接口
                 * @param req DeleteAllocationRuleRequest
                 * @return DeleteAllocationRuleOutcome
                 */
                DeleteAllocationRuleOutcome DeleteAllocationRule(const Model::DeleteAllocationRuleRequest &request);
                void DeleteAllocationRuleAsync(const Model::DeleteAllocationRuleRequest& request, const DeleteAllocationRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAllocationRuleOutcomeCallable DeleteAllocationRuleCallable(const Model::DeleteAllocationRuleRequest& request);

                /**
                 *批量取消设置分账标签
                 * @param req DeleteAllocationTagRequest
                 * @return DeleteAllocationTagOutcome
                 */
                DeleteAllocationTagOutcome DeleteAllocationTag(const Model::DeleteAllocationTagRequest &request);
                void DeleteAllocationTagAsync(const Model::DeleteAllocationTagRequest& request, const DeleteAllocationTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAllocationTagOutcomeCallable DeleteAllocationTagCallable(const Model::DeleteAllocationTagRequest& request);

                /**
                 *删除分账单元
                 * @param req DeleteAllocationUnitRequest
                 * @return DeleteAllocationUnitOutcome
                 */
                DeleteAllocationUnitOutcome DeleteAllocationUnit(const Model::DeleteAllocationUnitRequest &request);
                void DeleteAllocationUnitAsync(const Model::DeleteAllocationUnitRequest& request, const DeleteAllocationUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAllocationUnitOutcomeCallable DeleteAllocationUnitCallable(const Model::DeleteAllocationUnitRequest& request);

                /**
                 *删除归集规则
                 * @param req DeleteGatherRuleRequest
                 * @return DeleteGatherRuleOutcome
                 */
                DeleteGatherRuleOutcome DeleteGatherRule(const Model::DeleteGatherRuleRequest &request);
                void DeleteGatherRuleAsync(const Model::DeleteGatherRuleRequest& request, const DeleteGatherRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteGatherRuleOutcomeCallable DeleteGatherRuleCallable(const Model::DeleteGatherRuleRequest& request);

                /**
                 *获取云账户余额信息。
                 * @param req DescribeAccountBalanceRequest
                 * @return DescribeAccountBalanceOutcome
                 */
                DescribeAccountBalanceOutcome DescribeAccountBalance(const Model::DescribeAccountBalanceRequest &request);
                void DescribeAccountBalanceAsync(const Model::DescribeAccountBalanceRequest& request, const DescribeAccountBalanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountBalanceOutcomeCallable DescribeAccountBalanceCallable(const Model::DescribeAccountBalanceRequest& request);

                /**
                 *查询资源目录筛选条件
                 * @param req DescribeAllocateConditionsRequest
                 * @return DescribeAllocateConditionsOutcome
                 */
                DescribeAllocateConditionsOutcome DescribeAllocateConditions(const Model::DescribeAllocateConditionsRequest &request);
                void DescribeAllocateConditionsAsync(const Model::DescribeAllocateConditionsRequest& request, const DescribeAllocateConditionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAllocateConditionsOutcomeCallable DescribeAllocateConditionsCallable(const Model::DescribeAllocateConditionsRequest& request);

                /**
                 *查询分账账单筛选条件
                 * @param req DescribeAllocationBillConditionsRequest
                 * @return DescribeAllocationBillConditionsOutcome
                 */
                DescribeAllocationBillConditionsOutcome DescribeAllocationBillConditions(const Model::DescribeAllocationBillConditionsRequest &request);
                void DescribeAllocationBillConditionsAsync(const Model::DescribeAllocationBillConditionsRequest& request, const DescribeAllocationBillConditionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAllocationBillConditionsOutcomeCallable DescribeAllocationBillConditionsCallable(const Model::DescribeAllocationBillConditionsRequest& request);

                /**
                 *查询分账账单明细
                 * @param req DescribeAllocationBillDetailRequest
                 * @return DescribeAllocationBillDetailOutcome
                 */
                DescribeAllocationBillDetailOutcome DescribeAllocationBillDetail(const Model::DescribeAllocationBillDetailRequest &request);
                void DescribeAllocationBillDetailAsync(const Model::DescribeAllocationBillDetailRequest& request, const DescribeAllocationBillDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAllocationBillDetailOutcomeCallable DescribeAllocationBillDetailCallable(const Model::DescribeAllocationBillDetailRequest& request);

                /**
                 *查询分账账单月概览
                 * @param req DescribeAllocationMonthOverviewRequest
                 * @return DescribeAllocationMonthOverviewOutcome
                 */
                DescribeAllocationMonthOverviewOutcome DescribeAllocationMonthOverview(const Model::DescribeAllocationMonthOverviewRequest &request);
                void DescribeAllocationMonthOverviewAsync(const Model::DescribeAllocationMonthOverviewRequest& request, const DescribeAllocationMonthOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAllocationMonthOverviewOutcomeCallable DescribeAllocationMonthOverviewCallable(const Model::DescribeAllocationMonthOverviewRequest& request);

                /**
                 *查询分账账单日概览
                 * @param req DescribeAllocationOverviewRequest
                 * @return DescribeAllocationOverviewOutcome
                 */
                DescribeAllocationOverviewOutcome DescribeAllocationOverview(const Model::DescribeAllocationOverviewRequest &request);
                void DescribeAllocationOverviewAsync(const Model::DescribeAllocationOverviewRequest& request, const DescribeAllocationOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAllocationOverviewOutcomeCallable DescribeAllocationOverviewCallable(const Model::DescribeAllocationOverviewRequest& request);

                /**
                 *查询公摊规则详情
                 * @param req DescribeAllocationRuleDetailRequest
                 * @return DescribeAllocationRuleDetailOutcome
                 */
                DescribeAllocationRuleDetailOutcome DescribeAllocationRuleDetail(const Model::DescribeAllocationRuleDetailRequest &request);
                void DescribeAllocationRuleDetailAsync(const Model::DescribeAllocationRuleDetailRequest& request, const DescribeAllocationRuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAllocationRuleDetailOutcomeCallable DescribeAllocationRuleDetailCallable(const Model::DescribeAllocationRuleDetailRequest& request);

                /**
                 *查询所有公摊规则概览
                 * @param req DescribeAllocationRuleSummaryRequest
                 * @return DescribeAllocationRuleSummaryOutcome
                 */
                DescribeAllocationRuleSummaryOutcome DescribeAllocationRuleSummary(const Model::DescribeAllocationRuleSummaryRequest &request);
                void DescribeAllocationRuleSummaryAsync(const Model::DescribeAllocationRuleSummaryRequest& request, const DescribeAllocationRuleSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAllocationRuleSummaryOutcomeCallable DescribeAllocationRuleSummaryCallable(const Model::DescribeAllocationRuleSummaryRequest& request);

                /**
                 *查询分账账单按产品汇总
                 * @param req DescribeAllocationSummaryByBusinessRequest
                 * @return DescribeAllocationSummaryByBusinessOutcome
                 */
                DescribeAllocationSummaryByBusinessOutcome DescribeAllocationSummaryByBusiness(const Model::DescribeAllocationSummaryByBusinessRequest &request);
                void DescribeAllocationSummaryByBusinessAsync(const Model::DescribeAllocationSummaryByBusinessRequest& request, const DescribeAllocationSummaryByBusinessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAllocationSummaryByBusinessOutcomeCallable DescribeAllocationSummaryByBusinessCallable(const Model::DescribeAllocationSummaryByBusinessRequest& request);

                /**
                 *查询分账账单按组件汇总
                 * @param req DescribeAllocationSummaryByItemRequest
                 * @return DescribeAllocationSummaryByItemOutcome
                 */
                DescribeAllocationSummaryByItemOutcome DescribeAllocationSummaryByItem(const Model::DescribeAllocationSummaryByItemRequest &request);
                void DescribeAllocationSummaryByItemAsync(const Model::DescribeAllocationSummaryByItemRequest& request, const DescribeAllocationSummaryByItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAllocationSummaryByItemOutcomeCallable DescribeAllocationSummaryByItemCallable(const Model::DescribeAllocationSummaryByItemRequest& request);

                /**
                 *查询分账账单按资源汇总
                 * @param req DescribeAllocationSummaryByResourceRequest
                 * @return DescribeAllocationSummaryByResourceOutcome
                 */
                DescribeAllocationSummaryByResourceOutcome DescribeAllocationSummaryByResource(const Model::DescribeAllocationSummaryByResourceRequest &request);
                void DescribeAllocationSummaryByResourceAsync(const Model::DescribeAllocationSummaryByResourceRequest& request, const DescribeAllocationSummaryByResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAllocationSummaryByResourceOutcomeCallable DescribeAllocationSummaryByResourceCallable(const Model::DescribeAllocationSummaryByResourceRequest& request);

                /**
                 *查询分账目录树
                 * @param req DescribeAllocationTreeRequest
                 * @return DescribeAllocationTreeOutcome
                 */
                DescribeAllocationTreeOutcome DescribeAllocationTree(const Model::DescribeAllocationTreeRequest &request);
                void DescribeAllocationTreeAsync(const Model::DescribeAllocationTreeRequest& request, const DescribeAllocationTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAllocationTreeOutcomeCallable DescribeAllocationTreeCallable(const Model::DescribeAllocationTreeRequest& request);

                /**
                 *查询分账账单费用趋势
                 * @param req DescribeAllocationTrendByMonthRequest
                 * @return DescribeAllocationTrendByMonthOutcome
                 */
                DescribeAllocationTrendByMonthOutcome DescribeAllocationTrendByMonth(const Model::DescribeAllocationTrendByMonthRequest &request);
                void DescribeAllocationTrendByMonthAsync(const Model::DescribeAllocationTrendByMonthRequest& request, const DescribeAllocationTrendByMonthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAllocationTrendByMonthOutcomeCallable DescribeAllocationTrendByMonthCallable(const Model::DescribeAllocationTrendByMonthRequest& request);

                /**
                 *查询分账单元详情
                 * @param req DescribeAllocationUnitDetailRequest
                 * @return DescribeAllocationUnitDetailOutcome
                 */
                DescribeAllocationUnitDetailOutcome DescribeAllocationUnitDetail(const Model::DescribeAllocationUnitDetailRequest &request);
                void DescribeAllocationUnitDetailAsync(const Model::DescribeAllocationUnitDetailRequest& request, const DescribeAllocationUnitDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAllocationUnitDetailOutcomeCallable DescribeAllocationUnitDetailCallable(const Model::DescribeAllocationUnitDetailRequest& request);

                /**
                 *可以通过API获取当前UIN是否有调账，客户可以更快地主动地获取调账情况。
                 * @param req DescribeBillAdjustInfoRequest
                 * @return DescribeBillAdjustInfoOutcome
                 */
                DescribeBillAdjustInfoOutcome DescribeBillAdjustInfo(const Model::DescribeBillAdjustInfoRequest &request);
                void DescribeBillAdjustInfoAsync(const Model::DescribeBillAdjustInfoRequest& request, const DescribeBillAdjustInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillAdjustInfoOutcomeCallable DescribeBillAdjustInfoCallable(const Model::DescribeBillAdjustInfoRequest& request);

                /**
                 *获取账单明细数据。
注意事项：
1.在请求接口时，由于网络不稳定或其它异常，可能会导致请求失败。如果您遇到这种情况，我们建议您在接口请求失败时，手动发起重试操作，这样可以更好地确保您的接口请求能够成功执行。
2.对于账单明细数据量级很大（例如每月账单明细量级超过20w）的客户，通过 API 调用账单数据效率较低，建议您开通账单数据存储功能，通过存储桶中获取账单文件进行分析。[账单存储至COS桶](https://cloud.tencent.com/document/product/555/61275)
                 * @param req DescribeBillDetailRequest
                 * @return DescribeBillDetailOutcome
                 */
                DescribeBillDetailOutcome DescribeBillDetail(const Model::DescribeBillDetailRequest &request);
                void DescribeBillDetailAsync(const Model::DescribeBillDetailRequest& request, const DescribeBillDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillDetailOutcomeCallable DescribeBillDetailCallable(const Model::DescribeBillDetailRequest& request);

                /**
                 *成员账号获取管理账号代付账单（费用明细）。
注意事项：在请求接口时，由于网络不稳定或其它异常，可能会导致请求失败。如果您遇到这种情况，我们建议您在接口请求失败时，手动发起重试操作，这样可以更好地确保您的接口请求能够成功执行。
                 * @param req DescribeBillDetailForOrganizationRequest
                 * @return DescribeBillDetailForOrganizationOutcome
                 */
                DescribeBillDetailForOrganizationOutcome DescribeBillDetailForOrganization(const Model::DescribeBillDetailForOrganizationRequest &request);
                void DescribeBillDetailForOrganizationAsync(const Model::DescribeBillDetailForOrganizationRequest& request, const DescribeBillDetailForOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillDetailForOrganizationOutcomeCallable DescribeBillDetailForOrganizationCallable(const Model::DescribeBillDetailForOrganizationRequest& request);

                /**
                 *该接口支持通过传参，获取L0-PDF、L1-汇总、L2-资源、L3-明细、账单包、五类账单文件下载链接
                 * @param req DescribeBillDownloadUrlRequest
                 * @return DescribeBillDownloadUrlOutcome
                 */
                DescribeBillDownloadUrlOutcome DescribeBillDownloadUrl(const Model::DescribeBillDownloadUrlRequest &request);
                void DescribeBillDownloadUrlAsync(const Model::DescribeBillDownloadUrlRequest& request, const DescribeBillDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillDownloadUrlOutcomeCallable DescribeBillDownloadUrlCallable(const Model::DescribeBillDownloadUrlRequest& request);

                /**
                 *获取收支明细列表，支持翻页和参数过滤
                 * @param req DescribeBillListRequest
                 * @return DescribeBillListOutcome
                 */
                DescribeBillListOutcome DescribeBillList(const Model::DescribeBillListRequest &request);
                void DescribeBillListAsync(const Model::DescribeBillListRequest& request, const DescribeBillListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillListOutcomeCallable DescribeBillListCallable(const Model::DescribeBillListRequest& request);

                /**
                 *获取账单资源汇总数据
                 * @param req DescribeBillResourceSummaryRequest
                 * @return DescribeBillResourceSummaryOutcome
                 */
                DescribeBillResourceSummaryOutcome DescribeBillResourceSummary(const Model::DescribeBillResourceSummaryRequest &request);
                void DescribeBillResourceSummaryAsync(const Model::DescribeBillResourceSummaryRequest& request, const DescribeBillResourceSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillResourceSummaryOutcomeCallable DescribeBillResourceSummaryCallable(const Model::DescribeBillResourceSummaryRequest& request);

                /**
                 *成员账号获取管理账号代付账单（按资源汇总）
                 * @param req DescribeBillResourceSummaryForOrganizationRequest
                 * @return DescribeBillResourceSummaryForOrganizationOutcome
                 */
                DescribeBillResourceSummaryForOrganizationOutcome DescribeBillResourceSummaryForOrganization(const Model::DescribeBillResourceSummaryForOrganizationRequest &request);
                void DescribeBillResourceSummaryForOrganizationAsync(const Model::DescribeBillResourceSummaryForOrganizationRequest& request, const DescribeBillResourceSummaryForOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillResourceSummaryForOrganizationOutcomeCallable DescribeBillResourceSummaryForOrganizationCallable(const Model::DescribeBillResourceSummaryForOrganizationRequest& request);

                /**
                 *该接口支持通过传参，按照产品、项目、地域、计费模式和标签五个维度获取账单费用明细。
                 * @param req DescribeBillSummaryRequest
                 * @return DescribeBillSummaryOutcome
                 */
                DescribeBillSummaryOutcome DescribeBillSummary(const Model::DescribeBillSummaryRequest &request);
                void DescribeBillSummaryAsync(const Model::DescribeBillSummaryRequest& request, const DescribeBillSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillSummaryOutcomeCallable DescribeBillSummaryCallable(const Model::DescribeBillSummaryRequest& request);

                /**
                 *获取按计费模式汇总费用分布
                 * @param req DescribeBillSummaryByPayModeRequest
                 * @return DescribeBillSummaryByPayModeOutcome
                 */
                DescribeBillSummaryByPayModeOutcome DescribeBillSummaryByPayMode(const Model::DescribeBillSummaryByPayModeRequest &request);
                void DescribeBillSummaryByPayModeAsync(const Model::DescribeBillSummaryByPayModeRequest& request, const DescribeBillSummaryByPayModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillSummaryByPayModeOutcomeCallable DescribeBillSummaryByPayModeCallable(const Model::DescribeBillSummaryByPayModeRequest& request);

                /**
                 *获取产品汇总费用分布
                 * @param req DescribeBillSummaryByProductRequest
                 * @return DescribeBillSummaryByProductOutcome
                 */
                DescribeBillSummaryByProductOutcome DescribeBillSummaryByProduct(const Model::DescribeBillSummaryByProductRequest &request);
                void DescribeBillSummaryByProductAsync(const Model::DescribeBillSummaryByProductRequest& request, const DescribeBillSummaryByProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillSummaryByProductOutcomeCallable DescribeBillSummaryByProductCallable(const Model::DescribeBillSummaryByProductRequest& request);

                /**
                 *获取按项目汇总费用分布
                 * @param req DescribeBillSummaryByProjectRequest
                 * @return DescribeBillSummaryByProjectOutcome
                 */
                DescribeBillSummaryByProjectOutcome DescribeBillSummaryByProject(const Model::DescribeBillSummaryByProjectRequest &request);
                void DescribeBillSummaryByProjectAsync(const Model::DescribeBillSummaryByProjectRequest& request, const DescribeBillSummaryByProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillSummaryByProjectOutcomeCallable DescribeBillSummaryByProjectCallable(const Model::DescribeBillSummaryByProjectRequest& request);

                /**
                 *获取按地域汇总费用分布
                 * @param req DescribeBillSummaryByRegionRequest
                 * @return DescribeBillSummaryByRegionOutcome
                 */
                DescribeBillSummaryByRegionOutcome DescribeBillSummaryByRegion(const Model::DescribeBillSummaryByRegionRequest &request);
                void DescribeBillSummaryByRegionAsync(const Model::DescribeBillSummaryByRegionRequest& request, const DescribeBillSummaryByRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillSummaryByRegionOutcomeCallable DescribeBillSummaryByRegionCallable(const Model::DescribeBillSummaryByRegionRequest& request);

                /**
                 *获取按标签汇总费用分布
                 * @param req DescribeBillSummaryByTagRequest
                 * @return DescribeBillSummaryByTagOutcome
                 */
                DescribeBillSummaryByTagOutcome DescribeBillSummaryByTag(const Model::DescribeBillSummaryByTagRequest &request);
                void DescribeBillSummaryByTagAsync(const Model::DescribeBillSummaryByTagRequest& request, const DescribeBillSummaryByTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillSummaryByTagOutcomeCallable DescribeBillSummaryByTagCallable(const Model::DescribeBillSummaryByTagRequest& request);

                /**
                 *该接口支持通过传参，按照产品、项目、地域、计费模式和标签五个维度获取账单费用明细。
                 * @param req DescribeBillSummaryForOrganizationRequest
                 * @return DescribeBillSummaryForOrganizationOutcome
                 */
                DescribeBillSummaryForOrganizationOutcome DescribeBillSummaryForOrganization(const Model::DescribeBillSummaryForOrganizationRequest &request);
                void DescribeBillSummaryForOrganizationAsync(const Model::DescribeBillSummaryForOrganizationRequest& request, const DescribeBillSummaryForOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillSummaryForOrganizationOutcomeCallable DescribeBillSummaryForOrganizationCallable(const Model::DescribeBillSummaryForOrganizationRequest& request);

                /**
                 *查询消耗明细

注意事项：
1. 对于消耗明细数据量级很大（例如每月消耗明细量级超过100w）的客户，通过 API 调用明细数据会有超时风险，建议您开通消耗账单数据存储功能，通过存储桶中获取账单文件进行分析。[账单存储至COS桶](https://cloud.tencent.com/document/product/555/61275)
                 * @param req DescribeCostDetailRequest
                 * @return DescribeCostDetailOutcome
                 */
                DescribeCostDetailOutcome DescribeCostDetail(const Model::DescribeCostDetailRequest &request);
                void DescribeCostDetailAsync(const Model::DescribeCostDetailRequest& request, const DescribeCostDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCostDetailOutcomeCallable DescribeCostDetailCallable(const Model::DescribeCostDetailRequest& request);

                /**
                 *查看成本分析明细
                 * @param req DescribeCostExplorerSummaryRequest
                 * @return DescribeCostExplorerSummaryOutcome
                 */
                DescribeCostExplorerSummaryOutcome DescribeCostExplorerSummary(const Model::DescribeCostExplorerSummaryRequest &request);
                void DescribeCostExplorerSummaryAsync(const Model::DescribeCostExplorerSummaryRequest& request, const DescribeCostExplorerSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCostExplorerSummaryOutcomeCallable DescribeCostExplorerSummaryCallable(const Model::DescribeCostExplorerSummaryRequest& request);

                /**
                 *获取按产品汇总消耗详情
                 * @param req DescribeCostSummaryByProductRequest
                 * @return DescribeCostSummaryByProductOutcome
                 */
                DescribeCostSummaryByProductOutcome DescribeCostSummaryByProduct(const Model::DescribeCostSummaryByProductRequest &request);
                void DescribeCostSummaryByProductAsync(const Model::DescribeCostSummaryByProductRequest& request, const DescribeCostSummaryByProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCostSummaryByProductOutcomeCallable DescribeCostSummaryByProductCallable(const Model::DescribeCostSummaryByProductRequest& request);

                /**
                 *获取按项目汇总消耗详情
                 * @param req DescribeCostSummaryByProjectRequest
                 * @return DescribeCostSummaryByProjectOutcome
                 */
                DescribeCostSummaryByProjectOutcome DescribeCostSummaryByProject(const Model::DescribeCostSummaryByProjectRequest &request);
                void DescribeCostSummaryByProjectAsync(const Model::DescribeCostSummaryByProjectRequest& request, const DescribeCostSummaryByProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCostSummaryByProjectOutcomeCallable DescribeCostSummaryByProjectCallable(const Model::DescribeCostSummaryByProjectRequest& request);

                /**
                 *获取按地域汇总消耗详情
                 * @param req DescribeCostSummaryByRegionRequest
                 * @return DescribeCostSummaryByRegionOutcome
                 */
                DescribeCostSummaryByRegionOutcome DescribeCostSummaryByRegion(const Model::DescribeCostSummaryByRegionRequest &request);
                void DescribeCostSummaryByRegionAsync(const Model::DescribeCostSummaryByRegionRequest& request, const DescribeCostSummaryByRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCostSummaryByRegionOutcomeCallable DescribeCostSummaryByRegionCallable(const Model::DescribeCostSummaryByRegionRequest& request);

                /**
                 *获取按资源汇总消耗详情
                 * @param req DescribeCostSummaryByResourceRequest
                 * @return DescribeCostSummaryByResourceOutcome
                 */
                DescribeCostSummaryByResourceOutcome DescribeCostSummaryByResource(const Model::DescribeCostSummaryByResourceRequest &request);
                void DescribeCostSummaryByResourceAsync(const Model::DescribeCostSummaryByResourceRequest& request, const DescribeCostSummaryByResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCostSummaryByResourceOutcomeCallable DescribeCostSummaryByResourceCallable(const Model::DescribeCostSummaryByResourceRequest& request);

                /**
                 *查询订单
                 * @param req DescribeDealsByCondRequest
                 * @return DescribeDealsByCondOutcome
                 */
                DescribeDealsByCondOutcome DescribeDealsByCond(const Model::DescribeDealsByCondRequest &request);
                void DescribeDealsByCondAsync(const Model::DescribeDealsByCondRequest& request, const DescribeDealsByCondAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDealsByCondOutcomeCallable DescribeDealsByCondCallable(const Model::DescribeDealsByCondRequest& request);

                /**
                 *获取COS产品用量明细
                 * @param req DescribeDosageCosDetailByDateRequest
                 * @return DescribeDosageCosDetailByDateOutcome
                 */
                DescribeDosageCosDetailByDateOutcome DescribeDosageCosDetailByDate(const Model::DescribeDosageCosDetailByDateRequest &request);
                void DescribeDosageCosDetailByDateAsync(const Model::DescribeDosageCosDetailByDateRequest& request, const DescribeDosageCosDetailByDateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDosageCosDetailByDateOutcomeCallable DescribeDosageCosDetailByDateCallable(const Model::DescribeDosageCosDetailByDateRequest& request);

                /**
                 *按日期获取产品用量明细
                 * @param req DescribeDosageDetailByDateRequest
                 * @return DescribeDosageDetailByDateOutcome
                 */
                DescribeDosageDetailByDateOutcome DescribeDosageDetailByDate(const Model::DescribeDosageDetailByDateRequest &request);
                void DescribeDosageDetailByDateAsync(const Model::DescribeDosageDetailByDateRequest& request, const DescribeDosageDetailByDateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDosageDetailByDateOutcomeCallable DescribeDosageDetailByDateCallable(const Model::DescribeDosageDetailByDateRequest& request);

                /**
                 *获取已接入标准用量明细模板产品的用量明细数据，目前已接入并支持查询的产品包括：云联络中心、实时音视频、实时音视频、智能媒资托管、CODING DevOps、全球IP应用加速
                 * @param req DescribeDosageDetailListRequest
                 * @return DescribeDosageDetailListOutcome
                 */
                DescribeDosageDetailListOutcome DescribeDosageDetailList(const Model::DescribeDosageDetailListRequest &request);
                void DescribeDosageDetailListAsync(const Model::DescribeDosageDetailListRequest& request, const DescribeDosageDetailListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDosageDetailListOutcomeCallable DescribeDosageDetailListCallable(const Model::DescribeDosageDetailListRequest& request);

                /**
                 *查询分账账单资源归集汇总
                 * @param req DescribeGatherResourceRequest
                 * @return DescribeGatherResourceOutcome
                 */
                DescribeGatherResourceOutcome DescribeGatherResource(const Model::DescribeGatherResourceRequest &request);
                void DescribeGatherResourceAsync(const Model::DescribeGatherResourceRequest& request, const DescribeGatherResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGatherResourceOutcomeCallable DescribeGatherResourceCallable(const Model::DescribeGatherResourceRequest& request);

                /**
                 *查询归集规则详情
                 * @param req DescribeGatherRuleDetailRequest
                 * @return DescribeGatherRuleDetailOutcome
                 */
                DescribeGatherRuleDetailOutcome DescribeGatherRuleDetail(const Model::DescribeGatherRuleDetailRequest &request);
                void DescribeGatherRuleDetailAsync(const Model::DescribeGatherRuleDetailRequest& request, const DescribeGatherRuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGatherRuleDetailOutcomeCallable DescribeGatherRuleDetailCallable(const Model::DescribeGatherRuleDetailRequest& request);

                /**
                 *查询节省计划详情
                 * @param req DescribeSavingPlanResourceInfoRequest
                 * @return DescribeSavingPlanResourceInfoOutcome
                 */
                DescribeSavingPlanResourceInfoOutcome DescribeSavingPlanResourceInfo(const Model::DescribeSavingPlanResourceInfoRequest &request);
                void DescribeSavingPlanResourceInfoAsync(const Model::DescribeSavingPlanResourceInfoRequest& request, const DescribeSavingPlanResourceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSavingPlanResourceInfoOutcomeCallable DescribeSavingPlanResourceInfoCallable(const Model::DescribeSavingPlanResourceInfoRequest& request);

                /**
                 *获取分账标签
                 * @param req DescribeTagListRequest
                 * @return DescribeTagListOutcome
                 */
                DescribeTagListOutcome DescribeTagList(const Model::DescribeTagListRequest &request);
                void DescribeTagListAsync(const Model::DescribeTagListRequest& request, const DescribeTagListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTagListOutcomeCallable DescribeTagListCallable(const Model::DescribeTagListRequest& request);

                /**
                 *获取代金券相关信息
                 * @param req DescribeVoucherInfoRequest
                 * @return DescribeVoucherInfoOutcome
                 */
                DescribeVoucherInfoOutcome DescribeVoucherInfo(const Model::DescribeVoucherInfoRequest &request);
                void DescribeVoucherInfoAsync(const Model::DescribeVoucherInfoRequest& request, const DescribeVoucherInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVoucherInfoOutcomeCallable DescribeVoucherInfoCallable(const Model::DescribeVoucherInfoRequest& request);

                /**
                 *获取代金券使用记录
                 * @param req DescribeVoucherUsageDetailsRequest
                 * @return DescribeVoucherUsageDetailsOutcome
                 */
                DescribeVoucherUsageDetailsOutcome DescribeVoucherUsageDetails(const Model::DescribeVoucherUsageDetailsRequest &request);
                void DescribeVoucherUsageDetailsAsync(const Model::DescribeVoucherUsageDetailsRequest& request, const DescribeVoucherUsageDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVoucherUsageDetailsOutcomeCallable DescribeVoucherUsageDetailsCallable(const Model::DescribeVoucherUsageDetailsRequest& request);

                /**
                 *编辑公摊规则
                 * @param req ModifyAllocationRuleRequest
                 * @return ModifyAllocationRuleOutcome
                 */
                ModifyAllocationRuleOutcome ModifyAllocationRule(const Model::ModifyAllocationRuleRequest &request);
                void ModifyAllocationRuleAsync(const Model::ModifyAllocationRuleRequest& request, const ModifyAllocationRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAllocationRuleOutcomeCallable ModifyAllocationRuleCallable(const Model::ModifyAllocationRuleRequest& request);

                /**
                 *修改分账单元信息
                 * @param req ModifyAllocationUnitRequest
                 * @return ModifyAllocationUnitOutcome
                 */
                ModifyAllocationUnitOutcome ModifyAllocationUnit(const Model::ModifyAllocationUnitRequest &request);
                void ModifyAllocationUnitAsync(const Model::ModifyAllocationUnitRequest& request, const ModifyAllocationUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAllocationUnitOutcomeCallable ModifyAllocationUnitCallable(const Model::ModifyAllocationUnitRequest& request);

                /**
                 *编辑归集规则
                 * @param req ModifyGatherRuleRequest
                 * @return ModifyGatherRuleOutcome
                 */
                ModifyGatherRuleOutcome ModifyGatherRule(const Model::ModifyGatherRuleRequest &request);
                void ModifyGatherRuleAsync(const Model::ModifyGatherRuleRequest& request, const ModifyGatherRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyGatherRuleOutcomeCallable ModifyGatherRuleCallable(const Model::ModifyGatherRuleRequest& request);

                /**
                 *支付订单
                 * @param req PayDealsRequest
                 * @return PayDealsOutcome
                 */
                PayDealsOutcome PayDeals(const Model::PayDealsRequest &request);
                void PayDealsAsync(const Model::PayDealsRequest& request, const PayDealsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PayDealsOutcomeCallable PayDealsCallable(const Model::PayDealsRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_BILLINGCLIENT_H_
