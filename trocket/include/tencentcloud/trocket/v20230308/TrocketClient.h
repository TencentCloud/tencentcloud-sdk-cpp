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

#ifndef TENCENTCLOUD_TROCKET_V20230308_TROCKETCLIENT_H_
#define TENCENTCLOUD_TROCKET_V20230308_TROCKETCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/trocket/v20230308/model/CreateInstanceRequest.h>
#include <tencentcloud/trocket/v20230308/model/CreateInstanceResponse.h>
#include <tencentcloud/trocket/v20230308/model/DeleteInstanceRequest.h>
#include <tencentcloud/trocket/v20230308/model/DeleteInstanceResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeInstanceRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeInstanceResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeInstanceListRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeInstanceListResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeTopicListRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeTopicListResponse.h>
#include <tencentcloud/trocket/v20230308/model/ModifyInstanceRequest.h>
#include <tencentcloud/trocket/v20230308/model/ModifyInstanceResponse.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            class TrocketClient : public AbstractClient
            {
            public:
                TrocketClient(const Credential &credential, const std::string &region);
                TrocketClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateInstanceResponse> CreateInstanceOutcome;
                typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::CreateInstanceRequest&, CreateInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteInstanceResponse> DeleteInstanceOutcome;
                typedef std::future<DeleteInstanceOutcome> DeleteInstanceOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DeleteInstanceRequest&, DeleteInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceResponse> DescribeInstanceOutcome;
                typedef std::future<DescribeInstanceOutcome> DescribeInstanceOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeInstanceRequest&, DescribeInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceListResponse> DescribeInstanceListOutcome;
                typedef std::future<DescribeInstanceListOutcome> DescribeInstanceListOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeInstanceListRequest&, DescribeInstanceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopicListResponse> DescribeTopicListOutcome;
                typedef std::future<DescribeTopicListOutcome> DescribeTopicListOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeTopicListRequest&, DescribeTopicListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopicListAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceResponse> ModifyInstanceOutcome;
                typedef std::future<ModifyInstanceOutcome> ModifyInstanceOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::ModifyInstanceRequest&, ModifyInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceAsyncHandler;



                /**
                 *购买新实例
                 * @param req CreateInstanceRequest
                 * @return CreateInstanceOutcome
                 */
                CreateInstanceOutcome CreateInstance(const Model::CreateInstanceRequest &request);
                void CreateInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstanceOutcomeCallable CreateInstanceCallable(const Model::CreateInstanceRequest& request);

                /**
                 *删除实例
                 * @param req DeleteInstanceRequest
                 * @return DeleteInstanceOutcome
                 */
                DeleteInstanceOutcome DeleteInstance(const Model::DeleteInstanceRequest &request);
                void DeleteInstanceAsync(const Model::DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteInstanceOutcomeCallable DeleteInstanceCallable(const Model::DeleteInstanceRequest& request);

                /**
                 *查询实例信息
                 * @param req DescribeInstanceRequest
                 * @return DescribeInstanceOutcome
                 */
                DescribeInstanceOutcome DescribeInstance(const Model::DescribeInstanceRequest &request);
                void DescribeInstanceAsync(const Model::DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceOutcomeCallable DescribeInstanceCallable(const Model::DescribeInstanceRequest& request);

                /**
                 *获取实例列表，Filters参数使用说明如下：
1. InstanceName, 名称模糊查询
2. InstanceId，实例ID查询
3. InstanceType, 实例类型查询，支持多选
3. InstanceStatus，实例状态查询，支持多选

当使用TagFilters查询时，Filters参数失效。
                 * @param req DescribeInstanceListRequest
                 * @return DescribeInstanceListOutcome
                 */
                DescribeInstanceListOutcome DescribeInstanceList(const Model::DescribeInstanceListRequest &request);
                void DescribeInstanceListAsync(const Model::DescribeInstanceListRequest& request, const DescribeInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceListOutcomeCallable DescribeInstanceListCallable(const Model::DescribeInstanceListRequest& request);

                /**
                 *获取主题列表，Filter参数使用说明如下：

1. TopicName，主题名称模糊搜索
2. TopicType，主题类型查询，支持多选，可选值：Normal,Order,Transaction,DelayScheduled
                 * @param req DescribeTopicListRequest
                 * @return DescribeTopicListOutcome
                 */
                DescribeTopicListOutcome DescribeTopicList(const Model::DescribeTopicListRequest &request);
                void DescribeTopicListAsync(const Model::DescribeTopicListRequest& request, const DescribeTopicListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopicListOutcomeCallable DescribeTopicListCallable(const Model::DescribeTopicListRequest& request);

                /**
                 *修改实例属性
                 * @param req ModifyInstanceRequest
                 * @return ModifyInstanceOutcome
                 */
                ModifyInstanceOutcome ModifyInstance(const Model::ModifyInstanceRequest &request);
                void ModifyInstanceAsync(const Model::ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceOutcomeCallable ModifyInstanceCallable(const Model::ModifyInstanceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_TROCKETCLIENT_H_
