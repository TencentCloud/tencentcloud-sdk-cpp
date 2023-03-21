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

#ifndef TENCENTCLOUD_APM_V20210622_APMCLIENT_H_
#define TENCENTCLOUD_APM_V20210622_APMCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/apm/v20210622/model/CreateApmInstanceRequest.h>
#include <tencentcloud/apm/v20210622/model/CreateApmInstanceResponse.h>
#include <tencentcloud/apm/v20210622/model/DescribeApmAgentRequest.h>
#include <tencentcloud/apm/v20210622/model/DescribeApmAgentResponse.h>
#include <tencentcloud/apm/v20210622/model/DescribeApmInstancesRequest.h>
#include <tencentcloud/apm/v20210622/model/DescribeApmInstancesResponse.h>
#include <tencentcloud/apm/v20210622/model/DescribeGeneralMetricDataRequest.h>
#include <tencentcloud/apm/v20210622/model/DescribeGeneralMetricDataResponse.h>
#include <tencentcloud/apm/v20210622/model/DescribeMetricRecordsRequest.h>
#include <tencentcloud/apm/v20210622/model/DescribeMetricRecordsResponse.h>
#include <tencentcloud/apm/v20210622/model/DescribeServiceOverviewRequest.h>
#include <tencentcloud/apm/v20210622/model/DescribeServiceOverviewResponse.h>
#include <tencentcloud/apm/v20210622/model/ModifyApmInstanceRequest.h>
#include <tencentcloud/apm/v20210622/model/ModifyApmInstanceResponse.h>
#include <tencentcloud/apm/v20210622/model/TerminateApmInstanceRequest.h>
#include <tencentcloud/apm/v20210622/model/TerminateApmInstanceResponse.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            class ApmClient : public AbstractClient
            {
            public:
                ApmClient(const Credential &credential, const std::string &region);
                ApmClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateApmInstanceResponse> CreateApmInstanceOutcome;
                typedef std::future<CreateApmInstanceOutcome> CreateApmInstanceOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::CreateApmInstanceRequest&, CreateApmInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApmInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApmAgentResponse> DescribeApmAgentOutcome;
                typedef std::future<DescribeApmAgentOutcome> DescribeApmAgentOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::DescribeApmAgentRequest&, DescribeApmAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApmAgentAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApmInstancesResponse> DescribeApmInstancesOutcome;
                typedef std::future<DescribeApmInstancesOutcome> DescribeApmInstancesOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::DescribeApmInstancesRequest&, DescribeApmInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApmInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGeneralMetricDataResponse> DescribeGeneralMetricDataOutcome;
                typedef std::future<DescribeGeneralMetricDataOutcome> DescribeGeneralMetricDataOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::DescribeGeneralMetricDataRequest&, DescribeGeneralMetricDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGeneralMetricDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMetricRecordsResponse> DescribeMetricRecordsOutcome;
                typedef std::future<DescribeMetricRecordsOutcome> DescribeMetricRecordsOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::DescribeMetricRecordsRequest&, DescribeMetricRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMetricRecordsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeServiceOverviewResponse> DescribeServiceOverviewOutcome;
                typedef std::future<DescribeServiceOverviewOutcome> DescribeServiceOverviewOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::DescribeServiceOverviewRequest&, DescribeServiceOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApmInstanceResponse> ModifyApmInstanceOutcome;
                typedef std::future<ModifyApmInstanceOutcome> ModifyApmInstanceOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::ModifyApmInstanceRequest&, ModifyApmInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApmInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminateApmInstanceResponse> TerminateApmInstanceOutcome;
                typedef std::future<TerminateApmInstanceOutcome> TerminateApmInstanceOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::TerminateApmInstanceRequest&, TerminateApmInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateApmInstanceAsyncHandler;



                /**
                 *业务购买APM实例，调用该接口创建
                 * @param req CreateApmInstanceRequest
                 * @return CreateApmInstanceOutcome
                 */
                CreateApmInstanceOutcome CreateApmInstance(const Model::CreateApmInstanceRequest &request);
                void CreateApmInstanceAsync(const Model::CreateApmInstanceRequest& request, const CreateApmInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateApmInstanceOutcomeCallable CreateApmInstanceCallable(const Model::CreateApmInstanceRequest& request);

                /**
                 *获取Apm Agent信息
                 * @param req DescribeApmAgentRequest
                 * @return DescribeApmAgentOutcome
                 */
                DescribeApmAgentOutcome DescribeApmAgent(const Model::DescribeApmAgentRequest &request);
                void DescribeApmAgentAsync(const Model::DescribeApmAgentRequest& request, const DescribeApmAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApmAgentOutcomeCallable DescribeApmAgentCallable(const Model::DescribeApmAgentRequest& request);

                /**
                 *APM实例列表拉取
                 * @param req DescribeApmInstancesRequest
                 * @return DescribeApmInstancesOutcome
                 */
                DescribeApmInstancesOutcome DescribeApmInstances(const Model::DescribeApmInstancesRequest &request);
                void DescribeApmInstancesAsync(const Model::DescribeApmInstancesRequest& request, const DescribeApmInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApmInstancesOutcomeCallable DescribeApmInstancesCallable(const Model::DescribeApmInstancesRequest& request);

                /**
                 *获取指标数据通用接口。用户根据需要上送请求参数，返回对应的指标数据。
接口调用频率限制为：20次/秒，1200次/分钟。单请求的数据点数限制为1440个。
                 * @param req DescribeGeneralMetricDataRequest
                 * @return DescribeGeneralMetricDataOutcome
                 */
                DescribeGeneralMetricDataOutcome DescribeGeneralMetricData(const Model::DescribeGeneralMetricDataRequest &request);
                void DescribeGeneralMetricDataAsync(const Model::DescribeGeneralMetricDataRequest& request, const DescribeGeneralMetricDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGeneralMetricDataOutcomeCallable DescribeGeneralMetricDataCallable(const Model::DescribeGeneralMetricDataRequest& request);

                /**
                 *拉取通用指标列表
                 * @param req DescribeMetricRecordsRequest
                 * @return DescribeMetricRecordsOutcome
                 */
                DescribeMetricRecordsOutcome DescribeMetricRecords(const Model::DescribeMetricRecordsRequest &request);
                void DescribeMetricRecordsAsync(const Model::DescribeMetricRecordsRequest& request, const DescribeMetricRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMetricRecordsOutcomeCallable DescribeMetricRecordsCallable(const Model::DescribeMetricRecordsRequest& request);

                /**
                 *服务概览数据拉取
                 * @param req DescribeServiceOverviewRequest
                 * @return DescribeServiceOverviewOutcome
                 */
                DescribeServiceOverviewOutcome DescribeServiceOverview(const Model::DescribeServiceOverviewRequest &request);
                void DescribeServiceOverviewAsync(const Model::DescribeServiceOverviewRequest& request, const DescribeServiceOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServiceOverviewOutcomeCallable DescribeServiceOverviewCallable(const Model::DescribeServiceOverviewRequest& request);

                /**
                 *修改Apm实例接口
                 * @param req ModifyApmInstanceRequest
                 * @return ModifyApmInstanceOutcome
                 */
                ModifyApmInstanceOutcome ModifyApmInstance(const Model::ModifyApmInstanceRequest &request);
                void ModifyApmInstanceAsync(const Model::ModifyApmInstanceRequest& request, const ModifyApmInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApmInstanceOutcomeCallable ModifyApmInstanceCallable(const Model::ModifyApmInstanceRequest& request);

                /**
                 *apm销毁实例
                 * @param req TerminateApmInstanceRequest
                 * @return TerminateApmInstanceOutcome
                 */
                TerminateApmInstanceOutcome TerminateApmInstance(const Model::TerminateApmInstanceRequest &request);
                void TerminateApmInstanceAsync(const Model::TerminateApmInstanceRequest& request, const TerminateApmInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateApmInstanceOutcomeCallable TerminateApmInstanceCallable(const Model::TerminateApmInstanceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_APMCLIENT_H_
