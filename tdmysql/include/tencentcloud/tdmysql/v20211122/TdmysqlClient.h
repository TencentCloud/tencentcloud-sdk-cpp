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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_TDMYSQLCLIENT_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_TDMYSQLCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tdmysql/v20211122/model/CancelIsolateDBInstancesRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/CancelIsolateDBInstancesResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/CreateCloneInstanceRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/CreateCloneInstanceResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/CreateDBInstancesRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/CreateDBInstancesResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/CreateDBSBackupRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/CreateDBSBackupResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/CreateUsersRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/CreateUsersResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/DeleteDBSBackupSetsRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/DeleteDBSBackupSetsResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/DeleteUsersRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/DeleteUsersResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeDBInstanceDetailRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeDBInstanceDetailResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeDBInstancesRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeDBInstancesResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeDBParametersRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeDBParametersResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeDBSArchiveLogsRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeDBSArchiveLogsResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeDBSAvailableRecoveryTimeRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeDBSAvailableRecoveryTimeResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeDBSBackupPolicyRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeDBSBackupPolicyResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeDBSBackupSetsRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeDBSBackupSetsResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeDBSBackupStatisticsRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeDBSBackupStatisticsResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeDBSBackupStatisticsDetailRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeDBSBackupStatisticsDetailResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeDBSCloneInstancesRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeDBSCloneInstancesResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeDBSecurityGroupsRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeDBSecurityGroupsResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeDatabaseObjectsRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeDatabaseObjectsResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeDatabasesRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeDatabasesResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeFlowRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeFlowResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeInstanceSSLStatusRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeInstanceSSLStatusResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeMaintenanceWindowRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeMaintenanceWindowResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeSaleInfoRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeSaleInfoResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeSlowLogsRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeSlowLogsResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeSpecsRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeSpecsResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeUserPrivilegesRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeUserPrivilegesResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeUsersRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeUsersResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/DestroyInstancesRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/DestroyInstancesResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/ExpandInstanceRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/ExpandInstanceResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/IsolateDBInstanceRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/IsolateDBInstanceResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/ModifyAutoRenewFlagRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/ModifyAutoRenewFlagResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/ModifyDBInstanceSecurityGroupsRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/ModifyDBInstanceSecurityGroupsResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/ModifyDBInstanceVPortRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/ModifyDBInstanceVPortResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/ModifyDBParametersRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/ModifyDBParametersResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/ModifyDBSBackupPolicyRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/ModifyDBSBackupPolicyResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/ModifyDBSBackupSetCommentRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/ModifyDBSBackupSetCommentResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/ModifyInstanceNameRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/ModifyInstanceNameResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/ModifyInstanceNetworkRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/ModifyInstanceNetworkResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/ModifyInstanceSSLStatusRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/ModifyInstanceSSLStatusResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/ModifyMaintenanceWindowRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/ModifyMaintenanceWindowResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/ModifyUserPrivilegesRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/ModifyUserPrivilegesResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/ResetUsersPasswordRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/ResetUsersPasswordResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/RestartDBInstancesRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/RestartDBInstancesResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/UpgradeInstanceRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/UpgradeInstanceResponse.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            class TdmysqlClient : public AbstractClient
            {
            public:
                TdmysqlClient(const Credential &credential, const std::string &region);
                TdmysqlClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CancelIsolateDBInstancesResponse> CancelIsolateDBInstancesOutcome;
                typedef std::future<CancelIsolateDBInstancesOutcome> CancelIsolateDBInstancesOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::CancelIsolateDBInstancesRequest&, CancelIsolateDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelIsolateDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCloneInstanceResponse> CreateCloneInstanceOutcome;
                typedef std::future<CreateCloneInstanceOutcome> CreateCloneInstanceOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::CreateCloneInstanceRequest&, CreateCloneInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloneInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDBInstancesResponse> CreateDBInstancesOutcome;
                typedef std::future<CreateDBInstancesOutcome> CreateDBInstancesOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::CreateDBInstancesRequest&, CreateDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDBSBackupResponse> CreateDBSBackupOutcome;
                typedef std::future<CreateDBSBackupOutcome> CreateDBSBackupOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::CreateDBSBackupRequest&, CreateDBSBackupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBSBackupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUsersResponse> CreateUsersOutcome;
                typedef std::future<CreateUsersOutcome> CreateUsersOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::CreateUsersRequest&, CreateUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDBSBackupSetsResponse> DeleteDBSBackupSetsOutcome;
                typedef std::future<DeleteDBSBackupSetsOutcome> DeleteDBSBackupSetsOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::DeleteDBSBackupSetsRequest&, DeleteDBSBackupSetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDBSBackupSetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUsersResponse> DeleteUsersOutcome;
                typedef std::future<DeleteUsersOutcome> DeleteUsersOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::DeleteUsersRequest&, DeleteUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBInstanceDetailResponse> DescribeDBInstanceDetailOutcome;
                typedef std::future<DescribeDBInstanceDetailOutcome> DescribeDBInstanceDetailOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::DescribeDBInstanceDetailRequest&, DescribeDBInstanceDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBInstancesResponse> DescribeDBInstancesOutcome;
                typedef std::future<DescribeDBInstancesOutcome> DescribeDBInstancesOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::DescribeDBInstancesRequest&, DescribeDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBParametersResponse> DescribeDBParametersOutcome;
                typedef std::future<DescribeDBParametersOutcome> DescribeDBParametersOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::DescribeDBParametersRequest&, DescribeDBParametersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBParametersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBSArchiveLogsResponse> DescribeDBSArchiveLogsOutcome;
                typedef std::future<DescribeDBSArchiveLogsOutcome> DescribeDBSArchiveLogsOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::DescribeDBSArchiveLogsRequest&, DescribeDBSArchiveLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBSArchiveLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBSAvailableRecoveryTimeResponse> DescribeDBSAvailableRecoveryTimeOutcome;
                typedef std::future<DescribeDBSAvailableRecoveryTimeOutcome> DescribeDBSAvailableRecoveryTimeOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::DescribeDBSAvailableRecoveryTimeRequest&, DescribeDBSAvailableRecoveryTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBSAvailableRecoveryTimeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBSBackupPolicyResponse> DescribeDBSBackupPolicyOutcome;
                typedef std::future<DescribeDBSBackupPolicyOutcome> DescribeDBSBackupPolicyOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::DescribeDBSBackupPolicyRequest&, DescribeDBSBackupPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBSBackupPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBSBackupSetsResponse> DescribeDBSBackupSetsOutcome;
                typedef std::future<DescribeDBSBackupSetsOutcome> DescribeDBSBackupSetsOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::DescribeDBSBackupSetsRequest&, DescribeDBSBackupSetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBSBackupSetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBSBackupStatisticsResponse> DescribeDBSBackupStatisticsOutcome;
                typedef std::future<DescribeDBSBackupStatisticsOutcome> DescribeDBSBackupStatisticsOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::DescribeDBSBackupStatisticsRequest&, DescribeDBSBackupStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBSBackupStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBSBackupStatisticsDetailResponse> DescribeDBSBackupStatisticsDetailOutcome;
                typedef std::future<DescribeDBSBackupStatisticsDetailOutcome> DescribeDBSBackupStatisticsDetailOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::DescribeDBSBackupStatisticsDetailRequest&, DescribeDBSBackupStatisticsDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBSBackupStatisticsDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBSCloneInstancesResponse> DescribeDBSCloneInstancesOutcome;
                typedef std::future<DescribeDBSCloneInstancesOutcome> DescribeDBSCloneInstancesOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::DescribeDBSCloneInstancesRequest&, DescribeDBSCloneInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBSCloneInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBSecurityGroupsResponse> DescribeDBSecurityGroupsOutcome;
                typedef std::future<DescribeDBSecurityGroupsOutcome> DescribeDBSecurityGroupsOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::DescribeDBSecurityGroupsRequest&, DescribeDBSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatabaseObjectsResponse> DescribeDatabaseObjectsOutcome;
                typedef std::future<DescribeDatabaseObjectsOutcome> DescribeDatabaseObjectsOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::DescribeDatabaseObjectsRequest&, DescribeDatabaseObjectsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabaseObjectsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatabasesResponse> DescribeDatabasesOutcome;
                typedef std::future<DescribeDatabasesOutcome> DescribeDatabasesOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::DescribeDatabasesRequest&, DescribeDatabasesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabasesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFlowResponse> DescribeFlowOutcome;
                typedef std::future<DescribeFlowOutcome> DescribeFlowOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::DescribeFlowRequest&, DescribeFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceSSLStatusResponse> DescribeInstanceSSLStatusOutcome;
                typedef std::future<DescribeInstanceSSLStatusOutcome> DescribeInstanceSSLStatusOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::DescribeInstanceSSLStatusRequest&, DescribeInstanceSSLStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceSSLStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMaintenanceWindowResponse> DescribeMaintenanceWindowOutcome;
                typedef std::future<DescribeMaintenanceWindowOutcome> DescribeMaintenanceWindowOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::DescribeMaintenanceWindowRequest&, DescribeMaintenanceWindowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMaintenanceWindowAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSaleInfoResponse> DescribeSaleInfoOutcome;
                typedef std::future<DescribeSaleInfoOutcome> DescribeSaleInfoOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::DescribeSaleInfoRequest&, DescribeSaleInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSaleInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSlowLogsResponse> DescribeSlowLogsOutcome;
                typedef std::future<DescribeSlowLogsOutcome> DescribeSlowLogsOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::DescribeSlowLogsRequest&, DescribeSlowLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSpecsResponse> DescribeSpecsOutcome;
                typedef std::future<DescribeSpecsOutcome> DescribeSpecsOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::DescribeSpecsRequest&, DescribeSpecsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSpecsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserPrivilegesResponse> DescribeUserPrivilegesOutcome;
                typedef std::future<DescribeUserPrivilegesOutcome> DescribeUserPrivilegesOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::DescribeUserPrivilegesRequest&, DescribeUserPrivilegesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserPrivilegesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUsersResponse> DescribeUsersOutcome;
                typedef std::future<DescribeUsersOutcome> DescribeUsersOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::DescribeUsersRequest&, DescribeUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyInstancesResponse> DestroyInstancesOutcome;
                typedef std::future<DestroyInstancesOutcome> DestroyInstancesOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::DestroyInstancesRequest&, DestroyInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::ExpandInstanceResponse> ExpandInstanceOutcome;
                typedef std::future<ExpandInstanceOutcome> ExpandInstanceOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::ExpandInstanceRequest&, ExpandInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExpandInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::IsolateDBInstanceResponse> IsolateDBInstanceOutcome;
                typedef std::future<IsolateDBInstanceOutcome> IsolateDBInstanceOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::IsolateDBInstanceRequest&, IsolateDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IsolateDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAutoRenewFlagResponse> ModifyAutoRenewFlagOutcome;
                typedef std::future<ModifyAutoRenewFlagOutcome> ModifyAutoRenewFlagOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::ModifyAutoRenewFlagRequest&, ModifyAutoRenewFlagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAutoRenewFlagAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceSecurityGroupsResponse> ModifyDBInstanceSecurityGroupsOutcome;
                typedef std::future<ModifyDBInstanceSecurityGroupsOutcome> ModifyDBInstanceSecurityGroupsOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::ModifyDBInstanceSecurityGroupsRequest&, ModifyDBInstanceSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceVPortResponse> ModifyDBInstanceVPortOutcome;
                typedef std::future<ModifyDBInstanceVPortOutcome> ModifyDBInstanceVPortOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::ModifyDBInstanceVPortRequest&, ModifyDBInstanceVPortOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceVPortAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBParametersResponse> ModifyDBParametersOutcome;
                typedef std::future<ModifyDBParametersOutcome> ModifyDBParametersOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::ModifyDBParametersRequest&, ModifyDBParametersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBParametersAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBSBackupPolicyResponse> ModifyDBSBackupPolicyOutcome;
                typedef std::future<ModifyDBSBackupPolicyOutcome> ModifyDBSBackupPolicyOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::ModifyDBSBackupPolicyRequest&, ModifyDBSBackupPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBSBackupPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBSBackupSetCommentResponse> ModifyDBSBackupSetCommentOutcome;
                typedef std::future<ModifyDBSBackupSetCommentOutcome> ModifyDBSBackupSetCommentOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::ModifyDBSBackupSetCommentRequest&, ModifyDBSBackupSetCommentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBSBackupSetCommentAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceNameResponse> ModifyInstanceNameOutcome;
                typedef std::future<ModifyInstanceNameOutcome> ModifyInstanceNameOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::ModifyInstanceNameRequest&, ModifyInstanceNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceNameAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceNetworkResponse> ModifyInstanceNetworkOutcome;
                typedef std::future<ModifyInstanceNetworkOutcome> ModifyInstanceNetworkOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::ModifyInstanceNetworkRequest&, ModifyInstanceNetworkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceNetworkAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceSSLStatusResponse> ModifyInstanceSSLStatusOutcome;
                typedef std::future<ModifyInstanceSSLStatusOutcome> ModifyInstanceSSLStatusOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::ModifyInstanceSSLStatusRequest&, ModifyInstanceSSLStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceSSLStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMaintenanceWindowResponse> ModifyMaintenanceWindowOutcome;
                typedef std::future<ModifyMaintenanceWindowOutcome> ModifyMaintenanceWindowOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::ModifyMaintenanceWindowRequest&, ModifyMaintenanceWindowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMaintenanceWindowAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserPrivilegesResponse> ModifyUserPrivilegesOutcome;
                typedef std::future<ModifyUserPrivilegesOutcome> ModifyUserPrivilegesOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::ModifyUserPrivilegesRequest&, ModifyUserPrivilegesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserPrivilegesAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetUsersPasswordResponse> ResetUsersPasswordOutcome;
                typedef std::future<ResetUsersPasswordOutcome> ResetUsersPasswordOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::ResetUsersPasswordRequest&, ResetUsersPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetUsersPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::RestartDBInstancesResponse> RestartDBInstancesOutcome;
                typedef std::future<RestartDBInstancesOutcome> RestartDBInstancesOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::RestartDBInstancesRequest&, RestartDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestartDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeInstanceResponse> UpgradeInstanceOutcome;
                typedef std::future<UpgradeInstanceOutcome> UpgradeInstanceOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::UpgradeInstanceRequest&, UpgradeInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeInstanceAsyncHandler;



                /**
                 *本接口（CancelIsolateDBInstances）提供批量解除隔离实例功能
                 * @param req CancelIsolateDBInstancesRequest
                 * @return CancelIsolateDBInstancesOutcome
                 */
                CancelIsolateDBInstancesOutcome CancelIsolateDBInstances(const Model::CancelIsolateDBInstancesRequest &request);
                void CancelIsolateDBInstancesAsync(const Model::CancelIsolateDBInstancesRequest& request, const CancelIsolateDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelIsolateDBInstancesOutcomeCallable CancelIsolateDBInstancesCallable(const Model::CancelIsolateDBInstancesRequest& request);

                /**
                 *本接口（CreateCloneInstance）提供创建克隆实例功能
                 * @param req CreateCloneInstanceRequest
                 * @return CreateCloneInstanceOutcome
                 */
                CreateCloneInstanceOutcome CreateCloneInstance(const Model::CreateCloneInstanceRequest &request);
                void CreateCloneInstanceAsync(const Model::CreateCloneInstanceRequest& request, const CreateCloneInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCloneInstanceOutcomeCallable CreateCloneInstanceCallable(const Model::CreateCloneInstanceRequest& request);

                /**
                 *本接口（CreateDBInstances）提供批量创建实例功能
                 * @param req CreateDBInstancesRequest
                 * @return CreateDBInstancesOutcome
                 */
                CreateDBInstancesOutcome CreateDBInstances(const Model::CreateDBInstancesRequest &request);
                void CreateDBInstancesAsync(const Model::CreateDBInstancesRequest& request, const CreateDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDBInstancesOutcomeCallable CreateDBInstancesCallable(const Model::CreateDBInstancesRequest& request);

                /**
                 *创建实例手工备份  CreateDBSBackup
                 * @param req CreateDBSBackupRequest
                 * @return CreateDBSBackupOutcome
                 */
                CreateDBSBackupOutcome CreateDBSBackup(const Model::CreateDBSBackupRequest &request);
                void CreateDBSBackupAsync(const Model::CreateDBSBackupRequest& request, const CreateDBSBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDBSBackupOutcomeCallable CreateDBSBackupCallable(const Model::CreateDBSBackupRequest& request);

                /**
                 *本接口（CreateUsers）用于批量创建用户
                 * @param req CreateUsersRequest
                 * @return CreateUsersOutcome
                 */
                CreateUsersOutcome CreateUsers(const Model::CreateUsersRequest &request);
                void CreateUsersAsync(const Model::CreateUsersRequest& request, const CreateUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUsersOutcomeCallable CreateUsersCallable(const Model::CreateUsersRequest& request);

                /**
                 *删除实例手工备份 DeleteDBSBackupSets
                 * @param req DeleteDBSBackupSetsRequest
                 * @return DeleteDBSBackupSetsOutcome
                 */
                DeleteDBSBackupSetsOutcome DeleteDBSBackupSets(const Model::DeleteDBSBackupSetsRequest &request);
                void DeleteDBSBackupSetsAsync(const Model::DeleteDBSBackupSetsRequest& request, const DeleteDBSBackupSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDBSBackupSetsOutcomeCallable DeleteDBSBackupSetsCallable(const Model::DeleteDBSBackupSetsRequest& request);

                /**
                 *本接口（DeleteUsers）用于批量删除用户
                 * @param req DeleteUsersRequest
                 * @return DeleteUsersOutcome
                 */
                DeleteUsersOutcome DeleteUsers(const Model::DeleteUsersRequest &request);
                void DeleteUsersAsync(const Model::DeleteUsersRequest& request, const DeleteUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUsersOutcomeCallable DeleteUsersCallable(const Model::DeleteUsersRequest& request);

                /**
                 *本接口（DescribeDBInstanceDetail）提供查询实例详情功能
                 * @param req DescribeDBInstanceDetailRequest
                 * @return DescribeDBInstanceDetailOutcome
                 */
                DescribeDBInstanceDetailOutcome DescribeDBInstanceDetail(const Model::DescribeDBInstanceDetailRequest &request);
                void DescribeDBInstanceDetailAsync(const Model::DescribeDBInstanceDetailRequest& request, const DescribeDBInstanceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstanceDetailOutcomeCallable DescribeDBInstanceDetailCallable(const Model::DescribeDBInstanceDetailRequest& request);

                /**
                 *本接口（DescribeDBInstances）提供查询实例列表功能
                 * @param req DescribeDBInstancesRequest
                 * @return DescribeDBInstancesOutcome
                 */
                DescribeDBInstancesOutcome DescribeDBInstances(const Model::DescribeDBInstancesRequest &request);
                void DescribeDBInstancesAsync(const Model::DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstancesOutcomeCallable DescribeDBInstancesCallable(const Model::DescribeDBInstancesRequest& request);

                /**
                 *本接口（DescribeDBParameters）用于获取实例的当前参数设置。
                 * @param req DescribeDBParametersRequest
                 * @return DescribeDBParametersOutcome
                 */
                DescribeDBParametersOutcome DescribeDBParameters(const Model::DescribeDBParametersRequest &request);
                void DescribeDBParametersAsync(const Model::DescribeDBParametersRequest& request, const DescribeDBParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBParametersOutcomeCallable DescribeDBParametersCallable(const Model::DescribeDBParametersRequest& request);

                /**
                 *查询实例归档日志列表 DescribeDBSArchiveLogs
                 * @param req DescribeDBSArchiveLogsRequest
                 * @return DescribeDBSArchiveLogsOutcome
                 */
                DescribeDBSArchiveLogsOutcome DescribeDBSArchiveLogs(const Model::DescribeDBSArchiveLogsRequest &request);
                void DescribeDBSArchiveLogsAsync(const Model::DescribeDBSArchiveLogsRequest& request, const DescribeDBSArchiveLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBSArchiveLogsOutcomeCallable DescribeDBSArchiveLogsCallable(const Model::DescribeDBSArchiveLogsRequest& request);

                /**
                 *获取可恢复时间 DescribeDBSAvailableRecoveryTime
                 * @param req DescribeDBSAvailableRecoveryTimeRequest
                 * @return DescribeDBSAvailableRecoveryTimeOutcome
                 */
                DescribeDBSAvailableRecoveryTimeOutcome DescribeDBSAvailableRecoveryTime(const Model::DescribeDBSAvailableRecoveryTimeRequest &request);
                void DescribeDBSAvailableRecoveryTimeAsync(const Model::DescribeDBSAvailableRecoveryTimeRequest& request, const DescribeDBSAvailableRecoveryTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBSAvailableRecoveryTimeOutcomeCallable DescribeDBSAvailableRecoveryTimeCallable(const Model::DescribeDBSAvailableRecoveryTimeRequest& request);

                /**
                 *查询实例备份策略 DescribeDBSBackupPolicy
                 * @param req DescribeDBSBackupPolicyRequest
                 * @return DescribeDBSBackupPolicyOutcome
                 */
                DescribeDBSBackupPolicyOutcome DescribeDBSBackupPolicy(const Model::DescribeDBSBackupPolicyRequest &request);
                void DescribeDBSBackupPolicyAsync(const Model::DescribeDBSBackupPolicyRequest& request, const DescribeDBSBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBSBackupPolicyOutcomeCallable DescribeDBSBackupPolicyCallable(const Model::DescribeDBSBackupPolicyRequest& request);

                /**
                 *查询实例备份集信息 DescribeDBSBackupSets
                 * @param req DescribeDBSBackupSetsRequest
                 * @return DescribeDBSBackupSetsOutcome
                 */
                DescribeDBSBackupSetsOutcome DescribeDBSBackupSets(const Model::DescribeDBSBackupSetsRequest &request);
                void DescribeDBSBackupSetsAsync(const Model::DescribeDBSBackupSetsRequest& request, const DescribeDBSBackupSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBSBackupSetsOutcomeCallable DescribeDBSBackupSetsCallable(const Model::DescribeDBSBackupSetsRequest& request);

                /**
                 *查询实例备份空间概览 DescribeDBSBackupStatistics
                 * @param req DescribeDBSBackupStatisticsRequest
                 * @return DescribeDBSBackupStatisticsOutcome
                 */
                DescribeDBSBackupStatisticsOutcome DescribeDBSBackupStatistics(const Model::DescribeDBSBackupStatisticsRequest &request);
                void DescribeDBSBackupStatisticsAsync(const Model::DescribeDBSBackupStatisticsRequest& request, const DescribeDBSBackupStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBSBackupStatisticsOutcomeCallable DescribeDBSBackupStatisticsCallable(const Model::DescribeDBSBackupStatisticsRequest& request);

                /**
                 *查询备份集统计详情 DescribeDBSBackupStatisticsDetail
                 * @param req DescribeDBSBackupStatisticsDetailRequest
                 * @return DescribeDBSBackupStatisticsDetailOutcome
                 */
                DescribeDBSBackupStatisticsDetailOutcome DescribeDBSBackupStatisticsDetail(const Model::DescribeDBSBackupStatisticsDetailRequest &request);
                void DescribeDBSBackupStatisticsDetailAsync(const Model::DescribeDBSBackupStatisticsDetailRequest& request, const DescribeDBSBackupStatisticsDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBSBackupStatisticsDetailOutcomeCallable DescribeDBSBackupStatisticsDetailCallable(const Model::DescribeDBSBackupStatisticsDetailRequest& request);

                /**
                 *查询实例克隆列表 DescribeDBSCloneInstances
                 * @param req DescribeDBSCloneInstancesRequest
                 * @return DescribeDBSCloneInstancesOutcome
                 */
                DescribeDBSCloneInstancesOutcome DescribeDBSCloneInstances(const Model::DescribeDBSCloneInstancesRequest &request);
                void DescribeDBSCloneInstancesAsync(const Model::DescribeDBSCloneInstancesRequest& request, const DescribeDBSCloneInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBSCloneInstancesOutcomeCallable DescribeDBSCloneInstancesCallable(const Model::DescribeDBSCloneInstancesRequest& request);

                /**
                 *本接口（DescribeDBSecurityGroups）用于查询实例安全组信息
                 * @param req DescribeDBSecurityGroupsRequest
                 * @return DescribeDBSecurityGroupsOutcome
                 */
                DescribeDBSecurityGroupsOutcome DescribeDBSecurityGroups(const Model::DescribeDBSecurityGroupsRequest &request);
                void DescribeDBSecurityGroupsAsync(const Model::DescribeDBSecurityGroupsRequest& request, const DescribeDBSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBSecurityGroupsOutcomeCallable DescribeDBSecurityGroupsCallable(const Model::DescribeDBSecurityGroupsRequest& request);

                /**
                 *本接口（DescribeDatabaseObjects）用于查询云数据库实例的数据库中的对象列表，包含表、存储过程、视图和函数。
                 * @param req DescribeDatabaseObjectsRequest
                 * @return DescribeDatabaseObjectsOutcome
                 */
                DescribeDatabaseObjectsOutcome DescribeDatabaseObjects(const Model::DescribeDatabaseObjectsRequest &request);
                void DescribeDatabaseObjectsAsync(const Model::DescribeDatabaseObjectsRequest& request, const DescribeDatabaseObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatabaseObjectsOutcomeCallable DescribeDatabaseObjectsCallable(const Model::DescribeDatabaseObjectsRequest& request);

                /**
                 *本接口（DescribeDatabases）用于查询云数据库实例的数据库列表。
                 * @param req DescribeDatabasesRequest
                 * @return DescribeDatabasesOutcome
                 */
                DescribeDatabasesOutcome DescribeDatabases(const Model::DescribeDatabasesRequest &request);
                void DescribeDatabasesAsync(const Model::DescribeDatabasesRequest& request, const DescribeDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatabasesOutcomeCallable DescribeDatabasesCallable(const Model::DescribeDatabasesRequest& request);

                /**
                 *本接口（DescribeFlow）用于查询异步任务流程状态
                 * @param req DescribeFlowRequest
                 * @return DescribeFlowOutcome
                 */
                DescribeFlowOutcome DescribeFlow(const Model::DescribeFlowRequest &request);
                void DescribeFlowAsync(const Model::DescribeFlowRequest& request, const DescribeFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlowOutcomeCallable DescribeFlowCallable(const Model::DescribeFlowRequest& request);

                /**
                 *本接口（DescribeInstanceSSLStatus）提供实例SSL状态查询
                 * @param req DescribeInstanceSSLStatusRequest
                 * @return DescribeInstanceSSLStatusOutcome
                 */
                DescribeInstanceSSLStatusOutcome DescribeInstanceSSLStatus(const Model::DescribeInstanceSSLStatusRequest &request);
                void DescribeInstanceSSLStatusAsync(const Model::DescribeInstanceSSLStatusRequest& request, const DescribeInstanceSSLStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceSSLStatusOutcomeCallable DescribeInstanceSSLStatusCallable(const Model::DescribeInstanceSSLStatusRequest& request);

                /**
                 *查询维护时间窗口配置
                 * @param req DescribeMaintenanceWindowRequest
                 * @return DescribeMaintenanceWindowOutcome
                 */
                DescribeMaintenanceWindowOutcome DescribeMaintenanceWindow(const Model::DescribeMaintenanceWindowRequest &request);
                void DescribeMaintenanceWindowAsync(const Model::DescribeMaintenanceWindowRequest& request, const DescribeMaintenanceWindowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMaintenanceWindowOutcomeCallable DescribeMaintenanceWindowCallable(const Model::DescribeMaintenanceWindowRequest& request);

                /**
                 *本接口（DescribeSaleInfo）提供查询可用售卖地域功能
                 * @param req DescribeSaleInfoRequest
                 * @return DescribeSaleInfoOutcome
                 */
                DescribeSaleInfoOutcome DescribeSaleInfo(const Model::DescribeSaleInfoRequest &request);
                void DescribeSaleInfoAsync(const Model::DescribeSaleInfoRequest& request, const DescribeSaleInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSaleInfoOutcomeCallable DescribeSaleInfoCallable(const Model::DescribeSaleInfoRequest& request);

                /**
                 *本接口提供查询慢日志功能
                 * @param req DescribeSlowLogsRequest
                 * @return DescribeSlowLogsOutcome
                 */
                DescribeSlowLogsOutcome DescribeSlowLogs(const Model::DescribeSlowLogsRequest &request);
                void DescribeSlowLogsAsync(const Model::DescribeSlowLogsRequest& request, const DescribeSlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSlowLogsOutcomeCallable DescribeSlowLogsCallable(const Model::DescribeSlowLogsRequest& request);

                /**
                 *本接口（DescribeSpecs）提供查询售卖规格功能
                 * @param req DescribeSpecsRequest
                 * @return DescribeSpecsOutcome
                 */
                DescribeSpecsOutcome DescribeSpecs(const Model::DescribeSpecsRequest &request);
                void DescribeSpecsAsync(const Model::DescribeSpecsRequest& request, const DescribeSpecsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSpecsOutcomeCallable DescribeSpecsCallable(const Model::DescribeSpecsRequest& request);

                /**
                 *本接口（DescribeUserPrivileges）提供查询用户的权限功能
                 * @param req DescribeUserPrivilegesRequest
                 * @return DescribeUserPrivilegesOutcome
                 */
                DescribeUserPrivilegesOutcome DescribeUserPrivileges(const Model::DescribeUserPrivilegesRequest &request);
                void DescribeUserPrivilegesAsync(const Model::DescribeUserPrivilegesRequest& request, const DescribeUserPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserPrivilegesOutcomeCallable DescribeUserPrivilegesCallable(const Model::DescribeUserPrivilegesRequest& request);

                /**
                 *本接口（DescribeUsers）提供查询用户列表功能
                 * @param req DescribeUsersRequest
                 * @return DescribeUsersOutcome
                 */
                DescribeUsersOutcome DescribeUsers(const Model::DescribeUsersRequest &request);
                void DescribeUsersAsync(const Model::DescribeUsersRequest& request, const DescribeUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUsersOutcomeCallable DescribeUsersCallable(const Model::DescribeUsersRequest& request);

                /**
                 *本接口（DestroyInstances）提供批量销毁实例功能
                 * @param req DestroyInstancesRequest
                 * @return DestroyInstancesOutcome
                 */
                DestroyInstancesOutcome DestroyInstances(const Model::DestroyInstancesRequest &request);
                void DestroyInstancesAsync(const Model::DestroyInstancesRequest& request, const DestroyInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyInstancesOutcomeCallable DestroyInstancesCallable(const Model::DestroyInstancesRequest& request);

                /**
                 *本接口（ExpandInstance）提供横向扩容实例功能
                 * @param req ExpandInstanceRequest
                 * @return ExpandInstanceOutcome
                 */
                ExpandInstanceOutcome ExpandInstance(const Model::ExpandInstanceRequest &request);
                void ExpandInstanceAsync(const Model::ExpandInstanceRequest& request, const ExpandInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExpandInstanceOutcomeCallable ExpandInstanceCallable(const Model::ExpandInstanceRequest& request);

                /**
                 *本接口（IsolateDBInstance）提供批量隔离实例功能
                 * @param req IsolateDBInstanceRequest
                 * @return IsolateDBInstanceOutcome
                 */
                IsolateDBInstanceOutcome IsolateDBInstance(const Model::IsolateDBInstanceRequest &request);
                void IsolateDBInstanceAsync(const Model::IsolateDBInstanceRequest& request, const IsolateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IsolateDBInstanceOutcomeCallable IsolateDBInstanceCallable(const Model::IsolateDBInstanceRequest& request);

                /**
                 *本接口（ModifyAutoRenewFlag）用于修改自动续费标志
                 * @param req ModifyAutoRenewFlagRequest
                 * @return ModifyAutoRenewFlagOutcome
                 */
                ModifyAutoRenewFlagOutcome ModifyAutoRenewFlag(const Model::ModifyAutoRenewFlagRequest &request);
                void ModifyAutoRenewFlagAsync(const Model::ModifyAutoRenewFlagRequest& request, const ModifyAutoRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAutoRenewFlagOutcomeCallable ModifyAutoRenewFlagCallable(const Model::ModifyAutoRenewFlagRequest& request);

                /**
                 *本接口（ModifyDBInstanceSecurityGroups）用于修改云数据库安全组
                 * @param req ModifyDBInstanceSecurityGroupsRequest
                 * @return ModifyDBInstanceSecurityGroupsOutcome
                 */
                ModifyDBInstanceSecurityGroupsOutcome ModifyDBInstanceSecurityGroups(const Model::ModifyDBInstanceSecurityGroupsRequest &request);
                void ModifyDBInstanceSecurityGroupsAsync(const Model::ModifyDBInstanceSecurityGroupsRequest& request, const ModifyDBInstanceSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceSecurityGroupsOutcomeCallable ModifyDBInstanceSecurityGroupsCallable(const Model::ModifyDBInstanceSecurityGroupsRequest& request);

                /**
                 *本接口(ModifyDBInstanceVPort)修改实例VPC端口
                 * @param req ModifyDBInstanceVPortRequest
                 * @return ModifyDBInstanceVPortOutcome
                 */
                ModifyDBInstanceVPortOutcome ModifyDBInstanceVPort(const Model::ModifyDBInstanceVPortRequest &request);
                void ModifyDBInstanceVPortAsync(const Model::ModifyDBInstanceVPortRequest& request, const ModifyDBInstanceVPortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceVPortOutcomeCallable ModifyDBInstanceVPortCallable(const Model::ModifyDBInstanceVPortRequest& request);

                /**
                 *本接口（ModifyDBParameters）用于修改实例参数。
                 * @param req ModifyDBParametersRequest
                 * @return ModifyDBParametersOutcome
                 */
                ModifyDBParametersOutcome ModifyDBParameters(const Model::ModifyDBParametersRequest &request);
                void ModifyDBParametersAsync(const Model::ModifyDBParametersRequest& request, const ModifyDBParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBParametersOutcomeCallable ModifyDBParametersCallable(const Model::ModifyDBParametersRequest& request);

                /**
                 *修改实例备份策略 ModifyDBSBackupPolicy
                 * @param req ModifyDBSBackupPolicyRequest
                 * @return ModifyDBSBackupPolicyOutcome
                 */
                ModifyDBSBackupPolicyOutcome ModifyDBSBackupPolicy(const Model::ModifyDBSBackupPolicyRequest &request);
                void ModifyDBSBackupPolicyAsync(const Model::ModifyDBSBackupPolicyRequest& request, const ModifyDBSBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBSBackupPolicyOutcomeCallable ModifyDBSBackupPolicyCallable(const Model::ModifyDBSBackupPolicyRequest& request);

                /**
                 *修改实例备份备注 ModifyDBSBackupSetComment
                 * @param req ModifyDBSBackupSetCommentRequest
                 * @return ModifyDBSBackupSetCommentOutcome
                 */
                ModifyDBSBackupSetCommentOutcome ModifyDBSBackupSetComment(const Model::ModifyDBSBackupSetCommentRequest &request);
                void ModifyDBSBackupSetCommentAsync(const Model::ModifyDBSBackupSetCommentRequest& request, const ModifyDBSBackupSetCommentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBSBackupSetCommentOutcomeCallable ModifyDBSBackupSetCommentCallable(const Model::ModifyDBSBackupSetCommentRequest& request);

                /**
                 *本接口（ModifyInstanceName）提供修改实例名称功能
                 * @param req ModifyInstanceNameRequest
                 * @return ModifyInstanceNameOutcome
                 */
                ModifyInstanceNameOutcome ModifyInstanceName(const Model::ModifyInstanceNameRequest &request);
                void ModifyInstanceNameAsync(const Model::ModifyInstanceNameRequest& request, const ModifyInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceNameOutcomeCallable ModifyInstanceNameCallable(const Model::ModifyInstanceNameRequest& request);

                /**
                 *本接口（ModifyInstanceNetwork）用于修改实例所属网络
                 * @param req ModifyInstanceNetworkRequest
                 * @return ModifyInstanceNetworkOutcome
                 */
                ModifyInstanceNetworkOutcome ModifyInstanceNetwork(const Model::ModifyInstanceNetworkRequest &request);
                void ModifyInstanceNetworkAsync(const Model::ModifyInstanceNetworkRequest& request, const ModifyInstanceNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceNetworkOutcomeCallable ModifyInstanceNetworkCallable(const Model::ModifyInstanceNetworkRequest& request);

                /**
                 *本接口（ModifyInstanceSSLStatus）提供开关实例SSL的功能
                 * @param req ModifyInstanceSSLStatusRequest
                 * @return ModifyInstanceSSLStatusOutcome
                 */
                ModifyInstanceSSLStatusOutcome ModifyInstanceSSLStatus(const Model::ModifyInstanceSSLStatusRequest &request);
                void ModifyInstanceSSLStatusAsync(const Model::ModifyInstanceSSLStatusRequest& request, const ModifyInstanceSSLStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceSSLStatusOutcomeCallable ModifyInstanceSSLStatusCallable(const Model::ModifyInstanceSSLStatusRequest& request);

                /**
                 *新增/修改实例维护时间窗口配置
                 * @param req ModifyMaintenanceWindowRequest
                 * @return ModifyMaintenanceWindowOutcome
                 */
                ModifyMaintenanceWindowOutcome ModifyMaintenanceWindow(const Model::ModifyMaintenanceWindowRequest &request);
                void ModifyMaintenanceWindowAsync(const Model::ModifyMaintenanceWindowRequest& request, const ModifyMaintenanceWindowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMaintenanceWindowOutcomeCallable ModifyMaintenanceWindowCallable(const Model::ModifyMaintenanceWindowRequest& request);

                /**
                 *本接口(ModifyPrivileges)修改用户权限
                 * @param req ModifyUserPrivilegesRequest
                 * @return ModifyUserPrivilegesOutcome
                 */
                ModifyUserPrivilegesOutcome ModifyUserPrivileges(const Model::ModifyUserPrivilegesRequest &request);
                void ModifyUserPrivilegesAsync(const Model::ModifyUserPrivilegesRequest& request, const ModifyUserPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUserPrivilegesOutcomeCallable ModifyUserPrivilegesCallable(const Model::ModifyUserPrivilegesRequest& request);

                /**
                 *本接口（ResetUsersPassword）用于批量重置用户密码
                 * @param req ResetUsersPasswordRequest
                 * @return ResetUsersPasswordOutcome
                 */
                ResetUsersPasswordOutcome ResetUsersPassword(const Model::ResetUsersPasswordRequest &request);
                void ResetUsersPasswordAsync(const Model::ResetUsersPasswordRequest& request, const ResetUsersPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetUsersPasswordOutcomeCallable ResetUsersPasswordCallable(const Model::ResetUsersPasswordRequest& request);

                /**
                 *本接口（RestartDBInstances）用于重启数据库实例
                 * @param req RestartDBInstancesRequest
                 * @return RestartDBInstancesOutcome
                 */
                RestartDBInstancesOutcome RestartDBInstances(const Model::RestartDBInstancesRequest &request);
                void RestartDBInstancesAsync(const Model::RestartDBInstancesRequest& request, const RestartDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestartDBInstancesOutcomeCallable RestartDBInstancesCallable(const Model::RestartDBInstancesRequest& request);

                /**
                 *本接口（UpgradeInstance）提供纵向扩容实例功能
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

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_TDMYSQLCLIENT_H_
