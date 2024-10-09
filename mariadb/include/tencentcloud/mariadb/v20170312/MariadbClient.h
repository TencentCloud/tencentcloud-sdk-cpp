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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MARIADBCLIENT_H_
#define TENCENTCLOUD_MARIADB_V20170312_MARIADBCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/mariadb/v20170312/model/ActivateHourDBInstanceRequest.h>
#include <tencentcloud/mariadb/v20170312/model/ActivateHourDBInstanceResponse.h>
#include <tencentcloud/mariadb/v20170312/model/AssociateSecurityGroupsRequest.h>
#include <tencentcloud/mariadb/v20170312/model/AssociateSecurityGroupsResponse.h>
#include <tencentcloud/mariadb/v20170312/model/CancelDcnJobRequest.h>
#include <tencentcloud/mariadb/v20170312/model/CancelDcnJobResponse.h>
#include <tencentcloud/mariadb/v20170312/model/CloneAccountRequest.h>
#include <tencentcloud/mariadb/v20170312/model/CloneAccountResponse.h>
#include <tencentcloud/mariadb/v20170312/model/CloseDBExtranetAccessRequest.h>
#include <tencentcloud/mariadb/v20170312/model/CloseDBExtranetAccessResponse.h>
#include <tencentcloud/mariadb/v20170312/model/CopyAccountPrivilegesRequest.h>
#include <tencentcloud/mariadb/v20170312/model/CopyAccountPrivilegesResponse.h>
#include <tencentcloud/mariadb/v20170312/model/CreateAccountRequest.h>
#include <tencentcloud/mariadb/v20170312/model/CreateAccountResponse.h>
#include <tencentcloud/mariadb/v20170312/model/CreateDBInstanceRequest.h>
#include <tencentcloud/mariadb/v20170312/model/CreateDBInstanceResponse.h>
#include <tencentcloud/mariadb/v20170312/model/CreateDedicatedClusterDBInstanceRequest.h>
#include <tencentcloud/mariadb/v20170312/model/CreateDedicatedClusterDBInstanceResponse.h>
#include <tencentcloud/mariadb/v20170312/model/CreateHourDBInstanceRequest.h>
#include <tencentcloud/mariadb/v20170312/model/CreateHourDBInstanceResponse.h>
#include <tencentcloud/mariadb/v20170312/model/CreateTmpInstancesRequest.h>
#include <tencentcloud/mariadb/v20170312/model/CreateTmpInstancesResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DeleteAccountRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DeleteAccountResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeAccountPrivilegesRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeAccountPrivilegesResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeAccountsRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeAccountsResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeBackupConfigsRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeBackupConfigsResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeBackupFilesRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeBackupFilesResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeBackupTimeRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeBackupTimeResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeBinlogTimeRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeBinlogTimeResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBEncryptAttributesRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBEncryptAttributesResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBInstanceDetailRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBInstanceDetailResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBInstanceSpecsRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBInstanceSpecsResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBInstancesRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBInstancesResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBLogFilesRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBLogFilesResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBParametersRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBParametersResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBSecurityGroupsRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBSecurityGroupsResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBSlowLogsRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBSlowLogsResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBSyncModeRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBSyncModeResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBTmpInstancesRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBTmpInstancesResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDatabaseObjectsRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDatabaseObjectsResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDatabaseTableRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDatabaseTableResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDatabasesRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDatabasesResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDcnDetailRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDcnDetailResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeFileDownloadUrlRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeFileDownloadUrlResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeFlowRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeFlowResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeInstanceNodeInfoRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeInstanceNodeInfoResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeLogFileRetentionPeriodRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeLogFileRetentionPeriodResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeOrdersRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeOrdersResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribePriceRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribePriceResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeProjectSecurityGroupsRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeProjectSecurityGroupsResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeRenewalPriceRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeRenewalPriceResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeSaleInfoRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeSaleInfoResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeUpgradePriceRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeUpgradePriceResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DestroyDBInstanceRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DestroyDBInstanceResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DestroyHourDBInstanceRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DestroyHourDBInstanceResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DisassociateSecurityGroupsRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DisassociateSecurityGroupsResponse.h>
#include <tencentcloud/mariadb/v20170312/model/FlushBinlogRequest.h>
#include <tencentcloud/mariadb/v20170312/model/FlushBinlogResponse.h>
#include <tencentcloud/mariadb/v20170312/model/GrantAccountPrivilegesRequest.h>
#include <tencentcloud/mariadb/v20170312/model/GrantAccountPrivilegesResponse.h>
#include <tencentcloud/mariadb/v20170312/model/InitDBInstancesRequest.h>
#include <tencentcloud/mariadb/v20170312/model/InitDBInstancesResponse.h>
#include <tencentcloud/mariadb/v20170312/model/IsolateDBInstanceRequest.h>
#include <tencentcloud/mariadb/v20170312/model/IsolateDBInstanceResponse.h>
#include <tencentcloud/mariadb/v20170312/model/IsolateDedicatedDBInstanceRequest.h>
#include <tencentcloud/mariadb/v20170312/model/IsolateDedicatedDBInstanceResponse.h>
#include <tencentcloud/mariadb/v20170312/model/IsolateHourDBInstanceRequest.h>
#include <tencentcloud/mariadb/v20170312/model/IsolateHourDBInstanceResponse.h>
#include <tencentcloud/mariadb/v20170312/model/KillSessionRequest.h>
#include <tencentcloud/mariadb/v20170312/model/KillSessionResponse.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyAccountDescriptionRequest.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyAccountDescriptionResponse.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyAccountPrivilegesRequest.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyAccountPrivilegesResponse.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyBackupConfigsRequest.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyBackupConfigsResponse.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyBackupTimeRequest.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyBackupTimeResponse.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyDBEncryptAttributesRequest.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyDBEncryptAttributesResponse.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyDBInstanceNameRequest.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyDBInstanceNameResponse.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyDBInstanceSecurityGroupsRequest.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyDBInstanceSecurityGroupsResponse.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyDBInstancesProjectRequest.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyDBInstancesProjectResponse.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyDBParametersRequest.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyDBParametersResponse.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyDBSyncModeRequest.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyDBSyncModeResponse.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyInstanceNetworkRequest.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyInstanceNetworkResponse.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyInstanceVipRequest.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyInstanceVipResponse.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyInstanceVportRequest.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyInstanceVportResponse.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyLogFileRetentionPeriodRequest.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyLogFileRetentionPeriodResponse.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyRealServerAccessStrategyRequest.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyRealServerAccessStrategyResponse.h>
#include <tencentcloud/mariadb/v20170312/model/ModifySyncTaskAttributeRequest.h>
#include <tencentcloud/mariadb/v20170312/model/ModifySyncTaskAttributeResponse.h>
#include <tencentcloud/mariadb/v20170312/model/OpenDBExtranetAccessRequest.h>
#include <tencentcloud/mariadb/v20170312/model/OpenDBExtranetAccessResponse.h>
#include <tencentcloud/mariadb/v20170312/model/RenewDBInstanceRequest.h>
#include <tencentcloud/mariadb/v20170312/model/RenewDBInstanceResponse.h>
#include <tencentcloud/mariadb/v20170312/model/ResetAccountPasswordRequest.h>
#include <tencentcloud/mariadb/v20170312/model/ResetAccountPasswordResponse.h>
#include <tencentcloud/mariadb/v20170312/model/RestartDBInstancesRequest.h>
#include <tencentcloud/mariadb/v20170312/model/RestartDBInstancesResponse.h>
#include <tencentcloud/mariadb/v20170312/model/SwitchDBInstanceHARequest.h>
#include <tencentcloud/mariadb/v20170312/model/SwitchDBInstanceHAResponse.h>
#include <tencentcloud/mariadb/v20170312/model/TerminateDedicatedDBInstanceRequest.h>
#include <tencentcloud/mariadb/v20170312/model/TerminateDedicatedDBInstanceResponse.h>
#include <tencentcloud/mariadb/v20170312/model/UpgradeDBInstanceRequest.h>
#include <tencentcloud/mariadb/v20170312/model/UpgradeDBInstanceResponse.h>
#include <tencentcloud/mariadb/v20170312/model/UpgradeDedicatedDBInstanceRequest.h>
#include <tencentcloud/mariadb/v20170312/model/UpgradeDedicatedDBInstanceResponse.h>
#include <tencentcloud/mariadb/v20170312/model/UpgradeHourDBInstanceRequest.h>
#include <tencentcloud/mariadb/v20170312/model/UpgradeHourDBInstanceResponse.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            class MariadbClient : public AbstractClient
            {
            public:
                MariadbClient(const Credential &credential, const std::string &region);
                MariadbClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ActivateHourDBInstanceResponse> ActivateHourDBInstanceOutcome;
                typedef std::future<ActivateHourDBInstanceOutcome> ActivateHourDBInstanceOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::ActivateHourDBInstanceRequest&, ActivateHourDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ActivateHourDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::AssociateSecurityGroupsResponse> AssociateSecurityGroupsOutcome;
                typedef std::future<AssociateSecurityGroupsOutcome> AssociateSecurityGroupsOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::AssociateSecurityGroupsRequest&, AssociateSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelDcnJobResponse> CancelDcnJobOutcome;
                typedef std::future<CancelDcnJobOutcome> CancelDcnJobOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::CancelDcnJobRequest&, CancelDcnJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelDcnJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CloneAccountResponse> CloneAccountOutcome;
                typedef std::future<CloneAccountOutcome> CloneAccountOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::CloneAccountRequest&, CloneAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloneAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::CloseDBExtranetAccessResponse> CloseDBExtranetAccessOutcome;
                typedef std::future<CloseDBExtranetAccessOutcome> CloseDBExtranetAccessOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::CloseDBExtranetAccessRequest&, CloseDBExtranetAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseDBExtranetAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::CopyAccountPrivilegesResponse> CopyAccountPrivilegesOutcome;
                typedef std::future<CopyAccountPrivilegesOutcome> CopyAccountPrivilegesOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::CopyAccountPrivilegesRequest&, CopyAccountPrivilegesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CopyAccountPrivilegesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAccountResponse> CreateAccountOutcome;
                typedef std::future<CreateAccountOutcome> CreateAccountOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::CreateAccountRequest&, CreateAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDBInstanceResponse> CreateDBInstanceOutcome;
                typedef std::future<CreateDBInstanceOutcome> CreateDBInstanceOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::CreateDBInstanceRequest&, CreateDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDedicatedClusterDBInstanceResponse> CreateDedicatedClusterDBInstanceOutcome;
                typedef std::future<CreateDedicatedClusterDBInstanceOutcome> CreateDedicatedClusterDBInstanceOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::CreateDedicatedClusterDBInstanceRequest&, CreateDedicatedClusterDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDedicatedClusterDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateHourDBInstanceResponse> CreateHourDBInstanceOutcome;
                typedef std::future<CreateHourDBInstanceOutcome> CreateHourDBInstanceOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::CreateHourDBInstanceRequest&, CreateHourDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateHourDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTmpInstancesResponse> CreateTmpInstancesOutcome;
                typedef std::future<CreateTmpInstancesOutcome> CreateTmpInstancesOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::CreateTmpInstancesRequest&, CreateTmpInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTmpInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAccountResponse> DeleteAccountOutcome;
                typedef std::future<DeleteAccountOutcome> DeleteAccountOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DeleteAccountRequest&, DeleteAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccountPrivilegesResponse> DescribeAccountPrivilegesOutcome;
                typedef std::future<DescribeAccountPrivilegesOutcome> DescribeAccountPrivilegesOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeAccountPrivilegesRequest&, DescribeAccountPrivilegesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountPrivilegesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccountsResponse> DescribeAccountsOutcome;
                typedef std::future<DescribeAccountsOutcome> DescribeAccountsOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeAccountsRequest&, DescribeAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupConfigsResponse> DescribeBackupConfigsOutcome;
                typedef std::future<DescribeBackupConfigsOutcome> DescribeBackupConfigsOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeBackupConfigsRequest&, DescribeBackupConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupFilesResponse> DescribeBackupFilesOutcome;
                typedef std::future<DescribeBackupFilesOutcome> DescribeBackupFilesOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeBackupFilesRequest&, DescribeBackupFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupTimeResponse> DescribeBackupTimeOutcome;
                typedef std::future<DescribeBackupTimeOutcome> DescribeBackupTimeOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeBackupTimeRequest&, DescribeBackupTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupTimeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBinlogTimeResponse> DescribeBinlogTimeOutcome;
                typedef std::future<DescribeBinlogTimeOutcome> DescribeBinlogTimeOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeBinlogTimeRequest&, DescribeBinlogTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBinlogTimeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBEncryptAttributesResponse> DescribeDBEncryptAttributesOutcome;
                typedef std::future<DescribeDBEncryptAttributesOutcome> DescribeDBEncryptAttributesOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeDBEncryptAttributesRequest&, DescribeDBEncryptAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBEncryptAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBInstanceDetailResponse> DescribeDBInstanceDetailOutcome;
                typedef std::future<DescribeDBInstanceDetailOutcome> DescribeDBInstanceDetailOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeDBInstanceDetailRequest&, DescribeDBInstanceDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBInstanceSpecsResponse> DescribeDBInstanceSpecsOutcome;
                typedef std::future<DescribeDBInstanceSpecsOutcome> DescribeDBInstanceSpecsOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeDBInstanceSpecsRequest&, DescribeDBInstanceSpecsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceSpecsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBInstancesResponse> DescribeDBInstancesOutcome;
                typedef std::future<DescribeDBInstancesOutcome> DescribeDBInstancesOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeDBInstancesRequest&, DescribeDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBLogFilesResponse> DescribeDBLogFilesOutcome;
                typedef std::future<DescribeDBLogFilesOutcome> DescribeDBLogFilesOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeDBLogFilesRequest&, DescribeDBLogFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBLogFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBParametersResponse> DescribeDBParametersOutcome;
                typedef std::future<DescribeDBParametersOutcome> DescribeDBParametersOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeDBParametersRequest&, DescribeDBParametersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBParametersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBSecurityGroupsResponse> DescribeDBSecurityGroupsOutcome;
                typedef std::future<DescribeDBSecurityGroupsOutcome> DescribeDBSecurityGroupsOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeDBSecurityGroupsRequest&, DescribeDBSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBSlowLogsResponse> DescribeDBSlowLogsOutcome;
                typedef std::future<DescribeDBSlowLogsOutcome> DescribeDBSlowLogsOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeDBSlowLogsRequest&, DescribeDBSlowLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBSlowLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBSyncModeResponse> DescribeDBSyncModeOutcome;
                typedef std::future<DescribeDBSyncModeOutcome> DescribeDBSyncModeOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeDBSyncModeRequest&, DescribeDBSyncModeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBSyncModeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBTmpInstancesResponse> DescribeDBTmpInstancesOutcome;
                typedef std::future<DescribeDBTmpInstancesOutcome> DescribeDBTmpInstancesOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeDBTmpInstancesRequest&, DescribeDBTmpInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBTmpInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatabaseObjectsResponse> DescribeDatabaseObjectsOutcome;
                typedef std::future<DescribeDatabaseObjectsOutcome> DescribeDatabaseObjectsOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeDatabaseObjectsRequest&, DescribeDatabaseObjectsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabaseObjectsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatabaseTableResponse> DescribeDatabaseTableOutcome;
                typedef std::future<DescribeDatabaseTableOutcome> DescribeDatabaseTableOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeDatabaseTableRequest&, DescribeDatabaseTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabaseTableAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatabasesResponse> DescribeDatabasesOutcome;
                typedef std::future<DescribeDatabasesOutcome> DescribeDatabasesOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeDatabasesRequest&, DescribeDatabasesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabasesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDcnDetailResponse> DescribeDcnDetailOutcome;
                typedef std::future<DescribeDcnDetailOutcome> DescribeDcnDetailOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeDcnDetailRequest&, DescribeDcnDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcnDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFileDownloadUrlResponse> DescribeFileDownloadUrlOutcome;
                typedef std::future<DescribeFileDownloadUrlOutcome> DescribeFileDownloadUrlOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeFileDownloadUrlRequest&, DescribeFileDownloadUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFileDownloadUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFlowResponse> DescribeFlowOutcome;
                typedef std::future<DescribeFlowOutcome> DescribeFlowOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeFlowRequest&, DescribeFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceNodeInfoResponse> DescribeInstanceNodeInfoOutcome;
                typedef std::future<DescribeInstanceNodeInfoOutcome> DescribeInstanceNodeInfoOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeInstanceNodeInfoRequest&, DescribeInstanceNodeInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceNodeInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogFileRetentionPeriodResponse> DescribeLogFileRetentionPeriodOutcome;
                typedef std::future<DescribeLogFileRetentionPeriodOutcome> DescribeLogFileRetentionPeriodOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeLogFileRetentionPeriodRequest&, DescribeLogFileRetentionPeriodOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogFileRetentionPeriodAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrdersResponse> DescribeOrdersOutcome;
                typedef std::future<DescribeOrdersOutcome> DescribeOrdersOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeOrdersRequest&, DescribeOrdersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrdersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePriceResponse> DescribePriceOutcome;
                typedef std::future<DescribePriceOutcome> DescribePriceOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribePriceRequest&, DescribePriceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePriceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProjectSecurityGroupsResponse> DescribeProjectSecurityGroupsOutcome;
                typedef std::future<DescribeProjectSecurityGroupsOutcome> DescribeProjectSecurityGroupsOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeProjectSecurityGroupsRequest&, DescribeProjectSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRenewalPriceResponse> DescribeRenewalPriceOutcome;
                typedef std::future<DescribeRenewalPriceOutcome> DescribeRenewalPriceOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeRenewalPriceRequest&, DescribeRenewalPriceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRenewalPriceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSaleInfoResponse> DescribeSaleInfoOutcome;
                typedef std::future<DescribeSaleInfoOutcome> DescribeSaleInfoOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeSaleInfoRequest&, DescribeSaleInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSaleInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUpgradePriceResponse> DescribeUpgradePriceOutcome;
                typedef std::future<DescribeUpgradePriceOutcome> DescribeUpgradePriceOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeUpgradePriceRequest&, DescribeUpgradePriceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUpgradePriceAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyDBInstanceResponse> DestroyDBInstanceOutcome;
                typedef std::future<DestroyDBInstanceOutcome> DestroyDBInstanceOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DestroyDBInstanceRequest&, DestroyDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyHourDBInstanceResponse> DestroyHourDBInstanceOutcome;
                typedef std::future<DestroyHourDBInstanceOutcome> DestroyHourDBInstanceOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DestroyHourDBInstanceRequest&, DestroyHourDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyHourDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateSecurityGroupsResponse> DisassociateSecurityGroupsOutcome;
                typedef std::future<DisassociateSecurityGroupsOutcome> DisassociateSecurityGroupsOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DisassociateSecurityGroupsRequest&, DisassociateSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::FlushBinlogResponse> FlushBinlogOutcome;
                typedef std::future<FlushBinlogOutcome> FlushBinlogOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::FlushBinlogRequest&, FlushBinlogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FlushBinlogAsyncHandler;
                typedef Outcome<Core::Error, Model::GrantAccountPrivilegesResponse> GrantAccountPrivilegesOutcome;
                typedef std::future<GrantAccountPrivilegesOutcome> GrantAccountPrivilegesOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::GrantAccountPrivilegesRequest&, GrantAccountPrivilegesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GrantAccountPrivilegesAsyncHandler;
                typedef Outcome<Core::Error, Model::InitDBInstancesResponse> InitDBInstancesOutcome;
                typedef std::future<InitDBInstancesOutcome> InitDBInstancesOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::InitDBInstancesRequest&, InitDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InitDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::IsolateDBInstanceResponse> IsolateDBInstanceOutcome;
                typedef std::future<IsolateDBInstanceOutcome> IsolateDBInstanceOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::IsolateDBInstanceRequest&, IsolateDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IsolateDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::IsolateDedicatedDBInstanceResponse> IsolateDedicatedDBInstanceOutcome;
                typedef std::future<IsolateDedicatedDBInstanceOutcome> IsolateDedicatedDBInstanceOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::IsolateDedicatedDBInstanceRequest&, IsolateDedicatedDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IsolateDedicatedDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::IsolateHourDBInstanceResponse> IsolateHourDBInstanceOutcome;
                typedef std::future<IsolateHourDBInstanceOutcome> IsolateHourDBInstanceOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::IsolateHourDBInstanceRequest&, IsolateHourDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IsolateHourDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::KillSessionResponse> KillSessionOutcome;
                typedef std::future<KillSessionOutcome> KillSessionOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::KillSessionRequest&, KillSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> KillSessionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccountDescriptionResponse> ModifyAccountDescriptionOutcome;
                typedef std::future<ModifyAccountDescriptionOutcome> ModifyAccountDescriptionOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::ModifyAccountDescriptionRequest&, ModifyAccountDescriptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountDescriptionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccountPrivilegesResponse> ModifyAccountPrivilegesOutcome;
                typedef std::future<ModifyAccountPrivilegesOutcome> ModifyAccountPrivilegesOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::ModifyAccountPrivilegesRequest&, ModifyAccountPrivilegesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountPrivilegesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBackupConfigsResponse> ModifyBackupConfigsOutcome;
                typedef std::future<ModifyBackupConfigsOutcome> ModifyBackupConfigsOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::ModifyBackupConfigsRequest&, ModifyBackupConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBackupTimeResponse> ModifyBackupTimeOutcome;
                typedef std::future<ModifyBackupTimeOutcome> ModifyBackupTimeOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::ModifyBackupTimeRequest&, ModifyBackupTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupTimeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBEncryptAttributesResponse> ModifyDBEncryptAttributesOutcome;
                typedef std::future<ModifyDBEncryptAttributesOutcome> ModifyDBEncryptAttributesOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::ModifyDBEncryptAttributesRequest&, ModifyDBEncryptAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBEncryptAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceNameResponse> ModifyDBInstanceNameOutcome;
                typedef std::future<ModifyDBInstanceNameOutcome> ModifyDBInstanceNameOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::ModifyDBInstanceNameRequest&, ModifyDBInstanceNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceNameAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceSecurityGroupsResponse> ModifyDBInstanceSecurityGroupsOutcome;
                typedef std::future<ModifyDBInstanceSecurityGroupsOutcome> ModifyDBInstanceSecurityGroupsOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::ModifyDBInstanceSecurityGroupsRequest&, ModifyDBInstanceSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstancesProjectResponse> ModifyDBInstancesProjectOutcome;
                typedef std::future<ModifyDBInstancesProjectOutcome> ModifyDBInstancesProjectOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::ModifyDBInstancesProjectRequest&, ModifyDBInstancesProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstancesProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBParametersResponse> ModifyDBParametersOutcome;
                typedef std::future<ModifyDBParametersOutcome> ModifyDBParametersOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::ModifyDBParametersRequest&, ModifyDBParametersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBParametersAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBSyncModeResponse> ModifyDBSyncModeOutcome;
                typedef std::future<ModifyDBSyncModeOutcome> ModifyDBSyncModeOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::ModifyDBSyncModeRequest&, ModifyDBSyncModeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBSyncModeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceNetworkResponse> ModifyInstanceNetworkOutcome;
                typedef std::future<ModifyInstanceNetworkOutcome> ModifyInstanceNetworkOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::ModifyInstanceNetworkRequest&, ModifyInstanceNetworkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceNetworkAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceVipResponse> ModifyInstanceVipOutcome;
                typedef std::future<ModifyInstanceVipOutcome> ModifyInstanceVipOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::ModifyInstanceVipRequest&, ModifyInstanceVipOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceVipAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceVportResponse> ModifyInstanceVportOutcome;
                typedef std::future<ModifyInstanceVportOutcome> ModifyInstanceVportOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::ModifyInstanceVportRequest&, ModifyInstanceVportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceVportAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLogFileRetentionPeriodResponse> ModifyLogFileRetentionPeriodOutcome;
                typedef std::future<ModifyLogFileRetentionPeriodOutcome> ModifyLogFileRetentionPeriodOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::ModifyLogFileRetentionPeriodRequest&, ModifyLogFileRetentionPeriodOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLogFileRetentionPeriodAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRealServerAccessStrategyResponse> ModifyRealServerAccessStrategyOutcome;
                typedef std::future<ModifyRealServerAccessStrategyOutcome> ModifyRealServerAccessStrategyOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::ModifyRealServerAccessStrategyRequest&, ModifyRealServerAccessStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRealServerAccessStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySyncTaskAttributeResponse> ModifySyncTaskAttributeOutcome;
                typedef std::future<ModifySyncTaskAttributeOutcome> ModifySyncTaskAttributeOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::ModifySyncTaskAttributeRequest&, ModifySyncTaskAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySyncTaskAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenDBExtranetAccessResponse> OpenDBExtranetAccessOutcome;
                typedef std::future<OpenDBExtranetAccessOutcome> OpenDBExtranetAccessOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::OpenDBExtranetAccessRequest&, OpenDBExtranetAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenDBExtranetAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewDBInstanceResponse> RenewDBInstanceOutcome;
                typedef std::future<RenewDBInstanceOutcome> RenewDBInstanceOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::RenewDBInstanceRequest&, RenewDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetAccountPasswordResponse> ResetAccountPasswordOutcome;
                typedef std::future<ResetAccountPasswordOutcome> ResetAccountPasswordOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::ResetAccountPasswordRequest&, ResetAccountPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetAccountPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::RestartDBInstancesResponse> RestartDBInstancesOutcome;
                typedef std::future<RestartDBInstancesOutcome> RestartDBInstancesOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::RestartDBInstancesRequest&, RestartDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestartDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::SwitchDBInstanceHAResponse> SwitchDBInstanceHAOutcome;
                typedef std::future<SwitchDBInstanceHAOutcome> SwitchDBInstanceHAOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::SwitchDBInstanceHARequest&, SwitchDBInstanceHAOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SwitchDBInstanceHAAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminateDedicatedDBInstanceResponse> TerminateDedicatedDBInstanceOutcome;
                typedef std::future<TerminateDedicatedDBInstanceOutcome> TerminateDedicatedDBInstanceOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::TerminateDedicatedDBInstanceRequest&, TerminateDedicatedDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateDedicatedDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeDBInstanceResponse> UpgradeDBInstanceOutcome;
                typedef std::future<UpgradeDBInstanceOutcome> UpgradeDBInstanceOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::UpgradeDBInstanceRequest&, UpgradeDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeDedicatedDBInstanceResponse> UpgradeDedicatedDBInstanceOutcome;
                typedef std::future<UpgradeDedicatedDBInstanceOutcome> UpgradeDedicatedDBInstanceOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::UpgradeDedicatedDBInstanceRequest&, UpgradeDedicatedDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDedicatedDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeHourDBInstanceResponse> UpgradeHourDBInstanceOutcome;
                typedef std::future<UpgradeHourDBInstanceOutcome> UpgradeHourDBInstanceOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::UpgradeHourDBInstanceRequest&, UpgradeHourDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeHourDBInstanceAsyncHandler;



                /**
                 *解隔离MariaDB按量计费实例
                 * @param req ActivateHourDBInstanceRequest
                 * @return ActivateHourDBInstanceOutcome
                 */
                ActivateHourDBInstanceOutcome ActivateHourDBInstance(const Model::ActivateHourDBInstanceRequest &request);
                void ActivateHourDBInstanceAsync(const Model::ActivateHourDBInstanceRequest& request, const ActivateHourDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ActivateHourDBInstanceOutcomeCallable ActivateHourDBInstanceCallable(const Model::ActivateHourDBInstanceRequest& request);

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
                 *本接口（CreateDBInstance）用于创建包年包月的MariaDB云数据库实例，可通过传入实例规格、数据库版本号、购买时长和数量等信息创建云数据库实例。
                 * @param req CreateDBInstanceRequest
                 * @return CreateDBInstanceOutcome
                 */
                CreateDBInstanceOutcome CreateDBInstance(const Model::CreateDBInstanceRequest &request);
                void CreateDBInstanceAsync(const Model::CreateDBInstanceRequest& request, const CreateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDBInstanceOutcomeCallable CreateDBInstanceCallable(const Model::CreateDBInstanceRequest& request);

                /**
                 *创建Mariadb独享集群实例
                 * @param req CreateDedicatedClusterDBInstanceRequest
                 * @return CreateDedicatedClusterDBInstanceOutcome
                 */
                CreateDedicatedClusterDBInstanceOutcome CreateDedicatedClusterDBInstance(const Model::CreateDedicatedClusterDBInstanceRequest &request);
                void CreateDedicatedClusterDBInstanceAsync(const Model::CreateDedicatedClusterDBInstanceRequest& request, const CreateDedicatedClusterDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDedicatedClusterDBInstanceOutcomeCallable CreateDedicatedClusterDBInstanceCallable(const Model::CreateDedicatedClusterDBInstanceRequest& request);

                /**
                 *创建MariaDB按量计费实例
                 * @param req CreateHourDBInstanceRequest
                 * @return CreateHourDBInstanceOutcome
                 */
                CreateHourDBInstanceOutcome CreateHourDBInstance(const Model::CreateHourDBInstanceRequest &request);
                void CreateHourDBInstanceAsync(const Model::CreateHourDBInstanceRequest& request, const CreateHourDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateHourDBInstanceOutcomeCallable CreateHourDBInstanceCallable(const Model::CreateHourDBInstanceRequest& request);

                /**
                 *本接口（CreateTmpInstances）用于创建临时实例。
                 * @param req CreateTmpInstancesRequest
                 * @return CreateTmpInstancesOutcome
                 */
                CreateTmpInstancesOutcome CreateTmpInstances(const Model::CreateTmpInstancesRequest &request);
                void CreateTmpInstancesAsync(const Model::CreateTmpInstancesRequest& request, const CreateTmpInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTmpInstancesOutcomeCallable CreateTmpInstancesCallable(const Model::CreateTmpInstancesRequest& request);

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
                 *本接口（DescribeBackupTime）用于获取云数据库的备份时间。后台系统将根据此配置定期进行实例备份。
                 * @param req DescribeBackupTimeRequest
                 * @return DescribeBackupTimeOutcome
                 */
                DescribeBackupTimeOutcome DescribeBackupTime(const Model::DescribeBackupTimeRequest &request);
                void DescribeBackupTimeAsync(const Model::DescribeBackupTimeRequest& request, const DescribeBackupTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupTimeOutcomeCallable DescribeBackupTimeCallable(const Model::DescribeBackupTimeRequest& request);

                /**
                 *本接口（DescribeBinlogTime）用于查询可回档时间范围。
                 * @param req DescribeBinlogTimeRequest
                 * @return DescribeBinlogTimeOutcome
                 */
                DescribeBinlogTimeOutcome DescribeBinlogTime(const Model::DescribeBinlogTimeRequest &request);
                void DescribeBinlogTimeAsync(const Model::DescribeBinlogTimeRequest& request, const DescribeBinlogTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBinlogTimeOutcomeCallable DescribeBinlogTimeCallable(const Model::DescribeBinlogTimeRequest& request);

                /**
                 *本接口(DescribeDBEncryptAttributes)用于查询实例数据加密状态。
                 * @param req DescribeDBEncryptAttributesRequest
                 * @return DescribeDBEncryptAttributesOutcome
                 */
                DescribeDBEncryptAttributesOutcome DescribeDBEncryptAttributes(const Model::DescribeDBEncryptAttributesRequest &request);
                void DescribeDBEncryptAttributesAsync(const Model::DescribeDBEncryptAttributesRequest& request, const DescribeDBEncryptAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBEncryptAttributesOutcomeCallable DescribeDBEncryptAttributesCallable(const Model::DescribeDBEncryptAttributesRequest& request);

                /**
                 *本接口(DescribeDBInstanceDetail)用于查询指定实例的详细信息。
                 * @param req DescribeDBInstanceDetailRequest
                 * @return DescribeDBInstanceDetailOutcome
                 */
                DescribeDBInstanceDetailOutcome DescribeDBInstanceDetail(const Model::DescribeDBInstanceDetailRequest &request);
                void DescribeDBInstanceDetailAsync(const Model::DescribeDBInstanceDetailRequest& request, const DescribeDBInstanceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstanceDetailOutcomeCallable DescribeDBInstanceDetailCallable(const Model::DescribeDBInstanceDetailRequest& request);

                /**
                 *本接口(DescribeDBInstanceSpecs)用于查询可创建的云数据库可售卖的规格配置。
                 * @param req DescribeDBInstanceSpecsRequest
                 * @return DescribeDBInstanceSpecsOutcome
                 */
                DescribeDBInstanceSpecsOutcome DescribeDBInstanceSpecs(const Model::DescribeDBInstanceSpecsRequest &request);
                void DescribeDBInstanceSpecsAsync(const Model::DescribeDBInstanceSpecsRequest& request, const DescribeDBInstanceSpecsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstanceSpecsOutcomeCallable DescribeDBInstanceSpecsCallable(const Model::DescribeDBInstanceSpecsRequest& request);

                /**
                 *本接口（DescribeDBInstances）用于查询云数据库实例列表，支持通过项目ID、实例ID、内网地址、实例名称等来筛选实例。
如果不指定任何筛选条件，则默认返回20条实例记录，单次请求最多支持返回100条实例记录。
                 * @param req DescribeDBInstancesRequest
                 * @return DescribeDBInstancesOutcome
                 */
                DescribeDBInstancesOutcome DescribeDBInstances(const Model::DescribeDBInstancesRequest &request);
                void DescribeDBInstancesAsync(const Model::DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstancesOutcomeCallable DescribeDBInstancesCallable(const Model::DescribeDBInstancesRequest& request);

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
                 *本接口（DescribeFlow）用于查询流程状态。
                 * @param req DescribeFlowRequest
                 * @return DescribeFlowOutcome
                 */
                DescribeFlowOutcome DescribeFlow(const Model::DescribeFlowRequest &request);
                void DescribeFlowAsync(const Model::DescribeFlowRequest& request, const DescribeFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlowOutcomeCallable DescribeFlowCallable(const Model::DescribeFlowRequest& request);

                /**
                 *本接口（DescribeInstanceNodeInfo）用于获取数据库实例主备节点信息
                 * @param req DescribeInstanceNodeInfoRequest
                 * @return DescribeInstanceNodeInfoOutcome
                 */
                DescribeInstanceNodeInfoOutcome DescribeInstanceNodeInfo(const Model::DescribeInstanceNodeInfoRequest &request);
                void DescribeInstanceNodeInfoAsync(const Model::DescribeInstanceNodeInfoRequest& request, const DescribeInstanceNodeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceNodeInfoOutcomeCallable DescribeInstanceNodeInfoCallable(const Model::DescribeInstanceNodeInfoRequest& request);

                /**
                 *本接口(DescribeLogFileRetentionPeriod)用于查看数据库备份日志的备份天数的设置情况。
                 * @param req DescribeLogFileRetentionPeriodRequest
                 * @return DescribeLogFileRetentionPeriodOutcome
                 */
                DescribeLogFileRetentionPeriodOutcome DescribeLogFileRetentionPeriod(const Model::DescribeLogFileRetentionPeriodRequest &request);
                void DescribeLogFileRetentionPeriodAsync(const Model::DescribeLogFileRetentionPeriodRequest& request, const DescribeLogFileRetentionPeriodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogFileRetentionPeriodOutcomeCallable DescribeLogFileRetentionPeriodCallable(const Model::DescribeLogFileRetentionPeriodRequest& request);

                /**
                 *本接口（DescribeOrders）用于查询云数据库订单信息。传入订单ID来查询订单关联的云数据库实例，和对应的任务流程ID。
                 * @param req DescribeOrdersRequest
                 * @return DescribeOrdersOutcome
                 */
                DescribeOrdersOutcome DescribeOrders(const Model::DescribeOrdersRequest &request);
                void DescribeOrdersAsync(const Model::DescribeOrdersRequest& request, const DescribeOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrdersOutcomeCallable DescribeOrdersCallable(const Model::DescribeOrdersRequest& request);

                /**
                 *本接口（DescribePrice）用于在购买实例前，查询实例的价格。
                 * @param req DescribePriceRequest
                 * @return DescribePriceOutcome
                 */
                DescribePriceOutcome DescribePrice(const Model::DescribePriceRequest &request);
                void DescribePriceAsync(const Model::DescribePriceRequest& request, const DescribePriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePriceOutcomeCallable DescribePriceCallable(const Model::DescribePriceRequest& request);

                /**
                 *本接口（DescribeProjectSecurityGroups）用于查询项目安全组信息
                 * @param req DescribeProjectSecurityGroupsRequest
                 * @return DescribeProjectSecurityGroupsOutcome
                 */
                DescribeProjectSecurityGroupsOutcome DescribeProjectSecurityGroups(const Model::DescribeProjectSecurityGroupsRequest &request);
                void DescribeProjectSecurityGroupsAsync(const Model::DescribeProjectSecurityGroupsRequest& request, const DescribeProjectSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProjectSecurityGroupsOutcomeCallable DescribeProjectSecurityGroupsCallable(const Model::DescribeProjectSecurityGroupsRequest& request);

                /**
                 *本接口（DescribeRenewalPrice）用于在续费云数据库实例时，查询续费的价格。
                 * @param req DescribeRenewalPriceRequest
                 * @return DescribeRenewalPriceOutcome
                 */
                DescribeRenewalPriceOutcome DescribeRenewalPrice(const Model::DescribeRenewalPriceRequest &request);
                void DescribeRenewalPriceAsync(const Model::DescribeRenewalPriceRequest& request, const DescribeRenewalPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRenewalPriceOutcomeCallable DescribeRenewalPriceCallable(const Model::DescribeRenewalPriceRequest& request);

                /**
                 *本接口(DescribeSaleInfo)用于查询云数据库可售卖的地域和可用区信息。
                 * @param req DescribeSaleInfoRequest
                 * @return DescribeSaleInfoOutcome
                 */
                DescribeSaleInfoOutcome DescribeSaleInfo(const Model::DescribeSaleInfoRequest &request);
                void DescribeSaleInfoAsync(const Model::DescribeSaleInfoRequest& request, const DescribeSaleInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSaleInfoOutcomeCallable DescribeSaleInfoCallable(const Model::DescribeSaleInfoRequest& request);

                /**
                 *本接口（DescribeUpgradePrice）用于在扩容云数据库实例时，查询变配的价格。
                 * @param req DescribeUpgradePriceRequest
                 * @return DescribeUpgradePriceOutcome
                 */
                DescribeUpgradePriceOutcome DescribeUpgradePrice(const Model::DescribeUpgradePriceRequest &request);
                void DescribeUpgradePriceAsync(const Model::DescribeUpgradePriceRequest& request, const DescribeUpgradePriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUpgradePriceOutcomeCallable DescribeUpgradePriceCallable(const Model::DescribeUpgradePriceRequest& request);

                /**
                 *本接口(DestroyDBInstance)用于销毁已隔离的包年包月实例。
                 * @param req DestroyDBInstanceRequest
                 * @return DestroyDBInstanceOutcome
                 */
                DestroyDBInstanceOutcome DestroyDBInstance(const Model::DestroyDBInstanceRequest &request);
                void DestroyDBInstanceAsync(const Model::DestroyDBInstanceRequest& request, const DestroyDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyDBInstanceOutcomeCallable DestroyDBInstanceCallable(const Model::DestroyDBInstanceRequest& request);

                /**
                 *本接口（DestroyHourDBInstance）用于销毁MariaDB按量计费实例。
                 * @param req DestroyHourDBInstanceRequest
                 * @return DestroyHourDBInstanceOutcome
                 */
                DestroyHourDBInstanceOutcome DestroyHourDBInstance(const Model::DestroyHourDBInstanceRequest &request);
                void DestroyHourDBInstanceAsync(const Model::DestroyHourDBInstanceRequest& request, const DestroyHourDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyHourDBInstanceOutcomeCallable DestroyHourDBInstanceCallable(const Model::DestroyHourDBInstanceRequest& request);

                /**
                 *本接口(DisassociateSecurityGroups)用于安全组批量解绑实例。
                 * @param req DisassociateSecurityGroupsRequest
                 * @return DisassociateSecurityGroupsOutcome
                 */
                DisassociateSecurityGroupsOutcome DisassociateSecurityGroups(const Model::DisassociateSecurityGroupsRequest &request);
                void DisassociateSecurityGroupsAsync(const Model::DisassociateSecurityGroupsRequest& request, const DisassociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateSecurityGroupsOutcomeCallable DisassociateSecurityGroupsCallable(const Model::DisassociateSecurityGroupsRequest& request);

                /**
                 *相当于在mysqld中执行flush logs，完成切分的binlog将展示在实例控制台binlog列表里。
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
                 *本接口(InitDBInstances)用于初始化云数据库实例，包括设置默认字符集、表名大小写敏感等。
                 * @param req InitDBInstancesRequest
                 * @return InitDBInstancesOutcome
                 */
                InitDBInstancesOutcome InitDBInstances(const Model::InitDBInstancesRequest &request);
                void InitDBInstancesAsync(const Model::InitDBInstancesRequest& request, const InitDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InitDBInstancesOutcomeCallable InitDBInstancesCallable(const Model::InitDBInstancesRequest& request);

                /**
                 *本接口(IsolateDBInstance)用于隔离云数据库MariaDB实例（包年包月），隔离后不能通过IP和端口访问数据库。隔离的实例可在回收站中进行开机。若为欠费隔离，请尽快进行充值。
                 * @param req IsolateDBInstanceRequest
                 * @return IsolateDBInstanceOutcome
                 */
                IsolateDBInstanceOutcome IsolateDBInstance(const Model::IsolateDBInstanceRequest &request);
                void IsolateDBInstanceAsync(const Model::IsolateDBInstanceRequest& request, const IsolateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IsolateDBInstanceOutcomeCallable IsolateDBInstanceCallable(const Model::IsolateDBInstanceRequest& request);

                /**
                 *本接口（IsolateDedicatedDBInstance）用于隔离独享云数据库实例。
                 * @param req IsolateDedicatedDBInstanceRequest
                 * @return IsolateDedicatedDBInstanceOutcome
                 */
                IsolateDedicatedDBInstanceOutcome IsolateDedicatedDBInstance(const Model::IsolateDedicatedDBInstanceRequest &request);
                void IsolateDedicatedDBInstanceAsync(const Model::IsolateDedicatedDBInstanceRequest& request, const IsolateDedicatedDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IsolateDedicatedDBInstanceOutcomeCallable IsolateDedicatedDBInstanceCallable(const Model::IsolateDedicatedDBInstanceRequest& request);

                /**
                 *隔离MariaDB按量计费实例
                 * @param req IsolateHourDBInstanceRequest
                 * @return IsolateHourDBInstanceOutcome
                 */
                IsolateHourDBInstanceOutcome IsolateHourDBInstance(const Model::IsolateHourDBInstanceRequest &request);
                void IsolateHourDBInstanceAsync(const Model::IsolateHourDBInstanceRequest& request, const IsolateHourDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IsolateHourDBInstanceOutcomeCallable IsolateHourDBInstanceCallable(const Model::IsolateHourDBInstanceRequest& request);

                /**
                 *本接口（KillSession）用于杀死指定会话。
                 * @param req KillSessionRequest
                 * @return KillSessionOutcome
                 */
                KillSessionOutcome KillSession(const Model::KillSessionRequest &request);
                void KillSessionAsync(const Model::KillSessionRequest& request, const KillSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                KillSessionOutcomeCallable KillSessionCallable(const Model::KillSessionRequest& request);

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
                 *本接口（ModifyBackupTime）用于设置云数据库实例的备份时间。后台系统将根据此配置定期进行实例备份。
                 * @param req ModifyBackupTimeRequest
                 * @return ModifyBackupTimeOutcome
                 */
                ModifyBackupTimeOutcome ModifyBackupTime(const Model::ModifyBackupTimeRequest &request);
                void ModifyBackupTimeAsync(const Model::ModifyBackupTimeRequest& request, const ModifyBackupTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBackupTimeOutcomeCallable ModifyBackupTimeCallable(const Model::ModifyBackupTimeRequest& request);

                /**
                 *本接口(ModifyDBEncryptAttributes)用于修改实例数据加密。
                 * @param req ModifyDBEncryptAttributesRequest
                 * @return ModifyDBEncryptAttributesOutcome
                 */
                ModifyDBEncryptAttributesOutcome ModifyDBEncryptAttributes(const Model::ModifyDBEncryptAttributesRequest &request);
                void ModifyDBEncryptAttributesAsync(const Model::ModifyDBEncryptAttributesRequest& request, const ModifyDBEncryptAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBEncryptAttributesOutcomeCallable ModifyDBEncryptAttributesCallable(const Model::ModifyDBEncryptAttributesRequest& request);

                /**
                 *本接口（ModifyDBInstanceName）用于修改云数据库实例的名称。
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
                 *本接口（ModifyInstanceNetwork）用于修改实例所属网络
                 * @param req ModifyInstanceNetworkRequest
                 * @return ModifyInstanceNetworkOutcome
                 */
                ModifyInstanceNetworkOutcome ModifyInstanceNetwork(const Model::ModifyInstanceNetworkRequest &request);
                void ModifyInstanceNetworkAsync(const Model::ModifyInstanceNetworkRequest& request, const ModifyInstanceNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceNetworkOutcomeCallable ModifyInstanceNetworkCallable(const Model::ModifyInstanceNetworkRequest& request);

                /**
                 *本接口（ModifyInstanceVip）用于修改实例VIP
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
                 *本接口(ModifyLogFileRetentionPeriod)用于修改数据库备份日志保存天数。
                 * @param req ModifyLogFileRetentionPeriodRequest
                 * @return ModifyLogFileRetentionPeriodOutcome
                 */
                ModifyLogFileRetentionPeriodOutcome ModifyLogFileRetentionPeriod(const Model::ModifyLogFileRetentionPeriodRequest &request);
                void ModifyLogFileRetentionPeriodAsync(const Model::ModifyLogFileRetentionPeriodRequest& request, const ModifyLogFileRetentionPeriodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLogFileRetentionPeriodOutcomeCallable ModifyLogFileRetentionPeriodCallable(const Model::ModifyLogFileRetentionPeriodRequest& request);

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
                 *本接口 (ModifySyncTaskAttribute) 用于修改同步任务的属性（目前只支持修改任务名称）
                 * @param req ModifySyncTaskAttributeRequest
                 * @return ModifySyncTaskAttributeOutcome
                 */
                ModifySyncTaskAttributeOutcome ModifySyncTaskAttribute(const Model::ModifySyncTaskAttributeRequest &request);
                void ModifySyncTaskAttributeAsync(const Model::ModifySyncTaskAttributeRequest& request, const ModifySyncTaskAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySyncTaskAttributeOutcomeCallable ModifySyncTaskAttributeCallable(const Model::ModifySyncTaskAttributeRequest& request);

                /**
                 *本接口（OpenDBExtranetAccess）用于开通云数据库实例的外网访问。开通外网访问后，您可通过外网域名和端口访问实例，可使用查询实例列表接口获取外网域名和端口信息。
                 * @param req OpenDBExtranetAccessRequest
                 * @return OpenDBExtranetAccessOutcome
                 */
                OpenDBExtranetAccessOutcome OpenDBExtranetAccess(const Model::OpenDBExtranetAccessRequest &request);
                void OpenDBExtranetAccessAsync(const Model::OpenDBExtranetAccessRequest& request, const OpenDBExtranetAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenDBExtranetAccessOutcomeCallable OpenDBExtranetAccessCallable(const Model::OpenDBExtranetAccessRequest& request);

                /**
                 *本接口（RenewDBInstance）用于续费云数据库实例。
                 * @param req RenewDBInstanceRequest
                 * @return RenewDBInstanceOutcome
                 */
                RenewDBInstanceOutcome RenewDBInstance(const Model::RenewDBInstanceRequest &request);
                void RenewDBInstanceAsync(const Model::RenewDBInstanceRequest& request, const RenewDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewDBInstanceOutcomeCallable RenewDBInstanceCallable(const Model::RenewDBInstanceRequest& request);

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
                 *本接口（RestartDBInstances）用于重启数据库实例
                 * @param req RestartDBInstancesRequest
                 * @return RestartDBInstancesOutcome
                 */
                RestartDBInstancesOutcome RestartDBInstances(const Model::RestartDBInstancesRequest &request);
                void RestartDBInstancesAsync(const Model::RestartDBInstancesRequest& request, const RestartDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestartDBInstancesOutcomeCallable RestartDBInstancesCallable(const Model::RestartDBInstancesRequest& request);

                /**
                 *本接口（SwitchDBInstanceHA）用于发起实例主备切换。
                 * @param req SwitchDBInstanceHARequest
                 * @return SwitchDBInstanceHAOutcome
                 */
                SwitchDBInstanceHAOutcome SwitchDBInstanceHA(const Model::SwitchDBInstanceHARequest &request);
                void SwitchDBInstanceHAAsync(const Model::SwitchDBInstanceHARequest& request, const SwitchDBInstanceHAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SwitchDBInstanceHAOutcomeCallable SwitchDBInstanceHACallable(const Model::SwitchDBInstanceHARequest& request);

                /**
                 *本接口（TerminateDedicatedDBInstance）用于销毁已隔离的独享云数据库实例。
                 * @param req TerminateDedicatedDBInstanceRequest
                 * @return TerminateDedicatedDBInstanceOutcome
                 */
                TerminateDedicatedDBInstanceOutcome TerminateDedicatedDBInstance(const Model::TerminateDedicatedDBInstanceRequest &request);
                void TerminateDedicatedDBInstanceAsync(const Model::TerminateDedicatedDBInstanceRequest& request, const TerminateDedicatedDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateDedicatedDBInstanceOutcomeCallable TerminateDedicatedDBInstanceCallable(const Model::TerminateDedicatedDBInstanceRequest& request);

                /**
                 *本接口(UpgradeDBInstance)用于扩容云数据库实例。本接口完成下单和支付两个动作，如果发生支付失败的错误，调用用户账户相关接口中的支付订单接口（PayDeals）重新支付即可。
                 * @param req UpgradeDBInstanceRequest
                 * @return UpgradeDBInstanceOutcome
                 */
                UpgradeDBInstanceOutcome UpgradeDBInstance(const Model::UpgradeDBInstanceRequest &request);
                void UpgradeDBInstanceAsync(const Model::UpgradeDBInstanceRequest& request, const UpgradeDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeDBInstanceOutcomeCallable UpgradeDBInstanceCallable(const Model::UpgradeDBInstanceRequest& request);

                /**
                 *本接口(UpgradeDedicatedDBInstance)用于扩容独享云数据库实例。
                 * @param req UpgradeDedicatedDBInstanceRequest
                 * @return UpgradeDedicatedDBInstanceOutcome
                 */
                UpgradeDedicatedDBInstanceOutcome UpgradeDedicatedDBInstance(const Model::UpgradeDedicatedDBInstanceRequest &request);
                void UpgradeDedicatedDBInstanceAsync(const Model::UpgradeDedicatedDBInstanceRequest& request, const UpgradeDedicatedDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeDedicatedDBInstanceOutcomeCallable UpgradeDedicatedDBInstanceCallable(const Model::UpgradeDedicatedDBInstanceRequest& request);

                /**
                 *升级MariaDB按量计费实例
                 * @param req UpgradeHourDBInstanceRequest
                 * @return UpgradeHourDBInstanceOutcome
                 */
                UpgradeHourDBInstanceOutcome UpgradeHourDBInstance(const Model::UpgradeHourDBInstanceRequest &request);
                void UpgradeHourDBInstanceAsync(const Model::UpgradeHourDBInstanceRequest& request, const UpgradeHourDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeHourDBInstanceOutcomeCallable UpgradeHourDBInstanceCallable(const Model::UpgradeHourDBInstanceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MARIADBCLIENT_H_
