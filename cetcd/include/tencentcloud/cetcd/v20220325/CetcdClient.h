/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CETCD_V20220325_CETCDCLIENT_H_
#define TENCENTCLOUD_CETCD_V20220325_CETCDCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cetcd/v20220325/model/CreateEtcdInstanceRequest.h>
#include <tencentcloud/cetcd/v20220325/model/CreateEtcdInstanceResponse.h>
#include <tencentcloud/cetcd/v20220325/model/CreateEtcdSnapshotRequest.h>
#include <tencentcloud/cetcd/v20220325/model/CreateEtcdSnapshotResponse.h>
#include <tencentcloud/cetcd/v20220325/model/CreateEtcdSnapshotPolicyRequest.h>
#include <tencentcloud/cetcd/v20220325/model/CreateEtcdSnapshotPolicyResponse.h>
#include <tencentcloud/cetcd/v20220325/model/DescribeEtcdAvailableVersionsRequest.h>
#include <tencentcloud/cetcd/v20220325/model/DescribeEtcdAvailableVersionsResponse.h>
#include <tencentcloud/cetcd/v20220325/model/DescribeEtcdCreatingProgressRequest.h>
#include <tencentcloud/cetcd/v20220325/model/DescribeEtcdCreatingProgressResponse.h>
#include <tencentcloud/cetcd/v20220325/model/DescribeEtcdCredentialsRequest.h>
#include <tencentcloud/cetcd/v20220325/model/DescribeEtcdCredentialsResponse.h>
#include <tencentcloud/cetcd/v20220325/model/DescribeEtcdInstancesRequest.h>
#include <tencentcloud/cetcd/v20220325/model/DescribeEtcdInstancesResponse.h>
#include <tencentcloud/cetcd/v20220325/model/DescribeEtcdQuotaRequest.h>
#include <tencentcloud/cetcd/v20220325/model/DescribeEtcdQuotaResponse.h>
#include <tencentcloud/cetcd/v20220325/model/DescribeEtcdRegionsRequest.h>
#include <tencentcloud/cetcd/v20220325/model/DescribeEtcdRegionsResponse.h>
#include <tencentcloud/cetcd/v20220325/model/DescribeEtcdSnapshotPoliciesRequest.h>
#include <tencentcloud/cetcd/v20220325/model/DescribeEtcdSnapshotPoliciesResponse.h>
#include <tencentcloud/cetcd/v20220325/model/DescribeEtcdSnapshotsRequest.h>
#include <tencentcloud/cetcd/v20220325/model/DescribeEtcdSnapshotsResponse.h>
#include <tencentcloud/cetcd/v20220325/model/DescribeEtcdTasksRequest.h>
#include <tencentcloud/cetcd/v20220325/model/DescribeEtcdTasksResponse.h>
#include <tencentcloud/cetcd/v20220325/model/DescribeRPCMethodListRequest.h>
#include <tencentcloud/cetcd/v20220325/model/DescribeRPCMethodListResponse.h>
#include <tencentcloud/cetcd/v20220325/model/DisableEtcdInstanceDeletionProtectionRequest.h>
#include <tencentcloud/cetcd/v20220325/model/DisableEtcdInstanceDeletionProtectionResponse.h>
#include <tencentcloud/cetcd/v20220325/model/EnableEtcdInstanceDeletionProtectionRequest.h>
#include <tencentcloud/cetcd/v20220325/model/EnableEtcdInstanceDeletionProtectionResponse.h>
#include <tencentcloud/cetcd/v20220325/model/ModifyEtcdAttributeRequest.h>
#include <tencentcloud/cetcd/v20220325/model/ModifyEtcdAttributeResponse.h>
#include <tencentcloud/cetcd/v20220325/model/ModifyEtcdConfigurationRequest.h>
#include <tencentcloud/cetcd/v20220325/model/ModifyEtcdConfigurationResponse.h>
#include <tencentcloud/cetcd/v20220325/model/ModifyEtcdSnapshotPolicyRequest.h>
#include <tencentcloud/cetcd/v20220325/model/ModifyEtcdSnapshotPolicyResponse.h>
#include <tencentcloud/cetcd/v20220325/model/ResizeEtcdInstanceRequest.h>
#include <tencentcloud/cetcd/v20220325/model/ResizeEtcdInstanceResponse.h>
#include <tencentcloud/cetcd/v20220325/model/UpgradeEtcdInstanceRequest.h>
#include <tencentcloud/cetcd/v20220325/model/UpgradeEtcdInstanceResponse.h>


namespace TencentCloud
{
    namespace Cetcd
    {
        namespace V20220325
        {
            class CetcdClient : public AbstractClient
            {
            public:
                CetcdClient(const Credential &credential, const std::string &region);
                CetcdClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateEtcdInstanceResponse> CreateEtcdInstanceOutcome;
                typedef std::future<CreateEtcdInstanceOutcome> CreateEtcdInstanceOutcomeCallable;
                typedef std::function<void(const CetcdClient*, const Model::CreateEtcdInstanceRequest&, CreateEtcdInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEtcdInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEtcdSnapshotResponse> CreateEtcdSnapshotOutcome;
                typedef std::future<CreateEtcdSnapshotOutcome> CreateEtcdSnapshotOutcomeCallable;
                typedef std::function<void(const CetcdClient*, const Model::CreateEtcdSnapshotRequest&, CreateEtcdSnapshotOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEtcdSnapshotAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEtcdSnapshotPolicyResponse> CreateEtcdSnapshotPolicyOutcome;
                typedef std::future<CreateEtcdSnapshotPolicyOutcome> CreateEtcdSnapshotPolicyOutcomeCallable;
                typedef std::function<void(const CetcdClient*, const Model::CreateEtcdSnapshotPolicyRequest&, CreateEtcdSnapshotPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEtcdSnapshotPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEtcdAvailableVersionsResponse> DescribeEtcdAvailableVersionsOutcome;
                typedef std::future<DescribeEtcdAvailableVersionsOutcome> DescribeEtcdAvailableVersionsOutcomeCallable;
                typedef std::function<void(const CetcdClient*, const Model::DescribeEtcdAvailableVersionsRequest&, DescribeEtcdAvailableVersionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEtcdAvailableVersionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEtcdCreatingProgressResponse> DescribeEtcdCreatingProgressOutcome;
                typedef std::future<DescribeEtcdCreatingProgressOutcome> DescribeEtcdCreatingProgressOutcomeCallable;
                typedef std::function<void(const CetcdClient*, const Model::DescribeEtcdCreatingProgressRequest&, DescribeEtcdCreatingProgressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEtcdCreatingProgressAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEtcdCredentialsResponse> DescribeEtcdCredentialsOutcome;
                typedef std::future<DescribeEtcdCredentialsOutcome> DescribeEtcdCredentialsOutcomeCallable;
                typedef std::function<void(const CetcdClient*, const Model::DescribeEtcdCredentialsRequest&, DescribeEtcdCredentialsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEtcdCredentialsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEtcdInstancesResponse> DescribeEtcdInstancesOutcome;
                typedef std::future<DescribeEtcdInstancesOutcome> DescribeEtcdInstancesOutcomeCallable;
                typedef std::function<void(const CetcdClient*, const Model::DescribeEtcdInstancesRequest&, DescribeEtcdInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEtcdInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEtcdQuotaResponse> DescribeEtcdQuotaOutcome;
                typedef std::future<DescribeEtcdQuotaOutcome> DescribeEtcdQuotaOutcomeCallable;
                typedef std::function<void(const CetcdClient*, const Model::DescribeEtcdQuotaRequest&, DescribeEtcdQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEtcdQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEtcdRegionsResponse> DescribeEtcdRegionsOutcome;
                typedef std::future<DescribeEtcdRegionsOutcome> DescribeEtcdRegionsOutcomeCallable;
                typedef std::function<void(const CetcdClient*, const Model::DescribeEtcdRegionsRequest&, DescribeEtcdRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEtcdRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEtcdSnapshotPoliciesResponse> DescribeEtcdSnapshotPoliciesOutcome;
                typedef std::future<DescribeEtcdSnapshotPoliciesOutcome> DescribeEtcdSnapshotPoliciesOutcomeCallable;
                typedef std::function<void(const CetcdClient*, const Model::DescribeEtcdSnapshotPoliciesRequest&, DescribeEtcdSnapshotPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEtcdSnapshotPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEtcdSnapshotsResponse> DescribeEtcdSnapshotsOutcome;
                typedef std::future<DescribeEtcdSnapshotsOutcome> DescribeEtcdSnapshotsOutcomeCallable;
                typedef std::function<void(const CetcdClient*, const Model::DescribeEtcdSnapshotsRequest&, DescribeEtcdSnapshotsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEtcdSnapshotsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEtcdTasksResponse> DescribeEtcdTasksOutcome;
                typedef std::future<DescribeEtcdTasksOutcome> DescribeEtcdTasksOutcomeCallable;
                typedef std::function<void(const CetcdClient*, const Model::DescribeEtcdTasksRequest&, DescribeEtcdTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEtcdTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRPCMethodListResponse> DescribeRPCMethodListOutcome;
                typedef std::future<DescribeRPCMethodListOutcome> DescribeRPCMethodListOutcomeCallable;
                typedef std::function<void(const CetcdClient*, const Model::DescribeRPCMethodListRequest&, DescribeRPCMethodListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRPCMethodListAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableEtcdInstanceDeletionProtectionResponse> DisableEtcdInstanceDeletionProtectionOutcome;
                typedef std::future<DisableEtcdInstanceDeletionProtectionOutcome> DisableEtcdInstanceDeletionProtectionOutcomeCallable;
                typedef std::function<void(const CetcdClient*, const Model::DisableEtcdInstanceDeletionProtectionRequest&, DisableEtcdInstanceDeletionProtectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableEtcdInstanceDeletionProtectionAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableEtcdInstanceDeletionProtectionResponse> EnableEtcdInstanceDeletionProtectionOutcome;
                typedef std::future<EnableEtcdInstanceDeletionProtectionOutcome> EnableEtcdInstanceDeletionProtectionOutcomeCallable;
                typedef std::function<void(const CetcdClient*, const Model::EnableEtcdInstanceDeletionProtectionRequest&, EnableEtcdInstanceDeletionProtectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableEtcdInstanceDeletionProtectionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEtcdAttributeResponse> ModifyEtcdAttributeOutcome;
                typedef std::future<ModifyEtcdAttributeOutcome> ModifyEtcdAttributeOutcomeCallable;
                typedef std::function<void(const CetcdClient*, const Model::ModifyEtcdAttributeRequest&, ModifyEtcdAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEtcdAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEtcdConfigurationResponse> ModifyEtcdConfigurationOutcome;
                typedef std::future<ModifyEtcdConfigurationOutcome> ModifyEtcdConfigurationOutcomeCallable;
                typedef std::function<void(const CetcdClient*, const Model::ModifyEtcdConfigurationRequest&, ModifyEtcdConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEtcdConfigurationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEtcdSnapshotPolicyResponse> ModifyEtcdSnapshotPolicyOutcome;
                typedef std::future<ModifyEtcdSnapshotPolicyOutcome> ModifyEtcdSnapshotPolicyOutcomeCallable;
                typedef std::function<void(const CetcdClient*, const Model::ModifyEtcdSnapshotPolicyRequest&, ModifyEtcdSnapshotPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEtcdSnapshotPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ResizeEtcdInstanceResponse> ResizeEtcdInstanceOutcome;
                typedef std::future<ResizeEtcdInstanceOutcome> ResizeEtcdInstanceOutcomeCallable;
                typedef std::function<void(const CetcdClient*, const Model::ResizeEtcdInstanceRequest&, ResizeEtcdInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResizeEtcdInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeEtcdInstanceResponse> UpgradeEtcdInstanceOutcome;
                typedef std::future<UpgradeEtcdInstanceOutcome> UpgradeEtcdInstanceOutcomeCallable;
                typedef std::function<void(const CetcdClient*, const Model::UpgradeEtcdInstanceRequest&, UpgradeEtcdInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeEtcdInstanceAsyncHandler;



                /**
                 *创建etcd实例
                 * @param req CreateEtcdInstanceRequest
                 * @return CreateEtcdInstanceOutcome
                 */
                CreateEtcdInstanceOutcome CreateEtcdInstance(const Model::CreateEtcdInstanceRequest &request);
                void CreateEtcdInstanceAsync(const Model::CreateEtcdInstanceRequest& request, const CreateEtcdInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEtcdInstanceOutcomeCallable CreateEtcdInstanceCallable(const Model::CreateEtcdInstanceRequest& request);

                /**
                 *创建etcd快照
                 * @param req CreateEtcdSnapshotRequest
                 * @return CreateEtcdSnapshotOutcome
                 */
                CreateEtcdSnapshotOutcome CreateEtcdSnapshot(const Model::CreateEtcdSnapshotRequest &request);
                void CreateEtcdSnapshotAsync(const Model::CreateEtcdSnapshotRequest& request, const CreateEtcdSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEtcdSnapshotOutcomeCallable CreateEtcdSnapshotCallable(const Model::CreateEtcdSnapshotRequest& request);

                /**
                 *创建etcd快照策略
                 * @param req CreateEtcdSnapshotPolicyRequest
                 * @return CreateEtcdSnapshotPolicyOutcome
                 */
                CreateEtcdSnapshotPolicyOutcome CreateEtcdSnapshotPolicy(const Model::CreateEtcdSnapshotPolicyRequest &request);
                void CreateEtcdSnapshotPolicyAsync(const Model::CreateEtcdSnapshotPolicyRequest& request, const CreateEtcdSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEtcdSnapshotPolicyOutcomeCallable CreateEtcdSnapshotPolicyCallable(const Model::CreateEtcdSnapshotPolicyRequest& request);

                /**
                 *查看etcd可用版本
                 * @param req DescribeEtcdAvailableVersionsRequest
                 * @return DescribeEtcdAvailableVersionsOutcome
                 */
                DescribeEtcdAvailableVersionsOutcome DescribeEtcdAvailableVersions(const Model::DescribeEtcdAvailableVersionsRequest &request);
                void DescribeEtcdAvailableVersionsAsync(const Model::DescribeEtcdAvailableVersionsRequest& request, const DescribeEtcdAvailableVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEtcdAvailableVersionsOutcomeCallable DescribeEtcdAvailableVersionsCallable(const Model::DescribeEtcdAvailableVersionsRequest& request);

                /**
                 *查看etcd集群创建进度
                 * @param req DescribeEtcdCreatingProgressRequest
                 * @return DescribeEtcdCreatingProgressOutcome
                 */
                DescribeEtcdCreatingProgressOutcome DescribeEtcdCreatingProgress(const Model::DescribeEtcdCreatingProgressRequest &request);
                void DescribeEtcdCreatingProgressAsync(const Model::DescribeEtcdCreatingProgressRequest& request, const DescribeEtcdCreatingProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEtcdCreatingProgressOutcomeCallable DescribeEtcdCreatingProgressCallable(const Model::DescribeEtcdCreatingProgressRequest& request);

                /**
                 *查询etcd访问凭证
                 * @param req DescribeEtcdCredentialsRequest
                 * @return DescribeEtcdCredentialsOutcome
                 */
                DescribeEtcdCredentialsOutcome DescribeEtcdCredentials(const Model::DescribeEtcdCredentialsRequest &request);
                void DescribeEtcdCredentialsAsync(const Model::DescribeEtcdCredentialsRequest& request, const DescribeEtcdCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEtcdCredentialsOutcomeCallable DescribeEtcdCredentialsCallable(const Model::DescribeEtcdCredentialsRequest& request);

                /**
                 *查询etcd实例列表
                 * @param req DescribeEtcdInstancesRequest
                 * @return DescribeEtcdInstancesOutcome
                 */
                DescribeEtcdInstancesOutcome DescribeEtcdInstances(const Model::DescribeEtcdInstancesRequest &request);
                void DescribeEtcdInstancesAsync(const Model::DescribeEtcdInstancesRequest& request, const DescribeEtcdInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEtcdInstancesOutcomeCallable DescribeEtcdInstancesCallable(const Model::DescribeEtcdInstancesRequest& request);

                /**
                 *查看etcd集群配额
                 * @param req DescribeEtcdQuotaRequest
                 * @return DescribeEtcdQuotaOutcome
                 */
                DescribeEtcdQuotaOutcome DescribeEtcdQuota(const Model::DescribeEtcdQuotaRequest &request);
                void DescribeEtcdQuotaAsync(const Model::DescribeEtcdQuotaRequest& request, const DescribeEtcdQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEtcdQuotaOutcomeCallable DescribeEtcdQuotaCallable(const Model::DescribeEtcdQuotaRequest& request);

                /**
                 *查看etcd支持地域
                 * @param req DescribeEtcdRegionsRequest
                 * @return DescribeEtcdRegionsOutcome
                 */
                DescribeEtcdRegionsOutcome DescribeEtcdRegions(const Model::DescribeEtcdRegionsRequest &request);
                void DescribeEtcdRegionsAsync(const Model::DescribeEtcdRegionsRequest& request, const DescribeEtcdRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEtcdRegionsOutcomeCallable DescribeEtcdRegionsCallable(const Model::DescribeEtcdRegionsRequest& request);

                /**
                 *查看etcd快照策略
                 * @param req DescribeEtcdSnapshotPoliciesRequest
                 * @return DescribeEtcdSnapshotPoliciesOutcome
                 */
                DescribeEtcdSnapshotPoliciesOutcome DescribeEtcdSnapshotPolicies(const Model::DescribeEtcdSnapshotPoliciesRequest &request);
                void DescribeEtcdSnapshotPoliciesAsync(const Model::DescribeEtcdSnapshotPoliciesRequest& request, const DescribeEtcdSnapshotPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEtcdSnapshotPoliciesOutcomeCallable DescribeEtcdSnapshotPoliciesCallable(const Model::DescribeEtcdSnapshotPoliciesRequest& request);

                /**
                 *查看etcd快照列表
                 * @param req DescribeEtcdSnapshotsRequest
                 * @return DescribeEtcdSnapshotsOutcome
                 */
                DescribeEtcdSnapshotsOutcome DescribeEtcdSnapshots(const Model::DescribeEtcdSnapshotsRequest &request);
                void DescribeEtcdSnapshotsAsync(const Model::DescribeEtcdSnapshotsRequest& request, const DescribeEtcdSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEtcdSnapshotsOutcomeCallable DescribeEtcdSnapshotsCallable(const Model::DescribeEtcdSnapshotsRequest& request);

                /**
                 *查看etcd相关tasks
                 * @param req DescribeEtcdTasksRequest
                 * @return DescribeEtcdTasksOutcome
                 */
                DescribeEtcdTasksOutcome DescribeEtcdTasks(const Model::DescribeEtcdTasksRequest &request);
                void DescribeEtcdTasksAsync(const Model::DescribeEtcdTasksRequest& request, const DescribeEtcdTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEtcdTasksOutcomeCallable DescribeEtcdTasksCallable(const Model::DescribeEtcdTasksRequest& request);

                /**
                 *获取etcd集群的gRPC方法列表
                 * @param req DescribeRPCMethodListRequest
                 * @return DescribeRPCMethodListOutcome
                 */
                DescribeRPCMethodListOutcome DescribeRPCMethodList(const Model::DescribeRPCMethodListRequest &request);
                void DescribeRPCMethodListAsync(const Model::DescribeRPCMethodListRequest& request, const DescribeRPCMethodListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRPCMethodListOutcomeCallable DescribeRPCMethodListCallable(const Model::DescribeRPCMethodListRequest& request);

                /**
                 *关闭etcd实例删除保护
                 * @param req DisableEtcdInstanceDeletionProtectionRequest
                 * @return DisableEtcdInstanceDeletionProtectionOutcome
                 */
                DisableEtcdInstanceDeletionProtectionOutcome DisableEtcdInstanceDeletionProtection(const Model::DisableEtcdInstanceDeletionProtectionRequest &request);
                void DisableEtcdInstanceDeletionProtectionAsync(const Model::DisableEtcdInstanceDeletionProtectionRequest& request, const DisableEtcdInstanceDeletionProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableEtcdInstanceDeletionProtectionOutcomeCallable DisableEtcdInstanceDeletionProtectionCallable(const Model::DisableEtcdInstanceDeletionProtectionRequest& request);

                /**
                 *启用etcd实例删除保护
                 * @param req EnableEtcdInstanceDeletionProtectionRequest
                 * @return EnableEtcdInstanceDeletionProtectionOutcome
                 */
                EnableEtcdInstanceDeletionProtectionOutcome EnableEtcdInstanceDeletionProtection(const Model::EnableEtcdInstanceDeletionProtectionRequest &request);
                void EnableEtcdInstanceDeletionProtectionAsync(const Model::EnableEtcdInstanceDeletionProtectionRequest& request, const EnableEtcdInstanceDeletionProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableEtcdInstanceDeletionProtectionOutcomeCallable EnableEtcdInstanceDeletionProtectionCallable(const Model::EnableEtcdInstanceDeletionProtectionRequest& request);

                /**
                 *修改etcd实例属性
                 * @param req ModifyEtcdAttributeRequest
                 * @return ModifyEtcdAttributeOutcome
                 */
                ModifyEtcdAttributeOutcome ModifyEtcdAttribute(const Model::ModifyEtcdAttributeRequest &request);
                void ModifyEtcdAttributeAsync(const Model::ModifyEtcdAttributeRequest& request, const ModifyEtcdAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEtcdAttributeOutcomeCallable ModifyEtcdAttributeCallable(const Model::ModifyEtcdAttributeRequest& request);

                /**
                 *修改etcd实例配置
                 * @param req ModifyEtcdConfigurationRequest
                 * @return ModifyEtcdConfigurationOutcome
                 */
                ModifyEtcdConfigurationOutcome ModifyEtcdConfiguration(const Model::ModifyEtcdConfigurationRequest &request);
                void ModifyEtcdConfigurationAsync(const Model::ModifyEtcdConfigurationRequest& request, const ModifyEtcdConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEtcdConfigurationOutcomeCallable ModifyEtcdConfigurationCallable(const Model::ModifyEtcdConfigurationRequest& request);

                /**
                 *修改etcd快照策略
                 * @param req ModifyEtcdSnapshotPolicyRequest
                 * @return ModifyEtcdSnapshotPolicyOutcome
                 */
                ModifyEtcdSnapshotPolicyOutcome ModifyEtcdSnapshotPolicy(const Model::ModifyEtcdSnapshotPolicyRequest &request);
                void ModifyEtcdSnapshotPolicyAsync(const Model::ModifyEtcdSnapshotPolicyRequest& request, const ModifyEtcdSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEtcdSnapshotPolicyOutcomeCallable ModifyEtcdSnapshotPolicyCallable(const Model::ModifyEtcdSnapshotPolicyRequest& request);

                /**
                 *扩容etcd实例
                 * @param req ResizeEtcdInstanceRequest
                 * @return ResizeEtcdInstanceOutcome
                 */
                ResizeEtcdInstanceOutcome ResizeEtcdInstance(const Model::ResizeEtcdInstanceRequest &request);
                void ResizeEtcdInstanceAsync(const Model::ResizeEtcdInstanceRequest& request, const ResizeEtcdInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResizeEtcdInstanceOutcomeCallable ResizeEtcdInstanceCallable(const Model::ResizeEtcdInstanceRequest& request);

                /**
                 *升级etcd实例
                 * @param req UpgradeEtcdInstanceRequest
                 * @return UpgradeEtcdInstanceOutcome
                 */
                UpgradeEtcdInstanceOutcome UpgradeEtcdInstance(const Model::UpgradeEtcdInstanceRequest &request);
                void UpgradeEtcdInstanceAsync(const Model::UpgradeEtcdInstanceRequest& request, const UpgradeEtcdInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeEtcdInstanceOutcomeCallable UpgradeEtcdInstanceCallable(const Model::UpgradeEtcdInstanceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CETCD_V20220325_CETCDCLIENT_H_
