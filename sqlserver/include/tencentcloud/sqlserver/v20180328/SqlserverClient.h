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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_SQLSERVERCLIENT_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_SQLSERVERCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/sqlserver/v20180328/model/AssociateSecurityGroupsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/AssociateSecurityGroupsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CloneDBRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CloneDBResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CloseInterCommunicationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CloseInterCommunicationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CompleteExpansionRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CompleteExpansionResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CompleteMigrationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CompleteMigrationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateAccountRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateAccountResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateBackupRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateBackupResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateBackupMigrationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateBackupMigrationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateBasicDBInstancesRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateBasicDBInstancesResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateBusinessDBInstancesRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateBusinessDBInstancesResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateBusinessIntelligenceFileRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateBusinessIntelligenceFileResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateCloudDBInstancesRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateCloudDBInstancesResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateCloudReadOnlyDBInstancesRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateCloudReadOnlyDBInstancesResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateDBRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateDBResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateDBInstancesRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateDBInstancesResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateIncrementalMigrationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateIncrementalMigrationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateMigrationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateMigrationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CreatePublishSubscribeRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CreatePublishSubscribeResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateReadOnlyDBInstancesRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateReadOnlyDBInstancesResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DeleteAccountRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DeleteAccountResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DeleteBackupMigrationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DeleteBackupMigrationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DeleteBusinessIntelligenceFileRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DeleteBusinessIntelligenceFileResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DeleteDBRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DeleteDBResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DeleteDBInstanceRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DeleteDBInstanceResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DeleteIncrementalMigrationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DeleteIncrementalMigrationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DeleteMigrationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DeleteMigrationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DeletePublishSubscribeRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DeletePublishSubscribeResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeAccountsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeAccountsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupByFlowIdRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupByFlowIdResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupCommandRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupCommandResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupFilesRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupFilesResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupMigrationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupMigrationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupUploadSizeRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupUploadSizeResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeBusinessIntelligenceFileRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeBusinessIntelligenceFileResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeCrossRegionZoneRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeCrossRegionZoneResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDBCharsetsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDBCharsetsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDBInstanceInterRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDBInstanceInterResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDBInstancesRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDBInstancesResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDBInstancesAttributeRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDBInstancesAttributeResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDBSecurityGroupsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDBSecurityGroupsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDBsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDBsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDBsNormalRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDBsNormalResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeFlowStatusRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeFlowStatusResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeIncrementalMigrationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeIncrementalMigrationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeInstanceParamRecordsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeInstanceParamRecordsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeInstanceParamsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeInstanceParamsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeMaintenanceSpanRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeMaintenanceSpanResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeMigrationDatabasesRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeMigrationDatabasesResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeMigrationDetailRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeMigrationDetailResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeMigrationsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeMigrationsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeOrdersRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeOrdersResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeProductConfigRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeProductConfigResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeProjectSecurityGroupsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeProjectSecurityGroupsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribePublishSubscribeRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribePublishSubscribeResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeReadOnlyGroupByReadOnlyInstanceRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeReadOnlyGroupByReadOnlyInstanceResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeReadOnlyGroupDetailsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeReadOnlyGroupDetailsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeReadOnlyGroupListRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeReadOnlyGroupListResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeRegionsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeRegionsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeRollbackTimeRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeRollbackTimeResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeSlowlogsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeSlowlogsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeUploadBackupInfoRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeUploadBackupInfoResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeUploadIncrementalInfoRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeUploadIncrementalInfoResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeXEventsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeXEventsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeZonesRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeZonesResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DisassociateSecurityGroupsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DisassociateSecurityGroupsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/InquiryPriceCreateDBInstancesRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/InquiryPriceCreateDBInstancesResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/InquiryPriceRenewDBInstanceRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/InquiryPriceRenewDBInstanceResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/InquiryPriceUpgradeDBInstanceRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/InquiryPriceUpgradeDBInstanceResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyAccountPrivilegeRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyAccountPrivilegeResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyAccountRemarkRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyAccountRemarkResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyBackupMigrationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyBackupMigrationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyBackupNameRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyBackupNameResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyBackupStrategyRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyBackupStrategyResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBEncryptAttributesRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBEncryptAttributesResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBInstanceNameRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBInstanceNameResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBInstanceNetworkRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBInstanceNetworkResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBInstanceProjectRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBInstanceProjectResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBInstanceRenewFlagRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBInstanceRenewFlagResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBInstanceSecurityGroupsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBInstanceSecurityGroupsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBNameRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBNameResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBRemarkRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBRemarkResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDatabaseCDCRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDatabaseCDCResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDatabaseCTRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDatabaseCTResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDatabaseMdfRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDatabaseMdfResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyIncrementalMigrationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyIncrementalMigrationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyInstanceEncryptAttributesRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyInstanceEncryptAttributesResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyInstanceParamRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyInstanceParamResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyMaintenanceSpanRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyMaintenanceSpanResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyMigrationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyMigrationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyPublishSubscribeNameRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyPublishSubscribeNameResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyReadOnlyGroupDetailsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyReadOnlyGroupDetailsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/OpenInterCommunicationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/OpenInterCommunicationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/QueryMigrationCheckProcessRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/QueryMigrationCheckProcessResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/RecycleDBInstanceRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/RecycleDBInstanceResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/RecycleReadOnlyGroupRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/RecycleReadOnlyGroupResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/RemoveBackupsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/RemoveBackupsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/RenewDBInstanceRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/RenewDBInstanceResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/RenewPostpaidDBInstanceRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/RenewPostpaidDBInstanceResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ResetAccountPasswordRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ResetAccountPasswordResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/RestartDBInstanceRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/RestartDBInstanceResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/RestoreInstanceRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/RestoreInstanceResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/RollbackInstanceRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/RollbackInstanceResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/RunMigrationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/RunMigrationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/StartBackupMigrationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/StartBackupMigrationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/StartIncrementalMigrationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/StartIncrementalMigrationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/StartInstanceXEventRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/StartInstanceXEventResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/StartMigrationCheckRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/StartMigrationCheckResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/StopMigrationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/StopMigrationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/TerminateDBInstanceRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/TerminateDBInstanceResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/UpgradeDBInstanceRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/UpgradeDBInstanceResponse.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            class SqlserverClient : public AbstractClient
            {
            public:
                SqlserverClient(const Credential &credential, const std::string &region);
                SqlserverClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AssociateSecurityGroupsResponse> AssociateSecurityGroupsOutcome;
                typedef std::future<AssociateSecurityGroupsOutcome> AssociateSecurityGroupsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::AssociateSecurityGroupsRequest&, AssociateSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::CloneDBResponse> CloneDBOutcome;
                typedef std::future<CloneDBOutcome> CloneDBOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CloneDBRequest&, CloneDBOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloneDBAsyncHandler;
                typedef Outcome<Core::Error, Model::CloseInterCommunicationResponse> CloseInterCommunicationOutcome;
                typedef std::future<CloseInterCommunicationOutcome> CloseInterCommunicationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CloseInterCommunicationRequest&, CloseInterCommunicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseInterCommunicationAsyncHandler;
                typedef Outcome<Core::Error, Model::CompleteExpansionResponse> CompleteExpansionOutcome;
                typedef std::future<CompleteExpansionOutcome> CompleteExpansionOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CompleteExpansionRequest&, CompleteExpansionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CompleteExpansionAsyncHandler;
                typedef Outcome<Core::Error, Model::CompleteMigrationResponse> CompleteMigrationOutcome;
                typedef std::future<CompleteMigrationOutcome> CompleteMigrationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CompleteMigrationRequest&, CompleteMigrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CompleteMigrationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAccountResponse> CreateAccountOutcome;
                typedef std::future<CreateAccountOutcome> CreateAccountOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CreateAccountRequest&, CreateAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBackupResponse> CreateBackupOutcome;
                typedef std::future<CreateBackupOutcome> CreateBackupOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CreateBackupRequest&, CreateBackupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBackupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBackupMigrationResponse> CreateBackupMigrationOutcome;
                typedef std::future<CreateBackupMigrationOutcome> CreateBackupMigrationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CreateBackupMigrationRequest&, CreateBackupMigrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBackupMigrationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBasicDBInstancesResponse> CreateBasicDBInstancesOutcome;
                typedef std::future<CreateBasicDBInstancesOutcome> CreateBasicDBInstancesOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CreateBasicDBInstancesRequest&, CreateBasicDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBasicDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBusinessDBInstancesResponse> CreateBusinessDBInstancesOutcome;
                typedef std::future<CreateBusinessDBInstancesOutcome> CreateBusinessDBInstancesOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CreateBusinessDBInstancesRequest&, CreateBusinessDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBusinessDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBusinessIntelligenceFileResponse> CreateBusinessIntelligenceFileOutcome;
                typedef std::future<CreateBusinessIntelligenceFileOutcome> CreateBusinessIntelligenceFileOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CreateBusinessIntelligenceFileRequest&, CreateBusinessIntelligenceFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBusinessIntelligenceFileAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCloudDBInstancesResponse> CreateCloudDBInstancesOutcome;
                typedef std::future<CreateCloudDBInstancesOutcome> CreateCloudDBInstancesOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CreateCloudDBInstancesRequest&, CreateCloudDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCloudReadOnlyDBInstancesResponse> CreateCloudReadOnlyDBInstancesOutcome;
                typedef std::future<CreateCloudReadOnlyDBInstancesOutcome> CreateCloudReadOnlyDBInstancesOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CreateCloudReadOnlyDBInstancesRequest&, CreateCloudReadOnlyDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudReadOnlyDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDBResponse> CreateDBOutcome;
                typedef std::future<CreateDBOutcome> CreateDBOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CreateDBRequest&, CreateDBOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDBInstancesResponse> CreateDBInstancesOutcome;
                typedef std::future<CreateDBInstancesOutcome> CreateDBInstancesOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CreateDBInstancesRequest&, CreateDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateIncrementalMigrationResponse> CreateIncrementalMigrationOutcome;
                typedef std::future<CreateIncrementalMigrationOutcome> CreateIncrementalMigrationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CreateIncrementalMigrationRequest&, CreateIncrementalMigrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIncrementalMigrationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMigrationResponse> CreateMigrationOutcome;
                typedef std::future<CreateMigrationOutcome> CreateMigrationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CreateMigrationRequest&, CreateMigrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMigrationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePublishSubscribeResponse> CreatePublishSubscribeOutcome;
                typedef std::future<CreatePublishSubscribeOutcome> CreatePublishSubscribeOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CreatePublishSubscribeRequest&, CreatePublishSubscribeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePublishSubscribeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateReadOnlyDBInstancesResponse> CreateReadOnlyDBInstancesOutcome;
                typedef std::future<CreateReadOnlyDBInstancesOutcome> CreateReadOnlyDBInstancesOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CreateReadOnlyDBInstancesRequest&, CreateReadOnlyDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateReadOnlyDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAccountResponse> DeleteAccountOutcome;
                typedef std::future<DeleteAccountOutcome> DeleteAccountOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DeleteAccountRequest&, DeleteAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBackupMigrationResponse> DeleteBackupMigrationOutcome;
                typedef std::future<DeleteBackupMigrationOutcome> DeleteBackupMigrationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DeleteBackupMigrationRequest&, DeleteBackupMigrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBackupMigrationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBusinessIntelligenceFileResponse> DeleteBusinessIntelligenceFileOutcome;
                typedef std::future<DeleteBusinessIntelligenceFileOutcome> DeleteBusinessIntelligenceFileOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DeleteBusinessIntelligenceFileRequest&, DeleteBusinessIntelligenceFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBusinessIntelligenceFileAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDBResponse> DeleteDBOutcome;
                typedef std::future<DeleteDBOutcome> DeleteDBOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DeleteDBRequest&, DeleteDBOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDBAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDBInstanceResponse> DeleteDBInstanceOutcome;
                typedef std::future<DeleteDBInstanceOutcome> DeleteDBInstanceOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DeleteDBInstanceRequest&, DeleteDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteIncrementalMigrationResponse> DeleteIncrementalMigrationOutcome;
                typedef std::future<DeleteIncrementalMigrationOutcome> DeleteIncrementalMigrationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DeleteIncrementalMigrationRequest&, DeleteIncrementalMigrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIncrementalMigrationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMigrationResponse> DeleteMigrationOutcome;
                typedef std::future<DeleteMigrationOutcome> DeleteMigrationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DeleteMigrationRequest&, DeleteMigrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMigrationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePublishSubscribeResponse> DeletePublishSubscribeOutcome;
                typedef std::future<DeletePublishSubscribeOutcome> DeletePublishSubscribeOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DeletePublishSubscribeRequest&, DeletePublishSubscribeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePublishSubscribeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccountsResponse> DescribeAccountsOutcome;
                typedef std::future<DescribeAccountsOutcome> DescribeAccountsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeAccountsRequest&, DescribeAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupByFlowIdResponse> DescribeBackupByFlowIdOutcome;
                typedef std::future<DescribeBackupByFlowIdOutcome> DescribeBackupByFlowIdOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeBackupByFlowIdRequest&, DescribeBackupByFlowIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupByFlowIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupCommandResponse> DescribeBackupCommandOutcome;
                typedef std::future<DescribeBackupCommandOutcome> DescribeBackupCommandOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeBackupCommandRequest&, DescribeBackupCommandOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupCommandAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupFilesResponse> DescribeBackupFilesOutcome;
                typedef std::future<DescribeBackupFilesOutcome> DescribeBackupFilesOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeBackupFilesRequest&, DescribeBackupFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupMigrationResponse> DescribeBackupMigrationOutcome;
                typedef std::future<DescribeBackupMigrationOutcome> DescribeBackupMigrationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeBackupMigrationRequest&, DescribeBackupMigrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupMigrationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupUploadSizeResponse> DescribeBackupUploadSizeOutcome;
                typedef std::future<DescribeBackupUploadSizeOutcome> DescribeBackupUploadSizeOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeBackupUploadSizeRequest&, DescribeBackupUploadSizeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupUploadSizeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupsResponse> DescribeBackupsOutcome;
                typedef std::future<DescribeBackupsOutcome> DescribeBackupsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeBackupsRequest&, DescribeBackupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBusinessIntelligenceFileResponse> DescribeBusinessIntelligenceFileOutcome;
                typedef std::future<DescribeBusinessIntelligenceFileOutcome> DescribeBusinessIntelligenceFileOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeBusinessIntelligenceFileRequest&, DescribeBusinessIntelligenceFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBusinessIntelligenceFileAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCrossRegionZoneResponse> DescribeCrossRegionZoneOutcome;
                typedef std::future<DescribeCrossRegionZoneOutcome> DescribeCrossRegionZoneOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeCrossRegionZoneRequest&, DescribeCrossRegionZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCrossRegionZoneAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBCharsetsResponse> DescribeDBCharsetsOutcome;
                typedef std::future<DescribeDBCharsetsOutcome> DescribeDBCharsetsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeDBCharsetsRequest&, DescribeDBCharsetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBCharsetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBInstanceInterResponse> DescribeDBInstanceInterOutcome;
                typedef std::future<DescribeDBInstanceInterOutcome> DescribeDBInstanceInterOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeDBInstanceInterRequest&, DescribeDBInstanceInterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceInterAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBInstancesResponse> DescribeDBInstancesOutcome;
                typedef std::future<DescribeDBInstancesOutcome> DescribeDBInstancesOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeDBInstancesRequest&, DescribeDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBInstancesAttributeResponse> DescribeDBInstancesAttributeOutcome;
                typedef std::future<DescribeDBInstancesAttributeOutcome> DescribeDBInstancesAttributeOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeDBInstancesAttributeRequest&, DescribeDBInstancesAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancesAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBSecurityGroupsResponse> DescribeDBSecurityGroupsOutcome;
                typedef std::future<DescribeDBSecurityGroupsOutcome> DescribeDBSecurityGroupsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeDBSecurityGroupsRequest&, DescribeDBSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBsResponse> DescribeDBsOutcome;
                typedef std::future<DescribeDBsOutcome> DescribeDBsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeDBsRequest&, DescribeDBsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBsNormalResponse> DescribeDBsNormalOutcome;
                typedef std::future<DescribeDBsNormalOutcome> DescribeDBsNormalOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeDBsNormalRequest&, DescribeDBsNormalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBsNormalAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFlowStatusResponse> DescribeFlowStatusOutcome;
                typedef std::future<DescribeFlowStatusOutcome> DescribeFlowStatusOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeFlowStatusRequest&, DescribeFlowStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIncrementalMigrationResponse> DescribeIncrementalMigrationOutcome;
                typedef std::future<DescribeIncrementalMigrationOutcome> DescribeIncrementalMigrationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeIncrementalMigrationRequest&, DescribeIncrementalMigrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIncrementalMigrationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceParamRecordsResponse> DescribeInstanceParamRecordsOutcome;
                typedef std::future<DescribeInstanceParamRecordsOutcome> DescribeInstanceParamRecordsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeInstanceParamRecordsRequest&, DescribeInstanceParamRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceParamRecordsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceParamsResponse> DescribeInstanceParamsOutcome;
                typedef std::future<DescribeInstanceParamsOutcome> DescribeInstanceParamsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeInstanceParamsRequest&, DescribeInstanceParamsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceParamsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMaintenanceSpanResponse> DescribeMaintenanceSpanOutcome;
                typedef std::future<DescribeMaintenanceSpanOutcome> DescribeMaintenanceSpanOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeMaintenanceSpanRequest&, DescribeMaintenanceSpanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMaintenanceSpanAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMigrationDatabasesResponse> DescribeMigrationDatabasesOutcome;
                typedef std::future<DescribeMigrationDatabasesOutcome> DescribeMigrationDatabasesOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeMigrationDatabasesRequest&, DescribeMigrationDatabasesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigrationDatabasesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMigrationDetailResponse> DescribeMigrationDetailOutcome;
                typedef std::future<DescribeMigrationDetailOutcome> DescribeMigrationDetailOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeMigrationDetailRequest&, DescribeMigrationDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigrationDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMigrationsResponse> DescribeMigrationsOutcome;
                typedef std::future<DescribeMigrationsOutcome> DescribeMigrationsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeMigrationsRequest&, DescribeMigrationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigrationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrdersResponse> DescribeOrdersOutcome;
                typedef std::future<DescribeOrdersOutcome> DescribeOrdersOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeOrdersRequest&, DescribeOrdersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrdersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProductConfigResponse> DescribeProductConfigOutcome;
                typedef std::future<DescribeProductConfigOutcome> DescribeProductConfigOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeProductConfigRequest&, DescribeProductConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProjectSecurityGroupsResponse> DescribeProjectSecurityGroupsOutcome;
                typedef std::future<DescribeProjectSecurityGroupsOutcome> DescribeProjectSecurityGroupsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeProjectSecurityGroupsRequest&, DescribeProjectSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePublishSubscribeResponse> DescribePublishSubscribeOutcome;
                typedef std::future<DescribePublishSubscribeOutcome> DescribePublishSubscribeOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribePublishSubscribeRequest&, DescribePublishSubscribeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePublishSubscribeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReadOnlyGroupByReadOnlyInstanceResponse> DescribeReadOnlyGroupByReadOnlyInstanceOutcome;
                typedef std::future<DescribeReadOnlyGroupByReadOnlyInstanceOutcome> DescribeReadOnlyGroupByReadOnlyInstanceOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeReadOnlyGroupByReadOnlyInstanceRequest&, DescribeReadOnlyGroupByReadOnlyInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReadOnlyGroupByReadOnlyInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReadOnlyGroupDetailsResponse> DescribeReadOnlyGroupDetailsOutcome;
                typedef std::future<DescribeReadOnlyGroupDetailsOutcome> DescribeReadOnlyGroupDetailsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeReadOnlyGroupDetailsRequest&, DescribeReadOnlyGroupDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReadOnlyGroupDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReadOnlyGroupListResponse> DescribeReadOnlyGroupListOutcome;
                typedef std::future<DescribeReadOnlyGroupListOutcome> DescribeReadOnlyGroupListOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeReadOnlyGroupListRequest&, DescribeReadOnlyGroupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReadOnlyGroupListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRegionsResponse> DescribeRegionsOutcome;
                typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeRegionsRequest&, DescribeRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRollbackTimeResponse> DescribeRollbackTimeOutcome;
                typedef std::future<DescribeRollbackTimeOutcome> DescribeRollbackTimeOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeRollbackTimeRequest&, DescribeRollbackTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRollbackTimeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSlowlogsResponse> DescribeSlowlogsOutcome;
                typedef std::future<DescribeSlowlogsOutcome> DescribeSlowlogsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeSlowlogsRequest&, DescribeSlowlogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowlogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUploadBackupInfoResponse> DescribeUploadBackupInfoOutcome;
                typedef std::future<DescribeUploadBackupInfoOutcome> DescribeUploadBackupInfoOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeUploadBackupInfoRequest&, DescribeUploadBackupInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUploadBackupInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUploadIncrementalInfoResponse> DescribeUploadIncrementalInfoOutcome;
                typedef std::future<DescribeUploadIncrementalInfoOutcome> DescribeUploadIncrementalInfoOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeUploadIncrementalInfoRequest&, DescribeUploadIncrementalInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUploadIncrementalInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeXEventsResponse> DescribeXEventsOutcome;
                typedef std::future<DescribeXEventsOutcome> DescribeXEventsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeXEventsRequest&, DescribeXEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeXEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZonesResponse> DescribeZonesOutcome;
                typedef std::future<DescribeZonesOutcome> DescribeZonesOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeZonesRequest&, DescribeZonesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZonesAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateSecurityGroupsResponse> DisassociateSecurityGroupsOutcome;
                typedef std::future<DisassociateSecurityGroupsOutcome> DisassociateSecurityGroupsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DisassociateSecurityGroupsRequest&, DisassociateSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceCreateDBInstancesResponse> InquiryPriceCreateDBInstancesOutcome;
                typedef std::future<InquiryPriceCreateDBInstancesOutcome> InquiryPriceCreateDBInstancesOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::InquiryPriceCreateDBInstancesRequest&, InquiryPriceCreateDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceCreateDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceRenewDBInstanceResponse> InquiryPriceRenewDBInstanceOutcome;
                typedef std::future<InquiryPriceRenewDBInstanceOutcome> InquiryPriceRenewDBInstanceOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::InquiryPriceRenewDBInstanceRequest&, InquiryPriceRenewDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceRenewDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceUpgradeDBInstanceResponse> InquiryPriceUpgradeDBInstanceOutcome;
                typedef std::future<InquiryPriceUpgradeDBInstanceOutcome> InquiryPriceUpgradeDBInstanceOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::InquiryPriceUpgradeDBInstanceRequest&, InquiryPriceUpgradeDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceUpgradeDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccountPrivilegeResponse> ModifyAccountPrivilegeOutcome;
                typedef std::future<ModifyAccountPrivilegeOutcome> ModifyAccountPrivilegeOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyAccountPrivilegeRequest&, ModifyAccountPrivilegeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountPrivilegeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccountRemarkResponse> ModifyAccountRemarkOutcome;
                typedef std::future<ModifyAccountRemarkOutcome> ModifyAccountRemarkOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyAccountRemarkRequest&, ModifyAccountRemarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountRemarkAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBackupMigrationResponse> ModifyBackupMigrationOutcome;
                typedef std::future<ModifyBackupMigrationOutcome> ModifyBackupMigrationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyBackupMigrationRequest&, ModifyBackupMigrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupMigrationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBackupNameResponse> ModifyBackupNameOutcome;
                typedef std::future<ModifyBackupNameOutcome> ModifyBackupNameOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyBackupNameRequest&, ModifyBackupNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupNameAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBackupStrategyResponse> ModifyBackupStrategyOutcome;
                typedef std::future<ModifyBackupStrategyOutcome> ModifyBackupStrategyOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyBackupStrategyRequest&, ModifyBackupStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBEncryptAttributesResponse> ModifyDBEncryptAttributesOutcome;
                typedef std::future<ModifyDBEncryptAttributesOutcome> ModifyDBEncryptAttributesOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyDBEncryptAttributesRequest&, ModifyDBEncryptAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBEncryptAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceNameResponse> ModifyDBInstanceNameOutcome;
                typedef std::future<ModifyDBInstanceNameOutcome> ModifyDBInstanceNameOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyDBInstanceNameRequest&, ModifyDBInstanceNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceNameAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceNetworkResponse> ModifyDBInstanceNetworkOutcome;
                typedef std::future<ModifyDBInstanceNetworkOutcome> ModifyDBInstanceNetworkOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyDBInstanceNetworkRequest&, ModifyDBInstanceNetworkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceNetworkAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceProjectResponse> ModifyDBInstanceProjectOutcome;
                typedef std::future<ModifyDBInstanceProjectOutcome> ModifyDBInstanceProjectOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyDBInstanceProjectRequest&, ModifyDBInstanceProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceRenewFlagResponse> ModifyDBInstanceRenewFlagOutcome;
                typedef std::future<ModifyDBInstanceRenewFlagOutcome> ModifyDBInstanceRenewFlagOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyDBInstanceRenewFlagRequest&, ModifyDBInstanceRenewFlagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceRenewFlagAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceSecurityGroupsResponse> ModifyDBInstanceSecurityGroupsOutcome;
                typedef std::future<ModifyDBInstanceSecurityGroupsOutcome> ModifyDBInstanceSecurityGroupsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyDBInstanceSecurityGroupsRequest&, ModifyDBInstanceSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBNameResponse> ModifyDBNameOutcome;
                typedef std::future<ModifyDBNameOutcome> ModifyDBNameOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyDBNameRequest&, ModifyDBNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBNameAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBRemarkResponse> ModifyDBRemarkOutcome;
                typedef std::future<ModifyDBRemarkOutcome> ModifyDBRemarkOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyDBRemarkRequest&, ModifyDBRemarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBRemarkAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDatabaseCDCResponse> ModifyDatabaseCDCOutcome;
                typedef std::future<ModifyDatabaseCDCOutcome> ModifyDatabaseCDCOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyDatabaseCDCRequest&, ModifyDatabaseCDCOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDatabaseCDCAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDatabaseCTResponse> ModifyDatabaseCTOutcome;
                typedef std::future<ModifyDatabaseCTOutcome> ModifyDatabaseCTOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyDatabaseCTRequest&, ModifyDatabaseCTOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDatabaseCTAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDatabaseMdfResponse> ModifyDatabaseMdfOutcome;
                typedef std::future<ModifyDatabaseMdfOutcome> ModifyDatabaseMdfOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyDatabaseMdfRequest&, ModifyDatabaseMdfOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDatabaseMdfAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyIncrementalMigrationResponse> ModifyIncrementalMigrationOutcome;
                typedef std::future<ModifyIncrementalMigrationOutcome> ModifyIncrementalMigrationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyIncrementalMigrationRequest&, ModifyIncrementalMigrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIncrementalMigrationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceEncryptAttributesResponse> ModifyInstanceEncryptAttributesOutcome;
                typedef std::future<ModifyInstanceEncryptAttributesOutcome> ModifyInstanceEncryptAttributesOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyInstanceEncryptAttributesRequest&, ModifyInstanceEncryptAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceEncryptAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceParamResponse> ModifyInstanceParamOutcome;
                typedef std::future<ModifyInstanceParamOutcome> ModifyInstanceParamOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyInstanceParamRequest&, ModifyInstanceParamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceParamAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMaintenanceSpanResponse> ModifyMaintenanceSpanOutcome;
                typedef std::future<ModifyMaintenanceSpanOutcome> ModifyMaintenanceSpanOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyMaintenanceSpanRequest&, ModifyMaintenanceSpanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMaintenanceSpanAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMigrationResponse> ModifyMigrationOutcome;
                typedef std::future<ModifyMigrationOutcome> ModifyMigrationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyMigrationRequest&, ModifyMigrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMigrationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPublishSubscribeNameResponse> ModifyPublishSubscribeNameOutcome;
                typedef std::future<ModifyPublishSubscribeNameOutcome> ModifyPublishSubscribeNameOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyPublishSubscribeNameRequest&, ModifyPublishSubscribeNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPublishSubscribeNameAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyReadOnlyGroupDetailsResponse> ModifyReadOnlyGroupDetailsOutcome;
                typedef std::future<ModifyReadOnlyGroupDetailsOutcome> ModifyReadOnlyGroupDetailsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyReadOnlyGroupDetailsRequest&, ModifyReadOnlyGroupDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyReadOnlyGroupDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenInterCommunicationResponse> OpenInterCommunicationOutcome;
                typedef std::future<OpenInterCommunicationOutcome> OpenInterCommunicationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::OpenInterCommunicationRequest&, OpenInterCommunicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenInterCommunicationAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryMigrationCheckProcessResponse> QueryMigrationCheckProcessOutcome;
                typedef std::future<QueryMigrationCheckProcessOutcome> QueryMigrationCheckProcessOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::QueryMigrationCheckProcessRequest&, QueryMigrationCheckProcessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryMigrationCheckProcessAsyncHandler;
                typedef Outcome<Core::Error, Model::RecycleDBInstanceResponse> RecycleDBInstanceOutcome;
                typedef std::future<RecycleDBInstanceOutcome> RecycleDBInstanceOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::RecycleDBInstanceRequest&, RecycleDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecycleDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::RecycleReadOnlyGroupResponse> RecycleReadOnlyGroupOutcome;
                typedef std::future<RecycleReadOnlyGroupOutcome> RecycleReadOnlyGroupOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::RecycleReadOnlyGroupRequest&, RecycleReadOnlyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecycleReadOnlyGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveBackupsResponse> RemoveBackupsOutcome;
                typedef std::future<RemoveBackupsOutcome> RemoveBackupsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::RemoveBackupsRequest&, RemoveBackupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveBackupsAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewDBInstanceResponse> RenewDBInstanceOutcome;
                typedef std::future<RenewDBInstanceOutcome> RenewDBInstanceOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::RenewDBInstanceRequest&, RenewDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewPostpaidDBInstanceResponse> RenewPostpaidDBInstanceOutcome;
                typedef std::future<RenewPostpaidDBInstanceOutcome> RenewPostpaidDBInstanceOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::RenewPostpaidDBInstanceRequest&, RenewPostpaidDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewPostpaidDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetAccountPasswordResponse> ResetAccountPasswordOutcome;
                typedef std::future<ResetAccountPasswordOutcome> ResetAccountPasswordOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ResetAccountPasswordRequest&, ResetAccountPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetAccountPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::RestartDBInstanceResponse> RestartDBInstanceOutcome;
                typedef std::future<RestartDBInstanceOutcome> RestartDBInstanceOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::RestartDBInstanceRequest&, RestartDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestartDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::RestoreInstanceResponse> RestoreInstanceOutcome;
                typedef std::future<RestoreInstanceOutcome> RestoreInstanceOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::RestoreInstanceRequest&, RestoreInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestoreInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::RollbackInstanceResponse> RollbackInstanceOutcome;
                typedef std::future<RollbackInstanceOutcome> RollbackInstanceOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::RollbackInstanceRequest&, RollbackInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RollbackInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::RunMigrationResponse> RunMigrationOutcome;
                typedef std::future<RunMigrationOutcome> RunMigrationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::RunMigrationRequest&, RunMigrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunMigrationAsyncHandler;
                typedef Outcome<Core::Error, Model::StartBackupMigrationResponse> StartBackupMigrationOutcome;
                typedef std::future<StartBackupMigrationOutcome> StartBackupMigrationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::StartBackupMigrationRequest&, StartBackupMigrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartBackupMigrationAsyncHandler;
                typedef Outcome<Core::Error, Model::StartIncrementalMigrationResponse> StartIncrementalMigrationOutcome;
                typedef std::future<StartIncrementalMigrationOutcome> StartIncrementalMigrationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::StartIncrementalMigrationRequest&, StartIncrementalMigrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartIncrementalMigrationAsyncHandler;
                typedef Outcome<Core::Error, Model::StartInstanceXEventResponse> StartInstanceXEventOutcome;
                typedef std::future<StartInstanceXEventOutcome> StartInstanceXEventOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::StartInstanceXEventRequest&, StartInstanceXEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartInstanceXEventAsyncHandler;
                typedef Outcome<Core::Error, Model::StartMigrationCheckResponse> StartMigrationCheckOutcome;
                typedef std::future<StartMigrationCheckOutcome> StartMigrationCheckOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::StartMigrationCheckRequest&, StartMigrationCheckOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartMigrationCheckAsyncHandler;
                typedef Outcome<Core::Error, Model::StopMigrationResponse> StopMigrationOutcome;
                typedef std::future<StopMigrationOutcome> StopMigrationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::StopMigrationRequest&, StopMigrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopMigrationAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminateDBInstanceResponse> TerminateDBInstanceOutcome;
                typedef std::future<TerminateDBInstanceOutcome> TerminateDBInstanceOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::TerminateDBInstanceRequest&, TerminateDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeDBInstanceResponse> UpgradeDBInstanceOutcome;
                typedef std::future<UpgradeDBInstanceOutcome> UpgradeDBInstanceOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::UpgradeDBInstanceRequest&, UpgradeDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDBInstanceAsyncHandler;



                /**
                 *本接口(AssociateSecurityGroups)用于安全组批量绑定实例。
                 * @param req AssociateSecurityGroupsRequest
                 * @return AssociateSecurityGroupsOutcome
                 */
                AssociateSecurityGroupsOutcome AssociateSecurityGroups(const Model::AssociateSecurityGroupsRequest &request);
                void AssociateSecurityGroupsAsync(const Model::AssociateSecurityGroupsRequest& request, const AssociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateSecurityGroupsOutcomeCallable AssociateSecurityGroupsCallable(const Model::AssociateSecurityGroupsRequest& request);

                /**
                 *本接口（CloneDB）用于克隆数据库，只支持克隆到本实例，克隆时必须指定新库名称。
                 * @param req CloneDBRequest
                 * @return CloneDBOutcome
                 */
                CloneDBOutcome CloneDB(const Model::CloneDBRequest &request);
                void CloneDBAsync(const Model::CloneDBRequest& request, const CloneDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloneDBOutcomeCallable CloneDBCallable(const Model::CloneDBRequest& request);

                /**
                 *本接口（CloseInterCommunication）用于关闭实例互通。
                 * @param req CloseInterCommunicationRequest
                 * @return CloseInterCommunicationOutcome
                 */
                CloseInterCommunicationOutcome CloseInterCommunication(const Model::CloseInterCommunicationRequest &request);
                void CloseInterCommunicationAsync(const Model::CloseInterCommunicationRequest& request, const CloseInterCommunicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloseInterCommunicationOutcomeCallable CloseInterCommunicationCallable(const Model::CloseInterCommunicationRequest& request);

                /**
                 *本接口（CompleteExpansion）在实例发起扩容后，实例状态处于“升级待切换”时，可立即完成实例升级切换操作，无需等待可维护时间窗。本接口需要在实例低峰时调用，在完全切换成功前，存在部分库不可访问的风险。
                 * @param req CompleteExpansionRequest
                 * @return CompleteExpansionOutcome
                 */
                CompleteExpansionOutcome CompleteExpansion(const Model::CompleteExpansionRequest &request);
                void CompleteExpansionAsync(const Model::CompleteExpansionRequest& request, const CompleteExpansionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CompleteExpansionOutcomeCallable CompleteExpansionCallable(const Model::CompleteExpansionRequest& request);

                /**
                 *本接口（CompleteMigration）作用是完成一个迁移任务
                 * @param req CompleteMigrationRequest
                 * @return CompleteMigrationOutcome
                 */
                CompleteMigrationOutcome CompleteMigration(const Model::CompleteMigrationRequest &request);
                void CompleteMigrationAsync(const Model::CompleteMigrationRequest& request, const CompleteMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CompleteMigrationOutcomeCallable CompleteMigrationCallable(const Model::CompleteMigrationRequest& request);

                /**
                 *本接口（CreateAccount）用于创建实例账号
                 * @param req CreateAccountRequest
                 * @return CreateAccountOutcome
                 */
                CreateAccountOutcome CreateAccount(const Model::CreateAccountRequest &request);
                void CreateAccountAsync(const Model::CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAccountOutcomeCallable CreateAccountCallable(const Model::CreateAccountRequest& request);

                /**
                 *本接口(CreateBackup)用于创建备份。
                 * @param req CreateBackupRequest
                 * @return CreateBackupOutcome
                 */
                CreateBackupOutcome CreateBackup(const Model::CreateBackupRequest &request);
                void CreateBackupAsync(const Model::CreateBackupRequest& request, const CreateBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBackupOutcomeCallable CreateBackupCallable(const Model::CreateBackupRequest& request);

                /**
                 *本接口（CreateBackupMigration）用于创建备份导入任务。
                 * @param req CreateBackupMigrationRequest
                 * @return CreateBackupMigrationOutcome
                 */
                CreateBackupMigrationOutcome CreateBackupMigration(const Model::CreateBackupMigrationRequest &request);
                void CreateBackupMigrationAsync(const Model::CreateBackupMigrationRequest& request, const CreateBackupMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBackupMigrationOutcomeCallable CreateBackupMigrationCallable(const Model::CreateBackupMigrationRequest& request);

                /**
                 *本接口（CreateBasicDBInstances）用于创建SQL server基础版实例。
                 * @param req CreateBasicDBInstancesRequest
                 * @return CreateBasicDBInstancesOutcome
                 */
                CreateBasicDBInstancesOutcome CreateBasicDBInstances(const Model::CreateBasicDBInstancesRequest &request);
                void CreateBasicDBInstancesAsync(const Model::CreateBasicDBInstancesRequest& request, const CreateBasicDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBasicDBInstancesOutcomeCallable CreateBasicDBInstancesCallable(const Model::CreateBasicDBInstancesRequest& request);

                /**
                 *本接口（CreateBusinessDBInstances）用于创建商业智能服务实例。
                 * @param req CreateBusinessDBInstancesRequest
                 * @return CreateBusinessDBInstancesOutcome
                 */
                CreateBusinessDBInstancesOutcome CreateBusinessDBInstances(const Model::CreateBusinessDBInstancesRequest &request);
                void CreateBusinessDBInstancesAsync(const Model::CreateBusinessDBInstancesRequest& request, const CreateBusinessDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBusinessDBInstancesOutcomeCallable CreateBusinessDBInstancesCallable(const Model::CreateBusinessDBInstancesRequest& request);

                /**
                 *本接口（CreateBusinessIntelligenceFile）用于添加商业智能服务文件。
                 * @param req CreateBusinessIntelligenceFileRequest
                 * @return CreateBusinessIntelligenceFileOutcome
                 */
                CreateBusinessIntelligenceFileOutcome CreateBusinessIntelligenceFile(const Model::CreateBusinessIntelligenceFileRequest &request);
                void CreateBusinessIntelligenceFileAsync(const Model::CreateBusinessIntelligenceFileRequest& request, const CreateBusinessIntelligenceFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBusinessIntelligenceFileOutcomeCallable CreateBusinessIntelligenceFileCallable(const Model::CreateBusinessIntelligenceFileRequest& request);

                /**
                 *本接口（CreateCloudDBInstances）用于创建高可用实例(虚拟机版本)。
                 * @param req CreateCloudDBInstancesRequest
                 * @return CreateCloudDBInstancesOutcome
                 */
                CreateCloudDBInstancesOutcome CreateCloudDBInstances(const Model::CreateCloudDBInstancesRequest &request);
                void CreateCloudDBInstancesAsync(const Model::CreateCloudDBInstancesRequest& request, const CreateCloudDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCloudDBInstancesOutcomeCallable CreateCloudDBInstancesCallable(const Model::CreateCloudDBInstancesRequest& request);

                /**
                 *本接口（CreateCloudReadOnlyDBInstances）用于添加只读副本实例(虚拟机版本)。
                 * @param req CreateCloudReadOnlyDBInstancesRequest
                 * @return CreateCloudReadOnlyDBInstancesOutcome
                 */
                CreateCloudReadOnlyDBInstancesOutcome CreateCloudReadOnlyDBInstances(const Model::CreateCloudReadOnlyDBInstancesRequest &request);
                void CreateCloudReadOnlyDBInstancesAsync(const Model::CreateCloudReadOnlyDBInstancesRequest& request, const CreateCloudReadOnlyDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCloudReadOnlyDBInstancesOutcomeCallable CreateCloudReadOnlyDBInstancesCallable(const Model::CreateCloudReadOnlyDBInstancesRequest& request);

                /**
                 *本接口（CreateDB）用于创建数据库。
                 * @param req CreateDBRequest
                 * @return CreateDBOutcome
                 */
                CreateDBOutcome CreateDB(const Model::CreateDBRequest &request);
                void CreateDBAsync(const Model::CreateDBRequest& request, const CreateDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDBOutcomeCallable CreateDBCallable(const Model::CreateDBRequest& request);

                /**
                 *本接口（CreateDBInstances）用于创建实例。
                 * @param req CreateDBInstancesRequest
                 * @return CreateDBInstancesOutcome
                 */
                CreateDBInstancesOutcome CreateDBInstances(const Model::CreateDBInstancesRequest &request);
                void CreateDBInstancesAsync(const Model::CreateDBInstancesRequest& request, const CreateDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDBInstancesOutcomeCallable CreateDBInstancesCallable(const Model::CreateDBInstancesRequest& request);

                /**
                 *本接口（CreateIncrementalMigration）用于创建增量备份导入任务。
                 * @param req CreateIncrementalMigrationRequest
                 * @return CreateIncrementalMigrationOutcome
                 */
                CreateIncrementalMigrationOutcome CreateIncrementalMigration(const Model::CreateIncrementalMigrationRequest &request);
                void CreateIncrementalMigrationAsync(const Model::CreateIncrementalMigrationRequest& request, const CreateIncrementalMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIncrementalMigrationOutcomeCallable CreateIncrementalMigrationCallable(const Model::CreateIncrementalMigrationRequest& request);

                /**
                 *本接口（CreateMigration）作用是创建一个迁移任务
                 * @param req CreateMigrationRequest
                 * @return CreateMigrationOutcome
                 */
                CreateMigrationOutcome CreateMigration(const Model::CreateMigrationRequest &request);
                void CreateMigrationAsync(const Model::CreateMigrationRequest& request, const CreateMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMigrationOutcomeCallable CreateMigrationCallable(const Model::CreateMigrationRequest& request);

                /**
                 *本接口（CreatePublishSubscribe）用于创建两个数据库之间的发布订阅关系。作为订阅者，不能再充当发布者，作为发布者可以有多个订阅者实例。
                 * @param req CreatePublishSubscribeRequest
                 * @return CreatePublishSubscribeOutcome
                 */
                CreatePublishSubscribeOutcome CreatePublishSubscribe(const Model::CreatePublishSubscribeRequest &request);
                void CreatePublishSubscribeAsync(const Model::CreatePublishSubscribeRequest& request, const CreatePublishSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePublishSubscribeOutcomeCallable CreatePublishSubscribeCallable(const Model::CreatePublishSubscribeRequest& request);

                /**
                 *本接口（CreateReadOnlyDBInstances）用于添加只读副本实例。
                 * @param req CreateReadOnlyDBInstancesRequest
                 * @return CreateReadOnlyDBInstancesOutcome
                 */
                CreateReadOnlyDBInstancesOutcome CreateReadOnlyDBInstances(const Model::CreateReadOnlyDBInstancesRequest &request);
                void CreateReadOnlyDBInstancesAsync(const Model::CreateReadOnlyDBInstancesRequest& request, const CreateReadOnlyDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateReadOnlyDBInstancesOutcomeCallable CreateReadOnlyDBInstancesCallable(const Model::CreateReadOnlyDBInstancesRequest& request);

                /**
                 *本接口（DeleteAccount）用于删除实例账号。
                 * @param req DeleteAccountRequest
                 * @return DeleteAccountOutcome
                 */
                DeleteAccountOutcome DeleteAccount(const Model::DeleteAccountRequest &request);
                void DeleteAccountAsync(const Model::DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAccountOutcomeCallable DeleteAccountCallable(const Model::DeleteAccountRequest& request);

                /**
                 *本接口（DeleteBackupMigration）用于删除备份导入任务。
                 * @param req DeleteBackupMigrationRequest
                 * @return DeleteBackupMigrationOutcome
                 */
                DeleteBackupMigrationOutcome DeleteBackupMigration(const Model::DeleteBackupMigrationRequest &request);
                void DeleteBackupMigrationAsync(const Model::DeleteBackupMigrationRequest& request, const DeleteBackupMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBackupMigrationOutcomeCallable DeleteBackupMigrationCallable(const Model::DeleteBackupMigrationRequest& request);

                /**
                 *本接口（DeleteBusinessIntelligenceFile）用于删除商业智能文件。
                 * @param req DeleteBusinessIntelligenceFileRequest
                 * @return DeleteBusinessIntelligenceFileOutcome
                 */
                DeleteBusinessIntelligenceFileOutcome DeleteBusinessIntelligenceFile(const Model::DeleteBusinessIntelligenceFileRequest &request);
                void DeleteBusinessIntelligenceFileAsync(const Model::DeleteBusinessIntelligenceFileRequest& request, const DeleteBusinessIntelligenceFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBusinessIntelligenceFileOutcomeCallable DeleteBusinessIntelligenceFileCallable(const Model::DeleteBusinessIntelligenceFileRequest& request);

                /**
                 *本接口(DeleteDB)用于删除数据库。
                 * @param req DeleteDBRequest
                 * @return DeleteDBOutcome
                 */
                DeleteDBOutcome DeleteDB(const Model::DeleteDBRequest &request);
                void DeleteDBAsync(const Model::DeleteDBRequest& request, const DeleteDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDBOutcomeCallable DeleteDBCallable(const Model::DeleteDBRequest& request);

                /**
                 *本接口（DeleteDBInstance）用于释放回收站中的SQL server实例(立即下线)。释放后的实例将保存一段时间后物理销毁。其发布订阅将自动解除，其ro副本将自动释放。
                 * @param req DeleteDBInstanceRequest
                 * @return DeleteDBInstanceOutcome
                 */
                DeleteDBInstanceOutcome DeleteDBInstance(const Model::DeleteDBInstanceRequest &request);
                void DeleteDBInstanceAsync(const Model::DeleteDBInstanceRequest& request, const DeleteDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDBInstanceOutcomeCallable DeleteDBInstanceCallable(const Model::DeleteDBInstanceRequest& request);

                /**
                 *本接口（DeleteIncrementalMigration）用于删除增量备份导入任务。
                 * @param req DeleteIncrementalMigrationRequest
                 * @return DeleteIncrementalMigrationOutcome
                 */
                DeleteIncrementalMigrationOutcome DeleteIncrementalMigration(const Model::DeleteIncrementalMigrationRequest &request);
                void DeleteIncrementalMigrationAsync(const Model::DeleteIncrementalMigrationRequest& request, const DeleteIncrementalMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteIncrementalMigrationOutcomeCallable DeleteIncrementalMigrationCallable(const Model::DeleteIncrementalMigrationRequest& request);

                /**
                 *本接口（DeleteMigration）用于删除迁移任务
                 * @param req DeleteMigrationRequest
                 * @return DeleteMigrationOutcome
                 */
                DeleteMigrationOutcome DeleteMigration(const Model::DeleteMigrationRequest &request);
                void DeleteMigrationAsync(const Model::DeleteMigrationRequest& request, const DeleteMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMigrationOutcomeCallable DeleteMigrationCallable(const Model::DeleteMigrationRequest& request);

                /**
                 *本接口（DeletePublishSubscribe）用于删除两个数据库间的发布订阅关系。
                 * @param req DeletePublishSubscribeRequest
                 * @return DeletePublishSubscribeOutcome
                 */
                DeletePublishSubscribeOutcome DeletePublishSubscribe(const Model::DeletePublishSubscribeRequest &request);
                void DeletePublishSubscribeAsync(const Model::DeletePublishSubscribeRequest& request, const DeletePublishSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePublishSubscribeOutcomeCallable DeletePublishSubscribeCallable(const Model::DeletePublishSubscribeRequest& request);

                /**
                 *本接口（DescribeAccounts）用于拉取实例账户列表。
                 * @param req DescribeAccountsRequest
                 * @return DescribeAccountsOutcome
                 */
                DescribeAccountsOutcome DescribeAccounts(const Model::DescribeAccountsRequest &request);
                void DescribeAccountsAsync(const Model::DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountsOutcomeCallable DescribeAccountsCallable(const Model::DescribeAccountsRequest& request);

                /**
                 *本接口(DescribeBackupByFlowId)用于通过备份创建流程的ID查询创建的备份详情，流程ID可从接口CreateBackup中获得。
                 * @param req DescribeBackupByFlowIdRequest
                 * @return DescribeBackupByFlowIdOutcome
                 */
                DescribeBackupByFlowIdOutcome DescribeBackupByFlowId(const Model::DescribeBackupByFlowIdRequest &request);
                void DescribeBackupByFlowIdAsync(const Model::DescribeBackupByFlowIdRequest& request, const DescribeBackupByFlowIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupByFlowIdOutcomeCallable DescribeBackupByFlowIdCallable(const Model::DescribeBackupByFlowIdRequest& request);

                /**
                 *本接口（DescribeBackupCommand）用于查询以规范的格式创建备份的命令。
                 * @param req DescribeBackupCommandRequest
                 * @return DescribeBackupCommandOutcome
                 */
                DescribeBackupCommandOutcome DescribeBackupCommand(const Model::DescribeBackupCommandRequest &request);
                void DescribeBackupCommandAsync(const Model::DescribeBackupCommandRequest& request, const DescribeBackupCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupCommandOutcomeCallable DescribeBackupCommandCallable(const Model::DescribeBackupCommandRequest& request);

                /**
                 *本接口(DescribeBackupFiles)用于查询单库备份明细
                 * @param req DescribeBackupFilesRequest
                 * @return DescribeBackupFilesOutcome
                 */
                DescribeBackupFilesOutcome DescribeBackupFiles(const Model::DescribeBackupFilesRequest &request);
                void DescribeBackupFilesAsync(const Model::DescribeBackupFilesRequest& request, const DescribeBackupFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupFilesOutcomeCallable DescribeBackupFilesCallable(const Model::DescribeBackupFilesRequest& request);

                /**
                 *本接口（DescribeBackupMigration）用于创建增量备份导入任务。
                 * @param req DescribeBackupMigrationRequest
                 * @return DescribeBackupMigrationOutcome
                 */
                DescribeBackupMigrationOutcome DescribeBackupMigration(const Model::DescribeBackupMigrationRequest &request);
                void DescribeBackupMigrationAsync(const Model::DescribeBackupMigrationRequest& request, const DescribeBackupMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupMigrationOutcomeCallable DescribeBackupMigrationCallable(const Model::DescribeBackupMigrationRequest& request);

                /**
                 *本接口（DescribeBackupUploadSize）用于查询上传的备份文件大小。在备份上传类型是COS_UPLOAD(备份放在业务的对象存储上)时有效。
                 * @param req DescribeBackupUploadSizeRequest
                 * @return DescribeBackupUploadSizeOutcome
                 */
                DescribeBackupUploadSizeOutcome DescribeBackupUploadSize(const Model::DescribeBackupUploadSizeRequest &request);
                void DescribeBackupUploadSizeAsync(const Model::DescribeBackupUploadSizeRequest& request, const DescribeBackupUploadSizeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupUploadSizeOutcomeCallable DescribeBackupUploadSizeCallable(const Model::DescribeBackupUploadSizeRequest& request);

                /**
                 *本接口(DescribeBackups)用于查询备份列表。
                 * @param req DescribeBackupsRequest
                 * @return DescribeBackupsOutcome
                 */
                DescribeBackupsOutcome DescribeBackups(const Model::DescribeBackupsRequest &request);
                void DescribeBackupsAsync(const Model::DescribeBackupsRequest& request, const DescribeBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupsOutcomeCallable DescribeBackupsCallable(const Model::DescribeBackupsRequest& request);

                /**
                 *本接口（DescribeBusinessIntelligenceFile）用于查询商业智能服务需要的文件。
                 * @param req DescribeBusinessIntelligenceFileRequest
                 * @return DescribeBusinessIntelligenceFileOutcome
                 */
                DescribeBusinessIntelligenceFileOutcome DescribeBusinessIntelligenceFile(const Model::DescribeBusinessIntelligenceFileRequest &request);
                void DescribeBusinessIntelligenceFileAsync(const Model::DescribeBusinessIntelligenceFileRequest& request, const DescribeBusinessIntelligenceFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBusinessIntelligenceFileOutcomeCallable DescribeBusinessIntelligenceFileCallable(const Model::DescribeBusinessIntelligenceFileRequest& request);

                /**
                 *本接口(DescribeCrossRegionZone)根据主实例查询备机的容灾地域和可用区。
                 * @param req DescribeCrossRegionZoneRequest
                 * @return DescribeCrossRegionZoneOutcome
                 */
                DescribeCrossRegionZoneOutcome DescribeCrossRegionZone(const Model::DescribeCrossRegionZoneRequest &request);
                void DescribeCrossRegionZoneAsync(const Model::DescribeCrossRegionZoneRequest& request, const DescribeCrossRegionZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCrossRegionZoneOutcomeCallable DescribeCrossRegionZoneCallable(const Model::DescribeCrossRegionZoneRequest& request);

                /**
                 *本接口（DescribeDBCharsets）用于查询实例支持的数据库字符集。
                 * @param req DescribeDBCharsetsRequest
                 * @return DescribeDBCharsetsOutcome
                 */
                DescribeDBCharsetsOutcome DescribeDBCharsets(const Model::DescribeDBCharsetsRequest &request);
                void DescribeDBCharsetsAsync(const Model::DescribeDBCharsetsRequest& request, const DescribeDBCharsetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBCharsetsOutcomeCallable DescribeDBCharsetsCallable(const Model::DescribeDBCharsetsRequest& request);

                /**
                 *本接口（DescribeDBInstanceInter）用于查询互通实例的信息。
                 * @param req DescribeDBInstanceInterRequest
                 * @return DescribeDBInstanceInterOutcome
                 */
                DescribeDBInstanceInterOutcome DescribeDBInstanceInter(const Model::DescribeDBInstanceInterRequest &request);
                void DescribeDBInstanceInterAsync(const Model::DescribeDBInstanceInterRequest& request, const DescribeDBInstanceInterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstanceInterOutcomeCallable DescribeDBInstanceInterCallable(const Model::DescribeDBInstanceInterRequest& request);

                /**
                 *本接口(DescribeDBInstances)用于查询实例列表。
                 * @param req DescribeDBInstancesRequest
                 * @return DescribeDBInstancesOutcome
                 */
                DescribeDBInstancesOutcome DescribeDBInstances(const Model::DescribeDBInstancesRequest &request);
                void DescribeDBInstancesAsync(const Model::DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstancesOutcomeCallable DescribeDBInstancesCallable(const Model::DescribeDBInstancesRequest& request);

                /**
                 *本接口（DescribeDBInstancesAttribute）用于查询实例附属属性
                 * @param req DescribeDBInstancesAttributeRequest
                 * @return DescribeDBInstancesAttributeOutcome
                 */
                DescribeDBInstancesAttributeOutcome DescribeDBInstancesAttribute(const Model::DescribeDBInstancesAttributeRequest &request);
                void DescribeDBInstancesAttributeAsync(const Model::DescribeDBInstancesAttributeRequest& request, const DescribeDBInstancesAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstancesAttributeOutcomeCallable DescribeDBInstancesAttributeCallable(const Model::DescribeDBInstancesAttributeRequest& request);

                /**
                 *本接口(DescribeDBSecurityGroups)用于查询实例的安全组详情。
                 * @param req DescribeDBSecurityGroupsRequest
                 * @return DescribeDBSecurityGroupsOutcome
                 */
                DescribeDBSecurityGroupsOutcome DescribeDBSecurityGroups(const Model::DescribeDBSecurityGroupsRequest &request);
                void DescribeDBSecurityGroupsAsync(const Model::DescribeDBSecurityGroupsRequest& request, const DescribeDBSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBSecurityGroupsOutcomeCallable DescribeDBSecurityGroupsCallable(const Model::DescribeDBSecurityGroupsRequest& request);

                /**
                 *本接口（DescribeDBs）用于查询数据库列表。
                 * @param req DescribeDBsRequest
                 * @return DescribeDBsOutcome
                 */
                DescribeDBsOutcome DescribeDBs(const Model::DescribeDBsRequest &request);
                void DescribeDBsAsync(const Model::DescribeDBsRequest& request, const DescribeDBsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBsOutcomeCallable DescribeDBsCallable(const Model::DescribeDBsRequest& request);

                /**
                 *本接口(DescribeDBsNormal)用于查询数据库配置信息，此接口不包含数据库的关联账号
                 * @param req DescribeDBsNormalRequest
                 * @return DescribeDBsNormalOutcome
                 */
                DescribeDBsNormalOutcome DescribeDBsNormal(const Model::DescribeDBsNormalRequest &request);
                void DescribeDBsNormalAsync(const Model::DescribeDBsNormalRequest& request, const DescribeDBsNormalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBsNormalOutcomeCallable DescribeDBsNormalCallable(const Model::DescribeDBsNormalRequest& request);

                /**
                 *本接口(DescribeFlowStatus)用于查询流程状态。
                 * @param req DescribeFlowStatusRequest
                 * @return DescribeFlowStatusOutcome
                 */
                DescribeFlowStatusOutcome DescribeFlowStatus(const Model::DescribeFlowStatusRequest &request);
                void DescribeFlowStatusAsync(const Model::DescribeFlowStatusRequest& request, const DescribeFlowStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlowStatusOutcomeCallable DescribeFlowStatusCallable(const Model::DescribeFlowStatusRequest& request);

                /**
                 *本接口（DescribeIncrementalMigration）用于查询增量备份导入任务。
                 * @param req DescribeIncrementalMigrationRequest
                 * @return DescribeIncrementalMigrationOutcome
                 */
                DescribeIncrementalMigrationOutcome DescribeIncrementalMigration(const Model::DescribeIncrementalMigrationRequest &request);
                void DescribeIncrementalMigrationAsync(const Model::DescribeIncrementalMigrationRequest& request, const DescribeIncrementalMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIncrementalMigrationOutcomeCallable DescribeIncrementalMigrationCallable(const Model::DescribeIncrementalMigrationRequest& request);

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
                 *本接口（DescribeMaintenanceSpan）根据实例ID查询该实例的可维护时间窗。
                 * @param req DescribeMaintenanceSpanRequest
                 * @return DescribeMaintenanceSpanOutcome
                 */
                DescribeMaintenanceSpanOutcome DescribeMaintenanceSpan(const Model::DescribeMaintenanceSpanRequest &request);
                void DescribeMaintenanceSpanAsync(const Model::DescribeMaintenanceSpanRequest& request, const DescribeMaintenanceSpanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMaintenanceSpanOutcomeCallable DescribeMaintenanceSpanCallable(const Model::DescribeMaintenanceSpanRequest& request);

                /**
                 *本接口（DescribeMigrationDatabases）的作用是查询待迁移数据库列表
                 * @param req DescribeMigrationDatabasesRequest
                 * @return DescribeMigrationDatabasesOutcome
                 */
                DescribeMigrationDatabasesOutcome DescribeMigrationDatabases(const Model::DescribeMigrationDatabasesRequest &request);
                void DescribeMigrationDatabasesAsync(const Model::DescribeMigrationDatabasesRequest& request, const DescribeMigrationDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMigrationDatabasesOutcomeCallable DescribeMigrationDatabasesCallable(const Model::DescribeMigrationDatabasesRequest& request);

                /**
                 *本接口（DescribeMigrationDetail）用于查询迁移任务的详细情况
                 * @param req DescribeMigrationDetailRequest
                 * @return DescribeMigrationDetailOutcome
                 */
                DescribeMigrationDetailOutcome DescribeMigrationDetail(const Model::DescribeMigrationDetailRequest &request);
                void DescribeMigrationDetailAsync(const Model::DescribeMigrationDetailRequest& request, const DescribeMigrationDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMigrationDetailOutcomeCallable DescribeMigrationDetailCallable(const Model::DescribeMigrationDetailRequest& request);

                /**
                 *本接口（DescribeMigrations）根据输入的限定条件，查询符合条件的迁移任务列表
                 * @param req DescribeMigrationsRequest
                 * @return DescribeMigrationsOutcome
                 */
                DescribeMigrationsOutcome DescribeMigrations(const Model::DescribeMigrationsRequest &request);
                void DescribeMigrationsAsync(const Model::DescribeMigrationsRequest& request, const DescribeMigrationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMigrationsOutcomeCallable DescribeMigrationsCallable(const Model::DescribeMigrationsRequest& request);

                /**
                 *本接口（DescribeOrders）用于查询订单信息
                 * @param req DescribeOrdersRequest
                 * @return DescribeOrdersOutcome
                 */
                DescribeOrdersOutcome DescribeOrders(const Model::DescribeOrdersRequest &request);
                void DescribeOrdersAsync(const Model::DescribeOrdersRequest& request, const DescribeOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrdersOutcomeCallable DescribeOrdersCallable(const Model::DescribeOrdersRequest& request);

                /**
                 *本接口 (DescribeProductConfig) 用于查询售卖规格配置。
                 * @param req DescribeProductConfigRequest
                 * @return DescribeProductConfigOutcome
                 */
                DescribeProductConfigOutcome DescribeProductConfig(const Model::DescribeProductConfigRequest &request);
                void DescribeProductConfigAsync(const Model::DescribeProductConfigRequest& request, const DescribeProductConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProductConfigOutcomeCallable DescribeProductConfigCallable(const Model::DescribeProductConfigRequest& request);

                /**
                 *本接口(DescribeProjectSecurityGroups)用于查询项目的安全组详情。
                 * @param req DescribeProjectSecurityGroupsRequest
                 * @return DescribeProjectSecurityGroupsOutcome
                 */
                DescribeProjectSecurityGroupsOutcome DescribeProjectSecurityGroups(const Model::DescribeProjectSecurityGroupsRequest &request);
                void DescribeProjectSecurityGroupsAsync(const Model::DescribeProjectSecurityGroupsRequest& request, const DescribeProjectSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProjectSecurityGroupsOutcomeCallable DescribeProjectSecurityGroupsCallable(const Model::DescribeProjectSecurityGroupsRequest& request);

                /**
                 *本接口（DescribePublishSubscribe）用于查询发布订阅关系列表。
                 * @param req DescribePublishSubscribeRequest
                 * @return DescribePublishSubscribeOutcome
                 */
                DescribePublishSubscribeOutcome DescribePublishSubscribe(const Model::DescribePublishSubscribeRequest &request);
                void DescribePublishSubscribeAsync(const Model::DescribePublishSubscribeRequest& request, const DescribePublishSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePublishSubscribeOutcomeCallable DescribePublishSubscribeCallable(const Model::DescribePublishSubscribeRequest& request);

                /**
                 *本接口（DescribeReadOnlyGroupByReadOnlyInstance）用于通过只读副本实例ID查询其所在的只读组。
                 * @param req DescribeReadOnlyGroupByReadOnlyInstanceRequest
                 * @return DescribeReadOnlyGroupByReadOnlyInstanceOutcome
                 */
                DescribeReadOnlyGroupByReadOnlyInstanceOutcome DescribeReadOnlyGroupByReadOnlyInstance(const Model::DescribeReadOnlyGroupByReadOnlyInstanceRequest &request);
                void DescribeReadOnlyGroupByReadOnlyInstanceAsync(const Model::DescribeReadOnlyGroupByReadOnlyInstanceRequest& request, const DescribeReadOnlyGroupByReadOnlyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReadOnlyGroupByReadOnlyInstanceOutcomeCallable DescribeReadOnlyGroupByReadOnlyInstanceCallable(const Model::DescribeReadOnlyGroupByReadOnlyInstanceRequest& request);

                /**
                 *本接口（DescribeReadOnlyGroupDetails）用于查询只读组详情。
                 * @param req DescribeReadOnlyGroupDetailsRequest
                 * @return DescribeReadOnlyGroupDetailsOutcome
                 */
                DescribeReadOnlyGroupDetailsOutcome DescribeReadOnlyGroupDetails(const Model::DescribeReadOnlyGroupDetailsRequest &request);
                void DescribeReadOnlyGroupDetailsAsync(const Model::DescribeReadOnlyGroupDetailsRequest& request, const DescribeReadOnlyGroupDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReadOnlyGroupDetailsOutcomeCallable DescribeReadOnlyGroupDetailsCallable(const Model::DescribeReadOnlyGroupDetailsRequest& request);

                /**
                 *本接口（DescribeReadOnlyGroupList）用于查询只读组列表。
                 * @param req DescribeReadOnlyGroupListRequest
                 * @return DescribeReadOnlyGroupListOutcome
                 */
                DescribeReadOnlyGroupListOutcome DescribeReadOnlyGroupList(const Model::DescribeReadOnlyGroupListRequest &request);
                void DescribeReadOnlyGroupListAsync(const Model::DescribeReadOnlyGroupListRequest& request, const DescribeReadOnlyGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReadOnlyGroupListOutcomeCallable DescribeReadOnlyGroupListCallable(const Model::DescribeReadOnlyGroupListRequest& request);

                /**
                 *本接口 (DescribeRegions) 用于查询售卖地域信息。
                 * @param req DescribeRegionsRequest
                 * @return DescribeRegionsOutcome
                 */
                DescribeRegionsOutcome DescribeRegions(const Model::DescribeRegionsRequest &request);
                void DescribeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRegionsOutcomeCallable DescribeRegionsCallable(const Model::DescribeRegionsRequest& request);

                /**
                 *本接口（DescribeRollbackTime）用于查询实例可回档时间范围
                 * @param req DescribeRollbackTimeRequest
                 * @return DescribeRollbackTimeOutcome
                 */
                DescribeRollbackTimeOutcome DescribeRollbackTime(const Model::DescribeRollbackTimeRequest &request);
                void DescribeRollbackTimeAsync(const Model::DescribeRollbackTimeRequest& request, const DescribeRollbackTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRollbackTimeOutcomeCallable DescribeRollbackTimeCallable(const Model::DescribeRollbackTimeRequest& request);

                /**
                 *本接口（DescribeSlowlogs）用于获取慢查询日志文件信息
                 * @param req DescribeSlowlogsRequest
                 * @return DescribeSlowlogsOutcome
                 */
                DescribeSlowlogsOutcome DescribeSlowlogs(const Model::DescribeSlowlogsRequest &request);
                void DescribeSlowlogsAsync(const Model::DescribeSlowlogsRequest& request, const DescribeSlowlogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSlowlogsOutcomeCallable DescribeSlowlogsCallable(const Model::DescribeSlowlogsRequest& request);

                /**
                 *本接口（DescribeUploadBackupInfo）用于查询备份上传权限。
                 * @param req DescribeUploadBackupInfoRequest
                 * @return DescribeUploadBackupInfoOutcome
                 */
                DescribeUploadBackupInfoOutcome DescribeUploadBackupInfo(const Model::DescribeUploadBackupInfoRequest &request);
                void DescribeUploadBackupInfoAsync(const Model::DescribeUploadBackupInfoRequest& request, const DescribeUploadBackupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUploadBackupInfoOutcomeCallable DescribeUploadBackupInfoCallable(const Model::DescribeUploadBackupInfoRequest& request);

                /**
                 *本接口（DescribeUploadIncrementalInfo）用于查询增量备份上传权限。
                 * @param req DescribeUploadIncrementalInfoRequest
                 * @return DescribeUploadIncrementalInfoOutcome
                 */
                DescribeUploadIncrementalInfoOutcome DescribeUploadIncrementalInfo(const Model::DescribeUploadIncrementalInfoRequest &request);
                void DescribeUploadIncrementalInfoAsync(const Model::DescribeUploadIncrementalInfoRequest& request, const DescribeUploadIncrementalInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUploadIncrementalInfoOutcomeCallable DescribeUploadIncrementalInfoCallable(const Model::DescribeUploadIncrementalInfoRequest& request);

                /**
                 *本接口（DescribeXEvents）用于查询扩展事件列表。
                 * @param req DescribeXEventsRequest
                 * @return DescribeXEventsOutcome
                 */
                DescribeXEventsOutcome DescribeXEvents(const Model::DescribeXEventsRequest &request);
                void DescribeXEventsAsync(const Model::DescribeXEventsRequest& request, const DescribeXEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeXEventsOutcomeCallable DescribeXEventsCallable(const Model::DescribeXEventsRequest& request);

                /**
                 *本接口 (DescribeZones) 用于查询当前可售卖的可用区信息。
                 * @param req DescribeZonesRequest
                 * @return DescribeZonesOutcome
                 */
                DescribeZonesOutcome DescribeZones(const Model::DescribeZonesRequest &request);
                void DescribeZonesAsync(const Model::DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZonesOutcomeCallable DescribeZonesCallable(const Model::DescribeZonesRequest& request);

                /**
                 *本接口(DisassociateSecurityGroups)用于安全组批量解绑实例。
                 * @param req DisassociateSecurityGroupsRequest
                 * @return DisassociateSecurityGroupsOutcome
                 */
                DisassociateSecurityGroupsOutcome DisassociateSecurityGroups(const Model::DisassociateSecurityGroupsRequest &request);
                void DisassociateSecurityGroupsAsync(const Model::DisassociateSecurityGroupsRequest& request, const DisassociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateSecurityGroupsOutcomeCallable DisassociateSecurityGroupsCallable(const Model::DisassociateSecurityGroupsRequest& request);

                /**
                 *本接口（InquiryPriceCreateDBInstances）用于查询申请实例价格。
                 * @param req InquiryPriceCreateDBInstancesRequest
                 * @return InquiryPriceCreateDBInstancesOutcome
                 */
                InquiryPriceCreateDBInstancesOutcome InquiryPriceCreateDBInstances(const Model::InquiryPriceCreateDBInstancesRequest &request);
                void InquiryPriceCreateDBInstancesAsync(const Model::InquiryPriceCreateDBInstancesRequest& request, const InquiryPriceCreateDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceCreateDBInstancesOutcomeCallable InquiryPriceCreateDBInstancesCallable(const Model::InquiryPriceCreateDBInstancesRequest& request);

                /**
                 *本接口（InquiryPriceRenewDBInstance）用于查询包年包月实例的续费价格。
                 * @param req InquiryPriceRenewDBInstanceRequest
                 * @return InquiryPriceRenewDBInstanceOutcome
                 */
                InquiryPriceRenewDBInstanceOutcome InquiryPriceRenewDBInstance(const Model::InquiryPriceRenewDBInstanceRequest &request);
                void InquiryPriceRenewDBInstanceAsync(const Model::InquiryPriceRenewDBInstanceRequest& request, const InquiryPriceRenewDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceRenewDBInstanceOutcomeCallable InquiryPriceRenewDBInstanceCallable(const Model::InquiryPriceRenewDBInstanceRequest& request);

                /**
                 *本接口（InquiryPriceUpgradeDBInstance）用于查询包年包月实例升级变配的价格。
按量计费实例变配后的价格参考InquiryPriceCreateDBInstances接口。
                 * @param req InquiryPriceUpgradeDBInstanceRequest
                 * @return InquiryPriceUpgradeDBInstanceOutcome
                 */
                InquiryPriceUpgradeDBInstanceOutcome InquiryPriceUpgradeDBInstance(const Model::InquiryPriceUpgradeDBInstanceRequest &request);
                void InquiryPriceUpgradeDBInstanceAsync(const Model::InquiryPriceUpgradeDBInstanceRequest& request, const InquiryPriceUpgradeDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceUpgradeDBInstanceOutcomeCallable InquiryPriceUpgradeDBInstanceCallable(const Model::InquiryPriceUpgradeDBInstanceRequest& request);

                /**
                 *本接口（ModifyAccountPrivilege）用于修改实例账户权限。
                 * @param req ModifyAccountPrivilegeRequest
                 * @return ModifyAccountPrivilegeOutcome
                 */
                ModifyAccountPrivilegeOutcome ModifyAccountPrivilege(const Model::ModifyAccountPrivilegeRequest &request);
                void ModifyAccountPrivilegeAsync(const Model::ModifyAccountPrivilegeRequest& request, const ModifyAccountPrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccountPrivilegeOutcomeCallable ModifyAccountPrivilegeCallable(const Model::ModifyAccountPrivilegeRequest& request);

                /**
                 *本接口（ModifyAccountRemark）用于修改账户备注。
                 * @param req ModifyAccountRemarkRequest
                 * @return ModifyAccountRemarkOutcome
                 */
                ModifyAccountRemarkOutcome ModifyAccountRemark(const Model::ModifyAccountRemarkRequest &request);
                void ModifyAccountRemarkAsync(const Model::ModifyAccountRemarkRequest& request, const ModifyAccountRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccountRemarkOutcomeCallable ModifyAccountRemarkCallable(const Model::ModifyAccountRemarkRequest& request);

                /**
                 *本接口（ModifyBackupMigration）用于修改备份导入任务。
                 * @param req ModifyBackupMigrationRequest
                 * @return ModifyBackupMigrationOutcome
                 */
                ModifyBackupMigrationOutcome ModifyBackupMigration(const Model::ModifyBackupMigrationRequest &request);
                void ModifyBackupMigrationAsync(const Model::ModifyBackupMigrationRequest& request, const ModifyBackupMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBackupMigrationOutcomeCallable ModifyBackupMigrationCallable(const Model::ModifyBackupMigrationRequest& request);

                /**
                 *本接口(ModifyBackupName)用于修改备份任务名称。
                 * @param req ModifyBackupNameRequest
                 * @return ModifyBackupNameOutcome
                 */
                ModifyBackupNameOutcome ModifyBackupName(const Model::ModifyBackupNameRequest &request);
                void ModifyBackupNameAsync(const Model::ModifyBackupNameRequest& request, const ModifyBackupNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBackupNameOutcomeCallable ModifyBackupNameCallable(const Model::ModifyBackupNameRequest& request);

                /**
                 *本接口（ModifyBackupStrategy）用于修改备份策略
                 * @param req ModifyBackupStrategyRequest
                 * @return ModifyBackupStrategyOutcome
                 */
                ModifyBackupStrategyOutcome ModifyBackupStrategy(const Model::ModifyBackupStrategyRequest &request);
                void ModifyBackupStrategyAsync(const Model::ModifyBackupStrategyRequest& request, const ModifyBackupStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBackupStrategyOutcomeCallable ModifyBackupStrategyCallable(const Model::ModifyBackupStrategyRequest& request);

                /**
                 *本接口（ModifyDBEncryptAttributes）用于开启、关闭数据库的TDE加密功能。
                 * @param req ModifyDBEncryptAttributesRequest
                 * @return ModifyDBEncryptAttributesOutcome
                 */
                ModifyDBEncryptAttributesOutcome ModifyDBEncryptAttributes(const Model::ModifyDBEncryptAttributesRequest &request);
                void ModifyDBEncryptAttributesAsync(const Model::ModifyDBEncryptAttributesRequest& request, const ModifyDBEncryptAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBEncryptAttributesOutcomeCallable ModifyDBEncryptAttributesCallable(const Model::ModifyDBEncryptAttributesRequest& request);

                /**
                 *本接口（ModifyDBInstanceName）用于修改实例名字。
                 * @param req ModifyDBInstanceNameRequest
                 * @return ModifyDBInstanceNameOutcome
                 */
                ModifyDBInstanceNameOutcome ModifyDBInstanceName(const Model::ModifyDBInstanceNameRequest &request);
                void ModifyDBInstanceNameAsync(const Model::ModifyDBInstanceNameRequest& request, const ModifyDBInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceNameOutcomeCallable ModifyDBInstanceNameCallable(const Model::ModifyDBInstanceNameRequest& request);

                /**
                 *本接口（ModifyDBInstanceNetwork）用于修改运行中实例的网络，仅支持从VPC网络到VPC网络的转换
                 * @param req ModifyDBInstanceNetworkRequest
                 * @return ModifyDBInstanceNetworkOutcome
                 */
                ModifyDBInstanceNetworkOutcome ModifyDBInstanceNetwork(const Model::ModifyDBInstanceNetworkRequest &request);
                void ModifyDBInstanceNetworkAsync(const Model::ModifyDBInstanceNetworkRequest& request, const ModifyDBInstanceNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceNetworkOutcomeCallable ModifyDBInstanceNetworkCallable(const Model::ModifyDBInstanceNetworkRequest& request);

                /**
                 *本接口（ModifyDBInstanceProject）用于修改数据库实例所属项目。
                 * @param req ModifyDBInstanceProjectRequest
                 * @return ModifyDBInstanceProjectOutcome
                 */
                ModifyDBInstanceProjectOutcome ModifyDBInstanceProject(const Model::ModifyDBInstanceProjectRequest &request);
                void ModifyDBInstanceProjectAsync(const Model::ModifyDBInstanceProjectRequest& request, const ModifyDBInstanceProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceProjectOutcomeCallable ModifyDBInstanceProjectCallable(const Model::ModifyDBInstanceProjectRequest& request);

                /**
                 *本接口（ModifyDBInstanceRenewFlag）用于修改实例续费标记
                 * @param req ModifyDBInstanceRenewFlagRequest
                 * @return ModifyDBInstanceRenewFlagOutcome
                 */
                ModifyDBInstanceRenewFlagOutcome ModifyDBInstanceRenewFlag(const Model::ModifyDBInstanceRenewFlagRequest &request);
                void ModifyDBInstanceRenewFlagAsync(const Model::ModifyDBInstanceRenewFlagRequest& request, const ModifyDBInstanceRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceRenewFlagOutcomeCallable ModifyDBInstanceRenewFlagCallable(const Model::ModifyDBInstanceRenewFlagRequest& request);

                /**
                 *本接口(ModifyDBInstanceSecurityGroups)用于修改实例绑定的安全组。
                 * @param req ModifyDBInstanceSecurityGroupsRequest
                 * @return ModifyDBInstanceSecurityGroupsOutcome
                 */
                ModifyDBInstanceSecurityGroupsOutcome ModifyDBInstanceSecurityGroups(const Model::ModifyDBInstanceSecurityGroupsRequest &request);
                void ModifyDBInstanceSecurityGroupsAsync(const Model::ModifyDBInstanceSecurityGroupsRequest& request, const ModifyDBInstanceSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceSecurityGroupsOutcomeCallable ModifyDBInstanceSecurityGroupsCallable(const Model::ModifyDBInstanceSecurityGroupsRequest& request);

                /**
                 *本接口（ModifyDBName）用于更新数据库名。
                 * @param req ModifyDBNameRequest
                 * @return ModifyDBNameOutcome
                 */
                ModifyDBNameOutcome ModifyDBName(const Model::ModifyDBNameRequest &request);
                void ModifyDBNameAsync(const Model::ModifyDBNameRequest& request, const ModifyDBNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBNameOutcomeCallable ModifyDBNameCallable(const Model::ModifyDBNameRequest& request);

                /**
                 *本接口（ModifyDBRemark）用于修改数据库备注。
                 * @param req ModifyDBRemarkRequest
                 * @return ModifyDBRemarkOutcome
                 */
                ModifyDBRemarkOutcome ModifyDBRemark(const Model::ModifyDBRemarkRequest &request);
                void ModifyDBRemarkAsync(const Model::ModifyDBRemarkRequest& request, const ModifyDBRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBRemarkOutcomeCallable ModifyDBRemarkCallable(const Model::ModifyDBRemarkRequest& request);

                /**
                 *本接口(ModifyDatabaseCDC)用于开启、关闭数据库数据变更捕获(CDC)
                 * @param req ModifyDatabaseCDCRequest
                 * @return ModifyDatabaseCDCOutcome
                 */
                ModifyDatabaseCDCOutcome ModifyDatabaseCDC(const Model::ModifyDatabaseCDCRequest &request);
                void ModifyDatabaseCDCAsync(const Model::ModifyDatabaseCDCRequest& request, const ModifyDatabaseCDCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDatabaseCDCOutcomeCallable ModifyDatabaseCDCCallable(const Model::ModifyDatabaseCDCRequest& request);

                /**
                 *本接口(ModifyDatabaseCT)用于启用、禁用数据库数据变更跟踪(CT)
                 * @param req ModifyDatabaseCTRequest
                 * @return ModifyDatabaseCTOutcome
                 */
                ModifyDatabaseCTOutcome ModifyDatabaseCT(const Model::ModifyDatabaseCTRequest &request);
                void ModifyDatabaseCTAsync(const Model::ModifyDatabaseCTRequest& request, const ModifyDatabaseCTAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDatabaseCTOutcomeCallable ModifyDatabaseCTCallable(const Model::ModifyDatabaseCTRequest& request);

                /**
                 *本接口(ModifyDatabaseMdf)用于收缩数据库mdf(Shrink mdf)
                 * @param req ModifyDatabaseMdfRequest
                 * @return ModifyDatabaseMdfOutcome
                 */
                ModifyDatabaseMdfOutcome ModifyDatabaseMdf(const Model::ModifyDatabaseMdfRequest &request);
                void ModifyDatabaseMdfAsync(const Model::ModifyDatabaseMdfRequest& request, const ModifyDatabaseMdfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDatabaseMdfOutcomeCallable ModifyDatabaseMdfCallable(const Model::ModifyDatabaseMdfRequest& request);

                /**
                 *本接口（ModifyIncrementalMigration）用于修改增量备份导入任务。
                 * @param req ModifyIncrementalMigrationRequest
                 * @return ModifyIncrementalMigrationOutcome
                 */
                ModifyIncrementalMigrationOutcome ModifyIncrementalMigration(const Model::ModifyIncrementalMigrationRequest &request);
                void ModifyIncrementalMigrationAsync(const Model::ModifyIncrementalMigrationRequest& request, const ModifyIncrementalMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyIncrementalMigrationOutcomeCallable ModifyIncrementalMigrationCallable(const Model::ModifyIncrementalMigrationRequest& request);

                /**
                 *本接口（ModifyInstanceEncryptAttributes）用于开通实例的TDE加密功能。
                 * @param req ModifyInstanceEncryptAttributesRequest
                 * @return ModifyInstanceEncryptAttributesOutcome
                 */
                ModifyInstanceEncryptAttributesOutcome ModifyInstanceEncryptAttributes(const Model::ModifyInstanceEncryptAttributesRequest &request);
                void ModifyInstanceEncryptAttributesAsync(const Model::ModifyInstanceEncryptAttributesRequest& request, const ModifyInstanceEncryptAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceEncryptAttributesOutcomeCallable ModifyInstanceEncryptAttributesCallable(const Model::ModifyInstanceEncryptAttributesRequest& request);

                /**
                 *本接口(ModifyInstanceParam)用于修改云数据库实例的参数。
<b>注意</b>：如果修改的参数是需要<b>重启实例</b>的，那么实例将会按照WaitSwitch参数的设置(可能是立即执行也可能在可维护时间窗内自动执行)在执行参数修改时<b>重启实例</b>。
您可以通过DescribeInstanceParams接口查询修改参数时是否会重启实例，以免导致您的实例不符合预期重启。
                 * @param req ModifyInstanceParamRequest
                 * @return ModifyInstanceParamOutcome
                 */
                ModifyInstanceParamOutcome ModifyInstanceParam(const Model::ModifyInstanceParamRequest &request);
                void ModifyInstanceParamAsync(const Model::ModifyInstanceParamRequest& request, const ModifyInstanceParamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceParamOutcomeCallable ModifyInstanceParamCallable(const Model::ModifyInstanceParamRequest& request);

                /**
                 *本接口（ModifyMaintenanceSpan）用于修改实例的可维护时间窗
                 * @param req ModifyMaintenanceSpanRequest
                 * @return ModifyMaintenanceSpanOutcome
                 */
                ModifyMaintenanceSpanOutcome ModifyMaintenanceSpan(const Model::ModifyMaintenanceSpanRequest &request);
                void ModifyMaintenanceSpanAsync(const Model::ModifyMaintenanceSpanRequest& request, const ModifyMaintenanceSpanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMaintenanceSpanOutcomeCallable ModifyMaintenanceSpanCallable(const Model::ModifyMaintenanceSpanRequest& request);

                /**
                 *本接口（ModifyMigration）可以修改已有的迁移任务信息
                 * @param req ModifyMigrationRequest
                 * @return ModifyMigrationOutcome
                 */
                ModifyMigrationOutcome ModifyMigration(const Model::ModifyMigrationRequest &request);
                void ModifyMigrationAsync(const Model::ModifyMigrationRequest& request, const ModifyMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMigrationOutcomeCallable ModifyMigrationCallable(const Model::ModifyMigrationRequest& request);

                /**
                 *本接口（ModifyPublishSubscribeName）修改发布订阅的名称。
                 * @param req ModifyPublishSubscribeNameRequest
                 * @return ModifyPublishSubscribeNameOutcome
                 */
                ModifyPublishSubscribeNameOutcome ModifyPublishSubscribeName(const Model::ModifyPublishSubscribeNameRequest &request);
                void ModifyPublishSubscribeNameAsync(const Model::ModifyPublishSubscribeNameRequest& request, const ModifyPublishSubscribeNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPublishSubscribeNameOutcomeCallable ModifyPublishSubscribeNameCallable(const Model::ModifyPublishSubscribeNameRequest& request);

                /**
                 *本接口（ModifyReadOnlyGroupDetails）用于修改只读组详情。
                 * @param req ModifyReadOnlyGroupDetailsRequest
                 * @return ModifyReadOnlyGroupDetailsOutcome
                 */
                ModifyReadOnlyGroupDetailsOutcome ModifyReadOnlyGroupDetails(const Model::ModifyReadOnlyGroupDetailsRequest &request);
                void ModifyReadOnlyGroupDetailsAsync(const Model::ModifyReadOnlyGroupDetailsRequest& request, const ModifyReadOnlyGroupDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyReadOnlyGroupDetailsOutcomeCallable ModifyReadOnlyGroupDetailsCallable(const Model::ModifyReadOnlyGroupDetailsRequest& request);

                /**
                 *本接口（OpenInterCommunication）用于打开实例的互通，实例互通可以实现商业智能服务相互联通。
                 * @param req OpenInterCommunicationRequest
                 * @return OpenInterCommunicationOutcome
                 */
                OpenInterCommunicationOutcome OpenInterCommunication(const Model::OpenInterCommunicationRequest &request);
                void OpenInterCommunicationAsync(const Model::OpenInterCommunicationRequest& request, const OpenInterCommunicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenInterCommunicationOutcomeCallable OpenInterCommunicationCallable(const Model::OpenInterCommunicationRequest& request);

                /**
                 *本接口（QueryMigrationCheckProcess）的作用是查询迁移检查任务的进度，适用于迁移源的类型为TencentDB for SQLServer 的迁移方式
                 * @param req QueryMigrationCheckProcessRequest
                 * @return QueryMigrationCheckProcessOutcome
                 */
                QueryMigrationCheckProcessOutcome QueryMigrationCheckProcess(const Model::QueryMigrationCheckProcessRequest &request);
                void QueryMigrationCheckProcessAsync(const Model::QueryMigrationCheckProcessRequest& request, const QueryMigrationCheckProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryMigrationCheckProcessOutcomeCallable QueryMigrationCheckProcessCallable(const Model::QueryMigrationCheckProcessRequest& request);

                /**
                 *本接口（RecycleDBInstance）用于主动回收已下线的SQLSERVER实例
                 * @param req RecycleDBInstanceRequest
                 * @return RecycleDBInstanceOutcome
                 */
                RecycleDBInstanceOutcome RecycleDBInstance(const Model::RecycleDBInstanceRequest &request);
                void RecycleDBInstanceAsync(const Model::RecycleDBInstanceRequest& request, const RecycleDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecycleDBInstanceOutcomeCallable RecycleDBInstanceCallable(const Model::RecycleDBInstanceRequest& request);

                /**
                 *本接口（RecycleReadOnlyGroup）立即回收只读组的资源，只读组占用的vip等资源将立即释放且不可找回。
                 * @param req RecycleReadOnlyGroupRequest
                 * @return RecycleReadOnlyGroupOutcome
                 */
                RecycleReadOnlyGroupOutcome RecycleReadOnlyGroup(const Model::RecycleReadOnlyGroupRequest &request);
                void RecycleReadOnlyGroupAsync(const Model::RecycleReadOnlyGroupRequest& request, const RecycleReadOnlyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecycleReadOnlyGroupOutcomeCallable RecycleReadOnlyGroupCallable(const Model::RecycleReadOnlyGroupRequest& request);

                /**
                 *本接口（RemoveBackups）可以删除用户手动创建的备份文件。待删除的备份策略可以是实例备份，也可以是多库备份。
                 * @param req RemoveBackupsRequest
                 * @return RemoveBackupsOutcome
                 */
                RemoveBackupsOutcome RemoveBackups(const Model::RemoveBackupsRequest &request);
                void RemoveBackupsAsync(const Model::RemoveBackupsRequest& request, const RemoveBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveBackupsOutcomeCallable RemoveBackupsCallable(const Model::RemoveBackupsRequest& request);

                /**
                 *本接口（RenewDBInstance）用于续费实例。当被续费实例是按量计费实例时，则按量计费实例转为包年包月计费方式。
按量计费实例转包年包月询价可通过(InquiryPriceRenewDBInstance)接口获得。
                 * @param req RenewDBInstanceRequest
                 * @return RenewDBInstanceOutcome
                 */
                RenewDBInstanceOutcome RenewDBInstance(const Model::RenewDBInstanceRequest &request);
                void RenewDBInstanceAsync(const Model::RenewDBInstanceRequest& request, const RenewDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewDBInstanceOutcomeCallable RenewDBInstanceCallable(const Model::RenewDBInstanceRequest& request);

                /**
                 *本接口（RenewPostpaidDBInstance）用于将通过接口TerminateDBInstance手动隔离的按量计费实例从回收站中恢复。
                 * @param req RenewPostpaidDBInstanceRequest
                 * @return RenewPostpaidDBInstanceOutcome
                 */
                RenewPostpaidDBInstanceOutcome RenewPostpaidDBInstance(const Model::RenewPostpaidDBInstanceRequest &request);
                void RenewPostpaidDBInstanceAsync(const Model::RenewPostpaidDBInstanceRequest& request, const RenewPostpaidDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewPostpaidDBInstanceOutcomeCallable RenewPostpaidDBInstanceCallable(const Model::RenewPostpaidDBInstanceRequest& request);

                /**
                 *本接口（ResetAccountPassword）用于重置实例的账户密码。
                 * @param req ResetAccountPasswordRequest
                 * @return ResetAccountPasswordOutcome
                 */
                ResetAccountPasswordOutcome ResetAccountPassword(const Model::ResetAccountPasswordRequest &request);
                void ResetAccountPasswordAsync(const Model::ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetAccountPasswordOutcomeCallable ResetAccountPasswordCallable(const Model::ResetAccountPasswordRequest& request);

                /**
                 *本接口（RestartDBInstance）用于重启数据库实例。
                 * @param req RestartDBInstanceRequest
                 * @return RestartDBInstanceOutcome
                 */
                RestartDBInstanceOutcome RestartDBInstance(const Model::RestartDBInstanceRequest &request);
                void RestartDBInstanceAsync(const Model::RestartDBInstanceRequest& request, const RestartDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestartDBInstanceOutcomeCallable RestartDBInstanceCallable(const Model::RestartDBInstanceRequest& request);

                /**
                 *本接口（RestoreInstance）用于按照备份集回档数据库。
                 * @param req RestoreInstanceRequest
                 * @return RestoreInstanceOutcome
                 */
                RestoreInstanceOutcome RestoreInstance(const Model::RestoreInstanceRequest &request);
                void RestoreInstanceAsync(const Model::RestoreInstanceRequest& request, const RestoreInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestoreInstanceOutcomeCallable RestoreInstanceCallable(const Model::RestoreInstanceRequest& request);

                /**
                 *本接口（RollbackInstance）用于按照时间点回档实例
                 * @param req RollbackInstanceRequest
                 * @return RollbackInstanceOutcome
                 */
                RollbackInstanceOutcome RollbackInstance(const Model::RollbackInstanceRequest &request);
                void RollbackInstanceAsync(const Model::RollbackInstanceRequest& request, const RollbackInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RollbackInstanceOutcomeCallable RollbackInstanceCallable(const Model::RollbackInstanceRequest& request);

                /**
                 *本接口（RunMigration）用于启动迁移任务，开始迁移
                 * @param req RunMigrationRequest
                 * @return RunMigrationOutcome
                 */
                RunMigrationOutcome RunMigration(const Model::RunMigrationRequest &request);
                void RunMigrationAsync(const Model::RunMigrationRequest& request, const RunMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunMigrationOutcomeCallable RunMigrationCallable(const Model::RunMigrationRequest& request);

                /**
                 *本接口（StartBackupMigration）用于启动备份导入任务。
                 * @param req StartBackupMigrationRequest
                 * @return StartBackupMigrationOutcome
                 */
                StartBackupMigrationOutcome StartBackupMigration(const Model::StartBackupMigrationRequest &request);
                void StartBackupMigrationAsync(const Model::StartBackupMigrationRequest& request, const StartBackupMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartBackupMigrationOutcomeCallable StartBackupMigrationCallable(const Model::StartBackupMigrationRequest& request);

                /**
                 *本接口（StartIncrementalMigration）用于启动增量备份导入任务。
                 * @param req StartIncrementalMigrationRequest
                 * @return StartIncrementalMigrationOutcome
                 */
                StartIncrementalMigrationOutcome StartIncrementalMigration(const Model::StartIncrementalMigrationRequest &request);
                void StartIncrementalMigrationAsync(const Model::StartIncrementalMigrationRequest& request, const StartIncrementalMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartIncrementalMigrationOutcomeCallable StartIncrementalMigrationCallable(const Model::StartIncrementalMigrationRequest& request);

                /**
                 *本接口（StartInstanceXEvent）用于开启、关闭扩展事件。
                 * @param req StartInstanceXEventRequest
                 * @return StartInstanceXEventOutcome
                 */
                StartInstanceXEventOutcome StartInstanceXEvent(const Model::StartInstanceXEventRequest &request);
                void StartInstanceXEventAsync(const Model::StartInstanceXEventRequest& request, const StartInstanceXEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartInstanceXEventOutcomeCallable StartInstanceXEventCallable(const Model::StartInstanceXEventRequest& request);

                /**
                 *本接口（StartMigrationCheck）的作用是启动一个迁移前的校验任务，适用于迁移源的类型为TencentDB for SQLServer 的迁移方式
                 * @param req StartMigrationCheckRequest
                 * @return StartMigrationCheckOutcome
                 */
                StartMigrationCheckOutcome StartMigrationCheck(const Model::StartMigrationCheckRequest &request);
                void StartMigrationCheckAsync(const Model::StartMigrationCheckRequest& request, const StartMigrationCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartMigrationCheckOutcomeCallable StartMigrationCheckCallable(const Model::StartMigrationCheckRequest& request);

                /**
                 *本接口（StopMigration）作用是中止一个迁移任务
                 * @param req StopMigrationRequest
                 * @return StopMigrationOutcome
                 */
                StopMigrationOutcome StopMigration(const Model::StopMigrationRequest &request);
                void StopMigrationAsync(const Model::StopMigrationRequest& request, const StopMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopMigrationOutcomeCallable StopMigrationCallable(const Model::StopMigrationRequest& request);

                /**
                 *本接口(TerminateDBInstance)用于主动隔离实例，使得实例进入回收站。
                 * @param req TerminateDBInstanceRequest
                 * @return TerminateDBInstanceOutcome
                 */
                TerminateDBInstanceOutcome TerminateDBInstance(const Model::TerminateDBInstanceRequest &request);
                void TerminateDBInstanceAsync(const Model::TerminateDBInstanceRequest& request, const TerminateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateDBInstanceOutcomeCallable TerminateDBInstanceCallable(const Model::TerminateDBInstanceRequest& request);

                /**
                 *本接口（UpgradeDBInstance）用于升级实例
                 * @param req UpgradeDBInstanceRequest
                 * @return UpgradeDBInstanceOutcome
                 */
                UpgradeDBInstanceOutcome UpgradeDBInstance(const Model::UpgradeDBInstanceRequest &request);
                void UpgradeDBInstanceAsync(const Model::UpgradeDBInstanceRequest& request, const UpgradeDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeDBInstanceOutcomeCallable UpgradeDBInstanceCallable(const Model::UpgradeDBInstanceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_SQLSERVERCLIENT_H_
