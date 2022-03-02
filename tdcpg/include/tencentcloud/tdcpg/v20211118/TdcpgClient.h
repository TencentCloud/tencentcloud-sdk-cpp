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

#ifndef TENCENTCLOUD_TDCPG_V20211118_TDCPGCLIENT_H_
#define TENCENTCLOUD_TDCPG_V20211118_TDCPGCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tdcpg/v20211118/model/CloneClusterToPointInTimeRequest.h>
#include <tencentcloud/tdcpg/v20211118/model/CloneClusterToPointInTimeResponse.h>
#include <tencentcloud/tdcpg/v20211118/model/CreateClusterRequest.h>
#include <tencentcloud/tdcpg/v20211118/model/CreateClusterResponse.h>
#include <tencentcloud/tdcpg/v20211118/model/CreateClusterInstancesRequest.h>
#include <tencentcloud/tdcpg/v20211118/model/CreateClusterInstancesResponse.h>
#include <tencentcloud/tdcpg/v20211118/model/DeleteClusterRequest.h>
#include <tencentcloud/tdcpg/v20211118/model/DeleteClusterResponse.h>
#include <tencentcloud/tdcpg/v20211118/model/DeleteClusterInstancesRequest.h>
#include <tencentcloud/tdcpg/v20211118/model/DeleteClusterInstancesResponse.h>
#include <tencentcloud/tdcpg/v20211118/model/DescribeAccountsRequest.h>
#include <tencentcloud/tdcpg/v20211118/model/DescribeAccountsResponse.h>
#include <tencentcloud/tdcpg/v20211118/model/DescribeClusterBackupsRequest.h>
#include <tencentcloud/tdcpg/v20211118/model/DescribeClusterBackupsResponse.h>
#include <tencentcloud/tdcpg/v20211118/model/DescribeClusterEndpointsRequest.h>
#include <tencentcloud/tdcpg/v20211118/model/DescribeClusterEndpointsResponse.h>
#include <tencentcloud/tdcpg/v20211118/model/DescribeClusterInstancesRequest.h>
#include <tencentcloud/tdcpg/v20211118/model/DescribeClusterInstancesResponse.h>
#include <tencentcloud/tdcpg/v20211118/model/DescribeClusterRecoveryTimeRangeRequest.h>
#include <tencentcloud/tdcpg/v20211118/model/DescribeClusterRecoveryTimeRangeResponse.h>
#include <tencentcloud/tdcpg/v20211118/model/DescribeClustersRequest.h>
#include <tencentcloud/tdcpg/v20211118/model/DescribeClustersResponse.h>
#include <tencentcloud/tdcpg/v20211118/model/DescribeResourcesByDealNameRequest.h>
#include <tencentcloud/tdcpg/v20211118/model/DescribeResourcesByDealNameResponse.h>
#include <tencentcloud/tdcpg/v20211118/model/IsolateClusterRequest.h>
#include <tencentcloud/tdcpg/v20211118/model/IsolateClusterResponse.h>
#include <tencentcloud/tdcpg/v20211118/model/IsolateClusterInstancesRequest.h>
#include <tencentcloud/tdcpg/v20211118/model/IsolateClusterInstancesResponse.h>
#include <tencentcloud/tdcpg/v20211118/model/ModifyAccountDescriptionRequest.h>
#include <tencentcloud/tdcpg/v20211118/model/ModifyAccountDescriptionResponse.h>
#include <tencentcloud/tdcpg/v20211118/model/ModifyClusterEndpointWanStatusRequest.h>
#include <tencentcloud/tdcpg/v20211118/model/ModifyClusterEndpointWanStatusResponse.h>
#include <tencentcloud/tdcpg/v20211118/model/ModifyClusterInstancesSpecRequest.h>
#include <tencentcloud/tdcpg/v20211118/model/ModifyClusterInstancesSpecResponse.h>
#include <tencentcloud/tdcpg/v20211118/model/ModifyClusterNameRequest.h>
#include <tencentcloud/tdcpg/v20211118/model/ModifyClusterNameResponse.h>
#include <tencentcloud/tdcpg/v20211118/model/ModifyClustersAutoRenewFlagRequest.h>
#include <tencentcloud/tdcpg/v20211118/model/ModifyClustersAutoRenewFlagResponse.h>
#include <tencentcloud/tdcpg/v20211118/model/RecoverClusterRequest.h>
#include <tencentcloud/tdcpg/v20211118/model/RecoverClusterResponse.h>
#include <tencentcloud/tdcpg/v20211118/model/RecoverClusterInstancesRequest.h>
#include <tencentcloud/tdcpg/v20211118/model/RecoverClusterInstancesResponse.h>
#include <tencentcloud/tdcpg/v20211118/model/RenewClusterRequest.h>
#include <tencentcloud/tdcpg/v20211118/model/RenewClusterResponse.h>
#include <tencentcloud/tdcpg/v20211118/model/ResetAccountPasswordRequest.h>
#include <tencentcloud/tdcpg/v20211118/model/ResetAccountPasswordResponse.h>
#include <tencentcloud/tdcpg/v20211118/model/RestartClusterInstancesRequest.h>
#include <tencentcloud/tdcpg/v20211118/model/RestartClusterInstancesResponse.h>
#include <tencentcloud/tdcpg/v20211118/model/TransformClusterPayModeRequest.h>
#include <tencentcloud/tdcpg/v20211118/model/TransformClusterPayModeResponse.h>


namespace TencentCloud
{
    namespace Tdcpg
    {
        namespace V20211118
        {
            class TdcpgClient : public AbstractClient
            {
            public:
                TdcpgClient(const Credential &credential, const std::string &region);
                TdcpgClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CloneClusterToPointInTimeResponse> CloneClusterToPointInTimeOutcome;
                typedef std::future<CloneClusterToPointInTimeOutcome> CloneClusterToPointInTimeOutcomeCallable;
                typedef std::function<void(const TdcpgClient*, const Model::CloneClusterToPointInTimeRequest&, CloneClusterToPointInTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloneClusterToPointInTimeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClusterResponse> CreateClusterOutcome;
                typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
                typedef std::function<void(const TdcpgClient*, const Model::CreateClusterRequest&, CreateClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClusterInstancesResponse> CreateClusterInstancesOutcome;
                typedef std::future<CreateClusterInstancesOutcome> CreateClusterInstancesOutcomeCallable;
                typedef std::function<void(const TdcpgClient*, const Model::CreateClusterInstancesRequest&, CreateClusterInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteClusterResponse> DeleteClusterOutcome;
                typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
                typedef std::function<void(const TdcpgClient*, const Model::DeleteClusterRequest&, DeleteClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteClusterInstancesResponse> DeleteClusterInstancesOutcome;
                typedef std::future<DeleteClusterInstancesOutcome> DeleteClusterInstancesOutcomeCallable;
                typedef std::function<void(const TdcpgClient*, const Model::DeleteClusterInstancesRequest&, DeleteClusterInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccountsResponse> DescribeAccountsOutcome;
                typedef std::future<DescribeAccountsOutcome> DescribeAccountsOutcomeCallable;
                typedef std::function<void(const TdcpgClient*, const Model::DescribeAccountsRequest&, DescribeAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterBackupsResponse> DescribeClusterBackupsOutcome;
                typedef std::future<DescribeClusterBackupsOutcome> DescribeClusterBackupsOutcomeCallable;
                typedef std::function<void(const TdcpgClient*, const Model::DescribeClusterBackupsRequest&, DescribeClusterBackupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterBackupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterEndpointsResponse> DescribeClusterEndpointsOutcome;
                typedef std::future<DescribeClusterEndpointsOutcome> DescribeClusterEndpointsOutcomeCallable;
                typedef std::function<void(const TdcpgClient*, const Model::DescribeClusterEndpointsRequest&, DescribeClusterEndpointsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterEndpointsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterInstancesResponse> DescribeClusterInstancesOutcome;
                typedef std::future<DescribeClusterInstancesOutcome> DescribeClusterInstancesOutcomeCallable;
                typedef std::function<void(const TdcpgClient*, const Model::DescribeClusterInstancesRequest&, DescribeClusterInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterRecoveryTimeRangeResponse> DescribeClusterRecoveryTimeRangeOutcome;
                typedef std::future<DescribeClusterRecoveryTimeRangeOutcome> DescribeClusterRecoveryTimeRangeOutcomeCallable;
                typedef std::function<void(const TdcpgClient*, const Model::DescribeClusterRecoveryTimeRangeRequest&, DescribeClusterRecoveryTimeRangeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterRecoveryTimeRangeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClustersResponse> DescribeClustersOutcome;
                typedef std::future<DescribeClustersOutcome> DescribeClustersOutcomeCallable;
                typedef std::function<void(const TdcpgClient*, const Model::DescribeClustersRequest&, DescribeClustersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClustersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourcesByDealNameResponse> DescribeResourcesByDealNameOutcome;
                typedef std::future<DescribeResourcesByDealNameOutcome> DescribeResourcesByDealNameOutcomeCallable;
                typedef std::function<void(const TdcpgClient*, const Model::DescribeResourcesByDealNameRequest&, DescribeResourcesByDealNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourcesByDealNameAsyncHandler;
                typedef Outcome<Core::Error, Model::IsolateClusterResponse> IsolateClusterOutcome;
                typedef std::future<IsolateClusterOutcome> IsolateClusterOutcomeCallable;
                typedef std::function<void(const TdcpgClient*, const Model::IsolateClusterRequest&, IsolateClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IsolateClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::IsolateClusterInstancesResponse> IsolateClusterInstancesOutcome;
                typedef std::future<IsolateClusterInstancesOutcome> IsolateClusterInstancesOutcomeCallable;
                typedef std::function<void(const TdcpgClient*, const Model::IsolateClusterInstancesRequest&, IsolateClusterInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IsolateClusterInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccountDescriptionResponse> ModifyAccountDescriptionOutcome;
                typedef std::future<ModifyAccountDescriptionOutcome> ModifyAccountDescriptionOutcomeCallable;
                typedef std::function<void(const TdcpgClient*, const Model::ModifyAccountDescriptionRequest&, ModifyAccountDescriptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountDescriptionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClusterEndpointWanStatusResponse> ModifyClusterEndpointWanStatusOutcome;
                typedef std::future<ModifyClusterEndpointWanStatusOutcome> ModifyClusterEndpointWanStatusOutcomeCallable;
                typedef std::function<void(const TdcpgClient*, const Model::ModifyClusterEndpointWanStatusRequest&, ModifyClusterEndpointWanStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterEndpointWanStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClusterInstancesSpecResponse> ModifyClusterInstancesSpecOutcome;
                typedef std::future<ModifyClusterInstancesSpecOutcome> ModifyClusterInstancesSpecOutcomeCallable;
                typedef std::function<void(const TdcpgClient*, const Model::ModifyClusterInstancesSpecRequest&, ModifyClusterInstancesSpecOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterInstancesSpecAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClusterNameResponse> ModifyClusterNameOutcome;
                typedef std::future<ModifyClusterNameOutcome> ModifyClusterNameOutcomeCallable;
                typedef std::function<void(const TdcpgClient*, const Model::ModifyClusterNameRequest&, ModifyClusterNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterNameAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClustersAutoRenewFlagResponse> ModifyClustersAutoRenewFlagOutcome;
                typedef std::future<ModifyClustersAutoRenewFlagOutcome> ModifyClustersAutoRenewFlagOutcomeCallable;
                typedef std::function<void(const TdcpgClient*, const Model::ModifyClustersAutoRenewFlagRequest&, ModifyClustersAutoRenewFlagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClustersAutoRenewFlagAsyncHandler;
                typedef Outcome<Core::Error, Model::RecoverClusterResponse> RecoverClusterOutcome;
                typedef std::future<RecoverClusterOutcome> RecoverClusterOutcomeCallable;
                typedef std::function<void(const TdcpgClient*, const Model::RecoverClusterRequest&, RecoverClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecoverClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::RecoverClusterInstancesResponse> RecoverClusterInstancesOutcome;
                typedef std::future<RecoverClusterInstancesOutcome> RecoverClusterInstancesOutcomeCallable;
                typedef std::function<void(const TdcpgClient*, const Model::RecoverClusterInstancesRequest&, RecoverClusterInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecoverClusterInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewClusterResponse> RenewClusterOutcome;
                typedef std::future<RenewClusterOutcome> RenewClusterOutcomeCallable;
                typedef std::function<void(const TdcpgClient*, const Model::RenewClusterRequest&, RenewClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetAccountPasswordResponse> ResetAccountPasswordOutcome;
                typedef std::future<ResetAccountPasswordOutcome> ResetAccountPasswordOutcomeCallable;
                typedef std::function<void(const TdcpgClient*, const Model::ResetAccountPasswordRequest&, ResetAccountPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetAccountPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::RestartClusterInstancesResponse> RestartClusterInstancesOutcome;
                typedef std::future<RestartClusterInstancesOutcome> RestartClusterInstancesOutcomeCallable;
                typedef std::function<void(const TdcpgClient*, const Model::RestartClusterInstancesRequest&, RestartClusterInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestartClusterInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::TransformClusterPayModeResponse> TransformClusterPayModeOutcome;
                typedef std::future<TransformClusterPayModeOutcome> TransformClusterPayModeOutcomeCallable;
                typedef std::function<void(const TdcpgClient*, const Model::TransformClusterPayModeRequest&, TransformClusterPayModeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TransformClusterPayModeAsyncHandler;



                /**
                 *使用指定时间点的备份克隆一个新的集群
                 * @param req CloneClusterToPointInTimeRequest
                 * @return CloneClusterToPointInTimeOutcome
                 */
                CloneClusterToPointInTimeOutcome CloneClusterToPointInTime(const Model::CloneClusterToPointInTimeRequest &request);
                void CloneClusterToPointInTimeAsync(const Model::CloneClusterToPointInTimeRequest& request, const CloneClusterToPointInTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloneClusterToPointInTimeOutcomeCallable CloneClusterToPointInTimeCallable(const Model::CloneClusterToPointInTimeRequest& request);

                /**
                 *创建集群
                 * @param req CreateClusterRequest
                 * @return CreateClusterOutcome
                 */
                CreateClusterOutcome CreateCluster(const Model::CreateClusterRequest &request);
                void CreateClusterAsync(const Model::CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterOutcomeCallable CreateClusterCallable(const Model::CreateClusterRequest& request);

                /**
                 *在集群中新建实例
                 * @param req CreateClusterInstancesRequest
                 * @return CreateClusterInstancesOutcome
                 */
                CreateClusterInstancesOutcome CreateClusterInstances(const Model::CreateClusterInstancesRequest &request);
                void CreateClusterInstancesAsync(const Model::CreateClusterInstancesRequest& request, const CreateClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterInstancesOutcomeCallable CreateClusterInstancesCallable(const Model::CreateClusterInstancesRequest& request);

                /**
                 *删除集群，集群中的实例和数据都将被删除，且无法恢复。只有当集群状态处于isolated(已隔离)时才生效。
                 * @param req DeleteClusterRequest
                 * @return DeleteClusterOutcome
                 */
                DeleteClusterOutcome DeleteCluster(const Model::DeleteClusterRequest &request);
                void DeleteClusterAsync(const Model::DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteClusterOutcomeCallable DeleteClusterCallable(const Model::DeleteClusterRequest& request);

                /**
                 *删除实例。只有当实例状态处于isolated(已隔离)时才生效。
                 * @param req DeleteClusterInstancesRequest
                 * @return DeleteClusterInstancesOutcome
                 */
                DeleteClusterInstancesOutcome DeleteClusterInstances(const Model::DeleteClusterInstancesRequest &request);
                void DeleteClusterInstancesAsync(const Model::DeleteClusterInstancesRequest& request, const DeleteClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteClusterInstancesOutcomeCallable DeleteClusterInstancesCallable(const Model::DeleteClusterInstancesRequest& request);

                /**
                 *查询数据库账号信息
                 * @param req DescribeAccountsRequest
                 * @return DescribeAccountsOutcome
                 */
                DescribeAccountsOutcome DescribeAccounts(const Model::DescribeAccountsRequest &request);
                void DescribeAccountsAsync(const Model::DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountsOutcomeCallable DescribeAccountsCallable(const Model::DescribeAccountsRequest& request);

                /**
                 *查询集群的备份集
                 * @param req DescribeClusterBackupsRequest
                 * @return DescribeClusterBackupsOutcome
                 */
                DescribeClusterBackupsOutcome DescribeClusterBackups(const Model::DescribeClusterBackupsRequest &request);
                void DescribeClusterBackupsAsync(const Model::DescribeClusterBackupsRequest& request, const DescribeClusterBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterBackupsOutcomeCallable DescribeClusterBackupsCallable(const Model::DescribeClusterBackupsRequest& request);

                /**
                 *查询集群接入点信息
                 * @param req DescribeClusterEndpointsRequest
                 * @return DescribeClusterEndpointsOutcome
                 */
                DescribeClusterEndpointsOutcome DescribeClusterEndpoints(const Model::DescribeClusterEndpointsRequest &request);
                void DescribeClusterEndpointsAsync(const Model::DescribeClusterEndpointsRequest& request, const DescribeClusterEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterEndpointsOutcomeCallable DescribeClusterEndpointsCallable(const Model::DescribeClusterEndpointsRequest& request);

                /**
                 *查询实例
                 * @param req DescribeClusterInstancesRequest
                 * @return DescribeClusterInstancesOutcome
                 */
                DescribeClusterInstancesOutcome DescribeClusterInstances(const Model::DescribeClusterInstancesRequest &request);
                void DescribeClusterInstancesAsync(const Model::DescribeClusterInstancesRequest& request, const DescribeClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterInstancesOutcomeCallable DescribeClusterInstancesCallable(const Model::DescribeClusterInstancesRequest& request);

                /**
                 *查询集群可回档时间范围
                 * @param req DescribeClusterRecoveryTimeRangeRequest
                 * @return DescribeClusterRecoveryTimeRangeOutcome
                 */
                DescribeClusterRecoveryTimeRangeOutcome DescribeClusterRecoveryTimeRange(const Model::DescribeClusterRecoveryTimeRangeRequest &request);
                void DescribeClusterRecoveryTimeRangeAsync(const Model::DescribeClusterRecoveryTimeRangeRequest& request, const DescribeClusterRecoveryTimeRangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterRecoveryTimeRangeOutcomeCallable DescribeClusterRecoveryTimeRangeCallable(const Model::DescribeClusterRecoveryTimeRangeRequest& request);

                /**
                 *查询集群
                 * @param req DescribeClustersRequest
                 * @return DescribeClustersOutcome
                 */
                DescribeClustersOutcome DescribeClusters(const Model::DescribeClustersRequest &request);
                void DescribeClustersAsync(const Model::DescribeClustersRequest& request, const DescribeClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClustersOutcomeCallable DescribeClustersCallable(const Model::DescribeClustersRequest& request);

                /**
                 *根据订单号获取资源信息
                 * @param req DescribeResourcesByDealNameRequest
                 * @return DescribeResourcesByDealNameOutcome
                 */
                DescribeResourcesByDealNameOutcome DescribeResourcesByDealName(const Model::DescribeResourcesByDealNameRequest &request);
                void DescribeResourcesByDealNameAsync(const Model::DescribeResourcesByDealNameRequest& request, const DescribeResourcesByDealNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourcesByDealNameOutcomeCallable DescribeResourcesByDealNameCallable(const Model::DescribeResourcesByDealNameRequest& request);

                /**
                 *隔离集群，集群的接入点网络将会断掉无法连接使用数据库。只有当集群状态处于running(运行中)时才生效。
                 * @param req IsolateClusterRequest
                 * @return IsolateClusterOutcome
                 */
                IsolateClusterOutcome IsolateCluster(const Model::IsolateClusterRequest &request);
                void IsolateClusterAsync(const Model::IsolateClusterRequest& request, const IsolateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IsolateClusterOutcomeCallable IsolateClusterCallable(const Model::IsolateClusterRequest& request);

                /**
                 *隔离实例。此接口只针对状态为running的实例生效，使用场景包括：
 - 批量隔离集群内所有的实例
 - 在读写实例为running(运行中)时，单个/批量隔离只读实例
 - 集群内所有只读实例为isolated(已隔离)时，单独隔离读写实例
                 * @param req IsolateClusterInstancesRequest
                 * @return IsolateClusterInstancesOutcome
                 */
                IsolateClusterInstancesOutcome IsolateClusterInstances(const Model::IsolateClusterInstancesRequest &request);
                void IsolateClusterInstancesAsync(const Model::IsolateClusterInstancesRequest& request, const IsolateClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IsolateClusterInstancesOutcomeCallable IsolateClusterInstancesCallable(const Model::IsolateClusterInstancesRequest& request);

                /**
                 *修改数据库账号描述
                 * @param req ModifyAccountDescriptionRequest
                 * @return ModifyAccountDescriptionOutcome
                 */
                ModifyAccountDescriptionOutcome ModifyAccountDescription(const Model::ModifyAccountDescriptionRequest &request);
                void ModifyAccountDescriptionAsync(const Model::ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccountDescriptionOutcomeCallable ModifyAccountDescriptionCallable(const Model::ModifyAccountDescriptionRequest& request);

                /**
                 *开启或者关闭接入点外网
                 * @param req ModifyClusterEndpointWanStatusRequest
                 * @return ModifyClusterEndpointWanStatusOutcome
                 */
                ModifyClusterEndpointWanStatusOutcome ModifyClusterEndpointWanStatus(const Model::ModifyClusterEndpointWanStatusRequest &request);
                void ModifyClusterEndpointWanStatusAsync(const Model::ModifyClusterEndpointWanStatusRequest& request, const ModifyClusterEndpointWanStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClusterEndpointWanStatusOutcomeCallable ModifyClusterEndpointWanStatusCallable(const Model::ModifyClusterEndpointWanStatusRequest& request);

                /**
                 *修改实例规格，此接口只针对状态为running(运行中)的实例生效
                 * @param req ModifyClusterInstancesSpecRequest
                 * @return ModifyClusterInstancesSpecOutcome
                 */
                ModifyClusterInstancesSpecOutcome ModifyClusterInstancesSpec(const Model::ModifyClusterInstancesSpecRequest &request);
                void ModifyClusterInstancesSpecAsync(const Model::ModifyClusterInstancesSpecRequest& request, const ModifyClusterInstancesSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClusterInstancesSpecOutcomeCallable ModifyClusterInstancesSpecCallable(const Model::ModifyClusterInstancesSpecRequest& request);

                /**
                 *修改集群名字
                 * @param req ModifyClusterNameRequest
                 * @return ModifyClusterNameOutcome
                 */
                ModifyClusterNameOutcome ModifyClusterName(const Model::ModifyClusterNameRequest &request);
                void ModifyClusterNameAsync(const Model::ModifyClusterNameRequest& request, const ModifyClusterNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClusterNameOutcomeCallable ModifyClusterNameCallable(const Model::ModifyClusterNameRequest& request);

                /**
                 *修改集群自动续费，只对预付费集群生效。
                 * @param req ModifyClustersAutoRenewFlagRequest
                 * @return ModifyClustersAutoRenewFlagOutcome
                 */
                ModifyClustersAutoRenewFlagOutcome ModifyClustersAutoRenewFlag(const Model::ModifyClustersAutoRenewFlagRequest &request);
                void ModifyClustersAutoRenewFlagAsync(const Model::ModifyClustersAutoRenewFlagRequest& request, const ModifyClustersAutoRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClustersAutoRenewFlagOutcomeCallable ModifyClustersAutoRenewFlagCallable(const Model::ModifyClustersAutoRenewFlagRequest& request);

                /**
                 *恢复集群，恢复集群的接入点网络，恢复后继续连接使用数据库。只有当集群状态处于isolated(已隔离)时才生效。
                 * @param req RecoverClusterRequest
                 * @return RecoverClusterOutcome
                 */
                RecoverClusterOutcome RecoverCluster(const Model::RecoverClusterRequest &request);
                void RecoverClusterAsync(const Model::RecoverClusterRequest& request, const RecoverClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecoverClusterOutcomeCallable RecoverClusterCallable(const Model::RecoverClusterRequest& request);

                /**
                 *恢复实例。此接口的使用场景包括：
 - 读写实例状态为running(运行中)时，批量恢复状态为isolated(已隔离)的只读实例
 - 读写实例状态为isolated(已隔离)时，恢复读写实例
 - 读写实例状态为isolated(已隔离)时，批量恢复读写实例以及状态为isolated(已隔离)的只读实例
                 * @param req RecoverClusterInstancesRequest
                 * @return RecoverClusterInstancesOutcome
                 */
                RecoverClusterInstancesOutcome RecoverClusterInstances(const Model::RecoverClusterInstancesRequest &request);
                void RecoverClusterInstancesAsync(const Model::RecoverClusterInstancesRequest& request, const RecoverClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecoverClusterInstancesOutcomeCallable RecoverClusterInstancesCallable(const Model::RecoverClusterInstancesRequest& request);

                /**
                 *续费集群
                 * @param req RenewClusterRequest
                 * @return RenewClusterOutcome
                 */
                RenewClusterOutcome RenewCluster(const Model::RenewClusterRequest &request);
                void RenewClusterAsync(const Model::RenewClusterRequest& request, const RenewClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewClusterOutcomeCallable RenewClusterCallable(const Model::RenewClusterRequest& request);

                /**
                 *重置数据库账号密码
                 * @param req ResetAccountPasswordRequest
                 * @return ResetAccountPasswordOutcome
                 */
                ResetAccountPasswordOutcome ResetAccountPassword(const Model::ResetAccountPasswordRequest &request);
                void ResetAccountPasswordAsync(const Model::ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetAccountPasswordOutcomeCallable ResetAccountPasswordCallable(const Model::ResetAccountPasswordRequest& request);

                /**
                 *重启实例，此接口只针对状态为running(运行中)的实例生效。
                 * @param req RestartClusterInstancesRequest
                 * @return RestartClusterInstancesOutcome
                 */
                RestartClusterInstancesOutcome RestartClusterInstances(const Model::RestartClusterInstancesRequest &request);
                void RestartClusterInstancesAsync(const Model::RestartClusterInstancesRequest& request, const RestartClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestartClusterInstancesOutcomeCallable RestartClusterInstancesCallable(const Model::RestartClusterInstancesRequest& request);

                /**
                 *转换集群付费模式，目前只支持从 后付费 转换成 与预付费。
                 * @param req TransformClusterPayModeRequest
                 * @return TransformClusterPayModeOutcome
                 */
                TransformClusterPayModeOutcome TransformClusterPayMode(const Model::TransformClusterPayModeRequest &request);
                void TransformClusterPayModeAsync(const Model::TransformClusterPayModeRequest& request, const TransformClusterPayModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TransformClusterPayModeOutcomeCallable TransformClusterPayModeCallable(const Model::TransformClusterPayModeRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TDCPG_V20211118_TDCPGCLIENT_H_
