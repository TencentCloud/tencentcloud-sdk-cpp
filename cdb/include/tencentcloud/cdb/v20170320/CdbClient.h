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

#ifndef TENCENTCLOUD_CDB_V20170320_CDBCLIENT_H_
#define TENCENTCLOUD_CDB_V20170320_CDBCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cdb/v20170320/model/AddTimeWindowRequest.h>
#include <tencentcloud/cdb/v20170320/model/AddTimeWindowResponse.h>
#include <tencentcloud/cdb/v20170320/model/AssociateSecurityGroupsRequest.h>
#include <tencentcloud/cdb/v20170320/model/AssociateSecurityGroupsResponse.h>
#include <tencentcloud/cdb/v20170320/model/CloseWanServiceRequest.h>
#include <tencentcloud/cdb/v20170320/model/CloseWanServiceResponse.h>
#include <tencentcloud/cdb/v20170320/model/CreateAccountsRequest.h>
#include <tencentcloud/cdb/v20170320/model/CreateAccountsResponse.h>
#include <tencentcloud/cdb/v20170320/model/CreateBackupRequest.h>
#include <tencentcloud/cdb/v20170320/model/CreateBackupResponse.h>
#include <tencentcloud/cdb/v20170320/model/CreateDBImportJobRequest.h>
#include <tencentcloud/cdb/v20170320/model/CreateDBImportJobResponse.h>
#include <tencentcloud/cdb/v20170320/model/CreateDBInstanceRequest.h>
#include <tencentcloud/cdb/v20170320/model/CreateDBInstanceResponse.h>
#include <tencentcloud/cdb/v20170320/model/CreateDBInstanceHourRequest.h>
#include <tencentcloud/cdb/v20170320/model/CreateDBInstanceHourResponse.h>
#include <tencentcloud/cdb/v20170320/model/CreateParamTemplateRequest.h>
#include <tencentcloud/cdb/v20170320/model/CreateParamTemplateResponse.h>
#include <tencentcloud/cdb/v20170320/model/DeleteAccountsRequest.h>
#include <tencentcloud/cdb/v20170320/model/DeleteAccountsResponse.h>
#include <tencentcloud/cdb/v20170320/model/DeleteBackupRequest.h>
#include <tencentcloud/cdb/v20170320/model/DeleteBackupResponse.h>
#include <tencentcloud/cdb/v20170320/model/DeleteParamTemplateRequest.h>
#include <tencentcloud/cdb/v20170320/model/DeleteParamTemplateResponse.h>
#include <tencentcloud/cdb/v20170320/model/DeleteTimeWindowRequest.h>
#include <tencentcloud/cdb/v20170320/model/DeleteTimeWindowResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeAccountPrivilegesRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeAccountPrivilegesResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeAccountsRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeAccountsResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeAsyncRequestInfoRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeAsyncRequestInfoResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeBackupConfigRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeBackupConfigResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeBackupDatabasesRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeBackupDatabasesResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeBackupTablesRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeBackupTablesResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeBackupsRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeBackupsResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeBinlogsRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeBinlogsResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBImportRecordsRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBImportRecordsResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBInstanceCharsetRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBInstanceCharsetResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBInstanceConfigRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBInstanceConfigResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBInstanceGTIDRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBInstanceGTIDResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBInstanceRebootTimeRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBInstanceRebootTimeResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBInstancesRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBInstancesResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBPriceRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBPriceResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBSecurityGroupsRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBSecurityGroupsResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBSwitchRecordsRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBSwitchRecordsResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBZoneConfigRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBZoneConfigResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDatabasesRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDatabasesResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDefaultParamsRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDefaultParamsResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDeviceMonitorInfoRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDeviceMonitorInfoResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeInstanceParamRecordsRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeInstanceParamRecordsResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeInstanceParamsRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeInstanceParamsResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeParamTemplateInfoRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeParamTemplateInfoResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeParamTemplatesRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeParamTemplatesResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeProjectSecurityGroupsRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeProjectSecurityGroupsResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeRollbackRangeTimeRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeRollbackRangeTimeResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeSlowLogsRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeSlowLogsResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeSupportedPrivilegesRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeSupportedPrivilegesResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeTablesRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeTablesResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeTagsOfInstanceIdsRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeTagsOfInstanceIdsResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeTasksRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeTasksResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeTimeWindowRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeTimeWindowResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeUploadedFilesRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeUploadedFilesResponse.h>
#include <tencentcloud/cdb/v20170320/model/DisassociateSecurityGroupsRequest.h>
#include <tencentcloud/cdb/v20170320/model/DisassociateSecurityGroupsResponse.h>
#include <tencentcloud/cdb/v20170320/model/InitDBInstancesRequest.h>
#include <tencentcloud/cdb/v20170320/model/InitDBInstancesResponse.h>
#include <tencentcloud/cdb/v20170320/model/InquiryPriceUpgradeInstancesRequest.h>
#include <tencentcloud/cdb/v20170320/model/InquiryPriceUpgradeInstancesResponse.h>
#include <tencentcloud/cdb/v20170320/model/IsolateDBInstanceRequest.h>
#include <tencentcloud/cdb/v20170320/model/IsolateDBInstanceResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyAccountDescriptionRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyAccountDescriptionResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyAccountPasswordRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyAccountPasswordResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyAccountPrivilegesRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyAccountPrivilegesResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyAutoRenewFlagRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyAutoRenewFlagResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyBackupConfigRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyBackupConfigResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyDBInstanceNameRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyDBInstanceNameResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyDBInstanceProjectRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyDBInstanceProjectResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyDBInstanceSecurityGroupsRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyDBInstanceSecurityGroupsResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyDBInstanceVipVportRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyDBInstanceVipVportResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyInstanceParamRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyInstanceParamResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyInstanceTagRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyInstanceTagResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyParamTemplateRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyParamTemplateResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyTimeWindowRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyTimeWindowResponse.h>
#include <tencentcloud/cdb/v20170320/model/OpenDBInstanceGTIDRequest.h>
#include <tencentcloud/cdb/v20170320/model/OpenDBInstanceGTIDResponse.h>
#include <tencentcloud/cdb/v20170320/model/OpenWanServiceRequest.h>
#include <tencentcloud/cdb/v20170320/model/OpenWanServiceResponse.h>
#include <tencentcloud/cdb/v20170320/model/RenewDBInstanceRequest.h>
#include <tencentcloud/cdb/v20170320/model/RenewDBInstanceResponse.h>
#include <tencentcloud/cdb/v20170320/model/RestartDBInstancesRequest.h>
#include <tencentcloud/cdb/v20170320/model/RestartDBInstancesResponse.h>
#include <tencentcloud/cdb/v20170320/model/StartBatchRollbackRequest.h>
#include <tencentcloud/cdb/v20170320/model/StartBatchRollbackResponse.h>
#include <tencentcloud/cdb/v20170320/model/StopDBImportJobRequest.h>
#include <tencentcloud/cdb/v20170320/model/StopDBImportJobResponse.h>
#include <tencentcloud/cdb/v20170320/model/SwitchForUpgradeRequest.h>
#include <tencentcloud/cdb/v20170320/model/SwitchForUpgradeResponse.h>
#include <tencentcloud/cdb/v20170320/model/UpgradeDBInstanceRequest.h>
#include <tencentcloud/cdb/v20170320/model/UpgradeDBInstanceResponse.h>
#include <tencentcloud/cdb/v20170320/model/UpgradeDBInstanceEngineVersionRequest.h>
#include <tencentcloud/cdb/v20170320/model/UpgradeDBInstanceEngineVersionResponse.h>
#include <tencentcloud/cdb/v20170320/model/VerifyRootAccountRequest.h>
#include <tencentcloud/cdb/v20170320/model/VerifyRootAccountResponse.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            class CdbClient : public AbstractClient
            {
            public:
                CdbClient(const Credential &credential, const std::string &region);
                CdbClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::AddTimeWindowResponse> AddTimeWindowOutcome;
                typedef std::future<AddTimeWindowOutcome> AddTimeWindowOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::AddTimeWindowRequest&, AddTimeWindowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddTimeWindowAsyncHandler;
                typedef Outcome<Error, Model::AssociateSecurityGroupsResponse> AssociateSecurityGroupsOutcome;
                typedef std::future<AssociateSecurityGroupsOutcome> AssociateSecurityGroupsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::AssociateSecurityGroupsRequest&, AssociateSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateSecurityGroupsAsyncHandler;
                typedef Outcome<Error, Model::CloseWanServiceResponse> CloseWanServiceOutcome;
                typedef std::future<CloseWanServiceOutcome> CloseWanServiceOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::CloseWanServiceRequest&, CloseWanServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseWanServiceAsyncHandler;
                typedef Outcome<Error, Model::CreateAccountsResponse> CreateAccountsOutcome;
                typedef std::future<CreateAccountsOutcome> CreateAccountsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::CreateAccountsRequest&, CreateAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccountsAsyncHandler;
                typedef Outcome<Error, Model::CreateBackupResponse> CreateBackupOutcome;
                typedef std::future<CreateBackupOutcome> CreateBackupOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::CreateBackupRequest&, CreateBackupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBackupAsyncHandler;
                typedef Outcome<Error, Model::CreateDBImportJobResponse> CreateDBImportJobOutcome;
                typedef std::future<CreateDBImportJobOutcome> CreateDBImportJobOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::CreateDBImportJobRequest&, CreateDBImportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBImportJobAsyncHandler;
                typedef Outcome<Error, Model::CreateDBInstanceResponse> CreateDBInstanceOutcome;
                typedef std::future<CreateDBInstanceOutcome> CreateDBInstanceOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::CreateDBInstanceRequest&, CreateDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBInstanceAsyncHandler;
                typedef Outcome<Error, Model::CreateDBInstanceHourResponse> CreateDBInstanceHourOutcome;
                typedef std::future<CreateDBInstanceHourOutcome> CreateDBInstanceHourOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::CreateDBInstanceHourRequest&, CreateDBInstanceHourOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBInstanceHourAsyncHandler;
                typedef Outcome<Error, Model::CreateParamTemplateResponse> CreateParamTemplateOutcome;
                typedef std::future<CreateParamTemplateOutcome> CreateParamTemplateOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::CreateParamTemplateRequest&, CreateParamTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateParamTemplateAsyncHandler;
                typedef Outcome<Error, Model::DeleteAccountsResponse> DeleteAccountsOutcome;
                typedef std::future<DeleteAccountsOutcome> DeleteAccountsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DeleteAccountsRequest&, DeleteAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccountsAsyncHandler;
                typedef Outcome<Error, Model::DeleteBackupResponse> DeleteBackupOutcome;
                typedef std::future<DeleteBackupOutcome> DeleteBackupOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DeleteBackupRequest&, DeleteBackupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBackupAsyncHandler;
                typedef Outcome<Error, Model::DeleteParamTemplateResponse> DeleteParamTemplateOutcome;
                typedef std::future<DeleteParamTemplateOutcome> DeleteParamTemplateOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DeleteParamTemplateRequest&, DeleteParamTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteParamTemplateAsyncHandler;
                typedef Outcome<Error, Model::DeleteTimeWindowResponse> DeleteTimeWindowOutcome;
                typedef std::future<DeleteTimeWindowOutcome> DeleteTimeWindowOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DeleteTimeWindowRequest&, DeleteTimeWindowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTimeWindowAsyncHandler;
                typedef Outcome<Error, Model::DescribeAccountPrivilegesResponse> DescribeAccountPrivilegesOutcome;
                typedef std::future<DescribeAccountPrivilegesOutcome> DescribeAccountPrivilegesOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeAccountPrivilegesRequest&, DescribeAccountPrivilegesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountPrivilegesAsyncHandler;
                typedef Outcome<Error, Model::DescribeAccountsResponse> DescribeAccountsOutcome;
                typedef std::future<DescribeAccountsOutcome> DescribeAccountsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeAccountsRequest&, DescribeAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountsAsyncHandler;
                typedef Outcome<Error, Model::DescribeAsyncRequestInfoResponse> DescribeAsyncRequestInfoOutcome;
                typedef std::future<DescribeAsyncRequestInfoOutcome> DescribeAsyncRequestInfoOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeAsyncRequestInfoRequest&, DescribeAsyncRequestInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAsyncRequestInfoAsyncHandler;
                typedef Outcome<Error, Model::DescribeBackupConfigResponse> DescribeBackupConfigOutcome;
                typedef std::future<DescribeBackupConfigOutcome> DescribeBackupConfigOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeBackupConfigRequest&, DescribeBackupConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupConfigAsyncHandler;
                typedef Outcome<Error, Model::DescribeBackupDatabasesResponse> DescribeBackupDatabasesOutcome;
                typedef std::future<DescribeBackupDatabasesOutcome> DescribeBackupDatabasesOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeBackupDatabasesRequest&, DescribeBackupDatabasesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupDatabasesAsyncHandler;
                typedef Outcome<Error, Model::DescribeBackupTablesResponse> DescribeBackupTablesOutcome;
                typedef std::future<DescribeBackupTablesOutcome> DescribeBackupTablesOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeBackupTablesRequest&, DescribeBackupTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupTablesAsyncHandler;
                typedef Outcome<Error, Model::DescribeBackupsResponse> DescribeBackupsOutcome;
                typedef std::future<DescribeBackupsOutcome> DescribeBackupsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeBackupsRequest&, DescribeBackupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupsAsyncHandler;
                typedef Outcome<Error, Model::DescribeBinlogsResponse> DescribeBinlogsOutcome;
                typedef std::future<DescribeBinlogsOutcome> DescribeBinlogsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeBinlogsRequest&, DescribeBinlogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBinlogsAsyncHandler;
                typedef Outcome<Error, Model::DescribeDBImportRecordsResponse> DescribeDBImportRecordsOutcome;
                typedef std::future<DescribeDBImportRecordsOutcome> DescribeDBImportRecordsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeDBImportRecordsRequest&, DescribeDBImportRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBImportRecordsAsyncHandler;
                typedef Outcome<Error, Model::DescribeDBInstanceCharsetResponse> DescribeDBInstanceCharsetOutcome;
                typedef std::future<DescribeDBInstanceCharsetOutcome> DescribeDBInstanceCharsetOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeDBInstanceCharsetRequest&, DescribeDBInstanceCharsetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceCharsetAsyncHandler;
                typedef Outcome<Error, Model::DescribeDBInstanceConfigResponse> DescribeDBInstanceConfigOutcome;
                typedef std::future<DescribeDBInstanceConfigOutcome> DescribeDBInstanceConfigOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeDBInstanceConfigRequest&, DescribeDBInstanceConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceConfigAsyncHandler;
                typedef Outcome<Error, Model::DescribeDBInstanceGTIDResponse> DescribeDBInstanceGTIDOutcome;
                typedef std::future<DescribeDBInstanceGTIDOutcome> DescribeDBInstanceGTIDOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeDBInstanceGTIDRequest&, DescribeDBInstanceGTIDOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceGTIDAsyncHandler;
                typedef Outcome<Error, Model::DescribeDBInstanceRebootTimeResponse> DescribeDBInstanceRebootTimeOutcome;
                typedef std::future<DescribeDBInstanceRebootTimeOutcome> DescribeDBInstanceRebootTimeOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeDBInstanceRebootTimeRequest&, DescribeDBInstanceRebootTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceRebootTimeAsyncHandler;
                typedef Outcome<Error, Model::DescribeDBInstancesResponse> DescribeDBInstancesOutcome;
                typedef std::future<DescribeDBInstancesOutcome> DescribeDBInstancesOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeDBInstancesRequest&, DescribeDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancesAsyncHandler;
                typedef Outcome<Error, Model::DescribeDBPriceResponse> DescribeDBPriceOutcome;
                typedef std::future<DescribeDBPriceOutcome> DescribeDBPriceOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeDBPriceRequest&, DescribeDBPriceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBPriceAsyncHandler;
                typedef Outcome<Error, Model::DescribeDBSecurityGroupsResponse> DescribeDBSecurityGroupsOutcome;
                typedef std::future<DescribeDBSecurityGroupsOutcome> DescribeDBSecurityGroupsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeDBSecurityGroupsRequest&, DescribeDBSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBSecurityGroupsAsyncHandler;
                typedef Outcome<Error, Model::DescribeDBSwitchRecordsResponse> DescribeDBSwitchRecordsOutcome;
                typedef std::future<DescribeDBSwitchRecordsOutcome> DescribeDBSwitchRecordsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeDBSwitchRecordsRequest&, DescribeDBSwitchRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBSwitchRecordsAsyncHandler;
                typedef Outcome<Error, Model::DescribeDBZoneConfigResponse> DescribeDBZoneConfigOutcome;
                typedef std::future<DescribeDBZoneConfigOutcome> DescribeDBZoneConfigOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeDBZoneConfigRequest&, DescribeDBZoneConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBZoneConfigAsyncHandler;
                typedef Outcome<Error, Model::DescribeDatabasesResponse> DescribeDatabasesOutcome;
                typedef std::future<DescribeDatabasesOutcome> DescribeDatabasesOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeDatabasesRequest&, DescribeDatabasesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabasesAsyncHandler;
                typedef Outcome<Error, Model::DescribeDefaultParamsResponse> DescribeDefaultParamsOutcome;
                typedef std::future<DescribeDefaultParamsOutcome> DescribeDefaultParamsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeDefaultParamsRequest&, DescribeDefaultParamsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDefaultParamsAsyncHandler;
                typedef Outcome<Error, Model::DescribeDeviceMonitorInfoResponse> DescribeDeviceMonitorInfoOutcome;
                typedef std::future<DescribeDeviceMonitorInfoOutcome> DescribeDeviceMonitorInfoOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeDeviceMonitorInfoRequest&, DescribeDeviceMonitorInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceMonitorInfoAsyncHandler;
                typedef Outcome<Error, Model::DescribeInstanceParamRecordsResponse> DescribeInstanceParamRecordsOutcome;
                typedef std::future<DescribeInstanceParamRecordsOutcome> DescribeInstanceParamRecordsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeInstanceParamRecordsRequest&, DescribeInstanceParamRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceParamRecordsAsyncHandler;
                typedef Outcome<Error, Model::DescribeInstanceParamsResponse> DescribeInstanceParamsOutcome;
                typedef std::future<DescribeInstanceParamsOutcome> DescribeInstanceParamsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeInstanceParamsRequest&, DescribeInstanceParamsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceParamsAsyncHandler;
                typedef Outcome<Error, Model::DescribeParamTemplateInfoResponse> DescribeParamTemplateInfoOutcome;
                typedef std::future<DescribeParamTemplateInfoOutcome> DescribeParamTemplateInfoOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeParamTemplateInfoRequest&, DescribeParamTemplateInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeParamTemplateInfoAsyncHandler;
                typedef Outcome<Error, Model::DescribeParamTemplatesResponse> DescribeParamTemplatesOutcome;
                typedef std::future<DescribeParamTemplatesOutcome> DescribeParamTemplatesOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeParamTemplatesRequest&, DescribeParamTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeParamTemplatesAsyncHandler;
                typedef Outcome<Error, Model::DescribeProjectSecurityGroupsResponse> DescribeProjectSecurityGroupsOutcome;
                typedef std::future<DescribeProjectSecurityGroupsOutcome> DescribeProjectSecurityGroupsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeProjectSecurityGroupsRequest&, DescribeProjectSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectSecurityGroupsAsyncHandler;
                typedef Outcome<Error, Model::DescribeRollbackRangeTimeResponse> DescribeRollbackRangeTimeOutcome;
                typedef std::future<DescribeRollbackRangeTimeOutcome> DescribeRollbackRangeTimeOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeRollbackRangeTimeRequest&, DescribeRollbackRangeTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRollbackRangeTimeAsyncHandler;
                typedef Outcome<Error, Model::DescribeSlowLogsResponse> DescribeSlowLogsOutcome;
                typedef std::future<DescribeSlowLogsOutcome> DescribeSlowLogsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeSlowLogsRequest&, DescribeSlowLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowLogsAsyncHandler;
                typedef Outcome<Error, Model::DescribeSupportedPrivilegesResponse> DescribeSupportedPrivilegesOutcome;
                typedef std::future<DescribeSupportedPrivilegesOutcome> DescribeSupportedPrivilegesOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeSupportedPrivilegesRequest&, DescribeSupportedPrivilegesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSupportedPrivilegesAsyncHandler;
                typedef Outcome<Error, Model::DescribeTablesResponse> DescribeTablesOutcome;
                typedef std::future<DescribeTablesOutcome> DescribeTablesOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeTablesRequest&, DescribeTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTablesAsyncHandler;
                typedef Outcome<Error, Model::DescribeTagsOfInstanceIdsResponse> DescribeTagsOfInstanceIdsOutcome;
                typedef std::future<DescribeTagsOfInstanceIdsOutcome> DescribeTagsOfInstanceIdsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeTagsOfInstanceIdsRequest&, DescribeTagsOfInstanceIdsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagsOfInstanceIdsAsyncHandler;
                typedef Outcome<Error, Model::DescribeTasksResponse> DescribeTasksOutcome;
                typedef std::future<DescribeTasksOutcome> DescribeTasksOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeTasksRequest&, DescribeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTasksAsyncHandler;
                typedef Outcome<Error, Model::DescribeTimeWindowResponse> DescribeTimeWindowOutcome;
                typedef std::future<DescribeTimeWindowOutcome> DescribeTimeWindowOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeTimeWindowRequest&, DescribeTimeWindowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTimeWindowAsyncHandler;
                typedef Outcome<Error, Model::DescribeUploadedFilesResponse> DescribeUploadedFilesOutcome;
                typedef std::future<DescribeUploadedFilesOutcome> DescribeUploadedFilesOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeUploadedFilesRequest&, DescribeUploadedFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUploadedFilesAsyncHandler;
                typedef Outcome<Error, Model::DisassociateSecurityGroupsResponse> DisassociateSecurityGroupsOutcome;
                typedef std::future<DisassociateSecurityGroupsOutcome> DisassociateSecurityGroupsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DisassociateSecurityGroupsRequest&, DisassociateSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateSecurityGroupsAsyncHandler;
                typedef Outcome<Error, Model::InitDBInstancesResponse> InitDBInstancesOutcome;
                typedef std::future<InitDBInstancesOutcome> InitDBInstancesOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::InitDBInstancesRequest&, InitDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InitDBInstancesAsyncHandler;
                typedef Outcome<Error, Model::InquiryPriceUpgradeInstancesResponse> InquiryPriceUpgradeInstancesOutcome;
                typedef std::future<InquiryPriceUpgradeInstancesOutcome> InquiryPriceUpgradeInstancesOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::InquiryPriceUpgradeInstancesRequest&, InquiryPriceUpgradeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceUpgradeInstancesAsyncHandler;
                typedef Outcome<Error, Model::IsolateDBInstanceResponse> IsolateDBInstanceOutcome;
                typedef std::future<IsolateDBInstanceOutcome> IsolateDBInstanceOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::IsolateDBInstanceRequest&, IsolateDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IsolateDBInstanceAsyncHandler;
                typedef Outcome<Error, Model::ModifyAccountDescriptionResponse> ModifyAccountDescriptionOutcome;
                typedef std::future<ModifyAccountDescriptionOutcome> ModifyAccountDescriptionOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyAccountDescriptionRequest&, ModifyAccountDescriptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountDescriptionAsyncHandler;
                typedef Outcome<Error, Model::ModifyAccountPasswordResponse> ModifyAccountPasswordOutcome;
                typedef std::future<ModifyAccountPasswordOutcome> ModifyAccountPasswordOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyAccountPasswordRequest&, ModifyAccountPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountPasswordAsyncHandler;
                typedef Outcome<Error, Model::ModifyAccountPrivilegesResponse> ModifyAccountPrivilegesOutcome;
                typedef std::future<ModifyAccountPrivilegesOutcome> ModifyAccountPrivilegesOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyAccountPrivilegesRequest&, ModifyAccountPrivilegesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountPrivilegesAsyncHandler;
                typedef Outcome<Error, Model::ModifyAutoRenewFlagResponse> ModifyAutoRenewFlagOutcome;
                typedef std::future<ModifyAutoRenewFlagOutcome> ModifyAutoRenewFlagOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyAutoRenewFlagRequest&, ModifyAutoRenewFlagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAutoRenewFlagAsyncHandler;
                typedef Outcome<Error, Model::ModifyBackupConfigResponse> ModifyBackupConfigOutcome;
                typedef std::future<ModifyBackupConfigOutcome> ModifyBackupConfigOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyBackupConfigRequest&, ModifyBackupConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupConfigAsyncHandler;
                typedef Outcome<Error, Model::ModifyDBInstanceNameResponse> ModifyDBInstanceNameOutcome;
                typedef std::future<ModifyDBInstanceNameOutcome> ModifyDBInstanceNameOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyDBInstanceNameRequest&, ModifyDBInstanceNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceNameAsyncHandler;
                typedef Outcome<Error, Model::ModifyDBInstanceProjectResponse> ModifyDBInstanceProjectOutcome;
                typedef std::future<ModifyDBInstanceProjectOutcome> ModifyDBInstanceProjectOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyDBInstanceProjectRequest&, ModifyDBInstanceProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceProjectAsyncHandler;
                typedef Outcome<Error, Model::ModifyDBInstanceSecurityGroupsResponse> ModifyDBInstanceSecurityGroupsOutcome;
                typedef std::future<ModifyDBInstanceSecurityGroupsOutcome> ModifyDBInstanceSecurityGroupsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyDBInstanceSecurityGroupsRequest&, ModifyDBInstanceSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceSecurityGroupsAsyncHandler;
                typedef Outcome<Error, Model::ModifyDBInstanceVipVportResponse> ModifyDBInstanceVipVportOutcome;
                typedef std::future<ModifyDBInstanceVipVportOutcome> ModifyDBInstanceVipVportOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyDBInstanceVipVportRequest&, ModifyDBInstanceVipVportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceVipVportAsyncHandler;
                typedef Outcome<Error, Model::ModifyInstanceParamResponse> ModifyInstanceParamOutcome;
                typedef std::future<ModifyInstanceParamOutcome> ModifyInstanceParamOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyInstanceParamRequest&, ModifyInstanceParamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceParamAsyncHandler;
                typedef Outcome<Error, Model::ModifyInstanceTagResponse> ModifyInstanceTagOutcome;
                typedef std::future<ModifyInstanceTagOutcome> ModifyInstanceTagOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyInstanceTagRequest&, ModifyInstanceTagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceTagAsyncHandler;
                typedef Outcome<Error, Model::ModifyParamTemplateResponse> ModifyParamTemplateOutcome;
                typedef std::future<ModifyParamTemplateOutcome> ModifyParamTemplateOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyParamTemplateRequest&, ModifyParamTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyParamTemplateAsyncHandler;
                typedef Outcome<Error, Model::ModifyTimeWindowResponse> ModifyTimeWindowOutcome;
                typedef std::future<ModifyTimeWindowOutcome> ModifyTimeWindowOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyTimeWindowRequest&, ModifyTimeWindowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTimeWindowAsyncHandler;
                typedef Outcome<Error, Model::OpenDBInstanceGTIDResponse> OpenDBInstanceGTIDOutcome;
                typedef std::future<OpenDBInstanceGTIDOutcome> OpenDBInstanceGTIDOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::OpenDBInstanceGTIDRequest&, OpenDBInstanceGTIDOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenDBInstanceGTIDAsyncHandler;
                typedef Outcome<Error, Model::OpenWanServiceResponse> OpenWanServiceOutcome;
                typedef std::future<OpenWanServiceOutcome> OpenWanServiceOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::OpenWanServiceRequest&, OpenWanServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenWanServiceAsyncHandler;
                typedef Outcome<Error, Model::RenewDBInstanceResponse> RenewDBInstanceOutcome;
                typedef std::future<RenewDBInstanceOutcome> RenewDBInstanceOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::RenewDBInstanceRequest&, RenewDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewDBInstanceAsyncHandler;
                typedef Outcome<Error, Model::RestartDBInstancesResponse> RestartDBInstancesOutcome;
                typedef std::future<RestartDBInstancesOutcome> RestartDBInstancesOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::RestartDBInstancesRequest&, RestartDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestartDBInstancesAsyncHandler;
                typedef Outcome<Error, Model::StartBatchRollbackResponse> StartBatchRollbackOutcome;
                typedef std::future<StartBatchRollbackOutcome> StartBatchRollbackOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::StartBatchRollbackRequest&, StartBatchRollbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartBatchRollbackAsyncHandler;
                typedef Outcome<Error, Model::StopDBImportJobResponse> StopDBImportJobOutcome;
                typedef std::future<StopDBImportJobOutcome> StopDBImportJobOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::StopDBImportJobRequest&, StopDBImportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopDBImportJobAsyncHandler;
                typedef Outcome<Error, Model::SwitchForUpgradeResponse> SwitchForUpgradeOutcome;
                typedef std::future<SwitchForUpgradeOutcome> SwitchForUpgradeOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::SwitchForUpgradeRequest&, SwitchForUpgradeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SwitchForUpgradeAsyncHandler;
                typedef Outcome<Error, Model::UpgradeDBInstanceResponse> UpgradeDBInstanceOutcome;
                typedef std::future<UpgradeDBInstanceOutcome> UpgradeDBInstanceOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::UpgradeDBInstanceRequest&, UpgradeDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDBInstanceAsyncHandler;
                typedef Outcome<Error, Model::UpgradeDBInstanceEngineVersionResponse> UpgradeDBInstanceEngineVersionOutcome;
                typedef std::future<UpgradeDBInstanceEngineVersionOutcome> UpgradeDBInstanceEngineVersionOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::UpgradeDBInstanceEngineVersionRequest&, UpgradeDBInstanceEngineVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDBInstanceEngineVersionAsyncHandler;
                typedef Outcome<Error, Model::VerifyRootAccountResponse> VerifyRootAccountOutcome;
                typedef std::future<VerifyRootAccountOutcome> VerifyRootAccountOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::VerifyRootAccountRequest&, VerifyRootAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VerifyRootAccountAsyncHandler;



                /**
                 *本接口(AddTimeWindow)用于添加云数据库实例的维护时间窗口，以指定实例在哪些时间段可以自动执行切换访问操作。
                 * @param req AddTimeWindowRequest
                 * @return AddTimeWindowOutcome
                 */
                AddTimeWindowOutcome AddTimeWindow(const Model::AddTimeWindowRequest &request);
                void AddTimeWindowAsync(const Model::AddTimeWindowRequest& request, const AddTimeWindowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddTimeWindowOutcomeCallable AddTimeWindowCallable(const Model::AddTimeWindowRequest& request);

                /**
                 *本接口(AssociateSecurityGroups)用于安全组批量绑定实例。
                 * @param req AssociateSecurityGroupsRequest
                 * @return AssociateSecurityGroupsOutcome
                 */
                AssociateSecurityGroupsOutcome AssociateSecurityGroups(const Model::AssociateSecurityGroupsRequest &request);
                void AssociateSecurityGroupsAsync(const Model::AssociateSecurityGroupsRequest& request, const AssociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateSecurityGroupsOutcomeCallable AssociateSecurityGroupsCallable(const Model::AssociateSecurityGroupsRequest& request);

                /**
                 *本接口(CloseWanService)用于关闭云数据库实例的外网访问。关闭外网访问后，外网地址将不可访问。
                 * @param req CloseWanServiceRequest
                 * @return CloseWanServiceOutcome
                 */
                CloseWanServiceOutcome CloseWanService(const Model::CloseWanServiceRequest &request);
                void CloseWanServiceAsync(const Model::CloseWanServiceRequest& request, const CloseWanServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloseWanServiceOutcomeCallable CloseWanServiceCallable(const Model::CloseWanServiceRequest& request);

                /**
                 *本接口(CreateAccounts)用于创建云数据库的账户，需要指定新的账户名和域名，以及所对应的密码，同时可以设置账号的备注信息。
                 * @param req CreateAccountsRequest
                 * @return CreateAccountsOutcome
                 */
                CreateAccountsOutcome CreateAccounts(const Model::CreateAccountsRequest &request);
                void CreateAccountsAsync(const Model::CreateAccountsRequest& request, const CreateAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAccountsOutcomeCallable CreateAccountsCallable(const Model::CreateAccountsRequest& request);

                /**
                 *本接口(CreateBackup)用于创建数据库备份。
                 * @param req CreateBackupRequest
                 * @return CreateBackupOutcome
                 */
                CreateBackupOutcome CreateBackup(const Model::CreateBackupRequest &request);
                void CreateBackupAsync(const Model::CreateBackupRequest& request, const CreateBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBackupOutcomeCallable CreateBackupCallable(const Model::CreateBackupRequest& request);

                /**
                 *本接口(CreateDBImportJob)用于创建云数据库数据导入任务。

注意，用户进行数据导入任务的文件，必须提前上传到腾讯云。用户须在控制台进行文件导入。
                 * @param req CreateDBImportJobRequest
                 * @return CreateDBImportJobOutcome
                 */
                CreateDBImportJobOutcome CreateDBImportJob(const Model::CreateDBImportJobRequest &request);
                void CreateDBImportJobAsync(const Model::CreateDBImportJobRequest& request, const CreateDBImportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDBImportJobOutcomeCallable CreateDBImportJobCallable(const Model::CreateDBImportJobRequest& request);

                /**
                 *本接口(CreateDBInstance)用于创建包年包月的云数据库实例（包括主实例、灾备实例和只读实例），可通过传入实例规格、MySQL 版本号、购买时长和数量等信息创建云数据库实例。

该接口为异步接口，您还可以使用[查询实例列表](https://cloud.tencent.com/document/api/236/15872)接口查询该实例的详细信息。当该实例的Status为1，且TaskStatus为0，表示实例已经发货成功。

1. 首先请使用[获取云数据库可售卖规格](https://cloud.tencent.com/document/api/236/17229)接口查询可创建的实例规格信息，然后请使用[查询数据库价格](https://cloud.tencent.com/document/api/236/18566)接口查询可创建实例的售卖价格；
2. 单次创建实例最大支持 100 个，实例时长最大支持 36 个月；
3. 支持创建 MySQL5.5 、 MySQL5.6 、 MySQL5.7 版本；
4. 支持创建主实例、只读实例、灾备实例；
5. 当入参指定Port或ParamList时，该实例会进行初始化操作；
                 * @param req CreateDBInstanceRequest
                 * @return CreateDBInstanceOutcome
                 */
                CreateDBInstanceOutcome CreateDBInstance(const Model::CreateDBInstanceRequest &request);
                void CreateDBInstanceAsync(const Model::CreateDBInstanceRequest& request, const CreateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDBInstanceOutcomeCallable CreateDBInstanceCallable(const Model::CreateDBInstanceRequest& request);

                /**
                 *本接口(CreateDBInstanceHour)用于创建按量计费的实例，可通过传入实例规格、MySQL 版本号和数量等信息创建云数据库实例，支持主实例、灾备实例和只读实例的创建。

该接口为异步接口，您还可以使用[查询实例列表](https://cloud.tencent.com/document/api/236/15872)接口查询该实例的详细信息。当该实例的Status为1，且TaskStatus为0，表示实例已经发货成功。

1. 首先请使用[获取云数据库可售卖规格](https://cloud.tencent.com/document/api/236/17229)接口查询可创建的实例规格信息，然后请使用[查询数据库价格](https://cloud.tencent.com/document/api/236/18566)接口查询可创建实例的售卖价格；
2. 单次创建实例最大支持 100 个，实例时长最大支持 36 个月；
3. 支持创建 MySQL5.5、MySQL5.6和MySQL5.7 版本；
4. 支持创建主实例、灾备实例和只读实例；
5. 当入参指定Port或ParamList时，该实例会进行初始化操作；
                 * @param req CreateDBInstanceHourRequest
                 * @return CreateDBInstanceHourOutcome
                 */
                CreateDBInstanceHourOutcome CreateDBInstanceHour(const Model::CreateDBInstanceHourRequest &request);
                void CreateDBInstanceHourAsync(const Model::CreateDBInstanceHourRequest& request, const CreateDBInstanceHourAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDBInstanceHourOutcomeCallable CreateDBInstanceHourCallable(const Model::CreateDBInstanceHourRequest& request);

                /**
                 *该接口（CreateParamTemplate）用于创建参数模板。
                 * @param req CreateParamTemplateRequest
                 * @return CreateParamTemplateOutcome
                 */
                CreateParamTemplateOutcome CreateParamTemplate(const Model::CreateParamTemplateRequest &request);
                void CreateParamTemplateAsync(const Model::CreateParamTemplateRequest& request, const CreateParamTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateParamTemplateOutcomeCallable CreateParamTemplateCallable(const Model::CreateParamTemplateRequest& request);

                /**
                 *本接口(DeleteAccounts)用于删除云数据库的账户。
                 * @param req DeleteAccountsRequest
                 * @return DeleteAccountsOutcome
                 */
                DeleteAccountsOutcome DeleteAccounts(const Model::DeleteAccountsRequest &request);
                void DeleteAccountsAsync(const Model::DeleteAccountsRequest& request, const DeleteAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAccountsOutcomeCallable DeleteAccountsCallable(const Model::DeleteAccountsRequest& request);

                /**
                 *本接口(DeleteBackup)用于删除数据库备份。
                 * @param req DeleteBackupRequest
                 * @return DeleteBackupOutcome
                 */
                DeleteBackupOutcome DeleteBackup(const Model::DeleteBackupRequest &request);
                void DeleteBackupAsync(const Model::DeleteBackupRequest& request, const DeleteBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBackupOutcomeCallable DeleteBackupCallable(const Model::DeleteBackupRequest& request);

                /**
                 *该接口（DeleteParamTemplate）用于删除参数模板。
                 * @param req DeleteParamTemplateRequest
                 * @return DeleteParamTemplateOutcome
                 */
                DeleteParamTemplateOutcome DeleteParamTemplate(const Model::DeleteParamTemplateRequest &request);
                void DeleteParamTemplateAsync(const Model::DeleteParamTemplateRequest& request, const DeleteParamTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteParamTemplateOutcomeCallable DeleteParamTemplateCallable(const Model::DeleteParamTemplateRequest& request);

                /**
                 *本接口(DeleteTimeWindow)用于删除云数据库实例的维护时间窗口。删除实例维护时间窗口之后，默认的维护时间窗为 03:00-04:00，即当选择在维护时间窗口内切换访问新实例时，默认会在03:00-04:00点进行切换访问新实例。
                 * @param req DeleteTimeWindowRequest
                 * @return DeleteTimeWindowOutcome
                 */
                DeleteTimeWindowOutcome DeleteTimeWindow(const Model::DeleteTimeWindowRequest &request);
                void DeleteTimeWindowAsync(const Model::DeleteTimeWindowRequest& request, const DeleteTimeWindowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTimeWindowOutcomeCallable DeleteTimeWindowCallable(const Model::DeleteTimeWindowRequest& request);

                /**
                 *本接口(DescribeAccountPrivileges)用于查询云数据库账户支持的权限信息。
                 * @param req DescribeAccountPrivilegesRequest
                 * @return DescribeAccountPrivilegesOutcome
                 */
                DescribeAccountPrivilegesOutcome DescribeAccountPrivileges(const Model::DescribeAccountPrivilegesRequest &request);
                void DescribeAccountPrivilegesAsync(const Model::DescribeAccountPrivilegesRequest& request, const DescribeAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountPrivilegesOutcomeCallable DescribeAccountPrivilegesCallable(const Model::DescribeAccountPrivilegesRequest& request);

                /**
                 *本接口(DescribeAccounts)用于查询云数据库的所有账户信息。
                 * @param req DescribeAccountsRequest
                 * @return DescribeAccountsOutcome
                 */
                DescribeAccountsOutcome DescribeAccounts(const Model::DescribeAccountsRequest &request);
                void DescribeAccountsAsync(const Model::DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountsOutcomeCallable DescribeAccountsCallable(const Model::DescribeAccountsRequest& request);

                /**
                 *本接口(DescribeAsyncRequestInfo)用于查询云数据库实例异步任务的执行结果。
                 * @param req DescribeAsyncRequestInfoRequest
                 * @return DescribeAsyncRequestInfoOutcome
                 */
                DescribeAsyncRequestInfoOutcome DescribeAsyncRequestInfo(const Model::DescribeAsyncRequestInfoRequest &request);
                void DescribeAsyncRequestInfoAsync(const Model::DescribeAsyncRequestInfoRequest& request, const DescribeAsyncRequestInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAsyncRequestInfoOutcomeCallable DescribeAsyncRequestInfoCallable(const Model::DescribeAsyncRequestInfoRequest& request);

                /**
                 *本接口(DescribeBackupConfig)用于查询数据库备份配置信息。
                 * @param req DescribeBackupConfigRequest
                 * @return DescribeBackupConfigOutcome
                 */
                DescribeBackupConfigOutcome DescribeBackupConfig(const Model::DescribeBackupConfigRequest &request);
                void DescribeBackupConfigAsync(const Model::DescribeBackupConfigRequest& request, const DescribeBackupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupConfigOutcomeCallable DescribeBackupConfigCallable(const Model::DescribeBackupConfigRequest& request);

                /**
                 *本接口(DescribeBackupDatabases)用于查询备份数据库列表。
                 * @param req DescribeBackupDatabasesRequest
                 * @return DescribeBackupDatabasesOutcome
                 */
                DescribeBackupDatabasesOutcome DescribeBackupDatabases(const Model::DescribeBackupDatabasesRequest &request);
                void DescribeBackupDatabasesAsync(const Model::DescribeBackupDatabasesRequest& request, const DescribeBackupDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupDatabasesOutcomeCallable DescribeBackupDatabasesCallable(const Model::DescribeBackupDatabasesRequest& request);

                /**
                 *本接口(DescribeBackupTables)用于查询指定的数据库的备份数据表名。
                 * @param req DescribeBackupTablesRequest
                 * @return DescribeBackupTablesOutcome
                 */
                DescribeBackupTablesOutcome DescribeBackupTables(const Model::DescribeBackupTablesRequest &request);
                void DescribeBackupTablesAsync(const Model::DescribeBackupTablesRequest& request, const DescribeBackupTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupTablesOutcomeCallable DescribeBackupTablesCallable(const Model::DescribeBackupTablesRequest& request);

                /**
                 *本接口(DescribeBackups)用于查询云数据库实例的备份数据。
                 * @param req DescribeBackupsRequest
                 * @return DescribeBackupsOutcome
                 */
                DescribeBackupsOutcome DescribeBackups(const Model::DescribeBackupsRequest &request);
                void DescribeBackupsAsync(const Model::DescribeBackupsRequest& request, const DescribeBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupsOutcomeCallable DescribeBackupsCallable(const Model::DescribeBackupsRequest& request);

                /**
                 *本接口(DescribeBinlogs)用于查询云数据库实例的二进制数据。
                 * @param req DescribeBinlogsRequest
                 * @return DescribeBinlogsOutcome
                 */
                DescribeBinlogsOutcome DescribeBinlogs(const Model::DescribeBinlogsRequest &request);
                void DescribeBinlogsAsync(const Model::DescribeBinlogsRequest& request, const DescribeBinlogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBinlogsOutcomeCallable DescribeBinlogsCallable(const Model::DescribeBinlogsRequest& request);

                /**
                 *本接口(DescribeDBImportRecords)用于查询云数据库导入任务操作日志。
                 * @param req DescribeDBImportRecordsRequest
                 * @return DescribeDBImportRecordsOutcome
                 */
                DescribeDBImportRecordsOutcome DescribeDBImportRecords(const Model::DescribeDBImportRecordsRequest &request);
                void DescribeDBImportRecordsAsync(const Model::DescribeDBImportRecordsRequest& request, const DescribeDBImportRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBImportRecordsOutcomeCallable DescribeDBImportRecordsCallable(const Model::DescribeDBImportRecordsRequest& request);

                /**
                 *本接口(DescribeDBInstanceCharset)用于查询云数据库实例的字符集，获取字符集的名称。
                 * @param req DescribeDBInstanceCharsetRequest
                 * @return DescribeDBInstanceCharsetOutcome
                 */
                DescribeDBInstanceCharsetOutcome DescribeDBInstanceCharset(const Model::DescribeDBInstanceCharsetRequest &request);
                void DescribeDBInstanceCharsetAsync(const Model::DescribeDBInstanceCharsetRequest& request, const DescribeDBInstanceCharsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstanceCharsetOutcomeCallable DescribeDBInstanceCharsetCallable(const Model::DescribeDBInstanceCharsetRequest& request);

                /**
                 *本接口(DescribeDBInstanceConfig)用于云数据库实例的配置信息，包括同步模式，部署模式等。
                 * @param req DescribeDBInstanceConfigRequest
                 * @return DescribeDBInstanceConfigOutcome
                 */
                DescribeDBInstanceConfigOutcome DescribeDBInstanceConfig(const Model::DescribeDBInstanceConfigRequest &request);
                void DescribeDBInstanceConfigAsync(const Model::DescribeDBInstanceConfigRequest& request, const DescribeDBInstanceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstanceConfigOutcomeCallable DescribeDBInstanceConfigCallable(const Model::DescribeDBInstanceConfigRequest& request);

                /**
                 *本接口(DescribeDBInstanceGTID)用于查询云数据库实例是否开通了GTID，不支持版本为5.5以及以下的实例。
                 * @param req DescribeDBInstanceGTIDRequest
                 * @return DescribeDBInstanceGTIDOutcome
                 */
                DescribeDBInstanceGTIDOutcome DescribeDBInstanceGTID(const Model::DescribeDBInstanceGTIDRequest &request);
                void DescribeDBInstanceGTIDAsync(const Model::DescribeDBInstanceGTIDRequest& request, const DescribeDBInstanceGTIDAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstanceGTIDOutcomeCallable DescribeDBInstanceGTIDCallable(const Model::DescribeDBInstanceGTIDRequest& request);

                /**
                 *本接口(DescribeDBInstanceRebootTime)用于查询云数据库实例重启预计所需的时间。
                 * @param req DescribeDBInstanceRebootTimeRequest
                 * @return DescribeDBInstanceRebootTimeOutcome
                 */
                DescribeDBInstanceRebootTimeOutcome DescribeDBInstanceRebootTime(const Model::DescribeDBInstanceRebootTimeRequest &request);
                void DescribeDBInstanceRebootTimeAsync(const Model::DescribeDBInstanceRebootTimeRequest& request, const DescribeDBInstanceRebootTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstanceRebootTimeOutcomeCallable DescribeDBInstanceRebootTimeCallable(const Model::DescribeDBInstanceRebootTimeRequest& request);

                /**
                 *本接口(DescribeDBInstances)用于查询云数据库实例列表，支持通过项目ID、实例ID、访问地址、实例状态等过滤条件来筛选实例。支持查询主实例、灾备实例和只读实例信息列表。
                 * @param req DescribeDBInstancesRequest
                 * @return DescribeDBInstancesOutcome
                 */
                DescribeDBInstancesOutcome DescribeDBInstances(const Model::DescribeDBInstancesRequest &request);
                void DescribeDBInstancesAsync(const Model::DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstancesOutcomeCallable DescribeDBInstancesCallable(const Model::DescribeDBInstancesRequest& request);

                /**
                 *本接口(DescribeDBPrice)用于查询云数据库实例的价格，支持查询按量计费或者包年包月的价格。可传入实例类型、购买时长、购买数量、内存大小、硬盘大小和可用区信息等来查询实例价格。

注意：对某个地域进行询价，请使用对应地域的接入点，接入点信息请参照<a href="https://cloud.tencent.com/document/api/236/15832">服务地址</a>文档。例如：对广州地域进行询价，请把请求发到：cdb.ap-guangzhou.tencentcloudapi.com。同理对上海地域询价，把请求发到：cdb.ap-shanghai.tencentcloudapi.com
                 * @param req DescribeDBPriceRequest
                 * @return DescribeDBPriceOutcome
                 */
                DescribeDBPriceOutcome DescribeDBPrice(const Model::DescribeDBPriceRequest &request);
                void DescribeDBPriceAsync(const Model::DescribeDBPriceRequest& request, const DescribeDBPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBPriceOutcomeCallable DescribeDBPriceCallable(const Model::DescribeDBPriceRequest& request);

                /**
                 *本接口(DescribeDBSecurityGroups)用于查询实例的安全组详情。
                 * @param req DescribeDBSecurityGroupsRequest
                 * @return DescribeDBSecurityGroupsOutcome
                 */
                DescribeDBSecurityGroupsOutcome DescribeDBSecurityGroups(const Model::DescribeDBSecurityGroupsRequest &request);
                void DescribeDBSecurityGroupsAsync(const Model::DescribeDBSecurityGroupsRequest& request, const DescribeDBSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBSecurityGroupsOutcomeCallable DescribeDBSecurityGroupsCallable(const Model::DescribeDBSecurityGroupsRequest& request);

                /**
                 *本接口(DescribeDBSwitchRecords)用于查询云数据库实例切换记录。
                 * @param req DescribeDBSwitchRecordsRequest
                 * @return DescribeDBSwitchRecordsOutcome
                 */
                DescribeDBSwitchRecordsOutcome DescribeDBSwitchRecords(const Model::DescribeDBSwitchRecordsRequest &request);
                void DescribeDBSwitchRecordsAsync(const Model::DescribeDBSwitchRecordsRequest& request, const DescribeDBSwitchRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBSwitchRecordsOutcomeCallable DescribeDBSwitchRecordsCallable(const Model::DescribeDBSwitchRecordsRequest& request);

                /**
                 *本接口(DescribeDBZoneConfig)用于查询可创建的云数据库各地域可售卖的规格配置。
                 * @param req DescribeDBZoneConfigRequest
                 * @return DescribeDBZoneConfigOutcome
                 */
                DescribeDBZoneConfigOutcome DescribeDBZoneConfig(const Model::DescribeDBZoneConfigRequest &request);
                void DescribeDBZoneConfigAsync(const Model::DescribeDBZoneConfigRequest& request, const DescribeDBZoneConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBZoneConfigOutcomeCallable DescribeDBZoneConfigCallable(const Model::DescribeDBZoneConfigRequest& request);

                /**
                 *本接口(DescribeDatabases)用于查询云数据库实例的数据库信息。
                 * @param req DescribeDatabasesRequest
                 * @return DescribeDatabasesOutcome
                 */
                DescribeDatabasesOutcome DescribeDatabases(const Model::DescribeDatabasesRequest &request);
                void DescribeDatabasesAsync(const Model::DescribeDatabasesRequest& request, const DescribeDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatabasesOutcomeCallable DescribeDatabasesCallable(const Model::DescribeDatabasesRequest& request);

                /**
                 *该接口（DescribeDefaultParams）用于查询默认的可设置参数列表。
                 * @param req DescribeDefaultParamsRequest
                 * @return DescribeDefaultParamsOutcome
                 */
                DescribeDefaultParamsOutcome DescribeDefaultParams(const Model::DescribeDefaultParamsRequest &request);
                void DescribeDefaultParamsAsync(const Model::DescribeDefaultParamsRequest& request, const DescribeDefaultParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDefaultParamsOutcomeCallable DescribeDefaultParamsCallable(const Model::DescribeDefaultParamsRequest& request);

                /**
                 *本接口（DescribeDeviceMonitorInfo）用于查询云数据库物理机当天的监控信息，暂只支持内存488G、硬盘6T的实例查询。
                 * @param req DescribeDeviceMonitorInfoRequest
                 * @return DescribeDeviceMonitorInfoOutcome
                 */
                DescribeDeviceMonitorInfoOutcome DescribeDeviceMonitorInfo(const Model::DescribeDeviceMonitorInfoRequest &request);
                void DescribeDeviceMonitorInfoAsync(const Model::DescribeDeviceMonitorInfoRequest& request, const DescribeDeviceMonitorInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceMonitorInfoOutcomeCallable DescribeDeviceMonitorInfoCallable(const Model::DescribeDeviceMonitorInfoRequest& request);

                /**
                 *该接口（DescribeInstanceParamRecords）用于查询实例参数修改历史。
                 * @param req DescribeInstanceParamRecordsRequest
                 * @return DescribeInstanceParamRecordsOutcome
                 */
                DescribeInstanceParamRecordsOutcome DescribeInstanceParamRecords(const Model::DescribeInstanceParamRecordsRequest &request);
                void DescribeInstanceParamRecordsAsync(const Model::DescribeInstanceParamRecordsRequest& request, const DescribeInstanceParamRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceParamRecordsOutcomeCallable DescribeInstanceParamRecordsCallable(const Model::DescribeInstanceParamRecordsRequest& request);

                /**
                 *该接口（DescribeInstanceParams）用于查询实例的参数列表。
                 * @param req DescribeInstanceParamsRequest
                 * @return DescribeInstanceParamsOutcome
                 */
                DescribeInstanceParamsOutcome DescribeInstanceParams(const Model::DescribeInstanceParamsRequest &request);
                void DescribeInstanceParamsAsync(const Model::DescribeInstanceParamsRequest& request, const DescribeInstanceParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceParamsOutcomeCallable DescribeInstanceParamsCallable(const Model::DescribeInstanceParamsRequest& request);

                /**
                 *该接口（DescribeParamTemplateInfo）用于查询参数模板详情。
                 * @param req DescribeParamTemplateInfoRequest
                 * @return DescribeParamTemplateInfoOutcome
                 */
                DescribeParamTemplateInfoOutcome DescribeParamTemplateInfo(const Model::DescribeParamTemplateInfoRequest &request);
                void DescribeParamTemplateInfoAsync(const Model::DescribeParamTemplateInfoRequest& request, const DescribeParamTemplateInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeParamTemplateInfoOutcomeCallable DescribeParamTemplateInfoCallable(const Model::DescribeParamTemplateInfoRequest& request);

                /**
                 *该接口（DescribeParamTemplates）查询参数模板列表。
                 * @param req DescribeParamTemplatesRequest
                 * @return DescribeParamTemplatesOutcome
                 */
                DescribeParamTemplatesOutcome DescribeParamTemplates(const Model::DescribeParamTemplatesRequest &request);
                void DescribeParamTemplatesAsync(const Model::DescribeParamTemplatesRequest& request, const DescribeParamTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeParamTemplatesOutcomeCallable DescribeParamTemplatesCallable(const Model::DescribeParamTemplatesRequest& request);

                /**
                 *本接口(DescribeProjectSecurityGroups)用于查询项目的安全组详情。
                 * @param req DescribeProjectSecurityGroupsRequest
                 * @return DescribeProjectSecurityGroupsOutcome
                 */
                DescribeProjectSecurityGroupsOutcome DescribeProjectSecurityGroups(const Model::DescribeProjectSecurityGroupsRequest &request);
                void DescribeProjectSecurityGroupsAsync(const Model::DescribeProjectSecurityGroupsRequest& request, const DescribeProjectSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProjectSecurityGroupsOutcomeCallable DescribeProjectSecurityGroupsCallable(const Model::DescribeProjectSecurityGroupsRequest& request);

                /**
                 *本接口(DescribeRollbackRangeTime)用于查询云数据库实例可回档的时间范围。
                 * @param req DescribeRollbackRangeTimeRequest
                 * @return DescribeRollbackRangeTimeOutcome
                 */
                DescribeRollbackRangeTimeOutcome DescribeRollbackRangeTime(const Model::DescribeRollbackRangeTimeRequest &request);
                void DescribeRollbackRangeTimeAsync(const Model::DescribeRollbackRangeTimeRequest& request, const DescribeRollbackRangeTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRollbackRangeTimeOutcomeCallable DescribeRollbackRangeTimeCallable(const Model::DescribeRollbackRangeTimeRequest& request);

                /**
                 *本接口(DescribeSlowLogs)用于获取云数据库实例的慢查询日志。
                 * @param req DescribeSlowLogsRequest
                 * @return DescribeSlowLogsOutcome
                 */
                DescribeSlowLogsOutcome DescribeSlowLogs(const Model::DescribeSlowLogsRequest &request);
                void DescribeSlowLogsAsync(const Model::DescribeSlowLogsRequest& request, const DescribeSlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSlowLogsOutcomeCallable DescribeSlowLogsCallable(const Model::DescribeSlowLogsRequest& request);

                /**
                 *本接口(DescribeSupportedPrivileges)用于查询云数据库的支持的权限信息，包括全局权限，数据库权限，表权限以及列权限。
                 * @param req DescribeSupportedPrivilegesRequest
                 * @return DescribeSupportedPrivilegesOutcome
                 */
                DescribeSupportedPrivilegesOutcome DescribeSupportedPrivileges(const Model::DescribeSupportedPrivilegesRequest &request);
                void DescribeSupportedPrivilegesAsync(const Model::DescribeSupportedPrivilegesRequest& request, const DescribeSupportedPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSupportedPrivilegesOutcomeCallable DescribeSupportedPrivilegesCallable(const Model::DescribeSupportedPrivilegesRequest& request);

                /**
                 *本接口(DescribeTables)用于查询云数据库实例的数据库表信息。
                 * @param req DescribeTablesRequest
                 * @return DescribeTablesOutcome
                 */
                DescribeTablesOutcome DescribeTables(const Model::DescribeTablesRequest &request);
                void DescribeTablesAsync(const Model::DescribeTablesRequest& request, const DescribeTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTablesOutcomeCallable DescribeTablesCallable(const Model::DescribeTablesRequest& request);

                /**
                 *获取实例绑定的标签
                 * @param req DescribeTagsOfInstanceIdsRequest
                 * @return DescribeTagsOfInstanceIdsOutcome
                 */
                DescribeTagsOfInstanceIdsOutcome DescribeTagsOfInstanceIds(const Model::DescribeTagsOfInstanceIdsRequest &request);
                void DescribeTagsOfInstanceIdsAsync(const Model::DescribeTagsOfInstanceIdsRequest& request, const DescribeTagsOfInstanceIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTagsOfInstanceIdsOutcomeCallable DescribeTagsOfInstanceIdsCallable(const Model::DescribeTagsOfInstanceIdsRequest& request);

                /**
                 *本接口(DescribeTasks)用于查询云数据库实例任务列表。
                 * @param req DescribeTasksRequest
                 * @return DescribeTasksOutcome
                 */
                DescribeTasksOutcome DescribeTasks(const Model::DescribeTasksRequest &request);
                void DescribeTasksAsync(const Model::DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTasksOutcomeCallable DescribeTasksCallable(const Model::DescribeTasksRequest& request);

                /**
                 *本接口(DescribeTimeWindow)用于查询云数据库实例的维护时间窗口。
                 * @param req DescribeTimeWindowRequest
                 * @return DescribeTimeWindowOutcome
                 */
                DescribeTimeWindowOutcome DescribeTimeWindow(const Model::DescribeTimeWindowRequest &request);
                void DescribeTimeWindowAsync(const Model::DescribeTimeWindowRequest& request, const DescribeTimeWindowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTimeWindowOutcomeCallable DescribeTimeWindowCallable(const Model::DescribeTimeWindowRequest& request);

                /**
                 *本接口(DescribeUploadedFiles)用于查询用户导入的SQL文件列表。
                 * @param req DescribeUploadedFilesRequest
                 * @return DescribeUploadedFilesOutcome
                 */
                DescribeUploadedFilesOutcome DescribeUploadedFiles(const Model::DescribeUploadedFilesRequest &request);
                void DescribeUploadedFilesAsync(const Model::DescribeUploadedFilesRequest& request, const DescribeUploadedFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUploadedFilesOutcomeCallable DescribeUploadedFilesCallable(const Model::DescribeUploadedFilesRequest& request);

                /**
                 *本接口(DisassociateSecurityGroups)用于安全组批量解绑实例。
                 * @param req DisassociateSecurityGroupsRequest
                 * @return DisassociateSecurityGroupsOutcome
                 */
                DisassociateSecurityGroupsOutcome DisassociateSecurityGroups(const Model::DisassociateSecurityGroupsRequest &request);
                void DisassociateSecurityGroupsAsync(const Model::DisassociateSecurityGroupsRequest& request, const DisassociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateSecurityGroupsOutcomeCallable DisassociateSecurityGroupsCallable(const Model::DisassociateSecurityGroupsRequest& request);

                /**
                 *本接口(InitDBInstances)用于初始化云数据库实例，包括初始化密码、默认字符集、实例端口号等
                 * @param req InitDBInstancesRequest
                 * @return InitDBInstancesOutcome
                 */
                InitDBInstancesOutcome InitDBInstances(const Model::InitDBInstancesRequest &request);
                void InitDBInstancesAsync(const Model::InitDBInstancesRequest& request, const InitDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InitDBInstancesOutcomeCallable InitDBInstancesCallable(const Model::InitDBInstancesRequest& request);

                /**
                 *本接口(InquiryPriceUpgradeInstances)用于查询云数据库实例升级的价格，支持查询按量计费或者包年包月实例的升级价格，实例类型支持主实例、灾备实例和只读实例。
                 * @param req InquiryPriceUpgradeInstancesRequest
                 * @return InquiryPriceUpgradeInstancesOutcome
                 */
                InquiryPriceUpgradeInstancesOutcome InquiryPriceUpgradeInstances(const Model::InquiryPriceUpgradeInstancesRequest &request);
                void InquiryPriceUpgradeInstancesAsync(const Model::InquiryPriceUpgradeInstancesRequest& request, const InquiryPriceUpgradeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceUpgradeInstancesOutcomeCallable InquiryPriceUpgradeInstancesCallable(const Model::InquiryPriceUpgradeInstancesRequest& request);

                /**
                 *本接口(IsolateDBInstance)用于销毁云数据库实例，销毁之后不能通过IP和端口访问数据库，按量计费实例销毁后直接下线。
                 * @param req IsolateDBInstanceRequest
                 * @return IsolateDBInstanceOutcome
                 */
                IsolateDBInstanceOutcome IsolateDBInstance(const Model::IsolateDBInstanceRequest &request);
                void IsolateDBInstanceAsync(const Model::IsolateDBInstanceRequest& request, const IsolateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IsolateDBInstanceOutcomeCallable IsolateDBInstanceCallable(const Model::IsolateDBInstanceRequest& request);

                /**
                 *本接口(ModifyAccountDescription)用于修改云数据库账户的备注信息。
                 * @param req ModifyAccountDescriptionRequest
                 * @return ModifyAccountDescriptionOutcome
                 */
                ModifyAccountDescriptionOutcome ModifyAccountDescription(const Model::ModifyAccountDescriptionRequest &request);
                void ModifyAccountDescriptionAsync(const Model::ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccountDescriptionOutcomeCallable ModifyAccountDescriptionCallable(const Model::ModifyAccountDescriptionRequest& request);

                /**
                 *本接口(ModifyAccountPassword)用于修改云数据库账户的密码。
                 * @param req ModifyAccountPasswordRequest
                 * @return ModifyAccountPasswordOutcome
                 */
                ModifyAccountPasswordOutcome ModifyAccountPassword(const Model::ModifyAccountPasswordRequest &request);
                void ModifyAccountPasswordAsync(const Model::ModifyAccountPasswordRequest& request, const ModifyAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccountPasswordOutcomeCallable ModifyAccountPasswordCallable(const Model::ModifyAccountPasswordRequest& request);

                /**
                 *本接口(ModifyAccountPrivileges)用于修改云数据库的账户的权限信息。
                 * @param req ModifyAccountPrivilegesRequest
                 * @return ModifyAccountPrivilegesOutcome
                 */
                ModifyAccountPrivilegesOutcome ModifyAccountPrivileges(const Model::ModifyAccountPrivilegesRequest &request);
                void ModifyAccountPrivilegesAsync(const Model::ModifyAccountPrivilegesRequest& request, const ModifyAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccountPrivilegesOutcomeCallable ModifyAccountPrivilegesCallable(const Model::ModifyAccountPrivilegesRequest& request);

                /**
                 *本接口(ModifyAutoRenewFlag)用于修改云数据库实例的自动续费标记。仅支持包年包月的实例设置自动续费标记。
                 * @param req ModifyAutoRenewFlagRequest
                 * @return ModifyAutoRenewFlagOutcome
                 */
                ModifyAutoRenewFlagOutcome ModifyAutoRenewFlag(const Model::ModifyAutoRenewFlagRequest &request);
                void ModifyAutoRenewFlagAsync(const Model::ModifyAutoRenewFlagRequest& request, const ModifyAutoRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAutoRenewFlagOutcomeCallable ModifyAutoRenewFlagCallable(const Model::ModifyAutoRenewFlagRequest& request);

                /**
                 *本接口(ModifyBackupConfig)用于修改数据库备份配置信息。
                 * @param req ModifyBackupConfigRequest
                 * @return ModifyBackupConfigOutcome
                 */
                ModifyBackupConfigOutcome ModifyBackupConfig(const Model::ModifyBackupConfigRequest &request);
                void ModifyBackupConfigAsync(const Model::ModifyBackupConfigRequest& request, const ModifyBackupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBackupConfigOutcomeCallable ModifyBackupConfigCallable(const Model::ModifyBackupConfigRequest& request);

                /**
                 *本接口(ModifyDBInstanceName)用于修改云数据库实例的名称。
                 * @param req ModifyDBInstanceNameRequest
                 * @return ModifyDBInstanceNameOutcome
                 */
                ModifyDBInstanceNameOutcome ModifyDBInstanceName(const Model::ModifyDBInstanceNameRequest &request);
                void ModifyDBInstanceNameAsync(const Model::ModifyDBInstanceNameRequest& request, const ModifyDBInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceNameOutcomeCallable ModifyDBInstanceNameCallable(const Model::ModifyDBInstanceNameRequest& request);

                /**
                 *本接口(ModifyDBInstanceProject)用于修改云数据库实例的所属项目。
                 * @param req ModifyDBInstanceProjectRequest
                 * @return ModifyDBInstanceProjectOutcome
                 */
                ModifyDBInstanceProjectOutcome ModifyDBInstanceProject(const Model::ModifyDBInstanceProjectRequest &request);
                void ModifyDBInstanceProjectAsync(const Model::ModifyDBInstanceProjectRequest& request, const ModifyDBInstanceProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceProjectOutcomeCallable ModifyDBInstanceProjectCallable(const Model::ModifyDBInstanceProjectRequest& request);

                /**
                 *本接口(ModifyDBInstanceSecurityGroups)用于修改实例绑定的安全组。
                 * @param req ModifyDBInstanceSecurityGroupsRequest
                 * @return ModifyDBInstanceSecurityGroupsOutcome
                 */
                ModifyDBInstanceSecurityGroupsOutcome ModifyDBInstanceSecurityGroups(const Model::ModifyDBInstanceSecurityGroupsRequest &request);
                void ModifyDBInstanceSecurityGroupsAsync(const Model::ModifyDBInstanceSecurityGroupsRequest& request, const ModifyDBInstanceSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceSecurityGroupsOutcomeCallable ModifyDBInstanceSecurityGroupsCallable(const Model::ModifyDBInstanceSecurityGroupsRequest& request);

                /**
                 *本接口(ModifyDBInstanceVipVport)用于修改云数据库实例的IP和端口号，也可进行基础网络转VPC网络和VPC网络下的子网变更。
                 * @param req ModifyDBInstanceVipVportRequest
                 * @return ModifyDBInstanceVipVportOutcome
                 */
                ModifyDBInstanceVipVportOutcome ModifyDBInstanceVipVport(const Model::ModifyDBInstanceVipVportRequest &request);
                void ModifyDBInstanceVipVportAsync(const Model::ModifyDBInstanceVipVportRequest& request, const ModifyDBInstanceVipVportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceVipVportOutcomeCallable ModifyDBInstanceVipVportCallable(const Model::ModifyDBInstanceVipVportRequest& request);

                /**
                 *本接口(ModifyInstanceParam)用于修改云数据库实例的参数。
                 * @param req ModifyInstanceParamRequest
                 * @return ModifyInstanceParamOutcome
                 */
                ModifyInstanceParamOutcome ModifyInstanceParam(const Model::ModifyInstanceParamRequest &request);
                void ModifyInstanceParamAsync(const Model::ModifyInstanceParamRequest& request, const ModifyInstanceParamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceParamOutcomeCallable ModifyInstanceParamCallable(const Model::ModifyInstanceParamRequest& request);

                /**
                 *可以对实例标签进行添加、修改或者删除
                 * @param req ModifyInstanceTagRequest
                 * @return ModifyInstanceTagOutcome
                 */
                ModifyInstanceTagOutcome ModifyInstanceTag(const Model::ModifyInstanceTagRequest &request);
                void ModifyInstanceTagAsync(const Model::ModifyInstanceTagRequest& request, const ModifyInstanceTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceTagOutcomeCallable ModifyInstanceTagCallable(const Model::ModifyInstanceTagRequest& request);

                /**
                 *该接口（ModifyParamTemplate）用于修改参数模板。
                 * @param req ModifyParamTemplateRequest
                 * @return ModifyParamTemplateOutcome
                 */
                ModifyParamTemplateOutcome ModifyParamTemplate(const Model::ModifyParamTemplateRequest &request);
                void ModifyParamTemplateAsync(const Model::ModifyParamTemplateRequest& request, const ModifyParamTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyParamTemplateOutcomeCallable ModifyParamTemplateCallable(const Model::ModifyParamTemplateRequest& request);

                /**
                 *本接口(ModifyTimeWindow)用于更新云数据库实例的维护时间窗口。
                 * @param req ModifyTimeWindowRequest
                 * @return ModifyTimeWindowOutcome
                 */
                ModifyTimeWindowOutcome ModifyTimeWindow(const Model::ModifyTimeWindowRequest &request);
                void ModifyTimeWindowAsync(const Model::ModifyTimeWindowRequest& request, const ModifyTimeWindowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTimeWindowOutcomeCallable ModifyTimeWindowCallable(const Model::ModifyTimeWindowRequest& request);

                /**
                 *本接口(OpenDBInstanceGTID)用于开启云数据库实例的GTID，只支持版本为5.6以及以上的实例。
                 * @param req OpenDBInstanceGTIDRequest
                 * @return OpenDBInstanceGTIDOutcome
                 */
                OpenDBInstanceGTIDOutcome OpenDBInstanceGTID(const Model::OpenDBInstanceGTIDRequest &request);
                void OpenDBInstanceGTIDAsync(const Model::OpenDBInstanceGTIDRequest& request, const OpenDBInstanceGTIDAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenDBInstanceGTIDOutcomeCallable OpenDBInstanceGTIDCallable(const Model::OpenDBInstanceGTIDRequest& request);

                /**
                 *本接口(OpenWanService)用于开通实例外网访问。

注意，实例开通外网访问之前，需要先将实例进行[实例初始化](https://cloud.tencent.com/document/api/236/15873)操作。
                 * @param req OpenWanServiceRequest
                 * @return OpenWanServiceOutcome
                 */
                OpenWanServiceOutcome OpenWanService(const Model::OpenWanServiceRequest &request);
                void OpenWanServiceAsync(const Model::OpenWanServiceRequest& request, const OpenWanServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenWanServiceOutcomeCallable OpenWanServiceCallable(const Model::OpenWanServiceRequest& request);

                /**
                 *本接口(RenewDBInstance)用于续费云数据库实例，仅支持付费模式为包年包月的实例。按量计费实例不需要续费。
                 * @param req RenewDBInstanceRequest
                 * @return RenewDBInstanceOutcome
                 */
                RenewDBInstanceOutcome RenewDBInstance(const Model::RenewDBInstanceRequest &request);
                void RenewDBInstanceAsync(const Model::RenewDBInstanceRequest& request, const RenewDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewDBInstanceOutcomeCallable RenewDBInstanceCallable(const Model::RenewDBInstanceRequest& request);

                /**
                 *本接口(RestartDBInstances)用于重启云数据库实例。

注意：
1、本接口只支持主实例进行重启操作；
2、实例状态必须为正常，并且没有其他异步任务在执行中。
                 * @param req RestartDBInstancesRequest
                 * @return RestartDBInstancesOutcome
                 */
                RestartDBInstancesOutcome RestartDBInstances(const Model::RestartDBInstancesRequest &request);
                void RestartDBInstancesAsync(const Model::RestartDBInstancesRequest& request, const RestartDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestartDBInstancesOutcomeCallable RestartDBInstancesCallable(const Model::RestartDBInstancesRequest& request);

                /**
                 *该接口（StartBatchRollback）用于批量回档云数据库实例的库表。
                 * @param req StartBatchRollbackRequest
                 * @return StartBatchRollbackOutcome
                 */
                StartBatchRollbackOutcome StartBatchRollback(const Model::StartBatchRollbackRequest &request);
                void StartBatchRollbackAsync(const Model::StartBatchRollbackRequest& request, const StartBatchRollbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartBatchRollbackOutcomeCallable StartBatchRollbackCallable(const Model::StartBatchRollbackRequest& request);

                /**
                 *本接口(StopDBImportJob)用于终止数据导入任务。
                 * @param req StopDBImportJobRequest
                 * @return StopDBImportJobOutcome
                 */
                StopDBImportJobOutcome StopDBImportJob(const Model::StopDBImportJobRequest &request);
                void StopDBImportJobAsync(const Model::StopDBImportJobRequest& request, const StopDBImportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopDBImportJobOutcomeCallable StopDBImportJobCallable(const Model::StopDBImportJobRequest& request);

                /**
                 *本接口(SwitchForUpgrade)用于切换访问新实例，针对主升级中的实例处于待切换状态时，用户可主动发起该流程
                 * @param req SwitchForUpgradeRequest
                 * @return SwitchForUpgradeOutcome
                 */
                SwitchForUpgradeOutcome SwitchForUpgrade(const Model::SwitchForUpgradeRequest &request);
                void SwitchForUpgradeAsync(const Model::SwitchForUpgradeRequest& request, const SwitchForUpgradeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SwitchForUpgradeOutcomeCallable SwitchForUpgradeCallable(const Model::SwitchForUpgradeRequest& request);

                /**
                 *本接口(UpgradeDBInstance)用于升级云数据库实例，实例类型支持主实例、灾备实例和只读实例
                 * @param req UpgradeDBInstanceRequest
                 * @return UpgradeDBInstanceOutcome
                 */
                UpgradeDBInstanceOutcome UpgradeDBInstance(const Model::UpgradeDBInstanceRequest &request);
                void UpgradeDBInstanceAsync(const Model::UpgradeDBInstanceRequest& request, const UpgradeDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeDBInstanceOutcomeCallable UpgradeDBInstanceCallable(const Model::UpgradeDBInstanceRequest& request);

                /**
                 *本接口(UpgradeDBInstanceEngineVersion)用于升级云数据库实例版本，实例类型支持主实例、灾备实例和只读实例。
                 * @param req UpgradeDBInstanceEngineVersionRequest
                 * @return UpgradeDBInstanceEngineVersionOutcome
                 */
                UpgradeDBInstanceEngineVersionOutcome UpgradeDBInstanceEngineVersion(const Model::UpgradeDBInstanceEngineVersionRequest &request);
                void UpgradeDBInstanceEngineVersionAsync(const Model::UpgradeDBInstanceEngineVersionRequest& request, const UpgradeDBInstanceEngineVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeDBInstanceEngineVersionOutcomeCallable UpgradeDBInstanceEngineVersionCallable(const Model::UpgradeDBInstanceEngineVersionRequest& request);

                /**
                 *本接口(VerifyRootAccount)用于校验云数据库实例的ROOT账号是否有足够的权限进行授权操作。
                 * @param req VerifyRootAccountRequest
                 * @return VerifyRootAccountOutcome
                 */
                VerifyRootAccountOutcome VerifyRootAccount(const Model::VerifyRootAccountRequest &request);
                void VerifyRootAccountAsync(const Model::VerifyRootAccountRequest& request, const VerifyRootAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VerifyRootAccountOutcomeCallable VerifyRootAccountCallable(const Model::VerifyRootAccountRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_CDBCLIENT_H_
