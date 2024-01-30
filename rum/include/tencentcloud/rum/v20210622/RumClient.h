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

#ifndef TENCENTCLOUD_RUM_V20210622_RUMCLIENT_H_
#define TENCENTCLOUD_RUM_V20210622_RUMCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/rum/v20210622/model/CreateProjectRequest.h>
#include <tencentcloud/rum/v20210622/model/CreateProjectResponse.h>
#include <tencentcloud/rum/v20210622/model/CreateReleaseFileRequest.h>
#include <tencentcloud/rum/v20210622/model/CreateReleaseFileResponse.h>
#include <tencentcloud/rum/v20210622/model/CreateStarProjectRequest.h>
#include <tencentcloud/rum/v20210622/model/CreateStarProjectResponse.h>
#include <tencentcloud/rum/v20210622/model/CreateTawInstanceRequest.h>
#include <tencentcloud/rum/v20210622/model/CreateTawInstanceResponse.h>
#include <tencentcloud/rum/v20210622/model/CreateWhitelistRequest.h>
#include <tencentcloud/rum/v20210622/model/CreateWhitelistResponse.h>
#include <tencentcloud/rum/v20210622/model/DeleteInstanceRequest.h>
#include <tencentcloud/rum/v20210622/model/DeleteInstanceResponse.h>
#include <tencentcloud/rum/v20210622/model/DeleteProjectRequest.h>
#include <tencentcloud/rum/v20210622/model/DeleteProjectResponse.h>
#include <tencentcloud/rum/v20210622/model/DeleteReleaseFileRequest.h>
#include <tencentcloud/rum/v20210622/model/DeleteReleaseFileResponse.h>
#include <tencentcloud/rum/v20210622/model/DeleteStarProjectRequest.h>
#include <tencentcloud/rum/v20210622/model/DeleteStarProjectResponse.h>
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
#include <tencentcloud/rum/v20210622/model/DescribeDataRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataCustomUrlRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataCustomUrlResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataEventUrlRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataEventUrlResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataFetchProjectRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataFetchProjectResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataFetchUrlRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataFetchUrlResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataFetchUrlInfoRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataFetchUrlInfoResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataLogUrlInfoRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataLogUrlInfoResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataLogUrlStatisticsRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataLogUrlStatisticsResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataPerformancePageRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataPerformancePageResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataPvUrlInfoRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataPvUrlInfoResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataPvUrlStatisticsRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataPvUrlStatisticsResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataReportCountRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataReportCountResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataSetUrlStatisticsRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataSetUrlStatisticsResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataStaticProjectRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataStaticProjectResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataStaticResourceRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataStaticResourceResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataStaticUrlRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataStaticUrlResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataWebVitalsPageRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataWebVitalsPageResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeErrorRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeErrorResponse.h>
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
#include <tencentcloud/rum/v20210622/model/DescribeRumGroupLogRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeRumGroupLogResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeRumLogExportRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeRumLogExportResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeRumLogExportsRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeRumLogExportsResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeRumLogListRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeRumLogListResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeRumStatsLogListRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeRumStatsLogListResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeScoresRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeScoresResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeTawAreasRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeTawAreasResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeTawInstancesRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeTawInstancesResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeUvListRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeUvListResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeWhitelistsRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeWhitelistsResponse.h>
#include <tencentcloud/rum/v20210622/model/ModifyInstanceRequest.h>
#include <tencentcloud/rum/v20210622/model/ModifyInstanceResponse.h>
#include <tencentcloud/rum/v20210622/model/ModifyProjectRequest.h>
#include <tencentcloud/rum/v20210622/model/ModifyProjectResponse.h>
#include <tencentcloud/rum/v20210622/model/ModifyProjectLimitRequest.h>
#include <tencentcloud/rum/v20210622/model/ModifyProjectLimitResponse.h>
#include <tencentcloud/rum/v20210622/model/ResumeInstanceRequest.h>
#include <tencentcloud/rum/v20210622/model/ResumeInstanceResponse.h>
#include <tencentcloud/rum/v20210622/model/ResumeProjectRequest.h>
#include <tencentcloud/rum/v20210622/model/ResumeProjectResponse.h>
#include <tencentcloud/rum/v20210622/model/StopInstanceRequest.h>
#include <tencentcloud/rum/v20210622/model/StopInstanceResponse.h>
#include <tencentcloud/rum/v20210622/model/StopProjectRequest.h>
#include <tencentcloud/rum/v20210622/model/StopProjectResponse.h>


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

                typedef Outcome<Core::Error, Model::CreateProjectResponse> CreateProjectOutcome;
                typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::CreateProjectRequest&, CreateProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateReleaseFileResponse> CreateReleaseFileOutcome;
                typedef std::future<CreateReleaseFileOutcome> CreateReleaseFileOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::CreateReleaseFileRequest&, CreateReleaseFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateReleaseFileAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStarProjectResponse> CreateStarProjectOutcome;
                typedef std::future<CreateStarProjectOutcome> CreateStarProjectOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::CreateStarProjectRequest&, CreateStarProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStarProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTawInstanceResponse> CreateTawInstanceOutcome;
                typedef std::future<CreateTawInstanceOutcome> CreateTawInstanceOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::CreateTawInstanceRequest&, CreateTawInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTawInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWhitelistResponse> CreateWhitelistOutcome;
                typedef std::future<CreateWhitelistOutcome> CreateWhitelistOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::CreateWhitelistRequest&, CreateWhitelistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWhitelistAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteInstanceResponse> DeleteInstanceOutcome;
                typedef std::future<DeleteInstanceOutcome> DeleteInstanceOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DeleteInstanceRequest&, DeleteInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteProjectResponse> DeleteProjectOutcome;
                typedef std::future<DeleteProjectOutcome> DeleteProjectOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DeleteProjectRequest&, DeleteProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteReleaseFileResponse> DeleteReleaseFileOutcome;
                typedef std::future<DeleteReleaseFileOutcome> DeleteReleaseFileOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DeleteReleaseFileRequest&, DeleteReleaseFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteReleaseFileAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteStarProjectResponse> DeleteStarProjectOutcome;
                typedef std::future<DeleteStarProjectOutcome> DeleteStarProjectOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DeleteStarProjectRequest&, DeleteStarProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStarProjectAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeDataResponse> DescribeDataOutcome;
                typedef std::future<DescribeDataOutcome> DescribeDataOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataRequest&, DescribeDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataCustomUrlResponse> DescribeDataCustomUrlOutcome;
                typedef std::future<DescribeDataCustomUrlOutcome> DescribeDataCustomUrlOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataCustomUrlRequest&, DescribeDataCustomUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataCustomUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataEventUrlResponse> DescribeDataEventUrlOutcome;
                typedef std::future<DescribeDataEventUrlOutcome> DescribeDataEventUrlOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataEventUrlRequest&, DescribeDataEventUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataEventUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataFetchProjectResponse> DescribeDataFetchProjectOutcome;
                typedef std::future<DescribeDataFetchProjectOutcome> DescribeDataFetchProjectOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataFetchProjectRequest&, DescribeDataFetchProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataFetchProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataFetchUrlResponse> DescribeDataFetchUrlOutcome;
                typedef std::future<DescribeDataFetchUrlOutcome> DescribeDataFetchUrlOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataFetchUrlRequest&, DescribeDataFetchUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataFetchUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataFetchUrlInfoResponse> DescribeDataFetchUrlInfoOutcome;
                typedef std::future<DescribeDataFetchUrlInfoOutcome> DescribeDataFetchUrlInfoOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataFetchUrlInfoRequest&, DescribeDataFetchUrlInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataFetchUrlInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataLogUrlInfoResponse> DescribeDataLogUrlInfoOutcome;
                typedef std::future<DescribeDataLogUrlInfoOutcome> DescribeDataLogUrlInfoOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataLogUrlInfoRequest&, DescribeDataLogUrlInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataLogUrlInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataLogUrlStatisticsResponse> DescribeDataLogUrlStatisticsOutcome;
                typedef std::future<DescribeDataLogUrlStatisticsOutcome> DescribeDataLogUrlStatisticsOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataLogUrlStatisticsRequest&, DescribeDataLogUrlStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataLogUrlStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataPerformancePageResponse> DescribeDataPerformancePageOutcome;
                typedef std::future<DescribeDataPerformancePageOutcome> DescribeDataPerformancePageOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataPerformancePageRequest&, DescribeDataPerformancePageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataPerformancePageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataPvUrlInfoResponse> DescribeDataPvUrlInfoOutcome;
                typedef std::future<DescribeDataPvUrlInfoOutcome> DescribeDataPvUrlInfoOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataPvUrlInfoRequest&, DescribeDataPvUrlInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataPvUrlInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataPvUrlStatisticsResponse> DescribeDataPvUrlStatisticsOutcome;
                typedef std::future<DescribeDataPvUrlStatisticsOutcome> DescribeDataPvUrlStatisticsOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataPvUrlStatisticsRequest&, DescribeDataPvUrlStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataPvUrlStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataReportCountResponse> DescribeDataReportCountOutcome;
                typedef std::future<DescribeDataReportCountOutcome> DescribeDataReportCountOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataReportCountRequest&, DescribeDataReportCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataReportCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataSetUrlStatisticsResponse> DescribeDataSetUrlStatisticsOutcome;
                typedef std::future<DescribeDataSetUrlStatisticsOutcome> DescribeDataSetUrlStatisticsOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataSetUrlStatisticsRequest&, DescribeDataSetUrlStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataSetUrlStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataStaticProjectResponse> DescribeDataStaticProjectOutcome;
                typedef std::future<DescribeDataStaticProjectOutcome> DescribeDataStaticProjectOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataStaticProjectRequest&, DescribeDataStaticProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataStaticProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataStaticResourceResponse> DescribeDataStaticResourceOutcome;
                typedef std::future<DescribeDataStaticResourceOutcome> DescribeDataStaticResourceOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataStaticResourceRequest&, DescribeDataStaticResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataStaticResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataStaticUrlResponse> DescribeDataStaticUrlOutcome;
                typedef std::future<DescribeDataStaticUrlOutcome> DescribeDataStaticUrlOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataStaticUrlRequest&, DescribeDataStaticUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataStaticUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataWebVitalsPageResponse> DescribeDataWebVitalsPageOutcome;
                typedef std::future<DescribeDataWebVitalsPageOutcome> DescribeDataWebVitalsPageOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataWebVitalsPageRequest&, DescribeDataWebVitalsPageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataWebVitalsPageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeErrorResponse> DescribeErrorOutcome;
                typedef std::future<DescribeErrorOutcome> DescribeErrorOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeErrorRequest&, DescribeErrorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeErrorAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeRumGroupLogResponse> DescribeRumGroupLogOutcome;
                typedef std::future<DescribeRumGroupLogOutcome> DescribeRumGroupLogOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeRumGroupLogRequest&, DescribeRumGroupLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRumGroupLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRumLogExportResponse> DescribeRumLogExportOutcome;
                typedef std::future<DescribeRumLogExportOutcome> DescribeRumLogExportOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeRumLogExportRequest&, DescribeRumLogExportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRumLogExportAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRumLogExportsResponse> DescribeRumLogExportsOutcome;
                typedef std::future<DescribeRumLogExportsOutcome> DescribeRumLogExportsOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeRumLogExportsRequest&, DescribeRumLogExportsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRumLogExportsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRumLogListResponse> DescribeRumLogListOutcome;
                typedef std::future<DescribeRumLogListOutcome> DescribeRumLogListOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeRumLogListRequest&, DescribeRumLogListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRumLogListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRumStatsLogListResponse> DescribeRumStatsLogListOutcome;
                typedef std::future<DescribeRumStatsLogListOutcome> DescribeRumStatsLogListOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeRumStatsLogListRequest&, DescribeRumStatsLogListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRumStatsLogListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScoresResponse> DescribeScoresOutcome;
                typedef std::future<DescribeScoresOutcome> DescribeScoresOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeScoresRequest&, DescribeScoresOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScoresAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTawAreasResponse> DescribeTawAreasOutcome;
                typedef std::future<DescribeTawAreasOutcome> DescribeTawAreasOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeTawAreasRequest&, DescribeTawAreasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTawAreasAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTawInstancesResponse> DescribeTawInstancesOutcome;
                typedef std::future<DescribeTawInstancesOutcome> DescribeTawInstancesOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeTawInstancesRequest&, DescribeTawInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTawInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUvListResponse> DescribeUvListOutcome;
                typedef std::future<DescribeUvListOutcome> DescribeUvListOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeUvListRequest&, DescribeUvListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUvListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWhitelistsResponse> DescribeWhitelistsOutcome;
                typedef std::future<DescribeWhitelistsOutcome> DescribeWhitelistsOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeWhitelistsRequest&, DescribeWhitelistsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWhitelistsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceResponse> ModifyInstanceOutcome;
                typedef std::future<ModifyInstanceOutcome> ModifyInstanceOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::ModifyInstanceRequest&, ModifyInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyProjectResponse> ModifyProjectOutcome;
                typedef std::future<ModifyProjectOutcome> ModifyProjectOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::ModifyProjectRequest&, ModifyProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyProjectLimitResponse> ModifyProjectLimitOutcome;
                typedef std::future<ModifyProjectLimitOutcome> ModifyProjectLimitOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::ModifyProjectLimitRequest&, ModifyProjectLimitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProjectLimitAsyncHandler;
                typedef Outcome<Core::Error, Model::ResumeInstanceResponse> ResumeInstanceOutcome;
                typedef std::future<ResumeInstanceOutcome> ResumeInstanceOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::ResumeInstanceRequest&, ResumeInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResumeInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ResumeProjectResponse> ResumeProjectOutcome;
                typedef std::future<ResumeProjectOutcome> ResumeProjectOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::ResumeProjectRequest&, ResumeProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResumeProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::StopInstanceResponse> StopInstanceOutcome;
                typedef std::future<StopInstanceOutcome> StopInstanceOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::StopInstanceRequest&, StopInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::StopProjectResponse> StopProjectOutcome;
                typedef std::future<StopProjectOutcome> StopProjectOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::StopProjectRequest&, StopProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopProjectAsyncHandler;



                /**
                 *创建 RUM 应用（归属于某个团队）
                 * @param req CreateProjectRequest
                 * @return CreateProjectOutcome
                 */
                CreateProjectOutcome CreateProject(const Model::CreateProjectRequest &request);
                void CreateProjectAsync(const Model::CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProjectOutcomeCallable CreateProjectCallable(const Model::CreateProjectRequest& request);

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
                 *创建 RUM 业务系统
                 * @param req CreateTawInstanceRequest
                 * @return CreateTawInstanceOutcome
                 */
                CreateTawInstanceOutcome CreateTawInstance(const Model::CreateTawInstanceRequest &request);
                void CreateTawInstanceAsync(const Model::CreateTawInstanceRequest& request, const CreateTawInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTawInstanceOutcomeCallable CreateTawInstanceCallable(const Model::CreateTawInstanceRequest& request);

                /**
                 *创建白名单
                 * @param req CreateWhitelistRequest
                 * @return CreateWhitelistOutcome
                 */
                CreateWhitelistOutcome CreateWhitelist(const Model::CreateWhitelistRequest &request);
                void CreateWhitelistAsync(const Model::CreateWhitelistRequest& request, const CreateWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWhitelistOutcomeCallable CreateWhitelistCallable(const Model::CreateWhitelistRequest& request);

                /**
                 *删除实例，谨慎操作，不可恢复
                 * @param req DeleteInstanceRequest
                 * @return DeleteInstanceOutcome
                 */
                DeleteInstanceOutcome DeleteInstance(const Model::DeleteInstanceRequest &request);
                void DeleteInstanceAsync(const Model::DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteInstanceOutcomeCallable DeleteInstanceCallable(const Model::DeleteInstanceRequest& request);

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
                 *转发monitor查询
                 * @param req DescribeDataRequest
                 * @return DescribeDataOutcome
                 */
                DescribeDataOutcome DescribeData(const Model::DescribeDataRequest &request);
                void DescribeDataAsync(const Model::DescribeDataRequest& request, const DescribeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataOutcomeCallable DescribeDataCallable(const Model::DescribeDataRequest& request);

                /**
                 *获取DescribeDataCustomUrl信息
                 * @param req DescribeDataCustomUrlRequest
                 * @return DescribeDataCustomUrlOutcome
                 */
                DescribeDataCustomUrlOutcome DescribeDataCustomUrl(const Model::DescribeDataCustomUrlRequest &request);
                void DescribeDataCustomUrlAsync(const Model::DescribeDataCustomUrlRequest& request, const DescribeDataCustomUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataCustomUrlOutcomeCallable DescribeDataCustomUrlCallable(const Model::DescribeDataCustomUrlRequest& request);

                /**
                 *获取DescribeDataEventUrl信息
                 * @param req DescribeDataEventUrlRequest
                 * @return DescribeDataEventUrlOutcome
                 */
                DescribeDataEventUrlOutcome DescribeDataEventUrl(const Model::DescribeDataEventUrlRequest &request);
                void DescribeDataEventUrlAsync(const Model::DescribeDataEventUrlRequest& request, const DescribeDataEventUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataEventUrlOutcomeCallable DescribeDataEventUrlCallable(const Model::DescribeDataEventUrlRequest& request);

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
                 *获取PerformancePage信息
                 * @param req DescribeDataPerformancePageRequest
                 * @return DescribeDataPerformancePageOutcome
                 */
                DescribeDataPerformancePageOutcome DescribeDataPerformancePage(const Model::DescribeDataPerformancePageRequest &request);
                void DescribeDataPerformancePageAsync(const Model::DescribeDataPerformancePageRequest& request, const DescribeDataPerformancePageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataPerformancePageOutcomeCallable DescribeDataPerformancePageCallable(const Model::DescribeDataPerformancePageRequest& request);

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
                 *获取项目上报量
                 * @param req DescribeDataReportCountRequest
                 * @return DescribeDataReportCountOutcome
                 */
                DescribeDataReportCountOutcome DescribeDataReportCount(const Model::DescribeDataReportCountRequest &request);
                void DescribeDataReportCountAsync(const Model::DescribeDataReportCountRequest& request, const DescribeDataReportCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataReportCountOutcomeCallable DescribeDataReportCountCallable(const Model::DescribeDataReportCountRequest& request);

                /**
                 *获取DescribeDataSetUrlStatistics信息
                 * @param req DescribeDataSetUrlStatisticsRequest
                 * @return DescribeDataSetUrlStatisticsOutcome
                 */
                DescribeDataSetUrlStatisticsOutcome DescribeDataSetUrlStatistics(const Model::DescribeDataSetUrlStatisticsRequest &request);
                void DescribeDataSetUrlStatisticsAsync(const Model::DescribeDataSetUrlStatisticsRequest& request, const DescribeDataSetUrlStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataSetUrlStatisticsOutcomeCallable DescribeDataSetUrlStatisticsCallable(const Model::DescribeDataSetUrlStatisticsRequest& request);

                /**
                 *获取DescribeDataStaticProject信息
                 * @param req DescribeDataStaticProjectRequest
                 * @return DescribeDataStaticProjectOutcome
                 */
                DescribeDataStaticProjectOutcome DescribeDataStaticProject(const Model::DescribeDataStaticProjectRequest &request);
                void DescribeDataStaticProjectAsync(const Model::DescribeDataStaticProjectRequest& request, const DescribeDataStaticProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataStaticProjectOutcomeCallable DescribeDataStaticProjectCallable(const Model::DescribeDataStaticProjectRequest& request);

                /**
                 *获取DescribeDataStaticResource信息
                 * @param req DescribeDataStaticResourceRequest
                 * @return DescribeDataStaticResourceOutcome
                 */
                DescribeDataStaticResourceOutcome DescribeDataStaticResource(const Model::DescribeDataStaticResourceRequest &request);
                void DescribeDataStaticResourceAsync(const Model::DescribeDataStaticResourceRequest& request, const DescribeDataStaticResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataStaticResourceOutcomeCallable DescribeDataStaticResourceCallable(const Model::DescribeDataStaticResourceRequest& request);

                /**
                 *获取DescribeDataStaticUrl信息
                 * @param req DescribeDataStaticUrlRequest
                 * @return DescribeDataStaticUrlOutcome
                 */
                DescribeDataStaticUrlOutcome DescribeDataStaticUrl(const Model::DescribeDataStaticUrlRequest &request);
                void DescribeDataStaticUrlAsync(const Model::DescribeDataStaticUrlRequest& request, const DescribeDataStaticUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataStaticUrlOutcomeCallable DescribeDataStaticUrlCallable(const Model::DescribeDataStaticUrlRequest& request);

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
                 *获取首页错误信息
                 * @param req DescribeErrorRequest
                 * @return DescribeErrorOutcome
                 */
                DescribeErrorOutcome DescribeError(const Model::DescribeErrorRequest &request);
                void DescribeErrorAsync(const Model::DescribeErrorRequest& request, const DescribeErrorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeErrorOutcomeCallable DescribeErrorCallable(const Model::DescribeErrorRequest& request);

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
                 *获取项目下的日志聚合信息
                 * @param req DescribeRumGroupLogRequest
                 * @return DescribeRumGroupLogOutcome
                 */
                DescribeRumGroupLogOutcome DescribeRumGroupLog(const Model::DescribeRumGroupLogRequest &request);
                void DescribeRumGroupLogAsync(const Model::DescribeRumGroupLogRequest& request, const DescribeRumGroupLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRumGroupLogOutcomeCallable DescribeRumGroupLogCallable(const Model::DescribeRumGroupLogRequest& request);

                /**
                 *获取项目下的日志列表（实例创建的项目下的日志列表）
                 * @param req DescribeRumLogExportRequest
                 * @return DescribeRumLogExportOutcome
                 */
                DescribeRumLogExportOutcome DescribeRumLogExport(const Model::DescribeRumLogExportRequest &request);
                void DescribeRumLogExportAsync(const Model::DescribeRumLogExportRequest& request, const DescribeRumLogExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRumLogExportOutcomeCallable DescribeRumLogExportCallable(const Model::DescribeRumLogExportRequest& request);

                /**
                 *获取项目下的日志导出列表
                 * @param req DescribeRumLogExportsRequest
                 * @return DescribeRumLogExportsOutcome
                 */
                DescribeRumLogExportsOutcome DescribeRumLogExports(const Model::DescribeRumLogExportsRequest &request);
                void DescribeRumLogExportsAsync(const Model::DescribeRumLogExportsRequest& request, const DescribeRumLogExportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRumLogExportsOutcomeCallable DescribeRumLogExportsCallable(const Model::DescribeRumLogExportsRequest& request);

                /**
                 *获取项目下的日志列表（实例创建的项目下的日志列表）
                 * @param req DescribeRumLogListRequest
                 * @return DescribeRumLogListOutcome
                 */
                DescribeRumLogListOutcome DescribeRumLogList(const Model::DescribeRumLogListRequest &request);
                void DescribeRumLogListAsync(const Model::DescribeRumLogListRequest& request, const DescribeRumLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRumLogListOutcomeCallable DescribeRumLogListCallable(const Model::DescribeRumLogListRequest& request);

                /**
                 *获取项目下的日志列表，分钟级
                 * @param req DescribeRumStatsLogListRequest
                 * @return DescribeRumStatsLogListOutcome
                 */
                DescribeRumStatsLogListOutcome DescribeRumStatsLogList(const Model::DescribeRumStatsLogListRequest &request);
                void DescribeRumStatsLogListAsync(const Model::DescribeRumStatsLogListRequest& request, const DescribeRumStatsLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRumStatsLogListOutcomeCallable DescribeRumStatsLogListCallable(const Model::DescribeRumStatsLogListRequest& request);

                /**
                 *获取首页分数列表
                 * @param req DescribeScoresRequest
                 * @return DescribeScoresOutcome
                 */
                DescribeScoresOutcome DescribeScores(const Model::DescribeScoresRequest &request);
                void DescribeScoresAsync(const Model::DescribeScoresRequest& request, const DescribeScoresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScoresOutcomeCallable DescribeScoresCallable(const Model::DescribeScoresRequest& request);

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
                 *修改 RUM 业务系统
                 * @param req ModifyInstanceRequest
                 * @return ModifyInstanceOutcome
                 */
                ModifyInstanceOutcome ModifyInstance(const Model::ModifyInstanceRequest &request);
                void ModifyInstanceAsync(const Model::ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceOutcomeCallable ModifyInstanceCallable(const Model::ModifyInstanceRequest& request);

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

            };
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_RUMCLIENT_H_
