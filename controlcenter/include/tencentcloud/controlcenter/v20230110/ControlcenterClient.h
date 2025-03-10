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

#ifndef TENCENTCLOUD_CONTROLCENTER_V20230110_CONTROLCENTERCLIENT_H_
#define TENCENTCLOUD_CONTROLCENTER_V20230110_CONTROLCENTERCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/controlcenter/v20230110/model/BatchApplyAccountBaselinesRequest.h>
#include <tencentcloud/controlcenter/v20230110/model/BatchApplyAccountBaselinesResponse.h>
#include <tencentcloud/controlcenter/v20230110/model/GetAccountFactoryBaselineRequest.h>
#include <tencentcloud/controlcenter/v20230110/model/GetAccountFactoryBaselineResponse.h>
#include <tencentcloud/controlcenter/v20230110/model/ListAccountFactoryBaselineItemsRequest.h>
#include <tencentcloud/controlcenter/v20230110/model/ListAccountFactoryBaselineItemsResponse.h>
#include <tencentcloud/controlcenter/v20230110/model/ListDeployStepTasksRequest.h>
#include <tencentcloud/controlcenter/v20230110/model/ListDeployStepTasksResponse.h>
#include <tencentcloud/controlcenter/v20230110/model/UpdateAccountFactoryBaselineRequest.h>
#include <tencentcloud/controlcenter/v20230110/model/UpdateAccountFactoryBaselineResponse.h>


namespace TencentCloud
{
    namespace Controlcenter
    {
        namespace V20230110
        {
            class ControlcenterClient : public AbstractClient
            {
            public:
                ControlcenterClient(const Credential &credential, const std::string &region);
                ControlcenterClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::BatchApplyAccountBaselinesResponse> BatchApplyAccountBaselinesOutcome;
                typedef std::future<BatchApplyAccountBaselinesOutcome> BatchApplyAccountBaselinesOutcomeCallable;
                typedef std::function<void(const ControlcenterClient*, const Model::BatchApplyAccountBaselinesRequest&, BatchApplyAccountBaselinesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchApplyAccountBaselinesAsyncHandler;
                typedef Outcome<Core::Error, Model::GetAccountFactoryBaselineResponse> GetAccountFactoryBaselineOutcome;
                typedef std::future<GetAccountFactoryBaselineOutcome> GetAccountFactoryBaselineOutcomeCallable;
                typedef std::function<void(const ControlcenterClient*, const Model::GetAccountFactoryBaselineRequest&, GetAccountFactoryBaselineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetAccountFactoryBaselineAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAccountFactoryBaselineItemsResponse> ListAccountFactoryBaselineItemsOutcome;
                typedef std::future<ListAccountFactoryBaselineItemsOutcome> ListAccountFactoryBaselineItemsOutcomeCallable;
                typedef std::function<void(const ControlcenterClient*, const Model::ListAccountFactoryBaselineItemsRequest&, ListAccountFactoryBaselineItemsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAccountFactoryBaselineItemsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListDeployStepTasksResponse> ListDeployStepTasksOutcome;
                typedef std::future<ListDeployStepTasksOutcome> ListDeployStepTasksOutcomeCallable;
                typedef std::function<void(const ControlcenterClient*, const Model::ListDeployStepTasksRequest&, ListDeployStepTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListDeployStepTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAccountFactoryBaselineResponse> UpdateAccountFactoryBaselineOutcome;
                typedef std::future<UpdateAccountFactoryBaselineOutcome> UpdateAccountFactoryBaselineOutcomeCallable;
                typedef std::function<void(const ControlcenterClient*, const Model::UpdateAccountFactoryBaselineRequest&, UpdateAccountFactoryBaselineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAccountFactoryBaselineAsyncHandler;



                /**
                 *批量对存量账号应用基线
                 * @param req BatchApplyAccountBaselinesRequest
                 * @return BatchApplyAccountBaselinesOutcome
                 */
                BatchApplyAccountBaselinesOutcome BatchApplyAccountBaselines(const Model::BatchApplyAccountBaselinesRequest &request);
                void BatchApplyAccountBaselinesAsync(const Model::BatchApplyAccountBaselinesRequest& request, const BatchApplyAccountBaselinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchApplyAccountBaselinesOutcomeCallable BatchApplyAccountBaselinesCallable(const Model::BatchApplyAccountBaselinesRequest& request);

                /**
                 *获取用户基线配置数据
                 * @param req GetAccountFactoryBaselineRequest
                 * @return GetAccountFactoryBaselineOutcome
                 */
                GetAccountFactoryBaselineOutcome GetAccountFactoryBaseline(const Model::GetAccountFactoryBaselineRequest &request);
                void GetAccountFactoryBaselineAsync(const Model::GetAccountFactoryBaselineRequest& request, const GetAccountFactoryBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetAccountFactoryBaselineOutcomeCallable GetAccountFactoryBaselineCallable(const Model::GetAccountFactoryBaselineRequest& request);

                /**
                 *获取账号工厂系统基线项
                 * @param req ListAccountFactoryBaselineItemsRequest
                 * @return ListAccountFactoryBaselineItemsOutcome
                 */
                ListAccountFactoryBaselineItemsOutcome ListAccountFactoryBaselineItems(const Model::ListAccountFactoryBaselineItemsRequest &request);
                void ListAccountFactoryBaselineItemsAsync(const Model::ListAccountFactoryBaselineItemsRequest& request, const ListAccountFactoryBaselineItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAccountFactoryBaselineItemsOutcomeCallable ListAccountFactoryBaselineItemsCallable(const Model::ListAccountFactoryBaselineItemsRequest& request);

                /**
                 *获取某个基线项历史应用信息
                 * @param req ListDeployStepTasksRequest
                 * @return ListDeployStepTasksOutcome
                 */
                ListDeployStepTasksOutcome ListDeployStepTasks(const Model::ListDeployStepTasksRequest &request);
                void ListDeployStepTasksAsync(const Model::ListDeployStepTasksRequest& request, const ListDeployStepTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListDeployStepTasksOutcomeCallable ListDeployStepTasksCallable(const Model::ListDeployStepTasksRequest& request);

                /**
                 *更新用户当前基线项配置，基线配置会覆盖更新为当前配置。新增基线项时需要将新增的基线配置加到现有配置，删除基线项时需要将删除的基线配置从现有配置移除，然后保存最新基线配置。
                 * @param req UpdateAccountFactoryBaselineRequest
                 * @return UpdateAccountFactoryBaselineOutcome
                 */
                UpdateAccountFactoryBaselineOutcome UpdateAccountFactoryBaseline(const Model::UpdateAccountFactoryBaselineRequest &request);
                void UpdateAccountFactoryBaselineAsync(const Model::UpdateAccountFactoryBaselineRequest& request, const UpdateAccountFactoryBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAccountFactoryBaselineOutcomeCallable UpdateAccountFactoryBaselineCallable(const Model::UpdateAccountFactoryBaselineRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CONTROLCENTER_V20230110_CONTROLCENTERCLIENT_H_
