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

#ifndef TENCENTCLOUD_VDB_V20230616_VDBCLIENT_H_
#define TENCENTCLOUD_VDB_V20230616_VDBCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/vdb/v20230616/model/AssociateSecurityGroupsRequest.h>
#include <tencentcloud/vdb/v20230616/model/AssociateSecurityGroupsResponse.h>
#include <tencentcloud/vdb/v20230616/model/CreateInstanceRequest.h>
#include <tencentcloud/vdb/v20230616/model/CreateInstanceResponse.h>
#include <tencentcloud/vdb/v20230616/model/DescribeDBSecurityGroupsRequest.h>
#include <tencentcloud/vdb/v20230616/model/DescribeDBSecurityGroupsResponse.h>
#include <tencentcloud/vdb/v20230616/model/DescribeInstanceMaintenanceWindowRequest.h>
#include <tencentcloud/vdb/v20230616/model/DescribeInstanceMaintenanceWindowResponse.h>
#include <tencentcloud/vdb/v20230616/model/DescribeInstanceNodesRequest.h>
#include <tencentcloud/vdb/v20230616/model/DescribeInstanceNodesResponse.h>
#include <tencentcloud/vdb/v20230616/model/DescribeInstancesRequest.h>
#include <tencentcloud/vdb/v20230616/model/DescribeInstancesResponse.h>
#include <tencentcloud/vdb/v20230616/model/DestroyInstancesRequest.h>
#include <tencentcloud/vdb/v20230616/model/DestroyInstancesResponse.h>
#include <tencentcloud/vdb/v20230616/model/DisassociateSecurityGroupsRequest.h>
#include <tencentcloud/vdb/v20230616/model/DisassociateSecurityGroupsResponse.h>
#include <tencentcloud/vdb/v20230616/model/IsolateInstanceRequest.h>
#include <tencentcloud/vdb/v20230616/model/IsolateInstanceResponse.h>
#include <tencentcloud/vdb/v20230616/model/ModifyDBInstanceSecurityGroupsRequest.h>
#include <tencentcloud/vdb/v20230616/model/ModifyDBInstanceSecurityGroupsResponse.h>
#include <tencentcloud/vdb/v20230616/model/ModifyInstanceMaintenanceWindowRequest.h>
#include <tencentcloud/vdb/v20230616/model/ModifyInstanceMaintenanceWindowResponse.h>
#include <tencentcloud/vdb/v20230616/model/RecoverInstanceRequest.h>
#include <tencentcloud/vdb/v20230616/model/RecoverInstanceResponse.h>
#include <tencentcloud/vdb/v20230616/model/ScaleOutInstanceRequest.h>
#include <tencentcloud/vdb/v20230616/model/ScaleOutInstanceResponse.h>
#include <tencentcloud/vdb/v20230616/model/ScaleUpInstanceRequest.h>
#include <tencentcloud/vdb/v20230616/model/ScaleUpInstanceResponse.h>


namespace TencentCloud
{
    namespace Vdb
    {
        namespace V20230616
        {
            class VdbClient : public AbstractClient
            {
            public:
                VdbClient(const Credential &credential, const std::string &region);
                VdbClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AssociateSecurityGroupsResponse> AssociateSecurityGroupsOutcome;
                typedef std::future<AssociateSecurityGroupsOutcome> AssociateSecurityGroupsOutcomeCallable;
                typedef std::function<void(const VdbClient*, const Model::AssociateSecurityGroupsRequest&, AssociateSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInstanceResponse> CreateInstanceOutcome;
                typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
                typedef std::function<void(const VdbClient*, const Model::CreateInstanceRequest&, CreateInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBSecurityGroupsResponse> DescribeDBSecurityGroupsOutcome;
                typedef std::future<DescribeDBSecurityGroupsOutcome> DescribeDBSecurityGroupsOutcomeCallable;
                typedef std::function<void(const VdbClient*, const Model::DescribeDBSecurityGroupsRequest&, DescribeDBSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceMaintenanceWindowResponse> DescribeInstanceMaintenanceWindowOutcome;
                typedef std::future<DescribeInstanceMaintenanceWindowOutcome> DescribeInstanceMaintenanceWindowOutcomeCallable;
                typedef std::function<void(const VdbClient*, const Model::DescribeInstanceMaintenanceWindowRequest&, DescribeInstanceMaintenanceWindowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceMaintenanceWindowAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceNodesResponse> DescribeInstanceNodesOutcome;
                typedef std::future<DescribeInstanceNodesOutcome> DescribeInstanceNodesOutcomeCallable;
                typedef std::function<void(const VdbClient*, const Model::DescribeInstanceNodesRequest&, DescribeInstanceNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesResponse> DescribeInstancesOutcome;
                typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
                typedef std::function<void(const VdbClient*, const Model::DescribeInstancesRequest&, DescribeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyInstancesResponse> DestroyInstancesOutcome;
                typedef std::future<DestroyInstancesOutcome> DestroyInstancesOutcomeCallable;
                typedef std::function<void(const VdbClient*, const Model::DestroyInstancesRequest&, DestroyInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateSecurityGroupsResponse> DisassociateSecurityGroupsOutcome;
                typedef std::future<DisassociateSecurityGroupsOutcome> DisassociateSecurityGroupsOutcomeCallable;
                typedef std::function<void(const VdbClient*, const Model::DisassociateSecurityGroupsRequest&, DisassociateSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::IsolateInstanceResponse> IsolateInstanceOutcome;
                typedef std::future<IsolateInstanceOutcome> IsolateInstanceOutcomeCallable;
                typedef std::function<void(const VdbClient*, const Model::IsolateInstanceRequest&, IsolateInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IsolateInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceSecurityGroupsResponse> ModifyDBInstanceSecurityGroupsOutcome;
                typedef std::future<ModifyDBInstanceSecurityGroupsOutcome> ModifyDBInstanceSecurityGroupsOutcomeCallable;
                typedef std::function<void(const VdbClient*, const Model::ModifyDBInstanceSecurityGroupsRequest&, ModifyDBInstanceSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceMaintenanceWindowResponse> ModifyInstanceMaintenanceWindowOutcome;
                typedef std::future<ModifyInstanceMaintenanceWindowOutcome> ModifyInstanceMaintenanceWindowOutcomeCallable;
                typedef std::function<void(const VdbClient*, const Model::ModifyInstanceMaintenanceWindowRequest&, ModifyInstanceMaintenanceWindowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceMaintenanceWindowAsyncHandler;
                typedef Outcome<Core::Error, Model::RecoverInstanceResponse> RecoverInstanceOutcome;
                typedef std::future<RecoverInstanceOutcome> RecoverInstanceOutcomeCallable;
                typedef std::function<void(const VdbClient*, const Model::RecoverInstanceRequest&, RecoverInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecoverInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ScaleOutInstanceResponse> ScaleOutInstanceOutcome;
                typedef std::future<ScaleOutInstanceOutcome> ScaleOutInstanceOutcomeCallable;
                typedef std::function<void(const VdbClient*, const Model::ScaleOutInstanceRequest&, ScaleOutInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScaleOutInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ScaleUpInstanceResponse> ScaleUpInstanceOutcome;
                typedef std::future<ScaleUpInstanceOutcome> ScaleUpInstanceOutcomeCallable;
                typedef std::function<void(const VdbClient*, const Model::ScaleUpInstanceRequest&, ScaleUpInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScaleUpInstanceAsyncHandler;



                /**
                 *本接口 (AssociateSecurityGroups) 用于安全组批量绑定多个指定实例。
                 * @param req AssociateSecurityGroupsRequest
                 * @return AssociateSecurityGroupsOutcome
                 */
                AssociateSecurityGroupsOutcome AssociateSecurityGroups(const Model::AssociateSecurityGroupsRequest &request);
                void AssociateSecurityGroupsAsync(const Model::AssociateSecurityGroupsRequest& request, const AssociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateSecurityGroupsOutcomeCallable AssociateSecurityGroupsCallable(const Model::AssociateSecurityGroupsRequest& request);

                /**
                 *本接口（CreateInstance）用于创建向量数据库实例。
                 * @param req CreateInstanceRequest
                 * @return CreateInstanceOutcome
                 */
                CreateInstanceOutcome CreateInstance(const Model::CreateInstanceRequest &request);
                void CreateInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstanceOutcomeCallable CreateInstanceCallable(const Model::CreateInstanceRequest& request);

                /**
                 *本接口(DescribeDBSecurityGroups)用于查询实例的安全组详情。
                 * @param req DescribeDBSecurityGroupsRequest
                 * @return DescribeDBSecurityGroupsOutcome
                 */
                DescribeDBSecurityGroupsOutcome DescribeDBSecurityGroups(const Model::DescribeDBSecurityGroupsRequest &request);
                void DescribeDBSecurityGroupsAsync(const Model::DescribeDBSecurityGroupsRequest& request, const DescribeDBSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBSecurityGroupsOutcomeCallable DescribeDBSecurityGroupsCallable(const Model::DescribeDBSecurityGroupsRequest& request);

                /**
                 *本接口（DescribeInstanceMaintenanceWindow）用于查看实例维护时间窗。
                 * @param req DescribeInstanceMaintenanceWindowRequest
                 * @return DescribeInstanceMaintenanceWindowOutcome
                 */
                DescribeInstanceMaintenanceWindowOutcome DescribeInstanceMaintenanceWindow(const Model::DescribeInstanceMaintenanceWindowRequest &request);
                void DescribeInstanceMaintenanceWindowAsync(const Model::DescribeInstanceMaintenanceWindowRequest& request, const DescribeInstanceMaintenanceWindowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceMaintenanceWindowOutcomeCallable DescribeInstanceMaintenanceWindowCallable(const Model::DescribeInstanceMaintenanceWindowRequest& request);

                /**
                 *查询实例pod列表
                 * @param req DescribeInstanceNodesRequest
                 * @return DescribeInstanceNodesOutcome
                 */
                DescribeInstanceNodesOutcome DescribeInstanceNodes(const Model::DescribeInstanceNodesRequest &request);
                void DescribeInstanceNodesAsync(const Model::DescribeInstanceNodesRequest& request, const DescribeInstanceNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceNodesOutcomeCallable DescribeInstanceNodesCallable(const Model::DescribeInstanceNodesRequest& request);

                /**
                 *查询实例列表
                 * @param req DescribeInstancesRequest
                 * @return DescribeInstancesOutcome
                 */
                DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest &request);
                void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request);

                /**
                 *本接口（DestroyInstances）用于销毁实例。
                 * @param req DestroyInstancesRequest
                 * @return DestroyInstancesOutcome
                 */
                DestroyInstancesOutcome DestroyInstances(const Model::DestroyInstancesRequest &request);
                void DestroyInstancesAsync(const Model::DestroyInstancesRequest& request, const DestroyInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyInstancesOutcomeCallable DestroyInstancesCallable(const Model::DestroyInstancesRequest& request);

                /**
                 *本接口(DisassociateSecurityGroups)用于安全组批量解绑实例。
                 * @param req DisassociateSecurityGroupsRequest
                 * @return DisassociateSecurityGroupsOutcome
                 */
                DisassociateSecurityGroupsOutcome DisassociateSecurityGroups(const Model::DisassociateSecurityGroupsRequest &request);
                void DisassociateSecurityGroupsAsync(const Model::DisassociateSecurityGroupsRequest& request, const DisassociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateSecurityGroupsOutcomeCallable DisassociateSecurityGroupsCallable(const Model::DisassociateSecurityGroupsRequest& request);

                /**
                 *本接口（IsolateInstance）用于隔离实例于回收站，在回收站保护时长内可恢复实例。
                 * @param req IsolateInstanceRequest
                 * @return IsolateInstanceOutcome
                 */
                IsolateInstanceOutcome IsolateInstance(const Model::IsolateInstanceRequest &request);
                void IsolateInstanceAsync(const Model::IsolateInstanceRequest& request, const IsolateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IsolateInstanceOutcomeCallable IsolateInstanceCallable(const Model::IsolateInstanceRequest& request);

                /**
                 *本接口(ModifyDBInstanceSecurityGroups)用于修改实例绑定的安全组。
                 * @param req ModifyDBInstanceSecurityGroupsRequest
                 * @return ModifyDBInstanceSecurityGroupsOutcome
                 */
                ModifyDBInstanceSecurityGroupsOutcome ModifyDBInstanceSecurityGroups(const Model::ModifyDBInstanceSecurityGroupsRequest &request);
                void ModifyDBInstanceSecurityGroupsAsync(const Model::ModifyDBInstanceSecurityGroupsRequest& request, const ModifyDBInstanceSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceSecurityGroupsOutcomeCallable ModifyDBInstanceSecurityGroupsCallable(const Model::ModifyDBInstanceSecurityGroupsRequest& request);

                /**
                 *本接口（ModifyInstanceMaintenanceWindow）用于修改实例维护时间窗范围。
                 * @param req ModifyInstanceMaintenanceWindowRequest
                 * @return ModifyInstanceMaintenanceWindowOutcome
                 */
                ModifyInstanceMaintenanceWindowOutcome ModifyInstanceMaintenanceWindow(const Model::ModifyInstanceMaintenanceWindowRequest &request);
                void ModifyInstanceMaintenanceWindowAsync(const Model::ModifyInstanceMaintenanceWindowRequest& request, const ModifyInstanceMaintenanceWindowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceMaintenanceWindowOutcomeCallable ModifyInstanceMaintenanceWindowCallable(const Model::ModifyInstanceMaintenanceWindowRequest& request);

                /**
                 *本接口（RecoverInstance）用于恢复在回收站隔离的实例。
                 * @param req RecoverInstanceRequest
                 * @return RecoverInstanceOutcome
                 */
                RecoverInstanceOutcome RecoverInstance(const Model::RecoverInstanceRequest &request);
                void RecoverInstanceAsync(const Model::RecoverInstanceRequest& request, const RecoverInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecoverInstanceOutcomeCallable RecoverInstanceCallable(const Model::RecoverInstanceRequest& request);

                /**
                 *本接口（ScaleOutInstance）用于水平扩容节点数量。
                 * @param req ScaleOutInstanceRequest
                 * @return ScaleOutInstanceOutcome
                 */
                ScaleOutInstanceOutcome ScaleOutInstance(const Model::ScaleOutInstanceRequest &request);
                void ScaleOutInstanceAsync(const Model::ScaleOutInstanceRequest& request, const ScaleOutInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScaleOutInstanceOutcomeCallable ScaleOutInstanceCallable(const Model::ScaleOutInstanceRequest& request);

                /**
                 *本接口（ScaleUpInstance）用于升级节点配置规格。
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

#endif // !TENCENTCLOUD_VDB_V20230616_VDBCLIENT_H_
