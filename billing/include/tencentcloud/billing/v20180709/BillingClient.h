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
#include <tencentcloud/billing/v20180709/model/DescribeAccountBalanceRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeAccountBalanceResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillDetailRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillDetailResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillListRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillListResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillResourceSummaryRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillResourceSummaryResponse.h>
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
#include <tencentcloud/billing/v20180709/model/DescribeCostDetailRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeCostDetailResponse.h>
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
#include <tencentcloud/billing/v20180709/model/DescribeVoucherInfoRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeVoucherInfoResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeVoucherUsageDetailsRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeVoucherUsageDetailsResponse.h>
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

                typedef Outcome<Core::Error, Model::DescribeAccountBalanceResponse> DescribeAccountBalanceOutcome;
                typedef std::future<DescribeAccountBalanceOutcome> DescribeAccountBalanceOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeAccountBalanceRequest&, DescribeAccountBalanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountBalanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillDetailResponse> DescribeBillDetailOutcome;
                typedef std::future<DescribeBillDetailOutcome> DescribeBillDetailOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeBillDetailRequest&, DescribeBillDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillListResponse> DescribeBillListOutcome;
                typedef std::future<DescribeBillListOutcome> DescribeBillListOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeBillListRequest&, DescribeBillListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillResourceSummaryResponse> DescribeBillResourceSummaryOutcome;
                typedef std::future<DescribeBillResourceSummaryOutcome> DescribeBillResourceSummaryOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeBillResourceSummaryRequest&, DescribeBillResourceSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillResourceSummaryAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeCostDetailResponse> DescribeCostDetailOutcome;
                typedef std::future<DescribeCostDetailOutcome> DescribeCostDetailOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeCostDetailRequest&, DescribeCostDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCostDetailAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeVoucherInfoResponse> DescribeVoucherInfoOutcome;
                typedef std::future<DescribeVoucherInfoOutcome> DescribeVoucherInfoOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeVoucherInfoRequest&, DescribeVoucherInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVoucherInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVoucherUsageDetailsResponse> DescribeVoucherUsageDetailsOutcome;
                typedef std::future<DescribeVoucherUsageDetailsOutcome> DescribeVoucherUsageDetailsOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeVoucherUsageDetailsRequest&, DescribeVoucherUsageDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVoucherUsageDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::PayDealsResponse> PayDealsOutcome;
                typedef std::future<PayDealsOutcome> PayDealsOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::PayDealsRequest&, PayDealsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PayDealsAsyncHandler;



                /**
                 *获取云账户余额信息。
                 * @param req DescribeAccountBalanceRequest
                 * @return DescribeAccountBalanceOutcome
                 */
                DescribeAccountBalanceOutcome DescribeAccountBalance(const Model::DescribeAccountBalanceRequest &request);
                void DescribeAccountBalanceAsync(const Model::DescribeAccountBalanceRequest& request, const DescribeAccountBalanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountBalanceOutcomeCallable DescribeAccountBalanceCallable(const Model::DescribeAccountBalanceRequest& request);

                /**
                 *查询账单明细数据。
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
                 *获取收支明细列表，支持翻页和参数过滤
                 * @param req DescribeBillListRequest
                 * @return DescribeBillListOutcome
                 */
                DescribeBillListOutcome DescribeBillList(const Model::DescribeBillListRequest &request);
                void DescribeBillListAsync(const Model::DescribeBillListRequest& request, const DescribeBillListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillListOutcomeCallable DescribeBillListCallable(const Model::DescribeBillListRequest& request);

                /**
                 *查询账单资源汇总数据
                 * @param req DescribeBillResourceSummaryRequest
                 * @return DescribeBillResourceSummaryOutcome
                 */
                DescribeBillResourceSummaryOutcome DescribeBillResourceSummary(const Model::DescribeBillResourceSummaryRequest &request);
                void DescribeBillResourceSummaryAsync(const Model::DescribeBillResourceSummaryRequest& request, const DescribeBillResourceSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillResourceSummaryOutcomeCallable DescribeBillResourceSummaryCallable(const Model::DescribeBillResourceSummaryRequest& request);

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
                 *查询消耗明细
                 * @param req DescribeCostDetailRequest
                 * @return DescribeCostDetailOutcome
                 */
                DescribeCostDetailOutcome DescribeCostDetail(const Model::DescribeCostDetailRequest &request);
                void DescribeCostDetailAsync(const Model::DescribeCostDetailRequest& request, const DescribeCostDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCostDetailOutcomeCallable DescribeCostDetailCallable(const Model::DescribeCostDetailRequest& request);

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
