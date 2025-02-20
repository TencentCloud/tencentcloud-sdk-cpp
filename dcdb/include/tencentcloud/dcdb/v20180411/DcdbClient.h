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

#ifndef TENCENTCLOUD_DCDB_V20180411_DCDBCLIENT_H_
#define TENCENTCLOUD_DCDB_V20180411_DCDBCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/dcdb/v20180411/model/ActiveHourDCDBInstanceRequest.h>
#include <tencentcloud/dcdb/v20180411/model/ActiveHourDCDBInstanceResponse.h>
#include <tencentcloud/dcdb/v20180411/model/AssociateSecurityGroupsRequest.h>
#include <tencentcloud/dcdb/v20180411/model/AssociateSecurityGroupsResponse.h>
#include <tencentcloud/dcdb/v20180411/model/CancelDcnJobRequest.h>
#include <tencentcloud/dcdb/v20180411/model/CancelDcnJobResponse.h>
#include <tencentcloud/dcdb/v20180411/model/CancelOnlineDDLJobRequest.h>
#include <tencentcloud/dcdb/v20180411/model/CancelOnlineDDLJobResponse.h>
#include <tencentcloud/dcdb/v20180411/model/CloneAccountRequest.h>
#include <tencentcloud/dcdb/v20180411/model/CloneAccountResponse.h>
#include <tencentcloud/dcdb/v20180411/model/CloseDBExtranetAccessRequest.h>
#include <tencentcloud/dcdb/v20180411/model/CloseDBExtranetAccessResponse.h>
#include <tencentcloud/dcdb/v20180411/model/CopyAccountPrivilegesRequest.h>
#include <tencentcloud/dcdb/v20180411/model/CopyAccountPrivilegesResponse.h>
#include <tencentcloud/dcdb/v20180411/model/CreateAccountRequest.h>
#include <tencentcloud/dcdb/v20180411/model/CreateAccountResponse.h>
#include <tencentcloud/dcdb/v20180411/model/CreateDCDBInstanceRequest.h>
#include <tencentcloud/dcdb/v20180411/model/CreateDCDBInstanceResponse.h>
#include <tencentcloud/dcdb/v20180411/model/CreateDedicatedClusterDCDBInstanceRequest.h>
#include <tencentcloud/dcdb/v20180411/model/CreateDedicatedClusterDCDBInstanceResponse.h>
#include <tencentcloud/dcdb/v20180411/model/CreateHourDCDBInstanceRequest.h>
#include <tencentcloud/dcdb/v20180411/model/CreateHourDCDBInstanceResponse.h>
#include <tencentcloud/dcdb/v20180411/model/CreateOnlineDDLJobRequest.h>
#include <tencentcloud/dcdb/v20180411/model/CreateOnlineDDLJobResponse.h>
#include <tencentcloud/dcdb/v20180411/model/CreateTmpDCDBInstanceRequest.h>
#include <tencentcloud/dcdb/v20180411/model/CreateTmpDCDBInstanceResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DeleteAccountRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DeleteAccountResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeAccountPrivilegesRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeAccountPrivilegesResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeAccountsRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeAccountsResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeBackupConfigsRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeBackupConfigsResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeBackupFilesRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeBackupFilesResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDBEncryptAttributesRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDBEncryptAttributesResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDBLogFilesRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDBLogFilesResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDBParametersRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDBParametersResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDBSecurityGroupsRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDBSecurityGroupsResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDBSlowLogsRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDBSlowLogsResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDBSyncModeRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDBSyncModeResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDBTmpInstancesRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDBTmpInstancesResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDCDBBinlogTimeRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDCDBBinlogTimeResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDCDBInstanceDetailRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDCDBInstanceDetailResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDCDBInstanceNodeInfoRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDCDBInstanceNodeInfoResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDCDBInstancesRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDCDBInstancesResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDCDBPriceRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDCDBPriceResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDCDBRenewalPriceRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDCDBRenewalPriceResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDCDBSaleInfoRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDCDBSaleInfoResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDCDBShardsRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDCDBShardsResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDCDBUpgradePriceRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDCDBUpgradePriceResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDatabaseObjectsRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDatabaseObjectsResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDatabaseTableRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDatabaseTableResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDatabasesRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDatabasesResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDcnDetailRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDcnDetailResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeFileDownloadUrlRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeFileDownloadUrlResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeFlowRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeFlowResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeLogFileRetentionPeriodRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeLogFileRetentionPeriodResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeOnlineDDLJobRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeOnlineDDLJobResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeOrdersRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeOrdersResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeProjectSecurityGroupsRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeProjectSecurityGroupsResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeProjectsRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeProjectsResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeShardSpecRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeShardSpecResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeUserTasksRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeUserTasksResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DestroyDCDBInstanceRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DestroyDCDBInstanceResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DestroyHourDCDBInstanceRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DestroyHourDCDBInstanceResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DisassociateSecurityGroupsRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DisassociateSecurityGroupsResponse.h>
#include <tencentcloud/dcdb/v20180411/model/FlushBinlogRequest.h>
#include <tencentcloud/dcdb/v20180411/model/FlushBinlogResponse.h>
#include <tencentcloud/dcdb/v20180411/model/GrantAccountPrivilegesRequest.h>
#include <tencentcloud/dcdb/v20180411/model/GrantAccountPrivilegesResponse.h>
#include <tencentcloud/dcdb/v20180411/model/InitDCDBInstancesRequest.h>
#include <tencentcloud/dcdb/v20180411/model/InitDCDBInstancesResponse.h>
#include <tencentcloud/dcdb/v20180411/model/IsolateDCDBInstanceRequest.h>
#include <tencentcloud/dcdb/v20180411/model/IsolateDCDBInstanceResponse.h>
#include <tencentcloud/dcdb/v20180411/model/IsolateDedicatedDBInstanceRequest.h>
#include <tencentcloud/dcdb/v20180411/model/IsolateDedicatedDBInstanceResponse.h>
#include <tencentcloud/dcdb/v20180411/model/IsolateHourDCDBInstanceRequest.h>
#include <tencentcloud/dcdb/v20180411/model/IsolateHourDCDBInstanceResponse.h>
#include <tencentcloud/dcdb/v20180411/model/KillSessionRequest.h>
#include <tencentcloud/dcdb/v20180411/model/KillSessionResponse.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyAccountConfigRequest.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyAccountConfigResponse.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyAccountDescriptionRequest.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyAccountDescriptionResponse.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyAccountPrivilegesRequest.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyAccountPrivilegesResponse.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyBackupConfigsRequest.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyBackupConfigsResponse.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyDBEncryptAttributesRequest.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyDBEncryptAttributesResponse.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyDBInstanceNameRequest.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyDBInstanceNameResponse.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyDBInstanceSecurityGroupsRequest.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyDBInstanceSecurityGroupsResponse.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyDBInstancesProjectRequest.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyDBInstancesProjectResponse.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyDBParametersRequest.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyDBParametersResponse.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyDBSyncModeRequest.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyDBSyncModeResponse.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyInstanceNetworkRequest.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyInstanceNetworkResponse.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyInstanceVipRequest.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyInstanceVipResponse.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyInstanceVportRequest.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyInstanceVportResponse.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyRealServerAccessStrategyRequest.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyRealServerAccessStrategyResponse.h>
#include <tencentcloud/dcdb/v20180411/model/OpenDBExtranetAccessRequest.h>
#include <tencentcloud/dcdb/v20180411/model/OpenDBExtranetAccessResponse.h>
#include <tencentcloud/dcdb/v20180411/model/RenewDCDBInstanceRequest.h>
#include <tencentcloud/dcdb/v20180411/model/RenewDCDBInstanceResponse.h>
#include <tencentcloud/dcdb/v20180411/model/ResetAccountPasswordRequest.h>
#include <tencentcloud/dcdb/v20180411/model/ResetAccountPasswordResponse.h>
#include <tencentcloud/dcdb/v20180411/model/SwitchDBInstanceHARequest.h>
#include <tencentcloud/dcdb/v20180411/model/SwitchDBInstanceHAResponse.h>
#include <tencentcloud/dcdb/v20180411/model/TerminateDedicatedDBInstanceRequest.h>
#include <tencentcloud/dcdb/v20180411/model/TerminateDedicatedDBInstanceResponse.h>
#include <tencentcloud/dcdb/v20180411/model/UpgradeDCDBInstanceRequest.h>
#include <tencentcloud/dcdb/v20180411/model/UpgradeDCDBInstanceResponse.h>
#include <tencentcloud/dcdb/v20180411/model/UpgradeDedicatedDCDBInstanceRequest.h>
#include <tencentcloud/dcdb/v20180411/model/UpgradeDedicatedDCDBInstanceResponse.h>
#include <tencentcloud/dcdb/v20180411/model/UpgradeHourDCDBInstanceRequest.h>
#include <tencentcloud/dcdb/v20180411/model/UpgradeHourDCDBInstanceResponse.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            class DcdbClient : public AbstractClient
            {
            public:
                DcdbClient(const Credential &credential, const std::string &region);
                DcdbClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ActiveHourDCDBInstanceResponse> ActiveHourDCDBInstanceOutcome;
                typedef std::future<ActiveHourDCDBInstanceOutcome> ActiveHourDCDBInstanceOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::ActiveHourDCDBInstanceRequest&, ActiveHourDCDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ActiveHourDCDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::AssociateSecurityGroupsResponse> AssociateSecurityGroupsOutcome;
                typedef std::future<AssociateSecurityGroupsOutcome> AssociateSecurityGroupsOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::AssociateSecurityGroupsRequest&, AssociateSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelDcnJobResponse> CancelDcnJobOutcome;
                typedef std::future<CancelDcnJobOutcome> CancelDcnJobOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::CancelDcnJobRequest&, CancelDcnJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelDcnJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelOnlineDDLJobResponse> CancelOnlineDDLJobOutcome;
                typedef std::future<CancelOnlineDDLJobOutcome> CancelOnlineDDLJobOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::CancelOnlineDDLJobRequest&, CancelOnlineDDLJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelOnlineDDLJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CloneAccountResponse> CloneAccountOutcome;
                typedef std::future<CloneAccountOutcome> CloneAccountOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::CloneAccountRequest&, CloneAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloneAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::CloseDBExtranetAccessResponse> CloseDBExtranetAccessOutcome;
                typedef std::future<CloseDBExtranetAccessOutcome> CloseDBExtranetAccessOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::CloseDBExtranetAccessRequest&, CloseDBExtranetAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseDBExtranetAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::CopyAccountPrivilegesResponse> CopyAccountPrivilegesOutcome;
                typedef std::future<CopyAccountPrivilegesOutcome> CopyAccountPrivilegesOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::CopyAccountPrivilegesRequest&, CopyAccountPrivilegesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CopyAccountPrivilegesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAccountResponse> CreateAccountOutcome;
                typedef std::future<CreateAccountOutcome> CreateAccountOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::CreateAccountRequest&, CreateAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDCDBInstanceResponse> CreateDCDBInstanceOutcome;
                typedef std::future<CreateDCDBInstanceOutcome> CreateDCDBInstanceOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::CreateDCDBInstanceRequest&, CreateDCDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDCDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDedicatedClusterDCDBInstanceResponse> CreateDedicatedClusterDCDBInstanceOutcome;
                typedef std::future<CreateDedicatedClusterDCDBInstanceOutcome> CreateDedicatedClusterDCDBInstanceOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::CreateDedicatedClusterDCDBInstanceRequest&, CreateDedicatedClusterDCDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDedicatedClusterDCDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateHourDCDBInstanceResponse> CreateHourDCDBInstanceOutcome;
                typedef std::future<CreateHourDCDBInstanceOutcome> CreateHourDCDBInstanceOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::CreateHourDCDBInstanceRequest&, CreateHourDCDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateHourDCDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOnlineDDLJobResponse> CreateOnlineDDLJobOutcome;
                typedef std::future<CreateOnlineDDLJobOutcome> CreateOnlineDDLJobOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::CreateOnlineDDLJobRequest&, CreateOnlineDDLJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOnlineDDLJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTmpDCDBInstanceResponse> CreateTmpDCDBInstanceOutcome;
                typedef std::future<CreateTmpDCDBInstanceOutcome> CreateTmpDCDBInstanceOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::CreateTmpDCDBInstanceRequest&, CreateTmpDCDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTmpDCDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAccountResponse> DeleteAccountOutcome;
                typedef std::future<DeleteAccountOutcome> DeleteAccountOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DeleteAccountRequest&, DeleteAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccountPrivilegesResponse> DescribeAccountPrivilegesOutcome;
                typedef std::future<DescribeAccountPrivilegesOutcome> DescribeAccountPrivilegesOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeAccountPrivilegesRequest&, DescribeAccountPrivilegesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountPrivilegesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccountsResponse> DescribeAccountsOutcome;
                typedef std::future<DescribeAccountsOutcome> DescribeAccountsOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeAccountsRequest&, DescribeAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupConfigsResponse> DescribeBackupConfigsOutcome;
                typedef std::future<DescribeBackupConfigsOutcome> DescribeBackupConfigsOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeBackupConfigsRequest&, DescribeBackupConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupFilesResponse> DescribeBackupFilesOutcome;
                typedef std::future<DescribeBackupFilesOutcome> DescribeBackupFilesOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeBackupFilesRequest&, DescribeBackupFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBEncryptAttributesResponse> DescribeDBEncryptAttributesOutcome;
                typedef std::future<DescribeDBEncryptAttributesOutcome> DescribeDBEncryptAttributesOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeDBEncryptAttributesRequest&, DescribeDBEncryptAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBEncryptAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBLogFilesResponse> DescribeDBLogFilesOutcome;
                typedef std::future<DescribeDBLogFilesOutcome> DescribeDBLogFilesOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeDBLogFilesRequest&, DescribeDBLogFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBLogFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBParametersResponse> DescribeDBParametersOutcome;
                typedef std::future<DescribeDBParametersOutcome> DescribeDBParametersOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeDBParametersRequest&, DescribeDBParametersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBParametersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBSecurityGroupsResponse> DescribeDBSecurityGroupsOutcome;
                typedef std::future<DescribeDBSecurityGroupsOutcome> DescribeDBSecurityGroupsOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeDBSecurityGroupsRequest&, DescribeDBSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBSlowLogsResponse> DescribeDBSlowLogsOutcome;
                typedef std::future<DescribeDBSlowLogsOutcome> DescribeDBSlowLogsOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeDBSlowLogsRequest&, DescribeDBSlowLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBSlowLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBSyncModeResponse> DescribeDBSyncModeOutcome;
                typedef std::future<DescribeDBSyncModeOutcome> DescribeDBSyncModeOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeDBSyncModeRequest&, DescribeDBSyncModeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBSyncModeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBTmpInstancesResponse> DescribeDBTmpInstancesOutcome;
                typedef std::future<DescribeDBTmpInstancesOutcome> DescribeDBTmpInstancesOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeDBTmpInstancesRequest&, DescribeDBTmpInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBTmpInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDCDBBinlogTimeResponse> DescribeDCDBBinlogTimeOutcome;
                typedef std::future<DescribeDCDBBinlogTimeOutcome> DescribeDCDBBinlogTimeOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeDCDBBinlogTimeRequest&, DescribeDCDBBinlogTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDCDBBinlogTimeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDCDBInstanceDetailResponse> DescribeDCDBInstanceDetailOutcome;
                typedef std::future<DescribeDCDBInstanceDetailOutcome> DescribeDCDBInstanceDetailOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeDCDBInstanceDetailRequest&, DescribeDCDBInstanceDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDCDBInstanceDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDCDBInstanceNodeInfoResponse> DescribeDCDBInstanceNodeInfoOutcome;
                typedef std::future<DescribeDCDBInstanceNodeInfoOutcome> DescribeDCDBInstanceNodeInfoOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeDCDBInstanceNodeInfoRequest&, DescribeDCDBInstanceNodeInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDCDBInstanceNodeInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDCDBInstancesResponse> DescribeDCDBInstancesOutcome;
                typedef std::future<DescribeDCDBInstancesOutcome> DescribeDCDBInstancesOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeDCDBInstancesRequest&, DescribeDCDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDCDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDCDBPriceResponse> DescribeDCDBPriceOutcome;
                typedef std::future<DescribeDCDBPriceOutcome> DescribeDCDBPriceOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeDCDBPriceRequest&, DescribeDCDBPriceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDCDBPriceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDCDBRenewalPriceResponse> DescribeDCDBRenewalPriceOutcome;
                typedef std::future<DescribeDCDBRenewalPriceOutcome> DescribeDCDBRenewalPriceOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeDCDBRenewalPriceRequest&, DescribeDCDBRenewalPriceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDCDBRenewalPriceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDCDBSaleInfoResponse> DescribeDCDBSaleInfoOutcome;
                typedef std::future<DescribeDCDBSaleInfoOutcome> DescribeDCDBSaleInfoOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeDCDBSaleInfoRequest&, DescribeDCDBSaleInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDCDBSaleInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDCDBShardsResponse> DescribeDCDBShardsOutcome;
                typedef std::future<DescribeDCDBShardsOutcome> DescribeDCDBShardsOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeDCDBShardsRequest&, DescribeDCDBShardsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDCDBShardsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDCDBUpgradePriceResponse> DescribeDCDBUpgradePriceOutcome;
                typedef std::future<DescribeDCDBUpgradePriceOutcome> DescribeDCDBUpgradePriceOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeDCDBUpgradePriceRequest&, DescribeDCDBUpgradePriceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDCDBUpgradePriceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatabaseObjectsResponse> DescribeDatabaseObjectsOutcome;
                typedef std::future<DescribeDatabaseObjectsOutcome> DescribeDatabaseObjectsOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeDatabaseObjectsRequest&, DescribeDatabaseObjectsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabaseObjectsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatabaseTableResponse> DescribeDatabaseTableOutcome;
                typedef std::future<DescribeDatabaseTableOutcome> DescribeDatabaseTableOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeDatabaseTableRequest&, DescribeDatabaseTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabaseTableAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatabasesResponse> DescribeDatabasesOutcome;
                typedef std::future<DescribeDatabasesOutcome> DescribeDatabasesOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeDatabasesRequest&, DescribeDatabasesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabasesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDcnDetailResponse> DescribeDcnDetailOutcome;
                typedef std::future<DescribeDcnDetailOutcome> DescribeDcnDetailOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeDcnDetailRequest&, DescribeDcnDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcnDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFileDownloadUrlResponse> DescribeFileDownloadUrlOutcome;
                typedef std::future<DescribeFileDownloadUrlOutcome> DescribeFileDownloadUrlOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeFileDownloadUrlRequest&, DescribeFileDownloadUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFileDownloadUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFlowResponse> DescribeFlowOutcome;
                typedef std::future<DescribeFlowOutcome> DescribeFlowOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeFlowRequest&, DescribeFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogFileRetentionPeriodResponse> DescribeLogFileRetentionPeriodOutcome;
                typedef std::future<DescribeLogFileRetentionPeriodOutcome> DescribeLogFileRetentionPeriodOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeLogFileRetentionPeriodRequest&, DescribeLogFileRetentionPeriodOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogFileRetentionPeriodAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOnlineDDLJobResponse> DescribeOnlineDDLJobOutcome;
                typedef std::future<DescribeOnlineDDLJobOutcome> DescribeOnlineDDLJobOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeOnlineDDLJobRequest&, DescribeOnlineDDLJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOnlineDDLJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrdersResponse> DescribeOrdersOutcome;
                typedef std::future<DescribeOrdersOutcome> DescribeOrdersOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeOrdersRequest&, DescribeOrdersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrdersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProjectSecurityGroupsResponse> DescribeProjectSecurityGroupsOutcome;
                typedef std::future<DescribeProjectSecurityGroupsOutcome> DescribeProjectSecurityGroupsOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeProjectSecurityGroupsRequest&, DescribeProjectSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProjectsResponse> DescribeProjectsOutcome;
                typedef std::future<DescribeProjectsOutcome> DescribeProjectsOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeProjectsRequest&, DescribeProjectsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeShardSpecResponse> DescribeShardSpecOutcome;
                typedef std::future<DescribeShardSpecOutcome> DescribeShardSpecOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeShardSpecRequest&, DescribeShardSpecOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeShardSpecAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserTasksResponse> DescribeUserTasksOutcome;
                typedef std::future<DescribeUserTasksOutcome> DescribeUserTasksOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeUserTasksRequest&, DescribeUserTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyDCDBInstanceResponse> DestroyDCDBInstanceOutcome;
                typedef std::future<DestroyDCDBInstanceOutcome> DestroyDCDBInstanceOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DestroyDCDBInstanceRequest&, DestroyDCDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyDCDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyHourDCDBInstanceResponse> DestroyHourDCDBInstanceOutcome;
                typedef std::future<DestroyHourDCDBInstanceOutcome> DestroyHourDCDBInstanceOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DestroyHourDCDBInstanceRequest&, DestroyHourDCDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyHourDCDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateSecurityGroupsResponse> DisassociateSecurityGroupsOutcome;
                typedef std::future<DisassociateSecurityGroupsOutcome> DisassociateSecurityGroupsOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DisassociateSecurityGroupsRequest&, DisassociateSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::FlushBinlogResponse> FlushBinlogOutcome;
                typedef std::future<FlushBinlogOutcome> FlushBinlogOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::FlushBinlogRequest&, FlushBinlogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FlushBinlogAsyncHandler;
                typedef Outcome<Core::Error, Model::GrantAccountPrivilegesResponse> GrantAccountPrivilegesOutcome;
                typedef std::future<GrantAccountPrivilegesOutcome> GrantAccountPrivilegesOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::GrantAccountPrivilegesRequest&, GrantAccountPrivilegesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GrantAccountPrivilegesAsyncHandler;
                typedef Outcome<Core::Error, Model::InitDCDBInstancesResponse> InitDCDBInstancesOutcome;
                typedef std::future<InitDCDBInstancesOutcome> InitDCDBInstancesOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::InitDCDBInstancesRequest&, InitDCDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InitDCDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::IsolateDCDBInstanceResponse> IsolateDCDBInstanceOutcome;
                typedef std::future<IsolateDCDBInstanceOutcome> IsolateDCDBInstanceOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::IsolateDCDBInstanceRequest&, IsolateDCDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IsolateDCDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::IsolateDedicatedDBInstanceResponse> IsolateDedicatedDBInstanceOutcome;
                typedef std::future<IsolateDedicatedDBInstanceOutcome> IsolateDedicatedDBInstanceOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::IsolateDedicatedDBInstanceRequest&, IsolateDedicatedDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IsolateDedicatedDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::IsolateHourDCDBInstanceResponse> IsolateHourDCDBInstanceOutcome;
                typedef std::future<IsolateHourDCDBInstanceOutcome> IsolateHourDCDBInstanceOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::IsolateHourDCDBInstanceRequest&, IsolateHourDCDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IsolateHourDCDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::KillSessionResponse> KillSessionOutcome;
                typedef std::future<KillSessionOutcome> KillSessionOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::KillSessionRequest&, KillSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> KillSessionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccountConfigResponse> ModifyAccountConfigOutcome;
                typedef std::future<ModifyAccountConfigOutcome> ModifyAccountConfigOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::ModifyAccountConfigRequest&, ModifyAccountConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccountDescriptionResponse> ModifyAccountDescriptionOutcome;
                typedef std::future<ModifyAccountDescriptionOutcome> ModifyAccountDescriptionOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::ModifyAccountDescriptionRequest&, ModifyAccountDescriptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountDescriptionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccountPrivilegesResponse> ModifyAccountPrivilegesOutcome;
                typedef std::future<ModifyAccountPrivilegesOutcome> ModifyAccountPrivilegesOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::ModifyAccountPrivilegesRequest&, ModifyAccountPrivilegesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountPrivilegesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBackupConfigsResponse> ModifyBackupConfigsOutcome;
                typedef std::future<ModifyBackupConfigsOutcome> ModifyBackupConfigsOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::ModifyBackupConfigsRequest&, ModifyBackupConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBEncryptAttributesResponse> ModifyDBEncryptAttributesOutcome;
                typedef std::future<ModifyDBEncryptAttributesOutcome> ModifyDBEncryptAttributesOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::ModifyDBEncryptAttributesRequest&, ModifyDBEncryptAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBEncryptAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceNameResponse> ModifyDBInstanceNameOutcome;
                typedef std::future<ModifyDBInstanceNameOutcome> ModifyDBInstanceNameOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::ModifyDBInstanceNameRequest&, ModifyDBInstanceNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceNameAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceSecurityGroupsResponse> ModifyDBInstanceSecurityGroupsOutcome;
                typedef std::future<ModifyDBInstanceSecurityGroupsOutcome> ModifyDBInstanceSecurityGroupsOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::ModifyDBInstanceSecurityGroupsRequest&, ModifyDBInstanceSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstancesProjectResponse> ModifyDBInstancesProjectOutcome;
                typedef std::future<ModifyDBInstancesProjectOutcome> ModifyDBInstancesProjectOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::ModifyDBInstancesProjectRequest&, ModifyDBInstancesProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstancesProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBParametersResponse> ModifyDBParametersOutcome;
                typedef std::future<ModifyDBParametersOutcome> ModifyDBParametersOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::ModifyDBParametersRequest&, ModifyDBParametersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBParametersAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBSyncModeResponse> ModifyDBSyncModeOutcome;
                typedef std::future<ModifyDBSyncModeOutcome> ModifyDBSyncModeOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::ModifyDBSyncModeRequest&, ModifyDBSyncModeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBSyncModeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceNetworkResponse> ModifyInstanceNetworkOutcome;
                typedef std::future<ModifyInstanceNetworkOutcome> ModifyInstanceNetworkOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::ModifyInstanceNetworkRequest&, ModifyInstanceNetworkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceNetworkAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceVipResponse> ModifyInstanceVipOutcome;
                typedef std::future<ModifyInstanceVipOutcome> ModifyInstanceVipOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::ModifyInstanceVipRequest&, ModifyInstanceVipOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceVipAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceVportResponse> ModifyInstanceVportOutcome;
                typedef std::future<ModifyInstanceVportOutcome> ModifyInstanceVportOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::ModifyInstanceVportRequest&, ModifyInstanceVportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceVportAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRealServerAccessStrategyResponse> ModifyRealServerAccessStrategyOutcome;
                typedef std::future<ModifyRealServerAccessStrategyOutcome> ModifyRealServerAccessStrategyOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::ModifyRealServerAccessStrategyRequest&, ModifyRealServerAccessStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRealServerAccessStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenDBExtranetAccessResponse> OpenDBExtranetAccessOutcome;
                typedef std::future<OpenDBExtranetAccessOutcome> OpenDBExtranetAccessOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::OpenDBExtranetAccessRequest&, OpenDBExtranetAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenDBExtranetAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewDCDBInstanceResponse> RenewDCDBInstanceOutcome;
                typedef std::future<RenewDCDBInstanceOutcome> RenewDCDBInstanceOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::RenewDCDBInstanceRequest&, RenewDCDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewDCDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetAccountPasswordResponse> ResetAccountPasswordOutcome;
                typedef std::future<ResetAccountPasswordOutcome> ResetAccountPasswordOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::ResetAccountPasswordRequest&, ResetAccountPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetAccountPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::SwitchDBInstanceHAResponse> SwitchDBInstanceHAOutcome;
                typedef std::future<SwitchDBInstanceHAOutcome> SwitchDBInstanceHAOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::SwitchDBInstanceHARequest&, SwitchDBInstanceHAOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SwitchDBInstanceHAAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminateDedicatedDBInstanceResponse> TerminateDedicatedDBInstanceOutcome;
                typedef std::future<TerminateDedicatedDBInstanceOutcome> TerminateDedicatedDBInstanceOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::TerminateDedicatedDBInstanceRequest&, TerminateDedicatedDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateDedicatedDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeDCDBInstanceResponse> UpgradeDCDBInstanceOutcome;
                typedef std::future<UpgradeDCDBInstanceOutcome> UpgradeDCDBInstanceOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::UpgradeDCDBInstanceRequest&, UpgradeDCDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDCDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeDedicatedDCDBInstanceResponse> UpgradeDedicatedDCDBInstanceOutcome;
                typedef std::future<UpgradeDedicatedDCDBInstanceOutcome> UpgradeDedicatedDCDBInstanceOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::UpgradeDedicatedDCDBInstanceRequest&, UpgradeDedicatedDCDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDedicatedDCDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeHourDCDBInstanceResponse> UpgradeHourDCDBInstanceOutcome;
                typedef std::future<UpgradeHourDCDBInstanceOutcome> UpgradeHourDCDBInstanceOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::UpgradeHourDCDBInstanceRequest&, UpgradeHourDCDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeHourDCDBInstanceAsyncHandler;



                /**
                 *解隔离TDSQL按量计费实例
                 * @param req ActiveHourDCDBInstanceRequest
                 * @return ActiveHourDCDBInstanceOutcome
                 */
                ActiveHourDCDBInstanceOutcome ActiveHourDCDBInstance(const Model::ActiveHourDCDBInstanceRequest &request);
                void ActiveHourDCDBInstanceAsync(const Model::ActiveHourDCDBInstanceRequest& request, const ActiveHourDCDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ActiveHourDCDBInstanceOutcomeCallable ActiveHourDCDBInstanceCallable(const Model::ActiveHourDCDBInstanceRequest& request);

                /**
                 *本接口 (AssociateSecurityGroups) 用于安全组批量绑定云资源。
                 * @param req AssociateSecurityGroupsRequest
                 * @return AssociateSecurityGroupsOutcome
                 */
                AssociateSecurityGroupsOutcome AssociateSecurityGroups(const Model::AssociateSecurityGroupsRequest &request);
                void AssociateSecurityGroupsAsync(const Model::AssociateSecurityGroupsRequest& request, const AssociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateSecurityGroupsOutcomeCallable AssociateSecurityGroupsCallable(const Model::AssociateSecurityGroupsRequest& request);

                /**
                 *本接口（CancelDcnJob）用于取消DCN同步
                 * @param req CancelDcnJobRequest
                 * @return CancelDcnJobOutcome
                 */
                CancelDcnJobOutcome CancelDcnJob(const Model::CancelDcnJobRequest &request);
                void CancelDcnJobAsync(const Model::CancelDcnJobRequest& request, const CancelDcnJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelDcnJobOutcomeCallable CancelDcnJobCallable(const Model::CancelDcnJobRequest& request);

                /**
                 *取消 Online DDL 任务
                 * @param req CancelOnlineDDLJobRequest
                 * @return CancelOnlineDDLJobOutcome
                 */
                CancelOnlineDDLJobOutcome CancelOnlineDDLJob(const Model::CancelOnlineDDLJobRequest &request);
                void CancelOnlineDDLJobAsync(const Model::CancelOnlineDDLJobRequest& request, const CancelOnlineDDLJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelOnlineDDLJobOutcomeCallable CancelOnlineDDLJobCallable(const Model::CancelOnlineDDLJobRequest& request);

                /**
                 *本接口（CloneAccount）用于克隆实例账户。
                 * @param req CloneAccountRequest
                 * @return CloneAccountOutcome
                 */
                CloneAccountOutcome CloneAccount(const Model::CloneAccountRequest &request);
                void CloneAccountAsync(const Model::CloneAccountRequest& request, const CloneAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloneAccountOutcomeCallable CloneAccountCallable(const Model::CloneAccountRequest& request);

                /**
                 *本接口(CloseDBExtranetAccess)用于关闭云数据库实例的外网访问。关闭外网访问后，外网地址将不可访问，查询实例列表接口将不返回对应实例的外网域名和端口信息。
                 * @param req CloseDBExtranetAccessRequest
                 * @return CloseDBExtranetAccessOutcome
                 */
                CloseDBExtranetAccessOutcome CloseDBExtranetAccess(const Model::CloseDBExtranetAccessRequest &request);
                void CloseDBExtranetAccessAsync(const Model::CloseDBExtranetAccessRequest& request, const CloseDBExtranetAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloseDBExtranetAccessOutcomeCallable CloseDBExtranetAccessCallable(const Model::CloseDBExtranetAccessRequest& request);

                /**
                 *本接口（CopyAccountPrivileges）用于复制云数据库账号的权限。
注意：相同用户名，不同Host是不同的账号，Readonly属性相同的账号之间才能复制权限。
                 * @param req CopyAccountPrivilegesRequest
                 * @return CopyAccountPrivilegesOutcome
                 */
                CopyAccountPrivilegesOutcome CopyAccountPrivileges(const Model::CopyAccountPrivilegesRequest &request);
                void CopyAccountPrivilegesAsync(const Model::CopyAccountPrivilegesRequest& request, const CopyAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CopyAccountPrivilegesOutcomeCallable CopyAccountPrivilegesCallable(const Model::CopyAccountPrivilegesRequest& request);

                /**
                 *本接口（CreateAccount）用于创建云数据库账号。一个实例可以创建多个不同的账号，相同的用户名+不同的host是不同的账号。
                 * @param req CreateAccountRequest
                 * @return CreateAccountOutcome
                 */
                CreateAccountOutcome CreateAccount(const Model::CreateAccountRequest &request);
                void CreateAccountAsync(const Model::CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAccountOutcomeCallable CreateAccountCallable(const Model::CreateAccountRequest& request);

                /**
                 *本接口（CreateDCDBInstance）用于创建包年包月的TDSQL实例，可通过传入实例规格、数据库版本号、购买时长等信息创建云数据库实例。
                 * @param req CreateDCDBInstanceRequest
                 * @return CreateDCDBInstanceOutcome
                 */
                CreateDCDBInstanceOutcome CreateDCDBInstance(const Model::CreateDCDBInstanceRequest &request);
                void CreateDCDBInstanceAsync(const Model::CreateDCDBInstanceRequest& request, const CreateDCDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDCDBInstanceOutcomeCallable CreateDCDBInstanceCallable(const Model::CreateDCDBInstanceRequest& request);

                /**
                 *创建TDSQL独享集群实例
                 * @param req CreateDedicatedClusterDCDBInstanceRequest
                 * @return CreateDedicatedClusterDCDBInstanceOutcome
                 */
                CreateDedicatedClusterDCDBInstanceOutcome CreateDedicatedClusterDCDBInstance(const Model::CreateDedicatedClusterDCDBInstanceRequest &request);
                void CreateDedicatedClusterDCDBInstanceAsync(const Model::CreateDedicatedClusterDCDBInstanceRequest& request, const CreateDedicatedClusterDCDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDedicatedClusterDCDBInstanceOutcomeCallable CreateDedicatedClusterDCDBInstanceCallable(const Model::CreateDedicatedClusterDCDBInstanceRequest& request);

                /**
                 *创建TDSQL按量计费实例
                 * @param req CreateHourDCDBInstanceRequest
                 * @return CreateHourDCDBInstanceOutcome
                 */
                CreateHourDCDBInstanceOutcome CreateHourDCDBInstance(const Model::CreateHourDCDBInstanceRequest &request);
                void CreateHourDCDBInstanceAsync(const Model::CreateHourDCDBInstanceRequest& request, const CreateHourDCDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateHourDCDBInstanceOutcomeCallable CreateHourDCDBInstanceCallable(const Model::CreateHourDCDBInstanceRequest& request);

                /**
                 *创建在线DDL任务
                 * @param req CreateOnlineDDLJobRequest
                 * @return CreateOnlineDDLJobOutcome
                 */
                CreateOnlineDDLJobOutcome CreateOnlineDDLJob(const Model::CreateOnlineDDLJobRequest &request);
                void CreateOnlineDDLJobAsync(const Model::CreateOnlineDDLJobRequest& request, const CreateOnlineDDLJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOnlineDDLJobOutcomeCallable CreateOnlineDDLJobCallable(const Model::CreateOnlineDDLJobRequest& request);

                /**
                 *回档TDSQL实例
                 * @param req CreateTmpDCDBInstanceRequest
                 * @return CreateTmpDCDBInstanceOutcome
                 */
                CreateTmpDCDBInstanceOutcome CreateTmpDCDBInstance(const Model::CreateTmpDCDBInstanceRequest &request);
                void CreateTmpDCDBInstanceAsync(const Model::CreateTmpDCDBInstanceRequest& request, const CreateTmpDCDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTmpDCDBInstanceOutcomeCallable CreateTmpDCDBInstanceCallable(const Model::CreateTmpDCDBInstanceRequest& request);

                /**
                 *本接口（DeleteAccount）用于删除云数据库账号。用户名+host唯一确定一个账号。
                 * @param req DeleteAccountRequest
                 * @return DeleteAccountOutcome
                 */
                DeleteAccountOutcome DeleteAccount(const Model::DeleteAccountRequest &request);
                void DeleteAccountAsync(const Model::DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAccountOutcomeCallable DeleteAccountCallable(const Model::DeleteAccountRequest& request);

                /**
                 *本接口（DescribeAccountPrivileges）用于查询云数据库账号权限。
注意：注意：相同用户名，不同Host是不同的账号。
                 * @param req DescribeAccountPrivilegesRequest
                 * @return DescribeAccountPrivilegesOutcome
                 */
                DescribeAccountPrivilegesOutcome DescribeAccountPrivileges(const Model::DescribeAccountPrivilegesRequest &request);
                void DescribeAccountPrivilegesAsync(const Model::DescribeAccountPrivilegesRequest& request, const DescribeAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountPrivilegesOutcomeCallable DescribeAccountPrivilegesCallable(const Model::DescribeAccountPrivilegesRequest& request);

                /**
                 *本接口（DescribeAccounts）用于查询指定云数据库实例的账号列表。
                 * @param req DescribeAccountsRequest
                 * @return DescribeAccountsOutcome
                 */
                DescribeAccountsOutcome DescribeAccounts(const Model::DescribeAccountsRequest &request);
                void DescribeAccountsAsync(const Model::DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountsOutcomeCallable DescribeAccountsCallable(const Model::DescribeAccountsRequest& request);

                /**
                 *本接口(DescribeBackupConfigs)用于查询数据库备份配置信息。
                 * @param req DescribeBackupConfigsRequest
                 * @return DescribeBackupConfigsOutcome
                 */
                DescribeBackupConfigsOutcome DescribeBackupConfigs(const Model::DescribeBackupConfigsRequest &request);
                void DescribeBackupConfigsAsync(const Model::DescribeBackupConfigsRequest& request, const DescribeBackupConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupConfigsOutcomeCallable DescribeBackupConfigsCallable(const Model::DescribeBackupConfigsRequest& request);

                /**
                 *本接口(DescribeBackupFiles)用于查看备份文件列表。
                 * @param req DescribeBackupFilesRequest
                 * @return DescribeBackupFilesOutcome
                 */
                DescribeBackupFilesOutcome DescribeBackupFiles(const Model::DescribeBackupFilesRequest &request);
                void DescribeBackupFilesAsync(const Model::DescribeBackupFilesRequest& request, const DescribeBackupFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupFilesOutcomeCallable DescribeBackupFilesCallable(const Model::DescribeBackupFilesRequest& request);

                /**
                 *本接口(DescribeDBEncryptAttributes)用于查询实例数据加密状态。
                 * @param req DescribeDBEncryptAttributesRequest
                 * @return DescribeDBEncryptAttributesOutcome
                 */
                DescribeDBEncryptAttributesOutcome DescribeDBEncryptAttributes(const Model::DescribeDBEncryptAttributesRequest &request);
                void DescribeDBEncryptAttributesAsync(const Model::DescribeDBEncryptAttributesRequest& request, const DescribeDBEncryptAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBEncryptAttributesOutcomeCallable DescribeDBEncryptAttributesCallable(const Model::DescribeDBEncryptAttributesRequest& request);

                /**
                 *本接口(DescribeDBLogFiles)用于获取数据库的各种日志列表，包括冷备、binlog、errlog和slowlog。
                 * @param req DescribeDBLogFilesRequest
                 * @return DescribeDBLogFilesOutcome
                 */
                DescribeDBLogFilesOutcome DescribeDBLogFiles(const Model::DescribeDBLogFilesRequest &request);
                void DescribeDBLogFilesAsync(const Model::DescribeDBLogFilesRequest& request, const DescribeDBLogFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBLogFilesOutcomeCallable DescribeDBLogFilesCallable(const Model::DescribeDBLogFilesRequest& request);

                /**
                 *本接口(DescribeDBParameters)用于获取数据库的当前参数设置。
                 * @param req DescribeDBParametersRequest
                 * @return DescribeDBParametersOutcome
                 */
                DescribeDBParametersOutcome DescribeDBParameters(const Model::DescribeDBParametersRequest &request);
                void DescribeDBParametersAsync(const Model::DescribeDBParametersRequest& request, const DescribeDBParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBParametersOutcomeCallable DescribeDBParametersCallable(const Model::DescribeDBParametersRequest& request);

                /**
                 *本接口（DescribeDBSecurityGroups）用于查询实例安全组信息
                 * @param req DescribeDBSecurityGroupsRequest
                 * @return DescribeDBSecurityGroupsOutcome
                 */
                DescribeDBSecurityGroupsOutcome DescribeDBSecurityGroups(const Model::DescribeDBSecurityGroupsRequest &request);
                void DescribeDBSecurityGroupsAsync(const Model::DescribeDBSecurityGroupsRequest& request, const DescribeDBSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBSecurityGroupsOutcomeCallable DescribeDBSecurityGroupsCallable(const Model::DescribeDBSecurityGroupsRequest& request);

                /**
                 *本接口(DescribeDBSlowLogs)用于查询慢查询日志列表。
                 * @param req DescribeDBSlowLogsRequest
                 * @return DescribeDBSlowLogsOutcome
                 */
                DescribeDBSlowLogsOutcome DescribeDBSlowLogs(const Model::DescribeDBSlowLogsRequest &request);
                void DescribeDBSlowLogsAsync(const Model::DescribeDBSlowLogsRequest& request, const DescribeDBSlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBSlowLogsOutcomeCallable DescribeDBSlowLogsCallable(const Model::DescribeDBSlowLogsRequest& request);

                /**
                 *本接口（DescribeDBSyncMode）用于查询云数据库实例的同步模式。
                 * @param req DescribeDBSyncModeRequest
                 * @return DescribeDBSyncModeOutcome
                 */
                DescribeDBSyncModeOutcome DescribeDBSyncMode(const Model::DescribeDBSyncModeRequest &request);
                void DescribeDBSyncModeAsync(const Model::DescribeDBSyncModeRequest& request, const DescribeDBSyncModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBSyncModeOutcomeCallable DescribeDBSyncModeCallable(const Model::DescribeDBSyncModeRequest& request);

                /**
                 *本接口（DescribeDBTmpInstances）用于获取实例回档生成的临时实例
                 * @param req DescribeDBTmpInstancesRequest
                 * @return DescribeDBTmpInstancesOutcome
                 */
                DescribeDBTmpInstancesOutcome DescribeDBTmpInstances(const Model::DescribeDBTmpInstancesRequest &request);
                void DescribeDBTmpInstancesAsync(const Model::DescribeDBTmpInstancesRequest& request, const DescribeDBTmpInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBTmpInstancesOutcomeCallable DescribeDBTmpInstancesCallable(const Model::DescribeDBTmpInstancesRequest& request);

                /**
                 *获取实例回档时可选的时间范围
                 * @param req DescribeDCDBBinlogTimeRequest
                 * @return DescribeDCDBBinlogTimeOutcome
                 */
                DescribeDCDBBinlogTimeOutcome DescribeDCDBBinlogTime(const Model::DescribeDCDBBinlogTimeRequest &request);
                void DescribeDCDBBinlogTimeAsync(const Model::DescribeDCDBBinlogTimeRequest& request, const DescribeDCDBBinlogTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDCDBBinlogTimeOutcomeCallable DescribeDCDBBinlogTimeCallable(const Model::DescribeDCDBBinlogTimeRequest& request);

                /**
                 *本接口（DescribeDCDBInstanceDetail）用于获取TDSQL实例详情
                 * @param req DescribeDCDBInstanceDetailRequest
                 * @return DescribeDCDBInstanceDetailOutcome
                 */
                DescribeDCDBInstanceDetailOutcome DescribeDCDBInstanceDetail(const Model::DescribeDCDBInstanceDetailRequest &request);
                void DescribeDCDBInstanceDetailAsync(const Model::DescribeDCDBInstanceDetailRequest& request, const DescribeDCDBInstanceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDCDBInstanceDetailOutcomeCallable DescribeDCDBInstanceDetailCallable(const Model::DescribeDCDBInstanceDetailRequest& request);

                /**
                 *本接口（DescribeDCDBInstanceNodeInfo）用于获取实例节点信息
                 * @param req DescribeDCDBInstanceNodeInfoRequest
                 * @return DescribeDCDBInstanceNodeInfoOutcome
                 */
                DescribeDCDBInstanceNodeInfoOutcome DescribeDCDBInstanceNodeInfo(const Model::DescribeDCDBInstanceNodeInfoRequest &request);
                void DescribeDCDBInstanceNodeInfoAsync(const Model::DescribeDCDBInstanceNodeInfoRequest& request, const DescribeDCDBInstanceNodeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDCDBInstanceNodeInfoOutcomeCallable DescribeDCDBInstanceNodeInfoCallable(const Model::DescribeDCDBInstanceNodeInfoRequest& request);

                /**
                 *查询云数据库实例列表，支持通过项目ID、实例ID、内网地址、实例名称等来筛选实例。
如果不指定任何筛选条件，则默认返回10条实例记录，单次请求最多支持返回100条实例记录。
                 * @param req DescribeDCDBInstancesRequest
                 * @return DescribeDCDBInstancesOutcome
                 */
                DescribeDCDBInstancesOutcome DescribeDCDBInstances(const Model::DescribeDCDBInstancesRequest &request);
                void DescribeDCDBInstancesAsync(const Model::DescribeDCDBInstancesRequest& request, const DescribeDCDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDCDBInstancesOutcomeCallable DescribeDCDBInstancesCallable(const Model::DescribeDCDBInstancesRequest& request);

                /**
                 *本接口（DescribeDCDBPrice）用于在购买实例前，查询实例的价格。
                 * @param req DescribeDCDBPriceRequest
                 * @return DescribeDCDBPriceOutcome
                 */
                DescribeDCDBPriceOutcome DescribeDCDBPrice(const Model::DescribeDCDBPriceRequest &request);
                void DescribeDCDBPriceAsync(const Model::DescribeDCDBPriceRequest& request, const DescribeDCDBPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDCDBPriceOutcomeCallable DescribeDCDBPriceCallable(const Model::DescribeDCDBPriceRequest& request);

                /**
                 *本接口（DescribeDCDBRenewalPrice）用于在续费分布式数据库实例时，查询续费的价格。
                 * @param req DescribeDCDBRenewalPriceRequest
                 * @return DescribeDCDBRenewalPriceOutcome
                 */
                DescribeDCDBRenewalPriceOutcome DescribeDCDBRenewalPrice(const Model::DescribeDCDBRenewalPriceRequest &request);
                void DescribeDCDBRenewalPriceAsync(const Model::DescribeDCDBRenewalPriceRequest& request, const DescribeDCDBRenewalPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDCDBRenewalPriceOutcomeCallable DescribeDCDBRenewalPriceCallable(const Model::DescribeDCDBRenewalPriceRequest& request);

                /**
                 *本接口(DescribeDCDBSaleInfo)用于查询分布式数据库可售卖的地域和可用区信息。
                 * @param req DescribeDCDBSaleInfoRequest
                 * @return DescribeDCDBSaleInfoOutcome
                 */
                DescribeDCDBSaleInfoOutcome DescribeDCDBSaleInfo(const Model::DescribeDCDBSaleInfoRequest &request);
                void DescribeDCDBSaleInfoAsync(const Model::DescribeDCDBSaleInfoRequest& request, const DescribeDCDBSaleInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDCDBSaleInfoOutcomeCallable DescribeDCDBSaleInfoCallable(const Model::DescribeDCDBSaleInfoRequest& request);

                /**
                 *本接口（DescribeDCDBShards）用于查询云数据库实例的分片信息。
                 * @param req DescribeDCDBShardsRequest
                 * @return DescribeDCDBShardsOutcome
                 */
                DescribeDCDBShardsOutcome DescribeDCDBShards(const Model::DescribeDCDBShardsRequest &request);
                void DescribeDCDBShardsAsync(const Model::DescribeDCDBShardsRequest& request, const DescribeDCDBShardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDCDBShardsOutcomeCallable DescribeDCDBShardsCallable(const Model::DescribeDCDBShardsRequest& request);

                /**
                 *本接口（DescribeDCDBUpgradePrice）用于查询变配分布式数据库实例价格。
                 * @param req DescribeDCDBUpgradePriceRequest
                 * @return DescribeDCDBUpgradePriceOutcome
                 */
                DescribeDCDBUpgradePriceOutcome DescribeDCDBUpgradePrice(const Model::DescribeDCDBUpgradePriceRequest &request);
                void DescribeDCDBUpgradePriceAsync(const Model::DescribeDCDBUpgradePriceRequest& request, const DescribeDCDBUpgradePriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDCDBUpgradePriceOutcomeCallable DescribeDCDBUpgradePriceCallable(const Model::DescribeDCDBUpgradePriceRequest& request);

                /**
                 *本接口（DescribeDatabaseObjects）用于查询云数据库实例的数据库中的对象列表，包含表、存储过程、视图和函数。
                 * @param req DescribeDatabaseObjectsRequest
                 * @return DescribeDatabaseObjectsOutcome
                 */
                DescribeDatabaseObjectsOutcome DescribeDatabaseObjects(const Model::DescribeDatabaseObjectsRequest &request);
                void DescribeDatabaseObjectsAsync(const Model::DescribeDatabaseObjectsRequest& request, const DescribeDatabaseObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatabaseObjectsOutcomeCallable DescribeDatabaseObjectsCallable(const Model::DescribeDatabaseObjectsRequest& request);

                /**
                 *本接口（DescribeDatabaseTable）用于查询云数据库实例的表信息。
                 * @param req DescribeDatabaseTableRequest
                 * @return DescribeDatabaseTableOutcome
                 */
                DescribeDatabaseTableOutcome DescribeDatabaseTable(const Model::DescribeDatabaseTableRequest &request);
                void DescribeDatabaseTableAsync(const Model::DescribeDatabaseTableRequest& request, const DescribeDatabaseTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatabaseTableOutcomeCallable DescribeDatabaseTableCallable(const Model::DescribeDatabaseTableRequest& request);

                /**
                 *本接口（DescribeDatabases）用于查询云数据库实例的数据库列表。
                 * @param req DescribeDatabasesRequest
                 * @return DescribeDatabasesOutcome
                 */
                DescribeDatabasesOutcome DescribeDatabases(const Model::DescribeDatabasesRequest &request);
                void DescribeDatabasesAsync(const Model::DescribeDatabasesRequest& request, const DescribeDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatabasesOutcomeCallable DescribeDatabasesCallable(const Model::DescribeDatabasesRequest& request);

                /**
                 *获取实例灾备详情
                 * @param req DescribeDcnDetailRequest
                 * @return DescribeDcnDetailOutcome
                 */
                DescribeDcnDetailOutcome DescribeDcnDetail(const Model::DescribeDcnDetailRequest &request);
                void DescribeDcnDetailAsync(const Model::DescribeDcnDetailRequest& request, const DescribeDcnDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDcnDetailOutcomeCallable DescribeDcnDetailCallable(const Model::DescribeDcnDetailRequest& request);

                /**
                 *本接口(DescribeFileDownloadUrl)用于获取数据库指定备份或日志文件的下载连接。
                 * @param req DescribeFileDownloadUrlRequest
                 * @return DescribeFileDownloadUrlOutcome
                 */
                DescribeFileDownloadUrlOutcome DescribeFileDownloadUrl(const Model::DescribeFileDownloadUrlRequest &request);
                void DescribeFileDownloadUrlAsync(const Model::DescribeFileDownloadUrlRequest& request, const DescribeFileDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFileDownloadUrlOutcomeCallable DescribeFileDownloadUrlCallable(const Model::DescribeFileDownloadUrlRequest& request);

                /**
                 *本接口（DescribeFlow）用于查询流程状态
                 * @param req DescribeFlowRequest
                 * @return DescribeFlowOutcome
                 */
                DescribeFlowOutcome DescribeFlow(const Model::DescribeFlowRequest &request);
                void DescribeFlowAsync(const Model::DescribeFlowRequest& request, const DescribeFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlowOutcomeCallable DescribeFlowCallable(const Model::DescribeFlowRequest& request);

                /**
                 *本接口(DescribeLogFileRetentionPeriod)用于查看数据库备份日志的备份天数的设置情况。
                 * @param req DescribeLogFileRetentionPeriodRequest
                 * @return DescribeLogFileRetentionPeriodOutcome
                 */
                DescribeLogFileRetentionPeriodOutcome DescribeLogFileRetentionPeriod(const Model::DescribeLogFileRetentionPeriodRequest &request);
                void DescribeLogFileRetentionPeriodAsync(const Model::DescribeLogFileRetentionPeriodRequest& request, const DescribeLogFileRetentionPeriodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogFileRetentionPeriodOutcomeCallable DescribeLogFileRetentionPeriodCallable(const Model::DescribeLogFileRetentionPeriodRequest& request);

                /**
                 *查询Online DDL 任务详情
                 * @param req DescribeOnlineDDLJobRequest
                 * @return DescribeOnlineDDLJobOutcome
                 */
                DescribeOnlineDDLJobOutcome DescribeOnlineDDLJob(const Model::DescribeOnlineDDLJobRequest &request);
                void DescribeOnlineDDLJobAsync(const Model::DescribeOnlineDDLJobRequest& request, const DescribeOnlineDDLJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOnlineDDLJobOutcomeCallable DescribeOnlineDDLJobCallable(const Model::DescribeOnlineDDLJobRequest& request);

                /**
                 *本接口（DescribeOrders）用于查询分布式数据库订单信息。传入订单ID来查询订单关联的分布式数据库实例，和对应的任务流程ID。
                 * @param req DescribeOrdersRequest
                 * @return DescribeOrdersOutcome
                 */
                DescribeOrdersOutcome DescribeOrders(const Model::DescribeOrdersRequest &request);
                void DescribeOrdersAsync(const Model::DescribeOrdersRequest& request, const DescribeOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrdersOutcomeCallable DescribeOrdersCallable(const Model::DescribeOrdersRequest& request);

                /**
                 *本接口（DescribeProjectSecurityGroups）用于查询项目安全组信息
                 * @param req DescribeProjectSecurityGroupsRequest
                 * @return DescribeProjectSecurityGroupsOutcome
                 */
                DescribeProjectSecurityGroupsOutcome DescribeProjectSecurityGroups(const Model::DescribeProjectSecurityGroupsRequest &request);
                void DescribeProjectSecurityGroupsAsync(const Model::DescribeProjectSecurityGroupsRequest& request, const DescribeProjectSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProjectSecurityGroupsOutcomeCallable DescribeProjectSecurityGroupsCallable(const Model::DescribeProjectSecurityGroupsRequest& request);

                /**
                 *本接口（DescribeProjects）用于查询项目列表
                 * @param req DescribeProjectsRequest
                 * @return DescribeProjectsOutcome
                 */
                DescribeProjectsOutcome DescribeProjects(const Model::DescribeProjectsRequest &request);
                void DescribeProjectsAsync(const Model::DescribeProjectsRequest& request, const DescribeProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProjectsOutcomeCallable DescribeProjectsCallable(const Model::DescribeProjectsRequest& request);

                /**
                 *查询可创建的分布式数据库可售卖的分片规格配置。
                 * @param req DescribeShardSpecRequest
                 * @return DescribeShardSpecOutcome
                 */
                DescribeShardSpecOutcome DescribeShardSpec(const Model::DescribeShardSpecRequest &request);
                void DescribeShardSpecAsync(const Model::DescribeShardSpecRequest& request, const DescribeShardSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeShardSpecOutcomeCallable DescribeShardSpecCallable(const Model::DescribeShardSpecRequest& request);

                /**
                 *本接口（DescribeUserTasks）用于拉取用户任务列表
                 * @param req DescribeUserTasksRequest
                 * @return DescribeUserTasksOutcome
                 */
                DescribeUserTasksOutcome DescribeUserTasks(const Model::DescribeUserTasksRequest &request);
                void DescribeUserTasksAsync(const Model::DescribeUserTasksRequest& request, const DescribeUserTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserTasksOutcomeCallable DescribeUserTasksCallable(const Model::DescribeUserTasksRequest& request);

                /**
                 *本接口(DestroyDCDBInstance)用于销毁已隔离的TDSQL包年包月实例。
                 * @param req DestroyDCDBInstanceRequest
                 * @return DestroyDCDBInstanceOutcome
                 */
                DestroyDCDBInstanceOutcome DestroyDCDBInstance(const Model::DestroyDCDBInstanceRequest &request);
                void DestroyDCDBInstanceAsync(const Model::DestroyDCDBInstanceRequest& request, const DestroyDCDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyDCDBInstanceOutcomeCallable DestroyDCDBInstanceCallable(const Model::DestroyDCDBInstanceRequest& request);

                /**
                 *本接口（DestroyHourDCDBInstance）用于TDSQL销毁按量计费实例。
                 * @param req DestroyHourDCDBInstanceRequest
                 * @return DestroyHourDCDBInstanceOutcome
                 */
                DestroyHourDCDBInstanceOutcome DestroyHourDCDBInstance(const Model::DestroyHourDCDBInstanceRequest &request);
                void DestroyHourDCDBInstanceAsync(const Model::DestroyHourDCDBInstanceRequest& request, const DestroyHourDCDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyHourDCDBInstanceOutcomeCallable DestroyHourDCDBInstanceCallable(const Model::DestroyHourDCDBInstanceRequest& request);

                /**
                 *本接口(DisassociateSecurityGroups)用于安全组批量解绑实例。
                 * @param req DisassociateSecurityGroupsRequest
                 * @return DisassociateSecurityGroupsOutcome
                 */
                DisassociateSecurityGroupsOutcome DisassociateSecurityGroups(const Model::DisassociateSecurityGroupsRequest &request);
                void DisassociateSecurityGroupsAsync(const Model::DisassociateSecurityGroupsRequest& request, const DisassociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateSecurityGroupsOutcomeCallable DisassociateSecurityGroupsCallable(const Model::DisassociateSecurityGroupsRequest& request);

                /**
                 *相当于在所有分片的mysqld中执行flush logs，完成切分的binlog将展示在各个分片控制台binlog列表里。
                 * @param req FlushBinlogRequest
                 * @return FlushBinlogOutcome
                 */
                FlushBinlogOutcome FlushBinlog(const Model::FlushBinlogRequest &request);
                void FlushBinlogAsync(const Model::FlushBinlogRequest& request, const FlushBinlogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FlushBinlogOutcomeCallable FlushBinlogCallable(const Model::FlushBinlogRequest& request);

                /**
                 *本接口（GrantAccountPrivileges）用于给云数据库账号赋权。
注意：相同用户名，不同Host是不同的账号。
                 * @param req GrantAccountPrivilegesRequest
                 * @return GrantAccountPrivilegesOutcome
                 */
                GrantAccountPrivilegesOutcome GrantAccountPrivileges(const Model::GrantAccountPrivilegesRequest &request);
                void GrantAccountPrivilegesAsync(const Model::GrantAccountPrivilegesRequest& request, const GrantAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GrantAccountPrivilegesOutcomeCallable GrantAccountPrivilegesCallable(const Model::GrantAccountPrivilegesRequest& request);

                /**
                 *本接口(InitDCDBInstances)用于初始化云数据库实例，包括设置默认字符集、表名大小写敏感等。
                 * @param req InitDCDBInstancesRequest
                 * @return InitDCDBInstancesOutcome
                 */
                InitDCDBInstancesOutcome InitDCDBInstances(const Model::InitDCDBInstancesRequest &request);
                void InitDCDBInstancesAsync(const Model::InitDCDBInstancesRequest& request, const InitDCDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InitDCDBInstancesOutcomeCallable InitDCDBInstancesCallable(const Model::InitDCDBInstancesRequest& request);

                /**
                 *本接口(IsolateDCDBInstance)用于隔离分布式数据库TDSQL实例（包年包月），隔离后不能通过IP和端口访问数据库。隔离的实例可在回收站中进行开机。若为欠费隔离，请尽快进行充值。
                 * @param req IsolateDCDBInstanceRequest
                 * @return IsolateDCDBInstanceOutcome
                 */
                IsolateDCDBInstanceOutcome IsolateDCDBInstance(const Model::IsolateDCDBInstanceRequest &request);
                void IsolateDCDBInstanceAsync(const Model::IsolateDCDBInstanceRequest& request, const IsolateDCDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IsolateDCDBInstanceOutcomeCallable IsolateDCDBInstanceCallable(const Model::IsolateDCDBInstanceRequest& request);

                /**
                 *本接口（IsolateDedicatedDBInstance）用于隔离独享云数据库实例。
                 * @param req IsolateDedicatedDBInstanceRequest
                 * @return IsolateDedicatedDBInstanceOutcome
                 */
                IsolateDedicatedDBInstanceOutcome IsolateDedicatedDBInstance(const Model::IsolateDedicatedDBInstanceRequest &request);
                void IsolateDedicatedDBInstanceAsync(const Model::IsolateDedicatedDBInstanceRequest& request, const IsolateDedicatedDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IsolateDedicatedDBInstanceOutcomeCallable IsolateDedicatedDBInstanceCallable(const Model::IsolateDedicatedDBInstanceRequest& request);

                /**
                 *隔离TDSQL按量计费实例
                 * @param req IsolateHourDCDBInstanceRequest
                 * @return IsolateHourDCDBInstanceOutcome
                 */
                IsolateHourDCDBInstanceOutcome IsolateHourDCDBInstance(const Model::IsolateHourDCDBInstanceRequest &request);
                void IsolateHourDCDBInstanceAsync(const Model::IsolateHourDCDBInstanceRequest& request, const IsolateHourDCDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IsolateHourDCDBInstanceOutcomeCallable IsolateHourDCDBInstanceCallable(const Model::IsolateHourDCDBInstanceRequest& request);

                /**
                 *本接口（KillSession）用于杀死指定会话。
                 * @param req KillSessionRequest
                 * @return KillSessionOutcome
                 */
                KillSessionOutcome KillSession(const Model::KillSessionRequest &request);
                void KillSessionAsync(const Model::KillSessionRequest& request, const KillSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                KillSessionOutcomeCallable KillSessionCallable(const Model::KillSessionRequest& request);

                /**
                 *修改账号的一些配置，比如 max_user_connections
                 * @param req ModifyAccountConfigRequest
                 * @return ModifyAccountConfigOutcome
                 */
                ModifyAccountConfigOutcome ModifyAccountConfig(const Model::ModifyAccountConfigRequest &request);
                void ModifyAccountConfigAsync(const Model::ModifyAccountConfigRequest& request, const ModifyAccountConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccountConfigOutcomeCallable ModifyAccountConfigCallable(const Model::ModifyAccountConfigRequest& request);

                /**
                 *本接口（ModifyAccountDescription）用于修改云数据库账号备注。
注意：相同用户名，不同Host是不同的账号。
                 * @param req ModifyAccountDescriptionRequest
                 * @return ModifyAccountDescriptionOutcome
                 */
                ModifyAccountDescriptionOutcome ModifyAccountDescription(const Model::ModifyAccountDescriptionRequest &request);
                void ModifyAccountDescriptionAsync(const Model::ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccountDescriptionOutcomeCallable ModifyAccountDescriptionCallable(const Model::ModifyAccountDescriptionRequest& request);

                /**
                 *本接口(ModifyAccountPrivileges)用于修改云数据库的账户的权限信息。

**注意**
- 系统保留库："mysql"，只开放["SELECT"]权限
- 只读账号授予读写权限会报错
- 不传权限参数表示保留现有权限，如需清除，请在复杂类型Privileges字段传空数组
                 * @param req ModifyAccountPrivilegesRequest
                 * @return ModifyAccountPrivilegesOutcome
                 */
                ModifyAccountPrivilegesOutcome ModifyAccountPrivileges(const Model::ModifyAccountPrivilegesRequest &request);
                void ModifyAccountPrivilegesAsync(const Model::ModifyAccountPrivilegesRequest& request, const ModifyAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccountPrivilegesOutcomeCallable ModifyAccountPrivilegesCallable(const Model::ModifyAccountPrivilegesRequest& request);

                /**
                 *本接口(ModifyBackupConfigs)用于修改数据库备份配置信息。

1. 修改数据库超期备份配置，目前按年、按月、按日只支持一种，存在互斥关系，如当前策略按年备份，如果传入按月备份策略将会覆盖当前的按年备份策略，务必注意。
                 * @param req ModifyBackupConfigsRequest
                 * @return ModifyBackupConfigsOutcome
                 */
                ModifyBackupConfigsOutcome ModifyBackupConfigs(const Model::ModifyBackupConfigsRequest &request);
                void ModifyBackupConfigsAsync(const Model::ModifyBackupConfigsRequest& request, const ModifyBackupConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBackupConfigsOutcomeCallable ModifyBackupConfigsCallable(const Model::ModifyBackupConfigsRequest& request);

                /**
                 *本接口(ModifyDBEncryptAttributes)用于修改实例数据加密。
                 * @param req ModifyDBEncryptAttributesRequest
                 * @return ModifyDBEncryptAttributesOutcome
                 */
                ModifyDBEncryptAttributesOutcome ModifyDBEncryptAttributes(const Model::ModifyDBEncryptAttributesRequest &request);
                void ModifyDBEncryptAttributesAsync(const Model::ModifyDBEncryptAttributesRequest& request, const ModifyDBEncryptAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBEncryptAttributesOutcomeCallable ModifyDBEncryptAttributesCallable(const Model::ModifyDBEncryptAttributesRequest& request);

                /**
                 *本接口（ModifyDBInstanceName）用于修改实例名字
                 * @param req ModifyDBInstanceNameRequest
                 * @return ModifyDBInstanceNameOutcome
                 */
                ModifyDBInstanceNameOutcome ModifyDBInstanceName(const Model::ModifyDBInstanceNameRequest &request);
                void ModifyDBInstanceNameAsync(const Model::ModifyDBInstanceNameRequest& request, const ModifyDBInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceNameOutcomeCallable ModifyDBInstanceNameCallable(const Model::ModifyDBInstanceNameRequest& request);

                /**
                 *本接口（ModifyDBInstanceSecurityGroups）用于修改云数据库安全组
                 * @param req ModifyDBInstanceSecurityGroupsRequest
                 * @return ModifyDBInstanceSecurityGroupsOutcome
                 */
                ModifyDBInstanceSecurityGroupsOutcome ModifyDBInstanceSecurityGroups(const Model::ModifyDBInstanceSecurityGroupsRequest &request);
                void ModifyDBInstanceSecurityGroupsAsync(const Model::ModifyDBInstanceSecurityGroupsRequest& request, const ModifyDBInstanceSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceSecurityGroupsOutcomeCallable ModifyDBInstanceSecurityGroupsCallable(const Model::ModifyDBInstanceSecurityGroupsRequest& request);

                /**
                 *本接口（ModifyDBInstancesProject）用于修改云数据库实例所属项目。
                 * @param req ModifyDBInstancesProjectRequest
                 * @return ModifyDBInstancesProjectOutcome
                 */
                ModifyDBInstancesProjectOutcome ModifyDBInstancesProject(const Model::ModifyDBInstancesProjectRequest &request);
                void ModifyDBInstancesProjectAsync(const Model::ModifyDBInstancesProjectRequest& request, const ModifyDBInstancesProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstancesProjectOutcomeCallable ModifyDBInstancesProjectCallable(const Model::ModifyDBInstancesProjectRequest& request);

                /**
                 *本接口(ModifyDBParameters)用于修改数据库参数。
                 * @param req ModifyDBParametersRequest
                 * @return ModifyDBParametersOutcome
                 */
                ModifyDBParametersOutcome ModifyDBParameters(const Model::ModifyDBParametersRequest &request);
                void ModifyDBParametersAsync(const Model::ModifyDBParametersRequest& request, const ModifyDBParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBParametersOutcomeCallable ModifyDBParametersCallable(const Model::ModifyDBParametersRequest& request);

                /**
                 *本接口（ModifyDBSyncMode）用于修改云数据库实例的同步模式。
                 * @param req ModifyDBSyncModeRequest
                 * @return ModifyDBSyncModeOutcome
                 */
                ModifyDBSyncModeOutcome ModifyDBSyncMode(const Model::ModifyDBSyncModeRequest &request);
                void ModifyDBSyncModeAsync(const Model::ModifyDBSyncModeRequest& request, const ModifyDBSyncModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBSyncModeOutcomeCallable ModifyDBSyncModeCallable(const Model::ModifyDBSyncModeRequest& request);

                /**
                 *本接口（ModifyInstanceNetwork）用于修改实例所属网络。
                 * @param req ModifyInstanceNetworkRequest
                 * @return ModifyInstanceNetworkOutcome
                 */
                ModifyInstanceNetworkOutcome ModifyInstanceNetwork(const Model::ModifyInstanceNetworkRequest &request);
                void ModifyInstanceNetworkAsync(const Model::ModifyInstanceNetworkRequest& request, const ModifyInstanceNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceNetworkOutcomeCallable ModifyInstanceNetworkCallable(const Model::ModifyInstanceNetworkRequest& request);

                /**
                 *本接口（ModifyInstanceVip）用于修改实例Vip
                 * @param req ModifyInstanceVipRequest
                 * @return ModifyInstanceVipOutcome
                 */
                ModifyInstanceVipOutcome ModifyInstanceVip(const Model::ModifyInstanceVipRequest &request);
                void ModifyInstanceVipAsync(const Model::ModifyInstanceVipRequest& request, const ModifyInstanceVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceVipOutcomeCallable ModifyInstanceVipCallable(const Model::ModifyInstanceVipRequest& request);

                /**
                 *本接口（ModifyInstanceVport）用于修改实例VPORT
                 * @param req ModifyInstanceVportRequest
                 * @return ModifyInstanceVportOutcome
                 */
                ModifyInstanceVportOutcome ModifyInstanceVport(const Model::ModifyInstanceVportRequest &request);
                void ModifyInstanceVportAsync(const Model::ModifyInstanceVportRequest& request, const ModifyInstanceVportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceVportOutcomeCallable ModifyInstanceVportCallable(const Model::ModifyInstanceVportRequest& request);

                /**
                 *本接口(ModifyRealServerAccessStrategy)用于修改云数据库的VPCGW到RS的访问策略。

**注意**
- 修改策略后只对新建立的连接生效，老连接不受影响
- 就近访问只针对实例是跨可用区部署有用，单可用区部署实例就近与否并无作用
- DB每个Node对应一个proxy，如果开启就近访问，将会把连接集中到对应可用区的proxy上，可能造成热点问题，这种情况下如果是线上业务，请务必根据自己的业务请求量测试符合预期后再进行就近策略变更
                 * @param req ModifyRealServerAccessStrategyRequest
                 * @return ModifyRealServerAccessStrategyOutcome
                 */
                ModifyRealServerAccessStrategyOutcome ModifyRealServerAccessStrategy(const Model::ModifyRealServerAccessStrategyRequest &request);
                void ModifyRealServerAccessStrategyAsync(const Model::ModifyRealServerAccessStrategyRequest& request, const ModifyRealServerAccessStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRealServerAccessStrategyOutcomeCallable ModifyRealServerAccessStrategyCallable(const Model::ModifyRealServerAccessStrategyRequest& request);

                /**
                 *本接口（OpenDBExtranetAccess）用于开通云数据库实例的外网访问。开通外网访问后，您可通过外网域名和端口访问实例，可使用查询实例列表接口获取外网域名和端口信息。
                 * @param req OpenDBExtranetAccessRequest
                 * @return OpenDBExtranetAccessOutcome
                 */
                OpenDBExtranetAccessOutcome OpenDBExtranetAccess(const Model::OpenDBExtranetAccessRequest &request);
                void OpenDBExtranetAccessAsync(const Model::OpenDBExtranetAccessRequest& request, const OpenDBExtranetAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenDBExtranetAccessOutcomeCallable OpenDBExtranetAccessCallable(const Model::OpenDBExtranetAccessRequest& request);

                /**
                 *本接口（RenewDCDBInstance）用于续费分布式数据库实例。
                 * @param req RenewDCDBInstanceRequest
                 * @return RenewDCDBInstanceOutcome
                 */
                RenewDCDBInstanceOutcome RenewDCDBInstance(const Model::RenewDCDBInstanceRequest &request);
                void RenewDCDBInstanceAsync(const Model::RenewDCDBInstanceRequest& request, const RenewDCDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewDCDBInstanceOutcomeCallable RenewDCDBInstanceCallable(const Model::RenewDCDBInstanceRequest& request);

                /**
                 *本接口（ResetAccountPassword）用于重置云数据库账号的密码。
注意：相同用户名，不同Host是不同的账号。
                 * @param req ResetAccountPasswordRequest
                 * @return ResetAccountPasswordOutcome
                 */
                ResetAccountPasswordOutcome ResetAccountPassword(const Model::ResetAccountPasswordRequest &request);
                void ResetAccountPasswordAsync(const Model::ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetAccountPasswordOutcomeCallable ResetAccountPasswordCallable(const Model::ResetAccountPasswordRequest& request);

                /**
                 *本接口(SwitchDBInstanceHA)用于实例主备切换。
                 * @param req SwitchDBInstanceHARequest
                 * @return SwitchDBInstanceHAOutcome
                 */
                SwitchDBInstanceHAOutcome SwitchDBInstanceHA(const Model::SwitchDBInstanceHARequest &request);
                void SwitchDBInstanceHAAsync(const Model::SwitchDBInstanceHARequest& request, const SwitchDBInstanceHAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SwitchDBInstanceHAOutcomeCallable SwitchDBInstanceHACallable(const Model::SwitchDBInstanceHARequest& request);

                /**
                 *本接口（TerminateDedicatedDBInstance）用于销毁已隔离的独享分布式数据库实例。
                 * @param req TerminateDedicatedDBInstanceRequest
                 * @return TerminateDedicatedDBInstanceOutcome
                 */
                TerminateDedicatedDBInstanceOutcome TerminateDedicatedDBInstance(const Model::TerminateDedicatedDBInstanceRequest &request);
                void TerminateDedicatedDBInstanceAsync(const Model::TerminateDedicatedDBInstanceRequest& request, const TerminateDedicatedDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateDedicatedDBInstanceOutcomeCallable TerminateDedicatedDBInstanceCallable(const Model::TerminateDedicatedDBInstanceRequest& request);

                /**
                 *本接口（UpgradeDCDBInstance）用于升级分布式数据库实例。本接口完成下单和支付两个动作，如果发生支付失败的错误，调用用户账户相关接口中的支付订单接口（PayDeals）重新支付即可。
                 * @param req UpgradeDCDBInstanceRequest
                 * @return UpgradeDCDBInstanceOutcome
                 */
                UpgradeDCDBInstanceOutcome UpgradeDCDBInstance(const Model::UpgradeDCDBInstanceRequest &request);
                void UpgradeDCDBInstanceAsync(const Model::UpgradeDCDBInstanceRequest& request, const UpgradeDCDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeDCDBInstanceOutcomeCallable UpgradeDCDBInstanceCallable(const Model::UpgradeDCDBInstanceRequest& request);

                /**
                 *本接口（UpgradeDedicatedDCDBInstance）用于升级TDSQL独享集群实例
                 * @param req UpgradeDedicatedDCDBInstanceRequest
                 * @return UpgradeDedicatedDCDBInstanceOutcome
                 */
                UpgradeDedicatedDCDBInstanceOutcome UpgradeDedicatedDCDBInstance(const Model::UpgradeDedicatedDCDBInstanceRequest &request);
                void UpgradeDedicatedDCDBInstanceAsync(const Model::UpgradeDedicatedDCDBInstanceRequest& request, const UpgradeDedicatedDCDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeDedicatedDCDBInstanceOutcomeCallable UpgradeDedicatedDCDBInstanceCallable(const Model::UpgradeDedicatedDCDBInstanceRequest& request);

                /**
                 *本接口（UpgradeHourDCDBInstance）用于升级分布式数据库TDSQL按量计费实例。
                 * @param req UpgradeHourDCDBInstanceRequest
                 * @return UpgradeHourDCDBInstanceOutcome
                 */
                UpgradeHourDCDBInstanceOutcome UpgradeHourDCDBInstance(const Model::UpgradeHourDCDBInstanceRequest &request);
                void UpgradeHourDCDBInstanceAsync(const Model::UpgradeHourDCDBInstanceRequest& request, const UpgradeHourDCDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeHourDCDBInstanceOutcomeCallable UpgradeHourDCDBInstanceCallable(const Model::UpgradeHourDCDBInstanceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_DCDBCLIENT_H_
