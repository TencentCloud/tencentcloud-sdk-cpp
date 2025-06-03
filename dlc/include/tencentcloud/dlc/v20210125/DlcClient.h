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

#ifndef TENCENTCLOUD_DLC_V20210125_DLCCLIENT_H_
#define TENCENTCLOUD_DLC_V20210125_DLCCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/dlc/v20210125/model/AddDMSPartitionsRequest.h>
#include <tencentcloud/dlc/v20210125/model/AddDMSPartitionsResponse.h>
#include <tencentcloud/dlc/v20210125/model/AddOptimizerEnginesRequest.h>
#include <tencentcloud/dlc/v20210125/model/AddOptimizerEnginesResponse.h>
#include <tencentcloud/dlc/v20210125/model/AddUsersToWorkGroupRequest.h>
#include <tencentcloud/dlc/v20210125/model/AddUsersToWorkGroupResponse.h>
#include <tencentcloud/dlc/v20210125/model/AlterDMSDatabaseRequest.h>
#include <tencentcloud/dlc/v20210125/model/AlterDMSDatabaseResponse.h>
#include <tencentcloud/dlc/v20210125/model/AlterDMSPartitionRequest.h>
#include <tencentcloud/dlc/v20210125/model/AlterDMSPartitionResponse.h>
#include <tencentcloud/dlc/v20210125/model/AlterDMSTableRequest.h>
#include <tencentcloud/dlc/v20210125/model/AlterDMSTableResponse.h>
#include <tencentcloud/dlc/v20210125/model/AssignMangedTablePropertiesRequest.h>
#include <tencentcloud/dlc/v20210125/model/AssignMangedTablePropertiesResponse.h>
#include <tencentcloud/dlc/v20210125/model/AttachUserPolicyRequest.h>
#include <tencentcloud/dlc/v20210125/model/AttachUserPolicyResponse.h>
#include <tencentcloud/dlc/v20210125/model/AttachWorkGroupPolicyRequest.h>
#include <tencentcloud/dlc/v20210125/model/AttachWorkGroupPolicyResponse.h>
#include <tencentcloud/dlc/v20210125/model/BindWorkGroupsToUserRequest.h>
#include <tencentcloud/dlc/v20210125/model/BindWorkGroupsToUserResponse.h>
#include <tencentcloud/dlc/v20210125/model/CancelNotebookSessionStatementRequest.h>
#include <tencentcloud/dlc/v20210125/model/CancelNotebookSessionStatementResponse.h>
#include <tencentcloud/dlc/v20210125/model/CancelNotebookSessionStatementBatchRequest.h>
#include <tencentcloud/dlc/v20210125/model/CancelNotebookSessionStatementBatchResponse.h>
#include <tencentcloud/dlc/v20210125/model/CancelSparkSessionBatchSQLRequest.h>
#include <tencentcloud/dlc/v20210125/model/CancelSparkSessionBatchSQLResponse.h>
#include <tencentcloud/dlc/v20210125/model/CancelTaskRequest.h>
#include <tencentcloud/dlc/v20210125/model/CancelTaskResponse.h>
#include <tencentcloud/dlc/v20210125/model/CheckDataEngineConfigPairsValidityRequest.h>
#include <tencentcloud/dlc/v20210125/model/CheckDataEngineConfigPairsValidityResponse.h>
#include <tencentcloud/dlc/v20210125/model/CheckDataEngineImageCanBeRollbackRequest.h>
#include <tencentcloud/dlc/v20210125/model/CheckDataEngineImageCanBeRollbackResponse.h>
#include <tencentcloud/dlc/v20210125/model/CheckDataEngineImageCanBeUpgradeRequest.h>
#include <tencentcloud/dlc/v20210125/model/CheckDataEngineImageCanBeUpgradeResponse.h>
#include <tencentcloud/dlc/v20210125/model/CheckLockMetaDataRequest.h>
#include <tencentcloud/dlc/v20210125/model/CheckLockMetaDataResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateCHDFSBindingProductRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateCHDFSBindingProductResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateDMSDatabaseRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateDMSDatabaseResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateDMSTableRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateDMSTableResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateDataEngineRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateDataEngineResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateDatabaseRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateDatabaseResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateExportTaskRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateExportTaskResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateImportTaskRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateImportTaskResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateInternalTableRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateInternalTableResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateNotebookSessionRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateNotebookSessionResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateNotebookSessionStatementRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateNotebookSessionStatementResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateNotebookSessionStatementSupportBatchSQLRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateNotebookSessionStatementSupportBatchSQLResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateResultDownloadRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateResultDownloadResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateScriptRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateScriptResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateSparkAppRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateSparkAppResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateSparkAppTaskRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateSparkAppTaskResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateSparkSessionBatchSQLRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateSparkSessionBatchSQLResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateSparkSubmitTaskRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateSparkSubmitTaskResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateStoreLocationRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateStoreLocationResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateTableRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateTableResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateTaskRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateTaskResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateTasksRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateTasksResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateTasksInOrderRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateTasksInOrderResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateUserRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateUserResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateWorkGroupRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateWorkGroupResponse.h>
#include <tencentcloud/dlc/v20210125/model/DeleteCHDFSBindingProductRequest.h>
#include <tencentcloud/dlc/v20210125/model/DeleteCHDFSBindingProductResponse.h>
#include <tencentcloud/dlc/v20210125/model/DeleteDataEngineRequest.h>
#include <tencentcloud/dlc/v20210125/model/DeleteDataEngineResponse.h>
#include <tencentcloud/dlc/v20210125/model/DeleteNotebookSessionRequest.h>
#include <tencentcloud/dlc/v20210125/model/DeleteNotebookSessionResponse.h>
#include <tencentcloud/dlc/v20210125/model/DeleteScriptRequest.h>
#include <tencentcloud/dlc/v20210125/model/DeleteScriptResponse.h>
#include <tencentcloud/dlc/v20210125/model/DeleteSparkAppRequest.h>
#include <tencentcloud/dlc/v20210125/model/DeleteSparkAppResponse.h>
#include <tencentcloud/dlc/v20210125/model/DeleteTableRequest.h>
#include <tencentcloud/dlc/v20210125/model/DeleteTableResponse.h>
#include <tencentcloud/dlc/v20210125/model/DeleteThirdPartyAccessUserRequest.h>
#include <tencentcloud/dlc/v20210125/model/DeleteThirdPartyAccessUserResponse.h>
#include <tencentcloud/dlc/v20210125/model/DeleteUserRequest.h>
#include <tencentcloud/dlc/v20210125/model/DeleteUserResponse.h>
#include <tencentcloud/dlc/v20210125/model/DeleteUsersFromWorkGroupRequest.h>
#include <tencentcloud/dlc/v20210125/model/DeleteUsersFromWorkGroupResponse.h>
#include <tencentcloud/dlc/v20210125/model/DeleteWorkGroupRequest.h>
#include <tencentcloud/dlc/v20210125/model/DeleteWorkGroupResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeAdvancedStoreLocationRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeAdvancedStoreLocationResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeClusterMonitorInfosRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeClusterMonitorInfosResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDLCCatalogAccessRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDLCCatalogAccessResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDMSDatabaseRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDMSDatabaseResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDMSPartitionsRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDMSPartitionsResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDMSTableRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDMSTableResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDMSTablesRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDMSTablesResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDataEngineRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDataEngineResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDataEngineEventsRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDataEngineEventsResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDataEngineImageVersionsRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDataEngineImageVersionsResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDataEnginePythonSparkImagesRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDataEnginePythonSparkImagesResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDataEnginesRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDataEnginesResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDataEnginesScaleDetailRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDataEnginesScaleDetailResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDatabasesRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDatabasesResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDatasourceConnectionRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDatasourceConnectionResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeEngineUsageInfoRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeEngineUsageInfoResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeForbiddenTableProRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeForbiddenTableProResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeLakeFsDirSummaryRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeLakeFsDirSummaryResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeLakeFsInfoRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeLakeFsInfoResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeLakeFsTaskResultRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeLakeFsTaskResultResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeNotebookSessionRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeNotebookSessionResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeNotebookSessionLogRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeNotebookSessionLogResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeNotebookSessionStatementRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeNotebookSessionStatementResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeNotebookSessionStatementSqlResultRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeNotebookSessionStatementSqlResultResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeNotebookSessionStatementsRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeNotebookSessionStatementsResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeNotebookSessionsRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeNotebookSessionsResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeOtherCHDFSBindingListRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeOtherCHDFSBindingListResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeResultDownloadRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeResultDownloadResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeScriptsRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeScriptsResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeSparkAppJobRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeSparkAppJobResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeSparkAppJobsRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeSparkAppJobsResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeSparkAppTasksRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeSparkAppTasksResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeSparkSessionBatchSQLRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeSparkSessionBatchSQLResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeSparkSessionBatchSQLCostRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeSparkSessionBatchSQLCostResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeSparkSessionBatchSqlLogRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeSparkSessionBatchSqlLogResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeStoreLocationRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeStoreLocationResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeSubUserAccessPolicyRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeSubUserAccessPolicyResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeTableRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeTableResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeTablePartitionsRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeTablePartitionsResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeTablesRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeTablesResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeTablesNameRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeTablesNameResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeTaskLogRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeTaskLogResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeTaskMonitorInfosRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeTaskMonitorInfosResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeTaskResultRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeTaskResultResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeTasksRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeTasksResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeTasksAnalysisRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeTasksAnalysisResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeTasksCostInfoRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeTasksCostInfoResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeTasksOverviewRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeTasksOverviewResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeThirdPartyAccessUserRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeThirdPartyAccessUserResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeUpdatableDataEnginesRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeUpdatableDataEnginesResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeUserDataEngineConfigRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeUserDataEngineConfigResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeUserInfoRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeUserInfoResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeUserRolesRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeUserRolesResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeUserTypeRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeUserTypeResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeUsersRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeUsersResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeViewsRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeViewsResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeWorkGroupInfoRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeWorkGroupInfoResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeWorkGroupsRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeWorkGroupsResponse.h>
#include <tencentcloud/dlc/v20210125/model/DetachUserPolicyRequest.h>
#include <tencentcloud/dlc/v20210125/model/DetachUserPolicyResponse.h>
#include <tencentcloud/dlc/v20210125/model/DetachWorkGroupPolicyRequest.h>
#include <tencentcloud/dlc/v20210125/model/DetachWorkGroupPolicyResponse.h>
#include <tencentcloud/dlc/v20210125/model/DropDMSDatabaseRequest.h>
#include <tencentcloud/dlc/v20210125/model/DropDMSDatabaseResponse.h>
#include <tencentcloud/dlc/v20210125/model/DropDMSPartitionsRequest.h>
#include <tencentcloud/dlc/v20210125/model/DropDMSPartitionsResponse.h>
#include <tencentcloud/dlc/v20210125/model/DropDMSTableRequest.h>
#include <tencentcloud/dlc/v20210125/model/DropDMSTableResponse.h>
#include <tencentcloud/dlc/v20210125/model/GenerateCreateMangedTableSqlRequest.h>
#include <tencentcloud/dlc/v20210125/model/GenerateCreateMangedTableSqlResponse.h>
#include <tencentcloud/dlc/v20210125/model/GetOptimizerPolicyRequest.h>
#include <tencentcloud/dlc/v20210125/model/GetOptimizerPolicyResponse.h>
#include <tencentcloud/dlc/v20210125/model/GrantDLCCatalogAccessRequest.h>
#include <tencentcloud/dlc/v20210125/model/GrantDLCCatalogAccessResponse.h>
#include <tencentcloud/dlc/v20210125/model/ListTaskJobLogDetailRequest.h>
#include <tencentcloud/dlc/v20210125/model/ListTaskJobLogDetailResponse.h>
#include <tencentcloud/dlc/v20210125/model/ListTaskJobLogNameRequest.h>
#include <tencentcloud/dlc/v20210125/model/ListTaskJobLogNameResponse.h>
#include <tencentcloud/dlc/v20210125/model/LockMetaDataRequest.h>
#include <tencentcloud/dlc/v20210125/model/LockMetaDataResponse.h>
#include <tencentcloud/dlc/v20210125/model/ModifyAdvancedStoreLocationRequest.h>
#include <tencentcloud/dlc/v20210125/model/ModifyAdvancedStoreLocationResponse.h>
#include <tencentcloud/dlc/v20210125/model/ModifyDataEngineDescriptionRequest.h>
#include <tencentcloud/dlc/v20210125/model/ModifyDataEngineDescriptionResponse.h>
#include <tencentcloud/dlc/v20210125/model/ModifyGovernEventRuleRequest.h>
#include <tencentcloud/dlc/v20210125/model/ModifyGovernEventRuleResponse.h>
#include <tencentcloud/dlc/v20210125/model/ModifySparkAppRequest.h>
#include <tencentcloud/dlc/v20210125/model/ModifySparkAppResponse.h>
#include <tencentcloud/dlc/v20210125/model/ModifySparkAppBatchRequest.h>
#include <tencentcloud/dlc/v20210125/model/ModifySparkAppBatchResponse.h>
#include <tencentcloud/dlc/v20210125/model/ModifyUserRequest.h>
#include <tencentcloud/dlc/v20210125/model/ModifyUserResponse.h>
#include <tencentcloud/dlc/v20210125/model/ModifyUserTypeRequest.h>
#include <tencentcloud/dlc/v20210125/model/ModifyUserTypeResponse.h>
#include <tencentcloud/dlc/v20210125/model/ModifyWorkGroupRequest.h>
#include <tencentcloud/dlc/v20210125/model/ModifyWorkGroupResponse.h>
#include <tencentcloud/dlc/v20210125/model/QueryInternalTableWarehouseRequest.h>
#include <tencentcloud/dlc/v20210125/model/QueryInternalTableWarehouseResponse.h>
#include <tencentcloud/dlc/v20210125/model/QueryResultRequest.h>
#include <tencentcloud/dlc/v20210125/model/QueryResultResponse.h>
#include <tencentcloud/dlc/v20210125/model/QueryTaskCostDetailRequest.h>
#include <tencentcloud/dlc/v20210125/model/QueryTaskCostDetailResponse.h>
#include <tencentcloud/dlc/v20210125/model/RegisterThirdPartyAccessUserRequest.h>
#include <tencentcloud/dlc/v20210125/model/RegisterThirdPartyAccessUserResponse.h>
#include <tencentcloud/dlc/v20210125/model/RenewDataEngineRequest.h>
#include <tencentcloud/dlc/v20210125/model/RenewDataEngineResponse.h>
#include <tencentcloud/dlc/v20210125/model/ReportHeartbeatMetaDataRequest.h>
#include <tencentcloud/dlc/v20210125/model/ReportHeartbeatMetaDataResponse.h>
#include <tencentcloud/dlc/v20210125/model/RestartDataEngineRequest.h>
#include <tencentcloud/dlc/v20210125/model/RestartDataEngineResponse.h>
#include <tencentcloud/dlc/v20210125/model/RevokeDLCCatalogAccessRequest.h>
#include <tencentcloud/dlc/v20210125/model/RevokeDLCCatalogAccessResponse.h>
#include <tencentcloud/dlc/v20210125/model/RollbackDataEngineImageRequest.h>
#include <tencentcloud/dlc/v20210125/model/RollbackDataEngineImageResponse.h>
#include <tencentcloud/dlc/v20210125/model/SuspendResumeDataEngineRequest.h>
#include <tencentcloud/dlc/v20210125/model/SuspendResumeDataEngineResponse.h>
#include <tencentcloud/dlc/v20210125/model/SwitchDataEngineRequest.h>
#include <tencentcloud/dlc/v20210125/model/SwitchDataEngineResponse.h>
#include <tencentcloud/dlc/v20210125/model/SwitchDataEngineImageRequest.h>
#include <tencentcloud/dlc/v20210125/model/SwitchDataEngineImageResponse.h>
#include <tencentcloud/dlc/v20210125/model/UnbindWorkGroupsFromUserRequest.h>
#include <tencentcloud/dlc/v20210125/model/UnbindWorkGroupsFromUserResponse.h>
#include <tencentcloud/dlc/v20210125/model/UnlockMetaDataRequest.h>
#include <tencentcloud/dlc/v20210125/model/UnlockMetaDataResponse.h>
#include <tencentcloud/dlc/v20210125/model/UpdateDataEngineRequest.h>
#include <tencentcloud/dlc/v20210125/model/UpdateDataEngineResponse.h>
#include <tencentcloud/dlc/v20210125/model/UpdateDataEngineConfigRequest.h>
#include <tencentcloud/dlc/v20210125/model/UpdateDataEngineConfigResponse.h>
#include <tencentcloud/dlc/v20210125/model/UpdateRowFilterRequest.h>
#include <tencentcloud/dlc/v20210125/model/UpdateRowFilterResponse.h>
#include <tencentcloud/dlc/v20210125/model/UpdateUserDataEngineConfigRequest.h>
#include <tencentcloud/dlc/v20210125/model/UpdateUserDataEngineConfigResponse.h>
#include <tencentcloud/dlc/v20210125/model/UpgradeDataEngineImageRequest.h>
#include <tencentcloud/dlc/v20210125/model/UpgradeDataEngineImageResponse.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            class DlcClient : public AbstractClient
            {
            public:
                DlcClient(const Credential &credential, const std::string &region);
                DlcClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddDMSPartitionsResponse> AddDMSPartitionsOutcome;
                typedef std::future<AddDMSPartitionsOutcome> AddDMSPartitionsOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::AddDMSPartitionsRequest&, AddDMSPartitionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddDMSPartitionsAsyncHandler;
                typedef Outcome<Core::Error, Model::AddOptimizerEnginesResponse> AddOptimizerEnginesOutcome;
                typedef std::future<AddOptimizerEnginesOutcome> AddOptimizerEnginesOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::AddOptimizerEnginesRequest&, AddOptimizerEnginesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddOptimizerEnginesAsyncHandler;
                typedef Outcome<Core::Error, Model::AddUsersToWorkGroupResponse> AddUsersToWorkGroupOutcome;
                typedef std::future<AddUsersToWorkGroupOutcome> AddUsersToWorkGroupOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::AddUsersToWorkGroupRequest&, AddUsersToWorkGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddUsersToWorkGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::AlterDMSDatabaseResponse> AlterDMSDatabaseOutcome;
                typedef std::future<AlterDMSDatabaseOutcome> AlterDMSDatabaseOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::AlterDMSDatabaseRequest&, AlterDMSDatabaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AlterDMSDatabaseAsyncHandler;
                typedef Outcome<Core::Error, Model::AlterDMSPartitionResponse> AlterDMSPartitionOutcome;
                typedef std::future<AlterDMSPartitionOutcome> AlterDMSPartitionOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::AlterDMSPartitionRequest&, AlterDMSPartitionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AlterDMSPartitionAsyncHandler;
                typedef Outcome<Core::Error, Model::AlterDMSTableResponse> AlterDMSTableOutcome;
                typedef std::future<AlterDMSTableOutcome> AlterDMSTableOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::AlterDMSTableRequest&, AlterDMSTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AlterDMSTableAsyncHandler;
                typedef Outcome<Core::Error, Model::AssignMangedTablePropertiesResponse> AssignMangedTablePropertiesOutcome;
                typedef std::future<AssignMangedTablePropertiesOutcome> AssignMangedTablePropertiesOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::AssignMangedTablePropertiesRequest&, AssignMangedTablePropertiesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssignMangedTablePropertiesAsyncHandler;
                typedef Outcome<Core::Error, Model::AttachUserPolicyResponse> AttachUserPolicyOutcome;
                typedef std::future<AttachUserPolicyOutcome> AttachUserPolicyOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::AttachUserPolicyRequest&, AttachUserPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachUserPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::AttachWorkGroupPolicyResponse> AttachWorkGroupPolicyOutcome;
                typedef std::future<AttachWorkGroupPolicyOutcome> AttachWorkGroupPolicyOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::AttachWorkGroupPolicyRequest&, AttachWorkGroupPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachWorkGroupPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::BindWorkGroupsToUserResponse> BindWorkGroupsToUserOutcome;
                typedef std::future<BindWorkGroupsToUserOutcome> BindWorkGroupsToUserOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::BindWorkGroupsToUserRequest&, BindWorkGroupsToUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindWorkGroupsToUserAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelNotebookSessionStatementResponse> CancelNotebookSessionStatementOutcome;
                typedef std::future<CancelNotebookSessionStatementOutcome> CancelNotebookSessionStatementOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CancelNotebookSessionStatementRequest&, CancelNotebookSessionStatementOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelNotebookSessionStatementAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelNotebookSessionStatementBatchResponse> CancelNotebookSessionStatementBatchOutcome;
                typedef std::future<CancelNotebookSessionStatementBatchOutcome> CancelNotebookSessionStatementBatchOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CancelNotebookSessionStatementBatchRequest&, CancelNotebookSessionStatementBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelNotebookSessionStatementBatchAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelSparkSessionBatchSQLResponse> CancelSparkSessionBatchSQLOutcome;
                typedef std::future<CancelSparkSessionBatchSQLOutcome> CancelSparkSessionBatchSQLOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CancelSparkSessionBatchSQLRequest&, CancelSparkSessionBatchSQLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelSparkSessionBatchSQLAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelTaskResponse> CancelTaskOutcome;
                typedef std::future<CancelTaskOutcome> CancelTaskOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CancelTaskRequest&, CancelTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckDataEngineConfigPairsValidityResponse> CheckDataEngineConfigPairsValidityOutcome;
                typedef std::future<CheckDataEngineConfigPairsValidityOutcome> CheckDataEngineConfigPairsValidityOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CheckDataEngineConfigPairsValidityRequest&, CheckDataEngineConfigPairsValidityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckDataEngineConfigPairsValidityAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckDataEngineImageCanBeRollbackResponse> CheckDataEngineImageCanBeRollbackOutcome;
                typedef std::future<CheckDataEngineImageCanBeRollbackOutcome> CheckDataEngineImageCanBeRollbackOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CheckDataEngineImageCanBeRollbackRequest&, CheckDataEngineImageCanBeRollbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckDataEngineImageCanBeRollbackAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckDataEngineImageCanBeUpgradeResponse> CheckDataEngineImageCanBeUpgradeOutcome;
                typedef std::future<CheckDataEngineImageCanBeUpgradeOutcome> CheckDataEngineImageCanBeUpgradeOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CheckDataEngineImageCanBeUpgradeRequest&, CheckDataEngineImageCanBeUpgradeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckDataEngineImageCanBeUpgradeAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckLockMetaDataResponse> CheckLockMetaDataOutcome;
                typedef std::future<CheckLockMetaDataOutcome> CheckLockMetaDataOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CheckLockMetaDataRequest&, CheckLockMetaDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckLockMetaDataAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCHDFSBindingProductResponse> CreateCHDFSBindingProductOutcome;
                typedef std::future<CreateCHDFSBindingProductOutcome> CreateCHDFSBindingProductOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateCHDFSBindingProductRequest&, CreateCHDFSBindingProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCHDFSBindingProductAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDMSDatabaseResponse> CreateDMSDatabaseOutcome;
                typedef std::future<CreateDMSDatabaseOutcome> CreateDMSDatabaseOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateDMSDatabaseRequest&, CreateDMSDatabaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDMSDatabaseAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDMSTableResponse> CreateDMSTableOutcome;
                typedef std::future<CreateDMSTableOutcome> CreateDMSTableOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateDMSTableRequest&, CreateDMSTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDMSTableAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDataEngineResponse> CreateDataEngineOutcome;
                typedef std::future<CreateDataEngineOutcome> CreateDataEngineOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateDataEngineRequest&, CreateDataEngineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDataEngineAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDatabaseResponse> CreateDatabaseOutcome;
                typedef std::future<CreateDatabaseOutcome> CreateDatabaseOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateDatabaseRequest&, CreateDatabaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDatabaseAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateExportTaskResponse> CreateExportTaskOutcome;
                typedef std::future<CreateExportTaskOutcome> CreateExportTaskOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateExportTaskRequest&, CreateExportTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateExportTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImportTaskResponse> CreateImportTaskOutcome;
                typedef std::future<CreateImportTaskOutcome> CreateImportTaskOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateImportTaskRequest&, CreateImportTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImportTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInternalTableResponse> CreateInternalTableOutcome;
                typedef std::future<CreateInternalTableOutcome> CreateInternalTableOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateInternalTableRequest&, CreateInternalTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInternalTableAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNotebookSessionResponse> CreateNotebookSessionOutcome;
                typedef std::future<CreateNotebookSessionOutcome> CreateNotebookSessionOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateNotebookSessionRequest&, CreateNotebookSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNotebookSessionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNotebookSessionStatementResponse> CreateNotebookSessionStatementOutcome;
                typedef std::future<CreateNotebookSessionStatementOutcome> CreateNotebookSessionStatementOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateNotebookSessionStatementRequest&, CreateNotebookSessionStatementOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNotebookSessionStatementAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNotebookSessionStatementSupportBatchSQLResponse> CreateNotebookSessionStatementSupportBatchSQLOutcome;
                typedef std::future<CreateNotebookSessionStatementSupportBatchSQLOutcome> CreateNotebookSessionStatementSupportBatchSQLOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateNotebookSessionStatementSupportBatchSQLRequest&, CreateNotebookSessionStatementSupportBatchSQLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNotebookSessionStatementSupportBatchSQLAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateResultDownloadResponse> CreateResultDownloadOutcome;
                typedef std::future<CreateResultDownloadOutcome> CreateResultDownloadOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateResultDownloadRequest&, CreateResultDownloadOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateResultDownloadAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateScriptResponse> CreateScriptOutcome;
                typedef std::future<CreateScriptOutcome> CreateScriptOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateScriptRequest&, CreateScriptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateScriptAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSparkAppResponse> CreateSparkAppOutcome;
                typedef std::future<CreateSparkAppOutcome> CreateSparkAppOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateSparkAppRequest&, CreateSparkAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSparkAppAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSparkAppTaskResponse> CreateSparkAppTaskOutcome;
                typedef std::future<CreateSparkAppTaskOutcome> CreateSparkAppTaskOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateSparkAppTaskRequest&, CreateSparkAppTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSparkAppTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSparkSessionBatchSQLResponse> CreateSparkSessionBatchSQLOutcome;
                typedef std::future<CreateSparkSessionBatchSQLOutcome> CreateSparkSessionBatchSQLOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateSparkSessionBatchSQLRequest&, CreateSparkSessionBatchSQLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSparkSessionBatchSQLAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSparkSubmitTaskResponse> CreateSparkSubmitTaskOutcome;
                typedef std::future<CreateSparkSubmitTaskOutcome> CreateSparkSubmitTaskOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateSparkSubmitTaskRequest&, CreateSparkSubmitTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSparkSubmitTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStoreLocationResponse> CreateStoreLocationOutcome;
                typedef std::future<CreateStoreLocationOutcome> CreateStoreLocationOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateStoreLocationRequest&, CreateStoreLocationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStoreLocationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTableResponse> CreateTableOutcome;
                typedef std::future<CreateTableOutcome> CreateTableOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateTableRequest&, CreateTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTableAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTaskResponse> CreateTaskOutcome;
                typedef std::future<CreateTaskOutcome> CreateTaskOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateTaskRequest&, CreateTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTasksResponse> CreateTasksOutcome;
                typedef std::future<CreateTasksOutcome> CreateTasksOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateTasksRequest&, CreateTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTasksInOrderResponse> CreateTasksInOrderOutcome;
                typedef std::future<CreateTasksInOrderOutcome> CreateTasksInOrderOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateTasksInOrderRequest&, CreateTasksInOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTasksInOrderAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUserResponse> CreateUserOutcome;
                typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateUserRequest&, CreateUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWorkGroupResponse> CreateWorkGroupOutcome;
                typedef std::future<CreateWorkGroupOutcome> CreateWorkGroupOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateWorkGroupRequest&, CreateWorkGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWorkGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCHDFSBindingProductResponse> DeleteCHDFSBindingProductOutcome;
                typedef std::future<DeleteCHDFSBindingProductOutcome> DeleteCHDFSBindingProductOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DeleteCHDFSBindingProductRequest&, DeleteCHDFSBindingProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCHDFSBindingProductAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDataEngineResponse> DeleteDataEngineOutcome;
                typedef std::future<DeleteDataEngineOutcome> DeleteDataEngineOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DeleteDataEngineRequest&, DeleteDataEngineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDataEngineAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNotebookSessionResponse> DeleteNotebookSessionOutcome;
                typedef std::future<DeleteNotebookSessionOutcome> DeleteNotebookSessionOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DeleteNotebookSessionRequest&, DeleteNotebookSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNotebookSessionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteScriptResponse> DeleteScriptOutcome;
                typedef std::future<DeleteScriptOutcome> DeleteScriptOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DeleteScriptRequest&, DeleteScriptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteScriptAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSparkAppResponse> DeleteSparkAppOutcome;
                typedef std::future<DeleteSparkAppOutcome> DeleteSparkAppOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DeleteSparkAppRequest&, DeleteSparkAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSparkAppAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTableResponse> DeleteTableOutcome;
                typedef std::future<DeleteTableOutcome> DeleteTableOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DeleteTableRequest&, DeleteTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTableAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteThirdPartyAccessUserResponse> DeleteThirdPartyAccessUserOutcome;
                typedef std::future<DeleteThirdPartyAccessUserOutcome> DeleteThirdPartyAccessUserOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DeleteThirdPartyAccessUserRequest&, DeleteThirdPartyAccessUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteThirdPartyAccessUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUserResponse> DeleteUserOutcome;
                typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DeleteUserRequest&, DeleteUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUsersFromWorkGroupResponse> DeleteUsersFromWorkGroupOutcome;
                typedef std::future<DeleteUsersFromWorkGroupOutcome> DeleteUsersFromWorkGroupOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DeleteUsersFromWorkGroupRequest&, DeleteUsersFromWorkGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUsersFromWorkGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWorkGroupResponse> DeleteWorkGroupOutcome;
                typedef std::future<DeleteWorkGroupOutcome> DeleteWorkGroupOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DeleteWorkGroupRequest&, DeleteWorkGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWorkGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAdvancedStoreLocationResponse> DescribeAdvancedStoreLocationOutcome;
                typedef std::future<DescribeAdvancedStoreLocationOutcome> DescribeAdvancedStoreLocationOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeAdvancedStoreLocationRequest&, DescribeAdvancedStoreLocationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAdvancedStoreLocationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterMonitorInfosResponse> DescribeClusterMonitorInfosOutcome;
                typedef std::future<DescribeClusterMonitorInfosOutcome> DescribeClusterMonitorInfosOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeClusterMonitorInfosRequest&, DescribeClusterMonitorInfosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterMonitorInfosAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDLCCatalogAccessResponse> DescribeDLCCatalogAccessOutcome;
                typedef std::future<DescribeDLCCatalogAccessOutcome> DescribeDLCCatalogAccessOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeDLCCatalogAccessRequest&, DescribeDLCCatalogAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDLCCatalogAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDMSDatabaseResponse> DescribeDMSDatabaseOutcome;
                typedef std::future<DescribeDMSDatabaseOutcome> DescribeDMSDatabaseOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeDMSDatabaseRequest&, DescribeDMSDatabaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDMSDatabaseAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDMSPartitionsResponse> DescribeDMSPartitionsOutcome;
                typedef std::future<DescribeDMSPartitionsOutcome> DescribeDMSPartitionsOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeDMSPartitionsRequest&, DescribeDMSPartitionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDMSPartitionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDMSTableResponse> DescribeDMSTableOutcome;
                typedef std::future<DescribeDMSTableOutcome> DescribeDMSTableOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeDMSTableRequest&, DescribeDMSTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDMSTableAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDMSTablesResponse> DescribeDMSTablesOutcome;
                typedef std::future<DescribeDMSTablesOutcome> DescribeDMSTablesOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeDMSTablesRequest&, DescribeDMSTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDMSTablesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataEngineResponse> DescribeDataEngineOutcome;
                typedef std::future<DescribeDataEngineOutcome> DescribeDataEngineOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeDataEngineRequest&, DescribeDataEngineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataEngineAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataEngineEventsResponse> DescribeDataEngineEventsOutcome;
                typedef std::future<DescribeDataEngineEventsOutcome> DescribeDataEngineEventsOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeDataEngineEventsRequest&, DescribeDataEngineEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataEngineEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataEngineImageVersionsResponse> DescribeDataEngineImageVersionsOutcome;
                typedef std::future<DescribeDataEngineImageVersionsOutcome> DescribeDataEngineImageVersionsOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeDataEngineImageVersionsRequest&, DescribeDataEngineImageVersionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataEngineImageVersionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataEnginePythonSparkImagesResponse> DescribeDataEnginePythonSparkImagesOutcome;
                typedef std::future<DescribeDataEnginePythonSparkImagesOutcome> DescribeDataEnginePythonSparkImagesOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeDataEnginePythonSparkImagesRequest&, DescribeDataEnginePythonSparkImagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataEnginePythonSparkImagesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataEnginesResponse> DescribeDataEnginesOutcome;
                typedef std::future<DescribeDataEnginesOutcome> DescribeDataEnginesOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeDataEnginesRequest&, DescribeDataEnginesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataEnginesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataEnginesScaleDetailResponse> DescribeDataEnginesScaleDetailOutcome;
                typedef std::future<DescribeDataEnginesScaleDetailOutcome> DescribeDataEnginesScaleDetailOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeDataEnginesScaleDetailRequest&, DescribeDataEnginesScaleDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataEnginesScaleDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatabasesResponse> DescribeDatabasesOutcome;
                typedef std::future<DescribeDatabasesOutcome> DescribeDatabasesOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeDatabasesRequest&, DescribeDatabasesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabasesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatasourceConnectionResponse> DescribeDatasourceConnectionOutcome;
                typedef std::future<DescribeDatasourceConnectionOutcome> DescribeDatasourceConnectionOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeDatasourceConnectionRequest&, DescribeDatasourceConnectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatasourceConnectionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEngineUsageInfoResponse> DescribeEngineUsageInfoOutcome;
                typedef std::future<DescribeEngineUsageInfoOutcome> DescribeEngineUsageInfoOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeEngineUsageInfoRequest&, DescribeEngineUsageInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEngineUsageInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeForbiddenTableProResponse> DescribeForbiddenTableProOutcome;
                typedef std::future<DescribeForbiddenTableProOutcome> DescribeForbiddenTableProOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeForbiddenTableProRequest&, DescribeForbiddenTableProOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeForbiddenTableProAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLakeFsDirSummaryResponse> DescribeLakeFsDirSummaryOutcome;
                typedef std::future<DescribeLakeFsDirSummaryOutcome> DescribeLakeFsDirSummaryOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeLakeFsDirSummaryRequest&, DescribeLakeFsDirSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLakeFsDirSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLakeFsInfoResponse> DescribeLakeFsInfoOutcome;
                typedef std::future<DescribeLakeFsInfoOutcome> DescribeLakeFsInfoOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeLakeFsInfoRequest&, DescribeLakeFsInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLakeFsInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLakeFsTaskResultResponse> DescribeLakeFsTaskResultOutcome;
                typedef std::future<DescribeLakeFsTaskResultOutcome> DescribeLakeFsTaskResultOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeLakeFsTaskResultRequest&, DescribeLakeFsTaskResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLakeFsTaskResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNotebookSessionResponse> DescribeNotebookSessionOutcome;
                typedef std::future<DescribeNotebookSessionOutcome> DescribeNotebookSessionOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeNotebookSessionRequest&, DescribeNotebookSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNotebookSessionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNotebookSessionLogResponse> DescribeNotebookSessionLogOutcome;
                typedef std::future<DescribeNotebookSessionLogOutcome> DescribeNotebookSessionLogOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeNotebookSessionLogRequest&, DescribeNotebookSessionLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNotebookSessionLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNotebookSessionStatementResponse> DescribeNotebookSessionStatementOutcome;
                typedef std::future<DescribeNotebookSessionStatementOutcome> DescribeNotebookSessionStatementOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeNotebookSessionStatementRequest&, DescribeNotebookSessionStatementOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNotebookSessionStatementAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNotebookSessionStatementSqlResultResponse> DescribeNotebookSessionStatementSqlResultOutcome;
                typedef std::future<DescribeNotebookSessionStatementSqlResultOutcome> DescribeNotebookSessionStatementSqlResultOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeNotebookSessionStatementSqlResultRequest&, DescribeNotebookSessionStatementSqlResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNotebookSessionStatementSqlResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNotebookSessionStatementsResponse> DescribeNotebookSessionStatementsOutcome;
                typedef std::future<DescribeNotebookSessionStatementsOutcome> DescribeNotebookSessionStatementsOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeNotebookSessionStatementsRequest&, DescribeNotebookSessionStatementsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNotebookSessionStatementsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNotebookSessionsResponse> DescribeNotebookSessionsOutcome;
                typedef std::future<DescribeNotebookSessionsOutcome> DescribeNotebookSessionsOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeNotebookSessionsRequest&, DescribeNotebookSessionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNotebookSessionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOtherCHDFSBindingListResponse> DescribeOtherCHDFSBindingListOutcome;
                typedef std::future<DescribeOtherCHDFSBindingListOutcome> DescribeOtherCHDFSBindingListOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeOtherCHDFSBindingListRequest&, DescribeOtherCHDFSBindingListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOtherCHDFSBindingListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResultDownloadResponse> DescribeResultDownloadOutcome;
                typedef std::future<DescribeResultDownloadOutcome> DescribeResultDownloadOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeResultDownloadRequest&, DescribeResultDownloadOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResultDownloadAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScriptsResponse> DescribeScriptsOutcome;
                typedef std::future<DescribeScriptsOutcome> DescribeScriptsOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeScriptsRequest&, DescribeScriptsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScriptsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSparkAppJobResponse> DescribeSparkAppJobOutcome;
                typedef std::future<DescribeSparkAppJobOutcome> DescribeSparkAppJobOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeSparkAppJobRequest&, DescribeSparkAppJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSparkAppJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSparkAppJobsResponse> DescribeSparkAppJobsOutcome;
                typedef std::future<DescribeSparkAppJobsOutcome> DescribeSparkAppJobsOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeSparkAppJobsRequest&, DescribeSparkAppJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSparkAppJobsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSparkAppTasksResponse> DescribeSparkAppTasksOutcome;
                typedef std::future<DescribeSparkAppTasksOutcome> DescribeSparkAppTasksOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeSparkAppTasksRequest&, DescribeSparkAppTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSparkAppTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSparkSessionBatchSQLResponse> DescribeSparkSessionBatchSQLOutcome;
                typedef std::future<DescribeSparkSessionBatchSQLOutcome> DescribeSparkSessionBatchSQLOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeSparkSessionBatchSQLRequest&, DescribeSparkSessionBatchSQLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSparkSessionBatchSQLAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSparkSessionBatchSQLCostResponse> DescribeSparkSessionBatchSQLCostOutcome;
                typedef std::future<DescribeSparkSessionBatchSQLCostOutcome> DescribeSparkSessionBatchSQLCostOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeSparkSessionBatchSQLCostRequest&, DescribeSparkSessionBatchSQLCostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSparkSessionBatchSQLCostAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSparkSessionBatchSqlLogResponse> DescribeSparkSessionBatchSqlLogOutcome;
                typedef std::future<DescribeSparkSessionBatchSqlLogOutcome> DescribeSparkSessionBatchSqlLogOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeSparkSessionBatchSqlLogRequest&, DescribeSparkSessionBatchSqlLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSparkSessionBatchSqlLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStoreLocationResponse> DescribeStoreLocationOutcome;
                typedef std::future<DescribeStoreLocationOutcome> DescribeStoreLocationOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeStoreLocationRequest&, DescribeStoreLocationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStoreLocationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSubUserAccessPolicyResponse> DescribeSubUserAccessPolicyOutcome;
                typedef std::future<DescribeSubUserAccessPolicyOutcome> DescribeSubUserAccessPolicyOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeSubUserAccessPolicyRequest&, DescribeSubUserAccessPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubUserAccessPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTableResponse> DescribeTableOutcome;
                typedef std::future<DescribeTableOutcome> DescribeTableOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeTableRequest&, DescribeTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTableAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTablePartitionsResponse> DescribeTablePartitionsOutcome;
                typedef std::future<DescribeTablePartitionsOutcome> DescribeTablePartitionsOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeTablePartitionsRequest&, DescribeTablePartitionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTablePartitionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTablesResponse> DescribeTablesOutcome;
                typedef std::future<DescribeTablesOutcome> DescribeTablesOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeTablesRequest&, DescribeTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTablesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTablesNameResponse> DescribeTablesNameOutcome;
                typedef std::future<DescribeTablesNameOutcome> DescribeTablesNameOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeTablesNameRequest&, DescribeTablesNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTablesNameAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskLogResponse> DescribeTaskLogOutcome;
                typedef std::future<DescribeTaskLogOutcome> DescribeTaskLogOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeTaskLogRequest&, DescribeTaskLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskMonitorInfosResponse> DescribeTaskMonitorInfosOutcome;
                typedef std::future<DescribeTaskMonitorInfosOutcome> DescribeTaskMonitorInfosOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeTaskMonitorInfosRequest&, DescribeTaskMonitorInfosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskMonitorInfosAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskResultResponse> DescribeTaskResultOutcome;
                typedef std::future<DescribeTaskResultOutcome> DescribeTaskResultOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeTaskResultRequest&, DescribeTaskResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTasksResponse> DescribeTasksOutcome;
                typedef std::future<DescribeTasksOutcome> DescribeTasksOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeTasksRequest&, DescribeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTasksAnalysisResponse> DescribeTasksAnalysisOutcome;
                typedef std::future<DescribeTasksAnalysisOutcome> DescribeTasksAnalysisOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeTasksAnalysisRequest&, DescribeTasksAnalysisOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTasksAnalysisAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTasksCostInfoResponse> DescribeTasksCostInfoOutcome;
                typedef std::future<DescribeTasksCostInfoOutcome> DescribeTasksCostInfoOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeTasksCostInfoRequest&, DescribeTasksCostInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTasksCostInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTasksOverviewResponse> DescribeTasksOverviewOutcome;
                typedef std::future<DescribeTasksOverviewOutcome> DescribeTasksOverviewOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeTasksOverviewRequest&, DescribeTasksOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTasksOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeThirdPartyAccessUserResponse> DescribeThirdPartyAccessUserOutcome;
                typedef std::future<DescribeThirdPartyAccessUserOutcome> DescribeThirdPartyAccessUserOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeThirdPartyAccessUserRequest&, DescribeThirdPartyAccessUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeThirdPartyAccessUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUpdatableDataEnginesResponse> DescribeUpdatableDataEnginesOutcome;
                typedef std::future<DescribeUpdatableDataEnginesOutcome> DescribeUpdatableDataEnginesOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeUpdatableDataEnginesRequest&, DescribeUpdatableDataEnginesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUpdatableDataEnginesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserDataEngineConfigResponse> DescribeUserDataEngineConfigOutcome;
                typedef std::future<DescribeUserDataEngineConfigOutcome> DescribeUserDataEngineConfigOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeUserDataEngineConfigRequest&, DescribeUserDataEngineConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserDataEngineConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserInfoResponse> DescribeUserInfoOutcome;
                typedef std::future<DescribeUserInfoOutcome> DescribeUserInfoOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeUserInfoRequest&, DescribeUserInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserRolesResponse> DescribeUserRolesOutcome;
                typedef std::future<DescribeUserRolesOutcome> DescribeUserRolesOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeUserRolesRequest&, DescribeUserRolesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserRolesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserTypeResponse> DescribeUserTypeOutcome;
                typedef std::future<DescribeUserTypeOutcome> DescribeUserTypeOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeUserTypeRequest&, DescribeUserTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUsersResponse> DescribeUsersOutcome;
                typedef std::future<DescribeUsersOutcome> DescribeUsersOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeUsersRequest&, DescribeUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeViewsResponse> DescribeViewsOutcome;
                typedef std::future<DescribeViewsOutcome> DescribeViewsOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeViewsRequest&, DescribeViewsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeViewsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkGroupInfoResponse> DescribeWorkGroupInfoOutcome;
                typedef std::future<DescribeWorkGroupInfoOutcome> DescribeWorkGroupInfoOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeWorkGroupInfoRequest&, DescribeWorkGroupInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkGroupInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkGroupsResponse> DescribeWorkGroupsOutcome;
                typedef std::future<DescribeWorkGroupsOutcome> DescribeWorkGroupsOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeWorkGroupsRequest&, DescribeWorkGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DetachUserPolicyResponse> DetachUserPolicyOutcome;
                typedef std::future<DetachUserPolicyOutcome> DetachUserPolicyOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DetachUserPolicyRequest&, DetachUserPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachUserPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DetachWorkGroupPolicyResponse> DetachWorkGroupPolicyOutcome;
                typedef std::future<DetachWorkGroupPolicyOutcome> DetachWorkGroupPolicyOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DetachWorkGroupPolicyRequest&, DetachWorkGroupPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachWorkGroupPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DropDMSDatabaseResponse> DropDMSDatabaseOutcome;
                typedef std::future<DropDMSDatabaseOutcome> DropDMSDatabaseOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DropDMSDatabaseRequest&, DropDMSDatabaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DropDMSDatabaseAsyncHandler;
                typedef Outcome<Core::Error, Model::DropDMSPartitionsResponse> DropDMSPartitionsOutcome;
                typedef std::future<DropDMSPartitionsOutcome> DropDMSPartitionsOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DropDMSPartitionsRequest&, DropDMSPartitionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DropDMSPartitionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DropDMSTableResponse> DropDMSTableOutcome;
                typedef std::future<DropDMSTableOutcome> DropDMSTableOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DropDMSTableRequest&, DropDMSTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DropDMSTableAsyncHandler;
                typedef Outcome<Core::Error, Model::GenerateCreateMangedTableSqlResponse> GenerateCreateMangedTableSqlOutcome;
                typedef std::future<GenerateCreateMangedTableSqlOutcome> GenerateCreateMangedTableSqlOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::GenerateCreateMangedTableSqlRequest&, GenerateCreateMangedTableSqlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GenerateCreateMangedTableSqlAsyncHandler;
                typedef Outcome<Core::Error, Model::GetOptimizerPolicyResponse> GetOptimizerPolicyOutcome;
                typedef std::future<GetOptimizerPolicyOutcome> GetOptimizerPolicyOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::GetOptimizerPolicyRequest&, GetOptimizerPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetOptimizerPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::GrantDLCCatalogAccessResponse> GrantDLCCatalogAccessOutcome;
                typedef std::future<GrantDLCCatalogAccessOutcome> GrantDLCCatalogAccessOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::GrantDLCCatalogAccessRequest&, GrantDLCCatalogAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GrantDLCCatalogAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::ListTaskJobLogDetailResponse> ListTaskJobLogDetailOutcome;
                typedef std::future<ListTaskJobLogDetailOutcome> ListTaskJobLogDetailOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::ListTaskJobLogDetailRequest&, ListTaskJobLogDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListTaskJobLogDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::ListTaskJobLogNameResponse> ListTaskJobLogNameOutcome;
                typedef std::future<ListTaskJobLogNameOutcome> ListTaskJobLogNameOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::ListTaskJobLogNameRequest&, ListTaskJobLogNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListTaskJobLogNameAsyncHandler;
                typedef Outcome<Core::Error, Model::LockMetaDataResponse> LockMetaDataOutcome;
                typedef std::future<LockMetaDataOutcome> LockMetaDataOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::LockMetaDataRequest&, LockMetaDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> LockMetaDataAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAdvancedStoreLocationResponse> ModifyAdvancedStoreLocationOutcome;
                typedef std::future<ModifyAdvancedStoreLocationOutcome> ModifyAdvancedStoreLocationOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::ModifyAdvancedStoreLocationRequest&, ModifyAdvancedStoreLocationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAdvancedStoreLocationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDataEngineDescriptionResponse> ModifyDataEngineDescriptionOutcome;
                typedef std::future<ModifyDataEngineDescriptionOutcome> ModifyDataEngineDescriptionOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::ModifyDataEngineDescriptionRequest&, ModifyDataEngineDescriptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDataEngineDescriptionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyGovernEventRuleResponse> ModifyGovernEventRuleOutcome;
                typedef std::future<ModifyGovernEventRuleOutcome> ModifyGovernEventRuleOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::ModifyGovernEventRuleRequest&, ModifyGovernEventRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGovernEventRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySparkAppResponse> ModifySparkAppOutcome;
                typedef std::future<ModifySparkAppOutcome> ModifySparkAppOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::ModifySparkAppRequest&, ModifySparkAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySparkAppAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySparkAppBatchResponse> ModifySparkAppBatchOutcome;
                typedef std::future<ModifySparkAppBatchOutcome> ModifySparkAppBatchOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::ModifySparkAppBatchRequest&, ModifySparkAppBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySparkAppBatchAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserResponse> ModifyUserOutcome;
                typedef std::future<ModifyUserOutcome> ModifyUserOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::ModifyUserRequest&, ModifyUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserTypeResponse> ModifyUserTypeOutcome;
                typedef std::future<ModifyUserTypeOutcome> ModifyUserTypeOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::ModifyUserTypeRequest&, ModifyUserTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWorkGroupResponse> ModifyWorkGroupOutcome;
                typedef std::future<ModifyWorkGroupOutcome> ModifyWorkGroupOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::ModifyWorkGroupRequest&, ModifyWorkGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWorkGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryInternalTableWarehouseResponse> QueryInternalTableWarehouseOutcome;
                typedef std::future<QueryInternalTableWarehouseOutcome> QueryInternalTableWarehouseOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::QueryInternalTableWarehouseRequest&, QueryInternalTableWarehouseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryInternalTableWarehouseAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryResultResponse> QueryResultOutcome;
                typedef std::future<QueryResultOutcome> QueryResultOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::QueryResultRequest&, QueryResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryResultAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryTaskCostDetailResponse> QueryTaskCostDetailOutcome;
                typedef std::future<QueryTaskCostDetailOutcome> QueryTaskCostDetailOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::QueryTaskCostDetailRequest&, QueryTaskCostDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryTaskCostDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::RegisterThirdPartyAccessUserResponse> RegisterThirdPartyAccessUserOutcome;
                typedef std::future<RegisterThirdPartyAccessUserOutcome> RegisterThirdPartyAccessUserOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::RegisterThirdPartyAccessUserRequest&, RegisterThirdPartyAccessUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterThirdPartyAccessUserAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewDataEngineResponse> RenewDataEngineOutcome;
                typedef std::future<RenewDataEngineOutcome> RenewDataEngineOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::RenewDataEngineRequest&, RenewDataEngineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewDataEngineAsyncHandler;
                typedef Outcome<Core::Error, Model::ReportHeartbeatMetaDataResponse> ReportHeartbeatMetaDataOutcome;
                typedef std::future<ReportHeartbeatMetaDataOutcome> ReportHeartbeatMetaDataOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::ReportHeartbeatMetaDataRequest&, ReportHeartbeatMetaDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReportHeartbeatMetaDataAsyncHandler;
                typedef Outcome<Core::Error, Model::RestartDataEngineResponse> RestartDataEngineOutcome;
                typedef std::future<RestartDataEngineOutcome> RestartDataEngineOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::RestartDataEngineRequest&, RestartDataEngineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestartDataEngineAsyncHandler;
                typedef Outcome<Core::Error, Model::RevokeDLCCatalogAccessResponse> RevokeDLCCatalogAccessOutcome;
                typedef std::future<RevokeDLCCatalogAccessOutcome> RevokeDLCCatalogAccessOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::RevokeDLCCatalogAccessRequest&, RevokeDLCCatalogAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RevokeDLCCatalogAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::RollbackDataEngineImageResponse> RollbackDataEngineImageOutcome;
                typedef std::future<RollbackDataEngineImageOutcome> RollbackDataEngineImageOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::RollbackDataEngineImageRequest&, RollbackDataEngineImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RollbackDataEngineImageAsyncHandler;
                typedef Outcome<Core::Error, Model::SuspendResumeDataEngineResponse> SuspendResumeDataEngineOutcome;
                typedef std::future<SuspendResumeDataEngineOutcome> SuspendResumeDataEngineOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::SuspendResumeDataEngineRequest&, SuspendResumeDataEngineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SuspendResumeDataEngineAsyncHandler;
                typedef Outcome<Core::Error, Model::SwitchDataEngineResponse> SwitchDataEngineOutcome;
                typedef std::future<SwitchDataEngineOutcome> SwitchDataEngineOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::SwitchDataEngineRequest&, SwitchDataEngineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SwitchDataEngineAsyncHandler;
                typedef Outcome<Core::Error, Model::SwitchDataEngineImageResponse> SwitchDataEngineImageOutcome;
                typedef std::future<SwitchDataEngineImageOutcome> SwitchDataEngineImageOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::SwitchDataEngineImageRequest&, SwitchDataEngineImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SwitchDataEngineImageAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindWorkGroupsFromUserResponse> UnbindWorkGroupsFromUserOutcome;
                typedef std::future<UnbindWorkGroupsFromUserOutcome> UnbindWorkGroupsFromUserOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::UnbindWorkGroupsFromUserRequest&, UnbindWorkGroupsFromUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindWorkGroupsFromUserAsyncHandler;
                typedef Outcome<Core::Error, Model::UnlockMetaDataResponse> UnlockMetaDataOutcome;
                typedef std::future<UnlockMetaDataOutcome> UnlockMetaDataOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::UnlockMetaDataRequest&, UnlockMetaDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnlockMetaDataAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateDataEngineResponse> UpdateDataEngineOutcome;
                typedef std::future<UpdateDataEngineOutcome> UpdateDataEngineOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::UpdateDataEngineRequest&, UpdateDataEngineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDataEngineAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateDataEngineConfigResponse> UpdateDataEngineConfigOutcome;
                typedef std::future<UpdateDataEngineConfigOutcome> UpdateDataEngineConfigOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::UpdateDataEngineConfigRequest&, UpdateDataEngineConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDataEngineConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateRowFilterResponse> UpdateRowFilterOutcome;
                typedef std::future<UpdateRowFilterOutcome> UpdateRowFilterOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::UpdateRowFilterRequest&, UpdateRowFilterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRowFilterAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateUserDataEngineConfigResponse> UpdateUserDataEngineConfigOutcome;
                typedef std::future<UpdateUserDataEngineConfigOutcome> UpdateUserDataEngineConfigOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::UpdateUserDataEngineConfigRequest&, UpdateUserDataEngineConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateUserDataEngineConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeDataEngineImageResponse> UpgradeDataEngineImageOutcome;
                typedef std::future<UpgradeDataEngineImageOutcome> UpgradeDataEngineImageOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::UpgradeDataEngineImageRequest&, UpgradeDataEngineImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDataEngineImageAsyncHandler;



                /**
                 *DMS元数据新增分区
                 * @param req AddDMSPartitionsRequest
                 * @return AddDMSPartitionsOutcome
                 */
                AddDMSPartitionsOutcome AddDMSPartitions(const Model::AddDMSPartitionsRequest &request);
                void AddDMSPartitionsAsync(const Model::AddDMSPartitionsRequest& request, const AddDMSPartitionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddDMSPartitionsOutcomeCallable AddDMSPartitionsCallable(const Model::AddDMSPartitionsRequest& request);

                /**
                 *添加数据优化资源
                 * @param req AddOptimizerEnginesRequest
                 * @return AddOptimizerEnginesOutcome
                 */
                AddOptimizerEnginesOutcome AddOptimizerEngines(const Model::AddOptimizerEnginesRequest &request);
                void AddOptimizerEnginesAsync(const Model::AddOptimizerEnginesRequest& request, const AddOptimizerEnginesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddOptimizerEnginesOutcomeCallable AddOptimizerEnginesCallable(const Model::AddOptimizerEnginesRequest& request);

                /**
                 *添加用户到工作组
                 * @param req AddUsersToWorkGroupRequest
                 * @return AddUsersToWorkGroupOutcome
                 */
                AddUsersToWorkGroupOutcome AddUsersToWorkGroup(const Model::AddUsersToWorkGroupRequest &request);
                void AddUsersToWorkGroupAsync(const Model::AddUsersToWorkGroupRequest& request, const AddUsersToWorkGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddUsersToWorkGroupOutcomeCallable AddUsersToWorkGroupCallable(const Model::AddUsersToWorkGroupRequest& request);

                /**
                 *DMS元数据更新库
                 * @param req AlterDMSDatabaseRequest
                 * @return AlterDMSDatabaseOutcome
                 */
                AlterDMSDatabaseOutcome AlterDMSDatabase(const Model::AlterDMSDatabaseRequest &request);
                void AlterDMSDatabaseAsync(const Model::AlterDMSDatabaseRequest& request, const AlterDMSDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AlterDMSDatabaseOutcomeCallable AlterDMSDatabaseCallable(const Model::AlterDMSDatabaseRequest& request);

                /**
                 *DMS元数据更新分区
                 * @param req AlterDMSPartitionRequest
                 * @return AlterDMSPartitionOutcome
                 */
                AlterDMSPartitionOutcome AlterDMSPartition(const Model::AlterDMSPartitionRequest &request);
                void AlterDMSPartitionAsync(const Model::AlterDMSPartitionRequest& request, const AlterDMSPartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AlterDMSPartitionOutcomeCallable AlterDMSPartitionCallable(const Model::AlterDMSPartitionRequest& request);

                /**
                 *DMS元数据更新表
                 * @param req AlterDMSTableRequest
                 * @return AlterDMSTableOutcome
                 */
                AlterDMSTableOutcome AlterDMSTable(const Model::AlterDMSTableRequest &request);
                void AlterDMSTableAsync(const Model::AlterDMSTableRequest& request, const AlterDMSTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AlterDMSTableOutcomeCallable AlterDMSTableCallable(const Model::AlterDMSTableRequest& request);

                /**
                 *分配原生表表属性
                 * @param req AssignMangedTablePropertiesRequest
                 * @return AssignMangedTablePropertiesOutcome
                 */
                AssignMangedTablePropertiesOutcome AssignMangedTableProperties(const Model::AssignMangedTablePropertiesRequest &request);
                void AssignMangedTablePropertiesAsync(const Model::AssignMangedTablePropertiesRequest& request, const AssignMangedTablePropertiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssignMangedTablePropertiesOutcomeCallable AssignMangedTablePropertiesCallable(const Model::AssignMangedTablePropertiesRequest& request);

                /**
                 *绑定鉴权策略到用户
                 * @param req AttachUserPolicyRequest
                 * @return AttachUserPolicyOutcome
                 */
                AttachUserPolicyOutcome AttachUserPolicy(const Model::AttachUserPolicyRequest &request);
                void AttachUserPolicyAsync(const Model::AttachUserPolicyRequest& request, const AttachUserPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachUserPolicyOutcomeCallable AttachUserPolicyCallable(const Model::AttachUserPolicyRequest& request);

                /**
                 *绑定鉴权策略到工作组
                 * @param req AttachWorkGroupPolicyRequest
                 * @return AttachWorkGroupPolicyOutcome
                 */
                AttachWorkGroupPolicyOutcome AttachWorkGroupPolicy(const Model::AttachWorkGroupPolicyRequest &request);
                void AttachWorkGroupPolicyAsync(const Model::AttachWorkGroupPolicyRequest& request, const AttachWorkGroupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachWorkGroupPolicyOutcomeCallable AttachWorkGroupPolicyCallable(const Model::AttachWorkGroupPolicyRequest& request);

                /**
                 *绑定工作组到用户
                 * @param req BindWorkGroupsToUserRequest
                 * @return BindWorkGroupsToUserOutcome
                 */
                BindWorkGroupsToUserOutcome BindWorkGroupsToUser(const Model::BindWorkGroupsToUserRequest &request);
                void BindWorkGroupsToUserAsync(const Model::BindWorkGroupsToUserRequest& request, const BindWorkGroupsToUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindWorkGroupsToUserOutcomeCallable BindWorkGroupsToUserCallable(const Model::BindWorkGroupsToUserRequest& request);

                /**
                 *本接口（CancelNotebookSessionStatement）用于取消session中执行的任务
                 * @param req CancelNotebookSessionStatementRequest
                 * @return CancelNotebookSessionStatementOutcome
                 */
                CancelNotebookSessionStatementOutcome CancelNotebookSessionStatement(const Model::CancelNotebookSessionStatementRequest &request);
                void CancelNotebookSessionStatementAsync(const Model::CancelNotebookSessionStatementRequest& request, const CancelNotebookSessionStatementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelNotebookSessionStatementOutcomeCallable CancelNotebookSessionStatementCallable(const Model::CancelNotebookSessionStatementRequest& request);

                /**
                 *本接口（CancelNotebookSessionStatementBatch）用于批量取消Session 中执行的任务
                 * @param req CancelNotebookSessionStatementBatchRequest
                 * @return CancelNotebookSessionStatementBatchOutcome
                 */
                CancelNotebookSessionStatementBatchOutcome CancelNotebookSessionStatementBatch(const Model::CancelNotebookSessionStatementBatchRequest &request);
                void CancelNotebookSessionStatementBatchAsync(const Model::CancelNotebookSessionStatementBatchRequest& request, const CancelNotebookSessionStatementBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelNotebookSessionStatementBatchOutcomeCallable CancelNotebookSessionStatementBatchCallable(const Model::CancelNotebookSessionStatementBatchRequest& request);

                /**
                 *本接口（CancelSparkSessionBatchSQL）用于取消Spark SQL批任务。
                 * @param req CancelSparkSessionBatchSQLRequest
                 * @return CancelSparkSessionBatchSQLOutcome
                 */
                CancelSparkSessionBatchSQLOutcome CancelSparkSessionBatchSQL(const Model::CancelSparkSessionBatchSQLRequest &request);
                void CancelSparkSessionBatchSQLAsync(const Model::CancelSparkSessionBatchSQLRequest& request, const CancelSparkSessionBatchSQLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelSparkSessionBatchSQLOutcomeCallable CancelSparkSessionBatchSQLCallable(const Model::CancelSparkSessionBatchSQLRequest& request);

                /**
                 *本接口（CancelTask），用于取消任务
                 * @param req CancelTaskRequest
                 * @return CancelTaskOutcome
                 */
                CancelTaskOutcome CancelTask(const Model::CancelTaskRequest &request);
                void CancelTaskAsync(const Model::CancelTaskRequest& request, const CancelTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelTaskOutcomeCallable CancelTaskCallable(const Model::CancelTaskRequest& request);

                /**
                 *本接口（CheckDataEngineConfigPairsValidity）用于检查引擎用户自定义参数的有效性
                 * @param req CheckDataEngineConfigPairsValidityRequest
                 * @return CheckDataEngineConfigPairsValidityOutcome
                 */
                CheckDataEngineConfigPairsValidityOutcome CheckDataEngineConfigPairsValidity(const Model::CheckDataEngineConfigPairsValidityRequest &request);
                void CheckDataEngineConfigPairsValidityAsync(const Model::CheckDataEngineConfigPairsValidityRequest& request, const CheckDataEngineConfigPairsValidityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckDataEngineConfigPairsValidityOutcomeCallable CheckDataEngineConfigPairsValidityCallable(const Model::CheckDataEngineConfigPairsValidityRequest& request);

                /**
                 *本接口（CheckDataEngineImageCanBeRollback）用于查看集群是否能回滚。
                 * @param req CheckDataEngineImageCanBeRollbackRequest
                 * @return CheckDataEngineImageCanBeRollbackOutcome
                 */
                CheckDataEngineImageCanBeRollbackOutcome CheckDataEngineImageCanBeRollback(const Model::CheckDataEngineImageCanBeRollbackRequest &request);
                void CheckDataEngineImageCanBeRollbackAsync(const Model::CheckDataEngineImageCanBeRollbackRequest& request, const CheckDataEngineImageCanBeRollbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckDataEngineImageCanBeRollbackOutcomeCallable CheckDataEngineImageCanBeRollbackCallable(const Model::CheckDataEngineImageCanBeRollbackRequest& request);

                /**
                 *本接口（CheckDataEngineImageCanBeUpgrade）用于查看集群镜像是否能够升级。
                 * @param req CheckDataEngineImageCanBeUpgradeRequest
                 * @return CheckDataEngineImageCanBeUpgradeOutcome
                 */
                CheckDataEngineImageCanBeUpgradeOutcome CheckDataEngineImageCanBeUpgrade(const Model::CheckDataEngineImageCanBeUpgradeRequest &request);
                void CheckDataEngineImageCanBeUpgradeAsync(const Model::CheckDataEngineImageCanBeUpgradeRequest& request, const CheckDataEngineImageCanBeUpgradeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckDataEngineImageCanBeUpgradeOutcomeCallable CheckDataEngineImageCanBeUpgradeCallable(const Model::CheckDataEngineImageCanBeUpgradeRequest& request);

                /**
                 *元数据锁检查
                 * @param req CheckLockMetaDataRequest
                 * @return CheckLockMetaDataOutcome
                 */
                CheckLockMetaDataOutcome CheckLockMetaData(const Model::CheckLockMetaDataRequest &request);
                void CheckLockMetaDataAsync(const Model::CheckLockMetaDataRequest& request, const CheckLockMetaDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckLockMetaDataOutcomeCallable CheckLockMetaDataCallable(const Model::CheckLockMetaDataRequest& request);

                /**
                 *此接口（CreateCHDFSBindingProduct）用于创建元数据加速桶和产品绑定关系
                 * @param req CreateCHDFSBindingProductRequest
                 * @return CreateCHDFSBindingProductOutcome
                 */
                CreateCHDFSBindingProductOutcome CreateCHDFSBindingProduct(const Model::CreateCHDFSBindingProductRequest &request);
                void CreateCHDFSBindingProductAsync(const Model::CreateCHDFSBindingProductRequest& request, const CreateCHDFSBindingProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCHDFSBindingProductOutcomeCallable CreateCHDFSBindingProductCallable(const Model::CreateCHDFSBindingProductRequest& request);

                /**
                 *DMS元数据创建库
                 * @param req CreateDMSDatabaseRequest
                 * @return CreateDMSDatabaseOutcome
                 */
                CreateDMSDatabaseOutcome CreateDMSDatabase(const Model::CreateDMSDatabaseRequest &request);
                void CreateDMSDatabaseAsync(const Model::CreateDMSDatabaseRequest& request, const CreateDMSDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDMSDatabaseOutcomeCallable CreateDMSDatabaseCallable(const Model::CreateDMSDatabaseRequest& request);

                /**
                 *DMS元数据创建表
                 * @param req CreateDMSTableRequest
                 * @return CreateDMSTableOutcome
                 */
                CreateDMSTableOutcome CreateDMSTable(const Model::CreateDMSTableRequest &request);
                void CreateDMSTableAsync(const Model::CreateDMSTableRequest& request, const CreateDMSTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDMSTableOutcomeCallable CreateDMSTableCallable(const Model::CreateDMSTableRequest& request);

                /**
                 *为用户创建数据引擎
                 * @param req CreateDataEngineRequest
                 * @return CreateDataEngineOutcome
                 */
                CreateDataEngineOutcome CreateDataEngine(const Model::CreateDataEngineRequest &request);
                void CreateDataEngineAsync(const Model::CreateDataEngineRequest& request, const CreateDataEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDataEngineOutcomeCallable CreateDataEngineCallable(const Model::CreateDataEngineRequest& request);

                /**
                 *本接口（CreateDatabase）用于生成建库SQL语句。
                 * @param req CreateDatabaseRequest
                 * @return CreateDatabaseOutcome
                 */
                CreateDatabaseOutcome CreateDatabase(const Model::CreateDatabaseRequest &request);
                void CreateDatabaseAsync(const Model::CreateDatabaseRequest& request, const CreateDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDatabaseOutcomeCallable CreateDatabaseCallable(const Model::CreateDatabaseRequest& request);

                /**
                 *该接口（CreateExportTask）用于创建导出任务
                 * @param req CreateExportTaskRequest
                 * @return CreateExportTaskOutcome
                 */
                CreateExportTaskOutcome CreateExportTask(const Model::CreateExportTaskRequest &request);
                void CreateExportTaskAsync(const Model::CreateExportTaskRequest& request, const CreateExportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateExportTaskOutcomeCallable CreateExportTaskCallable(const Model::CreateExportTaskRequest& request);

                /**
                 *该接口（CreateImportTask）用于创建导入任务
                 * @param req CreateImportTaskRequest
                 * @return CreateImportTaskOutcome
                 */
                CreateImportTaskOutcome CreateImportTask(const Model::CreateImportTaskRequest &request);
                void CreateImportTaskAsync(const Model::CreateImportTaskRequest& request, const CreateImportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImportTaskOutcomeCallable CreateImportTaskCallable(const Model::CreateImportTaskRequest& request);

                /**
                 *创建托管存储内表（该接口已废弃）
                 * @param req CreateInternalTableRequest
                 * @return CreateInternalTableOutcome
                 */
                CreateInternalTableOutcome CreateInternalTable(const Model::CreateInternalTableRequest &request);
                void CreateInternalTableAsync(const Model::CreateInternalTableRequest& request, const CreateInternalTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInternalTableOutcomeCallable CreateInternalTableCallable(const Model::CreateInternalTableRequest& request);

                /**
                 *本接口（CreateNotebookSession）用于创建交互式session（notebook）
                 * @param req CreateNotebookSessionRequest
                 * @return CreateNotebookSessionOutcome
                 */
                CreateNotebookSessionOutcome CreateNotebookSession(const Model::CreateNotebookSessionRequest &request);
                void CreateNotebookSessionAsync(const Model::CreateNotebookSessionRequest& request, const CreateNotebookSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNotebookSessionOutcomeCallable CreateNotebookSessionCallable(const Model::CreateNotebookSessionRequest& request);

                /**
                 *本接口（CreateNotebookSessionStatement）用于在session中执行代码片段
                 * @param req CreateNotebookSessionStatementRequest
                 * @return CreateNotebookSessionStatementOutcome
                 */
                CreateNotebookSessionStatementOutcome CreateNotebookSessionStatement(const Model::CreateNotebookSessionStatementRequest &request);
                void CreateNotebookSessionStatementAsync(const Model::CreateNotebookSessionStatementRequest& request, const CreateNotebookSessionStatementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNotebookSessionStatementOutcomeCallable CreateNotebookSessionStatementCallable(const Model::CreateNotebookSessionStatementRequest& request);

                /**
                 *本接口（CreateNotebookSessionStatementSupportBatchSQL）用于创建交互式session并执行SQL任务
                 * @param req CreateNotebookSessionStatementSupportBatchSQLRequest
                 * @return CreateNotebookSessionStatementSupportBatchSQLOutcome
                 */
                CreateNotebookSessionStatementSupportBatchSQLOutcome CreateNotebookSessionStatementSupportBatchSQL(const Model::CreateNotebookSessionStatementSupportBatchSQLRequest &request);
                void CreateNotebookSessionStatementSupportBatchSQLAsync(const Model::CreateNotebookSessionStatementSupportBatchSQLRequest& request, const CreateNotebookSessionStatementSupportBatchSQLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNotebookSessionStatementSupportBatchSQLOutcomeCallable CreateNotebookSessionStatementSupportBatchSQLCallable(const Model::CreateNotebookSessionStatementSupportBatchSQLRequest& request);

                /**
                 *创建查询结果下载任务
                 * @param req CreateResultDownloadRequest
                 * @return CreateResultDownloadOutcome
                 */
                CreateResultDownloadOutcome CreateResultDownload(const Model::CreateResultDownloadRequest &request);
                void CreateResultDownloadAsync(const Model::CreateResultDownloadRequest& request, const CreateResultDownloadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateResultDownloadOutcomeCallable CreateResultDownloadCallable(const Model::CreateResultDownloadRequest& request);

                /**
                 *该接口（CreateScript）用于创建sql脚本。
                 * @param req CreateScriptRequest
                 * @return CreateScriptOutcome
                 */
                CreateScriptOutcome CreateScript(const Model::CreateScriptRequest &request);
                void CreateScriptAsync(const Model::CreateScriptRequest& request, const CreateScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateScriptOutcomeCallable CreateScriptCallable(const Model::CreateScriptRequest& request);

                /**
                 *创建spark作业
                 * @param req CreateSparkAppRequest
                 * @return CreateSparkAppOutcome
                 */
                CreateSparkAppOutcome CreateSparkApp(const Model::CreateSparkAppRequest &request);
                void CreateSparkAppAsync(const Model::CreateSparkAppRequest& request, const CreateSparkAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSparkAppOutcomeCallable CreateSparkAppCallable(const Model::CreateSparkAppRequest& request);

                /**
                 *启动Spark作业
                 * @param req CreateSparkAppTaskRequest
                 * @return CreateSparkAppTaskOutcome
                 */
                CreateSparkAppTaskOutcome CreateSparkAppTask(const Model::CreateSparkAppTaskRequest &request);
                void CreateSparkAppTaskAsync(const Model::CreateSparkAppTaskRequest& request, const CreateSparkAppTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSparkAppTaskOutcomeCallable CreateSparkAppTaskCallable(const Model::CreateSparkAppTaskRequest& request);

                /**
                 *本接口（CreateSparkSessionBatchSQL）用于向Spark作业引擎提交Spark SQL批任务。
                 * @param req CreateSparkSessionBatchSQLRequest
                 * @return CreateSparkSessionBatchSQLOutcome
                 */
                CreateSparkSessionBatchSQLOutcome CreateSparkSessionBatchSQL(const Model::CreateSparkSessionBatchSQLRequest &request);
                void CreateSparkSessionBatchSQLAsync(const Model::CreateSparkSessionBatchSQLRequest& request, const CreateSparkSessionBatchSQLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSparkSessionBatchSQLOutcomeCallable CreateSparkSessionBatchSQLCallable(const Model::CreateSparkSessionBatchSQLRequest& request);

                /**
                 *本接口（CreateSparkSubmitTask）用于提交SparkSbumit批流任务。
                 * @param req CreateSparkSubmitTaskRequest
                 * @return CreateSparkSubmitTaskOutcome
                 */
                CreateSparkSubmitTaskOutcome CreateSparkSubmitTask(const Model::CreateSparkSubmitTaskRequest &request);
                void CreateSparkSubmitTaskAsync(const Model::CreateSparkSubmitTaskRequest& request, const CreateSparkSubmitTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSparkSubmitTaskOutcomeCallable CreateSparkSubmitTaskCallable(const Model::CreateSparkSubmitTaskRequest& request);

                /**
                 *该接口（CreateStoreLocation）新增或覆盖计算结果存储位置。
                 * @param req CreateStoreLocationRequest
                 * @return CreateStoreLocationOutcome
                 */
                CreateStoreLocationOutcome CreateStoreLocation(const Model::CreateStoreLocationRequest &request);
                void CreateStoreLocationAsync(const Model::CreateStoreLocationRequest& request, const CreateStoreLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStoreLocationOutcomeCallable CreateStoreLocationCallable(const Model::CreateStoreLocationRequest& request);

                /**
                 *本接口（CreateTable）用于生成建表SQL。
                 * @param req CreateTableRequest
                 * @return CreateTableOutcome
                 */
                CreateTableOutcome CreateTable(const Model::CreateTableRequest &request);
                void CreateTableAsync(const Model::CreateTableRequest& request, const CreateTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTableOutcomeCallable CreateTableCallable(const Model::CreateTableRequest& request);

                /**
                 *本接口（CreateTask）用于创建并执行SQL任务。（推荐使用CreateTasks接口）
                 * @param req CreateTaskRequest
                 * @return CreateTaskOutcome
                 */
                CreateTaskOutcome CreateTask(const Model::CreateTaskRequest &request);
                void CreateTaskAsync(const Model::CreateTaskRequest& request, const CreateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTaskOutcomeCallable CreateTaskCallable(const Model::CreateTaskRequest& request);

                /**
                 *本接口（CreateTasks），用于批量创建并执行SQL任务
                 * @param req CreateTasksRequest
                 * @return CreateTasksOutcome
                 */
                CreateTasksOutcome CreateTasks(const Model::CreateTasksRequest &request);
                void CreateTasksAsync(const Model::CreateTasksRequest& request, const CreateTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTasksOutcomeCallable CreateTasksCallable(const Model::CreateTasksRequest& request);

                /**
                 *按顺序创建任务（已经废弃，后期不再维护，请使用接口CreateTasks）
                 * @param req CreateTasksInOrderRequest
                 * @return CreateTasksInOrderOutcome
                 */
                CreateTasksInOrderOutcome CreateTasksInOrder(const Model::CreateTasksInOrderRequest &request);
                void CreateTasksInOrderAsync(const Model::CreateTasksInOrderRequest& request, const CreateTasksInOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTasksInOrderOutcomeCallable CreateTasksInOrderCallable(const Model::CreateTasksInOrderRequest& request);

                /**
                 *创建用户
                 * @param req CreateUserRequest
                 * @return CreateUserOutcome
                 */
                CreateUserOutcome CreateUser(const Model::CreateUserRequest &request);
                void CreateUserAsync(const Model::CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUserOutcomeCallable CreateUserCallable(const Model::CreateUserRequest& request);

                /**
                 *创建工作组
                 * @param req CreateWorkGroupRequest
                 * @return CreateWorkGroupOutcome
                 */
                CreateWorkGroupOutcome CreateWorkGroup(const Model::CreateWorkGroupRequest &request);
                void CreateWorkGroupAsync(const Model::CreateWorkGroupRequest& request, const CreateWorkGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWorkGroupOutcomeCallable CreateWorkGroupCallable(const Model::CreateWorkGroupRequest& request);

                /**
                 *此接口（DeleteCHDFSBindingProduct）用于删除元数据加速桶和产品绑定关系
                 * @param req DeleteCHDFSBindingProductRequest
                 * @return DeleteCHDFSBindingProductOutcome
                 */
                DeleteCHDFSBindingProductOutcome DeleteCHDFSBindingProduct(const Model::DeleteCHDFSBindingProductRequest &request);
                void DeleteCHDFSBindingProductAsync(const Model::DeleteCHDFSBindingProductRequest& request, const DeleteCHDFSBindingProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCHDFSBindingProductOutcomeCallable DeleteCHDFSBindingProductCallable(const Model::DeleteCHDFSBindingProductRequest& request);

                /**
                 *删除数据引擎
                 * @param req DeleteDataEngineRequest
                 * @return DeleteDataEngineOutcome
                 */
                DeleteDataEngineOutcome DeleteDataEngine(const Model::DeleteDataEngineRequest &request);
                void DeleteDataEngineAsync(const Model::DeleteDataEngineRequest& request, const DeleteDataEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDataEngineOutcomeCallable DeleteDataEngineCallable(const Model::DeleteDataEngineRequest& request);

                /**
                 *本接口（DeleteNotebookSession）用于删除交互式session（notebook）
                 * @param req DeleteNotebookSessionRequest
                 * @return DeleteNotebookSessionOutcome
                 */
                DeleteNotebookSessionOutcome DeleteNotebookSession(const Model::DeleteNotebookSessionRequest &request);
                void DeleteNotebookSessionAsync(const Model::DeleteNotebookSessionRequest& request, const DeleteNotebookSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNotebookSessionOutcomeCallable DeleteNotebookSessionCallable(const Model::DeleteNotebookSessionRequest& request);

                /**
                 *该接口（DeleteScript）用于删除sql脚本。
                 * @param req DeleteScriptRequest
                 * @return DeleteScriptOutcome
                 */
                DeleteScriptOutcome DeleteScript(const Model::DeleteScriptRequest &request);
                void DeleteScriptAsync(const Model::DeleteScriptRequest& request, const DeleteScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteScriptOutcomeCallable DeleteScriptCallable(const Model::DeleteScriptRequest& request);

                /**
                 *删除spark作业
                 * @param req DeleteSparkAppRequest
                 * @return DeleteSparkAppOutcome
                 */
                DeleteSparkAppOutcome DeleteSparkApp(const Model::DeleteSparkAppRequest &request);
                void DeleteSparkAppAsync(const Model::DeleteSparkAppRequest& request, const DeleteSparkAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSparkAppOutcomeCallable DeleteSparkAppCallable(const Model::DeleteSparkAppRequest& request);

                /**
                 *删除表
                 * @param req DeleteTableRequest
                 * @return DeleteTableOutcome
                 */
                DeleteTableOutcome DeleteTable(const Model::DeleteTableRequest &request);
                void DeleteTableAsync(const Model::DeleteTableRequest& request, const DeleteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTableOutcomeCallable DeleteTableCallable(const Model::DeleteTableRequest& request);

                /**
                 *本接口（RegisterThirdPartyAccessUser）用于移除第三方平台访问
                 * @param req DeleteThirdPartyAccessUserRequest
                 * @return DeleteThirdPartyAccessUserOutcome
                 */
                DeleteThirdPartyAccessUserOutcome DeleteThirdPartyAccessUser(const Model::DeleteThirdPartyAccessUserRequest &request);
                void DeleteThirdPartyAccessUserAsync(const Model::DeleteThirdPartyAccessUserRequest& request, const DeleteThirdPartyAccessUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteThirdPartyAccessUserOutcomeCallable DeleteThirdPartyAccessUserCallable(const Model::DeleteThirdPartyAccessUserRequest& request);

                /**
                 *删除用户
                 * @param req DeleteUserRequest
                 * @return DeleteUserOutcome
                 */
                DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest &request);
                void DeleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUserOutcomeCallable DeleteUserCallable(const Model::DeleteUserRequest& request);

                /**
                 *从工作组中删除用户
                 * @param req DeleteUsersFromWorkGroupRequest
                 * @return DeleteUsersFromWorkGroupOutcome
                 */
                DeleteUsersFromWorkGroupOutcome DeleteUsersFromWorkGroup(const Model::DeleteUsersFromWorkGroupRequest &request);
                void DeleteUsersFromWorkGroupAsync(const Model::DeleteUsersFromWorkGroupRequest& request, const DeleteUsersFromWorkGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUsersFromWorkGroupOutcomeCallable DeleteUsersFromWorkGroupCallable(const Model::DeleteUsersFromWorkGroupRequest& request);

                /**
                 *删除工作组
                 * @param req DeleteWorkGroupRequest
                 * @return DeleteWorkGroupOutcome
                 */
                DeleteWorkGroupOutcome DeleteWorkGroup(const Model::DeleteWorkGroupRequest &request);
                void DeleteWorkGroupAsync(const Model::DeleteWorkGroupRequest& request, const DeleteWorkGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWorkGroupOutcomeCallable DeleteWorkGroupCallable(const Model::DeleteWorkGroupRequest& request);

                /**
                 *查询sql查询界面高级设置
                 * @param req DescribeAdvancedStoreLocationRequest
                 * @return DescribeAdvancedStoreLocationOutcome
                 */
                DescribeAdvancedStoreLocationOutcome DescribeAdvancedStoreLocation(const Model::DescribeAdvancedStoreLocationRequest &request);
                void DescribeAdvancedStoreLocationAsync(const Model::DescribeAdvancedStoreLocationRequest& request, const DescribeAdvancedStoreLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAdvancedStoreLocationOutcomeCallable DescribeAdvancedStoreLocationCallable(const Model::DescribeAdvancedStoreLocationRequest& request);

                /**
                 *查询任务监控指标信息
                 * @param req DescribeClusterMonitorInfosRequest
                 * @return DescribeClusterMonitorInfosOutcome
                 */
                DescribeClusterMonitorInfosOutcome DescribeClusterMonitorInfos(const Model::DescribeClusterMonitorInfosRequest &request);
                void DescribeClusterMonitorInfosAsync(const Model::DescribeClusterMonitorInfosRequest& request, const DescribeClusterMonitorInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterMonitorInfosOutcomeCallable DescribeClusterMonitorInfosCallable(const Model::DescribeClusterMonitorInfosRequest& request);

                /**
                 *查询DLC Catalog授权列表
                 * @param req DescribeDLCCatalogAccessRequest
                 * @return DescribeDLCCatalogAccessOutcome
                 */
                DescribeDLCCatalogAccessOutcome DescribeDLCCatalogAccess(const Model::DescribeDLCCatalogAccessRequest &request);
                void DescribeDLCCatalogAccessAsync(const Model::DescribeDLCCatalogAccessRequest& request, const DescribeDLCCatalogAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDLCCatalogAccessOutcomeCallable DescribeDLCCatalogAccessCallable(const Model::DescribeDLCCatalogAccessRequest& request);

                /**
                 *DMS元数据获取库
                 * @param req DescribeDMSDatabaseRequest
                 * @return DescribeDMSDatabaseOutcome
                 */
                DescribeDMSDatabaseOutcome DescribeDMSDatabase(const Model::DescribeDMSDatabaseRequest &request);
                void DescribeDMSDatabaseAsync(const Model::DescribeDMSDatabaseRequest& request, const DescribeDMSDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDMSDatabaseOutcomeCallable DescribeDMSDatabaseCallable(const Model::DescribeDMSDatabaseRequest& request);

                /**
                 *DMS元数据获取分区
                 * @param req DescribeDMSPartitionsRequest
                 * @return DescribeDMSPartitionsOutcome
                 */
                DescribeDMSPartitionsOutcome DescribeDMSPartitions(const Model::DescribeDMSPartitionsRequest &request);
                void DescribeDMSPartitionsAsync(const Model::DescribeDMSPartitionsRequest& request, const DescribeDMSPartitionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDMSPartitionsOutcomeCallable DescribeDMSPartitionsCallable(const Model::DescribeDMSPartitionsRequest& request);

                /**
                 *DMS元数据获取表
                 * @param req DescribeDMSTableRequest
                 * @return DescribeDMSTableOutcome
                 */
                DescribeDMSTableOutcome DescribeDMSTable(const Model::DescribeDMSTableRequest &request);
                void DescribeDMSTableAsync(const Model::DescribeDMSTableRequest& request, const DescribeDMSTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDMSTableOutcomeCallable DescribeDMSTableCallable(const Model::DescribeDMSTableRequest& request);

                /**
                 *DMS元数据获取表列表
                 * @param req DescribeDMSTablesRequest
                 * @return DescribeDMSTablesOutcome
                 */
                DescribeDMSTablesOutcome DescribeDMSTables(const Model::DescribeDMSTablesRequest &request);
                void DescribeDMSTablesAsync(const Model::DescribeDMSTablesRequest& request, const DescribeDMSTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDMSTablesOutcomeCallable DescribeDMSTablesCallable(const Model::DescribeDMSTablesRequest& request);

                /**
                 *本接口根据名称用于获取数据引擎详细信息
                 * @param req DescribeDataEngineRequest
                 * @return DescribeDataEngineOutcome
                 */
                DescribeDataEngineOutcome DescribeDataEngine(const Model::DescribeDataEngineRequest &request);
                void DescribeDataEngineAsync(const Model::DescribeDataEngineRequest& request, const DescribeDataEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataEngineOutcomeCallable DescribeDataEngineCallable(const Model::DescribeDataEngineRequest& request);

                /**
                 *查询数据引擎事件
                 * @param req DescribeDataEngineEventsRequest
                 * @return DescribeDataEngineEventsOutcome
                 */
                DescribeDataEngineEventsOutcome DescribeDataEngineEvents(const Model::DescribeDataEngineEventsRequest &request);
                void DescribeDataEngineEventsAsync(const Model::DescribeDataEngineEventsRequest& request, const DescribeDataEngineEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataEngineEventsOutcomeCallable DescribeDataEngineEventsCallable(const Model::DescribeDataEngineEventsRequest& request);

                /**
                 *本接口（DescribeDataEngineImageVersions）用于获取独享集群大版本镜像列表。
                 * @param req DescribeDataEngineImageVersionsRequest
                 * @return DescribeDataEngineImageVersionsOutcome
                 */
                DescribeDataEngineImageVersionsOutcome DescribeDataEngineImageVersions(const Model::DescribeDataEngineImageVersionsRequest &request);
                void DescribeDataEngineImageVersionsAsync(const Model::DescribeDataEngineImageVersionsRequest& request, const DescribeDataEngineImageVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataEngineImageVersionsOutcomeCallable DescribeDataEngineImageVersionsCallable(const Model::DescribeDataEngineImageVersionsRequest& request);

                /**
                 *本接口（DescribeDataEnginePythonSparkImages）用于获取PYSPARK镜像列表
                 * @param req DescribeDataEnginePythonSparkImagesRequest
                 * @return DescribeDataEnginePythonSparkImagesOutcome
                 */
                DescribeDataEnginePythonSparkImagesOutcome DescribeDataEnginePythonSparkImages(const Model::DescribeDataEnginePythonSparkImagesRequest &request);
                void DescribeDataEnginePythonSparkImagesAsync(const Model::DescribeDataEnginePythonSparkImagesRequest& request, const DescribeDataEnginePythonSparkImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataEnginePythonSparkImagesOutcomeCallable DescribeDataEnginePythonSparkImagesCallable(const Model::DescribeDataEnginePythonSparkImagesRequest& request);

                /**
                 *本接口（DescribeDataEngines）用于查询DataEngines信息列表.
                 * @param req DescribeDataEnginesRequest
                 * @return DescribeDataEnginesOutcome
                 */
                DescribeDataEnginesOutcome DescribeDataEngines(const Model::DescribeDataEnginesRequest &request);
                void DescribeDataEnginesAsync(const Model::DescribeDataEnginesRequest& request, const DescribeDataEnginesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataEnginesOutcomeCallable DescribeDataEnginesCallable(const Model::DescribeDataEnginesRequest& request);

                /**
                 *查询引擎规格详情
                 * @param req DescribeDataEnginesScaleDetailRequest
                 * @return DescribeDataEnginesScaleDetailOutcome
                 */
                DescribeDataEnginesScaleDetailOutcome DescribeDataEnginesScaleDetail(const Model::DescribeDataEnginesScaleDetailRequest &request);
                void DescribeDataEnginesScaleDetailAsync(const Model::DescribeDataEnginesScaleDetailRequest& request, const DescribeDataEnginesScaleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataEnginesScaleDetailOutcomeCallable DescribeDataEnginesScaleDetailCallable(const Model::DescribeDataEnginesScaleDetailRequest& request);

                /**
                 *本接口（DescribeDatabases）用于查询数据库列表。
                 * @param req DescribeDatabasesRequest
                 * @return DescribeDatabasesOutcome
                 */
                DescribeDatabasesOutcome DescribeDatabases(const Model::DescribeDatabasesRequest &request);
                void DescribeDatabasesAsync(const Model::DescribeDatabasesRequest& request, const DescribeDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatabasesOutcomeCallable DescribeDatabasesCallable(const Model::DescribeDatabasesRequest& request);

                /**
                 *本接口（DescribeDatasourceConnection）用于查询数据源信息
                 * @param req DescribeDatasourceConnectionRequest
                 * @return DescribeDatasourceConnectionOutcome
                 */
                DescribeDatasourceConnectionOutcome DescribeDatasourceConnection(const Model::DescribeDatasourceConnectionRequest &request);
                void DescribeDatasourceConnectionAsync(const Model::DescribeDatasourceConnectionRequest& request, const DescribeDatasourceConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatasourceConnectionOutcomeCallable DescribeDatasourceConnectionCallable(const Model::DescribeDatasourceConnectionRequest& request);

                /**
                 *本接口根据引擎ID查询数据引擎资源使用情况
                 * @param req DescribeEngineUsageInfoRequest
                 * @return DescribeEngineUsageInfoOutcome
                 */
                DescribeEngineUsageInfoOutcome DescribeEngineUsageInfo(const Model::DescribeEngineUsageInfoRequest &request);
                void DescribeEngineUsageInfoAsync(const Model::DescribeEngineUsageInfoRequest& request, const DescribeEngineUsageInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEngineUsageInfoOutcomeCallable DescribeEngineUsageInfoCallable(const Model::DescribeEngineUsageInfoRequest& request);

                /**
                 *本接口（DescribeForbiddenTablePro）用于查询被禁用的表属性列表（新）
                 * @param req DescribeForbiddenTableProRequest
                 * @return DescribeForbiddenTableProOutcome
                 */
                DescribeForbiddenTableProOutcome DescribeForbiddenTablePro(const Model::DescribeForbiddenTableProRequest &request);
                void DescribeForbiddenTableProAsync(const Model::DescribeForbiddenTableProRequest& request, const DescribeForbiddenTableProAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeForbiddenTableProOutcomeCallable DescribeForbiddenTableProCallable(const Model::DescribeForbiddenTableProRequest& request);

                /**
                 *查询托管存储指定目录的Summary
                 * @param req DescribeLakeFsDirSummaryRequest
                 * @return DescribeLakeFsDirSummaryOutcome
                 */
                DescribeLakeFsDirSummaryOutcome DescribeLakeFsDirSummary(const Model::DescribeLakeFsDirSummaryRequest &request);
                void DescribeLakeFsDirSummaryAsync(const Model::DescribeLakeFsDirSummaryRequest& request, const DescribeLakeFsDirSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLakeFsDirSummaryOutcomeCallable DescribeLakeFsDirSummaryCallable(const Model::DescribeLakeFsDirSummaryRequest& request);

                /**
                 *查询用户的托管存储信息
                 * @param req DescribeLakeFsInfoRequest
                 * @return DescribeLakeFsInfoOutcome
                 */
                DescribeLakeFsInfoOutcome DescribeLakeFsInfo(const Model::DescribeLakeFsInfoRequest &request);
                void DescribeLakeFsInfoAsync(const Model::DescribeLakeFsInfoRequest& request, const DescribeLakeFsInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLakeFsInfoOutcomeCallable DescribeLakeFsInfoCallable(const Model::DescribeLakeFsInfoRequest& request);

                /**
                 *获取LakeFs上task执行结果访问信息
                 * @param req DescribeLakeFsTaskResultRequest
                 * @return DescribeLakeFsTaskResultOutcome
                 */
                DescribeLakeFsTaskResultOutcome DescribeLakeFsTaskResult(const Model::DescribeLakeFsTaskResultRequest &request);
                void DescribeLakeFsTaskResultAsync(const Model::DescribeLakeFsTaskResultRequest& request, const DescribeLakeFsTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLakeFsTaskResultOutcomeCallable DescribeLakeFsTaskResultCallable(const Model::DescribeLakeFsTaskResultRequest& request);

                /**
                 *本接口（DescribeNotebookSession）用于查询交互式 session详情信息
                 * @param req DescribeNotebookSessionRequest
                 * @return DescribeNotebookSessionOutcome
                 */
                DescribeNotebookSessionOutcome DescribeNotebookSession(const Model::DescribeNotebookSessionRequest &request);
                void DescribeNotebookSessionAsync(const Model::DescribeNotebookSessionRequest& request, const DescribeNotebookSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNotebookSessionOutcomeCallable DescribeNotebookSessionCallable(const Model::DescribeNotebookSessionRequest& request);

                /**
                 *本接口（DescribeNotebookSessionLog）用于查询交互式 session日志
                 * @param req DescribeNotebookSessionLogRequest
                 * @return DescribeNotebookSessionLogOutcome
                 */
                DescribeNotebookSessionLogOutcome DescribeNotebookSessionLog(const Model::DescribeNotebookSessionLogRequest &request);
                void DescribeNotebookSessionLogAsync(const Model::DescribeNotebookSessionLogRequest& request, const DescribeNotebookSessionLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNotebookSessionLogOutcomeCallable DescribeNotebookSessionLogCallable(const Model::DescribeNotebookSessionLogRequest& request);

                /**
                 *本接口（DescribeNotebookSessionStatement）用于查询session 中执行任务的详情
                 * @param req DescribeNotebookSessionStatementRequest
                 * @return DescribeNotebookSessionStatementOutcome
                 */
                DescribeNotebookSessionStatementOutcome DescribeNotebookSessionStatement(const Model::DescribeNotebookSessionStatementRequest &request);
                void DescribeNotebookSessionStatementAsync(const Model::DescribeNotebookSessionStatementRequest& request, const DescribeNotebookSessionStatementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNotebookSessionStatementOutcomeCallable DescribeNotebookSessionStatementCallable(const Model::DescribeNotebookSessionStatementRequest& request);

                /**
                 *本接口（DescribeNotebookSessionStatementSqlResult）用于获取statement运行结果。
                 * @param req DescribeNotebookSessionStatementSqlResultRequest
                 * @return DescribeNotebookSessionStatementSqlResultOutcome
                 */
                DescribeNotebookSessionStatementSqlResultOutcome DescribeNotebookSessionStatementSqlResult(const Model::DescribeNotebookSessionStatementSqlResultRequest &request);
                void DescribeNotebookSessionStatementSqlResultAsync(const Model::DescribeNotebookSessionStatementSqlResultRequest& request, const DescribeNotebookSessionStatementSqlResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNotebookSessionStatementSqlResultOutcomeCallable DescribeNotebookSessionStatementSqlResultCallable(const Model::DescribeNotebookSessionStatementSqlResultRequest& request);

                /**
                 *本接口（DescribeNotebookSessionStatements）用于查询Session中执行的任务列表
                 * @param req DescribeNotebookSessionStatementsRequest
                 * @return DescribeNotebookSessionStatementsOutcome
                 */
                DescribeNotebookSessionStatementsOutcome DescribeNotebookSessionStatements(const Model::DescribeNotebookSessionStatementsRequest &request);
                void DescribeNotebookSessionStatementsAsync(const Model::DescribeNotebookSessionStatementsRequest& request, const DescribeNotebookSessionStatementsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNotebookSessionStatementsOutcomeCallable DescribeNotebookSessionStatementsCallable(const Model::DescribeNotebookSessionStatementsRequest& request);

                /**
                 *本接口（DescribeNotebookSessions）用于查询交互式 session列表
                 * @param req DescribeNotebookSessionsRequest
                 * @return DescribeNotebookSessionsOutcome
                 */
                DescribeNotebookSessionsOutcome DescribeNotebookSessions(const Model::DescribeNotebookSessionsRequest &request);
                void DescribeNotebookSessionsAsync(const Model::DescribeNotebookSessionsRequest& request, const DescribeNotebookSessionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNotebookSessionsOutcomeCallable DescribeNotebookSessionsCallable(const Model::DescribeNotebookSessionsRequest& request);

                /**
                 *此接口（DescribeOtherCHDFSBindingList）用于查询其他产品元数据加速桶绑定列表
                 * @param req DescribeOtherCHDFSBindingListRequest
                 * @return DescribeOtherCHDFSBindingListOutcome
                 */
                DescribeOtherCHDFSBindingListOutcome DescribeOtherCHDFSBindingList(const Model::DescribeOtherCHDFSBindingListRequest &request);
                void DescribeOtherCHDFSBindingListAsync(const Model::DescribeOtherCHDFSBindingListRequest& request, const DescribeOtherCHDFSBindingListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOtherCHDFSBindingListOutcomeCallable DescribeOtherCHDFSBindingListCallable(const Model::DescribeOtherCHDFSBindingListRequest& request);

                /**
                 *查询结果下载任务
                 * @param req DescribeResultDownloadRequest
                 * @return DescribeResultDownloadOutcome
                 */
                DescribeResultDownloadOutcome DescribeResultDownload(const Model::DescribeResultDownloadRequest &request);
                void DescribeResultDownloadAsync(const Model::DescribeResultDownloadRequest& request, const DescribeResultDownloadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResultDownloadOutcomeCallable DescribeResultDownloadCallable(const Model::DescribeResultDownloadRequest& request);

                /**
                 *该接口（DescribeScripts）用于查询SQL脚本列表
                 * @param req DescribeScriptsRequest
                 * @return DescribeScriptsOutcome
                 */
                DescribeScriptsOutcome DescribeScripts(const Model::DescribeScriptsRequest &request);
                void DescribeScriptsAsync(const Model::DescribeScriptsRequest& request, const DescribeScriptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScriptsOutcomeCallable DescribeScriptsCallable(const Model::DescribeScriptsRequest& request);

                /**
                 *查询spark作业信息
                 * @param req DescribeSparkAppJobRequest
                 * @return DescribeSparkAppJobOutcome
                 */
                DescribeSparkAppJobOutcome DescribeSparkAppJob(const Model::DescribeSparkAppJobRequest &request);
                void DescribeSparkAppJobAsync(const Model::DescribeSparkAppJobRequest& request, const DescribeSparkAppJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSparkAppJobOutcomeCallable DescribeSparkAppJobCallable(const Model::DescribeSparkAppJobRequest& request);

                /**
                 *查询spark作业列表
                 * @param req DescribeSparkAppJobsRequest
                 * @return DescribeSparkAppJobsOutcome
                 */
                DescribeSparkAppJobsOutcome DescribeSparkAppJobs(const Model::DescribeSparkAppJobsRequest &request);
                void DescribeSparkAppJobsAsync(const Model::DescribeSparkAppJobsRequest& request, const DescribeSparkAppJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSparkAppJobsOutcomeCallable DescribeSparkAppJobsCallable(const Model::DescribeSparkAppJobsRequest& request);

                /**
                 *查询Spark作业的运行任务列表
                 * @param req DescribeSparkAppTasksRequest
                 * @return DescribeSparkAppTasksOutcome
                 */
                DescribeSparkAppTasksOutcome DescribeSparkAppTasks(const Model::DescribeSparkAppTasksRequest &request);
                void DescribeSparkAppTasksAsync(const Model::DescribeSparkAppTasksRequest& request, const DescribeSparkAppTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSparkAppTasksOutcomeCallable DescribeSparkAppTasksCallable(const Model::DescribeSparkAppTasksRequest& request);

                /**
                 *本接口（DescribeSparkSessionBatchSQL）用于查询Spark SQL批任务运行状态
                 * @param req DescribeSparkSessionBatchSQLRequest
                 * @return DescribeSparkSessionBatchSQLOutcome
                 */
                DescribeSparkSessionBatchSQLOutcome DescribeSparkSessionBatchSQL(const Model::DescribeSparkSessionBatchSQLRequest &request);
                void DescribeSparkSessionBatchSQLAsync(const Model::DescribeSparkSessionBatchSQLRequest& request, const DescribeSparkSessionBatchSQLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSparkSessionBatchSQLOutcomeCallable DescribeSparkSessionBatchSQLCallable(const Model::DescribeSparkSessionBatchSQLRequest& request);

                /**
                 *本接口（DescribeSparkSessionBatchSQLCost）用于查询Spark SQL批任务消耗
                 * @param req DescribeSparkSessionBatchSQLCostRequest
                 * @return DescribeSparkSessionBatchSQLCostOutcome
                 */
                DescribeSparkSessionBatchSQLCostOutcome DescribeSparkSessionBatchSQLCost(const Model::DescribeSparkSessionBatchSQLCostRequest &request);
                void DescribeSparkSessionBatchSQLCostAsync(const Model::DescribeSparkSessionBatchSQLCostRequest& request, const DescribeSparkSessionBatchSQLCostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSparkSessionBatchSQLCostOutcomeCallable DescribeSparkSessionBatchSQLCostCallable(const Model::DescribeSparkSessionBatchSQLCostRequest& request);

                /**
                 *本接口（DescribeSparkSessionBatchSqlLog）用于查询Spark SQL批任务日志
                 * @param req DescribeSparkSessionBatchSqlLogRequest
                 * @return DescribeSparkSessionBatchSqlLogOutcome
                 */
                DescribeSparkSessionBatchSqlLogOutcome DescribeSparkSessionBatchSqlLog(const Model::DescribeSparkSessionBatchSqlLogRequest &request);
                void DescribeSparkSessionBatchSqlLogAsync(const Model::DescribeSparkSessionBatchSqlLogRequest& request, const DescribeSparkSessionBatchSqlLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSparkSessionBatchSqlLogOutcomeCallable DescribeSparkSessionBatchSqlLogCallable(const Model::DescribeSparkSessionBatchSqlLogRequest& request);

                /**
                 *查询计算结果存储位置。
                 * @param req DescribeStoreLocationRequest
                 * @return DescribeStoreLocationOutcome
                 */
                DescribeStoreLocationOutcome DescribeStoreLocation(const Model::DescribeStoreLocationRequest &request);
                void DescribeStoreLocationAsync(const Model::DescribeStoreLocationRequest& request, const DescribeStoreLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStoreLocationOutcomeCallable DescribeStoreLocationCallable(const Model::DescribeStoreLocationRequest& request);

                /**
                 *本接口（DescribeSubUserAccessPolicy）用于开通了第三方平台访问的用户，查询其子用户的访问策略
                 * @param req DescribeSubUserAccessPolicyRequest
                 * @return DescribeSubUserAccessPolicyOutcome
                 */
                DescribeSubUserAccessPolicyOutcome DescribeSubUserAccessPolicy(const Model::DescribeSubUserAccessPolicyRequest &request);
                void DescribeSubUserAccessPolicyAsync(const Model::DescribeSubUserAccessPolicyRequest& request, const DescribeSubUserAccessPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSubUserAccessPolicyOutcomeCallable DescribeSubUserAccessPolicyCallable(const Model::DescribeSubUserAccessPolicyRequest& request);

                /**
                 *本接口（DescribeTable），用于查询单个表的详细信息。
                 * @param req DescribeTableRequest
                 * @return DescribeTableOutcome
                 */
                DescribeTableOutcome DescribeTable(const Model::DescribeTableRequest &request);
                void DescribeTableAsync(const Model::DescribeTableRequest& request, const DescribeTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTableOutcomeCallable DescribeTableCallable(const Model::DescribeTableRequest& request);

                /**
                 *本接口（DescribeTablePartitions）用于查询数据表分区信息
                 * @param req DescribeTablePartitionsRequest
                 * @return DescribeTablePartitionsOutcome
                 */
                DescribeTablePartitionsOutcome DescribeTablePartitions(const Model::DescribeTablePartitionsRequest &request);
                void DescribeTablePartitionsAsync(const Model::DescribeTablePartitionsRequest& request, const DescribeTablePartitionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTablePartitionsOutcomeCallable DescribeTablePartitionsCallable(const Model::DescribeTablePartitionsRequest& request);

                /**
                 *本接口（DescribeTables）用于查询数据表列表。
                 * @param req DescribeTablesRequest
                 * @return DescribeTablesOutcome
                 */
                DescribeTablesOutcome DescribeTables(const Model::DescribeTablesRequest &request);
                void DescribeTablesAsync(const Model::DescribeTablesRequest& request, const DescribeTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTablesOutcomeCallable DescribeTablesCallable(const Model::DescribeTablesRequest& request);

                /**
                 *本接口（DescribeTables）用于查询数据表名称列表
                 * @param req DescribeTablesNameRequest
                 * @return DescribeTablesNameOutcome
                 */
                DescribeTablesNameOutcome DescribeTablesName(const Model::DescribeTablesNameRequest &request);
                void DescribeTablesNameAsync(const Model::DescribeTablesNameRequest& request, const DescribeTablesNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTablesNameOutcomeCallable DescribeTablesNameCallable(const Model::DescribeTablesNameRequest& request);

                /**
                 *本接口（DescribeTaskLog）用于获取spark 作业任务日志详情
                 * @param req DescribeTaskLogRequest
                 * @return DescribeTaskLogOutcome
                 */
                DescribeTaskLogOutcome DescribeTaskLog(const Model::DescribeTaskLogRequest &request);
                void DescribeTaskLogAsync(const Model::DescribeTaskLogRequest& request, const DescribeTaskLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskLogOutcomeCallable DescribeTaskLogCallable(const Model::DescribeTaskLogRequest& request);

                /**
                 *查询任务监控指标信息
                 * @param req DescribeTaskMonitorInfosRequest
                 * @return DescribeTaskMonitorInfosOutcome
                 */
                DescribeTaskMonitorInfosOutcome DescribeTaskMonitorInfos(const Model::DescribeTaskMonitorInfosRequest &request);
                void DescribeTaskMonitorInfosAsync(const Model::DescribeTaskMonitorInfosRequest& request, const DescribeTaskMonitorInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskMonitorInfosOutcomeCallable DescribeTaskMonitorInfosCallable(const Model::DescribeTaskMonitorInfosRequest& request);

                /**
                 *查询任务结果，仅支持30天以内的任务查询结果，且返回数据大小超过近50M会进行截断。
                 * @param req DescribeTaskResultRequest
                 * @return DescribeTaskResultOutcome
                 */
                DescribeTaskResultOutcome DescribeTaskResult(const Model::DescribeTaskResultRequest &request);
                void DescribeTaskResultAsync(const Model::DescribeTaskResultRequest& request, const DescribeTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskResultOutcomeCallable DescribeTaskResultCallable(const Model::DescribeTaskResultRequest& request);

                /**
                 *该接口（DescribleTasks）用于查询任务列表
                 * @param req DescribeTasksRequest
                 * @return DescribeTasksOutcome
                 */
                DescribeTasksOutcome DescribeTasks(const Model::DescribeTasksRequest &request);
                void DescribeTasksAsync(const Model::DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTasksOutcomeCallable DescribeTasksCallable(const Model::DescribeTasksRequest& request);

                /**
                 *该接口用于洞察分析列表
                 * @param req DescribeTasksAnalysisRequest
                 * @return DescribeTasksAnalysisOutcome
                 */
                DescribeTasksAnalysisOutcome DescribeTasksAnalysis(const Model::DescribeTasksAnalysisRequest &request);
                void DescribeTasksAnalysisAsync(const Model::DescribeTasksAnalysisRequest& request, const DescribeTasksAnalysisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTasksAnalysisOutcomeCallable DescribeTasksAnalysisCallable(const Model::DescribeTasksAnalysisRequest& request);

                /**
                 *该接口（DescribeTasksCostInfo）用于查询任务消耗
                 * @param req DescribeTasksCostInfoRequest
                 * @return DescribeTasksCostInfoOutcome
                 */
                DescribeTasksCostInfoOutcome DescribeTasksCostInfo(const Model::DescribeTasksCostInfoRequest &request);
                void DescribeTasksCostInfoAsync(const Model::DescribeTasksCostInfoRequest& request, const DescribeTasksCostInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTasksCostInfoOutcomeCallable DescribeTasksCostInfoCallable(const Model::DescribeTasksCostInfoRequest& request);

                /**
                 *查看任务概览页
                 * @param req DescribeTasksOverviewRequest
                 * @return DescribeTasksOverviewOutcome
                 */
                DescribeTasksOverviewOutcome DescribeTasksOverview(const Model::DescribeTasksOverviewRequest &request);
                void DescribeTasksOverviewAsync(const Model::DescribeTasksOverviewRequest& request, const DescribeTasksOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTasksOverviewOutcomeCallable DescribeTasksOverviewCallable(const Model::DescribeTasksOverviewRequest& request);

                /**
                 *本接口（RegisterThirdPartyAccessUser）查询开通第三方平台访问的用户信息
                 * @param req DescribeThirdPartyAccessUserRequest
                 * @return DescribeThirdPartyAccessUserOutcome
                 */
                DescribeThirdPartyAccessUserOutcome DescribeThirdPartyAccessUser(const Model::DescribeThirdPartyAccessUserRequest &request);
                void DescribeThirdPartyAccessUserAsync(const Model::DescribeThirdPartyAccessUserRequest& request, const DescribeThirdPartyAccessUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeThirdPartyAccessUserOutcomeCallable DescribeThirdPartyAccessUserCallable(const Model::DescribeThirdPartyAccessUserRequest& request);

                /**
                 *查询可更新配置的引擎列表
                 * @param req DescribeUpdatableDataEnginesRequest
                 * @return DescribeUpdatableDataEnginesOutcome
                 */
                DescribeUpdatableDataEnginesOutcome DescribeUpdatableDataEngines(const Model::DescribeUpdatableDataEnginesRequest &request);
                void DescribeUpdatableDataEnginesAsync(const Model::DescribeUpdatableDataEnginesRequest& request, const DescribeUpdatableDataEnginesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUpdatableDataEnginesOutcomeCallable DescribeUpdatableDataEnginesCallable(const Model::DescribeUpdatableDataEnginesRequest& request);

                /**
                 *查询用户自定义引擎参数
                 * @param req DescribeUserDataEngineConfigRequest
                 * @return DescribeUserDataEngineConfigOutcome
                 */
                DescribeUserDataEngineConfigOutcome DescribeUserDataEngineConfig(const Model::DescribeUserDataEngineConfigRequest &request);
                void DescribeUserDataEngineConfigAsync(const Model::DescribeUserDataEngineConfigRequest& request, const DescribeUserDataEngineConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserDataEngineConfigOutcomeCallable DescribeUserDataEngineConfigCallable(const Model::DescribeUserDataEngineConfigRequest& request);

                /**
                 *获取用户详细信息
                 * @param req DescribeUserInfoRequest
                 * @return DescribeUserInfoOutcome
                 */
                DescribeUserInfoOutcome DescribeUserInfo(const Model::DescribeUserInfoRequest &request);
                void DescribeUserInfoAsync(const Model::DescribeUserInfoRequest& request, const DescribeUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserInfoOutcomeCallable DescribeUserInfoCallable(const Model::DescribeUserInfoRequest& request);

                /**
                 *列举用户角色信息
                 * @param req DescribeUserRolesRequest
                 * @return DescribeUserRolesOutcome
                 */
                DescribeUserRolesOutcome DescribeUserRoles(const Model::DescribeUserRolesRequest &request);
                void DescribeUserRolesAsync(const Model::DescribeUserRolesRequest& request, const DescribeUserRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserRolesOutcomeCallable DescribeUserRolesCallable(const Model::DescribeUserRolesRequest& request);

                /**
                 *获取用户类型
                 * @param req DescribeUserTypeRequest
                 * @return DescribeUserTypeOutcome
                 */
                DescribeUserTypeOutcome DescribeUserType(const Model::DescribeUserTypeRequest &request);
                void DescribeUserTypeAsync(const Model::DescribeUserTypeRequest& request, const DescribeUserTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserTypeOutcomeCallable DescribeUserTypeCallable(const Model::DescribeUserTypeRequest& request);

                /**
                 *获取用户列表信息
                 * @param req DescribeUsersRequest
                 * @return DescribeUsersOutcome
                 */
                DescribeUsersOutcome DescribeUsers(const Model::DescribeUsersRequest &request);
                void DescribeUsersAsync(const Model::DescribeUsersRequest& request, const DescribeUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUsersOutcomeCallable DescribeUsersCallable(const Model::DescribeUsersRequest& request);

                /**
                 *本接口（DescribeViews）用于查询数据视图列表。
                 * @param req DescribeViewsRequest
                 * @return DescribeViewsOutcome
                 */
                DescribeViewsOutcome DescribeViews(const Model::DescribeViewsRequest &request);
                void DescribeViewsAsync(const Model::DescribeViewsRequest& request, const DescribeViewsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeViewsOutcomeCallable DescribeViewsCallable(const Model::DescribeViewsRequest& request);

                /**
                 *获取工作组详细信息
                 * @param req DescribeWorkGroupInfoRequest
                 * @return DescribeWorkGroupInfoOutcome
                 */
                DescribeWorkGroupInfoOutcome DescribeWorkGroupInfo(const Model::DescribeWorkGroupInfoRequest &request);
                void DescribeWorkGroupInfoAsync(const Model::DescribeWorkGroupInfoRequest& request, const DescribeWorkGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkGroupInfoOutcomeCallable DescribeWorkGroupInfoCallable(const Model::DescribeWorkGroupInfoRequest& request);

                /**
                 *获取工作组列表
                 * @param req DescribeWorkGroupsRequest
                 * @return DescribeWorkGroupsOutcome
                 */
                DescribeWorkGroupsOutcome DescribeWorkGroups(const Model::DescribeWorkGroupsRequest &request);
                void DescribeWorkGroupsAsync(const Model::DescribeWorkGroupsRequest& request, const DescribeWorkGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkGroupsOutcomeCallable DescribeWorkGroupsCallable(const Model::DescribeWorkGroupsRequest& request);

                /**
                 *解绑用户鉴权策略
                 * @param req DetachUserPolicyRequest
                 * @return DetachUserPolicyOutcome
                 */
                DetachUserPolicyOutcome DetachUserPolicy(const Model::DetachUserPolicyRequest &request);
                void DetachUserPolicyAsync(const Model::DetachUserPolicyRequest& request, const DetachUserPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachUserPolicyOutcomeCallable DetachUserPolicyCallable(const Model::DetachUserPolicyRequest& request);

                /**
                 *解绑工作组鉴权策略
                 * @param req DetachWorkGroupPolicyRequest
                 * @return DetachWorkGroupPolicyOutcome
                 */
                DetachWorkGroupPolicyOutcome DetachWorkGroupPolicy(const Model::DetachWorkGroupPolicyRequest &request);
                void DetachWorkGroupPolicyAsync(const Model::DetachWorkGroupPolicyRequest& request, const DetachWorkGroupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachWorkGroupPolicyOutcomeCallable DetachWorkGroupPolicyCallable(const Model::DetachWorkGroupPolicyRequest& request);

                /**
                 *DMS元数据删除库
                 * @param req DropDMSDatabaseRequest
                 * @return DropDMSDatabaseOutcome
                 */
                DropDMSDatabaseOutcome DropDMSDatabase(const Model::DropDMSDatabaseRequest &request);
                void DropDMSDatabaseAsync(const Model::DropDMSDatabaseRequest& request, const DropDMSDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DropDMSDatabaseOutcomeCallable DropDMSDatabaseCallable(const Model::DropDMSDatabaseRequest& request);

                /**
                 *DMS元数据删除分区
                 * @param req DropDMSPartitionsRequest
                 * @return DropDMSPartitionsOutcome
                 */
                DropDMSPartitionsOutcome DropDMSPartitions(const Model::DropDMSPartitionsRequest &request);
                void DropDMSPartitionsAsync(const Model::DropDMSPartitionsRequest& request, const DropDMSPartitionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DropDMSPartitionsOutcomeCallable DropDMSPartitionsCallable(const Model::DropDMSPartitionsRequest& request);

                /**
                 *DMS元数据删除表
                 * @param req DropDMSTableRequest
                 * @return DropDMSTableOutcome
                 */
                DropDMSTableOutcome DropDMSTable(const Model::DropDMSTableRequest &request);
                void DropDMSTableAsync(const Model::DropDMSTableRequest& request, const DropDMSTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DropDMSTableOutcomeCallable DropDMSTableCallable(const Model::DropDMSTableRequest& request);

                /**
                 *生成创建托管表语句
                 * @param req GenerateCreateMangedTableSqlRequest
                 * @return GenerateCreateMangedTableSqlOutcome
                 */
                GenerateCreateMangedTableSqlOutcome GenerateCreateMangedTableSql(const Model::GenerateCreateMangedTableSqlRequest &request);
                void GenerateCreateMangedTableSqlAsync(const Model::GenerateCreateMangedTableSqlRequest& request, const GenerateCreateMangedTableSqlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GenerateCreateMangedTableSqlOutcomeCallable GenerateCreateMangedTableSqlCallable(const Model::GenerateCreateMangedTableSqlRequest& request);

                /**
                 *GetOptimizerPolicy
                 * @param req GetOptimizerPolicyRequest
                 * @return GetOptimizerPolicyOutcome
                 */
                GetOptimizerPolicyOutcome GetOptimizerPolicy(const Model::GetOptimizerPolicyRequest &request);
                void GetOptimizerPolicyAsync(const Model::GetOptimizerPolicyRequest& request, const GetOptimizerPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetOptimizerPolicyOutcomeCallable GetOptimizerPolicyCallable(const Model::GetOptimizerPolicyRequest& request);

                /**
                 *授权访问DLC Catalog
                 * @param req GrantDLCCatalogAccessRequest
                 * @return GrantDLCCatalogAccessOutcome
                 */
                GrantDLCCatalogAccessOutcome GrantDLCCatalogAccess(const Model::GrantDLCCatalogAccessRequest &request);
                void GrantDLCCatalogAccessAsync(const Model::GrantDLCCatalogAccessRequest& request, const GrantDLCCatalogAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GrantDLCCatalogAccessOutcomeCallable GrantDLCCatalogAccessCallable(const Model::GrantDLCCatalogAccessRequest& request);

                /**
                 *本接口（ListTaskJobLogDetail）用于获取spark 作业任务日志详情
                 * @param req ListTaskJobLogDetailRequest
                 * @return ListTaskJobLogDetailOutcome
                 */
                ListTaskJobLogDetailOutcome ListTaskJobLogDetail(const Model::ListTaskJobLogDetailRequest &request);
                void ListTaskJobLogDetailAsync(const Model::ListTaskJobLogDetailRequest& request, const ListTaskJobLogDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListTaskJobLogDetailOutcomeCallable ListTaskJobLogDetailCallable(const Model::ListTaskJobLogDetailRequest& request);

                /**
                 *本接口（ListTaskJobLogName）用于获取spark-jar日志名称列表
                 * @param req ListTaskJobLogNameRequest
                 * @return ListTaskJobLogNameOutcome
                 */
                ListTaskJobLogNameOutcome ListTaskJobLogName(const Model::ListTaskJobLogNameRequest &request);
                void ListTaskJobLogNameAsync(const Model::ListTaskJobLogNameRequest& request, const ListTaskJobLogNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListTaskJobLogNameOutcomeCallable ListTaskJobLogNameCallable(const Model::ListTaskJobLogNameRequest& request);

                /**
                 *元数据锁
                 * @param req LockMetaDataRequest
                 * @return LockMetaDataOutcome
                 */
                LockMetaDataOutcome LockMetaData(const Model::LockMetaDataRequest &request);
                void LockMetaDataAsync(const Model::LockMetaDataRequest& request, const LockMetaDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                LockMetaDataOutcomeCallable LockMetaDataCallable(const Model::LockMetaDataRequest& request);

                /**
                 *修改sql查询界面高级设置。
                 * @param req ModifyAdvancedStoreLocationRequest
                 * @return ModifyAdvancedStoreLocationOutcome
                 */
                ModifyAdvancedStoreLocationOutcome ModifyAdvancedStoreLocation(const Model::ModifyAdvancedStoreLocationRequest &request);
                void ModifyAdvancedStoreLocationAsync(const Model::ModifyAdvancedStoreLocationRequest& request, const ModifyAdvancedStoreLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAdvancedStoreLocationOutcomeCallable ModifyAdvancedStoreLocationCallable(const Model::ModifyAdvancedStoreLocationRequest& request);

                /**
                 *修改引擎描述信息
                 * @param req ModifyDataEngineDescriptionRequest
                 * @return ModifyDataEngineDescriptionOutcome
                 */
                ModifyDataEngineDescriptionOutcome ModifyDataEngineDescription(const Model::ModifyDataEngineDescriptionRequest &request);
                void ModifyDataEngineDescriptionAsync(const Model::ModifyDataEngineDescriptionRequest& request, const ModifyDataEngineDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDataEngineDescriptionOutcomeCallable ModifyDataEngineDescriptionCallable(const Model::ModifyDataEngineDescriptionRequest& request);

                /**
                 *修改数据治理事件阈值
                 * @param req ModifyGovernEventRuleRequest
                 * @return ModifyGovernEventRuleOutcome
                 */
                ModifyGovernEventRuleOutcome ModifyGovernEventRule(const Model::ModifyGovernEventRuleRequest &request);
                void ModifyGovernEventRuleAsync(const Model::ModifyGovernEventRuleRequest& request, const ModifyGovernEventRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyGovernEventRuleOutcomeCallable ModifyGovernEventRuleCallable(const Model::ModifyGovernEventRuleRequest& request);

                /**
                 *更新spark作业
                 * @param req ModifySparkAppRequest
                 * @return ModifySparkAppOutcome
                 */
                ModifySparkAppOutcome ModifySparkApp(const Model::ModifySparkAppRequest &request);
                void ModifySparkAppAsync(const Model::ModifySparkAppRequest& request, const ModifySparkAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySparkAppOutcomeCallable ModifySparkAppCallable(const Model::ModifySparkAppRequest& request);

                /**
                 *本接口（ModifySparkAppBatch）用于批量修改Spark作业参数配置
                 * @param req ModifySparkAppBatchRequest
                 * @return ModifySparkAppBatchOutcome
                 */
                ModifySparkAppBatchOutcome ModifySparkAppBatch(const Model::ModifySparkAppBatchRequest &request);
                void ModifySparkAppBatchAsync(const Model::ModifySparkAppBatchRequest& request, const ModifySparkAppBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySparkAppBatchOutcomeCallable ModifySparkAppBatchCallable(const Model::ModifySparkAppBatchRequest& request);

                /**
                 *修改用户信息
                 * @param req ModifyUserRequest
                 * @return ModifyUserOutcome
                 */
                ModifyUserOutcome ModifyUser(const Model::ModifyUserRequest &request);
                void ModifyUserAsync(const Model::ModifyUserRequest& request, const ModifyUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUserOutcomeCallable ModifyUserCallable(const Model::ModifyUserRequest& request);

                /**
                 *修改用户类型。只有管理员用户能够调用该接口进行操作
                 * @param req ModifyUserTypeRequest
                 * @return ModifyUserTypeOutcome
                 */
                ModifyUserTypeOutcome ModifyUserType(const Model::ModifyUserTypeRequest &request);
                void ModifyUserTypeAsync(const Model::ModifyUserTypeRequest& request, const ModifyUserTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUserTypeOutcomeCallable ModifyUserTypeCallable(const Model::ModifyUserTypeRequest& request);

                /**
                 *修改工作组信息
                 * @param req ModifyWorkGroupRequest
                 * @return ModifyWorkGroupOutcome
                 */
                ModifyWorkGroupOutcome ModifyWorkGroup(const Model::ModifyWorkGroupRequest &request);
                void ModifyWorkGroupAsync(const Model::ModifyWorkGroupRequest& request, const ModifyWorkGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWorkGroupOutcomeCallable ModifyWorkGroupCallable(const Model::ModifyWorkGroupRequest& request);

                /**
                 *本接口（QueryInternalTableWarehouse）用于获取原生表warehouse路径
                 * @param req QueryInternalTableWarehouseRequest
                 * @return QueryInternalTableWarehouseOutcome
                 */
                QueryInternalTableWarehouseOutcome QueryInternalTableWarehouse(const Model::QueryInternalTableWarehouseRequest &request);
                void QueryInternalTableWarehouseAsync(const Model::QueryInternalTableWarehouseRequest& request, const QueryInternalTableWarehouseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryInternalTableWarehouseOutcomeCallable QueryInternalTableWarehouseCallable(const Model::QueryInternalTableWarehouseRequest& request);

                /**
                 *获取任务结果查询
                 * @param req QueryResultRequest
                 * @return QueryResultOutcome
                 */
                QueryResultOutcome QueryResult(const Model::QueryResultRequest &request);
                void QueryResultAsync(const Model::QueryResultRequest& request, const QueryResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryResultOutcomeCallable QueryResultCallable(const Model::QueryResultRequest& request);

                /**
                 *该接口（QueryTaskCostDetail）用于查询任务消耗明细
                 * @param req QueryTaskCostDetailRequest
                 * @return QueryTaskCostDetailOutcome
                 */
                QueryTaskCostDetailOutcome QueryTaskCostDetail(const Model::QueryTaskCostDetailRequest &request);
                void QueryTaskCostDetailAsync(const Model::QueryTaskCostDetailRequest& request, const QueryTaskCostDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryTaskCostDetailOutcomeCallable QueryTaskCostDetailCallable(const Model::QueryTaskCostDetailRequest& request);

                /**
                 *本接口（RegisterThirdPartyAccessUser）用于开通第三方平台访问
                 * @param req RegisterThirdPartyAccessUserRequest
                 * @return RegisterThirdPartyAccessUserOutcome
                 */
                RegisterThirdPartyAccessUserOutcome RegisterThirdPartyAccessUser(const Model::RegisterThirdPartyAccessUserRequest &request);
                void RegisterThirdPartyAccessUserAsync(const Model::RegisterThirdPartyAccessUserRequest& request, const RegisterThirdPartyAccessUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RegisterThirdPartyAccessUserOutcomeCallable RegisterThirdPartyAccessUserCallable(const Model::RegisterThirdPartyAccessUserRequest& request);

                /**
                 *续费数据引擎
                 * @param req RenewDataEngineRequest
                 * @return RenewDataEngineOutcome
                 */
                RenewDataEngineOutcome RenewDataEngine(const Model::RenewDataEngineRequest &request);
                void RenewDataEngineAsync(const Model::RenewDataEngineRequest& request, const RenewDataEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewDataEngineOutcomeCallable RenewDataEngineCallable(const Model::RenewDataEngineRequest& request);

                /**
                 *上报元数据心跳
                 * @param req ReportHeartbeatMetaDataRequest
                 * @return ReportHeartbeatMetaDataOutcome
                 */
                ReportHeartbeatMetaDataOutcome ReportHeartbeatMetaData(const Model::ReportHeartbeatMetaDataRequest &request);
                void ReportHeartbeatMetaDataAsync(const Model::ReportHeartbeatMetaDataRequest& request, const ReportHeartbeatMetaDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReportHeartbeatMetaDataOutcomeCallable ReportHeartbeatMetaDataCallable(const Model::ReportHeartbeatMetaDataRequest& request);

                /**
                 *重启引擎
                 * @param req RestartDataEngineRequest
                 * @return RestartDataEngineOutcome
                 */
                RestartDataEngineOutcome RestartDataEngine(const Model::RestartDataEngineRequest &request);
                void RestartDataEngineAsync(const Model::RestartDataEngineRequest& request, const RestartDataEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestartDataEngineOutcomeCallable RestartDataEngineCallable(const Model::RestartDataEngineRequest& request);

                /**
                 *撤销DLC Catalog访问权限
                 * @param req RevokeDLCCatalogAccessRequest
                 * @return RevokeDLCCatalogAccessOutcome
                 */
                RevokeDLCCatalogAccessOutcome RevokeDLCCatalogAccess(const Model::RevokeDLCCatalogAccessRequest &request);
                void RevokeDLCCatalogAccessAsync(const Model::RevokeDLCCatalogAccessRequest& request, const RevokeDLCCatalogAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RevokeDLCCatalogAccessOutcomeCallable RevokeDLCCatalogAccessCallable(const Model::RevokeDLCCatalogAccessRequest& request);

                /**
                 *回滚引擎镜像版本
                 * @param req RollbackDataEngineImageRequest
                 * @return RollbackDataEngineImageOutcome
                 */
                RollbackDataEngineImageOutcome RollbackDataEngineImage(const Model::RollbackDataEngineImageRequest &request);
                void RollbackDataEngineImageAsync(const Model::RollbackDataEngineImageRequest& request, const RollbackDataEngineImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RollbackDataEngineImageOutcomeCallable RollbackDataEngineImageCallable(const Model::RollbackDataEngineImageRequest& request);

                /**
                 *本接口用于控制挂起或启动数据引擎
                 * @param req SuspendResumeDataEngineRequest
                 * @return SuspendResumeDataEngineOutcome
                 */
                SuspendResumeDataEngineOutcome SuspendResumeDataEngine(const Model::SuspendResumeDataEngineRequest &request);
                void SuspendResumeDataEngineAsync(const Model::SuspendResumeDataEngineRequest& request, const SuspendResumeDataEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SuspendResumeDataEngineOutcomeCallable SuspendResumeDataEngineCallable(const Model::SuspendResumeDataEngineRequest& request);

                /**
                 *切换主备集群
                 * @param req SwitchDataEngineRequest
                 * @return SwitchDataEngineOutcome
                 */
                SwitchDataEngineOutcome SwitchDataEngine(const Model::SwitchDataEngineRequest &request);
                void SwitchDataEngineAsync(const Model::SwitchDataEngineRequest& request, const SwitchDataEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SwitchDataEngineOutcomeCallable SwitchDataEngineCallable(const Model::SwitchDataEngineRequest& request);

                /**
                 *切换引擎镜像版本
                 * @param req SwitchDataEngineImageRequest
                 * @return SwitchDataEngineImageOutcome
                 */
                SwitchDataEngineImageOutcome SwitchDataEngineImage(const Model::SwitchDataEngineImageRequest &request);
                void SwitchDataEngineImageAsync(const Model::SwitchDataEngineImageRequest& request, const SwitchDataEngineImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SwitchDataEngineImageOutcomeCallable SwitchDataEngineImageCallable(const Model::SwitchDataEngineImageRequest& request);

                /**
                 *解绑用户上的用户组
                 * @param req UnbindWorkGroupsFromUserRequest
                 * @return UnbindWorkGroupsFromUserOutcome
                 */
                UnbindWorkGroupsFromUserOutcome UnbindWorkGroupsFromUser(const Model::UnbindWorkGroupsFromUserRequest &request);
                void UnbindWorkGroupsFromUserAsync(const Model::UnbindWorkGroupsFromUserRequest& request, const UnbindWorkGroupsFromUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindWorkGroupsFromUserOutcomeCallable UnbindWorkGroupsFromUserCallable(const Model::UnbindWorkGroupsFromUserRequest& request);

                /**
                 *元数据解锁
                 * @param req UnlockMetaDataRequest
                 * @return UnlockMetaDataOutcome
                 */
                UnlockMetaDataOutcome UnlockMetaData(const Model::UnlockMetaDataRequest &request);
                void UnlockMetaDataAsync(const Model::UnlockMetaDataRequest& request, const UnlockMetaDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnlockMetaDataOutcomeCallable UnlockMetaDataCallable(const Model::UnlockMetaDataRequest& request);

                /**
                 *本接口用于更新数据引擎配置
                 * @param req UpdateDataEngineRequest
                 * @return UpdateDataEngineOutcome
                 */
                UpdateDataEngineOutcome UpdateDataEngine(const Model::UpdateDataEngineRequest &request);
                void UpdateDataEngineAsync(const Model::UpdateDataEngineRequest& request, const UpdateDataEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateDataEngineOutcomeCallable UpdateDataEngineCallable(const Model::UpdateDataEngineRequest& request);

                /**
                 *用户某种操作，触发引擎配置修改
                 * @param req UpdateDataEngineConfigRequest
                 * @return UpdateDataEngineConfigOutcome
                 */
                UpdateDataEngineConfigOutcome UpdateDataEngineConfig(const Model::UpdateDataEngineConfigRequest &request);
                void UpdateDataEngineConfigAsync(const Model::UpdateDataEngineConfigRequest& request, const UpdateDataEngineConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateDataEngineConfigOutcomeCallable UpdateDataEngineConfigCallable(const Model::UpdateDataEngineConfigRequest& request);

                /**
                 *此接口用于更新行过滤规则。注意只能更新过滤规则，不能更新规格对象catalog，database和table。
                 * @param req UpdateRowFilterRequest
                 * @return UpdateRowFilterOutcome
                 */
                UpdateRowFilterOutcome UpdateRowFilter(const Model::UpdateRowFilterRequest &request);
                void UpdateRowFilterAsync(const Model::UpdateRowFilterRequest& request, const UpdateRowFilterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateRowFilterOutcomeCallable UpdateRowFilterCallable(const Model::UpdateRowFilterRequest& request);

                /**
                 *修改用户引擎自定义配置
                 * @param req UpdateUserDataEngineConfigRequest
                 * @return UpdateUserDataEngineConfigOutcome
                 */
                UpdateUserDataEngineConfigOutcome UpdateUserDataEngineConfig(const Model::UpdateUserDataEngineConfigRequest &request);
                void UpdateUserDataEngineConfigAsync(const Model::UpdateUserDataEngineConfigRequest& request, const UpdateUserDataEngineConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateUserDataEngineConfigOutcomeCallable UpdateUserDataEngineConfigCallable(const Model::UpdateUserDataEngineConfigRequest& request);

                /**
                 *升级引擎镜像
                 * @param req UpgradeDataEngineImageRequest
                 * @return UpgradeDataEngineImageOutcome
                 */
                UpgradeDataEngineImageOutcome UpgradeDataEngineImage(const Model::UpgradeDataEngineImageRequest &request);
                void UpgradeDataEngineImageAsync(const Model::UpgradeDataEngineImageRequest& request, const UpgradeDataEngineImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeDataEngineImageOutcomeCallable UpgradeDataEngineImageCallable(const Model::UpgradeDataEngineImageRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_DLCCLIENT_H_
