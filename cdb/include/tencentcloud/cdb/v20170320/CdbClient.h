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
#include <tencentcloud/cdb/v20170320/model/AdjustCdbProxyRequest.h>
#include <tencentcloud/cdb/v20170320/model/AdjustCdbProxyResponse.h>
#include <tencentcloud/cdb/v20170320/model/AdjustCdbProxyAddressRequest.h>
#include <tencentcloud/cdb/v20170320/model/AdjustCdbProxyAddressResponse.h>
#include <tencentcloud/cdb/v20170320/model/AnalyzeAuditLogsRequest.h>
#include <tencentcloud/cdb/v20170320/model/AnalyzeAuditLogsResponse.h>
#include <tencentcloud/cdb/v20170320/model/AssociateSecurityGroupsRequest.h>
#include <tencentcloud/cdb/v20170320/model/AssociateSecurityGroupsResponse.h>
#include <tencentcloud/cdb/v20170320/model/BalanceRoGroupLoadRequest.h>
#include <tencentcloud/cdb/v20170320/model/BalanceRoGroupLoadResponse.h>
#include <tencentcloud/cdb/v20170320/model/CheckMigrateClusterRequest.h>
#include <tencentcloud/cdb/v20170320/model/CheckMigrateClusterResponse.h>
#include <tencentcloud/cdb/v20170320/model/CloseAuditServiceRequest.h>
#include <tencentcloud/cdb/v20170320/model/CloseAuditServiceResponse.h>
#include <tencentcloud/cdb/v20170320/model/CloseCDBProxyRequest.h>
#include <tencentcloud/cdb/v20170320/model/CloseCDBProxyResponse.h>
#include <tencentcloud/cdb/v20170320/model/CloseCdbProxyAddressRequest.h>
#include <tencentcloud/cdb/v20170320/model/CloseCdbProxyAddressResponse.h>
#include <tencentcloud/cdb/v20170320/model/CloseSSLRequest.h>
#include <tencentcloud/cdb/v20170320/model/CloseSSLResponse.h>
#include <tencentcloud/cdb/v20170320/model/CloseWanServiceRequest.h>
#include <tencentcloud/cdb/v20170320/model/CloseWanServiceResponse.h>
#include <tencentcloud/cdb/v20170320/model/CreateAccountsRequest.h>
#include <tencentcloud/cdb/v20170320/model/CreateAccountsResponse.h>
#include <tencentcloud/cdb/v20170320/model/CreateAuditLogFileRequest.h>
#include <tencentcloud/cdb/v20170320/model/CreateAuditLogFileResponse.h>
#include <tencentcloud/cdb/v20170320/model/CreateAuditPolicyRequest.h>
#include <tencentcloud/cdb/v20170320/model/CreateAuditPolicyResponse.h>
#include <tencentcloud/cdb/v20170320/model/CreateAuditRuleRequest.h>
#include <tencentcloud/cdb/v20170320/model/CreateAuditRuleResponse.h>
#include <tencentcloud/cdb/v20170320/model/CreateAuditRuleTemplateRequest.h>
#include <tencentcloud/cdb/v20170320/model/CreateAuditRuleTemplateResponse.h>
#include <tencentcloud/cdb/v20170320/model/CreateBackupRequest.h>
#include <tencentcloud/cdb/v20170320/model/CreateBackupResponse.h>
#include <tencentcloud/cdb/v20170320/model/CreateCdbProxyRequest.h>
#include <tencentcloud/cdb/v20170320/model/CreateCdbProxyResponse.h>
#include <tencentcloud/cdb/v20170320/model/CreateCdbProxyAddressRequest.h>
#include <tencentcloud/cdb/v20170320/model/CreateCdbProxyAddressResponse.h>
#include <tencentcloud/cdb/v20170320/model/CreateCloneInstanceRequest.h>
#include <tencentcloud/cdb/v20170320/model/CreateCloneInstanceResponse.h>
#include <tencentcloud/cdb/v20170320/model/CreateDBImportJobRequest.h>
#include <tencentcloud/cdb/v20170320/model/CreateDBImportJobResponse.h>
#include <tencentcloud/cdb/v20170320/model/CreateDBInstanceRequest.h>
#include <tencentcloud/cdb/v20170320/model/CreateDBInstanceResponse.h>
#include <tencentcloud/cdb/v20170320/model/CreateDBInstanceHourRequest.h>
#include <tencentcloud/cdb/v20170320/model/CreateDBInstanceHourResponse.h>
#include <tencentcloud/cdb/v20170320/model/CreateDatabaseRequest.h>
#include <tencentcloud/cdb/v20170320/model/CreateDatabaseResponse.h>
#include <tencentcloud/cdb/v20170320/model/CreateDeployGroupRequest.h>
#include <tencentcloud/cdb/v20170320/model/CreateDeployGroupResponse.h>
#include <tencentcloud/cdb/v20170320/model/CreateParamTemplateRequest.h>
#include <tencentcloud/cdb/v20170320/model/CreateParamTemplateResponse.h>
#include <tencentcloud/cdb/v20170320/model/CreateRoInstanceIpRequest.h>
#include <tencentcloud/cdb/v20170320/model/CreateRoInstanceIpResponse.h>
#include <tencentcloud/cdb/v20170320/model/CreateRotationPasswordRequest.h>
#include <tencentcloud/cdb/v20170320/model/CreateRotationPasswordResponse.h>
#include <tencentcloud/cdb/v20170320/model/DeleteAccountsRequest.h>
#include <tencentcloud/cdb/v20170320/model/DeleteAccountsResponse.h>
#include <tencentcloud/cdb/v20170320/model/DeleteAuditLogFileRequest.h>
#include <tencentcloud/cdb/v20170320/model/DeleteAuditLogFileResponse.h>
#include <tencentcloud/cdb/v20170320/model/DeleteAuditPolicyRequest.h>
#include <tencentcloud/cdb/v20170320/model/DeleteAuditPolicyResponse.h>
#include <tencentcloud/cdb/v20170320/model/DeleteAuditRuleRequest.h>
#include <tencentcloud/cdb/v20170320/model/DeleteAuditRuleResponse.h>
#include <tencentcloud/cdb/v20170320/model/DeleteAuditRuleTemplatesRequest.h>
#include <tencentcloud/cdb/v20170320/model/DeleteAuditRuleTemplatesResponse.h>
#include <tencentcloud/cdb/v20170320/model/DeleteBackupRequest.h>
#include <tencentcloud/cdb/v20170320/model/DeleteBackupResponse.h>
#include <tencentcloud/cdb/v20170320/model/DeleteDatabaseRequest.h>
#include <tencentcloud/cdb/v20170320/model/DeleteDatabaseResponse.h>
#include <tencentcloud/cdb/v20170320/model/DeleteDeployGroupsRequest.h>
#include <tencentcloud/cdb/v20170320/model/DeleteDeployGroupsResponse.h>
#include <tencentcloud/cdb/v20170320/model/DeleteParamTemplateRequest.h>
#include <tencentcloud/cdb/v20170320/model/DeleteParamTemplateResponse.h>
#include <tencentcloud/cdb/v20170320/model/DeleteRotationPasswordRequest.h>
#include <tencentcloud/cdb/v20170320/model/DeleteRotationPasswordResponse.h>
#include <tencentcloud/cdb/v20170320/model/DeleteTimeWindowRequest.h>
#include <tencentcloud/cdb/v20170320/model/DeleteTimeWindowResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeAccountPrivilegesRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeAccountPrivilegesResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeAccountsRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeAccountsResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeAsyncRequestInfoRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeAsyncRequestInfoResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeAuditConfigRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeAuditConfigResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeAuditInstanceListRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeAuditInstanceListResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeAuditLogFilesRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeAuditLogFilesResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeAuditLogsRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeAuditLogsResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeAuditPoliciesRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeAuditPoliciesResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeAuditRuleTemplateModifyHistoryRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeAuditRuleTemplateModifyHistoryResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeAuditRuleTemplatesRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeAuditRuleTemplatesResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeAuditRulesRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeAuditRulesResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeBackupConfigRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeBackupConfigResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeBackupDecryptionKeyRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeBackupDecryptionKeyResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeBackupDownloadRestrictionRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeBackupDownloadRestrictionResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeBackupEncryptionStatusRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeBackupEncryptionStatusResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeBackupOverviewRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeBackupOverviewResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeBackupSummariesRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeBackupSummariesResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeBackupsRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeBackupsResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeBinlogBackupOverviewRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeBinlogBackupOverviewResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeBinlogsRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeBinlogsResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeCPUExpandStrategyInfoRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeCPUExpandStrategyInfoResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeCdbProxyInfoRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeCdbProxyInfoResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeCdbZoneConfigRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeCdbZoneConfigResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeCloneListRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeCloneListResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeClusterInfoRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeClusterInfoResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeCpuExpandHistoryRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeCpuExpandHistoryResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBFeaturesRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBFeaturesResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBImportRecordsRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBImportRecordsResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBInstanceCharsetRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBInstanceCharsetResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBInstanceConfigRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBInstanceConfigResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBInstanceGTIDRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBInstanceGTIDResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBInstanceInfoRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBInstanceInfoResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBInstanceLogToCLSRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBInstanceLogToCLSResponse.h>
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
#include <tencentcloud/cdb/v20170320/model/DescribeDataBackupOverviewRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDataBackupOverviewResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDatabasesRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDatabasesResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDefaultParamsRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDefaultParamsResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDeployGroupListRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDeployGroupListResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDeviceMonitorInfoRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDeviceMonitorInfoResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeErrorLogDataRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeErrorLogDataResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeInstanceAlarmEventsRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeInstanceAlarmEventsResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeInstanceParamRecordsRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeInstanceParamRecordsResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeInstanceParamsRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeInstanceParamsResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeInstanceUpgradeCheckJobRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeInstanceUpgradeCheckJobResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeInstanceUpgradeTypeRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeInstanceUpgradeTypeResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeLocalBinlogConfigRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeLocalBinlogConfigResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeParamTemplateInfoRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeParamTemplateInfoResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeParamTemplatesRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeParamTemplatesResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeProjectSecurityGroupsRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeProjectSecurityGroupsResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeProxyCustomConfRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeProxyCustomConfResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeProxySupportParamRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeProxySupportParamResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeRemoteBackupConfigRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeRemoteBackupConfigResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeRoGroupsRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeRoGroupsResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeRoMinScaleRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeRoMinScaleResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeRollbackRangeTimeRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeRollbackRangeTimeResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeRollbackTaskDetailRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeRollbackTaskDetailResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeSSLStatusRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeSSLStatusResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeSlowLogDataRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeSlowLogDataResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeSlowLogsRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeSlowLogsResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeSupportedPrivilegesRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeSupportedPrivilegesResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeTableColumnsRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeTableColumnsResponse.h>
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
#include <tencentcloud/cdb/v20170320/model/InquiryPriceUpgradeInstancesRequest.h>
#include <tencentcloud/cdb/v20170320/model/InquiryPriceUpgradeInstancesResponse.h>
#include <tencentcloud/cdb/v20170320/model/IsolateDBInstanceRequest.h>
#include <tencentcloud/cdb/v20170320/model/IsolateDBInstanceResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyAccountDescriptionRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyAccountDescriptionResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyAccountHostRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyAccountHostResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyAccountMaxUserConnectionsRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyAccountMaxUserConnectionsResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyAccountPasswordRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyAccountPasswordResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyAccountPrivilegesRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyAccountPrivilegesResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyAuditConfigRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyAuditConfigResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyAuditRuleRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyAuditRuleResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyAuditRuleTemplatesRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyAuditRuleTemplatesResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyAuditServiceRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyAuditServiceResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyAutoRenewFlagRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyAutoRenewFlagResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyBackupConfigRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyBackupConfigResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyBackupDownloadRestrictionRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyBackupDownloadRestrictionResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyBackupEncryptionStatusRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyBackupEncryptionStatusResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyCdbProxyAddressDescRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyCdbProxyAddressDescResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyCdbProxyAddressVipAndVPortRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyCdbProxyAddressVipAndVPortResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyCdbProxyParamRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyCdbProxyParamResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyDBInstanceLogToCLSRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyDBInstanceLogToCLSResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyDBInstanceNameRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyDBInstanceNameResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyDBInstanceProjectRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyDBInstanceProjectResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyDBInstanceReadOnlyStatusRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyDBInstanceReadOnlyStatusResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyDBInstanceSecurityGroupsRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyDBInstanceSecurityGroupsResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyDBInstanceVipVportRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyDBInstanceVipVportResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyInstanceParamRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyInstanceParamResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyInstancePasswordComplexityRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyInstancePasswordComplexityResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyInstanceTagRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyInstanceTagResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyLocalBinlogConfigRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyLocalBinlogConfigResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyNameOrDescByDpIdRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyNameOrDescByDpIdResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyParamTemplateRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyParamTemplateResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyProtectModeRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyProtectModeResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyRemoteBackupConfigRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyRemoteBackupConfigResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyRoGroupInfoRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyRoGroupInfoResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyTimeWindowRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyTimeWindowResponse.h>
#include <tencentcloud/cdb/v20170320/model/OfflineIsolatedInstancesRequest.h>
#include <tencentcloud/cdb/v20170320/model/OfflineIsolatedInstancesResponse.h>
#include <tencentcloud/cdb/v20170320/model/OpenAuditServiceRequest.h>
#include <tencentcloud/cdb/v20170320/model/OpenAuditServiceResponse.h>
#include <tencentcloud/cdb/v20170320/model/OpenDBInstanceEncryptionRequest.h>
#include <tencentcloud/cdb/v20170320/model/OpenDBInstanceEncryptionResponse.h>
#include <tencentcloud/cdb/v20170320/model/OpenDBInstanceGTIDRequest.h>
#include <tencentcloud/cdb/v20170320/model/OpenDBInstanceGTIDResponse.h>
#include <tencentcloud/cdb/v20170320/model/OpenSSLRequest.h>
#include <tencentcloud/cdb/v20170320/model/OpenSSLResponse.h>
#include <tencentcloud/cdb/v20170320/model/OpenWanServiceRequest.h>
#include <tencentcloud/cdb/v20170320/model/OpenWanServiceResponse.h>
#include <tencentcloud/cdb/v20170320/model/ReleaseIsolatedDBInstancesRequest.h>
#include <tencentcloud/cdb/v20170320/model/ReleaseIsolatedDBInstancesResponse.h>
#include <tencentcloud/cdb/v20170320/model/ReloadBalanceProxyNodeRequest.h>
#include <tencentcloud/cdb/v20170320/model/ReloadBalanceProxyNodeResponse.h>
#include <tencentcloud/cdb/v20170320/model/RenewDBInstanceRequest.h>
#include <tencentcloud/cdb/v20170320/model/RenewDBInstanceResponse.h>
#include <tencentcloud/cdb/v20170320/model/ResetPasswordRequest.h>
#include <tencentcloud/cdb/v20170320/model/ResetPasswordResponse.h>
#include <tencentcloud/cdb/v20170320/model/ResetRootAccountRequest.h>
#include <tencentcloud/cdb/v20170320/model/ResetRootAccountResponse.h>
#include <tencentcloud/cdb/v20170320/model/RestartDBInstancesRequest.h>
#include <tencentcloud/cdb/v20170320/model/RestartDBInstancesResponse.h>
#include <tencentcloud/cdb/v20170320/model/StartBatchRollbackRequest.h>
#include <tencentcloud/cdb/v20170320/model/StartBatchRollbackResponse.h>
#include <tencentcloud/cdb/v20170320/model/StartCpuExpandRequest.h>
#include <tencentcloud/cdb/v20170320/model/StartCpuExpandResponse.h>
#include <tencentcloud/cdb/v20170320/model/StartReplicationRequest.h>
#include <tencentcloud/cdb/v20170320/model/StartReplicationResponse.h>
#include <tencentcloud/cdb/v20170320/model/StopCpuExpandRequest.h>
#include <tencentcloud/cdb/v20170320/model/StopCpuExpandResponse.h>
#include <tencentcloud/cdb/v20170320/model/StopDBImportJobRequest.h>
#include <tencentcloud/cdb/v20170320/model/StopDBImportJobResponse.h>
#include <tencentcloud/cdb/v20170320/model/StopReplicationRequest.h>
#include <tencentcloud/cdb/v20170320/model/StopReplicationResponse.h>
#include <tencentcloud/cdb/v20170320/model/StopRollbackRequest.h>
#include <tencentcloud/cdb/v20170320/model/StopRollbackResponse.h>
#include <tencentcloud/cdb/v20170320/model/SubmitInstanceUpgradeCheckJobRequest.h>
#include <tencentcloud/cdb/v20170320/model/SubmitInstanceUpgradeCheckJobResponse.h>
#include <tencentcloud/cdb/v20170320/model/SwitchCDBProxyRequest.h>
#include <tencentcloud/cdb/v20170320/model/SwitchCDBProxyResponse.h>
#include <tencentcloud/cdb/v20170320/model/SwitchDBInstanceMasterSlaveRequest.h>
#include <tencentcloud/cdb/v20170320/model/SwitchDBInstanceMasterSlaveResponse.h>
#include <tencentcloud/cdb/v20170320/model/SwitchDrInstanceToMasterRequest.h>
#include <tencentcloud/cdb/v20170320/model/SwitchDrInstanceToMasterResponse.h>
#include <tencentcloud/cdb/v20170320/model/SwitchForUpgradeRequest.h>
#include <tencentcloud/cdb/v20170320/model/SwitchForUpgradeResponse.h>
#include <tencentcloud/cdb/v20170320/model/UpgradeCDBProxyVersionRequest.h>
#include <tencentcloud/cdb/v20170320/model/UpgradeCDBProxyVersionResponse.h>
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

                typedef Outcome<Core::Error, Model::AddTimeWindowResponse> AddTimeWindowOutcome;
                typedef std::future<AddTimeWindowOutcome> AddTimeWindowOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::AddTimeWindowRequest&, AddTimeWindowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddTimeWindowAsyncHandler;
                typedef Outcome<Core::Error, Model::AdjustCdbProxyResponse> AdjustCdbProxyOutcome;
                typedef std::future<AdjustCdbProxyOutcome> AdjustCdbProxyOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::AdjustCdbProxyRequest&, AdjustCdbProxyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AdjustCdbProxyAsyncHandler;
                typedef Outcome<Core::Error, Model::AdjustCdbProxyAddressResponse> AdjustCdbProxyAddressOutcome;
                typedef std::future<AdjustCdbProxyAddressOutcome> AdjustCdbProxyAddressOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::AdjustCdbProxyAddressRequest&, AdjustCdbProxyAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AdjustCdbProxyAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::AnalyzeAuditLogsResponse> AnalyzeAuditLogsOutcome;
                typedef std::future<AnalyzeAuditLogsOutcome> AnalyzeAuditLogsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::AnalyzeAuditLogsRequest&, AnalyzeAuditLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AnalyzeAuditLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::AssociateSecurityGroupsResponse> AssociateSecurityGroupsOutcome;
                typedef std::future<AssociateSecurityGroupsOutcome> AssociateSecurityGroupsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::AssociateSecurityGroupsRequest&, AssociateSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::BalanceRoGroupLoadResponse> BalanceRoGroupLoadOutcome;
                typedef std::future<BalanceRoGroupLoadOutcome> BalanceRoGroupLoadOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::BalanceRoGroupLoadRequest&, BalanceRoGroupLoadOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BalanceRoGroupLoadAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckMigrateClusterResponse> CheckMigrateClusterOutcome;
                typedef std::future<CheckMigrateClusterOutcome> CheckMigrateClusterOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::CheckMigrateClusterRequest&, CheckMigrateClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckMigrateClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::CloseAuditServiceResponse> CloseAuditServiceOutcome;
                typedef std::future<CloseAuditServiceOutcome> CloseAuditServiceOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::CloseAuditServiceRequest&, CloseAuditServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseAuditServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::CloseCDBProxyResponse> CloseCDBProxyOutcome;
                typedef std::future<CloseCDBProxyOutcome> CloseCDBProxyOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::CloseCDBProxyRequest&, CloseCDBProxyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseCDBProxyAsyncHandler;
                typedef Outcome<Core::Error, Model::CloseCdbProxyAddressResponse> CloseCdbProxyAddressOutcome;
                typedef std::future<CloseCdbProxyAddressOutcome> CloseCdbProxyAddressOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::CloseCdbProxyAddressRequest&, CloseCdbProxyAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseCdbProxyAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::CloseSSLResponse> CloseSSLOutcome;
                typedef std::future<CloseSSLOutcome> CloseSSLOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::CloseSSLRequest&, CloseSSLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseSSLAsyncHandler;
                typedef Outcome<Core::Error, Model::CloseWanServiceResponse> CloseWanServiceOutcome;
                typedef std::future<CloseWanServiceOutcome> CloseWanServiceOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::CloseWanServiceRequest&, CloseWanServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseWanServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAccountsResponse> CreateAccountsOutcome;
                typedef std::future<CreateAccountsOutcome> CreateAccountsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::CreateAccountsRequest&, CreateAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccountsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAuditLogFileResponse> CreateAuditLogFileOutcome;
                typedef std::future<CreateAuditLogFileOutcome> CreateAuditLogFileOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::CreateAuditLogFileRequest&, CreateAuditLogFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAuditLogFileAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAuditPolicyResponse> CreateAuditPolicyOutcome;
                typedef std::future<CreateAuditPolicyOutcome> CreateAuditPolicyOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::CreateAuditPolicyRequest&, CreateAuditPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAuditPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAuditRuleResponse> CreateAuditRuleOutcome;
                typedef std::future<CreateAuditRuleOutcome> CreateAuditRuleOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::CreateAuditRuleRequest&, CreateAuditRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAuditRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAuditRuleTemplateResponse> CreateAuditRuleTemplateOutcome;
                typedef std::future<CreateAuditRuleTemplateOutcome> CreateAuditRuleTemplateOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::CreateAuditRuleTemplateRequest&, CreateAuditRuleTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAuditRuleTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBackupResponse> CreateBackupOutcome;
                typedef std::future<CreateBackupOutcome> CreateBackupOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::CreateBackupRequest&, CreateBackupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBackupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCdbProxyResponse> CreateCdbProxyOutcome;
                typedef std::future<CreateCdbProxyOutcome> CreateCdbProxyOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::CreateCdbProxyRequest&, CreateCdbProxyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCdbProxyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCdbProxyAddressResponse> CreateCdbProxyAddressOutcome;
                typedef std::future<CreateCdbProxyAddressOutcome> CreateCdbProxyAddressOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::CreateCdbProxyAddressRequest&, CreateCdbProxyAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCdbProxyAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCloneInstanceResponse> CreateCloneInstanceOutcome;
                typedef std::future<CreateCloneInstanceOutcome> CreateCloneInstanceOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::CreateCloneInstanceRequest&, CreateCloneInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloneInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDBImportJobResponse> CreateDBImportJobOutcome;
                typedef std::future<CreateDBImportJobOutcome> CreateDBImportJobOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::CreateDBImportJobRequest&, CreateDBImportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBImportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDBInstanceResponse> CreateDBInstanceOutcome;
                typedef std::future<CreateDBInstanceOutcome> CreateDBInstanceOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::CreateDBInstanceRequest&, CreateDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDBInstanceHourResponse> CreateDBInstanceHourOutcome;
                typedef std::future<CreateDBInstanceHourOutcome> CreateDBInstanceHourOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::CreateDBInstanceHourRequest&, CreateDBInstanceHourOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBInstanceHourAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDatabaseResponse> CreateDatabaseOutcome;
                typedef std::future<CreateDatabaseOutcome> CreateDatabaseOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::CreateDatabaseRequest&, CreateDatabaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDatabaseAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDeployGroupResponse> CreateDeployGroupOutcome;
                typedef std::future<CreateDeployGroupOutcome> CreateDeployGroupOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::CreateDeployGroupRequest&, CreateDeployGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDeployGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateParamTemplateResponse> CreateParamTemplateOutcome;
                typedef std::future<CreateParamTemplateOutcome> CreateParamTemplateOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::CreateParamTemplateRequest&, CreateParamTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateParamTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRoInstanceIpResponse> CreateRoInstanceIpOutcome;
                typedef std::future<CreateRoInstanceIpOutcome> CreateRoInstanceIpOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::CreateRoInstanceIpRequest&, CreateRoInstanceIpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRoInstanceIpAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRotationPasswordResponse> CreateRotationPasswordOutcome;
                typedef std::future<CreateRotationPasswordOutcome> CreateRotationPasswordOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::CreateRotationPasswordRequest&, CreateRotationPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRotationPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAccountsResponse> DeleteAccountsOutcome;
                typedef std::future<DeleteAccountsOutcome> DeleteAccountsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DeleteAccountsRequest&, DeleteAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccountsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAuditLogFileResponse> DeleteAuditLogFileOutcome;
                typedef std::future<DeleteAuditLogFileOutcome> DeleteAuditLogFileOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DeleteAuditLogFileRequest&, DeleteAuditLogFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAuditLogFileAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAuditPolicyResponse> DeleteAuditPolicyOutcome;
                typedef std::future<DeleteAuditPolicyOutcome> DeleteAuditPolicyOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DeleteAuditPolicyRequest&, DeleteAuditPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAuditPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAuditRuleResponse> DeleteAuditRuleOutcome;
                typedef std::future<DeleteAuditRuleOutcome> DeleteAuditRuleOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DeleteAuditRuleRequest&, DeleteAuditRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAuditRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAuditRuleTemplatesResponse> DeleteAuditRuleTemplatesOutcome;
                typedef std::future<DeleteAuditRuleTemplatesOutcome> DeleteAuditRuleTemplatesOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DeleteAuditRuleTemplatesRequest&, DeleteAuditRuleTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAuditRuleTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBackupResponse> DeleteBackupOutcome;
                typedef std::future<DeleteBackupOutcome> DeleteBackupOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DeleteBackupRequest&, DeleteBackupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBackupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDatabaseResponse> DeleteDatabaseOutcome;
                typedef std::future<DeleteDatabaseOutcome> DeleteDatabaseOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DeleteDatabaseRequest&, DeleteDatabaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDatabaseAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDeployGroupsResponse> DeleteDeployGroupsOutcome;
                typedef std::future<DeleteDeployGroupsOutcome> DeleteDeployGroupsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DeleteDeployGroupsRequest&, DeleteDeployGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeployGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteParamTemplateResponse> DeleteParamTemplateOutcome;
                typedef std::future<DeleteParamTemplateOutcome> DeleteParamTemplateOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DeleteParamTemplateRequest&, DeleteParamTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteParamTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRotationPasswordResponse> DeleteRotationPasswordOutcome;
                typedef std::future<DeleteRotationPasswordOutcome> DeleteRotationPasswordOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DeleteRotationPasswordRequest&, DeleteRotationPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRotationPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTimeWindowResponse> DeleteTimeWindowOutcome;
                typedef std::future<DeleteTimeWindowOutcome> DeleteTimeWindowOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DeleteTimeWindowRequest&, DeleteTimeWindowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTimeWindowAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccountPrivilegesResponse> DescribeAccountPrivilegesOutcome;
                typedef std::future<DescribeAccountPrivilegesOutcome> DescribeAccountPrivilegesOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeAccountPrivilegesRequest&, DescribeAccountPrivilegesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountPrivilegesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccountsResponse> DescribeAccountsOutcome;
                typedef std::future<DescribeAccountsOutcome> DescribeAccountsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeAccountsRequest&, DescribeAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAsyncRequestInfoResponse> DescribeAsyncRequestInfoOutcome;
                typedef std::future<DescribeAsyncRequestInfoOutcome> DescribeAsyncRequestInfoOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeAsyncRequestInfoRequest&, DescribeAsyncRequestInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAsyncRequestInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAuditConfigResponse> DescribeAuditConfigOutcome;
                typedef std::future<DescribeAuditConfigOutcome> DescribeAuditConfigOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeAuditConfigRequest&, DescribeAuditConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuditConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAuditInstanceListResponse> DescribeAuditInstanceListOutcome;
                typedef std::future<DescribeAuditInstanceListOutcome> DescribeAuditInstanceListOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeAuditInstanceListRequest&, DescribeAuditInstanceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuditInstanceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAuditLogFilesResponse> DescribeAuditLogFilesOutcome;
                typedef std::future<DescribeAuditLogFilesOutcome> DescribeAuditLogFilesOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeAuditLogFilesRequest&, DescribeAuditLogFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuditLogFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAuditLogsResponse> DescribeAuditLogsOutcome;
                typedef std::future<DescribeAuditLogsOutcome> DescribeAuditLogsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeAuditLogsRequest&, DescribeAuditLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuditLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAuditPoliciesResponse> DescribeAuditPoliciesOutcome;
                typedef std::future<DescribeAuditPoliciesOutcome> DescribeAuditPoliciesOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeAuditPoliciesRequest&, DescribeAuditPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuditPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAuditRuleTemplateModifyHistoryResponse> DescribeAuditRuleTemplateModifyHistoryOutcome;
                typedef std::future<DescribeAuditRuleTemplateModifyHistoryOutcome> DescribeAuditRuleTemplateModifyHistoryOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeAuditRuleTemplateModifyHistoryRequest&, DescribeAuditRuleTemplateModifyHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuditRuleTemplateModifyHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAuditRuleTemplatesResponse> DescribeAuditRuleTemplatesOutcome;
                typedef std::future<DescribeAuditRuleTemplatesOutcome> DescribeAuditRuleTemplatesOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeAuditRuleTemplatesRequest&, DescribeAuditRuleTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuditRuleTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAuditRulesResponse> DescribeAuditRulesOutcome;
                typedef std::future<DescribeAuditRulesOutcome> DescribeAuditRulesOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeAuditRulesRequest&, DescribeAuditRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuditRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupConfigResponse> DescribeBackupConfigOutcome;
                typedef std::future<DescribeBackupConfigOutcome> DescribeBackupConfigOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeBackupConfigRequest&, DescribeBackupConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupDecryptionKeyResponse> DescribeBackupDecryptionKeyOutcome;
                typedef std::future<DescribeBackupDecryptionKeyOutcome> DescribeBackupDecryptionKeyOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeBackupDecryptionKeyRequest&, DescribeBackupDecryptionKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupDecryptionKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupDownloadRestrictionResponse> DescribeBackupDownloadRestrictionOutcome;
                typedef std::future<DescribeBackupDownloadRestrictionOutcome> DescribeBackupDownloadRestrictionOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeBackupDownloadRestrictionRequest&, DescribeBackupDownloadRestrictionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupDownloadRestrictionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupEncryptionStatusResponse> DescribeBackupEncryptionStatusOutcome;
                typedef std::future<DescribeBackupEncryptionStatusOutcome> DescribeBackupEncryptionStatusOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeBackupEncryptionStatusRequest&, DescribeBackupEncryptionStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupEncryptionStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupOverviewResponse> DescribeBackupOverviewOutcome;
                typedef std::future<DescribeBackupOverviewOutcome> DescribeBackupOverviewOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeBackupOverviewRequest&, DescribeBackupOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupSummariesResponse> DescribeBackupSummariesOutcome;
                typedef std::future<DescribeBackupSummariesOutcome> DescribeBackupSummariesOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeBackupSummariesRequest&, DescribeBackupSummariesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupSummariesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupsResponse> DescribeBackupsOutcome;
                typedef std::future<DescribeBackupsOutcome> DescribeBackupsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeBackupsRequest&, DescribeBackupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBinlogBackupOverviewResponse> DescribeBinlogBackupOverviewOutcome;
                typedef std::future<DescribeBinlogBackupOverviewOutcome> DescribeBinlogBackupOverviewOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeBinlogBackupOverviewRequest&, DescribeBinlogBackupOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBinlogBackupOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBinlogsResponse> DescribeBinlogsOutcome;
                typedef std::future<DescribeBinlogsOutcome> DescribeBinlogsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeBinlogsRequest&, DescribeBinlogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBinlogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCPUExpandStrategyInfoResponse> DescribeCPUExpandStrategyInfoOutcome;
                typedef std::future<DescribeCPUExpandStrategyInfoOutcome> DescribeCPUExpandStrategyInfoOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeCPUExpandStrategyInfoRequest&, DescribeCPUExpandStrategyInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCPUExpandStrategyInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCdbProxyInfoResponse> DescribeCdbProxyInfoOutcome;
                typedef std::future<DescribeCdbProxyInfoOutcome> DescribeCdbProxyInfoOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeCdbProxyInfoRequest&, DescribeCdbProxyInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdbProxyInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCdbZoneConfigResponse> DescribeCdbZoneConfigOutcome;
                typedef std::future<DescribeCdbZoneConfigOutcome> DescribeCdbZoneConfigOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeCdbZoneConfigRequest&, DescribeCdbZoneConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdbZoneConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloneListResponse> DescribeCloneListOutcome;
                typedef std::future<DescribeCloneListOutcome> DescribeCloneListOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeCloneListRequest&, DescribeCloneListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloneListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterInfoResponse> DescribeClusterInfoOutcome;
                typedef std::future<DescribeClusterInfoOutcome> DescribeClusterInfoOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeClusterInfoRequest&, DescribeClusterInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCpuExpandHistoryResponse> DescribeCpuExpandHistoryOutcome;
                typedef std::future<DescribeCpuExpandHistoryOutcome> DescribeCpuExpandHistoryOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeCpuExpandHistoryRequest&, DescribeCpuExpandHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCpuExpandHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBFeaturesResponse> DescribeDBFeaturesOutcome;
                typedef std::future<DescribeDBFeaturesOutcome> DescribeDBFeaturesOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeDBFeaturesRequest&, DescribeDBFeaturesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBFeaturesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBImportRecordsResponse> DescribeDBImportRecordsOutcome;
                typedef std::future<DescribeDBImportRecordsOutcome> DescribeDBImportRecordsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeDBImportRecordsRequest&, DescribeDBImportRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBImportRecordsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBInstanceCharsetResponse> DescribeDBInstanceCharsetOutcome;
                typedef std::future<DescribeDBInstanceCharsetOutcome> DescribeDBInstanceCharsetOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeDBInstanceCharsetRequest&, DescribeDBInstanceCharsetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceCharsetAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBInstanceConfigResponse> DescribeDBInstanceConfigOutcome;
                typedef std::future<DescribeDBInstanceConfigOutcome> DescribeDBInstanceConfigOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeDBInstanceConfigRequest&, DescribeDBInstanceConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBInstanceGTIDResponse> DescribeDBInstanceGTIDOutcome;
                typedef std::future<DescribeDBInstanceGTIDOutcome> DescribeDBInstanceGTIDOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeDBInstanceGTIDRequest&, DescribeDBInstanceGTIDOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceGTIDAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBInstanceInfoResponse> DescribeDBInstanceInfoOutcome;
                typedef std::future<DescribeDBInstanceInfoOutcome> DescribeDBInstanceInfoOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeDBInstanceInfoRequest&, DescribeDBInstanceInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBInstanceLogToCLSResponse> DescribeDBInstanceLogToCLSOutcome;
                typedef std::future<DescribeDBInstanceLogToCLSOutcome> DescribeDBInstanceLogToCLSOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeDBInstanceLogToCLSRequest&, DescribeDBInstanceLogToCLSOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceLogToCLSAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBInstanceRebootTimeResponse> DescribeDBInstanceRebootTimeOutcome;
                typedef std::future<DescribeDBInstanceRebootTimeOutcome> DescribeDBInstanceRebootTimeOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeDBInstanceRebootTimeRequest&, DescribeDBInstanceRebootTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceRebootTimeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBInstancesResponse> DescribeDBInstancesOutcome;
                typedef std::future<DescribeDBInstancesOutcome> DescribeDBInstancesOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeDBInstancesRequest&, DescribeDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBPriceResponse> DescribeDBPriceOutcome;
                typedef std::future<DescribeDBPriceOutcome> DescribeDBPriceOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeDBPriceRequest&, DescribeDBPriceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBPriceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBSecurityGroupsResponse> DescribeDBSecurityGroupsOutcome;
                typedef std::future<DescribeDBSecurityGroupsOutcome> DescribeDBSecurityGroupsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeDBSecurityGroupsRequest&, DescribeDBSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBSwitchRecordsResponse> DescribeDBSwitchRecordsOutcome;
                typedef std::future<DescribeDBSwitchRecordsOutcome> DescribeDBSwitchRecordsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeDBSwitchRecordsRequest&, DescribeDBSwitchRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBSwitchRecordsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataBackupOverviewResponse> DescribeDataBackupOverviewOutcome;
                typedef std::future<DescribeDataBackupOverviewOutcome> DescribeDataBackupOverviewOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeDataBackupOverviewRequest&, DescribeDataBackupOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataBackupOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatabasesResponse> DescribeDatabasesOutcome;
                typedef std::future<DescribeDatabasesOutcome> DescribeDatabasesOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeDatabasesRequest&, DescribeDatabasesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabasesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDefaultParamsResponse> DescribeDefaultParamsOutcome;
                typedef std::future<DescribeDefaultParamsOutcome> DescribeDefaultParamsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeDefaultParamsRequest&, DescribeDefaultParamsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDefaultParamsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeployGroupListResponse> DescribeDeployGroupListOutcome;
                typedef std::future<DescribeDeployGroupListOutcome> DescribeDeployGroupListOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeDeployGroupListRequest&, DescribeDeployGroupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeployGroupListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceMonitorInfoResponse> DescribeDeviceMonitorInfoOutcome;
                typedef std::future<DescribeDeviceMonitorInfoOutcome> DescribeDeviceMonitorInfoOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeDeviceMonitorInfoRequest&, DescribeDeviceMonitorInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceMonitorInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeErrorLogDataResponse> DescribeErrorLogDataOutcome;
                typedef std::future<DescribeErrorLogDataOutcome> DescribeErrorLogDataOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeErrorLogDataRequest&, DescribeErrorLogDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeErrorLogDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceAlarmEventsResponse> DescribeInstanceAlarmEventsOutcome;
                typedef std::future<DescribeInstanceAlarmEventsOutcome> DescribeInstanceAlarmEventsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeInstanceAlarmEventsRequest&, DescribeInstanceAlarmEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAlarmEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceParamRecordsResponse> DescribeInstanceParamRecordsOutcome;
                typedef std::future<DescribeInstanceParamRecordsOutcome> DescribeInstanceParamRecordsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeInstanceParamRecordsRequest&, DescribeInstanceParamRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceParamRecordsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceParamsResponse> DescribeInstanceParamsOutcome;
                typedef std::future<DescribeInstanceParamsOutcome> DescribeInstanceParamsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeInstanceParamsRequest&, DescribeInstanceParamsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceParamsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceUpgradeCheckJobResponse> DescribeInstanceUpgradeCheckJobOutcome;
                typedef std::future<DescribeInstanceUpgradeCheckJobOutcome> DescribeInstanceUpgradeCheckJobOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeInstanceUpgradeCheckJobRequest&, DescribeInstanceUpgradeCheckJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceUpgradeCheckJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceUpgradeTypeResponse> DescribeInstanceUpgradeTypeOutcome;
                typedef std::future<DescribeInstanceUpgradeTypeOutcome> DescribeInstanceUpgradeTypeOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeInstanceUpgradeTypeRequest&, DescribeInstanceUpgradeTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceUpgradeTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLocalBinlogConfigResponse> DescribeLocalBinlogConfigOutcome;
                typedef std::future<DescribeLocalBinlogConfigOutcome> DescribeLocalBinlogConfigOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeLocalBinlogConfigRequest&, DescribeLocalBinlogConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLocalBinlogConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeParamTemplateInfoResponse> DescribeParamTemplateInfoOutcome;
                typedef std::future<DescribeParamTemplateInfoOutcome> DescribeParamTemplateInfoOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeParamTemplateInfoRequest&, DescribeParamTemplateInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeParamTemplateInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeParamTemplatesResponse> DescribeParamTemplatesOutcome;
                typedef std::future<DescribeParamTemplatesOutcome> DescribeParamTemplatesOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeParamTemplatesRequest&, DescribeParamTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeParamTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProjectSecurityGroupsResponse> DescribeProjectSecurityGroupsOutcome;
                typedef std::future<DescribeProjectSecurityGroupsOutcome> DescribeProjectSecurityGroupsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeProjectSecurityGroupsRequest&, DescribeProjectSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProxyCustomConfResponse> DescribeProxyCustomConfOutcome;
                typedef std::future<DescribeProxyCustomConfOutcome> DescribeProxyCustomConfOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeProxyCustomConfRequest&, DescribeProxyCustomConfOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProxyCustomConfAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProxySupportParamResponse> DescribeProxySupportParamOutcome;
                typedef std::future<DescribeProxySupportParamOutcome> DescribeProxySupportParamOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeProxySupportParamRequest&, DescribeProxySupportParamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProxySupportParamAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRemoteBackupConfigResponse> DescribeRemoteBackupConfigOutcome;
                typedef std::future<DescribeRemoteBackupConfigOutcome> DescribeRemoteBackupConfigOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeRemoteBackupConfigRequest&, DescribeRemoteBackupConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRemoteBackupConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRoGroupsResponse> DescribeRoGroupsOutcome;
                typedef std::future<DescribeRoGroupsOutcome> DescribeRoGroupsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeRoGroupsRequest&, DescribeRoGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRoMinScaleResponse> DescribeRoMinScaleOutcome;
                typedef std::future<DescribeRoMinScaleOutcome> DescribeRoMinScaleOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeRoMinScaleRequest&, DescribeRoMinScaleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoMinScaleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRollbackRangeTimeResponse> DescribeRollbackRangeTimeOutcome;
                typedef std::future<DescribeRollbackRangeTimeOutcome> DescribeRollbackRangeTimeOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeRollbackRangeTimeRequest&, DescribeRollbackRangeTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRollbackRangeTimeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRollbackTaskDetailResponse> DescribeRollbackTaskDetailOutcome;
                typedef std::future<DescribeRollbackTaskDetailOutcome> DescribeRollbackTaskDetailOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeRollbackTaskDetailRequest&, DescribeRollbackTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRollbackTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSSLStatusResponse> DescribeSSLStatusOutcome;
                typedef std::future<DescribeSSLStatusOutcome> DescribeSSLStatusOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeSSLStatusRequest&, DescribeSSLStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSSLStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSlowLogDataResponse> DescribeSlowLogDataOutcome;
                typedef std::future<DescribeSlowLogDataOutcome> DescribeSlowLogDataOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeSlowLogDataRequest&, DescribeSlowLogDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowLogDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSlowLogsResponse> DescribeSlowLogsOutcome;
                typedef std::future<DescribeSlowLogsOutcome> DescribeSlowLogsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeSlowLogsRequest&, DescribeSlowLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSupportedPrivilegesResponse> DescribeSupportedPrivilegesOutcome;
                typedef std::future<DescribeSupportedPrivilegesOutcome> DescribeSupportedPrivilegesOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeSupportedPrivilegesRequest&, DescribeSupportedPrivilegesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSupportedPrivilegesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTableColumnsResponse> DescribeTableColumnsOutcome;
                typedef std::future<DescribeTableColumnsOutcome> DescribeTableColumnsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeTableColumnsRequest&, DescribeTableColumnsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTableColumnsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTablesResponse> DescribeTablesOutcome;
                typedef std::future<DescribeTablesOutcome> DescribeTablesOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeTablesRequest&, DescribeTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTablesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTagsOfInstanceIdsResponse> DescribeTagsOfInstanceIdsOutcome;
                typedef std::future<DescribeTagsOfInstanceIdsOutcome> DescribeTagsOfInstanceIdsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeTagsOfInstanceIdsRequest&, DescribeTagsOfInstanceIdsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagsOfInstanceIdsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTasksResponse> DescribeTasksOutcome;
                typedef std::future<DescribeTasksOutcome> DescribeTasksOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeTasksRequest&, DescribeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTimeWindowResponse> DescribeTimeWindowOutcome;
                typedef std::future<DescribeTimeWindowOutcome> DescribeTimeWindowOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeTimeWindowRequest&, DescribeTimeWindowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTimeWindowAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUploadedFilesResponse> DescribeUploadedFilesOutcome;
                typedef std::future<DescribeUploadedFilesOutcome> DescribeUploadedFilesOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeUploadedFilesRequest&, DescribeUploadedFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUploadedFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateSecurityGroupsResponse> DisassociateSecurityGroupsOutcome;
                typedef std::future<DisassociateSecurityGroupsOutcome> DisassociateSecurityGroupsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DisassociateSecurityGroupsRequest&, DisassociateSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceUpgradeInstancesResponse> InquiryPriceUpgradeInstancesOutcome;
                typedef std::future<InquiryPriceUpgradeInstancesOutcome> InquiryPriceUpgradeInstancesOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::InquiryPriceUpgradeInstancesRequest&, InquiryPriceUpgradeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceUpgradeInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::IsolateDBInstanceResponse> IsolateDBInstanceOutcome;
                typedef std::future<IsolateDBInstanceOutcome> IsolateDBInstanceOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::IsolateDBInstanceRequest&, IsolateDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IsolateDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccountDescriptionResponse> ModifyAccountDescriptionOutcome;
                typedef std::future<ModifyAccountDescriptionOutcome> ModifyAccountDescriptionOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyAccountDescriptionRequest&, ModifyAccountDescriptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountDescriptionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccountHostResponse> ModifyAccountHostOutcome;
                typedef std::future<ModifyAccountHostOutcome> ModifyAccountHostOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyAccountHostRequest&, ModifyAccountHostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountHostAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccountMaxUserConnectionsResponse> ModifyAccountMaxUserConnectionsOutcome;
                typedef std::future<ModifyAccountMaxUserConnectionsOutcome> ModifyAccountMaxUserConnectionsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyAccountMaxUserConnectionsRequest&, ModifyAccountMaxUserConnectionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountMaxUserConnectionsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccountPasswordResponse> ModifyAccountPasswordOutcome;
                typedef std::future<ModifyAccountPasswordOutcome> ModifyAccountPasswordOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyAccountPasswordRequest&, ModifyAccountPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccountPrivilegesResponse> ModifyAccountPrivilegesOutcome;
                typedef std::future<ModifyAccountPrivilegesOutcome> ModifyAccountPrivilegesOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyAccountPrivilegesRequest&, ModifyAccountPrivilegesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountPrivilegesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAuditConfigResponse> ModifyAuditConfigOutcome;
                typedef std::future<ModifyAuditConfigOutcome> ModifyAuditConfigOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyAuditConfigRequest&, ModifyAuditConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAuditConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAuditRuleResponse> ModifyAuditRuleOutcome;
                typedef std::future<ModifyAuditRuleOutcome> ModifyAuditRuleOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyAuditRuleRequest&, ModifyAuditRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAuditRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAuditRuleTemplatesResponse> ModifyAuditRuleTemplatesOutcome;
                typedef std::future<ModifyAuditRuleTemplatesOutcome> ModifyAuditRuleTemplatesOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyAuditRuleTemplatesRequest&, ModifyAuditRuleTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAuditRuleTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAuditServiceResponse> ModifyAuditServiceOutcome;
                typedef std::future<ModifyAuditServiceOutcome> ModifyAuditServiceOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyAuditServiceRequest&, ModifyAuditServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAuditServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAutoRenewFlagResponse> ModifyAutoRenewFlagOutcome;
                typedef std::future<ModifyAutoRenewFlagOutcome> ModifyAutoRenewFlagOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyAutoRenewFlagRequest&, ModifyAutoRenewFlagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAutoRenewFlagAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBackupConfigResponse> ModifyBackupConfigOutcome;
                typedef std::future<ModifyBackupConfigOutcome> ModifyBackupConfigOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyBackupConfigRequest&, ModifyBackupConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBackupDownloadRestrictionResponse> ModifyBackupDownloadRestrictionOutcome;
                typedef std::future<ModifyBackupDownloadRestrictionOutcome> ModifyBackupDownloadRestrictionOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyBackupDownloadRestrictionRequest&, ModifyBackupDownloadRestrictionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupDownloadRestrictionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBackupEncryptionStatusResponse> ModifyBackupEncryptionStatusOutcome;
                typedef std::future<ModifyBackupEncryptionStatusOutcome> ModifyBackupEncryptionStatusOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyBackupEncryptionStatusRequest&, ModifyBackupEncryptionStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupEncryptionStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCdbProxyAddressDescResponse> ModifyCdbProxyAddressDescOutcome;
                typedef std::future<ModifyCdbProxyAddressDescOutcome> ModifyCdbProxyAddressDescOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyCdbProxyAddressDescRequest&, ModifyCdbProxyAddressDescOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCdbProxyAddressDescAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCdbProxyAddressVipAndVPortResponse> ModifyCdbProxyAddressVipAndVPortOutcome;
                typedef std::future<ModifyCdbProxyAddressVipAndVPortOutcome> ModifyCdbProxyAddressVipAndVPortOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyCdbProxyAddressVipAndVPortRequest&, ModifyCdbProxyAddressVipAndVPortOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCdbProxyAddressVipAndVPortAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCdbProxyParamResponse> ModifyCdbProxyParamOutcome;
                typedef std::future<ModifyCdbProxyParamOutcome> ModifyCdbProxyParamOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyCdbProxyParamRequest&, ModifyCdbProxyParamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCdbProxyParamAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceLogToCLSResponse> ModifyDBInstanceLogToCLSOutcome;
                typedef std::future<ModifyDBInstanceLogToCLSOutcome> ModifyDBInstanceLogToCLSOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyDBInstanceLogToCLSRequest&, ModifyDBInstanceLogToCLSOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceLogToCLSAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceNameResponse> ModifyDBInstanceNameOutcome;
                typedef std::future<ModifyDBInstanceNameOutcome> ModifyDBInstanceNameOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyDBInstanceNameRequest&, ModifyDBInstanceNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceNameAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceProjectResponse> ModifyDBInstanceProjectOutcome;
                typedef std::future<ModifyDBInstanceProjectOutcome> ModifyDBInstanceProjectOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyDBInstanceProjectRequest&, ModifyDBInstanceProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceReadOnlyStatusResponse> ModifyDBInstanceReadOnlyStatusOutcome;
                typedef std::future<ModifyDBInstanceReadOnlyStatusOutcome> ModifyDBInstanceReadOnlyStatusOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyDBInstanceReadOnlyStatusRequest&, ModifyDBInstanceReadOnlyStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceReadOnlyStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceSecurityGroupsResponse> ModifyDBInstanceSecurityGroupsOutcome;
                typedef std::future<ModifyDBInstanceSecurityGroupsOutcome> ModifyDBInstanceSecurityGroupsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyDBInstanceSecurityGroupsRequest&, ModifyDBInstanceSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceVipVportResponse> ModifyDBInstanceVipVportOutcome;
                typedef std::future<ModifyDBInstanceVipVportOutcome> ModifyDBInstanceVipVportOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyDBInstanceVipVportRequest&, ModifyDBInstanceVipVportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceVipVportAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceParamResponse> ModifyInstanceParamOutcome;
                typedef std::future<ModifyInstanceParamOutcome> ModifyInstanceParamOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyInstanceParamRequest&, ModifyInstanceParamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceParamAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstancePasswordComplexityResponse> ModifyInstancePasswordComplexityOutcome;
                typedef std::future<ModifyInstancePasswordComplexityOutcome> ModifyInstancePasswordComplexityOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyInstancePasswordComplexityRequest&, ModifyInstancePasswordComplexityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstancePasswordComplexityAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceTagResponse> ModifyInstanceTagOutcome;
                typedef std::future<ModifyInstanceTagOutcome> ModifyInstanceTagOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyInstanceTagRequest&, ModifyInstanceTagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceTagAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLocalBinlogConfigResponse> ModifyLocalBinlogConfigOutcome;
                typedef std::future<ModifyLocalBinlogConfigOutcome> ModifyLocalBinlogConfigOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyLocalBinlogConfigRequest&, ModifyLocalBinlogConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLocalBinlogConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNameOrDescByDpIdResponse> ModifyNameOrDescByDpIdOutcome;
                typedef std::future<ModifyNameOrDescByDpIdOutcome> ModifyNameOrDescByDpIdOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyNameOrDescByDpIdRequest&, ModifyNameOrDescByDpIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNameOrDescByDpIdAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyParamTemplateResponse> ModifyParamTemplateOutcome;
                typedef std::future<ModifyParamTemplateOutcome> ModifyParamTemplateOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyParamTemplateRequest&, ModifyParamTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyParamTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyProtectModeResponse> ModifyProtectModeOutcome;
                typedef std::future<ModifyProtectModeOutcome> ModifyProtectModeOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyProtectModeRequest&, ModifyProtectModeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProtectModeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRemoteBackupConfigResponse> ModifyRemoteBackupConfigOutcome;
                typedef std::future<ModifyRemoteBackupConfigOutcome> ModifyRemoteBackupConfigOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyRemoteBackupConfigRequest&, ModifyRemoteBackupConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRemoteBackupConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRoGroupInfoResponse> ModifyRoGroupInfoOutcome;
                typedef std::future<ModifyRoGroupInfoOutcome> ModifyRoGroupInfoOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyRoGroupInfoRequest&, ModifyRoGroupInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRoGroupInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTimeWindowResponse> ModifyTimeWindowOutcome;
                typedef std::future<ModifyTimeWindowOutcome> ModifyTimeWindowOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyTimeWindowRequest&, ModifyTimeWindowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTimeWindowAsyncHandler;
                typedef Outcome<Core::Error, Model::OfflineIsolatedInstancesResponse> OfflineIsolatedInstancesOutcome;
                typedef std::future<OfflineIsolatedInstancesOutcome> OfflineIsolatedInstancesOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::OfflineIsolatedInstancesRequest&, OfflineIsolatedInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OfflineIsolatedInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenAuditServiceResponse> OpenAuditServiceOutcome;
                typedef std::future<OpenAuditServiceOutcome> OpenAuditServiceOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::OpenAuditServiceRequest&, OpenAuditServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenAuditServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenDBInstanceEncryptionResponse> OpenDBInstanceEncryptionOutcome;
                typedef std::future<OpenDBInstanceEncryptionOutcome> OpenDBInstanceEncryptionOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::OpenDBInstanceEncryptionRequest&, OpenDBInstanceEncryptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenDBInstanceEncryptionAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenDBInstanceGTIDResponse> OpenDBInstanceGTIDOutcome;
                typedef std::future<OpenDBInstanceGTIDOutcome> OpenDBInstanceGTIDOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::OpenDBInstanceGTIDRequest&, OpenDBInstanceGTIDOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenDBInstanceGTIDAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenSSLResponse> OpenSSLOutcome;
                typedef std::future<OpenSSLOutcome> OpenSSLOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::OpenSSLRequest&, OpenSSLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenSSLAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenWanServiceResponse> OpenWanServiceOutcome;
                typedef std::future<OpenWanServiceOutcome> OpenWanServiceOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::OpenWanServiceRequest&, OpenWanServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenWanServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::ReleaseIsolatedDBInstancesResponse> ReleaseIsolatedDBInstancesOutcome;
                typedef std::future<ReleaseIsolatedDBInstancesOutcome> ReleaseIsolatedDBInstancesOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ReleaseIsolatedDBInstancesRequest&, ReleaseIsolatedDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseIsolatedDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::ReloadBalanceProxyNodeResponse> ReloadBalanceProxyNodeOutcome;
                typedef std::future<ReloadBalanceProxyNodeOutcome> ReloadBalanceProxyNodeOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ReloadBalanceProxyNodeRequest&, ReloadBalanceProxyNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReloadBalanceProxyNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewDBInstanceResponse> RenewDBInstanceOutcome;
                typedef std::future<RenewDBInstanceOutcome> RenewDBInstanceOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::RenewDBInstanceRequest&, RenewDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetPasswordResponse> ResetPasswordOutcome;
                typedef std::future<ResetPasswordOutcome> ResetPasswordOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ResetPasswordRequest&, ResetPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetRootAccountResponse> ResetRootAccountOutcome;
                typedef std::future<ResetRootAccountOutcome> ResetRootAccountOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ResetRootAccountRequest&, ResetRootAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetRootAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::RestartDBInstancesResponse> RestartDBInstancesOutcome;
                typedef std::future<RestartDBInstancesOutcome> RestartDBInstancesOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::RestartDBInstancesRequest&, RestartDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestartDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::StartBatchRollbackResponse> StartBatchRollbackOutcome;
                typedef std::future<StartBatchRollbackOutcome> StartBatchRollbackOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::StartBatchRollbackRequest&, StartBatchRollbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartBatchRollbackAsyncHandler;
                typedef Outcome<Core::Error, Model::StartCpuExpandResponse> StartCpuExpandOutcome;
                typedef std::future<StartCpuExpandOutcome> StartCpuExpandOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::StartCpuExpandRequest&, StartCpuExpandOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartCpuExpandAsyncHandler;
                typedef Outcome<Core::Error, Model::StartReplicationResponse> StartReplicationOutcome;
                typedef std::future<StartReplicationOutcome> StartReplicationOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::StartReplicationRequest&, StartReplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartReplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::StopCpuExpandResponse> StopCpuExpandOutcome;
                typedef std::future<StopCpuExpandOutcome> StopCpuExpandOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::StopCpuExpandRequest&, StopCpuExpandOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopCpuExpandAsyncHandler;
                typedef Outcome<Core::Error, Model::StopDBImportJobResponse> StopDBImportJobOutcome;
                typedef std::future<StopDBImportJobOutcome> StopDBImportJobOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::StopDBImportJobRequest&, StopDBImportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopDBImportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::StopReplicationResponse> StopReplicationOutcome;
                typedef std::future<StopReplicationOutcome> StopReplicationOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::StopReplicationRequest&, StopReplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopReplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::StopRollbackResponse> StopRollbackOutcome;
                typedef std::future<StopRollbackOutcome> StopRollbackOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::StopRollbackRequest&, StopRollbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopRollbackAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitInstanceUpgradeCheckJobResponse> SubmitInstanceUpgradeCheckJobOutcome;
                typedef std::future<SubmitInstanceUpgradeCheckJobOutcome> SubmitInstanceUpgradeCheckJobOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::SubmitInstanceUpgradeCheckJobRequest&, SubmitInstanceUpgradeCheckJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitInstanceUpgradeCheckJobAsyncHandler;
                typedef Outcome<Core::Error, Model::SwitchCDBProxyResponse> SwitchCDBProxyOutcome;
                typedef std::future<SwitchCDBProxyOutcome> SwitchCDBProxyOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::SwitchCDBProxyRequest&, SwitchCDBProxyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SwitchCDBProxyAsyncHandler;
                typedef Outcome<Core::Error, Model::SwitchDBInstanceMasterSlaveResponse> SwitchDBInstanceMasterSlaveOutcome;
                typedef std::future<SwitchDBInstanceMasterSlaveOutcome> SwitchDBInstanceMasterSlaveOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::SwitchDBInstanceMasterSlaveRequest&, SwitchDBInstanceMasterSlaveOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SwitchDBInstanceMasterSlaveAsyncHandler;
                typedef Outcome<Core::Error, Model::SwitchDrInstanceToMasterResponse> SwitchDrInstanceToMasterOutcome;
                typedef std::future<SwitchDrInstanceToMasterOutcome> SwitchDrInstanceToMasterOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::SwitchDrInstanceToMasterRequest&, SwitchDrInstanceToMasterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SwitchDrInstanceToMasterAsyncHandler;
                typedef Outcome<Core::Error, Model::SwitchForUpgradeResponse> SwitchForUpgradeOutcome;
                typedef std::future<SwitchForUpgradeOutcome> SwitchForUpgradeOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::SwitchForUpgradeRequest&, SwitchForUpgradeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SwitchForUpgradeAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeCDBProxyVersionResponse> UpgradeCDBProxyVersionOutcome;
                typedef std::future<UpgradeCDBProxyVersionOutcome> UpgradeCDBProxyVersionOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::UpgradeCDBProxyVersionRequest&, UpgradeCDBProxyVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeCDBProxyVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeDBInstanceResponse> UpgradeDBInstanceOutcome;
                typedef std::future<UpgradeDBInstanceOutcome> UpgradeDBInstanceOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::UpgradeDBInstanceRequest&, UpgradeDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeDBInstanceEngineVersionResponse> UpgradeDBInstanceEngineVersionOutcome;
                typedef std::future<UpgradeDBInstanceEngineVersionOutcome> UpgradeDBInstanceEngineVersionOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::UpgradeDBInstanceEngineVersionRequest&, UpgradeDBInstanceEngineVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDBInstanceEngineVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::VerifyRootAccountResponse> VerifyRootAccountOutcome;
                typedef std::future<VerifyRootAccountOutcome> VerifyRootAccountOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::VerifyRootAccountRequest&, VerifyRootAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VerifyRootAccountAsyncHandler;



                /**
                 *本接口（AddTimeWindow）用于添加云数据库实例的维护时间窗口，以指定实例在哪些时间段可以自动执行切换访问操作。
                 * @param req AddTimeWindowRequest
                 * @return AddTimeWindowOutcome
                 */
                AddTimeWindowOutcome AddTimeWindow(const Model::AddTimeWindowRequest &request);
                void AddTimeWindowAsync(const Model::AddTimeWindowRequest& request, const AddTimeWindowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddTimeWindowOutcomeCallable AddTimeWindowCallable(const Model::AddTimeWindowRequest& request);

                /**
                 *调整数据库代理配置
                 * @param req AdjustCdbProxyRequest
                 * @return AdjustCdbProxyOutcome
                 */
                AdjustCdbProxyOutcome AdjustCdbProxy(const Model::AdjustCdbProxyRequest &request);
                void AdjustCdbProxyAsync(const Model::AdjustCdbProxyRequest& request, const AdjustCdbProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AdjustCdbProxyOutcomeCallable AdjustCdbProxyCallable(const Model::AdjustCdbProxyRequest& request);

                /**
                 *本接口（AdjustCdbProxyAddress）用于调整数据库代理地址配置。
                 * @param req AdjustCdbProxyAddressRequest
                 * @return AdjustCdbProxyAddressOutcome
                 */
                AdjustCdbProxyAddressOutcome AdjustCdbProxyAddress(const Model::AdjustCdbProxyAddressRequest &request);
                void AdjustCdbProxyAddressAsync(const Model::AdjustCdbProxyAddressRequest& request, const AdjustCdbProxyAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AdjustCdbProxyAddressOutcomeCallable AdjustCdbProxyAddressCallable(const Model::AdjustCdbProxyAddressRequest& request);

                /**
                 *本接口（AnalyzeAuditLogs）用于在不同过滤条件下的审计日志结果集中，选定特定的数据列进行聚合统计。
                 * @param req AnalyzeAuditLogsRequest
                 * @return AnalyzeAuditLogsOutcome
                 */
                AnalyzeAuditLogsOutcome AnalyzeAuditLogs(const Model::AnalyzeAuditLogsRequest &request);
                void AnalyzeAuditLogsAsync(const Model::AnalyzeAuditLogsRequest& request, const AnalyzeAuditLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AnalyzeAuditLogsOutcomeCallable AnalyzeAuditLogsCallable(const Model::AnalyzeAuditLogsRequest& request);

                /**
                 *本接口(AssociateSecurityGroups)用于安全组批量绑定实例。
                 * @param req AssociateSecurityGroupsRequest
                 * @return AssociateSecurityGroupsOutcome
                 */
                AssociateSecurityGroupsOutcome AssociateSecurityGroups(const Model::AssociateSecurityGroupsRequest &request);
                void AssociateSecurityGroupsAsync(const Model::AssociateSecurityGroupsRequest& request, const AssociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateSecurityGroupsOutcomeCallable AssociateSecurityGroupsCallable(const Model::AssociateSecurityGroupsRequest& request);

                /**
                 *本接口(BalanceRoGroupLoad)用于重新均衡 RO 组内实例的负载。注意，RO 组内 RO 实例会有一次数据库连接瞬断，请确保应用程序能重连数据库，谨慎操作。
                 * @param req BalanceRoGroupLoadRequest
                 * @return BalanceRoGroupLoadOutcome
                 */
                BalanceRoGroupLoadOutcome BalanceRoGroupLoad(const Model::BalanceRoGroupLoadRequest &request);
                void BalanceRoGroupLoadAsync(const Model::BalanceRoGroupLoadRequest& request, const BalanceRoGroupLoadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BalanceRoGroupLoadOutcomeCallable BalanceRoGroupLoadCallable(const Model::BalanceRoGroupLoadRequest& request);

                /**
                 *本接口（CheckMigrateCluster）用于高可用实例一键迁移到云盘版校验。
                 * @param req CheckMigrateClusterRequest
                 * @return CheckMigrateClusterOutcome
                 */
                CheckMigrateClusterOutcome CheckMigrateCluster(const Model::CheckMigrateClusterRequest &request);
                void CheckMigrateClusterAsync(const Model::CheckMigrateClusterRequest& request, const CheckMigrateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckMigrateClusterOutcomeCallable CheckMigrateClusterCallable(const Model::CheckMigrateClusterRequest& request);

                /**
                 *实例关闭审计服务
                 * @param req CloseAuditServiceRequest
                 * @return CloseAuditServiceOutcome
                 */
                CloseAuditServiceOutcome CloseAuditService(const Model::CloseAuditServiceRequest &request);
                void CloseAuditServiceAsync(const Model::CloseAuditServiceRequest& request, const CloseAuditServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloseAuditServiceOutcomeCallable CloseAuditServiceCallable(const Model::CloseAuditServiceRequest& request);

                /**
                 *本接口（CloseCDBProxy）用于关闭数据库代理。
                 * @param req CloseCDBProxyRequest
                 * @return CloseCDBProxyOutcome
                 */
                CloseCDBProxyOutcome CloseCDBProxy(const Model::CloseCDBProxyRequest &request);
                void CloseCDBProxyAsync(const Model::CloseCDBProxyRequest& request, const CloseCDBProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloseCDBProxyOutcomeCallable CloseCDBProxyCallable(const Model::CloseCDBProxyRequest& request);

                /**
                 *请求关闭数据库代理地址
                 * @param req CloseCdbProxyAddressRequest
                 * @return CloseCdbProxyAddressOutcome
                 */
                CloseCdbProxyAddressOutcome CloseCdbProxyAddress(const Model::CloseCdbProxyAddressRequest &request);
                void CloseCdbProxyAddressAsync(const Model::CloseCdbProxyAddressRequest& request, const CloseCdbProxyAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloseCdbProxyAddressOutcomeCallable CloseCdbProxyAddressCallable(const Model::CloseCdbProxyAddressRequest& request);

                /**
                 *关闭SSL连接功能。
                 * @param req CloseSSLRequest
                 * @return CloseSSLOutcome
                 */
                CloseSSLOutcome CloseSSL(const Model::CloseSSLRequest &request);
                void CloseSSLAsync(const Model::CloseSSLRequest& request, const CloseSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloseSSLOutcomeCallable CloseSSLCallable(const Model::CloseSSLRequest& request);

                /**
                 *本接口(CloseWanService)用于关闭云数据库实例的外网访问。关闭外网访问后，外网地址将不可访问。
                 * @param req CloseWanServiceRequest
                 * @return CloseWanServiceOutcome
                 */
                CloseWanServiceOutcome CloseWanService(const Model::CloseWanServiceRequest &request);
                void CloseWanServiceAsync(const Model::CloseWanServiceRequest& request, const CloseWanServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloseWanServiceOutcomeCallable CloseWanServiceCallable(const Model::CloseWanServiceRequest& request);

                /**
                 *本接口(CreateAccounts)用于创建云数据库的账户，需要指定新的账户名和域名，以及所对应的密码，同时可以设置账号的备注信息以及最大可用连接数。
                 * @param req CreateAccountsRequest
                 * @return CreateAccountsOutcome
                 */
                CreateAccountsOutcome CreateAccounts(const Model::CreateAccountsRequest &request);
                void CreateAccountsAsync(const Model::CreateAccountsRequest& request, const CreateAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAccountsOutcomeCallable CreateAccountsCallable(const Model::CreateAccountsRequest& request);

                /**
                 *本接口（CreateAuditLogFile）用于创建云数据库实例的审计日志文件。
                 * @param req CreateAuditLogFileRequest
                 * @return CreateAuditLogFileOutcome
                 */
                CreateAuditLogFileOutcome CreateAuditLogFile(const Model::CreateAuditLogFileRequest &request);
                void CreateAuditLogFileAsync(const Model::CreateAuditLogFileRequest& request, const CreateAuditLogFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAuditLogFileOutcomeCallable CreateAuditLogFileCallable(const Model::CreateAuditLogFileRequest& request);

                /**
                 *本接口(CreateAuditPolicy)用于创建云数据库实例的审计策略，即将审计规则绑定到具体的云数据库实例上。
                 * @param req CreateAuditPolicyRequest
                 * @return CreateAuditPolicyOutcome
                 */
                CreateAuditPolicyOutcome CreateAuditPolicy(const Model::CreateAuditPolicyRequest &request);
                void CreateAuditPolicyAsync(const Model::CreateAuditPolicyRequest& request, const CreateAuditPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAuditPolicyOutcomeCallable CreateAuditPolicyCallable(const Model::CreateAuditPolicyRequest& request);

                /**
                 *不再支持审计规则创建

本接口(CreateAuditRule)用于创建用户在当前地域的审计规则。
                 * @param req CreateAuditRuleRequest
                 * @return CreateAuditRuleOutcome
                 */
                CreateAuditRuleOutcome CreateAuditRule(const Model::CreateAuditRuleRequest &request);
                void CreateAuditRuleAsync(const Model::CreateAuditRuleRequest& request, const CreateAuditRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAuditRuleOutcomeCallable CreateAuditRuleCallable(const Model::CreateAuditRuleRequest& request);

                /**
                 *本接口（CreateAuditRuleTemplate）用于创建审计规则模板。
                 * @param req CreateAuditRuleTemplateRequest
                 * @return CreateAuditRuleTemplateOutcome
                 */
                CreateAuditRuleTemplateOutcome CreateAuditRuleTemplate(const Model::CreateAuditRuleTemplateRequest &request);
                void CreateAuditRuleTemplateAsync(const Model::CreateAuditRuleTemplateRequest& request, const CreateAuditRuleTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAuditRuleTemplateOutcomeCallable CreateAuditRuleTemplateCallable(const Model::CreateAuditRuleTemplateRequest& request);

                /**
                 *本接口（CreateBackup）用于创建数据库备份。
                 * @param req CreateBackupRequest
                 * @return CreateBackupOutcome
                 */
                CreateBackupOutcome CreateBackup(const Model::CreateBackupRequest &request);
                void CreateBackupAsync(const Model::CreateBackupRequest& request, const CreateBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBackupOutcomeCallable CreateBackupCallable(const Model::CreateBackupRequest& request);

                /**
                 *本接口（CreateCdbProxy）用于主实例创建数据库代理。
                 * @param req CreateCdbProxyRequest
                 * @return CreateCdbProxyOutcome
                 */
                CreateCdbProxyOutcome CreateCdbProxy(const Model::CreateCdbProxyRequest &request);
                void CreateCdbProxyAsync(const Model::CreateCdbProxyRequest& request, const CreateCdbProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCdbProxyOutcomeCallable CreateCdbProxyCallable(const Model::CreateCdbProxyRequest& request);

                /**
                 *本接口（CreateCdbProxyAddress）用于数据库代理增加代理地址。
                 * @param req CreateCdbProxyAddressRequest
                 * @return CreateCdbProxyAddressOutcome
                 */
                CreateCdbProxyAddressOutcome CreateCdbProxyAddress(const Model::CreateCdbProxyAddressRequest &request);
                void CreateCdbProxyAddressAsync(const Model::CreateCdbProxyAddressRequest& request, const CreateCdbProxyAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCdbProxyAddressOutcomeCallable CreateCdbProxyAddressCallable(const Model::CreateCdbProxyAddressRequest& request);

                /**
                 *本接口（CreateCloneInstance）用于从目标源实例创建一个克隆实例，可以指定克隆实例回档到源实例的指定物理备份文件或者指定的回档时间点。
                 * @param req CreateCloneInstanceRequest
                 * @return CreateCloneInstanceOutcome
                 */
                CreateCloneInstanceOutcome CreateCloneInstance(const Model::CreateCloneInstanceRequest &request);
                void CreateCloneInstanceAsync(const Model::CreateCloneInstanceRequest& request, const CreateCloneInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCloneInstanceOutcomeCallable CreateCloneInstanceCallable(const Model::CreateCloneInstanceRequest& request);

                /**
                 *本接口（CreateDBImportJob）用于创建云数据库数据导入任务。
注意，用户进行数据导入任务的文件，必须提前上传到腾讯云。用户须在控制台进行文件导入。
                 * @param req CreateDBImportJobRequest
                 * @return CreateDBImportJobOutcome
                 */
                CreateDBImportJobOutcome CreateDBImportJob(const Model::CreateDBImportJobRequest &request);
                void CreateDBImportJobAsync(const Model::CreateDBImportJobRequest& request, const CreateDBImportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDBImportJobOutcomeCallable CreateDBImportJobCallable(const Model::CreateDBImportJobRequest& request);

                /**
                 *本接口（CreateDBInstance）用于创建包年包月的云数据库实例（包括主实例、灾备实例和只读实例），可通过传入实例规格、MySQL 版本号、购买时长和数量等信息创建云数据库实例。

该接口为异步接口，您还可以使用 [查询实例列表](https://cloud.tencent.com/document/api/236/15872) 接口查询该实例的详细信息。当该实例的 Status 为1，且 TaskStatus 为0，表示实例已经发货成功。

1. 首先请使用 [获取云数据库可售卖规格](https://cloud.tencent.com/document/api/236/17229) 接口查询可创建的实例规格信息，然后请使用 [查询数据库价格](https://cloud.tencent.com/document/api/236/18566) 接口查询可创建实例的售卖价格；
2. 单次创建实例最大支持 100 个，实例时长最大支持 36 个月；
3. 支持创建 MySQL 5.5 、 MySQL 5.6 、 MySQL 5.7 、 MySQL 8.0 版本；
4. 支持创建主实例、只读实例、灾备实例；
5. 当入参指定 ParamTemplateId 或 AlarmPolicyList 时，需将SDK提升至最新版本方可支持；
                 * @param req CreateDBInstanceRequest
                 * @return CreateDBInstanceOutcome
                 */
                CreateDBInstanceOutcome CreateDBInstance(const Model::CreateDBInstanceRequest &request);
                void CreateDBInstanceAsync(const Model::CreateDBInstanceRequest& request, const CreateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDBInstanceOutcomeCallable CreateDBInstanceCallable(const Model::CreateDBInstanceRequest& request);

                /**
                 *本接口（CreateDBInstanceHour）用于创建按量计费的实例，可通过传入实例规格、MySQL 版本号和数量等信息创建云数据库实例，支持主实例、灾备实例和只读实例的创建。

该接口为异步接口，您还可以使用 [查询实例列表](https://cloud.tencent.com/document/api/236/15872) 接口查询该实例的详细信息。当该实例的 Status 为 1，且 TaskStatus 为 0，表示实例已经发货成功。

1. 首先请使用 [获取云数据库可售卖规格](https://cloud.tencent.com/document/api/236/17229) 接口查询可创建的实例规格信息，然后请使用 [查询数据库价格](https://cloud.tencent.com/document/api/236/18566) 接口查询可创建实例的售卖价格；
2. 单次创建实例最大支持 100 个，实例时长最大支持 36 个月；
3. 支持创建 MySQL 5.5、MySQL 5.6 、MySQL 5.7 和 MySQL 8.0 版本；
4. 支持创建主实例、灾备实例和只读实例；
                 * @param req CreateDBInstanceHourRequest
                 * @return CreateDBInstanceHourOutcome
                 */
                CreateDBInstanceHourOutcome CreateDBInstanceHour(const Model::CreateDBInstanceHourRequest &request);
                void CreateDBInstanceHourAsync(const Model::CreateDBInstanceHourRequest& request, const CreateDBInstanceHourAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDBInstanceHourOutcomeCallable CreateDBInstanceHourCallable(const Model::CreateDBInstanceHourRequest& request);

                /**
                 *本接口(CreateDatabase)用于在云数据库实例中创建数据库。
                 * @param req CreateDatabaseRequest
                 * @return CreateDatabaseOutcome
                 */
                CreateDatabaseOutcome CreateDatabase(const Model::CreateDatabaseRequest &request);
                void CreateDatabaseAsync(const Model::CreateDatabaseRequest& request, const CreateDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDatabaseOutcomeCallable CreateDatabaseCallable(const Model::CreateDatabaseRequest& request);

                /**
                 *本接口（CreateDeployGroup）用于创建放置实例的置放群组。
                 * @param req CreateDeployGroupRequest
                 * @return CreateDeployGroupOutcome
                 */
                CreateDeployGroupOutcome CreateDeployGroup(const Model::CreateDeployGroupRequest &request);
                void CreateDeployGroupAsync(const Model::CreateDeployGroupRequest& request, const CreateDeployGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDeployGroupOutcomeCallable CreateDeployGroupCallable(const Model::CreateDeployGroupRequest& request);

                /**
                 *该接口（CreateParamTemplate）用于创建参数模板，全地域公共参数 Region 均为 ap-guangzhou。
                 * @param req CreateParamTemplateRequest
                 * @return CreateParamTemplateOutcome
                 */
                CreateParamTemplateOutcome CreateParamTemplate(const Model::CreateParamTemplateRequest &request);
                void CreateParamTemplateAsync(const Model::CreateParamTemplateRequest& request, const CreateParamTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateParamTemplateOutcomeCallable CreateParamTemplateCallable(const Model::CreateParamTemplateRequest& request);

                /**
                 *本接口(CreateRoInstanceIp)用于创建云数据库只读实例的独立VIP。
                 * @param req CreateRoInstanceIpRequest
                 * @return CreateRoInstanceIpOutcome
                 */
                CreateRoInstanceIpOutcome CreateRoInstanceIp(const Model::CreateRoInstanceIpRequest &request);
                void CreateRoInstanceIpAsync(const Model::CreateRoInstanceIpRequest& request, const CreateRoInstanceIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRoInstanceIpOutcomeCallable CreateRoInstanceIpCallable(const Model::CreateRoInstanceIpRequest& request);

                /**
                 *本接口（CreateRotationPassword）用于开启密码轮转。
                 * @param req CreateRotationPasswordRequest
                 * @return CreateRotationPasswordOutcome
                 */
                CreateRotationPasswordOutcome CreateRotationPassword(const Model::CreateRotationPasswordRequest &request);
                void CreateRotationPasswordAsync(const Model::CreateRotationPasswordRequest& request, const CreateRotationPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRotationPasswordOutcomeCallable CreateRotationPasswordCallable(const Model::CreateRotationPasswordRequest& request);

                /**
                 *本接口（DeleteAccounts）用于删除云数据库的账户。
                 * @param req DeleteAccountsRequest
                 * @return DeleteAccountsOutcome
                 */
                DeleteAccountsOutcome DeleteAccounts(const Model::DeleteAccountsRequest &request);
                void DeleteAccountsAsync(const Model::DeleteAccountsRequest& request, const DeleteAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAccountsOutcomeCallable DeleteAccountsCallable(const Model::DeleteAccountsRequest& request);

                /**
                 *本接口(DeleteAuditLogFile)用于删除云数据库实例的审计日志文件。
                 * @param req DeleteAuditLogFileRequest
                 * @return DeleteAuditLogFileOutcome
                 */
                DeleteAuditLogFileOutcome DeleteAuditLogFile(const Model::DeleteAuditLogFileRequest &request);
                void DeleteAuditLogFileAsync(const Model::DeleteAuditLogFileRequest& request, const DeleteAuditLogFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAuditLogFileOutcomeCallable DeleteAuditLogFileCallable(const Model::DeleteAuditLogFileRequest& request);

                /**
                 *本接口(DeleteAuditPolicy)用于删除用户的审计策略。
                 * @param req DeleteAuditPolicyRequest
                 * @return DeleteAuditPolicyOutcome
                 */
                DeleteAuditPolicyOutcome DeleteAuditPolicy(const Model::DeleteAuditPolicyRequest &request);
                void DeleteAuditPolicyAsync(const Model::DeleteAuditPolicyRequest& request, const DeleteAuditPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAuditPolicyOutcomeCallable DeleteAuditPolicyCallable(const Model::DeleteAuditPolicyRequest& request);

                /**
                 *不再支持审计规则创建

本接口(DeleteAuditRule)用于删除用户的审计规则。
                 * @param req DeleteAuditRuleRequest
                 * @return DeleteAuditRuleOutcome
                 */
                DeleteAuditRuleOutcome DeleteAuditRule(const Model::DeleteAuditRuleRequest &request);
                void DeleteAuditRuleAsync(const Model::DeleteAuditRuleRequest& request, const DeleteAuditRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAuditRuleOutcomeCallable DeleteAuditRuleCallable(const Model::DeleteAuditRuleRequest& request);

                /**
                 *删除审计规则模板
                 * @param req DeleteAuditRuleTemplatesRequest
                 * @return DeleteAuditRuleTemplatesOutcome
                 */
                DeleteAuditRuleTemplatesOutcome DeleteAuditRuleTemplates(const Model::DeleteAuditRuleTemplatesRequest &request);
                void DeleteAuditRuleTemplatesAsync(const Model::DeleteAuditRuleTemplatesRequest& request, const DeleteAuditRuleTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAuditRuleTemplatesOutcomeCallable DeleteAuditRuleTemplatesCallable(const Model::DeleteAuditRuleTemplatesRequest& request);

                /**
                 *本接口(DeleteBackup)用于删除数据库备份。本接口只支持删除手动发起的备份。
                 * @param req DeleteBackupRequest
                 * @return DeleteBackupOutcome
                 */
                DeleteBackupOutcome DeleteBackup(const Model::DeleteBackupRequest &request);
                void DeleteBackupAsync(const Model::DeleteBackupRequest& request, const DeleteBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBackupOutcomeCallable DeleteBackupCallable(const Model::DeleteBackupRequest& request);

                /**
                 *本接口(DeleteDatabase)用于在云数据库实例中删除数据库。
                 * @param req DeleteDatabaseRequest
                 * @return DeleteDatabaseOutcome
                 */
                DeleteDatabaseOutcome DeleteDatabase(const Model::DeleteDatabaseRequest &request);
                void DeleteDatabaseAsync(const Model::DeleteDatabaseRequest& request, const DeleteDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDatabaseOutcomeCallable DeleteDatabaseCallable(const Model::DeleteDatabaseRequest& request);

                /**
                 *根据置放群组ID删除置放群组（置放群组中有资源存在时不能删除该置放群组）
                 * @param req DeleteDeployGroupsRequest
                 * @return DeleteDeployGroupsOutcome
                 */
                DeleteDeployGroupsOutcome DeleteDeployGroups(const Model::DeleteDeployGroupsRequest &request);
                void DeleteDeployGroupsAsync(const Model::DeleteDeployGroupsRequest& request, const DeleteDeployGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDeployGroupsOutcomeCallable DeleteDeployGroupsCallable(const Model::DeleteDeployGroupsRequest& request);

                /**
                 *该接口（DeleteParamTemplate）用于删除参数模板，全地域公共参数 Region 均为 ap-guangzhou。
                 * @param req DeleteParamTemplateRequest
                 * @return DeleteParamTemplateOutcome
                 */
                DeleteParamTemplateOutcome DeleteParamTemplate(const Model::DeleteParamTemplateRequest &request);
                void DeleteParamTemplateAsync(const Model::DeleteParamTemplateRequest& request, const DeleteParamTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteParamTemplateOutcomeCallable DeleteParamTemplateCallable(const Model::DeleteParamTemplateRequest& request);

                /**
                 *本接口（DeleteRotationPassword）用于关闭实例账户密码轮转。
                 * @param req DeleteRotationPasswordRequest
                 * @return DeleteRotationPasswordOutcome
                 */
                DeleteRotationPasswordOutcome DeleteRotationPassword(const Model::DeleteRotationPasswordRequest &request);
                void DeleteRotationPasswordAsync(const Model::DeleteRotationPasswordRequest& request, const DeleteRotationPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRotationPasswordOutcomeCallable DeleteRotationPasswordCallable(const Model::DeleteRotationPasswordRequest& request);

                /**
                 *本接口（DeleteTimeWindow）用于删除云数据库实例的维护时间窗口。删除实例维护时间窗口之后，默认的维护时间窗为每天的03:00-04:00，数据校验延迟阈值为10秒，即当选择在维护时间窗口内切换访问新实例时，默认会在03:00-04:00点进行切换访问新实例。
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
                 *本接口（DescribeAccounts）用于查询云数据库的所有账户信息。
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
                 *本接口(DescribeAuditConfig)用于查询云数据库审计策略的服务配置，包括审计日志保存时长等。
                 * @param req DescribeAuditConfigRequest
                 * @return DescribeAuditConfigOutcome
                 */
                DescribeAuditConfigOutcome DescribeAuditConfig(const Model::DescribeAuditConfigRequest &request);
                void DescribeAuditConfigAsync(const Model::DescribeAuditConfigRequest& request, const DescribeAuditConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAuditConfigOutcomeCallable DescribeAuditConfigCallable(const Model::DescribeAuditConfigRequest& request);

                /**
                 *本接口（DescribeAuditInstanceList）用于获取审计实例列表。
                 * @param req DescribeAuditInstanceListRequest
                 * @return DescribeAuditInstanceListOutcome
                 */
                DescribeAuditInstanceListOutcome DescribeAuditInstanceList(const Model::DescribeAuditInstanceListRequest &request);
                void DescribeAuditInstanceListAsync(const Model::DescribeAuditInstanceListRequest& request, const DescribeAuditInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAuditInstanceListOutcomeCallable DescribeAuditInstanceListCallable(const Model::DescribeAuditInstanceListRequest& request);

                /**
                 *本接口（DescribeAuditLogFiles）用于查询云数据库实例的审计日志文件。
                 * @param req DescribeAuditLogFilesRequest
                 * @return DescribeAuditLogFilesOutcome
                 */
                DescribeAuditLogFilesOutcome DescribeAuditLogFiles(const Model::DescribeAuditLogFilesRequest &request);
                void DescribeAuditLogFilesAsync(const Model::DescribeAuditLogFilesRequest& request, const DescribeAuditLogFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAuditLogFilesOutcomeCallable DescribeAuditLogFilesCallable(const Model::DescribeAuditLogFilesRequest& request);

                /**
                 *本接口（DescribeAuditLogs）用于查询数据库审计日志。
                 * @param req DescribeAuditLogsRequest
                 * @return DescribeAuditLogsOutcome
                 */
                DescribeAuditLogsOutcome DescribeAuditLogs(const Model::DescribeAuditLogsRequest &request);
                void DescribeAuditLogsAsync(const Model::DescribeAuditLogsRequest& request, const DescribeAuditLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAuditLogsOutcomeCallable DescribeAuditLogsCallable(const Model::DescribeAuditLogsRequest& request);

                /**
                 *本接口（DescribeAuditPolicies）用于查询云数据库实例的审计策略。
                 * @param req DescribeAuditPoliciesRequest
                 * @return DescribeAuditPoliciesOutcome
                 */
                DescribeAuditPoliciesOutcome DescribeAuditPolicies(const Model::DescribeAuditPoliciesRequest &request);
                void DescribeAuditPoliciesAsync(const Model::DescribeAuditPoliciesRequest& request, const DescribeAuditPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAuditPoliciesOutcomeCallable DescribeAuditPoliciesCallable(const Model::DescribeAuditPoliciesRequest& request);

                /**
                 *本接口（DescribeAuditRuleTemplateModifyHistory）用于查询规则模板变更记录。
                 * @param req DescribeAuditRuleTemplateModifyHistoryRequest
                 * @return DescribeAuditRuleTemplateModifyHistoryOutcome
                 */
                DescribeAuditRuleTemplateModifyHistoryOutcome DescribeAuditRuleTemplateModifyHistory(const Model::DescribeAuditRuleTemplateModifyHistoryRequest &request);
                void DescribeAuditRuleTemplateModifyHistoryAsync(const Model::DescribeAuditRuleTemplateModifyHistoryRequest& request, const DescribeAuditRuleTemplateModifyHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAuditRuleTemplateModifyHistoryOutcomeCallable DescribeAuditRuleTemplateModifyHistoryCallable(const Model::DescribeAuditRuleTemplateModifyHistoryRequest& request);

                /**
                 *本接口（DescribeAuditRuleTemplates）用于查询审计规则模板信息。
                 * @param req DescribeAuditRuleTemplatesRequest
                 * @return DescribeAuditRuleTemplatesOutcome
                 */
                DescribeAuditRuleTemplatesOutcome DescribeAuditRuleTemplates(const Model::DescribeAuditRuleTemplatesRequest &request);
                void DescribeAuditRuleTemplatesAsync(const Model::DescribeAuditRuleTemplatesRequest& request, const DescribeAuditRuleTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAuditRuleTemplatesOutcomeCallable DescribeAuditRuleTemplatesCallable(const Model::DescribeAuditRuleTemplatesRequest& request);

                /**
                 *不再支持审计规则创建

本接口(DescribeAuditRules)用于查询用户在当前地域的审计规则。
                 * @param req DescribeAuditRulesRequest
                 * @return DescribeAuditRulesOutcome
                 */
                DescribeAuditRulesOutcome DescribeAuditRules(const Model::DescribeAuditRulesRequest &request);
                void DescribeAuditRulesAsync(const Model::DescribeAuditRulesRequest& request, const DescribeAuditRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAuditRulesOutcomeCallable DescribeAuditRulesCallable(const Model::DescribeAuditRulesRequest& request);

                /**
                 *本接口（DescribeBackupConfig）用于查询数据库备份配置信息。
                 * @param req DescribeBackupConfigRequest
                 * @return DescribeBackupConfigOutcome
                 */
                DescribeBackupConfigOutcome DescribeBackupConfig(const Model::DescribeBackupConfigRequest &request);
                void DescribeBackupConfigAsync(const Model::DescribeBackupConfigRequest& request, const DescribeBackupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupConfigOutcomeCallable DescribeBackupConfigCallable(const Model::DescribeBackupConfigRequest& request);

                /**
                 *本接口（DescribeBackupDecryptionKey）用于查询备份文件解密密钥。
                 * @param req DescribeBackupDecryptionKeyRequest
                 * @return DescribeBackupDecryptionKeyOutcome
                 */
                DescribeBackupDecryptionKeyOutcome DescribeBackupDecryptionKey(const Model::DescribeBackupDecryptionKeyRequest &request);
                void DescribeBackupDecryptionKeyAsync(const Model::DescribeBackupDecryptionKeyRequest& request, const DescribeBackupDecryptionKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupDecryptionKeyOutcomeCallable DescribeBackupDecryptionKeyCallable(const Model::DescribeBackupDecryptionKeyRequest& request);

                /**
                 *该接口用户查询当前地域用户设置的默认备份下载来源限制。
                 * @param req DescribeBackupDownloadRestrictionRequest
                 * @return DescribeBackupDownloadRestrictionOutcome
                 */
                DescribeBackupDownloadRestrictionOutcome DescribeBackupDownloadRestriction(const Model::DescribeBackupDownloadRestrictionRequest &request);
                void DescribeBackupDownloadRestrictionAsync(const Model::DescribeBackupDownloadRestrictionRequest& request, const DescribeBackupDownloadRestrictionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupDownloadRestrictionOutcomeCallable DescribeBackupDownloadRestrictionCallable(const Model::DescribeBackupDownloadRestrictionRequest& request);

                /**
                 *本接口(DescribeBackupEncryptionStatus)用于查询实例默认备份加密状态。
                 * @param req DescribeBackupEncryptionStatusRequest
                 * @return DescribeBackupEncryptionStatusOutcome
                 */
                DescribeBackupEncryptionStatusOutcome DescribeBackupEncryptionStatus(const Model::DescribeBackupEncryptionStatusRequest &request);
                void DescribeBackupEncryptionStatusAsync(const Model::DescribeBackupEncryptionStatusRequest& request, const DescribeBackupEncryptionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupEncryptionStatusOutcomeCallable DescribeBackupEncryptionStatusCallable(const Model::DescribeBackupEncryptionStatusRequest& request);

                /**
                 *本接口(DescribeBackupOverview)用于查询用户的备份概览。返回用户当前备份总个数、备份总的占用容量、赠送的免费容量、计费容量（容量单位为字节）。
                 * @param req DescribeBackupOverviewRequest
                 * @return DescribeBackupOverviewOutcome
                 */
                DescribeBackupOverviewOutcome DescribeBackupOverview(const Model::DescribeBackupOverviewRequest &request);
                void DescribeBackupOverviewAsync(const Model::DescribeBackupOverviewRequest& request, const DescribeBackupOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupOverviewOutcomeCallable DescribeBackupOverviewCallable(const Model::DescribeBackupOverviewRequest& request);

                /**
                 *本接口(DescribeBackupSummaries)用于查询备份的统计情况，返回以实例为维度的备份占用容量，以及每个实例的数据备份和日志备份的个数和容量（容量单位为字节）。
                 * @param req DescribeBackupSummariesRequest
                 * @return DescribeBackupSummariesOutcome
                 */
                DescribeBackupSummariesOutcome DescribeBackupSummaries(const Model::DescribeBackupSummariesRequest &request);
                void DescribeBackupSummariesAsync(const Model::DescribeBackupSummariesRequest& request, const DescribeBackupSummariesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupSummariesOutcomeCallable DescribeBackupSummariesCallable(const Model::DescribeBackupSummariesRequest& request);

                /**
                 *本接口(DescribeBackups)用于查询云数据库实例的备份数据。
                 * @param req DescribeBackupsRequest
                 * @return DescribeBackupsOutcome
                 */
                DescribeBackupsOutcome DescribeBackups(const Model::DescribeBackupsRequest &request);
                void DescribeBackupsAsync(const Model::DescribeBackupsRequest& request, const DescribeBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupsOutcomeCallable DescribeBackupsCallable(const Model::DescribeBackupsRequest& request);

                /**
                 *本接口(DescribeBinlogBackupOverview)用于查询用户在当前地域总的日志备份概览。
                 * @param req DescribeBinlogBackupOverviewRequest
                 * @return DescribeBinlogBackupOverviewOutcome
                 */
                DescribeBinlogBackupOverviewOutcome DescribeBinlogBackupOverview(const Model::DescribeBinlogBackupOverviewRequest &request);
                void DescribeBinlogBackupOverviewAsync(const Model::DescribeBinlogBackupOverviewRequest& request, const DescribeBinlogBackupOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBinlogBackupOverviewOutcomeCallable DescribeBinlogBackupOverviewCallable(const Model::DescribeBinlogBackupOverviewRequest& request);

                /**
                 *本接口(DescribeBinlogs)用于查询云数据库实例的 binlog 文件列表。
                 * @param req DescribeBinlogsRequest
                 * @return DescribeBinlogsOutcome
                 */
                DescribeBinlogsOutcome DescribeBinlogs(const Model::DescribeBinlogsRequest &request);
                void DescribeBinlogsAsync(const Model::DescribeBinlogsRequest& request, const DescribeBinlogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBinlogsOutcomeCallable DescribeBinlogsCallable(const Model::DescribeBinlogsRequest& request);

                /**
                 *通过该 API 可以查询实例的 CPU 弹性扩容信息
                 * @param req DescribeCPUExpandStrategyInfoRequest
                 * @return DescribeCPUExpandStrategyInfoOutcome
                 */
                DescribeCPUExpandStrategyInfoOutcome DescribeCPUExpandStrategyInfo(const Model::DescribeCPUExpandStrategyInfoRequest &request);
                void DescribeCPUExpandStrategyInfoAsync(const Model::DescribeCPUExpandStrategyInfoRequest& request, const DescribeCPUExpandStrategyInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCPUExpandStrategyInfoOutcomeCallable DescribeCPUExpandStrategyInfoCallable(const Model::DescribeCPUExpandStrategyInfoRequest& request);

                /**
                 *本接口（DescribeCdbProxyInfo）用于查询数据库代理详情信息。
                 * @param req DescribeCdbProxyInfoRequest
                 * @return DescribeCdbProxyInfoOutcome
                 */
                DescribeCdbProxyInfoOutcome DescribeCdbProxyInfo(const Model::DescribeCdbProxyInfoRequest &request);
                void DescribeCdbProxyInfoAsync(const Model::DescribeCdbProxyInfoRequest& request, const DescribeCdbProxyInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCdbProxyInfoOutcomeCallable DescribeCdbProxyInfoCallable(const Model::DescribeCdbProxyInfoRequest& request);

                /**
                 *本接口(DescribeCdbZoneConfig)用于查询云数据库各地域可售卖的规格配置。
                 * @param req DescribeCdbZoneConfigRequest
                 * @return DescribeCdbZoneConfigOutcome
                 */
                DescribeCdbZoneConfigOutcome DescribeCdbZoneConfig(const Model::DescribeCdbZoneConfigRequest &request);
                void DescribeCdbZoneConfigAsync(const Model::DescribeCdbZoneConfigRequest& request, const DescribeCdbZoneConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCdbZoneConfigOutcomeCallable DescribeCdbZoneConfigCallable(const Model::DescribeCdbZoneConfigRequest& request);

                /**
                 *本接口（DescribeCloneList）用于查询用户实例的克隆任务列表。
                 * @param req DescribeCloneListRequest
                 * @return DescribeCloneListOutcome
                 */
                DescribeCloneListOutcome DescribeCloneList(const Model::DescribeCloneListRequest &request);
                void DescribeCloneListAsync(const Model::DescribeCloneListRequest& request, const DescribeCloneListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloneListOutcomeCallable DescribeCloneListCallable(const Model::DescribeCloneListRequest& request);

                /**
                 *本接口（DescribeClusterInfo）用于查询云盘版实例信息。
                 * @param req DescribeClusterInfoRequest
                 * @return DescribeClusterInfoOutcome
                 */
                DescribeClusterInfoOutcome DescribeClusterInfo(const Model::DescribeClusterInfoRequest &request);
                void DescribeClusterInfoAsync(const Model::DescribeClusterInfoRequest& request, const DescribeClusterInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterInfoOutcomeCallable DescribeClusterInfoCallable(const Model::DescribeClusterInfoRequest& request);

                /**
                 *本接口（DescribeCpuExpandHistory）用于查询扩容历史。
                 * @param req DescribeCpuExpandHistoryRequest
                 * @return DescribeCpuExpandHistoryOutcome
                 */
                DescribeCpuExpandHistoryOutcome DescribeCpuExpandHistory(const Model::DescribeCpuExpandHistoryRequest &request);
                void DescribeCpuExpandHistoryAsync(const Model::DescribeCpuExpandHistoryRequest& request, const DescribeCpuExpandHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCpuExpandHistoryOutcomeCallable DescribeCpuExpandHistoryCallable(const Model::DescribeCpuExpandHistoryRequest& request);

                /**
                 *本接口（DescribeDBFeatures）用于查询云数据库版本属性，包括是否支持数据库加密、数据库审计等功能。
                 * @param req DescribeDBFeaturesRequest
                 * @return DescribeDBFeaturesOutcome
                 */
                DescribeDBFeaturesOutcome DescribeDBFeatures(const Model::DescribeDBFeaturesRequest &request);
                void DescribeDBFeaturesAsync(const Model::DescribeDBFeaturesRequest& request, const DescribeDBFeaturesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBFeaturesOutcomeCallable DescribeDBFeaturesCallable(const Model::DescribeDBFeaturesRequest& request);

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
                 *本接口（DescribeDBInstanceConfig）用于查询云数据库实例的配置信息，包括同步模式，部署模式等。
                 * @param req DescribeDBInstanceConfigRequest
                 * @return DescribeDBInstanceConfigOutcome
                 */
                DescribeDBInstanceConfigOutcome DescribeDBInstanceConfig(const Model::DescribeDBInstanceConfigRequest &request);
                void DescribeDBInstanceConfigAsync(const Model::DescribeDBInstanceConfigRequest& request, const DescribeDBInstanceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstanceConfigOutcomeCallable DescribeDBInstanceConfigCallable(const Model::DescribeDBInstanceConfigRequest& request);

                /**
                 *本接口(DescribeDBInstanceGTID)用于查询云数据库实例是否开通了 GTID，不支持版本为 5.5 以及以下的实例。
                 * @param req DescribeDBInstanceGTIDRequest
                 * @return DescribeDBInstanceGTIDOutcome
                 */
                DescribeDBInstanceGTIDOutcome DescribeDBInstanceGTID(const Model::DescribeDBInstanceGTIDRequest &request);
                void DescribeDBInstanceGTIDAsync(const Model::DescribeDBInstanceGTIDRequest& request, const DescribeDBInstanceGTIDAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstanceGTIDOutcomeCallable DescribeDBInstanceGTIDCallable(const Model::DescribeDBInstanceGTIDRequest& request);

                /**
                 *本接口（DescribeDBInstanceInfo）用于查询实例基本信息（实例 ID，实例名称，是否开通加密）。
                 * @param req DescribeDBInstanceInfoRequest
                 * @return DescribeDBInstanceInfoOutcome
                 */
                DescribeDBInstanceInfoOutcome DescribeDBInstanceInfo(const Model::DescribeDBInstanceInfoRequest &request);
                void DescribeDBInstanceInfoAsync(const Model::DescribeDBInstanceInfoRequest& request, const DescribeDBInstanceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstanceInfoOutcomeCallable DescribeDBInstanceInfoCallable(const Model::DescribeDBInstanceInfoRequest& request);

                /**
                 *本接口(DescribeDBInstanceLogToCLS)用于查询实例慢日志、错误日志投递CLS的配置，通过AppId、Region以及实例ID过滤出当前实例日志投递CLS的配置。
                 * @param req DescribeDBInstanceLogToCLSRequest
                 * @return DescribeDBInstanceLogToCLSOutcome
                 */
                DescribeDBInstanceLogToCLSOutcome DescribeDBInstanceLogToCLS(const Model::DescribeDBInstanceLogToCLSRequest &request);
                void DescribeDBInstanceLogToCLSAsync(const Model::DescribeDBInstanceLogToCLSRequest& request, const DescribeDBInstanceLogToCLSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstanceLogToCLSOutcomeCallable DescribeDBInstanceLogToCLSCallable(const Model::DescribeDBInstanceLogToCLSRequest& request);

                /**
                 *本接口（DescribeDBInstanceRebootTime）用于查询云数据库实例重启预计所需的时间。
                 * @param req DescribeDBInstanceRebootTimeRequest
                 * @return DescribeDBInstanceRebootTimeOutcome
                 */
                DescribeDBInstanceRebootTimeOutcome DescribeDBInstanceRebootTime(const Model::DescribeDBInstanceRebootTimeRequest &request);
                void DescribeDBInstanceRebootTimeAsync(const Model::DescribeDBInstanceRebootTimeRequest& request, const DescribeDBInstanceRebootTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstanceRebootTimeOutcomeCallable DescribeDBInstanceRebootTimeCallable(const Model::DescribeDBInstanceRebootTimeRequest& request);

                /**
                 *本接口（DescribeDBInstances）用于查询云数据库实例列表，支持通过项目 ID、实例 ID、访问地址、实例状态等过滤条件来筛选实例。支持查询主实例、灾备实例和只读实例信息列表。
                 * @param req DescribeDBInstancesRequest
                 * @return DescribeDBInstancesOutcome
                 */
                DescribeDBInstancesOutcome DescribeDBInstances(const Model::DescribeDBInstancesRequest &request);
                void DescribeDBInstancesAsync(const Model::DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstancesOutcomeCallable DescribeDBInstancesCallable(const Model::DescribeDBInstancesRequest& request);

                /**
                 *本接口（DescribeDBPrice）用于查询购买或续费云数据库实例的价格，支持查询按量计费或者包年包月的价格。可传入实例类型、购买时长、购买数量、内存大小、硬盘大小和可用区信息等来查询实例价格。可传入实例名称来查询实例续费价格。

注意：对某个地域进行询价，请使用对应地域的接入点，接入点信息请参照 <a href="https://cloud.tencent.com/document/api/236/15832">服务地址</a> 文档。例如：对广州地域进行询价，请把请求发到：cdb.ap-guangzhou.tencentcloudapi.com。同理对上海地域询价，把请求发到：cdb.ap-shanghai.tencentcloudapi.com。
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
                 *本接口(DescribeDataBackupOverview)用于查询用户在当前地域总的数据备份概览。
                 * @param req DescribeDataBackupOverviewRequest
                 * @return DescribeDataBackupOverviewOutcome
                 */
                DescribeDataBackupOverviewOutcome DescribeDataBackupOverview(const Model::DescribeDataBackupOverviewRequest &request);
                void DescribeDataBackupOverviewAsync(const Model::DescribeDataBackupOverviewRequest& request, const DescribeDataBackupOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataBackupOverviewOutcomeCallable DescribeDataBackupOverviewCallable(const Model::DescribeDataBackupOverviewRequest& request);

                /**
                 *本接口(DescribeDatabases)用于查询云数据库实例的数据库信息，仅支持主实例和灾备实例，不支持只读实例。
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
                 *本接口(DescribeDeployGroupList)用于查询用户的置放群组列表，可以指定置放群组 ID 或置放群组名称。
                 * @param req DescribeDeployGroupListRequest
                 * @return DescribeDeployGroupListOutcome
                 */
                DescribeDeployGroupListOutcome DescribeDeployGroupList(const Model::DescribeDeployGroupListRequest &request);
                void DescribeDeployGroupListAsync(const Model::DescribeDeployGroupListRequest& request, const DescribeDeployGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeployGroupListOutcomeCallable DescribeDeployGroupListCallable(const Model::DescribeDeployGroupListRequest& request);

                /**
                 *本接口（DescribeDeviceMonitorInfo）用于查询云数据库物理机当天的监控信息，暂只支持内存488G、硬盘6T的实例查询。
                 * @param req DescribeDeviceMonitorInfoRequest
                 * @return DescribeDeviceMonitorInfoOutcome
                 */
                DescribeDeviceMonitorInfoOutcome DescribeDeviceMonitorInfo(const Model::DescribeDeviceMonitorInfoRequest &request);
                void DescribeDeviceMonitorInfoAsync(const Model::DescribeDeviceMonitorInfoRequest& request, const DescribeDeviceMonitorInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceMonitorInfoOutcomeCallable DescribeDeviceMonitorInfoCallable(const Model::DescribeDeviceMonitorInfoRequest& request);

                /**
                 *根据检索条件查询实例错误日志详情。只能查询一个月之内的错误日志。
使用时需要注意：可能存在单条错误日志太大，导致整个http请求的回包太大，进而引发接口超时。一旦发生超时，建议您缩小查询时的Limit参数值，从而降低包的大小，让接口能够及时返回内容。
                 * @param req DescribeErrorLogDataRequest
                 * @return DescribeErrorLogDataOutcome
                 */
                DescribeErrorLogDataOutcome DescribeErrorLogData(const Model::DescribeErrorLogDataRequest &request);
                void DescribeErrorLogDataAsync(const Model::DescribeErrorLogDataRequest& request, const DescribeErrorLogDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeErrorLogDataOutcomeCallable DescribeErrorLogDataCallable(const Model::DescribeErrorLogDataRequest& request);

                /**
                 *本接口（DescribeInstanceAlarmEvents）用于查询实例发生的事件信息。
                 * @param req DescribeInstanceAlarmEventsRequest
                 * @return DescribeInstanceAlarmEventsOutcome
                 */
                DescribeInstanceAlarmEventsOutcome DescribeInstanceAlarmEvents(const Model::DescribeInstanceAlarmEventsRequest &request);
                void DescribeInstanceAlarmEventsAsync(const Model::DescribeInstanceAlarmEventsRequest& request, const DescribeInstanceAlarmEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceAlarmEventsOutcomeCallable DescribeInstanceAlarmEventsCallable(const Model::DescribeInstanceAlarmEventsRequest& request);

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
                 *该接口（DescribeInstanceUpgradeCheckJob）查询实例版本升级校验任务。
                 * @param req DescribeInstanceUpgradeCheckJobRequest
                 * @return DescribeInstanceUpgradeCheckJobOutcome
                 */
                DescribeInstanceUpgradeCheckJobOutcome DescribeInstanceUpgradeCheckJob(const Model::DescribeInstanceUpgradeCheckJobRequest &request);
                void DescribeInstanceUpgradeCheckJobAsync(const Model::DescribeInstanceUpgradeCheckJobRequest& request, const DescribeInstanceUpgradeCheckJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceUpgradeCheckJobOutcomeCallable DescribeInstanceUpgradeCheckJobCallable(const Model::DescribeInstanceUpgradeCheckJobRequest& request);

                /**
                 *本接口（DescribeInstanceUpgradeType）用于查询数据库实例升级类型。
                 * @param req DescribeInstanceUpgradeTypeRequest
                 * @return DescribeInstanceUpgradeTypeOutcome
                 */
                DescribeInstanceUpgradeTypeOutcome DescribeInstanceUpgradeType(const Model::DescribeInstanceUpgradeTypeRequest &request);
                void DescribeInstanceUpgradeTypeAsync(const Model::DescribeInstanceUpgradeTypeRequest& request, const DescribeInstanceUpgradeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceUpgradeTypeOutcomeCallable DescribeInstanceUpgradeTypeCallable(const Model::DescribeInstanceUpgradeTypeRequest& request);

                /**
                 *该接口用于查询实例本地binlog保留策略。
                 * @param req DescribeLocalBinlogConfigRequest
                 * @return DescribeLocalBinlogConfigOutcome
                 */
                DescribeLocalBinlogConfigOutcome DescribeLocalBinlogConfig(const Model::DescribeLocalBinlogConfigRequest &request);
                void DescribeLocalBinlogConfigAsync(const Model::DescribeLocalBinlogConfigRequest& request, const DescribeLocalBinlogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLocalBinlogConfigOutcomeCallable DescribeLocalBinlogConfigCallable(const Model::DescribeLocalBinlogConfigRequest& request);

                /**
                 *该接口（DescribeParamTemplateInfo）用于查询参数模板详情，全地域公共参数Region均为ap-guangzhou。
                 * @param req DescribeParamTemplateInfoRequest
                 * @return DescribeParamTemplateInfoOutcome
                 */
                DescribeParamTemplateInfoOutcome DescribeParamTemplateInfo(const Model::DescribeParamTemplateInfoRequest &request);
                void DescribeParamTemplateInfoAsync(const Model::DescribeParamTemplateInfoRequest& request, const DescribeParamTemplateInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeParamTemplateInfoOutcomeCallable DescribeParamTemplateInfoCallable(const Model::DescribeParamTemplateInfoRequest& request);

                /**
                 *该接口（DescribeParamTemplates）查询参数模板列表，全地域公共参数Region均为ap-guangzhou。
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
                 *查询代理规格配置
                 * @param req DescribeProxyCustomConfRequest
                 * @return DescribeProxyCustomConfOutcome
                 */
                DescribeProxyCustomConfOutcome DescribeProxyCustomConf(const Model::DescribeProxyCustomConfRequest &request);
                void DescribeProxyCustomConfAsync(const Model::DescribeProxyCustomConfRequest& request, const DescribeProxyCustomConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProxyCustomConfOutcomeCallable DescribeProxyCustomConfCallable(const Model::DescribeProxyCustomConfRequest& request);

                /**
                 *查询实例支持代理版本和参数
                 * @param req DescribeProxySupportParamRequest
                 * @return DescribeProxySupportParamOutcome
                 */
                DescribeProxySupportParamOutcome DescribeProxySupportParam(const Model::DescribeProxySupportParamRequest &request);
                void DescribeProxySupportParamAsync(const Model::DescribeProxySupportParamRequest& request, const DescribeProxySupportParamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProxySupportParamOutcomeCallable DescribeProxySupportParamCallable(const Model::DescribeProxySupportParamRequest& request);

                /**
                 *本接口(DescribeRemoteBackupConfig)用于查询数据库异地备份配置信息。
                 * @param req DescribeRemoteBackupConfigRequest
                 * @return DescribeRemoteBackupConfigOutcome
                 */
                DescribeRemoteBackupConfigOutcome DescribeRemoteBackupConfig(const Model::DescribeRemoteBackupConfigRequest &request);
                void DescribeRemoteBackupConfigAsync(const Model::DescribeRemoteBackupConfigRequest& request, const DescribeRemoteBackupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRemoteBackupConfigOutcomeCallable DescribeRemoteBackupConfigCallable(const Model::DescribeRemoteBackupConfigRequest& request);

                /**
                 *本接口（DescribeRoGroups）用于查询云数据库实例的所有的 RO 组的信息。
                 * @param req DescribeRoGroupsRequest
                 * @return DescribeRoGroupsOutcome
                 */
                DescribeRoGroupsOutcome DescribeRoGroups(const Model::DescribeRoGroupsRequest &request);
                void DescribeRoGroupsAsync(const Model::DescribeRoGroupsRequest& request, const DescribeRoGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRoGroupsOutcomeCallable DescribeRoGroupsCallable(const Model::DescribeRoGroupsRequest& request);

                /**
                 *本接口(DescribeRoMinScale)用于获取只读实例购买、升级时的最小规格。
                 * @param req DescribeRoMinScaleRequest
                 * @return DescribeRoMinScaleOutcome
                 */
                DescribeRoMinScaleOutcome DescribeRoMinScale(const Model::DescribeRoMinScaleRequest &request);
                void DescribeRoMinScaleAsync(const Model::DescribeRoMinScaleRequest& request, const DescribeRoMinScaleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRoMinScaleOutcomeCallable DescribeRoMinScaleCallable(const Model::DescribeRoMinScaleRequest& request);

                /**
                 *本接口(DescribeRollbackRangeTime)用于查询云数据库实例可回档的时间范围。
                 * @param req DescribeRollbackRangeTimeRequest
                 * @return DescribeRollbackRangeTimeOutcome
                 */
                DescribeRollbackRangeTimeOutcome DescribeRollbackRangeTime(const Model::DescribeRollbackRangeTimeRequest &request);
                void DescribeRollbackRangeTimeAsync(const Model::DescribeRollbackRangeTimeRequest& request, const DescribeRollbackRangeTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRollbackRangeTimeOutcomeCallable DescribeRollbackRangeTimeCallable(const Model::DescribeRollbackRangeTimeRequest& request);

                /**
                 *本接口(DescribeRollbackTaskDetail)用于查询云数据库实例回档任务详情。
                 * @param req DescribeRollbackTaskDetailRequest
                 * @return DescribeRollbackTaskDetailOutcome
                 */
                DescribeRollbackTaskDetailOutcome DescribeRollbackTaskDetail(const Model::DescribeRollbackTaskDetailRequest &request);
                void DescribeRollbackTaskDetailAsync(const Model::DescribeRollbackTaskDetailRequest& request, const DescribeRollbackTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRollbackTaskDetailOutcomeCallable DescribeRollbackTaskDetailCallable(const Model::DescribeRollbackTaskDetailRequest& request);

                /**
                 *查询 SSL 开通情况。如果已经开通 SSL ，会同步返回证书下载链接。
                 * @param req DescribeSSLStatusRequest
                 * @return DescribeSSLStatusOutcome
                 */
                DescribeSSLStatusOutcome DescribeSSLStatus(const Model::DescribeSSLStatusRequest &request);
                void DescribeSSLStatusAsync(const Model::DescribeSSLStatusRequest& request, const DescribeSSLStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSSLStatusOutcomeCallable DescribeSSLStatusCallable(const Model::DescribeSSLStatusRequest& request);

                /**
                 *本接口（DescribeSlowLogData）用于使用条件检索实例的慢日志。只允许查看一个月之内的慢日志。
使用时需要注意：可能存在单条慢日志太大，导致整个http请求的回包太大，进而引发接口超时。一旦发生超时，建议您缩小查询时的Limit参数值，从而降低包的大小，让接口能够及时返回内容。
                 * @param req DescribeSlowLogDataRequest
                 * @return DescribeSlowLogDataOutcome
                 */
                DescribeSlowLogDataOutcome DescribeSlowLogData(const Model::DescribeSlowLogDataRequest &request);
                void DescribeSlowLogDataAsync(const Model::DescribeSlowLogDataRequest& request, const DescribeSlowLogDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSlowLogDataOutcomeCallable DescribeSlowLogDataCallable(const Model::DescribeSlowLogDataRequest& request);

                /**
                 *本接口(DescribeSlowLogs)用于获取云数据库实例的慢查询日志。说明：若单次查询数据量过大，则有可能响应超时，建议缩短单次查询时间范围，如一小时，避免导致超时。
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
                 *本接口(DescribeTableColumns)用于查询云数据库实例的指定数据库表的列信息，仅支持主实例和灾备实例。
                 * @param req DescribeTableColumnsRequest
                 * @return DescribeTableColumnsOutcome
                 */
                DescribeTableColumnsOutcome DescribeTableColumns(const Model::DescribeTableColumnsRequest &request);
                void DescribeTableColumnsAsync(const Model::DescribeTableColumnsRequest& request, const DescribeTableColumnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTableColumnsOutcomeCallable DescribeTableColumnsCallable(const Model::DescribeTableColumnsRequest& request);

                /**
                 *本接口(DescribeTables)用于查询云数据库实例的数据库表信息，仅支持主实例和灾备实例，不支持只读实例。
                 * @param req DescribeTablesRequest
                 * @return DescribeTablesOutcome
                 */
                DescribeTablesOutcome DescribeTables(const Model::DescribeTablesRequest &request);
                void DescribeTablesAsync(const Model::DescribeTablesRequest& request, const DescribeTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTablesOutcomeCallable DescribeTablesCallable(const Model::DescribeTablesRequest& request);

                /**
                 *本接口(DescribeTagsOfInstanceIds)用于获取云数据库实例的标签信息。
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
                 *本接口(DescribeUploadedFiles)用于查询用户导入的SQL文件列表，全地域公共参数Region均为ap-shanghai。
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
                 *本接口(InquiryPriceUpgradeInstances)用于查询云数据库实例升级的价格，支持查询按量计费或者包年包月实例的升级价格，实例类型支持主实例、灾备实例和只读实例。
                 * @param req InquiryPriceUpgradeInstancesRequest
                 * @return InquiryPriceUpgradeInstancesOutcome
                 */
                InquiryPriceUpgradeInstancesOutcome InquiryPriceUpgradeInstances(const Model::InquiryPriceUpgradeInstancesRequest &request);
                void InquiryPriceUpgradeInstancesAsync(const Model::InquiryPriceUpgradeInstancesRequest& request, const InquiryPriceUpgradeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceUpgradeInstancesOutcomeCallable InquiryPriceUpgradeInstancesCallable(const Model::InquiryPriceUpgradeInstancesRequest& request);

                /**
                 *本接口（IsolateDBInstance）用于隔离云数据库实例，隔离后不能通过IP和端口访问数据库。隔离的实例可在回收站中进行开机。若为欠费隔离，请尽快进行充值。
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
                 *本接口(ModifyAccountHost)用于修改云数据库账户的主机。
                 * @param req ModifyAccountHostRequest
                 * @return ModifyAccountHostOutcome
                 */
                ModifyAccountHostOutcome ModifyAccountHost(const Model::ModifyAccountHostRequest &request);
                void ModifyAccountHostAsync(const Model::ModifyAccountHostRequest& request, const ModifyAccountHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccountHostOutcomeCallable ModifyAccountHostCallable(const Model::ModifyAccountHostRequest& request);

                /**
                 *本接口(ModifyAccountMaxUserConnections)用于修改云数据库账户最大可用连接数。
                 * @param req ModifyAccountMaxUserConnectionsRequest
                 * @return ModifyAccountMaxUserConnectionsOutcome
                 */
                ModifyAccountMaxUserConnectionsOutcome ModifyAccountMaxUserConnections(const Model::ModifyAccountMaxUserConnectionsRequest &request);
                void ModifyAccountMaxUserConnectionsAsync(const Model::ModifyAccountMaxUserConnectionsRequest& request, const ModifyAccountMaxUserConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccountMaxUserConnectionsOutcomeCallable ModifyAccountMaxUserConnectionsCallable(const Model::ModifyAccountMaxUserConnectionsRequest& request);

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

注意，修改账号权限时，需要传入该账号下的全量权限信息。用户可以先通过 [查询云数据库账户的权限信息
](https://cloud.tencent.com/document/api/236/17500) 查询该账号下的全量权限信息，然后进行权限修改。
                 * @param req ModifyAccountPrivilegesRequest
                 * @return ModifyAccountPrivilegesOutcome
                 */
                ModifyAccountPrivilegesOutcome ModifyAccountPrivileges(const Model::ModifyAccountPrivilegesRequest &request);
                void ModifyAccountPrivilegesAsync(const Model::ModifyAccountPrivilegesRequest& request, const ModifyAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccountPrivilegesOutcomeCallable ModifyAccountPrivilegesCallable(const Model::ModifyAccountPrivilegesRequest& request);

                /**
                 *本接口(ModifyAuditConfig)用于修改云数据库审计策略的服务配置，包括审计日志保存时长等。
                 * @param req ModifyAuditConfigRequest
                 * @return ModifyAuditConfigOutcome
                 */
                ModifyAuditConfigOutcome ModifyAuditConfig(const Model::ModifyAuditConfigRequest &request);
                void ModifyAuditConfigAsync(const Model::ModifyAuditConfigRequest& request, const ModifyAuditConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAuditConfigOutcomeCallable ModifyAuditConfigCallable(const Model::ModifyAuditConfigRequest& request);

                /**
                 *不再支持审计规则创建

本接口(ModifyAuditRule)用于修改用户的审计规则。
                 * @param req ModifyAuditRuleRequest
                 * @return ModifyAuditRuleOutcome
                 */
                ModifyAuditRuleOutcome ModifyAuditRule(const Model::ModifyAuditRuleRequest &request);
                void ModifyAuditRuleAsync(const Model::ModifyAuditRuleRequest& request, const ModifyAuditRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAuditRuleOutcomeCallable ModifyAuditRuleCallable(const Model::ModifyAuditRuleRequest& request);

                /**
                 *修改审计规则模板
                 * @param req ModifyAuditRuleTemplatesRequest
                 * @return ModifyAuditRuleTemplatesOutcome
                 */
                ModifyAuditRuleTemplatesOutcome ModifyAuditRuleTemplates(const Model::ModifyAuditRuleTemplatesRequest &request);
                void ModifyAuditRuleTemplatesAsync(const Model::ModifyAuditRuleTemplatesRequest& request, const ModifyAuditRuleTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAuditRuleTemplatesOutcomeCallable ModifyAuditRuleTemplatesCallable(const Model::ModifyAuditRuleTemplatesRequest& request);

                /**
                 *本接口(ModifyAuditService)用于修改云数据库审计日志保存时长、审计规则等服务配置
                 * @param req ModifyAuditServiceRequest
                 * @return ModifyAuditServiceOutcome
                 */
                ModifyAuditServiceOutcome ModifyAuditService(const Model::ModifyAuditServiceRequest &request);
                void ModifyAuditServiceAsync(const Model::ModifyAuditServiceRequest& request, const ModifyAuditServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAuditServiceOutcomeCallable ModifyAuditServiceCallable(const Model::ModifyAuditServiceRequest& request);

                /**
                 *本接口（ModifyAutoRenewFlag）用于修改云数据库实例的自动续费标记。仅支持包年包月的实例设置自动续费标记。
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
                 *该接口用于修改用户当前地域的备份文件限制下载来源，可以设置内外网均可下载、仅内网可下载，或内网指定的vpc、ip可以下载。
                 * @param req ModifyBackupDownloadRestrictionRequest
                 * @return ModifyBackupDownloadRestrictionOutcome
                 */
                ModifyBackupDownloadRestrictionOutcome ModifyBackupDownloadRestriction(const Model::ModifyBackupDownloadRestrictionRequest &request);
                void ModifyBackupDownloadRestrictionAsync(const Model::ModifyBackupDownloadRestrictionRequest& request, const ModifyBackupDownloadRestrictionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBackupDownloadRestrictionOutcomeCallable ModifyBackupDownloadRestrictionCallable(const Model::ModifyBackupDownloadRestrictionRequest& request);

                /**
                 *本接口(ModifyBackupEncryptionStatus)用于设置实例备份文件是否加密。
                 * @param req ModifyBackupEncryptionStatusRequest
                 * @return ModifyBackupEncryptionStatusOutcome
                 */
                ModifyBackupEncryptionStatusOutcome ModifyBackupEncryptionStatus(const Model::ModifyBackupEncryptionStatusRequest &request);
                void ModifyBackupEncryptionStatusAsync(const Model::ModifyBackupEncryptionStatusRequest& request, const ModifyBackupEncryptionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBackupEncryptionStatusOutcomeCallable ModifyBackupEncryptionStatusCallable(const Model::ModifyBackupEncryptionStatusRequest& request);

                /**
                 *修改代理地址描述信息
                 * @param req ModifyCdbProxyAddressDescRequest
                 * @return ModifyCdbProxyAddressDescOutcome
                 */
                ModifyCdbProxyAddressDescOutcome ModifyCdbProxyAddressDesc(const Model::ModifyCdbProxyAddressDescRequest &request);
                void ModifyCdbProxyAddressDescAsync(const Model::ModifyCdbProxyAddressDescRequest& request, const ModifyCdbProxyAddressDescAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCdbProxyAddressDescOutcomeCallable ModifyCdbProxyAddressDescCallable(const Model::ModifyCdbProxyAddressDescRequest& request);

                /**
                 *修改数据库代理地址VPC信息
                 * @param req ModifyCdbProxyAddressVipAndVPortRequest
                 * @return ModifyCdbProxyAddressVipAndVPortOutcome
                 */
                ModifyCdbProxyAddressVipAndVPortOutcome ModifyCdbProxyAddressVipAndVPort(const Model::ModifyCdbProxyAddressVipAndVPortRequest &request);
                void ModifyCdbProxyAddressVipAndVPortAsync(const Model::ModifyCdbProxyAddressVipAndVPortRequest& request, const ModifyCdbProxyAddressVipAndVPortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCdbProxyAddressVipAndVPortOutcomeCallable ModifyCdbProxyAddressVipAndVPortCallable(const Model::ModifyCdbProxyAddressVipAndVPortRequest& request);

                /**
                 *配置数据库代理参数
                 * @param req ModifyCdbProxyParamRequest
                 * @return ModifyCdbProxyParamOutcome
                 */
                ModifyCdbProxyParamOutcome ModifyCdbProxyParam(const Model::ModifyCdbProxyParamRequest &request);
                void ModifyCdbProxyParamAsync(const Model::ModifyCdbProxyParamRequest& request, const ModifyCdbProxyParamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCdbProxyParamOutcomeCallable ModifyCdbProxyParamCallable(const Model::ModifyCdbProxyParamRequest& request);

                /**
                 *开启/关闭CDB慢日志、错误日志投递CLS
                 * @param req ModifyDBInstanceLogToCLSRequest
                 * @return ModifyDBInstanceLogToCLSOutcome
                 */
                ModifyDBInstanceLogToCLSOutcome ModifyDBInstanceLogToCLS(const Model::ModifyDBInstanceLogToCLSRequest &request);
                void ModifyDBInstanceLogToCLSAsync(const Model::ModifyDBInstanceLogToCLSRequest& request, const ModifyDBInstanceLogToCLSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceLogToCLSOutcomeCallable ModifyDBInstanceLogToCLSCallable(const Model::ModifyDBInstanceLogToCLSRequest& request);

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
                 *本接口（ModifyDBInstanceReadOnlyStatus）用户设置MySQL云数据库实例为只读
                 * @param req ModifyDBInstanceReadOnlyStatusRequest
                 * @return ModifyDBInstanceReadOnlyStatusOutcome
                 */
                ModifyDBInstanceReadOnlyStatusOutcome ModifyDBInstanceReadOnlyStatus(const Model::ModifyDBInstanceReadOnlyStatusRequest &request);
                void ModifyDBInstanceReadOnlyStatusAsync(const Model::ModifyDBInstanceReadOnlyStatusRequest& request, const ModifyDBInstanceReadOnlyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceReadOnlyStatusOutcomeCallable ModifyDBInstanceReadOnlyStatusCallable(const Model::ModifyDBInstanceReadOnlyStatusRequest& request);

                /**
                 *本接口(ModifyDBInstanceSecurityGroups)用于修改实例绑定的安全组。
                 * @param req ModifyDBInstanceSecurityGroupsRequest
                 * @return ModifyDBInstanceSecurityGroupsOutcome
                 */
                ModifyDBInstanceSecurityGroupsOutcome ModifyDBInstanceSecurityGroups(const Model::ModifyDBInstanceSecurityGroupsRequest &request);
                void ModifyDBInstanceSecurityGroupsAsync(const Model::ModifyDBInstanceSecurityGroupsRequest& request, const ModifyDBInstanceSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceSecurityGroupsOutcomeCallable ModifyDBInstanceSecurityGroupsCallable(const Model::ModifyDBInstanceSecurityGroupsRequest& request);

                /**
                 *本接口（ModifyDBInstanceVipVport）用于修改云数据库实例的IP和端口号，也可进行基础网络转 VPC 网络和 VPC 网络下的子网变更。
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
                 *本接口（ModifyInstancePasswordComplexity）用于修改云数据库实例的密码复杂度。
                 * @param req ModifyInstancePasswordComplexityRequest
                 * @return ModifyInstancePasswordComplexityOutcome
                 */
                ModifyInstancePasswordComplexityOutcome ModifyInstancePasswordComplexity(const Model::ModifyInstancePasswordComplexityRequest &request);
                void ModifyInstancePasswordComplexityAsync(const Model::ModifyInstancePasswordComplexityRequest& request, const ModifyInstancePasswordComplexityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstancePasswordComplexityOutcomeCallable ModifyInstancePasswordComplexityCallable(const Model::ModifyInstancePasswordComplexityRequest& request);

                /**
                 *本接口(ModifyInstanceTag)用于对实例标签进行添加、修改或者删除。
                 * @param req ModifyInstanceTagRequest
                 * @return ModifyInstanceTagOutcome
                 */
                ModifyInstanceTagOutcome ModifyInstanceTag(const Model::ModifyInstanceTagRequest &request);
                void ModifyInstanceTagAsync(const Model::ModifyInstanceTagRequest& request, const ModifyInstanceTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceTagOutcomeCallable ModifyInstanceTagCallable(const Model::ModifyInstanceTagRequest& request);

                /**
                 *该接口用于修改实例本地binlog保留策略。
                 * @param req ModifyLocalBinlogConfigRequest
                 * @return ModifyLocalBinlogConfigOutcome
                 */
                ModifyLocalBinlogConfigOutcome ModifyLocalBinlogConfig(const Model::ModifyLocalBinlogConfigRequest &request);
                void ModifyLocalBinlogConfigAsync(const Model::ModifyLocalBinlogConfigRequest& request, const ModifyLocalBinlogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLocalBinlogConfigOutcomeCallable ModifyLocalBinlogConfigCallable(const Model::ModifyLocalBinlogConfigRequest& request);

                /**
                 *修改置放群组的名称或者描述
                 * @param req ModifyNameOrDescByDpIdRequest
                 * @return ModifyNameOrDescByDpIdOutcome
                 */
                ModifyNameOrDescByDpIdOutcome ModifyNameOrDescByDpId(const Model::ModifyNameOrDescByDpIdRequest &request);
                void ModifyNameOrDescByDpIdAsync(const Model::ModifyNameOrDescByDpIdRequest& request, const ModifyNameOrDescByDpIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNameOrDescByDpIdOutcomeCallable ModifyNameOrDescByDpIdCallable(const Model::ModifyNameOrDescByDpIdRequest& request);

                /**
                 *该接口（ModifyParamTemplate）用于修改参数模板，全地域公共参数Region均为ap-guangzhou。
                 * @param req ModifyParamTemplateRequest
                 * @return ModifyParamTemplateOutcome
                 */
                ModifyParamTemplateOutcome ModifyParamTemplate(const Model::ModifyParamTemplateRequest &request);
                void ModifyParamTemplateAsync(const Model::ModifyParamTemplateRequest& request, const ModifyParamTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyParamTemplateOutcomeCallable ModifyParamTemplateCallable(const Model::ModifyParamTemplateRequest& request);

                /**
                 *该接口（ModifyProtectMode）用于修改实例的同步方式。
说明：仅专属集群可调用，该接口即将下线。
                 * @param req ModifyProtectModeRequest
                 * @return ModifyProtectModeOutcome
                 */
                ModifyProtectModeOutcome ModifyProtectMode(const Model::ModifyProtectModeRequest &request);
                void ModifyProtectModeAsync(const Model::ModifyProtectModeRequest& request, const ModifyProtectModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyProtectModeOutcomeCallable ModifyProtectModeCallable(const Model::ModifyProtectModeRequest& request);

                /**
                 *本接口(ModifyRemoteBackupConfig)用于修改数据库异地备份配置信息。
                 * @param req ModifyRemoteBackupConfigRequest
                 * @return ModifyRemoteBackupConfigOutcome
                 */
                ModifyRemoteBackupConfigOutcome ModifyRemoteBackupConfig(const Model::ModifyRemoteBackupConfigRequest &request);
                void ModifyRemoteBackupConfigAsync(const Model::ModifyRemoteBackupConfigRequest& request, const ModifyRemoteBackupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRemoteBackupConfigOutcomeCallable ModifyRemoteBackupConfigCallable(const Model::ModifyRemoteBackupConfigRequest& request);

                /**
                 *本接口（ModifyRoGroupInfo）用于更新云数据库只读组的信息。包括设置实例延迟超限剔除策略，设置只读实例读权重，设置复制延迟时间等。
                 * @param req ModifyRoGroupInfoRequest
                 * @return ModifyRoGroupInfoOutcome
                 */
                ModifyRoGroupInfoOutcome ModifyRoGroupInfo(const Model::ModifyRoGroupInfoRequest &request);
                void ModifyRoGroupInfoAsync(const Model::ModifyRoGroupInfoRequest& request, const ModifyRoGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRoGroupInfoOutcomeCallable ModifyRoGroupInfoCallable(const Model::ModifyRoGroupInfoRequest& request);

                /**
                 *本接口(ModifyTimeWindow)用于更新云数据库实例的维护时间窗口。
                 * @param req ModifyTimeWindowRequest
                 * @return ModifyTimeWindowOutcome
                 */
                ModifyTimeWindowOutcome ModifyTimeWindow(const Model::ModifyTimeWindowRequest &request);
                void ModifyTimeWindowAsync(const Model::ModifyTimeWindowRequest& request, const ModifyTimeWindowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTimeWindowOutcomeCallable ModifyTimeWindowCallable(const Model::ModifyTimeWindowRequest& request);

                /**
                 *本接口(OfflineIsolatedInstances)用于立即下线隔离状态的云数据库实例。进行操作的实例状态必须为隔离状态，即通过 [查询实例列表](https://cloud.tencent.com/document/api/236/15872) 接口查询到 Status 值为 5 的实例。

该接口为异步操作，部分资源的回收可能存在延迟。您可以通过使用 [查询实例列表](https://cloud.tencent.com/document/api/236/15872) 接口，指定实例 InstanceId 和状态 Status 为 [5,6,7] 进行查询，若返回实例为空，则实例资源已全部释放。

注意，实例下线后，相关资源和数据将无法找回，请谨慎操作。
                 * @param req OfflineIsolatedInstancesRequest
                 * @return OfflineIsolatedInstancesOutcome
                 */
                OfflineIsolatedInstancesOutcome OfflineIsolatedInstances(const Model::OfflineIsolatedInstancesRequest &request);
                void OfflineIsolatedInstancesAsync(const Model::OfflineIsolatedInstancesRequest& request, const OfflineIsolatedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OfflineIsolatedInstancesOutcomeCallable OfflineIsolatedInstancesCallable(const Model::OfflineIsolatedInstancesRequest& request);

                /**
                 *CDB实例开通审计服务
                 * @param req OpenAuditServiceRequest
                 * @return OpenAuditServiceOutcome
                 */
                OpenAuditServiceOutcome OpenAuditService(const Model::OpenAuditServiceRequest &request);
                void OpenAuditServiceAsync(const Model::OpenAuditServiceRequest& request, const OpenAuditServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenAuditServiceOutcomeCallable OpenAuditServiceCallable(const Model::OpenAuditServiceRequest& request);

                /**
                 *本接口（OpenDBInstanceEncryption）用于启用实例数据存储加密功能，支持用户指定自定义密钥。

注意，启用实例数据存储加密之前，需要进行以下操作：

1、进行 [实例初始化](https://cloud.tencent.com/document/api/236/15873) 操作；

2、开启 [KMS服务](https://console.cloud.tencent.com/kms2)；

3、对云数据库(MySQL)[授予访问KMS密钥的权限](https://console.cloud.tencent.com/cam/role)，角色名为MySQL_QCSRole，预设策略名为QcloudAccessForMySQLRole；

该 API 耗时可能到10s，客户端可能超时，如果调用 API 返回 InternalError ，请您调用DescribeDBInstanceInfo 确认后端加密是否开通成功。
                 * @param req OpenDBInstanceEncryptionRequest
                 * @return OpenDBInstanceEncryptionOutcome
                 */
                OpenDBInstanceEncryptionOutcome OpenDBInstanceEncryption(const Model::OpenDBInstanceEncryptionRequest &request);
                void OpenDBInstanceEncryptionAsync(const Model::OpenDBInstanceEncryptionRequest& request, const OpenDBInstanceEncryptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenDBInstanceEncryptionOutcomeCallable OpenDBInstanceEncryptionCallable(const Model::OpenDBInstanceEncryptionRequest& request);

                /**
                 *本接口(OpenDBInstanceGTID)用于开启云数据库实例的 GTID，只支持版本为 5.6 以及以上的实例。
                 * @param req OpenDBInstanceGTIDRequest
                 * @return OpenDBInstanceGTIDOutcome
                 */
                OpenDBInstanceGTIDOutcome OpenDBInstanceGTID(const Model::OpenDBInstanceGTIDRequest &request);
                void OpenDBInstanceGTIDAsync(const Model::OpenDBInstanceGTIDRequest& request, const OpenDBInstanceGTIDAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenDBInstanceGTIDOutcomeCallable OpenDBInstanceGTIDCallable(const Model::OpenDBInstanceGTIDRequest& request);

                /**
                 *开启SSL连接功能。
                 * @param req OpenSSLRequest
                 * @return OpenSSLOutcome
                 */
                OpenSSLOutcome OpenSSL(const Model::OpenSSLRequest &request);
                void OpenSSLAsync(const Model::OpenSSLRequest& request, const OpenSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenSSLOutcomeCallable OpenSSLCallable(const Model::OpenSSLRequest& request);

                /**
                 *本接口(OpenWanService)用于开通实例外网访问。

注意，实例开通外网访问之前，需要先将实例进行 [实例初始化](https://cloud.tencent.com/document/api/236/15873) 操作。
                 * @param req OpenWanServiceRequest
                 * @return OpenWanServiceOutcome
                 */
                OpenWanServiceOutcome OpenWanService(const Model::OpenWanServiceRequest &request);
                void OpenWanServiceAsync(const Model::OpenWanServiceRequest& request, const OpenWanServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenWanServiceOutcomeCallable OpenWanServiceCallable(const Model::OpenWanServiceRequest& request);

                /**
                 *本接口（ReleaseIsolatedDBInstances）用于恢复已隔离云数据库实例。仅用于按量计费实例的解隔离，包年包月实例的解隔离请使用 RenewDBInstance 。
                 * @param req ReleaseIsolatedDBInstancesRequest
                 * @return ReleaseIsolatedDBInstancesOutcome
                 */
                ReleaseIsolatedDBInstancesOutcome ReleaseIsolatedDBInstances(const Model::ReleaseIsolatedDBInstancesRequest &request);
                void ReleaseIsolatedDBInstancesAsync(const Model::ReleaseIsolatedDBInstancesRequest& request, const ReleaseIsolatedDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReleaseIsolatedDBInstancesOutcomeCallable ReleaseIsolatedDBInstancesCallable(const Model::ReleaseIsolatedDBInstancesRequest& request);

                /**
                 *重新负载均衡数据库代理
                 * @param req ReloadBalanceProxyNodeRequest
                 * @return ReloadBalanceProxyNodeOutcome
                 */
                ReloadBalanceProxyNodeOutcome ReloadBalanceProxyNode(const Model::ReloadBalanceProxyNodeRequest &request);
                void ReloadBalanceProxyNodeAsync(const Model::ReloadBalanceProxyNodeRequest& request, const ReloadBalanceProxyNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReloadBalanceProxyNodeOutcomeCallable ReloadBalanceProxyNodeCallable(const Model::ReloadBalanceProxyNodeRequest& request);

                /**
                 *本接口（RenewDBInstance）用于续费云数据库实例，支持付费模式为包年包月的实例。按量计费实例可通过该接口续费为包年包月的实例。
                 * @param req RenewDBInstanceRequest
                 * @return RenewDBInstanceOutcome
                 */
                RenewDBInstanceOutcome RenewDBInstance(const Model::RenewDBInstanceRequest &request);
                void RenewDBInstanceAsync(const Model::RenewDBInstanceRequest& request, const RenewDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewDBInstanceOutcomeCallable RenewDBInstanceCallable(const Model::RenewDBInstanceRequest& request);

                /**
                 *手动刷新轮转密码
                 * @param req ResetPasswordRequest
                 * @return ResetPasswordOutcome
                 */
                ResetPasswordOutcome ResetPassword(const Model::ResetPasswordRequest &request);
                void ResetPasswordAsync(const Model::ResetPasswordRequest& request, const ResetPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetPasswordOutcomeCallable ResetPasswordCallable(const Model::ResetPasswordRequest& request);

                /**
                 *重置实例ROOT账号，初始化账号权限
                 * @param req ResetRootAccountRequest
                 * @return ResetRootAccountOutcome
                 */
                ResetRootAccountOutcome ResetRootAccount(const Model::ResetRootAccountRequest &request);
                void ResetRootAccountAsync(const Model::ResetRootAccountRequest& request, const ResetRootAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetRootAccountOutcomeCallable ResetRootAccountCallable(const Model::ResetRootAccountRequest& request);

                /**
                 *本接口（RestartDBInstances）用于重启云数据库实例。

注意：
1、本接口支持主实例、只读实例、灾备实例进行重启操作。
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
                 *通过该 API，可以开启 CPU 弹性扩容，包括一次性的手动扩容以及自动弹性扩容。
                 * @param req StartCpuExpandRequest
                 * @return StartCpuExpandOutcome
                 */
                StartCpuExpandOutcome StartCpuExpand(const Model::StartCpuExpandRequest &request);
                void StartCpuExpandAsync(const Model::StartCpuExpandRequest& request, const StartCpuExpandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartCpuExpandOutcomeCallable StartCpuExpandCallable(const Model::StartCpuExpandRequest& request);

                /**
                 *本接口（StartReplication）用于开启 RO 复制，从主实例同步数据。
                 * @param req StartReplicationRequest
                 * @return StartReplicationOutcome
                 */
                StartReplicationOutcome StartReplication(const Model::StartReplicationRequest &request);
                void StartReplicationAsync(const Model::StartReplicationRequest& request, const StartReplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartReplicationOutcomeCallable StartReplicationCallable(const Model::StartReplicationRequest& request);

                /**
                 *通过该API，可以关闭 CPU 弹性扩容。
                 * @param req StopCpuExpandRequest
                 * @return StopCpuExpandOutcome
                 */
                StopCpuExpandOutcome StopCpuExpand(const Model::StopCpuExpandRequest &request);
                void StopCpuExpandAsync(const Model::StopCpuExpandRequest& request, const StopCpuExpandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopCpuExpandOutcomeCallable StopCpuExpandCallable(const Model::StopCpuExpandRequest& request);

                /**
                 *本接口(StopDBImportJob)用于终止数据导入任务。
                 * @param req StopDBImportJobRequest
                 * @return StopDBImportJobOutcome
                 */
                StopDBImportJobOutcome StopDBImportJob(const Model::StopDBImportJobRequest &request);
                void StopDBImportJobAsync(const Model::StopDBImportJobRequest& request, const StopDBImportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopDBImportJobOutcomeCallable StopDBImportJobCallable(const Model::StopDBImportJobRequest& request);

                /**
                 *本接口（StopReplication）用于停止 RO 复制，中断从主实例同步数据。
                 * @param req StopReplicationRequest
                 * @return StopReplicationOutcome
                 */
                StopReplicationOutcome StopReplication(const Model::StopReplicationRequest &request);
                void StopReplicationAsync(const Model::StopReplicationRequest& request, const StopReplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopReplicationOutcomeCallable StopReplicationCallable(const Model::StopReplicationRequest& request);

                /**
                 *本接口(StopRollback) 用于撤销实例正在进行的回档任务，该接口返回一个异步任务id。 撤销结果可以通过 DescribeAsyncRequestInfo 查询任务的执行情况。
                 * @param req StopRollbackRequest
                 * @return StopRollbackOutcome
                 */
                StopRollbackOutcome StopRollback(const Model::StopRollbackRequest &request);
                void StopRollbackAsync(const Model::StopRollbackRequest& request, const StopRollbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopRollbackOutcomeCallable StopRollbackCallable(const Model::StopRollbackRequest& request);

                /**
                 *该接口（SubmitInstanceUpgradeCheckJob）提交实例版本升级校验任务。
                 * @param req SubmitInstanceUpgradeCheckJobRequest
                 * @return SubmitInstanceUpgradeCheckJobOutcome
                 */
                SubmitInstanceUpgradeCheckJobOutcome SubmitInstanceUpgradeCheckJob(const Model::SubmitInstanceUpgradeCheckJobRequest &request);
                void SubmitInstanceUpgradeCheckJobAsync(const Model::SubmitInstanceUpgradeCheckJobRequest& request, const SubmitInstanceUpgradeCheckJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitInstanceUpgradeCheckJobOutcomeCallable SubmitInstanceUpgradeCheckJobCallable(const Model::SubmitInstanceUpgradeCheckJobRequest& request);

                /**
                 *数据库代理配置变更或则升级版本后手动发起立即切换
                 * @param req SwitchCDBProxyRequest
                 * @return SwitchCDBProxyOutcome
                 */
                SwitchCDBProxyOutcome SwitchCDBProxy(const Model::SwitchCDBProxyRequest &request);
                void SwitchCDBProxyAsync(const Model::SwitchCDBProxyRequest& request, const SwitchCDBProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SwitchCDBProxyOutcomeCallable SwitchCDBProxyCallable(const Model::SwitchCDBProxyRequest& request);

                /**
                 *该接口 (SwitchDBInstanceMasterSlave) 支持用户主动切换实例主从角色。
                 * @param req SwitchDBInstanceMasterSlaveRequest
                 * @return SwitchDBInstanceMasterSlaveOutcome
                 */
                SwitchDBInstanceMasterSlaveOutcome SwitchDBInstanceMasterSlave(const Model::SwitchDBInstanceMasterSlaveRequest &request);
                void SwitchDBInstanceMasterSlaveAsync(const Model::SwitchDBInstanceMasterSlaveRequest& request, const SwitchDBInstanceMasterSlaveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SwitchDBInstanceMasterSlaveOutcomeCallable SwitchDBInstanceMasterSlaveCallable(const Model::SwitchDBInstanceMasterSlaveRequest& request);

                /**
                 *本接口（SwitchDrInstanceToMaster）用于将云数据库灾备实例切换为主实例，注意请求必须发到灾备实例所在的地域。
                 * @param req SwitchDrInstanceToMasterRequest
                 * @return SwitchDrInstanceToMasterOutcome
                 */
                SwitchDrInstanceToMasterOutcome SwitchDrInstanceToMaster(const Model::SwitchDrInstanceToMasterRequest &request);
                void SwitchDrInstanceToMasterAsync(const Model::SwitchDrInstanceToMasterRequest& request, const SwitchDrInstanceToMasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SwitchDrInstanceToMasterOutcomeCallable SwitchDrInstanceToMasterCallable(const Model::SwitchDrInstanceToMasterRequest& request);

                /**
                 *本接口(SwitchForUpgrade)用于切换访问新实例，针对主升级中的实例处于待切换状态时，用户可主动发起该流程。
                 * @param req SwitchForUpgradeRequest
                 * @return SwitchForUpgradeOutcome
                 */
                SwitchForUpgradeOutcome SwitchForUpgrade(const Model::SwitchForUpgradeRequest &request);
                void SwitchForUpgradeAsync(const Model::SwitchForUpgradeRequest& request, const SwitchForUpgradeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SwitchForUpgradeOutcomeCallable SwitchForUpgradeCallable(const Model::SwitchForUpgradeRequest& request);

                /**
                 *升级数据库代理版本
                 * @param req UpgradeCDBProxyVersionRequest
                 * @return UpgradeCDBProxyVersionOutcome
                 */
                UpgradeCDBProxyVersionOutcome UpgradeCDBProxyVersion(const Model::UpgradeCDBProxyVersionRequest &request);
                void UpgradeCDBProxyVersionAsync(const Model::UpgradeCDBProxyVersionRequest& request, const UpgradeCDBProxyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeCDBProxyVersionOutcomeCallable UpgradeCDBProxyVersionCallable(const Model::UpgradeCDBProxyVersionRequest& request);

                /**
                 *本接口(UpgradeDBInstance)用于升级或降级云数据库实例的配置，实例类型支持主实例、灾备实例和只读实例。如果进行迁移业务，请一定填写实例规格（CPU、内存），不然系统会默认以最小允许规格传参。
                 * @param req UpgradeDBInstanceRequest
                 * @return UpgradeDBInstanceOutcome
                 */
                UpgradeDBInstanceOutcome UpgradeDBInstance(const Model::UpgradeDBInstanceRequest &request);
                void UpgradeDBInstanceAsync(const Model::UpgradeDBInstanceRequest& request, const UpgradeDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeDBInstanceOutcomeCallable UpgradeDBInstanceCallable(const Model::UpgradeDBInstanceRequest& request);

                /**
                 *本接口(UpgradeDBInstanceEngineVersion)用于升级云数据库实例版本，实例类型支持主实例、灾备实例和只读实例等。
                 * @param req UpgradeDBInstanceEngineVersionRequest
                 * @return UpgradeDBInstanceEngineVersionOutcome
                 */
                UpgradeDBInstanceEngineVersionOutcome UpgradeDBInstanceEngineVersion(const Model::UpgradeDBInstanceEngineVersionRequest &request);
                void UpgradeDBInstanceEngineVersionAsync(const Model::UpgradeDBInstanceEngineVersionRequest& request, const UpgradeDBInstanceEngineVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeDBInstanceEngineVersionOutcomeCallable UpgradeDBInstanceEngineVersionCallable(const Model::UpgradeDBInstanceEngineVersionRequest& request);

                /**
                 *本接口(VerifyRootAccount)用于校验云数据库实例的 ROOT 账号是否有足够的权限进行授权操作。
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
