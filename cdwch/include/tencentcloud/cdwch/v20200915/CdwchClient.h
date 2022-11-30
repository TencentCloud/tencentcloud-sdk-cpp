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

#ifndef TENCENTCLOUD_CDWCH_V20200915_CDWCHCLIENT_H_
#define TENCENTCLOUD_CDWCH_V20200915_CDWCHCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cdwch/v20200915/model/ActionAlterCkUserRequest.h>
#include <tencentcloud/cdwch/v20200915/model/ActionAlterCkUserResponse.h>
#include <tencentcloud/cdwch/v20200915/model/CreateBackUpScheduleRequest.h>
#include <tencentcloud/cdwch/v20200915/model/CreateBackUpScheduleResponse.h>
#include <tencentcloud/cdwch/v20200915/model/DescribeCkSqlApisRequest.h>
#include <tencentcloud/cdwch/v20200915/model/DescribeCkSqlApisResponse.h>
#include <tencentcloud/cdwch/v20200915/model/DescribeInstanceShardsRequest.h>
#include <tencentcloud/cdwch/v20200915/model/DescribeInstanceShardsResponse.h>
#include <tencentcloud/cdwch/v20200915/model/DescribeSpecRequest.h>
#include <tencentcloud/cdwch/v20200915/model/DescribeSpecResponse.h>
#include <tencentcloud/cdwch/v20200915/model/ModifyClusterConfigsRequest.h>
#include <tencentcloud/cdwch/v20200915/model/ModifyClusterConfigsResponse.h>
#include <tencentcloud/cdwch/v20200915/model/ModifyUserNewPrivilegeRequest.h>
#include <tencentcloud/cdwch/v20200915/model/ModifyUserNewPrivilegeResponse.h>
#include <tencentcloud/cdwch/v20200915/model/OpenBackUpRequest.h>
#include <tencentcloud/cdwch/v20200915/model/OpenBackUpResponse.h>


namespace TencentCloud
{
    namespace Cdwch
    {
        namespace V20200915
        {
            class CdwchClient : public AbstractClient
            {
            public:
                CdwchClient(const Credential &credential, const std::string &region);
                CdwchClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ActionAlterCkUserResponse> ActionAlterCkUserOutcome;
                typedef std::future<ActionAlterCkUserOutcome> ActionAlterCkUserOutcomeCallable;
                typedef std::function<void(const CdwchClient*, const Model::ActionAlterCkUserRequest&, ActionAlterCkUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ActionAlterCkUserAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBackUpScheduleResponse> CreateBackUpScheduleOutcome;
                typedef std::future<CreateBackUpScheduleOutcome> CreateBackUpScheduleOutcomeCallable;
                typedef std::function<void(const CdwchClient*, const Model::CreateBackUpScheduleRequest&, CreateBackUpScheduleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBackUpScheduleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCkSqlApisResponse> DescribeCkSqlApisOutcome;
                typedef std::future<DescribeCkSqlApisOutcome> DescribeCkSqlApisOutcomeCallable;
                typedef std::function<void(const CdwchClient*, const Model::DescribeCkSqlApisRequest&, DescribeCkSqlApisOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCkSqlApisAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceShardsResponse> DescribeInstanceShardsOutcome;
                typedef std::future<DescribeInstanceShardsOutcome> DescribeInstanceShardsOutcomeCallable;
                typedef std::function<void(const CdwchClient*, const Model::DescribeInstanceShardsRequest&, DescribeInstanceShardsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceShardsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSpecResponse> DescribeSpecOutcome;
                typedef std::future<DescribeSpecOutcome> DescribeSpecOutcomeCallable;
                typedef std::function<void(const CdwchClient*, const Model::DescribeSpecRequest&, DescribeSpecOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSpecAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClusterConfigsResponse> ModifyClusterConfigsOutcome;
                typedef std::future<ModifyClusterConfigsOutcome> ModifyClusterConfigsOutcomeCallable;
                typedef std::function<void(const CdwchClient*, const Model::ModifyClusterConfigsRequest&, ModifyClusterConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserNewPrivilegeResponse> ModifyUserNewPrivilegeOutcome;
                typedef std::future<ModifyUserNewPrivilegeOutcome> ModifyUserNewPrivilegeOutcomeCallable;
                typedef std::function<void(const CdwchClient*, const Model::ModifyUserNewPrivilegeRequest&, ModifyUserNewPrivilegeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserNewPrivilegeAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenBackUpResponse> OpenBackUpOutcome;
                typedef std::future<OpenBackUpOutcome> OpenBackUpOutcomeCallable;
                typedef std::function<void(const CdwchClient*, const Model::OpenBackUpRequest&, OpenBackUpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenBackUpAsyncHandler;



                /**
                 *新增和修改用户接口
                 * @param req ActionAlterCkUserRequest
                 * @return ActionAlterCkUserOutcome
                 */
                ActionAlterCkUserOutcome ActionAlterCkUser(const Model::ActionAlterCkUserRequest &request);
                void ActionAlterCkUserAsync(const Model::ActionAlterCkUserRequest& request, const ActionAlterCkUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ActionAlterCkUserOutcomeCallable ActionAlterCkUserCallable(const Model::ActionAlterCkUserRequest& request);

                /**
                 *创建或者修改备份策略
                 * @param req CreateBackUpScheduleRequest
                 * @return CreateBackUpScheduleOutcome
                 */
                CreateBackUpScheduleOutcome CreateBackUpSchedule(const Model::CreateBackUpScheduleRequest &request);
                void CreateBackUpScheduleAsync(const Model::CreateBackUpScheduleRequest& request, const CreateBackUpScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBackUpScheduleOutcomeCallable CreateBackUpScheduleCallable(const Model::CreateBackUpScheduleRequest& request);

                /**
                 *针对驱动sql命令查询ck集群接口
                 * @param req DescribeCkSqlApisRequest
                 * @return DescribeCkSqlApisOutcome
                 */
                DescribeCkSqlApisOutcome DescribeCkSqlApis(const Model::DescribeCkSqlApisRequest &request);
                void DescribeCkSqlApisAsync(const Model::DescribeCkSqlApisRequest& request, const DescribeCkSqlApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCkSqlApisOutcomeCallable DescribeCkSqlApisCallable(const Model::DescribeCkSqlApisRequest& request);

                /**
                 *获取实例shard信息列表
                 * @param req DescribeInstanceShardsRequest
                 * @return DescribeInstanceShardsOutcome
                 */
                DescribeInstanceShardsOutcome DescribeInstanceShards(const Model::DescribeInstanceShardsRequest &request);
                void DescribeInstanceShardsAsync(const Model::DescribeInstanceShardsRequest& request, const DescribeInstanceShardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceShardsOutcomeCallable DescribeInstanceShardsCallable(const Model::DescribeInstanceShardsRequest& request);

                /**
                 *购买页拉取集群的数据节点和zookeeper节点的规格列表
                 * @param req DescribeSpecRequest
                 * @return DescribeSpecOutcome
                 */
                DescribeSpecOutcome DescribeSpec(const Model::DescribeSpecRequest &request);
                void DescribeSpecAsync(const Model::DescribeSpecRequest& request, const DescribeSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSpecOutcomeCallable DescribeSpecCallable(const Model::DescribeSpecRequest& request);

                /**
                 *在集群配置页面修改集群配置文件接口，xml模式
                 * @param req ModifyClusterConfigsRequest
                 * @return ModifyClusterConfigsOutcome
                 */
                ModifyClusterConfigsOutcome ModifyClusterConfigs(const Model::ModifyClusterConfigsRequest &request);
                void ModifyClusterConfigsAsync(const Model::ModifyClusterConfigsRequest& request, const ModifyClusterConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClusterConfigsOutcomeCallable ModifyClusterConfigsCallable(const Model::ModifyClusterConfigsRequest& request);

                /**
                 *针对ck账号的权限做管控（新版）
                 * @param req ModifyUserNewPrivilegeRequest
                 * @return ModifyUserNewPrivilegeOutcome
                 */
                ModifyUserNewPrivilegeOutcome ModifyUserNewPrivilege(const Model::ModifyUserNewPrivilegeRequest &request);
                void ModifyUserNewPrivilegeAsync(const Model::ModifyUserNewPrivilegeRequest& request, const ModifyUserNewPrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUserNewPrivilegeOutcomeCallable ModifyUserNewPrivilegeCallable(const Model::ModifyUserNewPrivilegeRequest& request);

                /**
                 *开启或者关闭策略
                 * @param req OpenBackUpRequest
                 * @return OpenBackUpOutcome
                 */
                OpenBackUpOutcome OpenBackUp(const Model::OpenBackUpRequest &request);
                void OpenBackUpAsync(const Model::OpenBackUpRequest& request, const OpenBackUpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenBackUpOutcomeCallable OpenBackUpCallable(const Model::OpenBackUpRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_CDWCHCLIENT_H_
