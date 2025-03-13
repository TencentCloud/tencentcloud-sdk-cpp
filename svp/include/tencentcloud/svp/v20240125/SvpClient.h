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

#ifndef TENCENTCLOUD_SVP_V20240125_SVPCLIENT_H_
#define TENCENTCLOUD_SVP_V20240125_SVPCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/svp/v20240125/model/CreateSavingPlanOrderRequest.h>
#include <tencentcloud/svp/v20240125/model/CreateSavingPlanOrderResponse.h>
#include <tencentcloud/svp/v20240125/model/DescribeSavingPlanCoverageRequest.h>
#include <tencentcloud/svp/v20240125/model/DescribeSavingPlanCoverageResponse.h>
#include <tencentcloud/svp/v20240125/model/DescribeSavingPlanDeductRequest.h>
#include <tencentcloud/svp/v20240125/model/DescribeSavingPlanDeductResponse.h>
#include <tencentcloud/svp/v20240125/model/DescribeSavingPlanOverviewRequest.h>
#include <tencentcloud/svp/v20240125/model/DescribeSavingPlanOverviewResponse.h>
#include <tencentcloud/svp/v20240125/model/DescribeSavingPlanUsageRequest.h>
#include <tencentcloud/svp/v20240125/model/DescribeSavingPlanUsageResponse.h>


namespace TencentCloud
{
    namespace Svp
    {
        namespace V20240125
        {
            class SvpClient : public AbstractClient
            {
            public:
                SvpClient(const Credential &credential, const std::string &region);
                SvpClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateSavingPlanOrderResponse> CreateSavingPlanOrderOutcome;
                typedef std::future<CreateSavingPlanOrderOutcome> CreateSavingPlanOrderOutcomeCallable;
                typedef std::function<void(const SvpClient*, const Model::CreateSavingPlanOrderRequest&, CreateSavingPlanOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSavingPlanOrderAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSavingPlanCoverageResponse> DescribeSavingPlanCoverageOutcome;
                typedef std::future<DescribeSavingPlanCoverageOutcome> DescribeSavingPlanCoverageOutcomeCallable;
                typedef std::function<void(const SvpClient*, const Model::DescribeSavingPlanCoverageRequest&, DescribeSavingPlanCoverageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSavingPlanCoverageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSavingPlanDeductResponse> DescribeSavingPlanDeductOutcome;
                typedef std::future<DescribeSavingPlanDeductOutcome> DescribeSavingPlanDeductOutcomeCallable;
                typedef std::function<void(const SvpClient*, const Model::DescribeSavingPlanDeductRequest&, DescribeSavingPlanDeductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSavingPlanDeductAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSavingPlanOverviewResponse> DescribeSavingPlanOverviewOutcome;
                typedef std::future<DescribeSavingPlanOverviewOutcome> DescribeSavingPlanOverviewOutcomeCallable;
                typedef std::function<void(const SvpClient*, const Model::DescribeSavingPlanOverviewRequest&, DescribeSavingPlanOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSavingPlanOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSavingPlanUsageResponse> DescribeSavingPlanUsageOutcome;
                typedef std::future<DescribeSavingPlanUsageOutcome> DescribeSavingPlanUsageOutcomeCallable;
                typedef std::function<void(const SvpClient*, const Model::DescribeSavingPlanUsageRequest&, DescribeSavingPlanUsageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSavingPlanUsageAsyncHandler;



                /**
                 *创建节省计划订单
                 * @param req CreateSavingPlanOrderRequest
                 * @return CreateSavingPlanOrderOutcome
                 */
                CreateSavingPlanOrderOutcome CreateSavingPlanOrder(const Model::CreateSavingPlanOrderRequest &request);
                void CreateSavingPlanOrderAsync(const Model::CreateSavingPlanOrderRequest& request, const CreateSavingPlanOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSavingPlanOrderOutcomeCallable CreateSavingPlanOrderCallable(const Model::CreateSavingPlanOrderRequest& request);

                /**
                 *查询当前用户节省计划覆盖率明细数据，如无特别说明，金额单位均为元（国内站）或者美元（国际站）。
                 * @param req DescribeSavingPlanCoverageRequest
                 * @return DescribeSavingPlanCoverageOutcome
                 */
                DescribeSavingPlanCoverageOutcome DescribeSavingPlanCoverage(const Model::DescribeSavingPlanCoverageRequest &request);
                void DescribeSavingPlanCoverageAsync(const Model::DescribeSavingPlanCoverageRequest& request, const DescribeSavingPlanCoverageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSavingPlanCoverageOutcomeCallable DescribeSavingPlanCoverageCallable(const Model::DescribeSavingPlanCoverageRequest& request);

                /**
                 *查询节省计划抵扣明细
                 * @param req DescribeSavingPlanDeductRequest
                 * @return DescribeSavingPlanDeductOutcome
                 */
                DescribeSavingPlanDeductOutcome DescribeSavingPlanDeduct(const Model::DescribeSavingPlanDeductRequest &request);
                void DescribeSavingPlanDeductAsync(const Model::DescribeSavingPlanDeductRequest& request, const DescribeSavingPlanDeductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSavingPlanDeductOutcomeCallable DescribeSavingPlanDeductCallable(const Model::DescribeSavingPlanDeductRequest& request);

                /**
                 *查用当前用户明细节省计划总览查询时段内的使用情况
                 * @param req DescribeSavingPlanOverviewRequest
                 * @return DescribeSavingPlanOverviewOutcome
                 */
                DescribeSavingPlanOverviewOutcome DescribeSavingPlanOverview(const Model::DescribeSavingPlanOverviewRequest &request);
                void DescribeSavingPlanOverviewAsync(const Model::DescribeSavingPlanOverviewRequest& request, const DescribeSavingPlanOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSavingPlanOverviewOutcomeCallable DescribeSavingPlanOverviewCallable(const Model::DescribeSavingPlanOverviewRequest& request);

                /**
                 *查用当前用户明细节省计划查询时段内的使用情况
                 * @param req DescribeSavingPlanUsageRequest
                 * @return DescribeSavingPlanUsageOutcome
                 */
                DescribeSavingPlanUsageOutcome DescribeSavingPlanUsage(const Model::DescribeSavingPlanUsageRequest &request);
                void DescribeSavingPlanUsageAsync(const Model::DescribeSavingPlanUsageRequest& request, const DescribeSavingPlanUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSavingPlanUsageOutcomeCallable DescribeSavingPlanUsageCallable(const Model::DescribeSavingPlanUsageRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_SVP_V20240125_SVPCLIENT_H_
