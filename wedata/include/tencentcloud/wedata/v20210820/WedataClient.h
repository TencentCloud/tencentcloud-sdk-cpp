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
#include <tencentcloud/wedata/v20210820/model/BatchCreateIntegrationTaskAlarmsRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchCreateIntegrationTaskAlarmsResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchDeleteIntegrationTasksRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchDeleteIntegrationTasksResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchDeleteTasksNewRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchDeleteTasksNewResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchForceSuccessIntegrationTaskInstancesRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchForceSuccessIntegrationTaskInstancesResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchKillIntegrationTaskInstancesRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchKillIntegrationTaskInstancesResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchMakeUpIntegrationTasksRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchMakeUpIntegrationTasksResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchModifyOwnersNewRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchModifyOwnersNewResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchRerunIntegrationTaskInstancesRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchRerunIntegrationTaskInstancesResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchResumeIntegrationTasksRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchResumeIntegrationTasksResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchStartIntegrationTasksRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchStartIntegrationTasksResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchStopIntegrationTasksRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchStopIntegrationTasksResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchStopTasksNewRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchStopTasksNewResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchSuspendIntegrationTasksRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchSuspendIntegrationTasksResponse.h>
#include <tencentcloud/wedata/v20210820/model/BatchUpdateIntegrationTasksRequest.h>
#include <tencentcloud/wedata/v20210820/model/BatchUpdateIntegrationTasksResponse.h>
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
#include <tencentcloud/wedata/v20210820/model/CreateCustomFunctionRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateCustomFunctionResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateDataSourceRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateDataSourceResponse.h>
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
#include <tencentcloud/wedata/v20210820/model/CreateOrUpdateResourceRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateOrUpdateResourceResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateTaskAlarmRegularRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateTaskAlarmRegularResponse.h>
#include <tencentcloud/wedata/v20210820/model/CreateWorkflowRequest.h>
#include <tencentcloud/wedata/v20210820/model/CreateWorkflowResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteCustomFunctionRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteCustomFunctionResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteDataSourcesRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteDataSourcesResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteFolderRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteFolderResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteInLongAgentRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteInLongAgentResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteIntegrationNodeRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteIntegrationNodeResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteIntegrationTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteIntegrationTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteOfflineTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteOfflineTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteResourceRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteResourceResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteTaskAlarmRegularRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteTaskAlarmRegularResponse.h>
#include <tencentcloud/wedata/v20210820/model/DeleteWorkflowNewRequest.h>
#include <tencentcloud/wedata/v20210820/model/DeleteWorkflowNewResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeAlarmEventsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeAlarmEventsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeAlarmReceiverRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeAlarmReceiverResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeClusterNamespaceListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeClusterNamespaceListResponse.h>
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
#include <tencentcloud/wedata/v20210820/model/DescribeDatasourceRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDatasourceResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDependTasksNewRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeDependTasksNewResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeFolderListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeFolderListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeFolderWorkflowListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeFolderWorkflowListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeFunctionKindsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeFunctionKindsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeFunctionTypesRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeFunctionTypesResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInLongAgentListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInLongAgentListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInLongAgentTaskListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInLongAgentTaskListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInLongAgentVpcListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInLongAgentVpcListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInLongTkeClusterListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInLongTkeClusterListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInstanceLastLogRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInstanceLastLogResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInstanceListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInstanceListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInstanceLogRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInstanceLogResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInstanceLogListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInstanceLogListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInstanceLogsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeInstanceLogsResponse.h>
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
#include <tencentcloud/wedata/v20210820/model/DescribeKafkaTopicInfoRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeKafkaTopicInfoResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeOfflineTaskTokenRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeOfflineTaskTokenResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeOrganizationalFunctionsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeOrganizationalFunctionsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeProjectRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeProjectResponse.h>
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
#include <tencentcloud/wedata/v20210820/model/DescribeStandardRuleDetailInfoListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeStandardRuleDetailInfoListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeStreamTaskLogListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeStreamTaskLogListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTableInfoListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTableInfoListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTableSchemaInfoRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTableSchemaInfoResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskAlarmRegulationsRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskAlarmRegulationsResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskDetailRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskDetailResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskInstanceRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskInstanceResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskInstanceReportDetailRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskInstanceReportDetailResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskInstancesRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskInstancesResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskLockStatusRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskLockStatusResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskReportRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskReportResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskReportDetailListRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskReportDetailListResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskScriptRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskScriptResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTasksByPageRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTasksByPageResponse.h>
#include <tencentcloud/wedata/v20210820/model/DryRunDIOfflineTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/DryRunDIOfflineTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/ForceSucInstancesRequest.h>
#include <tencentcloud/wedata/v20210820/model/ForceSucInstancesResponse.h>
#include <tencentcloud/wedata/v20210820/model/FreezeTasksRequest.h>
#include <tencentcloud/wedata/v20210820/model/FreezeTasksResponse.h>
#include <tencentcloud/wedata/v20210820/model/FreezeTasksByMultiWorkflowRequest.h>
#include <tencentcloud/wedata/v20210820/model/FreezeTasksByMultiWorkflowResponse.h>
#include <tencentcloud/wedata/v20210820/model/GenHiveTableDDLSqlRequest.h>
#include <tencentcloud/wedata/v20210820/model/GenHiveTableDDLSqlResponse.h>
#include <tencentcloud/wedata/v20210820/model/GetIntegrationNodeColumnSchemaRequest.h>
#include <tencentcloud/wedata/v20210820/model/GetIntegrationNodeColumnSchemaResponse.h>
#include <tencentcloud/wedata/v20210820/model/GetOfflineDIInstanceListRequest.h>
#include <tencentcloud/wedata/v20210820/model/GetOfflineDIInstanceListResponse.h>
#include <tencentcloud/wedata/v20210820/model/GetOfflineInstanceListRequest.h>
#include <tencentcloud/wedata/v20210820/model/GetOfflineInstanceListResponse.h>
#include <tencentcloud/wedata/v20210820/model/KillInstancesRequest.h>
#include <tencentcloud/wedata/v20210820/model/KillInstancesResponse.h>
#include <tencentcloud/wedata/v20210820/model/LockIntegrationTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/LockIntegrationTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/MakeUpTasksNewRequest.h>
#include <tencentcloud/wedata/v20210820/model/MakeUpTasksNewResponse.h>
#include <tencentcloud/wedata/v20210820/model/MakeUpWorkflowNewRequest.h>
#include <tencentcloud/wedata/v20210820/model/MakeUpWorkflowNewResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyDataSourceRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyDataSourceResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyFolderRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyFolderResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyIntegrationNodeRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyIntegrationNodeResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyIntegrationTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyIntegrationTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyTaskAlarmRegularRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyTaskAlarmRegularResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyTaskInfoRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyTaskInfoResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyTaskLinksRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyTaskLinksResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyTaskNameRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyTaskNameResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyTaskScriptRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyTaskScriptResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyWorkflowInfoRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyWorkflowInfoResponse.h>
#include <tencentcloud/wedata/v20210820/model/ModifyWorkflowScheduleRequest.h>
#include <tencentcloud/wedata/v20210820/model/ModifyWorkflowScheduleResponse.h>
#include <tencentcloud/wedata/v20210820/model/RegisterEventRequest.h>
#include <tencentcloud/wedata/v20210820/model/RegisterEventResponse.h>
#include <tencentcloud/wedata/v20210820/model/RegisterEventListenerRequest.h>
#include <tencentcloud/wedata/v20210820/model/RegisterEventListenerResponse.h>
#include <tencentcloud/wedata/v20210820/model/RerunInstancesRequest.h>
#include <tencentcloud/wedata/v20210820/model/RerunInstancesResponse.h>
#include <tencentcloud/wedata/v20210820/model/RestartInLongAgentRequest.h>
#include <tencentcloud/wedata/v20210820/model/RestartInLongAgentResponse.h>
#include <tencentcloud/wedata/v20210820/model/ResumeIntegrationTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/ResumeIntegrationTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/RobAndLockIntegrationTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/RobAndLockIntegrationTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/RunTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/RunTaskResponse.h>
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
#include <tencentcloud/wedata/v20210820/model/SubmitTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/SubmitTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/SubmitWorkflowRequest.h>
#include <tencentcloud/wedata/v20210820/model/SubmitWorkflowResponse.h>
#include <tencentcloud/wedata/v20210820/model/SuspendIntegrationTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/SuspendIntegrationTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/TaskLogRequest.h>
#include <tencentcloud/wedata/v20210820/model/TaskLogResponse.h>
#include <tencentcloud/wedata/v20210820/model/TriggerEventRequest.h>
#include <tencentcloud/wedata/v20210820/model/TriggerEventResponse.h>
#include <tencentcloud/wedata/v20210820/model/UnlockIntegrationTaskRequest.h>
#include <tencentcloud/wedata/v20210820/model/UnlockIntegrationTaskResponse.h>
#include <tencentcloud/wedata/v20210820/model/UpdateInLongAgentRequest.h>
#include <tencentcloud/wedata/v20210820/model/UpdateInLongAgentResponse.h>


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

                typedef Outcome<Core::Error, Model::BatchCreateIntegrationTaskAlarmsResponse> BatchCreateIntegrationTaskAlarmsOutcome;
                typedef std::future<BatchCreateIntegrationTaskAlarmsOutcome> BatchCreateIntegrationTaskAlarmsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchCreateIntegrationTaskAlarmsRequest&, BatchCreateIntegrationTaskAlarmsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchCreateIntegrationTaskAlarmsAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchDeleteIntegrationTasksResponse> BatchDeleteIntegrationTasksOutcome;
                typedef std::future<BatchDeleteIntegrationTasksOutcome> BatchDeleteIntegrationTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchDeleteIntegrationTasksRequest&, BatchDeleteIntegrationTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeleteIntegrationTasksAsyncHandler;
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
                typedef Outcome<Core::Error, Model::BatchModifyOwnersNewResponse> BatchModifyOwnersNewOutcome;
                typedef std::future<BatchModifyOwnersNewOutcome> BatchModifyOwnersNewOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchModifyOwnersNewRequest&, BatchModifyOwnersNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchModifyOwnersNewAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchRerunIntegrationTaskInstancesResponse> BatchRerunIntegrationTaskInstancesOutcome;
                typedef std::future<BatchRerunIntegrationTaskInstancesOutcome> BatchRerunIntegrationTaskInstancesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchRerunIntegrationTaskInstancesRequest&, BatchRerunIntegrationTaskInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchRerunIntegrationTaskInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchResumeIntegrationTasksResponse> BatchResumeIntegrationTasksOutcome;
                typedef std::future<BatchResumeIntegrationTasksOutcome> BatchResumeIntegrationTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchResumeIntegrationTasksRequest&, BatchResumeIntegrationTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchResumeIntegrationTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchStartIntegrationTasksResponse> BatchStartIntegrationTasksOutcome;
                typedef std::future<BatchStartIntegrationTasksOutcome> BatchStartIntegrationTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchStartIntegrationTasksRequest&, BatchStartIntegrationTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchStartIntegrationTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchStopIntegrationTasksResponse> BatchStopIntegrationTasksOutcome;
                typedef std::future<BatchStopIntegrationTasksOutcome> BatchStopIntegrationTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchStopIntegrationTasksRequest&, BatchStopIntegrationTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchStopIntegrationTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchStopTasksNewResponse> BatchStopTasksNewOutcome;
                typedef std::future<BatchStopTasksNewOutcome> BatchStopTasksNewOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchStopTasksNewRequest&, BatchStopTasksNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchStopTasksNewAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchSuspendIntegrationTasksResponse> BatchSuspendIntegrationTasksOutcome;
                typedef std::future<BatchSuspendIntegrationTasksOutcome> BatchSuspendIntegrationTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchSuspendIntegrationTasksRequest&, BatchSuspendIntegrationTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchSuspendIntegrationTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchUpdateIntegrationTasksResponse> BatchUpdateIntegrationTasksOutcome;
                typedef std::future<BatchUpdateIntegrationTasksOutcome> BatchUpdateIntegrationTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::BatchUpdateIntegrationTasksRequest&, BatchUpdateIntegrationTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchUpdateIntegrationTasksAsyncHandler;
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
                typedef Outcome<Core::Error, Model::CreateCustomFunctionResponse> CreateCustomFunctionOutcome;
                typedef std::future<CreateCustomFunctionOutcome> CreateCustomFunctionOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateCustomFunctionRequest&, CreateCustomFunctionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustomFunctionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDataSourceResponse> CreateDataSourceOutcome;
                typedef std::future<CreateDataSourceOutcome> CreateDataSourceOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateDataSourceRequest&, CreateDataSourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDataSourceAsyncHandler;
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
                typedef Outcome<Core::Error, Model::CreateOrUpdateResourceResponse> CreateOrUpdateResourceOutcome;
                typedef std::future<CreateOrUpdateResourceOutcome> CreateOrUpdateResourceOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateOrUpdateResourceRequest&, CreateOrUpdateResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrUpdateResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTaskResponse> CreateTaskOutcome;
                typedef std::future<CreateTaskOutcome> CreateTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateTaskRequest&, CreateTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTaskAlarmRegularResponse> CreateTaskAlarmRegularOutcome;
                typedef std::future<CreateTaskAlarmRegularOutcome> CreateTaskAlarmRegularOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateTaskAlarmRegularRequest&, CreateTaskAlarmRegularOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTaskAlarmRegularAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWorkflowResponse> CreateWorkflowOutcome;
                typedef std::future<CreateWorkflowOutcome> CreateWorkflowOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::CreateWorkflowRequest&, CreateWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWorkflowAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCustomFunctionResponse> DeleteCustomFunctionOutcome;
                typedef std::future<DeleteCustomFunctionOutcome> DeleteCustomFunctionOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteCustomFunctionRequest&, DeleteCustomFunctionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomFunctionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDataSourcesResponse> DeleteDataSourcesOutcome;
                typedef std::future<DeleteDataSourcesOutcome> DeleteDataSourcesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteDataSourcesRequest&, DeleteDataSourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDataSourcesAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DeleteOfflineTaskResponse> DeleteOfflineTaskOutcome;
                typedef std::future<DeleteOfflineTaskOutcome> DeleteOfflineTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteOfflineTaskRequest&, DeleteOfflineTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOfflineTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteResourceResponse> DeleteResourceOutcome;
                typedef std::future<DeleteResourceOutcome> DeleteResourceOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteResourceRequest&, DeleteResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTaskAlarmRegularResponse> DeleteTaskAlarmRegularOutcome;
                typedef std::future<DeleteTaskAlarmRegularOutcome> DeleteTaskAlarmRegularOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteTaskAlarmRegularRequest&, DeleteTaskAlarmRegularOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTaskAlarmRegularAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWorkflowNewResponse> DeleteWorkflowNewOutcome;
                typedef std::future<DeleteWorkflowNewOutcome> DeleteWorkflowNewOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DeleteWorkflowNewRequest&, DeleteWorkflowNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWorkflowNewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmEventsResponse> DescribeAlarmEventsOutcome;
                typedef std::future<DescribeAlarmEventsOutcome> DescribeAlarmEventsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeAlarmEventsRequest&, DescribeAlarmEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmReceiverResponse> DescribeAlarmReceiverOutcome;
                typedef std::future<DescribeAlarmReceiverOutcome> DescribeAlarmReceiverOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeAlarmReceiverRequest&, DescribeAlarmReceiverOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmReceiverAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterNamespaceListResponse> DescribeClusterNamespaceListOutcome;
                typedef std::future<DescribeClusterNamespaceListOutcome> DescribeClusterNamespaceListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeClusterNamespaceListRequest&, DescribeClusterNamespaceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterNamespaceListAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeDatasourceResponse> DescribeDatasourceOutcome;
                typedef std::future<DescribeDatasourceOutcome> DescribeDatasourceOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDatasourceRequest&, DescribeDatasourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatasourceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDependTasksNewResponse> DescribeDependTasksNewOutcome;
                typedef std::future<DescribeDependTasksNewOutcome> DescribeDependTasksNewOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeDependTasksNewRequest&, DescribeDependTasksNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDependTasksNewAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeInstanceLastLogResponse> DescribeInstanceLastLogOutcome;
                typedef std::future<DescribeInstanceLastLogOutcome> DescribeInstanceLastLogOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeInstanceLastLogRequest&, DescribeInstanceLastLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceLastLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceListResponse> DescribeInstanceListOutcome;
                typedef std::future<DescribeInstanceListOutcome> DescribeInstanceListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeInstanceListRequest&, DescribeInstanceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceLogResponse> DescribeInstanceLogOutcome;
                typedef std::future<DescribeInstanceLogOutcome> DescribeInstanceLogOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeInstanceLogRequest&, DescribeInstanceLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceLogListResponse> DescribeInstanceLogListOutcome;
                typedef std::future<DescribeInstanceLogListOutcome> DescribeInstanceLogListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeInstanceLogListRequest&, DescribeInstanceLogListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceLogListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceLogsResponse> DescribeInstanceLogsOutcome;
                typedef std::future<DescribeInstanceLogsOutcome> DescribeInstanceLogsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeInstanceLogsRequest&, DescribeInstanceLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceLogsAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeKafkaTopicInfoResponse> DescribeKafkaTopicInfoOutcome;
                typedef std::future<DescribeKafkaTopicInfoOutcome> DescribeKafkaTopicInfoOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeKafkaTopicInfoRequest&, DescribeKafkaTopicInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKafkaTopicInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOfflineTaskTokenResponse> DescribeOfflineTaskTokenOutcome;
                typedef std::future<DescribeOfflineTaskTokenOutcome> DescribeOfflineTaskTokenOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeOfflineTaskTokenRequest&, DescribeOfflineTaskTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOfflineTaskTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrganizationalFunctionsResponse> DescribeOrganizationalFunctionsOutcome;
                typedef std::future<DescribeOrganizationalFunctionsOutcome> DescribeOrganizationalFunctionsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeOrganizationalFunctionsRequest&, DescribeOrganizationalFunctionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrganizationalFunctionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProjectResponse> DescribeProjectOutcome;
                typedef std::future<DescribeProjectOutcome> DescribeProjectOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeProjectRequest&, DescribeProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeStandardRuleDetailInfoListResponse> DescribeStandardRuleDetailInfoListOutcome;
                typedef std::future<DescribeStandardRuleDetailInfoListOutcome> DescribeStandardRuleDetailInfoListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeStandardRuleDetailInfoListRequest&, DescribeStandardRuleDetailInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStandardRuleDetailInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamTaskLogListResponse> DescribeStreamTaskLogListOutcome;
                typedef std::future<DescribeStreamTaskLogListOutcome> DescribeStreamTaskLogListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeStreamTaskLogListRequest&, DescribeStreamTaskLogListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamTaskLogListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTableInfoListResponse> DescribeTableInfoListOutcome;
                typedef std::future<DescribeTableInfoListOutcome> DescribeTableInfoListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTableInfoListRequest&, DescribeTableInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTableInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTableSchemaInfoResponse> DescribeTableSchemaInfoOutcome;
                typedef std::future<DescribeTableSchemaInfoOutcome> DescribeTableSchemaInfoOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTableSchemaInfoRequest&, DescribeTableSchemaInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTableSchemaInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskAlarmRegulationsResponse> DescribeTaskAlarmRegulationsOutcome;
                typedef std::future<DescribeTaskAlarmRegulationsOutcome> DescribeTaskAlarmRegulationsOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTaskAlarmRegulationsRequest&, DescribeTaskAlarmRegulationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskAlarmRegulationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskDetailResponse> DescribeTaskDetailOutcome;
                typedef std::future<DescribeTaskDetailOutcome> DescribeTaskDetailOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTaskDetailRequest&, DescribeTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskInstanceResponse> DescribeTaskInstanceOutcome;
                typedef std::future<DescribeTaskInstanceOutcome> DescribeTaskInstanceOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTaskInstanceRequest&, DescribeTaskInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskInstanceReportDetailResponse> DescribeTaskInstanceReportDetailOutcome;
                typedef std::future<DescribeTaskInstanceReportDetailOutcome> DescribeTaskInstanceReportDetailOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTaskInstanceReportDetailRequest&, DescribeTaskInstanceReportDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskInstanceReportDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskInstancesResponse> DescribeTaskInstancesOutcome;
                typedef std::future<DescribeTaskInstancesOutcome> DescribeTaskInstancesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTaskInstancesRequest&, DescribeTaskInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskLockStatusResponse> DescribeTaskLockStatusOutcome;
                typedef std::future<DescribeTaskLockStatusOutcome> DescribeTaskLockStatusOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTaskLockStatusRequest&, DescribeTaskLockStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskLockStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskReportResponse> DescribeTaskReportOutcome;
                typedef std::future<DescribeTaskReportOutcome> DescribeTaskReportOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTaskReportRequest&, DescribeTaskReportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskReportAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskReportDetailListResponse> DescribeTaskReportDetailListOutcome;
                typedef std::future<DescribeTaskReportDetailListOutcome> DescribeTaskReportDetailListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTaskReportDetailListRequest&, DescribeTaskReportDetailListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskReportDetailListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskScriptResponse> DescribeTaskScriptOutcome;
                typedef std::future<DescribeTaskScriptOutcome> DescribeTaskScriptOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTaskScriptRequest&, DescribeTaskScriptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskScriptAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTasksByPageResponse> DescribeTasksByPageOutcome;
                typedef std::future<DescribeTasksByPageOutcome> DescribeTasksByPageOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTasksByPageRequest&, DescribeTasksByPageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTasksByPageAsyncHandler;
                typedef Outcome<Core::Error, Model::DryRunDIOfflineTaskResponse> DryRunDIOfflineTaskOutcome;
                typedef std::future<DryRunDIOfflineTaskOutcome> DryRunDIOfflineTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DryRunDIOfflineTaskRequest&, DryRunDIOfflineTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DryRunDIOfflineTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::ForceSucInstancesResponse> ForceSucInstancesOutcome;
                typedef std::future<ForceSucInstancesOutcome> ForceSucInstancesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ForceSucInstancesRequest&, ForceSucInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ForceSucInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::FreezeTasksResponse> FreezeTasksOutcome;
                typedef std::future<FreezeTasksOutcome> FreezeTasksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::FreezeTasksRequest&, FreezeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FreezeTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::FreezeTasksByMultiWorkflowResponse> FreezeTasksByMultiWorkflowOutcome;
                typedef std::future<FreezeTasksByMultiWorkflowOutcome> FreezeTasksByMultiWorkflowOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::FreezeTasksByMultiWorkflowRequest&, FreezeTasksByMultiWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FreezeTasksByMultiWorkflowAsyncHandler;
                typedef Outcome<Core::Error, Model::GenHiveTableDDLSqlResponse> GenHiveTableDDLSqlOutcome;
                typedef std::future<GenHiveTableDDLSqlOutcome> GenHiveTableDDLSqlOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GenHiveTableDDLSqlRequest&, GenHiveTableDDLSqlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GenHiveTableDDLSqlAsyncHandler;
                typedef Outcome<Core::Error, Model::GetIntegrationNodeColumnSchemaResponse> GetIntegrationNodeColumnSchemaOutcome;
                typedef std::future<GetIntegrationNodeColumnSchemaOutcome> GetIntegrationNodeColumnSchemaOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GetIntegrationNodeColumnSchemaRequest&, GetIntegrationNodeColumnSchemaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetIntegrationNodeColumnSchemaAsyncHandler;
                typedef Outcome<Core::Error, Model::GetOfflineDIInstanceListResponse> GetOfflineDIInstanceListOutcome;
                typedef std::future<GetOfflineDIInstanceListOutcome> GetOfflineDIInstanceListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GetOfflineDIInstanceListRequest&, GetOfflineDIInstanceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetOfflineDIInstanceListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetOfflineInstanceListResponse> GetOfflineInstanceListOutcome;
                typedef std::future<GetOfflineInstanceListOutcome> GetOfflineInstanceListOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::GetOfflineInstanceListRequest&, GetOfflineInstanceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetOfflineInstanceListAsyncHandler;
                typedef Outcome<Core::Error, Model::KillInstancesResponse> KillInstancesOutcome;
                typedef std::future<KillInstancesOutcome> KillInstancesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::KillInstancesRequest&, KillInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> KillInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::LockIntegrationTaskResponse> LockIntegrationTaskOutcome;
                typedef std::future<LockIntegrationTaskOutcome> LockIntegrationTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::LockIntegrationTaskRequest&, LockIntegrationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> LockIntegrationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::MakeUpTasksNewResponse> MakeUpTasksNewOutcome;
                typedef std::future<MakeUpTasksNewOutcome> MakeUpTasksNewOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::MakeUpTasksNewRequest&, MakeUpTasksNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MakeUpTasksNewAsyncHandler;
                typedef Outcome<Core::Error, Model::MakeUpWorkflowNewResponse> MakeUpWorkflowNewOutcome;
                typedef std::future<MakeUpWorkflowNewOutcome> MakeUpWorkflowNewOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::MakeUpWorkflowNewRequest&, MakeUpWorkflowNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MakeUpWorkflowNewAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDataSourceResponse> ModifyDataSourceOutcome;
                typedef std::future<ModifyDataSourceOutcome> ModifyDataSourceOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ModifyDataSourceRequest&, ModifyDataSourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDataSourceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyFolderResponse> ModifyFolderOutcome;
                typedef std::future<ModifyFolderOutcome> ModifyFolderOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ModifyFolderRequest&, ModifyFolderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFolderAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyIntegrationNodeResponse> ModifyIntegrationNodeOutcome;
                typedef std::future<ModifyIntegrationNodeOutcome> ModifyIntegrationNodeOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ModifyIntegrationNodeRequest&, ModifyIntegrationNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIntegrationNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyIntegrationTaskResponse> ModifyIntegrationTaskOutcome;
                typedef std::future<ModifyIntegrationTaskOutcome> ModifyIntegrationTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ModifyIntegrationTaskRequest&, ModifyIntegrationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIntegrationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTaskAlarmRegularResponse> ModifyTaskAlarmRegularOutcome;
                typedef std::future<ModifyTaskAlarmRegularOutcome> ModifyTaskAlarmRegularOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ModifyTaskAlarmRegularRequest&, ModifyTaskAlarmRegularOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTaskAlarmRegularAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTaskInfoResponse> ModifyTaskInfoOutcome;
                typedef std::future<ModifyTaskInfoOutcome> ModifyTaskInfoOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ModifyTaskInfoRequest&, ModifyTaskInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTaskInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTaskLinksResponse> ModifyTaskLinksOutcome;
                typedef std::future<ModifyTaskLinksOutcome> ModifyTaskLinksOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ModifyTaskLinksRequest&, ModifyTaskLinksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTaskLinksAsyncHandler;
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
                typedef Outcome<Core::Error, Model::RegisterEventResponse> RegisterEventOutcome;
                typedef std::future<RegisterEventOutcome> RegisterEventOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::RegisterEventRequest&, RegisterEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterEventAsyncHandler;
                typedef Outcome<Core::Error, Model::RegisterEventListenerResponse> RegisterEventListenerOutcome;
                typedef std::future<RegisterEventListenerOutcome> RegisterEventListenerOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::RegisterEventListenerRequest&, RegisterEventListenerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterEventListenerAsyncHandler;
                typedef Outcome<Core::Error, Model::RerunInstancesResponse> RerunInstancesOutcome;
                typedef std::future<RerunInstancesOutcome> RerunInstancesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::RerunInstancesRequest&, RerunInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RerunInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::RestartInLongAgentResponse> RestartInLongAgentOutcome;
                typedef std::future<RestartInLongAgentOutcome> RestartInLongAgentOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::RestartInLongAgentRequest&, RestartInLongAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestartInLongAgentAsyncHandler;
                typedef Outcome<Core::Error, Model::ResumeIntegrationTaskResponse> ResumeIntegrationTaskOutcome;
                typedef std::future<ResumeIntegrationTaskOutcome> ResumeIntegrationTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::ResumeIntegrationTaskRequest&, ResumeIntegrationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResumeIntegrationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::RobAndLockIntegrationTaskResponse> RobAndLockIntegrationTaskOutcome;
                typedef std::future<RobAndLockIntegrationTaskOutcome> RobAndLockIntegrationTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::RobAndLockIntegrationTaskRequest&, RobAndLockIntegrationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RobAndLockIntegrationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::RunTaskResponse> RunTaskOutcome;
                typedef std::future<RunTaskOutcome> RunTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::RunTaskRequest&, RunTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunTaskAsyncHandler;
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
                typedef Outcome<Core::Error, Model::SubmitTaskResponse> SubmitTaskOutcome;
                typedef std::future<SubmitTaskOutcome> SubmitTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::SubmitTaskRequest&, SubmitTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitWorkflowResponse> SubmitWorkflowOutcome;
                typedef std::future<SubmitWorkflowOutcome> SubmitWorkflowOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::SubmitWorkflowRequest&, SubmitWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitWorkflowAsyncHandler;
                typedef Outcome<Core::Error, Model::SuspendIntegrationTaskResponse> SuspendIntegrationTaskOutcome;
                typedef std::future<SuspendIntegrationTaskOutcome> SuspendIntegrationTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::SuspendIntegrationTaskRequest&, SuspendIntegrationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SuspendIntegrationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::TaskLogResponse> TaskLogOutcome;
                typedef std::future<TaskLogOutcome> TaskLogOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::TaskLogRequest&, TaskLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TaskLogAsyncHandler;
                typedef Outcome<Core::Error, Model::TriggerEventResponse> TriggerEventOutcome;
                typedef std::future<TriggerEventOutcome> TriggerEventOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::TriggerEventRequest&, TriggerEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TriggerEventAsyncHandler;
                typedef Outcome<Core::Error, Model::UnlockIntegrationTaskResponse> UnlockIntegrationTaskOutcome;
                typedef std::future<UnlockIntegrationTaskOutcome> UnlockIntegrationTaskOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::UnlockIntegrationTaskRequest&, UnlockIntegrationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnlockIntegrationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateInLongAgentResponse> UpdateInLongAgentOutcome;
                typedef std::future<UpdateInLongAgentOutcome> UpdateInLongAgentOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::UpdateInLongAgentRequest&, UpdateInLongAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateInLongAgentAsyncHandler;



                /**
                 *批量创建任务告警规则
                 * @param req BatchCreateIntegrationTaskAlarmsRequest
                 * @return BatchCreateIntegrationTaskAlarmsOutcome
                 */
                BatchCreateIntegrationTaskAlarmsOutcome BatchCreateIntegrationTaskAlarms(const Model::BatchCreateIntegrationTaskAlarmsRequest &request);
                void BatchCreateIntegrationTaskAlarmsAsync(const Model::BatchCreateIntegrationTaskAlarmsRequest& request, const BatchCreateIntegrationTaskAlarmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchCreateIntegrationTaskAlarmsOutcomeCallable BatchCreateIntegrationTaskAlarmsCallable(const Model::BatchCreateIntegrationTaskAlarmsRequest& request);

                /**
                 *批量删除集成任务
                 * @param req BatchDeleteIntegrationTasksRequest
                 * @return BatchDeleteIntegrationTasksOutcome
                 */
                BatchDeleteIntegrationTasksOutcome BatchDeleteIntegrationTasks(const Model::BatchDeleteIntegrationTasksRequest &request);
                void BatchDeleteIntegrationTasksAsync(const Model::BatchDeleteIntegrationTasksRequest& request, const BatchDeleteIntegrationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchDeleteIntegrationTasksOutcomeCallable BatchDeleteIntegrationTasksCallable(const Model::BatchDeleteIntegrationTasksRequest& request);

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
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
仅对任务状态为”调度中“和”已暂停“有效，对所选任务的任务实例进行终止，并停止调度
                 * @param req BatchStopTasksNewRequest
                 * @return BatchStopTasksNewOutcome
                 */
                BatchStopTasksNewOutcome BatchStopTasksNew(const Model::BatchStopTasksNewRequest &request);
                void BatchStopTasksNewAsync(const Model::BatchStopTasksNewRequest& request, const BatchStopTasksNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchStopTasksNewOutcomeCallable BatchStopTasksNewCallable(const Model::BatchStopTasksNewRequest& request);

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
                 * 创建用户自定义函数
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
                 *资源管理需要先将资源上传到cos中，然后调用该接口，将cos资源绑定到wedata
                 * @param req CreateOrUpdateResourceRequest
                 * @return CreateOrUpdateResourceOutcome
                 */
                CreateOrUpdateResourceOutcome CreateOrUpdateResource(const Model::CreateOrUpdateResourceRequest &request);
                void CreateOrUpdateResourceAsync(const Model::CreateOrUpdateResourceRequest& request, const CreateOrUpdateResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOrUpdateResourceOutcomeCallable CreateOrUpdateResourceCallable(const Model::CreateOrUpdateResourceRequest& request);

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
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
创建工作流
                 * @param req CreateWorkflowRequest
                 * @return CreateWorkflowOutcome
                 */
                CreateWorkflowOutcome CreateWorkflow(const Model::CreateWorkflowRequest &request);
                void CreateWorkflowAsync(const Model::CreateWorkflowRequest& request, const CreateWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWorkflowOutcomeCallable CreateWorkflowCallable(const Model::CreateWorkflowRequest& request);

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
                 *删除任务
                 * @param req DeleteOfflineTaskRequest
                 * @return DeleteOfflineTaskOutcome
                 */
                DeleteOfflineTaskOutcome DeleteOfflineTask(const Model::DeleteOfflineTaskRequest &request);
                void DeleteOfflineTaskAsync(const Model::DeleteOfflineTaskRequest& request, const DeleteOfflineTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteOfflineTaskOutcomeCallable DeleteOfflineTaskCallable(const Model::DeleteOfflineTaskRequest& request);

                /**
                 *资源管理删除资源
                 * @param req DeleteResourceRequest
                 * @return DeleteResourceOutcome
                 */
                DeleteResourceOutcome DeleteResource(const Model::DeleteResourceRequest &request);
                void DeleteResourceAsync(const Model::DeleteResourceRequest& request, const DeleteResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteResourceOutcomeCallable DeleteResourceCallable(const Model::DeleteResourceRequest& request);

                /**
                 *删除任务告警规则
                 * @param req DeleteTaskAlarmRegularRequest
                 * @return DeleteTaskAlarmRegularOutcome
                 */
                DeleteTaskAlarmRegularOutcome DeleteTaskAlarmRegular(const Model::DeleteTaskAlarmRegularRequest &request);
                void DeleteTaskAlarmRegularAsync(const Model::DeleteTaskAlarmRegularRequest& request, const DeleteTaskAlarmRegularAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTaskAlarmRegularOutcomeCallable DeleteTaskAlarmRegularCallable(const Model::DeleteTaskAlarmRegularRequest& request);

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
                 *获取集群命名空间列表
                 * @param req DescribeClusterNamespaceListRequest
                 * @return DescribeClusterNamespaceListOutcome
                 */
                DescribeClusterNamespaceListOutcome DescribeClusterNamespaceList(const Model::DescribeClusterNamespaceListRequest &request);
                void DescribeClusterNamespaceListAsync(const Model::DescribeClusterNamespaceListRequest& request, const DescribeClusterNamespaceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterNamespaceListOutcomeCallable DescribeClusterNamespaceListCallable(const Model::DescribeClusterNamespaceListRequest& request);

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
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
数据源详情
                 * @param req DescribeDatasourceRequest
                 * @return DescribeDatasourceOutcome
                 */
                DescribeDatasourceOutcome DescribeDatasource(const Model::DescribeDatasourceRequest &request);
                void DescribeDatasourceAsync(const Model::DescribeDatasourceRequest& request, const DescribeDatasourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatasourceOutcomeCallable DescribeDatasourceCallable(const Model::DescribeDatasourceRequest& request);

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
                 *获取kafka的topic信息
                 * @param req DescribeKafkaTopicInfoRequest
                 * @return DescribeKafkaTopicInfoOutcome
                 */
                DescribeKafkaTopicInfoOutcome DescribeKafkaTopicInfo(const Model::DescribeKafkaTopicInfoRequest &request);
                void DescribeKafkaTopicInfoAsync(const Model::DescribeKafkaTopicInfoRequest& request, const DescribeKafkaTopicInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKafkaTopicInfoOutcomeCallable DescribeKafkaTopicInfoCallable(const Model::DescribeKafkaTopicInfoRequest& request);

                /**
                 *获取离线任务长连接Token
                 * @param req DescribeOfflineTaskTokenRequest
                 * @return DescribeOfflineTaskTokenOutcome
                 */
                DescribeOfflineTaskTokenOutcome DescribeOfflineTaskToken(const Model::DescribeOfflineTaskTokenRequest &request);
                void DescribeOfflineTaskTokenAsync(const Model::DescribeOfflineTaskTokenRequest& request, const DescribeOfflineTaskTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOfflineTaskTokenOutcomeCallable DescribeOfflineTaskTokenCallable(const Model::DescribeOfflineTaskTokenRequest& request);

                /**
                 *查询全量函数
                 * @param req DescribeOrganizationalFunctionsRequest
                 * @return DescribeOrganizationalFunctionsOutcome
                 */
                DescribeOrganizationalFunctionsOutcome DescribeOrganizationalFunctions(const Model::DescribeOrganizationalFunctionsRequest &request);
                void DescribeOrganizationalFunctionsAsync(const Model::DescribeOrganizationalFunctionsRequest& request, const DescribeOrganizationalFunctionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrganizationalFunctionsOutcomeCallable DescribeOrganizationalFunctionsCallable(const Model::DescribeOrganizationalFunctionsRequest& request);

                /**
                 *获取项目信息
                 * @param req DescribeProjectRequest
                 * @return DescribeProjectOutcome
                 */
                DescribeProjectOutcome DescribeProject(const Model::DescribeProjectRequest &request);
                void DescribeProjectAsync(const Model::DescribeProjectRequest& request, const DescribeProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProjectOutcomeCallable DescribeProjectCallable(const Model::DescribeProjectRequest& request);

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
                 *获取数据标准规则详情
                 * @param req DescribeStandardRuleDetailInfoListRequest
                 * @return DescribeStandardRuleDetailInfoListOutcome
                 */
                DescribeStandardRuleDetailInfoListOutcome DescribeStandardRuleDetailInfoList(const Model::DescribeStandardRuleDetailInfoListRequest &request);
                void DescribeStandardRuleDetailInfoListAsync(const Model::DescribeStandardRuleDetailInfoListRequest& request, const DescribeStandardRuleDetailInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStandardRuleDetailInfoListOutcomeCallable DescribeStandardRuleDetailInfoListCallable(const Model::DescribeStandardRuleDetailInfoListRequest& request);

                /**
                 *查询实时任务日志列表
                 * @param req DescribeStreamTaskLogListRequest
                 * @return DescribeStreamTaskLogListOutcome
                 */
                DescribeStreamTaskLogListOutcome DescribeStreamTaskLogList(const Model::DescribeStreamTaskLogListRequest &request);
                void DescribeStreamTaskLogListAsync(const Model::DescribeStreamTaskLogListRequest& request, const DescribeStreamTaskLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamTaskLogListOutcomeCallable DescribeStreamTaskLogListCallable(const Model::DescribeStreamTaskLogListRequest& request);

                /**
                 *获取数据表信息
                 * @param req DescribeTableInfoListRequest
                 * @return DescribeTableInfoListOutcome
                 */
                DescribeTableInfoListOutcome DescribeTableInfoList(const Model::DescribeTableInfoListRequest &request);
                void DescribeTableInfoListAsync(const Model::DescribeTableInfoListRequest& request, const DescribeTableInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTableInfoListOutcomeCallable DescribeTableInfoListCallable(const Model::DescribeTableInfoListRequest& request);

                /**
                 *获取表schema信息
                 * @param req DescribeTableSchemaInfoRequest
                 * @return DescribeTableSchemaInfoOutcome
                 */
                DescribeTableSchemaInfoOutcome DescribeTableSchemaInfo(const Model::DescribeTableSchemaInfoRequest &request);
                void DescribeTableSchemaInfoAsync(const Model::DescribeTableSchemaInfoRequest& request, const DescribeTableSchemaInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTableSchemaInfoOutcomeCallable DescribeTableSchemaInfoCallable(const Model::DescribeTableSchemaInfoRequest& request);

                /**
                 *查询任务告警规则列表
                 * @param req DescribeTaskAlarmRegulationsRequest
                 * @return DescribeTaskAlarmRegulationsOutcome
                 */
                DescribeTaskAlarmRegulationsOutcome DescribeTaskAlarmRegulations(const Model::DescribeTaskAlarmRegulationsRequest &request);
                void DescribeTaskAlarmRegulationsAsync(const Model::DescribeTaskAlarmRegulationsRequest& request, const DescribeTaskAlarmRegulationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskAlarmRegulationsOutcomeCallable DescribeTaskAlarmRegulationsCallable(const Model::DescribeTaskAlarmRegulationsRequest& request);

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
                 *查看任务锁状态信息
                 * @param req DescribeTaskLockStatusRequest
                 * @return DescribeTaskLockStatusOutcome
                 */
                DescribeTaskLockStatusOutcome DescribeTaskLockStatus(const Model::DescribeTaskLockStatusRequest &request);
                void DescribeTaskLockStatusAsync(const Model::DescribeTaskLockStatusRequest& request, const DescribeTaskLockStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskLockStatusOutcomeCallable DescribeTaskLockStatusCallable(const Model::DescribeTaskLockStatusRequest& request);

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
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
查询任务脚本
                 * @param req DescribeTaskScriptRequest
                 * @return DescribeTaskScriptOutcome
                 */
                DescribeTaskScriptOutcome DescribeTaskScript(const Model::DescribeTaskScriptRequest &request);
                void DescribeTaskScriptAsync(const Model::DescribeTaskScriptRequest& request, const DescribeTaskScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskScriptOutcomeCallable DescribeTaskScriptCallable(const Model::DescribeTaskScriptRequest& request);

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
                 *调试运行集成任务
                 * @param req DryRunDIOfflineTaskRequest
                 * @return DryRunDIOfflineTaskOutcome
                 */
                DryRunDIOfflineTaskOutcome DryRunDIOfflineTask(const Model::DryRunDIOfflineTaskRequest &request);
                void DryRunDIOfflineTaskAsync(const Model::DryRunDIOfflineTaskRequest& request, const DryRunDIOfflineTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DryRunDIOfflineTaskOutcomeCallable DryRunDIOfflineTaskCallable(const Model::DryRunDIOfflineTaskRequest& request);

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
                 *生成建hive表的sql
                 * @param req GenHiveTableDDLSqlRequest
                 * @return GenHiveTableDDLSqlOutcome
                 */
                GenHiveTableDDLSqlOutcome GenHiveTableDDLSql(const Model::GenHiveTableDDLSqlRequest &request);
                void GenHiveTableDDLSqlAsync(const Model::GenHiveTableDDLSqlRequest& request, const GenHiveTableDDLSqlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GenHiveTableDDLSqlOutcomeCallable GenHiveTableDDLSqlCallable(const Model::GenHiveTableDDLSqlRequest& request);

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
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
实例批量终止操作
                 * @param req KillInstancesRequest
                 * @return KillInstancesOutcome
                 */
                KillInstancesOutcome KillInstances(const Model::KillInstancesRequest &request);
                void KillInstancesAsync(const Model::KillInstancesRequest& request, const KillInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                KillInstancesOutcomeCallable KillInstancesCallable(const Model::KillInstancesRequest& request);

                /**
                 *锁定集成任务
                 * @param req LockIntegrationTaskRequest
                 * @return LockIntegrationTaskOutcome
                 */
                LockIntegrationTaskOutcome LockIntegrationTask(const Model::LockIntegrationTaskRequest &request);
                void LockIntegrationTaskAsync(const Model::LockIntegrationTaskRequest& request, const LockIntegrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                LockIntegrationTaskOutcomeCallable LockIntegrationTaskCallable(const Model::LockIntegrationTaskRequest& request);

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
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
修改数据源
                 * @param req ModifyDataSourceRequest
                 * @return ModifyDataSourceOutcome
                 */
                ModifyDataSourceOutcome ModifyDataSource(const Model::ModifyDataSourceRequest &request);
                void ModifyDataSourceAsync(const Model::ModifyDataSourceRequest& request, const ModifyDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDataSourceOutcomeCallable ModifyDataSourceCallable(const Model::ModifyDataSourceRequest& request);

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
                 *修改任务告警规则
                 * @param req ModifyTaskAlarmRegularRequest
                 * @return ModifyTaskAlarmRegularOutcome
                 */
                ModifyTaskAlarmRegularOutcome ModifyTaskAlarmRegular(const Model::ModifyTaskAlarmRegularRequest &request);
                void ModifyTaskAlarmRegularAsync(const Model::ModifyTaskAlarmRegularRequest& request, const ModifyTaskAlarmRegularAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTaskAlarmRegularOutcomeCallable ModifyTaskAlarmRegularCallable(const Model::ModifyTaskAlarmRegularRequest& request);

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
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
添加父任务依赖
                 * @param req ModifyTaskLinksRequest
                 * @return ModifyTaskLinksOutcome
                 */
                ModifyTaskLinksOutcome ModifyTaskLinks(const Model::ModifyTaskLinksRequest &request);
                void ModifyTaskLinksAsync(const Model::ModifyTaskLinksRequest& request, const ModifyTaskLinksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTaskLinksOutcomeCallable ModifyTaskLinksCallable(const Model::ModifyTaskLinksRequest& request);

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
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
实例批量重跑
                 * @param req RerunInstancesRequest
                 * @return RerunInstancesOutcome
                 */
                RerunInstancesOutcome RerunInstances(const Model::RerunInstancesRequest &request);
                void RerunInstancesAsync(const Model::RerunInstancesRequest& request, const RerunInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RerunInstancesOutcomeCallable RerunInstancesCallable(const Model::RerunInstancesRequest& request);

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
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
运行任务
                 * @param req RunTaskRequest
                 * @return RunTaskOutcome
                 */
                RunTaskOutcome RunTask(const Model::RunTaskRequest &request);
                void RunTaskAsync(const Model::RunTaskRequest& request, const RunTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunTaskOutcomeCallable RunTaskCallable(const Model::RunTaskRequest& request);

                /**
                 *保存用户自定义函数
                 * @param req SaveCustomFunctionRequest
                 * @return SaveCustomFunctionOutcome
                 */
                SaveCustomFunctionOutcome SaveCustomFunction(const Model::SaveCustomFunctionRequest &request);
                void SaveCustomFunctionAsync(const Model::SaveCustomFunctionRequest& request, const SaveCustomFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SaveCustomFunctionOutcomeCallable SaveCustomFunctionCallable(const Model::SaveCustomFunctionRequest& request);

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
                 *<p style="color:red;">[注意：该Beta版本只满足广州区部分白名单客户使用]</p>
提交任务
                 * @param req SubmitTaskRequest
                 * @return SubmitTaskOutcome
                 */
                SubmitTaskOutcome SubmitTask(const Model::SubmitTaskRequest &request);
                void SubmitTaskAsync(const Model::SubmitTaskRequest& request, const SubmitTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitTaskOutcomeCallable SubmitTaskCallable(const Model::SubmitTaskRequest& request);

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
                 *更新采集器
                 * @param req UpdateInLongAgentRequest
                 * @return UpdateInLongAgentOutcome
                 */
                UpdateInLongAgentOutcome UpdateInLongAgent(const Model::UpdateInLongAgentRequest &request);
                void UpdateInLongAgentAsync(const Model::UpdateInLongAgentRequest& request, const UpdateInLongAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateInLongAgentOutcomeCallable UpdateInLongAgentCallable(const Model::UpdateInLongAgentRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_WEDATACLIENT_H_
