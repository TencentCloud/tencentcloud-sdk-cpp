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

#ifndef TENCENTCLOUD_RCE_V20201103_RCECLIENT_H_
#define TENCENTCLOUD_RCE_V20201103_RCECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/rce/v20201103/model/DescribeRiskAssessmentRequest.h>
#include <tencentcloud/rce/v20201103/model/DescribeRiskAssessmentResponse.h>
#include <tencentcloud/rce/v20201103/model/DescribeRiskTrendsRequest.h>
#include <tencentcloud/rce/v20201103/model/DescribeRiskTrendsResponse.h>
#include <tencentcloud/rce/v20201103/model/ManageMarketingRiskRequest.h>
#include <tencentcloud/rce/v20201103/model/ManageMarketingRiskResponse.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20201103
        {
            class RceClient : public AbstractClient
            {
            public:
                RceClient(const Credential &credential, const std::string &region);
                RceClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DescribeRiskAssessmentResponse> DescribeRiskAssessmentOutcome;
                typedef std::future<DescribeRiskAssessmentOutcome> DescribeRiskAssessmentOutcomeCallable;
                typedef std::function<void(const RceClient*, const Model::DescribeRiskAssessmentRequest&, DescribeRiskAssessmentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskAssessmentAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskTrendsResponse> DescribeRiskTrendsOutcome;
                typedef std::future<DescribeRiskTrendsOutcome> DescribeRiskTrendsOutcomeCallable;
                typedef std::function<void(const RceClient*, const Model::DescribeRiskTrendsRequest&, DescribeRiskTrendsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskTrendsAsyncHandler;
                typedef Outcome<Core::Error, Model::ManageMarketingRiskResponse> ManageMarketingRiskOutcome;
                typedef std::future<ManageMarketingRiskOutcome> ManageMarketingRiskOutcomeCallable;
                typedef std::function<void(const RceClient*, const Model::ManageMarketingRiskRequest&, ManageMarketingRiskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ManageMarketingRiskAsyncHandler;



                /**
                 *此接口用于查询风险评估结果
                 * @param req DescribeRiskAssessmentRequest
                 * @return DescribeRiskAssessmentOutcome
                 */
                DescribeRiskAssessmentOutcome DescribeRiskAssessment(const Model::DescribeRiskAssessmentRequest &request);
                void DescribeRiskAssessmentAsync(const Model::DescribeRiskAssessmentRequest& request, const DescribeRiskAssessmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskAssessmentOutcomeCallable DescribeRiskAssessmentCallable(const Model::DescribeRiskAssessmentRequest& request);

                /**
                 *以图表形式展示三种请求状态的趋势变化
                 * @param req DescribeRiskTrendsRequest
                 * @return DescribeRiskTrendsOutcome
                 */
                DescribeRiskTrendsOutcome DescribeRiskTrends(const Model::DescribeRiskTrendsRequest &request);
                void DescribeRiskTrendsAsync(const Model::DescribeRiskTrendsRequest& request, const DescribeRiskTrendsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskTrendsOutcomeCallable DescribeRiskTrendsCallable(const Model::DescribeRiskTrendsRequest& request);

                /**
                 *全栈式风控引擎（RiskControlEngine，RCE）是基于人工智能技术和腾讯20年风控实战沉淀，依托腾讯海量业务构建的风控引擎，以轻量级的 SaaS 服务方式接入，帮助您快速解决注册、登录、营销活动等关键场景遇到的欺诈问题，实时防御黑灰产作恶。
                 * @param req ManageMarketingRiskRequest
                 * @return ManageMarketingRiskOutcome
                 */
                ManageMarketingRiskOutcome ManageMarketingRisk(const Model::ManageMarketingRiskRequest &request);
                void ManageMarketingRiskAsync(const Model::ManageMarketingRiskRequest& request, const ManageMarketingRiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ManageMarketingRiskOutcomeCallable ManageMarketingRiskCallable(const Model::ManageMarketingRiskRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20201103_RCECLIENT_H_
