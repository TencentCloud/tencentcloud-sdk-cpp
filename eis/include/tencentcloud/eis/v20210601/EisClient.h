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

#ifndef TENCENTCLOUD_EIS_V20210601_EISCLIENT_H_
#define TENCENTCLOUD_EIS_V20210601_EISCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/eis/v20210601/model/GetRuntimeMCRequest.h>
#include <tencentcloud/eis/v20210601/model/GetRuntimeMCResponse.h>
#include <tencentcloud/eis/v20210601/model/GetRuntimeResourceMonitorMetricMCRequest.h>
#include <tencentcloud/eis/v20210601/model/GetRuntimeResourceMonitorMetricMCResponse.h>
#include <tencentcloud/eis/v20210601/model/ListDeployableRuntimesMCRequest.h>
#include <tencentcloud/eis/v20210601/model/ListDeployableRuntimesMCResponse.h>
#include <tencentcloud/eis/v20210601/model/ListRuntimeDeployedInstancesMCRequest.h>
#include <tencentcloud/eis/v20210601/model/ListRuntimeDeployedInstancesMCResponse.h>
#include <tencentcloud/eis/v20210601/model/ListRuntimesMCRequest.h>
#include <tencentcloud/eis/v20210601/model/ListRuntimesMCResponse.h>


namespace TencentCloud
{
    namespace Eis
    {
        namespace V20210601
        {
            class EisClient : public AbstractClient
            {
            public:
                EisClient(const Credential &credential, const std::string &region);
                EisClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::GetRuntimeMCResponse> GetRuntimeMCOutcome;
                typedef std::future<GetRuntimeMCOutcome> GetRuntimeMCOutcomeCallable;
                typedef std::function<void(const EisClient*, const Model::GetRuntimeMCRequest&, GetRuntimeMCOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetRuntimeMCAsyncHandler;
                typedef Outcome<Core::Error, Model::GetRuntimeResourceMonitorMetricMCResponse> GetRuntimeResourceMonitorMetricMCOutcome;
                typedef std::future<GetRuntimeResourceMonitorMetricMCOutcome> GetRuntimeResourceMonitorMetricMCOutcomeCallable;
                typedef std::function<void(const EisClient*, const Model::GetRuntimeResourceMonitorMetricMCRequest&, GetRuntimeResourceMonitorMetricMCOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetRuntimeResourceMonitorMetricMCAsyncHandler;
                typedef Outcome<Core::Error, Model::ListDeployableRuntimesMCResponse> ListDeployableRuntimesMCOutcome;
                typedef std::future<ListDeployableRuntimesMCOutcome> ListDeployableRuntimesMCOutcomeCallable;
                typedef std::function<void(const EisClient*, const Model::ListDeployableRuntimesMCRequest&, ListDeployableRuntimesMCOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListDeployableRuntimesMCAsyncHandler;
                typedef Outcome<Core::Error, Model::ListRuntimeDeployedInstancesMCResponse> ListRuntimeDeployedInstancesMCOutcome;
                typedef std::future<ListRuntimeDeployedInstancesMCOutcome> ListRuntimeDeployedInstancesMCOutcomeCallable;
                typedef std::function<void(const EisClient*, const Model::ListRuntimeDeployedInstancesMCRequest&, ListRuntimeDeployedInstancesMCOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListRuntimeDeployedInstancesMCAsyncHandler;
                typedef Outcome<Core::Error, Model::ListRuntimesMCResponse> ListRuntimesMCOutcome;
                typedef std::future<ListRuntimesMCOutcome> ListRuntimesMCOutcomeCallable;
                typedef std::function<void(const EisClient*, const Model::ListRuntimesMCRequest&, ListRuntimesMCOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListRuntimesMCAsyncHandler;



                /**
                 *获取运行时详情
                 * @param req GetRuntimeMCRequest
                 * @return GetRuntimeMCOutcome
                 */
                GetRuntimeMCOutcome GetRuntimeMC(const Model::GetRuntimeMCRequest &request);
                void GetRuntimeMCAsync(const Model::GetRuntimeMCRequest& request, const GetRuntimeMCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetRuntimeMCOutcomeCallable GetRuntimeMCCallable(const Model::GetRuntimeMCRequest& request);

                /**
                 *获取运行时资源监控详情，cpu，memory，bandwidth
                 * @param req GetRuntimeResourceMonitorMetricMCRequest
                 * @return GetRuntimeResourceMonitorMetricMCOutcome
                 */
                GetRuntimeResourceMonitorMetricMCOutcome GetRuntimeResourceMonitorMetricMC(const Model::GetRuntimeResourceMonitorMetricMCRequest &request);
                void GetRuntimeResourceMonitorMetricMCAsync(const Model::GetRuntimeResourceMonitorMetricMCRequest& request, const GetRuntimeResourceMonitorMetricMCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetRuntimeResourceMonitorMetricMCOutcomeCallable GetRuntimeResourceMonitorMetricMCCallable(const Model::GetRuntimeResourceMonitorMetricMCRequest& request);

                /**
                 *返回用户可用的运行时列表，发布应用时返回的运行时环境，仅shared和private运行时，无sandbox运行时，并且只有running/scaling状态的
                 * @param req ListDeployableRuntimesMCRequest
                 * @return ListDeployableRuntimesMCOutcome
                 */
                ListDeployableRuntimesMCOutcome ListDeployableRuntimesMC(const Model::ListDeployableRuntimesMCRequest &request);
                void ListDeployableRuntimesMCAsync(const Model::ListDeployableRuntimesMCRequest& request, const ListDeployableRuntimesMCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListDeployableRuntimesMCOutcomeCallable ListDeployableRuntimesMCCallable(const Model::ListDeployableRuntimesMCRequest& request);

                /**
                 *获取运行时部署的应用实例列表
                 * @param req ListRuntimeDeployedInstancesMCRequest
                 * @return ListRuntimeDeployedInstancesMCOutcome
                 */
                ListRuntimeDeployedInstancesMCOutcome ListRuntimeDeployedInstancesMC(const Model::ListRuntimeDeployedInstancesMCRequest &request);
                void ListRuntimeDeployedInstancesMCAsync(const Model::ListRuntimeDeployedInstancesMCRequest& request, const ListRuntimeDeployedInstancesMCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListRuntimeDeployedInstancesMCOutcomeCallable ListRuntimeDeployedInstancesMCCallable(const Model::ListRuntimeDeployedInstancesMCRequest& request);

                /**
                 *返回用户的运行时列表，运行时管理主页使用，包含沙箱、共享运行时及独立运行时环境，不包含已经删除的运行时
                 * @param req ListRuntimesMCRequest
                 * @return ListRuntimesMCOutcome
                 */
                ListRuntimesMCOutcome ListRuntimesMC(const Model::ListRuntimesMCRequest &request);
                void ListRuntimesMCAsync(const Model::ListRuntimesMCRequest& request, const ListRuntimesMCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListRuntimesMCOutcomeCallable ListRuntimesMCCallable(const Model::ListRuntimesMCRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_EIS_V20210601_EISCLIENT_H_
