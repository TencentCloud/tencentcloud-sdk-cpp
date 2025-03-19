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

#ifndef TENCENTCLOUD_REDIS_V20180412_REDISCLIENT_H_
#define TENCENTCLOUD_REDIS_V20180412_REDISCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/redis/v20180412/model/AddReplicationInstanceRequest.h>
#include <tencentcloud/redis/v20180412/model/AddReplicationInstanceResponse.h>
#include <tencentcloud/redis/v20180412/model/AllocateWanAddressRequest.h>
#include <tencentcloud/redis/v20180412/model/AllocateWanAddressResponse.h>
#include <tencentcloud/redis/v20180412/model/ApplyParamsTemplateRequest.h>
#include <tencentcloud/redis/v20180412/model/ApplyParamsTemplateResponse.h>
#include <tencentcloud/redis/v20180412/model/AssociateSecurityGroupsRequest.h>
#include <tencentcloud/redis/v20180412/model/AssociateSecurityGroupsResponse.h>
#include <tencentcloud/redis/v20180412/model/ChangeInstanceRoleRequest.h>
#include <tencentcloud/redis/v20180412/model/ChangeInstanceRoleResponse.h>
#include <tencentcloud/redis/v20180412/model/ChangeMasterInstanceRequest.h>
#include <tencentcloud/redis/v20180412/model/ChangeMasterInstanceResponse.h>
#include <tencentcloud/redis/v20180412/model/ChangeReplicaToMasterRequest.h>
#include <tencentcloud/redis/v20180412/model/ChangeReplicaToMasterResponse.h>
#include <tencentcloud/redis/v20180412/model/CleanUpInstanceRequest.h>
#include <tencentcloud/redis/v20180412/model/CleanUpInstanceResponse.h>
#include <tencentcloud/redis/v20180412/model/ClearInstanceRequest.h>
#include <tencentcloud/redis/v20180412/model/ClearInstanceResponse.h>
#include <tencentcloud/redis/v20180412/model/CloneInstancesRequest.h>
#include <tencentcloud/redis/v20180412/model/CloneInstancesResponse.h>
#include <tencentcloud/redis/v20180412/model/CloseSSLRequest.h>
#include <tencentcloud/redis/v20180412/model/CloseSSLResponse.h>
#include <tencentcloud/redis/v20180412/model/CreateInstanceAccountRequest.h>
#include <tencentcloud/redis/v20180412/model/CreateInstanceAccountResponse.h>
#include <tencentcloud/redis/v20180412/model/CreateInstancesRequest.h>
#include <tencentcloud/redis/v20180412/model/CreateInstancesResponse.h>
#include <tencentcloud/redis/v20180412/model/CreateParamTemplateRequest.h>
#include <tencentcloud/redis/v20180412/model/CreateParamTemplateResponse.h>
#include <tencentcloud/redis/v20180412/model/CreateReplicationGroupRequest.h>
#include <tencentcloud/redis/v20180412/model/CreateReplicationGroupResponse.h>
#include <tencentcloud/redis/v20180412/model/DeleteInstanceAccountRequest.h>
#include <tencentcloud/redis/v20180412/model/DeleteInstanceAccountResponse.h>
#include <tencentcloud/redis/v20180412/model/DeleteParamTemplateRequest.h>
#include <tencentcloud/redis/v20180412/model/DeleteParamTemplateResponse.h>
#include <tencentcloud/redis/v20180412/model/DeleteReplicationInstanceRequest.h>
#include <tencentcloud/redis/v20180412/model/DeleteReplicationInstanceResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeAutoBackupConfigRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeAutoBackupConfigResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeBackupDetailRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeBackupDetailResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeBackupDownloadRestrictionRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeBackupDownloadRestrictionResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeBackupUrlRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeBackupUrlResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeBandwidthRangeRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeBandwidthRangeResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeCommonDBInstancesRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeCommonDBInstancesResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeDBSecurityGroupsRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeDBSecurityGroupsResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeGlobalReplicationAreaRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeGlobalReplicationAreaResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceAccountRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceAccountResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceBackupsRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceBackupsResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceDTSInfoRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceDTSInfoResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceDealDetailRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceDealDetailResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceEventsRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceEventsResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceLogDeliveryRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceLogDeliveryResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceMonitorBigKeyRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceMonitorBigKeyResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceMonitorBigKeySizeDistRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceMonitorBigKeySizeDistResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceMonitorBigKeyTypeDistRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceMonitorBigKeyTypeDistResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceMonitorHotKeyRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceMonitorHotKeyResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceMonitorSIPRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceMonitorSIPResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceMonitorTookDistRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceMonitorTookDistResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceMonitorTopNCmdRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceMonitorTopNCmdResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceMonitorTopNCmdTookRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceMonitorTopNCmdTookResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceNodeInfoRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceNodeInfoResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceParamRecordsRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceParamRecordsResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceParamsRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceParamsResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceSecurityGroupRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceSecurityGroupResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceShardsRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceShardsResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceSpecBandwidthRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceSpecBandwidthResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceSupportFeatureRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceSupportFeatureResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceZoneInfoRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceZoneInfoResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstancesRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstancesResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeMaintenanceWindowRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeMaintenanceWindowResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeParamTemplateInfoRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeParamTemplateInfoResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeParamTemplatesRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeParamTemplatesResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeProductInfoRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeProductInfoResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeProjectSecurityGroupRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeProjectSecurityGroupResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeProjectSecurityGroupsRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeProjectSecurityGroupsResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeProxySlowLogRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeProxySlowLogResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeRedisClusterOverviewRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeRedisClusterOverviewResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeRedisClustersRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeRedisClustersResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeReplicationGroupRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeReplicationGroupResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeReplicationGroupInstanceRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeReplicationGroupInstanceResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeSSLStatusRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeSSLStatusResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeSecondLevelBackupInfoRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeSecondLevelBackupInfoResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeSlowLogRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeSlowLogResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeTaskInfoRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeTaskInfoResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeTaskListRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeTaskListResponse.h>
#include <tencentcloud/redis/v20180412/model/DescribeTendisSlowLogRequest.h>
#include <tencentcloud/redis/v20180412/model/DescribeTendisSlowLogResponse.h>
#include <tencentcloud/redis/v20180412/model/DestroyPostpaidInstanceRequest.h>
#include <tencentcloud/redis/v20180412/model/DestroyPostpaidInstanceResponse.h>
#include <tencentcloud/redis/v20180412/model/DestroyPrepaidInstanceRequest.h>
#include <tencentcloud/redis/v20180412/model/DestroyPrepaidInstanceResponse.h>
#include <tencentcloud/redis/v20180412/model/DisableReplicaReadonlyRequest.h>
#include <tencentcloud/redis/v20180412/model/DisableReplicaReadonlyResponse.h>
#include <tencentcloud/redis/v20180412/model/DisassociateSecurityGroupsRequest.h>
#include <tencentcloud/redis/v20180412/model/DisassociateSecurityGroupsResponse.h>
#include <tencentcloud/redis/v20180412/model/EnableReplicaReadonlyRequest.h>
#include <tencentcloud/redis/v20180412/model/EnableReplicaReadonlyResponse.h>
#include <tencentcloud/redis/v20180412/model/InquiryPriceCreateInstanceRequest.h>
#include <tencentcloud/redis/v20180412/model/InquiryPriceCreateInstanceResponse.h>
#include <tencentcloud/redis/v20180412/model/InquiryPriceRenewInstanceRequest.h>
#include <tencentcloud/redis/v20180412/model/InquiryPriceRenewInstanceResponse.h>
#include <tencentcloud/redis/v20180412/model/InquiryPriceUpgradeInstanceRequest.h>
#include <tencentcloud/redis/v20180412/model/InquiryPriceUpgradeInstanceResponse.h>
#include <tencentcloud/redis/v20180412/model/KillMasterGroupRequest.h>
#include <tencentcloud/redis/v20180412/model/KillMasterGroupResponse.h>
#include <tencentcloud/redis/v20180412/model/ManualBackupInstanceRequest.h>
#include <tencentcloud/redis/v20180412/model/ManualBackupInstanceResponse.h>
#include <tencentcloud/redis/v20180412/model/ModfiyInstancePasswordRequest.h>
#include <tencentcloud/redis/v20180412/model/ModfiyInstancePasswordResponse.h>
#include <tencentcloud/redis/v20180412/model/ModifyAutoBackupConfigRequest.h>
#include <tencentcloud/redis/v20180412/model/ModifyAutoBackupConfigResponse.h>
#include <tencentcloud/redis/v20180412/model/ModifyBackupDownloadRestrictionRequest.h>
#include <tencentcloud/redis/v20180412/model/ModifyBackupDownloadRestrictionResponse.h>
#include <tencentcloud/redis/v20180412/model/ModifyConnectionConfigRequest.h>
#include <tencentcloud/redis/v20180412/model/ModifyConnectionConfigResponse.h>
#include <tencentcloud/redis/v20180412/model/ModifyDBInstanceSecurityGroupsRequest.h>
#include <tencentcloud/redis/v20180412/model/ModifyDBInstanceSecurityGroupsResponse.h>
#include <tencentcloud/redis/v20180412/model/ModifyInstanceRequest.h>
#include <tencentcloud/redis/v20180412/model/ModifyInstanceResponse.h>
#include <tencentcloud/redis/v20180412/model/ModifyInstanceAccountRequest.h>
#include <tencentcloud/redis/v20180412/model/ModifyInstanceAccountResponse.h>
#include <tencentcloud/redis/v20180412/model/ModifyInstanceAvailabilityZonesRequest.h>
#include <tencentcloud/redis/v20180412/model/ModifyInstanceAvailabilityZonesResponse.h>
#include <tencentcloud/redis/v20180412/model/ModifyInstanceBackupModeRequest.h>
#include <tencentcloud/redis/v20180412/model/ModifyInstanceBackupModeResponse.h>
#include <tencentcloud/redis/v20180412/model/ModifyInstanceEventRequest.h>
#include <tencentcloud/redis/v20180412/model/ModifyInstanceEventResponse.h>
#include <tencentcloud/redis/v20180412/model/ModifyInstanceLogDeliveryRequest.h>
#include <tencentcloud/redis/v20180412/model/ModifyInstanceLogDeliveryResponse.h>
#include <tencentcloud/redis/v20180412/model/ModifyInstanceParamsRequest.h>
#include <tencentcloud/redis/v20180412/model/ModifyInstanceParamsResponse.h>
#include <tencentcloud/redis/v20180412/model/ModifyInstancePasswordRequest.h>
#include <tencentcloud/redis/v20180412/model/ModifyInstancePasswordResponse.h>
#include <tencentcloud/redis/v20180412/model/ModifyInstanceReadOnlyRequest.h>
#include <tencentcloud/redis/v20180412/model/ModifyInstanceReadOnlyResponse.h>
#include <tencentcloud/redis/v20180412/model/ModifyMaintenanceWindowRequest.h>
#include <tencentcloud/redis/v20180412/model/ModifyMaintenanceWindowResponse.h>
#include <tencentcloud/redis/v20180412/model/ModifyNetworkConfigRequest.h>
#include <tencentcloud/redis/v20180412/model/ModifyNetworkConfigResponse.h>
#include <tencentcloud/redis/v20180412/model/ModifyParamTemplateRequest.h>
#include <tencentcloud/redis/v20180412/model/ModifyParamTemplateResponse.h>
#include <tencentcloud/redis/v20180412/model/ModifyReplicationGroupRequest.h>
#include <tencentcloud/redis/v20180412/model/ModifyReplicationGroupResponse.h>
#include <tencentcloud/redis/v20180412/model/OpenSSLRequest.h>
#include <tencentcloud/redis/v20180412/model/OpenSSLResponse.h>
#include <tencentcloud/redis/v20180412/model/ReleaseWanAddressRequest.h>
#include <tencentcloud/redis/v20180412/model/ReleaseWanAddressResponse.h>
#include <tencentcloud/redis/v20180412/model/RemoveReplicationGroupRequest.h>
#include <tencentcloud/redis/v20180412/model/RemoveReplicationGroupResponse.h>
#include <tencentcloud/redis/v20180412/model/RemoveReplicationInstanceRequest.h>
#include <tencentcloud/redis/v20180412/model/RemoveReplicationInstanceResponse.h>
#include <tencentcloud/redis/v20180412/model/RenewInstanceRequest.h>
#include <tencentcloud/redis/v20180412/model/RenewInstanceResponse.h>
#include <tencentcloud/redis/v20180412/model/ResetPasswordRequest.h>
#include <tencentcloud/redis/v20180412/model/ResetPasswordResponse.h>
#include <tencentcloud/redis/v20180412/model/RestoreInstanceRequest.h>
#include <tencentcloud/redis/v20180412/model/RestoreInstanceResponse.h>
#include <tencentcloud/redis/v20180412/model/StartupInstanceRequest.h>
#include <tencentcloud/redis/v20180412/model/StartupInstanceResponse.h>
#include <tencentcloud/redis/v20180412/model/SwitchAccessNewInstanceRequest.h>
#include <tencentcloud/redis/v20180412/model/SwitchAccessNewInstanceResponse.h>
#include <tencentcloud/redis/v20180412/model/SwitchInstanceVipRequest.h>
#include <tencentcloud/redis/v20180412/model/SwitchInstanceVipResponse.h>
#include <tencentcloud/redis/v20180412/model/SwitchProxyRequest.h>
#include <tencentcloud/redis/v20180412/model/SwitchProxyResponse.h>
#include <tencentcloud/redis/v20180412/model/UpgradeInstanceRequest.h>
#include <tencentcloud/redis/v20180412/model/UpgradeInstanceResponse.h>
#include <tencentcloud/redis/v20180412/model/UpgradeInstanceVersionRequest.h>
#include <tencentcloud/redis/v20180412/model/UpgradeInstanceVersionResponse.h>
#include <tencentcloud/redis/v20180412/model/UpgradeProxyVersionRequest.h>
#include <tencentcloud/redis/v20180412/model/UpgradeProxyVersionResponse.h>
#include <tencentcloud/redis/v20180412/model/UpgradeSmallVersionRequest.h>
#include <tencentcloud/redis/v20180412/model/UpgradeSmallVersionResponse.h>
#include <tencentcloud/redis/v20180412/model/UpgradeVersionToMultiAvailabilityZonesRequest.h>
#include <tencentcloud/redis/v20180412/model/UpgradeVersionToMultiAvailabilityZonesResponse.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            class RedisClient : public AbstractClient
            {
            public:
                RedisClient(const Credential &credential, const std::string &region);
                RedisClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddReplicationInstanceResponse> AddReplicationInstanceOutcome;
                typedef std::future<AddReplicationInstanceOutcome> AddReplicationInstanceOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::AddReplicationInstanceRequest&, AddReplicationInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddReplicationInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::AllocateWanAddressResponse> AllocateWanAddressOutcome;
                typedef std::future<AllocateWanAddressOutcome> AllocateWanAddressOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::AllocateWanAddressRequest&, AllocateWanAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AllocateWanAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::ApplyParamsTemplateResponse> ApplyParamsTemplateOutcome;
                typedef std::future<ApplyParamsTemplateOutcome> ApplyParamsTemplateOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::ApplyParamsTemplateRequest&, ApplyParamsTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyParamsTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::AssociateSecurityGroupsResponse> AssociateSecurityGroupsOutcome;
                typedef std::future<AssociateSecurityGroupsOutcome> AssociateSecurityGroupsOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::AssociateSecurityGroupsRequest&, AssociateSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::ChangeInstanceRoleResponse> ChangeInstanceRoleOutcome;
                typedef std::future<ChangeInstanceRoleOutcome> ChangeInstanceRoleOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::ChangeInstanceRoleRequest&, ChangeInstanceRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChangeInstanceRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::ChangeMasterInstanceResponse> ChangeMasterInstanceOutcome;
                typedef std::future<ChangeMasterInstanceOutcome> ChangeMasterInstanceOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::ChangeMasterInstanceRequest&, ChangeMasterInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChangeMasterInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ChangeReplicaToMasterResponse> ChangeReplicaToMasterOutcome;
                typedef std::future<ChangeReplicaToMasterOutcome> ChangeReplicaToMasterOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::ChangeReplicaToMasterRequest&, ChangeReplicaToMasterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChangeReplicaToMasterAsyncHandler;
                typedef Outcome<Core::Error, Model::CleanUpInstanceResponse> CleanUpInstanceOutcome;
                typedef std::future<CleanUpInstanceOutcome> CleanUpInstanceOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::CleanUpInstanceRequest&, CleanUpInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CleanUpInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ClearInstanceResponse> ClearInstanceOutcome;
                typedef std::future<ClearInstanceOutcome> ClearInstanceOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::ClearInstanceRequest&, ClearInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ClearInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CloneInstancesResponse> CloneInstancesOutcome;
                typedef std::future<CloneInstancesOutcome> CloneInstancesOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::CloneInstancesRequest&, CloneInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloneInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::CloseSSLResponse> CloseSSLOutcome;
                typedef std::future<CloseSSLOutcome> CloseSSLOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::CloseSSLRequest&, CloseSSLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseSSLAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInstanceAccountResponse> CreateInstanceAccountOutcome;
                typedef std::future<CreateInstanceAccountOutcome> CreateInstanceAccountOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::CreateInstanceAccountRequest&, CreateInstanceAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInstancesResponse> CreateInstancesOutcome;
                typedef std::future<CreateInstancesOutcome> CreateInstancesOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::CreateInstancesRequest&, CreateInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateParamTemplateResponse> CreateParamTemplateOutcome;
                typedef std::future<CreateParamTemplateOutcome> CreateParamTemplateOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::CreateParamTemplateRequest&, CreateParamTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateParamTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateReplicationGroupResponse> CreateReplicationGroupOutcome;
                typedef std::future<CreateReplicationGroupOutcome> CreateReplicationGroupOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::CreateReplicationGroupRequest&, CreateReplicationGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateReplicationGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteInstanceAccountResponse> DeleteInstanceAccountOutcome;
                typedef std::future<DeleteInstanceAccountOutcome> DeleteInstanceAccountOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DeleteInstanceAccountRequest&, DeleteInstanceAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInstanceAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteParamTemplateResponse> DeleteParamTemplateOutcome;
                typedef std::future<DeleteParamTemplateOutcome> DeleteParamTemplateOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DeleteParamTemplateRequest&, DeleteParamTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteParamTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteReplicationInstanceResponse> DeleteReplicationInstanceOutcome;
                typedef std::future<DeleteReplicationInstanceOutcome> DeleteReplicationInstanceOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DeleteReplicationInstanceRequest&, DeleteReplicationInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteReplicationInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAutoBackupConfigResponse> DescribeAutoBackupConfigOutcome;
                typedef std::future<DescribeAutoBackupConfigOutcome> DescribeAutoBackupConfigOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeAutoBackupConfigRequest&, DescribeAutoBackupConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoBackupConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupDetailResponse> DescribeBackupDetailOutcome;
                typedef std::future<DescribeBackupDetailOutcome> DescribeBackupDetailOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeBackupDetailRequest&, DescribeBackupDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupDownloadRestrictionResponse> DescribeBackupDownloadRestrictionOutcome;
                typedef std::future<DescribeBackupDownloadRestrictionOutcome> DescribeBackupDownloadRestrictionOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeBackupDownloadRestrictionRequest&, DescribeBackupDownloadRestrictionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupDownloadRestrictionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupUrlResponse> DescribeBackupUrlOutcome;
                typedef std::future<DescribeBackupUrlOutcome> DescribeBackupUrlOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeBackupUrlRequest&, DescribeBackupUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBandwidthRangeResponse> DescribeBandwidthRangeOutcome;
                typedef std::future<DescribeBandwidthRangeOutcome> DescribeBandwidthRangeOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeBandwidthRangeRequest&, DescribeBandwidthRangeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBandwidthRangeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCommonDBInstancesResponse> DescribeCommonDBInstancesOutcome;
                typedef std::future<DescribeCommonDBInstancesOutcome> DescribeCommonDBInstancesOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeCommonDBInstancesRequest&, DescribeCommonDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCommonDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBSecurityGroupsResponse> DescribeDBSecurityGroupsOutcome;
                typedef std::future<DescribeDBSecurityGroupsOutcome> DescribeDBSecurityGroupsOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeDBSecurityGroupsRequest&, DescribeDBSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGlobalReplicationAreaResponse> DescribeGlobalReplicationAreaOutcome;
                typedef std::future<DescribeGlobalReplicationAreaOutcome> DescribeGlobalReplicationAreaOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeGlobalReplicationAreaRequest&, DescribeGlobalReplicationAreaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGlobalReplicationAreaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceAccountResponse> DescribeInstanceAccountOutcome;
                typedef std::future<DescribeInstanceAccountOutcome> DescribeInstanceAccountOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeInstanceAccountRequest&, DescribeInstanceAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceBackupsResponse> DescribeInstanceBackupsOutcome;
                typedef std::future<DescribeInstanceBackupsOutcome> DescribeInstanceBackupsOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeInstanceBackupsRequest&, DescribeInstanceBackupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceBackupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceDTSInfoResponse> DescribeInstanceDTSInfoOutcome;
                typedef std::future<DescribeInstanceDTSInfoOutcome> DescribeInstanceDTSInfoOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeInstanceDTSInfoRequest&, DescribeInstanceDTSInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceDTSInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceDealDetailResponse> DescribeInstanceDealDetailOutcome;
                typedef std::future<DescribeInstanceDealDetailOutcome> DescribeInstanceDealDetailOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeInstanceDealDetailRequest&, DescribeInstanceDealDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceDealDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceEventsResponse> DescribeInstanceEventsOutcome;
                typedef std::future<DescribeInstanceEventsOutcome> DescribeInstanceEventsOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeInstanceEventsRequest&, DescribeInstanceEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceLogDeliveryResponse> DescribeInstanceLogDeliveryOutcome;
                typedef std::future<DescribeInstanceLogDeliveryOutcome> DescribeInstanceLogDeliveryOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeInstanceLogDeliveryRequest&, DescribeInstanceLogDeliveryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceLogDeliveryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceMonitorBigKeyResponse> DescribeInstanceMonitorBigKeyOutcome;
                typedef std::future<DescribeInstanceMonitorBigKeyOutcome> DescribeInstanceMonitorBigKeyOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeInstanceMonitorBigKeyRequest&, DescribeInstanceMonitorBigKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceMonitorBigKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceMonitorBigKeySizeDistResponse> DescribeInstanceMonitorBigKeySizeDistOutcome;
                typedef std::future<DescribeInstanceMonitorBigKeySizeDistOutcome> DescribeInstanceMonitorBigKeySizeDistOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeInstanceMonitorBigKeySizeDistRequest&, DescribeInstanceMonitorBigKeySizeDistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceMonitorBigKeySizeDistAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceMonitorBigKeyTypeDistResponse> DescribeInstanceMonitorBigKeyTypeDistOutcome;
                typedef std::future<DescribeInstanceMonitorBigKeyTypeDistOutcome> DescribeInstanceMonitorBigKeyTypeDistOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeInstanceMonitorBigKeyTypeDistRequest&, DescribeInstanceMonitorBigKeyTypeDistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceMonitorBigKeyTypeDistAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceMonitorHotKeyResponse> DescribeInstanceMonitorHotKeyOutcome;
                typedef std::future<DescribeInstanceMonitorHotKeyOutcome> DescribeInstanceMonitorHotKeyOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeInstanceMonitorHotKeyRequest&, DescribeInstanceMonitorHotKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceMonitorHotKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceMonitorSIPResponse> DescribeInstanceMonitorSIPOutcome;
                typedef std::future<DescribeInstanceMonitorSIPOutcome> DescribeInstanceMonitorSIPOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeInstanceMonitorSIPRequest&, DescribeInstanceMonitorSIPOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceMonitorSIPAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceMonitorTookDistResponse> DescribeInstanceMonitorTookDistOutcome;
                typedef std::future<DescribeInstanceMonitorTookDistOutcome> DescribeInstanceMonitorTookDistOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeInstanceMonitorTookDistRequest&, DescribeInstanceMonitorTookDistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceMonitorTookDistAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceMonitorTopNCmdResponse> DescribeInstanceMonitorTopNCmdOutcome;
                typedef std::future<DescribeInstanceMonitorTopNCmdOutcome> DescribeInstanceMonitorTopNCmdOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeInstanceMonitorTopNCmdRequest&, DescribeInstanceMonitorTopNCmdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceMonitorTopNCmdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceMonitorTopNCmdTookResponse> DescribeInstanceMonitorTopNCmdTookOutcome;
                typedef std::future<DescribeInstanceMonitorTopNCmdTookOutcome> DescribeInstanceMonitorTopNCmdTookOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeInstanceMonitorTopNCmdTookRequest&, DescribeInstanceMonitorTopNCmdTookOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceMonitorTopNCmdTookAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceNodeInfoResponse> DescribeInstanceNodeInfoOutcome;
                typedef std::future<DescribeInstanceNodeInfoOutcome> DescribeInstanceNodeInfoOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeInstanceNodeInfoRequest&, DescribeInstanceNodeInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceNodeInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceParamRecordsResponse> DescribeInstanceParamRecordsOutcome;
                typedef std::future<DescribeInstanceParamRecordsOutcome> DescribeInstanceParamRecordsOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeInstanceParamRecordsRequest&, DescribeInstanceParamRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceParamRecordsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceParamsResponse> DescribeInstanceParamsOutcome;
                typedef std::future<DescribeInstanceParamsOutcome> DescribeInstanceParamsOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeInstanceParamsRequest&, DescribeInstanceParamsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceParamsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceSecurityGroupResponse> DescribeInstanceSecurityGroupOutcome;
                typedef std::future<DescribeInstanceSecurityGroupOutcome> DescribeInstanceSecurityGroupOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeInstanceSecurityGroupRequest&, DescribeInstanceSecurityGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceSecurityGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceShardsResponse> DescribeInstanceShardsOutcome;
                typedef std::future<DescribeInstanceShardsOutcome> DescribeInstanceShardsOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeInstanceShardsRequest&, DescribeInstanceShardsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceShardsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceSpecBandwidthResponse> DescribeInstanceSpecBandwidthOutcome;
                typedef std::future<DescribeInstanceSpecBandwidthOutcome> DescribeInstanceSpecBandwidthOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeInstanceSpecBandwidthRequest&, DescribeInstanceSpecBandwidthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceSpecBandwidthAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceSupportFeatureResponse> DescribeInstanceSupportFeatureOutcome;
                typedef std::future<DescribeInstanceSupportFeatureOutcome> DescribeInstanceSupportFeatureOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeInstanceSupportFeatureRequest&, DescribeInstanceSupportFeatureOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceSupportFeatureAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceZoneInfoResponse> DescribeInstanceZoneInfoOutcome;
                typedef std::future<DescribeInstanceZoneInfoOutcome> DescribeInstanceZoneInfoOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeInstanceZoneInfoRequest&, DescribeInstanceZoneInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceZoneInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesResponse> DescribeInstancesOutcome;
                typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeInstancesRequest&, DescribeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMaintenanceWindowResponse> DescribeMaintenanceWindowOutcome;
                typedef std::future<DescribeMaintenanceWindowOutcome> DescribeMaintenanceWindowOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeMaintenanceWindowRequest&, DescribeMaintenanceWindowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMaintenanceWindowAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeParamTemplateInfoResponse> DescribeParamTemplateInfoOutcome;
                typedef std::future<DescribeParamTemplateInfoOutcome> DescribeParamTemplateInfoOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeParamTemplateInfoRequest&, DescribeParamTemplateInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeParamTemplateInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeParamTemplatesResponse> DescribeParamTemplatesOutcome;
                typedef std::future<DescribeParamTemplatesOutcome> DescribeParamTemplatesOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeParamTemplatesRequest&, DescribeParamTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeParamTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProductInfoResponse> DescribeProductInfoOutcome;
                typedef std::future<DescribeProductInfoOutcome> DescribeProductInfoOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeProductInfoRequest&, DescribeProductInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProjectSecurityGroupResponse> DescribeProjectSecurityGroupOutcome;
                typedef std::future<DescribeProjectSecurityGroupOutcome> DescribeProjectSecurityGroupOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeProjectSecurityGroupRequest&, DescribeProjectSecurityGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectSecurityGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProjectSecurityGroupsResponse> DescribeProjectSecurityGroupsOutcome;
                typedef std::future<DescribeProjectSecurityGroupsOutcome> DescribeProjectSecurityGroupsOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeProjectSecurityGroupsRequest&, DescribeProjectSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProxySlowLogResponse> DescribeProxySlowLogOutcome;
                typedef std::future<DescribeProxySlowLogOutcome> DescribeProxySlowLogOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeProxySlowLogRequest&, DescribeProxySlowLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProxySlowLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRedisClusterOverviewResponse> DescribeRedisClusterOverviewOutcome;
                typedef std::future<DescribeRedisClusterOverviewOutcome> DescribeRedisClusterOverviewOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeRedisClusterOverviewRequest&, DescribeRedisClusterOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRedisClusterOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRedisClustersResponse> DescribeRedisClustersOutcome;
                typedef std::future<DescribeRedisClustersOutcome> DescribeRedisClustersOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeRedisClustersRequest&, DescribeRedisClustersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRedisClustersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReplicationGroupResponse> DescribeReplicationGroupOutcome;
                typedef std::future<DescribeReplicationGroupOutcome> DescribeReplicationGroupOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeReplicationGroupRequest&, DescribeReplicationGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReplicationGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReplicationGroupInstanceResponse> DescribeReplicationGroupInstanceOutcome;
                typedef std::future<DescribeReplicationGroupInstanceOutcome> DescribeReplicationGroupInstanceOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeReplicationGroupInstanceRequest&, DescribeReplicationGroupInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReplicationGroupInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSSLStatusResponse> DescribeSSLStatusOutcome;
                typedef std::future<DescribeSSLStatusOutcome> DescribeSSLStatusOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeSSLStatusRequest&, DescribeSSLStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSSLStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecondLevelBackupInfoResponse> DescribeSecondLevelBackupInfoOutcome;
                typedef std::future<DescribeSecondLevelBackupInfoOutcome> DescribeSecondLevelBackupInfoOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeSecondLevelBackupInfoRequest&, DescribeSecondLevelBackupInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecondLevelBackupInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSlowLogResponse> DescribeSlowLogOutcome;
                typedef std::future<DescribeSlowLogOutcome> DescribeSlowLogOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeSlowLogRequest&, DescribeSlowLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskInfoResponse> DescribeTaskInfoOutcome;
                typedef std::future<DescribeTaskInfoOutcome> DescribeTaskInfoOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeTaskInfoRequest&, DescribeTaskInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskListResponse> DescribeTaskListOutcome;
                typedef std::future<DescribeTaskListOutcome> DescribeTaskListOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeTaskListRequest&, DescribeTaskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTendisSlowLogResponse> DescribeTendisSlowLogOutcome;
                typedef std::future<DescribeTendisSlowLogOutcome> DescribeTendisSlowLogOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DescribeTendisSlowLogRequest&, DescribeTendisSlowLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTendisSlowLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyPostpaidInstanceResponse> DestroyPostpaidInstanceOutcome;
                typedef std::future<DestroyPostpaidInstanceOutcome> DestroyPostpaidInstanceOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DestroyPostpaidInstanceRequest&, DestroyPostpaidInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyPostpaidInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyPrepaidInstanceResponse> DestroyPrepaidInstanceOutcome;
                typedef std::future<DestroyPrepaidInstanceOutcome> DestroyPrepaidInstanceOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DestroyPrepaidInstanceRequest&, DestroyPrepaidInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyPrepaidInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableReplicaReadonlyResponse> DisableReplicaReadonlyOutcome;
                typedef std::future<DisableReplicaReadonlyOutcome> DisableReplicaReadonlyOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DisableReplicaReadonlyRequest&, DisableReplicaReadonlyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableReplicaReadonlyAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateSecurityGroupsResponse> DisassociateSecurityGroupsOutcome;
                typedef std::future<DisassociateSecurityGroupsOutcome> DisassociateSecurityGroupsOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::DisassociateSecurityGroupsRequest&, DisassociateSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableReplicaReadonlyResponse> EnableReplicaReadonlyOutcome;
                typedef std::future<EnableReplicaReadonlyOutcome> EnableReplicaReadonlyOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::EnableReplicaReadonlyRequest&, EnableReplicaReadonlyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableReplicaReadonlyAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceCreateInstanceResponse> InquiryPriceCreateInstanceOutcome;
                typedef std::future<InquiryPriceCreateInstanceOutcome> InquiryPriceCreateInstanceOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::InquiryPriceCreateInstanceRequest&, InquiryPriceCreateInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceCreateInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceRenewInstanceResponse> InquiryPriceRenewInstanceOutcome;
                typedef std::future<InquiryPriceRenewInstanceOutcome> InquiryPriceRenewInstanceOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::InquiryPriceRenewInstanceRequest&, InquiryPriceRenewInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceRenewInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceUpgradeInstanceResponse> InquiryPriceUpgradeInstanceOutcome;
                typedef std::future<InquiryPriceUpgradeInstanceOutcome> InquiryPriceUpgradeInstanceOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::InquiryPriceUpgradeInstanceRequest&, InquiryPriceUpgradeInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceUpgradeInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::KillMasterGroupResponse> KillMasterGroupOutcome;
                typedef std::future<KillMasterGroupOutcome> KillMasterGroupOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::KillMasterGroupRequest&, KillMasterGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> KillMasterGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ManualBackupInstanceResponse> ManualBackupInstanceOutcome;
                typedef std::future<ManualBackupInstanceOutcome> ManualBackupInstanceOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::ManualBackupInstanceRequest&, ManualBackupInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ManualBackupInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModfiyInstancePasswordResponse> ModfiyInstancePasswordOutcome;
                typedef std::future<ModfiyInstancePasswordOutcome> ModfiyInstancePasswordOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::ModfiyInstancePasswordRequest&, ModfiyInstancePasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModfiyInstancePasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAutoBackupConfigResponse> ModifyAutoBackupConfigOutcome;
                typedef std::future<ModifyAutoBackupConfigOutcome> ModifyAutoBackupConfigOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::ModifyAutoBackupConfigRequest&, ModifyAutoBackupConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAutoBackupConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBackupDownloadRestrictionResponse> ModifyBackupDownloadRestrictionOutcome;
                typedef std::future<ModifyBackupDownloadRestrictionOutcome> ModifyBackupDownloadRestrictionOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::ModifyBackupDownloadRestrictionRequest&, ModifyBackupDownloadRestrictionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupDownloadRestrictionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyConnectionConfigResponse> ModifyConnectionConfigOutcome;
                typedef std::future<ModifyConnectionConfigOutcome> ModifyConnectionConfigOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::ModifyConnectionConfigRequest&, ModifyConnectionConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyConnectionConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceSecurityGroupsResponse> ModifyDBInstanceSecurityGroupsOutcome;
                typedef std::future<ModifyDBInstanceSecurityGroupsOutcome> ModifyDBInstanceSecurityGroupsOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::ModifyDBInstanceSecurityGroupsRequest&, ModifyDBInstanceSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceResponse> ModifyInstanceOutcome;
                typedef std::future<ModifyInstanceOutcome> ModifyInstanceOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::ModifyInstanceRequest&, ModifyInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceAccountResponse> ModifyInstanceAccountOutcome;
                typedef std::future<ModifyInstanceAccountOutcome> ModifyInstanceAccountOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::ModifyInstanceAccountRequest&, ModifyInstanceAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceAvailabilityZonesResponse> ModifyInstanceAvailabilityZonesOutcome;
                typedef std::future<ModifyInstanceAvailabilityZonesOutcome> ModifyInstanceAvailabilityZonesOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::ModifyInstanceAvailabilityZonesRequest&, ModifyInstanceAvailabilityZonesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceAvailabilityZonesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceBackupModeResponse> ModifyInstanceBackupModeOutcome;
                typedef std::future<ModifyInstanceBackupModeOutcome> ModifyInstanceBackupModeOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::ModifyInstanceBackupModeRequest&, ModifyInstanceBackupModeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceBackupModeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceEventResponse> ModifyInstanceEventOutcome;
                typedef std::future<ModifyInstanceEventOutcome> ModifyInstanceEventOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::ModifyInstanceEventRequest&, ModifyInstanceEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceEventAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceLogDeliveryResponse> ModifyInstanceLogDeliveryOutcome;
                typedef std::future<ModifyInstanceLogDeliveryOutcome> ModifyInstanceLogDeliveryOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::ModifyInstanceLogDeliveryRequest&, ModifyInstanceLogDeliveryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceLogDeliveryAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceParamsResponse> ModifyInstanceParamsOutcome;
                typedef std::future<ModifyInstanceParamsOutcome> ModifyInstanceParamsOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::ModifyInstanceParamsRequest&, ModifyInstanceParamsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceParamsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstancePasswordResponse> ModifyInstancePasswordOutcome;
                typedef std::future<ModifyInstancePasswordOutcome> ModifyInstancePasswordOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::ModifyInstancePasswordRequest&, ModifyInstancePasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstancePasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceReadOnlyResponse> ModifyInstanceReadOnlyOutcome;
                typedef std::future<ModifyInstanceReadOnlyOutcome> ModifyInstanceReadOnlyOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::ModifyInstanceReadOnlyRequest&, ModifyInstanceReadOnlyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceReadOnlyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMaintenanceWindowResponse> ModifyMaintenanceWindowOutcome;
                typedef std::future<ModifyMaintenanceWindowOutcome> ModifyMaintenanceWindowOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::ModifyMaintenanceWindowRequest&, ModifyMaintenanceWindowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMaintenanceWindowAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNetworkConfigResponse> ModifyNetworkConfigOutcome;
                typedef std::future<ModifyNetworkConfigOutcome> ModifyNetworkConfigOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::ModifyNetworkConfigRequest&, ModifyNetworkConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNetworkConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyParamTemplateResponse> ModifyParamTemplateOutcome;
                typedef std::future<ModifyParamTemplateOutcome> ModifyParamTemplateOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::ModifyParamTemplateRequest&, ModifyParamTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyParamTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyReplicationGroupResponse> ModifyReplicationGroupOutcome;
                typedef std::future<ModifyReplicationGroupOutcome> ModifyReplicationGroupOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::ModifyReplicationGroupRequest&, ModifyReplicationGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyReplicationGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenSSLResponse> OpenSSLOutcome;
                typedef std::future<OpenSSLOutcome> OpenSSLOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::OpenSSLRequest&, OpenSSLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenSSLAsyncHandler;
                typedef Outcome<Core::Error, Model::ReleaseWanAddressResponse> ReleaseWanAddressOutcome;
                typedef std::future<ReleaseWanAddressOutcome> ReleaseWanAddressOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::ReleaseWanAddressRequest&, ReleaseWanAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseWanAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveReplicationGroupResponse> RemoveReplicationGroupOutcome;
                typedef std::future<RemoveReplicationGroupOutcome> RemoveReplicationGroupOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::RemoveReplicationGroupRequest&, RemoveReplicationGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveReplicationGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveReplicationInstanceResponse> RemoveReplicationInstanceOutcome;
                typedef std::future<RemoveReplicationInstanceOutcome> RemoveReplicationInstanceOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::RemoveReplicationInstanceRequest&, RemoveReplicationInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveReplicationInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewInstanceResponse> RenewInstanceOutcome;
                typedef std::future<RenewInstanceOutcome> RenewInstanceOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::RenewInstanceRequest&, RenewInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetPasswordResponse> ResetPasswordOutcome;
                typedef std::future<ResetPasswordOutcome> ResetPasswordOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::ResetPasswordRequest&, ResetPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::RestoreInstanceResponse> RestoreInstanceOutcome;
                typedef std::future<RestoreInstanceOutcome> RestoreInstanceOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::RestoreInstanceRequest&, RestoreInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestoreInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::StartupInstanceResponse> StartupInstanceOutcome;
                typedef std::future<StartupInstanceOutcome> StartupInstanceOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::StartupInstanceRequest&, StartupInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartupInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::SwitchAccessNewInstanceResponse> SwitchAccessNewInstanceOutcome;
                typedef std::future<SwitchAccessNewInstanceOutcome> SwitchAccessNewInstanceOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::SwitchAccessNewInstanceRequest&, SwitchAccessNewInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SwitchAccessNewInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::SwitchInstanceVipResponse> SwitchInstanceVipOutcome;
                typedef std::future<SwitchInstanceVipOutcome> SwitchInstanceVipOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::SwitchInstanceVipRequest&, SwitchInstanceVipOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SwitchInstanceVipAsyncHandler;
                typedef Outcome<Core::Error, Model::SwitchProxyResponse> SwitchProxyOutcome;
                typedef std::future<SwitchProxyOutcome> SwitchProxyOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::SwitchProxyRequest&, SwitchProxyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SwitchProxyAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeInstanceResponse> UpgradeInstanceOutcome;
                typedef std::future<UpgradeInstanceOutcome> UpgradeInstanceOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::UpgradeInstanceRequest&, UpgradeInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeInstanceVersionResponse> UpgradeInstanceVersionOutcome;
                typedef std::future<UpgradeInstanceVersionOutcome> UpgradeInstanceVersionOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::UpgradeInstanceVersionRequest&, UpgradeInstanceVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeInstanceVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeProxyVersionResponse> UpgradeProxyVersionOutcome;
                typedef std::future<UpgradeProxyVersionOutcome> UpgradeProxyVersionOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::UpgradeProxyVersionRequest&, UpgradeProxyVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeProxyVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeSmallVersionResponse> UpgradeSmallVersionOutcome;
                typedef std::future<UpgradeSmallVersionOutcome> UpgradeSmallVersionOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::UpgradeSmallVersionRequest&, UpgradeSmallVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeSmallVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeVersionToMultiAvailabilityZonesResponse> UpgradeVersionToMultiAvailabilityZonesOutcome;
                typedef std::future<UpgradeVersionToMultiAvailabilityZonesOutcome> UpgradeVersionToMultiAvailabilityZonesOutcomeCallable;
                typedef std::function<void(const RedisClient*, const Model::UpgradeVersionToMultiAvailabilityZonesRequest&, UpgradeVersionToMultiAvailabilityZonesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeVersionToMultiAvailabilityZonesAsyncHandler;



                /**
                 *本接口（AddReplicationInstance）用于为全球复制组添加实例成员。
                 * @param req AddReplicationInstanceRequest
                 * @return AddReplicationInstanceOutcome
                 */
                AddReplicationInstanceOutcome AddReplicationInstance(const Model::AddReplicationInstanceRequest &request);
                void AddReplicationInstanceAsync(const Model::AddReplicationInstanceRequest& request, const AddReplicationInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddReplicationInstanceOutcomeCallable AddReplicationInstanceCallable(const Model::AddReplicationInstanceRequest& request);

                /**
                 *本接口（AllocateWanAddress）用于开通实例外网访问。
                 * @param req AllocateWanAddressRequest
                 * @return AllocateWanAddressOutcome
                 */
                AllocateWanAddressOutcome AllocateWanAddress(const Model::AllocateWanAddressRequest &request);
                void AllocateWanAddressAsync(const Model::AllocateWanAddressRequest& request, const AllocateWanAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AllocateWanAddressOutcomeCallable AllocateWanAddressCallable(const Model::AllocateWanAddressRequest& request);

                /**
                 *本接口（ApplyParamsTemplate）用于应用参数模板到实例。
                 * @param req ApplyParamsTemplateRequest
                 * @return ApplyParamsTemplateOutcome
                 */
                ApplyParamsTemplateOutcome ApplyParamsTemplate(const Model::ApplyParamsTemplateRequest &request);
                void ApplyParamsTemplateAsync(const Model::ApplyParamsTemplateRequest& request, const ApplyParamsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyParamsTemplateOutcomeCallable ApplyParamsTemplateCallable(const Model::ApplyParamsTemplateRequest& request);

                /**
                 *本接口 (AssociateSecurityGroups) 用于将一个安全组绑定于一个或多个数据库实例。创建实例时，未配置安全组，建议通过该接口，绑定安全组。
                 * @param req AssociateSecurityGroupsRequest
                 * @return AssociateSecurityGroupsOutcome
                 */
                AssociateSecurityGroupsOutcome AssociateSecurityGroups(const Model::AssociateSecurityGroupsRequest &request);
                void AssociateSecurityGroupsAsync(const Model::AssociateSecurityGroupsRequest& request, const AssociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateSecurityGroupsOutcomeCallable AssociateSecurityGroupsCallable(const Model::AssociateSecurityGroupsRequest& request);

                /**
                 *本接口（ChangeInstanceRole）用于更换复制组内实例的角色。
                 * @param req ChangeInstanceRoleRequest
                 * @return ChangeInstanceRoleOutcome
                 */
                ChangeInstanceRoleOutcome ChangeInstanceRole(const Model::ChangeInstanceRoleRequest &request);
                void ChangeInstanceRoleAsync(const Model::ChangeInstanceRoleRequest& request, const ChangeInstanceRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChangeInstanceRoleOutcomeCallable ChangeInstanceRoleCallable(const Model::ChangeInstanceRoleRequest& request);

                /**
                 *该接口（ChangeMasterInstance）用于将复制组内只读实例设置为主实例。
                 * @param req ChangeMasterInstanceRequest
                 * @return ChangeMasterInstanceOutcome
                 */
                ChangeMasterInstanceOutcome ChangeMasterInstance(const Model::ChangeMasterInstanceRequest &request);
                void ChangeMasterInstanceAsync(const Model::ChangeMasterInstanceRequest& request, const ChangeMasterInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChangeMasterInstanceOutcomeCallable ChangeMasterInstanceCallable(const Model::ChangeMasterInstanceRequest& request);

                /**
                 *本接口（ChangeReplicaToMaster）适用于实例副本组提主或副本提主。
                 * @param req ChangeReplicaToMasterRequest
                 * @return ChangeReplicaToMasterOutcome
                 */
                ChangeReplicaToMasterOutcome ChangeReplicaToMaster(const Model::ChangeReplicaToMasterRequest &request);
                void ChangeReplicaToMasterAsync(const Model::ChangeReplicaToMasterRequest& request, const ChangeReplicaToMasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChangeReplicaToMasterOutcomeCallable ChangeReplicaToMasterCallable(const Model::ChangeReplicaToMasterRequest& request);

                /**
                 *本接口（CleanUpInstance）用于立即下线回收站的实例。
                 * @param req CleanUpInstanceRequest
                 * @return CleanUpInstanceOutcome
                 */
                CleanUpInstanceOutcome CleanUpInstance(const Model::CleanUpInstanceRequest &request);
                void CleanUpInstanceAsync(const Model::CleanUpInstanceRequest& request, const CleanUpInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CleanUpInstanceOutcomeCallable CleanUpInstanceCallable(const Model::CleanUpInstanceRequest& request);

                /**
                 *本接口（ClearInstance）用于清空实例数据。
                 * @param req ClearInstanceRequest
                 * @return ClearInstanceOutcome
                 */
                ClearInstanceOutcome ClearInstance(const Model::ClearInstanceRequest &request);
                void ClearInstanceAsync(const Model::ClearInstanceRequest& request, const ClearInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ClearInstanceOutcomeCallable ClearInstanceCallable(const Model::ClearInstanceRequest& request);

                /**
                 *本接口（CloneInstances）用于基于当前实例的备份文件克隆一个完整的新实例。
                 * @param req CloneInstancesRequest
                 * @return CloneInstancesOutcome
                 */
                CloneInstancesOutcome CloneInstances(const Model::CloneInstancesRequest &request);
                void CloneInstancesAsync(const Model::CloneInstancesRequest& request, const CloneInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloneInstancesOutcomeCallable CloneInstancesCallable(const Model::CloneInstancesRequest& request);

                /**
                 *本接口（CloseSSL）用于关闭SSL加密认证。
                 * @param req CloseSSLRequest
                 * @return CloseSSLOutcome
                 */
                CloseSSLOutcome CloseSSL(const Model::CloseSSLRequest &request);
                void CloseSSLAsync(const Model::CloseSSLRequest& request, const CloseSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloseSSLOutcomeCallable CloseSSLCallable(const Model::CloseSSLRequest& request);

                /**
                 *本接口（CreateInstanceAccount）用于自定义访问实例的账号。
                 * @param req CreateInstanceAccountRequest
                 * @return CreateInstanceAccountOutcome
                 */
                CreateInstanceAccountOutcome CreateInstanceAccount(const Model::CreateInstanceAccountRequest &request);
                void CreateInstanceAccountAsync(const Model::CreateInstanceAccountRequest& request, const CreateInstanceAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstanceAccountOutcomeCallable CreateInstanceAccountCallable(const Model::CreateInstanceAccountRequest& request);

                /**
                 *本接口（CreateInstances）用于创建 Redis 实例。
                 * @param req CreateInstancesRequest
                 * @return CreateInstancesOutcome
                 */
                CreateInstancesOutcome CreateInstances(const Model::CreateInstancesRequest &request);
                void CreateInstancesAsync(const Model::CreateInstancesRequest& request, const CreateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstancesOutcomeCallable CreateInstancesCallable(const Model::CreateInstancesRequest& request);

                /**
                 *该接口（CreateParamTemplate）用于创建参数模板。
                 * @param req CreateParamTemplateRequest
                 * @return CreateParamTemplateOutcome
                 */
                CreateParamTemplateOutcome CreateParamTemplate(const Model::CreateParamTemplateRequest &request);
                void CreateParamTemplateAsync(const Model::CreateParamTemplateRequest& request, const CreateParamTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateParamTemplateOutcomeCallable CreateParamTemplateCallable(const Model::CreateParamTemplateRequest& request);

                /**
                 *本接口（CreateReplicationGroup）用于创建复制组。
                 * @param req CreateReplicationGroupRequest
                 * @return CreateReplicationGroupOutcome
                 */
                CreateReplicationGroupOutcome CreateReplicationGroup(const Model::CreateReplicationGroupRequest &request);
                void CreateReplicationGroupAsync(const Model::CreateReplicationGroupRequest& request, const CreateReplicationGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateReplicationGroupOutcomeCallable CreateReplicationGroupCallable(const Model::CreateReplicationGroupRequest& request);

                /**
                 *本接口（DeleteInstanceAccount）用于删除实例子账号。
                 * @param req DeleteInstanceAccountRequest
                 * @return DeleteInstanceAccountOutcome
                 */
                DeleteInstanceAccountOutcome DeleteInstanceAccount(const Model::DeleteInstanceAccountRequest &request);
                void DeleteInstanceAccountAsync(const Model::DeleteInstanceAccountRequest& request, const DeleteInstanceAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteInstanceAccountOutcomeCallable DeleteInstanceAccountCallable(const Model::DeleteInstanceAccountRequest& request);

                /**
                 *本接口（DeleteParamTemplate）用于删除参数模板。
                 * @param req DeleteParamTemplateRequest
                 * @return DeleteParamTemplateOutcome
                 */
                DeleteParamTemplateOutcome DeleteParamTemplate(const Model::DeleteParamTemplateRequest &request);
                void DeleteParamTemplateAsync(const Model::DeleteParamTemplateRequest& request, const DeleteParamTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteParamTemplateOutcomeCallable DeleteParamTemplateCallable(const Model::DeleteParamTemplateRequest& request);

                /**
                 *本接口（DeleteReplicationInstance）移除复制组成员。注：该接口下线中，请使用 [RemoveReplicationInstance](https://cloud.tencent.com/document/product/239/90099)。
                 * @param req DeleteReplicationInstanceRequest
                 * @return DeleteReplicationInstanceOutcome
                 */
                DeleteReplicationInstanceOutcome DeleteReplicationInstance(const Model::DeleteReplicationInstanceRequest &request);
                void DeleteReplicationInstanceAsync(const Model::DeleteReplicationInstanceRequest& request, const DeleteReplicationInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteReplicationInstanceOutcomeCallable DeleteReplicationInstanceCallable(const Model::DeleteReplicationInstanceRequest& request);

                /**
                 *本接口（DescribeAutoBackupConfig）用于获取自动备份配置规则。
                 * @param req DescribeAutoBackupConfigRequest
                 * @return DescribeAutoBackupConfigOutcome
                 */
                DescribeAutoBackupConfigOutcome DescribeAutoBackupConfig(const Model::DescribeAutoBackupConfigRequest &request);
                void DescribeAutoBackupConfigAsync(const Model::DescribeAutoBackupConfigRequest& request, const DescribeAutoBackupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAutoBackupConfigOutcomeCallable DescribeAutoBackupConfigCallable(const Model::DescribeAutoBackupConfigRequest& request);

                /**
                 *本接口（DescribeBackupDetail）用于查询实例的备份信息详情。
                 * @param req DescribeBackupDetailRequest
                 * @return DescribeBackupDetailOutcome
                 */
                DescribeBackupDetailOutcome DescribeBackupDetail(const Model::DescribeBackupDetailRequest &request);
                void DescribeBackupDetailAsync(const Model::DescribeBackupDetailRequest& request, const DescribeBackupDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupDetailOutcomeCallable DescribeBackupDetailCallable(const Model::DescribeBackupDetailRequest& request);

                /**
                 *本接口（DescribeBackupDownloadRestriction）用于查询当前地域数据库备份文件的下载地址。
                 * @param req DescribeBackupDownloadRestrictionRequest
                 * @return DescribeBackupDownloadRestrictionOutcome
                 */
                DescribeBackupDownloadRestrictionOutcome DescribeBackupDownloadRestriction(const Model::DescribeBackupDownloadRestrictionRequest &request);
                void DescribeBackupDownloadRestrictionAsync(const Model::DescribeBackupDownloadRestrictionRequest& request, const DescribeBackupDownloadRestrictionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupDownloadRestrictionOutcomeCallable DescribeBackupDownloadRestrictionCallable(const Model::DescribeBackupDownloadRestrictionRequest& request);

                /**
                 *本接口（DescribeBackupUrl）用于查询备份 Rdb 文件的下载地址。
                 * @param req DescribeBackupUrlRequest
                 * @return DescribeBackupUrlOutcome
                 */
                DescribeBackupUrlOutcome DescribeBackupUrl(const Model::DescribeBackupUrlRequest &request);
                void DescribeBackupUrlAsync(const Model::DescribeBackupUrlRequest& request, const DescribeBackupUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupUrlOutcomeCallable DescribeBackupUrlCallable(const Model::DescribeBackupUrlRequest& request);

                /**
                 *本接口（DescribeBandwidthRange）用于查询实例带宽信息。
                 * @param req DescribeBandwidthRangeRequest
                 * @return DescribeBandwidthRangeOutcome
                 */
                DescribeBandwidthRangeOutcome DescribeBandwidthRange(const Model::DescribeBandwidthRangeRequest &request);
                void DescribeBandwidthRangeAsync(const Model::DescribeBandwidthRangeRequest& request, const DescribeBandwidthRangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBandwidthRangeOutcomeCallable DescribeBandwidthRangeCallable(const Model::DescribeBandwidthRangeRequest& request);

                /**
                 *本接口（DescribeCommonDBInstances）用于查询Redis实例列表信息。当前该接口已废弃。
                 * @param req DescribeCommonDBInstancesRequest
                 * @return DescribeCommonDBInstancesOutcome
                 */
                DescribeCommonDBInstancesOutcome DescribeCommonDBInstances(const Model::DescribeCommonDBInstancesRequest &request);
                void DescribeCommonDBInstancesAsync(const Model::DescribeCommonDBInstancesRequest& request, const DescribeCommonDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCommonDBInstancesOutcomeCallable DescribeCommonDBInstancesCallable(const Model::DescribeCommonDBInstancesRequest& request);

                /**
                 *本接口（DescribeDBSecurityGroups）用于查询实例的安全组详情。
                 * @param req DescribeDBSecurityGroupsRequest
                 * @return DescribeDBSecurityGroupsOutcome
                 */
                DescribeDBSecurityGroupsOutcome DescribeDBSecurityGroups(const Model::DescribeDBSecurityGroupsRequest &request);
                void DescribeDBSecurityGroupsAsync(const Model::DescribeDBSecurityGroupsRequest& request, const DescribeDBSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBSecurityGroupsOutcomeCallable DescribeDBSecurityGroupsCallable(const Model::DescribeDBSecurityGroupsRequest& request);

                /**
                 *本接口（DescribeGlobalReplicationArea）用于查询全球复制支持地域信息。
                 * @param req DescribeGlobalReplicationAreaRequest
                 * @return DescribeGlobalReplicationAreaOutcome
                 */
                DescribeGlobalReplicationAreaOutcome DescribeGlobalReplicationArea(const Model::DescribeGlobalReplicationAreaRequest &request);
                void DescribeGlobalReplicationAreaAsync(const Model::DescribeGlobalReplicationAreaRequest& request, const DescribeGlobalReplicationAreaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGlobalReplicationAreaOutcomeCallable DescribeGlobalReplicationAreaCallable(const Model::DescribeGlobalReplicationAreaRequest& request);

                /**
                 *本接口（DescribeInstanceAccount）用于查看实例子账号信息。
                 * @param req DescribeInstanceAccountRequest
                 * @return DescribeInstanceAccountOutcome
                 */
                DescribeInstanceAccountOutcome DescribeInstanceAccount(const Model::DescribeInstanceAccountRequest &request);
                void DescribeInstanceAccountAsync(const Model::DescribeInstanceAccountRequest& request, const DescribeInstanceAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceAccountOutcomeCallable DescribeInstanceAccountCallable(const Model::DescribeInstanceAccountRequest& request);

                /**
                 *本接口（DescribeInstanceBackups）用于查询实例备份列表。
                 * @param req DescribeInstanceBackupsRequest
                 * @return DescribeInstanceBackupsOutcome
                 */
                DescribeInstanceBackupsOutcome DescribeInstanceBackups(const Model::DescribeInstanceBackupsRequest &request);
                void DescribeInstanceBackupsAsync(const Model::DescribeInstanceBackupsRequest& request, const DescribeInstanceBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceBackupsOutcomeCallable DescribeInstanceBackupsCallable(const Model::DescribeInstanceBackupsRequest& request);

                /**
                 *本接口（DescribeInstanceDTSInfo）用于查询实例 DTS 信息。
                 * @param req DescribeInstanceDTSInfoRequest
                 * @return DescribeInstanceDTSInfoOutcome
                 */
                DescribeInstanceDTSInfoOutcome DescribeInstanceDTSInfo(const Model::DescribeInstanceDTSInfoRequest &request);
                void DescribeInstanceDTSInfoAsync(const Model::DescribeInstanceDTSInfoRequest& request, const DescribeInstanceDTSInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceDTSInfoOutcomeCallable DescribeInstanceDTSInfoCallable(const Model::DescribeInstanceDTSInfoRequest& request);

                /**
                 *本接口（DescribeInstanceDealDetail）用于查询订单信息。
                 * @param req DescribeInstanceDealDetailRequest
                 * @return DescribeInstanceDealDetailOutcome
                 */
                DescribeInstanceDealDetailOutcome DescribeInstanceDealDetail(const Model::DescribeInstanceDealDetailRequest &request);
                void DescribeInstanceDealDetailAsync(const Model::DescribeInstanceDealDetailRequest& request, const DescribeInstanceDealDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceDealDetailOutcomeCallable DescribeInstanceDealDetailCallable(const Model::DescribeInstanceDealDetailRequest& request);

                /**
                 *本接口（DescribeInstanceEvents）用于查询 Redis 实例事件信息。
                 * @param req DescribeInstanceEventsRequest
                 * @return DescribeInstanceEventsOutcome
                 */
                DescribeInstanceEventsOutcome DescribeInstanceEvents(const Model::DescribeInstanceEventsRequest &request);
                void DescribeInstanceEventsAsync(const Model::DescribeInstanceEventsRequest& request, const DescribeInstanceEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceEventsOutcomeCallable DescribeInstanceEventsCallable(const Model::DescribeInstanceEventsRequest& request);

                /**
                 *本接口（DescribeInstanceLogDelivery）用于查询实例的日志投递配置。
                 * @param req DescribeInstanceLogDeliveryRequest
                 * @return DescribeInstanceLogDeliveryOutcome
                 */
                DescribeInstanceLogDeliveryOutcome DescribeInstanceLogDelivery(const Model::DescribeInstanceLogDeliveryRequest &request);
                void DescribeInstanceLogDeliveryAsync(const Model::DescribeInstanceLogDeliveryRequest& request, const DescribeInstanceLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceLogDeliveryOutcomeCallable DescribeInstanceLogDeliveryCallable(const Model::DescribeInstanceLogDeliveryRequest& request);

                /**
                 *腾讯云数据库 Redis 已经于2022年10月31日下线查询实例大 Key 接口。具体公告，请参见[查询实例大 Key 接口下线公告](https://cloud.tencent.com/document/product/239/81005)。
                 * @param req DescribeInstanceMonitorBigKeyRequest
                 * @return DescribeInstanceMonitorBigKeyOutcome
                 */
                DescribeInstanceMonitorBigKeyOutcome DescribeInstanceMonitorBigKey(const Model::DescribeInstanceMonitorBigKeyRequest &request);
                void DescribeInstanceMonitorBigKeyAsync(const Model::DescribeInstanceMonitorBigKeyRequest& request, const DescribeInstanceMonitorBigKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceMonitorBigKeyOutcomeCallable DescribeInstanceMonitorBigKeyCallable(const Model::DescribeInstanceMonitorBigKeyRequest& request);

                /**
                 *腾讯云数据库 Redis 已经于2022年10月31日下线查询实例大 Key 接口。具体公告，请参见 [查询实例大 Key 接口下线公告](https://cloud.tencent.com/document/product/239/81005)。
                 * @param req DescribeInstanceMonitorBigKeySizeDistRequest
                 * @return DescribeInstanceMonitorBigKeySizeDistOutcome
                 */
                DescribeInstanceMonitorBigKeySizeDistOutcome DescribeInstanceMonitorBigKeySizeDist(const Model::DescribeInstanceMonitorBigKeySizeDistRequest &request);
                void DescribeInstanceMonitorBigKeySizeDistAsync(const Model::DescribeInstanceMonitorBigKeySizeDistRequest& request, const DescribeInstanceMonitorBigKeySizeDistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceMonitorBigKeySizeDistOutcomeCallable DescribeInstanceMonitorBigKeySizeDistCallable(const Model::DescribeInstanceMonitorBigKeySizeDistRequest& request);

                /**
                 *腾讯云数据库 Redis 已经于2022年10月31日下线查询实例大 Key 接口。具体公告，请参见 [查询实例大 Key 接口下线公告](https://cloud.tencent.com/document/product/239/81005)。
                 * @param req DescribeInstanceMonitorBigKeyTypeDistRequest
                 * @return DescribeInstanceMonitorBigKeyTypeDistOutcome
                 */
                DescribeInstanceMonitorBigKeyTypeDistOutcome DescribeInstanceMonitorBigKeyTypeDist(const Model::DescribeInstanceMonitorBigKeyTypeDistRequest &request);
                void DescribeInstanceMonitorBigKeyTypeDistAsync(const Model::DescribeInstanceMonitorBigKeyTypeDistRequest& request, const DescribeInstanceMonitorBigKeyTypeDistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceMonitorBigKeyTypeDistOutcomeCallable DescribeInstanceMonitorBigKeyTypeDistCallable(const Model::DescribeInstanceMonitorBigKeyTypeDistRequest& request);

                /**
                 *本接口（DescribeInstanceMonitorHotKey）用于查询实例热Key。
                 * @param req DescribeInstanceMonitorHotKeyRequest
                 * @return DescribeInstanceMonitorHotKeyOutcome
                 */
                DescribeInstanceMonitorHotKeyOutcome DescribeInstanceMonitorHotKey(const Model::DescribeInstanceMonitorHotKeyRequest &request);
                void DescribeInstanceMonitorHotKeyAsync(const Model::DescribeInstanceMonitorHotKeyRequest& request, const DescribeInstanceMonitorHotKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceMonitorHotKeyOutcomeCallable DescribeInstanceMonitorHotKeyCallable(const Model::DescribeInstanceMonitorHotKeyRequest& request);

                /**
                 *该接口已下线，请使用数据库智能管家 DBbrain 接口 [DescribeProxyProcessStatistics](https://cloud.tencent.com/document/product/1130/84544) 获取实例访问来源。
                 * @param req DescribeInstanceMonitorSIPRequest
                 * @return DescribeInstanceMonitorSIPOutcome
                 */
                DescribeInstanceMonitorSIPOutcome DescribeInstanceMonitorSIP(const Model::DescribeInstanceMonitorSIPRequest &request);
                void DescribeInstanceMonitorSIPAsync(const Model::DescribeInstanceMonitorSIPRequest& request, const DescribeInstanceMonitorSIPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceMonitorSIPOutcomeCallable DescribeInstanceMonitorSIPCallable(const Model::DescribeInstanceMonitorSIPRequest& request);

                /**
                 *本接口（DescribeInstanceMonitorTookDist）用于查询实例访问的耗时分布。
                 * @param req DescribeInstanceMonitorTookDistRequest
                 * @return DescribeInstanceMonitorTookDistOutcome
                 */
                DescribeInstanceMonitorTookDistOutcome DescribeInstanceMonitorTookDist(const Model::DescribeInstanceMonitorTookDistRequest &request);
                void DescribeInstanceMonitorTookDistAsync(const Model::DescribeInstanceMonitorTookDistRequest& request, const DescribeInstanceMonitorTookDistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceMonitorTookDistOutcomeCallable DescribeInstanceMonitorTookDistCallable(const Model::DescribeInstanceMonitorTookDistRequest& request);

                /**
                 *本接口（DescribeInstanceMonitorTopNCmd）用于查询实例访问命令。
                 * @param req DescribeInstanceMonitorTopNCmdRequest
                 * @return DescribeInstanceMonitorTopNCmdOutcome
                 */
                DescribeInstanceMonitorTopNCmdOutcome DescribeInstanceMonitorTopNCmd(const Model::DescribeInstanceMonitorTopNCmdRequest &request);
                void DescribeInstanceMonitorTopNCmdAsync(const Model::DescribeInstanceMonitorTopNCmdRequest& request, const DescribeInstanceMonitorTopNCmdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceMonitorTopNCmdOutcomeCallable DescribeInstanceMonitorTopNCmdCallable(const Model::DescribeInstanceMonitorTopNCmdRequest& request);

                /**
                 *本接口（DescribeInstanceMonitorTopNCmdTook）用于查询实例 CPU 耗时。
                 * @param req DescribeInstanceMonitorTopNCmdTookRequest
                 * @return DescribeInstanceMonitorTopNCmdTookOutcome
                 */
                DescribeInstanceMonitorTopNCmdTookOutcome DescribeInstanceMonitorTopNCmdTook(const Model::DescribeInstanceMonitorTopNCmdTookRequest &request);
                void DescribeInstanceMonitorTopNCmdTookAsync(const Model::DescribeInstanceMonitorTopNCmdTookRequest& request, const DescribeInstanceMonitorTopNCmdTookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceMonitorTopNCmdTookOutcomeCallable DescribeInstanceMonitorTopNCmdTookCallable(const Model::DescribeInstanceMonitorTopNCmdTookRequest& request);

                /**
                 *本接口（DescribeInstanceNodeInfo）用于查询实例节点信息。
                 * @param req DescribeInstanceNodeInfoRequest
                 * @return DescribeInstanceNodeInfoOutcome
                 */
                DescribeInstanceNodeInfoOutcome DescribeInstanceNodeInfo(const Model::DescribeInstanceNodeInfoRequest &request);
                void DescribeInstanceNodeInfoAsync(const Model::DescribeInstanceNodeInfoRequest& request, const DescribeInstanceNodeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceNodeInfoOutcomeCallable DescribeInstanceNodeInfoCallable(const Model::DescribeInstanceNodeInfoRequest& request);

                /**
                 *本接口（DescribeInstanceParamRecords）用于查询参数修改历史列表。
                 * @param req DescribeInstanceParamRecordsRequest
                 * @return DescribeInstanceParamRecordsOutcome
                 */
                DescribeInstanceParamRecordsOutcome DescribeInstanceParamRecords(const Model::DescribeInstanceParamRecordsRequest &request);
                void DescribeInstanceParamRecordsAsync(const Model::DescribeInstanceParamRecordsRequest& request, const DescribeInstanceParamRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceParamRecordsOutcomeCallable DescribeInstanceParamRecordsCallable(const Model::DescribeInstanceParamRecordsRequest& request);

                /**
                 *本接口（DescribeInstanceParams）用于查询实例参数列表。
                 * @param req DescribeInstanceParamsRequest
                 * @return DescribeInstanceParamsOutcome
                 */
                DescribeInstanceParamsOutcome DescribeInstanceParams(const Model::DescribeInstanceParamsRequest &request);
                void DescribeInstanceParamsAsync(const Model::DescribeInstanceParamsRequest& request, const DescribeInstanceParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceParamsOutcomeCallable DescribeInstanceParamsCallable(const Model::DescribeInstanceParamsRequest& request);

                /**
                 *本接口（DescribeInstanceSecurityGroup）用于查询实例安全组信息。
                 * @param req DescribeInstanceSecurityGroupRequest
                 * @return DescribeInstanceSecurityGroupOutcome
                 */
                DescribeInstanceSecurityGroupOutcome DescribeInstanceSecurityGroup(const Model::DescribeInstanceSecurityGroupRequest &request);
                void DescribeInstanceSecurityGroupAsync(const Model::DescribeInstanceSecurityGroupRequest& request, const DescribeInstanceSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceSecurityGroupOutcomeCallable DescribeInstanceSecurityGroupCallable(const Model::DescribeInstanceSecurityGroupRequest& request);

                /**
                 *本接口（DescribeInstanceShards）用于获取集群架构实例的分片信息。
                 * @param req DescribeInstanceShardsRequest
                 * @return DescribeInstanceShardsOutcome
                 */
                DescribeInstanceShardsOutcome DescribeInstanceShards(const Model::DescribeInstanceShardsRequest &request);
                void DescribeInstanceShardsAsync(const Model::DescribeInstanceShardsRequest& request, const DescribeInstanceShardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceShardsOutcomeCallable DescribeInstanceShardsCallable(const Model::DescribeInstanceShardsRequest& request);

                /**
                 *本接口（DescribeInstanceSpecBandwidth）用于查询或计算带宽规格。
                 * @param req DescribeInstanceSpecBandwidthRequest
                 * @return DescribeInstanceSpecBandwidthOutcome
                 */
                DescribeInstanceSpecBandwidthOutcome DescribeInstanceSpecBandwidth(const Model::DescribeInstanceSpecBandwidthRequest &request);
                void DescribeInstanceSpecBandwidthAsync(const Model::DescribeInstanceSpecBandwidthRequest& request, const DescribeInstanceSpecBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceSpecBandwidthOutcomeCallable DescribeInstanceSpecBandwidthCallable(const Model::DescribeInstanceSpecBandwidthRequest& request);

                /**
                 *本接口（DescribeInstanceSupportFeature）用于查询实例支持的功能特性。
                 * @param req DescribeInstanceSupportFeatureRequest
                 * @return DescribeInstanceSupportFeatureOutcome
                 */
                DescribeInstanceSupportFeatureOutcome DescribeInstanceSupportFeature(const Model::DescribeInstanceSupportFeatureRequest &request);
                void DescribeInstanceSupportFeatureAsync(const Model::DescribeInstanceSupportFeatureRequest& request, const DescribeInstanceSupportFeatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceSupportFeatureOutcomeCallable DescribeInstanceSupportFeatureCallable(const Model::DescribeInstanceSupportFeatureRequest& request);

                /**
                 *本接口（DescribeInstanceZoneInfo）用于查询 Redis 节点详细信息。
                 * @param req DescribeInstanceZoneInfoRequest
                 * @return DescribeInstanceZoneInfoOutcome
                 */
                DescribeInstanceZoneInfoOutcome DescribeInstanceZoneInfo(const Model::DescribeInstanceZoneInfoRequest &request);
                void DescribeInstanceZoneInfoAsync(const Model::DescribeInstanceZoneInfoRequest& request, const DescribeInstanceZoneInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceZoneInfoOutcomeCallable DescribeInstanceZoneInfoCallable(const Model::DescribeInstanceZoneInfoRequest& request);

                /**
                 *本接口（DescribeInstances）用于查询Redis实例列表。
                 * @param req DescribeInstancesRequest
                 * @return DescribeInstancesOutcome
                 */
                DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest &request);
                void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request);

                /**
                 *本接口（DescribeMaintenanceWindow）用于查询实例维护时间窗。在实例需要进行版本升级或者架构升级的时候，会在维护时间窗时间内进行切换
                 * @param req DescribeMaintenanceWindowRequest
                 * @return DescribeMaintenanceWindowOutcome
                 */
                DescribeMaintenanceWindowOutcome DescribeMaintenanceWindow(const Model::DescribeMaintenanceWindowRequest &request);
                void DescribeMaintenanceWindowAsync(const Model::DescribeMaintenanceWindowRequest& request, const DescribeMaintenanceWindowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMaintenanceWindowOutcomeCallable DescribeMaintenanceWindowCallable(const Model::DescribeMaintenanceWindowRequest& request);

                /**
                 *本接口（DescribeParamTemplateInfo）用于查询参数模板详情。
                 * @param req DescribeParamTemplateInfoRequest
                 * @return DescribeParamTemplateInfoOutcome
                 */
                DescribeParamTemplateInfoOutcome DescribeParamTemplateInfo(const Model::DescribeParamTemplateInfoRequest &request);
                void DescribeParamTemplateInfoAsync(const Model::DescribeParamTemplateInfoRequest& request, const DescribeParamTemplateInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeParamTemplateInfoOutcomeCallable DescribeParamTemplateInfoCallable(const Model::DescribeParamTemplateInfoRequest& request);

                /**
                 *本接口（DescribeParamTemplates）用于查询参数模板列表。
                 * @param req DescribeParamTemplatesRequest
                 * @return DescribeParamTemplatesOutcome
                 */
                DescribeParamTemplatesOutcome DescribeParamTemplates(const Model::DescribeParamTemplatesRequest &request);
                void DescribeParamTemplatesAsync(const Model::DescribeParamTemplatesRequest& request, const DescribeParamTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeParamTemplatesOutcomeCallable DescribeParamTemplatesCallable(const Model::DescribeParamTemplatesRequest& request);

                /**
                 *本接口（DescribeProductInfo）用于查询全地域 Redis 的售卖规格。
                 * @param req DescribeProductInfoRequest
                 * @return DescribeProductInfoOutcome
                 */
                DescribeProductInfoOutcome DescribeProductInfo(const Model::DescribeProductInfoRequest &request);
                void DescribeProductInfoAsync(const Model::DescribeProductInfoRequest& request, const DescribeProductInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProductInfoOutcomeCallable DescribeProductInfoCallable(const Model::DescribeProductInfoRequest& request);

                /**
                 *本接口（DescribeProjectSecurityGroup）用于查询项目安全组信息。
                 * @param req DescribeProjectSecurityGroupRequest
                 * @return DescribeProjectSecurityGroupOutcome
                 */
                DescribeProjectSecurityGroupOutcome DescribeProjectSecurityGroup(const Model::DescribeProjectSecurityGroupRequest &request);
                void DescribeProjectSecurityGroupAsync(const Model::DescribeProjectSecurityGroupRequest& request, const DescribeProjectSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProjectSecurityGroupOutcomeCallable DescribeProjectSecurityGroupCallable(const Model::DescribeProjectSecurityGroupRequest& request);

                /**
                 *本接口（DescribeProjectSecurityGroups）用于查询项目的安全组详情。
                 * @param req DescribeProjectSecurityGroupsRequest
                 * @return DescribeProjectSecurityGroupsOutcome
                 */
                DescribeProjectSecurityGroupsOutcome DescribeProjectSecurityGroups(const Model::DescribeProjectSecurityGroupsRequest &request);
                void DescribeProjectSecurityGroupsAsync(const Model::DescribeProjectSecurityGroupsRequest& request, const DescribeProjectSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProjectSecurityGroupsOutcomeCallable DescribeProjectSecurityGroupsCallable(const Model::DescribeProjectSecurityGroupsRequest& request);

                /**
                 *本接口（DescribeProxySlowLog）用于查询代理慢查询。
                 * @param req DescribeProxySlowLogRequest
                 * @return DescribeProxySlowLogOutcome
                 */
                DescribeProxySlowLogOutcome DescribeProxySlowLog(const Model::DescribeProxySlowLogRequest &request);
                void DescribeProxySlowLogAsync(const Model::DescribeProxySlowLogRequest& request, const DescribeProxySlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProxySlowLogOutcomeCallable DescribeProxySlowLogCallable(const Model::DescribeProxySlowLogRequest& request);

                /**
                 *本接口（DescribeRedisClusterOverview）用于查询 Redis 独享集群概览信息。
                 * @param req DescribeRedisClusterOverviewRequest
                 * @return DescribeRedisClusterOverviewOutcome
                 */
                DescribeRedisClusterOverviewOutcome DescribeRedisClusterOverview(const Model::DescribeRedisClusterOverviewRequest &request);
                void DescribeRedisClusterOverviewAsync(const Model::DescribeRedisClusterOverviewRequest& request, const DescribeRedisClusterOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRedisClusterOverviewOutcomeCallable DescribeRedisClusterOverviewCallable(const Model::DescribeRedisClusterOverviewRequest& request);

                /**
                 *本接口（DescribeRedisClusters）用于查询Redis独享集群列表。
                 * @param req DescribeRedisClustersRequest
                 * @return DescribeRedisClustersOutcome
                 */
                DescribeRedisClustersOutcome DescribeRedisClusters(const Model::DescribeRedisClustersRequest &request);
                void DescribeRedisClustersAsync(const Model::DescribeRedisClustersRequest& request, const DescribeRedisClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRedisClustersOutcomeCallable DescribeRedisClustersCallable(const Model::DescribeRedisClustersRequest& request);

                /**
                 *本接口（DescribeReplicationGroup）用于查询复制组。
                 * @param req DescribeReplicationGroupRequest
                 * @return DescribeReplicationGroupOutcome
                 */
                DescribeReplicationGroupOutcome DescribeReplicationGroup(const Model::DescribeReplicationGroupRequest &request);
                void DescribeReplicationGroupAsync(const Model::DescribeReplicationGroupRequest& request, const DescribeReplicationGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReplicationGroupOutcomeCallable DescribeReplicationGroupCallable(const Model::DescribeReplicationGroupRequest& request);

                /**
                 *本接口（DescribeReplicationGroupInstance）用于查询复制组信息。
                 * @param req DescribeReplicationGroupInstanceRequest
                 * @return DescribeReplicationGroupInstanceOutcome
                 */
                DescribeReplicationGroupInstanceOutcome DescribeReplicationGroupInstance(const Model::DescribeReplicationGroupInstanceRequest &request);
                void DescribeReplicationGroupInstanceAsync(const Model::DescribeReplicationGroupInstanceRequest& request, const DescribeReplicationGroupInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReplicationGroupInstanceOutcomeCallable DescribeReplicationGroupInstanceCallable(const Model::DescribeReplicationGroupInstanceRequest& request);

                /**
                 *本接口（DescribeSSLStatus）用于查询实例 SSL 认证相关信息，包括开启状态、配置状态、证书地址等。
                 * @param req DescribeSSLStatusRequest
                 * @return DescribeSSLStatusOutcome
                 */
                DescribeSSLStatusOutcome DescribeSSLStatus(const Model::DescribeSSLStatusRequest &request);
                void DescribeSSLStatusAsync(const Model::DescribeSSLStatusRequest& request, const DescribeSSLStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSSLStatusOutcomeCallable DescribeSSLStatusCallable(const Model::DescribeSSLStatusRequest& request);

                /**
                 *查询实例秒级备份信息
                 * @param req DescribeSecondLevelBackupInfoRequest
                 * @return DescribeSecondLevelBackupInfoOutcome
                 */
                DescribeSecondLevelBackupInfoOutcome DescribeSecondLevelBackupInfo(const Model::DescribeSecondLevelBackupInfoRequest &request);
                void DescribeSecondLevelBackupInfoAsync(const Model::DescribeSecondLevelBackupInfoRequest& request, const DescribeSecondLevelBackupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecondLevelBackupInfoOutcomeCallable DescribeSecondLevelBackupInfoCallable(const Model::DescribeSecondLevelBackupInfoRequest& request);

                /**
                 *本接口（DescribeSlowLog）查询实例慢查询记录。
                 * @param req DescribeSlowLogRequest
                 * @return DescribeSlowLogOutcome
                 */
                DescribeSlowLogOutcome DescribeSlowLog(const Model::DescribeSlowLogRequest &request);
                void DescribeSlowLogAsync(const Model::DescribeSlowLogRequest& request, const DescribeSlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSlowLogOutcomeCallable DescribeSlowLogCallable(const Model::DescribeSlowLogRequest& request);

                /**
                 *本接口（DescribeTaskInfo）用于获取指定任务的执行情况。
                 * @param req DescribeTaskInfoRequest
                 * @return DescribeTaskInfoOutcome
                 */
                DescribeTaskInfoOutcome DescribeTaskInfo(const Model::DescribeTaskInfoRequest &request);
                void DescribeTaskInfoAsync(const Model::DescribeTaskInfoRequest& request, const DescribeTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskInfoOutcomeCallable DescribeTaskInfoCallable(const Model::DescribeTaskInfoRequest& request);

                /**
                 *本接口（DescribeTaskList）用于查询指定实例的任务列表信息。

- 可查询近30天内任务列表数据。
                 * @param req DescribeTaskListRequest
                 * @return DescribeTaskListOutcome
                 */
                DescribeTaskListOutcome DescribeTaskList(const Model::DescribeTaskListRequest &request);
                void DescribeTaskListAsync(const Model::DescribeTaskListRequest& request, const DescribeTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskListOutcomeCallable DescribeTaskListCallable(const Model::DescribeTaskListRequest& request);

                /**
                 *本接口（DescribeTendisSlowLog）用于查询 Tendis 实例慢查询。
                 * @param req DescribeTendisSlowLogRequest
                 * @return DescribeTendisSlowLogOutcome
                 */
                DescribeTendisSlowLogOutcome DescribeTendisSlowLog(const Model::DescribeTendisSlowLogRequest &request);
                void DescribeTendisSlowLogAsync(const Model::DescribeTendisSlowLogRequest& request, const DescribeTendisSlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTendisSlowLogOutcomeCallable DescribeTendisSlowLogCallable(const Model::DescribeTendisSlowLogRequest& request);

                /**
                 *本接口（DestroyPostpaidInstance）用于销毁按量计费实例。
                 * @param req DestroyPostpaidInstanceRequest
                 * @return DestroyPostpaidInstanceOutcome
                 */
                DestroyPostpaidInstanceOutcome DestroyPostpaidInstance(const Model::DestroyPostpaidInstanceRequest &request);
                void DestroyPostpaidInstanceAsync(const Model::DestroyPostpaidInstanceRequest& request, const DestroyPostpaidInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyPostpaidInstanceOutcomeCallable DestroyPostpaidInstanceCallable(const Model::DestroyPostpaidInstanceRequest& request);

                /**
                 *本接口（DestroyPrepaidInstance）用于退还包年包月计费的 Redis 实例。
                 * @param req DestroyPrepaidInstanceRequest
                 * @return DestroyPrepaidInstanceOutcome
                 */
                DestroyPrepaidInstanceOutcome DestroyPrepaidInstance(const Model::DestroyPrepaidInstanceRequest &request);
                void DestroyPrepaidInstanceAsync(const Model::DestroyPrepaidInstanceRequest& request, const DestroyPrepaidInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyPrepaidInstanceOutcomeCallable DestroyPrepaidInstanceCallable(const Model::DestroyPrepaidInstanceRequest& request);

                /**
                 *本接口（DisableReplicaReadonly）用于禁用读写分离功能。
                 * @param req DisableReplicaReadonlyRequest
                 * @return DisableReplicaReadonlyOutcome
                 */
                DisableReplicaReadonlyOutcome DisableReplicaReadonly(const Model::DisableReplicaReadonlyRequest &request);
                void DisableReplicaReadonlyAsync(const Model::DisableReplicaReadonlyRequest& request, const DisableReplicaReadonlyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableReplicaReadonlyOutcomeCallable DisableReplicaReadonlyCallable(const Model::DisableReplicaReadonlyRequest& request);

                /**
                 *本接口（DisassociateSecurityGroups）用于安全组批量解绑实例。
                 * @param req DisassociateSecurityGroupsRequest
                 * @return DisassociateSecurityGroupsOutcome
                 */
                DisassociateSecurityGroupsOutcome DisassociateSecurityGroups(const Model::DisassociateSecurityGroupsRequest &request);
                void DisassociateSecurityGroupsAsync(const Model::DisassociateSecurityGroupsRequest& request, const DisassociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateSecurityGroupsOutcomeCallable DisassociateSecurityGroupsCallable(const Model::DisassociateSecurityGroupsRequest& request);

                /**
                 *本接口（EnableReplicaReadonly）用于启用读写分离功能。
                 * @param req EnableReplicaReadonlyRequest
                 * @return EnableReplicaReadonlyOutcome
                 */
                EnableReplicaReadonlyOutcome EnableReplicaReadonly(const Model::EnableReplicaReadonlyRequest &request);
                void EnableReplicaReadonlyAsync(const Model::EnableReplicaReadonlyRequest& request, const EnableReplicaReadonlyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableReplicaReadonlyOutcomeCallable EnableReplicaReadonlyCallable(const Model::EnableReplicaReadonlyRequest& request);

                /**
                 *本接口（InquiryPriceCreateInstance）用于查询新购实例价格。
                 * @param req InquiryPriceCreateInstanceRequest
                 * @return InquiryPriceCreateInstanceOutcome
                 */
                InquiryPriceCreateInstanceOutcome InquiryPriceCreateInstance(const Model::InquiryPriceCreateInstanceRequest &request);
                void InquiryPriceCreateInstanceAsync(const Model::InquiryPriceCreateInstanceRequest& request, const InquiryPriceCreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceCreateInstanceOutcomeCallable InquiryPriceCreateInstanceCallable(const Model::InquiryPriceCreateInstanceRequest& request);

                /**
                 *本接口（InquiryPriceRenewInstance）用于查询包年包月计费实例的续费价格。
                 * @param req InquiryPriceRenewInstanceRequest
                 * @return InquiryPriceRenewInstanceOutcome
                 */
                InquiryPriceRenewInstanceOutcome InquiryPriceRenewInstance(const Model::InquiryPriceRenewInstanceRequest &request);
                void InquiryPriceRenewInstanceAsync(const Model::InquiryPriceRenewInstanceRequest& request, const InquiryPriceRenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceRenewInstanceOutcomeCallable InquiryPriceRenewInstanceCallable(const Model::InquiryPriceRenewInstanceRequest& request);

                /**
                 *本接口（InquiryPriceUpgradeInstance）用于查询实例扩容价格。
                 * @param req InquiryPriceUpgradeInstanceRequest
                 * @return InquiryPriceUpgradeInstanceOutcome
                 */
                InquiryPriceUpgradeInstanceOutcome InquiryPriceUpgradeInstance(const Model::InquiryPriceUpgradeInstanceRequest &request);
                void InquiryPriceUpgradeInstanceAsync(const Model::InquiryPriceUpgradeInstanceRequest& request, const InquiryPriceUpgradeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceUpgradeInstanceOutcomeCallable InquiryPriceUpgradeInstanceCallable(const Model::InquiryPriceUpgradeInstanceRequest& request);

                /**
                 *本接口（KillMasterGroup）用于模拟故障。
                 * @param req KillMasterGroupRequest
                 * @return KillMasterGroupOutcome
                 */
                KillMasterGroupOutcome KillMasterGroup(const Model::KillMasterGroupRequest &request);
                void KillMasterGroupAsync(const Model::KillMasterGroupRequest& request, const KillMasterGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                KillMasterGroupOutcomeCallable KillMasterGroupCallable(const Model::KillMasterGroupRequest& request);

                /**
                 *本接口（ManualBackupInstance）用于手动备份Redis实例。
                 * @param req ManualBackupInstanceRequest
                 * @return ManualBackupInstanceOutcome
                 */
                ManualBackupInstanceOutcome ManualBackupInstance(const Model::ManualBackupInstanceRequest &request);
                void ManualBackupInstanceAsync(const Model::ManualBackupInstanceRequest& request, const ManualBackupInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ManualBackupInstanceOutcomeCallable ManualBackupInstanceCallable(const Model::ManualBackupInstanceRequest& request);

                /**
                 *本接口（ModfiyInstancePassword）用于修改实例访问密码。鉴于该接口名存在拼写错误，现已更正为（[ModifyInstancePassword](https://cloud.tencent.com/document/product/239/111555)）接口，推荐使用更正后的接口。
                 * @param req ModfiyInstancePasswordRequest
                 * @return ModfiyInstancePasswordOutcome
                 */
                ModfiyInstancePasswordOutcome ModfiyInstancePassword(const Model::ModfiyInstancePasswordRequest &request);
                void ModfiyInstancePasswordAsync(const Model::ModfiyInstancePasswordRequest& request, const ModfiyInstancePasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModfiyInstancePasswordOutcomeCallable ModfiyInstancePasswordCallable(const Model::ModfiyInstancePasswordRequest& request);

                /**
                 *本接口（ModifyAutoBackupConfig）用于设置自动备份的配置。
                 * @param req ModifyAutoBackupConfigRequest
                 * @return ModifyAutoBackupConfigOutcome
                 */
                ModifyAutoBackupConfigOutcome ModifyAutoBackupConfig(const Model::ModifyAutoBackupConfigRequest &request);
                void ModifyAutoBackupConfigAsync(const Model::ModifyAutoBackupConfigRequest& request, const ModifyAutoBackupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAutoBackupConfigOutcomeCallable ModifyAutoBackupConfigCallable(const Model::ModifyAutoBackupConfigRequest& request);

                /**
                 *本接口（ModifyBackupDownloadRestriction）用于修改备份文件下载的网络信息与地址。
                 * @param req ModifyBackupDownloadRestrictionRequest
                 * @return ModifyBackupDownloadRestrictionOutcome
                 */
                ModifyBackupDownloadRestrictionOutcome ModifyBackupDownloadRestriction(const Model::ModifyBackupDownloadRestrictionRequest &request);
                void ModifyBackupDownloadRestrictionAsync(const Model::ModifyBackupDownloadRestrictionRequest& request, const ModifyBackupDownloadRestrictionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBackupDownloadRestrictionOutcomeCallable ModifyBackupDownloadRestrictionCallable(const Model::ModifyBackupDownloadRestrictionRequest& request);

                /**
                 *本接口（ModifyConnectionConfig）用于修改实例的连接配置，包括带宽和最大连接数。
                 * @param req ModifyConnectionConfigRequest
                 * @return ModifyConnectionConfigOutcome
                 */
                ModifyConnectionConfigOutcome ModifyConnectionConfig(const Model::ModifyConnectionConfigRequest &request);
                void ModifyConnectionConfigAsync(const Model::ModifyConnectionConfigRequest& request, const ModifyConnectionConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyConnectionConfigOutcomeCallable ModifyConnectionConfigCallable(const Model::ModifyConnectionConfigRequest& request);

                /**
                 *本接口（ModifyDBInstanceSecurityGroups）用于对实例原有的安全组列表进行修改。
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
                 *本接口（ModifyInstanceAccount）用于修改实例子账号。
                 * @param req ModifyInstanceAccountRequest
                 * @return ModifyInstanceAccountOutcome
                 */
                ModifyInstanceAccountOutcome ModifyInstanceAccount(const Model::ModifyInstanceAccountRequest &request);
                void ModifyInstanceAccountAsync(const Model::ModifyInstanceAccountRequest& request, const ModifyInstanceAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceAccountOutcomeCallable ModifyInstanceAccountCallable(const Model::ModifyInstanceAccountRequest& request);

                /**
                 *本接口（ModifyInstanceAvailabilityZones）用于变更实例可用区
                 * @param req ModifyInstanceAvailabilityZonesRequest
                 * @return ModifyInstanceAvailabilityZonesOutcome
                 */
                ModifyInstanceAvailabilityZonesOutcome ModifyInstanceAvailabilityZones(const Model::ModifyInstanceAvailabilityZonesRequest &request);
                void ModifyInstanceAvailabilityZonesAsync(const Model::ModifyInstanceAvailabilityZonesRequest& request, const ModifyInstanceAvailabilityZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceAvailabilityZonesOutcomeCallable ModifyInstanceAvailabilityZonesCallable(const Model::ModifyInstanceAvailabilityZonesRequest& request);

                /**
                 *修改实例的备份模式
                 * @param req ModifyInstanceBackupModeRequest
                 * @return ModifyInstanceBackupModeOutcome
                 */
                ModifyInstanceBackupModeOutcome ModifyInstanceBackupMode(const Model::ModifyInstanceBackupModeRequest &request);
                void ModifyInstanceBackupModeAsync(const Model::ModifyInstanceBackupModeRequest& request, const ModifyInstanceBackupModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceBackupModeOutcomeCallable ModifyInstanceBackupModeCallable(const Model::ModifyInstanceBackupModeRequest& request);

                /**
                 *本接口（ModifyInstanceEvent）用于修改实例的运维事件的执行计划。
                 * @param req ModifyInstanceEventRequest
                 * @return ModifyInstanceEventOutcome
                 */
                ModifyInstanceEventOutcome ModifyInstanceEvent(const Model::ModifyInstanceEventRequest &request);
                void ModifyInstanceEventAsync(const Model::ModifyInstanceEventRequest& request, const ModifyInstanceEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceEventOutcomeCallable ModifyInstanceEventCallable(const Model::ModifyInstanceEventRequest& request);

                /**
                 *本接口（ModifyInstanceLogDelivery）用于开启或关闭投递实例日志到CLS。
                 * @param req ModifyInstanceLogDeliveryRequest
                 * @return ModifyInstanceLogDeliveryOutcome
                 */
                ModifyInstanceLogDeliveryOutcome ModifyInstanceLogDelivery(const Model::ModifyInstanceLogDeliveryRequest &request);
                void ModifyInstanceLogDeliveryAsync(const Model::ModifyInstanceLogDeliveryRequest& request, const ModifyInstanceLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceLogDeliveryOutcomeCallable ModifyInstanceLogDeliveryCallable(const Model::ModifyInstanceLogDeliveryRequest& request);

                /**
                 *本接口（ModifyInstanceParams）用于修改 Redis 实例的参数配置。
                 * @param req ModifyInstanceParamsRequest
                 * @return ModifyInstanceParamsOutcome
                 */
                ModifyInstanceParamsOutcome ModifyInstanceParams(const Model::ModifyInstanceParamsRequest &request);
                void ModifyInstanceParamsAsync(const Model::ModifyInstanceParamsRequest& request, const ModifyInstanceParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceParamsOutcomeCallable ModifyInstanceParamsCallable(const Model::ModifyInstanceParamsRequest& request);

                /**
                 *本接口（ModifyInstancePassword）用于修改实例访问密码。
                 * @param req ModifyInstancePasswordRequest
                 * @return ModifyInstancePasswordOutcome
                 */
                ModifyInstancePasswordOutcome ModifyInstancePassword(const Model::ModifyInstancePasswordRequest &request);
                void ModifyInstancePasswordAsync(const Model::ModifyInstancePasswordRequest& request, const ModifyInstancePasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstancePasswordOutcomeCallable ModifyInstancePasswordCallable(const Model::ModifyInstancePasswordRequest& request);

                /**
                 *本接口（ModifyInstanceReadOnly）用于设置实例输入模式。
                 * @param req ModifyInstanceReadOnlyRequest
                 * @return ModifyInstanceReadOnlyOutcome
                 */
                ModifyInstanceReadOnlyOutcome ModifyInstanceReadOnly(const Model::ModifyInstanceReadOnlyRequest &request);
                void ModifyInstanceReadOnlyAsync(const Model::ModifyInstanceReadOnlyRequest& request, const ModifyInstanceReadOnlyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceReadOnlyOutcomeCallable ModifyInstanceReadOnlyCallable(const Model::ModifyInstanceReadOnlyRequest& request);

                /**
                 *本接口（ModifyMaintenanceWindow）用于修改实例维护时间窗时间，需要进行版本升级或者架构升级的实例，会在维护时间窗内进行时间切换。注意：已经发起版本升级或者架构升级的实例，无法修改维护时间窗。
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
                 *本接口（ModifyParamTemplate）用于修改参数模板。
                 * @param req ModifyParamTemplateRequest
                 * @return ModifyParamTemplateOutcome
                 */
                ModifyParamTemplateOutcome ModifyParamTemplate(const Model::ModifyParamTemplateRequest &request);
                void ModifyParamTemplateAsync(const Model::ModifyParamTemplateRequest& request, const ModifyParamTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyParamTemplateOutcomeCallable ModifyParamTemplateCallable(const Model::ModifyParamTemplateRequest& request);

                /**
                 *本接口（ModifyReplicationGroup）用于修改复制组信息。
                 * @param req ModifyReplicationGroupRequest
                 * @return ModifyReplicationGroupOutcome
                 */
                ModifyReplicationGroupOutcome ModifyReplicationGroup(const Model::ModifyReplicationGroupRequest &request);
                void ModifyReplicationGroupAsync(const Model::ModifyReplicationGroupRequest& request, const ModifyReplicationGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyReplicationGroupOutcomeCallable ModifyReplicationGroupCallable(const Model::ModifyReplicationGroupRequest& request);

                /**
                 *本接口（OpenSSL）用于开启 SSL 加密认证功能。
                 * @param req OpenSSLRequest
                 * @return OpenSSLOutcome
                 */
                OpenSSLOutcome OpenSSL(const Model::OpenSSLRequest &request);
                void OpenSSLAsync(const Model::OpenSSLRequest& request, const OpenSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenSSLOutcomeCallable OpenSSLCallable(const Model::OpenSSLRequest& request);

                /**
                 *本接口（ReleaseWanAddress）用于关闭外网访问。
                 * @param req ReleaseWanAddressRequest
                 * @return ReleaseWanAddressOutcome
                 */
                ReleaseWanAddressOutcome ReleaseWanAddress(const Model::ReleaseWanAddressRequest &request);
                void ReleaseWanAddressAsync(const Model::ReleaseWanAddressRequest& request, const ReleaseWanAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReleaseWanAddressOutcomeCallable ReleaseWanAddressCallable(const Model::ReleaseWanAddressRequest& request);

                /**
                 *删除复制组
                 * @param req RemoveReplicationGroupRequest
                 * @return RemoveReplicationGroupOutcome
                 */
                RemoveReplicationGroupOutcome RemoveReplicationGroup(const Model::RemoveReplicationGroupRequest &request);
                void RemoveReplicationGroupAsync(const Model::RemoveReplicationGroupRequest& request, const RemoveReplicationGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveReplicationGroupOutcomeCallable RemoveReplicationGroupCallable(const Model::RemoveReplicationGroupRequest& request);

                /**
                 *本接口（RemoveReplicationInstance）用于移除复制组中的实例。
                 * @param req RemoveReplicationInstanceRequest
                 * @return RemoveReplicationInstanceOutcome
                 */
                RemoveReplicationInstanceOutcome RemoveReplicationInstance(const Model::RemoveReplicationInstanceRequest &request);
                void RemoveReplicationInstanceAsync(const Model::RemoveReplicationInstanceRequest& request, const RemoveReplicationInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveReplicationInstanceOutcomeCallable RemoveReplicationInstanceCallable(const Model::RemoveReplicationInstanceRequest& request);

                /**
                 *本接口（RenewInstance）可用于为实例续费。
                 * @param req RenewInstanceRequest
                 * @return RenewInstanceOutcome
                 */
                RenewInstanceOutcome RenewInstance(const Model::RenewInstanceRequest &request);
                void RenewInstanceAsync(const Model::RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewInstanceOutcomeCallable RenewInstanceCallable(const Model::RenewInstanceRequest& request);

                /**
                 *本接口（ResetPassword）用于重置实例访问密码。
                 * @param req ResetPasswordRequest
                 * @return ResetPasswordOutcome
                 */
                ResetPasswordOutcome ResetPassword(const Model::ResetPasswordRequest &request);
                void ResetPasswordAsync(const Model::ResetPasswordRequest& request, const ResetPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetPasswordOutcomeCallable ResetPasswordCallable(const Model::ResetPasswordRequest& request);

                /**
                 *本接口（RestoreInstance）用于恢复实例。
                 * @param req RestoreInstanceRequest
                 * @return RestoreInstanceOutcome
                 */
                RestoreInstanceOutcome RestoreInstance(const Model::RestoreInstanceRequest &request);
                void RestoreInstanceAsync(const Model::RestoreInstanceRequest& request, const RestoreInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestoreInstanceOutcomeCallable RestoreInstanceCallable(const Model::RestoreInstanceRequest& request);

                /**
                 *本接口（StartupInstance）用于实例解隔离。
                 * @param req StartupInstanceRequest
                 * @return StartupInstanceOutcome
                 */
                StartupInstanceOutcome StartupInstance(const Model::StartupInstanceRequest &request);
                void StartupInstanceAsync(const Model::StartupInstanceRequest& request, const StartupInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartupInstanceOutcomeCallable StartupInstanceCallable(const Model::StartupInstanceRequest& request);

                /**
                 *本接口（SwitchAccessNewInstance）针对处于时间窗口中待切换操作的实例，用户可主动发起该操作。
                 * @param req SwitchAccessNewInstanceRequest
                 * @return SwitchAccessNewInstanceOutcome
                 */
                SwitchAccessNewInstanceOutcome SwitchAccessNewInstance(const Model::SwitchAccessNewInstanceRequest &request);
                void SwitchAccessNewInstanceAsync(const Model::SwitchAccessNewInstanceRequest& request, const SwitchAccessNewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SwitchAccessNewInstanceOutcomeCallable SwitchAccessNewInstanceCallable(const Model::SwitchAccessNewInstanceRequest& request);

                /**
                 *在通过 DTS 支持跨可用区灾备的场景中，通过该接口（SwitchInstanceVip）交换实例 VIP 完成实例灾备切换。交换 VIP 后目标实例可写，源和目标实例VIP互换，同时源与目标实例间 DTS 同步任务断开。
                 * @param req SwitchInstanceVipRequest
                 * @return SwitchInstanceVipOutcome
                 */
                SwitchInstanceVipOutcome SwitchInstanceVip(const Model::SwitchInstanceVipRequest &request);
                void SwitchInstanceVipAsync(const Model::SwitchInstanceVipRequest& request, const SwitchInstanceVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SwitchInstanceVipOutcomeCallable SwitchInstanceVipCallable(const Model::SwitchInstanceVipRequest& request);

                /**
                 *本接口（SwitchProxy）为 Proxy 模拟故障接口。
                 * @param req SwitchProxyRequest
                 * @return SwitchProxyOutcome
                 */
                SwitchProxyOutcome SwitchProxy(const Model::SwitchProxyRequest &request);
                void SwitchProxyAsync(const Model::SwitchProxyRequest& request, const SwitchProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SwitchProxyOutcomeCallable SwitchProxyCallable(const Model::SwitchProxyRequest& request);

                /**
                 *本接口（UpgradeInstance）用于变更实例的配置规格。
                 * @param req UpgradeInstanceRequest
                 * @return UpgradeInstanceOutcome
                 */
                UpgradeInstanceOutcome UpgradeInstance(const Model::UpgradeInstanceRequest &request);
                void UpgradeInstanceAsync(const Model::UpgradeInstanceRequest& request, const UpgradeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeInstanceOutcomeCallable UpgradeInstanceCallable(const Model::UpgradeInstanceRequest& request);

                /**
                 *本接口（UpgradeInstanceVersion）用于将当前实例升级到更高版本，或者将当前标准架构升级至集群架构。
                 * @param req UpgradeInstanceVersionRequest
                 * @return UpgradeInstanceVersionOutcome
                 */
                UpgradeInstanceVersionOutcome UpgradeInstanceVersion(const Model::UpgradeInstanceVersionRequest &request);
                void UpgradeInstanceVersionAsync(const Model::UpgradeInstanceVersionRequest& request, const UpgradeInstanceVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeInstanceVersionOutcomeCallable UpgradeInstanceVersionCallable(const Model::UpgradeInstanceVersionRequest& request);

                /**
                 *本接口（UpgradeProxyVersion）用于升级实例 Proxy 版本。
                 * @param req UpgradeProxyVersionRequest
                 * @return UpgradeProxyVersionOutcome
                 */
                UpgradeProxyVersionOutcome UpgradeProxyVersion(const Model::UpgradeProxyVersionRequest &request);
                void UpgradeProxyVersionAsync(const Model::UpgradeProxyVersionRequest& request, const UpgradeProxyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeProxyVersionOutcomeCallable UpgradeProxyVersionCallable(const Model::UpgradeProxyVersionRequest& request);

                /**
                 *本接口（UpgradeSmallVersion）用于实例小版本升级。
                 * @param req UpgradeSmallVersionRequest
                 * @return UpgradeSmallVersionOutcome
                 */
                UpgradeSmallVersionOutcome UpgradeSmallVersion(const Model::UpgradeSmallVersionRequest &request);
                void UpgradeSmallVersionAsync(const Model::UpgradeSmallVersionRequest& request, const UpgradeSmallVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeSmallVersionOutcomeCallable UpgradeSmallVersionCallable(const Model::UpgradeSmallVersionRequest& request);

                /**
                 *本接口（UpgradeVersionToMultiAvailabilityZones）用于升级实例支持多AZ。
                 * @param req UpgradeVersionToMultiAvailabilityZonesRequest
                 * @return UpgradeVersionToMultiAvailabilityZonesOutcome
                 */
                UpgradeVersionToMultiAvailabilityZonesOutcome UpgradeVersionToMultiAvailabilityZones(const Model::UpgradeVersionToMultiAvailabilityZonesRequest &request);
                void UpgradeVersionToMultiAvailabilityZonesAsync(const Model::UpgradeVersionToMultiAvailabilityZonesRequest& request, const UpgradeVersionToMultiAvailabilityZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeVersionToMultiAvailabilityZonesOutcomeCallable UpgradeVersionToMultiAvailabilityZonesCallable(const Model::UpgradeVersionToMultiAvailabilityZonesRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_REDISCLIENT_H_
