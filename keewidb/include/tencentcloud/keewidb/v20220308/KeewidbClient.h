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

#ifndef TENCENTCLOUD_KEEWIDB_V20220308_KEEWIDBCLIENT_H_
#define TENCENTCLOUD_KEEWIDB_V20220308_KEEWIDBCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/keewidb/v20220308/model/AssociateSecurityGroupsRequest.h>
#include <tencentcloud/keewidb/v20220308/model/AssociateSecurityGroupsResponse.h>
#include <tencentcloud/keewidb/v20220308/model/ChangeInstanceMasterRequest.h>
#include <tencentcloud/keewidb/v20220308/model/ChangeInstanceMasterResponse.h>
#include <tencentcloud/keewidb/v20220308/model/CleanUpInstanceRequest.h>
#include <tencentcloud/keewidb/v20220308/model/CleanUpInstanceResponse.h>
#include <tencentcloud/keewidb/v20220308/model/ClearInstanceRequest.h>
#include <tencentcloud/keewidb/v20220308/model/ClearInstanceResponse.h>
#include <tencentcloud/keewidb/v20220308/model/CreateBackupManuallyRequest.h>
#include <tencentcloud/keewidb/v20220308/model/CreateBackupManuallyResponse.h>
#include <tencentcloud/keewidb/v20220308/model/CreateInstancesRequest.h>
#include <tencentcloud/keewidb/v20220308/model/CreateInstancesResponse.h>
#include <tencentcloud/keewidb/v20220308/model/DescribeAutoBackupConfigRequest.h>
#include <tencentcloud/keewidb/v20220308/model/DescribeAutoBackupConfigResponse.h>
#include <tencentcloud/keewidb/v20220308/model/DescribeConnectionConfigRequest.h>
#include <tencentcloud/keewidb/v20220308/model/DescribeConnectionConfigResponse.h>
#include <tencentcloud/keewidb/v20220308/model/DescribeDBSecurityGroupsRequest.h>
#include <tencentcloud/keewidb/v20220308/model/DescribeDBSecurityGroupsResponse.h>
#include <tencentcloud/keewidb/v20220308/model/DescribeInstanceBackupsRequest.h>
#include <tencentcloud/keewidb/v20220308/model/DescribeInstanceBackupsResponse.h>
#include <tencentcloud/keewidb/v20220308/model/DescribeInstanceBinlogsRequest.h>
#include <tencentcloud/keewidb/v20220308/model/DescribeInstanceBinlogsResponse.h>
#include <tencentcloud/keewidb/v20220308/model/DescribeInstanceDealDetailRequest.h>
#include <tencentcloud/keewidb/v20220308/model/DescribeInstanceDealDetailResponse.h>
#include <tencentcloud/keewidb/v20220308/model/DescribeInstanceNodeInfoRequest.h>
#include <tencentcloud/keewidb/v20220308/model/DescribeInstanceNodeInfoResponse.h>
#include <tencentcloud/keewidb/v20220308/model/DescribeInstanceParamRecordsRequest.h>
#include <tencentcloud/keewidb/v20220308/model/DescribeInstanceParamRecordsResponse.h>
#include <tencentcloud/keewidb/v20220308/model/DescribeInstanceParamsRequest.h>
#include <tencentcloud/keewidb/v20220308/model/DescribeInstanceParamsResponse.h>
#include <tencentcloud/keewidb/v20220308/model/DescribeInstanceReplicasRequest.h>
#include <tencentcloud/keewidb/v20220308/model/DescribeInstanceReplicasResponse.h>
#include <tencentcloud/keewidb/v20220308/model/DescribeInstancesRequest.h>
#include <tencentcloud/keewidb/v20220308/model/DescribeInstancesResponse.h>
#include <tencentcloud/keewidb/v20220308/model/DescribeMaintenanceWindowRequest.h>
#include <tencentcloud/keewidb/v20220308/model/DescribeMaintenanceWindowResponse.h>
#include <tencentcloud/keewidb/v20220308/model/DescribeProductInfoRequest.h>
#include <tencentcloud/keewidb/v20220308/model/DescribeProductInfoResponse.h>
#include <tencentcloud/keewidb/v20220308/model/DescribeProjectSecurityGroupsRequest.h>
#include <tencentcloud/keewidb/v20220308/model/DescribeProjectSecurityGroupsResponse.h>
#include <tencentcloud/keewidb/v20220308/model/DescribeProxySlowLogRequest.h>
#include <tencentcloud/keewidb/v20220308/model/DescribeProxySlowLogResponse.h>
#include <tencentcloud/keewidb/v20220308/model/DescribeTaskInfoRequest.h>
#include <tencentcloud/keewidb/v20220308/model/DescribeTaskInfoResponse.h>
#include <tencentcloud/keewidb/v20220308/model/DescribeTaskListRequest.h>
#include <tencentcloud/keewidb/v20220308/model/DescribeTaskListResponse.h>
#include <tencentcloud/keewidb/v20220308/model/DescribeTendisSlowLogRequest.h>
#include <tencentcloud/keewidb/v20220308/model/DescribeTendisSlowLogResponse.h>
#include <tencentcloud/keewidb/v20220308/model/DestroyPostpaidInstanceRequest.h>
#include <tencentcloud/keewidb/v20220308/model/DestroyPostpaidInstanceResponse.h>
#include <tencentcloud/keewidb/v20220308/model/DestroyPrepaidInstanceRequest.h>
#include <tencentcloud/keewidb/v20220308/model/DestroyPrepaidInstanceResponse.h>
#include <tencentcloud/keewidb/v20220308/model/DisassociateSecurityGroupsRequest.h>
#include <tencentcloud/keewidb/v20220308/model/DisassociateSecurityGroupsResponse.h>
#include <tencentcloud/keewidb/v20220308/model/ModifyAutoBackupConfigRequest.h>
#include <tencentcloud/keewidb/v20220308/model/ModifyAutoBackupConfigResponse.h>
#include <tencentcloud/keewidb/v20220308/model/ModifyConnectionConfigRequest.h>
#include <tencentcloud/keewidb/v20220308/model/ModifyConnectionConfigResponse.h>
#include <tencentcloud/keewidb/v20220308/model/ModifyDBInstanceSecurityGroupsRequest.h>
#include <tencentcloud/keewidb/v20220308/model/ModifyDBInstanceSecurityGroupsResponse.h>
#include <tencentcloud/keewidb/v20220308/model/ModifyInstanceRequest.h>
#include <tencentcloud/keewidb/v20220308/model/ModifyInstanceResponse.h>
#include <tencentcloud/keewidb/v20220308/model/ModifyInstanceParamsRequest.h>
#include <tencentcloud/keewidb/v20220308/model/ModifyInstanceParamsResponse.h>
#include <tencentcloud/keewidb/v20220308/model/ModifyMaintenanceWindowRequest.h>
#include <tencentcloud/keewidb/v20220308/model/ModifyMaintenanceWindowResponse.h>
#include <tencentcloud/keewidb/v20220308/model/ModifyNetworkConfigRequest.h>
#include <tencentcloud/keewidb/v20220308/model/ModifyNetworkConfigResponse.h>
#include <tencentcloud/keewidb/v20220308/model/RenewInstanceRequest.h>
#include <tencentcloud/keewidb/v20220308/model/RenewInstanceResponse.h>
#include <tencentcloud/keewidb/v20220308/model/ResetPasswordRequest.h>
#include <tencentcloud/keewidb/v20220308/model/ResetPasswordResponse.h>
#include <tencentcloud/keewidb/v20220308/model/StartUpInstanceRequest.h>
#include <tencentcloud/keewidb/v20220308/model/StartUpInstanceResponse.h>
#include <tencentcloud/keewidb/v20220308/model/UpgradeInstanceRequest.h>
#include <tencentcloud/keewidb/v20220308/model/UpgradeInstanceResponse.h>


namespace TencentCloud
{
    namespace Keewidb
    {
        namespace V20220308
        {
            class KeewidbClient : public AbstractClient
            {
            public:
                KeewidbClient(const Credential &credential, const std::string &region);
                KeewidbClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AssociateSecurityGroupsResponse> AssociateSecurityGroupsOutcome;
                typedef std::future<AssociateSecurityGroupsOutcome> AssociateSecurityGroupsOutcomeCallable;
                typedef std::function<void(const KeewidbClient*, const Model::AssociateSecurityGroupsRequest&, AssociateSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::ChangeInstanceMasterResponse> ChangeInstanceMasterOutcome;
                typedef std::future<ChangeInstanceMasterOutcome> ChangeInstanceMasterOutcomeCallable;
                typedef std::function<void(const KeewidbClient*, const Model::ChangeInstanceMasterRequest&, ChangeInstanceMasterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChangeInstanceMasterAsyncHandler;
                typedef Outcome<Core::Error, Model::CleanUpInstanceResponse> CleanUpInstanceOutcome;
                typedef std::future<CleanUpInstanceOutcome> CleanUpInstanceOutcomeCallable;
                typedef std::function<void(const KeewidbClient*, const Model::CleanUpInstanceRequest&, CleanUpInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CleanUpInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ClearInstanceResponse> ClearInstanceOutcome;
                typedef std::future<ClearInstanceOutcome> ClearInstanceOutcomeCallable;
                typedef std::function<void(const KeewidbClient*, const Model::ClearInstanceRequest&, ClearInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ClearInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBackupManuallyResponse> CreateBackupManuallyOutcome;
                typedef std::future<CreateBackupManuallyOutcome> CreateBackupManuallyOutcomeCallable;
                typedef std::function<void(const KeewidbClient*, const Model::CreateBackupManuallyRequest&, CreateBackupManuallyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBackupManuallyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInstancesResponse> CreateInstancesOutcome;
                typedef std::future<CreateInstancesOutcome> CreateInstancesOutcomeCallable;
                typedef std::function<void(const KeewidbClient*, const Model::CreateInstancesRequest&, CreateInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAutoBackupConfigResponse> DescribeAutoBackupConfigOutcome;
                typedef std::future<DescribeAutoBackupConfigOutcome> DescribeAutoBackupConfigOutcomeCallable;
                typedef std::function<void(const KeewidbClient*, const Model::DescribeAutoBackupConfigRequest&, DescribeAutoBackupConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoBackupConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConnectionConfigResponse> DescribeConnectionConfigOutcome;
                typedef std::future<DescribeConnectionConfigOutcome> DescribeConnectionConfigOutcomeCallable;
                typedef std::function<void(const KeewidbClient*, const Model::DescribeConnectionConfigRequest&, DescribeConnectionConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConnectionConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBSecurityGroupsResponse> DescribeDBSecurityGroupsOutcome;
                typedef std::future<DescribeDBSecurityGroupsOutcome> DescribeDBSecurityGroupsOutcomeCallable;
                typedef std::function<void(const KeewidbClient*, const Model::DescribeDBSecurityGroupsRequest&, DescribeDBSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceBackupsResponse> DescribeInstanceBackupsOutcome;
                typedef std::future<DescribeInstanceBackupsOutcome> DescribeInstanceBackupsOutcomeCallable;
                typedef std::function<void(const KeewidbClient*, const Model::DescribeInstanceBackupsRequest&, DescribeInstanceBackupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceBackupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceBinlogsResponse> DescribeInstanceBinlogsOutcome;
                typedef std::future<DescribeInstanceBinlogsOutcome> DescribeInstanceBinlogsOutcomeCallable;
                typedef std::function<void(const KeewidbClient*, const Model::DescribeInstanceBinlogsRequest&, DescribeInstanceBinlogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceBinlogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceDealDetailResponse> DescribeInstanceDealDetailOutcome;
                typedef std::future<DescribeInstanceDealDetailOutcome> DescribeInstanceDealDetailOutcomeCallable;
                typedef std::function<void(const KeewidbClient*, const Model::DescribeInstanceDealDetailRequest&, DescribeInstanceDealDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceDealDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceNodeInfoResponse> DescribeInstanceNodeInfoOutcome;
                typedef std::future<DescribeInstanceNodeInfoOutcome> DescribeInstanceNodeInfoOutcomeCallable;
                typedef std::function<void(const KeewidbClient*, const Model::DescribeInstanceNodeInfoRequest&, DescribeInstanceNodeInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceNodeInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceParamRecordsResponse> DescribeInstanceParamRecordsOutcome;
                typedef std::future<DescribeInstanceParamRecordsOutcome> DescribeInstanceParamRecordsOutcomeCallable;
                typedef std::function<void(const KeewidbClient*, const Model::DescribeInstanceParamRecordsRequest&, DescribeInstanceParamRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceParamRecordsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceParamsResponse> DescribeInstanceParamsOutcome;
                typedef std::future<DescribeInstanceParamsOutcome> DescribeInstanceParamsOutcomeCallable;
                typedef std::function<void(const KeewidbClient*, const Model::DescribeInstanceParamsRequest&, DescribeInstanceParamsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceParamsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceReplicasResponse> DescribeInstanceReplicasOutcome;
                typedef std::future<DescribeInstanceReplicasOutcome> DescribeInstanceReplicasOutcomeCallable;
                typedef std::function<void(const KeewidbClient*, const Model::DescribeInstanceReplicasRequest&, DescribeInstanceReplicasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceReplicasAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesResponse> DescribeInstancesOutcome;
                typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
                typedef std::function<void(const KeewidbClient*, const Model::DescribeInstancesRequest&, DescribeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMaintenanceWindowResponse> DescribeMaintenanceWindowOutcome;
                typedef std::future<DescribeMaintenanceWindowOutcome> DescribeMaintenanceWindowOutcomeCallable;
                typedef std::function<void(const KeewidbClient*, const Model::DescribeMaintenanceWindowRequest&, DescribeMaintenanceWindowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMaintenanceWindowAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProductInfoResponse> DescribeProductInfoOutcome;
                typedef std::future<DescribeProductInfoOutcome> DescribeProductInfoOutcomeCallable;
                typedef std::function<void(const KeewidbClient*, const Model::DescribeProductInfoRequest&, DescribeProductInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProjectSecurityGroupsResponse> DescribeProjectSecurityGroupsOutcome;
                typedef std::future<DescribeProjectSecurityGroupsOutcome> DescribeProjectSecurityGroupsOutcomeCallable;
                typedef std::function<void(const KeewidbClient*, const Model::DescribeProjectSecurityGroupsRequest&, DescribeProjectSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProxySlowLogResponse> DescribeProxySlowLogOutcome;
                typedef std::future<DescribeProxySlowLogOutcome> DescribeProxySlowLogOutcomeCallable;
                typedef std::function<void(const KeewidbClient*, const Model::DescribeProxySlowLogRequest&, DescribeProxySlowLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProxySlowLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskInfoResponse> DescribeTaskInfoOutcome;
                typedef std::future<DescribeTaskInfoOutcome> DescribeTaskInfoOutcomeCallable;
                typedef std::function<void(const KeewidbClient*, const Model::DescribeTaskInfoRequest&, DescribeTaskInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskListResponse> DescribeTaskListOutcome;
                typedef std::future<DescribeTaskListOutcome> DescribeTaskListOutcomeCallable;
                typedef std::function<void(const KeewidbClient*, const Model::DescribeTaskListRequest&, DescribeTaskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTendisSlowLogResponse> DescribeTendisSlowLogOutcome;
                typedef std::future<DescribeTendisSlowLogOutcome> DescribeTendisSlowLogOutcomeCallable;
                typedef std::function<void(const KeewidbClient*, const Model::DescribeTendisSlowLogRequest&, DescribeTendisSlowLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTendisSlowLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyPostpaidInstanceResponse> DestroyPostpaidInstanceOutcome;
                typedef std::future<DestroyPostpaidInstanceOutcome> DestroyPostpaidInstanceOutcomeCallable;
                typedef std::function<void(const KeewidbClient*, const Model::DestroyPostpaidInstanceRequest&, DestroyPostpaidInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyPostpaidInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyPrepaidInstanceResponse> DestroyPrepaidInstanceOutcome;
                typedef std::future<DestroyPrepaidInstanceOutcome> DestroyPrepaidInstanceOutcomeCallable;
                typedef std::function<void(const KeewidbClient*, const Model::DestroyPrepaidInstanceRequest&, DestroyPrepaidInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyPrepaidInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateSecurityGroupsResponse> DisassociateSecurityGroupsOutcome;
                typedef std::future<DisassociateSecurityGroupsOutcome> DisassociateSecurityGroupsOutcomeCallable;
                typedef std::function<void(const KeewidbClient*, const Model::DisassociateSecurityGroupsRequest&, DisassociateSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAutoBackupConfigResponse> ModifyAutoBackupConfigOutcome;
                typedef std::future<ModifyAutoBackupConfigOutcome> ModifyAutoBackupConfigOutcomeCallable;
                typedef std::function<void(const KeewidbClient*, const Model::ModifyAutoBackupConfigRequest&, ModifyAutoBackupConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAutoBackupConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyConnectionConfigResponse> ModifyConnectionConfigOutcome;
                typedef std::future<ModifyConnectionConfigOutcome> ModifyConnectionConfigOutcomeCallable;
                typedef std::function<void(const KeewidbClient*, const Model::ModifyConnectionConfigRequest&, ModifyConnectionConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyConnectionConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceSecurityGroupsResponse> ModifyDBInstanceSecurityGroupsOutcome;
                typedef std::future<ModifyDBInstanceSecurityGroupsOutcome> ModifyDBInstanceSecurityGroupsOutcomeCallable;
                typedef std::function<void(const KeewidbClient*, const Model::ModifyDBInstanceSecurityGroupsRequest&, ModifyDBInstanceSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceResponse> ModifyInstanceOutcome;
                typedef std::future<ModifyInstanceOutcome> ModifyInstanceOutcomeCallable;
                typedef std::function<void(const KeewidbClient*, const Model::ModifyInstanceRequest&, ModifyInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceParamsResponse> ModifyInstanceParamsOutcome;
                typedef std::future<ModifyInstanceParamsOutcome> ModifyInstanceParamsOutcomeCallable;
                typedef std::function<void(const KeewidbClient*, const Model::ModifyInstanceParamsRequest&, ModifyInstanceParamsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceParamsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMaintenanceWindowResponse> ModifyMaintenanceWindowOutcome;
                typedef std::future<ModifyMaintenanceWindowOutcome> ModifyMaintenanceWindowOutcomeCallable;
                typedef std::function<void(const KeewidbClient*, const Model::ModifyMaintenanceWindowRequest&, ModifyMaintenanceWindowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMaintenanceWindowAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNetworkConfigResponse> ModifyNetworkConfigOutcome;
                typedef std::future<ModifyNetworkConfigOutcome> ModifyNetworkConfigOutcomeCallable;
                typedef std::function<void(const KeewidbClient*, const Model::ModifyNetworkConfigRequest&, ModifyNetworkConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNetworkConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewInstanceResponse> RenewInstanceOutcome;
                typedef std::future<RenewInstanceOutcome> RenewInstanceOutcomeCallable;
                typedef std::function<void(const KeewidbClient*, const Model::RenewInstanceRequest&, RenewInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetPasswordResponse> ResetPasswordOutcome;
                typedef std::future<ResetPasswordOutcome> ResetPasswordOutcomeCallable;
                typedef std::function<void(const KeewidbClient*, const Model::ResetPasswordRequest&, ResetPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::StartUpInstanceResponse> StartUpInstanceOutcome;
                typedef std::future<StartUpInstanceOutcome> StartUpInstanceOutcomeCallable;
                typedef std::function<void(const KeewidbClient*, const Model::StartUpInstanceRequest&, StartUpInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartUpInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeInstanceResponse> UpgradeInstanceOutcome;
                typedef std::future<UpgradeInstanceOutcome> UpgradeInstanceOutcomeCallable;
                typedef std::function<void(const KeewidbClient*, const Model::UpgradeInstanceRequest&, UpgradeInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeInstanceAsyncHandler;



                /**
                 *本接口 (AssociateSecurityGroups) 用于安全组批量绑定多个指定实例。
                 * @param req AssociateSecurityGroupsRequest
                 * @return AssociateSecurityGroupsOutcome
                 */
                AssociateSecurityGroupsOutcome AssociateSecurityGroups(const Model::AssociateSecurityGroupsRequest &request);
                void AssociateSecurityGroupsAsync(const Model::AssociateSecurityGroupsRequest& request, const AssociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateSecurityGroupsOutcomeCallable AssociateSecurityGroupsCallable(const Model::AssociateSecurityGroupsRequest& request);

                /**
                 *本接口（ChangeInstanceMaster）用于将副本节点提升为主节点。
                 * @param req ChangeInstanceMasterRequest
                 * @return ChangeInstanceMasterOutcome
                 */
                ChangeInstanceMasterOutcome ChangeInstanceMaster(const Model::ChangeInstanceMasterRequest &request);
                void ChangeInstanceMasterAsync(const Model::ChangeInstanceMasterRequest& request, const ChangeInstanceMasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChangeInstanceMasterOutcomeCallable ChangeInstanceMasterCallable(const Model::ChangeInstanceMasterRequest& request);

                /**
                 *本接口（CleanUpInstance）用于立即下线回收站已隔离的实例。
                 * @param req CleanUpInstanceRequest
                 * @return CleanUpInstanceOutcome
                 */
                CleanUpInstanceOutcome CleanUpInstance(const Model::CleanUpInstanceRequest &request);
                void CleanUpInstanceAsync(const Model::CleanUpInstanceRequest& request, const CleanUpInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CleanUpInstanceOutcomeCallable CleanUpInstanceCallable(const Model::CleanUpInstanceRequest& request);

                /**
                 *本接口（ClearInstance）用于清空实例数据。
> **说明**：在清空数据流程中，系统将自动进行数据备份，耗时较长，请您耐心等待并提前做好时间规划。
                 * @param req ClearInstanceRequest
                 * @return ClearInstanceOutcome
                 */
                ClearInstanceOutcome ClearInstance(const Model::ClearInstanceRequest &request);
                void ClearInstanceAsync(const Model::ClearInstanceRequest& request, const ClearInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ClearInstanceOutcomeCallable ClearInstanceCallable(const Model::ClearInstanceRequest& request);

                /**
                 *手动发起备份
                 * @param req CreateBackupManuallyRequest
                 * @return CreateBackupManuallyOutcome
                 */
                CreateBackupManuallyOutcome CreateBackupManually(const Model::CreateBackupManuallyRequest &request);
                void CreateBackupManuallyAsync(const Model::CreateBackupManuallyRequest& request, const CreateBackupManuallyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBackupManuallyOutcomeCallable CreateBackupManuallyCallable(const Model::CreateBackupManuallyRequest& request);

                /**
                 *创建数据库实例
                 * @param req CreateInstancesRequest
                 * @return CreateInstancesOutcome
                 */
                CreateInstancesOutcome CreateInstances(const Model::CreateInstancesRequest &request);
                void CreateInstancesAsync(const Model::CreateInstancesRequest& request, const CreateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstancesOutcomeCallable CreateInstancesCallable(const Model::CreateInstancesRequest& request);

                /**
                 *本接口（DescribeAutoBackupConfig）用于获取自动备份配置。
                 * @param req DescribeAutoBackupConfigRequest
                 * @return DescribeAutoBackupConfigOutcome
                 */
                DescribeAutoBackupConfigOutcome DescribeAutoBackupConfig(const Model::DescribeAutoBackupConfigRequest &request);
                void DescribeAutoBackupConfigAsync(const Model::DescribeAutoBackupConfigRequest& request, const DescribeAutoBackupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAutoBackupConfigOutcomeCallable DescribeAutoBackupConfigCallable(const Model::DescribeAutoBackupConfigRequest& request);

                /**
                 *本接口（DescribeConnectionConfig）用于查询实例连接配置，包括出流量和入流量带宽、最大连接数限制。
                 * @param req DescribeConnectionConfigRequest
                 * @return DescribeConnectionConfigOutcome
                 */
                DescribeConnectionConfigOutcome DescribeConnectionConfig(const Model::DescribeConnectionConfigRequest &request);
                void DescribeConnectionConfigAsync(const Model::DescribeConnectionConfigRequest& request, const DescribeConnectionConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConnectionConfigOutcomeCallable DescribeConnectionConfigCallable(const Model::DescribeConnectionConfigRequest& request);

                /**
                 *本接口(DescribeDBSecurityGroups)用于查询实例的安全组详情。
                 * @param req DescribeDBSecurityGroupsRequest
                 * @return DescribeDBSecurityGroupsOutcome
                 */
                DescribeDBSecurityGroupsOutcome DescribeDBSecurityGroups(const Model::DescribeDBSecurityGroupsRequest &request);
                void DescribeDBSecurityGroupsAsync(const Model::DescribeDBSecurityGroupsRequest& request, const DescribeDBSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBSecurityGroupsOutcomeCallable DescribeDBSecurityGroupsCallable(const Model::DescribeDBSecurityGroupsRequest& request);

                /**
                 *本接口（DescribeInstanceBackups）用于查询实例全量备份列表。
                 * @param req DescribeInstanceBackupsRequest
                 * @return DescribeInstanceBackupsOutcome
                 */
                DescribeInstanceBackupsOutcome DescribeInstanceBackups(const Model::DescribeInstanceBackupsRequest &request);
                void DescribeInstanceBackupsAsync(const Model::DescribeInstanceBackupsRequest& request, const DescribeInstanceBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceBackupsOutcomeCallable DescribeInstanceBackupsCallable(const Model::DescribeInstanceBackupsRequest& request);

                /**
                 *本接口（DescribeInstanceBinlogs）用于查询增量备份列表。
                 * @param req DescribeInstanceBinlogsRequest
                 * @return DescribeInstanceBinlogsOutcome
                 */
                DescribeInstanceBinlogsOutcome DescribeInstanceBinlogs(const Model::DescribeInstanceBinlogsRequest &request);
                void DescribeInstanceBinlogsAsync(const Model::DescribeInstanceBinlogsRequest& request, const DescribeInstanceBinlogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceBinlogsOutcomeCallable DescribeInstanceBinlogsCallable(const Model::DescribeInstanceBinlogsRequest& request);

                /**
                 *本接口（DescribeInstanceDealDetail）用于查询预付费订单信息。
                 * @param req DescribeInstanceDealDetailRequest
                 * @return DescribeInstanceDealDetailOutcome
                 */
                DescribeInstanceDealDetailOutcome DescribeInstanceDealDetail(const Model::DescribeInstanceDealDetailRequest &request);
                void DescribeInstanceDealDetailAsync(const Model::DescribeInstanceDealDetailRequest& request, const DescribeInstanceDealDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceDealDetailOutcomeCallable DescribeInstanceDealDetailCallable(const Model::DescribeInstanceDealDetailRequest& request);

                /**
                 *本接口（DescribeInstanceNodeInfo）查询实例节点信息。
                 * @param req DescribeInstanceNodeInfoRequest
                 * @return DescribeInstanceNodeInfoOutcome
                 */
                DescribeInstanceNodeInfoOutcome DescribeInstanceNodeInfo(const Model::DescribeInstanceNodeInfoRequest &request);
                void DescribeInstanceNodeInfoAsync(const Model::DescribeInstanceNodeInfoRequest& request, const DescribeInstanceNodeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceNodeInfoOutcomeCallable DescribeInstanceNodeInfoCallable(const Model::DescribeInstanceNodeInfoRequest& request);

                /**
                 *本接口（DescribeInstanceParamRecords）查询参数配置修改历史列表。
                 * @param req DescribeInstanceParamRecordsRequest
                 * @return DescribeInstanceParamRecordsOutcome
                 */
                DescribeInstanceParamRecordsOutcome DescribeInstanceParamRecords(const Model::DescribeInstanceParamRecordsRequest &request);
                void DescribeInstanceParamRecordsAsync(const Model::DescribeInstanceParamRecordsRequest& request, const DescribeInstanceParamRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceParamRecordsOutcomeCallable DescribeInstanceParamRecordsCallable(const Model::DescribeInstanceParamRecordsRequest& request);

                /**
                 *本接口（DescribeInstanceParams）用于查询实例的参数列表。
                 * @param req DescribeInstanceParamsRequest
                 * @return DescribeInstanceParamsOutcome
                 */
                DescribeInstanceParamsOutcome DescribeInstanceParams(const Model::DescribeInstanceParamsRequest &request);
                void DescribeInstanceParamsAsync(const Model::DescribeInstanceParamsRequest& request, const DescribeInstanceParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceParamsOutcomeCallable DescribeInstanceParamsCallable(const Model::DescribeInstanceParamsRequest& request);

                /**
                 *本接口（DescribeInstanceReplicas）用于获取实例副本节点信息。
                 * @param req DescribeInstanceReplicasRequest
                 * @return DescribeInstanceReplicasOutcome
                 */
                DescribeInstanceReplicasOutcome DescribeInstanceReplicas(const Model::DescribeInstanceReplicasRequest &request);
                void DescribeInstanceReplicasAsync(const Model::DescribeInstanceReplicasRequest& request, const DescribeInstanceReplicasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceReplicasOutcomeCallable DescribeInstanceReplicasCallable(const Model::DescribeInstanceReplicasRequest& request);

                /**
                 *本接口（DescribeInstances）可以根据地域、网络、实例id、标签、计费方式等条件，搜索查询实例列表。
                 * @param req DescribeInstancesRequest
                 * @return DescribeInstancesOutcome
                 */
                DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest &request);
                void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request);

                /**
                 *本接口（DescribeMaintenanceWindow）用于查询实例维护时间窗。
                 * @param req DescribeMaintenanceWindowRequest
                 * @return DescribeMaintenanceWindowOutcome
                 */
                DescribeMaintenanceWindowOutcome DescribeMaintenanceWindow(const Model::DescribeMaintenanceWindowRequest &request);
                void DescribeMaintenanceWindowAsync(const Model::DescribeMaintenanceWindowRequest& request, const DescribeMaintenanceWindowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMaintenanceWindowOutcomeCallable DescribeMaintenanceWindowCallable(const Model::DescribeMaintenanceWindowRequest& request);

                /**
                 *本接口查询指定可用区和实例类型下keewidb 的售卖规格， 如果用户不在购买白名单中，将不能查询该可用区或该类型的售卖规格详情。申请购买某地域白名单可以提交工单
                 * @param req DescribeProductInfoRequest
                 * @return DescribeProductInfoOutcome
                 */
                DescribeProductInfoOutcome DescribeProductInfo(const Model::DescribeProductInfoRequest &request);
                void DescribeProductInfoAsync(const Model::DescribeProductInfoRequest& request, const DescribeProductInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProductInfoOutcomeCallable DescribeProductInfoCallable(const Model::DescribeProductInfoRequest& request);

                /**
                 *本接口(DescribeProjectSecurityGroups)用于查询项目的安全组详情。
                 * @param req DescribeProjectSecurityGroupsRequest
                 * @return DescribeProjectSecurityGroupsOutcome
                 */
                DescribeProjectSecurityGroupsOutcome DescribeProjectSecurityGroups(const Model::DescribeProjectSecurityGroupsRequest &request);
                void DescribeProjectSecurityGroupsAsync(const Model::DescribeProjectSecurityGroupsRequest& request, const DescribeProjectSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProjectSecurityGroupsOutcomeCallable DescribeProjectSecurityGroupsCallable(const Model::DescribeProjectSecurityGroupsRequest& request);

                /**
                 *本接口（DescribeProxySlowLog）用于查询代理（Proxy）慢日志。
                 * @param req DescribeProxySlowLogRequest
                 * @return DescribeProxySlowLogOutcome
                 */
                DescribeProxySlowLogOutcome DescribeProxySlowLog(const Model::DescribeProxySlowLogRequest &request);
                void DescribeProxySlowLogAsync(const Model::DescribeProxySlowLogRequest& request, const DescribeProxySlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProxySlowLogOutcomeCallable DescribeProxySlowLogCallable(const Model::DescribeProxySlowLogRequest& request);

                /**
                 *本接口（DescribeTaskInfo）用于查询异步任务结果。
                 * @param req DescribeTaskInfoRequest
                 * @return DescribeTaskInfoOutcome
                 */
                DescribeTaskInfoOutcome DescribeTaskInfo(const Model::DescribeTaskInfoRequest &request);
                void DescribeTaskInfoAsync(const Model::DescribeTaskInfoRequest& request, const DescribeTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskInfoOutcomeCallable DescribeTaskInfoCallable(const Model::DescribeTaskInfoRequest& request);

                /**
                 *本接口（DescribeTaskList）用于查询任务列表信息。
                 * @param req DescribeTaskListRequest
                 * @return DescribeTaskListOutcome
                 */
                DescribeTaskListOutcome DescribeTaskList(const Model::DescribeTaskListRequest &request);
                void DescribeTaskListAsync(const Model::DescribeTaskListRequest& request, const DescribeTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskListOutcomeCallable DescribeTaskListCallable(const Model::DescribeTaskListRequest& request);

                /**
                 *本接口（DescribeTendisSlowLog）用于查询实例慢日志。
                 * @param req DescribeTendisSlowLogRequest
                 * @return DescribeTendisSlowLogOutcome
                 */
                DescribeTendisSlowLogOutcome DescribeTendisSlowLog(const Model::DescribeTendisSlowLogRequest &request);
                void DescribeTendisSlowLogAsync(const Model::DescribeTendisSlowLogRequest& request, const DescribeTendisSlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTendisSlowLogOutcomeCallable DescribeTendisSlowLogCallable(const Model::DescribeTendisSlowLogRequest& request);

                /**
                 *本接口（DestroyPostpaidInstance）用于退还按量计费实例。
                 * @param req DestroyPostpaidInstanceRequest
                 * @return DestroyPostpaidInstanceOutcome
                 */
                DestroyPostpaidInstanceOutcome DestroyPostpaidInstance(const Model::DestroyPostpaidInstanceRequest &request);
                void DestroyPostpaidInstanceAsync(const Model::DestroyPostpaidInstanceRequest& request, const DestroyPostpaidInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyPostpaidInstanceOutcomeCallable DestroyPostpaidInstanceCallable(const Model::DestroyPostpaidInstanceRequest& request);

                /**
                 *本接口（DestroyPrepaidInstance）用于退还包年包月计费实例。
                 * @param req DestroyPrepaidInstanceRequest
                 * @return DestroyPrepaidInstanceOutcome
                 */
                DestroyPrepaidInstanceOutcome DestroyPrepaidInstance(const Model::DestroyPrepaidInstanceRequest &request);
                void DestroyPrepaidInstanceAsync(const Model::DestroyPrepaidInstanceRequest& request, const DestroyPrepaidInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyPrepaidInstanceOutcomeCallable DestroyPrepaidInstanceCallable(const Model::DestroyPrepaidInstanceRequest& request);

                /**
                 *本接口(DisassociateSecurityGroups)用于安全组批量解绑实例。
                 * @param req DisassociateSecurityGroupsRequest
                 * @return DisassociateSecurityGroupsOutcome
                 */
                DisassociateSecurityGroupsOutcome DisassociateSecurityGroups(const Model::DisassociateSecurityGroupsRequest &request);
                void DisassociateSecurityGroupsAsync(const Model::DisassociateSecurityGroupsRequest& request, const DisassociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateSecurityGroupsOutcomeCallable DisassociateSecurityGroupsCallable(const Model::DisassociateSecurityGroupsRequest& request);

                /**
                 *本接口（ModifyAutoBackupConfig）用于修改自动备份配置。
                 * @param req ModifyAutoBackupConfigRequest
                 * @return ModifyAutoBackupConfigOutcome
                 */
                ModifyAutoBackupConfigOutcome ModifyAutoBackupConfig(const Model::ModifyAutoBackupConfigRequest &request);
                void ModifyAutoBackupConfigAsync(const Model::ModifyAutoBackupConfigRequest& request, const ModifyAutoBackupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAutoBackupConfigOutcomeCallable ModifyAutoBackupConfigCallable(const Model::ModifyAutoBackupConfigRequest& request);

                /**
                 *本接口（ModifyConnectionConfig）用于修改实例的连接配置，包括带宽和最大连接数。
                 * @param req ModifyConnectionConfigRequest
                 * @return ModifyConnectionConfigOutcome
                 */
                ModifyConnectionConfigOutcome ModifyConnectionConfig(const Model::ModifyConnectionConfigRequest &request);
                void ModifyConnectionConfigAsync(const Model::ModifyConnectionConfigRequest& request, const ModifyConnectionConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyConnectionConfigOutcomeCallable ModifyConnectionConfigCallable(const Model::ModifyConnectionConfigRequest& request);

                /**
                 *本接口(ModifyDBInstanceSecurityGroups)用于修改实例绑定的安全组。
                 * @param req ModifyDBInstanceSecurityGroupsRequest
                 * @return ModifyDBInstanceSecurityGroupsOutcome
                 */
                ModifyDBInstanceSecurityGroupsOutcome ModifyDBInstanceSecurityGroups(const Model::ModifyDBInstanceSecurityGroupsRequest &request);
                void ModifyDBInstanceSecurityGroupsAsync(const Model::ModifyDBInstanceSecurityGroupsRequest& request, const ModifyDBInstanceSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceSecurityGroupsOutcomeCallable ModifyDBInstanceSecurityGroupsCallable(const Model::ModifyDBInstanceSecurityGroupsRequest& request);

                /**
                 *本接口（ModifyInstance）用于修改实例相关信息。
                 * @param req ModifyInstanceRequest
                 * @return ModifyInstanceOutcome
                 */
                ModifyInstanceOutcome ModifyInstance(const Model::ModifyInstanceRequest &request);
                void ModifyInstanceAsync(const Model::ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceOutcomeCallable ModifyInstanceCallable(const Model::ModifyInstanceRequest& request);

                /**
                 *本接口（ModifyInstanceParams）用于修改实例参数配置。
                 * @param req ModifyInstanceParamsRequest
                 * @return ModifyInstanceParamsOutcome
                 */
                ModifyInstanceParamsOutcome ModifyInstanceParams(const Model::ModifyInstanceParamsRequest &request);
                void ModifyInstanceParamsAsync(const Model::ModifyInstanceParamsRequest& request, const ModifyInstanceParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceParamsOutcomeCallable ModifyInstanceParamsCallable(const Model::ModifyInstanceParamsRequest& request);

                /**
                 *本接口（ModifyMaintenanceWindow）修改实例维护时间窗时间。
                 * @param req ModifyMaintenanceWindowRequest
                 * @return ModifyMaintenanceWindowOutcome
                 */
                ModifyMaintenanceWindowOutcome ModifyMaintenanceWindow(const Model::ModifyMaintenanceWindowRequest &request);
                void ModifyMaintenanceWindowAsync(const Model::ModifyMaintenanceWindowRequest& request, const ModifyMaintenanceWindowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMaintenanceWindowOutcomeCallable ModifyMaintenanceWindowCallable(const Model::ModifyMaintenanceWindowRequest& request);

                /**
                 *本接口（ModifyNetworkConfig）用于修改实例网络配置。
                 * @param req ModifyNetworkConfigRequest
                 * @return ModifyNetworkConfigOutcome
                 */
                ModifyNetworkConfigOutcome ModifyNetworkConfig(const Model::ModifyNetworkConfigRequest &request);
                void ModifyNetworkConfigAsync(const Model::ModifyNetworkConfigRequest& request, const ModifyNetworkConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNetworkConfigOutcomeCallable ModifyNetworkConfigCallable(const Model::ModifyNetworkConfigRequest& request);

                /**
                 *本接口（RenewInstance）用于为包年包月计费实例续费。
                 * @param req RenewInstanceRequest
                 * @return RenewInstanceOutcome
                 */
                RenewInstanceOutcome RenewInstance(const Model::RenewInstanceRequest &request);
                void RenewInstanceAsync(const Model::RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewInstanceOutcomeCallable RenewInstanceCallable(const Model::RenewInstanceRequest& request);

                /**
                 *本接口（ResetPassword）用于重置数据库访问密码。
                 * @param req ResetPasswordRequest
                 * @return ResetPasswordOutcome
                 */
                ResetPasswordOutcome ResetPassword(const Model::ResetPasswordRequest &request);
                void ResetPasswordAsync(const Model::ResetPasswordRequest& request, const ResetPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetPasswordOutcomeCallable ResetPasswordCallable(const Model::ResetPasswordRequest& request);

                /**
                 *本接口（StartUpInstance）用于按量计费实例解隔离
                 * @param req StartUpInstanceRequest
                 * @return StartUpInstanceOutcome
                 */
                StartUpInstanceOutcome StartUpInstance(const Model::StartUpInstanceRequest &request);
                void StartUpInstanceAsync(const Model::StartUpInstanceRequest& request, const StartUpInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartUpInstanceOutcomeCallable StartUpInstanceCallable(const Model::StartUpInstanceRequest& request);

                /**
                 *本接口（UpgradeInstance）用于对实例进行配置变更。
                 * @param req UpgradeInstanceRequest
                 * @return UpgradeInstanceOutcome
                 */
                UpgradeInstanceOutcome UpgradeInstance(const Model::UpgradeInstanceRequest &request);
                void UpgradeInstanceAsync(const Model::UpgradeInstanceRequest& request, const UpgradeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeInstanceOutcomeCallable UpgradeInstanceCallable(const Model::UpgradeInstanceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_KEEWIDB_V20220308_KEEWIDBCLIENT_H_
