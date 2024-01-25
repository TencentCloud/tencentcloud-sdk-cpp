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

#ifndef TENCENTCLOUD_WEDATA_V20210820_WEDATACLIENT_H_
#define TENCENTCLOUD_WEDATA_V20210820_WEDATACLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/wedata/v20210820/model/AcquireLockRequest.h>
#include <tencentcloud/wedata/v20210820/model/AcquireLockResponse.h>
#include <tencentcloud/wedata/v20210820/model/AnalyzeDependentTasksRequest.h>
#include <tencentcloud/wedata/v20210820/model/AnalyzeDependentTasksResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchCreateIntegrationTaskAlarmsRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchCreateIntegrationTaskAlarmsResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchCreateTaskVersionAsyncRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchCreateTaskVersionAsyncResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchCreateTaskVersionDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchCreateTaskVersionDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchCreateVirtualTaskDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchCreateVirtualTaskDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchDeleteIntegrationTasksRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchDeleteIntegrationTasksResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchDeleteOpsTasksRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchDeleteOpsTasksResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchDeleteTasksDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchDeleteTasksDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchDeleteTasksDsAsyncRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchDeleteTasksDsAsyncResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchDeleteTasksNewRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchDeleteTasksNewResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchForceSuccessIntegrationTaskInstancesRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchForceSuccessIntegrationTaskInstancesResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchKillIntegrationTaskInstancesRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchKillIntegrationTaskInstancesResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchMakeUpIntegrationTasksRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchMakeUpIntegrationTasksResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchModifyOpsOwnersRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchModifyOpsOwnersResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchModifyOwnersNewRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchModifyOwnersNewResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchRerunIntegrationTaskInstancesRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchRerunIntegrationTaskInstancesResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchResumeIntegrationTasksRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchResumeIntegrationTasksResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchRunOpsTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchRunOpsTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchRunTasksDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchRunTasksDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchStartIntegrationTasksRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchStartIntegrationTasksResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchStopIntegrationTasksRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchStopIntegrationTasksResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchStopOpsTasksRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchStopOpsTasksResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchStopTasksNewRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchStopTasksNewResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchStopWorkflowsByIdsRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchStopWorkflowsByIdsResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchSuspendIntegrationTasksRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchSuspendIntegrationTasksResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchUpdateIntegrationTasksRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchUpdateIntegrationTasksResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchUpdateTasksDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchUpdateTasksDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/CheckAlarmRegularNameExistRequest.h>
#include <tencentcloud/wedata/v20210820/model/CheckAlarmRegularNameExistResponse.h>
#include <tencentcloud/wedata/v20210820/model/CheckDuplicateRuleNameRequest.h>
#include <tencentcloud/wedata/v20210820/model/CheckDuplicateRuleNameResponse.h>
#include <tencentcloud/wedata/v20210820/model/CheckDuplicateTemplateNameRequest.h>
#include <tencentcloud/wedata/v20210820/model/CheckDuplicateTemplateNameResponse.h>
#include <tencentcloud/wedata/v20210820/model/CheckIntegrationNodeNameExistsRequest.h>
#include <tencentcloud/wedata/v20210820/model/CheckIntegrationNodeNameExistsResponse.h>
#include <tencentcloud/wedata/v20210820/model/CheckIntegrationTaskNameExistsRequest.h>
#include <tencentcloud/wedata/v20210820/model/CheckIntegrationTaskNameExistsResponse.h>
#include <tencentcloud/wedata/v20210820/model/CheckTaskNameExistRequest.h>
#include <tencentcloud/wedata/v20210820/model/CheckTaskNameExistResponse.h>
#include <tencentcloud/wedata/v20210820/model/CheckTaskNameExistDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/CheckTaskNameExistDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/CheckTaskPriorityDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/CheckTaskPriorityDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/CommitExportTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/CommitExportTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/CommitIntegrationTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/CommitIntegrationTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/CommitRuleGroupExecResultRequest.h>
#include <tencentcloud/wedata/v20210820/model/CommitRuleGroupExecResultResponse.h>
#include <tencentcloud/wedata/v20210820/model/CommitRuleGroupTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/CommitRuleGroupTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/CopyTaskDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/CopyTaskDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/CountOpsInstanceStateRequest.h>
#include <tencentcloud/wedata/v20210820/model/CountOpsInstanceStateResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateBaselineRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateBaselineResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateCustomFunctionRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateCustomFunctionResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateDataSourceRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateDataSourceResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateDsFolderRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateDsFolderResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateFileVersionRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateFileVersionResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateFolderRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateFolderResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateHiveTableRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateHiveTableResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateHiveTableByDDLRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateHiveTableByDDLResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateInLongAgentRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateInLongAgentResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateIntegrationNodeRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateIntegrationNodeResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateIntegrationTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateIntegrationTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateOfflineTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateOfflineTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateOpsMakePlanRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateOpsMakePlanResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateOrUpdateResourceRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateOrUpdateResourceResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreatePathRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreatePathResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateProjectParamDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateProjectParamDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateResourcePathRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateResourcePathResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateRuleRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateRuleResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateRuleTemplateRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateRuleTemplateResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateScriptsImportTasksDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateScriptsImportTasksDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateTaskAlarmRegularRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateTaskAlarmRegularResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateTaskDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateTaskDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateTaskFolderRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateTaskFolderResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateTaskInParamDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateTaskInParamDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateTaskOutParamDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateTaskOutParamDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateTaskOutputRegistriesRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateTaskOutputRegistriesResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateTaskOutputRegistryRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateTaskOutputRegistryResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateTaskParamDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateTaskParamDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateTaskVersionDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateTaskVersionDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateWorkflowRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateWorkflowResponse.h>
#include <tencentcloud/wedata/v20210820/model/DagInstancesRequest.h>
#include <tencentcloud/wedata/v20210820/model/DagInstancesResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteBaselineRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteBaselineResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteCustomFunctionRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteCustomFunctionResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteDataSourcesRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteDataSourcesResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteDsEventListenerRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteDsEventListenerResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteDsEventPublisherRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteDsEventPublisherResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteDsFolderRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteDsFolderResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteFileRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteFileResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteFilePathRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteFilePathResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteFolderRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteFolderResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteInLongAgentRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteInLongAgentResponse.h>
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
#include <tencentcloud/wedata/v20210820/model/DeleteProjectParamVersionDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteProjectParamVersionDsResponse.h>
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
#include <tencentcloud/wedata/v20210820/model/DeleteTaskFolderRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteTaskFolderResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteTaskInParamDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteTaskInParamDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteTaskOutParamDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteTaskOutParamDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteTaskOutputRegistryRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteTaskOutputRegistryResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteWorkflowByIdRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteWorkflowByIdResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteWorkflowNewRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteWorkflowNewResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeAlarmEventsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeAlarmEventsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeAlarmReceiverRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeAlarmReceiverResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeAllByFolderNewRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeAllByFolderNewResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeAllTaskTypeRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeAllTaskTypeResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeAllUsedVersionSonRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeAllUsedVersionSonResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeApproveListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeApproveListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeApproveTypeListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeApproveTypeListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeBaselineAllTaskDagRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeBaselineAllTaskDagResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeBaselineByIdRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeBaselineByIdResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeBaselineInstanceDagRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeBaselineInstanceDagResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeBaselineInstanceGanttRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeBaselineInstanceGanttResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeBaselineInstancesRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeBaselineInstancesResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeBaselinesRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeBaselinesResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeBatchOperateTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeBatchOperateTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeBelongToRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeBelongToResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeBrowsingHistoriesRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeBrowsingHistoriesResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeChildrenDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeChildrenDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeChildrenPathTreesRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeChildrenPathTreesResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeClusterNamespaceListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeClusterNamespaceListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeCodeDetailRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeCodeDetailResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeCodeDetailV2Request.h>
#include <tencentcloud/wedata/v20210820/model/DescribeCodeDetailV2Response.h>
#include <tencentcloud/wedata/v20210820/model/DescribeCodeSearchAuditInfoRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeCodeSearchAuditInfoResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeCodeSearchAuditInfoV2Request.h>
#include <tencentcloud/wedata/v20210820/model/DescribeCodeSearchAuditInfoV2Response.h>
#include <tencentcloud/wedata/v20210820/model/DescribeCodeSearchCountRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeCodeSearchCountResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeCodeSearchInfoRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeCodeSearchInfoResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeCodeSearchInfoV2Request.h>
#include <tencentcloud/wedata/v20210820/model/DescribeCodeSearchInfoV2Response.h>
#include <tencentcloud/wedata/v20210820/model/DescribeColumnLineageRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeColumnLineageResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeColumnsMetaRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeColumnsMetaResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeCrontabTopNDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeCrontabTopNDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDataBasesRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDataBasesResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDataCheckStatRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDataCheckStatResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDataDevelopTaskTypeRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDataDevelopTaskTypeResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDataObjectsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDataObjectsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDataSourceInfoListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDataSourceInfoListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDataSourceListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDataSourceListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDataSourceWithoutInfoRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDataSourceWithoutInfoResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDataTypesRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDataTypesResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDatabaseInfoListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDatabaseInfoListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDatabaseMetasRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDatabaseMetasResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDatasourceRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDatasourceResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDependOpsTaskListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDependOpsTaskListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDependOpsTasksRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDependOpsTasksResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDependTaskListsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDependTaskListsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDependTasksDevDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDependTasksDevDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDependTasksNewRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDependTasksNewResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDependencyTasksForProjectCloneRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDependencyTasksForProjectCloneResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDependencyWorkflowForProjectCloneRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDependencyWorkflowForProjectCloneResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDevelopmentSpaceSupportTypeRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDevelopmentSpaceSupportTypeResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDiagnosticInfoByBaselineIdRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDiagnosticInfoByBaselineIdResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDimensionScoreRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDimensionScoreResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDrInstancePageRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDrInstancePageResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDrInstanceScriptContentRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDrInstanceScriptContentResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDrSonInstanceRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDrSonInstanceResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDsEventRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDsEventResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDsFolderTreeRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDsFolderTreeResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDsKettleServerFolderTreeRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDsKettleServerFolderTreeResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDsParentFolderTreeRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDsParentFolderTreeResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeEtlTaskTypeRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeEtlTaskTypeResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeEventRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeEventResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeEventCasesRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeEventCasesResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeEventConsumeTasksRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeEventConsumeTasksResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeEventDetailRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeEventDetailResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeEventIsAlarmTypesRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeEventIsAlarmTypesResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeEventListenerByTaskIdRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeEventListenerByTaskIdResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeEventListenerTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeEventListenerTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeEventTypesRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeEventTypesResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeEventsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeEventsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeExecStrategyRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeExecStrategyResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeFatherDatasourceInfoDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeFatherDatasourceInfoDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeFathersRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeFathersResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeFieldBasicInfoRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeFieldBasicInfoResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeFolderListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeFolderListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeFolderWorkflowListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeFolderWorkflowListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeFunctionKindsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeFunctionKindsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeFunctionTypesRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeFunctionTypesResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeImportableOfflineTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeImportableOfflineTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInLongAgentListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInLongAgentListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInLongAgentTaskListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInLongAgentTaskListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInLongAgentVpcListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInLongAgentVpcListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInLongTkeClusterListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInLongTkeClusterListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInfoTransByTypeIdDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInfoTransByTypeIdDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInstanceByCycleRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInstanceByCycleResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInstanceByCycleReportRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInstanceByCycleReportResponse.h>
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
#include <tencentcloud/wedata/v20210820/model/DescribeInstanceLogsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInstanceLogsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInstancesRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInstancesResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInstancesInfoWithTaskInfoRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInstancesInfoWithTaskInfoResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeIntegrationNodeRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeIntegrationNodeResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeIntegrationStatisticsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeIntegrationStatisticsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeIntegrationStatisticsAgentStatusRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeIntegrationStatisticsAgentStatusResponse.h>
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
#include <tencentcloud/wedata/v20210820/model/DescribeLockRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeLockResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeMonitorsByPageRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeMonitorsByPageResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeOfflineTaskTokenRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeOfflineTaskTokenResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeOperateOpsTaskDatasourceRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeOperateOpsTaskDatasourceResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeOperateOpsTaskDatasourceTypeRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeOperateOpsTaskDatasourceTypeResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeOperateOpsTasksRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeOperateOpsTasksResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeOperateTasksRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeOperateTasksResponse.h>
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
#include <tencentcloud/wedata/v20210820/model/DescribePathTreesRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribePathTreesResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeProdTasksRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeProdTasksResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeProjectRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeProjectResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeProjectParamDsPageRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeProjectParamDsPageResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeProjectParamVersionInfoDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeProjectParamVersionInfoDsResponse.h>
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
#include <tencentcloud/wedata/v20210820/model/DescribeRelatedInstancesRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRelatedInstancesResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeResourceManagePathTreesRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeResourceManagePathTreesResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleDataSourcesRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleDataSourcesResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleDimStatRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleDimStatResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleExecDetailRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleExecDetailResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleExecExportResultRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleExecExportResultResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleExecHistoryRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleExecHistoryResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleExecLogRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleExecLogResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleExecResultsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleExecResultsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleExecResultsByPageRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleExecResultsByPageResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleExecStatRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleExecStatResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleGroupRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleGroupResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleGroupExecResultsByPageRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleGroupExecResultsByPageResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleGroupExecResultsByPageWithoutAuthRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleGroupExecResultsByPageWithoutAuthResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleGroupSubscriptionRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleGroupSubscriptionResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleGroupTableRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleGroupTableResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleGroupsByPageRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleGroupsByPageResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleHistoryByPageRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleHistoryByPageResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleTablesByPageRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRuleTablesByPageResponse.h>
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
#include <tencentcloud/wedata/v20210820/model/DescribeScheduleInstanceRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeScheduleInstanceResponse.h>
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
#include <tencentcloud/wedata/v20210820/model/DescribeScriptsImportTaskTypeRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeScriptsImportTaskTypeResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeSonInstancesRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeSonInstancesResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeStandardRuleDetailInfoListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeStandardRuleDetailInfoListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeStatisticInstanceStatusTrendOpsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeStatisticInstanceStatusTrendOpsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeStreamTaskLogListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeStreamTaskLogListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeSuccessorOpsTaskInfosRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeSuccessorOpsTaskInfosResponse.h>
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
#include <tencentcloud/wedata/v20210820/model/DescribeTableQualityDetailsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTableQualityDetailsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTableSchemaInfoRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTableSchemaInfoResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTableScoreTrendRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTableScoreTrendResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskAlarmRegulationsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskAlarmRegulationsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskBindVirtualTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskBindVirtualTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskByCycleRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskByCycleResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskByCycleReportRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskByCycleReportResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskByStatusReportRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskByStatusReportResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskDetailRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskDetailResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskDetailDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskDetailDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskInstanceRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskInstanceResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskInstanceReportDetailRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskInstanceReportDetailResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskInstancesRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskInstancesResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskLatestRunTimeRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskLatestRunTimeResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskListByConditionDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskListByConditionDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskLockStatusRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskLockStatusResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskOutputRegistriesRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskOutputRegistriesResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskParentRunTimeRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskParentRunTimeResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskReportRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskReportResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskReportDetailListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskReportDetailListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskRunHistoryRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskRunHistoryResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskScriptRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskScriptResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskTypeByScriptTypeRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskTypeByScriptTypeResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTasksByPageRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTasksByPageResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTasksForProjectCloneRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTasksForProjectCloneResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTemplateDimCountRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTemplateDimCountResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTemplateHistoryRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTemplateHistoryResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeThirdTaskRunLogRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeThirdTaskRunLogResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTopTableStatRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTopTableStatResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTrendStatRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTrendStatResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeWorkflowCanvasInfoRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeWorkflowCanvasInfoResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeWorkflowCanvasInfoDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeWorkflowCanvasInfoDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeWorkflowCanvasOpLogsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeWorkflowCanvasOpLogsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeWorkflowExecuteByIdRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeWorkflowExecuteByIdResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeWorkflowForProjectCloneRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeWorkflowForProjectCloneResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeWorkflowInfoByIdRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeWorkflowInfoByIdResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeWorkflowListByProjectIdRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeWorkflowListByProjectIdResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeWorkflowOpsCanvasInfoRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeWorkflowOpsCanvasInfoResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeWorkflowSchedulerInfoDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeWorkflowSchedulerInfoDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeWorkflowTaskCountRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeWorkflowTaskCountResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeWorkflowTasksForProjectCloneRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeWorkflowTasksForProjectCloneResponse.h>
#include <tencentcloud/wedata/v20210820/model/DiagnosePlusRequest.h>
#include <tencentcloud/wedata/v20210820/model/DiagnosePlusResponse.h>
#include <tencentcloud/wedata/v20210820/model/DryRunDIOfflineTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/DryRunDIOfflineTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/EditBaselineRequest.h>
#include <tencentcloud/wedata/v20210820/model/EditBaselineResponse.h>
#include <tencentcloud/wedata/v20210820/model/ExportDsEventRequest.h>
#include <tencentcloud/wedata/v20210820/model/ExportDsEventResponse.h>
#include <tencentcloud/wedata/v20210820/model/ExportFilesRequest.h>
#include <tencentcloud/wedata/v20210820/model/ExportFilesResponse.h>
#include <tencentcloud/wedata/v20210820/model/ExportProjectParamDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/ExportProjectParamDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/ExportWorkflowXmlRequest.h>
#include <tencentcloud/wedata/v20210820/model/ExportWorkflowXmlResponse.h>
#include <tencentcloud/wedata/v20210820/model/ExportWorkflowZipRequest.h>
#include <tencentcloud/wedata/v20210820/model/ExportWorkflowZipResponse.h>
#include <tencentcloud/wedata/v20210820/model/FindAllFolderRequest.h>
#include <tencentcloud/wedata/v20210820/model/FindAllFolderResponse.h>
#include <tencentcloud/wedata/v20210820/model/FindDependTaskListDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/FindDependTaskListDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/FindDependTaskListsDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/FindDependTaskListsDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/FindFuzzyTasksDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/FindFuzzyTasksDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/ForceSucInstancesRequest.h>
#include <tencentcloud/wedata/v20210820/model/ForceSucInstancesResponse.h>
#include <tencentcloud/wedata/v20210820/model/ForceSucScheduleInstancesRequest.h>
#include <tencentcloud/wedata/v20210820/model/ForceSucScheduleInstancesResponse.h>
#include <tencentcloud/wedata/v20210820/model/FreezeOpsTasksRequest.h>
#include <tencentcloud/wedata/v20210820/model/FreezeOpsTasksResponse.h>
#include <tencentcloud/wedata/v20210820/model/FreezeTasksRequest.h>
#include <tencentcloud/wedata/v20210820/model/FreezeTasksResponse.h>
#include <tencentcloud/wedata/v20210820/model/FreezeTasksByMultiWorkflowRequest.h>
#include <tencentcloud/wedata/v20210820/model/FreezeTasksByMultiWorkflowResponse.h>
#include <tencentcloud/wedata/v20210820/model/FreezeTasksByWorkflowIdsRequest.h>
#include <tencentcloud/wedata/v20210820/model/FreezeTasksByWorkflowIdsResponse.h>
#include <tencentcloud/wedata/v20210820/model/GenHiveTableDDLSqlRequest.h>
#include <tencentcloud/wedata/v20210820/model/GenHiveTableDDLSqlResponse.h>
#include <tencentcloud/wedata/v20210820/model/GetAdvanceRunParamsRequest.h>
#include <tencentcloud/wedata/v20210820/model/GetAdvanceRunParamsResponse.h>
#include <tencentcloud/wedata/v20210820/model/GetBatchDetailErrorLogRequest.h>
#include <tencentcloud/wedata/v20210820/model/GetBatchDetailErrorLogResponse.h>
#include <tencentcloud/wedata/v20210820/model/GetCosTokenRequest.h>
#include <tencentcloud/wedata/v20210820/model/GetCosTokenResponse.h>
#include <tencentcloud/wedata/v20210820/model/GetFileInfoRequest.h>
#include <tencentcloud/wedata/v20210820/model/GetFileInfoResponse.h>
#include <tencentcloud/wedata/v20210820/model/GetIntegrationNodeColumnSchemaRequest.h>
#include <tencentcloud/wedata/v20210820/model/GetIntegrationNodeColumnSchemaResponse.h>
#include <tencentcloud/wedata/v20210820/model/GetOfflineDIInstanceListRequest.h>
#include <tencentcloud/wedata/v20210820/model/GetOfflineDIInstanceListResponse.h>
#include <tencentcloud/wedata/v20210820/model/GetOfflineInstanceListRequest.h>
#include <tencentcloud/wedata/v20210820/model/GetOfflineInstanceListResponse.h>
#include <tencentcloud/wedata/v20210820/model/GetPathTreesRequest.h>
#include <tencentcloud/wedata/v20210820/model/GetPathTreesResponse.h>
#include <tencentcloud/wedata/v20210820/model/GetResourcePathTreeRequest.h>
#include <tencentcloud/wedata/v20210820/model/GetResourcePathTreeResponse.h>
#include <tencentcloud/wedata/v20210820/model/GetRunSonListDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/GetRunSonListDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/GetTestRunTaskInstancesStatusInfoRequest.h>
#include <tencentcloud/wedata/v20210820/model/GetTestRunTaskInstancesStatusInfoResponse.h>
#include <tencentcloud/wedata/v20210820/model/HeartBeatRequest.h>
#include <tencentcloud/wedata/v20210820/model/HeartBeatResponse.h>
#include <tencentcloud/wedata/v20210820/model/ImportDsEventRequest.h>
#include <tencentcloud/wedata/v20210820/model/ImportDsEventResponse.h>
#include <tencentcloud/wedata/v20210820/model/ImportFilesRequest.h>
#include <tencentcloud/wedata/v20210820/model/ImportFilesResponse.h>
#include <tencentcloud/wedata/v20210820/model/ImportOfflineTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/ImportOfflineTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/ImportProjectParamDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/ImportProjectParamDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/JudgeTaskListenEventRequest.h>
#include <tencentcloud/wedata/v20210820/model/JudgeTaskListenEventResponse.h>
#include <tencentcloud/wedata/v20210820/model/KillInstancesRequest.h>
#include <tencentcloud/wedata/v20210820/model/KillInstancesResponse.h>
#include <tencentcloud/wedata/v20210820/model/KillOpsMakePlanInstancesRequest.h>
#include <tencentcloud/wedata/v20210820/model/KillOpsMakePlanInstancesResponse.h>
#include <tencentcloud/wedata/v20210820/model/KillScheduleInstancesRequest.h>
#include <tencentcloud/wedata/v20210820/model/KillScheduleInstancesResponse.h>
#include <tencentcloud/wedata/v20210820/model/ListBatchDetailRequest.h>
#include <tencentcloud/wedata/v20210820/model/ListBatchDetailResponse.h>
#include <tencentcloud/wedata/v20210820/model/ListBatchJobRequest.h>
#include <tencentcloud/wedata/v20210820/model/ListBatchJobResponse.h>
#include <tencentcloud/wedata/v20210820/model/LockIntegrationTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/LockIntegrationTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/MakeUpOpsTasksRequest.h>
#include <tencentcloud/wedata/v20210820/model/MakeUpOpsTasksResponse.h>
#include <tencentcloud/wedata/v20210820/model/MakeUpTasksByWorkflowRequest.h>
#include <tencentcloud/wedata/v20210820/model/MakeUpTasksByWorkflowResponse.h>
#include <tencentcloud/wedata/v20210820/model/MakeUpTasksNewRequest.h>
#include <tencentcloud/wedata/v20210820/model/MakeUpTasksNewResponse.h>
#include <tencentcloud/wedata/v20210820/model/MakeUpWorkflowNewRequest.h>
#include <tencentcloud/wedata/v20210820/model/MakeUpWorkflowNewResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyApproveStatusRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyApproveStatusResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyBaselineAlarmStatusRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyBaselineAlarmStatusResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyBaselineTaskAlarmStatusRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyBaselineTaskAlarmStatusResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyDataSourceRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyDataSourceResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyDimensionWeightRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyDimensionWeightResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyDsFolderRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyDsFolderResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyExecStrategyRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyExecStrategyResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyFolderRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyFolderResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyIntegrationNodeRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyIntegrationNodeResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyIntegrationTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyIntegrationTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyMonitorStatusRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyMonitorStatusResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyRuleRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyRuleResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyRuleGroupSubscriptionRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyRuleGroupSubscriptionResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyRuleTemplateRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyRuleTemplateResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyTaskAlarmRegularRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyTaskAlarmRegularResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyTaskFolderRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyTaskFolderResponse.h>
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
#include <tencentcloud/wedata/v20210820/model/ModifyTaskScriptDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyTaskScriptDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyWorkflowInfoRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyWorkflowInfoResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyWorkflowScheduleRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyWorkflowScheduleResponse.h>
#include <tencentcloud/wedata/v20210820/model/MoveFileRequest.h>
#include <tencentcloud/wedata/v20210820/model/MoveFileResponse.h>
#include <tencentcloud/wedata/v20210820/model/MoveTasksToFolderRequest.h>
#include <tencentcloud/wedata/v20210820/model/MoveTasksToFolderResponse.h>
#include <tencentcloud/wedata/v20210820/model/RegisterDsEventRequest.h>
#include <tencentcloud/wedata/v20210820/model/RegisterDsEventResponse.h>
#include <tencentcloud/wedata/v20210820/model/RegisterDsEventListenerRequest.h>
#include <tencentcloud/wedata/v20210820/model/RegisterDsEventListenerResponse.h>
#include <tencentcloud/wedata/v20210820/model/RegisterDsEventPublisherRequest.h>
#include <tencentcloud/wedata/v20210820/model/RegisterDsEventPublisherResponse.h>
#include <tencentcloud/wedata/v20210820/model/RegisterEventRequest.h>
#include <tencentcloud/wedata/v20210820/model/RegisterEventResponse.h>
#include <tencentcloud/wedata/v20210820/model/RegisterEventListenerRequest.h>
#include <tencentcloud/wedata/v20210820/model/RegisterEventListenerResponse.h>
#include <tencentcloud/wedata/v20210820/model/ReleaseLockRequest.h>
#include <tencentcloud/wedata/v20210820/model/ReleaseLockResponse.h>
#include <tencentcloud/wedata/v20210820/model/RemoveWorkflowDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/RemoveWorkflowDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/RenameFileRequest.h>
#include <tencentcloud/wedata/v20210820/model/RenameFileResponse.h>
#include <tencentcloud/wedata/v20210820/model/RenameResourceRequest.h>
#include <tencentcloud/wedata/v20210820/model/RenameResourceResponse.h>
#include <tencentcloud/wedata/v20210820/model/RenameResourceFileRequest.h>
#include <tencentcloud/wedata/v20210820/model/RenameResourceFileResponse.h>
#include <tencentcloud/wedata/v20210820/model/RenameTaskDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/RenameTaskDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/RenewWorkflowDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/RenewWorkflowDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/RenewWorkflowFolderDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/RenewWorkflowFolderDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/RenewWorkflowOwnerDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/RenewWorkflowOwnerDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/RenewWorkflowSchedulerInfoDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/RenewWorkflowSchedulerInfoDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/RerunInstancesRequest.h>
#include <tencentcloud/wedata/v20210820/model/RerunInstancesResponse.h>
#include <tencentcloud/wedata/v20210820/model/RerunOpsMakePlanInstancesRequest.h>
#include <tencentcloud/wedata/v20210820/model/RerunOpsMakePlanInstancesResponse.h>
#include <tencentcloud/wedata/v20210820/model/RerunScheduleInstancesRequest.h>
#include <tencentcloud/wedata/v20210820/model/RerunScheduleInstancesResponse.h>
#include <tencentcloud/wedata/v20210820/model/RestartInLongAgentRequest.h>
#include <tencentcloud/wedata/v20210820/model/RestartInLongAgentResponse.h>
#include <tencentcloud/wedata/v20210820/model/ResumeIntegrationTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/ResumeIntegrationTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/RobAndLockIntegrationTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/RobAndLockIntegrationTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/RunForceSucScheduleInstancesRequest.h>
#include <tencentcloud/wedata/v20210820/model/RunForceSucScheduleInstancesResponse.h>
#include <tencentcloud/wedata/v20210820/model/RunRerunScheduleInstancesRequest.h>
#include <tencentcloud/wedata/v20210820/model/RunRerunScheduleInstancesResponse.h>
#include <tencentcloud/wedata/v20210820/model/RunTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/RunTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/RunTasksByMultiWorkflowRequest.h>
#include <tencentcloud/wedata/v20210820/model/RunTasksByMultiWorkflowResponse.h>
#include <tencentcloud/wedata/v20210820/model/SaveCustomFunctionRequest.h>
#include <tencentcloud/wedata/v20210820/model/SaveCustomFunctionResponse.h>
#include <tencentcloud/wedata/v20210820/model/SavePositionsDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/SavePositionsDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/ScriptUsedByOtherTaskDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/ScriptUsedByOtherTaskDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/SetTaskAlarmNewRequest.h>
#include <tencentcloud/wedata/v20210820/model/SetTaskAlarmNewResponse.h>
#include <tencentcloud/wedata/v20210820/model/StartIntegrationTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/StartIntegrationTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/StopBaselineRequest.h>
#include <tencentcloud/wedata/v20210820/model/StopBaselineResponse.h>
#include <tencentcloud/wedata/v20210820/model/StopIntegrationTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/StopIntegrationTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/SubmitBaselineRequest.h>
#include <tencentcloud/wedata/v20210820/model/SubmitBaselineResponse.h>
#include <tencentcloud/wedata/v20210820/model/SubmitCustomFunctionRequest.h>
#include <tencentcloud/wedata/v20210820/model/SubmitCustomFunctionResponse.h>
#include <tencentcloud/wedata/v20210820/model/SubmitPySparkTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/SubmitPySparkTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/SubmitPythonTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/SubmitPythonTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/SubmitShellTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/SubmitShellTaskResponse.h>
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
#include <tencentcloud/wedata/v20210820/model/UnlockIntegrationTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/UnlockIntegrationTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/UpdateBatchTaskAdvancedSettingsRequest.h>
#include <tencentcloud/wedata/v20210820/model/UpdateBatchTaskAdvancedSettingsResponse.h>
#include <tencentcloud/wedata/v20210820/model/UpdateBatchTaskDatasourceRequest.h>
#include <tencentcloud/wedata/v20210820/model/UpdateBatchTaskDatasourceResponse.h>
#include <tencentcloud/wedata/v20210820/model/UpdateBatchTaskInChargeRequest.h>
#include <tencentcloud/wedata/v20210820/model/UpdateBatchTaskInChargeResponse.h>
#include <tencentcloud/wedata/v20210820/model/UpdateBatchTaskParameterRequest.h>
#include <tencentcloud/wedata/v20210820/model/UpdateBatchTaskParameterResponse.h>
#include <tencentcloud/wedata/v20210820/model/UpdateBatchTaskParamsRequest.h>
#include <tencentcloud/wedata/v20210820/model/UpdateBatchTaskParamsResponse.h>
#include <tencentcloud/wedata/v20210820/model/UpdateBatchTaskResourceGroupRequest.h>
#include <tencentcloud/wedata/v20210820/model/UpdateBatchTaskResourceGroupResponse.h>
#include <tencentcloud/wedata/v20210820/model/UpdateBatchTaskScheduleRequest.h>
#include <tencentcloud/wedata/v20210820/model/UpdateBatchTaskScheduleResponse.h>
#include <tencentcloud/wedata/v20210820/model/UpdateDsEventRequest.h>
#include <tencentcloud/wedata/v20210820/model/UpdateDsEventResponse.h>
#include <tencentcloud/wedata/v20210820/model/UpdateEventListenerRequest.h>
#include <tencentcloud/wedata/v20210820/model/UpdateEventListenerResponse.h>
#include <tencentcloud/wedata/v20210820/model/UpdateInLongAgentRequest.h>
#include <tencentcloud/wedata/v20210820/model/UpdateInLongAgentResponse.h>
#include <tencentcloud/wedata/v20210820/model/UpdateTaskDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/UpdateTaskDsResponse.h>
#include <tencentcloud/wedata/v20210820/model/UpdateWorkflowOwnerRequest.h>
#include <tencentcloud/wedata/v20210820/model/UpdateWorkflowOwnerResponse.h>
#include <tencentcloud/wedata/v20210820/model/UploadAdvanceRunParamsRequest.h>
#include <tencentcloud/wedata/v20210820/model/UploadAdvanceRunParamsResponse.h>
#include <tencentcloud/wedata/v20210820/model/UploadContentRequest.h>
#include <tencentcloud/wedata/v20210820/model/UploadContentResponse.h>
#include <tencentcloud/wedata/v20210820/model/UploadFilesDsRequest.h>
#include <tencentcloud/wedata/v20210820/model/UploadFilesDsResponse.h>
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

                typedef Outcome<Core::Error, Model::AcquireLockResponse> AcquireLockOutcome;
                typedef std::future<AcquireLockOutcome> AcquireLockOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::AcquireLockRequest&, AcquireLockOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AcquireLockAsyncHandler;
                typedef Outcome<Core::Error, Model::AnalyzeDependentTasksResponse> AnalyzeDependentTasksOutcome;
                typedef std::future<AnalyzeDependentTasksOutcome> AnalyzeDependentTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::AnalyzeDependentTasksRequest&, AnalyzeDependentTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AnalyzeDependentTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchCreateIntegrationTaskAlarmsResponse> BatchCreateIntegrationTaskAlarmsOutcome;
                typedef std::future<BatchCreateIntegrationTaskAlarmsOutcome> BatchCreateIntegrationTaskAlarmsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchCreateIntegrationTaskAlarmsRequest&, BatchCreateIntegrationTaskAlarmsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchCreateIntegrationTaskAlarmsAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchCreateTaskVersionAsyncResponse> BatchCreateTaskVersionAsyncOutcome;
                typedef std::future<BatchCreateTaskVersionAsyncOutcome> BatchCreateTaskVersionAsyncOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchCreateTaskVersionAsyncRequest&, BatchCreateTaskVersionAsyncOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchCreateTaskVersionAsyncAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchCreateTaskVersionDsResponse> BatchCreateTaskVersionDsOutcome;
                typedef std::future<BatchCreateTaskVersionDsOutcome> BatchCreateTaskVersionDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchCreateTaskVersionDsRequest&, BatchCreateTaskVersionDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchCreateTaskVersionDsAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchCreateVirtualTaskDsResponse> BatchCreateVirtualTaskDsOutcome;
                typedef std::future<BatchCreateVirtualTaskDsOutcome> BatchCreateVirtualTaskDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchCreateVirtualTaskDsRequest&, BatchCreateVirtualTaskDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchCreateVirtualTaskDsAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchDeleteIntegrationTasksResponse> BatchDeleteIntegrationTasksOutcome;
                typedef std::future<BatchDeleteIntegrationTasksOutcome> BatchDeleteIntegrationTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchDeleteIntegrationTasksRequest&, BatchDeleteIntegrationTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeleteIntegrationTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchDeleteOpsTasksResponse> BatchDeleteOpsTasksOutcome;
                typedef std::future<BatchDeleteOpsTasksOutcome> BatchDeleteOpsTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchDeleteOpsTasksRequest&, BatchDeleteOpsTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeleteOpsTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchDeleteTasksDsResponse> BatchDeleteTasksDsOutcome;
                typedef std::future<BatchDeleteTasksDsOutcome> BatchDeleteTasksDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchDeleteTasksDsRequest&, BatchDeleteTasksDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeleteTasksDsAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchDeleteTasksDsAsyncResponse> BatchDeleteTasksDsAsyncOutcome;
                typedef std::future<BatchDeleteTasksDsAsyncOutcome> BatchDeleteTasksDsAsyncOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchDeleteTasksDsAsyncRequest&, BatchDeleteTasksDsAsyncOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeleteTasksDsAsyncAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchDeleteTasksNewResponse> BatchDeleteTasksNewOutcome;
                typedef std::future<BatchDeleteTasksNewOutcome> BatchDeleteTasksNewOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchDeleteTasksNewRequest&, BatchDeleteTasksNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeleteTasksNewAsyncHandler;
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
                typedef Outcome<Core::Error, Model::BatchModifyOwnersNewResponse> BatchModifyOwnersNewOutcome;
                typedef std::future<BatchModifyOwnersNewOutcome> BatchModifyOwnersNewOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchModifyOwnersNewRequest&, BatchModifyOwnersNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchModifyOwnersNewAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchRerunIntegrationTaskInstancesResponse> BatchRerunIntegrationTaskInstancesOutcome;
                typedef std::future<BatchRerunIntegrationTaskInstancesOutcome> BatchRerunIntegrationTaskInstancesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchRerunIntegrationTaskInstancesRequest&, BatchRerunIntegrationTaskInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchRerunIntegrationTaskInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchResumeIntegrationTasksResponse> BatchResumeIntegrationTasksOutcome;
                typedef std::future<BatchResumeIntegrationTasksOutcome> BatchResumeIntegrationTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchResumeIntegrationTasksRequest&, BatchResumeIntegrationTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchResumeIntegrationTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchRunOpsTaskResponse> BatchRunOpsTaskOutcome;
                typedef std::future<BatchRunOpsTaskOutcome> BatchRunOpsTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchRunOpsTaskRequest&, BatchRunOpsTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchRunOpsTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchRunTasksDsResponse> BatchRunTasksDsOutcome;
                typedef std::future<BatchRunTasksDsOutcome> BatchRunTasksDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchRunTasksDsRequest&, BatchRunTasksDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchRunTasksDsAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchStartIntegrationTasksResponse> BatchStartIntegrationTasksOutcome;
                typedef std::future<BatchStartIntegrationTasksOutcome> BatchStartIntegrationTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchStartIntegrationTasksRequest&, BatchStartIntegrationTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchStartIntegrationTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchStopIntegrationTasksResponse> BatchStopIntegrationTasksOutcome;
                typedef std::future<BatchStopIntegrationTasksOutcome> BatchStopIntegrationTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchStopIntegrationTasksRequest&, BatchStopIntegrationTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchStopIntegrationTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchStopOpsTasksResponse> BatchStopOpsTasksOutcome;
                typedef std::future<BatchStopOpsTasksOutcome> BatchStopOpsTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchStopOpsTasksRequest&, BatchStopOpsTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchStopOpsTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchStopTasksNewResponse> BatchStopTasksNewOutcome;
                typedef std::future<BatchStopTasksNewOutcome> BatchStopTasksNewOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchStopTasksNewRequest&, BatchStopTasksNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchStopTasksNewAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchStopWorkflowsByIdsResponse> BatchStopWorkflowsByIdsOutcome;
                typedef std::future<BatchStopWorkflowsByIdsOutcome> BatchStopWorkflowsByIdsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchStopWorkflowsByIdsRequest&, BatchStopWorkflowsByIdsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchStopWorkflowsByIdsAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchSuspendIntegrationTasksResponse> BatchSuspendIntegrationTasksOutcome;
                typedef std::future<BatchSuspendIntegrationTasksOutcome> BatchSuspendIntegrationTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchSuspendIntegrationTasksRequest&, BatchSuspendIntegrationTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchSuspendIntegrationTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchUpdateIntegrationTasksResponse> BatchUpdateIntegrationTasksOutcome;
                typedef std::future<BatchUpdateIntegrationTasksOutcome> BatchUpdateIntegrationTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchUpdateIntegrationTasksRequest&, BatchUpdateIntegrationTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchUpdateIntegrationTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchUpdateTasksDsResponse> BatchUpdateTasksDsOutcome;
                typedef std::future<BatchUpdateTasksDsOutcome> BatchUpdateTasksDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchUpdateTasksDsRequest&, BatchUpdateTasksDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchUpdateTasksDsAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckAlarmRegularNameExistResponse> CheckAlarmRegularNameExistOutcome;
                typedef std::future<CheckAlarmRegularNameExistOutcome> CheckAlarmRegularNameExistOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CheckAlarmRegularNameExistRequest&, CheckAlarmRegularNameExistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckAlarmRegularNameExistAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckDuplicateRuleNameResponse> CheckDuplicateRuleNameOutcome;
                typedef std::future<CheckDuplicateRuleNameOutcome> CheckDuplicateRuleNameOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CheckDuplicateRuleNameRequest&, CheckDuplicateRuleNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckDuplicateRuleNameAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckDuplicateTemplateNameResponse> CheckDuplicateTemplateNameOutcome;
                typedef std::future<CheckDuplicateTemplateNameOutcome> CheckDuplicateTemplateNameOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CheckDuplicateTemplateNameRequest&, CheckDuplicateTemplateNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckDuplicateTemplateNameAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckIntegrationNodeNameExistsResponse> CheckIntegrationNodeNameExistsOutcome;
                typedef std::future<CheckIntegrationNodeNameExistsOutcome> CheckIntegrationNodeNameExistsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CheckIntegrationNodeNameExistsRequest&, CheckIntegrationNodeNameExistsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckIntegrationNodeNameExistsAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckIntegrationTaskNameExistsResponse> CheckIntegrationTaskNameExistsOutcome;
                typedef std::future<CheckIntegrationTaskNameExistsOutcome> CheckIntegrationTaskNameExistsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CheckIntegrationTaskNameExistsRequest&, CheckIntegrationTaskNameExistsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckIntegrationTaskNameExistsAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckTaskNameExistResponse> CheckTaskNameExistOutcome;
                typedef std::future<CheckTaskNameExistOutcome> CheckTaskNameExistOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CheckTaskNameExistRequest&, CheckTaskNameExistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckTaskNameExistAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckTaskNameExistDsResponse> CheckTaskNameExistDsOutcome;
                typedef std::future<CheckTaskNameExistDsOutcome> CheckTaskNameExistDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CheckTaskNameExistDsRequest&, CheckTaskNameExistDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckTaskNameExistDsAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckTaskPriorityDsResponse> CheckTaskPriorityDsOutcome;
                typedef std::future<CheckTaskPriorityDsOutcome> CheckTaskPriorityDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CheckTaskPriorityDsRequest&, CheckTaskPriorityDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckTaskPriorityDsAsyncHandler;
                typedef Outcome<Core::Error, Model::CommitExportTaskResponse> CommitExportTaskOutcome;
                typedef std::future<CommitExportTaskOutcome> CommitExportTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CommitExportTaskRequest&, CommitExportTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CommitExportTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CommitIntegrationTaskResponse> CommitIntegrationTaskOutcome;
                typedef std::future<CommitIntegrationTaskOutcome> CommitIntegrationTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CommitIntegrationTaskRequest&, CommitIntegrationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CommitIntegrationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CommitRuleGroupExecResultResponse> CommitRuleGroupExecResultOutcome;
                typedef std::future<CommitRuleGroupExecResultOutcome> CommitRuleGroupExecResultOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CommitRuleGroupExecResultRequest&, CommitRuleGroupExecResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CommitRuleGroupExecResultAsyncHandler;
                typedef Outcome<Core::Error, Model::CommitRuleGroupTaskResponse> CommitRuleGroupTaskOutcome;
                typedef std::future<CommitRuleGroupTaskOutcome> CommitRuleGroupTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CommitRuleGroupTaskRequest&, CommitRuleGroupTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CommitRuleGroupTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CopyTaskDsResponse> CopyTaskDsOutcome;
                typedef std::future<CopyTaskDsOutcome> CopyTaskDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CopyTaskDsRequest&, CopyTaskDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CopyTaskDsAsyncHandler;
                typedef Outcome<Core::Error, Model::CountOpsInstanceStateResponse> CountOpsInstanceStateOutcome;
                typedef std::future<CountOpsInstanceStateOutcome> CountOpsInstanceStateOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CountOpsInstanceStateRequest&, CountOpsInstanceStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CountOpsInstanceStateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBaselineResponse> CreateBaselineOutcome;
                typedef std::future<CreateBaselineOutcome> CreateBaselineOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateBaselineRequest&, CreateBaselineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBaselineAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCustomFunctionResponse> CreateCustomFunctionOutcome;
                typedef std::future<CreateCustomFunctionOutcome> CreateCustomFunctionOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateCustomFunctionRequest&, CreateCustomFunctionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustomFunctionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDataSourceResponse> CreateDataSourceOutcome;
                typedef std::future<CreateDataSourceOutcome> CreateDataSourceOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateDataSourceRequest&, CreateDataSourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDataSourceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDsFolderResponse> CreateDsFolderOutcome;
                typedef std::future<CreateDsFolderOutcome> CreateDsFolderOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateDsFolderRequest&, CreateDsFolderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDsFolderAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFileVersionResponse> CreateFileVersionOutcome;
                typedef std::future<CreateFileVersionOutcome> CreateFileVersionOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateFileVersionRequest&, CreateFileVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFileVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFolderResponse> CreateFolderOutcome;
                typedef std::future<CreateFolderOutcome> CreateFolderOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateFolderRequest&, CreateFolderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFolderAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateHiveTableResponse> CreateHiveTableOutcome;
                typedef std::future<CreateHiveTableOutcome> CreateHiveTableOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateHiveTableRequest&, CreateHiveTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateHiveTableAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateHiveTableByDDLResponse> CreateHiveTableByDDLOutcome;
                typedef std::future<CreateHiveTableByDDLOutcome> CreateHiveTableByDDLOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateHiveTableByDDLRequest&, CreateHiveTableByDDLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateHiveTableByDDLAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInLongAgentResponse> CreateInLongAgentOutcome;
                typedef std::future<CreateInLongAgentOutcome> CreateInLongAgentOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateInLongAgentRequest&, CreateInLongAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInLongAgentAsyncHandler;
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
                typedef Outcome<Core::Error, Model::CreateOrUpdateResourceResponse> CreateOrUpdateResourceOutcome;
                typedef std::future<CreateOrUpdateResourceOutcome> CreateOrUpdateResourceOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateOrUpdateResourceRequest&, CreateOrUpdateResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrUpdateResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePathResponse> CreatePathOutcome;
                typedef std::future<CreatePathOutcome> CreatePathOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreatePathRequest&, CreatePathOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePathAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateProjectParamDsResponse> CreateProjectParamDsOutcome;
                typedef std::future<CreateProjectParamDsOutcome> CreateProjectParamDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateProjectParamDsRequest&, CreateProjectParamDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProjectParamDsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateResourcePathResponse> CreateResourcePathOutcome;
                typedef std::future<CreateResourcePathOutcome> CreateResourcePathOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateResourcePathRequest&, CreateResourcePathOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateResourcePathAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRuleResponse> CreateRuleOutcome;
                typedef std::future<CreateRuleOutcome> CreateRuleOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateRuleRequest&, CreateRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRuleTemplateResponse> CreateRuleTemplateOutcome;
                typedef std::future<CreateRuleTemplateOutcome> CreateRuleTemplateOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateRuleTemplateRequest&, CreateRuleTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRuleTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateScriptsImportTasksDsResponse> CreateScriptsImportTasksDsOutcome;
                typedef std::future<CreateScriptsImportTasksDsOutcome> CreateScriptsImportTasksDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateScriptsImportTasksDsRequest&, CreateScriptsImportTasksDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateScriptsImportTasksDsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTaskResponse> CreateTaskOutcome;
                typedef std::future<CreateTaskOutcome> CreateTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateTaskRequest&, CreateTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTaskAlarmRegularResponse> CreateTaskAlarmRegularOutcome;
                typedef std::future<CreateTaskAlarmRegularOutcome> CreateTaskAlarmRegularOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateTaskAlarmRegularRequest&, CreateTaskAlarmRegularOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTaskAlarmRegularAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTaskDsResponse> CreateTaskDsOutcome;
                typedef std::future<CreateTaskDsOutcome> CreateTaskDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateTaskDsRequest&, CreateTaskDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTaskDsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTaskFolderResponse> CreateTaskFolderOutcome;
                typedef std::future<CreateTaskFolderOutcome> CreateTaskFolderOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateTaskFolderRequest&, CreateTaskFolderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTaskFolderAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTaskInParamDsResponse> CreateTaskInParamDsOutcome;
                typedef std::future<CreateTaskInParamDsOutcome> CreateTaskInParamDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateTaskInParamDsRequest&, CreateTaskInParamDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTaskInParamDsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTaskOutParamDsResponse> CreateTaskOutParamDsOutcome;
                typedef std::future<CreateTaskOutParamDsOutcome> CreateTaskOutParamDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateTaskOutParamDsRequest&, CreateTaskOutParamDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTaskOutParamDsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTaskOutputRegistriesResponse> CreateTaskOutputRegistriesOutcome;
                typedef std::future<CreateTaskOutputRegistriesOutcome> CreateTaskOutputRegistriesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateTaskOutputRegistriesRequest&, CreateTaskOutputRegistriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTaskOutputRegistriesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTaskOutputRegistryResponse> CreateTaskOutputRegistryOutcome;
                typedef std::future<CreateTaskOutputRegistryOutcome> CreateTaskOutputRegistryOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateTaskOutputRegistryRequest&, CreateTaskOutputRegistryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTaskOutputRegistryAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTaskParamDsResponse> CreateTaskParamDsOutcome;
                typedef std::future<CreateTaskParamDsOutcome> CreateTaskParamDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateTaskParamDsRequest&, CreateTaskParamDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTaskParamDsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTaskVersionDsResponse> CreateTaskVersionDsOutcome;
                typedef std::future<CreateTaskVersionDsOutcome> CreateTaskVersionDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateTaskVersionDsRequest&, CreateTaskVersionDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTaskVersionDsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWorkflowResponse> CreateWorkflowOutcome;
                typedef std::future<CreateWorkflowOutcome> CreateWorkflowOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateWorkflowRequest&, CreateWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWorkflowAsyncHandler;
                typedef Outcome<Core::Error, Model::DagInstancesResponse> DagInstancesOutcome;
                typedef std::future<DagInstancesOutcome> DagInstancesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DagInstancesRequest&, DagInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DagInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBaselineResponse> DeleteBaselineOutcome;
                typedef std::future<DeleteBaselineOutcome> DeleteBaselineOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteBaselineRequest&, DeleteBaselineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBaselineAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCustomFunctionResponse> DeleteCustomFunctionOutcome;
                typedef std::future<DeleteCustomFunctionOutcome> DeleteCustomFunctionOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteCustomFunctionRequest&, DeleteCustomFunctionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomFunctionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDataSourcesResponse> DeleteDataSourcesOutcome;
                typedef std::future<DeleteDataSourcesOutcome> DeleteDataSourcesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteDataSourcesRequest&, DeleteDataSourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDataSourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDsEventListenerResponse> DeleteDsEventListenerOutcome;
                typedef std::future<DeleteDsEventListenerOutcome> DeleteDsEventListenerOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteDsEventListenerRequest&, DeleteDsEventListenerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDsEventListenerAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDsEventPublisherResponse> DeleteDsEventPublisherOutcome;
                typedef std::future<DeleteDsEventPublisherOutcome> DeleteDsEventPublisherOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteDsEventPublisherRequest&, DeleteDsEventPublisherOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDsEventPublisherAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDsFolderResponse> DeleteDsFolderOutcome;
                typedef std::future<DeleteDsFolderOutcome> DeleteDsFolderOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteDsFolderRequest&, DeleteDsFolderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDsFolderAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteFileResponse> DeleteFileOutcome;
                typedef std::future<DeleteFileOutcome> DeleteFileOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteFileRequest&, DeleteFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFileAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteFilePathResponse> DeleteFilePathOutcome;
                typedef std::future<DeleteFilePathOutcome> DeleteFilePathOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteFilePathRequest&, DeleteFilePathOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFilePathAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteFolderResponse> DeleteFolderOutcome;
                typedef std::future<DeleteFolderOutcome> DeleteFolderOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteFolderRequest&, DeleteFolderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFolderAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteInLongAgentResponse> DeleteInLongAgentOutcome;
                typedef std::future<DeleteInLongAgentOutcome> DeleteInLongAgentOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteInLongAgentRequest&, DeleteInLongAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInLongAgentAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DeleteProjectParamVersionDsResponse> DeleteProjectParamVersionDsOutcome;
                typedef std::future<DeleteProjectParamVersionDsOutcome> DeleteProjectParamVersionDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteProjectParamVersionDsRequest&, DeleteProjectParamVersionDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProjectParamVersionDsAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DeleteTaskFolderResponse> DeleteTaskFolderOutcome;
                typedef std::future<DeleteTaskFolderOutcome> DeleteTaskFolderOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteTaskFolderRequest&, DeleteTaskFolderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTaskFolderAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTaskInParamDsResponse> DeleteTaskInParamDsOutcome;
                typedef std::future<DeleteTaskInParamDsOutcome> DeleteTaskInParamDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteTaskInParamDsRequest&, DeleteTaskInParamDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTaskInParamDsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTaskOutParamDsResponse> DeleteTaskOutParamDsOutcome;
                typedef std::future<DeleteTaskOutParamDsOutcome> DeleteTaskOutParamDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteTaskOutParamDsRequest&, DeleteTaskOutParamDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTaskOutParamDsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTaskOutputRegistryResponse> DeleteTaskOutputRegistryOutcome;
                typedef std::future<DeleteTaskOutputRegistryOutcome> DeleteTaskOutputRegistryOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteTaskOutputRegistryRequest&, DeleteTaskOutputRegistryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTaskOutputRegistryAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWorkflowByIdResponse> DeleteWorkflowByIdOutcome;
                typedef std::future<DeleteWorkflowByIdOutcome> DeleteWorkflowByIdOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteWorkflowByIdRequest&, DeleteWorkflowByIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWorkflowByIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWorkflowNewResponse> DeleteWorkflowNewOutcome;
                typedef std::future<DeleteWorkflowNewOutcome> DeleteWorkflowNewOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteWorkflowNewRequest&, DeleteWorkflowNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWorkflowNewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmEventsResponse> DescribeAlarmEventsOutcome;
                typedef std::future<DescribeAlarmEventsOutcome> DescribeAlarmEventsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeAlarmEventsRequest&, DescribeAlarmEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmReceiverResponse> DescribeAlarmReceiverOutcome;
                typedef std::future<DescribeAlarmReceiverOutcome> DescribeAlarmReceiverOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeAlarmReceiverRequest&, DescribeAlarmReceiverOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmReceiverAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAllByFolderNewResponse> DescribeAllByFolderNewOutcome;
                typedef std::future<DescribeAllByFolderNewOutcome> DescribeAllByFolderNewOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeAllByFolderNewRequest&, DescribeAllByFolderNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllByFolderNewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAllTaskTypeResponse> DescribeAllTaskTypeOutcome;
                typedef std::future<DescribeAllTaskTypeOutcome> DescribeAllTaskTypeOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeAllTaskTypeRequest&, DescribeAllTaskTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllTaskTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAllUsedVersionSonResponse> DescribeAllUsedVersionSonOutcome;
                typedef std::future<DescribeAllUsedVersionSonOutcome> DescribeAllUsedVersionSonOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeAllUsedVersionSonRequest&, DescribeAllUsedVersionSonOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllUsedVersionSonAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApproveListResponse> DescribeApproveListOutcome;
                typedef std::future<DescribeApproveListOutcome> DescribeApproveListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeApproveListRequest&, DescribeApproveListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApproveListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApproveTypeListResponse> DescribeApproveTypeListOutcome;
                typedef std::future<DescribeApproveTypeListOutcome> DescribeApproveTypeListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeApproveTypeListRequest&, DescribeApproveTypeListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApproveTypeListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineAllTaskDagResponse> DescribeBaselineAllTaskDagOutcome;
                typedef std::future<DescribeBaselineAllTaskDagOutcome> DescribeBaselineAllTaskDagOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeBaselineAllTaskDagRequest&, DescribeBaselineAllTaskDagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineAllTaskDagAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineByIdResponse> DescribeBaselineByIdOutcome;
                typedef std::future<DescribeBaselineByIdOutcome> DescribeBaselineByIdOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeBaselineByIdRequest&, DescribeBaselineByIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineByIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineInstanceDagResponse> DescribeBaselineInstanceDagOutcome;
                typedef std::future<DescribeBaselineInstanceDagOutcome> DescribeBaselineInstanceDagOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeBaselineInstanceDagRequest&, DescribeBaselineInstanceDagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineInstanceDagAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineInstanceGanttResponse> DescribeBaselineInstanceGanttOutcome;
                typedef std::future<DescribeBaselineInstanceGanttOutcome> DescribeBaselineInstanceGanttOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeBaselineInstanceGanttRequest&, DescribeBaselineInstanceGanttOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineInstanceGanttAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineInstancesResponse> DescribeBaselineInstancesOutcome;
                typedef std::future<DescribeBaselineInstancesOutcome> DescribeBaselineInstancesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeBaselineInstancesRequest&, DescribeBaselineInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselinesResponse> DescribeBaselinesOutcome;
                typedef std::future<DescribeBaselinesOutcome> DescribeBaselinesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeBaselinesRequest&, DescribeBaselinesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselinesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBatchOperateTaskResponse> DescribeBatchOperateTaskOutcome;
                typedef std::future<DescribeBatchOperateTaskOutcome> DescribeBatchOperateTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeBatchOperateTaskRequest&, DescribeBatchOperateTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBatchOperateTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBelongToResponse> DescribeBelongToOutcome;
                typedef std::future<DescribeBelongToOutcome> DescribeBelongToOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeBelongToRequest&, DescribeBelongToOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBelongToAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBrowsingHistoriesResponse> DescribeBrowsingHistoriesOutcome;
                typedef std::future<DescribeBrowsingHistoriesOutcome> DescribeBrowsingHistoriesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeBrowsingHistoriesRequest&, DescribeBrowsingHistoriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBrowsingHistoriesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeChildrenDsResponse> DescribeChildrenDsOutcome;
                typedef std::future<DescribeChildrenDsOutcome> DescribeChildrenDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeChildrenDsRequest&, DescribeChildrenDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeChildrenDsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeChildrenPathTreesResponse> DescribeChildrenPathTreesOutcome;
                typedef std::future<DescribeChildrenPathTreesOutcome> DescribeChildrenPathTreesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeChildrenPathTreesRequest&, DescribeChildrenPathTreesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeChildrenPathTreesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterNamespaceListResponse> DescribeClusterNamespaceListOutcome;
                typedef std::future<DescribeClusterNamespaceListOutcome> DescribeClusterNamespaceListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeClusterNamespaceListRequest&, DescribeClusterNamespaceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterNamespaceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCodeDetailResponse> DescribeCodeDetailOutcome;
                typedef std::future<DescribeCodeDetailOutcome> DescribeCodeDetailOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeCodeDetailRequest&, DescribeCodeDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCodeDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCodeDetailV2Response> DescribeCodeDetailV2Outcome;
                typedef std::future<DescribeCodeDetailV2Outcome> DescribeCodeDetailV2OutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeCodeDetailV2Request&, DescribeCodeDetailV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCodeDetailV2AsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCodeSearchAuditInfoResponse> DescribeCodeSearchAuditInfoOutcome;
                typedef std::future<DescribeCodeSearchAuditInfoOutcome> DescribeCodeSearchAuditInfoOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeCodeSearchAuditInfoRequest&, DescribeCodeSearchAuditInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCodeSearchAuditInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCodeSearchAuditInfoV2Response> DescribeCodeSearchAuditInfoV2Outcome;
                typedef std::future<DescribeCodeSearchAuditInfoV2Outcome> DescribeCodeSearchAuditInfoV2OutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeCodeSearchAuditInfoV2Request&, DescribeCodeSearchAuditInfoV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCodeSearchAuditInfoV2AsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCodeSearchCountResponse> DescribeCodeSearchCountOutcome;
                typedef std::future<DescribeCodeSearchCountOutcome> DescribeCodeSearchCountOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeCodeSearchCountRequest&, DescribeCodeSearchCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCodeSearchCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCodeSearchInfoResponse> DescribeCodeSearchInfoOutcome;
                typedef std::future<DescribeCodeSearchInfoOutcome> DescribeCodeSearchInfoOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeCodeSearchInfoRequest&, DescribeCodeSearchInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCodeSearchInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCodeSearchInfoV2Response> DescribeCodeSearchInfoV2Outcome;
                typedef std::future<DescribeCodeSearchInfoV2Outcome> DescribeCodeSearchInfoV2OutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeCodeSearchInfoV2Request&, DescribeCodeSearchInfoV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCodeSearchInfoV2AsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeColumnLineageResponse> DescribeColumnLineageOutcome;
                typedef std::future<DescribeColumnLineageOutcome> DescribeColumnLineageOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeColumnLineageRequest&, DescribeColumnLineageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeColumnLineageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeColumnsMetaResponse> DescribeColumnsMetaOutcome;
                typedef std::future<DescribeColumnsMetaOutcome> DescribeColumnsMetaOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeColumnsMetaRequest&, DescribeColumnsMetaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeColumnsMetaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCrontabTopNDsResponse> DescribeCrontabTopNDsOutcome;
                typedef std::future<DescribeCrontabTopNDsOutcome> DescribeCrontabTopNDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeCrontabTopNDsRequest&, DescribeCrontabTopNDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCrontabTopNDsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataBasesResponse> DescribeDataBasesOutcome;
                typedef std::future<DescribeDataBasesOutcome> DescribeDataBasesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDataBasesRequest&, DescribeDataBasesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataBasesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataCheckStatResponse> DescribeDataCheckStatOutcome;
                typedef std::future<DescribeDataCheckStatOutcome> DescribeDataCheckStatOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDataCheckStatRequest&, DescribeDataCheckStatOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataCheckStatAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataDevelopTaskTypeResponse> DescribeDataDevelopTaskTypeOutcome;
                typedef std::future<DescribeDataDevelopTaskTypeOutcome> DescribeDataDevelopTaskTypeOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDataDevelopTaskTypeRequest&, DescribeDataDevelopTaskTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataDevelopTaskTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataObjectsResponse> DescribeDataObjectsOutcome;
                typedef std::future<DescribeDataObjectsOutcome> DescribeDataObjectsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDataObjectsRequest&, DescribeDataObjectsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataObjectsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataSourceInfoListResponse> DescribeDataSourceInfoListOutcome;
                typedef std::future<DescribeDataSourceInfoListOutcome> DescribeDataSourceInfoListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDataSourceInfoListRequest&, DescribeDataSourceInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataSourceInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataSourceListResponse> DescribeDataSourceListOutcome;
                typedef std::future<DescribeDataSourceListOutcome> DescribeDataSourceListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDataSourceListRequest&, DescribeDataSourceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataSourceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataSourceWithoutInfoResponse> DescribeDataSourceWithoutInfoOutcome;
                typedef std::future<DescribeDataSourceWithoutInfoOutcome> DescribeDataSourceWithoutInfoOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDataSourceWithoutInfoRequest&, DescribeDataSourceWithoutInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataSourceWithoutInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataTypesResponse> DescribeDataTypesOutcome;
                typedef std::future<DescribeDataTypesOutcome> DescribeDataTypesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDataTypesRequest&, DescribeDataTypesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataTypesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatabaseInfoListResponse> DescribeDatabaseInfoListOutcome;
                typedef std::future<DescribeDatabaseInfoListOutcome> DescribeDatabaseInfoListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDatabaseInfoListRequest&, DescribeDatabaseInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabaseInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatabaseMetasResponse> DescribeDatabaseMetasOutcome;
                typedef std::future<DescribeDatabaseMetasOutcome> DescribeDatabaseMetasOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDatabaseMetasRequest&, DescribeDatabaseMetasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabaseMetasAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatasourceResponse> DescribeDatasourceOutcome;
                typedef std::future<DescribeDatasourceOutcome> DescribeDatasourceOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDatasourceRequest&, DescribeDatasourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatasourceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDependOpsTaskListResponse> DescribeDependOpsTaskListOutcome;
                typedef std::future<DescribeDependOpsTaskListOutcome> DescribeDependOpsTaskListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDependOpsTaskListRequest&, DescribeDependOpsTaskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDependOpsTaskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDependOpsTasksResponse> DescribeDependOpsTasksOutcome;
                typedef std::future<DescribeDependOpsTasksOutcome> DescribeDependOpsTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDependOpsTasksRequest&, DescribeDependOpsTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDependOpsTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDependTaskListsResponse> DescribeDependTaskListsOutcome;
                typedef std::future<DescribeDependTaskListsOutcome> DescribeDependTaskListsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDependTaskListsRequest&, DescribeDependTaskListsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDependTaskListsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDependTasksDevDsResponse> DescribeDependTasksDevDsOutcome;
                typedef std::future<DescribeDependTasksDevDsOutcome> DescribeDependTasksDevDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDependTasksDevDsRequest&, DescribeDependTasksDevDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDependTasksDevDsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDependTasksNewResponse> DescribeDependTasksNewOutcome;
                typedef std::future<DescribeDependTasksNewOutcome> DescribeDependTasksNewOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDependTasksNewRequest&, DescribeDependTasksNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDependTasksNewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDependencyTasksForProjectCloneResponse> DescribeDependencyTasksForProjectCloneOutcome;
                typedef std::future<DescribeDependencyTasksForProjectCloneOutcome> DescribeDependencyTasksForProjectCloneOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDependencyTasksForProjectCloneRequest&, DescribeDependencyTasksForProjectCloneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDependencyTasksForProjectCloneAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDependencyWorkflowForProjectCloneResponse> DescribeDependencyWorkflowForProjectCloneOutcome;
                typedef std::future<DescribeDependencyWorkflowForProjectCloneOutcome> DescribeDependencyWorkflowForProjectCloneOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDependencyWorkflowForProjectCloneRequest&, DescribeDependencyWorkflowForProjectCloneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDependencyWorkflowForProjectCloneAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDevelopmentSpaceSupportTypeResponse> DescribeDevelopmentSpaceSupportTypeOutcome;
                typedef std::future<DescribeDevelopmentSpaceSupportTypeOutcome> DescribeDevelopmentSpaceSupportTypeOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDevelopmentSpaceSupportTypeRequest&, DescribeDevelopmentSpaceSupportTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDevelopmentSpaceSupportTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDiagnosticInfoByBaselineIdResponse> DescribeDiagnosticInfoByBaselineIdOutcome;
                typedef std::future<DescribeDiagnosticInfoByBaselineIdOutcome> DescribeDiagnosticInfoByBaselineIdOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDiagnosticInfoByBaselineIdRequest&, DescribeDiagnosticInfoByBaselineIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDiagnosticInfoByBaselineIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDimensionScoreResponse> DescribeDimensionScoreOutcome;
                typedef std::future<DescribeDimensionScoreOutcome> DescribeDimensionScoreOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDimensionScoreRequest&, DescribeDimensionScoreOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDimensionScoreAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDrInstancePageResponse> DescribeDrInstancePageOutcome;
                typedef std::future<DescribeDrInstancePageOutcome> DescribeDrInstancePageOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDrInstancePageRequest&, DescribeDrInstancePageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrInstancePageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDrInstanceScriptContentResponse> DescribeDrInstanceScriptContentOutcome;
                typedef std::future<DescribeDrInstanceScriptContentOutcome> DescribeDrInstanceScriptContentOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDrInstanceScriptContentRequest&, DescribeDrInstanceScriptContentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrInstanceScriptContentAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDrSonInstanceResponse> DescribeDrSonInstanceOutcome;
                typedef std::future<DescribeDrSonInstanceOutcome> DescribeDrSonInstanceOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDrSonInstanceRequest&, DescribeDrSonInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrSonInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDsEventResponse> DescribeDsEventOutcome;
                typedef std::future<DescribeDsEventOutcome> DescribeDsEventOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDsEventRequest&, DescribeDsEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDsEventAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDsFolderTreeResponse> DescribeDsFolderTreeOutcome;
                typedef std::future<DescribeDsFolderTreeOutcome> DescribeDsFolderTreeOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDsFolderTreeRequest&, DescribeDsFolderTreeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDsFolderTreeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDsKettleServerFolderTreeResponse> DescribeDsKettleServerFolderTreeOutcome;
                typedef std::future<DescribeDsKettleServerFolderTreeOutcome> DescribeDsKettleServerFolderTreeOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDsKettleServerFolderTreeRequest&, DescribeDsKettleServerFolderTreeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDsKettleServerFolderTreeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDsParentFolderTreeResponse> DescribeDsParentFolderTreeOutcome;
                typedef std::future<DescribeDsParentFolderTreeOutcome> DescribeDsParentFolderTreeOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDsParentFolderTreeRequest&, DescribeDsParentFolderTreeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDsParentFolderTreeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEtlTaskTypeResponse> DescribeEtlTaskTypeOutcome;
                typedef std::future<DescribeEtlTaskTypeOutcome> DescribeEtlTaskTypeOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeEtlTaskTypeRequest&, DescribeEtlTaskTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEtlTaskTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEventResponse> DescribeEventOutcome;
                typedef std::future<DescribeEventOutcome> DescribeEventOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeEventRequest&, DescribeEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEventCasesResponse> DescribeEventCasesOutcome;
                typedef std::future<DescribeEventCasesOutcome> DescribeEventCasesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeEventCasesRequest&, DescribeEventCasesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventCasesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEventConsumeTasksResponse> DescribeEventConsumeTasksOutcome;
                typedef std::future<DescribeEventConsumeTasksOutcome> DescribeEventConsumeTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeEventConsumeTasksRequest&, DescribeEventConsumeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventConsumeTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEventDetailResponse> DescribeEventDetailOutcome;
                typedef std::future<DescribeEventDetailOutcome> DescribeEventDetailOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeEventDetailRequest&, DescribeEventDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEventIsAlarmTypesResponse> DescribeEventIsAlarmTypesOutcome;
                typedef std::future<DescribeEventIsAlarmTypesOutcome> DescribeEventIsAlarmTypesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeEventIsAlarmTypesRequest&, DescribeEventIsAlarmTypesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventIsAlarmTypesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEventListenerByTaskIdResponse> DescribeEventListenerByTaskIdOutcome;
                typedef std::future<DescribeEventListenerByTaskIdOutcome> DescribeEventListenerByTaskIdOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeEventListenerByTaskIdRequest&, DescribeEventListenerByTaskIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventListenerByTaskIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEventListenerTaskResponse> DescribeEventListenerTaskOutcome;
                typedef std::future<DescribeEventListenerTaskOutcome> DescribeEventListenerTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeEventListenerTaskRequest&, DescribeEventListenerTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventListenerTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEventTypesResponse> DescribeEventTypesOutcome;
                typedef std::future<DescribeEventTypesOutcome> DescribeEventTypesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeEventTypesRequest&, DescribeEventTypesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventTypesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEventsResponse> DescribeEventsOutcome;
                typedef std::future<DescribeEventsOutcome> DescribeEventsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeEventsRequest&, DescribeEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExecStrategyResponse> DescribeExecStrategyOutcome;
                typedef std::future<DescribeExecStrategyOutcome> DescribeExecStrategyOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeExecStrategyRequest&, DescribeExecStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExecStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFatherDatasourceInfoDsResponse> DescribeFatherDatasourceInfoDsOutcome;
                typedef std::future<DescribeFatherDatasourceInfoDsOutcome> DescribeFatherDatasourceInfoDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeFatherDatasourceInfoDsRequest&, DescribeFatherDatasourceInfoDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFatherDatasourceInfoDsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFathersResponse> DescribeFathersOutcome;
                typedef std::future<DescribeFathersOutcome> DescribeFathersOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeFathersRequest&, DescribeFathersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFathersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFieldBasicInfoResponse> DescribeFieldBasicInfoOutcome;
                typedef std::future<DescribeFieldBasicInfoOutcome> DescribeFieldBasicInfoOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeFieldBasicInfoRequest&, DescribeFieldBasicInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFieldBasicInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFolderListResponse> DescribeFolderListOutcome;
                typedef std::future<DescribeFolderListOutcome> DescribeFolderListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeFolderListRequest&, DescribeFolderListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFolderListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFolderWorkflowListResponse> DescribeFolderWorkflowListOutcome;
                typedef std::future<DescribeFolderWorkflowListOutcome> DescribeFolderWorkflowListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeFolderWorkflowListRequest&, DescribeFolderWorkflowListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFolderWorkflowListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFunctionKindsResponse> DescribeFunctionKindsOutcome;
                typedef std::future<DescribeFunctionKindsOutcome> DescribeFunctionKindsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeFunctionKindsRequest&, DescribeFunctionKindsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFunctionKindsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFunctionTypesResponse> DescribeFunctionTypesOutcome;
                typedef std::future<DescribeFunctionTypesOutcome> DescribeFunctionTypesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeFunctionTypesRequest&, DescribeFunctionTypesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFunctionTypesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImportableOfflineTaskResponse> DescribeImportableOfflineTaskOutcome;
                typedef std::future<DescribeImportableOfflineTaskOutcome> DescribeImportableOfflineTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeImportableOfflineTaskRequest&, DescribeImportableOfflineTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImportableOfflineTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInLongAgentListResponse> DescribeInLongAgentListOutcome;
                typedef std::future<DescribeInLongAgentListOutcome> DescribeInLongAgentListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeInLongAgentListRequest&, DescribeInLongAgentListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInLongAgentListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInLongAgentTaskListResponse> DescribeInLongAgentTaskListOutcome;
                typedef std::future<DescribeInLongAgentTaskListOutcome> DescribeInLongAgentTaskListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeInLongAgentTaskListRequest&, DescribeInLongAgentTaskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInLongAgentTaskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInLongAgentVpcListResponse> DescribeInLongAgentVpcListOutcome;
                typedef std::future<DescribeInLongAgentVpcListOutcome> DescribeInLongAgentVpcListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeInLongAgentVpcListRequest&, DescribeInLongAgentVpcListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInLongAgentVpcListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInLongTkeClusterListResponse> DescribeInLongTkeClusterListOutcome;
                typedef std::future<DescribeInLongTkeClusterListOutcome> DescribeInLongTkeClusterListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeInLongTkeClusterListRequest&, DescribeInLongTkeClusterListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInLongTkeClusterListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInfoTransByTypeIdDsResponse> DescribeInfoTransByTypeIdDsOutcome;
                typedef std::future<DescribeInfoTransByTypeIdDsOutcome> DescribeInfoTransByTypeIdDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeInfoTransByTypeIdDsRequest&, DescribeInfoTransByTypeIdDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInfoTransByTypeIdDsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceByCycleResponse> DescribeInstanceByCycleOutcome;
                typedef std::future<DescribeInstanceByCycleOutcome> DescribeInstanceByCycleOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeInstanceByCycleRequest&, DescribeInstanceByCycleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceByCycleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceByCycleReportResponse> DescribeInstanceByCycleReportOutcome;
                typedef std::future<DescribeInstanceByCycleReportOutcome> DescribeInstanceByCycleReportOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeInstanceByCycleReportRequest&, DescribeInstanceByCycleReportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceByCycleReportAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeInstanceLogsResponse> DescribeInstanceLogsOutcome;
                typedef std::future<DescribeInstanceLogsOutcome> DescribeInstanceLogsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeInstanceLogsRequest&, DescribeInstanceLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesResponse> DescribeInstancesOutcome;
                typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeInstancesRequest&, DescribeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesInfoWithTaskInfoResponse> DescribeInstancesInfoWithTaskInfoOutcome;
                typedef std::future<DescribeInstancesInfoWithTaskInfoOutcome> DescribeInstancesInfoWithTaskInfoOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeInstancesInfoWithTaskInfoRequest&, DescribeInstancesInfoWithTaskInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesInfoWithTaskInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIntegrationNodeResponse> DescribeIntegrationNodeOutcome;
                typedef std::future<DescribeIntegrationNodeOutcome> DescribeIntegrationNodeOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeIntegrationNodeRequest&, DescribeIntegrationNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIntegrationNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIntegrationStatisticsResponse> DescribeIntegrationStatisticsOutcome;
                typedef std::future<DescribeIntegrationStatisticsOutcome> DescribeIntegrationStatisticsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeIntegrationStatisticsRequest&, DescribeIntegrationStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIntegrationStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIntegrationStatisticsAgentStatusResponse> DescribeIntegrationStatisticsAgentStatusOutcome;
                typedef std::future<DescribeIntegrationStatisticsAgentStatusOutcome> DescribeIntegrationStatisticsAgentStatusOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeIntegrationStatisticsAgentStatusRequest&, DescribeIntegrationStatisticsAgentStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIntegrationStatisticsAgentStatusAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeLockResponse> DescribeLockOutcome;
                typedef std::future<DescribeLockOutcome> DescribeLockOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeLockRequest&, DescribeLockOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLockAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMonitorsByPageResponse> DescribeMonitorsByPageOutcome;
                typedef std::future<DescribeMonitorsByPageOutcome> DescribeMonitorsByPageOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeMonitorsByPageRequest&, DescribeMonitorsByPageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMonitorsByPageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOfflineTaskTokenResponse> DescribeOfflineTaskTokenOutcome;
                typedef std::future<DescribeOfflineTaskTokenOutcome> DescribeOfflineTaskTokenOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeOfflineTaskTokenRequest&, DescribeOfflineTaskTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOfflineTaskTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOperateOpsTaskDatasourceResponse> DescribeOperateOpsTaskDatasourceOutcome;
                typedef std::future<DescribeOperateOpsTaskDatasourceOutcome> DescribeOperateOpsTaskDatasourceOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeOperateOpsTaskDatasourceRequest&, DescribeOperateOpsTaskDatasourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOperateOpsTaskDatasourceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOperateOpsTaskDatasourceTypeResponse> DescribeOperateOpsTaskDatasourceTypeOutcome;
                typedef std::future<DescribeOperateOpsTaskDatasourceTypeOutcome> DescribeOperateOpsTaskDatasourceTypeOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeOperateOpsTaskDatasourceTypeRequest&, DescribeOperateOpsTaskDatasourceTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOperateOpsTaskDatasourceTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOperateOpsTasksResponse> DescribeOperateOpsTasksOutcome;
                typedef std::future<DescribeOperateOpsTasksOutcome> DescribeOperateOpsTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeOperateOpsTasksRequest&, DescribeOperateOpsTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOperateOpsTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOperateTasksResponse> DescribeOperateTasksOutcome;
                typedef std::future<DescribeOperateTasksOutcome> DescribeOperateTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeOperateTasksRequest&, DescribeOperateTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOperateTasksAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribePathTreesResponse> DescribePathTreesOutcome;
                typedef std::future<DescribePathTreesOutcome> DescribePathTreesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribePathTreesRequest&, DescribePathTreesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePathTreesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProdTasksResponse> DescribeProdTasksOutcome;
                typedef std::future<DescribeProdTasksOutcome> DescribeProdTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeProdTasksRequest&, DescribeProdTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProdTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProjectResponse> DescribeProjectOutcome;
                typedef std::future<DescribeProjectOutcome> DescribeProjectOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeProjectRequest&, DescribeProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProjectParamDsPageResponse> DescribeProjectParamDsPageOutcome;
                typedef std::future<DescribeProjectParamDsPageOutcome> DescribeProjectParamDsPageOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeProjectParamDsPageRequest&, DescribeProjectParamDsPageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectParamDsPageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProjectParamVersionInfoDsResponse> DescribeProjectParamVersionInfoDsOutcome;
                typedef std::future<DescribeProjectParamVersionInfoDsOutcome> DescribeProjectParamVersionInfoDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeProjectParamVersionInfoDsRequest&, DescribeProjectParamVersionInfoDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectParamVersionInfoDsAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeRelatedInstancesResponse> DescribeRelatedInstancesOutcome;
                typedef std::future<DescribeRelatedInstancesOutcome> DescribeRelatedInstancesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeRelatedInstancesRequest&, DescribeRelatedInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRelatedInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourceManagePathTreesResponse> DescribeResourceManagePathTreesOutcome;
                typedef std::future<DescribeResourceManagePathTreesOutcome> DescribeResourceManagePathTreesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeResourceManagePathTreesRequest&, DescribeResourceManagePathTreesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceManagePathTreesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRuleResponse> DescribeRuleOutcome;
                typedef std::future<DescribeRuleOutcome> DescribeRuleOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeRuleRequest&, DescribeRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRuleDataSourcesResponse> DescribeRuleDataSourcesOutcome;
                typedef std::future<DescribeRuleDataSourcesOutcome> DescribeRuleDataSourcesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeRuleDataSourcesRequest&, DescribeRuleDataSourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleDataSourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRuleDimStatResponse> DescribeRuleDimStatOutcome;
                typedef std::future<DescribeRuleDimStatOutcome> DescribeRuleDimStatOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeRuleDimStatRequest&, DescribeRuleDimStatOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleDimStatAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRuleExecDetailResponse> DescribeRuleExecDetailOutcome;
                typedef std::future<DescribeRuleExecDetailOutcome> DescribeRuleExecDetailOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeRuleExecDetailRequest&, DescribeRuleExecDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleExecDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRuleExecExportResultResponse> DescribeRuleExecExportResultOutcome;
                typedef std::future<DescribeRuleExecExportResultOutcome> DescribeRuleExecExportResultOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeRuleExecExportResultRequest&, DescribeRuleExecExportResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleExecExportResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRuleExecHistoryResponse> DescribeRuleExecHistoryOutcome;
                typedef std::future<DescribeRuleExecHistoryOutcome> DescribeRuleExecHistoryOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeRuleExecHistoryRequest&, DescribeRuleExecHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleExecHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRuleExecLogResponse> DescribeRuleExecLogOutcome;
                typedef std::future<DescribeRuleExecLogOutcome> DescribeRuleExecLogOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeRuleExecLogRequest&, DescribeRuleExecLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleExecLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRuleExecResultsResponse> DescribeRuleExecResultsOutcome;
                typedef std::future<DescribeRuleExecResultsOutcome> DescribeRuleExecResultsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeRuleExecResultsRequest&, DescribeRuleExecResultsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleExecResultsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRuleExecResultsByPageResponse> DescribeRuleExecResultsByPageOutcome;
                typedef std::future<DescribeRuleExecResultsByPageOutcome> DescribeRuleExecResultsByPageOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeRuleExecResultsByPageRequest&, DescribeRuleExecResultsByPageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleExecResultsByPageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRuleExecStatResponse> DescribeRuleExecStatOutcome;
                typedef std::future<DescribeRuleExecStatOutcome> DescribeRuleExecStatOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeRuleExecStatRequest&, DescribeRuleExecStatOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleExecStatAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRuleGroupResponse> DescribeRuleGroupOutcome;
                typedef std::future<DescribeRuleGroupOutcome> DescribeRuleGroupOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeRuleGroupRequest&, DescribeRuleGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRuleGroupExecResultsByPageResponse> DescribeRuleGroupExecResultsByPageOutcome;
                typedef std::future<DescribeRuleGroupExecResultsByPageOutcome> DescribeRuleGroupExecResultsByPageOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeRuleGroupExecResultsByPageRequest&, DescribeRuleGroupExecResultsByPageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleGroupExecResultsByPageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRuleGroupExecResultsByPageWithoutAuthResponse> DescribeRuleGroupExecResultsByPageWithoutAuthOutcome;
                typedef std::future<DescribeRuleGroupExecResultsByPageWithoutAuthOutcome> DescribeRuleGroupExecResultsByPageWithoutAuthOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeRuleGroupExecResultsByPageWithoutAuthRequest&, DescribeRuleGroupExecResultsByPageWithoutAuthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleGroupExecResultsByPageWithoutAuthAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRuleGroupSubscriptionResponse> DescribeRuleGroupSubscriptionOutcome;
                typedef std::future<DescribeRuleGroupSubscriptionOutcome> DescribeRuleGroupSubscriptionOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeRuleGroupSubscriptionRequest&, DescribeRuleGroupSubscriptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleGroupSubscriptionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRuleGroupTableResponse> DescribeRuleGroupTableOutcome;
                typedef std::future<DescribeRuleGroupTableOutcome> DescribeRuleGroupTableOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeRuleGroupTableRequest&, DescribeRuleGroupTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleGroupTableAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRuleGroupsByPageResponse> DescribeRuleGroupsByPageOutcome;
                typedef std::future<DescribeRuleGroupsByPageOutcome> DescribeRuleGroupsByPageOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeRuleGroupsByPageRequest&, DescribeRuleGroupsByPageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleGroupsByPageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRuleHistoryByPageResponse> DescribeRuleHistoryByPageOutcome;
                typedef std::future<DescribeRuleHistoryByPageOutcome> DescribeRuleHistoryByPageOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeRuleHistoryByPageRequest&, DescribeRuleHistoryByPageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleHistoryByPageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRuleTablesByPageResponse> DescribeRuleTablesByPageOutcome;
                typedef std::future<DescribeRuleTablesByPageOutcome> DescribeRuleTablesByPageOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeRuleTablesByPageRequest&, DescribeRuleTablesByPageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleTablesByPageAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeScheduleInstanceResponse> DescribeScheduleInstanceOutcome;
                typedef std::future<DescribeScheduleInstanceOutcome> DescribeScheduleInstanceOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeScheduleInstanceRequest&, DescribeScheduleInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScheduleInstanceAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeScriptsImportTaskTypeResponse> DescribeScriptsImportTaskTypeOutcome;
                typedef std::future<DescribeScriptsImportTaskTypeOutcome> DescribeScriptsImportTaskTypeOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeScriptsImportTaskTypeRequest&, DescribeScriptsImportTaskTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScriptsImportTaskTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSonInstancesResponse> DescribeSonInstancesOutcome;
                typedef std::future<DescribeSonInstancesOutcome> DescribeSonInstancesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeSonInstancesRequest&, DescribeSonInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSonInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStandardRuleDetailInfoListResponse> DescribeStandardRuleDetailInfoListOutcome;
                typedef std::future<DescribeStandardRuleDetailInfoListOutcome> DescribeStandardRuleDetailInfoListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeStandardRuleDetailInfoListRequest&, DescribeStandardRuleDetailInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStandardRuleDetailInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStatisticInstanceStatusTrendOpsResponse> DescribeStatisticInstanceStatusTrendOpsOutcome;
                typedef std::future<DescribeStatisticInstanceStatusTrendOpsOutcome> DescribeStatisticInstanceStatusTrendOpsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeStatisticInstanceStatusTrendOpsRequest&, DescribeStatisticInstanceStatusTrendOpsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStatisticInstanceStatusTrendOpsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamTaskLogListResponse> DescribeStreamTaskLogListOutcome;
                typedef std::future<DescribeStreamTaskLogListOutcome> DescribeStreamTaskLogListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeStreamTaskLogListRequest&, DescribeStreamTaskLogListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamTaskLogListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSuccessorOpsTaskInfosResponse> DescribeSuccessorOpsTaskInfosOutcome;
                typedef std::future<DescribeSuccessorOpsTaskInfosOutcome> DescribeSuccessorOpsTaskInfosOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeSuccessorOpsTaskInfosRequest&, DescribeSuccessorOpsTaskInfosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSuccessorOpsTaskInfosAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeTaskBindVirtualTaskResponse> DescribeTaskBindVirtualTaskOutcome;
                typedef std::future<DescribeTaskBindVirtualTaskOutcome> DescribeTaskBindVirtualTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTaskBindVirtualTaskRequest&, DescribeTaskBindVirtualTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskBindVirtualTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskByCycleResponse> DescribeTaskByCycleOutcome;
                typedef std::future<DescribeTaskByCycleOutcome> DescribeTaskByCycleOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTaskByCycleRequest&, DescribeTaskByCycleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskByCycleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskByCycleReportResponse> DescribeTaskByCycleReportOutcome;
                typedef std::future<DescribeTaskByCycleReportOutcome> DescribeTaskByCycleReportOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTaskByCycleReportRequest&, DescribeTaskByCycleReportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskByCycleReportAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskByStatusReportResponse> DescribeTaskByStatusReportOutcome;
                typedef std::future<DescribeTaskByStatusReportOutcome> DescribeTaskByStatusReportOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTaskByStatusReportRequest&, DescribeTaskByStatusReportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskByStatusReportAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskDetailResponse> DescribeTaskDetailOutcome;
                typedef std::future<DescribeTaskDetailOutcome> DescribeTaskDetailOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTaskDetailRequest&, DescribeTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskDetailDsResponse> DescribeTaskDetailDsOutcome;
                typedef std::future<DescribeTaskDetailDsOutcome> DescribeTaskDetailDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTaskDetailDsRequest&, DescribeTaskDetailDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskDetailDsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskInstanceResponse> DescribeTaskInstanceOutcome;
                typedef std::future<DescribeTaskInstanceOutcome> DescribeTaskInstanceOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTaskInstanceRequest&, DescribeTaskInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskInstanceReportDetailResponse> DescribeTaskInstanceReportDetailOutcome;
                typedef std::future<DescribeTaskInstanceReportDetailOutcome> DescribeTaskInstanceReportDetailOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTaskInstanceReportDetailRequest&, DescribeTaskInstanceReportDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskInstanceReportDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskInstancesResponse> DescribeTaskInstancesOutcome;
                typedef std::future<DescribeTaskInstancesOutcome> DescribeTaskInstancesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTaskInstancesRequest&, DescribeTaskInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskLatestRunTimeResponse> DescribeTaskLatestRunTimeOutcome;
                typedef std::future<DescribeTaskLatestRunTimeOutcome> DescribeTaskLatestRunTimeOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTaskLatestRunTimeRequest&, DescribeTaskLatestRunTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskLatestRunTimeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskListByConditionDsResponse> DescribeTaskListByConditionDsOutcome;
                typedef std::future<DescribeTaskListByConditionDsOutcome> DescribeTaskListByConditionDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTaskListByConditionDsRequest&, DescribeTaskListByConditionDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskListByConditionDsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskLockStatusResponse> DescribeTaskLockStatusOutcome;
                typedef std::future<DescribeTaskLockStatusOutcome> DescribeTaskLockStatusOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTaskLockStatusRequest&, DescribeTaskLockStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskLockStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskOutputRegistriesResponse> DescribeTaskOutputRegistriesOutcome;
                typedef std::future<DescribeTaskOutputRegistriesOutcome> DescribeTaskOutputRegistriesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTaskOutputRegistriesRequest&, DescribeTaskOutputRegistriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskOutputRegistriesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskParentRunTimeResponse> DescribeTaskParentRunTimeOutcome;
                typedef std::future<DescribeTaskParentRunTimeOutcome> DescribeTaskParentRunTimeOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTaskParentRunTimeRequest&, DescribeTaskParentRunTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskParentRunTimeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskReportResponse> DescribeTaskReportOutcome;
                typedef std::future<DescribeTaskReportOutcome> DescribeTaskReportOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTaskReportRequest&, DescribeTaskReportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskReportAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskReportDetailListResponse> DescribeTaskReportDetailListOutcome;
                typedef std::future<DescribeTaskReportDetailListOutcome> DescribeTaskReportDetailListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTaskReportDetailListRequest&, DescribeTaskReportDetailListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskReportDetailListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskRunHistoryResponse> DescribeTaskRunHistoryOutcome;
                typedef std::future<DescribeTaskRunHistoryOutcome> DescribeTaskRunHistoryOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTaskRunHistoryRequest&, DescribeTaskRunHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskRunHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskScriptResponse> DescribeTaskScriptOutcome;
                typedef std::future<DescribeTaskScriptOutcome> DescribeTaskScriptOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTaskScriptRequest&, DescribeTaskScriptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskScriptAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskTypeByScriptTypeResponse> DescribeTaskTypeByScriptTypeOutcome;
                typedef std::future<DescribeTaskTypeByScriptTypeOutcome> DescribeTaskTypeByScriptTypeOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTaskTypeByScriptTypeRequest&, DescribeTaskTypeByScriptTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskTypeByScriptTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTasksByPageResponse> DescribeTasksByPageOutcome;
                typedef std::future<DescribeTasksByPageOutcome> DescribeTasksByPageOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTasksByPageRequest&, DescribeTasksByPageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTasksByPageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTasksForProjectCloneResponse> DescribeTasksForProjectCloneOutcome;
                typedef std::future<DescribeTasksForProjectCloneOutcome> DescribeTasksForProjectCloneOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTasksForProjectCloneRequest&, DescribeTasksForProjectCloneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTasksForProjectCloneAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTemplateDimCountResponse> DescribeTemplateDimCountOutcome;
                typedef std::future<DescribeTemplateDimCountOutcome> DescribeTemplateDimCountOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTemplateDimCountRequest&, DescribeTemplateDimCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTemplateDimCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTemplateHistoryResponse> DescribeTemplateHistoryOutcome;
                typedef std::future<DescribeTemplateHistoryOutcome> DescribeTemplateHistoryOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTemplateHistoryRequest&, DescribeTemplateHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTemplateHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeThirdTaskRunLogResponse> DescribeThirdTaskRunLogOutcome;
                typedef std::future<DescribeThirdTaskRunLogOutcome> DescribeThirdTaskRunLogOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeThirdTaskRunLogRequest&, DescribeThirdTaskRunLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeThirdTaskRunLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopTableStatResponse> DescribeTopTableStatOutcome;
                typedef std::future<DescribeTopTableStatOutcome> DescribeTopTableStatOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTopTableStatRequest&, DescribeTopTableStatOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopTableStatAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTrendStatResponse> DescribeTrendStatOutcome;
                typedef std::future<DescribeTrendStatOutcome> DescribeTrendStatOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTrendStatRequest&, DescribeTrendStatOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrendStatAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkflowCanvasInfoResponse> DescribeWorkflowCanvasInfoOutcome;
                typedef std::future<DescribeWorkflowCanvasInfoOutcome> DescribeWorkflowCanvasInfoOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeWorkflowCanvasInfoRequest&, DescribeWorkflowCanvasInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkflowCanvasInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkflowCanvasInfoDsResponse> DescribeWorkflowCanvasInfoDsOutcome;
                typedef std::future<DescribeWorkflowCanvasInfoDsOutcome> DescribeWorkflowCanvasInfoDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeWorkflowCanvasInfoDsRequest&, DescribeWorkflowCanvasInfoDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkflowCanvasInfoDsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkflowCanvasOpLogsResponse> DescribeWorkflowCanvasOpLogsOutcome;
                typedef std::future<DescribeWorkflowCanvasOpLogsOutcome> DescribeWorkflowCanvasOpLogsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeWorkflowCanvasOpLogsRequest&, DescribeWorkflowCanvasOpLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkflowCanvasOpLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkflowExecuteByIdResponse> DescribeWorkflowExecuteByIdOutcome;
                typedef std::future<DescribeWorkflowExecuteByIdOutcome> DescribeWorkflowExecuteByIdOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeWorkflowExecuteByIdRequest&, DescribeWorkflowExecuteByIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkflowExecuteByIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkflowForProjectCloneResponse> DescribeWorkflowForProjectCloneOutcome;
                typedef std::future<DescribeWorkflowForProjectCloneOutcome> DescribeWorkflowForProjectCloneOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeWorkflowForProjectCloneRequest&, DescribeWorkflowForProjectCloneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkflowForProjectCloneAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkflowInfoByIdResponse> DescribeWorkflowInfoByIdOutcome;
                typedef std::future<DescribeWorkflowInfoByIdOutcome> DescribeWorkflowInfoByIdOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeWorkflowInfoByIdRequest&, DescribeWorkflowInfoByIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkflowInfoByIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkflowListByProjectIdResponse> DescribeWorkflowListByProjectIdOutcome;
                typedef std::future<DescribeWorkflowListByProjectIdOutcome> DescribeWorkflowListByProjectIdOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeWorkflowListByProjectIdRequest&, DescribeWorkflowListByProjectIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkflowListByProjectIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkflowOpsCanvasInfoResponse> DescribeWorkflowOpsCanvasInfoOutcome;
                typedef std::future<DescribeWorkflowOpsCanvasInfoOutcome> DescribeWorkflowOpsCanvasInfoOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeWorkflowOpsCanvasInfoRequest&, DescribeWorkflowOpsCanvasInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkflowOpsCanvasInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkflowSchedulerInfoDsResponse> DescribeWorkflowSchedulerInfoDsOutcome;
                typedef std::future<DescribeWorkflowSchedulerInfoDsOutcome> DescribeWorkflowSchedulerInfoDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeWorkflowSchedulerInfoDsRequest&, DescribeWorkflowSchedulerInfoDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkflowSchedulerInfoDsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkflowTaskCountResponse> DescribeWorkflowTaskCountOutcome;
                typedef std::future<DescribeWorkflowTaskCountOutcome> DescribeWorkflowTaskCountOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeWorkflowTaskCountRequest&, DescribeWorkflowTaskCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkflowTaskCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkflowTasksForProjectCloneResponse> DescribeWorkflowTasksForProjectCloneOutcome;
                typedef std::future<DescribeWorkflowTasksForProjectCloneOutcome> DescribeWorkflowTasksForProjectCloneOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeWorkflowTasksForProjectCloneRequest&, DescribeWorkflowTasksForProjectCloneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkflowTasksForProjectCloneAsyncHandler;
                typedef Outcome<Core::Error, Model::DiagnosePlusResponse> DiagnosePlusOutcome;
                typedef std::future<DiagnosePlusOutcome> DiagnosePlusOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DiagnosePlusRequest&, DiagnosePlusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DiagnosePlusAsyncHandler;
                typedef Outcome<Core::Error, Model::DryRunDIOfflineTaskResponse> DryRunDIOfflineTaskOutcome;
                typedef std::future<DryRunDIOfflineTaskOutcome> DryRunDIOfflineTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DryRunDIOfflineTaskRequest&, DryRunDIOfflineTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DryRunDIOfflineTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::EditBaselineResponse> EditBaselineOutcome;
                typedef std::future<EditBaselineOutcome> EditBaselineOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::EditBaselineRequest&, EditBaselineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EditBaselineAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportDsEventResponse> ExportDsEventOutcome;
                typedef std::future<ExportDsEventOutcome> ExportDsEventOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ExportDsEventRequest&, ExportDsEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportDsEventAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportFilesResponse> ExportFilesOutcome;
                typedef std::future<ExportFilesOutcome> ExportFilesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ExportFilesRequest&, ExportFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportProjectParamDsResponse> ExportProjectParamDsOutcome;
                typedef std::future<ExportProjectParamDsOutcome> ExportProjectParamDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ExportProjectParamDsRequest&, ExportProjectParamDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportProjectParamDsAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportWorkflowXmlResponse> ExportWorkflowXmlOutcome;
                typedef std::future<ExportWorkflowXmlOutcome> ExportWorkflowXmlOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ExportWorkflowXmlRequest&, ExportWorkflowXmlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportWorkflowXmlAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportWorkflowZipResponse> ExportWorkflowZipOutcome;
                typedef std::future<ExportWorkflowZipOutcome> ExportWorkflowZipOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ExportWorkflowZipRequest&, ExportWorkflowZipOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportWorkflowZipAsyncHandler;
                typedef Outcome<Core::Error, Model::FindAllFolderResponse> FindAllFolderOutcome;
                typedef std::future<FindAllFolderOutcome> FindAllFolderOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::FindAllFolderRequest&, FindAllFolderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FindAllFolderAsyncHandler;
                typedef Outcome<Core::Error, Model::FindDependTaskListDsResponse> FindDependTaskListDsOutcome;
                typedef std::future<FindDependTaskListDsOutcome> FindDependTaskListDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::FindDependTaskListDsRequest&, FindDependTaskListDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FindDependTaskListDsAsyncHandler;
                typedef Outcome<Core::Error, Model::FindDependTaskListsDsResponse> FindDependTaskListsDsOutcome;
                typedef std::future<FindDependTaskListsDsOutcome> FindDependTaskListsDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::FindDependTaskListsDsRequest&, FindDependTaskListsDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FindDependTaskListsDsAsyncHandler;
                typedef Outcome<Core::Error, Model::FindFuzzyTasksDsResponse> FindFuzzyTasksDsOutcome;
                typedef std::future<FindFuzzyTasksDsOutcome> FindFuzzyTasksDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::FindFuzzyTasksDsRequest&, FindFuzzyTasksDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FindFuzzyTasksDsAsyncHandler;
                typedef Outcome<Core::Error, Model::ForceSucInstancesResponse> ForceSucInstancesOutcome;
                typedef std::future<ForceSucInstancesOutcome> ForceSucInstancesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ForceSucInstancesRequest&, ForceSucInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ForceSucInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::ForceSucScheduleInstancesResponse> ForceSucScheduleInstancesOutcome;
                typedef std::future<ForceSucScheduleInstancesOutcome> ForceSucScheduleInstancesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ForceSucScheduleInstancesRequest&, ForceSucScheduleInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ForceSucScheduleInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::FreezeOpsTasksResponse> FreezeOpsTasksOutcome;
                typedef std::future<FreezeOpsTasksOutcome> FreezeOpsTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::FreezeOpsTasksRequest&, FreezeOpsTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FreezeOpsTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::FreezeTasksResponse> FreezeTasksOutcome;
                typedef std::future<FreezeTasksOutcome> FreezeTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::FreezeTasksRequest&, FreezeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FreezeTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::FreezeTasksByMultiWorkflowResponse> FreezeTasksByMultiWorkflowOutcome;
                typedef std::future<FreezeTasksByMultiWorkflowOutcome> FreezeTasksByMultiWorkflowOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::FreezeTasksByMultiWorkflowRequest&, FreezeTasksByMultiWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FreezeTasksByMultiWorkflowAsyncHandler;
                typedef Outcome<Core::Error, Model::FreezeTasksByWorkflowIdsResponse> FreezeTasksByWorkflowIdsOutcome;
                typedef std::future<FreezeTasksByWorkflowIdsOutcome> FreezeTasksByWorkflowIdsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::FreezeTasksByWorkflowIdsRequest&, FreezeTasksByWorkflowIdsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FreezeTasksByWorkflowIdsAsyncHandler;
                typedef Outcome<Core::Error, Model::GenHiveTableDDLSqlResponse> GenHiveTableDDLSqlOutcome;
                typedef std::future<GenHiveTableDDLSqlOutcome> GenHiveTableDDLSqlOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GenHiveTableDDLSqlRequest&, GenHiveTableDDLSqlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GenHiveTableDDLSqlAsyncHandler;
                typedef Outcome<Core::Error, Model::GetAdvanceRunParamsResponse> GetAdvanceRunParamsOutcome;
                typedef std::future<GetAdvanceRunParamsOutcome> GetAdvanceRunParamsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GetAdvanceRunParamsRequest&, GetAdvanceRunParamsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetAdvanceRunParamsAsyncHandler;
                typedef Outcome<Core::Error, Model::GetBatchDetailErrorLogResponse> GetBatchDetailErrorLogOutcome;
                typedef std::future<GetBatchDetailErrorLogOutcome> GetBatchDetailErrorLogOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GetBatchDetailErrorLogRequest&, GetBatchDetailErrorLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetBatchDetailErrorLogAsyncHandler;
                typedef Outcome<Core::Error, Model::GetCosTokenResponse> GetCosTokenOutcome;
                typedef std::future<GetCosTokenOutcome> GetCosTokenOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GetCosTokenRequest&, GetCosTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetCosTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::GetFileInfoResponse> GetFileInfoOutcome;
                typedef std::future<GetFileInfoOutcome> GetFileInfoOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GetFileInfoRequest&, GetFileInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetFileInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::GetIntegrationNodeColumnSchemaResponse> GetIntegrationNodeColumnSchemaOutcome;
                typedef std::future<GetIntegrationNodeColumnSchemaOutcome> GetIntegrationNodeColumnSchemaOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GetIntegrationNodeColumnSchemaRequest&, GetIntegrationNodeColumnSchemaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetIntegrationNodeColumnSchemaAsyncHandler;
                typedef Outcome<Core::Error, Model::GetOfflineDIInstanceListResponse> GetOfflineDIInstanceListOutcome;
                typedef std::future<GetOfflineDIInstanceListOutcome> GetOfflineDIInstanceListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GetOfflineDIInstanceListRequest&, GetOfflineDIInstanceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetOfflineDIInstanceListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetOfflineInstanceListResponse> GetOfflineInstanceListOutcome;
                typedef std::future<GetOfflineInstanceListOutcome> GetOfflineInstanceListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GetOfflineInstanceListRequest&, GetOfflineInstanceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetOfflineInstanceListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetPathTreesResponse> GetPathTreesOutcome;
                typedef std::future<GetPathTreesOutcome> GetPathTreesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GetPathTreesRequest&, GetPathTreesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetPathTreesAsyncHandler;
                typedef Outcome<Core::Error, Model::GetResourcePathTreeResponse> GetResourcePathTreeOutcome;
                typedef std::future<GetResourcePathTreeOutcome> GetResourcePathTreeOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GetResourcePathTreeRequest&, GetResourcePathTreeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetResourcePathTreeAsyncHandler;
                typedef Outcome<Core::Error, Model::GetRunSonListDsResponse> GetRunSonListDsOutcome;
                typedef std::future<GetRunSonListDsOutcome> GetRunSonListDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GetRunSonListDsRequest&, GetRunSonListDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetRunSonListDsAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTestRunTaskInstancesStatusInfoResponse> GetTestRunTaskInstancesStatusInfoOutcome;
                typedef std::future<GetTestRunTaskInstancesStatusInfoOutcome> GetTestRunTaskInstancesStatusInfoOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GetTestRunTaskInstancesStatusInfoRequest&, GetTestRunTaskInstancesStatusInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTestRunTaskInstancesStatusInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::HeartBeatResponse> HeartBeatOutcome;
                typedef std::future<HeartBeatOutcome> HeartBeatOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::HeartBeatRequest&, HeartBeatOutcome, const std::shared_ptr<const AsyncCallerContext>&)> HeartBeatAsyncHandler;
                typedef Outcome<Core::Error, Model::ImportDsEventResponse> ImportDsEventOutcome;
                typedef std::future<ImportDsEventOutcome> ImportDsEventOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ImportDsEventRequest&, ImportDsEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImportDsEventAsyncHandler;
                typedef Outcome<Core::Error, Model::ImportFilesResponse> ImportFilesOutcome;
                typedef std::future<ImportFilesOutcome> ImportFilesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ImportFilesRequest&, ImportFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImportFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::ImportOfflineTaskResponse> ImportOfflineTaskOutcome;
                typedef std::future<ImportOfflineTaskOutcome> ImportOfflineTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ImportOfflineTaskRequest&, ImportOfflineTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImportOfflineTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::ImportProjectParamDsResponse> ImportProjectParamDsOutcome;
                typedef std::future<ImportProjectParamDsOutcome> ImportProjectParamDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ImportProjectParamDsRequest&, ImportProjectParamDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImportProjectParamDsAsyncHandler;
                typedef Outcome<Core::Error, Model::JudgeTaskListenEventResponse> JudgeTaskListenEventOutcome;
                typedef std::future<JudgeTaskListenEventOutcome> JudgeTaskListenEventOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::JudgeTaskListenEventRequest&, JudgeTaskListenEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> JudgeTaskListenEventAsyncHandler;
                typedef Outcome<Core::Error, Model::KillInstancesResponse> KillInstancesOutcome;
                typedef std::future<KillInstancesOutcome> KillInstancesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::KillInstancesRequest&, KillInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> KillInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::KillOpsMakePlanInstancesResponse> KillOpsMakePlanInstancesOutcome;
                typedef std::future<KillOpsMakePlanInstancesOutcome> KillOpsMakePlanInstancesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::KillOpsMakePlanInstancesRequest&, KillOpsMakePlanInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> KillOpsMakePlanInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::KillScheduleInstancesResponse> KillScheduleInstancesOutcome;
                typedef std::future<KillScheduleInstancesOutcome> KillScheduleInstancesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::KillScheduleInstancesRequest&, KillScheduleInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> KillScheduleInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListBatchDetailResponse> ListBatchDetailOutcome;
                typedef std::future<ListBatchDetailOutcome> ListBatchDetailOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ListBatchDetailRequest&, ListBatchDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListBatchDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::ListBatchJobResponse> ListBatchJobOutcome;
                typedef std::future<ListBatchJobOutcome> ListBatchJobOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ListBatchJobRequest&, ListBatchJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListBatchJobAsyncHandler;
                typedef Outcome<Core::Error, Model::LockIntegrationTaskResponse> LockIntegrationTaskOutcome;
                typedef std::future<LockIntegrationTaskOutcome> LockIntegrationTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::LockIntegrationTaskRequest&, LockIntegrationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> LockIntegrationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::MakeUpOpsTasksResponse> MakeUpOpsTasksOutcome;
                typedef std::future<MakeUpOpsTasksOutcome> MakeUpOpsTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::MakeUpOpsTasksRequest&, MakeUpOpsTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MakeUpOpsTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::MakeUpTasksByWorkflowResponse> MakeUpTasksByWorkflowOutcome;
                typedef std::future<MakeUpTasksByWorkflowOutcome> MakeUpTasksByWorkflowOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::MakeUpTasksByWorkflowRequest&, MakeUpTasksByWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MakeUpTasksByWorkflowAsyncHandler;
                typedef Outcome<Core::Error, Model::MakeUpTasksNewResponse> MakeUpTasksNewOutcome;
                typedef std::future<MakeUpTasksNewOutcome> MakeUpTasksNewOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::MakeUpTasksNewRequest&, MakeUpTasksNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MakeUpTasksNewAsyncHandler;
                typedef Outcome<Core::Error, Model::MakeUpWorkflowNewResponse> MakeUpWorkflowNewOutcome;
                typedef std::future<MakeUpWorkflowNewOutcome> MakeUpWorkflowNewOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::MakeUpWorkflowNewRequest&, MakeUpWorkflowNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MakeUpWorkflowNewAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApproveStatusResponse> ModifyApproveStatusOutcome;
                typedef std::future<ModifyApproveStatusOutcome> ModifyApproveStatusOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ModifyApproveStatusRequest&, ModifyApproveStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApproveStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBaselineAlarmStatusResponse> ModifyBaselineAlarmStatusOutcome;
                typedef std::future<ModifyBaselineAlarmStatusOutcome> ModifyBaselineAlarmStatusOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ModifyBaselineAlarmStatusRequest&, ModifyBaselineAlarmStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBaselineAlarmStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBaselineTaskAlarmStatusResponse> ModifyBaselineTaskAlarmStatusOutcome;
                typedef std::future<ModifyBaselineTaskAlarmStatusOutcome> ModifyBaselineTaskAlarmStatusOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ModifyBaselineTaskAlarmStatusRequest&, ModifyBaselineTaskAlarmStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBaselineTaskAlarmStatusAsyncHandler;
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
                typedef Outcome<Core::Error, Model::ModifyFolderResponse> ModifyFolderOutcome;
                typedef std::future<ModifyFolderOutcome> ModifyFolderOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ModifyFolderRequest&, ModifyFolderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFolderAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyIntegrationNodeResponse> ModifyIntegrationNodeOutcome;
                typedef std::future<ModifyIntegrationNodeOutcome> ModifyIntegrationNodeOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ModifyIntegrationNodeRequest&, ModifyIntegrationNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIntegrationNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyIntegrationTaskResponse> ModifyIntegrationTaskOutcome;
                typedef std::future<ModifyIntegrationTaskOutcome> ModifyIntegrationTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ModifyIntegrationTaskRequest&, ModifyIntegrationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIntegrationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMonitorStatusResponse> ModifyMonitorStatusOutcome;
                typedef std::future<ModifyMonitorStatusOutcome> ModifyMonitorStatusOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ModifyMonitorStatusRequest&, ModifyMonitorStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMonitorStatusAsyncHandler;
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
                typedef Outcome<Core::Error, Model::ModifyTaskFolderResponse> ModifyTaskFolderOutcome;
                typedef std::future<ModifyTaskFolderOutcome> ModifyTaskFolderOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ModifyTaskFolderRequest&, ModifyTaskFolderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTaskFolderAsyncHandler;
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
                typedef Outcome<Core::Error, Model::ModifyTaskScriptDsResponse> ModifyTaskScriptDsOutcome;
                typedef std::future<ModifyTaskScriptDsOutcome> ModifyTaskScriptDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ModifyTaskScriptDsRequest&, ModifyTaskScriptDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTaskScriptDsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWorkflowInfoResponse> ModifyWorkflowInfoOutcome;
                typedef std::future<ModifyWorkflowInfoOutcome> ModifyWorkflowInfoOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ModifyWorkflowInfoRequest&, ModifyWorkflowInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWorkflowInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWorkflowScheduleResponse> ModifyWorkflowScheduleOutcome;
                typedef std::future<ModifyWorkflowScheduleOutcome> ModifyWorkflowScheduleOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ModifyWorkflowScheduleRequest&, ModifyWorkflowScheduleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWorkflowScheduleAsyncHandler;
                typedef Outcome<Core::Error, Model::MoveFileResponse> MoveFileOutcome;
                typedef std::future<MoveFileOutcome> MoveFileOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::MoveFileRequest&, MoveFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MoveFileAsyncHandler;
                typedef Outcome<Core::Error, Model::MoveTasksToFolderResponse> MoveTasksToFolderOutcome;
                typedef std::future<MoveTasksToFolderOutcome> MoveTasksToFolderOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::MoveTasksToFolderRequest&, MoveTasksToFolderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MoveTasksToFolderAsyncHandler;
                typedef Outcome<Core::Error, Model::RegisterDsEventResponse> RegisterDsEventOutcome;
                typedef std::future<RegisterDsEventOutcome> RegisterDsEventOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::RegisterDsEventRequest&, RegisterDsEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterDsEventAsyncHandler;
                typedef Outcome<Core::Error, Model::RegisterDsEventListenerResponse> RegisterDsEventListenerOutcome;
                typedef std::future<RegisterDsEventListenerOutcome> RegisterDsEventListenerOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::RegisterDsEventListenerRequest&, RegisterDsEventListenerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterDsEventListenerAsyncHandler;
                typedef Outcome<Core::Error, Model::RegisterDsEventPublisherResponse> RegisterDsEventPublisherOutcome;
                typedef std::future<RegisterDsEventPublisherOutcome> RegisterDsEventPublisherOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::RegisterDsEventPublisherRequest&, RegisterDsEventPublisherOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterDsEventPublisherAsyncHandler;
                typedef Outcome<Core::Error, Model::RegisterEventResponse> RegisterEventOutcome;
                typedef std::future<RegisterEventOutcome> RegisterEventOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::RegisterEventRequest&, RegisterEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterEventAsyncHandler;
                typedef Outcome<Core::Error, Model::RegisterEventListenerResponse> RegisterEventListenerOutcome;
                typedef std::future<RegisterEventListenerOutcome> RegisterEventListenerOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::RegisterEventListenerRequest&, RegisterEventListenerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterEventListenerAsyncHandler;
                typedef Outcome<Core::Error, Model::ReleaseLockResponse> ReleaseLockOutcome;
                typedef std::future<ReleaseLockOutcome> ReleaseLockOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ReleaseLockRequest&, ReleaseLockOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseLockAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveWorkflowDsResponse> RemoveWorkflowDsOutcome;
                typedef std::future<RemoveWorkflowDsOutcome> RemoveWorkflowDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::RemoveWorkflowDsRequest&, RemoveWorkflowDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveWorkflowDsAsyncHandler;
                typedef Outcome<Core::Error, Model::RenameFileResponse> RenameFileOutcome;
                typedef std::future<RenameFileOutcome> RenameFileOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::RenameFileRequest&, RenameFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenameFileAsyncHandler;
                typedef Outcome<Core::Error, Model::RenameResourceResponse> RenameResourceOutcome;
                typedef std::future<RenameResourceOutcome> RenameResourceOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::RenameResourceRequest&, RenameResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenameResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::RenameResourceFileResponse> RenameResourceFileOutcome;
                typedef std::future<RenameResourceFileOutcome> RenameResourceFileOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::RenameResourceFileRequest&, RenameResourceFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenameResourceFileAsyncHandler;
                typedef Outcome<Core::Error, Model::RenameTaskDsResponse> RenameTaskDsOutcome;
                typedef std::future<RenameTaskDsOutcome> RenameTaskDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::RenameTaskDsRequest&, RenameTaskDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenameTaskDsAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewWorkflowDsResponse> RenewWorkflowDsOutcome;
                typedef std::future<RenewWorkflowDsOutcome> RenewWorkflowDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::RenewWorkflowDsRequest&, RenewWorkflowDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewWorkflowDsAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewWorkflowFolderDsResponse> RenewWorkflowFolderDsOutcome;
                typedef std::future<RenewWorkflowFolderDsOutcome> RenewWorkflowFolderDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::RenewWorkflowFolderDsRequest&, RenewWorkflowFolderDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewWorkflowFolderDsAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewWorkflowOwnerDsResponse> RenewWorkflowOwnerDsOutcome;
                typedef std::future<RenewWorkflowOwnerDsOutcome> RenewWorkflowOwnerDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::RenewWorkflowOwnerDsRequest&, RenewWorkflowOwnerDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewWorkflowOwnerDsAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewWorkflowSchedulerInfoDsResponse> RenewWorkflowSchedulerInfoDsOutcome;
                typedef std::future<RenewWorkflowSchedulerInfoDsOutcome> RenewWorkflowSchedulerInfoDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::RenewWorkflowSchedulerInfoDsRequest&, RenewWorkflowSchedulerInfoDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewWorkflowSchedulerInfoDsAsyncHandler;
                typedef Outcome<Core::Error, Model::RerunInstancesResponse> RerunInstancesOutcome;
                typedef std::future<RerunInstancesOutcome> RerunInstancesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::RerunInstancesRequest&, RerunInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RerunInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::RerunOpsMakePlanInstancesResponse> RerunOpsMakePlanInstancesOutcome;
                typedef std::future<RerunOpsMakePlanInstancesOutcome> RerunOpsMakePlanInstancesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::RerunOpsMakePlanInstancesRequest&, RerunOpsMakePlanInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RerunOpsMakePlanInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::RerunScheduleInstancesResponse> RerunScheduleInstancesOutcome;
                typedef std::future<RerunScheduleInstancesOutcome> RerunScheduleInstancesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::RerunScheduleInstancesRequest&, RerunScheduleInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RerunScheduleInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::RestartInLongAgentResponse> RestartInLongAgentOutcome;
                typedef std::future<RestartInLongAgentOutcome> RestartInLongAgentOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::RestartInLongAgentRequest&, RestartInLongAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestartInLongAgentAsyncHandler;
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
                typedef Outcome<Core::Error, Model::RunTaskResponse> RunTaskOutcome;
                typedef std::future<RunTaskOutcome> RunTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::RunTaskRequest&, RunTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::RunTasksByMultiWorkflowResponse> RunTasksByMultiWorkflowOutcome;
                typedef std::future<RunTasksByMultiWorkflowOutcome> RunTasksByMultiWorkflowOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::RunTasksByMultiWorkflowRequest&, RunTasksByMultiWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunTasksByMultiWorkflowAsyncHandler;
                typedef Outcome<Core::Error, Model::SaveCustomFunctionResponse> SaveCustomFunctionOutcome;
                typedef std::future<SaveCustomFunctionOutcome> SaveCustomFunctionOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::SaveCustomFunctionRequest&, SaveCustomFunctionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SaveCustomFunctionAsyncHandler;
                typedef Outcome<Core::Error, Model::SavePositionsDsResponse> SavePositionsDsOutcome;
                typedef std::future<SavePositionsDsOutcome> SavePositionsDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::SavePositionsDsRequest&, SavePositionsDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SavePositionsDsAsyncHandler;
                typedef Outcome<Core::Error, Model::ScriptUsedByOtherTaskDsResponse> ScriptUsedByOtherTaskDsOutcome;
                typedef std::future<ScriptUsedByOtherTaskDsOutcome> ScriptUsedByOtherTaskDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ScriptUsedByOtherTaskDsRequest&, ScriptUsedByOtherTaskDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScriptUsedByOtherTaskDsAsyncHandler;
                typedef Outcome<Core::Error, Model::SetTaskAlarmNewResponse> SetTaskAlarmNewOutcome;
                typedef std::future<SetTaskAlarmNewOutcome> SetTaskAlarmNewOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::SetTaskAlarmNewRequest&, SetTaskAlarmNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetTaskAlarmNewAsyncHandler;
                typedef Outcome<Core::Error, Model::StartIntegrationTaskResponse> StartIntegrationTaskOutcome;
                typedef std::future<StartIntegrationTaskOutcome> StartIntegrationTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::StartIntegrationTaskRequest&, StartIntegrationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartIntegrationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::StopBaselineResponse> StopBaselineOutcome;
                typedef std::future<StopBaselineOutcome> StopBaselineOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::StopBaselineRequest&, StopBaselineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopBaselineAsyncHandler;
                typedef Outcome<Core::Error, Model::StopIntegrationTaskResponse> StopIntegrationTaskOutcome;
                typedef std::future<StopIntegrationTaskOutcome> StopIntegrationTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::StopIntegrationTaskRequest&, StopIntegrationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopIntegrationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitBaselineResponse> SubmitBaselineOutcome;
                typedef std::future<SubmitBaselineOutcome> SubmitBaselineOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::SubmitBaselineRequest&, SubmitBaselineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitBaselineAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitCustomFunctionResponse> SubmitCustomFunctionOutcome;
                typedef std::future<SubmitCustomFunctionOutcome> SubmitCustomFunctionOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::SubmitCustomFunctionRequest&, SubmitCustomFunctionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitCustomFunctionAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitPySparkTaskResponse> SubmitPySparkTaskOutcome;
                typedef std::future<SubmitPySparkTaskOutcome> SubmitPySparkTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::SubmitPySparkTaskRequest&, SubmitPySparkTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitPySparkTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitPythonTaskResponse> SubmitPythonTaskOutcome;
                typedef std::future<SubmitPythonTaskOutcome> SubmitPythonTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::SubmitPythonTaskRequest&, SubmitPythonTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitPythonTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitShellTaskResponse> SubmitShellTaskOutcome;
                typedef std::future<SubmitShellTaskOutcome> SubmitShellTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::SubmitShellTaskRequest&, SubmitShellTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitShellTaskAsyncHandler;
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
                typedef Outcome<Core::Error, Model::UnlockIntegrationTaskResponse> UnlockIntegrationTaskOutcome;
                typedef std::future<UnlockIntegrationTaskOutcome> UnlockIntegrationTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::UnlockIntegrationTaskRequest&, UnlockIntegrationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnlockIntegrationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateBatchTaskAdvancedSettingsResponse> UpdateBatchTaskAdvancedSettingsOutcome;
                typedef std::future<UpdateBatchTaskAdvancedSettingsOutcome> UpdateBatchTaskAdvancedSettingsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::UpdateBatchTaskAdvancedSettingsRequest&, UpdateBatchTaskAdvancedSettingsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateBatchTaskAdvancedSettingsAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateBatchTaskDatasourceResponse> UpdateBatchTaskDatasourceOutcome;
                typedef std::future<UpdateBatchTaskDatasourceOutcome> UpdateBatchTaskDatasourceOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::UpdateBatchTaskDatasourceRequest&, UpdateBatchTaskDatasourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateBatchTaskDatasourceAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateBatchTaskInChargeResponse> UpdateBatchTaskInChargeOutcome;
                typedef std::future<UpdateBatchTaskInChargeOutcome> UpdateBatchTaskInChargeOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::UpdateBatchTaskInChargeRequest&, UpdateBatchTaskInChargeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateBatchTaskInChargeAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateBatchTaskParameterResponse> UpdateBatchTaskParameterOutcome;
                typedef std::future<UpdateBatchTaskParameterOutcome> UpdateBatchTaskParameterOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::UpdateBatchTaskParameterRequest&, UpdateBatchTaskParameterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateBatchTaskParameterAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateBatchTaskParamsResponse> UpdateBatchTaskParamsOutcome;
                typedef std::future<UpdateBatchTaskParamsOutcome> UpdateBatchTaskParamsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::UpdateBatchTaskParamsRequest&, UpdateBatchTaskParamsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateBatchTaskParamsAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateBatchTaskResourceGroupResponse> UpdateBatchTaskResourceGroupOutcome;
                typedef std::future<UpdateBatchTaskResourceGroupOutcome> UpdateBatchTaskResourceGroupOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::UpdateBatchTaskResourceGroupRequest&, UpdateBatchTaskResourceGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateBatchTaskResourceGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateBatchTaskScheduleResponse> UpdateBatchTaskScheduleOutcome;
                typedef std::future<UpdateBatchTaskScheduleOutcome> UpdateBatchTaskScheduleOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::UpdateBatchTaskScheduleRequest&, UpdateBatchTaskScheduleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateBatchTaskScheduleAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateDsEventResponse> UpdateDsEventOutcome;
                typedef std::future<UpdateDsEventOutcome> UpdateDsEventOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::UpdateDsEventRequest&, UpdateDsEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDsEventAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateEventListenerResponse> UpdateEventListenerOutcome;
                typedef std::future<UpdateEventListenerOutcome> UpdateEventListenerOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::UpdateEventListenerRequest&, UpdateEventListenerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEventListenerAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateInLongAgentResponse> UpdateInLongAgentOutcome;
                typedef std::future<UpdateInLongAgentOutcome> UpdateInLongAgentOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::UpdateInLongAgentRequest&, UpdateInLongAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateInLongAgentAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateTaskDsResponse> UpdateTaskDsOutcome;
                typedef std::future<UpdateTaskDsOutcome> UpdateTaskDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::UpdateTaskDsRequest&, UpdateTaskDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTaskDsAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateWorkflowOwnerResponse> UpdateWorkflowOwnerOutcome;
                typedef std::future<UpdateWorkflowOwnerOutcome> UpdateWorkflowOwnerOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::UpdateWorkflowOwnerRequest&, UpdateWorkflowOwnerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateWorkflowOwnerAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadAdvanceRunParamsResponse> UploadAdvanceRunParamsOutcome;
                typedef std::future<UploadAdvanceRunParamsOutcome> UploadAdvanceRunParamsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::UploadAdvanceRunParamsRequest&, UploadAdvanceRunParamsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadAdvanceRunParamsAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadContentResponse> UploadContentOutcome;
                typedef std::future<UploadContentOutcome> UploadContentOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::UploadContentRequest&, UploadContentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadContentAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadFilesDsResponse> UploadFilesDsOutcome;
                typedef std::future<UploadFilesDsOutcome> UploadFilesDsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::UploadFilesDsRequest&, UploadFilesDsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadFilesDsAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadResourceResponse> UploadResourceOutcome;
                typedef std::future<UploadResourceOutcome> UploadResourceOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::UploadResourceRequest&, UploadResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadResourceAsyncHandler;



                /**
                 *获取协同编辑资源锁
                 * @param req AcquireLockRequest
                 * @return AcquireLockOutcome
                 */
                AcquireLockOutcome AcquireLock(const Model::AcquireLockRequest &request);
                void AcquireLockAsync(const Model::AcquireLockRequest& request, const AcquireLockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AcquireLockOutcomeCallable AcquireLockCallable(const Model::AcquireLockRequest& request);

                /**
                 *上游依赖自动解析
                 * @param req AnalyzeDependentTasksRequest
                 * @return AnalyzeDependentTasksOutcome
                 */
                AnalyzeDependentTasksOutcome AnalyzeDependentTasks(const Model::AnalyzeDependentTasksRequest &request);
                void AnalyzeDependentTasksAsync(const Model::AnalyzeDependentTasksRequest& request, const AnalyzeDependentTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AnalyzeDependentTasksOutcomeCallable AnalyzeDependentTasksCallable(const Model::AnalyzeDependentTasksRequest& request);

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
                 *批量创建任务版本Ds
                 * @param req BatchCreateTaskVersionDsRequest
                 * @return BatchCreateTaskVersionDsOutcome
                 */
                BatchCreateTaskVersionDsOutcome BatchCreateTaskVersionDs(const Model::BatchCreateTaskVersionDsRequest &request);
                void BatchCreateTaskVersionDsAsync(const Model::BatchCreateTaskVersionDsRequest& request, const BatchCreateTaskVersionDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchCreateTaskVersionDsOutcomeCallable BatchCreateTaskVersionDsCallable(const Model::BatchCreateTaskVersionDsRequest& request);

                /**
                 *批量创建虚拟任务, 用于新建跨工作流任务场景中新增跨工作流任务操作
                 * @param req BatchCreateVirtualTaskDsRequest
                 * @return BatchCreateVirtualTaskDsOutcome
                 */
                BatchCreateVirtualTaskDsOutcome BatchCreateVirtualTaskDs(const Model::BatchCreateVirtualTaskDsRequest &request);
                void BatchCreateVirtualTaskDsAsync(const Model::BatchCreateVirtualTaskDsRequest& request, const BatchCreateVirtualTaskDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchCreateVirtualTaskDsOutcomeCallable BatchCreateVirtualTaskDsCallable(const Model::BatchCreateVirtualTaskDsRequest& request);

                /**
                 *批量删除集成任务
                 * @param req BatchDeleteIntegrationTasksRequest
                 * @return BatchDeleteIntegrationTasksOutcome
                 */
                BatchDeleteIntegrationTasksOutcome BatchDeleteIntegrationTasks(const Model::BatchDeleteIntegrationTasksRequest &request);
                void BatchDeleteIntegrationTasksAsync(const Model::BatchDeleteIntegrationTasksRequest& request, const BatchDeleteIntegrationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchDeleteIntegrationTasksOutcomeCallable BatchDeleteIntegrationTasksCallable(const Model::BatchDeleteIntegrationTasksRequest& request);

                /**
                 *智能运维-批量删除任务
                 * @param req BatchDeleteOpsTasksRequest
                 * @return BatchDeleteOpsTasksOutcome
                 */
                BatchDeleteOpsTasksOutcome BatchDeleteOpsTasks(const Model::BatchDeleteOpsTasksRequest &request);
                void BatchDeleteOpsTasksAsync(const Model::BatchDeleteOpsTasksRequest& request, const BatchDeleteOpsTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchDeleteOpsTasksOutcomeCallable BatchDeleteOpsTasksCallable(const Model::BatchDeleteOpsTasksRequest& request);

                /**
                 *Ds批量删除任务，仅对任务状态为”已停止“有效；
                 * @param req BatchDeleteTasksDsRequest
                 * @return BatchDeleteTasksDsOutcome
                 */
                BatchDeleteTasksDsOutcome BatchDeleteTasksDs(const Model::BatchDeleteTasksDsRequest &request);
                void BatchDeleteTasksDsAsync(const Model::BatchDeleteTasksDsRequest& request, const BatchDeleteTasksDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchDeleteTasksDsOutcomeCallable BatchDeleteTasksDsCallable(const Model::BatchDeleteTasksDsRequest& request);

                /**
                 *Ds批量删除任务，仅对任务状态为”已停止“有效；
                 * @param req BatchDeleteTasksDsAsyncRequest
                 * @return BatchDeleteTasksDsAsyncOutcome
                 */
                BatchDeleteTasksDsAsyncOutcome BatchDeleteTasksDsAsync(const Model::BatchDeleteTasksDsAsyncRequest &request);
                void BatchDeleteTasksDsAsyncAsync(const Model::BatchDeleteTasksDsAsyncRequest& request, const BatchDeleteTasksDsAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchDeleteTasksDsAsyncOutcomeCallable BatchDeleteTasksDsAsyncCallable(const Model::BatchDeleteTasksDsAsyncRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
批量删除任务，仅对任务状态为”已停止“有效；

                 * @param req BatchDeleteTasksNewRequest
                 * @return BatchDeleteTasksNewOutcome
                 */
                BatchDeleteTasksNewOutcome BatchDeleteTasksNew(const Model::BatchDeleteTasksNewRequest &request);
                void BatchDeleteTasksNewAsync(const Model::BatchDeleteTasksNewRequest& request, const BatchDeleteTasksNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchDeleteTasksNewOutcomeCallable BatchDeleteTasksNewCallable(const Model::BatchDeleteTasksNewRequest& request);

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
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
批量修改任务责任人
                 * @param req BatchModifyOwnersNewRequest
                 * @return BatchModifyOwnersNewOutcome
                 */
                BatchModifyOwnersNewOutcome BatchModifyOwnersNew(const Model::BatchModifyOwnersNewRequest &request);
                void BatchModifyOwnersNewAsync(const Model::BatchModifyOwnersNewRequest& request, const BatchModifyOwnersNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchModifyOwnersNewOutcomeCallable BatchModifyOwnersNewCallable(const Model::BatchModifyOwnersNewRequest& request);

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
                 *任务运维-任务列表 批量运行
                 * @param req BatchRunOpsTaskRequest
                 * @return BatchRunOpsTaskOutcome
                 */
                BatchRunOpsTaskOutcome BatchRunOpsTask(const Model::BatchRunOpsTaskRequest &request);
                void BatchRunOpsTaskAsync(const Model::BatchRunOpsTaskRequest& request, const BatchRunOpsTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchRunOpsTaskOutcomeCallable BatchRunOpsTaskCallable(const Model::BatchRunOpsTaskRequest& request);

                /**
                 *批量运行任务, 用于工作流-任务配置-运行、工作流-任务右键-运行、任务运维-任务管理-更多操作-运行、任务运维-任务管理-选择任务-批量运行等场景。
1. 任务运行预判断
2. 更新db中任务状态
3. 通知scheduler进行运行操作
                 * @param req BatchRunTasksDsRequest
                 * @return BatchRunTasksDsOutcome
                 */
                BatchRunTasksDsOutcome BatchRunTasksDs(const Model::BatchRunTasksDsRequest &request);
                void BatchRunTasksDsAsync(const Model::BatchRunTasksDsRequest& request, const BatchRunTasksDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchRunTasksDsOutcomeCallable BatchRunTasksDsCallable(const Model::BatchRunTasksDsRequest& request);

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
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
仅对任务状态为”调度中“和”已暂停“有效，对所选任务的任务实例进行终止，并停止调度
                 * @param req BatchStopTasksNewRequest
                 * @return BatchStopTasksNewOutcome
                 */
                BatchStopTasksNewOutcome BatchStopTasksNew(const Model::BatchStopTasksNewRequest &request);
                void BatchStopTasksNewAsync(const Model::BatchStopTasksNewRequest& request, const BatchStopTasksNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchStopTasksNewOutcomeCallable BatchStopTasksNewCallable(const Model::BatchStopTasksNewRequest& request);

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
                 *批量更新任务Ds
                 * @param req BatchUpdateTasksDsRequest
                 * @return BatchUpdateTasksDsOutcome
                 */
                BatchUpdateTasksDsOutcome BatchUpdateTasksDs(const Model::BatchUpdateTasksDsRequest &request);
                void BatchUpdateTasksDsAsync(const Model::BatchUpdateTasksDsRequest& request, const BatchUpdateTasksDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchUpdateTasksDsOutcomeCallable BatchUpdateTasksDsCallable(const Model::BatchUpdateTasksDsRequest& request);

                /**
                 *判断告警规则重名
                 * @param req CheckAlarmRegularNameExistRequest
                 * @return CheckAlarmRegularNameExistOutcome
                 */
                CheckAlarmRegularNameExistOutcome CheckAlarmRegularNameExist(const Model::CheckAlarmRegularNameExistRequest &request);
                void CheckAlarmRegularNameExistAsync(const Model::CheckAlarmRegularNameExistRequest& request, const CheckAlarmRegularNameExistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckAlarmRegularNameExistOutcomeCallable CheckAlarmRegularNameExistCallable(const Model::CheckAlarmRegularNameExistRequest& request);

                /**
                 *检查规则名称是否重复
                 * @param req CheckDuplicateRuleNameRequest
                 * @return CheckDuplicateRuleNameOutcome
                 */
                CheckDuplicateRuleNameOutcome CheckDuplicateRuleName(const Model::CheckDuplicateRuleNameRequest &request);
                void CheckDuplicateRuleNameAsync(const Model::CheckDuplicateRuleNameRequest& request, const CheckDuplicateRuleNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckDuplicateRuleNameOutcomeCallable CheckDuplicateRuleNameCallable(const Model::CheckDuplicateRuleNameRequest& request);

                /**
                 *检查规则模板名称是否重复
                 * @param req CheckDuplicateTemplateNameRequest
                 * @return CheckDuplicateTemplateNameOutcome
                 */
                CheckDuplicateTemplateNameOutcome CheckDuplicateTemplateName(const Model::CheckDuplicateTemplateNameRequest &request);
                void CheckDuplicateTemplateNameAsync(const Model::CheckDuplicateTemplateNameRequest& request, const CheckDuplicateTemplateNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckDuplicateTemplateNameOutcomeCallable CheckDuplicateTemplateNameCallable(const Model::CheckDuplicateTemplateNameRequest& request);

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
                 *检查任务名称是否重复
                 * @param req CheckTaskNameExistDsRequest
                 * @return CheckTaskNameExistDsOutcome
                 */
                CheckTaskNameExistDsOutcome CheckTaskNameExistDs(const Model::CheckTaskNameExistDsRequest &request);
                void CheckTaskNameExistDsAsync(const Model::CheckTaskNameExistDsRequest& request, const CheckTaskNameExistDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckTaskNameExistDsOutcomeCallable CheckTaskNameExistDsCallable(const Model::CheckTaskNameExistDsRequest& request);

                /**
                 *检查操作用户对所选任务是否有操作权限, 用于新建跨工作流任务场景中展示审批提示操作
                 * @param req CheckTaskPriorityDsRequest
                 * @return CheckTaskPriorityDsOutcome
                 */
                CheckTaskPriorityDsOutcome CheckTaskPriorityDs(const Model::CheckTaskPriorityDsRequest &request);
                void CheckTaskPriorityDsAsync(const Model::CheckTaskPriorityDsRequest& request, const CheckTaskPriorityDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckTaskPriorityDsOutcomeCallable CheckTaskPriorityDsCallable(const Model::CheckTaskPriorityDsRequest& request);

                /**
                 *提交数据导出任务
                 * @param req CommitExportTaskRequest
                 * @return CommitExportTaskOutcome
                 */
                CommitExportTaskOutcome CommitExportTask(const Model::CommitExportTaskRequest &request);
                void CommitExportTaskAsync(const Model::CommitExportTaskRequest& request, const CommitExportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CommitExportTaskOutcomeCallable CommitExportTaskCallable(const Model::CommitExportTaskRequest& request);

                /**
                 *提交集成任务
                 * @param req CommitIntegrationTaskRequest
                 * @return CommitIntegrationTaskOutcome
                 */
                CommitIntegrationTaskOutcome CommitIntegrationTask(const Model::CommitIntegrationTaskRequest &request);
                void CommitIntegrationTaskAsync(const Model::CommitIntegrationTaskRequest& request, const CommitIntegrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CommitIntegrationTaskOutcomeCallable CommitIntegrationTaskCallable(const Model::CommitIntegrationTaskRequest& request);

                /**
                 *Runner 规则检测结果上报
                 * @param req CommitRuleGroupExecResultRequest
                 * @return CommitRuleGroupExecResultOutcome
                 */
                CommitRuleGroupExecResultOutcome CommitRuleGroupExecResult(const Model::CommitRuleGroupExecResultRequest &request);
                void CommitRuleGroupExecResultAsync(const Model::CommitRuleGroupExecResultRequest& request, const CommitRuleGroupExecResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CommitRuleGroupExecResultOutcomeCallable CommitRuleGroupExecResultCallable(const Model::CommitRuleGroupExecResultRequest& request);

                /**
                 *提交规则组运行任务接口
                 * @param req CommitRuleGroupTaskRequest
                 * @return CommitRuleGroupTaskOutcome
                 */
                CommitRuleGroupTaskOutcome CommitRuleGroupTask(const Model::CommitRuleGroupTaskRequest &request);
                void CommitRuleGroupTaskAsync(const Model::CommitRuleGroupTaskRequest& request, const CommitRuleGroupTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CommitRuleGroupTaskOutcomeCallable CommitRuleGroupTaskCallable(const Model::CommitRuleGroupTaskRequest& request);

                /**
                 *复制任务Ds
                 * @param req CopyTaskDsRequest
                 * @return CopyTaskDsOutcome
                 */
                CopyTaskDsOutcome CopyTaskDs(const Model::CopyTaskDsRequest &request);
                void CopyTaskDsAsync(const Model::CopyTaskDsRequest& request, const CopyTaskDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CopyTaskDsOutcomeCallable CopyTaskDsCallable(const Model::CopyTaskDsRequest& request);

                /**
                 *统计任务实例状态
                 * @param req CountOpsInstanceStateRequest
                 * @return CountOpsInstanceStateOutcome
                 */
                CountOpsInstanceStateOutcome CountOpsInstanceState(const Model::CountOpsInstanceStateRequest &request);
                void CountOpsInstanceStateAsync(const Model::CountOpsInstanceStateRequest& request, const CountOpsInstanceStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CountOpsInstanceStateOutcomeCallable CountOpsInstanceStateCallable(const Model::CountOpsInstanceStateRequest& request);

                /**
                 *创建基线
                 * @param req CreateBaselineRequest
                 * @return CreateBaselineOutcome
                 */
                CreateBaselineOutcome CreateBaseline(const Model::CreateBaselineRequest &request);
                void CreateBaselineAsync(const Model::CreateBaselineRequest& request, const CreateBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBaselineOutcomeCallable CreateBaselineCallable(const Model::CreateBaselineRequest& request);

                /**
                 *创建用户自定义函数
                 * @param req CreateCustomFunctionRequest
                 * @return CreateCustomFunctionOutcome
                 */
                CreateCustomFunctionOutcome CreateCustomFunction(const Model::CreateCustomFunctionRequest &request);
                void CreateCustomFunctionAsync(const Model::CreateCustomFunctionRequest& request, const CreateCustomFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCustomFunctionOutcomeCallable CreateCustomFunctionCallable(const Model::CreateCustomFunctionRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
创建数据源
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
                 *创建开发空间版本
                 * @param req CreateFileVersionRequest
                 * @return CreateFileVersionOutcome
                 */
                CreateFileVersionOutcome CreateFileVersion(const Model::CreateFileVersionRequest &request);
                void CreateFileVersionAsync(const Model::CreateFileVersionRequest& request, const CreateFileVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFileVersionOutcomeCallable CreateFileVersionCallable(const Model::CreateFileVersionRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
创建文件夹
                 * @param req CreateFolderRequest
                 * @return CreateFolderOutcome
                 */
                CreateFolderOutcome CreateFolder(const Model::CreateFolderRequest &request);
                void CreateFolderAsync(const Model::CreateFolderRequest& request, const CreateFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFolderOutcomeCallable CreateFolderCallable(const Model::CreateFolderRequest& request);

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
                 *注册采集器
                 * @param req CreateInLongAgentRequest
                 * @return CreateInLongAgentOutcome
                 */
                CreateInLongAgentOutcome CreateInLongAgent(const Model::CreateInLongAgentRequest &request);
                void CreateInLongAgentAsync(const Model::CreateInLongAgentRequest& request, const CreateInLongAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInLongAgentOutcomeCallable CreateInLongAgentCallable(const Model::CreateInLongAgentRequest& request);

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
                 *补录任务
                 * @param req CreateOpsMakePlanRequest
                 * @return CreateOpsMakePlanOutcome
                 */
                CreateOpsMakePlanOutcome CreateOpsMakePlan(const Model::CreateOpsMakePlanRequest &request);
                void CreateOpsMakePlanAsync(const Model::CreateOpsMakePlanRequest& request, const CreateOpsMakePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOpsMakePlanOutcomeCallable CreateOpsMakePlanCallable(const Model::CreateOpsMakePlanRequest& request);

                /**
                 *资源管理需要先将资源上传到cos中，然后调用该接口，将cos资源绑定到wedata
                 * @param req CreateOrUpdateResourceRequest
                 * @return CreateOrUpdateResourceOutcome
                 */
                CreateOrUpdateResourceOutcome CreateOrUpdateResource(const Model::CreateOrUpdateResourceRequest &request);
                void CreateOrUpdateResourceAsync(const Model::CreateOrUpdateResourceRequest& request, const CreateOrUpdateResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOrUpdateResourceOutcomeCallable CreateOrUpdateResourceCallable(const Model::CreateOrUpdateResourceRequest& request);

                /**
                 *新建文件夹
                 * @param req CreatePathRequest
                 * @return CreatePathOutcome
                 */
                CreatePathOutcome CreatePath(const Model::CreatePathRequest &request);
                void CreatePathAsync(const Model::CreatePathRequest& request, const CreatePathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePathOutcomeCallable CreatePathCallable(const Model::CreatePathRequest& request);

                /**
                 *创建项目参数
                 * @param req CreateProjectParamDsRequest
                 * @return CreateProjectParamDsOutcome
                 */
                CreateProjectParamDsOutcome CreateProjectParamDs(const Model::CreateProjectParamDsRequest &request);
                void CreateProjectParamDsAsync(const Model::CreateProjectParamDsRequest& request, const CreateProjectParamDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProjectParamDsOutcomeCallable CreateProjectParamDsCallable(const Model::CreateProjectParamDsRequest& request);

                /**
                 *文件路径的根目录为 /datastudio/resource，如果要在根目录下创建 aaa 文件夹，FilePath的值应该为 /datastudio/resource，如果根目录下已经创建了 aaa 文件夹，要在 aaa 下创建  bbb 文件夹，FilePath的值应该为 /datastudio/resource/aaa
                 * @param req CreateResourcePathRequest
                 * @return CreateResourcePathOutcome
                 */
                CreateResourcePathOutcome CreateResourcePath(const Model::CreateResourcePathRequest &request);
                void CreateResourcePathAsync(const Model::CreateResourcePathRequest& request, const CreateResourcePathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateResourcePathOutcomeCallable CreateResourcePathCallable(const Model::CreateResourcePathRequest& request);

                /**
                 *创建质量规则接口
                 * @param req CreateRuleRequest
                 * @return CreateRuleOutcome
                 */
                CreateRuleOutcome CreateRule(const Model::CreateRuleRequest &request);
                void CreateRuleAsync(const Model::CreateRuleRequest& request, const CreateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRuleOutcomeCallable CreateRuleCallable(const Model::CreateRuleRequest& request);

                /**
                 *创建规则模版
                 * @param req CreateRuleTemplateRequest
                 * @return CreateRuleTemplateOutcome
                 */
                CreateRuleTemplateOutcome CreateRuleTemplate(const Model::CreateRuleTemplateRequest &request);
                void CreateRuleTemplateAsync(const Model::CreateRuleTemplateRequest& request, const CreateRuleTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRuleTemplateOutcomeCallable CreateRuleTemplateCallable(const Model::CreateRuleTemplateRequest& request);

                /**
                 *编排空间导入开发空间脚本。
                 * @param req CreateScriptsImportTasksDsRequest
                 * @return CreateScriptsImportTasksDsOutcome
                 */
                CreateScriptsImportTasksDsOutcome CreateScriptsImportTasksDs(const Model::CreateScriptsImportTasksDsRequest &request);
                void CreateScriptsImportTasksDsAsync(const Model::CreateScriptsImportTasksDsRequest& request, const CreateScriptsImportTasksDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateScriptsImportTasksDsOutcomeCallable CreateScriptsImportTasksDsCallable(const Model::CreateScriptsImportTasksDsRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
创建任务
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
                 *创建任务Ds
                 * @param req CreateTaskDsRequest
                 * @return CreateTaskDsOutcome
                 */
                CreateTaskDsOutcome CreateTaskDs(const Model::CreateTaskDsRequest &request);
                void CreateTaskDsAsync(const Model::CreateTaskDsRequest& request, const CreateTaskDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTaskDsOutcomeCallable CreateTaskDsCallable(const Model::CreateTaskDsRequest& request);

                /**
                 *编排空间-工作流-创建任务文件夹
                 * @param req CreateTaskFolderRequest
                 * @return CreateTaskFolderOutcome
                 */
                CreateTaskFolderOutcome CreateTaskFolder(const Model::CreateTaskFolderRequest &request);
                void CreateTaskFolderAsync(const Model::CreateTaskFolderRequest& request, const CreateTaskFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTaskFolderOutcomeCallable CreateTaskFolderCallable(const Model::CreateTaskFolderRequest& request);

                /**
                 *设置任务输入参数
                 * @param req CreateTaskInParamDsRequest
                 * @return CreateTaskInParamDsOutcome
                 */
                CreateTaskInParamDsOutcome CreateTaskInParamDs(const Model::CreateTaskInParamDsRequest &request);
                void CreateTaskInParamDsAsync(const Model::CreateTaskInParamDsRequest& request, const CreateTaskInParamDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTaskInParamDsOutcomeCallable CreateTaskInParamDsCallable(const Model::CreateTaskInParamDsRequest& request);

                /**
                 *设置任务输出参数
                 * @param req CreateTaskOutParamDsRequest
                 * @return CreateTaskOutParamDsOutcome
                 */
                CreateTaskOutParamDsOutcome CreateTaskOutParamDs(const Model::CreateTaskOutParamDsRequest &request);
                void CreateTaskOutParamDsAsync(const Model::CreateTaskOutParamDsRequest& request, const CreateTaskOutParamDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTaskOutParamDsOutcomeCallable CreateTaskOutParamDsCallable(const Model::CreateTaskOutParamDsRequest& request);

                /**
                 *批量创建登记项
                 * @param req CreateTaskOutputRegistriesRequest
                 * @return CreateTaskOutputRegistriesOutcome
                 */
                CreateTaskOutputRegistriesOutcome CreateTaskOutputRegistries(const Model::CreateTaskOutputRegistriesRequest &request);
                void CreateTaskOutputRegistriesAsync(const Model::CreateTaskOutputRegistriesRequest& request, const CreateTaskOutputRegistriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTaskOutputRegistriesOutcomeCallable CreateTaskOutputRegistriesCallable(const Model::CreateTaskOutputRegistriesRequest& request);

                /**
                 *新增或编辑产出登记项
                 * @param req CreateTaskOutputRegistryRequest
                 * @return CreateTaskOutputRegistryOutcome
                 */
                CreateTaskOutputRegistryOutcome CreateTaskOutputRegistry(const Model::CreateTaskOutputRegistryRequest &request);
                void CreateTaskOutputRegistryAsync(const Model::CreateTaskOutputRegistryRequest& request, const CreateTaskOutputRegistryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTaskOutputRegistryOutcomeCallable CreateTaskOutputRegistryCallable(const Model::CreateTaskOutputRegistryRequest& request);

                /**
                 *任务引用参数
                 * @param req CreateTaskParamDsRequest
                 * @return CreateTaskParamDsOutcome
                 */
                CreateTaskParamDsOutcome CreateTaskParamDs(const Model::CreateTaskParamDsRequest &request);
                void CreateTaskParamDsAsync(const Model::CreateTaskParamDsRequest& request, const CreateTaskParamDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTaskParamDsOutcomeCallable CreateTaskParamDsCallable(const Model::CreateTaskParamDsRequest& request);

                /**
                 *创建任务版本
                 * @param req CreateTaskVersionDsRequest
                 * @return CreateTaskVersionDsOutcome
                 */
                CreateTaskVersionDsOutcome CreateTaskVersionDs(const Model::CreateTaskVersionDsRequest &request);
                void CreateTaskVersionDsAsync(const Model::CreateTaskVersionDsRequest& request, const CreateTaskVersionDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTaskVersionDsOutcomeCallable CreateTaskVersionDsCallable(const Model::CreateTaskVersionDsRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
创建工作流
                 * @param req CreateWorkflowRequest
                 * @return CreateWorkflowOutcome
                 */
                CreateWorkflowOutcome CreateWorkflow(const Model::CreateWorkflowRequest &request);
                void CreateWorkflowAsync(const Model::CreateWorkflowRequest& request, const CreateWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWorkflowOutcomeCallable CreateWorkflowCallable(const Model::CreateWorkflowRequest& request);

                /**
                 *拉取dag实例
                 * @param req DagInstancesRequest
                 * @return DagInstancesOutcome
                 */
                DagInstancesOutcome DagInstances(const Model::DagInstancesRequest &request);
                void DagInstancesAsync(const Model::DagInstancesRequest& request, const DagInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DagInstancesOutcomeCallable DagInstancesCallable(const Model::DagInstancesRequest& request);

                /**
                 *DeleteBaseline
                 * @param req DeleteBaselineRequest
                 * @return DeleteBaselineOutcome
                 */
                DeleteBaselineOutcome DeleteBaseline(const Model::DeleteBaselineRequest &request);
                void DeleteBaselineAsync(const Model::DeleteBaselineRequest& request, const DeleteBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBaselineOutcomeCallable DeleteBaselineCallable(const Model::DeleteBaselineRequest& request);

                /**
                 *删除用户自定义函数
                 * @param req DeleteCustomFunctionRequest
                 * @return DeleteCustomFunctionOutcome
                 */
                DeleteCustomFunctionOutcome DeleteCustomFunction(const Model::DeleteCustomFunctionRequest &request);
                void DeleteCustomFunctionAsync(const Model::DeleteCustomFunctionRequest& request, const DeleteCustomFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCustomFunctionOutcomeCallable DeleteCustomFunctionCallable(const Model::DeleteCustomFunctionRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
删除数据源
                 * @param req DeleteDataSourcesRequest
                 * @return DeleteDataSourcesOutcome
                 */
                DeleteDataSourcesOutcome DeleteDataSources(const Model::DeleteDataSourcesRequest &request);
                void DeleteDataSourcesAsync(const Model::DeleteDataSourcesRequest& request, const DeleteDataSourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDataSourcesOutcomeCallable DeleteDataSourcesCallable(const Model::DeleteDataSourcesRequest& request);

                /**
                 *删除事件监听者
                 * @param req DeleteDsEventListenerRequest
                 * @return DeleteDsEventListenerOutcome
                 */
                DeleteDsEventListenerOutcome DeleteDsEventListener(const Model::DeleteDsEventListenerRequest &request);
                void DeleteDsEventListenerAsync(const Model::DeleteDsEventListenerRequest& request, const DeleteDsEventListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDsEventListenerOutcomeCallable DeleteDsEventListenerCallable(const Model::DeleteDsEventListenerRequest& request);

                /**
                 *删除事件发布者
                 * @param req DeleteDsEventPublisherRequest
                 * @return DeleteDsEventPublisherOutcome
                 */
                DeleteDsEventPublisherOutcome DeleteDsEventPublisher(const Model::DeleteDsEventPublisherRequest &request);
                void DeleteDsEventPublisherAsync(const Model::DeleteDsEventPublisherRequest& request, const DeleteDsEventPublisherAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDsEventPublisherOutcomeCallable DeleteDsEventPublisherCallable(const Model::DeleteDsEventPublisherRequest& request);

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
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
删除文件夹
                 * @param req DeleteFolderRequest
                 * @return DeleteFolderOutcome
                 */
                DeleteFolderOutcome DeleteFolder(const Model::DeleteFolderRequest &request);
                void DeleteFolderAsync(const Model::DeleteFolderRequest& request, const DeleteFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteFolderOutcomeCallable DeleteFolderCallable(const Model::DeleteFolderRequest& request);

                /**
                 *删除采集器
                 * @param req DeleteInLongAgentRequest
                 * @return DeleteInLongAgentOutcome
                 */
                DeleteInLongAgentOutcome DeleteInLongAgent(const Model::DeleteInLongAgentRequest &request);
                void DeleteInLongAgentAsync(const Model::DeleteInLongAgentRequest& request, const DeleteInLongAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteInLongAgentOutcomeCallable DeleteInLongAgentCallable(const Model::DeleteInLongAgentRequest& request);

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
                 *删除项目参数版本
                 * @param req DeleteProjectParamVersionDsRequest
                 * @return DeleteProjectParamVersionDsOutcome
                 */
                DeleteProjectParamVersionDsOutcome DeleteProjectParamVersionDs(const Model::DeleteProjectParamVersionDsRequest &request);
                void DeleteProjectParamVersionDsAsync(const Model::DeleteProjectParamVersionDsRequest& request, const DeleteProjectParamVersionDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteProjectParamVersionDsOutcomeCallable DeleteProjectParamVersionDsCallable(const Model::DeleteProjectParamVersionDsRequest& request);

                /**
                 *删除项目用户
                 * @param req DeleteProjectUsersRequest
                 * @return DeleteProjectUsersOutcome
                 */
                DeleteProjectUsersOutcome DeleteProjectUsers(const Model::DeleteProjectUsersRequest &request);
                void DeleteProjectUsersAsync(const Model::DeleteProjectUsersRequest& request, const DeleteProjectUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteProjectUsersOutcomeCallable DeleteProjectUsersCallable(const Model::DeleteProjectUsersRequest& request);

                /**
                 *资源管理删除资源
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
                 *删除规则模版
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
                 *删除任务Ds
                 * @param req DeleteTaskDsRequest
                 * @return DeleteTaskDsOutcome
                 */
                DeleteTaskDsOutcome DeleteTaskDs(const Model::DeleteTaskDsRequest &request);
                void DeleteTaskDsAsync(const Model::DeleteTaskDsRequest& request, const DeleteTaskDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTaskDsOutcomeCallable DeleteTaskDsCallable(const Model::DeleteTaskDsRequest& request);

                /**
                 *编排空间-工作流-删除任务文件夹
                 * @param req DeleteTaskFolderRequest
                 * @return DeleteTaskFolderOutcome
                 */
                DeleteTaskFolderOutcome DeleteTaskFolder(const Model::DeleteTaskFolderRequest &request);
                void DeleteTaskFolderAsync(const Model::DeleteTaskFolderRequest& request, const DeleteTaskFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTaskFolderOutcomeCallable DeleteTaskFolderCallable(const Model::DeleteTaskFolderRequest& request);

                /**
                 *删除任务输入参数
                 * @param req DeleteTaskInParamDsRequest
                 * @return DeleteTaskInParamDsOutcome
                 */
                DeleteTaskInParamDsOutcome DeleteTaskInParamDs(const Model::DeleteTaskInParamDsRequest &request);
                void DeleteTaskInParamDsAsync(const Model::DeleteTaskInParamDsRequest& request, const DeleteTaskInParamDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTaskInParamDsOutcomeCallable DeleteTaskInParamDsCallable(const Model::DeleteTaskInParamDsRequest& request);

                /**
                 *删除任务输出参数
                 * @param req DeleteTaskOutParamDsRequest
                 * @return DeleteTaskOutParamDsOutcome
                 */
                DeleteTaskOutParamDsOutcome DeleteTaskOutParamDs(const Model::DeleteTaskOutParamDsRequest &request);
                void DeleteTaskOutParamDsAsync(const Model::DeleteTaskOutParamDsRequest& request, const DeleteTaskOutParamDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTaskOutParamDsOutcomeCallable DeleteTaskOutParamDsCallable(const Model::DeleteTaskOutParamDsRequest& request);

                /**
                 *删除产出登记项
                 * @param req DeleteTaskOutputRegistryRequest
                 * @return DeleteTaskOutputRegistryOutcome
                 */
                DeleteTaskOutputRegistryOutcome DeleteTaskOutputRegistry(const Model::DeleteTaskOutputRegistryRequest &request);
                void DeleteTaskOutputRegistryAsync(const Model::DeleteTaskOutputRegistryRequest& request, const DeleteTaskOutputRegistryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTaskOutputRegistryOutcomeCallable DeleteTaskOutputRegistryCallable(const Model::DeleteTaskOutputRegistryRequest& request);

                /**
                 *通过工作流Id删除工作流
                 * @param req DeleteWorkflowByIdRequest
                 * @return DeleteWorkflowByIdOutcome
                 */
                DeleteWorkflowByIdOutcome DeleteWorkflowById(const Model::DeleteWorkflowByIdRequest &request);
                void DeleteWorkflowByIdAsync(const Model::DeleteWorkflowByIdRequest& request, const DeleteWorkflowByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWorkflowByIdOutcomeCallable DeleteWorkflowByIdCallable(const Model::DeleteWorkflowByIdRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
删除工作流
                 * @param req DeleteWorkflowNewRequest
                 * @return DeleteWorkflowNewOutcome
                 */
                DeleteWorkflowNewOutcome DeleteWorkflowNew(const Model::DeleteWorkflowNewRequest &request);
                void DeleteWorkflowNewAsync(const Model::DeleteWorkflowNewRequest& request, const DeleteWorkflowNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWorkflowNewOutcomeCallable DeleteWorkflowNewCallable(const Model::DeleteWorkflowNewRequest& request);

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
                 *获取所有任务类型
                 * @param req DescribeAllTaskTypeRequest
                 * @return DescribeAllTaskTypeOutcome
                 */
                DescribeAllTaskTypeOutcome DescribeAllTaskType(const Model::DescribeAllTaskTypeRequest &request);
                void DescribeAllTaskTypeAsync(const Model::DescribeAllTaskTypeRequest& request, const DescribeAllTaskTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAllTaskTypeOutcomeCallable DescribeAllTaskTypeCallable(const Model::DescribeAllTaskTypeRequest& request);

                /**
                 *根据任务Id查找生产态子任务
                 * @param req DescribeAllUsedVersionSonRequest
                 * @return DescribeAllUsedVersionSonOutcome
                 */
                DescribeAllUsedVersionSonOutcome DescribeAllUsedVersionSon(const Model::DescribeAllUsedVersionSonRequest &request);
                void DescribeAllUsedVersionSonAsync(const Model::DescribeAllUsedVersionSonRequest& request, const DescribeAllUsedVersionSonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAllUsedVersionSonOutcomeCallable DescribeAllUsedVersionSonCallable(const Model::DescribeAllUsedVersionSonRequest& request);

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
                 *查询基线DAG
                 * @param req DescribeBaselineAllTaskDagRequest
                 * @return DescribeBaselineAllTaskDagOutcome
                 */
                DescribeBaselineAllTaskDagOutcome DescribeBaselineAllTaskDag(const Model::DescribeBaselineAllTaskDagRequest &request);
                void DescribeBaselineAllTaskDagAsync(const Model::DescribeBaselineAllTaskDagRequest& request, const DescribeBaselineAllTaskDagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineAllTaskDagOutcomeCallable DescribeBaselineAllTaskDagCallable(const Model::DescribeBaselineAllTaskDagRequest& request);

                /**
                 *基线列表
                 * @param req DescribeBaselineByIdRequest
                 * @return DescribeBaselineByIdOutcome
                 */
                DescribeBaselineByIdOutcome DescribeBaselineById(const Model::DescribeBaselineByIdRequest &request);
                void DescribeBaselineByIdAsync(const Model::DescribeBaselineByIdRequest& request, const DescribeBaselineByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineByIdOutcomeCallable DescribeBaselineByIdCallable(const Model::DescribeBaselineByIdRequest& request);

                /**
                 *查询基线实例DAG
                 * @param req DescribeBaselineInstanceDagRequest
                 * @return DescribeBaselineInstanceDagOutcome
                 */
                DescribeBaselineInstanceDagOutcome DescribeBaselineInstanceDag(const Model::DescribeBaselineInstanceDagRequest &request);
                void DescribeBaselineInstanceDagAsync(const Model::DescribeBaselineInstanceDagRequest& request, const DescribeBaselineInstanceDagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineInstanceDagOutcomeCallable DescribeBaselineInstanceDagCallable(const Model::DescribeBaselineInstanceDagRequest& request);

                /**
                 *查询基线实例关键任务实例甘特图
                 * @param req DescribeBaselineInstanceGanttRequest
                 * @return DescribeBaselineInstanceGanttOutcome
                 */
                DescribeBaselineInstanceGanttOutcome DescribeBaselineInstanceGantt(const Model::DescribeBaselineInstanceGanttRequest &request);
                void DescribeBaselineInstanceGanttAsync(const Model::DescribeBaselineInstanceGanttRequest& request, const DescribeBaselineInstanceGanttAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineInstanceGanttOutcomeCallable DescribeBaselineInstanceGanttCallable(const Model::DescribeBaselineInstanceGanttRequest& request);

                /**
                 *查询基线实例列表
                 * @param req DescribeBaselineInstancesRequest
                 * @return DescribeBaselineInstancesOutcome
                 */
                DescribeBaselineInstancesOutcome DescribeBaselineInstances(const Model::DescribeBaselineInstancesRequest &request);
                void DescribeBaselineInstancesAsync(const Model::DescribeBaselineInstancesRequest& request, const DescribeBaselineInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineInstancesOutcomeCallable DescribeBaselineInstancesCallable(const Model::DescribeBaselineInstancesRequest& request);

                /**
                 *基线列表
                 * @param req DescribeBaselinesRequest
                 * @return DescribeBaselinesOutcome
                 */
                DescribeBaselinesOutcome DescribeBaselines(const Model::DescribeBaselinesRequest &request);
                void DescribeBaselinesAsync(const Model::DescribeBaselinesRequest& request, const DescribeBaselinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselinesOutcomeCallable DescribeBaselinesCallable(const Model::DescribeBaselinesRequest& request);

                /**
                 *批量操作任务列表
                 * @param req DescribeBatchOperateTaskRequest
                 * @return DescribeBatchOperateTaskOutcome
                 */
                DescribeBatchOperateTaskOutcome DescribeBatchOperateTask(const Model::DescribeBatchOperateTaskRequest &request);
                void DescribeBatchOperateTaskAsync(const Model::DescribeBatchOperateTaskRequest& request, const DescribeBatchOperateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBatchOperateTaskOutcomeCallable DescribeBatchOperateTaskCallable(const Model::DescribeBatchOperateTaskRequest& request);

                /**
                 *智能运维-事件列表-所属任务/基线过滤列表
                 * @param req DescribeBelongToRequest
                 * @return DescribeBelongToOutcome
                 */
                DescribeBelongToOutcome DescribeBelongTo(const Model::DescribeBelongToRequest &request);
                void DescribeBelongToAsync(const Model::DescribeBelongToRequest& request, const DescribeBelongToAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBelongToOutcomeCallable DescribeBelongToCallable(const Model::DescribeBelongToRequest& request);

                /**
                 *查询用户数据开发浏览历史
                 * @param req DescribeBrowsingHistoriesRequest
                 * @return DescribeBrowsingHistoriesOutcome
                 */
                DescribeBrowsingHistoriesOutcome DescribeBrowsingHistories(const Model::DescribeBrowsingHistoriesRequest &request);
                void DescribeBrowsingHistoriesAsync(const Model::DescribeBrowsingHistoriesRequest& request, const DescribeBrowsingHistoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBrowsingHistoriesOutcomeCallable DescribeBrowsingHistoriesCallable(const Model::DescribeBrowsingHistoriesRequest& request);

                /**
                 *查询子任务信息Ds
                 * @param req DescribeChildrenDsRequest
                 * @return DescribeChildrenDsOutcome
                 */
                DescribeChildrenDsOutcome DescribeChildrenDs(const Model::DescribeChildrenDsRequest &request);
                void DescribeChildrenDsAsync(const Model::DescribeChildrenDsRequest& request, const DescribeChildrenDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeChildrenDsOutcomeCallable DescribeChildrenDsCallable(const Model::DescribeChildrenDsRequest& request);

                /**
                 *开发空间-拉取指定路径目录树
                 * @param req DescribeChildrenPathTreesRequest
                 * @return DescribeChildrenPathTreesOutcome
                 */
                DescribeChildrenPathTreesOutcome DescribeChildrenPathTrees(const Model::DescribeChildrenPathTreesRequest &request);
                void DescribeChildrenPathTreesAsync(const Model::DescribeChildrenPathTreesRequest& request, const DescribeChildrenPathTreesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeChildrenPathTreesOutcomeCallable DescribeChildrenPathTreesCallable(const Model::DescribeChildrenPathTreesRequest& request);

                /**
                 *获取集群命名空间列表
                 * @param req DescribeClusterNamespaceListRequest
                 * @return DescribeClusterNamespaceListOutcome
                 */
                DescribeClusterNamespaceListOutcome DescribeClusterNamespaceList(const Model::DescribeClusterNamespaceListRequest &request);
                void DescribeClusterNamespaceListAsync(const Model::DescribeClusterNamespaceListRequest& request, const DescribeClusterNamespaceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterNamespaceListOutcomeCallable DescribeClusterNamespaceListCallable(const Model::DescribeClusterNamespaceListRequest& request);

                /**
                 *查询文件或任务详情
                 * @param req DescribeCodeDetailRequest
                 * @return DescribeCodeDetailOutcome
                 */
                DescribeCodeDetailOutcome DescribeCodeDetail(const Model::DescribeCodeDetailRequest &request);
                void DescribeCodeDetailAsync(const Model::DescribeCodeDetailRequest& request, const DescribeCodeDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCodeDetailOutcomeCallable DescribeCodeDetailCallable(const Model::DescribeCodeDetailRequest& request);

                /**
                 *全局搜索查询文件或任务详情
                 * @param req DescribeCodeDetailV2Request
                 * @return DescribeCodeDetailV2Outcome
                 */
                DescribeCodeDetailV2Outcome DescribeCodeDetailV2(const Model::DescribeCodeDetailV2Request &request);
                void DescribeCodeDetailV2Async(const Model::DescribeCodeDetailV2Request& request, const DescribeCodeDetailV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCodeDetailV2OutcomeCallable DescribeCodeDetailV2Callable(const Model::DescribeCodeDetailV2Request& request);

                /**
                 *查询最近5条代码搜索审计日志
                 * @param req DescribeCodeSearchAuditInfoRequest
                 * @return DescribeCodeSearchAuditInfoOutcome
                 */
                DescribeCodeSearchAuditInfoOutcome DescribeCodeSearchAuditInfo(const Model::DescribeCodeSearchAuditInfoRequest &request);
                void DescribeCodeSearchAuditInfoAsync(const Model::DescribeCodeSearchAuditInfoRequest& request, const DescribeCodeSearchAuditInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCodeSearchAuditInfoOutcomeCallable DescribeCodeSearchAuditInfoCallable(const Model::DescribeCodeSearchAuditInfoRequest& request);

                /**
                 *获取代码搜索最近n条关键字搜索信息
                 * @param req DescribeCodeSearchAuditInfoV2Request
                 * @return DescribeCodeSearchAuditInfoV2Outcome
                 */
                DescribeCodeSearchAuditInfoV2Outcome DescribeCodeSearchAuditInfoV2(const Model::DescribeCodeSearchAuditInfoV2Request &request);
                void DescribeCodeSearchAuditInfoV2Async(const Model::DescribeCodeSearchAuditInfoV2Request& request, const DescribeCodeSearchAuditInfoV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCodeSearchAuditInfoV2OutcomeCallable DescribeCodeSearchAuditInfoV2Callable(const Model::DescribeCodeSearchAuditInfoV2Request& request);

                /**
                 *代码搜索结果的统计信息
                 * @param req DescribeCodeSearchCountRequest
                 * @return DescribeCodeSearchCountOutcome
                 */
                DescribeCodeSearchCountOutcome DescribeCodeSearchCount(const Model::DescribeCodeSearchCountRequest &request);
                void DescribeCodeSearchCountAsync(const Model::DescribeCodeSearchCountRequest& request, const DescribeCodeSearchCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCodeSearchCountOutcomeCallable DescribeCodeSearchCountCallable(const Model::DescribeCodeSearchCountRequest& request);

                /**
                 *根据条件搜索代码
                 * @param req DescribeCodeSearchInfoRequest
                 * @return DescribeCodeSearchInfoOutcome
                 */
                DescribeCodeSearchInfoOutcome DescribeCodeSearchInfo(const Model::DescribeCodeSearchInfoRequest &request);
                void DescribeCodeSearchInfoAsync(const Model::DescribeCodeSearchInfoRequest& request, const DescribeCodeSearchInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCodeSearchInfoOutcomeCallable DescribeCodeSearchInfoCallable(const Model::DescribeCodeSearchInfoRequest& request);

                /**
                 *全局搜索根据条件搜索代码
                 * @param req DescribeCodeSearchInfoV2Request
                 * @return DescribeCodeSearchInfoV2Outcome
                 */
                DescribeCodeSearchInfoV2Outcome DescribeCodeSearchInfoV2(const Model::DescribeCodeSearchInfoV2Request &request);
                void DescribeCodeSearchInfoV2Async(const Model::DescribeCodeSearchInfoV2Request& request, const DescribeCodeSearchInfoV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCodeSearchInfoV2OutcomeCallable DescribeCodeSearchInfoV2Callable(const Model::DescribeCodeSearchInfoV2Request& request);

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
                 *获取 crontab topN 个数据时间周期
                 * @param req DescribeCrontabTopNDsRequest
                 * @return DescribeCrontabTopNDsOutcome
                 */
                DescribeCrontabTopNDsOutcome DescribeCrontabTopNDs(const Model::DescribeCrontabTopNDsRequest &request);
                void DescribeCrontabTopNDsAsync(const Model::DescribeCrontabTopNDsRequest& request, const DescribeCrontabTopNDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCrontabTopNDsOutcomeCallable DescribeCrontabTopNDsCallable(const Model::DescribeCrontabTopNDsRequest& request);

                /**
                 *查询数据来源列表
                 * @param req DescribeDataBasesRequest
                 * @return DescribeDataBasesOutcome
                 */
                DescribeDataBasesOutcome DescribeDataBases(const Model::DescribeDataBasesRequest &request);
                void DescribeDataBasesAsync(const Model::DescribeDataBasesRequest& request, const DescribeDataBasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataBasesOutcomeCallable DescribeDataBasesCallable(const Model::DescribeDataBasesRequest& request);

                /**
                 *数据质量的概览页面数据监测情况接口
                 * @param req DescribeDataCheckStatRequest
                 * @return DescribeDataCheckStatOutcome
                 */
                DescribeDataCheckStatOutcome DescribeDataCheckStat(const Model::DescribeDataCheckStatRequest &request);
                void DescribeDataCheckStatAsync(const Model::DescribeDataCheckStatRequest& request, const DescribeDataCheckStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataCheckStatOutcomeCallable DescribeDataCheckStatCallable(const Model::DescribeDataCheckStatRequest& request);

                /**
                 *获取数据开发任务类型
                 * @param req DescribeDataDevelopTaskTypeRequest
                 * @return DescribeDataDevelopTaskTypeOutcome
                 */
                DescribeDataDevelopTaskTypeOutcome DescribeDataDevelopTaskType(const Model::DescribeDataDevelopTaskTypeRequest &request);
                void DescribeDataDevelopTaskTypeAsync(const Model::DescribeDataDevelopTaskTypeRequest& request, const DescribeDataDevelopTaskTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataDevelopTaskTypeOutcomeCallable DescribeDataDevelopTaskTypeCallable(const Model::DescribeDataDevelopTaskTypeRequest& request);

                /**
                 *查询规则组数据对象列表
                 * @param req DescribeDataObjectsRequest
                 * @return DescribeDataObjectsOutcome
                 */
                DescribeDataObjectsOutcome DescribeDataObjects(const Model::DescribeDataObjectsRequest &request);
                void DescribeDataObjectsAsync(const Model::DescribeDataObjectsRequest& request, const DescribeDataObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataObjectsOutcomeCallable DescribeDataObjectsCallable(const Model::DescribeDataObjectsRequest& request);

                /**
                 *获取数据源信息-数据源分页列表
                 * @param req DescribeDataSourceInfoListRequest
                 * @return DescribeDataSourceInfoListOutcome
                 */
                DescribeDataSourceInfoListOutcome DescribeDataSourceInfoList(const Model::DescribeDataSourceInfoListRequest &request);
                void DescribeDataSourceInfoListAsync(const Model::DescribeDataSourceInfoListRequest& request, const DescribeDataSourceInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataSourceInfoListOutcomeCallable DescribeDataSourceInfoListCallable(const Model::DescribeDataSourceInfoListRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
数据源详情
                 * @param req DescribeDataSourceListRequest
                 * @return DescribeDataSourceListOutcome
                 */
                DescribeDataSourceListOutcome DescribeDataSourceList(const Model::DescribeDataSourceListRequest &request);
                void DescribeDataSourceListAsync(const Model::DescribeDataSourceListRequest& request, const DescribeDataSourceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataSourceListOutcomeCallable DescribeDataSourceListCallable(const Model::DescribeDataSourceListRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
数据源列表
                 * @param req DescribeDataSourceWithoutInfoRequest
                 * @return DescribeDataSourceWithoutInfoOutcome
                 */
                DescribeDataSourceWithoutInfoOutcome DescribeDataSourceWithoutInfo(const Model::DescribeDataSourceWithoutInfoRequest &request);
                void DescribeDataSourceWithoutInfoAsync(const Model::DescribeDataSourceWithoutInfoRequest& request, const DescribeDataSourceWithoutInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataSourceWithoutInfoOutcomeCallable DescribeDataSourceWithoutInfoCallable(const Model::DescribeDataSourceWithoutInfoRequest& request);

                /**
                 *获取字段类型列表
                 * @param req DescribeDataTypesRequest
                 * @return DescribeDataTypesOutcome
                 */
                DescribeDataTypesOutcome DescribeDataTypes(const Model::DescribeDataTypesRequest &request);
                void DescribeDataTypesAsync(const Model::DescribeDataTypesRequest& request, const DescribeDataTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataTypesOutcomeCallable DescribeDataTypesCallable(const Model::DescribeDataTypesRequest& request);

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
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
数据源详情
                 * @param req DescribeDatasourceRequest
                 * @return DescribeDatasourceOutcome
                 */
                DescribeDatasourceOutcome DescribeDatasource(const Model::DescribeDatasourceRequest &request);
                void DescribeDatasourceAsync(const Model::DescribeDatasourceRequest& request, const DescribeDatasourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatasourceOutcomeCallable DescribeDatasourceCallable(const Model::DescribeDatasourceRequest& request);

                /**
                 *根据任务id获取下游依赖任务列表
                 * @param req DescribeDependOpsTaskListRequest
                 * @return DescribeDependOpsTaskListOutcome
                 */
                DescribeDependOpsTaskListOutcome DescribeDependOpsTaskList(const Model::DescribeDependOpsTaskListRequest &request);
                void DescribeDependOpsTaskListAsync(const Model::DescribeDependOpsTaskListRequest& request, const DescribeDependOpsTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDependOpsTaskListOutcomeCallable DescribeDependOpsTaskListCallable(const Model::DescribeDependOpsTaskListRequest& request);

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
                 *根据层级查找开发态上下游任务节点
                 * @param req DescribeDependTasksDevDsRequest
                 * @return DescribeDependTasksDevDsOutcome
                 */
                DescribeDependTasksDevDsOutcome DescribeDependTasksDevDs(const Model::DescribeDependTasksDevDsRequest &request);
                void DescribeDependTasksDevDsAsync(const Model::DescribeDependTasksDevDsRequest& request, const DescribeDependTasksDevDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDependTasksDevDsOutcomeCallable DescribeDependTasksDevDsCallable(const Model::DescribeDependTasksDevDsRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
根据层级查找上/下游任务节点
                 * @param req DescribeDependTasksNewRequest
                 * @return DescribeDependTasksNewOutcome
                 */
                DescribeDependTasksNewOutcome DescribeDependTasksNew(const Model::DescribeDependTasksNewRequest &request);
                void DescribeDependTasksNewAsync(const Model::DescribeDependTasksNewRequest& request, const DescribeDependTasksNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDependTasksNewOutcomeCallable DescribeDependTasksNewCallable(const Model::DescribeDependTasksNewRequest& request);

                /**
                 *【项目克隆任务模式】依赖任务信息查询
                 * @param req DescribeDependencyTasksForProjectCloneRequest
                 * @return DescribeDependencyTasksForProjectCloneOutcome
                 */
                DescribeDependencyTasksForProjectCloneOutcome DescribeDependencyTasksForProjectClone(const Model::DescribeDependencyTasksForProjectCloneRequest &request);
                void DescribeDependencyTasksForProjectCloneAsync(const Model::DescribeDependencyTasksForProjectCloneRequest& request, const DescribeDependencyTasksForProjectCloneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDependencyTasksForProjectCloneOutcomeCallable DescribeDependencyTasksForProjectCloneCallable(const Model::DescribeDependencyTasksForProjectCloneRequest& request);

                /**
                 *查询依赖工作流信息查询-项目克隆使用
                 * @param req DescribeDependencyWorkflowForProjectCloneRequest
                 * @return DescribeDependencyWorkflowForProjectCloneOutcome
                 */
                DescribeDependencyWorkflowForProjectCloneOutcome DescribeDependencyWorkflowForProjectClone(const Model::DescribeDependencyWorkflowForProjectCloneRequest &request);
                void DescribeDependencyWorkflowForProjectCloneAsync(const Model::DescribeDependencyWorkflowForProjectCloneRequest& request, const DescribeDependencyWorkflowForProjectCloneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDependencyWorkflowForProjectCloneOutcomeCallable DescribeDependencyWorkflowForProjectCloneCallable(const Model::DescribeDependencyWorkflowForProjectCloneRequest& request);

                /**
                 *获取开发空间支持的脚本类型
                 * @param req DescribeDevelopmentSpaceSupportTypeRequest
                 * @return DescribeDevelopmentSpaceSupportTypeOutcome
                 */
                DescribeDevelopmentSpaceSupportTypeOutcome DescribeDevelopmentSpaceSupportType(const Model::DescribeDevelopmentSpaceSupportTypeRequest &request);
                void DescribeDevelopmentSpaceSupportTypeAsync(const Model::DescribeDevelopmentSpaceSupportTypeRequest& request, const DescribeDevelopmentSpaceSupportTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDevelopmentSpaceSupportTypeOutcomeCallable DescribeDevelopmentSpaceSupportTypeCallable(const Model::DescribeDevelopmentSpaceSupportTypeRequest& request);

                /**
                 *查询基线诊断信息
                 * @param req DescribeDiagnosticInfoByBaselineIdRequest
                 * @return DescribeDiagnosticInfoByBaselineIdOutcome
                 */
                DescribeDiagnosticInfoByBaselineIdOutcome DescribeDiagnosticInfoByBaselineId(const Model::DescribeDiagnosticInfoByBaselineIdRequest &request);
                void DescribeDiagnosticInfoByBaselineIdAsync(const Model::DescribeDiagnosticInfoByBaselineIdRequest& request, const DescribeDiagnosticInfoByBaselineIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDiagnosticInfoByBaselineIdOutcomeCallable DescribeDiagnosticInfoByBaselineIdCallable(const Model::DescribeDiagnosticInfoByBaselineIdRequest& request);

                /**
                 *质量报告-查询质量评分
                 * @param req DescribeDimensionScoreRequest
                 * @return DescribeDimensionScoreOutcome
                 */
                DescribeDimensionScoreOutcome DescribeDimensionScore(const Model::DescribeDimensionScoreRequest &request);
                void DescribeDimensionScoreAsync(const Model::DescribeDimensionScoreRequest& request, const DescribeDimensionScoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDimensionScoreOutcomeCallable DescribeDimensionScoreCallable(const Model::DescribeDimensionScoreRequest& request);

                /**
                 *分页查询试运行实例列表
                 * @param req DescribeDrInstancePageRequest
                 * @return DescribeDrInstancePageOutcome
                 */
                DescribeDrInstancePageOutcome DescribeDrInstancePage(const Model::DescribeDrInstancePageRequest &request);
                void DescribeDrInstancePageAsync(const Model::DescribeDrInstancePageRequest& request, const DescribeDrInstancePageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDrInstancePageOutcomeCallable DescribeDrInstancePageCallable(const Model::DescribeDrInstancePageRequest& request);

                /**
                 *查询试运行实例执行内容
                 * @param req DescribeDrInstanceScriptContentRequest
                 * @return DescribeDrInstanceScriptContentOutcome
                 */
                DescribeDrInstanceScriptContentOutcome DescribeDrInstanceScriptContent(const Model::DescribeDrInstanceScriptContentRequest &request);
                void DescribeDrInstanceScriptContentAsync(const Model::DescribeDrInstanceScriptContentRequest& request, const DescribeDrInstanceScriptContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDrInstanceScriptContentOutcomeCallable DescribeDrInstanceScriptContentCallable(const Model::DescribeDrInstanceScriptContentRequest& request);

                /**
                 *查询试运行实例子实例列表
                 * @param req DescribeDrSonInstanceRequest
                 * @return DescribeDrSonInstanceOutcome
                 */
                DescribeDrSonInstanceOutcome DescribeDrSonInstance(const Model::DescribeDrSonInstanceRequest &request);
                void DescribeDrSonInstanceAsync(const Model::DescribeDrSonInstanceRequest& request, const DescribeDrSonInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDrSonInstanceOutcomeCallable DescribeDrSonInstanceCallable(const Model::DescribeDrSonInstanceRequest& request);

                /**
                 *分页查询事件
                 * @param req DescribeDsEventRequest
                 * @return DescribeDsEventOutcome
                 */
                DescribeDsEventOutcome DescribeDsEvent(const Model::DescribeDsEventRequest &request);
                void DescribeDsEventAsync(const Model::DescribeDsEventRequest& request, const DescribeDsEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDsEventOutcomeCallable DescribeDsEventCallable(const Model::DescribeDsEventRequest& request);

                /**
                 *查询目录树
                 * @param req DescribeDsFolderTreeRequest
                 * @return DescribeDsFolderTreeOutcome
                 */
                DescribeDsFolderTreeOutcome DescribeDsFolderTree(const Model::DescribeDsFolderTreeRequest &request);
                void DescribeDsFolderTreeAsync(const Model::DescribeDsFolderTreeRequest& request, const DescribeDsFolderTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDsFolderTreeOutcomeCallable DescribeDsFolderTreeCallable(const Model::DescribeDsFolderTreeRequest& request);

                /**
                 *查询 kettle 资源服务器目录树
                 * @param req DescribeDsKettleServerFolderTreeRequest
                 * @return DescribeDsKettleServerFolderTreeOutcome
                 */
                DescribeDsKettleServerFolderTreeOutcome DescribeDsKettleServerFolderTree(const Model::DescribeDsKettleServerFolderTreeRequest &request);
                void DescribeDsKettleServerFolderTreeAsync(const Model::DescribeDsKettleServerFolderTreeRequest& request, const DescribeDsKettleServerFolderTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDsKettleServerFolderTreeOutcomeCallable DescribeDsKettleServerFolderTreeCallable(const Model::DescribeDsKettleServerFolderTreeRequest& request);

                /**
                 *查询父目录树，用于工作流、任务定位
                 * @param req DescribeDsParentFolderTreeRequest
                 * @return DescribeDsParentFolderTreeOutcome
                 */
                DescribeDsParentFolderTreeOutcome DescribeDsParentFolderTree(const Model::DescribeDsParentFolderTreeRequest &request);
                void DescribeDsParentFolderTreeAsync(const Model::DescribeDsParentFolderTreeRequest& request, const DescribeDsParentFolderTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDsParentFolderTreeOutcomeCallable DescribeDsParentFolderTreeCallable(const Model::DescribeDsParentFolderTreeRequest& request);

                /**
                 *获取数据同步任务类型
                 * @param req DescribeEtlTaskTypeRequest
                 * @return DescribeEtlTaskTypeOutcome
                 */
                DescribeEtlTaskTypeOutcome DescribeEtlTaskType(const Model::DescribeEtlTaskTypeRequest &request);
                void DescribeEtlTaskTypeAsync(const Model::DescribeEtlTaskTypeRequest& request, const DescribeEtlTaskTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEtlTaskTypeOutcomeCallable DescribeEtlTaskTypeCallable(const Model::DescribeEtlTaskTypeRequest& request);

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
                 *智能运维事件详情1
                 * @param req DescribeEventDetailRequest
                 * @return DescribeEventDetailOutcome
                 */
                DescribeEventDetailOutcome DescribeEventDetail(const Model::DescribeEventDetailRequest &request);
                void DescribeEventDetailAsync(const Model::DescribeEventDetailRequest& request, const DescribeEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEventDetailOutcomeCallable DescribeEventDetailCallable(const Model::DescribeEventDetailRequest& request);

                /**
                 *事件是否告警过滤条件
                 * @param req DescribeEventIsAlarmTypesRequest
                 * @return DescribeEventIsAlarmTypesOutcome
                 */
                DescribeEventIsAlarmTypesOutcome DescribeEventIsAlarmTypes(const Model::DescribeEventIsAlarmTypesRequest &request);
                void DescribeEventIsAlarmTypesAsync(const Model::DescribeEventIsAlarmTypesRequest& request, const DescribeEventIsAlarmTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEventIsAlarmTypesOutcomeCallable DescribeEventIsAlarmTypesCallable(const Model::DescribeEventIsAlarmTypesRequest& request);

                /**
                 *根据任务ID获取任务监听事件
                 * @param req DescribeEventListenerByTaskIdRequest
                 * @return DescribeEventListenerByTaskIdOutcome
                 */
                DescribeEventListenerByTaskIdOutcome DescribeEventListenerByTaskId(const Model::DescribeEventListenerByTaskIdRequest &request);
                void DescribeEventListenerByTaskIdAsync(const Model::DescribeEventListenerByTaskIdRequest& request, const DescribeEventListenerByTaskIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEventListenerByTaskIdOutcomeCallable DescribeEventListenerByTaskIdCallable(const Model::DescribeEventListenerByTaskIdRequest& request);

                /**
                 *事件管理-查询事件关联任务
                 * @param req DescribeEventListenerTaskRequest
                 * @return DescribeEventListenerTaskOutcome
                 */
                DescribeEventListenerTaskOutcome DescribeEventListenerTask(const Model::DescribeEventListenerTaskRequest &request);
                void DescribeEventListenerTaskAsync(const Model::DescribeEventListenerTaskRequest& request, const DescribeEventListenerTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEventListenerTaskOutcomeCallable DescribeEventListenerTaskCallable(const Model::DescribeEventListenerTaskRequest& request);

                /**
                 *查询事件类型列表
                 * @param req DescribeEventTypesRequest
                 * @return DescribeEventTypesOutcome
                 */
                DescribeEventTypesOutcome DescribeEventTypes(const Model::DescribeEventTypesRequest &request);
                void DescribeEventTypesAsync(const Model::DescribeEventTypesRequest& request, const DescribeEventTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEventTypesOutcomeCallable DescribeEventTypesCallable(const Model::DescribeEventTypesRequest& request);

                /**
                 *智能运维事件查询列表
                 * @param req DescribeEventsRequest
                 * @return DescribeEventsOutcome
                 */
                DescribeEventsOutcome DescribeEvents(const Model::DescribeEventsRequest &request);
                void DescribeEventsAsync(const Model::DescribeEventsRequest& request, const DescribeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEventsOutcomeCallable DescribeEventsCallable(const Model::DescribeEventsRequest& request);

                /**
                 *查询规则组执行策略
                 * @param req DescribeExecStrategyRequest
                 * @return DescribeExecStrategyOutcome
                 */
                DescribeExecStrategyOutcome DescribeExecStrategy(const Model::DescribeExecStrategyRequest &request);
                void DescribeExecStrategyAsync(const Model::DescribeExecStrategyRequest& request, const DescribeExecStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExecStrategyOutcomeCallable DescribeExecStrategyCallable(const Model::DescribeExecStrategyRequest& request);

                /**
                 *查询父任务数据源信息Ds
                 * @param req DescribeFatherDatasourceInfoDsRequest
                 * @return DescribeFatherDatasourceInfoDsOutcome
                 */
                DescribeFatherDatasourceInfoDsOutcome DescribeFatherDatasourceInfoDs(const Model::DescribeFatherDatasourceInfoDsRequest &request);
                void DescribeFatherDatasourceInfoDsAsync(const Model::DescribeFatherDatasourceInfoDsRequest& request, const DescribeFatherDatasourceInfoDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFatherDatasourceInfoDsOutcomeCallable DescribeFatherDatasourceInfoDsCallable(const Model::DescribeFatherDatasourceInfoDsRequest& request);

                /**
                 *获取关联父实例
                 * @param req DescribeFathersRequest
                 * @return DescribeFathersOutcome
                 */
                DescribeFathersOutcome DescribeFathers(const Model::DescribeFathersRequest &request);
                void DescribeFathersAsync(const Model::DescribeFathersRequest& request, const DescribeFathersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFathersOutcomeCallable DescribeFathersCallable(const Model::DescribeFathersRequest& request);

                /**
                 *元数据模型-字段基础信息查询接口
                 * @param req DescribeFieldBasicInfoRequest
                 * @return DescribeFieldBasicInfoOutcome
                 */
                DescribeFieldBasicInfoOutcome DescribeFieldBasicInfo(const Model::DescribeFieldBasicInfoRequest &request);
                void DescribeFieldBasicInfoAsync(const Model::DescribeFieldBasicInfoRequest& request, const DescribeFieldBasicInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFieldBasicInfoOutcomeCallable DescribeFieldBasicInfoCallable(const Model::DescribeFieldBasicInfoRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
拉取文件夹目录
                 * @param req DescribeFolderListRequest
                 * @return DescribeFolderListOutcome
                 */
                DescribeFolderListOutcome DescribeFolderList(const Model::DescribeFolderListRequest &request);
                void DescribeFolderListAsync(const Model::DescribeFolderListRequest& request, const DescribeFolderListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFolderListOutcomeCallable DescribeFolderListCallable(const Model::DescribeFolderListRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
拉取文件夹下的工作流
                 * @param req DescribeFolderWorkflowListRequest
                 * @return DescribeFolderWorkflowListOutcome
                 */
                DescribeFolderWorkflowListOutcome DescribeFolderWorkflowList(const Model::DescribeFolderWorkflowListRequest &request);
                void DescribeFolderWorkflowListAsync(const Model::DescribeFolderWorkflowListRequest& request, const DescribeFolderWorkflowListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFolderWorkflowListOutcomeCallable DescribeFolderWorkflowListCallable(const Model::DescribeFolderWorkflowListRequest& request);

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
                 *查询可导入的集成任务
                 * @param req DescribeImportableOfflineTaskRequest
                 * @return DescribeImportableOfflineTaskOutcome
                 */
                DescribeImportableOfflineTaskOutcome DescribeImportableOfflineTask(const Model::DescribeImportableOfflineTaskRequest &request);
                void DescribeImportableOfflineTaskAsync(const Model::DescribeImportableOfflineTaskRequest& request, const DescribeImportableOfflineTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImportableOfflineTaskOutcomeCallable DescribeImportableOfflineTaskCallable(const Model::DescribeImportableOfflineTaskRequest& request);

                /**
                 *获取采集器列表
                 * @param req DescribeInLongAgentListRequest
                 * @return DescribeInLongAgentListOutcome
                 */
                DescribeInLongAgentListOutcome DescribeInLongAgentList(const Model::DescribeInLongAgentListRequest &request);
                void DescribeInLongAgentListAsync(const Model::DescribeInLongAgentListRequest& request, const DescribeInLongAgentListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInLongAgentListOutcomeCallable DescribeInLongAgentListCallable(const Model::DescribeInLongAgentListRequest& request);

                /**
                 *查询采集器关联的任务列表
                 * @param req DescribeInLongAgentTaskListRequest
                 * @return DescribeInLongAgentTaskListOutcome
                 */
                DescribeInLongAgentTaskListOutcome DescribeInLongAgentTaskList(const Model::DescribeInLongAgentTaskListRequest &request);
                void DescribeInLongAgentTaskListAsync(const Model::DescribeInLongAgentTaskListRequest& request, const DescribeInLongAgentTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInLongAgentTaskListOutcomeCallable DescribeInLongAgentTaskListCallable(const Model::DescribeInLongAgentTaskListRequest& request);

                /**
                 *获取采集器所在集群的VPC列表
                 * @param req DescribeInLongAgentVpcListRequest
                 * @return DescribeInLongAgentVpcListOutcome
                 */
                DescribeInLongAgentVpcListOutcome DescribeInLongAgentVpcList(const Model::DescribeInLongAgentVpcListRequest &request);
                void DescribeInLongAgentVpcListAsync(const Model::DescribeInLongAgentVpcListRequest& request, const DescribeInLongAgentVpcListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInLongAgentVpcListOutcomeCallable DescribeInLongAgentVpcListCallable(const Model::DescribeInLongAgentVpcListRequest& request);

                /**
                 *获取TKE集群列表
                 * @param req DescribeInLongTkeClusterListRequest
                 * @return DescribeInLongTkeClusterListOutcome
                 */
                DescribeInLongTkeClusterListOutcome DescribeInLongTkeClusterList(const Model::DescribeInLongTkeClusterListRequest &request);
                void DescribeInLongTkeClusterListAsync(const Model::DescribeInLongTkeClusterListRequest& request, const DescribeInLongTkeClusterListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInLongTkeClusterListOutcomeCallable DescribeInLongTkeClusterListCallable(const Model::DescribeInLongTkeClusterListRequest& request);

                /**
                 *基于任务类型获取任务信息Ds
                 * @param req DescribeInfoTransByTypeIdDsRequest
                 * @return DescribeInfoTransByTypeIdDsOutcome
                 */
                DescribeInfoTransByTypeIdDsOutcome DescribeInfoTransByTypeIdDs(const Model::DescribeInfoTransByTypeIdDsRequest &request);
                void DescribeInfoTransByTypeIdDsAsync(const Model::DescribeInfoTransByTypeIdDsRequest& request, const DescribeInfoTransByTypeIdDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInfoTransByTypeIdDsOutcomeCallable DescribeInfoTransByTypeIdDsCallable(const Model::DescribeInfoTransByTypeIdDsRequest& request);

                /**
                 *根据周期类型查询所有实例
                 * @param req DescribeInstanceByCycleRequest
                 * @return DescribeInstanceByCycleOutcome
                 */
                DescribeInstanceByCycleOutcome DescribeInstanceByCycle(const Model::DescribeInstanceByCycleRequest &request);
                void DescribeInstanceByCycleAsync(const Model::DescribeInstanceByCycleRequest& request, const DescribeInstanceByCycleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceByCycleOutcomeCallable DescribeInstanceByCycleCallable(const Model::DescribeInstanceByCycleRequest& request);

                /**
                 *实例状态周期增长趋势
                 * @param req DescribeInstanceByCycleReportRequest
                 * @return DescribeInstanceByCycleReportOutcome
                 */
                DescribeInstanceByCycleReportOutcome DescribeInstanceByCycleReport(const Model::DescribeInstanceByCycleReportRequest &request);
                void DescribeInstanceByCycleReportAsync(const Model::DescribeInstanceByCycleReportRequest& request, const DescribeInstanceByCycleReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceByCycleReportOutcomeCallable DescribeInstanceByCycleReportCallable(const Model::DescribeInstanceByCycleReportRequest& request);

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
                 *下载日志文件，返回日志URL
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
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
获取实例日志列表
                 * @param req DescribeInstanceLogsRequest
                 * @return DescribeInstanceLogsOutcome
                 */
                DescribeInstanceLogsOutcome DescribeInstanceLogs(const Model::DescribeInstanceLogsRequest &request);
                void DescribeInstanceLogsAsync(const Model::DescribeInstanceLogsRequest& request, const DescribeInstanceLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceLogsOutcomeCallable DescribeInstanceLogsCallable(const Model::DescribeInstanceLogsRequest& request);

                /**
                 *数据质量，查询调度任务的实例列表
                 * @param req DescribeInstancesRequest
                 * @return DescribeInstancesOutcome
                 */
                DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest &request);
                void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request);

                /**
                 *拉取实例列表，join task表一些信息
                 * @param req DescribeInstancesInfoWithTaskInfoRequest
                 * @return DescribeInstancesInfoWithTaskInfoOutcome
                 */
                DescribeInstancesInfoWithTaskInfoOutcome DescribeInstancesInfoWithTaskInfo(const Model::DescribeInstancesInfoWithTaskInfoRequest &request);
                void DescribeInstancesInfoWithTaskInfoAsync(const Model::DescribeInstancesInfoWithTaskInfoRequest& request, const DescribeInstancesInfoWithTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesInfoWithTaskInfoOutcomeCallable DescribeInstancesInfoWithTaskInfoCallable(const Model::DescribeInstancesInfoWithTaskInfoRequest& request);

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
                 *数据集成大屏采集器状态分布统计
                 * @param req DescribeIntegrationStatisticsAgentStatusRequest
                 * @return DescribeIntegrationStatisticsAgentStatusOutcome
                 */
                DescribeIntegrationStatisticsAgentStatusOutcome DescribeIntegrationStatisticsAgentStatus(const Model::DescribeIntegrationStatisticsAgentStatusRequest &request);
                void DescribeIntegrationStatisticsAgentStatusAsync(const Model::DescribeIntegrationStatisticsAgentStatusRequest& request, const DescribeIntegrationStatisticsAgentStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIntegrationStatisticsAgentStatusOutcomeCallable DescribeIntegrationStatisticsAgentStatusCallable(const Model::DescribeIntegrationStatisticsAgentStatusRequest& request);

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
                 *获取协同编辑资源锁
                 * @param req DescribeLockRequest
                 * @return DescribeLockOutcome
                 */
                DescribeLockOutcome DescribeLock(const Model::DescribeLockRequest &request);
                void DescribeLockAsync(const Model::DescribeLockRequest& request, const DescribeLockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLockOutcomeCallable DescribeLockCallable(const Model::DescribeLockRequest& request);

                /**
                 *分页查询质量监控组
                 * @param req DescribeMonitorsByPageRequest
                 * @return DescribeMonitorsByPageOutcome
                 */
                DescribeMonitorsByPageOutcome DescribeMonitorsByPage(const Model::DescribeMonitorsByPageRequest &request);
                void DescribeMonitorsByPageAsync(const Model::DescribeMonitorsByPageRequest& request, const DescribeMonitorsByPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMonitorsByPageOutcomeCallable DescribeMonitorsByPageCallable(const Model::DescribeMonitorsByPageRequest& request);

                /**
                 *获取离线任务长连接Token
                 * @param req DescribeOfflineTaskTokenRequest
                 * @return DescribeOfflineTaskTokenOutcome
                 */
                DescribeOfflineTaskTokenOutcome DescribeOfflineTaskToken(const Model::DescribeOfflineTaskTokenRequest &request);
                void DescribeOfflineTaskTokenAsync(const Model::DescribeOfflineTaskTokenRequest& request, const DescribeOfflineTaskTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOfflineTaskTokenOutcomeCallable DescribeOfflineTaskTokenCallable(const Model::DescribeOfflineTaskTokenRequest& request);

                /**
                 *任务运维搜索 查询生产态任务数据源列表
                 * @param req DescribeOperateOpsTaskDatasourceRequest
                 * @return DescribeOperateOpsTaskDatasourceOutcome
                 */
                DescribeOperateOpsTaskDatasourceOutcome DescribeOperateOpsTaskDatasource(const Model::DescribeOperateOpsTaskDatasourceRequest &request);
                void DescribeOperateOpsTaskDatasourceAsync(const Model::DescribeOperateOpsTaskDatasourceRequest& request, const DescribeOperateOpsTaskDatasourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOperateOpsTaskDatasourceOutcomeCallable DescribeOperateOpsTaskDatasourceCallable(const Model::DescribeOperateOpsTaskDatasourceRequest& request);

                /**
                 *任务运维-查询生产态任务数据源类型列表
                 * @param req DescribeOperateOpsTaskDatasourceTypeRequest
                 * @return DescribeOperateOpsTaskDatasourceTypeOutcome
                 */
                DescribeOperateOpsTaskDatasourceTypeOutcome DescribeOperateOpsTaskDatasourceType(const Model::DescribeOperateOpsTaskDatasourceTypeRequest &request);
                void DescribeOperateOpsTaskDatasourceTypeAsync(const Model::DescribeOperateOpsTaskDatasourceTypeRequest& request, const DescribeOperateOpsTaskDatasourceTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOperateOpsTaskDatasourceTypeOutcomeCallable DescribeOperateOpsTaskDatasourceTypeCallable(const Model::DescribeOperateOpsTaskDatasourceTypeRequest& request);

                /**
                 *任务运维列表组合条件查询
                 * @param req DescribeOperateOpsTasksRequest
                 * @return DescribeOperateOpsTasksOutcome
                 */
                DescribeOperateOpsTasksOutcome DescribeOperateOpsTasks(const Model::DescribeOperateOpsTasksRequest &request);
                void DescribeOperateOpsTasksAsync(const Model::DescribeOperateOpsTasksRequest& request, const DescribeOperateOpsTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOperateOpsTasksOutcomeCallable DescribeOperateOpsTasksCallable(const Model::DescribeOperateOpsTasksRequest& request);

                /**
                 *任务运维列表组合条件查询
                 * @param req DescribeOperateTasksRequest
                 * @return DescribeOperateTasksOutcome
                 */
                DescribeOperateTasksOutcome DescribeOperateTasks(const Model::DescribeOperateTasksRequest &request);
                void DescribeOperateTasksAsync(const Model::DescribeOperateTasksRequest& request, const DescribeOperateTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOperateTasksOutcomeCallable DescribeOperateTasksCallable(const Model::DescribeOperateTasksRequest& request);

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
                 *开发空间-拉取完整目录树
                 * @param req DescribePathTreesRequest
                 * @return DescribePathTreesOutcome
                 */
                DescribePathTreesOutcome DescribePathTrees(const Model::DescribePathTreesRequest &request);
                void DescribePathTreesAsync(const Model::DescribePathTreesRequest& request, const DescribePathTreesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePathTreesOutcomeCallable DescribePathTreesCallable(const Model::DescribePathTreesRequest& request);

                /**
                 *数据质量获取生产调度任务列表
                 * @param req DescribeProdTasksRequest
                 * @return DescribeProdTasksOutcome
                 */
                DescribeProdTasksOutcome DescribeProdTasks(const Model::DescribeProdTasksRequest &request);
                void DescribeProdTasksAsync(const Model::DescribeProdTasksRequest& request, const DescribeProdTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProdTasksOutcomeCallable DescribeProdTasksCallable(const Model::DescribeProdTasksRequest& request);

                /**
                 *获取项目信息
                 * @param req DescribeProjectRequest
                 * @return DescribeProjectOutcome
                 */
                DescribeProjectOutcome DescribeProject(const Model::DescribeProjectRequest &request);
                void DescribeProjectAsync(const Model::DescribeProjectRequest& request, const DescribeProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProjectOutcomeCallable DescribeProjectCallable(const Model::DescribeProjectRequest& request);

                /**
                 *查询项目全局参数
                 * @param req DescribeProjectParamDsPageRequest
                 * @return DescribeProjectParamDsPageOutcome
                 */
                DescribeProjectParamDsPageOutcome DescribeProjectParamDsPage(const Model::DescribeProjectParamDsPageRequest &request);
                void DescribeProjectParamDsPageAsync(const Model::DescribeProjectParamDsPageRequest& request, const DescribeProjectParamDsPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProjectParamDsPageOutcomeCallable DescribeProjectParamDsPageCallable(const Model::DescribeProjectParamDsPageRequest& request);

                /**
                 *拉取项目参数版本详情
                 * @param req DescribeProjectParamVersionInfoDsRequest
                 * @return DescribeProjectParamVersionInfoDsOutcome
                 */
                DescribeProjectParamVersionInfoDsOutcome DescribeProjectParamVersionInfoDs(const Model::DescribeProjectParamVersionInfoDsRequest &request);
                void DescribeProjectParamVersionInfoDsAsync(const Model::DescribeProjectParamVersionInfoDsRequest& request, const DescribeProjectParamVersionInfoDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProjectParamVersionInfoDsOutcomeCallable DescribeProjectParamVersionInfoDsCallable(const Model::DescribeProjectParamVersionInfoDsRequest& request);

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
                 *查询任务实例的关联实例列表
                 * @param req DescribeRelatedInstancesRequest
                 * @return DescribeRelatedInstancesOutcome
                 */
                DescribeRelatedInstancesOutcome DescribeRelatedInstances(const Model::DescribeRelatedInstancesRequest &request);
                void DescribeRelatedInstancesAsync(const Model::DescribeRelatedInstancesRequest& request, const DescribeRelatedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRelatedInstancesOutcomeCallable DescribeRelatedInstancesCallable(const Model::DescribeRelatedInstancesRequest& request);

                /**
                 *获取资源管理目录树
                 * @param req DescribeResourceManagePathTreesRequest
                 * @return DescribeResourceManagePathTreesOutcome
                 */
                DescribeResourceManagePathTreesOutcome DescribeResourceManagePathTrees(const Model::DescribeResourceManagePathTreesRequest &request);
                void DescribeResourceManagePathTreesAsync(const Model::DescribeResourceManagePathTreesRequest& request, const DescribeResourceManagePathTreesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourceManagePathTreesOutcomeCallable DescribeResourceManagePathTreesCallable(const Model::DescribeResourceManagePathTreesRequest& request);

                /**
                 *查询规则详情
                 * @param req DescribeRuleRequest
                 * @return DescribeRuleOutcome
                 */
                DescribeRuleOutcome DescribeRule(const Model::DescribeRuleRequest &request);
                void DescribeRuleAsync(const Model::DescribeRuleRequest& request, const DescribeRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRuleOutcomeCallable DescribeRuleCallable(const Model::DescribeRuleRequest& request);

                /**
                 *查询质量规则数据源
                 * @param req DescribeRuleDataSourcesRequest
                 * @return DescribeRuleDataSourcesOutcome
                 */
                DescribeRuleDataSourcesOutcome DescribeRuleDataSources(const Model::DescribeRuleDataSourcesRequest &request);
                void DescribeRuleDataSourcesAsync(const Model::DescribeRuleDataSourcesRequest& request, const DescribeRuleDataSourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRuleDataSourcesOutcomeCallable DescribeRuleDataSourcesCallable(const Model::DescribeRuleDataSourcesRequest& request);

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
                 *查询规则执行导出结果
                 * @param req DescribeRuleExecExportResultRequest
                 * @return DescribeRuleExecExportResultOutcome
                 */
                DescribeRuleExecExportResultOutcome DescribeRuleExecExportResult(const Model::DescribeRuleExecExportResultRequest &request);
                void DescribeRuleExecExportResultAsync(const Model::DescribeRuleExecExportResultRequest& request, const DescribeRuleExecExportResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRuleExecExportResultOutcomeCallable DescribeRuleExecExportResultCallable(const Model::DescribeRuleExecExportResultRequest& request);

                /**
                 *查询规则执行历史， 最近30条
                 * @param req DescribeRuleExecHistoryRequest
                 * @return DescribeRuleExecHistoryOutcome
                 */
                DescribeRuleExecHistoryOutcome DescribeRuleExecHistory(const Model::DescribeRuleExecHistoryRequest &request);
                void DescribeRuleExecHistoryAsync(const Model::DescribeRuleExecHistoryRequest& request, const DescribeRuleExecHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRuleExecHistoryOutcomeCallable DescribeRuleExecHistoryCallable(const Model::DescribeRuleExecHistoryRequest& request);

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
                 *分页查询规则执行结果列表
                 * @param req DescribeRuleExecResultsByPageRequest
                 * @return DescribeRuleExecResultsByPageOutcome
                 */
                DescribeRuleExecResultsByPageOutcome DescribeRuleExecResultsByPage(const Model::DescribeRuleExecResultsByPageRequest &request);
                void DescribeRuleExecResultsByPageAsync(const Model::DescribeRuleExecResultsByPageRequest& request, const DescribeRuleExecResultsByPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRuleExecResultsByPageOutcomeCallable DescribeRuleExecResultsByPageCallable(const Model::DescribeRuleExecResultsByPageRequest& request);

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
                 *规则组执行结果分页查询接口不带鉴权
                 * @param req DescribeRuleGroupExecResultsByPageWithoutAuthRequest
                 * @return DescribeRuleGroupExecResultsByPageWithoutAuthOutcome
                 */
                DescribeRuleGroupExecResultsByPageWithoutAuthOutcome DescribeRuleGroupExecResultsByPageWithoutAuth(const Model::DescribeRuleGroupExecResultsByPageWithoutAuthRequest &request);
                void DescribeRuleGroupExecResultsByPageWithoutAuthAsync(const Model::DescribeRuleGroupExecResultsByPageWithoutAuthRequest& request, const DescribeRuleGroupExecResultsByPageWithoutAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRuleGroupExecResultsByPageWithoutAuthOutcomeCallable DescribeRuleGroupExecResultsByPageWithoutAuthCallable(const Model::DescribeRuleGroupExecResultsByPageWithoutAuthRequest& request);

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
                 *过滤条件【必要字段】{ruleId}
                 * @param req DescribeRuleHistoryByPageRequest
                 * @return DescribeRuleHistoryByPageOutcome
                 */
                DescribeRuleHistoryByPageOutcome DescribeRuleHistoryByPage(const Model::DescribeRuleHistoryByPageRequest &request);
                void DescribeRuleHistoryByPageAsync(const Model::DescribeRuleHistoryByPageRequest& request, const DescribeRuleHistoryByPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRuleHistoryByPageOutcomeCallable DescribeRuleHistoryByPageCallable(const Model::DescribeRuleHistoryByPageRequest& request);

                /**
                 *获取表列表
                 * @param req DescribeRuleTablesByPageRequest
                 * @return DescribeRuleTablesByPageOutcome
                 */
                DescribeRuleTablesByPageOutcome DescribeRuleTablesByPage(const Model::DescribeRuleTablesByPageRequest &request);
                void DescribeRuleTablesByPageAsync(const Model::DescribeRuleTablesByPageRequest& request, const DescribeRuleTablesByPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRuleTablesByPageOutcomeCallable DescribeRuleTablesByPageCallable(const Model::DescribeRuleTablesByPageRequest& request);

                /**
                 *查询模板详情
                 * @param req DescribeRuleTemplateRequest
                 * @return DescribeRuleTemplateOutcome
                 */
                DescribeRuleTemplateOutcome DescribeRuleTemplate(const Model::DescribeRuleTemplateRequest &request);
                void DescribeRuleTemplateAsync(const Model::DescribeRuleTemplateRequest& request, const DescribeRuleTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRuleTemplateOutcomeCallable DescribeRuleTemplateCallable(const Model::DescribeRuleTemplateRequest& request);

                /**
                 *查询规则模版列表
                 * @param req DescribeRuleTemplatesRequest
                 * @return DescribeRuleTemplatesOutcome
                 */
                DescribeRuleTemplatesOutcome DescribeRuleTemplates(const Model::DescribeRuleTemplatesRequest &request);
                void DescribeRuleTemplatesAsync(const Model::DescribeRuleTemplatesRequest& request, const DescribeRuleTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRuleTemplatesOutcomeCallable DescribeRuleTemplatesCallable(const Model::DescribeRuleTemplatesRequest& request);

                /**
                 *过滤条件】 {模版名称Name,支持模糊匹配} {模版类型type，1.系统模版 2.自定义模版} {质量检测维度QualityDims, 1.准确性 2.唯一性 3.完整性 4.一致性 5.及时性 6.有效性} 【排序字段】 { 引用数排序类型CitationOrderType，根据引用数量排序 ASC DESC}
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
                 *在基线系统内查询单个调度任务实例
                 * @param req DescribeScheduleInstanceRequest
                 * @return DescribeScheduleInstanceOutcome
                 */
                DescribeScheduleInstanceOutcome DescribeScheduleInstance(const Model::DescribeScheduleInstanceRequest &request);
                void DescribeScheduleInstanceAsync(const Model::DescribeScheduleInstanceRequest& request, const DescribeScheduleInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScheduleInstanceOutcomeCallable DescribeScheduleInstanceCallable(const Model::DescribeScheduleInstanceRequest& request);

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
                 *获取脚本导出任务类型
                 * @param req DescribeScriptsImportTaskTypeRequest
                 * @return DescribeScriptsImportTaskTypeOutcome
                 */
                DescribeScriptsImportTaskTypeOutcome DescribeScriptsImportTaskType(const Model::DescribeScriptsImportTaskTypeRequest &request);
                void DescribeScriptsImportTaskTypeAsync(const Model::DescribeScriptsImportTaskTypeRequest& request, const DescribeScriptsImportTaskTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScriptsImportTaskTypeOutcomeCallable DescribeScriptsImportTaskTypeCallable(const Model::DescribeScriptsImportTaskTypeRequest& request);

                /**
                 *获取关联子实例
                 * @param req DescribeSonInstancesRequest
                 * @return DescribeSonInstancesOutcome
                 */
                DescribeSonInstancesOutcome DescribeSonInstances(const Model::DescribeSonInstancesRequest &request);
                void DescribeSonInstancesAsync(const Model::DescribeSonInstancesRequest& request, const DescribeSonInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSonInstancesOutcomeCallable DescribeSonInstancesCallable(const Model::DescribeSonInstancesRequest& request);

                /**
                 *获取数据标准规则详情
                 * @param req DescribeStandardRuleDetailInfoListRequest
                 * @return DescribeStandardRuleDetailInfoListOutcome
                 */
                DescribeStandardRuleDetailInfoListOutcome DescribeStandardRuleDetailInfoList(const Model::DescribeStandardRuleDetailInfoListRequest &request);
                void DescribeStandardRuleDetailInfoListAsync(const Model::DescribeStandardRuleDetailInfoListRequest& request, const DescribeStandardRuleDetailInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStandardRuleDetailInfoListOutcomeCallable DescribeStandardRuleDetailInfoListCallable(const Model::DescribeStandardRuleDetailInfoListRequest& request);

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
                 *获取任务绑定的虚拟任务
                 * @param req DescribeTaskBindVirtualTaskRequest
                 * @return DescribeTaskBindVirtualTaskOutcome
                 */
                DescribeTaskBindVirtualTaskOutcome DescribeTaskBindVirtualTask(const Model::DescribeTaskBindVirtualTaskRequest &request);
                void DescribeTaskBindVirtualTaskAsync(const Model::DescribeTaskBindVirtualTaskRequest& request, const DescribeTaskBindVirtualTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskBindVirtualTaskOutcomeCallable DescribeTaskBindVirtualTaskCallable(const Model::DescribeTaskBindVirtualTaskRequest& request);

                /**
                 *根据周期类型 查询所有任务
                 * @param req DescribeTaskByCycleRequest
                 * @return DescribeTaskByCycleOutcome
                 */
                DescribeTaskByCycleOutcome DescribeTaskByCycle(const Model::DescribeTaskByCycleRequest &request);
                void DescribeTaskByCycleAsync(const Model::DescribeTaskByCycleRequest& request, const DescribeTaskByCycleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskByCycleOutcomeCallable DescribeTaskByCycleCallable(const Model::DescribeTaskByCycleRequest& request);

                /**
                 *任务状态周期增长趋势
                 * @param req DescribeTaskByCycleReportRequest
                 * @return DescribeTaskByCycleReportOutcome
                 */
                DescribeTaskByCycleReportOutcome DescribeTaskByCycleReport(const Model::DescribeTaskByCycleReportRequest &request);
                void DescribeTaskByCycleReportAsync(const Model::DescribeTaskByCycleReportRequest& request, const DescribeTaskByCycleReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskByCycleReportOutcomeCallable DescribeTaskByCycleReportCallable(const Model::DescribeTaskByCycleReportRequest& request);

                /**
                 *任务状态趋势
                 * @param req DescribeTaskByStatusReportRequest
                 * @return DescribeTaskByStatusReportOutcome
                 */
                DescribeTaskByStatusReportOutcome DescribeTaskByStatusReport(const Model::DescribeTaskByStatusReportRequest &request);
                void DescribeTaskByStatusReportAsync(const Model::DescribeTaskByStatusReportRequest& request, const DescribeTaskByStatusReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskByStatusReportOutcomeCallable DescribeTaskByStatusReportCallable(const Model::DescribeTaskByStatusReportRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
查询任务具体详情
                 * @param req DescribeTaskDetailRequest
                 * @return DescribeTaskDetailOutcome
                 */
                DescribeTaskDetailOutcome DescribeTaskDetail(const Model::DescribeTaskDetailRequest &request);
                void DescribeTaskDetailAsync(const Model::DescribeTaskDetailRequest& request, const DescribeTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskDetailOutcomeCallable DescribeTaskDetailCallable(const Model::DescribeTaskDetailRequest& request);

                /**
                 *查询任务具体详情Ds
                 * @param req DescribeTaskDetailDsRequest
                 * @return DescribeTaskDetailDsOutcome
                 */
                DescribeTaskDetailDsOutcome DescribeTaskDetailDs(const Model::DescribeTaskDetailDsRequest &request);
                void DescribeTaskDetailDsAsync(const Model::DescribeTaskDetailDsRequest& request, const DescribeTaskDetailDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskDetailDsOutcomeCallable DescribeTaskDetailDsCallable(const Model::DescribeTaskDetailDsRequest& request);

                /**
                 *离线任务实例详情
                 * @param req DescribeTaskInstanceRequest
                 * @return DescribeTaskInstanceOutcome
                 */
                DescribeTaskInstanceOutcome DescribeTaskInstance(const Model::DescribeTaskInstanceRequest &request);
                void DescribeTaskInstanceAsync(const Model::DescribeTaskInstanceRequest& request, const DescribeTaskInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskInstanceOutcomeCallable DescribeTaskInstanceCallable(const Model::DescribeTaskInstanceRequest& request);

                /**
                 *离线任务实例统计明细
                 * @param req DescribeTaskInstanceReportDetailRequest
                 * @return DescribeTaskInstanceReportDetailOutcome
                 */
                DescribeTaskInstanceReportDetailOutcome DescribeTaskInstanceReportDetail(const Model::DescribeTaskInstanceReportDetailRequest &request);
                void DescribeTaskInstanceReportDetailAsync(const Model::DescribeTaskInstanceReportDetailRequest& request, const DescribeTaskInstanceReportDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskInstanceReportDetailOutcomeCallable DescribeTaskInstanceReportDetailCallable(const Model::DescribeTaskInstanceReportDetailRequest& request);

                /**
                 *查询任务实例列表
                 * @param req DescribeTaskInstancesRequest
                 * @return DescribeTaskInstancesOutcome
                 */
                DescribeTaskInstancesOutcome DescribeTaskInstances(const Model::DescribeTaskInstancesRequest &request);
                void DescribeTaskInstancesAsync(const Model::DescribeTaskInstancesRequest& request, const DescribeTaskInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskInstancesOutcomeCallable DescribeTaskInstancesCallable(const Model::DescribeTaskInstancesRequest& request);

                /**
                 *通过指定基准时间，计算出最近一次任务基于该基准时间的运行时间
                 * @param req DescribeTaskLatestRunTimeRequest
                 * @return DescribeTaskLatestRunTimeOutcome
                 */
                DescribeTaskLatestRunTimeOutcome DescribeTaskLatestRunTime(const Model::DescribeTaskLatestRunTimeRequest &request);
                void DescribeTaskLatestRunTimeAsync(const Model::DescribeTaskLatestRunTimeRequest& request, const DescribeTaskLatestRunTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskLatestRunTimeOutcomeCallable DescribeTaskLatestRunTimeCallable(const Model::DescribeTaskLatestRunTimeRequest& request);

                /**
                 *基于条件翻页获取任务列表, 用于新建跨工作流任务场景中展示工作流列表操作
                 * @param req DescribeTaskListByConditionDsRequest
                 * @return DescribeTaskListByConditionDsOutcome
                 */
                DescribeTaskListByConditionDsOutcome DescribeTaskListByConditionDs(const Model::DescribeTaskListByConditionDsRequest &request);
                void DescribeTaskListByConditionDsAsync(const Model::DescribeTaskListByConditionDsRequest& request, const DescribeTaskListByConditionDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskListByConditionDsOutcomeCallable DescribeTaskListByConditionDsCallable(const Model::DescribeTaskListByConditionDsRequest& request);

                /**
                 *查看任务锁状态信息
                 * @param req DescribeTaskLockStatusRequest
                 * @return DescribeTaskLockStatusOutcome
                 */
                DescribeTaskLockStatusOutcome DescribeTaskLockStatus(const Model::DescribeTaskLockStatusRequest &request);
                void DescribeTaskLockStatusAsync(const Model::DescribeTaskLockStatusRequest& request, const DescribeTaskLockStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskLockStatusOutcomeCallable DescribeTaskLockStatusCallable(const Model::DescribeTaskLockStatusRequest& request);

                /**
                 *获取指定任务产出登记列表
                 * @param req DescribeTaskOutputRegistriesRequest
                 * @return DescribeTaskOutputRegistriesOutcome
                 */
                DescribeTaskOutputRegistriesOutcome DescribeTaskOutputRegistries(const Model::DescribeTaskOutputRegistriesRequest &request);
                void DescribeTaskOutputRegistriesAsync(const Model::DescribeTaskOutputRegistriesRequest& request, const DescribeTaskOutputRegistriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskOutputRegistriesOutcomeCallable DescribeTaskOutputRegistriesCallable(const Model::DescribeTaskOutputRegistriesRequest& request);

                /**
                 *基于当前任务的数据时间计算依赖的上游任务数据时间
                 * @param req DescribeTaskParentRunTimeRequest
                 * @return DescribeTaskParentRunTimeOutcome
                 */
                DescribeTaskParentRunTimeOutcome DescribeTaskParentRunTime(const Model::DescribeTaskParentRunTimeRequest &request);
                void DescribeTaskParentRunTimeAsync(const Model::DescribeTaskParentRunTimeRequest& request, const DescribeTaskParentRunTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskParentRunTimeOutcomeCallable DescribeTaskParentRunTimeCallable(const Model::DescribeTaskParentRunTimeRequest& request);

                /**
                 *按起止日期统计离线任务的所有实例的运行指标总和
                 * @param req DescribeTaskReportRequest
                 * @return DescribeTaskReportOutcome
                 */
                DescribeTaskReportOutcome DescribeTaskReport(const Model::DescribeTaskReportRequest &request);
                void DescribeTaskReportAsync(const Model::DescribeTaskReportRequest& request, const DescribeTaskReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskReportOutcomeCallable DescribeTaskReportCallable(const Model::DescribeTaskReportRequest& request);

                /**
                 *离线任务周期统计明细
                 * @param req DescribeTaskReportDetailListRequest
                 * @return DescribeTaskReportDetailListOutcome
                 */
                DescribeTaskReportDetailListOutcome DescribeTaskReportDetailList(const Model::DescribeTaskReportDetailListRequest &request);
                void DescribeTaskReportDetailListAsync(const Model::DescribeTaskReportDetailListRequest& request, const DescribeTaskReportDetailListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskReportDetailListOutcomeCallable DescribeTaskReportDetailListCallable(const Model::DescribeTaskReportDetailListRequest& request);

                /**
                 *分页查询任务运行历史
                 * @param req DescribeTaskRunHistoryRequest
                 * @return DescribeTaskRunHistoryOutcome
                 */
                DescribeTaskRunHistoryOutcome DescribeTaskRunHistory(const Model::DescribeTaskRunHistoryRequest &request);
                void DescribeTaskRunHistoryAsync(const Model::DescribeTaskRunHistoryRequest& request, const DescribeTaskRunHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskRunHistoryOutcomeCallable DescribeTaskRunHistoryCallable(const Model::DescribeTaskRunHistoryRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
查询任务脚本
                 * @param req DescribeTaskScriptRequest
                 * @return DescribeTaskScriptOutcome
                 */
                DescribeTaskScriptOutcome DescribeTaskScript(const Model::DescribeTaskScriptRequest &request);
                void DescribeTaskScriptAsync(const Model::DescribeTaskScriptRequest& request, const DescribeTaskScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskScriptOutcomeCallable DescribeTaskScriptCallable(const Model::DescribeTaskScriptRequest& request);

                /**
                 *根据脚本类型获取任务类型
                 * @param req DescribeTaskTypeByScriptTypeRequest
                 * @return DescribeTaskTypeByScriptTypeOutcome
                 */
                DescribeTaskTypeByScriptTypeOutcome DescribeTaskTypeByScriptType(const Model::DescribeTaskTypeByScriptTypeRequest &request);
                void DescribeTaskTypeByScriptTypeAsync(const Model::DescribeTaskTypeByScriptTypeRequest& request, const DescribeTaskTypeByScriptTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskTypeByScriptTypeOutcomeCallable DescribeTaskTypeByScriptTypeCallable(const Model::DescribeTaskTypeByScriptTypeRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
根据工作流分页查询任务
                 * @param req DescribeTasksByPageRequest
                 * @return DescribeTasksByPageOutcome
                 */
                DescribeTasksByPageOutcome DescribeTasksByPage(const Model::DescribeTasksByPageRequest &request);
                void DescribeTasksByPageAsync(const Model::DescribeTasksByPageRequest& request, const DescribeTasksByPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTasksByPageOutcomeCallable DescribeTasksByPageCallable(const Model::DescribeTasksByPageRequest& request);

                /**
                 *任务信息查询-项目克隆使用
                 * @param req DescribeTasksForProjectCloneRequest
                 * @return DescribeTasksForProjectCloneOutcome
                 */
                DescribeTasksForProjectCloneOutcome DescribeTasksForProjectClone(const Model::DescribeTasksForProjectCloneRequest &request);
                void DescribeTasksForProjectCloneAsync(const Model::DescribeTasksForProjectCloneRequest& request, const DescribeTasksForProjectCloneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTasksForProjectCloneOutcomeCallable DescribeTasksForProjectCloneCallable(const Model::DescribeTasksForProjectCloneRequest& request);

                /**
                 *查询规则模板维度分布情况
                 * @param req DescribeTemplateDimCountRequest
                 * @return DescribeTemplateDimCountOutcome
                 */
                DescribeTemplateDimCountOutcome DescribeTemplateDimCount(const Model::DescribeTemplateDimCountRequest &request);
                void DescribeTemplateDimCountAsync(const Model::DescribeTemplateDimCountRequest& request, const DescribeTemplateDimCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTemplateDimCountOutcomeCallable DescribeTemplateDimCountCallable(const Model::DescribeTemplateDimCountRequest& request);

                /**
                 *查询规则模板操作记录
                 * @param req DescribeTemplateHistoryRequest
                 * @return DescribeTemplateHistoryOutcome
                 */
                DescribeTemplateHistoryOutcome DescribeTemplateHistory(const Model::DescribeTemplateHistoryRequest &request);
                void DescribeTemplateHistoryAsync(const Model::DescribeTemplateHistoryRequest& request, const DescribeTemplateHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTemplateHistoryOutcomeCallable DescribeTemplateHistoryCallable(const Model::DescribeTemplateHistoryRequest& request);

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
                 *查询工作流画布
                 * @param req DescribeWorkflowCanvasInfoRequest
                 * @return DescribeWorkflowCanvasInfoOutcome
                 */
                DescribeWorkflowCanvasInfoOutcome DescribeWorkflowCanvasInfo(const Model::DescribeWorkflowCanvasInfoRequest &request);
                void DescribeWorkflowCanvasInfoAsync(const Model::DescribeWorkflowCanvasInfoRequest& request, const DescribeWorkflowCanvasInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkflowCanvasInfoOutcomeCallable DescribeWorkflowCanvasInfoCallable(const Model::DescribeWorkflowCanvasInfoRequest& request);

                /**
                 *数据开发-获取工作流画布信息
                 * @param req DescribeWorkflowCanvasInfoDsRequest
                 * @return DescribeWorkflowCanvasInfoDsOutcome
                 */
                DescribeWorkflowCanvasInfoDsOutcome DescribeWorkflowCanvasInfoDs(const Model::DescribeWorkflowCanvasInfoDsRequest &request);
                void DescribeWorkflowCanvasInfoDsAsync(const Model::DescribeWorkflowCanvasInfoDsRequest& request, const DescribeWorkflowCanvasInfoDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkflowCanvasInfoDsOutcomeCallable DescribeWorkflowCanvasInfoDsCallable(const Model::DescribeWorkflowCanvasInfoDsRequest& request);

                /**
                 *获取工作流操作日志
                 * @param req DescribeWorkflowCanvasOpLogsRequest
                 * @return DescribeWorkflowCanvasOpLogsOutcome
                 */
                DescribeWorkflowCanvasOpLogsOutcome DescribeWorkflowCanvasOpLogs(const Model::DescribeWorkflowCanvasOpLogsRequest &request);
                void DescribeWorkflowCanvasOpLogsAsync(const Model::DescribeWorkflowCanvasOpLogsRequest& request, const DescribeWorkflowCanvasOpLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkflowCanvasOpLogsOutcomeCallable DescribeWorkflowCanvasOpLogsCallable(const Model::DescribeWorkflowCanvasOpLogsRequest& request);

                /**
                 *查询工作流画布运行起止时间
                 * @param req DescribeWorkflowExecuteByIdRequest
                 * @return DescribeWorkflowExecuteByIdOutcome
                 */
                DescribeWorkflowExecuteByIdOutcome DescribeWorkflowExecuteById(const Model::DescribeWorkflowExecuteByIdRequest &request);
                void DescribeWorkflowExecuteByIdAsync(const Model::DescribeWorkflowExecuteByIdRequest& request, const DescribeWorkflowExecuteByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkflowExecuteByIdOutcomeCallable DescribeWorkflowExecuteByIdCallable(const Model::DescribeWorkflowExecuteByIdRequest& request);

                /**
                 *工作流信息查询-项目克隆使用
                 * @param req DescribeWorkflowForProjectCloneRequest
                 * @return DescribeWorkflowForProjectCloneOutcome
                 */
                DescribeWorkflowForProjectCloneOutcome DescribeWorkflowForProjectClone(const Model::DescribeWorkflowForProjectCloneRequest &request);
                void DescribeWorkflowForProjectCloneAsync(const Model::DescribeWorkflowForProjectCloneRequest& request, const DescribeWorkflowForProjectCloneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkflowForProjectCloneOutcomeCallable DescribeWorkflowForProjectCloneCallable(const Model::DescribeWorkflowForProjectCloneRequest& request);

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
                 *查询运维画布信息，只需要获取边和节点
                 * @param req DescribeWorkflowOpsCanvasInfoRequest
                 * @return DescribeWorkflowOpsCanvasInfoOutcome
                 */
                DescribeWorkflowOpsCanvasInfoOutcome DescribeWorkflowOpsCanvasInfo(const Model::DescribeWorkflowOpsCanvasInfoRequest &request);
                void DescribeWorkflowOpsCanvasInfoAsync(const Model::DescribeWorkflowOpsCanvasInfoRequest& request, const DescribeWorkflowOpsCanvasInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkflowOpsCanvasInfoOutcomeCallable DescribeWorkflowOpsCanvasInfoCallable(const Model::DescribeWorkflowOpsCanvasInfoRequest& request);

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
                 *工作流任务信息查询-项目克隆使用
                 * @param req DescribeWorkflowTasksForProjectCloneRequest
                 * @return DescribeWorkflowTasksForProjectCloneOutcome
                 */
                DescribeWorkflowTasksForProjectCloneOutcome DescribeWorkflowTasksForProjectClone(const Model::DescribeWorkflowTasksForProjectCloneRequest &request);
                void DescribeWorkflowTasksForProjectCloneAsync(const Model::DescribeWorkflowTasksForProjectCloneRequest& request, const DescribeWorkflowTasksForProjectCloneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkflowTasksForProjectCloneOutcomeCallable DescribeWorkflowTasksForProjectCloneCallable(const Model::DescribeWorkflowTasksForProjectCloneRequest& request);

                /**
                 *实例诊断信息
                 * @param req DiagnosePlusRequest
                 * @return DiagnosePlusOutcome
                 */
                DiagnosePlusOutcome DiagnosePlus(const Model::DiagnosePlusRequest &request);
                void DiagnosePlusAsync(const Model::DiagnosePlusRequest& request, const DiagnosePlusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DiagnosePlusOutcomeCallable DiagnosePlusCallable(const Model::DiagnosePlusRequest& request);

                /**
                 *调试运行集成任务
                 * @param req DryRunDIOfflineTaskRequest
                 * @return DryRunDIOfflineTaskOutcome
                 */
                DryRunDIOfflineTaskOutcome DryRunDIOfflineTask(const Model::DryRunDIOfflineTaskRequest &request);
                void DryRunDIOfflineTaskAsync(const Model::DryRunDIOfflineTaskRequest& request, const DryRunDIOfflineTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DryRunDIOfflineTaskOutcomeCallable DryRunDIOfflineTaskCallable(const Model::DryRunDIOfflineTaskRequest& request);

                /**
                 *编辑基线
                 * @param req EditBaselineRequest
                 * @return EditBaselineOutcome
                 */
                EditBaselineOutcome EditBaseline(const Model::EditBaselineRequest &request);
                void EditBaselineAsync(const Model::EditBaselineRequest& request, const EditBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EditBaselineOutcomeCallable EditBaselineCallable(const Model::EditBaselineRequest& request);

                /**
                 *事件管理-导出事件
                 * @param req ExportDsEventRequest
                 * @return ExportDsEventOutcome
                 */
                ExportDsEventOutcome ExportDsEvent(const Model::ExportDsEventRequest &request);
                void ExportDsEventAsync(const Model::ExportDsEventRequest& request, const ExportDsEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportDsEventOutcomeCallable ExportDsEventCallable(const Model::ExportDsEventRequest& request);

                /**
                 *批量导出文件
                 * @param req ExportFilesRequest
                 * @return ExportFilesOutcome
                 */
                ExportFilesOutcome ExportFiles(const Model::ExportFilesRequest &request);
                void ExportFilesAsync(const Model::ExportFilesRequest& request, const ExportFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportFilesOutcomeCallable ExportFilesCallable(const Model::ExportFilesRequest& request);

                /**
                 *导出项目参数
                 * @param req ExportProjectParamDsRequest
                 * @return ExportProjectParamDsOutcome
                 */
                ExportProjectParamDsOutcome ExportProjectParamDs(const Model::ExportProjectParamDsRequest &request);
                void ExportProjectParamDsAsync(const Model::ExportProjectParamDsRequest& request, const ExportProjectParamDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportProjectParamDsOutcomeCallable ExportProjectParamDsCallable(const Model::ExportProjectParamDsRequest& request);

                /**
                 *导出工作流(XML格式)，导出的文件存储在 cos 中(私有化 csp)，请自行下载，相关的下载信息在返回值中可以获取到
                 * @param req ExportWorkflowXmlRequest
                 * @return ExportWorkflowXmlOutcome
                 */
                ExportWorkflowXmlOutcome ExportWorkflowXml(const Model::ExportWorkflowXmlRequest &request);
                void ExportWorkflowXmlAsync(const Model::ExportWorkflowXmlRequest& request, const ExportWorkflowXmlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportWorkflowXmlOutcomeCallable ExportWorkflowXmlCallable(const Model::ExportWorkflowXmlRequest& request);

                /**
                 *导出工作流到 Zip 文件，导出的文件存储在 cos 中(私有化 csp)，请自行下载，相关的下载信息在返回值中可以获取到
                 * @param req ExportWorkflowZipRequest
                 * @return ExportWorkflowZipOutcome
                 */
                ExportWorkflowZipOutcome ExportWorkflowZip(const Model::ExportWorkflowZipRequest &request);
                void ExportWorkflowZipAsync(const Model::ExportWorkflowZipRequest& request, const ExportWorkflowZipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportWorkflowZipOutcomeCallable ExportWorkflowZipCallable(const Model::ExportWorkflowZipRequest& request);

                /**
                 *查找全部的文件夹
                 * @param req FindAllFolderRequest
                 * @return FindAllFolderOutcome
                 */
                FindAllFolderOutcome FindAllFolder(const Model::FindAllFolderRequest &request);
                void FindAllFolderAsync(const Model::FindAllFolderRequest& request, const FindAllFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FindAllFolderOutcomeCallable FindAllFolderCallable(const Model::FindAllFolderRequest& request);

                /**
                 *拉取下游依赖的任务列表Ds
                 * @param req FindDependTaskListDsRequest
                 * @return FindDependTaskListDsOutcome
                 */
                FindDependTaskListDsOutcome FindDependTaskListDs(const Model::FindDependTaskListDsRequest &request);
                void FindDependTaskListDsAsync(const Model::FindDependTaskListDsRequest& request, const FindDependTaskListDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FindDependTaskListDsOutcomeCallable FindDependTaskListDsCallable(const Model::FindDependTaskListDsRequest& request);

                /**
                 *批量拉取下游依赖的任务列表Ds
                 * @param req FindDependTaskListsDsRequest
                 * @return FindDependTaskListsDsOutcome
                 */
                FindDependTaskListsDsOutcome FindDependTaskListsDs(const Model::FindDependTaskListsDsRequest &request);
                void FindDependTaskListsDsAsync(const Model::FindDependTaskListsDsRequest& request, const FindDependTaskListsDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FindDependTaskListsDsOutcomeCallable FindDependTaskListsDsCallable(const Model::FindDependTaskListsDsRequest& request);

                /**
                 *编排空间-根据项目名称和任务名称模糊查询所有任务
                 * @param req FindFuzzyTasksDsRequest
                 * @return FindFuzzyTasksDsOutcome
                 */
                FindFuzzyTasksDsOutcome FindFuzzyTasksDs(const Model::FindFuzzyTasksDsRequest &request);
                void FindFuzzyTasksDsAsync(const Model::FindFuzzyTasksDsRequest& request, const FindFuzzyTasksDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FindFuzzyTasksDsOutcomeCallable FindFuzzyTasksDsCallable(const Model::FindFuzzyTasksDsRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
实例批量置成功
                 * @param req ForceSucInstancesRequest
                 * @return ForceSucInstancesOutcome
                 */
                ForceSucInstancesOutcome ForceSucInstances(const Model::ForceSucInstancesRequest &request);
                void ForceSucInstancesAsync(const Model::ForceSucInstancesRequest& request, const ForceSucInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ForceSucInstancesOutcomeCallable ForceSucInstancesCallable(const Model::ForceSucInstancesRequest& request);

                /**
                 *实例强制成功
                 * @param req ForceSucScheduleInstancesRequest
                 * @return ForceSucScheduleInstancesOutcome
                 */
                ForceSucScheduleInstancesOutcome ForceSucScheduleInstances(const Model::ForceSucScheduleInstancesRequest &request);
                void ForceSucScheduleInstancesAsync(const Model::ForceSucScheduleInstancesRequest& request, const ForceSucScheduleInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ForceSucScheduleInstancesOutcomeCallable ForceSucScheduleInstancesCallable(const Model::ForceSucScheduleInstancesRequest& request);

                /**
                 *任务运维-批量冻结任务
                 * @param req FreezeOpsTasksRequest
                 * @return FreezeOpsTasksOutcome
                 */
                FreezeOpsTasksOutcome FreezeOpsTasks(const Model::FreezeOpsTasksRequest &request);
                void FreezeOpsTasksAsync(const Model::FreezeOpsTasksRequest& request, const FreezeOpsTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FreezeOpsTasksOutcomeCallable FreezeOpsTasksCallable(const Model::FreezeOpsTasksRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
批量冻结任务
                 * @param req FreezeTasksRequest
                 * @return FreezeTasksOutcome
                 */
                FreezeTasksOutcome FreezeTasks(const Model::FreezeTasksRequest &request);
                void FreezeTasksAsync(const Model::FreezeTasksRequest& request, const FreezeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FreezeTasksOutcomeCallable FreezeTasksCallable(const Model::FreezeTasksRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
基于多个工作流进行批量冻结任务操作
                 * @param req FreezeTasksByMultiWorkflowRequest
                 * @return FreezeTasksByMultiWorkflowOutcome
                 */
                FreezeTasksByMultiWorkflowOutcome FreezeTasksByMultiWorkflow(const Model::FreezeTasksByMultiWorkflowRequest &request);
                void FreezeTasksByMultiWorkflowAsync(const Model::FreezeTasksByMultiWorkflowRequest& request, const FreezeTasksByMultiWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FreezeTasksByMultiWorkflowOutcomeCallable FreezeTasksByMultiWorkflowCallable(const Model::FreezeTasksByMultiWorkflowRequest& request);

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
                 *获取高级运行参数
                 * @param req GetAdvanceRunParamsRequest
                 * @return GetAdvanceRunParamsOutcome
                 */
                GetAdvanceRunParamsOutcome GetAdvanceRunParams(const Model::GetAdvanceRunParamsRequest &request);
                void GetAdvanceRunParamsAsync(const Model::GetAdvanceRunParamsRequest& request, const GetAdvanceRunParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetAdvanceRunParamsOutcomeCallable GetAdvanceRunParamsCallable(const Model::GetAdvanceRunParamsRequest& request);

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
                 *提取数据集成节点字段Schema
                 * @param req GetIntegrationNodeColumnSchemaRequest
                 * @return GetIntegrationNodeColumnSchemaOutcome
                 */
                GetIntegrationNodeColumnSchemaOutcome GetIntegrationNodeColumnSchema(const Model::GetIntegrationNodeColumnSchemaRequest &request);
                void GetIntegrationNodeColumnSchemaAsync(const Model::GetIntegrationNodeColumnSchemaRequest& request, const GetIntegrationNodeColumnSchemaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetIntegrationNodeColumnSchemaOutcomeCallable GetIntegrationNodeColumnSchemaCallable(const Model::GetIntegrationNodeColumnSchemaRequest& request);

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
                 *回收站脚本文件目录树
                 * @param req GetPathTreesRequest
                 * @return GetPathTreesOutcome
                 */
                GetPathTreesOutcome GetPathTrees(const Model::GetPathTreesRequest &request);
                void GetPathTreesAsync(const Model::GetPathTreesRequest& request, const GetPathTreesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetPathTreesOutcomeCallable GetPathTreesCallable(const Model::GetPathTreesRequest& request);

                /**
                 *资源管理-拉取资源目录树
                 * @param req GetResourcePathTreeRequest
                 * @return GetResourcePathTreeOutcome
                 */
                GetResourcePathTreeOutcome GetResourcePathTree(const Model::GetResourcePathTreeRequest &request);
                void GetResourcePathTreeAsync(const Model::GetResourcePathTreeRequest& request, const GetResourcePathTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetResourcePathTreeOutcomeCallable GetResourcePathTreeCallable(const Model::GetResourcePathTreeRequest& request);

                /**
                 *获取工作流运行任务下游Ds
                 * @param req GetRunSonListDsRequest
                 * @return GetRunSonListDsOutcome
                 */
                GetRunSonListDsOutcome GetRunSonListDs(const Model::GetRunSonListDsRequest &request);
                void GetRunSonListDsAsync(const Model::GetRunSonListDsRequest& request, const GetRunSonListDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetRunSonListDsOutcomeCallable GetRunSonListDsCallable(const Model::GetRunSonListDsRequest& request);

                /**
                 *获取调试任务实例状态信息
                 * @param req GetTestRunTaskInstancesStatusInfoRequest
                 * @return GetTestRunTaskInstancesStatusInfoOutcome
                 */
                GetTestRunTaskInstancesStatusInfoOutcome GetTestRunTaskInstancesStatusInfo(const Model::GetTestRunTaskInstancesStatusInfoRequest &request);
                void GetTestRunTaskInstancesStatusInfoAsync(const Model::GetTestRunTaskInstancesStatusInfoRequest& request, const GetTestRunTaskInstancesStatusInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTestRunTaskInstancesStatusInfoOutcomeCallable GetTestRunTaskInstancesStatusInfoCallable(const Model::GetTestRunTaskInstancesStatusInfoRequest& request);

                /**
                 *协同编辑资源锁心跳
                 * @param req HeartBeatRequest
                 * @return HeartBeatOutcome
                 */
                HeartBeatOutcome HeartBeat(const Model::HeartBeatRequest &request);
                void HeartBeatAsync(const Model::HeartBeatRequest& request, const HeartBeatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                HeartBeatOutcomeCallable HeartBeatCallable(const Model::HeartBeatRequest& request);

                /**
                 *事件管理-导入事件
                 * @param req ImportDsEventRequest
                 * @return ImportDsEventOutcome
                 */
                ImportDsEventOutcome ImportDsEvent(const Model::ImportDsEventRequest &request);
                void ImportDsEventAsync(const Model::ImportDsEventRequest& request, const ImportDsEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImportDsEventOutcomeCallable ImportDsEventCallable(const Model::ImportDsEventRequest& request);

                /**
                 *批量导入文件
                 * @param req ImportFilesRequest
                 * @return ImportFilesOutcome
                 */
                ImportFilesOutcome ImportFiles(const Model::ImportFilesRequest &request);
                void ImportFilesAsync(const Model::ImportFilesRequest& request, const ImportFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImportFilesOutcomeCallable ImportFilesCallable(const Model::ImportFilesRequest& request);

                /**
                 *异步导入集成任务
                 * @param req ImportOfflineTaskRequest
                 * @return ImportOfflineTaskOutcome
                 */
                ImportOfflineTaskOutcome ImportOfflineTask(const Model::ImportOfflineTaskRequest &request);
                void ImportOfflineTaskAsync(const Model::ImportOfflineTaskRequest& request, const ImportOfflineTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImportOfflineTaskOutcomeCallable ImportOfflineTaskCallable(const Model::ImportOfflineTaskRequest& request);

                /**
                 *导入项目参数
                 * @param req ImportProjectParamDsRequest
                 * @return ImportProjectParamDsOutcome
                 */
                ImportProjectParamDsOutcome ImportProjectParamDs(const Model::ImportProjectParamDsRequest &request);
                void ImportProjectParamDsAsync(const Model::ImportProjectParamDsRequest& request, const ImportProjectParamDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImportProjectParamDsOutcomeCallable ImportProjectParamDsCallable(const Model::ImportProjectParamDsRequest& request);

                /**
                 *任务是否存在监听事件
                 * @param req JudgeTaskListenEventRequest
                 * @return JudgeTaskListenEventOutcome
                 */
                JudgeTaskListenEventOutcome JudgeTaskListenEvent(const Model::JudgeTaskListenEventRequest &request);
                void JudgeTaskListenEventAsync(const Model::JudgeTaskListenEventRequest& request, const JudgeTaskListenEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                JudgeTaskListenEventOutcomeCallable JudgeTaskListenEventCallable(const Model::JudgeTaskListenEventRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
实例批量终止操作
                 * @param req KillInstancesRequest
                 * @return KillInstancesOutcome
                 */
                KillInstancesOutcome KillInstances(const Model::KillInstancesRequest &request);
                void KillInstancesAsync(const Model::KillInstancesRequest& request, const KillInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                KillInstancesOutcomeCallable KillInstancesCallable(const Model::KillInstancesRequest& request);

                /**
                 *按补录计划批量终止实例。
                 * @param req KillOpsMakePlanInstancesRequest
                 * @return KillOpsMakePlanInstancesOutcome
                 */
                KillOpsMakePlanInstancesOutcome KillOpsMakePlanInstances(const Model::KillOpsMakePlanInstancesRequest &request);
                void KillOpsMakePlanInstancesAsync(const Model::KillOpsMakePlanInstancesRequest& request, const KillOpsMakePlanInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                KillOpsMakePlanInstancesOutcomeCallable KillOpsMakePlanInstancesCallable(const Model::KillOpsMakePlanInstancesRequest& request);

                /**
                 *批量kill实例
                 * @param req KillScheduleInstancesRequest
                 * @return KillScheduleInstancesOutcome
                 */
                KillScheduleInstancesOutcome KillScheduleInstances(const Model::KillScheduleInstancesRequest &request);
                void KillScheduleInstancesAsync(const Model::KillScheduleInstancesRequest& request, const KillScheduleInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                KillScheduleInstancesOutcomeCallable KillScheduleInstancesCallable(const Model::KillScheduleInstancesRequest& request);

                /**
                 *获取操作详情列表
                 * @param req ListBatchDetailRequest
                 * @return ListBatchDetailOutcome
                 */
                ListBatchDetailOutcome ListBatchDetail(const Model::ListBatchDetailRequest &request);
                void ListBatchDetailAsync(const Model::ListBatchDetailRequest& request, const ListBatchDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListBatchDetailOutcomeCallable ListBatchDetailCallable(const Model::ListBatchDetailRequest& request);

                /**
                 *获取操作历史列表
                 * @param req ListBatchJobRequest
                 * @return ListBatchJobOutcome
                 */
                ListBatchJobOutcome ListBatchJob(const Model::ListBatchJobRequest &request);
                void ListBatchJobAsync(const Model::ListBatchJobRequest& request, const ListBatchJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListBatchJobOutcomeCallable ListBatchJobCallable(const Model::ListBatchJobRequest& request);

                /**
                 *锁定集成任务
                 * @param req LockIntegrationTaskRequest
                 * @return LockIntegrationTaskOutcome
                 */
                LockIntegrationTaskOutcome LockIntegrationTask(const Model::LockIntegrationTaskRequest &request);
                void LockIntegrationTaskAsync(const Model::LockIntegrationTaskRequest& request, const LockIntegrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                LockIntegrationTaskOutcomeCallable LockIntegrationTaskCallable(const Model::LockIntegrationTaskRequest& request);

                /**
                 *任务批量补录，调度状态任务才可以补录；
                 * @param req MakeUpOpsTasksRequest
                 * @return MakeUpOpsTasksOutcome
                 */
                MakeUpOpsTasksOutcome MakeUpOpsTasks(const Model::MakeUpOpsTasksRequest &request);
                void MakeUpOpsTasksAsync(const Model::MakeUpOpsTasksRequest& request, const MakeUpOpsTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MakeUpOpsTasksOutcomeCallable MakeUpOpsTasksCallable(const Model::MakeUpOpsTasksRequest& request);

                /**
                 *工作流补数据
                 * @param req MakeUpTasksByWorkflowRequest
                 * @return MakeUpTasksByWorkflowOutcome
                 */
                MakeUpTasksByWorkflowOutcome MakeUpTasksByWorkflow(const Model::MakeUpTasksByWorkflowRequest &request);
                void MakeUpTasksByWorkflowAsync(const Model::MakeUpTasksByWorkflowRequest& request, const MakeUpTasksByWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MakeUpTasksByWorkflowOutcomeCallable MakeUpTasksByWorkflowCallable(const Model::MakeUpTasksByWorkflowRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
任务批量补录，调度状态任务才可以补录；



                 * @param req MakeUpTasksNewRequest
                 * @return MakeUpTasksNewOutcome
                 */
                MakeUpTasksNewOutcome MakeUpTasksNew(const Model::MakeUpTasksNewRequest &request);
                void MakeUpTasksNewAsync(const Model::MakeUpTasksNewRequest& request, const MakeUpTasksNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MakeUpTasksNewOutcomeCallable MakeUpTasksNewCallable(const Model::MakeUpTasksNewRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
工作流下所有任务的补录
                 * @param req MakeUpWorkflowNewRequest
                 * @return MakeUpWorkflowNewOutcome
                 */
                MakeUpWorkflowNewOutcome MakeUpWorkflowNew(const Model::MakeUpWorkflowNewRequest &request);
                void MakeUpWorkflowNewAsync(const Model::MakeUpWorkflowNewRequest& request, const MakeUpWorkflowNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MakeUpWorkflowNewOutcomeCallable MakeUpWorkflowNewCallable(const Model::MakeUpWorkflowNewRequest& request);

                /**
                 *修改审批单状态
                 * @param req ModifyApproveStatusRequest
                 * @return ModifyApproveStatusOutcome
                 */
                ModifyApproveStatusOutcome ModifyApproveStatus(const Model::ModifyApproveStatusRequest &request);
                void ModifyApproveStatusAsync(const Model::ModifyApproveStatusRequest& request, const ModifyApproveStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApproveStatusOutcomeCallable ModifyApproveStatusCallable(const Model::ModifyApproveStatusRequest& request);

                /**
                 *编辑基线告警状态
                 * @param req ModifyBaselineAlarmStatusRequest
                 * @return ModifyBaselineAlarmStatusOutcome
                 */
                ModifyBaselineAlarmStatusOutcome ModifyBaselineAlarmStatus(const Model::ModifyBaselineAlarmStatusRequest &request);
                void ModifyBaselineAlarmStatusAsync(const Model::ModifyBaselineAlarmStatusRequest& request, const ModifyBaselineAlarmStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBaselineAlarmStatusOutcomeCallable ModifyBaselineAlarmStatusCallable(const Model::ModifyBaselineAlarmStatusRequest& request);

                /**
                 *编辑基线实例中任务告警状态
                 * @param req ModifyBaselineTaskAlarmStatusRequest
                 * @return ModifyBaselineTaskAlarmStatusOutcome
                 */
                ModifyBaselineTaskAlarmStatusOutcome ModifyBaselineTaskAlarmStatus(const Model::ModifyBaselineTaskAlarmStatusRequest &request);
                void ModifyBaselineTaskAlarmStatusAsync(const Model::ModifyBaselineTaskAlarmStatusRequest& request, const ModifyBaselineTaskAlarmStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBaselineTaskAlarmStatusOutcomeCallable ModifyBaselineTaskAlarmStatusCallable(const Model::ModifyBaselineTaskAlarmStatusRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
修改数据源
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
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
文件夹更新
                 * @param req ModifyFolderRequest
                 * @return ModifyFolderOutcome
                 */
                ModifyFolderOutcome ModifyFolder(const Model::ModifyFolderRequest &request);
                void ModifyFolderAsync(const Model::ModifyFolderRequest& request, const ModifyFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyFolderOutcomeCallable ModifyFolderCallable(const Model::ModifyFolderRequest& request);

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
                 *编排空间-工作流-创建任务文件夹
                 * @param req ModifyTaskFolderRequest
                 * @return ModifyTaskFolderOutcome
                 */
                ModifyTaskFolderOutcome ModifyTaskFolder(const Model::ModifyTaskFolderRequest &request);
                void ModifyTaskFolderAsync(const Model::ModifyTaskFolderRequest& request, const ModifyTaskFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTaskFolderOutcomeCallable ModifyTaskFolderCallable(const Model::ModifyTaskFolderRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
更新任务
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
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
添加父任务依赖
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
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
修改任务脚本
                 * @param req ModifyTaskScriptRequest
                 * @return ModifyTaskScriptOutcome
                 */
                ModifyTaskScriptOutcome ModifyTaskScript(const Model::ModifyTaskScriptRequest &request);
                void ModifyTaskScriptAsync(const Model::ModifyTaskScriptRequest& request, const ModifyTaskScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTaskScriptOutcomeCallable ModifyTaskScriptCallable(const Model::ModifyTaskScriptRequest& request);

                /**
                 *修改任务脚本Ds
                 * @param req ModifyTaskScriptDsRequest
                 * @return ModifyTaskScriptDsOutcome
                 */
                ModifyTaskScriptDsOutcome ModifyTaskScriptDs(const Model::ModifyTaskScriptDsRequest &request);
                void ModifyTaskScriptDsAsync(const Model::ModifyTaskScriptDsRequest& request, const ModifyTaskScriptDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTaskScriptDsOutcomeCallable ModifyTaskScriptDsCallable(const Model::ModifyTaskScriptDsRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
更新工作流
                 * @param req ModifyWorkflowInfoRequest
                 * @return ModifyWorkflowInfoOutcome
                 */
                ModifyWorkflowInfoOutcome ModifyWorkflowInfo(const Model::ModifyWorkflowInfoRequest &request);
                void ModifyWorkflowInfoAsync(const Model::ModifyWorkflowInfoRequest& request, const ModifyWorkflowInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWorkflowInfoOutcomeCallable ModifyWorkflowInfoCallable(const Model::ModifyWorkflowInfoRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
更新工作流调度
                 * @param req ModifyWorkflowScheduleRequest
                 * @return ModifyWorkflowScheduleOutcome
                 */
                ModifyWorkflowScheduleOutcome ModifyWorkflowSchedule(const Model::ModifyWorkflowScheduleRequest &request);
                void ModifyWorkflowScheduleAsync(const Model::ModifyWorkflowScheduleRequest& request, const ModifyWorkflowScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWorkflowScheduleOutcomeCallable ModifyWorkflowScheduleCallable(const Model::ModifyWorkflowScheduleRequest& request);

                /**
                 *移动文件
                 * @param req MoveFileRequest
                 * @return MoveFileOutcome
                 */
                MoveFileOutcome MoveFile(const Model::MoveFileRequest &request);
                void MoveFileAsync(const Model::MoveFileRequest& request, const MoveFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MoveFileOutcomeCallable MoveFileCallable(const Model::MoveFileRequest& request);

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
                 *注册事件发布者
                 * @param req RegisterDsEventPublisherRequest
                 * @return RegisterDsEventPublisherOutcome
                 */
                RegisterDsEventPublisherOutcome RegisterDsEventPublisher(const Model::RegisterDsEventPublisherRequest &request);
                void RegisterDsEventPublisherAsync(const Model::RegisterDsEventPublisherRequest& request, const RegisterDsEventPublisherAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RegisterDsEventPublisherOutcomeCallable RegisterDsEventPublisherCallable(const Model::RegisterDsEventPublisherRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
注册事件
                 * @param req RegisterEventRequest
                 * @return RegisterEventOutcome
                 */
                RegisterEventOutcome RegisterEvent(const Model::RegisterEventRequest &request);
                void RegisterEventAsync(const Model::RegisterEventRequest& request, const RegisterEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RegisterEventOutcomeCallable RegisterEventCallable(const Model::RegisterEventRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
注册事件监听器
                 * @param req RegisterEventListenerRequest
                 * @return RegisterEventListenerOutcome
                 */
                RegisterEventListenerOutcome RegisterEventListener(const Model::RegisterEventListenerRequest &request);
                void RegisterEventListenerAsync(const Model::RegisterEventListenerRequest& request, const RegisterEventListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RegisterEventListenerOutcomeCallable RegisterEventListenerCallable(const Model::RegisterEventListenerRequest& request);

                /**
                 *释放协同编辑资源锁
                 * @param req ReleaseLockRequest
                 * @return ReleaseLockOutcome
                 */
                ReleaseLockOutcome ReleaseLock(const Model::ReleaseLockRequest &request);
                void ReleaseLockAsync(const Model::ReleaseLockRequest& request, const ReleaseLockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReleaseLockOutcomeCallable ReleaseLockCallable(const Model::ReleaseLockRequest& request);

                /**
                 *删除编排空间工作流
                 * @param req RemoveWorkflowDsRequest
                 * @return RemoveWorkflowDsOutcome
                 */
                RemoveWorkflowDsOutcome RemoveWorkflowDs(const Model::RemoveWorkflowDsRequest &request);
                void RemoveWorkflowDsAsync(const Model::RemoveWorkflowDsRequest& request, const RemoveWorkflowDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveWorkflowDsOutcomeCallable RemoveWorkflowDsCallable(const Model::RemoveWorkflowDsRequest& request);

                /**
                 *重命名文件
                 * @param req RenameFileRequest
                 * @return RenameFileOutcome
                 */
                RenameFileOutcome RenameFile(const Model::RenameFileRequest &request);
                void RenameFileAsync(const Model::RenameFileRequest& request, const RenameFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenameFileOutcomeCallable RenameFileCallable(const Model::RenameFileRequest& request);

                /**
                 *资源管理-重命名资源
                 * @param req RenameResourceRequest
                 * @return RenameResourceOutcome
                 */
                RenameResourceOutcome RenameResource(const Model::RenameResourceRequest &request);
                void RenameResourceAsync(const Model::RenameResourceRequest& request, const RenameResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenameResourceOutcomeCallable RenameResourceCallable(const Model::RenameResourceRequest& request);

                /**
                 *资源管理-重命名资源文件
                 * @param req RenameResourceFileRequest
                 * @return RenameResourceFileOutcome
                 */
                RenameResourceFileOutcome RenameResourceFile(const Model::RenameResourceFileRequest &request);
                void RenameResourceFileAsync(const Model::RenameResourceFileRequest& request, const RenameResourceFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenameResourceFileOutcomeCallable RenameResourceFileCallable(const Model::RenameResourceFileRequest& request);

                /**
                 *RenameTaskDs
                 * @param req RenameTaskDsRequest
                 * @return RenameTaskDsOutcome
                 */
                RenameTaskDsOutcome RenameTaskDs(const Model::RenameTaskDsRequest &request);
                void RenameTaskDsAsync(const Model::RenameTaskDsRequest& request, const RenameTaskDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenameTaskDsOutcomeCallable RenameTaskDsCallable(const Model::RenameTaskDsRequest& request);

                /**
                 *更新工作流
                 * @param req RenewWorkflowDsRequest
                 * @return RenewWorkflowDsOutcome
                 */
                RenewWorkflowDsOutcome RenewWorkflowDs(const Model::RenewWorkflowDsRequest &request);
                void RenewWorkflowDsAsync(const Model::RenewWorkflowDsRequest& request, const RenewWorkflowDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewWorkflowDsOutcomeCallable RenewWorkflowDsCallable(const Model::RenewWorkflowDsRequest& request);

                /**
                 *移动文件夹
                 * @param req RenewWorkflowFolderDsRequest
                 * @return RenewWorkflowFolderDsOutcome
                 */
                RenewWorkflowFolderDsOutcome RenewWorkflowFolderDs(const Model::RenewWorkflowFolderDsRequest &request);
                void RenewWorkflowFolderDsAsync(const Model::RenewWorkflowFolderDsRequest& request, const RenewWorkflowFolderDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewWorkflowFolderDsOutcomeCallable RenewWorkflowFolderDsCallable(const Model::RenewWorkflowFolderDsRequest& request);

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
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
实例批量重跑
                 * @param req RerunInstancesRequest
                 * @return RerunInstancesOutcome
                 */
                RerunInstancesOutcome RerunInstances(const Model::RerunInstancesRequest &request);
                void RerunInstancesAsync(const Model::RerunInstancesRequest& request, const RerunInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RerunInstancesOutcomeCallable RerunInstancesCallable(const Model::RerunInstancesRequest& request);

                /**
                 *按补录计划批量重跑/选择补录计划→补录任务→补录实例，点击重跑
                 * @param req RerunOpsMakePlanInstancesRequest
                 * @return RerunOpsMakePlanInstancesOutcome
                 */
                RerunOpsMakePlanInstancesOutcome RerunOpsMakePlanInstances(const Model::RerunOpsMakePlanInstancesRequest &request);
                void RerunOpsMakePlanInstancesAsync(const Model::RerunOpsMakePlanInstancesRequest& request, const RerunOpsMakePlanInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RerunOpsMakePlanInstancesOutcomeCallable RerunOpsMakePlanInstancesCallable(const Model::RerunOpsMakePlanInstancesRequest& request);

                /**
                 *实例批量重跑
                 * @param req RerunScheduleInstancesRequest
                 * @return RerunScheduleInstancesOutcome
                 */
                RerunScheduleInstancesOutcome RerunScheduleInstances(const Model::RerunScheduleInstancesRequest &request);
                void RerunScheduleInstancesAsync(const Model::RerunScheduleInstancesRequest& request, const RerunScheduleInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RerunScheduleInstancesOutcomeCallable RerunScheduleInstancesCallable(const Model::RerunScheduleInstancesRequest& request);

                /**
                 *重启采集器
                 * @param req RestartInLongAgentRequest
                 * @return RestartInLongAgentOutcome
                 */
                RestartInLongAgentOutcome RestartInLongAgent(const Model::RestartInLongAgentRequest &request);
                void RestartInLongAgentAsync(const Model::RestartInLongAgentRequest& request, const RestartInLongAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestartInLongAgentOutcomeCallable RestartInLongAgentCallable(const Model::RestartInLongAgentRequest& request);

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
                 *实例强制成功
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
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
运行任务
                 * @param req RunTaskRequest
                 * @return RunTaskOutcome
                 */
                RunTaskOutcome RunTask(const Model::RunTaskRequest &request);
                void RunTaskAsync(const Model::RunTaskRequest& request, const RunTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunTaskOutcomeCallable RunTaskCallable(const Model::RunTaskRequest& request);

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
                 *批量保存任务位置
                 * @param req SavePositionsDsRequest
                 * @return SavePositionsDsOutcome
                 */
                SavePositionsDsOutcome SavePositionsDs(const Model::SavePositionsDsRequest &request);
                void SavePositionsDsAsync(const Model::SavePositionsDsRequest& request, const SavePositionsDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SavePositionsDsOutcomeCallable SavePositionsDsCallable(const Model::SavePositionsDsRequest& request);

                /**
                 *判断脚本文件是否被任务列表所引用
                 * @param req ScriptUsedByOtherTaskDsRequest
                 * @return ScriptUsedByOtherTaskDsOutcome
                 */
                ScriptUsedByOtherTaskDsOutcome ScriptUsedByOtherTaskDs(const Model::ScriptUsedByOtherTaskDsRequest &request);
                void ScriptUsedByOtherTaskDsAsync(const Model::ScriptUsedByOtherTaskDsRequest& request, const ScriptUsedByOtherTaskDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScriptUsedByOtherTaskDsOutcomeCallable ScriptUsedByOtherTaskDsCallable(const Model::ScriptUsedByOtherTaskDsRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
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
                 *提交基线
                 * @param req StopBaselineRequest
                 * @return StopBaselineOutcome
                 */
                StopBaselineOutcome StopBaseline(const Model::StopBaselineRequest &request);
                void StopBaselineAsync(const Model::StopBaselineRequest& request, const StopBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopBaselineOutcomeCallable StopBaselineCallable(const Model::StopBaselineRequest& request);

                /**
                 *停止集成任务
                 * @param req StopIntegrationTaskRequest
                 * @return StopIntegrationTaskOutcome
                 */
                StopIntegrationTaskOutcome StopIntegrationTask(const Model::StopIntegrationTaskRequest &request);
                void StopIntegrationTaskAsync(const Model::StopIntegrationTaskRequest& request, const StopIntegrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopIntegrationTaskOutcomeCallable StopIntegrationTaskCallable(const Model::StopIntegrationTaskRequest& request);

                /**
                 *提交基线
                 * @param req SubmitBaselineRequest
                 * @return SubmitBaselineOutcome
                 */
                SubmitBaselineOutcome SubmitBaseline(const Model::SubmitBaselineRequest &request);
                void SubmitBaselineAsync(const Model::SubmitBaselineRequest& request, const SubmitBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitBaselineOutcomeCallable SubmitBaselineCallable(const Model::SubmitBaselineRequest& request);

                /**
                 *提交自定义函数
                 * @param req SubmitCustomFunctionRequest
                 * @return SubmitCustomFunctionOutcome
                 */
                SubmitCustomFunctionOutcome SubmitCustomFunction(const Model::SubmitCustomFunctionRequest &request);
                void SubmitCustomFunctionAsync(const Model::SubmitCustomFunctionRequest& request, const SubmitCustomFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitCustomFunctionOutcomeCallable SubmitCustomFunctionCallable(const Model::SubmitCustomFunctionRequest& request);

                /**
                 *即席分析提交PySpark任务
                 * @param req SubmitPySparkTaskRequest
                 * @return SubmitPySparkTaskOutcome
                 */
                SubmitPySparkTaskOutcome SubmitPySparkTask(const Model::SubmitPySparkTaskRequest &request);
                void SubmitPySparkTaskAsync(const Model::SubmitPySparkTaskRequest& request, const SubmitPySparkTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitPySparkTaskOutcomeCallable SubmitPySparkTaskCallable(const Model::SubmitPySparkTaskRequest& request);

                /**
                 *即席分析提交PYTHON任务
                 * @param req SubmitPythonTaskRequest
                 * @return SubmitPythonTaskOutcome
                 */
                SubmitPythonTaskOutcome SubmitPythonTask(const Model::SubmitPythonTaskRequest &request);
                void SubmitPythonTaskAsync(const Model::SubmitPythonTaskRequest& request, const SubmitPythonTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitPythonTaskOutcomeCallable SubmitPythonTaskCallable(const Model::SubmitPythonTaskRequest& request);

                /**
                 *即席分析提交SHELL任务
                 * @param req SubmitShellTaskRequest
                 * @return SubmitShellTaskOutcome
                 */
                SubmitShellTaskOutcome SubmitShellTask(const Model::SubmitShellTaskRequest &request);
                void SubmitShellTaskAsync(const Model::SubmitShellTaskRequest& request, const SubmitShellTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitShellTaskOutcomeCallable SubmitShellTaskCallable(const Model::SubmitShellTaskRequest& request);

                /**
                 *即席分析提交SQL任务
                 * @param req SubmitSqlTaskRequest
                 * @return SubmitSqlTaskOutcome
                 */
                SubmitSqlTaskOutcome SubmitSqlTask(const Model::SubmitSqlTaskRequest &request);
                void SubmitSqlTaskAsync(const Model::SubmitSqlTaskRequest& request, const SubmitSqlTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitSqlTaskOutcomeCallable SubmitSqlTaskCallable(const Model::SubmitSqlTaskRequest& request);

                /**
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
提交任务
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
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
提交工作流
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
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
触发事件
                 * @param req TriggerEventRequest
                 * @return TriggerEventOutcome
                 */
                TriggerEventOutcome TriggerEvent(const Model::TriggerEventRequest &request);
                void TriggerEventAsync(const Model::TriggerEventRequest& request, const TriggerEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TriggerEventOutcomeCallable TriggerEventCallable(const Model::TriggerEventRequest& request);

                /**
                 *解锁集成任务
                 * @param req UnlockIntegrationTaskRequest
                 * @return UnlockIntegrationTaskOutcome
                 */
                UnlockIntegrationTaskOutcome UnlockIntegrationTask(const Model::UnlockIntegrationTaskRequest &request);
                void UnlockIntegrationTaskAsync(const Model::UnlockIntegrationTaskRequest& request, const UnlockIntegrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnlockIntegrationTaskOutcomeCallable UnlockIntegrationTaskCallable(const Model::UnlockIntegrationTaskRequest& request);

                /**
                 *批量更新高级设置
                 * @param req UpdateBatchTaskAdvancedSettingsRequest
                 * @return UpdateBatchTaskAdvancedSettingsOutcome
                 */
                UpdateBatchTaskAdvancedSettingsOutcome UpdateBatchTaskAdvancedSettings(const Model::UpdateBatchTaskAdvancedSettingsRequest &request);
                void UpdateBatchTaskAdvancedSettingsAsync(const Model::UpdateBatchTaskAdvancedSettingsRequest& request, const UpdateBatchTaskAdvancedSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateBatchTaskAdvancedSettingsOutcomeCallable UpdateBatchTaskAdvancedSettingsCallable(const Model::UpdateBatchTaskAdvancedSettingsRequest& request);

                /**
                 *批量更新数据源
                 * @param req UpdateBatchTaskDatasourceRequest
                 * @return UpdateBatchTaskDatasourceOutcome
                 */
                UpdateBatchTaskDatasourceOutcome UpdateBatchTaskDatasource(const Model::UpdateBatchTaskDatasourceRequest &request);
                void UpdateBatchTaskDatasourceAsync(const Model::UpdateBatchTaskDatasourceRequest& request, const UpdateBatchTaskDatasourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateBatchTaskDatasourceOutcomeCallable UpdateBatchTaskDatasourceCallable(const Model::UpdateBatchTaskDatasourceRequest& request);

                /**
                 *批量修改责任人
                 * @param req UpdateBatchTaskInChargeRequest
                 * @return UpdateBatchTaskInChargeOutcome
                 */
                UpdateBatchTaskInChargeOutcome UpdateBatchTaskInCharge(const Model::UpdateBatchTaskInChargeRequest &request);
                void UpdateBatchTaskInChargeAsync(const Model::UpdateBatchTaskInChargeRequest& request, const UpdateBatchTaskInChargeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateBatchTaskInChargeOutcomeCallable UpdateBatchTaskInChargeCallable(const Model::UpdateBatchTaskInChargeRequest& request);

                /**
                 *批量修改参数
                 * @param req UpdateBatchTaskParameterRequest
                 * @return UpdateBatchTaskParameterOutcome
                 */
                UpdateBatchTaskParameterOutcome UpdateBatchTaskParameter(const Model::UpdateBatchTaskParameterRequest &request);
                void UpdateBatchTaskParameterAsync(const Model::UpdateBatchTaskParameterRequest& request, const UpdateBatchTaskParameterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateBatchTaskParameterOutcomeCallable UpdateBatchTaskParameterCallable(const Model::UpdateBatchTaskParameterRequest& request);

                /**
                 *批量更新调度参数
                 * @param req UpdateBatchTaskParamsRequest
                 * @return UpdateBatchTaskParamsOutcome
                 */
                UpdateBatchTaskParamsOutcome UpdateBatchTaskParams(const Model::UpdateBatchTaskParamsRequest &request);
                void UpdateBatchTaskParamsAsync(const Model::UpdateBatchTaskParamsRequest& request, const UpdateBatchTaskParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateBatchTaskParamsOutcomeCallable UpdateBatchTaskParamsCallable(const Model::UpdateBatchTaskParamsRequest& request);

                /**
                 *批量修改资源组
                 * @param req UpdateBatchTaskResourceGroupRequest
                 * @return UpdateBatchTaskResourceGroupOutcome
                 */
                UpdateBatchTaskResourceGroupOutcome UpdateBatchTaskResourceGroup(const Model::UpdateBatchTaskResourceGroupRequest &request);
                void UpdateBatchTaskResourceGroupAsync(const Model::UpdateBatchTaskResourceGroupRequest& request, const UpdateBatchTaskResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateBatchTaskResourceGroupOutcomeCallable UpdateBatchTaskResourceGroupCallable(const Model::UpdateBatchTaskResourceGroupRequest& request);

                /**
                 *批量更新调度周期设置
                 * @param req UpdateBatchTaskScheduleRequest
                 * @return UpdateBatchTaskScheduleOutcome
                 */
                UpdateBatchTaskScheduleOutcome UpdateBatchTaskSchedule(const Model::UpdateBatchTaskScheduleRequest &request);
                void UpdateBatchTaskScheduleAsync(const Model::UpdateBatchTaskScheduleRequest& request, const UpdateBatchTaskScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateBatchTaskScheduleOutcomeCallable UpdateBatchTaskScheduleCallable(const Model::UpdateBatchTaskScheduleRequest& request);

                /**
                 *更新事件
                 * @param req UpdateDsEventRequest
                 * @return UpdateDsEventOutcome
                 */
                UpdateDsEventOutcome UpdateDsEvent(const Model::UpdateDsEventRequest &request);
                void UpdateDsEventAsync(const Model::UpdateDsEventRequest& request, const UpdateDsEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateDsEventOutcomeCallable UpdateDsEventCallable(const Model::UpdateDsEventRequest& request);

                /**
                 *更新事件监听
                 * @param req UpdateEventListenerRequest
                 * @return UpdateEventListenerOutcome
                 */
                UpdateEventListenerOutcome UpdateEventListener(const Model::UpdateEventListenerRequest &request);
                void UpdateEventListenerAsync(const Model::UpdateEventListenerRequest& request, const UpdateEventListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateEventListenerOutcomeCallable UpdateEventListenerCallable(const Model::UpdateEventListenerRequest& request);

                /**
                 *更新采集器
                 * @param req UpdateInLongAgentRequest
                 * @return UpdateInLongAgentOutcome
                 */
                UpdateInLongAgentOutcome UpdateInLongAgent(const Model::UpdateInLongAgentRequest &request);
                void UpdateInLongAgentAsync(const Model::UpdateInLongAgentRequest& request, const UpdateInLongAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateInLongAgentOutcomeCallable UpdateInLongAgentCallable(const Model::UpdateInLongAgentRequest& request);

                /**
                 *更新任务Ds
                 * @param req UpdateTaskDsRequest
                 * @return UpdateTaskDsOutcome
                 */
                UpdateTaskDsOutcome UpdateTaskDs(const Model::UpdateTaskDsRequest &request);
                void UpdateTaskDsAsync(const Model::UpdateTaskDsRequest& request, const UpdateTaskDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateTaskDsOutcomeCallable UpdateTaskDsCallable(const Model::UpdateTaskDsRequest& request);

                /**
                 *修改工作流责任人
                 * @param req UpdateWorkflowOwnerRequest
                 * @return UpdateWorkflowOwnerOutcome
                 */
                UpdateWorkflowOwnerOutcome UpdateWorkflowOwner(const Model::UpdateWorkflowOwnerRequest &request);
                void UpdateWorkflowOwnerAsync(const Model::UpdateWorkflowOwnerRequest& request, const UpdateWorkflowOwnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateWorkflowOwnerOutcomeCallable UpdateWorkflowOwnerCallable(const Model::UpdateWorkflowOwnerRequest& request);

                /**
                 *保存高级运行用户自定义参数
                 * @param req UploadAdvanceRunParamsRequest
                 * @return UploadAdvanceRunParamsOutcome
                 */
                UploadAdvanceRunParamsOutcome UploadAdvanceRunParams(const Model::UploadAdvanceRunParamsRequest &request);
                void UploadAdvanceRunParamsAsync(const Model::UploadAdvanceRunParamsRequest& request, const UploadAdvanceRunParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadAdvanceRunParamsOutcomeCallable UploadAdvanceRunParamsCallable(const Model::UploadAdvanceRunParamsRequest& request);

                /**
                 *保存任务信息
                 * @param req UploadContentRequest
                 * @return UploadContentOutcome
                 */
                UploadContentOutcome UploadContent(const Model::UploadContentRequest &request);
                void UploadContentAsync(const Model::UploadContentRequest& request, const UploadContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadContentOutcomeCallable UploadContentCallable(const Model::UploadContentRequest& request);

                /**
                 *文件上传需要先获取文件上传所需要的秘钥，文件位置等信息，因为文件名字可能会出现冲突，所以需要传入将要写入的文件，如果检测到文件名冲突，WeData 后端会在文件名上加入随机字符串。
                 * @param req UploadFilesDsRequest
                 * @return UploadFilesDsOutcome
                 */
                UploadFilesDsOutcome UploadFilesDs(const Model::UploadFilesDsRequest &request);
                void UploadFilesDsAsync(const Model::UploadFilesDsRequest& request, const UploadFilesDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadFilesDsOutcomeCallable UploadFilesDsCallable(const Model::UploadFilesDsRequest& request);

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
