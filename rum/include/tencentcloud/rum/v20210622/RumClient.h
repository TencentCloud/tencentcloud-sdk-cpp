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

#ifndef TENCENTCLOUD_RUM_V20210622_RUMCLIENT_H_
#define TENCENTCLOUD_RUM_V20210622_RUMCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/rum/v20210622/model/CreateFieldTransformRuleRequest.h>
#include <tencentcloud/rum/v20210622/model/CreateFieldTransformRuleResponse.h>
#include <tencentcloud/rum/v20210622/model/CreateReleaseFileRequest.h>
#include <tencentcloud/rum/v20210622/model/CreateReleaseFileResponse.h>
#include <tencentcloud/rum/v20210622/model/CreateStarProjectRequest.h>
#include <tencentcloud/rum/v20210622/model/CreateStarProjectResponse.h>
#include <tencentcloud/rum/v20210622/model/CreateTDEMApplicationRequest.h>
#include <tencentcloud/rum/v20210622/model/CreateTDEMApplicationResponse.h>
#include <tencentcloud/rum/v20210622/model/CreateTDEMBusinessSystemRequest.h>
#include <tencentcloud/rum/v20210622/model/CreateTDEMBusinessSystemResponse.h>
#include <tencentcloud/rum/v20210622/model/CreateTDEMDialTaskRequest.h>
#include <tencentcloud/rum/v20210622/model/CreateTDEMDialTaskResponse.h>
#include <tencentcloud/rum/v20210622/model/CreateTDEMFieldTransformRuleRequest.h>
#include <tencentcloud/rum/v20210622/model/CreateTDEMFieldTransformRuleResponse.h>
#include <tencentcloud/rum/v20210622/model/CreateTDEMFunnelRequest.h>
#include <tencentcloud/rum/v20210622/model/CreateTDEMFunnelResponse.h>
#include <tencentcloud/rum/v20210622/model/CreateWhitelistRequest.h>
#include <tencentcloud/rum/v20210622/model/CreateWhitelistResponse.h>
#include <tencentcloud/rum/v20210622/model/DeleteFieldTransformRuleRequest.h>
#include <tencentcloud/rum/v20210622/model/DeleteFieldTransformRuleResponse.h>
#include <tencentcloud/rum/v20210622/model/DeleteInstanceRequest.h>
#include <tencentcloud/rum/v20210622/model/DeleteInstanceResponse.h>
#include <tencentcloud/rum/v20210622/model/DeleteMiniProgramReplayPackRequest.h>
#include <tencentcloud/rum/v20210622/model/DeleteMiniProgramReplayPackResponse.h>
#include <tencentcloud/rum/v20210622/model/DeleteProjectRequest.h>
#include <tencentcloud/rum/v20210622/model/DeleteProjectResponse.h>
#include <tencentcloud/rum/v20210622/model/DeleteReleaseFileRequest.h>
#include <tencentcloud/rum/v20210622/model/DeleteReleaseFileResponse.h>
#include <tencentcloud/rum/v20210622/model/DeleteStarProjectRequest.h>
#include <tencentcloud/rum/v20210622/model/DeleteStarProjectResponse.h>
#include <tencentcloud/rum/v20210622/model/DeleteSymbolArtifactRequest.h>
#include <tencentcloud/rum/v20210622/model/DeleteSymbolArtifactResponse.h>
#include <tencentcloud/rum/v20210622/model/DeleteTDEMApplicationRequest.h>
#include <tencentcloud/rum/v20210622/model/DeleteTDEMApplicationResponse.h>
#include <tencentcloud/rum/v20210622/model/DeleteTDEMBusinessSystemRequest.h>
#include <tencentcloud/rum/v20210622/model/DeleteTDEMBusinessSystemResponse.h>
#include <tencentcloud/rum/v20210622/model/DeleteTDEMDialTaskRequest.h>
#include <tencentcloud/rum/v20210622/model/DeleteTDEMDialTaskResponse.h>
#include <tencentcloud/rum/v20210622/model/DeleteTDEMFieldTransformRuleRequest.h>
#include <tencentcloud/rum/v20210622/model/DeleteTDEMFieldTransformRuleResponse.h>
#include <tencentcloud/rum/v20210622/model/DeleteTDEMFunnelRequest.h>
#include <tencentcloud/rum/v20210622/model/DeleteTDEMFunnelResponse.h>
#include <tencentcloud/rum/v20210622/model/DeleteWhitelistRequest.h>
#include <tencentcloud/rum/v20210622/model/DeleteWhitelistResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeAppDimensionMetricsRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeAppDimensionMetricsResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeAppMetricsDataRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeAppMetricsDataResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeAppSingleCaseDetailListRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeAppSingleCaseDetailListResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeAppSingleCaseListRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeAppSingleCaseListResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeApplicationExitReportDetailRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeApplicationExitReportDetailResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeApplicationExitReportListRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeApplicationExitReportListResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataBridgeUrlV2Request.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataBridgeUrlV2Response.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataCustomUrlRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataCustomUrlResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataCustomUrlV2Request.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataCustomUrlV2Response.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataEventUrlRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataEventUrlResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataEventUrlV2Request.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataEventUrlV2Response.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataFetchProjectRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataFetchProjectResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataFetchUrlRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataFetchUrlResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataFetchUrlInfoRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataFetchUrlInfoResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataFetchUrlV2Request.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataFetchUrlV2Response.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataLogUrlInfoRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataLogUrlInfoResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataLogUrlStatisticsRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataLogUrlStatisticsResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataLogUrlStatisticsV2Request.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataLogUrlStatisticsV2Response.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataPerformancePageRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataPerformancePageResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataPerformancePageV2Request.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataPerformancePageV2Response.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataPvUrlInfoRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataPvUrlInfoResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataPvUrlStatisticsRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataPvUrlStatisticsResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataPvUrlStatisticsV2Request.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataPvUrlStatisticsV2Response.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataReportCountRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataReportCountResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataReportCountV2Request.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataReportCountV2Response.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataSetUrlStatisticsRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataSetUrlStatisticsResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataSetUrlStatisticsV2Request.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataSetUrlStatisticsV2Response.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataStaticProjectRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataStaticProjectResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataStaticProjectV2Request.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataStaticProjectV2Response.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataStaticResourceRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataStaticResourceResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataStaticResourceV2Request.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataStaticResourceV2Response.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataStaticUrlRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataStaticUrlResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataStaticUrlV2Request.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataStaticUrlV2Response.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataWebVitalsPageRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataWebVitalsPageResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataWebVitalsPageV2Request.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataWebVitalsPageV2Response.h>
#include <tencentcloud/rum/v20210622/model/DescribeErrorRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeErrorResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeExceptionDetailRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeExceptionDetailResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeExceptionReportListRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeExceptionReportListResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeFOOMMallocProblemDetailRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeFOOMMallocProblemDetailResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeFOOMMallocProblemListRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeFOOMMallocProblemListResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeFOOMMallocReportListRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeFOOMMallocReportListResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeFOOMProblemDetailRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeFOOMProblemDetailResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeFOOMProblemListRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeFOOMProblemListResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeFOOMReportListRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeFOOMReportListResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeFieldTransformRulesRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeFieldTransformRulesResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeFieldValuesRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeFieldValuesResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeFileCertificateRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeFileCertificateResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeIssueAffectedUsersRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeIssueAffectedUsersResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeIssueBreadcrumbsRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeIssueBreadcrumbsResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeIssueCrashLogDownloadURLRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeIssueCrashLogDownloadURLResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeIssueDetailRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeIssueDetailResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeIssueEventDetailRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeIssueEventDetailResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeIssueEventsRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeIssueEventsResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeIssueTrendRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeIssueTrendResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeIssuesRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeIssuesResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeIssuesDistributionRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeIssuesDistributionResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeIssuesListRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeIssuesListResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeIssuesStatisticsTrendRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeIssuesStatisticsTrendResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeLagANRProblemAccountDetailRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeLagANRProblemAccountDetailResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeLagANRProblemFeatureAccountsRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeLagANRProblemFeatureAccountsResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeLagANRProblemListRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeLagANRProblemListResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeMiniProgramReplayPackRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeMiniProgramReplayPackResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeMiniProgramReplayPacksRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeMiniProgramReplayPacksResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribePerformanceMetricsRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribePerformanceMetricsResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeProjectLimitsRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeProjectLimitsResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeProjectsRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeProjectsResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribePvListRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribePvListResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeReleaseFileSignRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeReleaseFileSignResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeReleaseFilesRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeReleaseFilesResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeReplayDataRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeReplayDataResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeReplayDetailsRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeReplayDetailsResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeReplayMetaRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeReplayMetaResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeRumGroupLogRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeRumGroupLogResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeRumGroupLogV2Request.h>
#include <tencentcloud/rum/v20210622/model/DescribeRumGroupLogV2Response.h>
#include <tencentcloud/rum/v20210622/model/DescribeRumLogDetailsV2Request.h>
#include <tencentcloud/rum/v20210622/model/DescribeRumLogDetailsV2Response.h>
#include <tencentcloud/rum/v20210622/model/DescribeRumLogExportRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeRumLogExportResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeRumLogExportV2Request.h>
#include <tencentcloud/rum/v20210622/model/DescribeRumLogExportV2Response.h>
#include <tencentcloud/rum/v20210622/model/DescribeRumLogExportsRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeRumLogExportsResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeRumLogExportsV2Request.h>
#include <tencentcloud/rum/v20210622/model/DescribeRumLogExportsV2Response.h>
#include <tencentcloud/rum/v20210622/model/DescribeRumLogListRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeRumLogListResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeRumLogTotalV2Request.h>
#include <tencentcloud/rum/v20210622/model/DescribeRumLogTotalV2Response.h>
#include <tencentcloud/rum/v20210622/model/DescribeRumStatsLogListRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeRumStatsLogListResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeRumStatsLogListV2Request.h>
#include <tencentcloud/rum/v20210622/model/DescribeRumStatsLogListV2Response.h>
#include <tencentcloud/rum/v20210622/model/DescribeSampleRateRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeSampleRateResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeScoresRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeScoresResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeScoresV2Request.h>
#include <tencentcloud/rum/v20210622/model/DescribeScoresV2Response.h>
#include <tencentcloud/rum/v20210622/model/DescribeSessionListRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeSessionListResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeStruggleDistributionRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeStruggleDistributionResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeSymbolArtifactUploadCredentialRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeSymbolArtifactUploadCredentialResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeSymbolArtifactsRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeSymbolArtifactsResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMApplicationsRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMApplicationsResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMBusinessSystemsRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMBusinessSystemsResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMDialDimensionsRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMDialDimensionsResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMDialExecutionDetailRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMDialExecutionDetailResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMDialExecutionListRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMDialExecutionListResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMDialOverviewRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMDialOverviewResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMDialTasksRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMDialTasksResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMDialTrendRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMDialTrendResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMEventDetailRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMEventDetailResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMEventRankRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMEventRankResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMEventSearchRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMEventSearchResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMEventSearchSummaryRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMEventSearchSummaryResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMFieldTransformRulesRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMFieldTransformRulesResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMFunnelDetailRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMFunnelDetailResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMFunnelDimensionsRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMFunnelDimensionsResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMFunnelListRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMFunnelListResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMFunnelReportRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMFunnelReportResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMFunnelStepSessionListRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMFunnelStepSessionListResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMFunnelTrendRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMFunnelTrendResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMMetricDistributionRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMMetricDistributionResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMMetricSummaryRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMMetricSummaryResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMMetricTrendRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMMetricTrendResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMOverviewScoresRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMOverviewScoresResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMRelatedEventsRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMRelatedEventsResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMSSEDimensionsRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMSSEDimensionsResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMSSEDistributionRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMSSEDistributionResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMSSEPercentileRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMSSEPercentileResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMSSESummaryRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMSSESummaryResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMSSETrendRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMSSETrendResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMSampleConfigRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMSampleConfigResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMSampleRateRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMSampleRateResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMSessionReplayTimelineRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMSessionReplayTimelineResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMUsageDetailRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMUsageDetailResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMUsageSummaryRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeTDEMUsageSummaryResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeTawAreasRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeTawAreasResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeTawInstancesRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeTawInstancesResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeTokenRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeTokenResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeTopIssuesRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeTopIssuesResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeUserJourneySanKeyRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeUserJourneySanKeyResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeUvListRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeUvListResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeWhitelistsRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeWhitelistsResponse.h>
#include <tencentcloud/rum/v20210622/model/ModifyFieldTransformRuleRequest.h>
#include <tencentcloud/rum/v20210622/model/ModifyFieldTransformRuleResponse.h>
#include <tencentcloud/rum/v20210622/model/ModifyInstanceRequest.h>
#include <tencentcloud/rum/v20210622/model/ModifyInstanceResponse.h>
#include <tencentcloud/rum/v20210622/model/ModifyIssueStatusRequest.h>
#include <tencentcloud/rum/v20210622/model/ModifyIssueStatusResponse.h>
#include <tencentcloud/rum/v20210622/model/ModifyMiniProgramReplayPackRequest.h>
#include <tencentcloud/rum/v20210622/model/ModifyMiniProgramReplayPackResponse.h>
#include <tencentcloud/rum/v20210622/model/ModifyProjectRequest.h>
#include <tencentcloud/rum/v20210622/model/ModifyProjectResponse.h>
#include <tencentcloud/rum/v20210622/model/ModifyProjectLimitRequest.h>
#include <tencentcloud/rum/v20210622/model/ModifyProjectLimitResponse.h>
#include <tencentcloud/rum/v20210622/model/ModifySampleRateRequest.h>
#include <tencentcloud/rum/v20210622/model/ModifySampleRateResponse.h>
#include <tencentcloud/rum/v20210622/model/ModifyTDEMApplicationRequest.h>
#include <tencentcloud/rum/v20210622/model/ModifyTDEMApplicationResponse.h>
#include <tencentcloud/rum/v20210622/model/ModifyTDEMBusinessSystemRequest.h>
#include <tencentcloud/rum/v20210622/model/ModifyTDEMBusinessSystemResponse.h>
#include <tencentcloud/rum/v20210622/model/ModifyTDEMDialTaskRequest.h>
#include <tencentcloud/rum/v20210622/model/ModifyTDEMDialTaskResponse.h>
#include <tencentcloud/rum/v20210622/model/ModifyTDEMFieldTransformRuleRequest.h>
#include <tencentcloud/rum/v20210622/model/ModifyTDEMFieldTransformRuleResponse.h>
#include <tencentcloud/rum/v20210622/model/ModifyTDEMFunnelRequest.h>
#include <tencentcloud/rum/v20210622/model/ModifyTDEMFunnelResponse.h>
#include <tencentcloud/rum/v20210622/model/ModifyTDEMSampleConfigRequest.h>
#include <tencentcloud/rum/v20210622/model/ModifyTDEMSampleConfigResponse.h>
#include <tencentcloud/rum/v20210622/model/ModifyTDEMSampleRateRequest.h>
#include <tencentcloud/rum/v20210622/model/ModifyTDEMSampleRateResponse.h>
#include <tencentcloud/rum/v20210622/model/PreviewTDEMFunnelReportRequest.h>
#include <tencentcloud/rum/v20210622/model/PreviewTDEMFunnelReportResponse.h>
#include <tencentcloud/rum/v20210622/model/ResumeInstanceRequest.h>
#include <tencentcloud/rum/v20210622/model/ResumeInstanceResponse.h>
#include <tencentcloud/rum/v20210622/model/ResumeProjectRequest.h>
#include <tencentcloud/rum/v20210622/model/ResumeProjectResponse.h>
#include <tencentcloud/rum/v20210622/model/ResumeTDEMApplicationRequest.h>
#include <tencentcloud/rum/v20210622/model/ResumeTDEMApplicationResponse.h>
#include <tencentcloud/rum/v20210622/model/StopInstanceRequest.h>
#include <tencentcloud/rum/v20210622/model/StopInstanceResponse.h>
#include <tencentcloud/rum/v20210622/model/StopProjectRequest.h>
#include <tencentcloud/rum/v20210622/model/StopProjectResponse.h>
#include <tencentcloud/rum/v20210622/model/StopTDEMApplicationRequest.h>
#include <tencentcloud/rum/v20210622/model/StopTDEMApplicationResponse.h>
#include <tencentcloud/rum/v20210622/model/UploadMiniProgramSourceRequest.h>
#include <tencentcloud/rum/v20210622/model/UploadMiniProgramSourceResponse.h>
#include <tencentcloud/rum/v20210622/model/UploadSymbolArtifactRequest.h>
#include <tencentcloud/rum/v20210622/model/UploadSymbolArtifactResponse.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            class RumClient : public AbstractClient
            {
            public:
                RumClient(const Credential &credential, const std::string &region);
                RumClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateFieldTransformRuleResponse> CreateFieldTransformRuleOutcome;
                typedef std::future<CreateFieldTransformRuleOutcome> CreateFieldTransformRuleOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::CreateFieldTransformRuleRequest&, CreateFieldTransformRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFieldTransformRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateReleaseFileResponse> CreateReleaseFileOutcome;
                typedef std::future<CreateReleaseFileOutcome> CreateReleaseFileOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::CreateReleaseFileRequest&, CreateReleaseFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateReleaseFileAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStarProjectResponse> CreateStarProjectOutcome;
                typedef std::future<CreateStarProjectOutcome> CreateStarProjectOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::CreateStarProjectRequest&, CreateStarProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStarProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTDEMApplicationResponse> CreateTDEMApplicationOutcome;
                typedef std::future<CreateTDEMApplicationOutcome> CreateTDEMApplicationOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::CreateTDEMApplicationRequest&, CreateTDEMApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTDEMApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTDEMBusinessSystemResponse> CreateTDEMBusinessSystemOutcome;
                typedef std::future<CreateTDEMBusinessSystemOutcome> CreateTDEMBusinessSystemOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::CreateTDEMBusinessSystemRequest&, CreateTDEMBusinessSystemOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTDEMBusinessSystemAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTDEMDialTaskResponse> CreateTDEMDialTaskOutcome;
                typedef std::future<CreateTDEMDialTaskOutcome> CreateTDEMDialTaskOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::CreateTDEMDialTaskRequest&, CreateTDEMDialTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTDEMDialTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTDEMFieldTransformRuleResponse> CreateTDEMFieldTransformRuleOutcome;
                typedef std::future<CreateTDEMFieldTransformRuleOutcome> CreateTDEMFieldTransformRuleOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::CreateTDEMFieldTransformRuleRequest&, CreateTDEMFieldTransformRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTDEMFieldTransformRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTDEMFunnelResponse> CreateTDEMFunnelOutcome;
                typedef std::future<CreateTDEMFunnelOutcome> CreateTDEMFunnelOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::CreateTDEMFunnelRequest&, CreateTDEMFunnelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTDEMFunnelAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWhitelistResponse> CreateWhitelistOutcome;
                typedef std::future<CreateWhitelistOutcome> CreateWhitelistOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::CreateWhitelistRequest&, CreateWhitelistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWhitelistAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteFieldTransformRuleResponse> DeleteFieldTransformRuleOutcome;
                typedef std::future<DeleteFieldTransformRuleOutcome> DeleteFieldTransformRuleOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DeleteFieldTransformRuleRequest&, DeleteFieldTransformRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFieldTransformRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteInstanceResponse> DeleteInstanceOutcome;
                typedef std::future<DeleteInstanceOutcome> DeleteInstanceOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DeleteInstanceRequest&, DeleteInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMiniProgramReplayPackResponse> DeleteMiniProgramReplayPackOutcome;
                typedef std::future<DeleteMiniProgramReplayPackOutcome> DeleteMiniProgramReplayPackOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DeleteMiniProgramReplayPackRequest&, DeleteMiniProgramReplayPackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMiniProgramReplayPackAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteProjectResponse> DeleteProjectOutcome;
                typedef std::future<DeleteProjectOutcome> DeleteProjectOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DeleteProjectRequest&, DeleteProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteReleaseFileResponse> DeleteReleaseFileOutcome;
                typedef std::future<DeleteReleaseFileOutcome> DeleteReleaseFileOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DeleteReleaseFileRequest&, DeleteReleaseFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteReleaseFileAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteStarProjectResponse> DeleteStarProjectOutcome;
                typedef std::future<DeleteStarProjectOutcome> DeleteStarProjectOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DeleteStarProjectRequest&, DeleteStarProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStarProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSymbolArtifactResponse> DeleteSymbolArtifactOutcome;
                typedef std::future<DeleteSymbolArtifactOutcome> DeleteSymbolArtifactOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DeleteSymbolArtifactRequest&, DeleteSymbolArtifactOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSymbolArtifactAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTDEMApplicationResponse> DeleteTDEMApplicationOutcome;
                typedef std::future<DeleteTDEMApplicationOutcome> DeleteTDEMApplicationOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DeleteTDEMApplicationRequest&, DeleteTDEMApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTDEMApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTDEMBusinessSystemResponse> DeleteTDEMBusinessSystemOutcome;
                typedef std::future<DeleteTDEMBusinessSystemOutcome> DeleteTDEMBusinessSystemOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DeleteTDEMBusinessSystemRequest&, DeleteTDEMBusinessSystemOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTDEMBusinessSystemAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTDEMDialTaskResponse> DeleteTDEMDialTaskOutcome;
                typedef std::future<DeleteTDEMDialTaskOutcome> DeleteTDEMDialTaskOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DeleteTDEMDialTaskRequest&, DeleteTDEMDialTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTDEMDialTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTDEMFieldTransformRuleResponse> DeleteTDEMFieldTransformRuleOutcome;
                typedef std::future<DeleteTDEMFieldTransformRuleOutcome> DeleteTDEMFieldTransformRuleOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DeleteTDEMFieldTransformRuleRequest&, DeleteTDEMFieldTransformRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTDEMFieldTransformRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTDEMFunnelResponse> DeleteTDEMFunnelOutcome;
                typedef std::future<DeleteTDEMFunnelOutcome> DeleteTDEMFunnelOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DeleteTDEMFunnelRequest&, DeleteTDEMFunnelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTDEMFunnelAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWhitelistResponse> DeleteWhitelistOutcome;
                typedef std::future<DeleteWhitelistOutcome> DeleteWhitelistOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DeleteWhitelistRequest&, DeleteWhitelistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWhitelistAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAppDimensionMetricsResponse> DescribeAppDimensionMetricsOutcome;
                typedef std::future<DescribeAppDimensionMetricsOutcome> DescribeAppDimensionMetricsOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeAppDimensionMetricsRequest&, DescribeAppDimensionMetricsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppDimensionMetricsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAppMetricsDataResponse> DescribeAppMetricsDataOutcome;
                typedef std::future<DescribeAppMetricsDataOutcome> DescribeAppMetricsDataOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeAppMetricsDataRequest&, DescribeAppMetricsDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppMetricsDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAppSingleCaseDetailListResponse> DescribeAppSingleCaseDetailListOutcome;
                typedef std::future<DescribeAppSingleCaseDetailListOutcome> DescribeAppSingleCaseDetailListOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeAppSingleCaseDetailListRequest&, DescribeAppSingleCaseDetailListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppSingleCaseDetailListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAppSingleCaseListResponse> DescribeAppSingleCaseListOutcome;
                typedef std::future<DescribeAppSingleCaseListOutcome> DescribeAppSingleCaseListOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeAppSingleCaseListRequest&, DescribeAppSingleCaseListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppSingleCaseListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationExitReportDetailResponse> DescribeApplicationExitReportDetailOutcome;
                typedef std::future<DescribeApplicationExitReportDetailOutcome> DescribeApplicationExitReportDetailOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeApplicationExitReportDetailRequest&, DescribeApplicationExitReportDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationExitReportDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationExitReportListResponse> DescribeApplicationExitReportListOutcome;
                typedef std::future<DescribeApplicationExitReportListOutcome> DescribeApplicationExitReportListOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeApplicationExitReportListRequest&, DescribeApplicationExitReportListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationExitReportListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataResponse> DescribeDataOutcome;
                typedef std::future<DescribeDataOutcome> DescribeDataOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataRequest&, DescribeDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataBridgeUrlV2Response> DescribeDataBridgeUrlV2Outcome;
                typedef std::future<DescribeDataBridgeUrlV2Outcome> DescribeDataBridgeUrlV2OutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataBridgeUrlV2Request&, DescribeDataBridgeUrlV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataBridgeUrlV2AsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataCustomUrlResponse> DescribeDataCustomUrlOutcome;
                typedef std::future<DescribeDataCustomUrlOutcome> DescribeDataCustomUrlOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataCustomUrlRequest&, DescribeDataCustomUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataCustomUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataCustomUrlV2Response> DescribeDataCustomUrlV2Outcome;
                typedef std::future<DescribeDataCustomUrlV2Outcome> DescribeDataCustomUrlV2OutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataCustomUrlV2Request&, DescribeDataCustomUrlV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataCustomUrlV2AsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataEventUrlResponse> DescribeDataEventUrlOutcome;
                typedef std::future<DescribeDataEventUrlOutcome> DescribeDataEventUrlOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataEventUrlRequest&, DescribeDataEventUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataEventUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataEventUrlV2Response> DescribeDataEventUrlV2Outcome;
                typedef std::future<DescribeDataEventUrlV2Outcome> DescribeDataEventUrlV2OutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataEventUrlV2Request&, DescribeDataEventUrlV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataEventUrlV2AsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataFetchProjectResponse> DescribeDataFetchProjectOutcome;
                typedef std::future<DescribeDataFetchProjectOutcome> DescribeDataFetchProjectOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataFetchProjectRequest&, DescribeDataFetchProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataFetchProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataFetchUrlResponse> DescribeDataFetchUrlOutcome;
                typedef std::future<DescribeDataFetchUrlOutcome> DescribeDataFetchUrlOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataFetchUrlRequest&, DescribeDataFetchUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataFetchUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataFetchUrlInfoResponse> DescribeDataFetchUrlInfoOutcome;
                typedef std::future<DescribeDataFetchUrlInfoOutcome> DescribeDataFetchUrlInfoOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataFetchUrlInfoRequest&, DescribeDataFetchUrlInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataFetchUrlInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataFetchUrlV2Response> DescribeDataFetchUrlV2Outcome;
                typedef std::future<DescribeDataFetchUrlV2Outcome> DescribeDataFetchUrlV2OutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataFetchUrlV2Request&, DescribeDataFetchUrlV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataFetchUrlV2AsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataLogUrlInfoResponse> DescribeDataLogUrlInfoOutcome;
                typedef std::future<DescribeDataLogUrlInfoOutcome> DescribeDataLogUrlInfoOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataLogUrlInfoRequest&, DescribeDataLogUrlInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataLogUrlInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataLogUrlStatisticsResponse> DescribeDataLogUrlStatisticsOutcome;
                typedef std::future<DescribeDataLogUrlStatisticsOutcome> DescribeDataLogUrlStatisticsOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataLogUrlStatisticsRequest&, DescribeDataLogUrlStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataLogUrlStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataLogUrlStatisticsV2Response> DescribeDataLogUrlStatisticsV2Outcome;
                typedef std::future<DescribeDataLogUrlStatisticsV2Outcome> DescribeDataLogUrlStatisticsV2OutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataLogUrlStatisticsV2Request&, DescribeDataLogUrlStatisticsV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataLogUrlStatisticsV2AsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataPerformancePageResponse> DescribeDataPerformancePageOutcome;
                typedef std::future<DescribeDataPerformancePageOutcome> DescribeDataPerformancePageOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataPerformancePageRequest&, DescribeDataPerformancePageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataPerformancePageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataPerformancePageV2Response> DescribeDataPerformancePageV2Outcome;
                typedef std::future<DescribeDataPerformancePageV2Outcome> DescribeDataPerformancePageV2OutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataPerformancePageV2Request&, DescribeDataPerformancePageV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataPerformancePageV2AsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataPvUrlInfoResponse> DescribeDataPvUrlInfoOutcome;
                typedef std::future<DescribeDataPvUrlInfoOutcome> DescribeDataPvUrlInfoOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataPvUrlInfoRequest&, DescribeDataPvUrlInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataPvUrlInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataPvUrlStatisticsResponse> DescribeDataPvUrlStatisticsOutcome;
                typedef std::future<DescribeDataPvUrlStatisticsOutcome> DescribeDataPvUrlStatisticsOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataPvUrlStatisticsRequest&, DescribeDataPvUrlStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataPvUrlStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataPvUrlStatisticsV2Response> DescribeDataPvUrlStatisticsV2Outcome;
                typedef std::future<DescribeDataPvUrlStatisticsV2Outcome> DescribeDataPvUrlStatisticsV2OutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataPvUrlStatisticsV2Request&, DescribeDataPvUrlStatisticsV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataPvUrlStatisticsV2AsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataReportCountResponse> DescribeDataReportCountOutcome;
                typedef std::future<DescribeDataReportCountOutcome> DescribeDataReportCountOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataReportCountRequest&, DescribeDataReportCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataReportCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataReportCountV2Response> DescribeDataReportCountV2Outcome;
                typedef std::future<DescribeDataReportCountV2Outcome> DescribeDataReportCountV2OutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataReportCountV2Request&, DescribeDataReportCountV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataReportCountV2AsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataSetUrlStatisticsResponse> DescribeDataSetUrlStatisticsOutcome;
                typedef std::future<DescribeDataSetUrlStatisticsOutcome> DescribeDataSetUrlStatisticsOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataSetUrlStatisticsRequest&, DescribeDataSetUrlStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataSetUrlStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataSetUrlStatisticsV2Response> DescribeDataSetUrlStatisticsV2Outcome;
                typedef std::future<DescribeDataSetUrlStatisticsV2Outcome> DescribeDataSetUrlStatisticsV2OutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataSetUrlStatisticsV2Request&, DescribeDataSetUrlStatisticsV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataSetUrlStatisticsV2AsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataStaticProjectResponse> DescribeDataStaticProjectOutcome;
                typedef std::future<DescribeDataStaticProjectOutcome> DescribeDataStaticProjectOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataStaticProjectRequest&, DescribeDataStaticProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataStaticProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataStaticProjectV2Response> DescribeDataStaticProjectV2Outcome;
                typedef std::future<DescribeDataStaticProjectV2Outcome> DescribeDataStaticProjectV2OutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataStaticProjectV2Request&, DescribeDataStaticProjectV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataStaticProjectV2AsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataStaticResourceResponse> DescribeDataStaticResourceOutcome;
                typedef std::future<DescribeDataStaticResourceOutcome> DescribeDataStaticResourceOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataStaticResourceRequest&, DescribeDataStaticResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataStaticResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataStaticResourceV2Response> DescribeDataStaticResourceV2Outcome;
                typedef std::future<DescribeDataStaticResourceV2Outcome> DescribeDataStaticResourceV2OutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataStaticResourceV2Request&, DescribeDataStaticResourceV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataStaticResourceV2AsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataStaticUrlResponse> DescribeDataStaticUrlOutcome;
                typedef std::future<DescribeDataStaticUrlOutcome> DescribeDataStaticUrlOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataStaticUrlRequest&, DescribeDataStaticUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataStaticUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataStaticUrlV2Response> DescribeDataStaticUrlV2Outcome;
                typedef std::future<DescribeDataStaticUrlV2Outcome> DescribeDataStaticUrlV2OutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataStaticUrlV2Request&, DescribeDataStaticUrlV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataStaticUrlV2AsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataWebVitalsPageResponse> DescribeDataWebVitalsPageOutcome;
                typedef std::future<DescribeDataWebVitalsPageOutcome> DescribeDataWebVitalsPageOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataWebVitalsPageRequest&, DescribeDataWebVitalsPageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataWebVitalsPageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataWebVitalsPageV2Response> DescribeDataWebVitalsPageV2Outcome;
                typedef std::future<DescribeDataWebVitalsPageV2Outcome> DescribeDataWebVitalsPageV2OutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataWebVitalsPageV2Request&, DescribeDataWebVitalsPageV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataWebVitalsPageV2AsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeErrorResponse> DescribeErrorOutcome;
                typedef std::future<DescribeErrorOutcome> DescribeErrorOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeErrorRequest&, DescribeErrorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeErrorAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExceptionDetailResponse> DescribeExceptionDetailOutcome;
                typedef std::future<DescribeExceptionDetailOutcome> DescribeExceptionDetailOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeExceptionDetailRequest&, DescribeExceptionDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExceptionDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExceptionReportListResponse> DescribeExceptionReportListOutcome;
                typedef std::future<DescribeExceptionReportListOutcome> DescribeExceptionReportListOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeExceptionReportListRequest&, DescribeExceptionReportListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExceptionReportListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFOOMMallocProblemDetailResponse> DescribeFOOMMallocProblemDetailOutcome;
                typedef std::future<DescribeFOOMMallocProblemDetailOutcome> DescribeFOOMMallocProblemDetailOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeFOOMMallocProblemDetailRequest&, DescribeFOOMMallocProblemDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFOOMMallocProblemDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFOOMMallocProblemListResponse> DescribeFOOMMallocProblemListOutcome;
                typedef std::future<DescribeFOOMMallocProblemListOutcome> DescribeFOOMMallocProblemListOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeFOOMMallocProblemListRequest&, DescribeFOOMMallocProblemListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFOOMMallocProblemListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFOOMMallocReportListResponse> DescribeFOOMMallocReportListOutcome;
                typedef std::future<DescribeFOOMMallocReportListOutcome> DescribeFOOMMallocReportListOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeFOOMMallocReportListRequest&, DescribeFOOMMallocReportListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFOOMMallocReportListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFOOMProblemDetailResponse> DescribeFOOMProblemDetailOutcome;
                typedef std::future<DescribeFOOMProblemDetailOutcome> DescribeFOOMProblemDetailOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeFOOMProblemDetailRequest&, DescribeFOOMProblemDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFOOMProblemDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFOOMProblemListResponse> DescribeFOOMProblemListOutcome;
                typedef std::future<DescribeFOOMProblemListOutcome> DescribeFOOMProblemListOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeFOOMProblemListRequest&, DescribeFOOMProblemListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFOOMProblemListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFOOMReportListResponse> DescribeFOOMReportListOutcome;
                typedef std::future<DescribeFOOMReportListOutcome> DescribeFOOMReportListOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeFOOMReportListRequest&, DescribeFOOMReportListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFOOMReportListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFieldTransformRulesResponse> DescribeFieldTransformRulesOutcome;
                typedef std::future<DescribeFieldTransformRulesOutcome> DescribeFieldTransformRulesOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeFieldTransformRulesRequest&, DescribeFieldTransformRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFieldTransformRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFieldValuesResponse> DescribeFieldValuesOutcome;
                typedef std::future<DescribeFieldValuesOutcome> DescribeFieldValuesOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeFieldValuesRequest&, DescribeFieldValuesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFieldValuesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFileCertificateResponse> DescribeFileCertificateOutcome;
                typedef std::future<DescribeFileCertificateOutcome> DescribeFileCertificateOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeFileCertificateRequest&, DescribeFileCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFileCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIssueAffectedUsersResponse> DescribeIssueAffectedUsersOutcome;
                typedef std::future<DescribeIssueAffectedUsersOutcome> DescribeIssueAffectedUsersOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeIssueAffectedUsersRequest&, DescribeIssueAffectedUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIssueAffectedUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIssueBreadcrumbsResponse> DescribeIssueBreadcrumbsOutcome;
                typedef std::future<DescribeIssueBreadcrumbsOutcome> DescribeIssueBreadcrumbsOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeIssueBreadcrumbsRequest&, DescribeIssueBreadcrumbsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIssueBreadcrumbsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIssueCrashLogDownloadURLResponse> DescribeIssueCrashLogDownloadURLOutcome;
                typedef std::future<DescribeIssueCrashLogDownloadURLOutcome> DescribeIssueCrashLogDownloadURLOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeIssueCrashLogDownloadURLRequest&, DescribeIssueCrashLogDownloadURLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIssueCrashLogDownloadURLAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIssueDetailResponse> DescribeIssueDetailOutcome;
                typedef std::future<DescribeIssueDetailOutcome> DescribeIssueDetailOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeIssueDetailRequest&, DescribeIssueDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIssueDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIssueEventDetailResponse> DescribeIssueEventDetailOutcome;
                typedef std::future<DescribeIssueEventDetailOutcome> DescribeIssueEventDetailOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeIssueEventDetailRequest&, DescribeIssueEventDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIssueEventDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIssueEventsResponse> DescribeIssueEventsOutcome;
                typedef std::future<DescribeIssueEventsOutcome> DescribeIssueEventsOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeIssueEventsRequest&, DescribeIssueEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIssueEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIssueTrendResponse> DescribeIssueTrendOutcome;
                typedef std::future<DescribeIssueTrendOutcome> DescribeIssueTrendOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeIssueTrendRequest&, DescribeIssueTrendOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIssueTrendAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIssuesResponse> DescribeIssuesOutcome;
                typedef std::future<DescribeIssuesOutcome> DescribeIssuesOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeIssuesRequest&, DescribeIssuesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIssuesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIssuesDistributionResponse> DescribeIssuesDistributionOutcome;
                typedef std::future<DescribeIssuesDistributionOutcome> DescribeIssuesDistributionOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeIssuesDistributionRequest&, DescribeIssuesDistributionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIssuesDistributionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIssuesListResponse> DescribeIssuesListOutcome;
                typedef std::future<DescribeIssuesListOutcome> DescribeIssuesListOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeIssuesListRequest&, DescribeIssuesListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIssuesListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIssuesStatisticsTrendResponse> DescribeIssuesStatisticsTrendOutcome;
                typedef std::future<DescribeIssuesStatisticsTrendOutcome> DescribeIssuesStatisticsTrendOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeIssuesStatisticsTrendRequest&, DescribeIssuesStatisticsTrendOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIssuesStatisticsTrendAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLagANRProblemAccountDetailResponse> DescribeLagANRProblemAccountDetailOutcome;
                typedef std::future<DescribeLagANRProblemAccountDetailOutcome> DescribeLagANRProblemAccountDetailOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeLagANRProblemAccountDetailRequest&, DescribeLagANRProblemAccountDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLagANRProblemAccountDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLagANRProblemFeatureAccountsResponse> DescribeLagANRProblemFeatureAccountsOutcome;
                typedef std::future<DescribeLagANRProblemFeatureAccountsOutcome> DescribeLagANRProblemFeatureAccountsOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeLagANRProblemFeatureAccountsRequest&, DescribeLagANRProblemFeatureAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLagANRProblemFeatureAccountsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLagANRProblemListResponse> DescribeLagANRProblemListOutcome;
                typedef std::future<DescribeLagANRProblemListOutcome> DescribeLagANRProblemListOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeLagANRProblemListRequest&, DescribeLagANRProblemListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLagANRProblemListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMiniProgramReplayPackResponse> DescribeMiniProgramReplayPackOutcome;
                typedef std::future<DescribeMiniProgramReplayPackOutcome> DescribeMiniProgramReplayPackOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeMiniProgramReplayPackRequest&, DescribeMiniProgramReplayPackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMiniProgramReplayPackAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMiniProgramReplayPacksResponse> DescribeMiniProgramReplayPacksOutcome;
                typedef std::future<DescribeMiniProgramReplayPacksOutcome> DescribeMiniProgramReplayPacksOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeMiniProgramReplayPacksRequest&, DescribeMiniProgramReplayPacksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMiniProgramReplayPacksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePerformanceMetricsResponse> DescribePerformanceMetricsOutcome;
                typedef std::future<DescribePerformanceMetricsOutcome> DescribePerformanceMetricsOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribePerformanceMetricsRequest&, DescribePerformanceMetricsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePerformanceMetricsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProjectLimitsResponse> DescribeProjectLimitsOutcome;
                typedef std::future<DescribeProjectLimitsOutcome> DescribeProjectLimitsOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeProjectLimitsRequest&, DescribeProjectLimitsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectLimitsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProjectsResponse> DescribeProjectsOutcome;
                typedef std::future<DescribeProjectsOutcome> DescribeProjectsOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeProjectsRequest&, DescribeProjectsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePvListResponse> DescribePvListOutcome;
                typedef std::future<DescribePvListOutcome> DescribePvListOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribePvListRequest&, DescribePvListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePvListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReleaseFileSignResponse> DescribeReleaseFileSignOutcome;
                typedef std::future<DescribeReleaseFileSignOutcome> DescribeReleaseFileSignOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeReleaseFileSignRequest&, DescribeReleaseFileSignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReleaseFileSignAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReleaseFilesResponse> DescribeReleaseFilesOutcome;
                typedef std::future<DescribeReleaseFilesOutcome> DescribeReleaseFilesOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeReleaseFilesRequest&, DescribeReleaseFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReleaseFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReplayDataResponse> DescribeReplayDataOutcome;
                typedef std::future<DescribeReplayDataOutcome> DescribeReplayDataOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeReplayDataRequest&, DescribeReplayDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReplayDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReplayDetailsResponse> DescribeReplayDetailsOutcome;
                typedef std::future<DescribeReplayDetailsOutcome> DescribeReplayDetailsOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeReplayDetailsRequest&, DescribeReplayDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReplayDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReplayMetaResponse> DescribeReplayMetaOutcome;
                typedef std::future<DescribeReplayMetaOutcome> DescribeReplayMetaOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeReplayMetaRequest&, DescribeReplayMetaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReplayMetaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRumGroupLogResponse> DescribeRumGroupLogOutcome;
                typedef std::future<DescribeRumGroupLogOutcome> DescribeRumGroupLogOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeRumGroupLogRequest&, DescribeRumGroupLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRumGroupLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRumGroupLogV2Response> DescribeRumGroupLogV2Outcome;
                typedef std::future<DescribeRumGroupLogV2Outcome> DescribeRumGroupLogV2OutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeRumGroupLogV2Request&, DescribeRumGroupLogV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRumGroupLogV2AsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRumLogDetailsV2Response> DescribeRumLogDetailsV2Outcome;
                typedef std::future<DescribeRumLogDetailsV2Outcome> DescribeRumLogDetailsV2OutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeRumLogDetailsV2Request&, DescribeRumLogDetailsV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRumLogDetailsV2AsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRumLogExportResponse> DescribeRumLogExportOutcome;
                typedef std::future<DescribeRumLogExportOutcome> DescribeRumLogExportOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeRumLogExportRequest&, DescribeRumLogExportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRumLogExportAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRumLogExportV2Response> DescribeRumLogExportV2Outcome;
                typedef std::future<DescribeRumLogExportV2Outcome> DescribeRumLogExportV2OutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeRumLogExportV2Request&, DescribeRumLogExportV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRumLogExportV2AsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRumLogExportsResponse> DescribeRumLogExportsOutcome;
                typedef std::future<DescribeRumLogExportsOutcome> DescribeRumLogExportsOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeRumLogExportsRequest&, DescribeRumLogExportsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRumLogExportsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRumLogExportsV2Response> DescribeRumLogExportsV2Outcome;
                typedef std::future<DescribeRumLogExportsV2Outcome> DescribeRumLogExportsV2OutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeRumLogExportsV2Request&, DescribeRumLogExportsV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRumLogExportsV2AsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRumLogListResponse> DescribeRumLogListOutcome;
                typedef std::future<DescribeRumLogListOutcome> DescribeRumLogListOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeRumLogListRequest&, DescribeRumLogListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRumLogListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRumLogTotalV2Response> DescribeRumLogTotalV2Outcome;
                typedef std::future<DescribeRumLogTotalV2Outcome> DescribeRumLogTotalV2OutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeRumLogTotalV2Request&, DescribeRumLogTotalV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRumLogTotalV2AsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRumStatsLogListResponse> DescribeRumStatsLogListOutcome;
                typedef std::future<DescribeRumStatsLogListOutcome> DescribeRumStatsLogListOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeRumStatsLogListRequest&, DescribeRumStatsLogListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRumStatsLogListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRumStatsLogListV2Response> DescribeRumStatsLogListV2Outcome;
                typedef std::future<DescribeRumStatsLogListV2Outcome> DescribeRumStatsLogListV2OutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeRumStatsLogListV2Request&, DescribeRumStatsLogListV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRumStatsLogListV2AsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSampleRateResponse> DescribeSampleRateOutcome;
                typedef std::future<DescribeSampleRateOutcome> DescribeSampleRateOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeSampleRateRequest&, DescribeSampleRateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSampleRateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScoresResponse> DescribeScoresOutcome;
                typedef std::future<DescribeScoresOutcome> DescribeScoresOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeScoresRequest&, DescribeScoresOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScoresAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScoresV2Response> DescribeScoresV2Outcome;
                typedef std::future<DescribeScoresV2Outcome> DescribeScoresV2OutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeScoresV2Request&, DescribeScoresV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScoresV2AsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSessionListResponse> DescribeSessionListOutcome;
                typedef std::future<DescribeSessionListOutcome> DescribeSessionListOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeSessionListRequest&, DescribeSessionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSessionListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStruggleDistributionResponse> DescribeStruggleDistributionOutcome;
                typedef std::future<DescribeStruggleDistributionOutcome> DescribeStruggleDistributionOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeStruggleDistributionRequest&, DescribeStruggleDistributionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStruggleDistributionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSymbolArtifactUploadCredentialResponse> DescribeSymbolArtifactUploadCredentialOutcome;
                typedef std::future<DescribeSymbolArtifactUploadCredentialOutcome> DescribeSymbolArtifactUploadCredentialOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeSymbolArtifactUploadCredentialRequest&, DescribeSymbolArtifactUploadCredentialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSymbolArtifactUploadCredentialAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSymbolArtifactsResponse> DescribeSymbolArtifactsOutcome;
                typedef std::future<DescribeSymbolArtifactsOutcome> DescribeSymbolArtifactsOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeSymbolArtifactsRequest&, DescribeSymbolArtifactsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSymbolArtifactsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTDEMApplicationsResponse> DescribeTDEMApplicationsOutcome;
                typedef std::future<DescribeTDEMApplicationsOutcome> DescribeTDEMApplicationsOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeTDEMApplicationsRequest&, DescribeTDEMApplicationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTDEMApplicationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTDEMBusinessSystemsResponse> DescribeTDEMBusinessSystemsOutcome;
                typedef std::future<DescribeTDEMBusinessSystemsOutcome> DescribeTDEMBusinessSystemsOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeTDEMBusinessSystemsRequest&, DescribeTDEMBusinessSystemsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTDEMBusinessSystemsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTDEMDialDimensionsResponse> DescribeTDEMDialDimensionsOutcome;
                typedef std::future<DescribeTDEMDialDimensionsOutcome> DescribeTDEMDialDimensionsOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeTDEMDialDimensionsRequest&, DescribeTDEMDialDimensionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTDEMDialDimensionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTDEMDialExecutionDetailResponse> DescribeTDEMDialExecutionDetailOutcome;
                typedef std::future<DescribeTDEMDialExecutionDetailOutcome> DescribeTDEMDialExecutionDetailOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeTDEMDialExecutionDetailRequest&, DescribeTDEMDialExecutionDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTDEMDialExecutionDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTDEMDialExecutionListResponse> DescribeTDEMDialExecutionListOutcome;
                typedef std::future<DescribeTDEMDialExecutionListOutcome> DescribeTDEMDialExecutionListOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeTDEMDialExecutionListRequest&, DescribeTDEMDialExecutionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTDEMDialExecutionListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTDEMDialOverviewResponse> DescribeTDEMDialOverviewOutcome;
                typedef std::future<DescribeTDEMDialOverviewOutcome> DescribeTDEMDialOverviewOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeTDEMDialOverviewRequest&, DescribeTDEMDialOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTDEMDialOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTDEMDialTasksResponse> DescribeTDEMDialTasksOutcome;
                typedef std::future<DescribeTDEMDialTasksOutcome> DescribeTDEMDialTasksOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeTDEMDialTasksRequest&, DescribeTDEMDialTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTDEMDialTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTDEMDialTrendResponse> DescribeTDEMDialTrendOutcome;
                typedef std::future<DescribeTDEMDialTrendOutcome> DescribeTDEMDialTrendOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeTDEMDialTrendRequest&, DescribeTDEMDialTrendOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTDEMDialTrendAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTDEMEventDetailResponse> DescribeTDEMEventDetailOutcome;
                typedef std::future<DescribeTDEMEventDetailOutcome> DescribeTDEMEventDetailOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeTDEMEventDetailRequest&, DescribeTDEMEventDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTDEMEventDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTDEMEventRankResponse> DescribeTDEMEventRankOutcome;
                typedef std::future<DescribeTDEMEventRankOutcome> DescribeTDEMEventRankOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeTDEMEventRankRequest&, DescribeTDEMEventRankOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTDEMEventRankAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTDEMEventSearchResponse> DescribeTDEMEventSearchOutcome;
                typedef std::future<DescribeTDEMEventSearchOutcome> DescribeTDEMEventSearchOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeTDEMEventSearchRequest&, DescribeTDEMEventSearchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTDEMEventSearchAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTDEMEventSearchSummaryResponse> DescribeTDEMEventSearchSummaryOutcome;
                typedef std::future<DescribeTDEMEventSearchSummaryOutcome> DescribeTDEMEventSearchSummaryOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeTDEMEventSearchSummaryRequest&, DescribeTDEMEventSearchSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTDEMEventSearchSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTDEMFieldTransformRulesResponse> DescribeTDEMFieldTransformRulesOutcome;
                typedef std::future<DescribeTDEMFieldTransformRulesOutcome> DescribeTDEMFieldTransformRulesOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeTDEMFieldTransformRulesRequest&, DescribeTDEMFieldTransformRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTDEMFieldTransformRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTDEMFunnelDetailResponse> DescribeTDEMFunnelDetailOutcome;
                typedef std::future<DescribeTDEMFunnelDetailOutcome> DescribeTDEMFunnelDetailOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeTDEMFunnelDetailRequest&, DescribeTDEMFunnelDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTDEMFunnelDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTDEMFunnelDimensionsResponse> DescribeTDEMFunnelDimensionsOutcome;
                typedef std::future<DescribeTDEMFunnelDimensionsOutcome> DescribeTDEMFunnelDimensionsOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeTDEMFunnelDimensionsRequest&, DescribeTDEMFunnelDimensionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTDEMFunnelDimensionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTDEMFunnelListResponse> DescribeTDEMFunnelListOutcome;
                typedef std::future<DescribeTDEMFunnelListOutcome> DescribeTDEMFunnelListOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeTDEMFunnelListRequest&, DescribeTDEMFunnelListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTDEMFunnelListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTDEMFunnelReportResponse> DescribeTDEMFunnelReportOutcome;
                typedef std::future<DescribeTDEMFunnelReportOutcome> DescribeTDEMFunnelReportOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeTDEMFunnelReportRequest&, DescribeTDEMFunnelReportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTDEMFunnelReportAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTDEMFunnelStepSessionListResponse> DescribeTDEMFunnelStepSessionListOutcome;
                typedef std::future<DescribeTDEMFunnelStepSessionListOutcome> DescribeTDEMFunnelStepSessionListOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeTDEMFunnelStepSessionListRequest&, DescribeTDEMFunnelStepSessionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTDEMFunnelStepSessionListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTDEMFunnelTrendResponse> DescribeTDEMFunnelTrendOutcome;
                typedef std::future<DescribeTDEMFunnelTrendOutcome> DescribeTDEMFunnelTrendOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeTDEMFunnelTrendRequest&, DescribeTDEMFunnelTrendOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTDEMFunnelTrendAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTDEMMetricDistributionResponse> DescribeTDEMMetricDistributionOutcome;
                typedef std::future<DescribeTDEMMetricDistributionOutcome> DescribeTDEMMetricDistributionOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeTDEMMetricDistributionRequest&, DescribeTDEMMetricDistributionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTDEMMetricDistributionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTDEMMetricSummaryResponse> DescribeTDEMMetricSummaryOutcome;
                typedef std::future<DescribeTDEMMetricSummaryOutcome> DescribeTDEMMetricSummaryOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeTDEMMetricSummaryRequest&, DescribeTDEMMetricSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTDEMMetricSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTDEMMetricTrendResponse> DescribeTDEMMetricTrendOutcome;
                typedef std::future<DescribeTDEMMetricTrendOutcome> DescribeTDEMMetricTrendOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeTDEMMetricTrendRequest&, DescribeTDEMMetricTrendOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTDEMMetricTrendAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTDEMOverviewScoresResponse> DescribeTDEMOverviewScoresOutcome;
                typedef std::future<DescribeTDEMOverviewScoresOutcome> DescribeTDEMOverviewScoresOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeTDEMOverviewScoresRequest&, DescribeTDEMOverviewScoresOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTDEMOverviewScoresAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTDEMRelatedEventsResponse> DescribeTDEMRelatedEventsOutcome;
                typedef std::future<DescribeTDEMRelatedEventsOutcome> DescribeTDEMRelatedEventsOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeTDEMRelatedEventsRequest&, DescribeTDEMRelatedEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTDEMRelatedEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTDEMSSEDimensionsResponse> DescribeTDEMSSEDimensionsOutcome;
                typedef std::future<DescribeTDEMSSEDimensionsOutcome> DescribeTDEMSSEDimensionsOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeTDEMSSEDimensionsRequest&, DescribeTDEMSSEDimensionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTDEMSSEDimensionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTDEMSSEDistributionResponse> DescribeTDEMSSEDistributionOutcome;
                typedef std::future<DescribeTDEMSSEDistributionOutcome> DescribeTDEMSSEDistributionOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeTDEMSSEDistributionRequest&, DescribeTDEMSSEDistributionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTDEMSSEDistributionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTDEMSSEPercentileResponse> DescribeTDEMSSEPercentileOutcome;
                typedef std::future<DescribeTDEMSSEPercentileOutcome> DescribeTDEMSSEPercentileOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeTDEMSSEPercentileRequest&, DescribeTDEMSSEPercentileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTDEMSSEPercentileAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTDEMSSESummaryResponse> DescribeTDEMSSESummaryOutcome;
                typedef std::future<DescribeTDEMSSESummaryOutcome> DescribeTDEMSSESummaryOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeTDEMSSESummaryRequest&, DescribeTDEMSSESummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTDEMSSESummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTDEMSSETrendResponse> DescribeTDEMSSETrendOutcome;
                typedef std::future<DescribeTDEMSSETrendOutcome> DescribeTDEMSSETrendOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeTDEMSSETrendRequest&, DescribeTDEMSSETrendOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTDEMSSETrendAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTDEMSampleConfigResponse> DescribeTDEMSampleConfigOutcome;
                typedef std::future<DescribeTDEMSampleConfigOutcome> DescribeTDEMSampleConfigOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeTDEMSampleConfigRequest&, DescribeTDEMSampleConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTDEMSampleConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTDEMSampleRateResponse> DescribeTDEMSampleRateOutcome;
                typedef std::future<DescribeTDEMSampleRateOutcome> DescribeTDEMSampleRateOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeTDEMSampleRateRequest&, DescribeTDEMSampleRateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTDEMSampleRateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTDEMSessionReplayTimelineResponse> DescribeTDEMSessionReplayTimelineOutcome;
                typedef std::future<DescribeTDEMSessionReplayTimelineOutcome> DescribeTDEMSessionReplayTimelineOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeTDEMSessionReplayTimelineRequest&, DescribeTDEMSessionReplayTimelineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTDEMSessionReplayTimelineAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTDEMUsageDetailResponse> DescribeTDEMUsageDetailOutcome;
                typedef std::future<DescribeTDEMUsageDetailOutcome> DescribeTDEMUsageDetailOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeTDEMUsageDetailRequest&, DescribeTDEMUsageDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTDEMUsageDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTDEMUsageSummaryResponse> DescribeTDEMUsageSummaryOutcome;
                typedef std::future<DescribeTDEMUsageSummaryOutcome> DescribeTDEMUsageSummaryOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeTDEMUsageSummaryRequest&, DescribeTDEMUsageSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTDEMUsageSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTawAreasResponse> DescribeTawAreasOutcome;
                typedef std::future<DescribeTawAreasOutcome> DescribeTawAreasOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeTawAreasRequest&, DescribeTawAreasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTawAreasAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTawInstancesResponse> DescribeTawInstancesOutcome;
                typedef std::future<DescribeTawInstancesOutcome> DescribeTawInstancesOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeTawInstancesRequest&, DescribeTawInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTawInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTokenResponse> DescribeTokenOutcome;
                typedef std::future<DescribeTokenOutcome> DescribeTokenOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeTokenRequest&, DescribeTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopIssuesResponse> DescribeTopIssuesOutcome;
                typedef std::future<DescribeTopIssuesOutcome> DescribeTopIssuesOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeTopIssuesRequest&, DescribeTopIssuesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopIssuesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserJourneySanKeyResponse> DescribeUserJourneySanKeyOutcome;
                typedef std::future<DescribeUserJourneySanKeyOutcome> DescribeUserJourneySanKeyOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeUserJourneySanKeyRequest&, DescribeUserJourneySanKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserJourneySanKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUvListResponse> DescribeUvListOutcome;
                typedef std::future<DescribeUvListOutcome> DescribeUvListOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeUvListRequest&, DescribeUvListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUvListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWhitelistsResponse> DescribeWhitelistsOutcome;
                typedef std::future<DescribeWhitelistsOutcome> DescribeWhitelistsOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeWhitelistsRequest&, DescribeWhitelistsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWhitelistsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyFieldTransformRuleResponse> ModifyFieldTransformRuleOutcome;
                typedef std::future<ModifyFieldTransformRuleOutcome> ModifyFieldTransformRuleOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::ModifyFieldTransformRuleRequest&, ModifyFieldTransformRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFieldTransformRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceResponse> ModifyInstanceOutcome;
                typedef std::future<ModifyInstanceOutcome> ModifyInstanceOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::ModifyInstanceRequest&, ModifyInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyIssueStatusResponse> ModifyIssueStatusOutcome;
                typedef std::future<ModifyIssueStatusOutcome> ModifyIssueStatusOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::ModifyIssueStatusRequest&, ModifyIssueStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIssueStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMiniProgramReplayPackResponse> ModifyMiniProgramReplayPackOutcome;
                typedef std::future<ModifyMiniProgramReplayPackOutcome> ModifyMiniProgramReplayPackOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::ModifyMiniProgramReplayPackRequest&, ModifyMiniProgramReplayPackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMiniProgramReplayPackAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyProjectResponse> ModifyProjectOutcome;
                typedef std::future<ModifyProjectOutcome> ModifyProjectOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::ModifyProjectRequest&, ModifyProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyProjectLimitResponse> ModifyProjectLimitOutcome;
                typedef std::future<ModifyProjectLimitOutcome> ModifyProjectLimitOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::ModifyProjectLimitRequest&, ModifyProjectLimitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProjectLimitAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySampleRateResponse> ModifySampleRateOutcome;
                typedef std::future<ModifySampleRateOutcome> ModifySampleRateOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::ModifySampleRateRequest&, ModifySampleRateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySampleRateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTDEMApplicationResponse> ModifyTDEMApplicationOutcome;
                typedef std::future<ModifyTDEMApplicationOutcome> ModifyTDEMApplicationOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::ModifyTDEMApplicationRequest&, ModifyTDEMApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTDEMApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTDEMBusinessSystemResponse> ModifyTDEMBusinessSystemOutcome;
                typedef std::future<ModifyTDEMBusinessSystemOutcome> ModifyTDEMBusinessSystemOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::ModifyTDEMBusinessSystemRequest&, ModifyTDEMBusinessSystemOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTDEMBusinessSystemAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTDEMDialTaskResponse> ModifyTDEMDialTaskOutcome;
                typedef std::future<ModifyTDEMDialTaskOutcome> ModifyTDEMDialTaskOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::ModifyTDEMDialTaskRequest&, ModifyTDEMDialTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTDEMDialTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTDEMFieldTransformRuleResponse> ModifyTDEMFieldTransformRuleOutcome;
                typedef std::future<ModifyTDEMFieldTransformRuleOutcome> ModifyTDEMFieldTransformRuleOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::ModifyTDEMFieldTransformRuleRequest&, ModifyTDEMFieldTransformRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTDEMFieldTransformRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTDEMFunnelResponse> ModifyTDEMFunnelOutcome;
                typedef std::future<ModifyTDEMFunnelOutcome> ModifyTDEMFunnelOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::ModifyTDEMFunnelRequest&, ModifyTDEMFunnelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTDEMFunnelAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTDEMSampleConfigResponse> ModifyTDEMSampleConfigOutcome;
                typedef std::future<ModifyTDEMSampleConfigOutcome> ModifyTDEMSampleConfigOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::ModifyTDEMSampleConfigRequest&, ModifyTDEMSampleConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTDEMSampleConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTDEMSampleRateResponse> ModifyTDEMSampleRateOutcome;
                typedef std::future<ModifyTDEMSampleRateOutcome> ModifyTDEMSampleRateOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::ModifyTDEMSampleRateRequest&, ModifyTDEMSampleRateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTDEMSampleRateAsyncHandler;
                typedef Outcome<Core::Error, Model::PreviewTDEMFunnelReportResponse> PreviewTDEMFunnelReportOutcome;
                typedef std::future<PreviewTDEMFunnelReportOutcome> PreviewTDEMFunnelReportOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::PreviewTDEMFunnelReportRequest&, PreviewTDEMFunnelReportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PreviewTDEMFunnelReportAsyncHandler;
                typedef Outcome<Core::Error, Model::ResumeInstanceResponse> ResumeInstanceOutcome;
                typedef std::future<ResumeInstanceOutcome> ResumeInstanceOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::ResumeInstanceRequest&, ResumeInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResumeInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ResumeProjectResponse> ResumeProjectOutcome;
                typedef std::future<ResumeProjectOutcome> ResumeProjectOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::ResumeProjectRequest&, ResumeProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResumeProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::ResumeTDEMApplicationResponse> ResumeTDEMApplicationOutcome;
                typedef std::future<ResumeTDEMApplicationOutcome> ResumeTDEMApplicationOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::ResumeTDEMApplicationRequest&, ResumeTDEMApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResumeTDEMApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::StopInstanceResponse> StopInstanceOutcome;
                typedef std::future<StopInstanceOutcome> StopInstanceOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::StopInstanceRequest&, StopInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::StopProjectResponse> StopProjectOutcome;
                typedef std::future<StopProjectOutcome> StopProjectOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::StopProjectRequest&, StopProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::StopTDEMApplicationResponse> StopTDEMApplicationOutcome;
                typedef std::future<StopTDEMApplicationOutcome> StopTDEMApplicationOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::StopTDEMApplicationRequest&, StopTDEMApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopTDEMApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadMiniProgramSourceResponse> UploadMiniProgramSourceOutcome;
                typedef std::future<UploadMiniProgramSourceOutcome> UploadMiniProgramSourceOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::UploadMiniProgramSourceRequest&, UploadMiniProgramSourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadMiniProgramSourceAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadSymbolArtifactResponse> UploadSymbolArtifactOutcome;
                typedef std::future<UploadSymbolArtifactOutcome> UploadSymbolArtifactOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::UploadSymbolArtifactRequest&, UploadSymbolArtifactOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadSymbolArtifactAsyncHandler;



                /**
                 *创建字段配置规则
                 * @param req CreateFieldTransformRuleRequest
                 * @return CreateFieldTransformRuleOutcome
                 */
                CreateFieldTransformRuleOutcome CreateFieldTransformRule(const Model::CreateFieldTransformRuleRequest &request);
                void CreateFieldTransformRuleAsync(const Model::CreateFieldTransformRuleRequest& request, const CreateFieldTransformRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFieldTransformRuleOutcomeCallable CreateFieldTransformRuleCallable(const Model::CreateFieldTransformRuleRequest& request);

                /**
                 *创建对应项目的文件记录
                 * @param req CreateReleaseFileRequest
                 * @return CreateReleaseFileOutcome
                 */
                CreateReleaseFileOutcome CreateReleaseFile(const Model::CreateReleaseFileRequest &request);
                void CreateReleaseFileAsync(const Model::CreateReleaseFileRequest& request, const CreateReleaseFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateReleaseFileOutcomeCallable CreateReleaseFileCallable(const Model::CreateReleaseFileRequest& request);

                /**
                 *个人用户添加星标项目
                 * @param req CreateStarProjectRequest
                 * @return CreateStarProjectOutcome
                 */
                CreateStarProjectOutcome CreateStarProject(const Model::CreateStarProjectRequest &request);
                void CreateStarProjectAsync(const Model::CreateStarProjectRequest& request, const CreateStarProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStarProjectOutcomeCallable CreateStarProjectCallable(const Model::CreateStarProjectRequest& request);

                /**
                 *在指定业务系统下创建应用。
                 * @param req CreateTDEMApplicationRequest
                 * @return CreateTDEMApplicationOutcome
                 */
                CreateTDEMApplicationOutcome CreateTDEMApplication(const Model::CreateTDEMApplicationRequest &request);
                void CreateTDEMApplicationAsync(const Model::CreateTDEMApplicationRequest& request, const CreateTDEMApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTDEMApplicationOutcomeCallable CreateTDEMApplicationCallable(const Model::CreateTDEMApplicationRequest& request);

                /**
                 *创建业务系统。InstanceId 由后端生成，格式 rum-<12 位随机字母数字>。重名返回 InvalidParameterValue。
                 * @param req CreateTDEMBusinessSystemRequest
                 * @return CreateTDEMBusinessSystemOutcome
                 */
                CreateTDEMBusinessSystemOutcome CreateTDEMBusinessSystem(const Model::CreateTDEMBusinessSystemRequest &request);
                void CreateTDEMBusinessSystemAsync(const Model::CreateTDEMBusinessSystemRequest& request, const CreateTDEMBusinessSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTDEMBusinessSystemOutcomeCallable CreateTDEMBusinessSystemCallable(const Model::CreateTDEMBusinessSystemRequest& request);

                /**
                 *创建一条移动拨测任务。同一应用处于 active 的任务最多 50 条。四项启动范围都为空时不限制启动；填写多项时必须同时满足，同一项多个值命中任意一个即可。
                 * @param req CreateTDEMDialTaskRequest
                 * @return CreateTDEMDialTaskOutcome
                 */
                CreateTDEMDialTaskOutcome CreateTDEMDialTask(const Model::CreateTDEMDialTaskRequest &request);
                void CreateTDEMDialTaskAsync(const Model::CreateTDEMDialTaskRequest& request, const CreateTDEMDialTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTDEMDialTaskOutcomeCallable CreateTDEMDialTaskCallable(const Model::CreateTDEMDialTaskRequest& request);

                /**
                 *为应用创建字段值替换规则，单应用上限 50 条。替代已废弃的 CreateFieldTransformRule；AppId 为 string。
                 * @param req CreateTDEMFieldTransformRuleRequest
                 * @return CreateTDEMFieldTransformRuleOutcome
                 */
                CreateTDEMFieldTransformRuleOutcome CreateTDEMFieldTransformRule(const Model::CreateTDEMFieldTransformRuleRequest &request);
                void CreateTDEMFieldTransformRuleAsync(const Model::CreateTDEMFieldTransformRuleRequest& request, const CreateTDEMFieldTransformRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTDEMFieldTransformRuleOutcomeCallable CreateTDEMFieldTransformRuleCallable(const Model::CreateTDEMFieldTransformRuleRequest& request);

                /**
                 *创建漏斗
                 * @param req CreateTDEMFunnelRequest
                 * @return CreateTDEMFunnelOutcome
                 */
                CreateTDEMFunnelOutcome CreateTDEMFunnel(const Model::CreateTDEMFunnelRequest &request);
                void CreateTDEMFunnelAsync(const Model::CreateTDEMFunnelRequest& request, const CreateTDEMFunnelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTDEMFunnelOutcomeCallable CreateTDEMFunnelCallable(const Model::CreateTDEMFunnelRequest& request);

                /**
                 *创建白名单
                 * @param req CreateWhitelistRequest
                 * @return CreateWhitelistOutcome
                 */
                CreateWhitelistOutcome CreateWhitelist(const Model::CreateWhitelistRequest &request);
                void CreateWhitelistAsync(const Model::CreateWhitelistRequest& request, const CreateWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWhitelistOutcomeCallable CreateWhitelistCallable(const Model::CreateWhitelistRequest& request);

                /**
                 *删除字段配置规则
                 * @param req DeleteFieldTransformRuleRequest
                 * @return DeleteFieldTransformRuleOutcome
                 */
                DeleteFieldTransformRuleOutcome DeleteFieldTransformRule(const Model::DeleteFieldTransformRuleRequest &request);
                void DeleteFieldTransformRuleAsync(const Model::DeleteFieldTransformRuleRequest& request, const DeleteFieldTransformRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteFieldTransformRuleOutcomeCallable DeleteFieldTransformRuleCallable(const Model::DeleteFieldTransformRuleRequest& request);

                /**
                 *删除实例，谨慎操作，不可恢复
                 * @param req DeleteInstanceRequest
                 * @return DeleteInstanceOutcome
                 */
                DeleteInstanceOutcome DeleteInstance(const Model::DeleteInstanceRequest &request);
                void DeleteInstanceAsync(const Model::DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteInstanceOutcomeCallable DeleteInstanceCallable(const Model::DeleteInstanceRequest& request);

                /**
                 *删除回放包元数据，并尽力删除COS上回放包与源码zip。不存在返回ResourceNotFound。
                 * @param req DeleteMiniProgramReplayPackRequest
                 * @return DeleteMiniProgramReplayPackOutcome
                 */
                DeleteMiniProgramReplayPackOutcome DeleteMiniProgramReplayPack(const Model::DeleteMiniProgramReplayPackRequest &request);
                void DeleteMiniProgramReplayPackAsync(const Model::DeleteMiniProgramReplayPackRequest& request, const DeleteMiniProgramReplayPackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMiniProgramReplayPackOutcomeCallable DeleteMiniProgramReplayPackCallable(const Model::DeleteMiniProgramReplayPackRequest& request);

                /**
                 *删除给定的 rum 的项目
                 * @param req DeleteProjectRequest
                 * @return DeleteProjectOutcome
                 */
                DeleteProjectOutcome DeleteProject(const Model::DeleteProjectRequest &request);
                void DeleteProjectAsync(const Model::DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteProjectOutcomeCallable DeleteProjectCallable(const Model::DeleteProjectRequest& request);

                /**
                 *将对应 sourcemap 文件删除
                 * @param req DeleteReleaseFileRequest
                 * @return DeleteReleaseFileOutcome
                 */
                DeleteReleaseFileOutcome DeleteReleaseFile(const Model::DeleteReleaseFileRequest &request);
                void DeleteReleaseFileAsync(const Model::DeleteReleaseFileRequest& request, const DeleteReleaseFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteReleaseFileOutcomeCallable DeleteReleaseFileCallable(const Model::DeleteReleaseFileRequest& request);

                /**
                 *删除用户名下的星标项目
                 * @param req DeleteStarProjectRequest
                 * @return DeleteStarProjectOutcome
                 */
                DeleteStarProjectOutcome DeleteStarProject(const Model::DeleteStarProjectRequest &request);
                void DeleteStarProjectAsync(const Model::DeleteStarProjectRequest& request, const DeleteStarProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteStarProjectOutcomeCallable DeleteStarProjectCallable(const Model::DeleteStarProjectRequest& request);

                /**
                 *删除指定的符号制品。
                 * @param req DeleteSymbolArtifactRequest
                 * @return DeleteSymbolArtifactOutcome
                 */
                DeleteSymbolArtifactOutcome DeleteSymbolArtifact(const Model::DeleteSymbolArtifactRequest &request);
                void DeleteSymbolArtifactAsync(const Model::DeleteSymbolArtifactRequest& request, const DeleteSymbolArtifactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSymbolArtifactOutcomeCallable DeleteSymbolArtifactCallable(const Model::DeleteSymbolArtifactRequest& request);

                /**
                 *逻辑删除应用，ProjectKey 即刻失效。
                 * @param req DeleteTDEMApplicationRequest
                 * @return DeleteTDEMApplicationOutcome
                 */
                DeleteTDEMApplicationOutcome DeleteTDEMApplication(const Model::DeleteTDEMApplicationRequest &request);
                void DeleteTDEMApplicationAsync(const Model::DeleteTDEMApplicationRequest& request, const DeleteTDEMApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTDEMApplicationOutcomeCallable DeleteTDEMApplicationCallable(const Model::DeleteTDEMApplicationRequest& request);

                /**
                 *删除业务系统。名下存在未删除应用时返回 ResourceInUse。
                 * @param req DeleteTDEMBusinessSystemRequest
                 * @return DeleteTDEMBusinessSystemOutcome
                 */
                DeleteTDEMBusinessSystemOutcome DeleteTDEMBusinessSystem(const Model::DeleteTDEMBusinessSystemRequest &request);
                void DeleteTDEMBusinessSystemAsync(const Model::DeleteTDEMBusinessSystemRequest& request, const DeleteTDEMBusinessSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTDEMBusinessSystemOutcomeCallable DeleteTDEMBusinessSystemCallable(const Model::DeleteTDEMBusinessSystemRequest& request);

                /**
                 *将拨测任务标记为已删除。已删除的任务再次删除视为成功。不物理删除任务行，也不删除历史拨测结果。
                 * @param req DeleteTDEMDialTaskRequest
                 * @return DeleteTDEMDialTaskOutcome
                 */
                DeleteTDEMDialTaskOutcome DeleteTDEMDialTask(const Model::DeleteTDEMDialTaskRequest &request);
                void DeleteTDEMDialTaskAsync(const Model::DeleteTDEMDialTaskRequest& request, const DeleteTDEMDialTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTDEMDialTaskOutcomeCallable DeleteTDEMDialTaskCallable(const Model::DeleteTDEMDialTaskRequest& request);

                /**
                 *按规则 Id 删除字段值替换规则。替代已废弃的 DeleteFieldTransformRule；AppId 为 string。
                 * @param req DeleteTDEMFieldTransformRuleRequest
                 * @return DeleteTDEMFieldTransformRuleOutcome
                 */
                DeleteTDEMFieldTransformRuleOutcome DeleteTDEMFieldTransformRule(const Model::DeleteTDEMFieldTransformRuleRequest &request);
                void DeleteTDEMFieldTransformRuleAsync(const Model::DeleteTDEMFieldTransformRuleRequest& request, const DeleteTDEMFieldTransformRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTDEMFieldTransformRuleOutcomeCallable DeleteTDEMFieldTransformRuleCallable(const Model::DeleteTDEMFieldTransformRuleRequest& request);

                /**
                 *删除漏斗
                 * @param req DeleteTDEMFunnelRequest
                 * @return DeleteTDEMFunnelOutcome
                 */
                DeleteTDEMFunnelOutcome DeleteTDEMFunnel(const Model::DeleteTDEMFunnelRequest &request);
                void DeleteTDEMFunnelAsync(const Model::DeleteTDEMFunnelRequest& request, const DeleteTDEMFunnelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTDEMFunnelOutcomeCallable DeleteTDEMFunnelCallable(const Model::DeleteTDEMFunnelRequest& request);

                /**
                 *删除白名单
                 * @param req DeleteWhitelistRequest
                 * @return DeleteWhitelistOutcome
                 */
                DeleteWhitelistOutcome DeleteWhitelist(const Model::DeleteWhitelistRequest &request);
                void DeleteWhitelistAsync(const Model::DeleteWhitelistRequest& request, const DeleteWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWhitelistOutcomeCallable DeleteWhitelistCallable(const Model::DeleteWhitelistRequest& request);

                /**
                 *用于查询 app 监控多维分析数据
                 * @param req DescribeAppDimensionMetricsRequest
                 * @return DescribeAppDimensionMetricsOutcome
                 */
                DescribeAppDimensionMetricsOutcome DescribeAppDimensionMetrics(const Model::DescribeAppDimensionMetricsRequest &request);
                void DescribeAppDimensionMetricsAsync(const Model::DescribeAppDimensionMetricsRequest& request, const DescribeAppDimensionMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAppDimensionMetricsOutcomeCallable DescribeAppDimensionMetricsCallable(const Model::DescribeAppDimensionMetricsRequest& request);

                /**
                 *获取 app 监控指标数据
                 * @param req DescribeAppMetricsDataRequest
                 * @return DescribeAppMetricsDataOutcome
                 */
                DescribeAppMetricsDataOutcome DescribeAppMetricsData(const Model::DescribeAppMetricsDataRequest &request);
                void DescribeAppMetricsDataAsync(const Model::DescribeAppMetricsDataRequest& request, const DescribeAppMetricsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAppMetricsDataOutcomeCallable DescribeAppMetricsDataCallable(const Model::DescribeAppMetricsDataRequest& request);

                /**
                 *查询 app 监控个例样本详情列表
                 * @param req DescribeAppSingleCaseDetailListRequest
                 * @return DescribeAppSingleCaseDetailListOutcome
                 */
                DescribeAppSingleCaseDetailListOutcome DescribeAppSingleCaseDetailList(const Model::DescribeAppSingleCaseDetailListRequest &request);
                void DescribeAppSingleCaseDetailListAsync(const Model::DescribeAppSingleCaseDetailListRequest& request, const DescribeAppSingleCaseDetailListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAppSingleCaseDetailListOutcomeCallable DescribeAppSingleCaseDetailListCallable(const Model::DescribeAppSingleCaseDetailListRequest& request);

                /**
                 *查询 app 监控个例聚合列表
                 * @param req DescribeAppSingleCaseListRequest
                 * @return DescribeAppSingleCaseListOutcome
                 */
                DescribeAppSingleCaseListOutcome DescribeAppSingleCaseList(const Model::DescribeAppSingleCaseListRequest &request);
                void DescribeAppSingleCaseListAsync(const Model::DescribeAppSingleCaseListRequest& request, const DescribeAppSingleCaseListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAppSingleCaseListOutcomeCallable DescribeAppSingleCaseListCallable(const Model::DescribeAppSingleCaseListRequest& request);

                /**
                 *获取应用退出个例上报详情
                 * @param req DescribeApplicationExitReportDetailRequest
                 * @return DescribeApplicationExitReportDetailOutcome
                 */
                DescribeApplicationExitReportDetailOutcome DescribeApplicationExitReportDetail(const Model::DescribeApplicationExitReportDetailRequest &request);
                void DescribeApplicationExitReportDetailAsync(const Model::DescribeApplicationExitReportDetailRequest& request, const DescribeApplicationExitReportDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationExitReportDetailOutcomeCallable DescribeApplicationExitReportDetailCallable(const Model::DescribeApplicationExitReportDetailRequest& request);

                /**
                 *获取应用退出个例上报列表
                 * @param req DescribeApplicationExitReportListRequest
                 * @return DescribeApplicationExitReportListOutcome
                 */
                DescribeApplicationExitReportListOutcome DescribeApplicationExitReportList(const Model::DescribeApplicationExitReportListRequest &request);
                void DescribeApplicationExitReportListAsync(const Model::DescribeApplicationExitReportListRequest& request, const DescribeApplicationExitReportListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationExitReportListOutcomeCallable DescribeApplicationExitReportListCallable(const Model::DescribeApplicationExitReportListRequest& request);

                /**
                 *转发monitor查询
                 * @param req DescribeDataRequest
                 * @return DescribeDataOutcome
                 */
                DescribeDataOutcome DescribeData(const Model::DescribeDataRequest &request);
                void DescribeDataAsync(const Model::DescribeDataRequest& request, const DescribeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataOutcomeCallable DescribeDataCallable(const Model::DescribeDataRequest& request);

                /**
                 *获取DescribeDataBridgeUrl信息
                 * @param req DescribeDataBridgeUrlV2Request
                 * @return DescribeDataBridgeUrlV2Outcome
                 */
                DescribeDataBridgeUrlV2Outcome DescribeDataBridgeUrlV2(const Model::DescribeDataBridgeUrlV2Request &request);
                void DescribeDataBridgeUrlV2Async(const Model::DescribeDataBridgeUrlV2Request& request, const DescribeDataBridgeUrlV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataBridgeUrlV2OutcomeCallable DescribeDataBridgeUrlV2Callable(const Model::DescribeDataBridgeUrlV2Request& request);

                /**
                 *获取DescribeDataCustomUrl信息
                 * @param req DescribeDataCustomUrlRequest
                 * @return DescribeDataCustomUrlOutcome
                 */
                DescribeDataCustomUrlOutcome DescribeDataCustomUrl(const Model::DescribeDataCustomUrlRequest &request);
                void DescribeDataCustomUrlAsync(const Model::DescribeDataCustomUrlRequest& request, const DescribeDataCustomUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataCustomUrlOutcomeCallable DescribeDataCustomUrlCallable(const Model::DescribeDataCustomUrlRequest& request);

                /**
                 *获取DescribeDataCustomUrl信息
                 * @param req DescribeDataCustomUrlV2Request
                 * @return DescribeDataCustomUrlV2Outcome
                 */
                DescribeDataCustomUrlV2Outcome DescribeDataCustomUrlV2(const Model::DescribeDataCustomUrlV2Request &request);
                void DescribeDataCustomUrlV2Async(const Model::DescribeDataCustomUrlV2Request& request, const DescribeDataCustomUrlV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataCustomUrlV2OutcomeCallable DescribeDataCustomUrlV2Callable(const Model::DescribeDataCustomUrlV2Request& request);

                /**
                 *获取DescribeDataEventUrl信息
                 * @param req DescribeDataEventUrlRequest
                 * @return DescribeDataEventUrlOutcome
                 */
                DescribeDataEventUrlOutcome DescribeDataEventUrl(const Model::DescribeDataEventUrlRequest &request);
                void DescribeDataEventUrlAsync(const Model::DescribeDataEventUrlRequest& request, const DescribeDataEventUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataEventUrlOutcomeCallable DescribeDataEventUrlCallable(const Model::DescribeDataEventUrlRequest& request);

                /**
                 *获取DescribeDataEventUrl信息
                 * @param req DescribeDataEventUrlV2Request
                 * @return DescribeDataEventUrlV2Outcome
                 */
                DescribeDataEventUrlV2Outcome DescribeDataEventUrlV2(const Model::DescribeDataEventUrlV2Request &request);
                void DescribeDataEventUrlV2Async(const Model::DescribeDataEventUrlV2Request& request, const DescribeDataEventUrlV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataEventUrlV2OutcomeCallable DescribeDataEventUrlV2Callable(const Model::DescribeDataEventUrlV2Request& request);

                /**
                 *获取DescribeDataFetchProject信息。已下线，请使用DescribeDataFetchUrl
                 * @param req DescribeDataFetchProjectRequest
                 * @return DescribeDataFetchProjectOutcome
                 */
                DescribeDataFetchProjectOutcome DescribeDataFetchProject(const Model::DescribeDataFetchProjectRequest &request);
                void DescribeDataFetchProjectAsync(const Model::DescribeDataFetchProjectRequest& request, const DescribeDataFetchProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataFetchProjectOutcomeCallable DescribeDataFetchProjectCallable(const Model::DescribeDataFetchProjectRequest& request);

                /**
                 *获取DescribeDataFetchUrl信息
                 * @param req DescribeDataFetchUrlRequest
                 * @return DescribeDataFetchUrlOutcome
                 */
                DescribeDataFetchUrlOutcome DescribeDataFetchUrl(const Model::DescribeDataFetchUrlRequest &request);
                void DescribeDataFetchUrlAsync(const Model::DescribeDataFetchUrlRequest& request, const DescribeDataFetchUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataFetchUrlOutcomeCallable DescribeDataFetchUrlCallable(const Model::DescribeDataFetchUrlRequest& request);

                /**
                 *获取DescribeDataFetchUrlInfo信息
                 * @param req DescribeDataFetchUrlInfoRequest
                 * @return DescribeDataFetchUrlInfoOutcome
                 */
                DescribeDataFetchUrlInfoOutcome DescribeDataFetchUrlInfo(const Model::DescribeDataFetchUrlInfoRequest &request);
                void DescribeDataFetchUrlInfoAsync(const Model::DescribeDataFetchUrlInfoRequest& request, const DescribeDataFetchUrlInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataFetchUrlInfoOutcomeCallable DescribeDataFetchUrlInfoCallable(const Model::DescribeDataFetchUrlInfoRequest& request);

                /**
                 *获取DescribeDataFetchUrl信息
                 * @param req DescribeDataFetchUrlV2Request
                 * @return DescribeDataFetchUrlV2Outcome
                 */
                DescribeDataFetchUrlV2Outcome DescribeDataFetchUrlV2(const Model::DescribeDataFetchUrlV2Request &request);
                void DescribeDataFetchUrlV2Async(const Model::DescribeDataFetchUrlV2Request& request, const DescribeDataFetchUrlV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataFetchUrlV2OutcomeCallable DescribeDataFetchUrlV2Callable(const Model::DescribeDataFetchUrlV2Request& request);

                /**
                 *获取loginfo信息
                 * @param req DescribeDataLogUrlInfoRequest
                 * @return DescribeDataLogUrlInfoOutcome
                 */
                DescribeDataLogUrlInfoOutcome DescribeDataLogUrlInfo(const Model::DescribeDataLogUrlInfoRequest &request);
                void DescribeDataLogUrlInfoAsync(const Model::DescribeDataLogUrlInfoRequest& request, const DescribeDataLogUrlInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataLogUrlInfoOutcomeCallable DescribeDataLogUrlInfoCallable(const Model::DescribeDataLogUrlInfoRequest& request);

                /**
                 *获取LogUrlStatistics信息
                 * @param req DescribeDataLogUrlStatisticsRequest
                 * @return DescribeDataLogUrlStatisticsOutcome
                 */
                DescribeDataLogUrlStatisticsOutcome DescribeDataLogUrlStatistics(const Model::DescribeDataLogUrlStatisticsRequest &request);
                void DescribeDataLogUrlStatisticsAsync(const Model::DescribeDataLogUrlStatisticsRequest& request, const DescribeDataLogUrlStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataLogUrlStatisticsOutcomeCallable DescribeDataLogUrlStatisticsCallable(const Model::DescribeDataLogUrlStatisticsRequest& request);

                /**
                 *获取LogUrlStatistics信息
                 * @param req DescribeDataLogUrlStatisticsV2Request
                 * @return DescribeDataLogUrlStatisticsV2Outcome
                 */
                DescribeDataLogUrlStatisticsV2Outcome DescribeDataLogUrlStatisticsV2(const Model::DescribeDataLogUrlStatisticsV2Request &request);
                void DescribeDataLogUrlStatisticsV2Async(const Model::DescribeDataLogUrlStatisticsV2Request& request, const DescribeDataLogUrlStatisticsV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataLogUrlStatisticsV2OutcomeCallable DescribeDataLogUrlStatisticsV2Callable(const Model::DescribeDataLogUrlStatisticsV2Request& request);

                /**
                 *获取PerformancePage信息
                 * @param req DescribeDataPerformancePageRequest
                 * @return DescribeDataPerformancePageOutcome
                 */
                DescribeDataPerformancePageOutcome DescribeDataPerformancePage(const Model::DescribeDataPerformancePageRequest &request);
                void DescribeDataPerformancePageAsync(const Model::DescribeDataPerformancePageRequest& request, const DescribeDataPerformancePageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataPerformancePageOutcomeCallable DescribeDataPerformancePageCallable(const Model::DescribeDataPerformancePageRequest& request);

                /**
                 *获取PerformancePage信息
                 * @param req DescribeDataPerformancePageV2Request
                 * @return DescribeDataPerformancePageV2Outcome
                 */
                DescribeDataPerformancePageV2Outcome DescribeDataPerformancePageV2(const Model::DescribeDataPerformancePageV2Request &request);
                void DescribeDataPerformancePageV2Async(const Model::DescribeDataPerformancePageV2Request& request, const DescribeDataPerformancePageV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataPerformancePageV2OutcomeCallable DescribeDataPerformancePageV2Callable(const Model::DescribeDataPerformancePageV2Request& request);

                /**
                 *获取PvUrlInfo信息
                 * @param req DescribeDataPvUrlInfoRequest
                 * @return DescribeDataPvUrlInfoOutcome
                 */
                DescribeDataPvUrlInfoOutcome DescribeDataPvUrlInfo(const Model::DescribeDataPvUrlInfoRequest &request);
                void DescribeDataPvUrlInfoAsync(const Model::DescribeDataPvUrlInfoRequest& request, const DescribeDataPvUrlInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataPvUrlInfoOutcomeCallable DescribeDataPvUrlInfoCallable(const Model::DescribeDataPvUrlInfoRequest& request);

                /**
                 *获取DescribeDataPvUrlStatistics信息
                 * @param req DescribeDataPvUrlStatisticsRequest
                 * @return DescribeDataPvUrlStatisticsOutcome
                 */
                DescribeDataPvUrlStatisticsOutcome DescribeDataPvUrlStatistics(const Model::DescribeDataPvUrlStatisticsRequest &request);
                void DescribeDataPvUrlStatisticsAsync(const Model::DescribeDataPvUrlStatisticsRequest& request, const DescribeDataPvUrlStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataPvUrlStatisticsOutcomeCallable DescribeDataPvUrlStatisticsCallable(const Model::DescribeDataPvUrlStatisticsRequest& request);

                /**
                 *获取DescribeDataPvUrlStatistics信息
                 * @param req DescribeDataPvUrlStatisticsV2Request
                 * @return DescribeDataPvUrlStatisticsV2Outcome
                 */
                DescribeDataPvUrlStatisticsV2Outcome DescribeDataPvUrlStatisticsV2(const Model::DescribeDataPvUrlStatisticsV2Request &request);
                void DescribeDataPvUrlStatisticsV2Async(const Model::DescribeDataPvUrlStatisticsV2Request& request, const DescribeDataPvUrlStatisticsV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataPvUrlStatisticsV2OutcomeCallable DescribeDataPvUrlStatisticsV2Callable(const Model::DescribeDataPvUrlStatisticsV2Request& request);

                /**
                 *获取项目上报量
                 * @param req DescribeDataReportCountRequest
                 * @return DescribeDataReportCountOutcome
                 */
                DescribeDataReportCountOutcome DescribeDataReportCount(const Model::DescribeDataReportCountRequest &request);
                void DescribeDataReportCountAsync(const Model::DescribeDataReportCountRequest& request, const DescribeDataReportCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataReportCountOutcomeCallable DescribeDataReportCountCallable(const Model::DescribeDataReportCountRequest& request);

                /**
                 *获取项目上报量
                 * @param req DescribeDataReportCountV2Request
                 * @return DescribeDataReportCountV2Outcome
                 */
                DescribeDataReportCountV2Outcome DescribeDataReportCountV2(const Model::DescribeDataReportCountV2Request &request);
                void DescribeDataReportCountV2Async(const Model::DescribeDataReportCountV2Request& request, const DescribeDataReportCountV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataReportCountV2OutcomeCallable DescribeDataReportCountV2Callable(const Model::DescribeDataReportCountV2Request& request);

                /**
                 *获取DescribeDataSetUrlStatistics信息
                 * @param req DescribeDataSetUrlStatisticsRequest
                 * @return DescribeDataSetUrlStatisticsOutcome
                 */
                DescribeDataSetUrlStatisticsOutcome DescribeDataSetUrlStatistics(const Model::DescribeDataSetUrlStatisticsRequest &request);
                void DescribeDataSetUrlStatisticsAsync(const Model::DescribeDataSetUrlStatisticsRequest& request, const DescribeDataSetUrlStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataSetUrlStatisticsOutcomeCallable DescribeDataSetUrlStatisticsCallable(const Model::DescribeDataSetUrlStatisticsRequest& request);

                /**
                 *获取DescribeDataSetUrlStatistics信息
                 * @param req DescribeDataSetUrlStatisticsV2Request
                 * @return DescribeDataSetUrlStatisticsV2Outcome
                 */
                DescribeDataSetUrlStatisticsV2Outcome DescribeDataSetUrlStatisticsV2(const Model::DescribeDataSetUrlStatisticsV2Request &request);
                void DescribeDataSetUrlStatisticsV2Async(const Model::DescribeDataSetUrlStatisticsV2Request& request, const DescribeDataSetUrlStatisticsV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataSetUrlStatisticsV2OutcomeCallable DescribeDataSetUrlStatisticsV2Callable(const Model::DescribeDataSetUrlStatisticsV2Request& request);

                /**
                 *获取DescribeDataStaticProject信息
                 * @param req DescribeDataStaticProjectRequest
                 * @return DescribeDataStaticProjectOutcome
                 */
                DescribeDataStaticProjectOutcome DescribeDataStaticProject(const Model::DescribeDataStaticProjectRequest &request);
                void DescribeDataStaticProjectAsync(const Model::DescribeDataStaticProjectRequest& request, const DescribeDataStaticProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataStaticProjectOutcomeCallable DescribeDataStaticProjectCallable(const Model::DescribeDataStaticProjectRequest& request);

                /**
                 *获取DescribeDataStaticProject信息
                 * @param req DescribeDataStaticProjectV2Request
                 * @return DescribeDataStaticProjectV2Outcome
                 */
                DescribeDataStaticProjectV2Outcome DescribeDataStaticProjectV2(const Model::DescribeDataStaticProjectV2Request &request);
                void DescribeDataStaticProjectV2Async(const Model::DescribeDataStaticProjectV2Request& request, const DescribeDataStaticProjectV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataStaticProjectV2OutcomeCallable DescribeDataStaticProjectV2Callable(const Model::DescribeDataStaticProjectV2Request& request);

                /**
                 *获取DescribeDataStaticResource信息
                 * @param req DescribeDataStaticResourceRequest
                 * @return DescribeDataStaticResourceOutcome
                 */
                DescribeDataStaticResourceOutcome DescribeDataStaticResource(const Model::DescribeDataStaticResourceRequest &request);
                void DescribeDataStaticResourceAsync(const Model::DescribeDataStaticResourceRequest& request, const DescribeDataStaticResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataStaticResourceOutcomeCallable DescribeDataStaticResourceCallable(const Model::DescribeDataStaticResourceRequest& request);

                /**
                 *获取DescribeDataStaticResource信息
                 * @param req DescribeDataStaticResourceV2Request
                 * @return DescribeDataStaticResourceV2Outcome
                 */
                DescribeDataStaticResourceV2Outcome DescribeDataStaticResourceV2(const Model::DescribeDataStaticResourceV2Request &request);
                void DescribeDataStaticResourceV2Async(const Model::DescribeDataStaticResourceV2Request& request, const DescribeDataStaticResourceV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataStaticResourceV2OutcomeCallable DescribeDataStaticResourceV2Callable(const Model::DescribeDataStaticResourceV2Request& request);

                /**
                 *获取DescribeDataStaticUrl信息
                 * @param req DescribeDataStaticUrlRequest
                 * @return DescribeDataStaticUrlOutcome
                 */
                DescribeDataStaticUrlOutcome DescribeDataStaticUrl(const Model::DescribeDataStaticUrlRequest &request);
                void DescribeDataStaticUrlAsync(const Model::DescribeDataStaticUrlRequest& request, const DescribeDataStaticUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataStaticUrlOutcomeCallable DescribeDataStaticUrlCallable(const Model::DescribeDataStaticUrlRequest& request);

                /**
                 *获取DescribeDataStaticUrl信息
                 * @param req DescribeDataStaticUrlV2Request
                 * @return DescribeDataStaticUrlV2Outcome
                 */
                DescribeDataStaticUrlV2Outcome DescribeDataStaticUrlV2(const Model::DescribeDataStaticUrlV2Request &request);
                void DescribeDataStaticUrlV2Async(const Model::DescribeDataStaticUrlV2Request& request, const DescribeDataStaticUrlV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataStaticUrlV2OutcomeCallable DescribeDataStaticUrlV2Callable(const Model::DescribeDataStaticUrlV2Request& request);

                /**
                 *获取DescribeDataWebVitalsPage信息，用户核心活动信息
页面加载性能之Web Vitals。性能关键点
                 * @param req DescribeDataWebVitalsPageRequest
                 * @return DescribeDataWebVitalsPageOutcome
                 */
                DescribeDataWebVitalsPageOutcome DescribeDataWebVitalsPage(const Model::DescribeDataWebVitalsPageRequest &request);
                void DescribeDataWebVitalsPageAsync(const Model::DescribeDataWebVitalsPageRequest& request, const DescribeDataWebVitalsPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataWebVitalsPageOutcomeCallable DescribeDataWebVitalsPageCallable(const Model::DescribeDataWebVitalsPageRequest& request);

                /**
                 *获取DescribeDataWebVitalsPage信息，用户核心活动信息
页面加载性能之Web Vitals。性能关键点
                 * @param req DescribeDataWebVitalsPageV2Request
                 * @return DescribeDataWebVitalsPageV2Outcome
                 */
                DescribeDataWebVitalsPageV2Outcome DescribeDataWebVitalsPageV2(const Model::DescribeDataWebVitalsPageV2Request &request);
                void DescribeDataWebVitalsPageV2Async(const Model::DescribeDataWebVitalsPageV2Request& request, const DescribeDataWebVitalsPageV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataWebVitalsPageV2OutcomeCallable DescribeDataWebVitalsPageV2Callable(const Model::DescribeDataWebVitalsPageV2Request& request);

                /**
                 *获取首页错误信息
                 * @param req DescribeErrorRequest
                 * @return DescribeErrorOutcome
                 */
                DescribeErrorOutcome DescribeError(const Model::DescribeErrorRequest &request);
                void DescribeErrorAsync(const Model::DescribeErrorRequest& request, const DescribeErrorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeErrorOutcomeCallable DescribeErrorCallable(const Model::DescribeErrorRequest& request);

                /**
                 *获取异常问题详情数据
                 * @param req DescribeExceptionDetailRequest
                 * @return DescribeExceptionDetailOutcome
                 */
                DescribeExceptionDetailOutcome DescribeExceptionDetail(const Model::DescribeExceptionDetailRequest &request);
                void DescribeExceptionDetailAsync(const Model::DescribeExceptionDetailRequest& request, const DescribeExceptionDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExceptionDetailOutcomeCallable DescribeExceptionDetailCallable(const Model::DescribeExceptionDetailRequest& request);

                /**
                 *获取异常个例列表
                 * @param req DescribeExceptionReportListRequest
                 * @return DescribeExceptionReportListOutcome
                 */
                DescribeExceptionReportListOutcome DescribeExceptionReportList(const Model::DescribeExceptionReportListRequest &request);
                void DescribeExceptionReportListAsync(const Model::DescribeExceptionReportListRequest& request, const DescribeExceptionReportListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExceptionReportListOutcomeCallable DescribeExceptionReportListCallable(const Model::DescribeExceptionReportListRequest& request);

                /**
                 *获取FOOM内存分配问题详情数据
                 * @param req DescribeFOOMMallocProblemDetailRequest
                 * @return DescribeFOOMMallocProblemDetailOutcome
                 */
                DescribeFOOMMallocProblemDetailOutcome DescribeFOOMMallocProblemDetail(const Model::DescribeFOOMMallocProblemDetailRequest &request);
                void DescribeFOOMMallocProblemDetailAsync(const Model::DescribeFOOMMallocProblemDetailRequest& request, const DescribeFOOMMallocProblemDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFOOMMallocProblemDetailOutcomeCallable DescribeFOOMMallocProblemDetailCallable(const Model::DescribeFOOMMallocProblemDetailRequest& request);

                /**
                 *获取FOOM内存分配问题列表数据
                 * @param req DescribeFOOMMallocProblemListRequest
                 * @return DescribeFOOMMallocProblemListOutcome
                 */
                DescribeFOOMMallocProblemListOutcome DescribeFOOMMallocProblemList(const Model::DescribeFOOMMallocProblemListRequest &request);
                void DescribeFOOMMallocProblemListAsync(const Model::DescribeFOOMMallocProblemListRequest& request, const DescribeFOOMMallocProblemListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFOOMMallocProblemListOutcomeCallable DescribeFOOMMallocProblemListCallable(const Model::DescribeFOOMMallocProblemListRequest& request);

                /**
                 *获取FOOM内存分配问题上报列表
                 * @param req DescribeFOOMMallocReportListRequest
                 * @return DescribeFOOMMallocReportListOutcome
                 */
                DescribeFOOMMallocReportListOutcome DescribeFOOMMallocReportList(const Model::DescribeFOOMMallocReportListRequest &request);
                void DescribeFOOMMallocReportListAsync(const Model::DescribeFOOMMallocReportListRequest& request, const DescribeFOOMMallocReportListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFOOMMallocReportListOutcomeCallable DescribeFOOMMallocReportListCallable(const Model::DescribeFOOMMallocReportListRequest& request);

                /**
                 *获取FOOM问题详情数据
                 * @param req DescribeFOOMProblemDetailRequest
                 * @return DescribeFOOMProblemDetailOutcome
                 */
                DescribeFOOMProblemDetailOutcome DescribeFOOMProblemDetail(const Model::DescribeFOOMProblemDetailRequest &request);
                void DescribeFOOMProblemDetailAsync(const Model::DescribeFOOMProblemDetailRequest& request, const DescribeFOOMProblemDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFOOMProblemDetailOutcomeCallable DescribeFOOMProblemDetailCallable(const Model::DescribeFOOMProblemDetailRequest& request);

                /**
                 *获取FOOM问题列表数据
                 * @param req DescribeFOOMProblemListRequest
                 * @return DescribeFOOMProblemListOutcome
                 */
                DescribeFOOMProblemListOutcome DescribeFOOMProblemList(const Model::DescribeFOOMProblemListRequest &request);
                void DescribeFOOMProblemListAsync(const Model::DescribeFOOMProblemListRequest& request, const DescribeFOOMProblemListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFOOMProblemListOutcomeCallable DescribeFOOMProblemListCallable(const Model::DescribeFOOMProblemListRequest& request);

                /**
                 *获取FOOM问题上报列表
                 * @param req DescribeFOOMReportListRequest
                 * @return DescribeFOOMReportListOutcome
                 */
                DescribeFOOMReportListOutcome DescribeFOOMReportList(const Model::DescribeFOOMReportListRequest &request);
                void DescribeFOOMReportListAsync(const Model::DescribeFOOMReportListRequest& request, const DescribeFOOMReportListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFOOMReportListOutcomeCallable DescribeFOOMReportListCallable(const Model::DescribeFOOMReportListRequest& request);

                /**
                 *获取字段配置规则
                 * @param req DescribeFieldTransformRulesRequest
                 * @return DescribeFieldTransformRulesOutcome
                 */
                DescribeFieldTransformRulesOutcome DescribeFieldTransformRules(const Model::DescribeFieldTransformRulesRequest &request);
                void DescribeFieldTransformRulesAsync(const Model::DescribeFieldTransformRulesRequest& request, const DescribeFieldTransformRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFieldTransformRulesOutcomeCallable DescribeFieldTransformRulesCallable(const Model::DescribeFieldTransformRulesRequest& request);

                /**
                 *获取TDEM字段值列表
                 * @param req DescribeFieldValuesRequest
                 * @return DescribeFieldValuesOutcome
                 */
                DescribeFieldValuesOutcome DescribeFieldValues(const Model::DescribeFieldValuesRequest &request);
                void DescribeFieldValuesAsync(const Model::DescribeFieldValuesRequest& request, const DescribeFieldValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFieldValuesOutcomeCallable DescribeFieldValuesCallable(const Model::DescribeFieldValuesRequest& request);

                /**
                 *获取COS存储的临时密钥，具体到ProjectId
                 * @param req DescribeFileCertificateRequest
                 * @return DescribeFileCertificateOutcome
                 */
                DescribeFileCertificateOutcome DescribeFileCertificate(const Model::DescribeFileCertificateRequest &request);
                void DescribeFileCertificateAsync(const Model::DescribeFileCertificateRequest& request, const DescribeFileCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFileCertificateOutcomeCallable DescribeFileCertificateCallable(const Model::DescribeFileCertificateRequest& request);

                /**
                 *按用户维度聚合某问题的受影响用户清单，服务端分页。AppId 与 IssueId 必填；AppVersion / StartTime / EndTime / Keyword 用于收窄范围，同时作用于清单与 Total，因此 Total 为当前条件下去重后的用户数， 条件全空时等于问题详情的影响用户数。OrderKey / OrderBy 只改变行序、不改变结果集合；排序一律由服务端执行， 并保留 uid 作为次级键以保证翻页不重不漏。接口只读。
                 * @param req DescribeIssueAffectedUsersRequest
                 * @return DescribeIssueAffectedUsersOutcome
                 */
                DescribeIssueAffectedUsersOutcome DescribeIssueAffectedUsers(const Model::DescribeIssueAffectedUsersRequest &request);
                void DescribeIssueAffectedUsersAsync(const Model::DescribeIssueAffectedUsersRequest& request, const DescribeIssueAffectedUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIssueAffectedUsersOutcomeCallable DescribeIssueAffectedUsersCallable(const Model::DescribeIssueAffectedUsersRequest& request);

                /**
                 *获取指定 Issue 当前事件或最新事件之前的 Breadcrumbs 面包屑序列
                 * @param req DescribeIssueBreadcrumbsRequest
                 * @return DescribeIssueBreadcrumbsOutcome
                 */
                DescribeIssueBreadcrumbsOutcome DescribeIssueBreadcrumbs(const Model::DescribeIssueBreadcrumbsRequest &request);
                void DescribeIssueBreadcrumbsAsync(const Model::DescribeIssueBreadcrumbsRequest& request, const DescribeIssueBreadcrumbsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIssueBreadcrumbsOutcomeCallable DescribeIssueBreadcrumbsCallable(const Model::DescribeIssueBreadcrumbsRequest& request);

                /**
                 *获取日志下载链接
                 * @param req DescribeIssueCrashLogDownloadURLRequest
                 * @return DescribeIssueCrashLogDownloadURLOutcome
                 */
                DescribeIssueCrashLogDownloadURLOutcome DescribeIssueCrashLogDownloadURL(const Model::DescribeIssueCrashLogDownloadURLRequest &request);
                void DescribeIssueCrashLogDownloadURLAsync(const Model::DescribeIssueCrashLogDownloadURLRequest& request, const DescribeIssueCrashLogDownloadURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIssueCrashLogDownloadURLOutcomeCallable DescribeIssueCrashLogDownloadURLCallable(const Model::DescribeIssueCrashLogDownloadURLRequest& request);

                /**
                 *获取指定 Issue 的摘要信息以及默认选中的最新事件详情
                 * @param req DescribeIssueDetailRequest
                 * @return DescribeIssueDetailOutcome
                 */
                DescribeIssueDetailOutcome DescribeIssueDetail(const Model::DescribeIssueDetailRequest &request);
                void DescribeIssueDetailAsync(const Model::DescribeIssueDetailRequest& request, const DescribeIssueDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIssueDetailOutcomeCallable DescribeIssueDetailCallable(const Model::DescribeIssueDetailRequest& request);

                /**
                 *获取指定 Issue 下单个事件的完整详情，包括栈信息、上下文和符号化状态等字段
                 * @param req DescribeIssueEventDetailRequest
                 * @return DescribeIssueEventDetailOutcome
                 */
                DescribeIssueEventDetailOutcome DescribeIssueEventDetail(const Model::DescribeIssueEventDetailRequest &request);
                void DescribeIssueEventDetailAsync(const Model::DescribeIssueEventDetailRequest& request, const DescribeIssueEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIssueEventDetailOutcomeCallable DescribeIssueEventDetailCallable(const Model::DescribeIssueEventDetailRequest& request);

                /**
                 *根据条件获取指定 Issue 的错误事件列表，支持按时间范围、关键字和扩展过滤器查询，返回分页事件数据
                 * @param req DescribeIssueEventsRequest
                 * @return DescribeIssueEventsOutcome
                 */
                DescribeIssueEventsOutcome DescribeIssueEvents(const Model::DescribeIssueEventsRequest &request);
                void DescribeIssueEventsAsync(const Model::DescribeIssueEventsRequest& request, const DescribeIssueEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIssueEventsOutcomeCallable DescribeIssueEventsCallable(const Model::DescribeIssueEventsRequest& request);

                /**
                 *获取指定 Issue 在给定时间范围内的趋势分桶统计数据
                 * @param req DescribeIssueTrendRequest
                 * @return DescribeIssueTrendOutcome
                 */
                DescribeIssueTrendOutcome DescribeIssueTrend(const Model::DescribeIssueTrendRequest &request);
                void DescribeIssueTrendAsync(const Model::DescribeIssueTrendRequest& request, const DescribeIssueTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIssueTrendOutcomeCallable DescribeIssueTrendCallable(const Model::DescribeIssueTrendRequest& request);

                /**
                 *根据筛选条件分页查询 Issue 列表，支持环境、Issue 类型、状态、关键字、扩展过滤器和排序条件
                 * @param req DescribeIssuesRequest
                 * @return DescribeIssuesOutcome
                 */
                DescribeIssuesOutcome DescribeIssues(const Model::DescribeIssuesRequest &request);
                void DescribeIssuesAsync(const Model::DescribeIssuesRequest& request, const DescribeIssuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIssuesOutcomeCallable DescribeIssuesCallable(const Model::DescribeIssuesRequest& request);

                /**
                 *获取问题分布数据
                 * @param req DescribeIssuesDistributionRequest
                 * @return DescribeIssuesDistributionOutcome
                 */
                DescribeIssuesDistributionOutcome DescribeIssuesDistribution(const Model::DescribeIssuesDistributionRequest &request);
                void DescribeIssuesDistributionAsync(const Model::DescribeIssuesDistributionRequest& request, const DescribeIssuesDistributionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIssuesDistributionOutcomeCallable DescribeIssuesDistributionCallable(const Model::DescribeIssuesDistributionRequest& request);

                /**
                 *获取问题列表数据
                 * @param req DescribeIssuesListRequest
                 * @return DescribeIssuesListOutcome
                 */
                DescribeIssuesListOutcome DescribeIssuesList(const Model::DescribeIssuesListRequest &request);
                void DescribeIssuesListAsync(const Model::DescribeIssuesListRequest& request, const DescribeIssuesListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIssuesListOutcomeCallable DescribeIssuesListCallable(const Model::DescribeIssuesListRequest& request);

                /**
                 *获取问题趋势数据
                 * @param req DescribeIssuesStatisticsTrendRequest
                 * @return DescribeIssuesStatisticsTrendOutcome
                 */
                DescribeIssuesStatisticsTrendOutcome DescribeIssuesStatisticsTrend(const Model::DescribeIssuesStatisticsTrendRequest &request);
                void DescribeIssuesStatisticsTrendAsync(const Model::DescribeIssuesStatisticsTrendRequest& request, const DescribeIssuesStatisticsTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIssuesStatisticsTrendOutcomeCallable DescribeIssuesStatisticsTrendCallable(const Model::DescribeIssuesStatisticsTrendRequest& request);

                /**
                 *获取卡顿ANR问题用户详情
                 * @param req DescribeLagANRProblemAccountDetailRequest
                 * @return DescribeLagANRProblemAccountDetailOutcome
                 */
                DescribeLagANRProblemAccountDetailOutcome DescribeLagANRProblemAccountDetail(const Model::DescribeLagANRProblemAccountDetailRequest &request);
                void DescribeLagANRProblemAccountDetailAsync(const Model::DescribeLagANRProblemAccountDetailRequest& request, const DescribeLagANRProblemAccountDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLagANRProblemAccountDetailOutcomeCallable DescribeLagANRProblemAccountDetailCallable(const Model::DescribeLagANRProblemAccountDetailRequest& request);

                /**
                 *获取卡顿ANR问题用户列表
                 * @param req DescribeLagANRProblemFeatureAccountsRequest
                 * @return DescribeLagANRProblemFeatureAccountsOutcome
                 */
                DescribeLagANRProblemFeatureAccountsOutcome DescribeLagANRProblemFeatureAccounts(const Model::DescribeLagANRProblemFeatureAccountsRequest &request);
                void DescribeLagANRProblemFeatureAccountsAsync(const Model::DescribeLagANRProblemFeatureAccountsRequest& request, const DescribeLagANRProblemFeatureAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLagANRProblemFeatureAccountsOutcomeCallable DescribeLagANRProblemFeatureAccountsCallable(const Model::DescribeLagANRProblemFeatureAccountsRequest& request);

                /**
                 *获取卡顿ANR问题列表数据
                 * @param req DescribeLagANRProblemListRequest
                 * @return DescribeLagANRProblemListOutcome
                 */
                DescribeLagANRProblemListOutcome DescribeLagANRProblemList(const Model::DescribeLagANRProblemListRequest &request);
                void DescribeLagANRProblemListAsync(const Model::DescribeLagANRProblemListRequest& request, const DescribeLagANRProblemListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLagANRProblemListOutcomeCallable DescribeLagANRProblemListCallable(const Model::DescribeLagANRProblemListRequest& request);

                /**
                 *按AppId+BundleHash取已编译回放包正文。成功含Pack（tmpl/css/js/manifest/hash），不返回WXML/WXSS源码。不存在返回ResourceNotFound。
                 * @param req DescribeMiniProgramReplayPackRequest
                 * @return DescribeMiniProgramReplayPackOutcome
                 */
                DescribeMiniProgramReplayPackOutcome DescribeMiniProgramReplayPack(const Model::DescribeMiniProgramReplayPackRequest &request);
                void DescribeMiniProgramReplayPackAsync(const Model::DescribeMiniProgramReplayPackRequest& request, const DescribeMiniProgramReplayPackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMiniProgramReplayPackOutcomeCallable DescribeMiniProgramReplayPackCallable(const Model::DescribeMiniProgramReplayPackRequest& request);

                /**
                 *按AppId列出回放包元数据，不含Pack正文。可按Status过滤。Limit默认20、最大100。
                 * @param req DescribeMiniProgramReplayPacksRequest
                 * @return DescribeMiniProgramReplayPacksOutcome
                 */
                DescribeMiniProgramReplayPacksOutcome DescribeMiniProgramReplayPacks(const Model::DescribeMiniProgramReplayPacksRequest &request);
                void DescribeMiniProgramReplayPacksAsync(const Model::DescribeMiniProgramReplayPacksRequest& request, const DescribeMiniProgramReplayPacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMiniProgramReplayPacksOutcomeCallable DescribeMiniProgramReplayPacksCallable(const Model::DescribeMiniProgramReplayPacksRequest& request);

                /**
                 *获取TDEM性能指标数据
                 * @param req DescribePerformanceMetricsRequest
                 * @return DescribePerformanceMetricsOutcome
                 */
                DescribePerformanceMetricsOutcome DescribePerformanceMetrics(const Model::DescribePerformanceMetricsRequest &request);
                void DescribePerformanceMetricsAsync(const Model::DescribePerformanceMetricsRequest& request, const DescribePerformanceMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePerformanceMetricsOutcomeCallable DescribePerformanceMetricsCallable(const Model::DescribePerformanceMetricsRequest& request);

                /**
                 *获取应用上报抽样信息
                 * @param req DescribeProjectLimitsRequest
                 * @return DescribeProjectLimitsOutcome
                 */
                DescribeProjectLimitsOutcome DescribeProjectLimits(const Model::DescribeProjectLimitsRequest &request);
                void DescribeProjectLimitsAsync(const Model::DescribeProjectLimitsRequest& request, const DescribeProjectLimitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProjectLimitsOutcomeCallable DescribeProjectLimitsCallable(const Model::DescribeProjectLimitsRequest& request);

                /**
                 *获取项目列表（实例创建的团队下的项目列表）
                 * @param req DescribeProjectsRequest
                 * @return DescribeProjectsOutcome
                 */
                DescribeProjectsOutcome DescribeProjects(const Model::DescribeProjectsRequest &request);
                void DescribeProjectsAsync(const Model::DescribeProjectsRequest& request, const DescribeProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProjectsOutcomeCallable DescribeProjectsCallable(const Model::DescribeProjectsRequest& request);

                /**
                 *获取项目下的PV列表
                 * @param req DescribePvListRequest
                 * @return DescribePvListOutcome
                 */
                DescribePvListOutcome DescribePvList(const Model::DescribePvListRequest &request);
                void DescribePvListAsync(const Model::DescribePvListRequest& request, const DescribePvListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePvListOutcomeCallable DescribePvListCallable(const Model::DescribePvListRequest& request);

                /**
                 *获取上传文件存储的临时密钥
                 * @param req DescribeReleaseFileSignRequest
                 * @return DescribeReleaseFileSignOutcome
                 */
                DescribeReleaseFileSignOutcome DescribeReleaseFileSign(const Model::DescribeReleaseFileSignRequest &request);
                void DescribeReleaseFileSignAsync(const Model::DescribeReleaseFileSignRequest& request, const DescribeReleaseFileSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReleaseFileSignOutcomeCallable DescribeReleaseFileSignCallable(const Model::DescribeReleaseFileSignRequest& request);

                /**
                 *获取应用对应sourcemap文件列表
                 * @param req DescribeReleaseFilesRequest
                 * @return DescribeReleaseFilesOutcome
                 */
                DescribeReleaseFilesOutcome DescribeReleaseFiles(const Model::DescribeReleaseFilesRequest &request);
                void DescribeReleaseFilesAsync(const Model::DescribeReleaseFilesRequest& request, const DescribeReleaseFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReleaseFilesOutcomeCallable DescribeReleaseFilesCallable(const Model::DescribeReleaseFilesRequest& request);

                /**
                 *从对象存储读取录屏帧数据
                 * @param req DescribeReplayDataRequest
                 * @return DescribeReplayDataOutcome
                 */
                DescribeReplayDataOutcome DescribeReplayData(const Model::DescribeReplayDataRequest &request);
                void DescribeReplayDataAsync(const Model::DescribeReplayDataRequest& request, const DescribeReplayDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReplayDataOutcomeCallable DescribeReplayDataCallable(const Model::DescribeReplayDataRequest& request);

                /**
                 *获取回放日志
                 * @param req DescribeReplayDetailsRequest
                 * @return DescribeReplayDetailsOutcome
                 */
                DescribeReplayDetailsOutcome DescribeReplayDetails(const Model::DescribeReplayDetailsRequest &request);
                void DescribeReplayDetailsAsync(const Model::DescribeReplayDetailsRequest& request, const DescribeReplayDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReplayDetailsOutcomeCallable DescribeReplayDetailsCallable(const Model::DescribeReplayDetailsRequest& request);

                /**
                 *获取回放元数据
                 * @param req DescribeReplayMetaRequest
                 * @return DescribeReplayMetaOutcome
                 */
                DescribeReplayMetaOutcome DescribeReplayMeta(const Model::DescribeReplayMetaRequest &request);
                void DescribeReplayMetaAsync(const Model::DescribeReplayMetaRequest& request, const DescribeReplayMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReplayMetaOutcomeCallable DescribeReplayMetaCallable(const Model::DescribeReplayMetaRequest& request);

                /**
                 *获取项目下的日志聚合信息
                 * @param req DescribeRumGroupLogRequest
                 * @return DescribeRumGroupLogOutcome
                 */
                DescribeRumGroupLogOutcome DescribeRumGroupLog(const Model::DescribeRumGroupLogRequest &request);
                void DescribeRumGroupLogAsync(const Model::DescribeRumGroupLogRequest& request, const DescribeRumGroupLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRumGroupLogOutcomeCallable DescribeRumGroupLogCallable(const Model::DescribeRumGroupLogRequest& request);

                /**
                 *根据label 聚合分析日志
                 * @param req DescribeRumGroupLogV2Request
                 * @return DescribeRumGroupLogV2Outcome
                 */
                DescribeRumGroupLogV2Outcome DescribeRumGroupLogV2(const Model::DescribeRumGroupLogV2Request &request);
                void DescribeRumGroupLogV2Async(const Model::DescribeRumGroupLogV2Request& request, const DescribeRumGroupLogV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRumGroupLogV2OutcomeCallable DescribeRumGroupLogV2Callable(const Model::DescribeRumGroupLogV2Request& request);

                /**
                 *查询日志明细
                 * @param req DescribeRumLogDetailsV2Request
                 * @return DescribeRumLogDetailsV2Outcome
                 */
                DescribeRumLogDetailsV2Outcome DescribeRumLogDetailsV2(const Model::DescribeRumLogDetailsV2Request &request);
                void DescribeRumLogDetailsV2Async(const Model::DescribeRumLogDetailsV2Request& request, const DescribeRumLogDetailsV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRumLogDetailsV2OutcomeCallable DescribeRumLogDetailsV2Callable(const Model::DescribeRumLogDetailsV2Request& request);

                /**
                 *获取项目下的日志列表（实例创建的项目下的日志列表）
                 * @param req DescribeRumLogExportRequest
                 * @return DescribeRumLogExportOutcome
                 */
                DescribeRumLogExportOutcome DescribeRumLogExport(const Model::DescribeRumLogExportRequest &request);
                void DescribeRumLogExportAsync(const Model::DescribeRumLogExportRequest& request, const DescribeRumLogExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRumLogExportOutcomeCallable DescribeRumLogExportCallable(const Model::DescribeRumLogExportRequest& request);

                /**
                 *创建日志导出
                 * @param req DescribeRumLogExportV2Request
                 * @return DescribeRumLogExportV2Outcome
                 */
                DescribeRumLogExportV2Outcome DescribeRumLogExportV2(const Model::DescribeRumLogExportV2Request &request);
                void DescribeRumLogExportV2Async(const Model::DescribeRumLogExportV2Request& request, const DescribeRumLogExportV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRumLogExportV2OutcomeCallable DescribeRumLogExportV2Callable(const Model::DescribeRumLogExportV2Request& request);

                /**
                 *获取项目下的日志导出列表
                 * @param req DescribeRumLogExportsRequest
                 * @return DescribeRumLogExportsOutcome
                 */
                DescribeRumLogExportsOutcome DescribeRumLogExports(const Model::DescribeRumLogExportsRequest &request);
                void DescribeRumLogExportsAsync(const Model::DescribeRumLogExportsRequest& request, const DescribeRumLogExportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRumLogExportsOutcomeCallable DescribeRumLogExportsCallable(const Model::DescribeRumLogExportsRequest& request);

                /**
                 *获取日志导出列表
                 * @param req DescribeRumLogExportsV2Request
                 * @return DescribeRumLogExportsV2Outcome
                 */
                DescribeRumLogExportsV2Outcome DescribeRumLogExportsV2(const Model::DescribeRumLogExportsV2Request &request);
                void DescribeRumLogExportsV2Async(const Model::DescribeRumLogExportsV2Request& request, const DescribeRumLogExportsV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRumLogExportsV2OutcomeCallable DescribeRumLogExportsV2Callable(const Model::DescribeRumLogExportsV2Request& request);

                /**
                 *获取项目下的日志列表（实例创建的项目下的日志列表）
                 * @param req DescribeRumLogListRequest
                 * @return DescribeRumLogListOutcome
                 */
                DescribeRumLogListOutcome DescribeRumLogList(const Model::DescribeRumLogListRequest &request);
                void DescribeRumLogListAsync(const Model::DescribeRumLogListRequest& request, const DescribeRumLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRumLogListOutcomeCallable DescribeRumLogListCallable(const Model::DescribeRumLogListRequest& request);

                /**
                 *查询原始日志总量
                 * @param req DescribeRumLogTotalV2Request
                 * @return DescribeRumLogTotalV2Outcome
                 */
                DescribeRumLogTotalV2Outcome DescribeRumLogTotalV2(const Model::DescribeRumLogTotalV2Request &request);
                void DescribeRumLogTotalV2Async(const Model::DescribeRumLogTotalV2Request& request, const DescribeRumLogTotalV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRumLogTotalV2OutcomeCallable DescribeRumLogTotalV2Callable(const Model::DescribeRumLogTotalV2Request& request);

                /**
                 *获取项目下的日志列表，分钟级
                 * @param req DescribeRumStatsLogListRequest
                 * @return DescribeRumStatsLogListOutcome
                 */
                DescribeRumStatsLogListOutcome DescribeRumStatsLogList(const Model::DescribeRumStatsLogListRequest &request);
                void DescribeRumStatsLogListAsync(const Model::DescribeRumStatsLogListRequest& request, const DescribeRumStatsLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRumStatsLogListOutcomeCallable DescribeRumStatsLogListCallable(const Model::DescribeRumStatsLogListRequest& request);

                /**
                 *查询日志时间分布
                 * @param req DescribeRumStatsLogListV2Request
                 * @return DescribeRumStatsLogListV2Outcome
                 */
                DescribeRumStatsLogListV2Outcome DescribeRumStatsLogListV2(const Model::DescribeRumStatsLogListV2Request &request);
                void DescribeRumStatsLogListV2Async(const Model::DescribeRumStatsLogListV2Request& request, const DescribeRumStatsLogListV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRumStatsLogListV2OutcomeCallable DescribeRumStatsLogListV2Callable(const Model::DescribeRumStatsLogListV2Request& request);

                /**
                 *获取应用的采样率
                 * @param req DescribeSampleRateRequest
                 * @return DescribeSampleRateOutcome
                 */
                DescribeSampleRateOutcome DescribeSampleRate(const Model::DescribeSampleRateRequest &request);
                void DescribeSampleRateAsync(const Model::DescribeSampleRateRequest& request, const DescribeSampleRateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSampleRateOutcomeCallable DescribeSampleRateCallable(const Model::DescribeSampleRateRequest& request);

                /**
                 *获取首页分数列表
                 * @param req DescribeScoresRequest
                 * @return DescribeScoresOutcome
                 */
                DescribeScoresOutcome DescribeScores(const Model::DescribeScoresRequest &request);
                void DescribeScoresAsync(const Model::DescribeScoresRequest& request, const DescribeScoresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScoresOutcomeCallable DescribeScoresCallable(const Model::DescribeScoresRequest& request);

                /**
                 *获取首页分数列表
                 * @param req DescribeScoresV2Request
                 * @return DescribeScoresV2Outcome
                 */
                DescribeScoresV2Outcome DescribeScoresV2(const Model::DescribeScoresV2Request &request);
                void DescribeScoresV2Async(const Model::DescribeScoresV2Request& request, const DescribeScoresV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScoresV2OutcomeCallable DescribeScoresV2Callable(const Model::DescribeScoresV2Request& request);

                /**
                 *查询会话列表
                 * @param req DescribeSessionListRequest
                 * @return DescribeSessionListOutcome
                 */
                DescribeSessionListOutcome DescribeSessionList(const Model::DescribeSessionListRequest &request);
                void DescribeSessionListAsync(const Model::DescribeSessionListRequest& request, const DescribeSessionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSessionListOutcomeCallable DescribeSessionListCallable(const Model::DescribeSessionListRequest& request);

                /**
                 *获取挣扎事件分布数据
                 * @param req DescribeStruggleDistributionRequest
                 * @return DescribeStruggleDistributionOutcome
                 */
                DescribeStruggleDistributionOutcome DescribeStruggleDistribution(const Model::DescribeStruggleDistributionRequest &request);
                void DescribeStruggleDistributionAsync(const Model::DescribeStruggleDistributionRequest& request, const DescribeStruggleDistributionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStruggleDistributionOutcomeCallable DescribeStruggleDistributionCallable(const Model::DescribeStruggleDistributionRequest& request);

                /**
                 *获取符号制品上传临时凭证。
                 * @param req DescribeSymbolArtifactUploadCredentialRequest
                 * @return DescribeSymbolArtifactUploadCredentialOutcome
                 */
                DescribeSymbolArtifactUploadCredentialOutcome DescribeSymbolArtifactUploadCredential(const Model::DescribeSymbolArtifactUploadCredentialRequest &request);
                void DescribeSymbolArtifactUploadCredentialAsync(const Model::DescribeSymbolArtifactUploadCredentialRequest& request, const DescribeSymbolArtifactUploadCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSymbolArtifactUploadCredentialOutcomeCallable DescribeSymbolArtifactUploadCredentialCallable(const Model::DescribeSymbolArtifactUploadCredentialRequest& request);

                /**
                 *分页查询指定类型的符号制品。
                 * @param req DescribeSymbolArtifactsRequest
                 * @return DescribeSymbolArtifactsOutcome
                 */
                DescribeSymbolArtifactsOutcome DescribeSymbolArtifacts(const Model::DescribeSymbolArtifactsRequest &request);
                void DescribeSymbolArtifactsAsync(const Model::DescribeSymbolArtifactsRequest& request, const DescribeSymbolArtifactsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSymbolArtifactsOutcomeCallable DescribeSymbolArtifactsCallable(const Model::DescribeSymbolArtifactsRequest& request);

                /**
                 *查询应用列表，默认仅当前用户名下有权限的应用；可按业务系统 InstanceId 筛选。
                 * @param req DescribeTDEMApplicationsRequest
                 * @return DescribeTDEMApplicationsOutcome
                 */
                DescribeTDEMApplicationsOutcome DescribeTDEMApplications(const Model::DescribeTDEMApplicationsRequest &request);
                void DescribeTDEMApplicationsAsync(const Model::DescribeTDEMApplicationsRequest& request, const DescribeTDEMApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTDEMApplicationsOutcomeCallable DescribeTDEMApplicationsCallable(const Model::DescribeTDEMApplicationsRequest& request);

                /**
                 *查询当前用户名下业务系统列表（超管返回全部）。分页 Offset/Limit，默认 Limit=20 上限 100。
                 * @param req DescribeTDEMBusinessSystemsRequest
                 * @return DescribeTDEMBusinessSystemsOutcome
                 */
                DescribeTDEMBusinessSystemsOutcome DescribeTDEMBusinessSystems(const Model::DescribeTDEMBusinessSystemsRequest &request);
                void DescribeTDEMBusinessSystemsAsync(const Model::DescribeTDEMBusinessSystemsRequest& request, const DescribeTDEMBusinessSystemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTDEMBusinessSystemsOutcomeCallable DescribeTDEMBusinessSystemsCallable(const Model::DescribeTDEMBusinessSystemsRequest& request);

                /**
                 *按一个维度拆分拨测指标。Dimension 取值说明：platform、app_version、device、net_type、operator、region、country、target_ip。target_region 不是合法值。region 对应客户端省份，country 对应国家。
                 * @param req DescribeTDEMDialDimensionsRequest
                 * @return DescribeTDEMDialDimensionsOutcome
                 */
                DescribeTDEMDialDimensionsOutcome DescribeTDEMDialDimensions(const Model::DescribeTDEMDialDimensionsRequest &request);
                void DescribeTDEMDialDimensionsAsync(const Model::DescribeTDEMDialDimensionsRequest& request, const DescribeTDEMDialDimensionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTDEMDialDimensionsOutcomeCallable DescribeTDEMDialDimensionsCallable(const Model::DescribeTDEMDialDimensionsRequest& request);

                /**
                 *返回一个拨测批次的探测结果和路由追踪。Probes 的 Region、Operator 是目标 IP 归属。逐跳归属同时写在 Probes.MTR.Hops 和顶层 MTR.Hops。
                 * @param req DescribeTDEMDialExecutionDetailRequest
                 * @return DescribeTDEMDialExecutionDetailOutcome
                 */
                DescribeTDEMDialExecutionDetailOutcome DescribeTDEMDialExecutionDetail(const Model::DescribeTDEMDialExecutionDetailRequest &request);
                void DescribeTDEMDialExecutionDetailAsync(const Model::DescribeTDEMDialExecutionDetailRequest& request, const DescribeTDEMDialExecutionDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTDEMDialExecutionDetailOutcomeCallable DescribeTDEMDialExecutionDetailCallable(const Model::DescribeTDEMDialExecutionDetailRequest& request);

                /**
                 *按批次返回拨测执行记录，一批次一行。TargetIps 是目标地址，TargetIpGeo 是这些地址的地区和运营商。行上的 Region 和 Operator 仍是客户端地区和运营商。
                 * @param req DescribeTDEMDialExecutionListRequest
                 * @return DescribeTDEMDialExecutionListOutcome
                 */
                DescribeTDEMDialExecutionListOutcome DescribeTDEMDialExecutionList(const Model::DescribeTDEMDialExecutionListRequest &request);
                void DescribeTDEMDialExecutionListAsync(const Model::DescribeTDEMDialExecutionListRequest& request, const DescribeTDEMDialExecutionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTDEMDialExecutionListOutcomeCallable DescribeTDEMDialExecutionListCallable(const Model::DescribeTDEMDialExecutionListRequest& request);

                /**
                 *按时间窗汇总拨测批次。一次多 IP 探测计为 1 个批次。
                 * @param req DescribeTDEMDialOverviewRequest
                 * @return DescribeTDEMDialOverviewOutcome
                 */
                DescribeTDEMDialOverviewOutcome DescribeTDEMDialOverview(const Model::DescribeTDEMDialOverviewRequest &request);
                void DescribeTDEMDialOverviewAsync(const Model::DescribeTDEMDialOverviewRequest& request, const DescribeTDEMDialOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTDEMDialOverviewOutcomeCallable DescribeTDEMDialOverviewCallable(const Model::DescribeTDEMDialOverviewRequest& request);

                /**
                 *查询应用下未删除的拨测任务，包含启动范围。
                 * @param req DescribeTDEMDialTasksRequest
                 * @return DescribeTDEMDialTasksOutcome
                 */
                DescribeTDEMDialTasksOutcome DescribeTDEMDialTasks(const Model::DescribeTDEMDialTasksRequest &request);
                void DescribeTDEMDialTasksAsync(const Model::DescribeTDEMDialTasksRequest& request, const DescribeTDEMDialTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTDEMDialTasksOutcomeCallable DescribeTDEMDialTasksCallable(const Model::DescribeTDEMDialTasksRequest& request);

                /**
                 *按小时或天返回拨测趋势。Granularity 不传时按小时。
                 * @param req DescribeTDEMDialTrendRequest
                 * @return DescribeTDEMDialTrendOutcome
                 */
                DescribeTDEMDialTrendOutcome DescribeTDEMDialTrend(const Model::DescribeTDEMDialTrendRequest &request);
                void DescribeTDEMDialTrendAsync(const Model::DescribeTDEMDialTrendRequest& request, const DescribeTDEMDialTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTDEMDialTrendOutcomeCallable DescribeTDEMDialTrendCallable(const Model::DescribeTDEMDialTrendRequest& request);

                /**
                 *按 AppId+EventId 查询事件详情，含主表字段与可选符号化结果。Date 推荐传以命中分区；或用 StartDate+EndDate（<=2 天）。越权与不存在统一 ResourceNotFound。
                 * @param req DescribeTDEMEventDetailRequest
                 * @return DescribeTDEMEventDetailOutcome
                 */
                DescribeTDEMEventDetailOutcome DescribeTDEMEventDetail(const Model::DescribeTDEMEventDetailRequest &request);
                void DescribeTDEMEventDetailAsync(const Model::DescribeTDEMEventDetailRequest& request, const DescribeTDEMEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTDEMEventDetailOutcomeCallable DescribeTDEMEventDetailCallable(const Model::DescribeTDEMEventDetailRequest& request);

                /**
                 *错误指纹或 API/资源 URL（含按访问页、状态、标签）排行。读 tdem_events，不走主分析立方 GroupBy。Kind：error/api/resource/api_page/resource_page/api_status/api_status_top/resource_status/tag。 Kind=exception_dimension返回当前普通维度或标签值的同批完整分类计数；展开不另行取数。
                 * @param req DescribeTDEMEventRankRequest
                 * @return DescribeTDEMEventRankOutcome
                 */
                DescribeTDEMEventRankOutcome DescribeTDEMEventRank(const Model::DescribeTDEMEventRankRequest &request);
                void DescribeTDEMEventRankAsync(const Model::DescribeTDEMEventRankRequest& request, const DescribeTDEMEventRankAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTDEMEventRankOutcomeCallable DescribeTDEMEventRankCallable(const Model::DescribeTDEMEventRankRequest& request);

                /**
                 *数据探索事件明细分页。会话分类不得调用本接口（Category 禁止 session）。时间单位 Unix 毫秒。
                 * @param req DescribeTDEMEventSearchRequest
                 * @return DescribeTDEMEventSearchOutcome
                 */
                DescribeTDEMEventSearchOutcome DescribeTDEMEventSearch(const Model::DescribeTDEMEventSearchRequest &request);
                void DescribeTDEMEventSearchAsync(const Model::DescribeTDEMEventSearchRequest& request, const DescribeTDEMEventSearchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTDEMEventSearchOutcomeCallable DescribeTDEMEventSearchCallable(const Model::DescribeTDEMEventSearchRequest& request);

                /**
                 *同一筛选下的分类计数、访问用户、业务用户、窗口合计与分桶趋势。Category 可含 session。空窗返回 0 与空 Series。
                 * @param req DescribeTDEMEventSearchSummaryRequest
                 * @return DescribeTDEMEventSearchSummaryOutcome
                 */
                DescribeTDEMEventSearchSummaryOutcome DescribeTDEMEventSearchSummary(const Model::DescribeTDEMEventSearchSummaryRequest &request);
                void DescribeTDEMEventSearchSummaryAsync(const Model::DescribeTDEMEventSearchSummaryRequest& request, const DescribeTDEMEventSearchSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTDEMEventSearchSummaryOutcomeCallable DescribeTDEMEventSearchSummaryCallable(const Model::DescribeTDEMEventSearchSummaryRequest& request);

                /**
                 *查询应用下字段值替换规则列表。替代已废弃的 DescribeFieldTransformRules；AppId 为 string。
                 * @param req DescribeTDEMFieldTransformRulesRequest
                 * @return DescribeTDEMFieldTransformRulesOutcome
                 */
                DescribeTDEMFieldTransformRulesOutcome DescribeTDEMFieldTransformRules(const Model::DescribeTDEMFieldTransformRulesRequest &request);
                void DescribeTDEMFieldTransformRulesAsync(const Model::DescribeTDEMFieldTransformRulesRequest& request, const DescribeTDEMFieldTransformRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTDEMFieldTransformRulesOutcomeCallable DescribeTDEMFieldTransformRulesCallable(const Model::DescribeTDEMFieldTransformRulesRequest& request);

                /**
                 *获取漏斗详情
                 * @param req DescribeTDEMFunnelDetailRequest
                 * @return DescribeTDEMFunnelDetailOutcome
                 */
                DescribeTDEMFunnelDetailOutcome DescribeTDEMFunnelDetail(const Model::DescribeTDEMFunnelDetailRequest &request);
                void DescribeTDEMFunnelDetailAsync(const Model::DescribeTDEMFunnelDetailRequest& request, const DescribeTDEMFunnelDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTDEMFunnelDetailOutcomeCallable DescribeTDEMFunnelDetailCallable(const Model::DescribeTDEMFunnelDetailRequest& request);

                /**
                 *获取漏斗分析报告维度数据
                 * @param req DescribeTDEMFunnelDimensionsRequest
                 * @return DescribeTDEMFunnelDimensionsOutcome
                 */
                DescribeTDEMFunnelDimensionsOutcome DescribeTDEMFunnelDimensions(const Model::DescribeTDEMFunnelDimensionsRequest &request);
                void DescribeTDEMFunnelDimensionsAsync(const Model::DescribeTDEMFunnelDimensionsRequest& request, const DescribeTDEMFunnelDimensionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTDEMFunnelDimensionsOutcomeCallable DescribeTDEMFunnelDimensionsCallable(const Model::DescribeTDEMFunnelDimensionsRequest& request);

                /**
                 *获取漏斗列表
                 * @param req DescribeTDEMFunnelListRequest
                 * @return DescribeTDEMFunnelListOutcome
                 */
                DescribeTDEMFunnelListOutcome DescribeTDEMFunnelList(const Model::DescribeTDEMFunnelListRequest &request);
                void DescribeTDEMFunnelListAsync(const Model::DescribeTDEMFunnelListRequest& request, const DescribeTDEMFunnelListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTDEMFunnelListOutcomeCallable DescribeTDEMFunnelListCallable(const Model::DescribeTDEMFunnelListRequest& request);

                /**
                 *获取漏斗报告
                 * @param req DescribeTDEMFunnelReportRequest
                 * @return DescribeTDEMFunnelReportOutcome
                 */
                DescribeTDEMFunnelReportOutcome DescribeTDEMFunnelReport(const Model::DescribeTDEMFunnelReportRequest &request);
                void DescribeTDEMFunnelReportAsync(const Model::DescribeTDEMFunnelReportRequest& request, const DescribeTDEMFunnelReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTDEMFunnelReportOutcomeCallable DescribeTDEMFunnelReportCallable(const Model::DescribeTDEMFunnelReportRequest& request);

                /**
                 *获取漏斗步骤会话
                 * @param req DescribeTDEMFunnelStepSessionListRequest
                 * @return DescribeTDEMFunnelStepSessionListOutcome
                 */
                DescribeTDEMFunnelStepSessionListOutcome DescribeTDEMFunnelStepSessionList(const Model::DescribeTDEMFunnelStepSessionListRequest &request);
                void DescribeTDEMFunnelStepSessionListAsync(const Model::DescribeTDEMFunnelStepSessionListRequest& request, const DescribeTDEMFunnelStepSessionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTDEMFunnelStepSessionListOutcomeCallable DescribeTDEMFunnelStepSessionListCallable(const Model::DescribeTDEMFunnelStepSessionListRequest& request);

                /**
                 *获取漏斗趋势
                 * @param req DescribeTDEMFunnelTrendRequest
                 * @return DescribeTDEMFunnelTrendOutcome
                 */
                DescribeTDEMFunnelTrendOutcome DescribeTDEMFunnelTrend(const Model::DescribeTDEMFunnelTrendRequest &request);
                void DescribeTDEMFunnelTrendAsync(const Model::DescribeTDEMFunnelTrendRequest& request, const DescribeTDEMFunnelTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTDEMFunnelTrendOutcomeCallable DescribeTDEMFunnelTrendCallable(const Model::DescribeTDEMFunnelTrendRequest& request);

                /**
                 *按单维度 GroupBy 查询分析指标分布。读 tdem_metric_agg。
                 * @param req DescribeTDEMMetricDistributionRequest
                 * @return DescribeTDEMMetricDistributionOutcome
                 */
                DescribeTDEMMetricDistributionOutcome DescribeTDEMMetricDistribution(const Model::DescribeTDEMMetricDistributionRequest &request);
                void DescribeTDEMMetricDistributionAsync(const Model::DescribeTDEMMetricDistributionRequest& request, const DescribeTDEMMetricDistributionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTDEMMetricDistributionOutcomeCallable DescribeTDEMMetricDistributionCallable(const Model::DescribeTDEMMetricDistributionRequest& request);

                /**
                 *查询指定应用与时间窗内的分析指标区间合计。单查返回 Metrics；传 Queries 时返回 Results。读 tdem_metric_agg。
                 * @param req DescribeTDEMMetricSummaryRequest
                 * @return DescribeTDEMMetricSummaryOutcome
                 */
                DescribeTDEMMetricSummaryOutcome DescribeTDEMMetricSummary(const Model::DescribeTDEMMetricSummaryRequest &request);
                void DescribeTDEMMetricSummaryAsync(const Model::DescribeTDEMMetricSummaryRequest& request, const DescribeTDEMMetricSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTDEMMetricSummaryOutcomeCallable DescribeTDEMMetricSummaryCallable(const Model::DescribeTDEMMetricSummaryRequest& request);

                /**
                 *查询分析指标时序。可传 CompareStartTime/CompareEndTime 做对比窗（仅批量）。读 tdem_metric_agg。
                 * @param req DescribeTDEMMetricTrendRequest
                 * @return DescribeTDEMMetricTrendOutcome
                 */
                DescribeTDEMMetricTrendOutcome DescribeTDEMMetricTrend(const Model::DescribeTDEMMetricTrendRequest &request);
                void DescribeTDEMMetricTrendAsync(const Model::DescribeTDEMMetricTrendRequest& request, const DescribeTDEMMetricTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTDEMMetricTrendOutcomeCallable DescribeTDEMMetricTrendCallable(const Model::DescribeTDEMMetricTrendRequest& request);

                /**
                 *客户端总览列表批量评分。按应用列表一次返回各计分项单项分与加权总分。AppIds 1-200；不归属当前用户的应用不出现在响应中。
                 * @param req DescribeTDEMOverviewScoresRequest
                 * @return DescribeTDEMOverviewScoresOutcome
                 */
                DescribeTDEMOverviewScoresOutcome DescribeTDEMOverviewScores(const Model::DescribeTDEMOverviewScoresRequest &request);
                void DescribeTDEMOverviewScoresAsync(const Model::DescribeTDEMOverviewScoresRequest& request, const DescribeTDEMOverviewScoresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTDEMOverviewScoresOutcomeCallable DescribeTDEMOverviewScoresCallable(const Model::DescribeTDEMOverviewScoresRequest& request);

                /**
                 *会话时间线 / 页面子事件 / 错误前轨迹。Mode：timeline / page / breadcrumb。Limit 默认 200，上限 200。
                 * @param req DescribeTDEMRelatedEventsRequest
                 * @return DescribeTDEMRelatedEventsOutcome
                 */
                DescribeTDEMRelatedEventsOutcome DescribeTDEMRelatedEvents(const Model::DescribeTDEMRelatedEventsRequest &request);
                void DescribeTDEMRelatedEventsAsync(const Model::DescribeTDEMRelatedEventsRequest& request, const DescribeTDEMRelatedEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTDEMRelatedEventsOutcomeCallable DescribeTDEMRelatedEventsCallable(const Model::DescribeTDEMRelatedEventsRequest& request);

                /**
                 *按一个维度返回大模型对话次数和当前指标值，按指标值降序，最多 200 行。region 由 country 与 province 拼接。
                 * @param req DescribeTDEMSSEDimensionsRequest
                 * @return DescribeTDEMSSEDimensionsOutcome
                 */
                DescribeTDEMSSEDimensionsOutcome DescribeTDEMSSEDimensions(const Model::DescribeTDEMSSEDimensionsRequest &request);
                void DescribeTDEMSSEDimensionsAsync(const Model::DescribeTDEMSSEDimensionsRequest& request, const DescribeTDEMSSEDimensionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTDEMSSEDimensionsOutcomeCallable DescribeTDEMSSEDimensionsCallable(const Model::DescribeTDEMSSEDimensionsRequest& request);

                /**
                 *返回吞吐率、首次消息时延或流畅度的分档分布。档位左闭右开，最后一档有限区间右端闭合，超出右端的样本进入溢出档。错误率与卡死率返回 InvalidParameter。
                 * @param req DescribeTDEMSSEDistributionRequest
                 * @return DescribeTDEMSSEDistributionOutcome
                 */
                DescribeTDEMSSEDistributionOutcome DescribeTDEMSSEDistribution(const Model::DescribeTDEMSSEDistributionRequest &request);
                void DescribeTDEMSSEDistributionAsync(const Model::DescribeTDEMSSEDistributionRequest& request, const DescribeTDEMSSEDistributionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTDEMSSEDistributionOutcomeCallable DescribeTDEMSSEDistributionCallable(const Model::DescribeTDEMSSEDistributionRequest& request);

                /**
                 *返回吞吐率、首次消息时延或流畅度在整个时间窗及各时间桶上的平均值和 P50、P75、P95、P99。错误率与卡死率返回 InvalidParameter。
                 * @param req DescribeTDEMSSEPercentileRequest
                 * @return DescribeTDEMSSEPercentileOutcome
                 */
                DescribeTDEMSSEPercentileOutcome DescribeTDEMSSEPercentile(const Model::DescribeTDEMSSEPercentileRequest &request);
                void DescribeTDEMSSEPercentileAsync(const Model::DescribeTDEMSSEPercentileRequest& request, const DescribeTDEMSSEPercentileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTDEMSSEPercentileOutcomeCallable DescribeTDEMSSEPercentileCallable(const Model::DescribeTDEMSSEPercentileRequest& request);

                /**
                 *查询指定应用与时间窗内的大模型对话汇总，包含对话次数、token 总数、吞吐率、首次消息时延、错误率、卡死率和流畅度。只读 tdem.tdem_events 中 event_type 为 sse_call 的事件。
                 * @param req DescribeTDEMSSESummaryRequest
                 * @return DescribeTDEMSSESummaryOutcome
                 */
                DescribeTDEMSSESummaryOutcome DescribeTDEMSSESummary(const Model::DescribeTDEMSSESummaryRequest &request);
                void DescribeTDEMSSESummaryAsync(const Model::DescribeTDEMSSESummaryRequest& request, const DescribeTDEMSSESummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTDEMSSESummaryOutcomeCallable DescribeTDEMSSESummaryCallable(const Model::DescribeTDEMSSESummaryRequest& request);

                /**
                 *按时间桶返回大模型对话趋势。overall 填充 Points，其他维度按整个窗口的指标值从高到低取 TopN 并填充 Series。
                 * @param req DescribeTDEMSSETrendRequest
                 * @return DescribeTDEMSSETrendOutcome
                 */
                DescribeTDEMSSETrendOutcome DescribeTDEMSSETrend(const Model::DescribeTDEMSSETrendRequest &request);
                void DescribeTDEMSSETrendAsync(const Model::DescribeTDEMSSETrendRequest& request, const DescribeTDEMSSETrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTDEMSSETrendOutcomeCallable DescribeTDEMSSETrendCallable(const Model::DescribeTDEMSSETrendRequest& request);

                /**
                 *读取当前生效的 Web 规则化采样文档。ProjectId 必填且 > 0。无行则返回内置缺省（Event.Enabled=true、Types 空、Replay 关闭且体验率 0），不自动插库。SnapshotId 无快照为 0。query handler 做 PascalCase ↔ 存储 snake_case 映射。非 Web 应用不得走本接口，继续 DescribeSampleRate。
                 * @param req DescribeTDEMSampleConfigRequest
                 * @return DescribeTDEMSampleConfigOutcome
                 */
                DescribeTDEMSampleConfigOutcome DescribeTDEMSampleConfig(const Model::DescribeTDEMSampleConfigRequest &request);
                void DescribeTDEMSampleConfigAsync(const Model::DescribeTDEMSampleConfigRequest& request, const DescribeTDEMSampleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTDEMSampleConfigOutcomeCallable DescribeTDEMSampleConfigCallable(const Model::DescribeTDEMSampleConfigRequest& request);

                /**
                 *查询单个应用的采集采样率与会话回放采样率。替代已废弃的 DescribeSampleRate；AppId 为 string。
                 * @param req DescribeTDEMSampleRateRequest
                 * @return DescribeTDEMSampleRateOutcome
                 */
                DescribeTDEMSampleRateOutcome DescribeTDEMSampleRate(const Model::DescribeTDEMSampleRateRequest &request);
                void DescribeTDEMSampleRateAsync(const Model::DescribeTDEMSampleRateRequest& request, const DescribeTDEMSampleRateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTDEMSampleRateOutcomeCallable DescribeTDEMSampleRateCallable(const Model::DescribeTDEMSampleRateRequest& request);

                /**
                 *获取回放时间线数据
                 * @param req DescribeTDEMSessionReplayTimelineRequest
                 * @return DescribeTDEMSessionReplayTimelineOutcome
                 */
                DescribeTDEMSessionReplayTimelineOutcome DescribeTDEMSessionReplayTimeline(const Model::DescribeTDEMSessionReplayTimelineRequest &request);
                void DescribeTDEMSessionReplayTimelineAsync(const Model::DescribeTDEMSessionReplayTimelineRequest& request, const DescribeTDEMSessionReplayTimelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTDEMSessionReplayTimelineOutcomeCallable DescribeTDEMSessionReplayTimelineCallable(const Model::DescribeTDEMSessionReplayTimelineRequest& request);

                /**
                 *按业务系统/应用查询用量明细（含行趋势、端类型、删除/停用标记）。Keyword 匹配业务系统名、应用名或应用 ID。
                 * @param req DescribeTDEMUsageDetailRequest
                 * @return DescribeTDEMUsageDetailOutcome
                 */
                DescribeTDEMUsageDetailOutcome DescribeTDEMUsageDetail(const Model::DescribeTDEMUsageDetailRequest &request);
                void DescribeTDEMUsageDetailAsync(const Model::DescribeTDEMUsageDetailRequest& request, const DescribeTDEMUsageDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTDEMUsageDetailOutcomeCallable DescribeTDEMUsageDetailCallable(const Model::DescribeTDEMUsageDetailRequest& request);

                /**
                 *查询当前使用者名下（超管为全部）上报总量与趋势。时间 StartTime/EndTime 为 YYYY-MM-DD HH:00:00 小时对齐。不要求请求体带 AppId。
                 * @param req DescribeTDEMUsageSummaryRequest
                 * @return DescribeTDEMUsageSummaryOutcome
                 */
                DescribeTDEMUsageSummaryOutcome DescribeTDEMUsageSummary(const Model::DescribeTDEMUsageSummaryRequest &request);
                void DescribeTDEMUsageSummaryAsync(const Model::DescribeTDEMUsageSummaryRequest& request, const DescribeTDEMUsageSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTDEMUsageSummaryOutcomeCallable DescribeTDEMUsageSummaryCallable(const Model::DescribeTDEMUsageSummaryRequest& request);

                /**
                 *查询片区信息
                 * @param req DescribeTawAreasRequest
                 * @return DescribeTawAreasOutcome
                 */
                DescribeTawAreasOutcome DescribeTawAreas(const Model::DescribeTawAreasRequest &request);
                void DescribeTawAreasAsync(const Model::DescribeTawAreasRequest& request, const DescribeTawAreasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTawAreasOutcomeCallable DescribeTawAreasCallable(const Model::DescribeTawAreasRequest& request);

                /**
                 *查询实例信息
                 * @param req DescribeTawInstancesRequest
                 * @return DescribeTawInstancesOutcome
                 */
                DescribeTawInstancesOutcome DescribeTawInstances(const Model::DescribeTawInstancesRequest &request);
                void DescribeTawInstancesAsync(const Model::DescribeTawInstancesRequest& request, const DescribeTawInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTawInstancesOutcomeCallable DescribeTawInstancesCallable(const Model::DescribeTawInstancesRequest& request);

                /**
                 *查询令牌
                 * @param req DescribeTokenRequest
                 * @return DescribeTokenOutcome
                 */
                DescribeTokenOutcome DescribeToken(const Model::DescribeTokenRequest &request);
                void DescribeTokenAsync(const Model::DescribeTokenRequest& request, const DescribeTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTokenOutcomeCallable DescribeTokenCallable(const Model::DescribeTokenRequest& request);

                /**
                 *查询top问题列表
                 * @param req DescribeTopIssuesRequest
                 * @return DescribeTopIssuesOutcome
                 */
                DescribeTopIssuesOutcome DescribeTopIssues(const Model::DescribeTopIssuesRequest &request);
                void DescribeTopIssuesAsync(const Model::DescribeTopIssuesRequest& request, const DescribeTopIssuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopIssuesOutcomeCallable DescribeTopIssuesCallable(const Model::DescribeTopIssuesRequest& request);

                /**
                 *获取用户旅程数据
                 * @param req DescribeUserJourneySanKeyRequest
                 * @return DescribeUserJourneySanKeyOutcome
                 */
                DescribeUserJourneySanKeyOutcome DescribeUserJourneySanKey(const Model::DescribeUserJourneySanKeyRequest &request);
                void DescribeUserJourneySanKeyAsync(const Model::DescribeUserJourneySanKeyRequest& request, const DescribeUserJourneySanKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserJourneySanKeyOutcomeCallable DescribeUserJourneySanKeyCallable(const Model::DescribeUserJourneySanKeyRequest& request);

                /**
                 *获取项目下的UV列表
                 * @param req DescribeUvListRequest
                 * @return DescribeUvListOutcome
                 */
                DescribeUvListOutcome DescribeUvList(const Model::DescribeUvListRequest &request);
                void DescribeUvListAsync(const Model::DescribeUvListRequest& request, const DescribeUvListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUvListOutcomeCallable DescribeUvListCallable(const Model::DescribeUvListRequest& request);

                /**
                 *获取白名单列表
                 * @param req DescribeWhitelistsRequest
                 * @return DescribeWhitelistsOutcome
                 */
                DescribeWhitelistsOutcome DescribeWhitelists(const Model::DescribeWhitelistsRequest &request);
                void DescribeWhitelistsAsync(const Model::DescribeWhitelistsRequest& request, const DescribeWhitelistsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWhitelistsOutcomeCallable DescribeWhitelistsCallable(const Model::DescribeWhitelistsRequest& request);

                /**
                 *修改字段配置规则
                 * @param req ModifyFieldTransformRuleRequest
                 * @return ModifyFieldTransformRuleOutcome
                 */
                ModifyFieldTransformRuleOutcome ModifyFieldTransformRule(const Model::ModifyFieldTransformRuleRequest &request);
                void ModifyFieldTransformRuleAsync(const Model::ModifyFieldTransformRuleRequest& request, const ModifyFieldTransformRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyFieldTransformRuleOutcomeCallable ModifyFieldTransformRuleCallable(const Model::ModifyFieldTransformRuleRequest& request);

                /**
                 *修改 RUM 业务系统
                 * @param req ModifyInstanceRequest
                 * @return ModifyInstanceOutcome
                 */
                ModifyInstanceOutcome ModifyInstance(const Model::ModifyInstanceRequest &request);
                void ModifyInstanceAsync(const Model::ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceOutcomeCallable ModifyInstanceCallable(const Model::ModifyInstanceRequest& request);

                /**
                 *更新 Issue 状态，支持 resolve、ignore、reopen 等状态流转动作
                 * @param req ModifyIssueStatusRequest
                 * @return ModifyIssueStatusOutcome
                 */
                ModifyIssueStatusOutcome ModifyIssueStatus(const Model::ModifyIssueStatusRequest &request);
                void ModifyIssueStatusAsync(const Model::ModifyIssueStatusRequest& request, const ModifyIssueStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyIssueStatusOutcomeCallable ModifyIssueStatusCallable(const Model::ModifyIssueStatusRequest& request);

                /**
                 *更新回放包元数据，仅支持改Release，不重编译。换源码请再调UploadMiniProgramSource。
                 * @param req ModifyMiniProgramReplayPackRequest
                 * @return ModifyMiniProgramReplayPackOutcome
                 */
                ModifyMiniProgramReplayPackOutcome ModifyMiniProgramReplayPack(const Model::ModifyMiniProgramReplayPackRequest &request);
                void ModifyMiniProgramReplayPackAsync(const Model::ModifyMiniProgramReplayPackRequest& request, const ModifyMiniProgramReplayPackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMiniProgramReplayPackOutcomeCallable ModifyMiniProgramReplayPackCallable(const Model::ModifyMiniProgramReplayPackRequest& request);

                /**
                 *修改 RUM 应用信息
                 * @param req ModifyProjectRequest
                 * @return ModifyProjectOutcome
                 */
                ModifyProjectOutcome ModifyProject(const Model::ModifyProjectRequest &request);
                void ModifyProjectAsync(const Model::ModifyProjectRequest& request, const ModifyProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyProjectOutcomeCallable ModifyProjectCallable(const Model::ModifyProjectRequest& request);

                /**
                 *新增修改限流
                 * @param req ModifyProjectLimitRequest
                 * @return ModifyProjectLimitOutcome
                 */
                ModifyProjectLimitOutcome ModifyProjectLimit(const Model::ModifyProjectLimitRequest &request);
                void ModifyProjectLimitAsync(const Model::ModifyProjectLimitRequest& request, const ModifyProjectLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyProjectLimitOutcomeCallable ModifyProjectLimitCallable(const Model::ModifyProjectLimitRequest& request);

                /**
                 *配置tdem采样率
                 * @param req ModifySampleRateRequest
                 * @return ModifySampleRateOutcome
                 */
                ModifySampleRateOutcome ModifySampleRate(const Model::ModifySampleRateRequest &request);
                void ModifySampleRateAsync(const Model::ModifySampleRateRequest& request, const ModifySampleRateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySampleRateOutcomeCallable ModifySampleRateCallable(const Model::ModifySampleRateRequest& request);

                /**
                 *修改应用，仅传需修改字段。AppId 必填。
                 * @param req ModifyTDEMApplicationRequest
                 * @return ModifyTDEMApplicationOutcome
                 */
                ModifyTDEMApplicationOutcome ModifyTDEMApplication(const Model::ModifyTDEMApplicationRequest &request);
                void ModifyTDEMApplicationAsync(const Model::ModifyTDEMApplicationRequest& request, const ModifyTDEMApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTDEMApplicationOutcomeCallable ModifyTDEMApplicationCallable(const Model::ModifyTDEMApplicationRequest& request);

                /**
                 *修改业务系统名称或描述。越权 UnauthorizedOperation；不存在或已删除 ResourceNotFound。
                 * @param req ModifyTDEMBusinessSystemRequest
                 * @return ModifyTDEMBusinessSystemOutcome
                 */
                ModifyTDEMBusinessSystemOutcome ModifyTDEMBusinessSystem(const Model::ModifyTDEMBusinessSystemRequest &request);
                void ModifyTDEMBusinessSystemAsync(const Model::ModifyTDEMBusinessSystemRequest& request, const ModifyTDEMBusinessSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTDEMBusinessSystemOutcomeCallable ModifyTDEMBusinessSystemCallable(const Model::ModifyTDEMBusinessSystemRequest& request);

                /**
                 *修改拨测任务。未出现在请求中的字段保持原值。启动范围传空字符串表示清空该项。Type 和 ExecutionTime 创建后不可修改。暂停和恢复通过 Status 完成，不提供单独的状态接口。
                 * @param req ModifyTDEMDialTaskRequest
                 * @return ModifyTDEMDialTaskOutcome
                 */
                ModifyTDEMDialTaskOutcome ModifyTDEMDialTask(const Model::ModifyTDEMDialTaskRequest &request);
                void ModifyTDEMDialTaskAsync(const Model::ModifyTDEMDialTaskRequest& request, const ModifyTDEMDialTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTDEMDialTaskOutcomeCallable ModifyTDEMDialTaskCallable(const Model::ModifyTDEMDialTaskRequest& request);

                /**
                 *按规则 Id 修改字段值替换规则。替代已废弃的 ModifyFieldTransformRule；AppId 为 string。
                 * @param req ModifyTDEMFieldTransformRuleRequest
                 * @return ModifyTDEMFieldTransformRuleOutcome
                 */
                ModifyTDEMFieldTransformRuleOutcome ModifyTDEMFieldTransformRule(const Model::ModifyTDEMFieldTransformRuleRequest &request);
                void ModifyTDEMFieldTransformRuleAsync(const Model::ModifyTDEMFieldTransformRuleRequest& request, const ModifyTDEMFieldTransformRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTDEMFieldTransformRuleOutcomeCallable ModifyTDEMFieldTransformRuleCallable(const Model::ModifyTDEMFieldTransformRuleRequest& request);

                /**
                 *修改漏斗
                 * @param req ModifyTDEMFunnelRequest
                 * @return ModifyTDEMFunnelOutcome
                 */
                ModifyTDEMFunnelOutcome ModifyTDEMFunnel(const Model::ModifyTDEMFunnelRequest &request);
                void ModifyTDEMFunnelAsync(const Model::ModifyTDEMFunnelRequest& request, const ModifyTDEMFunnelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTDEMFunnelOutcomeCallable ModifyTDEMFunnelCallable(const Model::ModifyTDEMFunnelRequest& request);

                /**
                 *整页保存 Web 规则化采样文档：校验 → INSERT 快照 → UPSERT 当前行 → 刷新 Redis 下发缓存。不写 tdem_sample_rate。采样率 0–100、最多两位小数；规则 Conditions 不可为空；Types 含非闭集 key 返回 InvalidParameter。校验失败不写库。无 Restore/Import/Export/Diff。
                 * @param req ModifyTDEMSampleConfigRequest
                 * @return ModifyTDEMSampleConfigOutcome
                 */
                ModifyTDEMSampleConfigOutcome ModifyTDEMSampleConfig(const Model::ModifyTDEMSampleConfigRequest &request);
                void ModifyTDEMSampleConfigAsync(const Model::ModifyTDEMSampleConfigRequest& request, const ModifyTDEMSampleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTDEMSampleConfigOutcomeCallable ModifyTDEMSampleConfigCallable(const Model::ModifyTDEMSampleConfigRequest& request);

                /**
                 *设置或更新应用采集采样率；ReplaySampleRate 可选。替代已废弃的 ModifySampleRate；AppId 为 string。
                 * @param req ModifyTDEMSampleRateRequest
                 * @return ModifyTDEMSampleRateOutcome
                 */
                ModifyTDEMSampleRateOutcome ModifyTDEMSampleRate(const Model::ModifyTDEMSampleRateRequest &request);
                void ModifyTDEMSampleRateAsync(const Model::ModifyTDEMSampleRateRequest& request, const ModifyTDEMSampleRateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTDEMSampleRateOutcomeCallable ModifyTDEMSampleRateCallable(const Model::ModifyTDEMSampleRateRequest& request);

                /**
                 *根据步骤配置直接生成漏斗预览报告（不保存漏斗，不需要FunnelId）
                 * @param req PreviewTDEMFunnelReportRequest
                 * @return PreviewTDEMFunnelReportOutcome
                 */
                PreviewTDEMFunnelReportOutcome PreviewTDEMFunnelReport(const Model::PreviewTDEMFunnelReportRequest &request);
                void PreviewTDEMFunnelReportAsync(const Model::PreviewTDEMFunnelReportRequest& request, const PreviewTDEMFunnelReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PreviewTDEMFunnelReportOutcomeCallable PreviewTDEMFunnelReportCallable(const Model::PreviewTDEMFunnelReportRequest& request);

                /**
                 *恢复 RUM 业务系统，恢复后，用户可以正常使用和上报数据
                 * @param req ResumeInstanceRequest
                 * @return ResumeInstanceOutcome
                 */
                ResumeInstanceOutcome ResumeInstance(const Model::ResumeInstanceRequest &request);
                void ResumeInstanceAsync(const Model::ResumeInstanceRequest& request, const ResumeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResumeInstanceOutcomeCallable ResumeInstanceCallable(const Model::ResumeInstanceRequest& request);

                /**
                 *恢复应用使用与上报数据
                 * @param req ResumeProjectRequest
                 * @return ResumeProjectOutcome
                 */
                ResumeProjectOutcome ResumeProject(const Model::ResumeProjectRequest &request);
                void ResumeProjectAsync(const Model::ResumeProjectRequest& request, const ResumeProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResumeProjectOutcomeCallable ResumeProjectCallable(const Model::ResumeProjectRequest& request);

                /**
                 *恢复已停止的应用，Status 变为 2。
                 * @param req ResumeTDEMApplicationRequest
                 * @return ResumeTDEMApplicationOutcome
                 */
                ResumeTDEMApplicationOutcome ResumeTDEMApplication(const Model::ResumeTDEMApplicationRequest &request);
                void ResumeTDEMApplicationAsync(const Model::ResumeTDEMApplicationRequest& request, const ResumeTDEMApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResumeTDEMApplicationOutcomeCallable ResumeTDEMApplicationCallable(const Model::ResumeTDEMApplicationRequest& request);

                /**
                 *停止实例
                 * @param req StopInstanceRequest
                 * @return StopInstanceOutcome
                 */
                StopInstanceOutcome StopInstance(const Model::StopInstanceRequest &request);
                void StopInstanceAsync(const Model::StopInstanceRequest& request, const StopInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopInstanceOutcomeCallable StopInstanceCallable(const Model::StopInstanceRequest& request);

                /**
                 *停止项目使用与上报数据
                 * @param req StopProjectRequest
                 * @return StopProjectOutcome
                 */
                StopProjectOutcome StopProject(const Model::StopProjectRequest &request);
                void StopProjectAsync(const Model::StopProjectRequest& request, const StopProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopProjectOutcomeCallable StopProjectCallable(const Model::StopProjectRequest& request);

                /**
                 *停止应用采集，Status 变为 6。
                 * @param req StopTDEMApplicationRequest
                 * @return StopTDEMApplicationOutcome
                 */
                StopTDEMApplicationOutcome StopTDEMApplication(const Model::StopTDEMApplicationRequest &request);
                void StopTDEMApplicationAsync(const Model::StopTDEMApplicationRequest& request, const StopTDEMApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopTDEMApplicationOutcomeCallable StopTDEMApplicationCallable(const Model::StopTDEMApplicationRequest& request);

                /**
                 *上传微信小程序源码zip并同步编译回放包。控制台传FileBase64；zip需含app.json，跳过node_modules。同AppId+BundleHash且已ready则幂等。
                 * @param req UploadMiniProgramSourceRequest
                 * @return UploadMiniProgramSourceOutcome
                 */
                UploadMiniProgramSourceOutcome UploadMiniProgramSource(const Model::UploadMiniProgramSourceRequest &request);
                void UploadMiniProgramSourceAsync(const Model::UploadMiniProgramSourceRequest& request, const UploadMiniProgramSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadMiniProgramSourceOutcomeCallable UploadMiniProgramSourceCallable(const Model::UploadMiniProgramSourceRequest& request);

                /**
                 *登记已上传的符号制品。请先获取上传凭证并将文件上传到 COS。
                 * @param req UploadSymbolArtifactRequest
                 * @return UploadSymbolArtifactOutcome
                 */
                UploadSymbolArtifactOutcome UploadSymbolArtifact(const Model::UploadSymbolArtifactRequest &request);
                void UploadSymbolArtifactAsync(const Model::UploadSymbolArtifactRequest& request, const UploadSymbolArtifactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadSymbolArtifactOutcomeCallable UploadSymbolArtifactCallable(const Model::UploadSymbolArtifactRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_RUMCLIENT_H_
