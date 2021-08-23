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

#ifndef TENCENTCLOUD_TIC_V20201117_TICCLIENT_H_
#define TENCENTCLOUD_TIC_V20201117_TICCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tic/v20201117/model/ApplyStackRequest.h>
#include <tencentcloud/tic/v20201117/model/ApplyStackResponse.h>
#include <tencentcloud/tic/v20201117/model/CreateStackRequest.h>
#include <tencentcloud/tic/v20201117/model/CreateStackResponse.h>
#include <tencentcloud/tic/v20201117/model/CreateStackVersionRequest.h>
#include <tencentcloud/tic/v20201117/model/CreateStackVersionResponse.h>
#include <tencentcloud/tic/v20201117/model/DeleteStackRequest.h>
#include <tencentcloud/tic/v20201117/model/DeleteStackResponse.h>
#include <tencentcloud/tic/v20201117/model/DeleteStackVersionRequest.h>
#include <tencentcloud/tic/v20201117/model/DeleteStackVersionResponse.h>
#include <tencentcloud/tic/v20201117/model/DescribeStackEventRequest.h>
#include <tencentcloud/tic/v20201117/model/DescribeStackEventResponse.h>
#include <tencentcloud/tic/v20201117/model/DescribeStackEventsRequest.h>
#include <tencentcloud/tic/v20201117/model/DescribeStackEventsResponse.h>
#include <tencentcloud/tic/v20201117/model/DescribeStackVersionsRequest.h>
#include <tencentcloud/tic/v20201117/model/DescribeStackVersionsResponse.h>
#include <tencentcloud/tic/v20201117/model/DescribeStacksRequest.h>
#include <tencentcloud/tic/v20201117/model/DescribeStacksResponse.h>
#include <tencentcloud/tic/v20201117/model/DestroyStackRequest.h>
#include <tencentcloud/tic/v20201117/model/DestroyStackResponse.h>
#include <tencentcloud/tic/v20201117/model/PlanStackRequest.h>
#include <tencentcloud/tic/v20201117/model/PlanStackResponse.h>
#include <tencentcloud/tic/v20201117/model/UpdateStackRequest.h>
#include <tencentcloud/tic/v20201117/model/UpdateStackResponse.h>
#include <tencentcloud/tic/v20201117/model/UpdateStackVersionRequest.h>
#include <tencentcloud/tic/v20201117/model/UpdateStackVersionResponse.h>


namespace TencentCloud
{
    namespace Tic
    {
        namespace V20201117
        {
            class TicClient : public AbstractClient
            {
            public:
                TicClient(const Credential &credential, const std::string &region);
                TicClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ApplyStackResponse> ApplyStackOutcome;
                typedef std::future<ApplyStackOutcome> ApplyStackOutcomeCallable;
                typedef std::function<void(const TicClient*, const Model::ApplyStackRequest&, ApplyStackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyStackAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStackResponse> CreateStackOutcome;
                typedef std::future<CreateStackOutcome> CreateStackOutcomeCallable;
                typedef std::function<void(const TicClient*, const Model::CreateStackRequest&, CreateStackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStackAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStackVersionResponse> CreateStackVersionOutcome;
                typedef std::future<CreateStackVersionOutcome> CreateStackVersionOutcomeCallable;
                typedef std::function<void(const TicClient*, const Model::CreateStackVersionRequest&, CreateStackVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStackVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteStackResponse> DeleteStackOutcome;
                typedef std::future<DeleteStackOutcome> DeleteStackOutcomeCallable;
                typedef std::function<void(const TicClient*, const Model::DeleteStackRequest&, DeleteStackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStackAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteStackVersionResponse> DeleteStackVersionOutcome;
                typedef std::future<DeleteStackVersionOutcome> DeleteStackVersionOutcomeCallable;
                typedef std::function<void(const TicClient*, const Model::DeleteStackVersionRequest&, DeleteStackVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStackVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStackEventResponse> DescribeStackEventOutcome;
                typedef std::future<DescribeStackEventOutcome> DescribeStackEventOutcomeCallable;
                typedef std::function<void(const TicClient*, const Model::DescribeStackEventRequest&, DescribeStackEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStackEventAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStackEventsResponse> DescribeStackEventsOutcome;
                typedef std::future<DescribeStackEventsOutcome> DescribeStackEventsOutcomeCallable;
                typedef std::function<void(const TicClient*, const Model::DescribeStackEventsRequest&, DescribeStackEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStackEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStackVersionsResponse> DescribeStackVersionsOutcome;
                typedef std::future<DescribeStackVersionsOutcome> DescribeStackVersionsOutcomeCallable;
                typedef std::function<void(const TicClient*, const Model::DescribeStackVersionsRequest&, DescribeStackVersionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStackVersionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStacksResponse> DescribeStacksOutcome;
                typedef std::future<DescribeStacksOutcome> DescribeStacksOutcomeCallable;
                typedef std::function<void(const TicClient*, const Model::DescribeStacksRequest&, DescribeStacksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStacksAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyStackResponse> DestroyStackOutcome;
                typedef std::future<DestroyStackOutcome> DestroyStackOutcomeCallable;
                typedef std::function<void(const TicClient*, const Model::DestroyStackRequest&, DestroyStackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyStackAsyncHandler;
                typedef Outcome<Core::Error, Model::PlanStackResponse> PlanStackOutcome;
                typedef std::future<PlanStackOutcome> PlanStackOutcomeCallable;
                typedef std::function<void(const TicClient*, const Model::PlanStackRequest&, PlanStackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PlanStackAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateStackResponse> UpdateStackOutcome;
                typedef std::future<UpdateStackOutcome> UpdateStackOutcomeCallable;
                typedef std::function<void(const TicClient*, const Model::UpdateStackRequest&, UpdateStackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateStackAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateStackVersionResponse> UpdateStackVersionOutcome;
                typedef std::future<UpdateStackVersionOutcome> UpdateStackVersionOutcomeCallable;
                typedef std::function<void(const TicClient*, const Model::UpdateStackVersionRequest&, UpdateStackVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateStackVersionAsyncHandler;



                /**
                 *本接口（ApplyStack）用于触发资源栈下某个版本的Apply事件。

- 当版本处于PLAN_IN_PROGRESS或APPLY_IN_PROGRESS状态时，将无法再执行本操作
- 当版本处于APPLY_COMPLETED状态时，本操作无法执行
                 * @param req ApplyStackRequest
                 * @return ApplyStackOutcome
                 */
                ApplyStackOutcome ApplyStack(const Model::ApplyStackRequest &request);
                void ApplyStackAsync(const Model::ApplyStackRequest& request, const ApplyStackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyStackOutcomeCallable ApplyStackCallable(const Model::ApplyStackRequest& request);

                /**
                 *本接口（CreateStack）用于通过传递一个COS的terraform zip模版URL来创建一个资源栈。创建资源栈后仍需要用户调用对应的plan, apply, destory执行对应的事件。
                 * @param req CreateStackRequest
                 * @return CreateStackOutcome
                 */
                CreateStackOutcome CreateStack(const Model::CreateStackRequest &request);
                void CreateStackAsync(const Model::CreateStackRequest& request, const CreateStackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStackOutcomeCallable CreateStackCallable(const Model::CreateStackRequest& request);

                /**
                 *本接口（CreateStackVersion）用于给资源栈新增一个HCL模版版本，仅限COS链接，且为zip格式。
                 * @param req CreateStackVersionRequest
                 * @return CreateStackVersionOutcome
                 */
                CreateStackVersionOutcome CreateStackVersion(const Model::CreateStackVersionRequest &request);
                void CreateStackVersionAsync(const Model::CreateStackVersionRequest& request, const CreateStackVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStackVersionOutcomeCallable CreateStackVersionCallable(const Model::CreateStackVersionRequest& request);

                /**
                 *本接口（DeleteStack）用于删除一个资源栈（配置、版本、事件信息）。但不会销毁资源管理的云资源。如果需要销毁资源栈管理的云资源，请调用 DestoryStack 接口销毁云资源。
                 * @param req DeleteStackRequest
                 * @return DeleteStackOutcome
                 */
                DeleteStackOutcome DeleteStack(const Model::DeleteStackRequest &request);
                void DeleteStackAsync(const Model::DeleteStackRequest& request, const DeleteStackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteStackOutcomeCallable DeleteStackCallable(const Model::DeleteStackRequest& request);

                /**
                 *本接口（DeleteStackVersion）用于删除一个版本，处于PLAN_IN_PROGRESS和APPLY_IN_PROGRESS状态中的版本无法删除。
                 * @param req DeleteStackVersionRequest
                 * @return DeleteStackVersionOutcome
                 */
                DeleteStackVersionOutcome DeleteStackVersion(const Model::DeleteStackVersionRequest &request);
                void DeleteStackVersionAsync(const Model::DeleteStackVersionRequest& request, const DeleteStackVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteStackVersionOutcomeCallable DeleteStackVersionCallable(const Model::DeleteStackVersionRequest& request);

                /**
                 *本接口（DescribeStackEvent）用于获取单个事件详情，尤其是可以得到事件的详细控制台输出文本。
                 * @param req DescribeStackEventRequest
                 * @return DescribeStackEventOutcome
                 */
                DescribeStackEventOutcome DescribeStackEvent(const Model::DescribeStackEventRequest &request);
                void DescribeStackEventAsync(const Model::DescribeStackEventRequest& request, const DescribeStackEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStackEventOutcomeCallable DescribeStackEventCallable(const Model::DescribeStackEventRequest& request);

                /**
                 *本接口（DescribeStackEvents）用于查看一个或多个事件详细信息。

- 可以根据事件ID过滤感兴趣的事件
- 也可以根据版本ID，资源栈ID，事件类型，事件状态过滤事件，过滤信息详细请见过滤器Filter
- 如果参数为空，返回当前用户一定数量（Limit所指定的数量，默认为20）的事件
                 * @param req DescribeStackEventsRequest
                 * @return DescribeStackEventsOutcome
                 */
                DescribeStackEventsOutcome DescribeStackEvents(const Model::DescribeStackEventsRequest &request);
                void DescribeStackEventsAsync(const Model::DescribeStackEventsRequest& request, const DescribeStackEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStackEventsOutcomeCallable DescribeStackEventsCallable(const Model::DescribeStackEventsRequest& request);

                /**
                 *本接口（DescribeStackVersions）用于查询一个或多个版本的详细信息。

- 可以根据版本ID查询感兴趣的版本
- 可以根据版本名字和状态来过滤版本，详见过滤器Filter
- 如果参数为空，返回当前用户一定数量（Limit所指定的数量，默认为20）的版本
                 * @param req DescribeStackVersionsRequest
                 * @return DescribeStackVersionsOutcome
                 */
                DescribeStackVersionsOutcome DescribeStackVersions(const Model::DescribeStackVersionsRequest &request);
                void DescribeStackVersionsAsync(const Model::DescribeStackVersionsRequest& request, const DescribeStackVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStackVersionsOutcomeCallable DescribeStackVersionsCallable(const Model::DescribeStackVersionsRequest& request);

                /**
                 *本接口（DescribeStacks）用于查询一个或多个资源栈的详细信息。

- 可以根据资源栈ID来查询感兴趣的资源栈信息
- 若参数为空，返回当前用户一定数量（Limit所指定的数量，默认为20）的资源栈
                 * @param req DescribeStacksRequest
                 * @return DescribeStacksOutcome
                 */
                DescribeStacksOutcome DescribeStacks(const Model::DescribeStacksRequest &request);
                void DescribeStacksAsync(const Model::DescribeStacksRequest& request, const DescribeStacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStacksOutcomeCallable DescribeStacksCallable(const Model::DescribeStacksRequest& request);

                /**
                 *本接口（DestroyStack）用于删除资源栈下的某个版本所创建的资源。
                 * @param req DestroyStackRequest
                 * @return DestroyStackOutcome
                 */
                DestroyStackOutcome DestroyStack(const Model::DestroyStackRequest &request);
                void DestroyStackAsync(const Model::DestroyStackRequest& request, const DestroyStackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyStackOutcomeCallable DestroyStackCallable(const Model::DestroyStackRequest& request);

                /**
                 *本接口（PlanStack）用于触发资源栈下某个版本的PLAN事件。

- 当版本处于PLAN_IN_PROGRESS或APPLY_IN_PROGRESS状态时，将无法再执行本操作
- 当版本处于APPLY_COMPLETED状态时，本操作无法执行
                 * @param req PlanStackRequest
                 * @return PlanStackOutcome
                 */
                PlanStackOutcome PlanStack(const Model::PlanStackRequest &request);
                void PlanStackAsync(const Model::PlanStackRequest& request, const PlanStackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PlanStackOutcomeCallable PlanStackCallable(const Model::PlanStackRequest& request);

                /**
                 *本接口（UpdateStack）用于更新资源栈的名称和描述。
                 * @param req UpdateStackRequest
                 * @return UpdateStackOutcome
                 */
                UpdateStackOutcome UpdateStack(const Model::UpdateStackRequest &request);
                void UpdateStackAsync(const Model::UpdateStackRequest& request, const UpdateStackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateStackOutcomeCallable UpdateStackCallable(const Model::UpdateStackRequest& request);

                /**
                 *本接口（UpdateStackVersion）用于更新一个版本的模版内容，名称或描述，模版仅限COS URL，且为zip格式。
                 * @param req UpdateStackVersionRequest
                 * @return UpdateStackVersionOutcome
                 */
                UpdateStackVersionOutcome UpdateStackVersion(const Model::UpdateStackVersionRequest &request);
                void UpdateStackVersionAsync(const Model::UpdateStackVersionRequest& request, const UpdateStackVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateStackVersionOutcomeCallable UpdateStackVersionCallable(const Model::UpdateStackVersionRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TIC_V20201117_TICCLIENT_H_
