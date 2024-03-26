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

#ifndef TENCENTCLOUD_PTS_V20210728_PTSCLIENT_H_
#define TENCENTCLOUD_PTS_V20210728_PTSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/pts/v20210728/model/AbortCronJobsRequest.h>
#include <tencentcloud/pts/v20210728/model/AbortCronJobsResponse.h>
#include <tencentcloud/pts/v20210728/model/AbortJobRequest.h>
#include <tencentcloud/pts/v20210728/model/AbortJobResponse.h>
#include <tencentcloud/pts/v20210728/model/AdjustJobSpeedRequest.h>
#include <tencentcloud/pts/v20210728/model/AdjustJobSpeedResponse.h>
#include <tencentcloud/pts/v20210728/model/CopyScenarioRequest.h>
#include <tencentcloud/pts/v20210728/model/CopyScenarioResponse.h>
#include <tencentcloud/pts/v20210728/model/CreateAlertChannelRequest.h>
#include <tencentcloud/pts/v20210728/model/CreateAlertChannelResponse.h>
#include <tencentcloud/pts/v20210728/model/CreateCronJobRequest.h>
#include <tencentcloud/pts/v20210728/model/CreateCronJobResponse.h>
#include <tencentcloud/pts/v20210728/model/CreateEnvironmentRequest.h>
#include <tencentcloud/pts/v20210728/model/CreateEnvironmentResponse.h>
#include <tencentcloud/pts/v20210728/model/CreateFileRequest.h>
#include <tencentcloud/pts/v20210728/model/CreateFileResponse.h>
#include <tencentcloud/pts/v20210728/model/CreateProjectRequest.h>
#include <tencentcloud/pts/v20210728/model/CreateProjectResponse.h>
#include <tencentcloud/pts/v20210728/model/CreateScenarioRequest.h>
#include <tencentcloud/pts/v20210728/model/CreateScenarioResponse.h>
#include <tencentcloud/pts/v20210728/model/DeleteAlertChannelRequest.h>
#include <tencentcloud/pts/v20210728/model/DeleteAlertChannelResponse.h>
#include <tencentcloud/pts/v20210728/model/DeleteCronJobsRequest.h>
#include <tencentcloud/pts/v20210728/model/DeleteCronJobsResponse.h>
#include <tencentcloud/pts/v20210728/model/DeleteEnvironmentsRequest.h>
#include <tencentcloud/pts/v20210728/model/DeleteEnvironmentsResponse.h>
#include <tencentcloud/pts/v20210728/model/DeleteFilesRequest.h>
#include <tencentcloud/pts/v20210728/model/DeleteFilesResponse.h>
#include <tencentcloud/pts/v20210728/model/DeleteJobsRequest.h>
#include <tencentcloud/pts/v20210728/model/DeleteJobsResponse.h>
#include <tencentcloud/pts/v20210728/model/DeleteProjectsRequest.h>
#include <tencentcloud/pts/v20210728/model/DeleteProjectsResponse.h>
#include <tencentcloud/pts/v20210728/model/DeleteScenariosRequest.h>
#include <tencentcloud/pts/v20210728/model/DeleteScenariosResponse.h>
#include <tencentcloud/pts/v20210728/model/DescribeAlertChannelsRequest.h>
#include <tencentcloud/pts/v20210728/model/DescribeAlertChannelsResponse.h>
#include <tencentcloud/pts/v20210728/model/DescribeAlertRecordsRequest.h>
#include <tencentcloud/pts/v20210728/model/DescribeAlertRecordsResponse.h>
#include <tencentcloud/pts/v20210728/model/DescribeAvailableMetricsRequest.h>
#include <tencentcloud/pts/v20210728/model/DescribeAvailableMetricsResponse.h>
#include <tencentcloud/pts/v20210728/model/DescribeCheckSummaryRequest.h>
#include <tencentcloud/pts/v20210728/model/DescribeCheckSummaryResponse.h>
#include <tencentcloud/pts/v20210728/model/DescribeCronJobsRequest.h>
#include <tencentcloud/pts/v20210728/model/DescribeCronJobsResponse.h>
#include <tencentcloud/pts/v20210728/model/DescribeEnvironmentsRequest.h>
#include <tencentcloud/pts/v20210728/model/DescribeEnvironmentsResponse.h>
#include <tencentcloud/pts/v20210728/model/DescribeErrorSummaryRequest.h>
#include <tencentcloud/pts/v20210728/model/DescribeErrorSummaryResponse.h>
#include <tencentcloud/pts/v20210728/model/DescribeFilesRequest.h>
#include <tencentcloud/pts/v20210728/model/DescribeFilesResponse.h>
#include <tencentcloud/pts/v20210728/model/DescribeJobsRequest.h>
#include <tencentcloud/pts/v20210728/model/DescribeJobsResponse.h>
#include <tencentcloud/pts/v20210728/model/DescribeLabelValuesRequest.h>
#include <tencentcloud/pts/v20210728/model/DescribeLabelValuesResponse.h>
#include <tencentcloud/pts/v20210728/model/DescribeMetricLabelWithValuesRequest.h>
#include <tencentcloud/pts/v20210728/model/DescribeMetricLabelWithValuesResponse.h>
#include <tencentcloud/pts/v20210728/model/DescribeNormalLogsRequest.h>
#include <tencentcloud/pts/v20210728/model/DescribeNormalLogsResponse.h>
#include <tencentcloud/pts/v20210728/model/DescribeProjectsRequest.h>
#include <tencentcloud/pts/v20210728/model/DescribeProjectsResponse.h>
#include <tencentcloud/pts/v20210728/model/DescribeRegionsRequest.h>
#include <tencentcloud/pts/v20210728/model/DescribeRegionsResponse.h>
#include <tencentcloud/pts/v20210728/model/DescribeRequestSummaryRequest.h>
#include <tencentcloud/pts/v20210728/model/DescribeRequestSummaryResponse.h>
#include <tencentcloud/pts/v20210728/model/DescribeSampleBatchQueryRequest.h>
#include <tencentcloud/pts/v20210728/model/DescribeSampleBatchQueryResponse.h>
#include <tencentcloud/pts/v20210728/model/DescribeSampleLogsRequest.h>
#include <tencentcloud/pts/v20210728/model/DescribeSampleLogsResponse.h>
#include <tencentcloud/pts/v20210728/model/DescribeSampleMatrixBatchQueryRequest.h>
#include <tencentcloud/pts/v20210728/model/DescribeSampleMatrixBatchQueryResponse.h>
#include <tencentcloud/pts/v20210728/model/DescribeSampleMatrixQueryRequest.h>
#include <tencentcloud/pts/v20210728/model/DescribeSampleMatrixQueryResponse.h>
#include <tencentcloud/pts/v20210728/model/DescribeSampleQueryRequest.h>
#include <tencentcloud/pts/v20210728/model/DescribeSampleQueryResponse.h>
#include <tencentcloud/pts/v20210728/model/DescribeScenarioWithJobsRequest.h>
#include <tencentcloud/pts/v20210728/model/DescribeScenarioWithJobsResponse.h>
#include <tencentcloud/pts/v20210728/model/DescribeScenariosRequest.h>
#include <tencentcloud/pts/v20210728/model/DescribeScenariosResponse.h>
#include <tencentcloud/pts/v20210728/model/GenerateTmpKeyRequest.h>
#include <tencentcloud/pts/v20210728/model/GenerateTmpKeyResponse.h>
#include <tencentcloud/pts/v20210728/model/RestartCronJobsRequest.h>
#include <tencentcloud/pts/v20210728/model/RestartCronJobsResponse.h>
#include <tencentcloud/pts/v20210728/model/StartJobRequest.h>
#include <tencentcloud/pts/v20210728/model/StartJobResponse.h>
#include <tencentcloud/pts/v20210728/model/UpdateCronJobRequest.h>
#include <tencentcloud/pts/v20210728/model/UpdateCronJobResponse.h>
#include <tencentcloud/pts/v20210728/model/UpdateEnvironmentRequest.h>
#include <tencentcloud/pts/v20210728/model/UpdateEnvironmentResponse.h>
#include <tencentcloud/pts/v20210728/model/UpdateFileScenarioRelationRequest.h>
#include <tencentcloud/pts/v20210728/model/UpdateFileScenarioRelationResponse.h>
#include <tencentcloud/pts/v20210728/model/UpdateJobRequest.h>
#include <tencentcloud/pts/v20210728/model/UpdateJobResponse.h>
#include <tencentcloud/pts/v20210728/model/UpdateProjectRequest.h>
#include <tencentcloud/pts/v20210728/model/UpdateProjectResponse.h>
#include <tencentcloud/pts/v20210728/model/UpdateScenarioRequest.h>
#include <tencentcloud/pts/v20210728/model/UpdateScenarioResponse.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            class PtsClient : public AbstractClient
            {
            public:
                PtsClient(const Credential &credential, const std::string &region);
                PtsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AbortCronJobsResponse> AbortCronJobsOutcome;
                typedef std::future<AbortCronJobsOutcome> AbortCronJobsOutcomeCallable;
                typedef std::function<void(const PtsClient*, const Model::AbortCronJobsRequest&, AbortCronJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AbortCronJobsAsyncHandler;
                typedef Outcome<Core::Error, Model::AbortJobResponse> AbortJobOutcome;
                typedef std::future<AbortJobOutcome> AbortJobOutcomeCallable;
                typedef std::function<void(const PtsClient*, const Model::AbortJobRequest&, AbortJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AbortJobAsyncHandler;
                typedef Outcome<Core::Error, Model::AdjustJobSpeedResponse> AdjustJobSpeedOutcome;
                typedef std::future<AdjustJobSpeedOutcome> AdjustJobSpeedOutcomeCallable;
                typedef std::function<void(const PtsClient*, const Model::AdjustJobSpeedRequest&, AdjustJobSpeedOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AdjustJobSpeedAsyncHandler;
                typedef Outcome<Core::Error, Model::CopyScenarioResponse> CopyScenarioOutcome;
                typedef std::future<CopyScenarioOutcome> CopyScenarioOutcomeCallable;
                typedef std::function<void(const PtsClient*, const Model::CopyScenarioRequest&, CopyScenarioOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CopyScenarioAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAlertChannelResponse> CreateAlertChannelOutcome;
                typedef std::future<CreateAlertChannelOutcome> CreateAlertChannelOutcomeCallable;
                typedef std::function<void(const PtsClient*, const Model::CreateAlertChannelRequest&, CreateAlertChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAlertChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCronJobResponse> CreateCronJobOutcome;
                typedef std::future<CreateCronJobOutcome> CreateCronJobOutcomeCallable;
                typedef std::function<void(const PtsClient*, const Model::CreateCronJobRequest&, CreateCronJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCronJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEnvironmentResponse> CreateEnvironmentOutcome;
                typedef std::future<CreateEnvironmentOutcome> CreateEnvironmentOutcomeCallable;
                typedef std::function<void(const PtsClient*, const Model::CreateEnvironmentRequest&, CreateEnvironmentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEnvironmentAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFileResponse> CreateFileOutcome;
                typedef std::future<CreateFileOutcome> CreateFileOutcomeCallable;
                typedef std::function<void(const PtsClient*, const Model::CreateFileRequest&, CreateFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFileAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateProjectResponse> CreateProjectOutcome;
                typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
                typedef std::function<void(const PtsClient*, const Model::CreateProjectRequest&, CreateProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateScenarioResponse> CreateScenarioOutcome;
                typedef std::future<CreateScenarioOutcome> CreateScenarioOutcomeCallable;
                typedef std::function<void(const PtsClient*, const Model::CreateScenarioRequest&, CreateScenarioOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateScenarioAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAlertChannelResponse> DeleteAlertChannelOutcome;
                typedef std::future<DeleteAlertChannelOutcome> DeleteAlertChannelOutcomeCallable;
                typedef std::function<void(const PtsClient*, const Model::DeleteAlertChannelRequest&, DeleteAlertChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAlertChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCronJobsResponse> DeleteCronJobsOutcome;
                typedef std::future<DeleteCronJobsOutcome> DeleteCronJobsOutcomeCallable;
                typedef std::function<void(const PtsClient*, const Model::DeleteCronJobsRequest&, DeleteCronJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCronJobsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteEnvironmentsResponse> DeleteEnvironmentsOutcome;
                typedef std::future<DeleteEnvironmentsOutcome> DeleteEnvironmentsOutcomeCallable;
                typedef std::function<void(const PtsClient*, const Model::DeleteEnvironmentsRequest&, DeleteEnvironmentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEnvironmentsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteFilesResponse> DeleteFilesOutcome;
                typedef std::future<DeleteFilesOutcome> DeleteFilesOutcomeCallable;
                typedef std::function<void(const PtsClient*, const Model::DeleteFilesRequest&, DeleteFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteJobsResponse> DeleteJobsOutcome;
                typedef std::future<DeleteJobsOutcome> DeleteJobsOutcomeCallable;
                typedef std::function<void(const PtsClient*, const Model::DeleteJobsRequest&, DeleteJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteJobsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteProjectsResponse> DeleteProjectsOutcome;
                typedef std::future<DeleteProjectsOutcome> DeleteProjectsOutcomeCallable;
                typedef std::function<void(const PtsClient*, const Model::DeleteProjectsRequest&, DeleteProjectsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProjectsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteScenariosResponse> DeleteScenariosOutcome;
                typedef std::future<DeleteScenariosOutcome> DeleteScenariosOutcomeCallable;
                typedef std::function<void(const PtsClient*, const Model::DeleteScenariosRequest&, DeleteScenariosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteScenariosAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlertChannelsResponse> DescribeAlertChannelsOutcome;
                typedef std::future<DescribeAlertChannelsOutcome> DescribeAlertChannelsOutcomeCallable;
                typedef std::function<void(const PtsClient*, const Model::DescribeAlertChannelsRequest&, DescribeAlertChannelsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlertChannelsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlertRecordsResponse> DescribeAlertRecordsOutcome;
                typedef std::future<DescribeAlertRecordsOutcome> DescribeAlertRecordsOutcomeCallable;
                typedef std::function<void(const PtsClient*, const Model::DescribeAlertRecordsRequest&, DescribeAlertRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlertRecordsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAvailableMetricsResponse> DescribeAvailableMetricsOutcome;
                typedef std::future<DescribeAvailableMetricsOutcome> DescribeAvailableMetricsOutcomeCallable;
                typedef std::function<void(const PtsClient*, const Model::DescribeAvailableMetricsRequest&, DescribeAvailableMetricsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailableMetricsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCheckSummaryResponse> DescribeCheckSummaryOutcome;
                typedef std::future<DescribeCheckSummaryOutcome> DescribeCheckSummaryOutcomeCallable;
                typedef std::function<void(const PtsClient*, const Model::DescribeCheckSummaryRequest&, DescribeCheckSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCheckSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCronJobsResponse> DescribeCronJobsOutcome;
                typedef std::future<DescribeCronJobsOutcome> DescribeCronJobsOutcomeCallable;
                typedef std::function<void(const PtsClient*, const Model::DescribeCronJobsRequest&, DescribeCronJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCronJobsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEnvironmentsResponse> DescribeEnvironmentsOutcome;
                typedef std::future<DescribeEnvironmentsOutcome> DescribeEnvironmentsOutcomeCallable;
                typedef std::function<void(const PtsClient*, const Model::DescribeEnvironmentsRequest&, DescribeEnvironmentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnvironmentsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeErrorSummaryResponse> DescribeErrorSummaryOutcome;
                typedef std::future<DescribeErrorSummaryOutcome> DescribeErrorSummaryOutcomeCallable;
                typedef std::function<void(const PtsClient*, const Model::DescribeErrorSummaryRequest&, DescribeErrorSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeErrorSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFilesResponse> DescribeFilesOutcome;
                typedef std::future<DescribeFilesOutcome> DescribeFilesOutcomeCallable;
                typedef std::function<void(const PtsClient*, const Model::DescribeFilesRequest&, DescribeFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeJobsResponse> DescribeJobsOutcome;
                typedef std::future<DescribeJobsOutcome> DescribeJobsOutcomeCallable;
                typedef std::function<void(const PtsClient*, const Model::DescribeJobsRequest&, DescribeJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJobsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLabelValuesResponse> DescribeLabelValuesOutcome;
                typedef std::future<DescribeLabelValuesOutcome> DescribeLabelValuesOutcomeCallable;
                typedef std::function<void(const PtsClient*, const Model::DescribeLabelValuesRequest&, DescribeLabelValuesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLabelValuesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMetricLabelWithValuesResponse> DescribeMetricLabelWithValuesOutcome;
                typedef std::future<DescribeMetricLabelWithValuesOutcome> DescribeMetricLabelWithValuesOutcomeCallable;
                typedef std::function<void(const PtsClient*, const Model::DescribeMetricLabelWithValuesRequest&, DescribeMetricLabelWithValuesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMetricLabelWithValuesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNormalLogsResponse> DescribeNormalLogsOutcome;
                typedef std::future<DescribeNormalLogsOutcome> DescribeNormalLogsOutcomeCallable;
                typedef std::function<void(const PtsClient*, const Model::DescribeNormalLogsRequest&, DescribeNormalLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNormalLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProjectsResponse> DescribeProjectsOutcome;
                typedef std::future<DescribeProjectsOutcome> DescribeProjectsOutcomeCallable;
                typedef std::function<void(const PtsClient*, const Model::DescribeProjectsRequest&, DescribeProjectsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRegionsResponse> DescribeRegionsOutcome;
                typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
                typedef std::function<void(const PtsClient*, const Model::DescribeRegionsRequest&, DescribeRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRequestSummaryResponse> DescribeRequestSummaryOutcome;
                typedef std::future<DescribeRequestSummaryOutcome> DescribeRequestSummaryOutcomeCallable;
                typedef std::function<void(const PtsClient*, const Model::DescribeRequestSummaryRequest&, DescribeRequestSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRequestSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSampleBatchQueryResponse> DescribeSampleBatchQueryOutcome;
                typedef std::future<DescribeSampleBatchQueryOutcome> DescribeSampleBatchQueryOutcomeCallable;
                typedef std::function<void(const PtsClient*, const Model::DescribeSampleBatchQueryRequest&, DescribeSampleBatchQueryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSampleBatchQueryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSampleLogsResponse> DescribeSampleLogsOutcome;
                typedef std::future<DescribeSampleLogsOutcome> DescribeSampleLogsOutcomeCallable;
                typedef std::function<void(const PtsClient*, const Model::DescribeSampleLogsRequest&, DescribeSampleLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSampleLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSampleMatrixBatchQueryResponse> DescribeSampleMatrixBatchQueryOutcome;
                typedef std::future<DescribeSampleMatrixBatchQueryOutcome> DescribeSampleMatrixBatchQueryOutcomeCallable;
                typedef std::function<void(const PtsClient*, const Model::DescribeSampleMatrixBatchQueryRequest&, DescribeSampleMatrixBatchQueryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSampleMatrixBatchQueryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSampleMatrixQueryResponse> DescribeSampleMatrixQueryOutcome;
                typedef std::future<DescribeSampleMatrixQueryOutcome> DescribeSampleMatrixQueryOutcomeCallable;
                typedef std::function<void(const PtsClient*, const Model::DescribeSampleMatrixQueryRequest&, DescribeSampleMatrixQueryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSampleMatrixQueryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSampleQueryResponse> DescribeSampleQueryOutcome;
                typedef std::future<DescribeSampleQueryOutcome> DescribeSampleQueryOutcomeCallable;
                typedef std::function<void(const PtsClient*, const Model::DescribeSampleQueryRequest&, DescribeSampleQueryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSampleQueryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScenarioWithJobsResponse> DescribeScenarioWithJobsOutcome;
                typedef std::future<DescribeScenarioWithJobsOutcome> DescribeScenarioWithJobsOutcomeCallable;
                typedef std::function<void(const PtsClient*, const Model::DescribeScenarioWithJobsRequest&, DescribeScenarioWithJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScenarioWithJobsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScenariosResponse> DescribeScenariosOutcome;
                typedef std::future<DescribeScenariosOutcome> DescribeScenariosOutcomeCallable;
                typedef std::function<void(const PtsClient*, const Model::DescribeScenariosRequest&, DescribeScenariosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScenariosAsyncHandler;
                typedef Outcome<Core::Error, Model::GenerateTmpKeyResponse> GenerateTmpKeyOutcome;
                typedef std::future<GenerateTmpKeyOutcome> GenerateTmpKeyOutcomeCallable;
                typedef std::function<void(const PtsClient*, const Model::GenerateTmpKeyRequest&, GenerateTmpKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GenerateTmpKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::RestartCronJobsResponse> RestartCronJobsOutcome;
                typedef std::future<RestartCronJobsOutcome> RestartCronJobsOutcomeCallable;
                typedef std::function<void(const PtsClient*, const Model::RestartCronJobsRequest&, RestartCronJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestartCronJobsAsyncHandler;
                typedef Outcome<Core::Error, Model::StartJobResponse> StartJobOutcome;
                typedef std::future<StartJobOutcome> StartJobOutcomeCallable;
                typedef std::function<void(const PtsClient*, const Model::StartJobRequest&, StartJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartJobAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateCronJobResponse> UpdateCronJobOutcome;
                typedef std::future<UpdateCronJobOutcome> UpdateCronJobOutcomeCallable;
                typedef std::function<void(const PtsClient*, const Model::UpdateCronJobRequest&, UpdateCronJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCronJobAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateEnvironmentResponse> UpdateEnvironmentOutcome;
                typedef std::future<UpdateEnvironmentOutcome> UpdateEnvironmentOutcomeCallable;
                typedef std::function<void(const PtsClient*, const Model::UpdateEnvironmentRequest&, UpdateEnvironmentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEnvironmentAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateFileScenarioRelationResponse> UpdateFileScenarioRelationOutcome;
                typedef std::future<UpdateFileScenarioRelationOutcome> UpdateFileScenarioRelationOutcomeCallable;
                typedef std::function<void(const PtsClient*, const Model::UpdateFileScenarioRelationRequest&, UpdateFileScenarioRelationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFileScenarioRelationAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateJobResponse> UpdateJobOutcome;
                typedef std::future<UpdateJobOutcome> UpdateJobOutcomeCallable;
                typedef std::function<void(const PtsClient*, const Model::UpdateJobRequest&, UpdateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateJobAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateProjectResponse> UpdateProjectOutcome;
                typedef std::future<UpdateProjectOutcome> UpdateProjectOutcomeCallable;
                typedef std::function<void(const PtsClient*, const Model::UpdateProjectRequest&, UpdateProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateScenarioResponse> UpdateScenarioOutcome;
                typedef std::future<UpdateScenarioOutcome> UpdateScenarioOutcomeCallable;
                typedef std::function<void(const PtsClient*, const Model::UpdateScenarioRequest&, UpdateScenarioOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateScenarioAsyncHandler;



                /**
                 *停止定时任务
                 * @param req AbortCronJobsRequest
                 * @return AbortCronJobsOutcome
                 */
                AbortCronJobsOutcome AbortCronJobs(const Model::AbortCronJobsRequest &request);
                void AbortCronJobsAsync(const Model::AbortCronJobsRequest& request, const AbortCronJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AbortCronJobsOutcomeCallable AbortCronJobsCallable(const Model::AbortCronJobsRequest& request);

                /**
                 *停止任务
                 * @param req AbortJobRequest
                 * @return AbortJobOutcome
                 */
                AbortJobOutcome AbortJob(const Model::AbortJobRequest &request);
                void AbortJobAsync(const Model::AbortJobRequest& request, const AbortJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AbortJobOutcomeCallable AbortJobCallable(const Model::AbortJobRequest& request);

                /**
                 *调整任务的目标RPS
                 * @param req AdjustJobSpeedRequest
                 * @return AdjustJobSpeedOutcome
                 */
                AdjustJobSpeedOutcome AdjustJobSpeed(const Model::AdjustJobSpeedRequest &request);
                void AdjustJobSpeedAsync(const Model::AdjustJobSpeedRequest& request, const AdjustJobSpeedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AdjustJobSpeedOutcomeCallable AdjustJobSpeedCallable(const Model::AdjustJobSpeedRequest& request);

                /**
                 *复制场景
                 * @param req CopyScenarioRequest
                 * @return CopyScenarioOutcome
                 */
                CopyScenarioOutcome CopyScenario(const Model::CopyScenarioRequest &request);
                void CopyScenarioAsync(const Model::CopyScenarioRequest& request, const CopyScenarioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CopyScenarioOutcomeCallable CopyScenarioCallable(const Model::CopyScenarioRequest& request);

                /**
                 *创建告警通知接收组
                 * @param req CreateAlertChannelRequest
                 * @return CreateAlertChannelOutcome
                 */
                CreateAlertChannelOutcome CreateAlertChannel(const Model::CreateAlertChannelRequest &request);
                void CreateAlertChannelAsync(const Model::CreateAlertChannelRequest& request, const CreateAlertChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAlertChannelOutcomeCallable CreateAlertChannelCallable(const Model::CreateAlertChannelRequest& request);

                /**
                 *创建定时任务
                 * @param req CreateCronJobRequest
                 * @return CreateCronJobOutcome
                 */
                CreateCronJobOutcome CreateCronJob(const Model::CreateCronJobRequest &request);
                void CreateCronJobAsync(const Model::CreateCronJobRequest& request, const CreateCronJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCronJobOutcomeCallable CreateCronJobCallable(const Model::CreateCronJobRequest& request);

                /**
                 *创建环境
                 * @param req CreateEnvironmentRequest
                 * @return CreateEnvironmentOutcome
                 */
                CreateEnvironmentOutcome CreateEnvironment(const Model::CreateEnvironmentRequest &request);
                void CreateEnvironmentAsync(const Model::CreateEnvironmentRequest& request, const CreateEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEnvironmentOutcomeCallable CreateEnvironmentCallable(const Model::CreateEnvironmentRequest& request);

                /**
                 *创建文件
                 * @param req CreateFileRequest
                 * @return CreateFileOutcome
                 */
                CreateFileOutcome CreateFile(const Model::CreateFileRequest &request);
                void CreateFileAsync(const Model::CreateFileRequest& request, const CreateFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFileOutcomeCallable CreateFileCallable(const Model::CreateFileRequest& request);

                /**
                 *创建项目
                 * @param req CreateProjectRequest
                 * @return CreateProjectOutcome
                 */
                CreateProjectOutcome CreateProject(const Model::CreateProjectRequest &request);
                void CreateProjectAsync(const Model::CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProjectOutcomeCallable CreateProjectCallable(const Model::CreateProjectRequest& request);

                /**
                 *创建场景
                 * @param req CreateScenarioRequest
                 * @return CreateScenarioOutcome
                 */
                CreateScenarioOutcome CreateScenario(const Model::CreateScenarioRequest &request);
                void CreateScenarioAsync(const Model::CreateScenarioRequest& request, const CreateScenarioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateScenarioOutcomeCallable CreateScenarioCallable(const Model::CreateScenarioRequest& request);

                /**
                 *删除告警通知接收组
                 * @param req DeleteAlertChannelRequest
                 * @return DeleteAlertChannelOutcome
                 */
                DeleteAlertChannelOutcome DeleteAlertChannel(const Model::DeleteAlertChannelRequest &request);
                void DeleteAlertChannelAsync(const Model::DeleteAlertChannelRequest& request, const DeleteAlertChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAlertChannelOutcomeCallable DeleteAlertChannelCallable(const Model::DeleteAlertChannelRequest& request);

                /**
                 *删除定时任务
                 * @param req DeleteCronJobsRequest
                 * @return DeleteCronJobsOutcome
                 */
                DeleteCronJobsOutcome DeleteCronJobs(const Model::DeleteCronJobsRequest &request);
                void DeleteCronJobsAsync(const Model::DeleteCronJobsRequest& request, const DeleteCronJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCronJobsOutcomeCallable DeleteCronJobsCallable(const Model::DeleteCronJobsRequest& request);

                /**
                 *删除环境
                 * @param req DeleteEnvironmentsRequest
                 * @return DeleteEnvironmentsOutcome
                 */
                DeleteEnvironmentsOutcome DeleteEnvironments(const Model::DeleteEnvironmentsRequest &request);
                void DeleteEnvironmentsAsync(const Model::DeleteEnvironmentsRequest& request, const DeleteEnvironmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEnvironmentsOutcomeCallable DeleteEnvironmentsCallable(const Model::DeleteEnvironmentsRequest& request);

                /**
                 *删除文件
                 * @param req DeleteFilesRequest
                 * @return DeleteFilesOutcome
                 */
                DeleteFilesOutcome DeleteFiles(const Model::DeleteFilesRequest &request);
                void DeleteFilesAsync(const Model::DeleteFilesRequest& request, const DeleteFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteFilesOutcomeCallable DeleteFilesCallable(const Model::DeleteFilesRequest& request);

                /**
                 *删除任务
                 * @param req DeleteJobsRequest
                 * @return DeleteJobsOutcome
                 */
                DeleteJobsOutcome DeleteJobs(const Model::DeleteJobsRequest &request);
                void DeleteJobsAsync(const Model::DeleteJobsRequest& request, const DeleteJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteJobsOutcomeCallable DeleteJobsCallable(const Model::DeleteJobsRequest& request);

                /**
                 *删除项目
                 * @param req DeleteProjectsRequest
                 * @return DeleteProjectsOutcome
                 */
                DeleteProjectsOutcome DeleteProjects(const Model::DeleteProjectsRequest &request);
                void DeleteProjectsAsync(const Model::DeleteProjectsRequest& request, const DeleteProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteProjectsOutcomeCallable DeleteProjectsCallable(const Model::DeleteProjectsRequest& request);

                /**
                 *删除场景
                 * @param req DeleteScenariosRequest
                 * @return DeleteScenariosOutcome
                 */
                DeleteScenariosOutcome DeleteScenarios(const Model::DeleteScenariosRequest &request);
                void DeleteScenariosAsync(const Model::DeleteScenariosRequest& request, const DeleteScenariosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteScenariosOutcomeCallable DeleteScenariosCallable(const Model::DeleteScenariosRequest& request);

                /**
                 *查询告警通知接收组
                 * @param req DescribeAlertChannelsRequest
                 * @return DescribeAlertChannelsOutcome
                 */
                DescribeAlertChannelsOutcome DescribeAlertChannels(const Model::DescribeAlertChannelsRequest &request);
                void DescribeAlertChannelsAsync(const Model::DescribeAlertChannelsRequest& request, const DescribeAlertChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlertChannelsOutcomeCallable DescribeAlertChannelsCallable(const Model::DescribeAlertChannelsRequest& request);

                /**
                 *返回告警历史项的列表
                 * @param req DescribeAlertRecordsRequest
                 * @return DescribeAlertRecordsOutcome
                 */
                DescribeAlertRecordsOutcome DescribeAlertRecords(const Model::DescribeAlertRecordsRequest &request);
                void DescribeAlertRecordsAsync(const Model::DescribeAlertRecordsRequest& request, const DescribeAlertRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlertRecordsOutcomeCallable DescribeAlertRecordsCallable(const Model::DescribeAlertRecordsRequest& request);

                /**
                 *查询系统支持的指标
                 * @param req DescribeAvailableMetricsRequest
                 * @return DescribeAvailableMetricsOutcome
                 */
                DescribeAvailableMetricsOutcome DescribeAvailableMetrics(const Model::DescribeAvailableMetricsRequest &request);
                void DescribeAvailableMetricsAsync(const Model::DescribeAvailableMetricsRequest& request, const DescribeAvailableMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAvailableMetricsOutcomeCallable DescribeAvailableMetricsCallable(const Model::DescribeAvailableMetricsRequest& request);

                /**
                 *查询检查点汇总信息
                 * @param req DescribeCheckSummaryRequest
                 * @return DescribeCheckSummaryOutcome
                 */
                DescribeCheckSummaryOutcome DescribeCheckSummary(const Model::DescribeCheckSummaryRequest &request);
                void DescribeCheckSummaryAsync(const Model::DescribeCheckSummaryRequest& request, const DescribeCheckSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCheckSummaryOutcomeCallable DescribeCheckSummaryCallable(const Model::DescribeCheckSummaryRequest& request);

                /**
                 *列出定时任务，非必填数组为空就默认全选
                 * @param req DescribeCronJobsRequest
                 * @return DescribeCronJobsOutcome
                 */
                DescribeCronJobsOutcome DescribeCronJobs(const Model::DescribeCronJobsRequest &request);
                void DescribeCronJobsAsync(const Model::DescribeCronJobsRequest& request, const DescribeCronJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCronJobsOutcomeCallable DescribeCronJobsCallable(const Model::DescribeCronJobsRequest& request);

                /**
                 *查看环境列表
                 * @param req DescribeEnvironmentsRequest
                 * @return DescribeEnvironmentsOutcome
                 */
                DescribeEnvironmentsOutcome DescribeEnvironments(const Model::DescribeEnvironmentsRequest &request);
                void DescribeEnvironmentsAsync(const Model::DescribeEnvironmentsRequest& request, const DescribeEnvironmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEnvironmentsOutcomeCallable DescribeEnvironmentsCallable(const Model::DescribeEnvironmentsRequest& request);

                /**
                 *查询错误详情汇总信息
                 * @param req DescribeErrorSummaryRequest
                 * @return DescribeErrorSummaryOutcome
                 */
                DescribeErrorSummaryOutcome DescribeErrorSummary(const Model::DescribeErrorSummaryRequest &request);
                void DescribeErrorSummaryAsync(const Model::DescribeErrorSummaryRequest& request, const DescribeErrorSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeErrorSummaryOutcomeCallable DescribeErrorSummaryCallable(const Model::DescribeErrorSummaryRequest& request);

                /**
                 *查询文件列表
                 * @param req DescribeFilesRequest
                 * @return DescribeFilesOutcome
                 */
                DescribeFilesOutcome DescribeFiles(const Model::DescribeFilesRequest &request);
                void DescribeFilesAsync(const Model::DescribeFilesRequest& request, const DescribeFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFilesOutcomeCallable DescribeFilesCallable(const Model::DescribeFilesRequest& request);

                /**
                 *查询任务列表
                 * @param req DescribeJobsRequest
                 * @return DescribeJobsOutcome
                 */
                DescribeJobsOutcome DescribeJobs(const Model::DescribeJobsRequest &request);
                void DescribeJobsAsync(const Model::DescribeJobsRequest& request, const DescribeJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeJobsOutcomeCallable DescribeJobsCallable(const Model::DescribeJobsRequest& request);

                /**
                 *查询标签内容
                 * @param req DescribeLabelValuesRequest
                 * @return DescribeLabelValuesOutcome
                 */
                DescribeLabelValuesOutcome DescribeLabelValues(const Model::DescribeLabelValuesRequest &request);
                void DescribeLabelValuesAsync(const Model::DescribeLabelValuesRequest& request, const DescribeLabelValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLabelValuesOutcomeCallable DescribeLabelValuesCallable(const Model::DescribeLabelValuesRequest& request);

                /**
                 *查询指标所有的label及values值
                 * @param req DescribeMetricLabelWithValuesRequest
                 * @return DescribeMetricLabelWithValuesOutcome
                 */
                DescribeMetricLabelWithValuesOutcome DescribeMetricLabelWithValues(const Model::DescribeMetricLabelWithValuesRequest &request);
                void DescribeMetricLabelWithValuesAsync(const Model::DescribeMetricLabelWithValuesRequest& request, const DescribeMetricLabelWithValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMetricLabelWithValuesOutcomeCallable DescribeMetricLabelWithValuesCallable(const Model::DescribeMetricLabelWithValuesRequest& request);

                /**
                 *压测过程日志包括引擎输出日志及用户输出日志
                 * @param req DescribeNormalLogsRequest
                 * @return DescribeNormalLogsOutcome
                 */
                DescribeNormalLogsOutcome DescribeNormalLogs(const Model::DescribeNormalLogsRequest &request);
                void DescribeNormalLogsAsync(const Model::DescribeNormalLogsRequest& request, const DescribeNormalLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNormalLogsOutcomeCallable DescribeNormalLogsCallable(const Model::DescribeNormalLogsRequest& request);

                /**
                 *查询项目列表
                 * @param req DescribeProjectsRequest
                 * @return DescribeProjectsOutcome
                 */
                DescribeProjectsOutcome DescribeProjects(const Model::DescribeProjectsRequest &request);
                void DescribeProjectsAsync(const Model::DescribeProjectsRequest& request, const DescribeProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProjectsOutcomeCallable DescribeProjectsCallable(const Model::DescribeProjectsRequest& request);

                /**
                 *查询地域列表
                 * @param req DescribeRegionsRequest
                 * @return DescribeRegionsOutcome
                 */
                DescribeRegionsOutcome DescribeRegions(const Model::DescribeRegionsRequest &request);
                void DescribeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRegionsOutcomeCallable DescribeRegionsCallable(const Model::DescribeRegionsRequest& request);

                /**
                 *查询请求汇总信息
                 * @param req DescribeRequestSummaryRequest
                 * @return DescribeRequestSummaryOutcome
                 */
                DescribeRequestSummaryOutcome DescribeRequestSummary(const Model::DescribeRequestSummaryRequest &request);
                void DescribeRequestSummaryAsync(const Model::DescribeRequestSummaryRequest& request, const DescribeRequestSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRequestSummaryOutcomeCallable DescribeRequestSummaryCallable(const Model::DescribeRequestSummaryRequest& request);

                /**
                 *批量查询指标，返回固定时间点指标内容
                 * @param req DescribeSampleBatchQueryRequest
                 * @return DescribeSampleBatchQueryOutcome
                 */
                DescribeSampleBatchQueryOutcome DescribeSampleBatchQuery(const Model::DescribeSampleBatchQueryRequest &request);
                void DescribeSampleBatchQueryAsync(const Model::DescribeSampleBatchQueryRequest& request, const DescribeSampleBatchQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSampleBatchQueryOutcomeCallable DescribeSampleBatchQueryCallable(const Model::DescribeSampleBatchQueryRequest& request);

                /**
                 *查询采样日志
                 * @param req DescribeSampleLogsRequest
                 * @return DescribeSampleLogsOutcome
                 */
                DescribeSampleLogsOutcome DescribeSampleLogs(const Model::DescribeSampleLogsRequest &request);
                void DescribeSampleLogsAsync(const Model::DescribeSampleLogsRequest& request, const DescribeSampleLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSampleLogsOutcomeCallable DescribeSampleLogsCallable(const Model::DescribeSampleLogsRequest& request);

                /**
                 *批量查询指标矩阵
                 * @param req DescribeSampleMatrixBatchQueryRequest
                 * @return DescribeSampleMatrixBatchQueryOutcome
                 */
                DescribeSampleMatrixBatchQueryOutcome DescribeSampleMatrixBatchQuery(const Model::DescribeSampleMatrixBatchQueryRequest &request);
                void DescribeSampleMatrixBatchQueryAsync(const Model::DescribeSampleMatrixBatchQueryRequest& request, const DescribeSampleMatrixBatchQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSampleMatrixBatchQueryOutcomeCallable DescribeSampleMatrixBatchQueryCallable(const Model::DescribeSampleMatrixBatchQueryRequest& request);

                /**
                 *查询指标矩阵
                 * @param req DescribeSampleMatrixQueryRequest
                 * @return DescribeSampleMatrixQueryOutcome
                 */
                DescribeSampleMatrixQueryOutcome DescribeSampleMatrixQuery(const Model::DescribeSampleMatrixQueryRequest &request);
                void DescribeSampleMatrixQueryAsync(const Model::DescribeSampleMatrixQueryRequest& request, const DescribeSampleMatrixQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSampleMatrixQueryOutcomeCallable DescribeSampleMatrixQueryCallable(const Model::DescribeSampleMatrixQueryRequest& request);

                /**
                 *查询指标，返回固定时间点指标内容
                 * @param req DescribeSampleQueryRequest
                 * @return DescribeSampleQueryOutcome
                 */
                DescribeSampleQueryOutcome DescribeSampleQuery(const Model::DescribeSampleQueryRequest &request);
                void DescribeSampleQueryAsync(const Model::DescribeSampleQueryRequest& request, const DescribeSampleQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSampleQueryOutcomeCallable DescribeSampleQueryCallable(const Model::DescribeSampleQueryRequest& request);

                /**
                 *查询场景配置并附带已经执行的任务内容
                 * @param req DescribeScenarioWithJobsRequest
                 * @return DescribeScenarioWithJobsOutcome
                 */
                DescribeScenarioWithJobsOutcome DescribeScenarioWithJobs(const Model::DescribeScenarioWithJobsRequest &request);
                void DescribeScenarioWithJobsAsync(const Model::DescribeScenarioWithJobsRequest& request, const DescribeScenarioWithJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScenarioWithJobsOutcomeCallable DescribeScenarioWithJobsCallable(const Model::DescribeScenarioWithJobsRequest& request);

                /**
                 *查询场景列表
                 * @param req DescribeScenariosRequest
                 * @return DescribeScenariosOutcome
                 */
                DescribeScenariosOutcome DescribeScenarios(const Model::DescribeScenariosRequest &request);
                void DescribeScenariosAsync(const Model::DescribeScenariosRequest& request, const DescribeScenariosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScenariosOutcomeCallable DescribeScenariosCallable(const Model::DescribeScenariosRequest& request);

                /**
                 *生成临时COS凭证
                 * @param req GenerateTmpKeyRequest
                 * @return GenerateTmpKeyOutcome
                 */
                GenerateTmpKeyOutcome GenerateTmpKey(const Model::GenerateTmpKeyRequest &request);
                void GenerateTmpKeyAsync(const Model::GenerateTmpKeyRequest& request, const GenerateTmpKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GenerateTmpKeyOutcomeCallable GenerateTmpKeyCallable(const Model::GenerateTmpKeyRequest& request);

                /**
                 *重启状态为已中止的定时任务
                 * @param req RestartCronJobsRequest
                 * @return RestartCronJobsOutcome
                 */
                RestartCronJobsOutcome RestartCronJobs(const Model::RestartCronJobsRequest &request);
                void RestartCronJobsAsync(const Model::RestartCronJobsRequest& request, const RestartCronJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestartCronJobsOutcomeCallable RestartCronJobsCallable(const Model::RestartCronJobsRequest& request);

                /**
                 *创建并启动任务
                 * @param req StartJobRequest
                 * @return StartJobOutcome
                 */
                StartJobOutcome StartJob(const Model::StartJobRequest &request);
                void StartJobAsync(const Model::StartJobRequest& request, const StartJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartJobOutcomeCallable StartJobCallable(const Model::StartJobRequest& request);

                /**
                 *更新定时任务
                 * @param req UpdateCronJobRequest
                 * @return UpdateCronJobOutcome
                 */
                UpdateCronJobOutcome UpdateCronJob(const Model::UpdateCronJobRequest &request);
                void UpdateCronJobAsync(const Model::UpdateCronJobRequest& request, const UpdateCronJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateCronJobOutcomeCallable UpdateCronJobCallable(const Model::UpdateCronJobRequest& request);

                /**
                 *更新环境
                 * @param req UpdateEnvironmentRequest
                 * @return UpdateEnvironmentOutcome
                 */
                UpdateEnvironmentOutcome UpdateEnvironment(const Model::UpdateEnvironmentRequest &request);
                void UpdateEnvironmentAsync(const Model::UpdateEnvironmentRequest& request, const UpdateEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateEnvironmentOutcomeCallable UpdateEnvironmentCallable(const Model::UpdateEnvironmentRequest& request);

                /**
                 *更新关联文件场景
                 * @param req UpdateFileScenarioRelationRequest
                 * @return UpdateFileScenarioRelationOutcome
                 */
                UpdateFileScenarioRelationOutcome UpdateFileScenarioRelation(const Model::UpdateFileScenarioRelationRequest &request);
                void UpdateFileScenarioRelationAsync(const Model::UpdateFileScenarioRelationRequest& request, const UpdateFileScenarioRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateFileScenarioRelationOutcomeCallable UpdateFileScenarioRelationCallable(const Model::UpdateFileScenarioRelationRequest& request);

                /**
                 *更新任务
                 * @param req UpdateJobRequest
                 * @return UpdateJobOutcome
                 */
                UpdateJobOutcome UpdateJob(const Model::UpdateJobRequest &request);
                void UpdateJobAsync(const Model::UpdateJobRequest& request, const UpdateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateJobOutcomeCallable UpdateJobCallable(const Model::UpdateJobRequest& request);

                /**
                 *更新项目
                 * @param req UpdateProjectRequest
                 * @return UpdateProjectOutcome
                 */
                UpdateProjectOutcome UpdateProject(const Model::UpdateProjectRequest &request);
                void UpdateProjectAsync(const Model::UpdateProjectRequest& request, const UpdateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateProjectOutcomeCallable UpdateProjectCallable(const Model::UpdateProjectRequest& request);

                /**
                 *更新场景
                 * @param req UpdateScenarioRequest
                 * @return UpdateScenarioOutcome
                 */
                UpdateScenarioOutcome UpdateScenario(const Model::UpdateScenarioRequest &request);
                void UpdateScenarioAsync(const Model::UpdateScenarioRequest& request, const UpdateScenarioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateScenarioOutcomeCallable UpdateScenarioCallable(const Model::UpdateScenarioRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_PTSCLIENT_H_
