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
#include <tencentcloud/cdwch/v20200915/model/CreateInstanceNewRequest.h>
#include <tencentcloud/cdwch/v20200915/model/CreateInstanceNewResponse.h>
#include <tencentcloud/cdwch/v20200915/model/DeleteBackUpDataRequest.h>
#include <tencentcloud/cdwch/v20200915/model/DeleteBackUpDataResponse.h>
#include <tencentcloud/cdwch/v20200915/model/DescribeBackUpJobRequest.h>
#include <tencentcloud/cdwch/v20200915/model/DescribeBackUpJobResponse.h>
#include <tencentcloud/cdwch/v20200915/model/DescribeBackUpJobDetailRequest.h>
#include <tencentcloud/cdwch/v20200915/model/DescribeBackUpJobDetailResponse.h>
#include <tencentcloud/cdwch/v20200915/model/DescribeBackUpScheduleRequest.h>
#include <tencentcloud/cdwch/v20200915/model/DescribeBackUpScheduleResponse.h>
#include <tencentcloud/cdwch/v20200915/model/DescribeBackUpTablesRequest.h>
#include <tencentcloud/cdwch/v20200915/model/DescribeBackUpTablesResponse.h>
#include <tencentcloud/cdwch/v20200915/model/DescribeCkSqlApisRequest.h>
#include <tencentcloud/cdwch/v20200915/model/DescribeCkSqlApisResponse.h>
#include <tencentcloud/cdwch/v20200915/model/DescribeClusterConfigsRequest.h>
#include <tencentcloud/cdwch/v20200915/model/DescribeClusterConfigsResponse.h>
#include <tencentcloud/cdwch/v20200915/model/DescribeInstanceRequest.h>
#include <tencentcloud/cdwch/v20200915/model/DescribeInstanceResponse.h>
#include <tencentcloud/cdwch/v20200915/model/DescribeInstanceClustersRequest.h>
#include <tencentcloud/cdwch/v20200915/model/DescribeInstanceClustersResponse.h>
#include <tencentcloud/cdwch/v20200915/model/DescribeInstanceKeyValConfigsRequest.h>
#include <tencentcloud/cdwch/v20200915/model/DescribeInstanceKeyValConfigsResponse.h>
#include <tencentcloud/cdwch/v20200915/model/DescribeInstanceNodesRequest.h>
#include <tencentcloud/cdwch/v20200915/model/DescribeInstanceNodesResponse.h>
#include <tencentcloud/cdwch/v20200915/model/DescribeInstanceShardsRequest.h>
#include <tencentcloud/cdwch/v20200915/model/DescribeInstanceShardsResponse.h>
#include <tencentcloud/cdwch/v20200915/model/DescribeInstanceStateRequest.h>
#include <tencentcloud/cdwch/v20200915/model/DescribeInstanceStateResponse.h>
#include <tencentcloud/cdwch/v20200915/model/DescribeInstancesNewRequest.h>
#include <tencentcloud/cdwch/v20200915/model/DescribeInstancesNewResponse.h>
#include <tencentcloud/cdwch/v20200915/model/DescribeSpecRequest.h>
#include <tencentcloud/cdwch/v20200915/model/DescribeSpecResponse.h>
#include <tencentcloud/cdwch/v20200915/model/DestroyInstanceRequest.h>
#include <tencentcloud/cdwch/v20200915/model/DestroyInstanceResponse.h>
#include <tencentcloud/cdwch/v20200915/model/ModifyClusterConfigsRequest.h>
#include <tencentcloud/cdwch/v20200915/model/ModifyClusterConfigsResponse.h>
#include <tencentcloud/cdwch/v20200915/model/ModifyInstanceKeyValConfigsRequest.h>
#include <tencentcloud/cdwch/v20200915/model/ModifyInstanceKeyValConfigsResponse.h>
#include <tencentcloud/cdwch/v20200915/model/ModifyUserNewPrivilegeRequest.h>
#include <tencentcloud/cdwch/v20200915/model/ModifyUserNewPrivilegeResponse.h>
#include <tencentcloud/cdwch/v20200915/model/OpenBackUpRequest.h>
#include <tencentcloud/cdwch/v20200915/model/OpenBackUpResponse.h>
#include <tencentcloud/cdwch/v20200915/model/RecoverBackUpJobRequest.h>
#include <tencentcloud/cdwch/v20200915/model/RecoverBackUpJobResponse.h>
#include <tencentcloud/cdwch/v20200915/model/ResizeDiskRequest.h>
#include <tencentcloud/cdwch/v20200915/model/ResizeDiskResponse.h>
#include <tencentcloud/cdwch/v20200915/model/ScaleCNOutUpInstanceRequest.h>
#include <tencentcloud/cdwch/v20200915/model/ScaleCNOutUpInstanceResponse.h>
#include <tencentcloud/cdwch/v20200915/model/ScaleOutInstanceRequest.h>
#include <tencentcloud/cdwch/v20200915/model/ScaleOutInstanceResponse.h>
#include <tencentcloud/cdwch/v20200915/model/ScaleUpInstanceRequest.h>
#include <tencentcloud/cdwch/v20200915/model/ScaleUpInstanceResponse.h>


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
                typedef Outcome<Core::Error, Model::CreateInstanceNewResponse> CreateInstanceNewOutcome;
                typedef std::future<CreateInstanceNewOutcome> CreateInstanceNewOutcomeCallable;
                typedef std::function<void(const CdwchClient*, const Model::CreateInstanceNewRequest&, CreateInstanceNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceNewAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBackUpDataResponse> DeleteBackUpDataOutcome;
                typedef std::future<DeleteBackUpDataOutcome> DeleteBackUpDataOutcomeCallable;
                typedef std::function<void(const CdwchClient*, const Model::DeleteBackUpDataRequest&, DeleteBackUpDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBackUpDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackUpJobResponse> DescribeBackUpJobOutcome;
                typedef std::future<DescribeBackUpJobOutcome> DescribeBackUpJobOutcomeCallable;
                typedef std::function<void(const CdwchClient*, const Model::DescribeBackUpJobRequest&, DescribeBackUpJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackUpJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackUpJobDetailResponse> DescribeBackUpJobDetailOutcome;
                typedef std::future<DescribeBackUpJobDetailOutcome> DescribeBackUpJobDetailOutcomeCallable;
                typedef std::function<void(const CdwchClient*, const Model::DescribeBackUpJobDetailRequest&, DescribeBackUpJobDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackUpJobDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackUpScheduleResponse> DescribeBackUpScheduleOutcome;
                typedef std::future<DescribeBackUpScheduleOutcome> DescribeBackUpScheduleOutcomeCallable;
                typedef std::function<void(const CdwchClient*, const Model::DescribeBackUpScheduleRequest&, DescribeBackUpScheduleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackUpScheduleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackUpTablesResponse> DescribeBackUpTablesOutcome;
                typedef std::future<DescribeBackUpTablesOutcome> DescribeBackUpTablesOutcomeCallable;
                typedef std::function<void(const CdwchClient*, const Model::DescribeBackUpTablesRequest&, DescribeBackUpTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackUpTablesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCkSqlApisResponse> DescribeCkSqlApisOutcome;
                typedef std::future<DescribeCkSqlApisOutcome> DescribeCkSqlApisOutcomeCallable;
                typedef std::function<void(const CdwchClient*, const Model::DescribeCkSqlApisRequest&, DescribeCkSqlApisOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCkSqlApisAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterConfigsResponse> DescribeClusterConfigsOutcome;
                typedef std::future<DescribeClusterConfigsOutcome> DescribeClusterConfigsOutcomeCallable;
                typedef std::function<void(const CdwchClient*, const Model::DescribeClusterConfigsRequest&, DescribeClusterConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceResponse> DescribeInstanceOutcome;
                typedef std::future<DescribeInstanceOutcome> DescribeInstanceOutcomeCallable;
                typedef std::function<void(const CdwchClient*, const Model::DescribeInstanceRequest&, DescribeInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceClustersResponse> DescribeInstanceClustersOutcome;
                typedef std::future<DescribeInstanceClustersOutcome> DescribeInstanceClustersOutcomeCallable;
                typedef std::function<void(const CdwchClient*, const Model::DescribeInstanceClustersRequest&, DescribeInstanceClustersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceClustersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceKeyValConfigsResponse> DescribeInstanceKeyValConfigsOutcome;
                typedef std::future<DescribeInstanceKeyValConfigsOutcome> DescribeInstanceKeyValConfigsOutcomeCallable;
                typedef std::function<void(const CdwchClient*, const Model::DescribeInstanceKeyValConfigsRequest&, DescribeInstanceKeyValConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceKeyValConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceNodesResponse> DescribeInstanceNodesOutcome;
                typedef std::future<DescribeInstanceNodesOutcome> DescribeInstanceNodesOutcomeCallable;
                typedef std::function<void(const CdwchClient*, const Model::DescribeInstanceNodesRequest&, DescribeInstanceNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceShardsResponse> DescribeInstanceShardsOutcome;
                typedef std::future<DescribeInstanceShardsOutcome> DescribeInstanceShardsOutcomeCallable;
                typedef std::function<void(const CdwchClient*, const Model::DescribeInstanceShardsRequest&, DescribeInstanceShardsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceShardsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceStateResponse> DescribeInstanceStateOutcome;
                typedef std::future<DescribeInstanceStateOutcome> DescribeInstanceStateOutcomeCallable;
                typedef std::function<void(const CdwchClient*, const Model::DescribeInstanceStateRequest&, DescribeInstanceStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceStateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesNewResponse> DescribeInstancesNewOutcome;
                typedef std::future<DescribeInstancesNewOutcome> DescribeInstancesNewOutcomeCallable;
                typedef std::function<void(const CdwchClient*, const Model::DescribeInstancesNewRequest&, DescribeInstancesNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesNewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSpecResponse> DescribeSpecOutcome;
                typedef std::future<DescribeSpecOutcome> DescribeSpecOutcomeCallable;
                typedef std::function<void(const CdwchClient*, const Model::DescribeSpecRequest&, DescribeSpecOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSpecAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyInstanceResponse> DestroyInstanceOutcome;
                typedef std::future<DestroyInstanceOutcome> DestroyInstanceOutcomeCallable;
                typedef std::function<void(const CdwchClient*, const Model::DestroyInstanceRequest&, DestroyInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClusterConfigsResponse> ModifyClusterConfigsOutcome;
                typedef std::future<ModifyClusterConfigsOutcome> ModifyClusterConfigsOutcomeCallable;
                typedef std::function<void(const CdwchClient*, const Model::ModifyClusterConfigsRequest&, ModifyClusterConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceKeyValConfigsResponse> ModifyInstanceKeyValConfigsOutcome;
                typedef std::future<ModifyInstanceKeyValConfigsOutcome> ModifyInstanceKeyValConfigsOutcomeCallable;
                typedef std::function<void(const CdwchClient*, const Model::ModifyInstanceKeyValConfigsRequest&, ModifyInstanceKeyValConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceKeyValConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserNewPrivilegeResponse> ModifyUserNewPrivilegeOutcome;
                typedef std::future<ModifyUserNewPrivilegeOutcome> ModifyUserNewPrivilegeOutcomeCallable;
                typedef std::function<void(const CdwchClient*, const Model::ModifyUserNewPrivilegeRequest&, ModifyUserNewPrivilegeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserNewPrivilegeAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenBackUpResponse> OpenBackUpOutcome;
                typedef std::future<OpenBackUpOutcome> OpenBackUpOutcomeCallable;
                typedef std::function<void(const CdwchClient*, const Model::OpenBackUpRequest&, OpenBackUpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenBackUpAsyncHandler;
                typedef Outcome<Core::Error, Model::RecoverBackUpJobResponse> RecoverBackUpJobOutcome;
                typedef std::future<RecoverBackUpJobOutcome> RecoverBackUpJobOutcomeCallable;
                typedef std::function<void(const CdwchClient*, const Model::RecoverBackUpJobRequest&, RecoverBackUpJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecoverBackUpJobAsyncHandler;
                typedef Outcome<Core::Error, Model::ResizeDiskResponse> ResizeDiskOutcome;
                typedef std::future<ResizeDiskOutcome> ResizeDiskOutcomeCallable;
                typedef std::function<void(const CdwchClient*, const Model::ResizeDiskRequest&, ResizeDiskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResizeDiskAsyncHandler;
                typedef Outcome<Core::Error, Model::ScaleCNOutUpInstanceResponse> ScaleCNOutUpInstanceOutcome;
                typedef std::future<ScaleCNOutUpInstanceOutcome> ScaleCNOutUpInstanceOutcomeCallable;
                typedef std::function<void(const CdwchClient*, const Model::ScaleCNOutUpInstanceRequest&, ScaleCNOutUpInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScaleCNOutUpInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ScaleOutInstanceResponse> ScaleOutInstanceOutcome;
                typedef std::future<ScaleOutInstanceOutcome> ScaleOutInstanceOutcomeCallable;
                typedef std::function<void(const CdwchClient*, const Model::ScaleOutInstanceRequest&, ScaleOutInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScaleOutInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ScaleUpInstanceResponse> ScaleUpInstanceOutcome;
                typedef std::future<ScaleUpInstanceOutcome> ScaleUpInstanceOutcomeCallable;
                typedef std::function<void(const CdwchClient*, const Model::ScaleUpInstanceRequest&, ScaleUpInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScaleUpInstanceAsyncHandler;



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
                 *创建集群
                 * @param req CreateInstanceNewRequest
                 * @return CreateInstanceNewOutcome
                 */
                CreateInstanceNewOutcome CreateInstanceNew(const Model::CreateInstanceNewRequest &request);
                void CreateInstanceNewAsync(const Model::CreateInstanceNewRequest& request, const CreateInstanceNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstanceNewOutcomeCallable CreateInstanceNewCallable(const Model::CreateInstanceNewRequest& request);

                /**
                 *删除备份数据
                 * @param req DeleteBackUpDataRequest
                 * @return DeleteBackUpDataOutcome
                 */
                DeleteBackUpDataOutcome DeleteBackUpData(const Model::DeleteBackUpDataRequest &request);
                void DeleteBackUpDataAsync(const Model::DeleteBackUpDataRequest& request, const DeleteBackUpDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBackUpDataOutcomeCallable DeleteBackUpDataCallable(const Model::DeleteBackUpDataRequest& request);

                /**
                 *查询备份任务列表
                 * @param req DescribeBackUpJobRequest
                 * @return DescribeBackUpJobOutcome
                 */
                DescribeBackUpJobOutcome DescribeBackUpJob(const Model::DescribeBackUpJobRequest &request);
                void DescribeBackUpJobAsync(const Model::DescribeBackUpJobRequest& request, const DescribeBackUpJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackUpJobOutcomeCallable DescribeBackUpJobCallable(const Model::DescribeBackUpJobRequest& request);

                /**
                 *查询备份任务详情
                 * @param req DescribeBackUpJobDetailRequest
                 * @return DescribeBackUpJobDetailOutcome
                 */
                DescribeBackUpJobDetailOutcome DescribeBackUpJobDetail(const Model::DescribeBackUpJobDetailRequest &request);
                void DescribeBackUpJobDetailAsync(const Model::DescribeBackUpJobDetailRequest& request, const DescribeBackUpJobDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackUpJobDetailOutcomeCallable DescribeBackUpJobDetailCallable(const Model::DescribeBackUpJobDetailRequest& request);

                /**
                 *查询备份策略信息
                 * @param req DescribeBackUpScheduleRequest
                 * @return DescribeBackUpScheduleOutcome
                 */
                DescribeBackUpScheduleOutcome DescribeBackUpSchedule(const Model::DescribeBackUpScheduleRequest &request);
                void DescribeBackUpScheduleAsync(const Model::DescribeBackUpScheduleRequest& request, const DescribeBackUpScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackUpScheduleOutcomeCallable DescribeBackUpScheduleCallable(const Model::DescribeBackUpScheduleRequest& request);

                /**
                 *获取可备份表信息
                 * @param req DescribeBackUpTablesRequest
                 * @return DescribeBackUpTablesOutcome
                 */
                DescribeBackUpTablesOutcome DescribeBackUpTables(const Model::DescribeBackUpTablesRequest &request);
                void DescribeBackUpTablesAsync(const Model::DescribeBackUpTablesRequest& request, const DescribeBackUpTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackUpTablesOutcomeCallable DescribeBackUpTablesCallable(const Model::DescribeBackUpTablesRequest& request);

                /**
                 *查询集群用户、集群表，数据库等相关信息
                 * @param req DescribeCkSqlApisRequest
                 * @return DescribeCkSqlApisOutcome
                 */
                DescribeCkSqlApisOutcome DescribeCkSqlApis(const Model::DescribeCkSqlApisRequest &request);
                void DescribeCkSqlApisAsync(const Model::DescribeCkSqlApisRequest& request, const DescribeCkSqlApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCkSqlApisOutcomeCallable DescribeCkSqlApisCallable(const Model::DescribeCkSqlApisRequest& request);

                /**
                 *获取集群的最新的几个配置文件（config.xml、metrika.xml、user.xml）的内容，显示给用户
                 * @param req DescribeClusterConfigsRequest
                 * @return DescribeClusterConfigsOutcome
                 */
                DescribeClusterConfigsOutcome DescribeClusterConfigs(const Model::DescribeClusterConfigsRequest &request);
                void DescribeClusterConfigsAsync(const Model::DescribeClusterConfigsRequest& request, const DescribeClusterConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterConfigsOutcomeCallable DescribeClusterConfigsCallable(const Model::DescribeClusterConfigsRequest& request);

                /**
                 *根据实例ID查询某个实例的具体信息
                 * @param req DescribeInstanceRequest
                 * @return DescribeInstanceOutcome
                 */
                DescribeInstanceOutcome DescribeInstance(const Model::DescribeInstanceRequest &request);
                void DescribeInstanceAsync(const Model::DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceOutcomeCallable DescribeInstanceCallable(const Model::DescribeInstanceRequest& request);

                /**
                 *集群vcluster列表
                 * @param req DescribeInstanceClustersRequest
                 * @return DescribeInstanceClustersOutcome
                 */
                DescribeInstanceClustersOutcome DescribeInstanceClusters(const Model::DescribeInstanceClustersRequest &request);
                void DescribeInstanceClustersAsync(const Model::DescribeInstanceClustersRequest& request, const DescribeInstanceClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceClustersOutcomeCallable DescribeInstanceClustersCallable(const Model::DescribeInstanceClustersRequest& request);

                /**
                 *在集群详情页面获取所有参数列表
                 * @param req DescribeInstanceKeyValConfigsRequest
                 * @return DescribeInstanceKeyValConfigsOutcome
                 */
                DescribeInstanceKeyValConfigsOutcome DescribeInstanceKeyValConfigs(const Model::DescribeInstanceKeyValConfigsRequest &request);
                void DescribeInstanceKeyValConfigsAsync(const Model::DescribeInstanceKeyValConfigsRequest& request, const DescribeInstanceKeyValConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceKeyValConfigsOutcomeCallable DescribeInstanceKeyValConfigsCallable(const Model::DescribeInstanceKeyValConfigsRequest& request);

                /**
                 *获取实例节点信息列表
                 * @param req DescribeInstanceNodesRequest
                 * @return DescribeInstanceNodesOutcome
                 */
                DescribeInstanceNodesOutcome DescribeInstanceNodes(const Model::DescribeInstanceNodesRequest &request);
                void DescribeInstanceNodesAsync(const Model::DescribeInstanceNodesRequest& request, const DescribeInstanceNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceNodesOutcomeCallable DescribeInstanceNodesCallable(const Model::DescribeInstanceNodesRequest& request);

                /**
                 *获取实例shard信息列表
                 * @param req DescribeInstanceShardsRequest
                 * @return DescribeInstanceShardsOutcome
                 */
                DescribeInstanceShardsOutcome DescribeInstanceShards(const Model::DescribeInstanceShardsRequest &request);
                void DescribeInstanceShardsAsync(const Model::DescribeInstanceShardsRequest& request, const DescribeInstanceShardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceShardsOutcomeCallable DescribeInstanceShardsCallable(const Model::DescribeInstanceShardsRequest& request);

                /**
                 *集群详情页中显示集群状态、流程进度等
                 * @param req DescribeInstanceStateRequest
                 * @return DescribeInstanceStateOutcome
                 */
                DescribeInstanceStateOutcome DescribeInstanceState(const Model::DescribeInstanceStateRequest &request);
                void DescribeInstanceStateAsync(const Model::DescribeInstanceStateRequest& request, const DescribeInstanceStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceStateOutcomeCallable DescribeInstanceStateCallable(const Model::DescribeInstanceStateRequest& request);

                /**
                 *获取实例列表，供外部sdk使用
                 * @param req DescribeInstancesNewRequest
                 * @return DescribeInstancesNewOutcome
                 */
                DescribeInstancesNewOutcome DescribeInstancesNew(const Model::DescribeInstancesNewRequest &request);
                void DescribeInstancesNewAsync(const Model::DescribeInstancesNewRequest& request, const DescribeInstancesNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesNewOutcomeCallable DescribeInstancesNewCallable(const Model::DescribeInstancesNewRequest& request);

                /**
                 *购买页拉取集群的数据节点和zookeeper节点的规格列表
                 * @param req DescribeSpecRequest
                 * @return DescribeSpecOutcome
                 */
                DescribeSpecOutcome DescribeSpec(const Model::DescribeSpecRequest &request);
                void DescribeSpecAsync(const Model::DescribeSpecRequest& request, const DescribeSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSpecOutcomeCallable DescribeSpecCallable(const Model::DescribeSpecRequest& request);

                /**
                 *销毁集群 open api
                 * @param req DestroyInstanceRequest
                 * @return DestroyInstanceOutcome
                 */
                DestroyInstanceOutcome DestroyInstance(const Model::DestroyInstanceRequest &request);
                void DestroyInstanceAsync(const Model::DestroyInstanceRequest& request, const DestroyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyInstanceOutcomeCallable DestroyInstanceCallable(const Model::DestroyInstanceRequest& request);

                /**
                 *在集群配置页面修改集群配置文件接口，xml模式
                 * @param req ModifyClusterConfigsRequest
                 * @return ModifyClusterConfigsOutcome
                 */
                ModifyClusterConfigsOutcome ModifyClusterConfigs(const Model::ModifyClusterConfigsRequest &request);
                void ModifyClusterConfigsAsync(const Model::ModifyClusterConfigsRequest& request, const ModifyClusterConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClusterConfigsOutcomeCallable ModifyClusterConfigsCallable(const Model::ModifyClusterConfigsRequest& request);

                /**
                 *KV模式修改配置接口
                 * @param req ModifyInstanceKeyValConfigsRequest
                 * @return ModifyInstanceKeyValConfigsOutcome
                 */
                ModifyInstanceKeyValConfigsOutcome ModifyInstanceKeyValConfigs(const Model::ModifyInstanceKeyValConfigsRequest &request);
                void ModifyInstanceKeyValConfigsAsync(const Model::ModifyInstanceKeyValConfigsRequest& request, const ModifyInstanceKeyValConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceKeyValConfigsOutcomeCallable ModifyInstanceKeyValConfigsCallable(const Model::ModifyInstanceKeyValConfigsRequest& request);

                /**
                 *针对集群账号的权限做管控（新版）
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

                /**
                 *备份恢复
                 * @param req RecoverBackUpJobRequest
                 * @return RecoverBackUpJobOutcome
                 */
                RecoverBackUpJobOutcome RecoverBackUpJob(const Model::RecoverBackUpJobRequest &request);
                void RecoverBackUpJobAsync(const Model::RecoverBackUpJobRequest& request, const RecoverBackUpJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecoverBackUpJobOutcomeCallable RecoverBackUpJobCallable(const Model::RecoverBackUpJobRequest& request);

                /**
                 *扩容磁盘，包含扩容数据节点，zk节点
                 * @param req ResizeDiskRequest
                 * @return ResizeDiskOutcome
                 */
                ResizeDiskOutcome ResizeDisk(const Model::ResizeDiskRequest &request);
                void ResizeDiskAsync(const Model::ResizeDiskRequest& request, const ResizeDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResizeDiskOutcomeCallable ResizeDiskCallable(const Model::ResizeDiskRequest& request);

                /**
                 *open-api接口提供弹性伸缩云原生集群能力
                 * @param req ScaleCNOutUpInstanceRequest
                 * @return ScaleCNOutUpInstanceOutcome
                 */
                ScaleCNOutUpInstanceOutcome ScaleCNOutUpInstance(const Model::ScaleCNOutUpInstanceRequest &request);
                void ScaleCNOutUpInstanceAsync(const Model::ScaleCNOutUpInstanceRequest& request, const ScaleCNOutUpInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScaleCNOutUpInstanceOutcomeCallable ScaleCNOutUpInstanceCallable(const Model::ScaleCNOutUpInstanceRequest& request);

                /**
                 *调整clickhouse节点数量
                 * @param req ScaleOutInstanceRequest
                 * @return ScaleOutInstanceOutcome
                 */
                ScaleOutInstanceOutcome ScaleOutInstance(const Model::ScaleOutInstanceRequest &request);
                void ScaleOutInstanceAsync(const Model::ScaleOutInstanceRequest& request, const ScaleOutInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScaleOutInstanceOutcomeCallable ScaleOutInstanceCallable(const Model::ScaleOutInstanceRequest& request);

                /**
                 *垂直扩缩容节点规格，修改节点cvm的规格cpu，内存。 规格变化阶段，服务不可用。
                 * @param req ScaleUpInstanceRequest
                 * @return ScaleUpInstanceOutcome
                 */
                ScaleUpInstanceOutcome ScaleUpInstance(const Model::ScaleUpInstanceRequest &request);
                void ScaleUpInstanceAsync(const Model::ScaleUpInstanceRequest& request, const ScaleUpInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScaleUpInstanceOutcomeCallable ScaleUpInstanceCallable(const Model::ScaleUpInstanceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_CDWCHCLIENT_H_
