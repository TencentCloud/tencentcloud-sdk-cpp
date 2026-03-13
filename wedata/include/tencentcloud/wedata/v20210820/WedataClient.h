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

#ifndef TENCENTCLOUD_WEDATA_V20210820_WEDATACLIENT_H_
#define TENCENTCLOUD_WEDATA_V20210820_WEDATACLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/wedata/v20210820/model/AddProjectUserRoleRequest.h>
#include <tencentcloud/wedata/v20210820/model/AddProjectUserRoleResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchCreateIntegrationTaskAlarmsRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchCreateIntegrationTaskAlarmsResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchCreateTaskVersionAsyncRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchCreateTaskVersionAsyncResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchDeleteIntegrationTasksRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchDeleteIntegrationTasksResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchDeleteOpsTasksRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchDeleteOpsTasksResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchForceSuccessIntegrationTaskInstancesRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchForceSuccessIntegrationTaskInstancesResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchKillIntegrationTaskInstancesRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchKillIntegrationTaskInstancesResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchMakeUpIntegrationTasksRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchMakeUpIntegrationTasksResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchModifyOpsOwnersRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchModifyOpsOwnersResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchRerunIntegrationTaskInstancesRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchRerunIntegrationTaskInstancesResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchResumeIntegrationTasksRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchResumeIntegrationTasksResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchRunOpsTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchRunOpsTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchStartIntegrationTasksRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchStartIntegrationTasksResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchStopIntegrationTasksRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchStopIntegrationTasksResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchStopOpsTasksRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchStopOpsTasksResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchStopWorkflowsByIdsRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchStopWorkflowsByIdsResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchSuspendIntegrationTasksRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchSuspendIntegrationTasksResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchUpdateIntegrationTasksRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchUpdateIntegrationTasksResponse.h>
#include <tencentcloud/wedata/v20210820/model/BindProjectExecutorResourceRequest.h>
#include <tencentcloud/wedata/v20210820/model/BindProjectExecutorResourceResponse.h>
#include <tencentcloud/wedata/v20210820/model/CheckAlarmRegularNameExistRequest.h>
#include <tencentcloud/wedata/v20210820/model/CheckAlarmRegularNameExistResponse.h>
#include <tencentcloud/wedata/v20210820/model/CheckIntegrationNodeNameExistsRequest.h>
#include <tencentcloud/wedata/v20210820/model/CheckIntegrationNodeNameExistsResponse.h>
#include <tencentcloud/wedata/v20210820/model/CheckIntegrationTaskNameExistsRequest.h>
#include <tencentcloud/wedata/v20210820/model/CheckIntegrationTaskNameExistsResponse.h>
#include <tencentcloud/wedata/v20210820/model/CheckTaskNameExistRequest.h>
#include <tencentcloud/wedata/v20210820/model/CheckTaskNameExistResponse.h>
#include <tencentcloud/wedata/v20210820/model/CommitIntegrationTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/CommitIntegrationTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/CommitRuleGroupTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/CommitRuleGroupTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/CountOpsInstanceStateRequest.h>
#include <tencentcloud/wedata/v20210820/model/CountOpsInstanceStateResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateBaseProjectRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateBaseProjectResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateCodeTemplateRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateCodeTemplateResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateCodeTemplateVersionRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateCodeTemplateVersionResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateCustomFunctionRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateCustomFunctionResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateDataModelRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateDataModelResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateDataSourceRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateDataSourceResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateDsFolderRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateDsFolderResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateHiveTableRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateHiveTableResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateHiveTableByDDLRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateHiveTableByDDLResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateIntegrationNodeRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateIntegrationNodeResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateIntegrationTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateIntegrationTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateOfflineTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateOfflineTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateOpsMakePlanRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateOpsMakePlanResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateRuleRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateRuleResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateRuleTemplateRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateRuleTemplateResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateTaskAlarmRegularRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateTaskAlarmRegularResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateTaskFolderRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateTaskFolderResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateTaskNewRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateTaskNewResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateTaskVersionDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateTaskVersionDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateWorkflowDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateWorkflowDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DagInstancesRequest.h>
#include <tencentcloud/wedata/v20210820/model/DagInstancesResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteCodeTemplateRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteCodeTemplateResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteCustomFunctionRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteCustomFunctionResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteDataModelRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteDataModelResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteDataSourcesRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteDataSourcesResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteDsFolderRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteDsFolderResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteFileRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteFileResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteFilePathRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteFilePathResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteIntegrationNodeRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteIntegrationNodeResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteIntegrationTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteIntegrationTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteLinkRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteLinkResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteOfflineTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteOfflineTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteProjectParamDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteProjectParamDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteProjectUsersRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteProjectUsersResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteResourceRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteResourceResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteResourceFileRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteResourceFileResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteResourceFilesRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteResourceFilesResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteRuleRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteRuleResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteRuleTemplateRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteRuleTemplateResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteTaskAlarmRegularRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteTaskAlarmRegularResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteTaskDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteTaskDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteTaskLineageRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteTaskLineageResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteWorkflowByIdRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteWorkflowByIdResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeAlarmEventsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeAlarmEventsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeAlarmReceiverRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeAlarmReceiverResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeAllByFolderNewRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeAllByFolderNewResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeApproveListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeApproveListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeApproveTypeListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeApproveTypeListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeBaseBizCatalogsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeBaseBizCatalogsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeBatchOperateTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeBatchOperateTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeCodeTemplateDetailRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeCodeTemplateDetailResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeColumnLineageRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeColumnLineageResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeColumnsMetaRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeColumnsMetaResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDataAssetsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDataAssetsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDataCheckStatRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDataCheckStatResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDataServicePublishedApiDetailRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDataServicePublishedApiDetailResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDataServicePublishedApiListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDataServicePublishedApiListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDataSourceInfoListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDataSourceInfoListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDataSourceListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDataSourceListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDatabaseInfoListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDatabaseInfoListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDatabaseMetasRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDatabaseMetasResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDatasourceRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDatasourceResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDependOpsTasksRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDependOpsTasksResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDependTaskListsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDependTaskListsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDimensionScoreRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDimensionScoreResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDsFolderTreeRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDsFolderTreeResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDsParentFolderTreeRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDsParentFolderTreeResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDsTaskVersionInfoRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDsTaskVersionInfoResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDsTaskVersionListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDsTaskVersionListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDutyScheduleDetailsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDutyScheduleDetailsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDutyScheduleListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDutyScheduleListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeEventRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeEventResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeEventCasesRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeEventCasesResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeEventConsumeTasksRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeEventConsumeTasksResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeExecStrategyRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeExecStrategyResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeExecutorGroupMetricRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeExecutorGroupMetricResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeFieldBasicInfoRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeFieldBasicInfoResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeFolderWorkflowListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeFolderWorkflowListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeFormVersionParamRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeFormVersionParamResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeFunctionKindsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeFunctionKindsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeFunctionTypesRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeFunctionTypesResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInstanceByCycleRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInstanceByCycleResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInstanceDetailInfoRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInstanceDetailInfoResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInstanceLastLogRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInstanceLastLogResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInstanceListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInstanceListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInstanceLogRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInstanceLogResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInstanceLogDetailRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInstanceLogDetailResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInstanceLogFileRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInstanceLogFileResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInstanceLogListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInstanceLogListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeIntegrationNodeRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeIntegrationNodeResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeIntegrationStatisticsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeIntegrationStatisticsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeIntegrationStatisticsInstanceTrendRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeIntegrationStatisticsInstanceTrendResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeIntegrationStatisticsRecordsTrendRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeIntegrationStatisticsRecordsTrendResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeIntegrationStatisticsTaskStatusRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeIntegrationStatisticsTaskStatusResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeIntegrationStatisticsTaskStatusTrendRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeIntegrationStatisticsTaskStatusTrendResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeIntegrationTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeIntegrationTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeIntegrationTasksRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeIntegrationTasksResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeIntegrationVersionNodesInfoRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeIntegrationVersionNodesInfoResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeLineageInfoRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeLineageInfoResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeManualTriggerRecordPageRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeManualTriggerRecordPageResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeOfflineTaskTokenRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeOfflineTaskTokenResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeOperateOpsTasksRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeOperateOpsTasksResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeOpsInstanceLogListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeOpsInstanceLogListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeOpsMakePlanInstancesRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeOpsMakePlanInstancesResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeOpsMakePlanTasksRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeOpsMakePlanTasksResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeOpsMakePlansRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeOpsMakePlansResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeOpsWorkflowsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeOpsWorkflowsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeOrganizationalFunctionsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeOrganizationalFunctionsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeParentTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeParentTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribePendingSubmitTaskListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribePendingSubmitTaskListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeProjectRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeProjectResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeProjectUsersRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeProjectUsersResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeQualityScoreRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeQualityScoreResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeQualityScoreTrendRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeQualityScoreTrendResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRealTimeTaskInstanceNodeInfoRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRealTimeTaskInstanceNodeInfoResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRealTimeTaskMetricOverviewRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRealTimeTaskMetricOverviewResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRealTimeTaskSpeedRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRealTimeTaskSpeedResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRealViewSchemaPageRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRealViewSchemaPageResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRelatedTasksByTaskIdRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRelatedTasksByTaskIdResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeReportTaskDetailRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeReportTaskDetailResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeReportTaskListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeReportTaskListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeResourceManagePathTreesRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeResourceManagePathTreesResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRoleListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRoleListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleDimStatRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleDimStatResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleExecDetailRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleExecDetailResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleExecLogRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleExecLogResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleExecResultsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleExecResultsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleExecStatRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleExecStatResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleGroupRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleGroupResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleGroupExecResultsByPageRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleGroupExecResultsByPageResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleGroupSubscriptionRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleGroupSubscriptionResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleGroupTableRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleGroupTableResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleGroupsByPageRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleGroupsByPageResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleTemplateRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleTemplateResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleTemplatesRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleTemplatesResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleTemplatesByPageRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleTemplatesByPageResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRulesRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRulesResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRulesByPageRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRulesByPageResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeScheduleInstancesRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeScheduleInstancesResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeSchedulerInstanceStatusRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeSchedulerInstanceStatusResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeSchedulerRunTimeInstanceCntByStatusRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeSchedulerRunTimeInstanceCntByStatusResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeSchedulerTaskCntByStatusRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeSchedulerTaskCntByStatusResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeSchedulerTaskTypeCntRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeSchedulerTaskTypeCntResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeStatisticInstanceStatusTrendOpsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeStatisticInstanceStatusTrendOpsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeStreamTaskLogListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeStreamTaskLogListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeSuccessorOpsTaskInfosRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeSuccessorOpsTaskInfosResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeSuccessorTaskInfoListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeSuccessorTaskInfoListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTableBasicInfoRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTableBasicInfoResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTableInfoListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTableInfoListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTableLineageRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTableLineageResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTableLineageInfoRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTableLineageInfoResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTableMetaRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTableMetaResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTableMetasRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTableMetasResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTablePartitionsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTablePartitionsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTableQualityDetailsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTableQualityDetailsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTableSchemaInfoRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTableSchemaInfoResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTableScoreTrendRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTableScoreTrendResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskAlarmRegulationsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskAlarmRegulationsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskByCycleRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskByCycleResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskByStatusReportRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskByStatusReportResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskDetailDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskDetailDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskInstancesStatusRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskInstancesStatusResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskLineageRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskLineageResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskLockStatusRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskLockStatusResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskParamDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskParamDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskRunHistoryRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskRunHistoryResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskScriptRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskScriptResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskTableMetricOverviewRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskTableMetricOverviewResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskTemplatesRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskTemplatesResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTasksForCodeTemplateRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTasksForCodeTemplateResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTemplateDimCountRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTemplateDimCountResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTenantProjectsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTenantProjectsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTestRunningRecordRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTestRunningRecordResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeThirdTaskRunLogRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeThirdTaskRunLogResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTopTableStatRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTopTableStatResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTrendStatRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTrendStatResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeWorkflowByFordIdsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeWorkflowByFordIdsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeWorkflowCanvasInfoRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeWorkflowCanvasInfoResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeWorkflowExecuteByIdRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeWorkflowExecuteByIdResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeWorkflowInfoByIdRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeWorkflowInfoByIdResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeWorkflowListByProjectIdRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeWorkflowListByProjectIdResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeWorkflowSchedulerInfoDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeWorkflowSchedulerInfoDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeWorkflowTaskCountRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeWorkflowTaskCountResponse.h>
#include <tencentcloud/wedata/v20210820/model/DiagnoseProRequest.h>
#include <tencentcloud/wedata/v20210820/model/DiagnoseProResponse.h>
#include <tencentcloud/wedata/v20210820/model/DisableProjectRequest.h>
#include <tencentcloud/wedata/v20210820/model/DisableProjectResponse.h>
#include <tencentcloud/wedata/v20210820/model/DownloadLogByLineRequest.h>
#include <tencentcloud/wedata/v20210820/model/DownloadLogByLineResponse.h>
#include <tencentcloud/wedata/v20210820/model/DryRunDIOfflineTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/DryRunDIOfflineTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/EnableProjectRequest.h>
#include <tencentcloud/wedata/v20210820/model/EnableProjectResponse.h>
#include <tencentcloud/wedata/v20210820/model/FindAllFolderRequest.h>
#include <tencentcloud/wedata/v20210820/model/FindAllFolderResponse.h>
#include <tencentcloud/wedata/v20210820/model/FreezeOpsTasksRequest.h>
#include <tencentcloud/wedata/v20210820/model/FreezeOpsTasksResponse.h>
#include <tencentcloud/wedata/v20210820/model/FreezeTasksByWorkflowIdsRequest.h>
#include <tencentcloud/wedata/v20210820/model/FreezeTasksByWorkflowIdsResponse.h>
#include <tencentcloud/wedata/v20210820/model/GenHiveTableDDLSqlRequest.h>
#include <tencentcloud/wedata/v20210820/model/GenHiveTableDDLSqlResponse.h>
#include <tencentcloud/wedata/v20210820/model/GetBatchDetailErrorLogRequest.h>
#include <tencentcloud/wedata/v20210820/model/GetBatchDetailErrorLogResponse.h>
#include <tencentcloud/wedata/v20210820/model/GetCosTokenRequest.h>
#include <tencentcloud/wedata/v20210820/model/GetCosTokenResponse.h>
#include <tencentcloud/wedata/v20210820/model/GetFileInfoRequest.h>
#include <tencentcloud/wedata/v20210820/model/GetFileInfoResponse.h>
#include <tencentcloud/wedata/v20210820/model/GetInstanceLogRequest.h>
#include <tencentcloud/wedata/v20210820/model/GetInstanceLogResponse.h>
#include <tencentcloud/wedata/v20210820/model/GetIntegrationNodeColumnSchemaRequest.h>
#include <tencentcloud/wedata/v20210820/model/GetIntegrationNodeColumnSchemaResponse.h>
#include <tencentcloud/wedata/v20210820/model/GetJobStatusRequest.h>
#include <tencentcloud/wedata/v20210820/model/GetJobStatusResponse.h>
#include <tencentcloud/wedata/v20210820/model/GetOfflineDIInstanceListRequest.h>
#include <tencentcloud/wedata/v20210820/model/GetOfflineDIInstanceListResponse.h>
#include <tencentcloud/wedata/v20210820/model/GetOfflineInstanceListRequest.h>
#include <tencentcloud/wedata/v20210820/model/GetOfflineInstanceListResponse.h>
#include <tencentcloud/wedata/v20210820/model/GetPaginationTaskScriptRequest.h>
#include <tencentcloud/wedata/v20210820/model/GetPaginationTaskScriptResponse.h>
#include <tencentcloud/wedata/v20210820/model/GetTaskInstanceRequest.h>
#include <tencentcloud/wedata/v20210820/model/GetTaskInstanceResponse.h>
#include <tencentcloud/wedata/v20210820/model/JudgeResourceFileRequest.h>
#include <tencentcloud/wedata/v20210820/model/JudgeResourceFileResponse.h>
#include <tencentcloud/wedata/v20210820/model/KillOpsMakePlanInstancesRequest.h>
#include <tencentcloud/wedata/v20210820/model/KillOpsMakePlanInstancesResponse.h>
#include <tencentcloud/wedata/v20210820/model/KillScheduleInstancesRequest.h>
#include <tencentcloud/wedata/v20210820/model/KillScheduleInstancesResponse.h>
#include <tencentcloud/wedata/v20210820/model/ListBatchDetailRequest.h>
#include <tencentcloud/wedata/v20210820/model/ListBatchDetailResponse.h>
#include <tencentcloud/wedata/v20210820/model/ListInstancesRequest.h>
#include <tencentcloud/wedata/v20210820/model/ListInstancesResponse.h>
#include <tencentcloud/wedata/v20210820/model/LockIntegrationTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/LockIntegrationTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyApproveStatusRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyApproveStatusResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyDataSourceRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyDataSourceResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyDimensionWeightRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyDimensionWeightResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyDsFolderRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyDsFolderResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyExecStrategyRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyExecStrategyResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyIntegrationNodeRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyIntegrationNodeResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyIntegrationTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyIntegrationTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyMonitorStatusRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyMonitorStatusResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyProjectRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyProjectResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyRuleRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyRuleResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyRuleGroupSubscriptionRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyRuleGroupSubscriptionResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyRuleTemplateRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyRuleTemplateResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyTaskAlarmRegularRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyTaskAlarmRegularResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyTaskInfoRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyTaskInfoResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyTaskInfoDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyTaskInfoDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyTaskLinksRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyTaskLinksResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyTaskLinksDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyTaskLinksDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyTaskNameRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyTaskNameResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyTaskScriptRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyTaskScriptResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyWorkflowInfoRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyWorkflowInfoResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyWorkflowScheduleRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyWorkflowScheduleResponse.h>
#include <tencentcloud/wedata/v20210820/model/MoveTasksToFolderRequest.h>
#include <tencentcloud/wedata/v20210820/model/MoveTasksToFolderResponse.h>
#include <tencentcloud/wedata/v20210820/model/RegisterDsEventRequest.h>
#include <tencentcloud/wedata/v20210820/model/RegisterDsEventResponse.h>
#include <tencentcloud/wedata/v20210820/model/RegisterDsEventListenerRequest.h>
#include <tencentcloud/wedata/v20210820/model/RegisterDsEventListenerResponse.h>
#include <tencentcloud/wedata/v20210820/model/RegisterEventRequest.h>
#include <tencentcloud/wedata/v20210820/model/RegisterEventResponse.h>
#include <tencentcloud/wedata/v20210820/model/RegisterEventListenerRequest.h>
#include <tencentcloud/wedata/v20210820/model/RegisterEventListenerResponse.h>
#include <tencentcloud/wedata/v20210820/model/RemoveDatabaseRequest.h>
#include <tencentcloud/wedata/v20210820/model/RemoveDatabaseResponse.h>
#include <tencentcloud/wedata/v20210820/model/RemoveSchemaRequest.h>
#include <tencentcloud/wedata/v20210820/model/RemoveSchemaResponse.h>
#include <tencentcloud/wedata/v20210820/model/RemoveTableRequest.h>
#include <tencentcloud/wedata/v20210820/model/RemoveTableResponse.h>
#include <tencentcloud/wedata/v20210820/model/RemoveWorkflowDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/RemoveWorkflowDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/RenewWorkflowOwnerDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/RenewWorkflowOwnerDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/RenewWorkflowSchedulerInfoDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/RenewWorkflowSchedulerInfoDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/ReportDatabaseRequest.h>
#include <tencentcloud/wedata/v20210820/model/ReportDatabaseResponse.h>
#include <tencentcloud/wedata/v20210820/model/ReportSchemaRequest.h>
#include <tencentcloud/wedata/v20210820/model/ReportSchemaResponse.h>
#include <tencentcloud/wedata/v20210820/model/ReportTableRequest.h>
#include <tencentcloud/wedata/v20210820/model/ReportTableResponse.h>
#include <tencentcloud/wedata/v20210820/model/ReportTaskLineageRequest.h>
#include <tencentcloud/wedata/v20210820/model/ReportTaskLineageResponse.h>
#include <tencentcloud/wedata/v20210820/model/ResumeIntegrationTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/ResumeIntegrationTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/RobAndLockIntegrationTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/RobAndLockIntegrationTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/RunForceSucScheduleInstancesRequest.h>
#include <tencentcloud/wedata/v20210820/model/RunForceSucScheduleInstancesResponse.h>
#include <tencentcloud/wedata/v20210820/model/RunRerunScheduleInstancesRequest.h>
#include <tencentcloud/wedata/v20210820/model/RunRerunScheduleInstancesResponse.h>
#include <tencentcloud/wedata/v20210820/model/RunTasksByMultiWorkflowRequest.h>
#include <tencentcloud/wedata/v20210820/model/RunTasksByMultiWorkflowResponse.h>
#include <tencentcloud/wedata/v20210820/model/SaveCustomFunctionRequest.h>
#include <tencentcloud/wedata/v20210820/model/SaveCustomFunctionResponse.h>
#include <tencentcloud/wedata/v20210820/model/SetTaskAlarmNewRequest.h>
#include <tencentcloud/wedata/v20210820/model/SetTaskAlarmNewResponse.h>
#include <tencentcloud/wedata/v20210820/model/StartIntegrationTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/StartIntegrationTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/StopIntegrationTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/StopIntegrationTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/SubmitCustomFunctionRequest.h>
#include <tencentcloud/wedata/v20210820/model/SubmitCustomFunctionResponse.h>
#include <tencentcloud/wedata/v20210820/model/SubmitSqlTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/SubmitSqlTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/SubmitTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/SubmitTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/SubmitTaskTestRunRequest.h>
#include <tencentcloud/wedata/v20210820/model/SubmitTaskTestRunResponse.h>
#include <tencentcloud/wedata/v20210820/model/SubmitWorkflowRequest.h>
#include <tencentcloud/wedata/v20210820/model/SubmitWorkflowResponse.h>
#include <tencentcloud/wedata/v20210820/model/SuspendIntegrationTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/SuspendIntegrationTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/TaskLogRequest.h>
#include <tencentcloud/wedata/v20210820/model/TaskLogResponse.h>
#include <tencentcloud/wedata/v20210820/model/TriggerDsEventRequest.h>
#include <tencentcloud/wedata/v20210820/model/TriggerDsEventResponse.h>
#include <tencentcloud/wedata/v20210820/model/TriggerEventRequest.h>
#include <tencentcloud/wedata/v20210820/model/TriggerEventResponse.h>
#include <tencentcloud/wedata/v20210820/model/TriggerManualTasksRequest.h>
#include <tencentcloud/wedata/v20210820/model/TriggerManualTasksResponse.h>
#include <tencentcloud/wedata/v20210820/model/UnboundProjectExecutorResourceRequest.h>
#include <tencentcloud/wedata/v20210820/model/UnboundProjectExecutorResourceResponse.h>
#include <tencentcloud/wedata/v20210820/model/UnlockIntegrationTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/UnlockIntegrationTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/UpdateCodeTemplateRequest.h>
#include <tencentcloud/wedata/v20210820/model/UpdateCodeTemplateResponse.h>
#include <tencentcloud/wedata/v20210820/model/UpdateDataModelRegistryInfoRequest.h>
#include <tencentcloud/wedata/v20210820/model/UpdateDataModelRegistryInfoResponse.h>
#include <tencentcloud/wedata/v20210820/model/UpdateProjectUserRoleRequest.h>
#include <tencentcloud/wedata/v20210820/model/UpdateProjectUserRoleResponse.h>
#include <tencentcloud/wedata/v20210820/model/UpdateWorkflowInfoRequest.h>
#include <tencentcloud/wedata/v20210820/model/UpdateWorkflowInfoResponse.h>
#include <tencentcloud/wedata/v20210820/model/UpdateWorkflowOwnerRequest.h>
#include <tencentcloud/wedata/v20210820/model/UpdateWorkflowOwnerResponse.h>
#include <tencentcloud/wedata/v20210820/model/UploadContentRequest.h>
#include <tencentcloud/wedata/v20210820/model/UploadContentResponse.h>
#include <tencentcloud/wedata/v20210820/model/UploadResourceRequest.h>
#include <tencentcloud/wedata/v20210820/model/UploadResourceResponse.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            class WedataClient : public AbstractClient
            {
            public:
                WedataClient(const Credential &credential, const std::string &region);
                WedataClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddProjectUserRoleResponse> AddProjectUserRoleOutcome;
                typedef std::future<AddProjectUserRoleOutcome> AddProjectUserRoleOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::AddProjectUserRoleRequest&, AddProjectUserRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddProjectUserRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchCreateIntegrationTaskAlarmsResponse> BatchCreateIntegrationTaskAlarmsOutcome;
                typedef std::future<BatchCreateIntegrationTaskAlarmsOutcome> BatchCreateIntegrationTaskAlarmsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchCreateIntegrationTaskAlarmsRequest&, BatchCreateIntegrationTaskAlarmsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchCreateIntegrationTaskAlarmsAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchCreateTaskVersionAsyncResponse> BatchCreateTaskVersionAsyncOutcome;
                typedef std::future<BatchCreateTaskVersionAsyncOutcome> BatchCreateTaskVersionAsyncOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchCreateTaskVersionAsyncRequest&, BatchCreateTaskVersionAsyncOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchCreateTaskVersionAsyncAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchDeleteIntegrationTasksResponse> BatchDeleteIntegrationTasksOutcome;
                typedef std::future<BatchDeleteIntegrationTasksOutcome> BatchDeleteIntegrationTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchDeleteIntegrationTasksRequest&, BatchDeleteIntegrationTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeleteIntegrationTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchDeleteOpsTasksResponse> BatchDeleteOpsTasksOutcome;
                typedef std::future<BatchDeleteOpsTasksOutcome> BatchDeleteOpsTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchDeleteOpsTasksRequest&, BatchDeleteOpsTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeleteOpsTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchForceSuccessIntegrationTaskInstancesResponse> BatchForceSuccessIntegrationTaskInstancesOutcome;
                typedef std::future<BatchForceSuccessIntegrationTaskInstancesOutcome> BatchForceSuccessIntegrationTaskInstancesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchForceSuccessIntegrationTaskInstancesRequest&, BatchForceSuccessIntegrationTaskInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchForceSuccessIntegrationTaskInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchKillIntegrationTaskInstancesResponse> BatchKillIntegrationTaskInstancesOutcome;
                typedef std::future<BatchKillIntegrationTaskInstancesOutcome> BatchKillIntegrationTaskInstancesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchKillIntegrationTaskInstancesRequest&, BatchKillIntegrationTaskInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchKillIntegrationTaskInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchMakeUpIntegrationTasksResponse> BatchMakeUpIntegrationTasksOutcome;
                typedef std::future<BatchMakeUpIntegrationTasksOutcome> BatchMakeUpIntegrationTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchMakeUpIntegrationTasksRequest&, BatchMakeUpIntegrationTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchMakeUpIntegrationTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchModifyOpsOwnersResponse> BatchModifyOpsOwnersOutcome;
                typedef std::future<BatchModifyOpsOwnersOutcome> BatchModifyOpsOwnersOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchModifyOpsOwnersRequest&, BatchModifyOpsOwnersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchModifyOpsOwnersAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchRerunIntegrationTaskInstancesResponse> BatchRerunIntegrationTaskInstancesOutcome;
                typedef std::future<BatchRerunIntegrationTaskInstancesOutcome> BatchRerunIntegrationTaskInstancesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchRerunIntegrationTaskInstancesRequest&, BatchRerunIntegrationTaskInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchRerunIntegrationTaskInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchResumeIntegrationTasksResponse> BatchResumeIntegrationTasksOutcome;
                typedef std::future<BatchResumeIntegrationTasksOutcome> BatchResumeIntegrationTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchResumeIntegrationTasksRequest&, BatchResumeIntegrationTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchResumeIntegrationTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchRunOpsTaskResponse> BatchRunOpsTaskOutcome;
                typedef std::future<BatchRunOpsTaskOutcome> BatchRunOpsTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchRunOpsTaskRequest&, BatchRunOpsTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchRunOpsTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchStartIntegrationTasksResponse> BatchStartIntegrationTasksOutcome;
                typedef std::future<BatchStartIntegrationTasksOutcome> BatchStartIntegrationTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchStartIntegrationTasksRequest&, BatchStartIntegrationTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchStartIntegrationTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchStopIntegrationTasksResponse> BatchStopIntegrationTasksOutcome;
                typedef std::future<BatchStopIntegrationTasksOutcome> BatchStopIntegrationTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchStopIntegrationTasksRequest&, BatchStopIntegrationTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchStopIntegrationTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchStopOpsTasksResponse> BatchStopOpsTasksOutcome;
                typedef std::future<BatchStopOpsTasksOutcome> BatchStopOpsTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchStopOpsTasksRequest&, BatchStopOpsTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchStopOpsTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchStopWorkflowsByIdsResponse> BatchStopWorkflowsByIdsOutcome;
                typedef std::future<BatchStopWorkflowsByIdsOutcome> BatchStopWorkflowsByIdsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchStopWorkflowsByIdsRequest&, BatchStopWorkflowsByIdsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchStopWorkflowsByIdsAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchSuspendIntegrationTasksResponse> BatchSuspendIntegrationTasksOutcome;
                typedef std::future<BatchSuspendIntegrationTasksOutcome> BatchSuspendIntegrationTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchSuspendIntegrationTasksRequest&, BatchSuspendIntegrationTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchSuspendIntegrationTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchUpdateIntegrationTasksResponse> BatchUpdateIntegrationTasksOutcome;
                typedef std::future<BatchUpdateIntegrationTasksOutcome> BatchUpdateIntegrationTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchUpdateIntegrationTasksRequest&, BatchUpdateIntegrationTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchUpdateIntegrationTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::BindProjectExecutorResourceResponse> BindProjectExecutorResourceOutcome;
                typedef std::future<BindProjectExecutorResourceOutcome> BindProjectExecutorResourceOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BindProjectExecutorResourceRequest&, BindProjectExecutorResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindProjectExecutorResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckAlarmRegularNameExistResponse> CheckAlarmRegularNameExistOutcome;
                typedef std::future<CheckAlarmRegularNameExistOutcome> CheckAlarmRegularNameExistOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CheckAlarmRegularNameExistRequest&, CheckAlarmRegularNameExistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckAlarmRegularNameExistAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckIntegrationNodeNameExistsResponse> CheckIntegrationNodeNameExistsOutcome;
                typedef std::future<CheckIntegrationNodeNameExistsOutcome> CheckIntegrationNodeNameExistsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CheckIntegrationNodeNameExistsRequest&, CheckIntegrationNodeNameExistsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckIntegrationNodeNameExistsAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckIntegrationTaskNameExistsResponse> CheckIntegrationTaskNameExistsOutcome;
                typedef std::future<CheckIntegrationTaskNameExistsOutcome> CheckIntegrationTaskNameExistsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CheckIntegrationTaskNameExistsRequest&, CheckIntegrationTaskNameExistsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckIntegrationTaskNameExistsAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckTaskNameExistResponse> CheckTaskNameExistOutcome;
                typedef std::future<CheckTaskNameExistOutcome> CheckTaskNameExistOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CheckTaskNameExistRequest&, CheckTaskNameExistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckTaskNameExistAsyncHandler;
                typedef Outcome<Core::Error, Model::CommitIntegrationTaskResponse> CommitIntegrationTaskOutcome;
                typedef std::future<CommitIntegrationTaskOutcome> CommitIntegrationTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CommitIntegrationTaskRequest&, CommitIntegrationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CommitIntegrationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CommitRuleGroupTaskResponse> CommitRuleGroupTaskOutcome;
                typedef std::future<CommitRuleGroupTaskOutcome> CommitRuleGroupTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CommitRuleGroupTaskRequest&, CommitRuleGroupTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CommitRuleGroupTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CountOpsInstanceStateResponse> CountOpsInstanceStateOutcome;
                typedef std::future<CountOpsInstanceStateOutcome> CountOpsInstanceStateOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CountOpsInstanceStateRequest&, CountOpsInstanceStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CountOpsInstanceStateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBaseProjectResponse> CreateBaseProjectOutcome;
                typedef std::future<CreateBaseProjectOutcome> CreateBaseProjectOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateBaseProjectRequest&, CreateBaseProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBaseProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCodeTemplateResponse> CreateCodeTemplateOutcome;
                typedef std::future<CreateCodeTemplateOutcome> CreateCodeTemplateOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateCodeTemplateRequest&, CreateCodeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCodeTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCodeTemplateVersionResponse> CreateCodeTemplateVersionOutcome;
                typedef std::future<CreateCodeTemplateVersionOutcome> CreateCodeTemplateVersionOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateCodeTemplateVersionRequest&, CreateCodeTemplateVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCodeTemplateVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCustomFunctionResponse> CreateCustomFunctionOutcome;
                typedef std::future<CreateCustomFunctionOutcome> CreateCustomFunctionOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateCustomFunctionRequest&, CreateCustomFunctionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustomFunctionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDataModelResponse> CreateDataModelOutcome;
                typedef std::future<CreateDataModelOutcome> CreateDataModelOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateDataModelRequest&, CreateDataModelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDataModelAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDataSourceResponse> CreateDataSourceOutcome;
                typedef std::future<CreateDataSourceOutcome> CreateDataSourceOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateDataSourceRequest&, CreateDataSourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDataSourceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDsFolderResponse> CreateDsFolderOutcome;
                typedef std::future<CreateDsFolderOutcome> CreateDsFolderOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateDsFolderRequest&, CreateDsFolderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDsFolderAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateHiveTableResponse> CreateHiveTableOutcome;
                typedef std::future<CreateHiveTableOutcome> CreateHiveTableOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateHiveTableRequest&, CreateHiveTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateHiveTableAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateHiveTableByDDLResponse> CreateHiveTableByDDLOutcome;
                typedef std::future<CreateHiveTableByDDLOutcome> CreateHiveTableByDDLOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateHiveTableByDDLRequest&, CreateHiveTableByDDLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateHiveTableByDDLAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateIntegrationNodeResponse> CreateIntegrationNodeOutcome;
                typedef std::future<CreateIntegrationNodeOutcome> CreateIntegrationNodeOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateIntegrationNodeRequest&, CreateIntegrationNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIntegrationNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateIntegrationTaskResponse> CreateIntegrationTaskOutcome;
                typedef std::future<CreateIntegrationTaskOutcome> CreateIntegrationTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateIntegrationTaskRequest&, CreateIntegrationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIntegrationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOfflineTaskResponse> CreateOfflineTaskOutcome;
                typedef std::future<CreateOfflineTaskOutcome> CreateOfflineTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateOfflineTaskRequest&, CreateOfflineTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOfflineTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOpsMakePlanResponse> CreateOpsMakePlanOutcome;
                typedef std::future<CreateOpsMakePlanOutcome> CreateOpsMakePlanOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateOpsMakePlanRequest&, CreateOpsMakePlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOpsMakePlanAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRuleResponse> CreateRuleOutcome;
                typedef std::future<CreateRuleOutcome> CreateRuleOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateRuleRequest&, CreateRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRuleTemplateResponse> CreateRuleTemplateOutcome;
                typedef std::future<CreateRuleTemplateOutcome> CreateRuleTemplateOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateRuleTemplateRequest&, CreateRuleTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRuleTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTaskResponse> CreateTaskOutcome;
                typedef std::future<CreateTaskOutcome> CreateTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateTaskRequest&, CreateTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTaskAlarmRegularResponse> CreateTaskAlarmRegularOutcome;
                typedef std::future<CreateTaskAlarmRegularOutcome> CreateTaskAlarmRegularOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateTaskAlarmRegularRequest&, CreateTaskAlarmRegularOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTaskAlarmRegularAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTaskFolderResponse> CreateTaskFolderOutcome;
                typedef std::future<CreateTaskFolderOutcome> CreateTaskFolderOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateTaskFolderRequest&, CreateTaskFolderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTaskFolderAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTaskNewResponse> CreateTaskNewOutcome;
                typedef std::future<CreateTaskNewOutcome> CreateTaskNewOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateTaskNewRequest&, CreateTaskNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTaskNewAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTaskVersionDsResponse> CreateTaskVersionDsOutcome;
                typedef std::future<CreateTaskVersionDsOutcome> CreateTaskVersionDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateTaskVersionDsRequest&, CreateTaskVersionDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTaskVersionDsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWorkflowDsResponse> CreateWorkflowDsOutcome;
                typedef std::future<CreateWorkflowDsOutcome> CreateWorkflowDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateWorkflowDsRequest&, CreateWorkflowDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWorkflowDsAsyncHandler;
                typedef Outcome<Core::Error, Model::DagInstancesResponse> DagInstancesOutcome;
                typedef std::future<DagInstancesOutcome> DagInstancesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DagInstancesRequest&, DagInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DagInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCodeTemplateResponse> DeleteCodeTemplateOutcome;
                typedef std::future<DeleteCodeTemplateOutcome> DeleteCodeTemplateOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteCodeTemplateRequest&, DeleteCodeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCodeTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCustomFunctionResponse> DeleteCustomFunctionOutcome;
                typedef std::future<DeleteCustomFunctionOutcome> DeleteCustomFunctionOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteCustomFunctionRequest&, DeleteCustomFunctionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomFunctionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDataModelResponse> DeleteDataModelOutcome;
                typedef std::future<DeleteDataModelOutcome> DeleteDataModelOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteDataModelRequest&, DeleteDataModelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDataModelAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDataSourcesResponse> DeleteDataSourcesOutcome;
                typedef std::future<DeleteDataSourcesOutcome> DeleteDataSourcesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteDataSourcesRequest&, DeleteDataSourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDataSourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDsFolderResponse> DeleteDsFolderOutcome;
                typedef std::future<DeleteDsFolderOutcome> DeleteDsFolderOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteDsFolderRequest&, DeleteDsFolderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDsFolderAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteFileResponse> DeleteFileOutcome;
                typedef std::future<DeleteFileOutcome> DeleteFileOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteFileRequest&, DeleteFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFileAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteFilePathResponse> DeleteFilePathOutcome;
                typedef std::future<DeleteFilePathOutcome> DeleteFilePathOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteFilePathRequest&, DeleteFilePathOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFilePathAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteIntegrationNodeResponse> DeleteIntegrationNodeOutcome;
                typedef std::future<DeleteIntegrationNodeOutcome> DeleteIntegrationNodeOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteIntegrationNodeRequest&, DeleteIntegrationNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIntegrationNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteIntegrationTaskResponse> DeleteIntegrationTaskOutcome;
                typedef std::future<DeleteIntegrationTaskOutcome> DeleteIntegrationTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteIntegrationTaskRequest&, DeleteIntegrationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIntegrationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLinkResponse> DeleteLinkOutcome;
                typedef std::future<DeleteLinkOutcome> DeleteLinkOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteLinkRequest&, DeleteLinkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLinkAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteOfflineTaskResponse> DeleteOfflineTaskOutcome;
                typedef std::future<DeleteOfflineTaskOutcome> DeleteOfflineTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteOfflineTaskRequest&, DeleteOfflineTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOfflineTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteProjectParamDsResponse> DeleteProjectParamDsOutcome;
                typedef std::future<DeleteProjectParamDsOutcome> DeleteProjectParamDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteProjectParamDsRequest&, DeleteProjectParamDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProjectParamDsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteProjectUsersResponse> DeleteProjectUsersOutcome;
                typedef std::future<DeleteProjectUsersOutcome> DeleteProjectUsersOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteProjectUsersRequest&, DeleteProjectUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProjectUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteResourceResponse> DeleteResourceOutcome;
                typedef std::future<DeleteResourceOutcome> DeleteResourceOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteResourceRequest&, DeleteResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteResourceFileResponse> DeleteResourceFileOutcome;
                typedef std::future<DeleteResourceFileOutcome> DeleteResourceFileOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteResourceFileRequest&, DeleteResourceFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteResourceFileAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteResourceFilesResponse> DeleteResourceFilesOutcome;
                typedef std::future<DeleteResourceFilesOutcome> DeleteResourceFilesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteResourceFilesRequest&, DeleteResourceFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteResourceFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRuleResponse> DeleteRuleOutcome;
                typedef std::future<DeleteRuleOutcome> DeleteRuleOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteRuleRequest&, DeleteRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRuleTemplateResponse> DeleteRuleTemplateOutcome;
                typedef std::future<DeleteRuleTemplateOutcome> DeleteRuleTemplateOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteRuleTemplateRequest&, DeleteRuleTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRuleTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTaskAlarmRegularResponse> DeleteTaskAlarmRegularOutcome;
                typedef std::future<DeleteTaskAlarmRegularOutcome> DeleteTaskAlarmRegularOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteTaskAlarmRegularRequest&, DeleteTaskAlarmRegularOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTaskAlarmRegularAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTaskDsResponse> DeleteTaskDsOutcome;
                typedef std::future<DeleteTaskDsOutcome> DeleteTaskDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteTaskDsRequest&, DeleteTaskDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTaskDsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTaskLineageResponse> DeleteTaskLineageOutcome;
                typedef std::future<DeleteTaskLineageOutcome> DeleteTaskLineageOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteTaskLineageRequest&, DeleteTaskLineageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTaskLineageAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWorkflowByIdResponse> DeleteWorkflowByIdOutcome;
                typedef std::future<DeleteWorkflowByIdOutcome> DeleteWorkflowByIdOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteWorkflowByIdRequest&, DeleteWorkflowByIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWorkflowByIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmEventsResponse> DescribeAlarmEventsOutcome;
                typedef std::future<DescribeAlarmEventsOutcome> DescribeAlarmEventsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeAlarmEventsRequest&, DescribeAlarmEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmReceiverResponse> DescribeAlarmReceiverOutcome;
                typedef std::future<DescribeAlarmReceiverOutcome> DescribeAlarmReceiverOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeAlarmReceiverRequest&, DescribeAlarmReceiverOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmReceiverAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAllByFolderNewResponse> DescribeAllByFolderNewOutcome;
                typedef std::future<DescribeAllByFolderNewOutcome> DescribeAllByFolderNewOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeAllByFolderNewRequest&, DescribeAllByFolderNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllByFolderNewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApproveListResponse> DescribeApproveListOutcome;
                typedef std::future<DescribeApproveListOutcome> DescribeApproveListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeApproveListRequest&, DescribeApproveListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApproveListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApproveTypeListResponse> DescribeApproveTypeListOutcome;
                typedef std::future<DescribeApproveTypeListOutcome> DescribeApproveTypeListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeApproveTypeListRequest&, DescribeApproveTypeListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApproveTypeListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaseBizCatalogsResponse> DescribeBaseBizCatalogsOutcome;
                typedef std::future<DescribeBaseBizCatalogsOutcome> DescribeBaseBizCatalogsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeBaseBizCatalogsRequest&, DescribeBaseBizCatalogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaseBizCatalogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBatchOperateTaskResponse> DescribeBatchOperateTaskOutcome;
                typedef std::future<DescribeBatchOperateTaskOutcome> DescribeBatchOperateTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeBatchOperateTaskRequest&, DescribeBatchOperateTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBatchOperateTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCodeTemplateDetailResponse> DescribeCodeTemplateDetailOutcome;
                typedef std::future<DescribeCodeTemplateDetailOutcome> DescribeCodeTemplateDetailOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeCodeTemplateDetailRequest&, DescribeCodeTemplateDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCodeTemplateDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeColumnLineageResponse> DescribeColumnLineageOutcome;
                typedef std::future<DescribeColumnLineageOutcome> DescribeColumnLineageOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeColumnLineageRequest&, DescribeColumnLineageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeColumnLineageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeColumnsMetaResponse> DescribeColumnsMetaOutcome;
                typedef std::future<DescribeColumnsMetaOutcome> DescribeColumnsMetaOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeColumnsMetaRequest&, DescribeColumnsMetaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeColumnsMetaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataAssetsResponse> DescribeDataAssetsOutcome;
                typedef std::future<DescribeDataAssetsOutcome> DescribeDataAssetsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDataAssetsRequest&, DescribeDataAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataCheckStatResponse> DescribeDataCheckStatOutcome;
                typedef std::future<DescribeDataCheckStatOutcome> DescribeDataCheckStatOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDataCheckStatRequest&, DescribeDataCheckStatOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataCheckStatAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataServicePublishedApiDetailResponse> DescribeDataServicePublishedApiDetailOutcome;
                typedef std::future<DescribeDataServicePublishedApiDetailOutcome> DescribeDataServicePublishedApiDetailOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDataServicePublishedApiDetailRequest&, DescribeDataServicePublishedApiDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataServicePublishedApiDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataServicePublishedApiListResponse> DescribeDataServicePublishedApiListOutcome;
                typedef std::future<DescribeDataServicePublishedApiListOutcome> DescribeDataServicePublishedApiListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDataServicePublishedApiListRequest&, DescribeDataServicePublishedApiListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataServicePublishedApiListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataSourceInfoListResponse> DescribeDataSourceInfoListOutcome;
                typedef std::future<DescribeDataSourceInfoListOutcome> DescribeDataSourceInfoListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDataSourceInfoListRequest&, DescribeDataSourceInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataSourceInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataSourceListResponse> DescribeDataSourceListOutcome;
                typedef std::future<DescribeDataSourceListOutcome> DescribeDataSourceListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDataSourceListRequest&, DescribeDataSourceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataSourceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatabaseInfoListResponse> DescribeDatabaseInfoListOutcome;
                typedef std::future<DescribeDatabaseInfoListOutcome> DescribeDatabaseInfoListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDatabaseInfoListRequest&, DescribeDatabaseInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabaseInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatabaseMetasResponse> DescribeDatabaseMetasOutcome;
                typedef std::future<DescribeDatabaseMetasOutcome> DescribeDatabaseMetasOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDatabaseMetasRequest&, DescribeDatabaseMetasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabaseMetasAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatasourceResponse> DescribeDatasourceOutcome;
                typedef std::future<DescribeDatasourceOutcome> DescribeDatasourceOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDatasourceRequest&, DescribeDatasourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatasourceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDependOpsTasksResponse> DescribeDependOpsTasksOutcome;
                typedef std::future<DescribeDependOpsTasksOutcome> DescribeDependOpsTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDependOpsTasksRequest&, DescribeDependOpsTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDependOpsTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDependTaskListsResponse> DescribeDependTaskListsOutcome;
                typedef std::future<DescribeDependTaskListsOutcome> DescribeDependTaskListsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDependTaskListsRequest&, DescribeDependTaskListsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDependTaskListsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDimensionScoreResponse> DescribeDimensionScoreOutcome;
                typedef std::future<DescribeDimensionScoreOutcome> DescribeDimensionScoreOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDimensionScoreRequest&, DescribeDimensionScoreOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDimensionScoreAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDsFolderTreeResponse> DescribeDsFolderTreeOutcome;
                typedef std::future<DescribeDsFolderTreeOutcome> DescribeDsFolderTreeOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDsFolderTreeRequest&, DescribeDsFolderTreeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDsFolderTreeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDsParentFolderTreeResponse> DescribeDsParentFolderTreeOutcome;
                typedef std::future<DescribeDsParentFolderTreeOutcome> DescribeDsParentFolderTreeOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDsParentFolderTreeRequest&, DescribeDsParentFolderTreeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDsParentFolderTreeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDsTaskVersionInfoResponse> DescribeDsTaskVersionInfoOutcome;
                typedef std::future<DescribeDsTaskVersionInfoOutcome> DescribeDsTaskVersionInfoOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDsTaskVersionInfoRequest&, DescribeDsTaskVersionInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDsTaskVersionInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDsTaskVersionListResponse> DescribeDsTaskVersionListOutcome;
                typedef std::future<DescribeDsTaskVersionListOutcome> DescribeDsTaskVersionListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDsTaskVersionListRequest&, DescribeDsTaskVersionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDsTaskVersionListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDutyScheduleDetailsResponse> DescribeDutyScheduleDetailsOutcome;
                typedef std::future<DescribeDutyScheduleDetailsOutcome> DescribeDutyScheduleDetailsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDutyScheduleDetailsRequest&, DescribeDutyScheduleDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDutyScheduleDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDutyScheduleListResponse> DescribeDutyScheduleListOutcome;
                typedef std::future<DescribeDutyScheduleListOutcome> DescribeDutyScheduleListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDutyScheduleListRequest&, DescribeDutyScheduleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDutyScheduleListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEventResponse> DescribeEventOutcome;
                typedef std::future<DescribeEventOutcome> DescribeEventOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeEventRequest&, DescribeEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEventCasesResponse> DescribeEventCasesOutcome;
                typedef std::future<DescribeEventCasesOutcome> DescribeEventCasesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeEventCasesRequest&, DescribeEventCasesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventCasesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEventConsumeTasksResponse> DescribeEventConsumeTasksOutcome;
                typedef std::future<DescribeEventConsumeTasksOutcome> DescribeEventConsumeTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeEventConsumeTasksRequest&, DescribeEventConsumeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventConsumeTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExecStrategyResponse> DescribeExecStrategyOutcome;
                typedef std::future<DescribeExecStrategyOutcome> DescribeExecStrategyOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeExecStrategyRequest&, DescribeExecStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExecStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExecutorGroupMetricResponse> DescribeExecutorGroupMetricOutcome;
                typedef std::future<DescribeExecutorGroupMetricOutcome> DescribeExecutorGroupMetricOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeExecutorGroupMetricRequest&, DescribeExecutorGroupMetricOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExecutorGroupMetricAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFieldBasicInfoResponse> DescribeFieldBasicInfoOutcome;
                typedef std::future<DescribeFieldBasicInfoOutcome> DescribeFieldBasicInfoOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeFieldBasicInfoRequest&, DescribeFieldBasicInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFieldBasicInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFolderWorkflowListResponse> DescribeFolderWorkflowListOutcome;
                typedef std::future<DescribeFolderWorkflowListOutcome> DescribeFolderWorkflowListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeFolderWorkflowListRequest&, DescribeFolderWorkflowListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFolderWorkflowListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFormVersionParamResponse> DescribeFormVersionParamOutcome;
                typedef std::future<DescribeFormVersionParamOutcome> DescribeFormVersionParamOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeFormVersionParamRequest&, DescribeFormVersionParamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFormVersionParamAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFunctionKindsResponse> DescribeFunctionKindsOutcome;
                typedef std::future<DescribeFunctionKindsOutcome> DescribeFunctionKindsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeFunctionKindsRequest&, DescribeFunctionKindsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFunctionKindsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFunctionTypesResponse> DescribeFunctionTypesOutcome;
                typedef std::future<DescribeFunctionTypesOutcome> DescribeFunctionTypesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeFunctionTypesRequest&, DescribeFunctionTypesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFunctionTypesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceByCycleResponse> DescribeInstanceByCycleOutcome;
                typedef std::future<DescribeInstanceByCycleOutcome> DescribeInstanceByCycleOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeInstanceByCycleRequest&, DescribeInstanceByCycleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceByCycleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceDetailInfoResponse> DescribeInstanceDetailInfoOutcome;
                typedef std::future<DescribeInstanceDetailInfoOutcome> DescribeInstanceDetailInfoOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeInstanceDetailInfoRequest&, DescribeInstanceDetailInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceDetailInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceLastLogResponse> DescribeInstanceLastLogOutcome;
                typedef std::future<DescribeInstanceLastLogOutcome> DescribeInstanceLastLogOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeInstanceLastLogRequest&, DescribeInstanceLastLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceLastLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceListResponse> DescribeInstanceListOutcome;
                typedef std::future<DescribeInstanceListOutcome> DescribeInstanceListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeInstanceListRequest&, DescribeInstanceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceLogResponse> DescribeInstanceLogOutcome;
                typedef std::future<DescribeInstanceLogOutcome> DescribeInstanceLogOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeInstanceLogRequest&, DescribeInstanceLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceLogDetailResponse> DescribeInstanceLogDetailOutcome;
                typedef std::future<DescribeInstanceLogDetailOutcome> DescribeInstanceLogDetailOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeInstanceLogDetailRequest&, DescribeInstanceLogDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceLogDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceLogFileResponse> DescribeInstanceLogFileOutcome;
                typedef std::future<DescribeInstanceLogFileOutcome> DescribeInstanceLogFileOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeInstanceLogFileRequest&, DescribeInstanceLogFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceLogFileAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceLogListResponse> DescribeInstanceLogListOutcome;
                typedef std::future<DescribeInstanceLogListOutcome> DescribeInstanceLogListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeInstanceLogListRequest&, DescribeInstanceLogListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceLogListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIntegrationNodeResponse> DescribeIntegrationNodeOutcome;
                typedef std::future<DescribeIntegrationNodeOutcome> DescribeIntegrationNodeOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeIntegrationNodeRequest&, DescribeIntegrationNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIntegrationNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIntegrationStatisticsResponse> DescribeIntegrationStatisticsOutcome;
                typedef std::future<DescribeIntegrationStatisticsOutcome> DescribeIntegrationStatisticsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeIntegrationStatisticsRequest&, DescribeIntegrationStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIntegrationStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIntegrationStatisticsInstanceTrendResponse> DescribeIntegrationStatisticsInstanceTrendOutcome;
                typedef std::future<DescribeIntegrationStatisticsInstanceTrendOutcome> DescribeIntegrationStatisticsInstanceTrendOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeIntegrationStatisticsInstanceTrendRequest&, DescribeIntegrationStatisticsInstanceTrendOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIntegrationStatisticsInstanceTrendAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIntegrationStatisticsRecordsTrendResponse> DescribeIntegrationStatisticsRecordsTrendOutcome;
                typedef std::future<DescribeIntegrationStatisticsRecordsTrendOutcome> DescribeIntegrationStatisticsRecordsTrendOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeIntegrationStatisticsRecordsTrendRequest&, DescribeIntegrationStatisticsRecordsTrendOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIntegrationStatisticsRecordsTrendAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIntegrationStatisticsTaskStatusResponse> DescribeIntegrationStatisticsTaskStatusOutcome;
                typedef std::future<DescribeIntegrationStatisticsTaskStatusOutcome> DescribeIntegrationStatisticsTaskStatusOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeIntegrationStatisticsTaskStatusRequest&, DescribeIntegrationStatisticsTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIntegrationStatisticsTaskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIntegrationStatisticsTaskStatusTrendResponse> DescribeIntegrationStatisticsTaskStatusTrendOutcome;
                typedef std::future<DescribeIntegrationStatisticsTaskStatusTrendOutcome> DescribeIntegrationStatisticsTaskStatusTrendOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeIntegrationStatisticsTaskStatusTrendRequest&, DescribeIntegrationStatisticsTaskStatusTrendOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIntegrationStatisticsTaskStatusTrendAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIntegrationTaskResponse> DescribeIntegrationTaskOutcome;
                typedef std::future<DescribeIntegrationTaskOutcome> DescribeIntegrationTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeIntegrationTaskRequest&, DescribeIntegrationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIntegrationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIntegrationTasksResponse> DescribeIntegrationTasksOutcome;
                typedef std::future<DescribeIntegrationTasksOutcome> DescribeIntegrationTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeIntegrationTasksRequest&, DescribeIntegrationTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIntegrationTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIntegrationVersionNodesInfoResponse> DescribeIntegrationVersionNodesInfoOutcome;
                typedef std::future<DescribeIntegrationVersionNodesInfoOutcome> DescribeIntegrationVersionNodesInfoOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeIntegrationVersionNodesInfoRequest&, DescribeIntegrationVersionNodesInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIntegrationVersionNodesInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLineageInfoResponse> DescribeLineageInfoOutcome;
                typedef std::future<DescribeLineageInfoOutcome> DescribeLineageInfoOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeLineageInfoRequest&, DescribeLineageInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLineageInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeManualTriggerRecordPageResponse> DescribeManualTriggerRecordPageOutcome;
                typedef std::future<DescribeManualTriggerRecordPageOutcome> DescribeManualTriggerRecordPageOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeManualTriggerRecordPageRequest&, DescribeManualTriggerRecordPageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeManualTriggerRecordPageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOfflineTaskTokenResponse> DescribeOfflineTaskTokenOutcome;
                typedef std::future<DescribeOfflineTaskTokenOutcome> DescribeOfflineTaskTokenOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeOfflineTaskTokenRequest&, DescribeOfflineTaskTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOfflineTaskTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOperateOpsTasksResponse> DescribeOperateOpsTasksOutcome;
                typedef std::future<DescribeOperateOpsTasksOutcome> DescribeOperateOpsTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeOperateOpsTasksRequest&, DescribeOperateOpsTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOperateOpsTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOpsInstanceLogListResponse> DescribeOpsInstanceLogListOutcome;
                typedef std::future<DescribeOpsInstanceLogListOutcome> DescribeOpsInstanceLogListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeOpsInstanceLogListRequest&, DescribeOpsInstanceLogListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOpsInstanceLogListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOpsMakePlanInstancesResponse> DescribeOpsMakePlanInstancesOutcome;
                typedef std::future<DescribeOpsMakePlanInstancesOutcome> DescribeOpsMakePlanInstancesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeOpsMakePlanInstancesRequest&, DescribeOpsMakePlanInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOpsMakePlanInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOpsMakePlanTasksResponse> DescribeOpsMakePlanTasksOutcome;
                typedef std::future<DescribeOpsMakePlanTasksOutcome> DescribeOpsMakePlanTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeOpsMakePlanTasksRequest&, DescribeOpsMakePlanTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOpsMakePlanTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOpsMakePlansResponse> DescribeOpsMakePlansOutcome;
                typedef std::future<DescribeOpsMakePlansOutcome> DescribeOpsMakePlansOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeOpsMakePlansRequest&, DescribeOpsMakePlansOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOpsMakePlansAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOpsWorkflowsResponse> DescribeOpsWorkflowsOutcome;
                typedef std::future<DescribeOpsWorkflowsOutcome> DescribeOpsWorkflowsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeOpsWorkflowsRequest&, DescribeOpsWorkflowsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOpsWorkflowsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrganizationalFunctionsResponse> DescribeOrganizationalFunctionsOutcome;
                typedef std::future<DescribeOrganizationalFunctionsOutcome> DescribeOrganizationalFunctionsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeOrganizationalFunctionsRequest&, DescribeOrganizationalFunctionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrganizationalFunctionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeParentTaskResponse> DescribeParentTaskOutcome;
                typedef std::future<DescribeParentTaskOutcome> DescribeParentTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeParentTaskRequest&, DescribeParentTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeParentTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePendingSubmitTaskListResponse> DescribePendingSubmitTaskListOutcome;
                typedef std::future<DescribePendingSubmitTaskListOutcome> DescribePendingSubmitTaskListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribePendingSubmitTaskListRequest&, DescribePendingSubmitTaskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePendingSubmitTaskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProjectResponse> DescribeProjectOutcome;
                typedef std::future<DescribeProjectOutcome> DescribeProjectOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeProjectRequest&, DescribeProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProjectUsersResponse> DescribeProjectUsersOutcome;
                typedef std::future<DescribeProjectUsersOutcome> DescribeProjectUsersOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeProjectUsersRequest&, DescribeProjectUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeQualityScoreResponse> DescribeQualityScoreOutcome;
                typedef std::future<DescribeQualityScoreOutcome> DescribeQualityScoreOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeQualityScoreRequest&, DescribeQualityScoreOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQualityScoreAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeQualityScoreTrendResponse> DescribeQualityScoreTrendOutcome;
                typedef std::future<DescribeQualityScoreTrendOutcome> DescribeQualityScoreTrendOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeQualityScoreTrendRequest&, DescribeQualityScoreTrendOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQualityScoreTrendAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRealTimeTaskInstanceNodeInfoResponse> DescribeRealTimeTaskInstanceNodeInfoOutcome;
                typedef std::future<DescribeRealTimeTaskInstanceNodeInfoOutcome> DescribeRealTimeTaskInstanceNodeInfoOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeRealTimeTaskInstanceNodeInfoRequest&, DescribeRealTimeTaskInstanceNodeInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRealTimeTaskInstanceNodeInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRealTimeTaskMetricOverviewResponse> DescribeRealTimeTaskMetricOverviewOutcome;
                typedef std::future<DescribeRealTimeTaskMetricOverviewOutcome> DescribeRealTimeTaskMetricOverviewOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeRealTimeTaskMetricOverviewRequest&, DescribeRealTimeTaskMetricOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRealTimeTaskMetricOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRealTimeTaskSpeedResponse> DescribeRealTimeTaskSpeedOutcome;
                typedef std::future<DescribeRealTimeTaskSpeedOutcome> DescribeRealTimeTaskSpeedOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeRealTimeTaskSpeedRequest&, DescribeRealTimeTaskSpeedOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRealTimeTaskSpeedAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRealViewSchemaPageResponse> DescribeRealViewSchemaPageOutcome;
                typedef std::future<DescribeRealViewSchemaPageOutcome> DescribeRealViewSchemaPageOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeRealViewSchemaPageRequest&, DescribeRealViewSchemaPageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRealViewSchemaPageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRelatedTasksByTaskIdResponse> DescribeRelatedTasksByTaskIdOutcome;
                typedef std::future<DescribeRelatedTasksByTaskIdOutcome> DescribeRelatedTasksByTaskIdOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeRelatedTasksByTaskIdRequest&, DescribeRelatedTasksByTaskIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRelatedTasksByTaskIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReportTaskDetailResponse> DescribeReportTaskDetailOutcome;
                typedef std::future<DescribeReportTaskDetailOutcome> DescribeReportTaskDetailOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeReportTaskDetailRequest&, DescribeReportTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReportTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReportTaskListResponse> DescribeReportTaskListOutcome;
                typedef std::future<DescribeReportTaskListOutcome> DescribeReportTaskListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeReportTaskListRequest&, DescribeReportTaskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReportTaskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourceManagePathTreesResponse> DescribeResourceManagePathTreesOutcome;
                typedef std::future<DescribeResourceManagePathTreesOutcome> DescribeResourceManagePathTreesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeResourceManagePathTreesRequest&, DescribeResourceManagePathTreesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceManagePathTreesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRoleListResponse> DescribeRoleListOutcome;
                typedef std::future<DescribeRoleListOutcome> DescribeRoleListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeRoleListRequest&, DescribeRoleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoleListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRuleResponse> DescribeRuleOutcome;
                typedef std::future<DescribeRuleOutcome> DescribeRuleOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeRuleRequest&, DescribeRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRuleDimStatResponse> DescribeRuleDimStatOutcome;
                typedef std::future<DescribeRuleDimStatOutcome> DescribeRuleDimStatOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeRuleDimStatRequest&, DescribeRuleDimStatOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleDimStatAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRuleExecDetailResponse> DescribeRuleExecDetailOutcome;
                typedef std::future<DescribeRuleExecDetailOutcome> DescribeRuleExecDetailOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeRuleExecDetailRequest&, DescribeRuleExecDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleExecDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRuleExecLogResponse> DescribeRuleExecLogOutcome;
                typedef std::future<DescribeRuleExecLogOutcome> DescribeRuleExecLogOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeRuleExecLogRequest&, DescribeRuleExecLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleExecLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRuleExecResultsResponse> DescribeRuleExecResultsOutcome;
                typedef std::future<DescribeRuleExecResultsOutcome> DescribeRuleExecResultsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeRuleExecResultsRequest&, DescribeRuleExecResultsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleExecResultsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRuleExecStatResponse> DescribeRuleExecStatOutcome;
                typedef std::future<DescribeRuleExecStatOutcome> DescribeRuleExecStatOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeRuleExecStatRequest&, DescribeRuleExecStatOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleExecStatAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRuleGroupResponse> DescribeRuleGroupOutcome;
                typedef std::future<DescribeRuleGroupOutcome> DescribeRuleGroupOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeRuleGroupRequest&, DescribeRuleGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRuleGroupExecResultsByPageResponse> DescribeRuleGroupExecResultsByPageOutcome;
                typedef std::future<DescribeRuleGroupExecResultsByPageOutcome> DescribeRuleGroupExecResultsByPageOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeRuleGroupExecResultsByPageRequest&, DescribeRuleGroupExecResultsByPageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleGroupExecResultsByPageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRuleGroupSubscriptionResponse> DescribeRuleGroupSubscriptionOutcome;
                typedef std::future<DescribeRuleGroupSubscriptionOutcome> DescribeRuleGroupSubscriptionOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeRuleGroupSubscriptionRequest&, DescribeRuleGroupSubscriptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleGroupSubscriptionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRuleGroupTableResponse> DescribeRuleGroupTableOutcome;
                typedef std::future<DescribeRuleGroupTableOutcome> DescribeRuleGroupTableOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeRuleGroupTableRequest&, DescribeRuleGroupTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleGroupTableAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRuleGroupsByPageResponse> DescribeRuleGroupsByPageOutcome;
                typedef std::future<DescribeRuleGroupsByPageOutcome> DescribeRuleGroupsByPageOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeRuleGroupsByPageRequest&, DescribeRuleGroupsByPageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleGroupsByPageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRuleTemplateResponse> DescribeRuleTemplateOutcome;
                typedef std::future<DescribeRuleTemplateOutcome> DescribeRuleTemplateOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeRuleTemplateRequest&, DescribeRuleTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRuleTemplatesResponse> DescribeRuleTemplatesOutcome;
                typedef std::future<DescribeRuleTemplatesOutcome> DescribeRuleTemplatesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeRuleTemplatesRequest&, DescribeRuleTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRuleTemplatesByPageResponse> DescribeRuleTemplatesByPageOutcome;
                typedef std::future<DescribeRuleTemplatesByPageOutcome> DescribeRuleTemplatesByPageOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeRuleTemplatesByPageRequest&, DescribeRuleTemplatesByPageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleTemplatesByPageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRulesResponse> DescribeRulesOutcome;
                typedef std::future<DescribeRulesOutcome> DescribeRulesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeRulesRequest&, DescribeRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRulesByPageResponse> DescribeRulesByPageOutcome;
                typedef std::future<DescribeRulesByPageOutcome> DescribeRulesByPageOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeRulesByPageRequest&, DescribeRulesByPageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRulesByPageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScheduleInstancesResponse> DescribeScheduleInstancesOutcome;
                typedef std::future<DescribeScheduleInstancesOutcome> DescribeScheduleInstancesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeScheduleInstancesRequest&, DescribeScheduleInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScheduleInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSchedulerInstanceStatusResponse> DescribeSchedulerInstanceStatusOutcome;
                typedef std::future<DescribeSchedulerInstanceStatusOutcome> DescribeSchedulerInstanceStatusOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeSchedulerInstanceStatusRequest&, DescribeSchedulerInstanceStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSchedulerInstanceStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSchedulerRunTimeInstanceCntByStatusResponse> DescribeSchedulerRunTimeInstanceCntByStatusOutcome;
                typedef std::future<DescribeSchedulerRunTimeInstanceCntByStatusOutcome> DescribeSchedulerRunTimeInstanceCntByStatusOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeSchedulerRunTimeInstanceCntByStatusRequest&, DescribeSchedulerRunTimeInstanceCntByStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSchedulerRunTimeInstanceCntByStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSchedulerTaskCntByStatusResponse> DescribeSchedulerTaskCntByStatusOutcome;
                typedef std::future<DescribeSchedulerTaskCntByStatusOutcome> DescribeSchedulerTaskCntByStatusOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeSchedulerTaskCntByStatusRequest&, DescribeSchedulerTaskCntByStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSchedulerTaskCntByStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSchedulerTaskTypeCntResponse> DescribeSchedulerTaskTypeCntOutcome;
                typedef std::future<DescribeSchedulerTaskTypeCntOutcome> DescribeSchedulerTaskTypeCntOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeSchedulerTaskTypeCntRequest&, DescribeSchedulerTaskTypeCntOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSchedulerTaskTypeCntAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStatisticInstanceStatusTrendOpsResponse> DescribeStatisticInstanceStatusTrendOpsOutcome;
                typedef std::future<DescribeStatisticInstanceStatusTrendOpsOutcome> DescribeStatisticInstanceStatusTrendOpsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeStatisticInstanceStatusTrendOpsRequest&, DescribeStatisticInstanceStatusTrendOpsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStatisticInstanceStatusTrendOpsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamTaskLogListResponse> DescribeStreamTaskLogListOutcome;
                typedef std::future<DescribeStreamTaskLogListOutcome> DescribeStreamTaskLogListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeStreamTaskLogListRequest&, DescribeStreamTaskLogListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamTaskLogListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSuccessorOpsTaskInfosResponse> DescribeSuccessorOpsTaskInfosOutcome;
                typedef std::future<DescribeSuccessorOpsTaskInfosOutcome> DescribeSuccessorOpsTaskInfosOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeSuccessorOpsTaskInfosRequest&, DescribeSuccessorOpsTaskInfosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSuccessorOpsTaskInfosAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSuccessorTaskInfoListResponse> DescribeSuccessorTaskInfoListOutcome;
                typedef std::future<DescribeSuccessorTaskInfoListOutcome> DescribeSuccessorTaskInfoListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeSuccessorTaskInfoListRequest&, DescribeSuccessorTaskInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSuccessorTaskInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTableBasicInfoResponse> DescribeTableBasicInfoOutcome;
                typedef std::future<DescribeTableBasicInfoOutcome> DescribeTableBasicInfoOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTableBasicInfoRequest&, DescribeTableBasicInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTableBasicInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTableInfoListResponse> DescribeTableInfoListOutcome;
                typedef std::future<DescribeTableInfoListOutcome> DescribeTableInfoListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTableInfoListRequest&, DescribeTableInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTableInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTableLineageResponse> DescribeTableLineageOutcome;
                typedef std::future<DescribeTableLineageOutcome> DescribeTableLineageOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTableLineageRequest&, DescribeTableLineageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTableLineageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTableLineageInfoResponse> DescribeTableLineageInfoOutcome;
                typedef std::future<DescribeTableLineageInfoOutcome> DescribeTableLineageInfoOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTableLineageInfoRequest&, DescribeTableLineageInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTableLineageInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTableMetaResponse> DescribeTableMetaOutcome;
                typedef std::future<DescribeTableMetaOutcome> DescribeTableMetaOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTableMetaRequest&, DescribeTableMetaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTableMetaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTableMetasResponse> DescribeTableMetasOutcome;
                typedef std::future<DescribeTableMetasOutcome> DescribeTableMetasOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTableMetasRequest&, DescribeTableMetasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTableMetasAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTablePartitionsResponse> DescribeTablePartitionsOutcome;
                typedef std::future<DescribeTablePartitionsOutcome> DescribeTablePartitionsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTablePartitionsRequest&, DescribeTablePartitionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTablePartitionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTableQualityDetailsResponse> DescribeTableQualityDetailsOutcome;
                typedef std::future<DescribeTableQualityDetailsOutcome> DescribeTableQualityDetailsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTableQualityDetailsRequest&, DescribeTableQualityDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTableQualityDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTableSchemaInfoResponse> DescribeTableSchemaInfoOutcome;
                typedef std::future<DescribeTableSchemaInfoOutcome> DescribeTableSchemaInfoOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTableSchemaInfoRequest&, DescribeTableSchemaInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTableSchemaInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTableScoreTrendResponse> DescribeTableScoreTrendOutcome;
                typedef std::future<DescribeTableScoreTrendOutcome> DescribeTableScoreTrendOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTableScoreTrendRequest&, DescribeTableScoreTrendOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTableScoreTrendAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskAlarmRegulationsResponse> DescribeTaskAlarmRegulationsOutcome;
                typedef std::future<DescribeTaskAlarmRegulationsOutcome> DescribeTaskAlarmRegulationsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTaskAlarmRegulationsRequest&, DescribeTaskAlarmRegulationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskAlarmRegulationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskByCycleResponse> DescribeTaskByCycleOutcome;
                typedef std::future<DescribeTaskByCycleOutcome> DescribeTaskByCycleOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTaskByCycleRequest&, DescribeTaskByCycleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskByCycleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskByStatusReportResponse> DescribeTaskByStatusReportOutcome;
                typedef std::future<DescribeTaskByStatusReportOutcome> DescribeTaskByStatusReportOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTaskByStatusReportRequest&, DescribeTaskByStatusReportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskByStatusReportAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskDetailDsResponse> DescribeTaskDetailDsOutcome;
                typedef std::future<DescribeTaskDetailDsOutcome> DescribeTaskDetailDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTaskDetailDsRequest&, DescribeTaskDetailDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskDetailDsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskInstancesStatusResponse> DescribeTaskInstancesStatusOutcome;
                typedef std::future<DescribeTaskInstancesStatusOutcome> DescribeTaskInstancesStatusOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTaskInstancesStatusRequest&, DescribeTaskInstancesStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskInstancesStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskLineageResponse> DescribeTaskLineageOutcome;
                typedef std::future<DescribeTaskLineageOutcome> DescribeTaskLineageOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTaskLineageRequest&, DescribeTaskLineageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskLineageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskLockStatusResponse> DescribeTaskLockStatusOutcome;
                typedef std::future<DescribeTaskLockStatusOutcome> DescribeTaskLockStatusOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTaskLockStatusRequest&, DescribeTaskLockStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskLockStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskParamDsResponse> DescribeTaskParamDsOutcome;
                typedef std::future<DescribeTaskParamDsOutcome> DescribeTaskParamDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTaskParamDsRequest&, DescribeTaskParamDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskParamDsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskRunHistoryResponse> DescribeTaskRunHistoryOutcome;
                typedef std::future<DescribeTaskRunHistoryOutcome> DescribeTaskRunHistoryOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTaskRunHistoryRequest&, DescribeTaskRunHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskRunHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskScriptResponse> DescribeTaskScriptOutcome;
                typedef std::future<DescribeTaskScriptOutcome> DescribeTaskScriptOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTaskScriptRequest&, DescribeTaskScriptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskScriptAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskTableMetricOverviewResponse> DescribeTaskTableMetricOverviewOutcome;
                typedef std::future<DescribeTaskTableMetricOverviewOutcome> DescribeTaskTableMetricOverviewOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTaskTableMetricOverviewRequest&, DescribeTaskTableMetricOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskTableMetricOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskTemplatesResponse> DescribeTaskTemplatesOutcome;
                typedef std::future<DescribeTaskTemplatesOutcome> DescribeTaskTemplatesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTaskTemplatesRequest&, DescribeTaskTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTasksForCodeTemplateResponse> DescribeTasksForCodeTemplateOutcome;
                typedef std::future<DescribeTasksForCodeTemplateOutcome> DescribeTasksForCodeTemplateOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTasksForCodeTemplateRequest&, DescribeTasksForCodeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTasksForCodeTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTemplateDimCountResponse> DescribeTemplateDimCountOutcome;
                typedef std::future<DescribeTemplateDimCountOutcome> DescribeTemplateDimCountOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTemplateDimCountRequest&, DescribeTemplateDimCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTemplateDimCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTenantProjectsResponse> DescribeTenantProjectsOutcome;
                typedef std::future<DescribeTenantProjectsOutcome> DescribeTenantProjectsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTenantProjectsRequest&, DescribeTenantProjectsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTenantProjectsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTestRunningRecordResponse> DescribeTestRunningRecordOutcome;
                typedef std::future<DescribeTestRunningRecordOutcome> DescribeTestRunningRecordOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTestRunningRecordRequest&, DescribeTestRunningRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTestRunningRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeThirdTaskRunLogResponse> DescribeThirdTaskRunLogOutcome;
                typedef std::future<DescribeThirdTaskRunLogOutcome> DescribeThirdTaskRunLogOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeThirdTaskRunLogRequest&, DescribeThirdTaskRunLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeThirdTaskRunLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopTableStatResponse> DescribeTopTableStatOutcome;
                typedef std::future<DescribeTopTableStatOutcome> DescribeTopTableStatOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTopTableStatRequest&, DescribeTopTableStatOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopTableStatAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTrendStatResponse> DescribeTrendStatOutcome;
                typedef std::future<DescribeTrendStatOutcome> DescribeTrendStatOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTrendStatRequest&, DescribeTrendStatOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrendStatAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkflowByFordIdsResponse> DescribeWorkflowByFordIdsOutcome;
                typedef std::future<DescribeWorkflowByFordIdsOutcome> DescribeWorkflowByFordIdsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeWorkflowByFordIdsRequest&, DescribeWorkflowByFordIdsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkflowByFordIdsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkflowCanvasInfoResponse> DescribeWorkflowCanvasInfoOutcome;
                typedef std::future<DescribeWorkflowCanvasInfoOutcome> DescribeWorkflowCanvasInfoOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeWorkflowCanvasInfoRequest&, DescribeWorkflowCanvasInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkflowCanvasInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkflowExecuteByIdResponse> DescribeWorkflowExecuteByIdOutcome;
                typedef std::future<DescribeWorkflowExecuteByIdOutcome> DescribeWorkflowExecuteByIdOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeWorkflowExecuteByIdRequest&, DescribeWorkflowExecuteByIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkflowExecuteByIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkflowInfoByIdResponse> DescribeWorkflowInfoByIdOutcome;
                typedef std::future<DescribeWorkflowInfoByIdOutcome> DescribeWorkflowInfoByIdOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeWorkflowInfoByIdRequest&, DescribeWorkflowInfoByIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkflowInfoByIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkflowListByProjectIdResponse> DescribeWorkflowListByProjectIdOutcome;
                typedef std::future<DescribeWorkflowListByProjectIdOutcome> DescribeWorkflowListByProjectIdOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeWorkflowListByProjectIdRequest&, DescribeWorkflowListByProjectIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkflowListByProjectIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkflowSchedulerInfoDsResponse> DescribeWorkflowSchedulerInfoDsOutcome;
                typedef std::future<DescribeWorkflowSchedulerInfoDsOutcome> DescribeWorkflowSchedulerInfoDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeWorkflowSchedulerInfoDsRequest&, DescribeWorkflowSchedulerInfoDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkflowSchedulerInfoDsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkflowTaskCountResponse> DescribeWorkflowTaskCountOutcome;
                typedef std::future<DescribeWorkflowTaskCountOutcome> DescribeWorkflowTaskCountOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeWorkflowTaskCountRequest&, DescribeWorkflowTaskCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkflowTaskCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DiagnoseProResponse> DiagnoseProOutcome;
                typedef std::future<DiagnoseProOutcome> DiagnoseProOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DiagnoseProRequest&, DiagnoseProOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DiagnoseProAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableProjectResponse> DisableProjectOutcome;
                typedef std::future<DisableProjectOutcome> DisableProjectOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DisableProjectRequest&, DisableProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::DownloadLogByLineResponse> DownloadLogByLineOutcome;
                typedef std::future<DownloadLogByLineOutcome> DownloadLogByLineOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DownloadLogByLineRequest&, DownloadLogByLineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DownloadLogByLineAsyncHandler;
                typedef Outcome<Core::Error, Model::DryRunDIOfflineTaskResponse> DryRunDIOfflineTaskOutcome;
                typedef std::future<DryRunDIOfflineTaskOutcome> DryRunDIOfflineTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DryRunDIOfflineTaskRequest&, DryRunDIOfflineTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DryRunDIOfflineTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableProjectResponse> EnableProjectOutcome;
                typedef std::future<EnableProjectOutcome> EnableProjectOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::EnableProjectRequest&, EnableProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::FindAllFolderResponse> FindAllFolderOutcome;
                typedef std::future<FindAllFolderOutcome> FindAllFolderOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::FindAllFolderRequest&, FindAllFolderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FindAllFolderAsyncHandler;
                typedef Outcome<Core::Error, Model::FreezeOpsTasksResponse> FreezeOpsTasksOutcome;
                typedef std::future<FreezeOpsTasksOutcome> FreezeOpsTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::FreezeOpsTasksRequest&, FreezeOpsTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FreezeOpsTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::FreezeTasksByWorkflowIdsResponse> FreezeTasksByWorkflowIdsOutcome;
                typedef std::future<FreezeTasksByWorkflowIdsOutcome> FreezeTasksByWorkflowIdsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::FreezeTasksByWorkflowIdsRequest&, FreezeTasksByWorkflowIdsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FreezeTasksByWorkflowIdsAsyncHandler;
                typedef Outcome<Core::Error, Model::GenHiveTableDDLSqlResponse> GenHiveTableDDLSqlOutcome;
                typedef std::future<GenHiveTableDDLSqlOutcome> GenHiveTableDDLSqlOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GenHiveTableDDLSqlRequest&, GenHiveTableDDLSqlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GenHiveTableDDLSqlAsyncHandler;
                typedef Outcome<Core::Error, Model::GetBatchDetailErrorLogResponse> GetBatchDetailErrorLogOutcome;
                typedef std::future<GetBatchDetailErrorLogOutcome> GetBatchDetailErrorLogOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GetBatchDetailErrorLogRequest&, GetBatchDetailErrorLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetBatchDetailErrorLogAsyncHandler;
                typedef Outcome<Core::Error, Model::GetCosTokenResponse> GetCosTokenOutcome;
                typedef std::future<GetCosTokenOutcome> GetCosTokenOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GetCosTokenRequest&, GetCosTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetCosTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::GetFileInfoResponse> GetFileInfoOutcome;
                typedef std::future<GetFileInfoOutcome> GetFileInfoOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GetFileInfoRequest&, GetFileInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetFileInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::GetInstanceLogResponse> GetInstanceLogOutcome;
                typedef std::future<GetInstanceLogOutcome> GetInstanceLogOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GetInstanceLogRequest&, GetInstanceLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceLogAsyncHandler;
                typedef Outcome<Core::Error, Model::GetIntegrationNodeColumnSchemaResponse> GetIntegrationNodeColumnSchemaOutcome;
                typedef std::future<GetIntegrationNodeColumnSchemaOutcome> GetIntegrationNodeColumnSchemaOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GetIntegrationNodeColumnSchemaRequest&, GetIntegrationNodeColumnSchemaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetIntegrationNodeColumnSchemaAsyncHandler;
                typedef Outcome<Core::Error, Model::GetJobStatusResponse> GetJobStatusOutcome;
                typedef std::future<GetJobStatusOutcome> GetJobStatusOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GetJobStatusRequest&, GetJobStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetJobStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::GetOfflineDIInstanceListResponse> GetOfflineDIInstanceListOutcome;
                typedef std::future<GetOfflineDIInstanceListOutcome> GetOfflineDIInstanceListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GetOfflineDIInstanceListRequest&, GetOfflineDIInstanceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetOfflineDIInstanceListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetOfflineInstanceListResponse> GetOfflineInstanceListOutcome;
                typedef std::future<GetOfflineInstanceListOutcome> GetOfflineInstanceListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GetOfflineInstanceListRequest&, GetOfflineInstanceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetOfflineInstanceListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetPaginationTaskScriptResponse> GetPaginationTaskScriptOutcome;
                typedef std::future<GetPaginationTaskScriptOutcome> GetPaginationTaskScriptOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GetPaginationTaskScriptRequest&, GetPaginationTaskScriptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetPaginationTaskScriptAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTaskInstanceResponse> GetTaskInstanceOutcome;
                typedef std::future<GetTaskInstanceOutcome> GetTaskInstanceOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GetTaskInstanceRequest&, GetTaskInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTaskInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::JudgeResourceFileResponse> JudgeResourceFileOutcome;
                typedef std::future<JudgeResourceFileOutcome> JudgeResourceFileOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::JudgeResourceFileRequest&, JudgeResourceFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> JudgeResourceFileAsyncHandler;
                typedef Outcome<Core::Error, Model::KillOpsMakePlanInstancesResponse> KillOpsMakePlanInstancesOutcome;
                typedef std::future<KillOpsMakePlanInstancesOutcome> KillOpsMakePlanInstancesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::KillOpsMakePlanInstancesRequest&, KillOpsMakePlanInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> KillOpsMakePlanInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::KillScheduleInstancesResponse> KillScheduleInstancesOutcome;
                typedef std::future<KillScheduleInstancesOutcome> KillScheduleInstancesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::KillScheduleInstancesRequest&, KillScheduleInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> KillScheduleInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListBatchDetailResponse> ListBatchDetailOutcome;
                typedef std::future<ListBatchDetailOutcome> ListBatchDetailOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ListBatchDetailRequest&, ListBatchDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListBatchDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::ListInstancesResponse> ListInstancesOutcome;
                typedef std::future<ListInstancesOutcome> ListInstancesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ListInstancesRequest&, ListInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::LockIntegrationTaskResponse> LockIntegrationTaskOutcome;
                typedef std::future<LockIntegrationTaskOutcome> LockIntegrationTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::LockIntegrationTaskRequest&, LockIntegrationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> LockIntegrationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApproveStatusResponse> ModifyApproveStatusOutcome;
                typedef std::future<ModifyApproveStatusOutcome> ModifyApproveStatusOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ModifyApproveStatusRequest&, ModifyApproveStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApproveStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDataSourceResponse> ModifyDataSourceOutcome;
                typedef std::future<ModifyDataSourceOutcome> ModifyDataSourceOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ModifyDataSourceRequest&, ModifyDataSourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDataSourceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDimensionWeightResponse> ModifyDimensionWeightOutcome;
                typedef std::future<ModifyDimensionWeightOutcome> ModifyDimensionWeightOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ModifyDimensionWeightRequest&, ModifyDimensionWeightOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDimensionWeightAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDsFolderResponse> ModifyDsFolderOutcome;
                typedef std::future<ModifyDsFolderOutcome> ModifyDsFolderOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ModifyDsFolderRequest&, ModifyDsFolderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDsFolderAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyExecStrategyResponse> ModifyExecStrategyOutcome;
                typedef std::future<ModifyExecStrategyOutcome> ModifyExecStrategyOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ModifyExecStrategyRequest&, ModifyExecStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyExecStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyIntegrationNodeResponse> ModifyIntegrationNodeOutcome;
                typedef std::future<ModifyIntegrationNodeOutcome> ModifyIntegrationNodeOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ModifyIntegrationNodeRequest&, ModifyIntegrationNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIntegrationNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyIntegrationTaskResponse> ModifyIntegrationTaskOutcome;
                typedef std::future<ModifyIntegrationTaskOutcome> ModifyIntegrationTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ModifyIntegrationTaskRequest&, ModifyIntegrationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIntegrationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMonitorStatusResponse> ModifyMonitorStatusOutcome;
                typedef std::future<ModifyMonitorStatusOutcome> ModifyMonitorStatusOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ModifyMonitorStatusRequest&, ModifyMonitorStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMonitorStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyProjectResponse> ModifyProjectOutcome;
                typedef std::future<ModifyProjectOutcome> ModifyProjectOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ModifyProjectRequest&, ModifyProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRuleResponse> ModifyRuleOutcome;
                typedef std::future<ModifyRuleOutcome> ModifyRuleOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ModifyRuleRequest&, ModifyRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRuleGroupSubscriptionResponse> ModifyRuleGroupSubscriptionOutcome;
                typedef std::future<ModifyRuleGroupSubscriptionOutcome> ModifyRuleGroupSubscriptionOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ModifyRuleGroupSubscriptionRequest&, ModifyRuleGroupSubscriptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRuleGroupSubscriptionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRuleTemplateResponse> ModifyRuleTemplateOutcome;
                typedef std::future<ModifyRuleTemplateOutcome> ModifyRuleTemplateOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ModifyRuleTemplateRequest&, ModifyRuleTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRuleTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTaskAlarmRegularResponse> ModifyTaskAlarmRegularOutcome;
                typedef std::future<ModifyTaskAlarmRegularOutcome> ModifyTaskAlarmRegularOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ModifyTaskAlarmRegularRequest&, ModifyTaskAlarmRegularOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTaskAlarmRegularAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTaskInfoResponse> ModifyTaskInfoOutcome;
                typedef std::future<ModifyTaskInfoOutcome> ModifyTaskInfoOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ModifyTaskInfoRequest&, ModifyTaskInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTaskInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTaskInfoDsResponse> ModifyTaskInfoDsOutcome;
                typedef std::future<ModifyTaskInfoDsOutcome> ModifyTaskInfoDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ModifyTaskInfoDsRequest&, ModifyTaskInfoDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTaskInfoDsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTaskLinksResponse> ModifyTaskLinksOutcome;
                typedef std::future<ModifyTaskLinksOutcome> ModifyTaskLinksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ModifyTaskLinksRequest&, ModifyTaskLinksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTaskLinksAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTaskLinksDsResponse> ModifyTaskLinksDsOutcome;
                typedef std::future<ModifyTaskLinksDsOutcome> ModifyTaskLinksDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ModifyTaskLinksDsRequest&, ModifyTaskLinksDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTaskLinksDsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTaskNameResponse> ModifyTaskNameOutcome;
                typedef std::future<ModifyTaskNameOutcome> ModifyTaskNameOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ModifyTaskNameRequest&, ModifyTaskNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTaskNameAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTaskScriptResponse> ModifyTaskScriptOutcome;
                typedef std::future<ModifyTaskScriptOutcome> ModifyTaskScriptOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ModifyTaskScriptRequest&, ModifyTaskScriptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTaskScriptAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWorkflowInfoResponse> ModifyWorkflowInfoOutcome;
                typedef std::future<ModifyWorkflowInfoOutcome> ModifyWorkflowInfoOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ModifyWorkflowInfoRequest&, ModifyWorkflowInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWorkflowInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWorkflowScheduleResponse> ModifyWorkflowScheduleOutcome;
                typedef std::future<ModifyWorkflowScheduleOutcome> ModifyWorkflowScheduleOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ModifyWorkflowScheduleRequest&, ModifyWorkflowScheduleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWorkflowScheduleAsyncHandler;
                typedef Outcome<Core::Error, Model::MoveTasksToFolderResponse> MoveTasksToFolderOutcome;
                typedef std::future<MoveTasksToFolderOutcome> MoveTasksToFolderOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::MoveTasksToFolderRequest&, MoveTasksToFolderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MoveTasksToFolderAsyncHandler;
                typedef Outcome<Core::Error, Model::RegisterDsEventResponse> RegisterDsEventOutcome;
                typedef std::future<RegisterDsEventOutcome> RegisterDsEventOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::RegisterDsEventRequest&, RegisterDsEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterDsEventAsyncHandler;
                typedef Outcome<Core::Error, Model::RegisterDsEventListenerResponse> RegisterDsEventListenerOutcome;
                typedef std::future<RegisterDsEventListenerOutcome> RegisterDsEventListenerOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::RegisterDsEventListenerRequest&, RegisterDsEventListenerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterDsEventListenerAsyncHandler;
                typedef Outcome<Core::Error, Model::RegisterEventResponse> RegisterEventOutcome;
                typedef std::future<RegisterEventOutcome> RegisterEventOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::RegisterEventRequest&, RegisterEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterEventAsyncHandler;
                typedef Outcome<Core::Error, Model::RegisterEventListenerResponse> RegisterEventListenerOutcome;
                typedef std::future<RegisterEventListenerOutcome> RegisterEventListenerOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::RegisterEventListenerRequest&, RegisterEventListenerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterEventListenerAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveDatabaseResponse> RemoveDatabaseOutcome;
                typedef std::future<RemoveDatabaseOutcome> RemoveDatabaseOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::RemoveDatabaseRequest&, RemoveDatabaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveDatabaseAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveSchemaResponse> RemoveSchemaOutcome;
                typedef std::future<RemoveSchemaOutcome> RemoveSchemaOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::RemoveSchemaRequest&, RemoveSchemaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveSchemaAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveTableResponse> RemoveTableOutcome;
                typedef std::future<RemoveTableOutcome> RemoveTableOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::RemoveTableRequest&, RemoveTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveTableAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveWorkflowDsResponse> RemoveWorkflowDsOutcome;
                typedef std::future<RemoveWorkflowDsOutcome> RemoveWorkflowDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::RemoveWorkflowDsRequest&, RemoveWorkflowDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveWorkflowDsAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewWorkflowOwnerDsResponse> RenewWorkflowOwnerDsOutcome;
                typedef std::future<RenewWorkflowOwnerDsOutcome> RenewWorkflowOwnerDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::RenewWorkflowOwnerDsRequest&, RenewWorkflowOwnerDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewWorkflowOwnerDsAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewWorkflowSchedulerInfoDsResponse> RenewWorkflowSchedulerInfoDsOutcome;
                typedef std::future<RenewWorkflowSchedulerInfoDsOutcome> RenewWorkflowSchedulerInfoDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::RenewWorkflowSchedulerInfoDsRequest&, RenewWorkflowSchedulerInfoDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewWorkflowSchedulerInfoDsAsyncHandler;
                typedef Outcome<Core::Error, Model::ReportDatabaseResponse> ReportDatabaseOutcome;
                typedef std::future<ReportDatabaseOutcome> ReportDatabaseOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ReportDatabaseRequest&, ReportDatabaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReportDatabaseAsyncHandler;
                typedef Outcome<Core::Error, Model::ReportSchemaResponse> ReportSchemaOutcome;
                typedef std::future<ReportSchemaOutcome> ReportSchemaOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ReportSchemaRequest&, ReportSchemaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReportSchemaAsyncHandler;
                typedef Outcome<Core::Error, Model::ReportTableResponse> ReportTableOutcome;
                typedef std::future<ReportTableOutcome> ReportTableOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ReportTableRequest&, ReportTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReportTableAsyncHandler;
                typedef Outcome<Core::Error, Model::ReportTaskLineageResponse> ReportTaskLineageOutcome;
                typedef std::future<ReportTaskLineageOutcome> ReportTaskLineageOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ReportTaskLineageRequest&, ReportTaskLineageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReportTaskLineageAsyncHandler;
                typedef Outcome<Core::Error, Model::ResumeIntegrationTaskResponse> ResumeIntegrationTaskOutcome;
                typedef std::future<ResumeIntegrationTaskOutcome> ResumeIntegrationTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ResumeIntegrationTaskRequest&, ResumeIntegrationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResumeIntegrationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::RobAndLockIntegrationTaskResponse> RobAndLockIntegrationTaskOutcome;
                typedef std::future<RobAndLockIntegrationTaskOutcome> RobAndLockIntegrationTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::RobAndLockIntegrationTaskRequest&, RobAndLockIntegrationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RobAndLockIntegrationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::RunForceSucScheduleInstancesResponse> RunForceSucScheduleInstancesOutcome;
                typedef std::future<RunForceSucScheduleInstancesOutcome> RunForceSucScheduleInstancesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::RunForceSucScheduleInstancesRequest&, RunForceSucScheduleInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunForceSucScheduleInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::RunRerunScheduleInstancesResponse> RunRerunScheduleInstancesOutcome;
                typedef std::future<RunRerunScheduleInstancesOutcome> RunRerunScheduleInstancesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::RunRerunScheduleInstancesRequest&, RunRerunScheduleInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunRerunScheduleInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::RunTasksByMultiWorkflowResponse> RunTasksByMultiWorkflowOutcome;
                typedef std::future<RunTasksByMultiWorkflowOutcome> RunTasksByMultiWorkflowOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::RunTasksByMultiWorkflowRequest&, RunTasksByMultiWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunTasksByMultiWorkflowAsyncHandler;
                typedef Outcome<Core::Error, Model::SaveCustomFunctionResponse> SaveCustomFunctionOutcome;
                typedef std::future<SaveCustomFunctionOutcome> SaveCustomFunctionOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::SaveCustomFunctionRequest&, SaveCustomFunctionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SaveCustomFunctionAsyncHandler;
                typedef Outcome<Core::Error, Model::SetTaskAlarmNewResponse> SetTaskAlarmNewOutcome;
                typedef std::future<SetTaskAlarmNewOutcome> SetTaskAlarmNewOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::SetTaskAlarmNewRequest&, SetTaskAlarmNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetTaskAlarmNewAsyncHandler;
                typedef Outcome<Core::Error, Model::StartIntegrationTaskResponse> StartIntegrationTaskOutcome;
                typedef std::future<StartIntegrationTaskOutcome> StartIntegrationTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::StartIntegrationTaskRequest&, StartIntegrationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartIntegrationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::StopIntegrationTaskResponse> StopIntegrationTaskOutcome;
                typedef std::future<StopIntegrationTaskOutcome> StopIntegrationTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::StopIntegrationTaskRequest&, StopIntegrationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopIntegrationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitCustomFunctionResponse> SubmitCustomFunctionOutcome;
                typedef std::future<SubmitCustomFunctionOutcome> SubmitCustomFunctionOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::SubmitCustomFunctionRequest&, SubmitCustomFunctionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitCustomFunctionAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitSqlTaskResponse> SubmitSqlTaskOutcome;
                typedef std::future<SubmitSqlTaskOutcome> SubmitSqlTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::SubmitSqlTaskRequest&, SubmitSqlTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitSqlTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitTaskResponse> SubmitTaskOutcome;
                typedef std::future<SubmitTaskOutcome> SubmitTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::SubmitTaskRequest&, SubmitTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitTaskTestRunResponse> SubmitTaskTestRunOutcome;
                typedef std::future<SubmitTaskTestRunOutcome> SubmitTaskTestRunOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::SubmitTaskTestRunRequest&, SubmitTaskTestRunOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitTaskTestRunAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitWorkflowResponse> SubmitWorkflowOutcome;
                typedef std::future<SubmitWorkflowOutcome> SubmitWorkflowOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::SubmitWorkflowRequest&, SubmitWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitWorkflowAsyncHandler;
                typedef Outcome<Core::Error, Model::SuspendIntegrationTaskResponse> SuspendIntegrationTaskOutcome;
                typedef std::future<SuspendIntegrationTaskOutcome> SuspendIntegrationTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::SuspendIntegrationTaskRequest&, SuspendIntegrationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SuspendIntegrationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::TaskLogResponse> TaskLogOutcome;
                typedef std::future<TaskLogOutcome> TaskLogOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::TaskLogRequest&, TaskLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TaskLogAsyncHandler;
                typedef Outcome<Core::Error, Model::TriggerDsEventResponse> TriggerDsEventOutcome;
                typedef std::future<TriggerDsEventOutcome> TriggerDsEventOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::TriggerDsEventRequest&, TriggerDsEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TriggerDsEventAsyncHandler;
                typedef Outcome<Core::Error, Model::TriggerEventResponse> TriggerEventOutcome;
                typedef std::future<TriggerEventOutcome> TriggerEventOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::TriggerEventRequest&, TriggerEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TriggerEventAsyncHandler;
                typedef Outcome<Core::Error, Model::TriggerManualTasksResponse> TriggerManualTasksOutcome;
                typedef std::future<TriggerManualTasksOutcome> TriggerManualTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::TriggerManualTasksRequest&, TriggerManualTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TriggerManualTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::UnboundProjectExecutorResourceResponse> UnboundProjectExecutorResourceOutcome;
                typedef std::future<UnboundProjectExecutorResourceOutcome> UnboundProjectExecutorResourceOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::UnboundProjectExecutorResourceRequest&, UnboundProjectExecutorResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnboundProjectExecutorResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::UnlockIntegrationTaskResponse> UnlockIntegrationTaskOutcome;
                typedef std::future<UnlockIntegrationTaskOutcome> UnlockIntegrationTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::UnlockIntegrationTaskRequest&, UnlockIntegrationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnlockIntegrationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateCodeTemplateResponse> UpdateCodeTemplateOutcome;
                typedef std::future<UpdateCodeTemplateOutcome> UpdateCodeTemplateOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::UpdateCodeTemplateRequest&, UpdateCodeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCodeTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateDataModelRegistryInfoResponse> UpdateDataModelRegistryInfoOutcome;
                typedef std::future<UpdateDataModelRegistryInfoOutcome> UpdateDataModelRegistryInfoOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::UpdateDataModelRegistryInfoRequest&, UpdateDataModelRegistryInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDataModelRegistryInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateProjectUserRoleResponse> UpdateProjectUserRoleOutcome;
                typedef std::future<UpdateProjectUserRoleOutcome> UpdateProjectUserRoleOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::UpdateProjectUserRoleRequest&, UpdateProjectUserRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateProjectUserRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateWorkflowInfoResponse> UpdateWorkflowInfoOutcome;
                typedef std::future<UpdateWorkflowInfoOutcome> UpdateWorkflowInfoOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::UpdateWorkflowInfoRequest&, UpdateWorkflowInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateWorkflowInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateWorkflowOwnerResponse> UpdateWorkflowOwnerOutcome;
                typedef std::future<UpdateWorkflowOwnerOutcome> UpdateWorkflowOwnerOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::UpdateWorkflowOwnerRequest&, UpdateWorkflowOwnerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateWorkflowOwnerAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadContentResponse> UploadContentOutcome;
                typedef std::future<UploadContentOutcome> UploadContentOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::UploadContentRequest&, UploadContentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadContentAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadResourceResponse> UploadResourceOutcome;
                typedef std::future<UploadResourceOutcome> UploadResourceOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::UploadResourceRequest&, UploadResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadResourceAsyncHandler;



                /**
                 *添加项目用户角色
                 * @param req AddProjectUserRoleRequest
                 * @return AddProjectUserRoleOutcome
                 */
                AddProjectUserRoleOutcome AddProjectUserRole(const Model::AddProjectUserRoleRequest &request);
                void AddProjectUserRoleAsync(const Model::AddProjectUserRoleRequest& request, const AddProjectUserRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddProjectUserRoleOutcomeCallable AddProjectUserRoleCallable(const Model::AddProjectUserRoleRequest& request);

                /**
                 *批量创建任务告警规则
                 * @param req BatchCreateIntegrationTaskAlarmsRequest
                 * @return BatchCreateIntegrationTaskAlarmsOutcome
                 */
                BatchCreateIntegrationTaskAlarmsOutcome BatchCreateIntegrationTaskAlarms(const Model::BatchCreateIntegrationTaskAlarmsRequest &request);
                void BatchCreateIntegrationTaskAlarmsAsync(const Model::BatchCreateIntegrationTaskAlarmsRequest& request, const BatchCreateIntegrationTaskAlarmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchCreateIntegrationTaskAlarmsOutcomeCallable BatchCreateIntegrationTaskAlarmsCallable(const Model::BatchCreateIntegrationTaskAlarmsRequest& request);

                /**
                 *异步批量创建任务版本
                 * @param req BatchCreateTaskVersionAsyncRequest
                 * @return BatchCreateTaskVersionAsyncOutcome
                 */
                BatchCreateTaskVersionAsyncOutcome BatchCreateTaskVersionAsync(const Model::BatchCreateTaskVersionAsyncRequest &request);
                void BatchCreateTaskVersionAsyncAsync(const Model::BatchCreateTaskVersionAsyncRequest& request, const BatchCreateTaskVersionAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchCreateTaskVersionAsyncOutcomeCallable BatchCreateTaskVersionAsyncCallable(const Model::BatchCreateTaskVersionAsyncRequest& request);

                /**
                 *批量删除集成任务
                 * @param req BatchDeleteIntegrationTasksRequest
                 * @return BatchDeleteIntegrationTasksOutcome
                 */
                BatchDeleteIntegrationTasksOutcome BatchDeleteIntegrationTasks(const Model::BatchDeleteIntegrationTasksRequest &request);
                void BatchDeleteIntegrationTasksAsync(const Model::BatchDeleteIntegrationTasksRequest& request, const BatchDeleteIntegrationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchDeleteIntegrationTasksOutcomeCallable BatchDeleteIntegrationTasksCallable(const Model::BatchDeleteIntegrationTasksRequest& request);

                /**
                 *任务运维-批量删除任务
                 * @param req BatchDeleteOpsTasksRequest
                 * @return BatchDeleteOpsTasksOutcome
                 */
                BatchDeleteOpsTasksOutcome BatchDeleteOpsTasks(const Model::BatchDeleteOpsTasksRequest &request);
                void BatchDeleteOpsTasksAsync(const Model::BatchDeleteOpsTasksRequest& request, const BatchDeleteOpsTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchDeleteOpsTasksOutcomeCallable BatchDeleteOpsTasksCallable(const Model::BatchDeleteOpsTasksRequest& request);

                /**
                 *批量置成功集成任务实例
                 * @param req BatchForceSuccessIntegrationTaskInstancesRequest
                 * @return BatchForceSuccessIntegrationTaskInstancesOutcome
                 */
                BatchForceSuccessIntegrationTaskInstancesOutcome BatchForceSuccessIntegrationTaskInstances(const Model::BatchForceSuccessIntegrationTaskInstancesRequest &request);
                void BatchForceSuccessIntegrationTaskInstancesAsync(const Model::BatchForceSuccessIntegrationTaskInstancesRequest& request, const BatchForceSuccessIntegrationTaskInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchForceSuccessIntegrationTaskInstancesOutcomeCallable BatchForceSuccessIntegrationTaskInstancesCallable(const Model::BatchForceSuccessIntegrationTaskInstancesRequest& request);

                /**
                 *批量终止集成任务实例
                 * @param req BatchKillIntegrationTaskInstancesRequest
                 * @return BatchKillIntegrationTaskInstancesOutcome
                 */
                BatchKillIntegrationTaskInstancesOutcome BatchKillIntegrationTaskInstances(const Model::BatchKillIntegrationTaskInstancesRequest &request);
                void BatchKillIntegrationTaskInstancesAsync(const Model::BatchKillIntegrationTaskInstancesRequest& request, const BatchKillIntegrationTaskInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchKillIntegrationTaskInstancesOutcomeCallable BatchKillIntegrationTaskInstancesCallable(const Model::BatchKillIntegrationTaskInstancesRequest& request);

                /**
                 *对集成离线任务执行批量补数据操作
                 * @param req BatchMakeUpIntegrationTasksRequest
                 * @return BatchMakeUpIntegrationTasksOutcome
                 */
                BatchMakeUpIntegrationTasksOutcome BatchMakeUpIntegrationTasks(const Model::BatchMakeUpIntegrationTasksRequest &request);
                void BatchMakeUpIntegrationTasksAsync(const Model::BatchMakeUpIntegrationTasksRequest& request, const BatchMakeUpIntegrationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchMakeUpIntegrationTasksOutcomeCallable BatchMakeUpIntegrationTasksCallable(const Model::BatchMakeUpIntegrationTasksRequest& request);

                /**
                 *批量修改任务责任人
                 * @param req BatchModifyOpsOwnersRequest
                 * @return BatchModifyOpsOwnersOutcome
                 */
                BatchModifyOpsOwnersOutcome BatchModifyOpsOwners(const Model::BatchModifyOpsOwnersRequest &request);
                void BatchModifyOpsOwnersAsync(const Model::BatchModifyOpsOwnersRequest& request, const BatchModifyOpsOwnersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchModifyOpsOwnersOutcomeCallable BatchModifyOpsOwnersCallable(const Model::BatchModifyOpsOwnersRequest& request);

                /**
                 *批量重跑集成任务实例
                 * @param req BatchRerunIntegrationTaskInstancesRequest
                 * @return BatchRerunIntegrationTaskInstancesOutcome
                 */
                BatchRerunIntegrationTaskInstancesOutcome BatchRerunIntegrationTaskInstances(const Model::BatchRerunIntegrationTaskInstancesRequest &request);
                void BatchRerunIntegrationTaskInstancesAsync(const Model::BatchRerunIntegrationTaskInstancesRequest& request, const BatchRerunIntegrationTaskInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchRerunIntegrationTaskInstancesOutcomeCallable BatchRerunIntegrationTaskInstancesCallable(const Model::BatchRerunIntegrationTaskInstancesRequest& request);

                /**
                 *批量继续执行集成实时任务
                 * @param req BatchResumeIntegrationTasksRequest
                 * @return BatchResumeIntegrationTasksOutcome
                 */
                BatchResumeIntegrationTasksOutcome BatchResumeIntegrationTasks(const Model::BatchResumeIntegrationTasksRequest &request);
                void BatchResumeIntegrationTasksAsync(const Model::BatchResumeIntegrationTasksRequest& request, const BatchResumeIntegrationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchResumeIntegrationTasksOutcomeCallable BatchResumeIntegrationTasksCallable(const Model::BatchResumeIntegrationTasksRequest& request);

                /**
                 *任务运维-任务列表 批量启动
                 * @param req BatchRunOpsTaskRequest
                 * @return BatchRunOpsTaskOutcome
                 */
                BatchRunOpsTaskOutcome BatchRunOpsTask(const Model::BatchRunOpsTaskRequest &request);
                void BatchRunOpsTaskAsync(const Model::BatchRunOpsTaskRequest& request, const BatchRunOpsTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchRunOpsTaskOutcomeCallable BatchRunOpsTaskCallable(const Model::BatchRunOpsTaskRequest& request);

                /**
                 *批量运行集成任务
                 * @param req BatchStartIntegrationTasksRequest
                 * @return BatchStartIntegrationTasksOutcome
                 */
                BatchStartIntegrationTasksOutcome BatchStartIntegrationTasks(const Model::BatchStartIntegrationTasksRequest &request);
                void BatchStartIntegrationTasksAsync(const Model::BatchStartIntegrationTasksRequest& request, const BatchStartIntegrationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchStartIntegrationTasksOutcomeCallable BatchStartIntegrationTasksCallable(const Model::BatchStartIntegrationTasksRequest& request);

                /**
                 *批量停止集成任务
                 * @param req BatchStopIntegrationTasksRequest
                 * @return BatchStopIntegrationTasksOutcome
                 */
                BatchStopIntegrationTasksOutcome BatchStopIntegrationTasks(const Model::BatchStopIntegrationTasksRequest &request);
                void BatchStopIntegrationTasksAsync(const Model::BatchStopIntegrationTasksRequest& request, const BatchStopIntegrationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchStopIntegrationTasksOutcomeCallable BatchStopIntegrationTasksCallable(const Model::BatchStopIntegrationTasksRequest& request);

                /**
                 *仅对任务状态为”调度中“和”已暂停“有效，对所选任务的任务实例进行终止，并停止调度
                 * @param req BatchStopOpsTasksRequest
                 * @return BatchStopOpsTasksOutcome
                 */
                BatchStopOpsTasksOutcome BatchStopOpsTasks(const Model::BatchStopOpsTasksRequest &request);
                void BatchStopOpsTasksAsync(const Model::BatchStopOpsTasksRequest& request, const BatchStopOpsTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchStopOpsTasksOutcomeCallable BatchStopOpsTasksCallable(const Model::BatchStopOpsTasksRequest& request);

                /**
                 *批量停止工作流
                 * @param req BatchStopWorkflowsByIdsRequest
                 * @return BatchStopWorkflowsByIdsOutcome
                 */
                BatchStopWorkflowsByIdsOutcome BatchStopWorkflowsByIds(const Model::BatchStopWorkflowsByIdsRequest &request);
                void BatchStopWorkflowsByIdsAsync(const Model::BatchStopWorkflowsByIdsRequest& request, const BatchStopWorkflowsByIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchStopWorkflowsByIdsOutcomeCallable BatchStopWorkflowsByIdsCallable(const Model::BatchStopWorkflowsByIdsRequest& request);

                /**
                 *批量暂停集成任务
                 * @param req BatchSuspendIntegrationTasksRequest
                 * @return BatchSuspendIntegrationTasksOutcome
                 */
                BatchSuspendIntegrationTasksOutcome BatchSuspendIntegrationTasks(const Model::BatchSuspendIntegrationTasksRequest &request);
                void BatchSuspendIntegrationTasksAsync(const Model::BatchSuspendIntegrationTasksRequest& request, const BatchSuspendIntegrationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchSuspendIntegrationTasksOutcomeCallable BatchSuspendIntegrationTasksCallable(const Model::BatchSuspendIntegrationTasksRequest& request);

                /**
                 *批量更新集成任务（暂时仅支持批量更新责任人）
                 * @param req BatchUpdateIntegrationTasksRequest
                 * @return BatchUpdateIntegrationTasksOutcome
                 */
                BatchUpdateIntegrationTasksOutcome BatchUpdateIntegrationTasks(const Model::BatchUpdateIntegrationTasksRequest &request);
                void BatchUpdateIntegrationTasksAsync(const Model::BatchUpdateIntegrationTasksRequest& request, const BatchUpdateIntegrationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchUpdateIntegrationTasksOutcomeCallable BatchUpdateIntegrationTasksCallable(const Model::BatchUpdateIntegrationTasksRequest& request);

                /**
                 *商业化版本：执行资源组-资源包绑定项目
                 * @param req BindProjectExecutorResourceRequest
                 * @return BindProjectExecutorResourceOutcome
                 */
                BindProjectExecutorResourceOutcome BindProjectExecutorResource(const Model::BindProjectExecutorResourceRequest &request);
                void BindProjectExecutorResourceAsync(const Model::BindProjectExecutorResourceRequest& request, const BindProjectExecutorResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindProjectExecutorResourceOutcomeCallable BindProjectExecutorResourceCallable(const Model::BindProjectExecutorResourceRequest& request);

                /**
                 *判断告警规则重名
                 * @param req CheckAlarmRegularNameExistRequest
                 * @return CheckAlarmRegularNameExistOutcome
                 */
                CheckAlarmRegularNameExistOutcome CheckAlarmRegularNameExist(const Model::CheckAlarmRegularNameExistRequest &request);
                void CheckAlarmRegularNameExistAsync(const Model::CheckAlarmRegularNameExistRequest& request, const CheckAlarmRegularNameExistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckAlarmRegularNameExistOutcomeCallable CheckAlarmRegularNameExistCallable(const Model::CheckAlarmRegularNameExistRequest& request);

                /**
                 *判断集成节点名称是否存在
                 * @param req CheckIntegrationNodeNameExistsRequest
                 * @return CheckIntegrationNodeNameExistsOutcome
                 */
                CheckIntegrationNodeNameExistsOutcome CheckIntegrationNodeNameExists(const Model::CheckIntegrationNodeNameExistsRequest &request);
                void CheckIntegrationNodeNameExistsAsync(const Model::CheckIntegrationNodeNameExistsRequest& request, const CheckIntegrationNodeNameExistsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckIntegrationNodeNameExistsOutcomeCallable CheckIntegrationNodeNameExistsCallable(const Model::CheckIntegrationNodeNameExistsRequest& request);

                /**
                 *判断集成任务名称是否存在
                 * @param req CheckIntegrationTaskNameExistsRequest
                 * @return CheckIntegrationTaskNameExistsOutcome
                 */
                CheckIntegrationTaskNameExistsOutcome CheckIntegrationTaskNameExists(const Model::CheckIntegrationTaskNameExistsRequest &request);
                void CheckIntegrationTaskNameExistsAsync(const Model::CheckIntegrationTaskNameExistsRequest& request, const CheckIntegrationTaskNameExistsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckIntegrationTaskNameExistsOutcomeCallable CheckIntegrationTaskNameExistsCallable(const Model::CheckIntegrationTaskNameExistsRequest& request);

                /**
                 *离线任务重名校验
                 * @param req CheckTaskNameExistRequest
                 * @return CheckTaskNameExistOutcome
                 */
                CheckTaskNameExistOutcome CheckTaskNameExist(const Model::CheckTaskNameExistRequest &request);
                void CheckTaskNameExistAsync(const Model::CheckTaskNameExistRequest& request, const CheckTaskNameExistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckTaskNameExistOutcomeCallable CheckTaskNameExistCallable(const Model::CheckTaskNameExistRequest& request);

                /**
                 *提交集成任务
                 * @param req CommitIntegrationTaskRequest
                 * @return CommitIntegrationTaskOutcome
                 */
                CommitIntegrationTaskOutcome CommitIntegrationTask(const Model::CommitIntegrationTaskRequest &request);
                void CommitIntegrationTaskAsync(const Model::CommitIntegrationTaskRequest& request, const CommitIntegrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CommitIntegrationTaskOutcomeCallable CommitIntegrationTaskCallable(const Model::CommitIntegrationTaskRequest& request);

                /**
                 *提交规则组运行任务接口
                 * @param req CommitRuleGroupTaskRequest
                 * @return CommitRuleGroupTaskOutcome
                 */
                CommitRuleGroupTaskOutcome CommitRuleGroupTask(const Model::CommitRuleGroupTaskRequest &request);
                void CommitRuleGroupTaskAsync(const Model::CommitRuleGroupTaskRequest& request, const CommitRuleGroupTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CommitRuleGroupTaskOutcomeCallable CommitRuleGroupTaskCallable(const Model::CommitRuleGroupTaskRequest& request);

                /**
                 *统计任务实例状态
                 * @param req CountOpsInstanceStateRequest
                 * @return CountOpsInstanceStateOutcome
                 */
                CountOpsInstanceStateOutcome CountOpsInstanceState(const Model::CountOpsInstanceStateRequest &request);
                void CountOpsInstanceStateAsync(const Model::CountOpsInstanceStateRequest& request, const CountOpsInstanceStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CountOpsInstanceStateOutcomeCallable CountOpsInstanceStateCallable(const Model::CountOpsInstanceStateRequest& request);

                /**
                 *创建项目 仅项目本身，不包含集群等信息
                 * @param req CreateBaseProjectRequest
                 * @return CreateBaseProjectOutcome
                 */
                CreateBaseProjectOutcome CreateBaseProject(const Model::CreateBaseProjectRequest &request);
                void CreateBaseProjectAsync(const Model::CreateBaseProjectRequest& request, const CreateBaseProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBaseProjectOutcomeCallable CreateBaseProjectCallable(const Model::CreateBaseProjectRequest& request);

                /**
                 *创建代码模版
                 * @param req CreateCodeTemplateRequest
                 * @return CreateCodeTemplateOutcome
                 */
                CreateCodeTemplateOutcome CreateCodeTemplate(const Model::CreateCodeTemplateRequest &request);
                void CreateCodeTemplateAsync(const Model::CreateCodeTemplateRequest& request, const CreateCodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCodeTemplateOutcomeCallable CreateCodeTemplateCallable(const Model::CreateCodeTemplateRequest& request);

                /**
                 *提交代码模版
                 * @param req CreateCodeTemplateVersionRequest
                 * @return CreateCodeTemplateVersionOutcome
                 */
                CreateCodeTemplateVersionOutcome CreateCodeTemplateVersion(const Model::CreateCodeTemplateVersionRequest &request);
                void CreateCodeTemplateVersionAsync(const Model::CreateCodeTemplateVersionRequest& request, const CreateCodeTemplateVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCodeTemplateVersionOutcomeCallable CreateCodeTemplateVersionCallable(const Model::CreateCodeTemplateVersionRequest& request);

                /**
                 *创建用户自定义函数
                 * @param req CreateCustomFunctionRequest
                 * @return CreateCustomFunctionOutcome
                 */
                CreateCustomFunctionOutcome CreateCustomFunction(const Model::CreateCustomFunctionRequest &request);
                void CreateCustomFunctionAsync(const Model::CreateCustomFunctionRequest& request, const CreateCustomFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCustomFunctionOutcomeCallable CreateCustomFunctionCallable(const Model::CreateCustomFunctionRequest& request);

                /**
                 *创建数据建模，提供给云应用使用，实现“Wedata数据建模”的下单发货
                 * @param req CreateDataModelRequest
                 * @return CreateDataModelOutcome
                 */
                CreateDataModelOutcome CreateDataModel(const Model::CreateDataModelRequest &request);
                void CreateDataModelAsync(const Model::CreateDataModelRequest& request, const CreateDataModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDataModelOutcomeCallable CreateDataModelCallable(const Model::CreateDataModelRequest& request);

                /**
                 *创建数据源
                 * @param req CreateDataSourceRequest
                 * @return CreateDataSourceOutcome
                 */
                CreateDataSourceOutcome CreateDataSource(const Model::CreateDataSourceRequest &request);
                void CreateDataSourceAsync(const Model::CreateDataSourceRequest& request, const CreateDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDataSourceOutcomeCallable CreateDataSourceCallable(const Model::CreateDataSourceRequest& request);

                /**
                 *编排空间-创建文件夹
                 * @param req CreateDsFolderRequest
                 * @return CreateDsFolderOutcome
                 */
                CreateDsFolderOutcome CreateDsFolder(const Model::CreateDsFolderRequest &request);
                void CreateDsFolderAsync(const Model::CreateDsFolderRequest& request, const CreateDsFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDsFolderOutcomeCallable CreateDsFolderCallable(const Model::CreateDsFolderRequest& request);

                /**
                 *建hive表
                 * @param req CreateHiveTableRequest
                 * @return CreateHiveTableOutcome
                 */
                CreateHiveTableOutcome CreateHiveTable(const Model::CreateHiveTableRequest &request);
                void CreateHiveTableAsync(const Model::CreateHiveTableRequest& request, const CreateHiveTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateHiveTableOutcomeCallable CreateHiveTableCallable(const Model::CreateHiveTableRequest& request);

                /**
                 *创建hive表，返回表名称
                 * @param req CreateHiveTableByDDLRequest
                 * @return CreateHiveTableByDDLOutcome
                 */
                CreateHiveTableByDDLOutcome CreateHiveTableByDDL(const Model::CreateHiveTableByDDLRequest &request);
                void CreateHiveTableByDDLAsync(const Model::CreateHiveTableByDDLRequest& request, const CreateHiveTableByDDLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateHiveTableByDDLOutcomeCallable CreateHiveTableByDDLCallable(const Model::CreateHiveTableByDDLRequest& request);

                /**
                 *创建集成节点
                 * @param req CreateIntegrationNodeRequest
                 * @return CreateIntegrationNodeOutcome
                 */
                CreateIntegrationNodeOutcome CreateIntegrationNode(const Model::CreateIntegrationNodeRequest &request);
                void CreateIntegrationNodeAsync(const Model::CreateIntegrationNodeRequest& request, const CreateIntegrationNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIntegrationNodeOutcomeCallable CreateIntegrationNodeCallable(const Model::CreateIntegrationNodeRequest& request);

                /**
                 *创建集成任务
                 * @param req CreateIntegrationTaskRequest
                 * @return CreateIntegrationTaskOutcome
                 */
                CreateIntegrationTaskOutcome CreateIntegrationTask(const Model::CreateIntegrationTaskRequest &request);
                void CreateIntegrationTaskAsync(const Model::CreateIntegrationTaskRequest& request, const CreateIntegrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIntegrationTaskOutcomeCallable CreateIntegrationTaskCallable(const Model::CreateIntegrationTaskRequest& request);

                /**
                 *创建离线任务
                 * @param req CreateOfflineTaskRequest
                 * @return CreateOfflineTaskOutcome
                 */
                CreateOfflineTaskOutcome CreateOfflineTask(const Model::CreateOfflineTaskRequest &request);
                void CreateOfflineTaskAsync(const Model::CreateOfflineTaskRequest& request, const CreateOfflineTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOfflineTaskOutcomeCallable CreateOfflineTaskCallable(const Model::CreateOfflineTaskRequest& request);

                /**
                 *批量补数据（创建补录任务）
                 * @param req CreateOpsMakePlanRequest
                 * @return CreateOpsMakePlanOutcome
                 */
                CreateOpsMakePlanOutcome CreateOpsMakePlan(const Model::CreateOpsMakePlanRequest &request);
                void CreateOpsMakePlanAsync(const Model::CreateOpsMakePlanRequest& request, const CreateOpsMakePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOpsMakePlanOutcomeCallable CreateOpsMakePlanCallable(const Model::CreateOpsMakePlanRequest& request);

                /**
                 *创建质量规则接口
                 * @param req CreateRuleRequest
                 * @return CreateRuleOutcome
                 */
                CreateRuleOutcome CreateRule(const Model::CreateRuleRequest &request);
                void CreateRuleAsync(const Model::CreateRuleRequest& request, const CreateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRuleOutcomeCallable CreateRuleCallable(const Model::CreateRuleRequest& request);

                /**
                 *创建规则模板
                 * @param req CreateRuleTemplateRequest
                 * @return CreateRuleTemplateOutcome
                 */
                CreateRuleTemplateOutcome CreateRuleTemplate(const Model::CreateRuleTemplateRequest &request);
                void CreateRuleTemplateAsync(const Model::CreateRuleTemplateRequest& request, const CreateRuleTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRuleTemplateOutcomeCallable CreateRuleTemplateCallable(const Model::CreateRuleTemplateRequest& request);

                /**
                 *创建任务。本接口已废弃，请使用接口CreateTaskNew。
                 * @param req CreateTaskRequest
                 * @return CreateTaskOutcome
                 */
                CreateTaskOutcome CreateTask(const Model::CreateTaskRequest &request);
                void CreateTaskAsync(const Model::CreateTaskRequest& request, const CreateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTaskOutcomeCallable CreateTaskCallable(const Model::CreateTaskRequest& request);

                /**
                 *创建任务告警规则
                 * @param req CreateTaskAlarmRegularRequest
                 * @return CreateTaskAlarmRegularOutcome
                 */
                CreateTaskAlarmRegularOutcome CreateTaskAlarmRegular(const Model::CreateTaskAlarmRegularRequest &request);
                void CreateTaskAlarmRegularAsync(const Model::CreateTaskAlarmRegularRequest& request, const CreateTaskAlarmRegularAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTaskAlarmRegularOutcomeCallable CreateTaskAlarmRegularCallable(const Model::CreateTaskAlarmRegularRequest& request);

                /**
                 *编排空间-工作流-创建任务文件夹
                 * @param req CreateTaskFolderRequest
                 * @return CreateTaskFolderOutcome
                 */
                CreateTaskFolderOutcome CreateTaskFolder(const Model::CreateTaskFolderRequest &request);
                void CreateTaskFolderAsync(const Model::CreateTaskFolderRequest& request, const CreateTaskFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTaskFolderOutcomeCallable CreateTaskFolderCallable(const Model::CreateTaskFolderRequest& request);

                /**
                 *聚合创建任务
                 * @param req CreateTaskNewRequest
                 * @return CreateTaskNewOutcome
                 */
                CreateTaskNewOutcome CreateTaskNew(const Model::CreateTaskNewRequest &request);
                void CreateTaskNewAsync(const Model::CreateTaskNewRequest& request, const CreateTaskNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTaskNewOutcomeCallable CreateTaskNewCallable(const Model::CreateTaskNewRequest& request);

                /**
                 *提交任务版本
                 * @param req CreateTaskVersionDsRequest
                 * @return CreateTaskVersionDsOutcome
                 */
                CreateTaskVersionDsOutcome CreateTaskVersionDs(const Model::CreateTaskVersionDsRequest &request);
                void CreateTaskVersionDsAsync(const Model::CreateTaskVersionDsRequest& request, const CreateTaskVersionDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTaskVersionDsOutcomeCallable CreateTaskVersionDsCallable(const Model::CreateTaskVersionDsRequest& request);

                /**
                 *创建工作流
                 * @param req CreateWorkflowDsRequest
                 * @return CreateWorkflowDsOutcome
                 */
                CreateWorkflowDsOutcome CreateWorkflowDs(const Model::CreateWorkflowDsRequest &request);
                void CreateWorkflowDsAsync(const Model::CreateWorkflowDsRequest& request, const CreateWorkflowDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWorkflowDsOutcomeCallable CreateWorkflowDsCallable(const Model::CreateWorkflowDsRequest& request);

                /**
                 *拉取dag实例
                 * @param req DagInstancesRequest
                 * @return DagInstancesOutcome
                 */
                DagInstancesOutcome DagInstances(const Model::DagInstancesRequest &request);
                void DagInstancesAsync(const Model::DagInstancesRequest& request, const DagInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DagInstancesOutcomeCallable DagInstancesCallable(const Model::DagInstancesRequest& request);

                /**
                 *删除代码模版
                 * @param req DeleteCodeTemplateRequest
                 * @return DeleteCodeTemplateOutcome
                 */
                DeleteCodeTemplateOutcome DeleteCodeTemplate(const Model::DeleteCodeTemplateRequest &request);
                void DeleteCodeTemplateAsync(const Model::DeleteCodeTemplateRequest& request, const DeleteCodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCodeTemplateOutcomeCallable DeleteCodeTemplateCallable(const Model::DeleteCodeTemplateRequest& request);

                /**
                 *删除用户自定义函数
                 * @param req DeleteCustomFunctionRequest
                 * @return DeleteCustomFunctionOutcome
                 */
                DeleteCustomFunctionOutcome DeleteCustomFunction(const Model::DeleteCustomFunctionRequest &request);
                void DeleteCustomFunctionAsync(const Model::DeleteCustomFunctionRequest& request, const DeleteCustomFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCustomFunctionOutcomeCallable DeleteCustomFunctionCallable(const Model::DeleteCustomFunctionRequest& request);

                /**
                 *销毁数据建模，提供给云应用使用，实现“Wedata数据建模”的销毁
                 * @param req DeleteDataModelRequest
                 * @return DeleteDataModelOutcome
                 */
                DeleteDataModelOutcome DeleteDataModel(const Model::DeleteDataModelRequest &request);
                void DeleteDataModelAsync(const Model::DeleteDataModelRequest& request, const DeleteDataModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDataModelOutcomeCallable DeleteDataModelCallable(const Model::DeleteDataModelRequest& request);

                /**
                 *删除数据源
                 * @param req DeleteDataSourcesRequest
                 * @return DeleteDataSourcesOutcome
                 */
                DeleteDataSourcesOutcome DeleteDataSources(const Model::DeleteDataSourcesRequest &request);
                void DeleteDataSourcesAsync(const Model::DeleteDataSourcesRequest& request, const DeleteDataSourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDataSourcesOutcomeCallable DeleteDataSourcesCallable(const Model::DeleteDataSourcesRequest& request);

                /**
                 *编排空间-删除文件夹
                 * @param req DeleteDsFolderRequest
                 * @return DeleteDsFolderOutcome
                 */
                DeleteDsFolderOutcome DeleteDsFolder(const Model::DeleteDsFolderRequest &request);
                void DeleteDsFolderAsync(const Model::DeleteDsFolderRequest& request, const DeleteDsFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDsFolderOutcomeCallable DeleteDsFolderCallable(const Model::DeleteDsFolderRequest& request);

                /**
                 *删除文件
                 * @param req DeleteFileRequest
                 * @return DeleteFileOutcome
                 */
                DeleteFileOutcome DeleteFile(const Model::DeleteFileRequest &request);
                void DeleteFileAsync(const Model::DeleteFileRequest& request, const DeleteFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteFileOutcomeCallable DeleteFileCallable(const Model::DeleteFileRequest& request);

                /**
                 *开发空间-批量删除目录和文件
                 * @param req DeleteFilePathRequest
                 * @return DeleteFilePathOutcome
                 */
                DeleteFilePathOutcome DeleteFilePath(const Model::DeleteFilePathRequest &request);
                void DeleteFilePathAsync(const Model::DeleteFilePathRequest& request, const DeleteFilePathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteFilePathOutcomeCallable DeleteFilePathCallable(const Model::DeleteFilePathRequest& request);

                /**
                 *删除集成节点
                 * @param req DeleteIntegrationNodeRequest
                 * @return DeleteIntegrationNodeOutcome
                 */
                DeleteIntegrationNodeOutcome DeleteIntegrationNode(const Model::DeleteIntegrationNodeRequest &request);
                void DeleteIntegrationNodeAsync(const Model::DeleteIntegrationNodeRequest& request, const DeleteIntegrationNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteIntegrationNodeOutcomeCallable DeleteIntegrationNodeCallable(const Model::DeleteIntegrationNodeRequest& request);

                /**
                 *删除集成任务
                 * @param req DeleteIntegrationTaskRequest
                 * @return DeleteIntegrationTaskOutcome
                 */
                DeleteIntegrationTaskOutcome DeleteIntegrationTask(const Model::DeleteIntegrationTaskRequest &request);
                void DeleteIntegrationTaskAsync(const Model::DeleteIntegrationTaskRequest& request, const DeleteIntegrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteIntegrationTaskOutcomeCallable DeleteIntegrationTaskCallable(const Model::DeleteIntegrationTaskRequest& request);

                /**
                 *删除任务连接
                 * @param req DeleteLinkRequest
                 * @return DeleteLinkOutcome
                 */
                DeleteLinkOutcome DeleteLink(const Model::DeleteLinkRequest &request);
                void DeleteLinkAsync(const Model::DeleteLinkRequest& request, const DeleteLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLinkOutcomeCallable DeleteLinkCallable(const Model::DeleteLinkRequest& request);

                /**
                 *删除任务
                 * @param req DeleteOfflineTaskRequest
                 * @return DeleteOfflineTaskOutcome
                 */
                DeleteOfflineTaskOutcome DeleteOfflineTask(const Model::DeleteOfflineTaskRequest &request);
                void DeleteOfflineTaskAsync(const Model::DeleteOfflineTaskRequest& request, const DeleteOfflineTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteOfflineTaskOutcomeCallable DeleteOfflineTaskCallable(const Model::DeleteOfflineTaskRequest& request);

                /**
                 *删除项目参数
                 * @param req DeleteProjectParamDsRequest
                 * @return DeleteProjectParamDsOutcome
                 */
                DeleteProjectParamDsOutcome DeleteProjectParamDs(const Model::DeleteProjectParamDsRequest &request);
                void DeleteProjectParamDsAsync(const Model::DeleteProjectParamDsRequest& request, const DeleteProjectParamDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteProjectParamDsOutcomeCallable DeleteProjectParamDsCallable(const Model::DeleteProjectParamDsRequest& request);

                /**
                 *删除项目用户
                 * @param req DeleteProjectUsersRequest
                 * @return DeleteProjectUsersOutcome
                 */
                DeleteProjectUsersOutcome DeleteProjectUsers(const Model::DeleteProjectUsersRequest &request);
                void DeleteProjectUsersAsync(const Model::DeleteProjectUsersRequest& request, const DeleteProjectUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteProjectUsersOutcomeCallable DeleteProjectUsersCallable(const Model::DeleteProjectUsersRequest& request);

                /**
                 *资源管理删除资源。本接口已废弃，请使用接口DeleteResourceFile。
                 * @param req DeleteResourceRequest
                 * @return DeleteResourceOutcome
                 */
                DeleteResourceOutcome DeleteResource(const Model::DeleteResourceRequest &request);
                void DeleteResourceAsync(const Model::DeleteResourceRequest& request, const DeleteResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteResourceOutcomeCallable DeleteResourceCallable(const Model::DeleteResourceRequest& request);

                /**
                 *资源管理-删除资源文件
                 * @param req DeleteResourceFileRequest
                 * @return DeleteResourceFileOutcome
                 */
                DeleteResourceFileOutcome DeleteResourceFile(const Model::DeleteResourceFileRequest &request);
                void DeleteResourceFileAsync(const Model::DeleteResourceFileRequest& request, const DeleteResourceFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteResourceFileOutcomeCallable DeleteResourceFileCallable(const Model::DeleteResourceFileRequest& request);

                /**
                 *资源管理-批量删除资源文件
                 * @param req DeleteResourceFilesRequest
                 * @return DeleteResourceFilesOutcome
                 */
                DeleteResourceFilesOutcome DeleteResourceFiles(const Model::DeleteResourceFilesRequest &request);
                void DeleteResourceFilesAsync(const Model::DeleteResourceFilesRequest& request, const DeleteResourceFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteResourceFilesOutcomeCallable DeleteResourceFilesCallable(const Model::DeleteResourceFilesRequest& request);

                /**
                 *删除质量规则接口
                 * @param req DeleteRuleRequest
                 * @return DeleteRuleOutcome
                 */
                DeleteRuleOutcome DeleteRule(const Model::DeleteRuleRequest &request);
                void DeleteRuleAsync(const Model::DeleteRuleRequest& request, const DeleteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRuleOutcomeCallable DeleteRuleCallable(const Model::DeleteRuleRequest& request);

                /**
                 *删除规则模板
                 * @param req DeleteRuleTemplateRequest
                 * @return DeleteRuleTemplateOutcome
                 */
                DeleteRuleTemplateOutcome DeleteRuleTemplate(const Model::DeleteRuleTemplateRequest &request);
                void DeleteRuleTemplateAsync(const Model::DeleteRuleTemplateRequest& request, const DeleteRuleTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRuleTemplateOutcomeCallable DeleteRuleTemplateCallable(const Model::DeleteRuleTemplateRequest& request);

                /**
                 *删除任务告警规则
                 * @param req DeleteTaskAlarmRegularRequest
                 * @return DeleteTaskAlarmRegularOutcome
                 */
                DeleteTaskAlarmRegularOutcome DeleteTaskAlarmRegular(const Model::DeleteTaskAlarmRegularRequest &request);
                void DeleteTaskAlarmRegularAsync(const Model::DeleteTaskAlarmRegularRequest& request, const DeleteTaskAlarmRegularAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTaskAlarmRegularOutcomeCallable DeleteTaskAlarmRegularCallable(const Model::DeleteTaskAlarmRegularRequest& request);

                /**
                 *删除编排空间任务
                 * @param req DeleteTaskDsRequest
                 * @return DeleteTaskDsOutcome
                 */
                DeleteTaskDsOutcome DeleteTaskDs(const Model::DeleteTaskDsRequest &request);
                void DeleteTaskDsAsync(const Model::DeleteTaskDsRequest& request, const DeleteTaskDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTaskDsOutcomeCallable DeleteTaskDsCallable(const Model::DeleteTaskDsRequest& request);

                /**
                 *删除任务血缘信息
                 * @param req DeleteTaskLineageRequest
                 * @return DeleteTaskLineageOutcome
                 */
                DeleteTaskLineageOutcome DeleteTaskLineage(const Model::DeleteTaskLineageRequest &request);
                void DeleteTaskLineageAsync(const Model::DeleteTaskLineageRequest& request, const DeleteTaskLineageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTaskLineageOutcomeCallable DeleteTaskLineageCallable(const Model::DeleteTaskLineageRequest& request);

                /**
                 *通过工作流Id删除工作流
                 * @param req DeleteWorkflowByIdRequest
                 * @return DeleteWorkflowByIdOutcome
                 */
                DeleteWorkflowByIdOutcome DeleteWorkflowById(const Model::DeleteWorkflowByIdRequest &request);
                void DeleteWorkflowByIdAsync(const Model::DeleteWorkflowByIdRequest& request, const DeleteWorkflowByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWorkflowByIdOutcomeCallable DeleteWorkflowByIdCallable(const Model::DeleteWorkflowByIdRequest& request);

                /**
                 *告警事件列表
                 * @param req DescribeAlarmEventsRequest
                 * @return DescribeAlarmEventsOutcome
                 */
                DescribeAlarmEventsOutcome DescribeAlarmEvents(const Model::DescribeAlarmEventsRequest &request);
                void DescribeAlarmEventsAsync(const Model::DescribeAlarmEventsRequest& request, const DescribeAlarmEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmEventsOutcomeCallable DescribeAlarmEventsCallable(const Model::DescribeAlarmEventsRequest& request);

                /**
                 *告警接收人详情
                 * @param req DescribeAlarmReceiverRequest
                 * @return DescribeAlarmReceiverOutcome
                 */
                DescribeAlarmReceiverOutcome DescribeAlarmReceiver(const Model::DescribeAlarmReceiverRequest &request);
                void DescribeAlarmReceiverAsync(const Model::DescribeAlarmReceiverRequest& request, const DescribeAlarmReceiverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmReceiverOutcomeCallable DescribeAlarmReceiverCallable(const Model::DescribeAlarmReceiverRequest& request);

                /**
                 *查询父目录下所有子文件夹+工作流
                 * @param req DescribeAllByFolderNewRequest
                 * @return DescribeAllByFolderNewOutcome
                 */
                DescribeAllByFolderNewOutcome DescribeAllByFolderNew(const Model::DescribeAllByFolderNewRequest &request);
                void DescribeAllByFolderNewAsync(const Model::DescribeAllByFolderNewRequest& request, const DescribeAllByFolderNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAllByFolderNewOutcomeCallable DescribeAllByFolderNewCallable(const Model::DescribeAllByFolderNewRequest& request);

                /**
                 *获取待审批列表
                 * @param req DescribeApproveListRequest
                 * @return DescribeApproveListOutcome
                 */
                DescribeApproveListOutcome DescribeApproveList(const Model::DescribeApproveListRequest &request);
                void DescribeApproveListAsync(const Model::DescribeApproveListRequest& request, const DescribeApproveListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApproveListOutcomeCallable DescribeApproveListCallable(const Model::DescribeApproveListRequest& request);

                /**
                 *获取审批分类列表
                 * @param req DescribeApproveTypeListRequest
                 * @return DescribeApproveTypeListOutcome
                 */
                DescribeApproveTypeListOutcome DescribeApproveTypeList(const Model::DescribeApproveTypeListRequest &request);
                void DescribeApproveTypeListAsync(const Model::DescribeApproveTypeListRequest& request, const DescribeApproveTypeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApproveTypeListOutcomeCallable DescribeApproveTypeListCallable(const Model::DescribeApproveTypeListRequest& request);

                /**
                 *数据地图-信息配置 数据类目列表
                 * @param req DescribeBaseBizCatalogsRequest
                 * @return DescribeBaseBizCatalogsOutcome
                 */
                DescribeBaseBizCatalogsOutcome DescribeBaseBizCatalogs(const Model::DescribeBaseBizCatalogsRequest &request);
                void DescribeBaseBizCatalogsAsync(const Model::DescribeBaseBizCatalogsRequest& request, const DescribeBaseBizCatalogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaseBizCatalogsOutcomeCallable DescribeBaseBizCatalogsCallable(const Model::DescribeBaseBizCatalogsRequest& request);

                /**
                 *批量操作页面获取任务列表
                 * @param req DescribeBatchOperateTaskRequest
                 * @return DescribeBatchOperateTaskOutcome
                 */
                DescribeBatchOperateTaskOutcome DescribeBatchOperateTask(const Model::DescribeBatchOperateTaskRequest &request);
                void DescribeBatchOperateTaskAsync(const Model::DescribeBatchOperateTaskRequest& request, const DescribeBatchOperateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBatchOperateTaskOutcomeCallable DescribeBatchOperateTaskCallable(const Model::DescribeBatchOperateTaskRequest& request);

                /**
                 *查询代码模版具体详情
                 * @param req DescribeCodeTemplateDetailRequest
                 * @return DescribeCodeTemplateDetailOutcome
                 */
                DescribeCodeTemplateDetailOutcome DescribeCodeTemplateDetail(const Model::DescribeCodeTemplateDetailRequest &request);
                void DescribeCodeTemplateDetailAsync(const Model::DescribeCodeTemplateDetailRequest& request, const DescribeCodeTemplateDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCodeTemplateDetailOutcomeCallable DescribeCodeTemplateDetailCallable(const Model::DescribeCodeTemplateDetailRequest& request);

                /**
                 *列出字段血缘信息
                 * @param req DescribeColumnLineageRequest
                 * @return DescribeColumnLineageOutcome
                 */
                DescribeColumnLineageOutcome DescribeColumnLineage(const Model::DescribeColumnLineageRequest &request);
                void DescribeColumnLineageAsync(const Model::DescribeColumnLineageRequest& request, const DescribeColumnLineageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeColumnLineageOutcomeCallable DescribeColumnLineageCallable(const Model::DescribeColumnLineageRequest& request);

                /**
                 *查询表的所有列元数据
                 * @param req DescribeColumnsMetaRequest
                 * @return DescribeColumnsMetaOutcome
                 */
                DescribeColumnsMetaOutcome DescribeColumnsMeta(const Model::DescribeColumnsMetaRequest &request);
                void DescribeColumnsMetaAsync(const Model::DescribeColumnsMetaRequest& request, const DescribeColumnsMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeColumnsMetaOutcomeCallable DescribeColumnsMetaCallable(const Model::DescribeColumnsMetaRequest& request);

                /**
                 *查询数据资产列表
                 * @param req DescribeDataAssetsRequest
                 * @return DescribeDataAssetsOutcome
                 */
                DescribeDataAssetsOutcome DescribeDataAssets(const Model::DescribeDataAssetsRequest &request);
                void DescribeDataAssetsAsync(const Model::DescribeDataAssetsRequest& request, const DescribeDataAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataAssetsOutcomeCallable DescribeDataAssetsCallable(const Model::DescribeDataAssetsRequest& request);

                /**
                 *数据质量的概览页面数据监测情况接口
                 * @param req DescribeDataCheckStatRequest
                 * @return DescribeDataCheckStatOutcome
                 */
                DescribeDataCheckStatOutcome DescribeDataCheckStat(const Model::DescribeDataCheckStatRequest &request);
                void DescribeDataCheckStatAsync(const Model::DescribeDataCheckStatRequest& request, const DescribeDataCheckStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataCheckStatOutcomeCallable DescribeDataCheckStatCallable(const Model::DescribeDataCheckStatRequest& request);

                /**
                 *查询数据服务API的发布态信息
                 * @param req DescribeDataServicePublishedApiDetailRequest
                 * @return DescribeDataServicePublishedApiDetailOutcome
                 */
                DescribeDataServicePublishedApiDetailOutcome DescribeDataServicePublishedApiDetail(const Model::DescribeDataServicePublishedApiDetailRequest &request);
                void DescribeDataServicePublishedApiDetailAsync(const Model::DescribeDataServicePublishedApiDetailRequest& request, const DescribeDataServicePublishedApiDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataServicePublishedApiDetailOutcomeCallable DescribeDataServicePublishedApiDetailCallable(const Model::DescribeDataServicePublishedApiDetailRequest& request);

                /**
                 *获取数据服务API的发布态信息列表
                 * @param req DescribeDataServicePublishedApiListRequest
                 * @return DescribeDataServicePublishedApiListOutcome
                 */
                DescribeDataServicePublishedApiListOutcome DescribeDataServicePublishedApiList(const Model::DescribeDataServicePublishedApiListRequest &request);
                void DescribeDataServicePublishedApiListAsync(const Model::DescribeDataServicePublishedApiListRequest& request, const DescribeDataServicePublishedApiListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataServicePublishedApiListOutcomeCallable DescribeDataServicePublishedApiListCallable(const Model::DescribeDataServicePublishedApiListRequest& request);

                /**
                 *获取数据源信息-数据源分页列表
                 * @param req DescribeDataSourceInfoListRequest
                 * @return DescribeDataSourceInfoListOutcome
                 */
                DescribeDataSourceInfoListOutcome DescribeDataSourceInfoList(const Model::DescribeDataSourceInfoListRequest &request);
                void DescribeDataSourceInfoListAsync(const Model::DescribeDataSourceInfoListRequest& request, const DescribeDataSourceInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataSourceInfoListOutcomeCallable DescribeDataSourceInfoListCallable(const Model::DescribeDataSourceInfoListRequest& request);

                /**
                 *数据源详情
                 * @param req DescribeDataSourceListRequest
                 * @return DescribeDataSourceListOutcome
                 */
                DescribeDataSourceListOutcome DescribeDataSourceList(const Model::DescribeDataSourceListRequest &request);
                void DescribeDataSourceListAsync(const Model::DescribeDataSourceListRequest& request, const DescribeDataSourceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataSourceListOutcomeCallable DescribeDataSourceListCallable(const Model::DescribeDataSourceListRequest& request);

                /**
                 *获取数据库信息
                 * @param req DescribeDatabaseInfoListRequest
                 * @return DescribeDatabaseInfoListOutcome
                 */
                DescribeDatabaseInfoListOutcome DescribeDatabaseInfoList(const Model::DescribeDatabaseInfoListRequest &request);
                void DescribeDatabaseInfoListAsync(const Model::DescribeDatabaseInfoListRequest& request, const DescribeDatabaseInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatabaseInfoListOutcomeCallable DescribeDatabaseInfoListCallable(const Model::DescribeDatabaseInfoListRequest& request);

                /**
                 *查询数据库列表
                 * @param req DescribeDatabaseMetasRequest
                 * @return DescribeDatabaseMetasOutcome
                 */
                DescribeDatabaseMetasOutcome DescribeDatabaseMetas(const Model::DescribeDatabaseMetasRequest &request);
                void DescribeDatabaseMetasAsync(const Model::DescribeDatabaseMetasRequest& request, const DescribeDatabaseMetasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatabaseMetasOutcomeCallable DescribeDatabaseMetasCallable(const Model::DescribeDatabaseMetasRequest& request);

                /**
                 *数据源详情
                 * @param req DescribeDatasourceRequest
                 * @return DescribeDatasourceOutcome
                 */
                DescribeDatasourceOutcome DescribeDatasource(const Model::DescribeDatasourceRequest &request);
                void DescribeDatasourceAsync(const Model::DescribeDatasourceRequest& request, const DescribeDatasourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatasourceOutcomeCallable DescribeDatasourceCallable(const Model::DescribeDatasourceRequest& request);

                /**
                 *根据层级查找上/下游任务节点
                 * @param req DescribeDependOpsTasksRequest
                 * @return DescribeDependOpsTasksOutcome
                 */
                DescribeDependOpsTasksOutcome DescribeDependOpsTasks(const Model::DescribeDependOpsTasksRequest &request);
                void DescribeDependOpsTasksAsync(const Model::DescribeDependOpsTasksRequest& request, const DescribeDependOpsTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDependOpsTasksOutcomeCallable DescribeDependOpsTasksCallable(const Model::DescribeDependOpsTasksRequest& request);

                /**
                 *通过taskIds查询task详情列表
                 * @param req DescribeDependTaskListsRequest
                 * @return DescribeDependTaskListsOutcome
                 */
                DescribeDependTaskListsOutcome DescribeDependTaskLists(const Model::DescribeDependTaskListsRequest &request);
                void DescribeDependTaskListsAsync(const Model::DescribeDependTaskListsRequest& request, const DescribeDependTaskListsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDependTaskListsOutcomeCallable DescribeDependTaskListsCallable(const Model::DescribeDependTaskListsRequest& request);

                /**
                 *质量报告-查询质量评分
                 * @param req DescribeDimensionScoreRequest
                 * @return DescribeDimensionScoreOutcome
                 */
                DescribeDimensionScoreOutcome DescribeDimensionScore(const Model::DescribeDimensionScoreRequest &request);
                void DescribeDimensionScoreAsync(const Model::DescribeDimensionScoreRequest& request, const DescribeDimensionScoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDimensionScoreOutcomeCallable DescribeDimensionScoreCallable(const Model::DescribeDimensionScoreRequest& request);

                /**
                 *查询目录树
                 * @param req DescribeDsFolderTreeRequest
                 * @return DescribeDsFolderTreeOutcome
                 */
                DescribeDsFolderTreeOutcome DescribeDsFolderTree(const Model::DescribeDsFolderTreeRequest &request);
                void DescribeDsFolderTreeAsync(const Model::DescribeDsFolderTreeRequest& request, const DescribeDsFolderTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDsFolderTreeOutcomeCallable DescribeDsFolderTreeCallable(const Model::DescribeDsFolderTreeRequest& request);

                /**
                 *查询父目录树，用于工作流、任务定位
                 * @param req DescribeDsParentFolderTreeRequest
                 * @return DescribeDsParentFolderTreeOutcome
                 */
                DescribeDsParentFolderTreeOutcome DescribeDsParentFolderTree(const Model::DescribeDsParentFolderTreeRequest &request);
                void DescribeDsParentFolderTreeAsync(const Model::DescribeDsParentFolderTreeRequest& request, const DescribeDsParentFolderTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDsParentFolderTreeOutcomeCallable DescribeDsParentFolderTreeCallable(const Model::DescribeDsParentFolderTreeRequest& request);

                /**
                 *查看任务版本详细信息
                 * @param req DescribeDsTaskVersionInfoRequest
                 * @return DescribeDsTaskVersionInfoOutcome
                 */
                DescribeDsTaskVersionInfoOutcome DescribeDsTaskVersionInfo(const Model::DescribeDsTaskVersionInfoRequest &request);
                void DescribeDsTaskVersionInfoAsync(const Model::DescribeDsTaskVersionInfoRequest& request, const DescribeDsTaskVersionInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDsTaskVersionInfoOutcomeCallable DescribeDsTaskVersionInfoCallable(const Model::DescribeDsTaskVersionInfoRequest& request);

                /**
                 *拉取任务版本列表
                 * @param req DescribeDsTaskVersionListRequest
                 * @return DescribeDsTaskVersionListOutcome
                 */
                DescribeDsTaskVersionListOutcome DescribeDsTaskVersionList(const Model::DescribeDsTaskVersionListRequest &request);
                void DescribeDsTaskVersionListAsync(const Model::DescribeDsTaskVersionListRequest& request, const DescribeDsTaskVersionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDsTaskVersionListOutcomeCallable DescribeDsTaskVersionListCallable(const Model::DescribeDsTaskVersionListRequest& request);

                /**
                 *获取值班日历
                 * @param req DescribeDutyScheduleDetailsRequest
                 * @return DescribeDutyScheduleDetailsOutcome
                 */
                DescribeDutyScheduleDetailsOutcome DescribeDutyScheduleDetails(const Model::DescribeDutyScheduleDetailsRequest &request);
                void DescribeDutyScheduleDetailsAsync(const Model::DescribeDutyScheduleDetailsRequest& request, const DescribeDutyScheduleDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDutyScheduleDetailsOutcomeCallable DescribeDutyScheduleDetailsCallable(const Model::DescribeDutyScheduleDetailsRequest& request);

                /**
                 *获取值班表列表
                 * @param req DescribeDutyScheduleListRequest
                 * @return DescribeDutyScheduleListOutcome
                 */
                DescribeDutyScheduleListOutcome DescribeDutyScheduleList(const Model::DescribeDutyScheduleListRequest &request);
                void DescribeDutyScheduleListAsync(const Model::DescribeDutyScheduleListRequest& request, const DescribeDutyScheduleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDutyScheduleListOutcomeCallable DescribeDutyScheduleListCallable(const Model::DescribeDutyScheduleListRequest& request);

                /**
                 *根据项目ID和事件名称查看事件详情
                 * @param req DescribeEventRequest
                 * @return DescribeEventOutcome
                 */
                DescribeEventOutcome DescribeEvent(const Model::DescribeEventRequest &request);
                void DescribeEventAsync(const Model::DescribeEventRequest& request, const DescribeEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEventOutcomeCallable DescribeEventCallable(const Model::DescribeEventRequest& request);

                /**
                 *根据条件查找事件实例
                 * @param req DescribeEventCasesRequest
                 * @return DescribeEventCasesOutcome
                 */
                DescribeEventCasesOutcome DescribeEventCases(const Model::DescribeEventCasesRequest &request);
                void DescribeEventCasesAsync(const Model::DescribeEventCasesRequest& request, const DescribeEventCasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEventCasesOutcomeCallable DescribeEventCasesCallable(const Model::DescribeEventCasesRequest& request);

                /**
                 *查看事件实例的消费任务
                 * @param req DescribeEventConsumeTasksRequest
                 * @return DescribeEventConsumeTasksOutcome
                 */
                DescribeEventConsumeTasksOutcome DescribeEventConsumeTasks(const Model::DescribeEventConsumeTasksRequest &request);
                void DescribeEventConsumeTasksAsync(const Model::DescribeEventConsumeTasksRequest& request, const DescribeEventConsumeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEventConsumeTasksOutcomeCallable DescribeEventConsumeTasksCallable(const Model::DescribeEventConsumeTasksRequest& request);

                /**
                 *查询规则组执行策略
                 * @param req DescribeExecStrategyRequest
                 * @return DescribeExecStrategyOutcome
                 */
                DescribeExecStrategyOutcome DescribeExecStrategy(const Model::DescribeExecStrategyRequest &request);
                void DescribeExecStrategyAsync(const Model::DescribeExecStrategyRequest& request, const DescribeExecStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExecStrategyOutcomeCallable DescribeExecStrategyCallable(const Model::DescribeExecStrategyRequest& request);

                /**
                 *商业化版本：根据id查询执行资源组指标
                 * @param req DescribeExecutorGroupMetricRequest
                 * @return DescribeExecutorGroupMetricOutcome
                 */
                DescribeExecutorGroupMetricOutcome DescribeExecutorGroupMetric(const Model::DescribeExecutorGroupMetricRequest &request);
                void DescribeExecutorGroupMetricAsync(const Model::DescribeExecutorGroupMetricRequest& request, const DescribeExecutorGroupMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExecutorGroupMetricOutcomeCallable DescribeExecutorGroupMetricCallable(const Model::DescribeExecutorGroupMetricRequest& request);

                /**
                 *元数据模型-字段基础信息查询接口
                 * @param req DescribeFieldBasicInfoRequest
                 * @return DescribeFieldBasicInfoOutcome
                 */
                DescribeFieldBasicInfoOutcome DescribeFieldBasicInfo(const Model::DescribeFieldBasicInfoRequest &request);
                void DescribeFieldBasicInfoAsync(const Model::DescribeFieldBasicInfoRequest& request, const DescribeFieldBasicInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFieldBasicInfoOutcomeCallable DescribeFieldBasicInfoCallable(const Model::DescribeFieldBasicInfoRequest& request);

                /**
                 *根据项目id 获取项目下所有工作流列表
                 * @param req DescribeFolderWorkflowListRequest
                 * @return DescribeFolderWorkflowListOutcome
                 */
                DescribeFolderWorkflowListOutcome DescribeFolderWorkflowList(const Model::DescribeFolderWorkflowListRequest &request);
                void DescribeFolderWorkflowListAsync(const Model::DescribeFolderWorkflowListRequest& request, const DescribeFolderWorkflowListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFolderWorkflowListOutcomeCallable DescribeFolderWorkflowListCallable(const Model::DescribeFolderWorkflowListRequest& request);

                /**
                 *查询模版关联的任务和可填充参数，为下一步代码模版提交做准备
                 * @param req DescribeFormVersionParamRequest
                 * @return DescribeFormVersionParamOutcome
                 */
                DescribeFormVersionParamOutcome DescribeFormVersionParam(const Model::DescribeFormVersionParamRequest &request);
                void DescribeFormVersionParamAsync(const Model::DescribeFormVersionParamRequest& request, const DescribeFormVersionParamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFormVersionParamOutcomeCallable DescribeFormVersionParamCallable(const Model::DescribeFormVersionParamRequest& request);

                /**
                 *查询函数分类
                 * @param req DescribeFunctionKindsRequest
                 * @return DescribeFunctionKindsOutcome
                 */
                DescribeFunctionKindsOutcome DescribeFunctionKinds(const Model::DescribeFunctionKindsRequest &request);
                void DescribeFunctionKindsAsync(const Model::DescribeFunctionKindsRequest& request, const DescribeFunctionKindsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFunctionKindsOutcomeCallable DescribeFunctionKindsCallable(const Model::DescribeFunctionKindsRequest& request);

                /**
                 *查询函数类型
                 * @param req DescribeFunctionTypesRequest
                 * @return DescribeFunctionTypesOutcome
                 */
                DescribeFunctionTypesOutcome DescribeFunctionTypes(const Model::DescribeFunctionTypesRequest &request);
                void DescribeFunctionTypesAsync(const Model::DescribeFunctionTypesRequest& request, const DescribeFunctionTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFunctionTypesOutcomeCallable DescribeFunctionTypesCallable(const Model::DescribeFunctionTypesRequest& request);

                /**
                 *根据周期类型查询所有实例
                 * @param req DescribeInstanceByCycleRequest
                 * @return DescribeInstanceByCycleOutcome
                 */
                DescribeInstanceByCycleOutcome DescribeInstanceByCycle(const Model::DescribeInstanceByCycleRequest &request);
                void DescribeInstanceByCycleAsync(const Model::DescribeInstanceByCycleRequest& request, const DescribeInstanceByCycleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceByCycleOutcomeCallable DescribeInstanceByCycleCallable(const Model::DescribeInstanceByCycleRequest& request);

                /**
                 *实例详情页，返回某个实例所有生命周期信息
                 * @param req DescribeInstanceDetailInfoRequest
                 * @return DescribeInstanceDetailInfoOutcome
                 */
                DescribeInstanceDetailInfoOutcome DescribeInstanceDetailInfo(const Model::DescribeInstanceDetailInfoRequest &request);
                void DescribeInstanceDetailInfoAsync(const Model::DescribeInstanceDetailInfoRequest& request, const DescribeInstanceDetailInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceDetailInfoOutcomeCallable DescribeInstanceDetailInfoCallable(const Model::DescribeInstanceDetailInfoRequest& request);

                /**
                 *日志获取详情页面
                 * @param req DescribeInstanceLastLogRequest
                 * @return DescribeInstanceLastLogOutcome
                 */
                DescribeInstanceLastLogOutcome DescribeInstanceLastLog(const Model::DescribeInstanceLastLogRequest &request);
                void DescribeInstanceLastLogAsync(const Model::DescribeInstanceLastLogRequest& request, const DescribeInstanceLastLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceLastLogOutcomeCallable DescribeInstanceLastLogCallable(const Model::DescribeInstanceLastLogRequest& request);

                /**
                 *获取实例列表
                 * @param req DescribeInstanceListRequest
                 * @return DescribeInstanceListOutcome
                 */
                DescribeInstanceListOutcome DescribeInstanceList(const Model::DescribeInstanceListRequest &request);
                void DescribeInstanceListAsync(const Model::DescribeInstanceListRequest& request, const DescribeInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceListOutcomeCallable DescribeInstanceListCallable(const Model::DescribeInstanceListRequest& request);

                /**
                 *获取实例运行日志
                 * @param req DescribeInstanceLogRequest
                 * @return DescribeInstanceLogOutcome
                 */
                DescribeInstanceLogOutcome DescribeInstanceLog(const Model::DescribeInstanceLogRequest &request);
                void DescribeInstanceLogAsync(const Model::DescribeInstanceLogRequest& request, const DescribeInstanceLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceLogOutcomeCallable DescribeInstanceLogCallable(const Model::DescribeInstanceLogRequest& request);

                /**
                 *获取具体实例相关日志信息
                 * @param req DescribeInstanceLogDetailRequest
                 * @return DescribeInstanceLogDetailOutcome
                 */
                DescribeInstanceLogDetailOutcome DescribeInstanceLogDetail(const Model::DescribeInstanceLogDetailRequest &request);
                void DescribeInstanceLogDetailAsync(const Model::DescribeInstanceLogDetailRequest& request, const DescribeInstanceLogDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceLogDetailOutcomeCallable DescribeInstanceLogDetailCallable(const Model::DescribeInstanceLogDetailRequest& request);

                /**
                 *下载日志文件，返回日志下载URL
                 * @param req DescribeInstanceLogFileRequest
                 * @return DescribeInstanceLogFileOutcome
                 */
                DescribeInstanceLogFileOutcome DescribeInstanceLogFile(const Model::DescribeInstanceLogFileRequest &request);
                void DescribeInstanceLogFileAsync(const Model::DescribeInstanceLogFileRequest& request, const DescribeInstanceLogFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceLogFileOutcomeCallable DescribeInstanceLogFileCallable(const Model::DescribeInstanceLogFileRequest& request);

                /**
                 *离线任务实例运行日志列表
                 * @param req DescribeInstanceLogListRequest
                 * @return DescribeInstanceLogListOutcome
                 */
                DescribeInstanceLogListOutcome DescribeInstanceLogList(const Model::DescribeInstanceLogListRequest &request);
                void DescribeInstanceLogListAsync(const Model::DescribeInstanceLogListRequest& request, const DescribeInstanceLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceLogListOutcomeCallable DescribeInstanceLogListCallable(const Model::DescribeInstanceLogListRequest& request);

                /**
                 *查询集成节点
                 * @param req DescribeIntegrationNodeRequest
                 * @return DescribeIntegrationNodeOutcome
                 */
                DescribeIntegrationNodeOutcome DescribeIntegrationNode(const Model::DescribeIntegrationNodeRequest &request);
                void DescribeIntegrationNodeAsync(const Model::DescribeIntegrationNodeRequest& request, const DescribeIntegrationNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIntegrationNodeOutcomeCallable DescribeIntegrationNodeCallable(const Model::DescribeIntegrationNodeRequest& request);

                /**
                 *数据集成大屏概览
                 * @param req DescribeIntegrationStatisticsRequest
                 * @return DescribeIntegrationStatisticsOutcome
                 */
                DescribeIntegrationStatisticsOutcome DescribeIntegrationStatistics(const Model::DescribeIntegrationStatisticsRequest &request);
                void DescribeIntegrationStatisticsAsync(const Model::DescribeIntegrationStatisticsRequest& request, const DescribeIntegrationStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIntegrationStatisticsOutcomeCallable DescribeIntegrationStatisticsCallable(const Model::DescribeIntegrationStatisticsRequest& request);

                /**
                 *数据集成大屏实例状态统计趋势
                 * @param req DescribeIntegrationStatisticsInstanceTrendRequest
                 * @return DescribeIntegrationStatisticsInstanceTrendOutcome
                 */
                DescribeIntegrationStatisticsInstanceTrendOutcome DescribeIntegrationStatisticsInstanceTrend(const Model::DescribeIntegrationStatisticsInstanceTrendRequest &request);
                void DescribeIntegrationStatisticsInstanceTrendAsync(const Model::DescribeIntegrationStatisticsInstanceTrendRequest& request, const DescribeIntegrationStatisticsInstanceTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIntegrationStatisticsInstanceTrendOutcomeCallable DescribeIntegrationStatisticsInstanceTrendCallable(const Model::DescribeIntegrationStatisticsInstanceTrendRequest& request);

                /**
                 *数据集成大屏同步条数统计趋势
                 * @param req DescribeIntegrationStatisticsRecordsTrendRequest
                 * @return DescribeIntegrationStatisticsRecordsTrendOutcome
                 */
                DescribeIntegrationStatisticsRecordsTrendOutcome DescribeIntegrationStatisticsRecordsTrend(const Model::DescribeIntegrationStatisticsRecordsTrendRequest &request);
                void DescribeIntegrationStatisticsRecordsTrendAsync(const Model::DescribeIntegrationStatisticsRecordsTrendRequest& request, const DescribeIntegrationStatisticsRecordsTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIntegrationStatisticsRecordsTrendOutcomeCallable DescribeIntegrationStatisticsRecordsTrendCallable(const Model::DescribeIntegrationStatisticsRecordsTrendRequest& request);

                /**
                 *数据集成大屏任务状态分布统计
                 * @param req DescribeIntegrationStatisticsTaskStatusRequest
                 * @return DescribeIntegrationStatisticsTaskStatusOutcome
                 */
                DescribeIntegrationStatisticsTaskStatusOutcome DescribeIntegrationStatisticsTaskStatus(const Model::DescribeIntegrationStatisticsTaskStatusRequest &request);
                void DescribeIntegrationStatisticsTaskStatusAsync(const Model::DescribeIntegrationStatisticsTaskStatusRequest& request, const DescribeIntegrationStatisticsTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIntegrationStatisticsTaskStatusOutcomeCallable DescribeIntegrationStatisticsTaskStatusCallable(const Model::DescribeIntegrationStatisticsTaskStatusRequest& request);

                /**
                 *数据集成大屏任务状态统计趋势
                 * @param req DescribeIntegrationStatisticsTaskStatusTrendRequest
                 * @return DescribeIntegrationStatisticsTaskStatusTrendOutcome
                 */
                DescribeIntegrationStatisticsTaskStatusTrendOutcome DescribeIntegrationStatisticsTaskStatusTrend(const Model::DescribeIntegrationStatisticsTaskStatusTrendRequest &request);
                void DescribeIntegrationStatisticsTaskStatusTrendAsync(const Model::DescribeIntegrationStatisticsTaskStatusTrendRequest& request, const DescribeIntegrationStatisticsTaskStatusTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIntegrationStatisticsTaskStatusTrendOutcomeCallable DescribeIntegrationStatisticsTaskStatusTrendCallable(const Model::DescribeIntegrationStatisticsTaskStatusTrendRequest& request);

                /**
                 *查询集成任务
                 * @param req DescribeIntegrationTaskRequest
                 * @return DescribeIntegrationTaskOutcome
                 */
                DescribeIntegrationTaskOutcome DescribeIntegrationTask(const Model::DescribeIntegrationTaskRequest &request);
                void DescribeIntegrationTaskAsync(const Model::DescribeIntegrationTaskRequest& request, const DescribeIntegrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIntegrationTaskOutcomeCallable DescribeIntegrationTaskCallable(const Model::DescribeIntegrationTaskRequest& request);

                /**
                 *查询集成任务列表
                 * @param req DescribeIntegrationTasksRequest
                 * @return DescribeIntegrationTasksOutcome
                 */
                DescribeIntegrationTasksOutcome DescribeIntegrationTasks(const Model::DescribeIntegrationTasksRequest &request);
                void DescribeIntegrationTasksAsync(const Model::DescribeIntegrationTasksRequest& request, const DescribeIntegrationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIntegrationTasksOutcomeCallable DescribeIntegrationTasksCallable(const Model::DescribeIntegrationTasksRequest& request);

                /**
                 *查询集成任务版本节点信息
                 * @param req DescribeIntegrationVersionNodesInfoRequest
                 * @return DescribeIntegrationVersionNodesInfoOutcome
                 */
                DescribeIntegrationVersionNodesInfoOutcome DescribeIntegrationVersionNodesInfo(const Model::DescribeIntegrationVersionNodesInfoRequest &request);
                void DescribeIntegrationVersionNodesInfoAsync(const Model::DescribeIntegrationVersionNodesInfoRequest& request, const DescribeIntegrationVersionNodesInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIntegrationVersionNodesInfoOutcomeCallable DescribeIntegrationVersionNodesInfoCallable(const Model::DescribeIntegrationVersionNodesInfoRequest& request);

                /**
                 *通用血缘查询接口
                 * @param req DescribeLineageInfoRequest
                 * @return DescribeLineageInfoOutcome
                 */
                DescribeLineageInfoOutcome DescribeLineageInfo(const Model::DescribeLineageInfoRequest &request);
                void DescribeLineageInfoAsync(const Model::DescribeLineageInfoRequest& request, const DescribeLineageInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLineageInfoOutcomeCallable DescribeLineageInfoCallable(const Model::DescribeLineageInfoRequest& request);

                /**
                 *查询手动任务触发记录
                 * @param req DescribeManualTriggerRecordPageRequest
                 * @return DescribeManualTriggerRecordPageOutcome
                 */
                DescribeManualTriggerRecordPageOutcome DescribeManualTriggerRecordPage(const Model::DescribeManualTriggerRecordPageRequest &request);
                void DescribeManualTriggerRecordPageAsync(const Model::DescribeManualTriggerRecordPageRequest& request, const DescribeManualTriggerRecordPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeManualTriggerRecordPageOutcomeCallable DescribeManualTriggerRecordPageCallable(const Model::DescribeManualTriggerRecordPageRequest& request);

                /**
                 *获取离线任务长连接Token
                 * @param req DescribeOfflineTaskTokenRequest
                 * @return DescribeOfflineTaskTokenOutcome
                 */
                DescribeOfflineTaskTokenOutcome DescribeOfflineTaskToken(const Model::DescribeOfflineTaskTokenRequest &request);
                void DescribeOfflineTaskTokenAsync(const Model::DescribeOfflineTaskTokenRequest& request, const DescribeOfflineTaskTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOfflineTaskTokenOutcomeCallable DescribeOfflineTaskTokenCallable(const Model::DescribeOfflineTaskTokenRequest& request);

                /**
                 *任务运维列表组合条件查询
                 * @param req DescribeOperateOpsTasksRequest
                 * @return DescribeOperateOpsTasksOutcome
                 */
                DescribeOperateOpsTasksOutcome DescribeOperateOpsTasks(const Model::DescribeOperateOpsTasksRequest &request);
                void DescribeOperateOpsTasksAsync(const Model::DescribeOperateOpsTasksRequest& request, const DescribeOperateOpsTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOperateOpsTasksOutcomeCallable DescribeOperateOpsTasksCallable(const Model::DescribeOperateOpsTasksRequest& request);

                /**
                 *实例运维-获取实例日志列表
                 * @param req DescribeOpsInstanceLogListRequest
                 * @return DescribeOpsInstanceLogListOutcome
                 */
                DescribeOpsInstanceLogListOutcome DescribeOpsInstanceLogList(const Model::DescribeOpsInstanceLogListRequest &request);
                void DescribeOpsInstanceLogListAsync(const Model::DescribeOpsInstanceLogListRequest& request, const DescribeOpsInstanceLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOpsInstanceLogListOutcomeCallable DescribeOpsInstanceLogListCallable(const Model::DescribeOpsInstanceLogListRequest& request);

                /**
                 *根据补录计划和补录任务获取补录实例列表。
                 * @param req DescribeOpsMakePlanInstancesRequest
                 * @return DescribeOpsMakePlanInstancesOutcome
                 */
                DescribeOpsMakePlanInstancesOutcome DescribeOpsMakePlanInstances(const Model::DescribeOpsMakePlanInstancesRequest &request);
                void DescribeOpsMakePlanInstancesAsync(const Model::DescribeOpsMakePlanInstancesRequest& request, const DescribeOpsMakePlanInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOpsMakePlanInstancesOutcomeCallable DescribeOpsMakePlanInstancesCallable(const Model::DescribeOpsMakePlanInstancesRequest& request);

                /**
                 *查看补录计划任务
                 * @param req DescribeOpsMakePlanTasksRequest
                 * @return DescribeOpsMakePlanTasksOutcome
                 */
                DescribeOpsMakePlanTasksOutcome DescribeOpsMakePlanTasks(const Model::DescribeOpsMakePlanTasksRequest &request);
                void DescribeOpsMakePlanTasksAsync(const Model::DescribeOpsMakePlanTasksRequest& request, const DescribeOpsMakePlanTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOpsMakePlanTasksOutcomeCallable DescribeOpsMakePlanTasksCallable(const Model::DescribeOpsMakePlanTasksRequest& request);

                /**
                 *根据条件分页查询补录计划
                 * @param req DescribeOpsMakePlansRequest
                 * @return DescribeOpsMakePlansOutcome
                 */
                DescribeOpsMakePlansOutcome DescribeOpsMakePlans(const Model::DescribeOpsMakePlansRequest &request);
                void DescribeOpsMakePlansAsync(const Model::DescribeOpsMakePlansRequest& request, const DescribeOpsMakePlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOpsMakePlansOutcomeCallable DescribeOpsMakePlansCallable(const Model::DescribeOpsMakePlansRequest& request);

                /**
                 *查询用户生产工作流列表
                 * @param req DescribeOpsWorkflowsRequest
                 * @return DescribeOpsWorkflowsOutcome
                 */
                DescribeOpsWorkflowsOutcome DescribeOpsWorkflows(const Model::DescribeOpsWorkflowsRequest &request);
                void DescribeOpsWorkflowsAsync(const Model::DescribeOpsWorkflowsRequest& request, const DescribeOpsWorkflowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOpsWorkflowsOutcomeCallable DescribeOpsWorkflowsCallable(const Model::DescribeOpsWorkflowsRequest& request);

                /**
                 *查询全量函数
                 * @param req DescribeOrganizationalFunctionsRequest
                 * @return DescribeOrganizationalFunctionsOutcome
                 */
                DescribeOrganizationalFunctionsOutcome DescribeOrganizationalFunctions(const Model::DescribeOrganizationalFunctionsRequest &request);
                void DescribeOrganizationalFunctionsAsync(const Model::DescribeOrganizationalFunctionsRequest& request, const DescribeOrganizationalFunctionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrganizationalFunctionsOutcomeCallable DescribeOrganizationalFunctionsCallable(const Model::DescribeOrganizationalFunctionsRequest& request);

                /**
                 *查询任务父依赖
                 * @param req DescribeParentTaskRequest
                 * @return DescribeParentTaskOutcome
                 */
                DescribeParentTaskOutcome DescribeParentTask(const Model::DescribeParentTaskRequest &request);
                void DescribeParentTaskAsync(const Model::DescribeParentTaskRequest& request, const DescribeParentTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeParentTaskOutcomeCallable DescribeParentTaskCallable(const Model::DescribeParentTaskRequest& request);

                /**
                 *获取待提交任务预提交校验信息（注意：工作流编号或者任务编号列表，必须填一项）
                 * @param req DescribePendingSubmitTaskListRequest
                 * @return DescribePendingSubmitTaskListOutcome
                 */
                DescribePendingSubmitTaskListOutcome DescribePendingSubmitTaskList(const Model::DescribePendingSubmitTaskListRequest &request);
                void DescribePendingSubmitTaskListAsync(const Model::DescribePendingSubmitTaskListRequest& request, const DescribePendingSubmitTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePendingSubmitTaskListOutcomeCallable DescribePendingSubmitTaskListCallable(const Model::DescribePendingSubmitTaskListRequest& request);

                /**
                 *获取项目信息
                 * @param req DescribeProjectRequest
                 * @return DescribeProjectOutcome
                 */
                DescribeProjectOutcome DescribeProject(const Model::DescribeProjectRequest &request);
                void DescribeProjectAsync(const Model::DescribeProjectRequest& request, const DescribeProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProjectOutcomeCallable DescribeProjectCallable(const Model::DescribeProjectRequest& request);

                /**
                 *获取项目下的用户，分页返回
                 * @param req DescribeProjectUsersRequest
                 * @return DescribeProjectUsersOutcome
                 */
                DescribeProjectUsersOutcome DescribeProjectUsers(const Model::DescribeProjectUsersRequest &request);
                void DescribeProjectUsersAsync(const Model::DescribeProjectUsersRequest& request, const DescribeProjectUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProjectUsersOutcomeCallable DescribeProjectUsersCallable(const Model::DescribeProjectUsersRequest& request);

                /**
                 *质量报告-质量评分
                 * @param req DescribeQualityScoreRequest
                 * @return DescribeQualityScoreOutcome
                 */
                DescribeQualityScoreOutcome DescribeQualityScore(const Model::DescribeQualityScoreRequest &request);
                void DescribeQualityScoreAsync(const Model::DescribeQualityScoreRequest& request, const DescribeQualityScoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeQualityScoreOutcomeCallable DescribeQualityScoreCallable(const Model::DescribeQualityScoreRequest& request);

                /**
                 *质量报告-质量分周期趋势
                 * @param req DescribeQualityScoreTrendRequest
                 * @return DescribeQualityScoreTrendOutcome
                 */
                DescribeQualityScoreTrendOutcome DescribeQualityScoreTrend(const Model::DescribeQualityScoreTrendRequest &request);
                void DescribeQualityScoreTrendAsync(const Model::DescribeQualityScoreTrendRequest& request, const DescribeQualityScoreTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeQualityScoreTrendOutcomeCallable DescribeQualityScoreTrendCallable(const Model::DescribeQualityScoreTrendRequest& request);

                /**
                 *查询实时任务实例节点信息
                 * @param req DescribeRealTimeTaskInstanceNodeInfoRequest
                 * @return DescribeRealTimeTaskInstanceNodeInfoOutcome
                 */
                DescribeRealTimeTaskInstanceNodeInfoOutcome DescribeRealTimeTaskInstanceNodeInfo(const Model::DescribeRealTimeTaskInstanceNodeInfoRequest &request);
                void DescribeRealTimeTaskInstanceNodeInfoAsync(const Model::DescribeRealTimeTaskInstanceNodeInfoRequest& request, const DescribeRealTimeTaskInstanceNodeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRealTimeTaskInstanceNodeInfoOutcomeCallable DescribeRealTimeTaskInstanceNodeInfoCallable(const Model::DescribeRealTimeTaskInstanceNodeInfoRequest& request);

                /**
                 *实时任务运行指标概览
                 * @param req DescribeRealTimeTaskMetricOverviewRequest
                 * @return DescribeRealTimeTaskMetricOverviewOutcome
                 */
                DescribeRealTimeTaskMetricOverviewOutcome DescribeRealTimeTaskMetricOverview(const Model::DescribeRealTimeTaskMetricOverviewRequest &request);
                void DescribeRealTimeTaskMetricOverviewAsync(const Model::DescribeRealTimeTaskMetricOverviewRequest& request, const DescribeRealTimeTaskMetricOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRealTimeTaskMetricOverviewOutcomeCallable DescribeRealTimeTaskMetricOverviewCallable(const Model::DescribeRealTimeTaskMetricOverviewRequest& request);

                /**
                 *实时任务同步速度趋势
                 * @param req DescribeRealTimeTaskSpeedRequest
                 * @return DescribeRealTimeTaskSpeedOutcome
                 */
                DescribeRealTimeTaskSpeedOutcome DescribeRealTimeTaskSpeed(const Model::DescribeRealTimeTaskSpeedRequest &request);
                void DescribeRealTimeTaskSpeedAsync(const Model::DescribeRealTimeTaskSpeedRequest& request, const DescribeRealTimeTaskSpeedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRealTimeTaskSpeedOutcomeCallable DescribeRealTimeTaskSpeedCallable(const Model::DescribeRealTimeTaskSpeedRequest& request);

                /**
                 *数据集成分页获取数据库SCHEMA信息
                 * @param req DescribeRealViewSchemaPageRequest
                 * @return DescribeRealViewSchemaPageOutcome
                 */
                DescribeRealViewSchemaPageOutcome DescribeRealViewSchemaPage(const Model::DescribeRealViewSchemaPageRequest &request);
                void DescribeRealViewSchemaPageAsync(const Model::DescribeRealViewSchemaPageRequest& request, const DescribeRealViewSchemaPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRealViewSchemaPageOutcomeCallable DescribeRealViewSchemaPageCallable(const Model::DescribeRealViewSchemaPageRequest& request);

                /**
                 *根据任务ID分页查询任务绑定监听的事件
                 * @param req DescribeRelatedTasksByTaskIdRequest
                 * @return DescribeRelatedTasksByTaskIdOutcome
                 */
                DescribeRelatedTasksByTaskIdOutcome DescribeRelatedTasksByTaskId(const Model::DescribeRelatedTasksByTaskIdRequest &request);
                void DescribeRelatedTasksByTaskIdAsync(const Model::DescribeRelatedTasksByTaskIdRequest& request, const DescribeRelatedTasksByTaskIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRelatedTasksByTaskIdOutcomeCallable DescribeRelatedTasksByTaskIdCallable(const Model::DescribeRelatedTasksByTaskIdRequest& request);

                /**
                 *查询上报任务详情，注意：任务执行完后，任务详情上报存在10分钟的延迟，使用接口查询任务详情时需等待任务运行完10分钟后查询
                 * @param req DescribeReportTaskDetailRequest
                 * @return DescribeReportTaskDetailOutcome
                 */
                DescribeReportTaskDetailOutcome DescribeReportTaskDetail(const Model::DescribeReportTaskDetailRequest &request);
                void DescribeReportTaskDetailAsync(const Model::DescribeReportTaskDetailRequest& request, const DescribeReportTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReportTaskDetailOutcomeCallable DescribeReportTaskDetailCallable(const Model::DescribeReportTaskDetailRequest& request);

                /**
                 *查询上报任务列表
                 * @param req DescribeReportTaskListRequest
                 * @return DescribeReportTaskListOutcome
                 */
                DescribeReportTaskListOutcome DescribeReportTaskList(const Model::DescribeReportTaskListRequest &request);
                void DescribeReportTaskListAsync(const Model::DescribeReportTaskListRequest& request, const DescribeReportTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReportTaskListOutcomeCallable DescribeReportTaskListCallable(const Model::DescribeReportTaskListRequest& request);

                /**
                 *获取资源管理目录树
                 * @param req DescribeResourceManagePathTreesRequest
                 * @return DescribeResourceManagePathTreesOutcome
                 */
                DescribeResourceManagePathTreesOutcome DescribeResourceManagePathTrees(const Model::DescribeResourceManagePathTreesRequest &request);
                void DescribeResourceManagePathTreesAsync(const Model::DescribeResourceManagePathTreesRequest& request, const DescribeResourceManagePathTreesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourceManagePathTreesOutcomeCallable DescribeResourceManagePathTreesCallable(const Model::DescribeResourceManagePathTreesRequest& request);

                /**
                 *获取角色列表信息
                 * @param req DescribeRoleListRequest
                 * @return DescribeRoleListOutcome
                 */
                DescribeRoleListOutcome DescribeRoleList(const Model::DescribeRoleListRequest &request);
                void DescribeRoleListAsync(const Model::DescribeRoleListRequest& request, const DescribeRoleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRoleListOutcomeCallable DescribeRoleListCallable(const Model::DescribeRoleListRequest& request);

                /**
                 *查询规则详情
                 * @param req DescribeRuleRequest
                 * @return DescribeRuleOutcome
                 */
                DescribeRuleOutcome DescribeRule(const Model::DescribeRuleRequest &request);
                void DescribeRuleAsync(const Model::DescribeRuleRequest& request, const DescribeRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRuleOutcomeCallable DescribeRuleCallable(const Model::DescribeRuleRequest& request);

                /**
                 *数据质量概览页面触发维度分布统计接口
                 * @param req DescribeRuleDimStatRequest
                 * @return DescribeRuleDimStatOutcome
                 */
                DescribeRuleDimStatOutcome DescribeRuleDimStat(const Model::DescribeRuleDimStatRequest &request);
                void DescribeRuleDimStatAsync(const Model::DescribeRuleDimStatRequest& request, const DescribeRuleDimStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRuleDimStatOutcomeCallable DescribeRuleDimStatCallable(const Model::DescribeRuleDimStatRequest& request);

                /**
                 *查询规则执行结果详情
                 * @param req DescribeRuleExecDetailRequest
                 * @return DescribeRuleExecDetailOutcome
                 */
                DescribeRuleExecDetailOutcome DescribeRuleExecDetail(const Model::DescribeRuleExecDetailRequest &request);
                void DescribeRuleExecDetailAsync(const Model::DescribeRuleExecDetailRequest& request, const DescribeRuleExecDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRuleExecDetailOutcomeCallable DescribeRuleExecDetailCallable(const Model::DescribeRuleExecDetailRequest& request);

                /**
                 *规则执行日志查询
                 * @param req DescribeRuleExecLogRequest
                 * @return DescribeRuleExecLogOutcome
                 */
                DescribeRuleExecLogOutcome DescribeRuleExecLog(const Model::DescribeRuleExecLogRequest &request);
                void DescribeRuleExecLogAsync(const Model::DescribeRuleExecLogRequest& request, const DescribeRuleExecLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRuleExecLogOutcomeCallable DescribeRuleExecLogCallable(const Model::DescribeRuleExecLogRequest& request);

                /**
                 *规则执行结果列表查询
                 * @param req DescribeRuleExecResultsRequest
                 * @return DescribeRuleExecResultsOutcome
                 */
                DescribeRuleExecResultsOutcome DescribeRuleExecResults(const Model::DescribeRuleExecResultsRequest &request);
                void DescribeRuleExecResultsAsync(const Model::DescribeRuleExecResultsRequest& request, const DescribeRuleExecResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRuleExecResultsOutcomeCallable DescribeRuleExecResultsCallable(const Model::DescribeRuleExecResultsRequest& request);

                /**
                 *数据质量概览页面规则运行情况接口
                 * @param req DescribeRuleExecStatRequest
                 * @return DescribeRuleExecStatOutcome
                 */
                DescribeRuleExecStatOutcome DescribeRuleExecStat(const Model::DescribeRuleExecStatRequest &request);
                void DescribeRuleExecStatAsync(const Model::DescribeRuleExecStatRequest& request, const DescribeRuleExecStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRuleExecStatOutcomeCallable DescribeRuleExecStatCallable(const Model::DescribeRuleExecStatRequest& request);

                /**
                 *查询规则组详情接口
                 * @param req DescribeRuleGroupRequest
                 * @return DescribeRuleGroupOutcome
                 */
                DescribeRuleGroupOutcome DescribeRuleGroup(const Model::DescribeRuleGroupRequest &request);
                void DescribeRuleGroupAsync(const Model::DescribeRuleGroupRequest& request, const DescribeRuleGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRuleGroupOutcomeCallable DescribeRuleGroupCallable(const Model::DescribeRuleGroupRequest& request);

                /**
                 *规则组执行结果分页查询接口
                 * @param req DescribeRuleGroupExecResultsByPageRequest
                 * @return DescribeRuleGroupExecResultsByPageOutcome
                 */
                DescribeRuleGroupExecResultsByPageOutcome DescribeRuleGroupExecResultsByPage(const Model::DescribeRuleGroupExecResultsByPageRequest &request);
                void DescribeRuleGroupExecResultsByPageAsync(const Model::DescribeRuleGroupExecResultsByPageRequest& request, const DescribeRuleGroupExecResultsByPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRuleGroupExecResultsByPageOutcomeCallable DescribeRuleGroupExecResultsByPageCallable(const Model::DescribeRuleGroupExecResultsByPageRequest& request);

                /**
                 *查询规则组订阅信息
                 * @param req DescribeRuleGroupSubscriptionRequest
                 * @return DescribeRuleGroupSubscriptionOutcome
                 */
                DescribeRuleGroupSubscriptionOutcome DescribeRuleGroupSubscription(const Model::DescribeRuleGroupSubscriptionRequest &request);
                void DescribeRuleGroupSubscriptionAsync(const Model::DescribeRuleGroupSubscriptionRequest& request, const DescribeRuleGroupSubscriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRuleGroupSubscriptionOutcomeCallable DescribeRuleGroupSubscriptionCallable(const Model::DescribeRuleGroupSubscriptionRequest& request);

                /**
                 *查询表绑定执行规则组信息
                 * @param req DescribeRuleGroupTableRequest
                 * @return DescribeRuleGroupTableOutcome
                 */
                DescribeRuleGroupTableOutcome DescribeRuleGroupTable(const Model::DescribeRuleGroupTableRequest &request);
                void DescribeRuleGroupTableAsync(const Model::DescribeRuleGroupTableRequest& request, const DescribeRuleGroupTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRuleGroupTableOutcomeCallable DescribeRuleGroupTableCallable(const Model::DescribeRuleGroupTableRequest& request);

                /**
                 *【过滤条件】
{表名称TableName,支持模糊匹配}       {表负责人TableOwnerName,支持模糊匹配}      {监控方式MonitorTypes，1.未配置 2.关联生产调度 3.离线周期检测,支持多选}  {订阅人ReceiverUin}
【必要字段】
{数据来源DatasourceId}
                 * @param req DescribeRuleGroupsByPageRequest
                 * @return DescribeRuleGroupsByPageOutcome
                 */
                DescribeRuleGroupsByPageOutcome DescribeRuleGroupsByPage(const Model::DescribeRuleGroupsByPageRequest &request);
                void DescribeRuleGroupsByPageAsync(const Model::DescribeRuleGroupsByPageRequest& request, const DescribeRuleGroupsByPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRuleGroupsByPageOutcomeCallable DescribeRuleGroupsByPageCallable(const Model::DescribeRuleGroupsByPageRequest& request);

                /**
                 *查询模板详情
                 * @param req DescribeRuleTemplateRequest
                 * @return DescribeRuleTemplateOutcome
                 */
                DescribeRuleTemplateOutcome DescribeRuleTemplate(const Model::DescribeRuleTemplateRequest &request);
                void DescribeRuleTemplateAsync(const Model::DescribeRuleTemplateRequest& request, const DescribeRuleTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRuleTemplateOutcomeCallable DescribeRuleTemplateCallable(const Model::DescribeRuleTemplateRequest& request);

                /**
                 *查询规则模板列表
                 * @param req DescribeRuleTemplatesRequest
                 * @return DescribeRuleTemplatesOutcome
                 */
                DescribeRuleTemplatesOutcome DescribeRuleTemplates(const Model::DescribeRuleTemplatesRequest &request);
                void DescribeRuleTemplatesAsync(const Model::DescribeRuleTemplatesRequest& request, const DescribeRuleTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRuleTemplatesOutcomeCallable DescribeRuleTemplatesCallable(const Model::DescribeRuleTemplatesRequest& request);

                /**
                 *【过滤条件】 {模板名称Name,支持模糊匹配} {模板类型type，1.系统模板 2.自定义模板} {质量检测维度QualityDims, 1.准确性 2.唯一性 3.完整性 4.一致性 5.及时性 6.有效性} 【排序字段】 { 引用数排序类型CitationOrderType，根据引用数量排序 ASC DESC}
                 * @param req DescribeRuleTemplatesByPageRequest
                 * @return DescribeRuleTemplatesByPageOutcome
                 */
                DescribeRuleTemplatesByPageOutcome DescribeRuleTemplatesByPage(const Model::DescribeRuleTemplatesByPageRequest &request);
                void DescribeRuleTemplatesByPageAsync(const Model::DescribeRuleTemplatesByPageRequest& request, const DescribeRuleTemplatesByPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRuleTemplatesByPageOutcomeCallable DescribeRuleTemplatesByPageCallable(const Model::DescribeRuleTemplatesByPageRequest& request);

                /**
                 *查询质量规则列表
                 * @param req DescribeRulesRequest
                 * @return DescribeRulesOutcome
                 */
                DescribeRulesOutcome DescribeRules(const Model::DescribeRulesRequest &request);
                void DescribeRulesAsync(const Model::DescribeRulesRequest& request, const DescribeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRulesOutcomeCallable DescribeRulesCallable(const Model::DescribeRulesRequest& request);

                /**
                 *分页查询质量规则
                 * @param req DescribeRulesByPageRequest
                 * @return DescribeRulesByPageOutcome
                 */
                DescribeRulesByPageOutcome DescribeRulesByPage(const Model::DescribeRulesByPageRequest &request);
                void DescribeRulesByPageAsync(const Model::DescribeRulesByPageRequest& request, const DescribeRulesByPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRulesByPageOutcomeCallable DescribeRulesByPageCallable(const Model::DescribeRulesByPageRequest& request);

                /**
                 *获取实例列表
                 * @param req DescribeScheduleInstancesRequest
                 * @return DescribeScheduleInstancesOutcome
                 */
                DescribeScheduleInstancesOutcome DescribeScheduleInstances(const Model::DescribeScheduleInstancesRequest &request);
                void DescribeScheduleInstancesAsync(const Model::DescribeScheduleInstancesRequest& request, const DescribeScheduleInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScheduleInstancesOutcomeCallable DescribeScheduleInstancesCallable(const Model::DescribeScheduleInstancesRequest& request);

                /**
                 *运维大屏-实例状态分布
                 * @param req DescribeSchedulerInstanceStatusRequest
                 * @return DescribeSchedulerInstanceStatusOutcome
                 */
                DescribeSchedulerInstanceStatusOutcome DescribeSchedulerInstanceStatus(const Model::DescribeSchedulerInstanceStatusRequest &request);
                void DescribeSchedulerInstanceStatusAsync(const Model::DescribeSchedulerInstanceStatusRequest& request, const DescribeSchedulerInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSchedulerInstanceStatusOutcomeCallable DescribeSchedulerInstanceStatusCallable(const Model::DescribeSchedulerInstanceStatusRequest& request);

                /**
                 *运维大屏-实例运行时长排行
                 * @param req DescribeSchedulerRunTimeInstanceCntByStatusRequest
                 * @return DescribeSchedulerRunTimeInstanceCntByStatusOutcome
                 */
                DescribeSchedulerRunTimeInstanceCntByStatusOutcome DescribeSchedulerRunTimeInstanceCntByStatus(const Model::DescribeSchedulerRunTimeInstanceCntByStatusRequest &request);
                void DescribeSchedulerRunTimeInstanceCntByStatusAsync(const Model::DescribeSchedulerRunTimeInstanceCntByStatusRequest& request, const DescribeSchedulerRunTimeInstanceCntByStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSchedulerRunTimeInstanceCntByStatusOutcomeCallable DescribeSchedulerRunTimeInstanceCntByStatusCallable(const Model::DescribeSchedulerRunTimeInstanceCntByStatusRequest& request);

                /**
                 *任务状态统计
                 * @param req DescribeSchedulerTaskCntByStatusRequest
                 * @return DescribeSchedulerTaskCntByStatusOutcome
                 */
                DescribeSchedulerTaskCntByStatusOutcome DescribeSchedulerTaskCntByStatus(const Model::DescribeSchedulerTaskCntByStatusRequest &request);
                void DescribeSchedulerTaskCntByStatusAsync(const Model::DescribeSchedulerTaskCntByStatusRequest& request, const DescribeSchedulerTaskCntByStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSchedulerTaskCntByStatusOutcomeCallable DescribeSchedulerTaskCntByStatusCallable(const Model::DescribeSchedulerTaskCntByStatusRequest& request);

                /**
                 *运维大屏-任务状态分布
                 * @param req DescribeSchedulerTaskTypeCntRequest
                 * @return DescribeSchedulerTaskTypeCntOutcome
                 */
                DescribeSchedulerTaskTypeCntOutcome DescribeSchedulerTaskTypeCnt(const Model::DescribeSchedulerTaskTypeCntRequest &request);
                void DescribeSchedulerTaskTypeCntAsync(const Model::DescribeSchedulerTaskTypeCntRequest& request, const DescribeSchedulerTaskTypeCntAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSchedulerTaskTypeCntOutcomeCallable DescribeSchedulerTaskTypeCntCallable(const Model::DescribeSchedulerTaskTypeCntRequest& request);

                /**
                 *任务状态趋势
                 * @param req DescribeStatisticInstanceStatusTrendOpsRequest
                 * @return DescribeStatisticInstanceStatusTrendOpsOutcome
                 */
                DescribeStatisticInstanceStatusTrendOpsOutcome DescribeStatisticInstanceStatusTrendOps(const Model::DescribeStatisticInstanceStatusTrendOpsRequest &request);
                void DescribeStatisticInstanceStatusTrendOpsAsync(const Model::DescribeStatisticInstanceStatusTrendOpsRequest& request, const DescribeStatisticInstanceStatusTrendOpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStatisticInstanceStatusTrendOpsOutcomeCallable DescribeStatisticInstanceStatusTrendOpsCallable(const Model::DescribeStatisticInstanceStatusTrendOpsRequest& request);

                /**
                 *查询实时任务日志列表
                 * @param req DescribeStreamTaskLogListRequest
                 * @return DescribeStreamTaskLogListOutcome
                 */
                DescribeStreamTaskLogListOutcome DescribeStreamTaskLogList(const Model::DescribeStreamTaskLogListRequest &request);
                void DescribeStreamTaskLogListAsync(const Model::DescribeStreamTaskLogListRequest& request, const DescribeStreamTaskLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamTaskLogListOutcomeCallable DescribeStreamTaskLogListCallable(const Model::DescribeStreamTaskLogListRequest& request);

                /**
                 *获取下游任务信息
                 * @param req DescribeSuccessorOpsTaskInfosRequest
                 * @return DescribeSuccessorOpsTaskInfosOutcome
                 */
                DescribeSuccessorOpsTaskInfosOutcome DescribeSuccessorOpsTaskInfos(const Model::DescribeSuccessorOpsTaskInfosRequest &request);
                void DescribeSuccessorOpsTaskInfosAsync(const Model::DescribeSuccessorOpsTaskInfosRequest& request, const DescribeSuccessorOpsTaskInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSuccessorOpsTaskInfosOutcomeCallable DescribeSuccessorOpsTaskInfosCallable(const Model::DescribeSuccessorOpsTaskInfosRequest& request);

                /**
                 *获取下游任务信息批量
                 * @param req DescribeSuccessorTaskInfoListRequest
                 * @return DescribeSuccessorTaskInfoListOutcome
                 */
                DescribeSuccessorTaskInfoListOutcome DescribeSuccessorTaskInfoList(const Model::DescribeSuccessorTaskInfoListRequest &request);
                void DescribeSuccessorTaskInfoListAsync(const Model::DescribeSuccessorTaskInfoListRequest& request, const DescribeSuccessorTaskInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSuccessorTaskInfoListOutcomeCallable DescribeSuccessorTaskInfoListCallable(const Model::DescribeSuccessorTaskInfoListRequest& request);

                /**
                 *元数据模型-表基础信息查询接口
                 * @param req DescribeTableBasicInfoRequest
                 * @return DescribeTableBasicInfoOutcome
                 */
                DescribeTableBasicInfoOutcome DescribeTableBasicInfo(const Model::DescribeTableBasicInfoRequest &request);
                void DescribeTableBasicInfoAsync(const Model::DescribeTableBasicInfoRequest& request, const DescribeTableBasicInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTableBasicInfoOutcomeCallable DescribeTableBasicInfoCallable(const Model::DescribeTableBasicInfoRequest& request);

                /**
                 *获取数据表信息
                 * @param req DescribeTableInfoListRequest
                 * @return DescribeTableInfoListOutcome
                 */
                DescribeTableInfoListOutcome DescribeTableInfoList(const Model::DescribeTableInfoListRequest &request);
                void DescribeTableInfoListAsync(const Model::DescribeTableInfoListRequest& request, const DescribeTableInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTableInfoListOutcomeCallable DescribeTableInfoListCallable(const Model::DescribeTableInfoListRequest& request);

                /**
                 *列出表血缘信息
                 * @param req DescribeTableLineageRequest
                 * @return DescribeTableLineageOutcome
                 */
                DescribeTableLineageOutcome DescribeTableLineage(const Model::DescribeTableLineageRequest &request);
                void DescribeTableLineageAsync(const Model::DescribeTableLineageRequest& request, const DescribeTableLineageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTableLineageOutcomeCallable DescribeTableLineageCallable(const Model::DescribeTableLineageRequest& request);

                /**
                 *列出表血缘信息
                 * @param req DescribeTableLineageInfoRequest
                 * @return DescribeTableLineageInfoOutcome
                 */
                DescribeTableLineageInfoOutcome DescribeTableLineageInfo(const Model::DescribeTableLineageInfoRequest &request);
                void DescribeTableLineageInfoAsync(const Model::DescribeTableLineageInfoRequest& request, const DescribeTableLineageInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTableLineageInfoOutcomeCallable DescribeTableLineageInfoCallable(const Model::DescribeTableLineageInfoRequest& request);

                /**
                 *查询表元数据详情
                 * @param req DescribeTableMetaRequest
                 * @return DescribeTableMetaOutcome
                 */
                DescribeTableMetaOutcome DescribeTableMeta(const Model::DescribeTableMetaRequest &request);
                void DescribeTableMetaAsync(const Model::DescribeTableMetaRequest& request, const DescribeTableMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTableMetaOutcomeCallable DescribeTableMetaCallable(const Model::DescribeTableMetaRequest& request);

                /**
                 *获取表元数据list
                 * @param req DescribeTableMetasRequest
                 * @return DescribeTableMetasOutcome
                 */
                DescribeTableMetasOutcome DescribeTableMetas(const Model::DescribeTableMetasRequest &request);
                void DescribeTableMetasAsync(const Model::DescribeTableMetasRequest& request, const DescribeTableMetasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTableMetasOutcomeCallable DescribeTableMetasCallable(const Model::DescribeTableMetasRequest& request);

                /**
                 *查询表的分区详情信息
                 * @param req DescribeTablePartitionsRequest
                 * @return DescribeTablePartitionsOutcome
                 */
                DescribeTablePartitionsOutcome DescribeTablePartitions(const Model::DescribeTablePartitionsRequest &request);
                void DescribeTablePartitionsAsync(const Model::DescribeTablePartitionsRequest& request, const DescribeTablePartitionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTablePartitionsOutcomeCallable DescribeTablePartitionsCallable(const Model::DescribeTablePartitionsRequest& request);

                /**
                 *质量报告-查询表质量详情
                 * @param req DescribeTableQualityDetailsRequest
                 * @return DescribeTableQualityDetailsOutcome
                 */
                DescribeTableQualityDetailsOutcome DescribeTableQualityDetails(const Model::DescribeTableQualityDetailsRequest &request);
                void DescribeTableQualityDetailsAsync(const Model::DescribeTableQualityDetailsRequest& request, const DescribeTableQualityDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTableQualityDetailsOutcomeCallable DescribeTableQualityDetailsCallable(const Model::DescribeTableQualityDetailsRequest& request);

                /**
                 *获取表schema信息
                 * @param req DescribeTableSchemaInfoRequest
                 * @return DescribeTableSchemaInfoOutcome
                 */
                DescribeTableSchemaInfoOutcome DescribeTableSchemaInfo(const Model::DescribeTableSchemaInfoRequest &request);
                void DescribeTableSchemaInfoAsync(const Model::DescribeTableSchemaInfoRequest& request, const DescribeTableSchemaInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTableSchemaInfoOutcomeCallable DescribeTableSchemaInfoCallable(const Model::DescribeTableSchemaInfoRequest& request);

                /**
                 *查询表得分趋势
                 * @param req DescribeTableScoreTrendRequest
                 * @return DescribeTableScoreTrendOutcome
                 */
                DescribeTableScoreTrendOutcome DescribeTableScoreTrend(const Model::DescribeTableScoreTrendRequest &request);
                void DescribeTableScoreTrendAsync(const Model::DescribeTableScoreTrendRequest& request, const DescribeTableScoreTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTableScoreTrendOutcomeCallable DescribeTableScoreTrendCallable(const Model::DescribeTableScoreTrendRequest& request);

                /**
                 *查询任务告警规则列表
                 * @param req DescribeTaskAlarmRegulationsRequest
                 * @return DescribeTaskAlarmRegulationsOutcome
                 */
                DescribeTaskAlarmRegulationsOutcome DescribeTaskAlarmRegulations(const Model::DescribeTaskAlarmRegulationsRequest &request);
                void DescribeTaskAlarmRegulationsAsync(const Model::DescribeTaskAlarmRegulationsRequest& request, const DescribeTaskAlarmRegulationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskAlarmRegulationsOutcomeCallable DescribeTaskAlarmRegulationsCallable(const Model::DescribeTaskAlarmRegulationsRequest& request);

                /**
                 *根据周期类型 查询所有任务
                 * @param req DescribeTaskByCycleRequest
                 * @return DescribeTaskByCycleOutcome
                 */
                DescribeTaskByCycleOutcome DescribeTaskByCycle(const Model::DescribeTaskByCycleRequest &request);
                void DescribeTaskByCycleAsync(const Model::DescribeTaskByCycleRequest& request, const DescribeTaskByCycleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskByCycleOutcomeCallable DescribeTaskByCycleCallable(const Model::DescribeTaskByCycleRequest& request);

                /**
                 *任务状态趋势
                 * @param req DescribeTaskByStatusReportRequest
                 * @return DescribeTaskByStatusReportOutcome
                 */
                DescribeTaskByStatusReportOutcome DescribeTaskByStatusReport(const Model::DescribeTaskByStatusReportRequest &request);
                void DescribeTaskByStatusReportAsync(const Model::DescribeTaskByStatusReportRequest& request, const DescribeTaskByStatusReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskByStatusReportOutcomeCallable DescribeTaskByStatusReportCallable(const Model::DescribeTaskByStatusReportRequest& request);

                /**
                 *查询任务具体详情【新】
                 * @param req DescribeTaskDetailDsRequest
                 * @return DescribeTaskDetailDsOutcome
                 */
                DescribeTaskDetailDsOutcome DescribeTaskDetailDs(const Model::DescribeTaskDetailDsRequest &request);
                void DescribeTaskDetailDsAsync(const Model::DescribeTaskDetailDsRequest& request, const DescribeTaskDetailDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskDetailDsOutcomeCallable DescribeTaskDetailDsCallable(const Model::DescribeTaskDetailDsRequest& request);

                /**
                 *分组获取编排空间调试任务实例状态信息
                 * @param req DescribeTaskInstancesStatusRequest
                 * @return DescribeTaskInstancesStatusOutcome
                 */
                DescribeTaskInstancesStatusOutcome DescribeTaskInstancesStatus(const Model::DescribeTaskInstancesStatusRequest &request);
                void DescribeTaskInstancesStatusAsync(const Model::DescribeTaskInstancesStatusRequest& request, const DescribeTaskInstancesStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskInstancesStatusOutcomeCallable DescribeTaskInstancesStatusCallable(const Model::DescribeTaskInstancesStatusRequest& request);

                /**
                 *通过任务查询表的血缘关系
                 * @param req DescribeTaskLineageRequest
                 * @return DescribeTaskLineageOutcome
                 */
                DescribeTaskLineageOutcome DescribeTaskLineage(const Model::DescribeTaskLineageRequest &request);
                void DescribeTaskLineageAsync(const Model::DescribeTaskLineageRequest& request, const DescribeTaskLineageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskLineageOutcomeCallable DescribeTaskLineageCallable(const Model::DescribeTaskLineageRequest& request);

                /**
                 *查看任务锁状态信息
                 * @param req DescribeTaskLockStatusRequest
                 * @return DescribeTaskLockStatusOutcome
                 */
                DescribeTaskLockStatusOutcome DescribeTaskLockStatus(const Model::DescribeTaskLockStatusRequest &request);
                void DescribeTaskLockStatusAsync(const Model::DescribeTaskLockStatusRequest& request, const DescribeTaskLockStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskLockStatusOutcomeCallable DescribeTaskLockStatusCallable(const Model::DescribeTaskLockStatusRequest& request);

                /**
                 *查询任务引用参数
                 * @param req DescribeTaskParamDsRequest
                 * @return DescribeTaskParamDsOutcome
                 */
                DescribeTaskParamDsOutcome DescribeTaskParamDs(const Model::DescribeTaskParamDsRequest &request);
                void DescribeTaskParamDsAsync(const Model::DescribeTaskParamDsRequest& request, const DescribeTaskParamDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskParamDsOutcomeCallable DescribeTaskParamDsCallable(const Model::DescribeTaskParamDsRequest& request);

                /**
                 *分页查询任务运行历史
                 * @param req DescribeTaskRunHistoryRequest
                 * @return DescribeTaskRunHistoryOutcome
                 */
                DescribeTaskRunHistoryOutcome DescribeTaskRunHistory(const Model::DescribeTaskRunHistoryRequest &request);
                void DescribeTaskRunHistoryAsync(const Model::DescribeTaskRunHistoryRequest& request, const DescribeTaskRunHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskRunHistoryOutcomeCallable DescribeTaskRunHistoryCallable(const Model::DescribeTaskRunHistoryRequest& request);

                /**
                 *查询任务脚本。本接口已废弃，请使用接口GetPaginationTaskScript。
                 * @param req DescribeTaskScriptRequest
                 * @return DescribeTaskScriptOutcome
                 */
                DescribeTaskScriptOutcome DescribeTaskScript(const Model::DescribeTaskScriptRequest &request);
                void DescribeTaskScriptAsync(const Model::DescribeTaskScriptRequest& request, const DescribeTaskScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskScriptOutcomeCallable DescribeTaskScriptCallable(const Model::DescribeTaskScriptRequest& request);

                /**
                 *查询实时任务表粒度指标概览
                 * @param req DescribeTaskTableMetricOverviewRequest
                 * @return DescribeTaskTableMetricOverviewOutcome
                 */
                DescribeTaskTableMetricOverviewOutcome DescribeTaskTableMetricOverview(const Model::DescribeTaskTableMetricOverviewRequest &request);
                void DescribeTaskTableMetricOverviewAsync(const Model::DescribeTaskTableMetricOverviewRequest& request, const DescribeTaskTableMetricOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskTableMetricOverviewOutcomeCallable DescribeTaskTableMetricOverviewCallable(const Model::DescribeTaskTableMetricOverviewRequest& request);

                /**
                 *查询项目下所有任务列表,包括虚拟任务
                 * @param req DescribeTaskTemplatesRequest
                 * @return DescribeTaskTemplatesOutcome
                 */
                DescribeTaskTemplatesOutcome DescribeTaskTemplates(const Model::DescribeTaskTemplatesRequest &request);
                void DescribeTaskTemplatesAsync(const Model::DescribeTaskTemplatesRequest& request, const DescribeTaskTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskTemplatesOutcomeCallable DescribeTaskTemplatesCallable(const Model::DescribeTaskTemplatesRequest& request);

                /**
                 *分页查询引用模板的任务列表
                 * @param req DescribeTasksForCodeTemplateRequest
                 * @return DescribeTasksForCodeTemplateOutcome
                 */
                DescribeTasksForCodeTemplateOutcome DescribeTasksForCodeTemplate(const Model::DescribeTasksForCodeTemplateRequest &request);
                void DescribeTasksForCodeTemplateAsync(const Model::DescribeTasksForCodeTemplateRequest& request, const DescribeTasksForCodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTasksForCodeTemplateOutcomeCallable DescribeTasksForCodeTemplateCallable(const Model::DescribeTasksForCodeTemplateRequest& request);

                /**
                 *查询规则模板维度分布情况
                 * @param req DescribeTemplateDimCountRequest
                 * @return DescribeTemplateDimCountOutcome
                 */
                DescribeTemplateDimCountOutcome DescribeTemplateDimCount(const Model::DescribeTemplateDimCountRequest &request);
                void DescribeTemplateDimCountAsync(const Model::DescribeTemplateDimCountRequest& request, const DescribeTemplateDimCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTemplateDimCountOutcomeCallable DescribeTemplateDimCountCallable(const Model::DescribeTemplateDimCountRequest& request);

                /**
                 *租户全局范围的项目列表，与用户查看范围无关.
                 * @param req DescribeTenantProjectsRequest
                 * @return DescribeTenantProjectsOutcome
                 */
                DescribeTenantProjectsOutcome DescribeTenantProjects(const Model::DescribeTenantProjectsRequest &request);
                void DescribeTenantProjectsAsync(const Model::DescribeTenantProjectsRequest& request, const DescribeTenantProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTenantProjectsOutcomeCallable DescribeTenantProjectsCallable(const Model::DescribeTenantProjectsRequest& request);

                /**
                 *获取编排空间试运行历史
                 * @param req DescribeTestRunningRecordRequest
                 * @return DescribeTestRunningRecordOutcome
                 */
                DescribeTestRunningRecordOutcome DescribeTestRunningRecord(const Model::DescribeTestRunningRecordRequest &request);
                void DescribeTestRunningRecordAsync(const Model::DescribeTestRunningRecordRequest& request, const DescribeTestRunningRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTestRunningRecordOutcomeCallable DescribeTestRunningRecordCallable(const Model::DescribeTestRunningRecordRequest& request);

                /**
                 *获取第三方运行日志
                 * @param req DescribeThirdTaskRunLogRequest
                 * @return DescribeThirdTaskRunLogOutcome
                 */
                DescribeThirdTaskRunLogOutcome DescribeThirdTaskRunLog(const Model::DescribeThirdTaskRunLogRequest &request);
                void DescribeThirdTaskRunLogAsync(const Model::DescribeThirdTaskRunLogRequest& request, const DescribeThirdTaskRunLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeThirdTaskRunLogOutcomeCallable DescribeThirdTaskRunLogCallable(const Model::DescribeThirdTaskRunLogRequest& request);

                /**
                 *数据质量概览页面表排行接口
                 * @param req DescribeTopTableStatRequest
                 * @return DescribeTopTableStatOutcome
                 */
                DescribeTopTableStatOutcome DescribeTopTableStat(const Model::DescribeTopTableStatRequest &request);
                void DescribeTopTableStatAsync(const Model::DescribeTopTableStatRequest& request, const DescribeTopTableStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopTableStatOutcomeCallable DescribeTopTableStatCallable(const Model::DescribeTopTableStatRequest& request);

                /**
                 *数据质量概览页面趋势变化接口
                 * @param req DescribeTrendStatRequest
                 * @return DescribeTrendStatOutcome
                 */
                DescribeTrendStatOutcome DescribeTrendStat(const Model::DescribeTrendStatRequest &request);
                void DescribeTrendStatAsync(const Model::DescribeTrendStatRequest& request, const DescribeTrendStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTrendStatOutcomeCallable DescribeTrendStatCallable(const Model::DescribeTrendStatRequest& request);

                /**
                 *根据文件夹查询工作流
                 * @param req DescribeWorkflowByFordIdsRequest
                 * @return DescribeWorkflowByFordIdsOutcome
                 */
                DescribeWorkflowByFordIdsOutcome DescribeWorkflowByFordIds(const Model::DescribeWorkflowByFordIdsRequest &request);
                void DescribeWorkflowByFordIdsAsync(const Model::DescribeWorkflowByFordIdsRequest& request, const DescribeWorkflowByFordIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkflowByFordIdsOutcomeCallable DescribeWorkflowByFordIdsCallable(const Model::DescribeWorkflowByFordIdsRequest& request);

                /**
                 *查询工作流画布
                 * @param req DescribeWorkflowCanvasInfoRequest
                 * @return DescribeWorkflowCanvasInfoOutcome
                 */
                DescribeWorkflowCanvasInfoOutcome DescribeWorkflowCanvasInfo(const Model::DescribeWorkflowCanvasInfoRequest &request);
                void DescribeWorkflowCanvasInfoAsync(const Model::DescribeWorkflowCanvasInfoRequest& request, const DescribeWorkflowCanvasInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkflowCanvasInfoOutcomeCallable DescribeWorkflowCanvasInfoCallable(const Model::DescribeWorkflowCanvasInfoRequest& request);

                /**
                 *查询工作流画布运行起止时间
                 * @param req DescribeWorkflowExecuteByIdRequest
                 * @return DescribeWorkflowExecuteByIdOutcome
                 */
                DescribeWorkflowExecuteByIdOutcome DescribeWorkflowExecuteById(const Model::DescribeWorkflowExecuteByIdRequest &request);
                void DescribeWorkflowExecuteByIdAsync(const Model::DescribeWorkflowExecuteByIdRequest& request, const DescribeWorkflowExecuteByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkflowExecuteByIdOutcomeCallable DescribeWorkflowExecuteByIdCallable(const Model::DescribeWorkflowExecuteByIdRequest& request);

                /**
                 *通过工作流id，查询工作流详情
                 * @param req DescribeWorkflowInfoByIdRequest
                 * @return DescribeWorkflowInfoByIdOutcome
                 */
                DescribeWorkflowInfoByIdOutcome DescribeWorkflowInfoById(const Model::DescribeWorkflowInfoByIdRequest &request);
                void DescribeWorkflowInfoByIdAsync(const Model::DescribeWorkflowInfoByIdRequest& request, const DescribeWorkflowInfoByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkflowInfoByIdOutcomeCallable DescribeWorkflowInfoByIdCallable(const Model::DescribeWorkflowInfoByIdRequest& request);

                /**
                 *根据项目id 获取项目下所有工作流列表
                 * @param req DescribeWorkflowListByProjectIdRequest
                 * @return DescribeWorkflowListByProjectIdOutcome
                 */
                DescribeWorkflowListByProjectIdOutcome DescribeWorkflowListByProjectId(const Model::DescribeWorkflowListByProjectIdRequest &request);
                void DescribeWorkflowListByProjectIdAsync(const Model::DescribeWorkflowListByProjectIdRequest& request, const DescribeWorkflowListByProjectIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkflowListByProjectIdOutcomeCallable DescribeWorkflowListByProjectIdCallable(const Model::DescribeWorkflowListByProjectIdRequest& request);

                /**
                 *获取工作流调度信息
                 * @param req DescribeWorkflowSchedulerInfoDsRequest
                 * @return DescribeWorkflowSchedulerInfoDsOutcome
                 */
                DescribeWorkflowSchedulerInfoDsOutcome DescribeWorkflowSchedulerInfoDs(const Model::DescribeWorkflowSchedulerInfoDsRequest &request);
                void DescribeWorkflowSchedulerInfoDsAsync(const Model::DescribeWorkflowSchedulerInfoDsRequest& request, const DescribeWorkflowSchedulerInfoDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkflowSchedulerInfoDsOutcomeCallable DescribeWorkflowSchedulerInfoDsCallable(const Model::DescribeWorkflowSchedulerInfoDsRequest& request);

                /**
                 *查询工作流任务数
                 * @param req DescribeWorkflowTaskCountRequest
                 * @return DescribeWorkflowTaskCountOutcome
                 */
                DescribeWorkflowTaskCountOutcome DescribeWorkflowTaskCount(const Model::DescribeWorkflowTaskCountRequest &request);
                void DescribeWorkflowTaskCountAsync(const Model::DescribeWorkflowTaskCountRequest& request, const DescribeWorkflowTaskCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkflowTaskCountOutcomeCallable DescribeWorkflowTaskCountCallable(const Model::DescribeWorkflowTaskCountRequest& request);

                /**
                 *实例诊断，用于诊断 INITIAL、DEPENDENCE、ALLOCATED、LAUNCHED、EVENT_LISTENING、BEFORE_ASPECT、EXPIRED、FAILED状态的实例
                 * @param req DiagnoseProRequest
                 * @return DiagnoseProOutcome
                 */
                DiagnoseProOutcome DiagnosePro(const Model::DiagnoseProRequest &request);
                void DiagnoseProAsync(const Model::DiagnoseProRequest& request, const DiagnoseProAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DiagnoseProOutcomeCallable DiagnoseProCallable(const Model::DiagnoseProRequest& request);

                /**
                 *禁用项目
                 * @param req DisableProjectRequest
                 * @return DisableProjectOutcome
                 */
                DisableProjectOutcome DisableProject(const Model::DisableProjectRequest &request);
                void DisableProjectAsync(const Model::DisableProjectRequest& request, const DisableProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableProjectOutcomeCallable DisableProjectCallable(const Model::DisableProjectRequest& request);

                /**
                 *按行下载日志信息
                 * @param req DownloadLogByLineRequest
                 * @return DownloadLogByLineOutcome
                 */
                DownloadLogByLineOutcome DownloadLogByLine(const Model::DownloadLogByLineRequest &request);
                void DownloadLogByLineAsync(const Model::DownloadLogByLineRequest& request, const DownloadLogByLineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DownloadLogByLineOutcomeCallable DownloadLogByLineCallable(const Model::DownloadLogByLineRequest& request);

                /**
                 *调试运行集成任务
                 * @param req DryRunDIOfflineTaskRequest
                 * @return DryRunDIOfflineTaskOutcome
                 */
                DryRunDIOfflineTaskOutcome DryRunDIOfflineTask(const Model::DryRunDIOfflineTaskRequest &request);
                void DryRunDIOfflineTaskAsync(const Model::DryRunDIOfflineTaskRequest& request, const DryRunDIOfflineTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DryRunDIOfflineTaskOutcomeCallable DryRunDIOfflineTaskCallable(const Model::DryRunDIOfflineTaskRequest& request);

                /**
                 *启用项目
                 * @param req EnableProjectRequest
                 * @return EnableProjectOutcome
                 */
                EnableProjectOutcome EnableProject(const Model::EnableProjectRequest &request);
                void EnableProjectAsync(const Model::EnableProjectRequest& request, const EnableProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableProjectOutcomeCallable EnableProjectCallable(const Model::EnableProjectRequest& request);

                /**
                 *编排空间批量操作页面查找全部的文件夹
                 * @param req FindAllFolderRequest
                 * @return FindAllFolderOutcome
                 */
                FindAllFolderOutcome FindAllFolder(const Model::FindAllFolderRequest &request);
                void FindAllFolderAsync(const Model::FindAllFolderRequest& request, const FindAllFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FindAllFolderOutcomeCallable FindAllFolderCallable(const Model::FindAllFolderRequest& request);

                /**
                 *任务运维-批量暂停任务
                 * @param req FreezeOpsTasksRequest
                 * @return FreezeOpsTasksOutcome
                 */
                FreezeOpsTasksOutcome FreezeOpsTasks(const Model::FreezeOpsTasksRequest &request);
                void FreezeOpsTasksAsync(const Model::FreezeOpsTasksRequest& request, const FreezeOpsTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FreezeOpsTasksOutcomeCallable FreezeOpsTasksCallable(const Model::FreezeOpsTasksRequest& request);

                /**
                 *暂停工作流下的所有任务
                 * @param req FreezeTasksByWorkflowIdsRequest
                 * @return FreezeTasksByWorkflowIdsOutcome
                 */
                FreezeTasksByWorkflowIdsOutcome FreezeTasksByWorkflowIds(const Model::FreezeTasksByWorkflowIdsRequest &request);
                void FreezeTasksByWorkflowIdsAsync(const Model::FreezeTasksByWorkflowIdsRequest& request, const FreezeTasksByWorkflowIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FreezeTasksByWorkflowIdsOutcomeCallable FreezeTasksByWorkflowIdsCallable(const Model::FreezeTasksByWorkflowIdsRequest& request);

                /**
                 *生成建hive表的sql
                 * @param req GenHiveTableDDLSqlRequest
                 * @return GenHiveTableDDLSqlOutcome
                 */
                GenHiveTableDDLSqlOutcome GenHiveTableDDLSql(const Model::GenHiveTableDDLSqlRequest &request);
                void GenHiveTableDDLSqlAsync(const Model::GenHiveTableDDLSqlRequest& request, const GenHiveTableDDLSqlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GenHiveTableDDLSqlOutcomeCallable GenHiveTableDDLSqlCallable(const Model::GenHiveTableDDLSqlRequest& request);

                /**
                 *获取批量操作错误日志
                 * @param req GetBatchDetailErrorLogRequest
                 * @return GetBatchDetailErrorLogOutcome
                 */
                GetBatchDetailErrorLogOutcome GetBatchDetailErrorLog(const Model::GetBatchDetailErrorLogRequest &request);
                void GetBatchDetailErrorLogAsync(const Model::GetBatchDetailErrorLogRequest& request, const GetBatchDetailErrorLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetBatchDetailErrorLogOutcomeCallable GetBatchDetailErrorLogCallable(const Model::GetBatchDetailErrorLogRequest& request);

                /**
                 *获取cos token
                 * @param req GetCosTokenRequest
                 * @return GetCosTokenOutcome
                 */
                GetCosTokenOutcome GetCosToken(const Model::GetCosTokenRequest &request);
                void GetCosTokenAsync(const Model::GetCosTokenRequest& request, const GetCosTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetCosTokenOutcomeCallable GetCosTokenCallable(const Model::GetCosTokenRequest& request);

                /**
                 *开发空间-获取数据开发脚本信息
                 * @param req GetFileInfoRequest
                 * @return GetFileInfoOutcome
                 */
                GetFileInfoOutcome GetFileInfo(const Model::GetFileInfoRequest &request);
                void GetFileInfoAsync(const Model::GetFileInfoRequest& request, const GetFileInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetFileInfoOutcomeCallable GetFileInfoCallable(const Model::GetFileInfoRequest& request);

                /**
                 *获取实例列表
                 * @param req GetInstanceLogRequest
                 * @return GetInstanceLogOutcome
                 */
                GetInstanceLogOutcome GetInstanceLog(const Model::GetInstanceLogRequest &request);
                void GetInstanceLogAsync(const Model::GetInstanceLogRequest& request, const GetInstanceLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetInstanceLogOutcomeCallable GetInstanceLogCallable(const Model::GetInstanceLogRequest& request);

                /**
                 *提取数据集成节点字段Schema
                 * @param req GetIntegrationNodeColumnSchemaRequest
                 * @return GetIntegrationNodeColumnSchemaOutcome
                 */
                GetIntegrationNodeColumnSchemaOutcome GetIntegrationNodeColumnSchema(const Model::GetIntegrationNodeColumnSchemaRequest &request);
                void GetIntegrationNodeColumnSchemaAsync(const Model::GetIntegrationNodeColumnSchemaRequest& request, const GetIntegrationNodeColumnSchemaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetIntegrationNodeColumnSchemaOutcomeCallable GetIntegrationNodeColumnSchemaCallable(const Model::GetIntegrationNodeColumnSchemaRequest& request);

                /**
                 *获取异步任务执行结果
                 * @param req GetJobStatusRequest
                 * @return GetJobStatusOutcome
                 */
                GetJobStatusOutcome GetJobStatus(const Model::GetJobStatusRequest &request);
                void GetJobStatusAsync(const Model::GetJobStatusRequest& request, const GetJobStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetJobStatusOutcomeCallable GetJobStatusCallable(const Model::GetJobStatusRequest& request);

                /**
                 *获取离线任务实例列表(新)
                 * @param req GetOfflineDIInstanceListRequest
                 * @return GetOfflineDIInstanceListOutcome
                 */
                GetOfflineDIInstanceListOutcome GetOfflineDIInstanceList(const Model::GetOfflineDIInstanceListRequest &request);
                void GetOfflineDIInstanceListAsync(const Model::GetOfflineDIInstanceListRequest& request, const GetOfflineDIInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetOfflineDIInstanceListOutcomeCallable GetOfflineDIInstanceListCallable(const Model::GetOfflineDIInstanceListRequest& request);

                /**
                 *获取离线任务实例
                 * @param req GetOfflineInstanceListRequest
                 * @return GetOfflineInstanceListOutcome
                 */
                GetOfflineInstanceListOutcome GetOfflineInstanceList(const Model::GetOfflineInstanceListRequest &request);
                void GetOfflineInstanceListAsync(const Model::GetOfflineInstanceListRequest& request, const GetOfflineInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetOfflineInstanceListOutcomeCallable GetOfflineInstanceListCallable(const Model::GetOfflineInstanceListRequest& request);

                /**
                 *获取带分页的任务脚本
                 * @param req GetPaginationTaskScriptRequest
                 * @return GetPaginationTaskScriptOutcome
                 */
                GetPaginationTaskScriptOutcome GetPaginationTaskScript(const Model::GetPaginationTaskScriptRequest &request);
                void GetPaginationTaskScriptAsync(const Model::GetPaginationTaskScriptRequest& request, const GetPaginationTaskScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetPaginationTaskScriptOutcomeCallable GetPaginationTaskScriptCallable(const Model::GetPaginationTaskScriptRequest& request);

                /**
                 *获取实例列表
                 * @param req GetTaskInstanceRequest
                 * @return GetTaskInstanceOutcome
                 */
                GetTaskInstanceOutcome GetTaskInstance(const Model::GetTaskInstanceRequest &request);
                void GetTaskInstanceAsync(const Model::GetTaskInstanceRequest& request, const GetTaskInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTaskInstanceOutcomeCallable GetTaskInstanceCallable(const Model::GetTaskInstanceRequest& request);

                /**
                 *资源管理-判断资源文件是否存在
                 * @param req JudgeResourceFileRequest
                 * @return JudgeResourceFileOutcome
                 */
                JudgeResourceFileOutcome JudgeResourceFile(const Model::JudgeResourceFileRequest &request);
                void JudgeResourceFileAsync(const Model::JudgeResourceFileRequest& request, const JudgeResourceFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                JudgeResourceFileOutcomeCallable JudgeResourceFileCallable(const Model::JudgeResourceFileRequest& request);

                /**
                 *按补录计划批量终止实例。
                 * @param req KillOpsMakePlanInstancesRequest
                 * @return KillOpsMakePlanInstancesOutcome
                 */
                KillOpsMakePlanInstancesOutcome KillOpsMakePlanInstances(const Model::KillOpsMakePlanInstancesRequest &request);
                void KillOpsMakePlanInstancesAsync(const Model::KillOpsMakePlanInstancesRequest& request, const KillOpsMakePlanInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                KillOpsMakePlanInstancesOutcomeCallable KillOpsMakePlanInstancesCallable(const Model::KillOpsMakePlanInstancesRequest& request);

                /**
                 *批量终止实例
                 * @param req KillScheduleInstancesRequest
                 * @return KillScheduleInstancesOutcome
                 */
                KillScheduleInstancesOutcome KillScheduleInstances(const Model::KillScheduleInstancesRequest &request);
                void KillScheduleInstancesAsync(const Model::KillScheduleInstancesRequest& request, const KillScheduleInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                KillScheduleInstancesOutcomeCallable KillScheduleInstancesCallable(const Model::KillScheduleInstancesRequest& request);

                /**
                 *获取批量操作详情列表
                 * @param req ListBatchDetailRequest
                 * @return ListBatchDetailOutcome
                 */
                ListBatchDetailOutcome ListBatchDetail(const Model::ListBatchDetailRequest &request);
                void ListBatchDetailAsync(const Model::ListBatchDetailRequest& request, const ListBatchDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListBatchDetailOutcomeCallable ListBatchDetailCallable(const Model::ListBatchDetailRequest& request);

                /**
                 *获取实例列表
                 * @param req ListInstancesRequest
                 * @return ListInstancesOutcome
                 */
                ListInstancesOutcome ListInstances(const Model::ListInstancesRequest &request);
                void ListInstancesAsync(const Model::ListInstancesRequest& request, const ListInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListInstancesOutcomeCallable ListInstancesCallable(const Model::ListInstancesRequest& request);

                /**
                 *锁定集成任务
                 * @param req LockIntegrationTaskRequest
                 * @return LockIntegrationTaskOutcome
                 */
                LockIntegrationTaskOutcome LockIntegrationTask(const Model::LockIntegrationTaskRequest &request);
                void LockIntegrationTaskAsync(const Model::LockIntegrationTaskRequest& request, const LockIntegrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                LockIntegrationTaskOutcomeCallable LockIntegrationTaskCallable(const Model::LockIntegrationTaskRequest& request);

                /**
                 *修改审批单状态
                 * @param req ModifyApproveStatusRequest
                 * @return ModifyApproveStatusOutcome
                 */
                ModifyApproveStatusOutcome ModifyApproveStatus(const Model::ModifyApproveStatusRequest &request);
                void ModifyApproveStatusAsync(const Model::ModifyApproveStatusRequest& request, const ModifyApproveStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApproveStatusOutcomeCallable ModifyApproveStatusCallable(const Model::ModifyApproveStatusRequest& request);

                /**
                 *修改数据源
                 * @param req ModifyDataSourceRequest
                 * @return ModifyDataSourceOutcome
                 */
                ModifyDataSourceOutcome ModifyDataSource(const Model::ModifyDataSourceRequest &request);
                void ModifyDataSourceAsync(const Model::ModifyDataSourceRequest& request, const ModifyDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDataSourceOutcomeCallable ModifyDataSourceCallable(const Model::ModifyDataSourceRequest& request);

                /**
                 *质量报告-修改维度权限
                 * @param req ModifyDimensionWeightRequest
                 * @return ModifyDimensionWeightOutcome
                 */
                ModifyDimensionWeightOutcome ModifyDimensionWeight(const Model::ModifyDimensionWeightRequest &request);
                void ModifyDimensionWeightAsync(const Model::ModifyDimensionWeightRequest& request, const ModifyDimensionWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDimensionWeightOutcomeCallable ModifyDimensionWeightCallable(const Model::ModifyDimensionWeightRequest& request);

                /**
                 *数据开发模块-文件夹更新
                 * @param req ModifyDsFolderRequest
                 * @return ModifyDsFolderOutcome
                 */
                ModifyDsFolderOutcome ModifyDsFolder(const Model::ModifyDsFolderRequest &request);
                void ModifyDsFolderAsync(const Model::ModifyDsFolderRequest& request, const ModifyDsFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDsFolderOutcomeCallable ModifyDsFolderCallable(const Model::ModifyDsFolderRequest& request);

                /**
                 *更新规则组执行策略
                 * @param req ModifyExecStrategyRequest
                 * @return ModifyExecStrategyOutcome
                 */
                ModifyExecStrategyOutcome ModifyExecStrategy(const Model::ModifyExecStrategyRequest &request);
                void ModifyExecStrategyAsync(const Model::ModifyExecStrategyRequest& request, const ModifyExecStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyExecStrategyOutcomeCallable ModifyExecStrategyCallable(const Model::ModifyExecStrategyRequest& request);

                /**
                 *更新集成节点
                 * @param req ModifyIntegrationNodeRequest
                 * @return ModifyIntegrationNodeOutcome
                 */
                ModifyIntegrationNodeOutcome ModifyIntegrationNode(const Model::ModifyIntegrationNodeRequest &request);
                void ModifyIntegrationNodeAsync(const Model::ModifyIntegrationNodeRequest& request, const ModifyIntegrationNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyIntegrationNodeOutcomeCallable ModifyIntegrationNodeCallable(const Model::ModifyIntegrationNodeRequest& request);

                /**
                 *更新集成任务
                 * @param req ModifyIntegrationTaskRequest
                 * @return ModifyIntegrationTaskOutcome
                 */
                ModifyIntegrationTaskOutcome ModifyIntegrationTask(const Model::ModifyIntegrationTaskRequest &request);
                void ModifyIntegrationTaskAsync(const Model::ModifyIntegrationTaskRequest& request, const ModifyIntegrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyIntegrationTaskOutcomeCallable ModifyIntegrationTaskCallable(const Model::ModifyIntegrationTaskRequest& request);

                /**
                 *更新监控状态
                 * @param req ModifyMonitorStatusRequest
                 * @return ModifyMonitorStatusOutcome
                 */
                ModifyMonitorStatusOutcome ModifyMonitorStatus(const Model::ModifyMonitorStatusRequest &request);
                void ModifyMonitorStatusAsync(const Model::ModifyMonitorStatusRequest& request, const ModifyMonitorStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMonitorStatusOutcomeCallable ModifyMonitorStatusCallable(const Model::ModifyMonitorStatusRequest& request);

                /**
                 *修改项目基础信息。
                 * @param req ModifyProjectRequest
                 * @return ModifyProjectOutcome
                 */
                ModifyProjectOutcome ModifyProject(const Model::ModifyProjectRequest &request);
                void ModifyProjectAsync(const Model::ModifyProjectRequest& request, const ModifyProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyProjectOutcomeCallable ModifyProjectCallable(const Model::ModifyProjectRequest& request);

                /**
                 *更新质量规则接口
                 * @param req ModifyRuleRequest
                 * @return ModifyRuleOutcome
                 */
                ModifyRuleOutcome ModifyRule(const Model::ModifyRuleRequest &request);
                void ModifyRuleAsync(const Model::ModifyRuleRequest& request, const ModifyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRuleOutcomeCallable ModifyRuleCallable(const Model::ModifyRuleRequest& request);

                /**
                 *更新规则组订阅信息
                 * @param req ModifyRuleGroupSubscriptionRequest
                 * @return ModifyRuleGroupSubscriptionOutcome
                 */
                ModifyRuleGroupSubscriptionOutcome ModifyRuleGroupSubscription(const Model::ModifyRuleGroupSubscriptionRequest &request);
                void ModifyRuleGroupSubscriptionAsync(const Model::ModifyRuleGroupSubscriptionRequest& request, const ModifyRuleGroupSubscriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRuleGroupSubscriptionOutcomeCallable ModifyRuleGroupSubscriptionCallable(const Model::ModifyRuleGroupSubscriptionRequest& request);

                /**
                 *编辑规则模板
                 * @param req ModifyRuleTemplateRequest
                 * @return ModifyRuleTemplateOutcome
                 */
                ModifyRuleTemplateOutcome ModifyRuleTemplate(const Model::ModifyRuleTemplateRequest &request);
                void ModifyRuleTemplateAsync(const Model::ModifyRuleTemplateRequest& request, const ModifyRuleTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRuleTemplateOutcomeCallable ModifyRuleTemplateCallable(const Model::ModifyRuleTemplateRequest& request);

                /**
                 *修改任务告警规则
                 * @param req ModifyTaskAlarmRegularRequest
                 * @return ModifyTaskAlarmRegularOutcome
                 */
                ModifyTaskAlarmRegularOutcome ModifyTaskAlarmRegular(const Model::ModifyTaskAlarmRegularRequest &request);
                void ModifyTaskAlarmRegularAsync(const Model::ModifyTaskAlarmRegularRequest& request, const ModifyTaskAlarmRegularAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTaskAlarmRegularOutcomeCallable ModifyTaskAlarmRegularCallable(const Model::ModifyTaskAlarmRegularRequest& request);

                /**
                 *<p style="color:red;">[注意：该版本只满足广州区部分白名单客户使用]</p>
更新任务。本接口已废弃，请使用接口ModifyTaskInfoDs。
                 * @param req ModifyTaskInfoRequest
                 * @return ModifyTaskInfoOutcome
                 */
                ModifyTaskInfoOutcome ModifyTaskInfo(const Model::ModifyTaskInfoRequest &request);
                void ModifyTaskInfoAsync(const Model::ModifyTaskInfoRequest& request, const ModifyTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTaskInfoOutcomeCallable ModifyTaskInfoCallable(const Model::ModifyTaskInfoRequest& request);

                /**
                 *更新任务Ds
                 * @param req ModifyTaskInfoDsRequest
                 * @return ModifyTaskInfoDsOutcome
                 */
                ModifyTaskInfoDsOutcome ModifyTaskInfoDs(const Model::ModifyTaskInfoDsRequest &request);
                void ModifyTaskInfoDsAsync(const Model::ModifyTaskInfoDsRequest& request, const ModifyTaskInfoDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTaskInfoDsOutcomeCallable ModifyTaskInfoDsCallable(const Model::ModifyTaskInfoDsRequest& request);

                /**
                 *<p style="color:red;">[注意：该版本只满足广州区部分白名单客户使用]</p>
添加父任务依赖。本接口已废弃，请使用接口ModifyTaskLinksDs。
                 * @param req ModifyTaskLinksRequest
                 * @return ModifyTaskLinksOutcome
                 */
                ModifyTaskLinksOutcome ModifyTaskLinks(const Model::ModifyTaskLinksRequest &request);
                void ModifyTaskLinksAsync(const Model::ModifyTaskLinksRequest& request, const ModifyTaskLinksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTaskLinksOutcomeCallable ModifyTaskLinksCallable(const Model::ModifyTaskLinksRequest& request);

                /**
                 *添加父任务依赖
                 * @param req ModifyTaskLinksDsRequest
                 * @return ModifyTaskLinksDsOutcome
                 */
                ModifyTaskLinksDsOutcome ModifyTaskLinksDs(const Model::ModifyTaskLinksDsRequest &request);
                void ModifyTaskLinksDsAsync(const Model::ModifyTaskLinksDsRequest& request, const ModifyTaskLinksDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTaskLinksDsOutcomeCallable ModifyTaskLinksDsCallable(const Model::ModifyTaskLinksDsRequest& request);

                /**
                 *重命名任务（任务编辑）
                 * @param req ModifyTaskNameRequest
                 * @return ModifyTaskNameOutcome
                 */
                ModifyTaskNameOutcome ModifyTaskName(const Model::ModifyTaskNameRequest &request);
                void ModifyTaskNameAsync(const Model::ModifyTaskNameRequest& request, const ModifyTaskNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTaskNameOutcomeCallable ModifyTaskNameCallable(const Model::ModifyTaskNameRequest& request);

                /**
                 *<p style="color:red;">[注意：该版本只满足广州区部分白名单客户使用]</p>
修改任务脚本。本接口已废弃，请使用接口ModifyTaskInfoDs。
                 * @param req ModifyTaskScriptRequest
                 * @return ModifyTaskScriptOutcome
                 */
                ModifyTaskScriptOutcome ModifyTaskScript(const Model::ModifyTaskScriptRequest &request);
                void ModifyTaskScriptAsync(const Model::ModifyTaskScriptRequest& request, const ModifyTaskScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTaskScriptOutcomeCallable ModifyTaskScriptCallable(const Model::ModifyTaskScriptRequest& request);

                /**
                 *更新工作流信息。本接口已废弃，请使用接口UpdateWorkflowInfo。
                 * @param req ModifyWorkflowInfoRequest
                 * @return ModifyWorkflowInfoOutcome
                 */
                ModifyWorkflowInfoOutcome ModifyWorkflowInfo(const Model::ModifyWorkflowInfoRequest &request);
                void ModifyWorkflowInfoAsync(const Model::ModifyWorkflowInfoRequest& request, const ModifyWorkflowInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWorkflowInfoOutcomeCallable ModifyWorkflowInfoCallable(const Model::ModifyWorkflowInfoRequest& request);

                /**
                 *更新工作流调度。本接口已废弃，请使用接口RenewWorkflowSchedulerInfoDs。
                 * @param req ModifyWorkflowScheduleRequest
                 * @return ModifyWorkflowScheduleOutcome
                 */
                ModifyWorkflowScheduleOutcome ModifyWorkflowSchedule(const Model::ModifyWorkflowScheduleRequest &request);
                void ModifyWorkflowScheduleAsync(const Model::ModifyWorkflowScheduleRequest& request, const ModifyWorkflowScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWorkflowScheduleOutcomeCallable ModifyWorkflowScheduleCallable(const Model::ModifyWorkflowScheduleRequest& request);

                /**
                 *编排空间-工作流-移动任务到工作流文件夹
                 * @param req MoveTasksToFolderRequest
                 * @return MoveTasksToFolderOutcome
                 */
                MoveTasksToFolderOutcome MoveTasksToFolder(const Model::MoveTasksToFolderRequest &request);
                void MoveTasksToFolderAsync(const Model::MoveTasksToFolderRequest& request, const MoveTasksToFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MoveTasksToFolderOutcomeCallable MoveTasksToFolderCallable(const Model::MoveTasksToFolderRequest& request);

                /**
                 *注册事件
                 * @param req RegisterDsEventRequest
                 * @return RegisterDsEventOutcome
                 */
                RegisterDsEventOutcome RegisterDsEvent(const Model::RegisterDsEventRequest &request);
                void RegisterDsEventAsync(const Model::RegisterDsEventRequest& request, const RegisterDsEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RegisterDsEventOutcomeCallable RegisterDsEventCallable(const Model::RegisterDsEventRequest& request);

                /**
                 *注册事件监听者
                 * @param req RegisterDsEventListenerRequest
                 * @return RegisterDsEventListenerOutcome
                 */
                RegisterDsEventListenerOutcome RegisterDsEventListener(const Model::RegisterDsEventListenerRequest &request);
                void RegisterDsEventListenerAsync(const Model::RegisterDsEventListenerRequest& request, const RegisterDsEventListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RegisterDsEventListenerOutcomeCallable RegisterDsEventListenerCallable(const Model::RegisterDsEventListenerRequest& request);

                /**
                 *<p style="color:red;">[注意：该版本只满足广州区部分白名单客户使用]</p>
注册事件。本接口已废弃，请使用接口RegisterDsEvent。
                 * @param req RegisterEventRequest
                 * @return RegisterEventOutcome
                 */
                RegisterEventOutcome RegisterEvent(const Model::RegisterEventRequest &request);
                void RegisterEventAsync(const Model::RegisterEventRequest& request, const RegisterEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RegisterEventOutcomeCallable RegisterEventCallable(const Model::RegisterEventRequest& request);

                /**
                 *<p style="color:red;">[注意：该版本只满足广州区部分白名单客户使用]</p>
注册事件监听器。本接口已废弃，请使用接口RegisterDsEventListener。
                 * @param req RegisterEventListenerRequest
                 * @return RegisterEventListenerOutcome
                 */
                RegisterEventListenerOutcome RegisterEventListener(const Model::RegisterEventListenerRequest &request);
                void RegisterEventListenerAsync(const Model::RegisterEventListenerRequest& request, const RegisterEventListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RegisterEventListenerOutcomeCallable RegisterEventListenerCallable(const Model::RegisterEventListenerRequest& request);

                /**
                 *移除database元数据
                 * @param req RemoveDatabaseRequest
                 * @return RemoveDatabaseOutcome
                 */
                RemoveDatabaseOutcome RemoveDatabase(const Model::RemoveDatabaseRequest &request);
                void RemoveDatabaseAsync(const Model::RemoveDatabaseRequest& request, const RemoveDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveDatabaseOutcomeCallable RemoveDatabaseCallable(const Model::RemoveDatabaseRequest& request);

                /**
                 *移除schema元数据
                 * @param req RemoveSchemaRequest
                 * @return RemoveSchemaOutcome
                 */
                RemoveSchemaOutcome RemoveSchema(const Model::RemoveSchemaRequest &request);
                void RemoveSchemaAsync(const Model::RemoveSchemaRequest& request, const RemoveSchemaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveSchemaOutcomeCallable RemoveSchemaCallable(const Model::RemoveSchemaRequest& request);

                /**
                 *移除table元数据
                 * @param req RemoveTableRequest
                 * @return RemoveTableOutcome
                 */
                RemoveTableOutcome RemoveTable(const Model::RemoveTableRequest &request);
                void RemoveTableAsync(const Model::RemoveTableRequest& request, const RemoveTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveTableOutcomeCallable RemoveTableCallable(const Model::RemoveTableRequest& request);

                /**
                 *删除编排空间工作流
                 * @param req RemoveWorkflowDsRequest
                 * @return RemoveWorkflowDsOutcome
                 */
                RemoveWorkflowDsOutcome RemoveWorkflowDs(const Model::RemoveWorkflowDsRequest &request);
                void RemoveWorkflowDsAsync(const Model::RemoveWorkflowDsRequest& request, const RemoveWorkflowDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveWorkflowDsOutcomeCallable RemoveWorkflowDsCallable(const Model::RemoveWorkflowDsRequest& request);

                /**
                 *批量更新工作流下任务责任人
                 * @param req RenewWorkflowOwnerDsRequest
                 * @return RenewWorkflowOwnerDsOutcome
                 */
                RenewWorkflowOwnerDsOutcome RenewWorkflowOwnerDs(const Model::RenewWorkflowOwnerDsRequest &request);
                void RenewWorkflowOwnerDsAsync(const Model::RenewWorkflowOwnerDsRequest& request, const RenewWorkflowOwnerDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewWorkflowOwnerDsOutcomeCallable RenewWorkflowOwnerDsCallable(const Model::RenewWorkflowOwnerDsRequest& request);

                /**
                 *更新工作流下任务调度信息
                 * @param req RenewWorkflowSchedulerInfoDsRequest
                 * @return RenewWorkflowSchedulerInfoDsOutcome
                 */
                RenewWorkflowSchedulerInfoDsOutcome RenewWorkflowSchedulerInfoDs(const Model::RenewWorkflowSchedulerInfoDsRequest &request);
                void RenewWorkflowSchedulerInfoDsAsync(const Model::RenewWorkflowSchedulerInfoDsRequest& request, const RenewWorkflowSchedulerInfoDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewWorkflowSchedulerInfoDsOutcomeCallable RenewWorkflowSchedulerInfoDsCallable(const Model::RenewWorkflowSchedulerInfoDsRequest& request);

                /**
                 *上报database元数据
                 * @param req ReportDatabaseRequest
                 * @return ReportDatabaseOutcome
                 */
                ReportDatabaseOutcome ReportDatabase(const Model::ReportDatabaseRequest &request);
                void ReportDatabaseAsync(const Model::ReportDatabaseRequest& request, const ReportDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReportDatabaseOutcomeCallable ReportDatabaseCallable(const Model::ReportDatabaseRequest& request);

                /**
                 *上报schema元数据
                 * @param req ReportSchemaRequest
                 * @return ReportSchemaOutcome
                 */
                ReportSchemaOutcome ReportSchema(const Model::ReportSchemaRequest &request);
                void ReportSchemaAsync(const Model::ReportSchemaRequest& request, const ReportSchemaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReportSchemaOutcomeCallable ReportSchemaCallable(const Model::ReportSchemaRequest& request);

                /**
                 *上报table元数据
                 * @param req ReportTableRequest
                 * @return ReportTableOutcome
                 */
                ReportTableOutcome ReportTable(const Model::ReportTableRequest &request);
                void ReportTableAsync(const Model::ReportTableRequest& request, const ReportTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReportTableOutcomeCallable ReportTableCallable(const Model::ReportTableRequest& request);

                /**
                 *血缘上报接口
                 * @param req ReportTaskLineageRequest
                 * @return ReportTaskLineageOutcome
                 */
                ReportTaskLineageOutcome ReportTaskLineage(const Model::ReportTaskLineageRequest &request);
                void ReportTaskLineageAsync(const Model::ReportTaskLineageRequest& request, const ReportTaskLineageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReportTaskLineageOutcomeCallable ReportTaskLineageCallable(const Model::ReportTaskLineageRequest& request);

                /**
                 *继续集成任务
                 * @param req ResumeIntegrationTaskRequest
                 * @return ResumeIntegrationTaskOutcome
                 */
                ResumeIntegrationTaskOutcome ResumeIntegrationTask(const Model::ResumeIntegrationTaskRequest &request);
                void ResumeIntegrationTaskAsync(const Model::ResumeIntegrationTaskRequest& request, const ResumeIntegrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResumeIntegrationTaskOutcomeCallable ResumeIntegrationTaskCallable(const Model::ResumeIntegrationTaskRequest& request);

                /**
                 *抢占锁定集成任务
                 * @param req RobAndLockIntegrationTaskRequest
                 * @return RobAndLockIntegrationTaskOutcome
                 */
                RobAndLockIntegrationTaskOutcome RobAndLockIntegrationTask(const Model::RobAndLockIntegrationTaskRequest &request);
                void RobAndLockIntegrationTaskAsync(const Model::RobAndLockIntegrationTaskRequest& request, const RobAndLockIntegrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RobAndLockIntegrationTaskOutcomeCallable RobAndLockIntegrationTaskCallable(const Model::RobAndLockIntegrationTaskRequest& request);

                /**
                 *实例批量置成功
                 * @param req RunForceSucScheduleInstancesRequest
                 * @return RunForceSucScheduleInstancesOutcome
                 */
                RunForceSucScheduleInstancesOutcome RunForceSucScheduleInstances(const Model::RunForceSucScheduleInstancesRequest &request);
                void RunForceSucScheduleInstancesAsync(const Model::RunForceSucScheduleInstancesRequest& request, const RunForceSucScheduleInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunForceSucScheduleInstancesOutcomeCallable RunForceSucScheduleInstancesCallable(const Model::RunForceSucScheduleInstancesRequest& request);

                /**
                 *实例批量重跑
                 * @param req RunRerunScheduleInstancesRequest
                 * @return RunRerunScheduleInstancesOutcome
                 */
                RunRerunScheduleInstancesOutcome RunRerunScheduleInstances(const Model::RunRerunScheduleInstancesRequest &request);
                void RunRerunScheduleInstancesAsync(const Model::RunRerunScheduleInstancesRequest& request, const RunRerunScheduleInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunRerunScheduleInstancesOutcomeCallable RunRerunScheduleInstancesCallable(const Model::RunRerunScheduleInstancesRequest& request);

                /**
                 *批量启动工作流
                 * @param req RunTasksByMultiWorkflowRequest
                 * @return RunTasksByMultiWorkflowOutcome
                 */
                RunTasksByMultiWorkflowOutcome RunTasksByMultiWorkflow(const Model::RunTasksByMultiWorkflowRequest &request);
                void RunTasksByMultiWorkflowAsync(const Model::RunTasksByMultiWorkflowRequest& request, const RunTasksByMultiWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunTasksByMultiWorkflowOutcomeCallable RunTasksByMultiWorkflowCallable(const Model::RunTasksByMultiWorkflowRequest& request);

                /**
                 *保存用户自定义函数
                 * @param req SaveCustomFunctionRequest
                 * @return SaveCustomFunctionOutcome
                 */
                SaveCustomFunctionOutcome SaveCustomFunction(const Model::SaveCustomFunctionRequest &request);
                void SaveCustomFunctionAsync(const Model::SaveCustomFunctionRequest& request, const SaveCustomFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SaveCustomFunctionOutcomeCallable SaveCustomFunctionCallable(const Model::SaveCustomFunctionRequest& request);

                /**
                 *<p style="color:red;">[注意：该版本只满足广州区部分白名单客户使用]</p>
设置任务告警，新建/更新告警信息（最新）
                 * @param req SetTaskAlarmNewRequest
                 * @return SetTaskAlarmNewOutcome
                 */
                SetTaskAlarmNewOutcome SetTaskAlarmNew(const Model::SetTaskAlarmNewRequest &request);
                void SetTaskAlarmNewAsync(const Model::SetTaskAlarmNewRequest& request, const SetTaskAlarmNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetTaskAlarmNewOutcomeCallable SetTaskAlarmNewCallable(const Model::SetTaskAlarmNewRequest& request);

                /**
                 *启动集成任务
                 * @param req StartIntegrationTaskRequest
                 * @return StartIntegrationTaskOutcome
                 */
                StartIntegrationTaskOutcome StartIntegrationTask(const Model::StartIntegrationTaskRequest &request);
                void StartIntegrationTaskAsync(const Model::StartIntegrationTaskRequest& request, const StartIntegrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartIntegrationTaskOutcomeCallable StartIntegrationTaskCallable(const Model::StartIntegrationTaskRequest& request);

                /**
                 *停止集成任务
                 * @param req StopIntegrationTaskRequest
                 * @return StopIntegrationTaskOutcome
                 */
                StopIntegrationTaskOutcome StopIntegrationTask(const Model::StopIntegrationTaskRequest &request);
                void StopIntegrationTaskAsync(const Model::StopIntegrationTaskRequest& request, const StopIntegrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopIntegrationTaskOutcomeCallable StopIntegrationTaskCallable(const Model::StopIntegrationTaskRequest& request);

                /**
                 *提交自定义函数
                 * @param req SubmitCustomFunctionRequest
                 * @return SubmitCustomFunctionOutcome
                 */
                SubmitCustomFunctionOutcome SubmitCustomFunction(const Model::SubmitCustomFunctionRequest &request);
                void SubmitCustomFunctionAsync(const Model::SubmitCustomFunctionRequest& request, const SubmitCustomFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitCustomFunctionOutcomeCallable SubmitCustomFunctionCallable(const Model::SubmitCustomFunctionRequest& request);

                /**
                 *即席分析提交SQL任务
                 * @param req SubmitSqlTaskRequest
                 * @return SubmitSqlTaskOutcome
                 */
                SubmitSqlTaskOutcome SubmitSqlTask(const Model::SubmitSqlTaskRequest &request);
                void SubmitSqlTaskAsync(const Model::SubmitSqlTaskRequest& request, const SubmitSqlTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitSqlTaskOutcomeCallable SubmitSqlTaskCallable(const Model::SubmitSqlTaskRequest& request);

                /**
                 *<p style="color:red;">[注意：该版本只满足广州区部分白名单客户使用]</p>
提交任务。本接口已废弃，请使用接口CreateTaskVersionDs。
                 * @param req SubmitTaskRequest
                 * @return SubmitTaskOutcome
                 */
                SubmitTaskOutcome SubmitTask(const Model::SubmitTaskRequest &request);
                void SubmitTaskAsync(const Model::SubmitTaskRequest& request, const SubmitTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitTaskOutcomeCallable SubmitTaskCallable(const Model::SubmitTaskRequest& request);

                /**
                 *无
                 * @param req SubmitTaskTestRunRequest
                 * @return SubmitTaskTestRunOutcome
                 */
                SubmitTaskTestRunOutcome SubmitTaskTestRun(const Model::SubmitTaskTestRunRequest &request);
                void SubmitTaskTestRunAsync(const Model::SubmitTaskTestRunRequest& request, const SubmitTaskTestRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitTaskTestRunOutcomeCallable SubmitTaskTestRunCallable(const Model::SubmitTaskTestRunRequest& request);

                /**
                 *提交工作流。本接口已废弃，请使用接口BatchCreateTaskVersionAsync。
                 * @param req SubmitWorkflowRequest
                 * @return SubmitWorkflowOutcome
                 */
                SubmitWorkflowOutcome SubmitWorkflow(const Model::SubmitWorkflowRequest &request);
                void SubmitWorkflowAsync(const Model::SubmitWorkflowRequest& request, const SubmitWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitWorkflowOutcomeCallable SubmitWorkflowCallable(const Model::SubmitWorkflowRequest& request);

                /**
                 *暂停集成任务
                 * @param req SuspendIntegrationTaskRequest
                 * @return SuspendIntegrationTaskOutcome
                 */
                SuspendIntegrationTaskOutcome SuspendIntegrationTask(const Model::SuspendIntegrationTaskRequest &request);
                void SuspendIntegrationTaskAsync(const Model::SuspendIntegrationTaskRequest& request, const SuspendIntegrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SuspendIntegrationTaskOutcomeCallable SuspendIntegrationTaskCallable(const Model::SuspendIntegrationTaskRequest& request);

                /**
                 *查询Inlong manager日志
                 * @param req TaskLogRequest
                 * @return TaskLogOutcome
                 */
                TaskLogOutcome TaskLog(const Model::TaskLogRequest &request);
                void TaskLogAsync(const Model::TaskLogRequest& request, const TaskLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TaskLogOutcomeCallable TaskLogCallable(const Model::TaskLogRequest& request);

                /**
                 *事件管理-触发事件
                 * @param req TriggerDsEventRequest
                 * @return TriggerDsEventOutcome
                 */
                TriggerDsEventOutcome TriggerDsEvent(const Model::TriggerDsEventRequest &request);
                void TriggerDsEventAsync(const Model::TriggerDsEventRequest& request, const TriggerDsEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TriggerDsEventOutcomeCallable TriggerDsEventCallable(const Model::TriggerDsEventRequest& request);

                /**
                 *<p style="color:red;">[注意：该版本只满足广州区部分白名单客户使用]</p>
触发事件。本接口已废弃，请使用接口TriggerDsEvent。
                 * @param req TriggerEventRequest
                 * @return TriggerEventOutcome
                 */
                TriggerEventOutcome TriggerEvent(const Model::TriggerEventRequest &request);
                void TriggerEventAsync(const Model::TriggerEventRequest& request, const TriggerEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TriggerEventOutcomeCallable TriggerEventCallable(const Model::TriggerEventRequest& request);

                /**
                 *手动任务触发运行
                 * @param req TriggerManualTasksRequest
                 * @return TriggerManualTasksOutcome
                 */
                TriggerManualTasksOutcome TriggerManualTasks(const Model::TriggerManualTasksRequest &request);
                void TriggerManualTasksAsync(const Model::TriggerManualTasksRequest& request, const TriggerManualTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TriggerManualTasksOutcomeCallable TriggerManualTasksCallable(const Model::TriggerManualTasksRequest& request);

                /**
                 *商业化版本：执行资源组/资源包解除绑定项目
                 * @param req UnboundProjectExecutorResourceRequest
                 * @return UnboundProjectExecutorResourceOutcome
                 */
                UnboundProjectExecutorResourceOutcome UnboundProjectExecutorResource(const Model::UnboundProjectExecutorResourceRequest &request);
                void UnboundProjectExecutorResourceAsync(const Model::UnboundProjectExecutorResourceRequest& request, const UnboundProjectExecutorResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnboundProjectExecutorResourceOutcomeCallable UnboundProjectExecutorResourceCallable(const Model::UnboundProjectExecutorResourceRequest& request);

                /**
                 *解锁集成任务
                 * @param req UnlockIntegrationTaskRequest
                 * @return UnlockIntegrationTaskOutcome
                 */
                UnlockIntegrationTaskOutcome UnlockIntegrationTask(const Model::UnlockIntegrationTaskRequest &request);
                void UnlockIntegrationTaskAsync(const Model::UnlockIntegrationTaskRequest& request, const UnlockIntegrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnlockIntegrationTaskOutcomeCallable UnlockIntegrationTaskCallable(const Model::UnlockIntegrationTaskRequest& request);

                /**
                 *更新模版
                 * @param req UpdateCodeTemplateRequest
                 * @return UpdateCodeTemplateOutcome
                 */
                UpdateCodeTemplateOutcome UpdateCodeTemplate(const Model::UpdateCodeTemplateRequest &request);
                void UpdateCodeTemplateAsync(const Model::UpdateCodeTemplateRequest& request, const UpdateCodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateCodeTemplateOutcomeCallable UpdateCodeTemplateCallable(const Model::UpdateCodeTemplateRequest& request);

                /**
                 *数语向wedata注册，提供自身cam角色信息，跳转域名、ip、端口信息等
                 * @param req UpdateDataModelRegistryInfoRequest
                 * @return UpdateDataModelRegistryInfoOutcome
                 */
                UpdateDataModelRegistryInfoOutcome UpdateDataModelRegistryInfo(const Model::UpdateDataModelRegistryInfoRequest &request);
                void UpdateDataModelRegistryInfoAsync(const Model::UpdateDataModelRegistryInfoRequest& request, const UpdateDataModelRegistryInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateDataModelRegistryInfoOutcomeCallable UpdateDataModelRegistryInfoCallable(const Model::UpdateDataModelRegistryInfoRequest& request);

                /**
                 *修改项目用户角色
                 * @param req UpdateProjectUserRoleRequest
                 * @return UpdateProjectUserRoleOutcome
                 */
                UpdateProjectUserRoleOutcome UpdateProjectUserRole(const Model::UpdateProjectUserRoleRequest &request);
                void UpdateProjectUserRoleAsync(const Model::UpdateProjectUserRoleRequest& request, const UpdateProjectUserRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateProjectUserRoleOutcomeCallable UpdateProjectUserRoleCallable(const Model::UpdateProjectUserRoleRequest& request);

                /**
                 *<p style="color:red;">[该接口为 ds 中开发]</p>
更新工作流（包括工作流基本信息与工作流参数）
                 * @param req UpdateWorkflowInfoRequest
                 * @return UpdateWorkflowInfoOutcome
                 */
                UpdateWorkflowInfoOutcome UpdateWorkflowInfo(const Model::UpdateWorkflowInfoRequest &request);
                void UpdateWorkflowInfoAsync(const Model::UpdateWorkflowInfoRequest& request, const UpdateWorkflowInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateWorkflowInfoOutcomeCallable UpdateWorkflowInfoCallable(const Model::UpdateWorkflowInfoRequest& request);

                /**
                 *修改工作流责任人。本接口已废弃，请使用接口RenewWorkflowOwnerDs。
                 * @param req UpdateWorkflowOwnerRequest
                 * @return UpdateWorkflowOwnerOutcome
                 */
                UpdateWorkflowOwnerOutcome UpdateWorkflowOwner(const Model::UpdateWorkflowOwnerRequest &request);
                void UpdateWorkflowOwnerAsync(const Model::UpdateWorkflowOwnerRequest& request, const UpdateWorkflowOwnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateWorkflowOwnerOutcomeCallable UpdateWorkflowOwnerCallable(const Model::UpdateWorkflowOwnerRequest& request);

                /**
                 *保存任务信息
                 * @param req UploadContentRequest
                 * @return UploadContentOutcome
                 */
                UploadContentOutcome UploadContent(const Model::UploadContentRequest &request);
                void UploadContentAsync(const Model::UploadContentRequest& request, const UploadContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadContentOutcomeCallable UploadContentCallable(const Model::UploadContentRequest& request);

                /**
                 *资源管理-上传资源
                 * @param req UploadResourceRequest
                 * @return UploadResourceOutcome
                 */
                UploadResourceOutcome UploadResource(const Model::UploadResourceRequest &request);
                void UploadResourceAsync(const Model::UploadResourceRequest& request, const UploadResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadResourceOutcomeCallable UploadResourceCallable(const Model::UploadResourceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_WEDATACLIENT_H_
