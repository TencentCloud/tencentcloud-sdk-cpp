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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_DBBRAINCLIENT_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_DBBRAINCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/dbbrain/v20210527/model/AddUserContactRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/AddUserContactResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/CancelKillTaskRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/CancelKillTaskResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/CloseAuditServiceRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/CloseAuditServiceResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/CreateAuditLogFileRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/CreateAuditLogFileResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/CreateDBDiagReportTaskRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/CreateDBDiagReportTaskResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/CreateDBDiagReportUrlRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/CreateDBDiagReportUrlResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/CreateKillTaskRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/CreateKillTaskResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/CreateMailProfileRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/CreateMailProfileResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/CreateProxySessionKillTaskRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/CreateProxySessionKillTaskResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/CreateRedisBigKeyAnalysisTaskRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/CreateRedisBigKeyAnalysisTaskResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/CreateSchedulerMailProfileRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/CreateSchedulerMailProfileResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/CreateSecurityAuditLogExportTaskRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/CreateSecurityAuditLogExportTaskResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/CreateSqlFilterRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/CreateSqlFilterResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DeleteAuditLogFileRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DeleteAuditLogFileResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DeleteDBDiagReportTasksRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DeleteDBDiagReportTasksResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DeleteSecurityAuditLogExportTasksRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DeleteSecurityAuditLogExportTasksResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DeleteSqlFiltersRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DeleteSqlFiltersResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeAllUserContactRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeAllUserContactResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeAllUserGroupRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeAllUserGroupResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeAuditInstanceListRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeAuditInstanceListResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeAuditLogFilesRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeAuditLogFilesResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeDBDiagEventRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeDBDiagEventResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeDBDiagEventsRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeDBDiagEventsResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeDBDiagHistoryRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeDBDiagHistoryResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeDBDiagReportTasksRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeDBDiagReportTasksResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeDBSpaceStatusRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeDBSpaceStatusResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeDiagDBInstancesRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeDiagDBInstancesResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeHealthScoreRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeHealthScoreResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeMailProfileRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeMailProfileResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeMySqlProcessListRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeMySqlProcessListResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeNoPrimaryKeyTablesRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeNoPrimaryKeyTablesResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeProxyProcessStatisticsRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeProxyProcessStatisticsResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeProxySessionKillTasksRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeProxySessionKillTasksResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeRedisTopBigKeysRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeRedisTopBigKeysResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeRedisTopKeyPrefixListRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeRedisTopKeyPrefixListResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeSecurityAuditLogDownloadUrlsRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeSecurityAuditLogDownloadUrlsResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeSecurityAuditLogExportTasksRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeSecurityAuditLogExportTasksResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeSlowLogTimeSeriesStatsRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeSlowLogTimeSeriesStatsResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeSlowLogTopSqlsRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeSlowLogTopSqlsResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeSlowLogUserHostStatsRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeSlowLogUserHostStatsResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeSlowLogsRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeSlowLogsResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeSqlFiltersRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeSqlFiltersResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeSqlTemplateRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeSqlTemplateResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeTopSpaceSchemaTimeSeriesRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeTopSpaceSchemaTimeSeriesResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeTopSpaceSchemasRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeTopSpaceSchemasResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeTopSpaceTableTimeSeriesRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeTopSpaceTableTimeSeriesResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeTopSpaceTablesRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeTopSpaceTablesResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeUserSqlAdviceRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeUserSqlAdviceResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/KillMySqlThreadsRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/KillMySqlThreadsResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/ModifyAuditServiceRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/ModifyAuditServiceResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/ModifyDiagDBInstanceConfRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/ModifyDiagDBInstanceConfResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/ModifySqlFiltersRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/ModifySqlFiltersResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/OpenAuditServiceRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/OpenAuditServiceResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/VerifyUserAccountRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/VerifyUserAccountResponse.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            class DbbrainClient : public AbstractClient
            {
            public:
                DbbrainClient(const Credential &credential, const std::string &region);
                DbbrainClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddUserContactResponse> AddUserContactOutcome;
                typedef std::future<AddUserContactOutcome> AddUserContactOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::AddUserContactRequest&, AddUserContactOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddUserContactAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelKillTaskResponse> CancelKillTaskOutcome;
                typedef std::future<CancelKillTaskOutcome> CancelKillTaskOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::CancelKillTaskRequest&, CancelKillTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelKillTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CloseAuditServiceResponse> CloseAuditServiceOutcome;
                typedef std::future<CloseAuditServiceOutcome> CloseAuditServiceOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::CloseAuditServiceRequest&, CloseAuditServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseAuditServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAuditLogFileResponse> CreateAuditLogFileOutcome;
                typedef std::future<CreateAuditLogFileOutcome> CreateAuditLogFileOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::CreateAuditLogFileRequest&, CreateAuditLogFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAuditLogFileAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDBDiagReportTaskResponse> CreateDBDiagReportTaskOutcome;
                typedef std::future<CreateDBDiagReportTaskOutcome> CreateDBDiagReportTaskOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::CreateDBDiagReportTaskRequest&, CreateDBDiagReportTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBDiagReportTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDBDiagReportUrlResponse> CreateDBDiagReportUrlOutcome;
                typedef std::future<CreateDBDiagReportUrlOutcome> CreateDBDiagReportUrlOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::CreateDBDiagReportUrlRequest&, CreateDBDiagReportUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBDiagReportUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateKillTaskResponse> CreateKillTaskOutcome;
                typedef std::future<CreateKillTaskOutcome> CreateKillTaskOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::CreateKillTaskRequest&, CreateKillTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateKillTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMailProfileResponse> CreateMailProfileOutcome;
                typedef std::future<CreateMailProfileOutcome> CreateMailProfileOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::CreateMailProfileRequest&, CreateMailProfileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMailProfileAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateProxySessionKillTaskResponse> CreateProxySessionKillTaskOutcome;
                typedef std::future<CreateProxySessionKillTaskOutcome> CreateProxySessionKillTaskOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::CreateProxySessionKillTaskRequest&, CreateProxySessionKillTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProxySessionKillTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRedisBigKeyAnalysisTaskResponse> CreateRedisBigKeyAnalysisTaskOutcome;
                typedef std::future<CreateRedisBigKeyAnalysisTaskOutcome> CreateRedisBigKeyAnalysisTaskOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::CreateRedisBigKeyAnalysisTaskRequest&, CreateRedisBigKeyAnalysisTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRedisBigKeyAnalysisTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSchedulerMailProfileResponse> CreateSchedulerMailProfileOutcome;
                typedef std::future<CreateSchedulerMailProfileOutcome> CreateSchedulerMailProfileOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::CreateSchedulerMailProfileRequest&, CreateSchedulerMailProfileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSchedulerMailProfileAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSecurityAuditLogExportTaskResponse> CreateSecurityAuditLogExportTaskOutcome;
                typedef std::future<CreateSecurityAuditLogExportTaskOutcome> CreateSecurityAuditLogExportTaskOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::CreateSecurityAuditLogExportTaskRequest&, CreateSecurityAuditLogExportTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecurityAuditLogExportTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSqlFilterResponse> CreateSqlFilterOutcome;
                typedef std::future<CreateSqlFilterOutcome> CreateSqlFilterOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::CreateSqlFilterRequest&, CreateSqlFilterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSqlFilterAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAuditLogFileResponse> DeleteAuditLogFileOutcome;
                typedef std::future<DeleteAuditLogFileOutcome> DeleteAuditLogFileOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DeleteAuditLogFileRequest&, DeleteAuditLogFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAuditLogFileAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDBDiagReportTasksResponse> DeleteDBDiagReportTasksOutcome;
                typedef std::future<DeleteDBDiagReportTasksOutcome> DeleteDBDiagReportTasksOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DeleteDBDiagReportTasksRequest&, DeleteDBDiagReportTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDBDiagReportTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSecurityAuditLogExportTasksResponse> DeleteSecurityAuditLogExportTasksOutcome;
                typedef std::future<DeleteSecurityAuditLogExportTasksOutcome> DeleteSecurityAuditLogExportTasksOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DeleteSecurityAuditLogExportTasksRequest&, DeleteSecurityAuditLogExportTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecurityAuditLogExportTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSqlFiltersResponse> DeleteSqlFiltersOutcome;
                typedef std::future<DeleteSqlFiltersOutcome> DeleteSqlFiltersOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DeleteSqlFiltersRequest&, DeleteSqlFiltersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSqlFiltersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAllUserContactResponse> DescribeAllUserContactOutcome;
                typedef std::future<DescribeAllUserContactOutcome> DescribeAllUserContactOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeAllUserContactRequest&, DescribeAllUserContactOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllUserContactAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAllUserGroupResponse> DescribeAllUserGroupOutcome;
                typedef std::future<DescribeAllUserGroupOutcome> DescribeAllUserGroupOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeAllUserGroupRequest&, DescribeAllUserGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllUserGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAuditInstanceListResponse> DescribeAuditInstanceListOutcome;
                typedef std::future<DescribeAuditInstanceListOutcome> DescribeAuditInstanceListOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeAuditInstanceListRequest&, DescribeAuditInstanceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuditInstanceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAuditLogFilesResponse> DescribeAuditLogFilesOutcome;
                typedef std::future<DescribeAuditLogFilesOutcome> DescribeAuditLogFilesOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeAuditLogFilesRequest&, DescribeAuditLogFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuditLogFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBDiagEventResponse> DescribeDBDiagEventOutcome;
                typedef std::future<DescribeDBDiagEventOutcome> DescribeDBDiagEventOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeDBDiagEventRequest&, DescribeDBDiagEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBDiagEventAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBDiagEventsResponse> DescribeDBDiagEventsOutcome;
                typedef std::future<DescribeDBDiagEventsOutcome> DescribeDBDiagEventsOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeDBDiagEventsRequest&, DescribeDBDiagEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBDiagEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBDiagHistoryResponse> DescribeDBDiagHistoryOutcome;
                typedef std::future<DescribeDBDiagHistoryOutcome> DescribeDBDiagHistoryOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeDBDiagHistoryRequest&, DescribeDBDiagHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBDiagHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBDiagReportTasksResponse> DescribeDBDiagReportTasksOutcome;
                typedef std::future<DescribeDBDiagReportTasksOutcome> DescribeDBDiagReportTasksOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeDBDiagReportTasksRequest&, DescribeDBDiagReportTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBDiagReportTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBSpaceStatusResponse> DescribeDBSpaceStatusOutcome;
                typedef std::future<DescribeDBSpaceStatusOutcome> DescribeDBSpaceStatusOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeDBSpaceStatusRequest&, DescribeDBSpaceStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBSpaceStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDiagDBInstancesResponse> DescribeDiagDBInstancesOutcome;
                typedef std::future<DescribeDiagDBInstancesOutcome> DescribeDiagDBInstancesOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeDiagDBInstancesRequest&, DescribeDiagDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDiagDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHealthScoreResponse> DescribeHealthScoreOutcome;
                typedef std::future<DescribeHealthScoreOutcome> DescribeHealthScoreOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeHealthScoreRequest&, DescribeHealthScoreOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHealthScoreAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMailProfileResponse> DescribeMailProfileOutcome;
                typedef std::future<DescribeMailProfileOutcome> DescribeMailProfileOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeMailProfileRequest&, DescribeMailProfileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMailProfileAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMySqlProcessListResponse> DescribeMySqlProcessListOutcome;
                typedef std::future<DescribeMySqlProcessListOutcome> DescribeMySqlProcessListOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeMySqlProcessListRequest&, DescribeMySqlProcessListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMySqlProcessListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNoPrimaryKeyTablesResponse> DescribeNoPrimaryKeyTablesOutcome;
                typedef std::future<DescribeNoPrimaryKeyTablesOutcome> DescribeNoPrimaryKeyTablesOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeNoPrimaryKeyTablesRequest&, DescribeNoPrimaryKeyTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNoPrimaryKeyTablesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProxyProcessStatisticsResponse> DescribeProxyProcessStatisticsOutcome;
                typedef std::future<DescribeProxyProcessStatisticsOutcome> DescribeProxyProcessStatisticsOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeProxyProcessStatisticsRequest&, DescribeProxyProcessStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProxyProcessStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProxySessionKillTasksResponse> DescribeProxySessionKillTasksOutcome;
                typedef std::future<DescribeProxySessionKillTasksOutcome> DescribeProxySessionKillTasksOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeProxySessionKillTasksRequest&, DescribeProxySessionKillTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProxySessionKillTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRedisTopBigKeysResponse> DescribeRedisTopBigKeysOutcome;
                typedef std::future<DescribeRedisTopBigKeysOutcome> DescribeRedisTopBigKeysOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeRedisTopBigKeysRequest&, DescribeRedisTopBigKeysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRedisTopBigKeysAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRedisTopKeyPrefixListResponse> DescribeRedisTopKeyPrefixListOutcome;
                typedef std::future<DescribeRedisTopKeyPrefixListOutcome> DescribeRedisTopKeyPrefixListOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeRedisTopKeyPrefixListRequest&, DescribeRedisTopKeyPrefixListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRedisTopKeyPrefixListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityAuditLogDownloadUrlsResponse> DescribeSecurityAuditLogDownloadUrlsOutcome;
                typedef std::future<DescribeSecurityAuditLogDownloadUrlsOutcome> DescribeSecurityAuditLogDownloadUrlsOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeSecurityAuditLogDownloadUrlsRequest&, DescribeSecurityAuditLogDownloadUrlsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityAuditLogDownloadUrlsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityAuditLogExportTasksResponse> DescribeSecurityAuditLogExportTasksOutcome;
                typedef std::future<DescribeSecurityAuditLogExportTasksOutcome> DescribeSecurityAuditLogExportTasksOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeSecurityAuditLogExportTasksRequest&, DescribeSecurityAuditLogExportTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityAuditLogExportTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSlowLogTimeSeriesStatsResponse> DescribeSlowLogTimeSeriesStatsOutcome;
                typedef std::future<DescribeSlowLogTimeSeriesStatsOutcome> DescribeSlowLogTimeSeriesStatsOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeSlowLogTimeSeriesStatsRequest&, DescribeSlowLogTimeSeriesStatsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowLogTimeSeriesStatsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSlowLogTopSqlsResponse> DescribeSlowLogTopSqlsOutcome;
                typedef std::future<DescribeSlowLogTopSqlsOutcome> DescribeSlowLogTopSqlsOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeSlowLogTopSqlsRequest&, DescribeSlowLogTopSqlsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowLogTopSqlsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSlowLogUserHostStatsResponse> DescribeSlowLogUserHostStatsOutcome;
                typedef std::future<DescribeSlowLogUserHostStatsOutcome> DescribeSlowLogUserHostStatsOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeSlowLogUserHostStatsRequest&, DescribeSlowLogUserHostStatsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowLogUserHostStatsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSlowLogsResponse> DescribeSlowLogsOutcome;
                typedef std::future<DescribeSlowLogsOutcome> DescribeSlowLogsOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeSlowLogsRequest&, DescribeSlowLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSqlFiltersResponse> DescribeSqlFiltersOutcome;
                typedef std::future<DescribeSqlFiltersOutcome> DescribeSqlFiltersOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeSqlFiltersRequest&, DescribeSqlFiltersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSqlFiltersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSqlTemplateResponse> DescribeSqlTemplateOutcome;
                typedef std::future<DescribeSqlTemplateOutcome> DescribeSqlTemplateOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeSqlTemplateRequest&, DescribeSqlTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSqlTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopSpaceSchemaTimeSeriesResponse> DescribeTopSpaceSchemaTimeSeriesOutcome;
                typedef std::future<DescribeTopSpaceSchemaTimeSeriesOutcome> DescribeTopSpaceSchemaTimeSeriesOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeTopSpaceSchemaTimeSeriesRequest&, DescribeTopSpaceSchemaTimeSeriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopSpaceSchemaTimeSeriesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopSpaceSchemasResponse> DescribeTopSpaceSchemasOutcome;
                typedef std::future<DescribeTopSpaceSchemasOutcome> DescribeTopSpaceSchemasOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeTopSpaceSchemasRequest&, DescribeTopSpaceSchemasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopSpaceSchemasAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopSpaceTableTimeSeriesResponse> DescribeTopSpaceTableTimeSeriesOutcome;
                typedef std::future<DescribeTopSpaceTableTimeSeriesOutcome> DescribeTopSpaceTableTimeSeriesOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeTopSpaceTableTimeSeriesRequest&, DescribeTopSpaceTableTimeSeriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopSpaceTableTimeSeriesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopSpaceTablesResponse> DescribeTopSpaceTablesOutcome;
                typedef std::future<DescribeTopSpaceTablesOutcome> DescribeTopSpaceTablesOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeTopSpaceTablesRequest&, DescribeTopSpaceTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopSpaceTablesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserSqlAdviceResponse> DescribeUserSqlAdviceOutcome;
                typedef std::future<DescribeUserSqlAdviceOutcome> DescribeUserSqlAdviceOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeUserSqlAdviceRequest&, DescribeUserSqlAdviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserSqlAdviceAsyncHandler;
                typedef Outcome<Core::Error, Model::KillMySqlThreadsResponse> KillMySqlThreadsOutcome;
                typedef std::future<KillMySqlThreadsOutcome> KillMySqlThreadsOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::KillMySqlThreadsRequest&, KillMySqlThreadsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> KillMySqlThreadsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAuditServiceResponse> ModifyAuditServiceOutcome;
                typedef std::future<ModifyAuditServiceOutcome> ModifyAuditServiceOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::ModifyAuditServiceRequest&, ModifyAuditServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAuditServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDiagDBInstanceConfResponse> ModifyDiagDBInstanceConfOutcome;
                typedef std::future<ModifyDiagDBInstanceConfOutcome> ModifyDiagDBInstanceConfOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::ModifyDiagDBInstanceConfRequest&, ModifyDiagDBInstanceConfOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDiagDBInstanceConfAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySqlFiltersResponse> ModifySqlFiltersOutcome;
                typedef std::future<ModifySqlFiltersOutcome> ModifySqlFiltersOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::ModifySqlFiltersRequest&, ModifySqlFiltersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySqlFiltersAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenAuditServiceResponse> OpenAuditServiceOutcome;
                typedef std::future<OpenAuditServiceOutcome> OpenAuditServiceOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::OpenAuditServiceRequest&, OpenAuditServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenAuditServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::VerifyUserAccountResponse> VerifyUserAccountOutcome;
                typedef std::future<VerifyUserAccountOutcome> VerifyUserAccountOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::VerifyUserAccountRequest&, VerifyUserAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VerifyUserAccountAsyncHandler;



                /**
                 *添加邮件接收联系人的姓名， 邮件地址，返回值为添加成功的联系人id。
                 * @param req AddUserContactRequest
                 * @return AddUserContactOutcome
                 */
                AddUserContactOutcome AddUserContact(const Model::AddUserContactRequest &request);
                void AddUserContactAsync(const Model::AddUserContactRequest& request, const AddUserContactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddUserContactOutcomeCallable AddUserContactCallable(const Model::AddUserContactRequest& request);

                /**
                 *终止中断会话任务。
                 * @param req CancelKillTaskRequest
                 * @return CancelKillTaskOutcome
                 */
                CancelKillTaskOutcome CancelKillTask(const Model::CancelKillTaskRequest &request);
                void CancelKillTaskAsync(const Model::CancelKillTaskRequest& request, const CancelKillTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelKillTaskOutcomeCallable CancelKillTaskCallable(const Model::CancelKillTaskRequest& request);

                /**
                 *不用审计日志时，关闭数据库审计
                 * @param req CloseAuditServiceRequest
                 * @return CloseAuditServiceOutcome
                 */
                CloseAuditServiceOutcome CloseAuditService(const Model::CloseAuditServiceRequest &request);
                void CloseAuditServiceAsync(const Model::CloseAuditServiceRequest& request, const CloseAuditServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloseAuditServiceOutcomeCallable CloseAuditServiceCallable(const Model::CloseAuditServiceRequest& request);

                /**
                 *用于创建云数据库实例的审计日志文件，最多下载600w审计日志。
                 * @param req CreateAuditLogFileRequest
                 * @return CreateAuditLogFileOutcome
                 */
                CreateAuditLogFileOutcome CreateAuditLogFile(const Model::CreateAuditLogFileRequest &request);
                void CreateAuditLogFileAsync(const Model::CreateAuditLogFileRequest& request, const CreateAuditLogFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAuditLogFileOutcomeCallable CreateAuditLogFileCallable(const Model::CreateAuditLogFileRequest& request);

                /**
                 *创建健康报告，并可以选择是否发送邮件。
                 * @param req CreateDBDiagReportTaskRequest
                 * @return CreateDBDiagReportTaskOutcome
                 */
                CreateDBDiagReportTaskOutcome CreateDBDiagReportTask(const Model::CreateDBDiagReportTaskRequest &request);
                void CreateDBDiagReportTaskAsync(const Model::CreateDBDiagReportTaskRequest& request, const CreateDBDiagReportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDBDiagReportTaskOutcomeCallable CreateDBDiagReportTaskCallable(const Model::CreateDBDiagReportTaskRequest& request);

                /**
                 *创建健康报告的浏览地址。
                 * @param req CreateDBDiagReportUrlRequest
                 * @return CreateDBDiagReportUrlOutcome
                 */
                CreateDBDiagReportUrlOutcome CreateDBDiagReportUrl(const Model::CreateDBDiagReportUrlRequest &request);
                void CreateDBDiagReportUrlAsync(const Model::CreateDBDiagReportUrlRequest& request, const CreateDBDiagReportUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDBDiagReportUrlOutcomeCallable CreateDBDiagReportUrlCallable(const Model::CreateDBDiagReportUrlRequest& request);

                /**
                 *创建中断会话的任务。
                 * @param req CreateKillTaskRequest
                 * @return CreateKillTaskOutcome
                 */
                CreateKillTaskOutcome CreateKillTask(const Model::CreateKillTaskRequest &request);
                void CreateKillTaskAsync(const Model::CreateKillTaskRequest& request, const CreateKillTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateKillTaskOutcomeCallable CreateKillTaskCallable(const Model::CreateKillTaskRequest& request);

                /**
                 *创建邮件配置。其中入参ProfileType表示所创建配置的类型，ProfileType 取值包括：dbScan_mail_configuration（数据库巡检邮件配置）、scheduler_mail_configuration（定期生成健康报告的邮件发送配置）。Region统一选择广州，和实例所属地域无关。
                 * @param req CreateMailProfileRequest
                 * @return CreateMailProfileOutcome
                 */
                CreateMailProfileOutcome CreateMailProfile(const Model::CreateMailProfileRequest &request);
                void CreateMailProfileAsync(const Model::CreateMailProfileRequest& request, const CreateMailProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMailProfileOutcomeCallable CreateMailProfileCallable(const Model::CreateMailProfileRequest& request);

                /**
                 *创建中止所有代理节点连接会话的异步任务。当前仅支持 Redis。得到的返回值为异步任务 id，可以作为参数传入接口 DescribeProxySessionKillTasks 查询kill会话任务执行状态。
                 * @param req CreateProxySessionKillTaskRequest
                 * @return CreateProxySessionKillTaskOutcome
                 */
                CreateProxySessionKillTaskOutcome CreateProxySessionKillTask(const Model::CreateProxySessionKillTaskRequest &request);
                void CreateProxySessionKillTaskAsync(const Model::CreateProxySessionKillTaskRequest& request, const CreateProxySessionKillTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProxySessionKillTaskOutcomeCallable CreateProxySessionKillTaskCallable(const Model::CreateProxySessionKillTaskRequest& request);

                /**
                 *即时创建redis实例大key分析任务，限制正在运行的即时分析任务数量默认为5。
                 * @param req CreateRedisBigKeyAnalysisTaskRequest
                 * @return CreateRedisBigKeyAnalysisTaskOutcome
                 */
                CreateRedisBigKeyAnalysisTaskOutcome CreateRedisBigKeyAnalysisTask(const Model::CreateRedisBigKeyAnalysisTaskRequest &request);
                void CreateRedisBigKeyAnalysisTaskAsync(const Model::CreateRedisBigKeyAnalysisTaskRequest& request, const CreateRedisBigKeyAnalysisTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRedisBigKeyAnalysisTaskOutcomeCallable CreateRedisBigKeyAnalysisTaskCallable(const Model::CreateRedisBigKeyAnalysisTaskRequest& request);

                /**
                 *该接口用于创建定期生成健康报告并邮件发送的配置，将健康报告的定期生成时间作为参数传入（周一至周日），用于设置健康报告的定期生成时间，同时保存相应的定期邮件发送的配置。
                 * @param req CreateSchedulerMailProfileRequest
                 * @return CreateSchedulerMailProfileOutcome
                 */
                CreateSchedulerMailProfileOutcome CreateSchedulerMailProfile(const Model::CreateSchedulerMailProfileRequest &request);
                void CreateSchedulerMailProfileAsync(const Model::CreateSchedulerMailProfileRequest& request, const CreateSchedulerMailProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSchedulerMailProfileOutcomeCallable CreateSchedulerMailProfileCallable(const Model::CreateSchedulerMailProfileRequest& request);

                /**
                 *创建安全审计日志导出任务。
                 * @param req CreateSecurityAuditLogExportTaskRequest
                 * @return CreateSecurityAuditLogExportTaskOutcome
                 */
                CreateSecurityAuditLogExportTaskOutcome CreateSecurityAuditLogExportTask(const Model::CreateSecurityAuditLogExportTaskRequest &request);
                void CreateSecurityAuditLogExportTaskAsync(const Model::CreateSecurityAuditLogExportTaskRequest& request, const CreateSecurityAuditLogExportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSecurityAuditLogExportTaskOutcomeCallable CreateSecurityAuditLogExportTaskCallable(const Model::CreateSecurityAuditLogExportTaskRequest& request);

                /**
                 *创建实例SQL限流任务。
                 * @param req CreateSqlFilterRequest
                 * @return CreateSqlFilterOutcome
                 */
                CreateSqlFilterOutcome CreateSqlFilter(const Model::CreateSqlFilterRequest &request);
                void CreateSqlFilterAsync(const Model::CreateSqlFilterRequest& request, const CreateSqlFilterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSqlFilterOutcomeCallable CreateSqlFilterCallable(const Model::CreateSqlFilterRequest& request);

                /**
                 *用于删除云数据库实例的审计日志文件。
                 * @param req DeleteAuditLogFileRequest
                 * @return DeleteAuditLogFileOutcome
                 */
                DeleteAuditLogFileOutcome DeleteAuditLogFile(const Model::DeleteAuditLogFileRequest &request);
                void DeleteAuditLogFileAsync(const Model::DeleteAuditLogFileRequest& request, const DeleteAuditLogFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAuditLogFileOutcomeCallable DeleteAuditLogFileCallable(const Model::DeleteAuditLogFileRequest& request);

                /**
                 *根据任务id删除健康报告生成任务
                 * @param req DeleteDBDiagReportTasksRequest
                 * @return DeleteDBDiagReportTasksOutcome
                 */
                DeleteDBDiagReportTasksOutcome DeleteDBDiagReportTasks(const Model::DeleteDBDiagReportTasksRequest &request);
                void DeleteDBDiagReportTasksAsync(const Model::DeleteDBDiagReportTasksRequest& request, const DeleteDBDiagReportTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDBDiagReportTasksOutcomeCallable DeleteDBDiagReportTasksCallable(const Model::DeleteDBDiagReportTasksRequest& request);

                /**
                 *删除安全审计日志导出任务。
                 * @param req DeleteSecurityAuditLogExportTasksRequest
                 * @return DeleteSecurityAuditLogExportTasksOutcome
                 */
                DeleteSecurityAuditLogExportTasksOutcome DeleteSecurityAuditLogExportTasks(const Model::DeleteSecurityAuditLogExportTasksRequest &request);
                void DeleteSecurityAuditLogExportTasksAsync(const Model::DeleteSecurityAuditLogExportTasksRequest& request, const DeleteSecurityAuditLogExportTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSecurityAuditLogExportTasksOutcomeCallable DeleteSecurityAuditLogExportTasksCallable(const Model::DeleteSecurityAuditLogExportTasksRequest& request);

                /**
                 *删除实例SQL限流任务。
                 * @param req DeleteSqlFiltersRequest
                 * @return DeleteSqlFiltersOutcome
                 */
                DeleteSqlFiltersOutcome DeleteSqlFilters(const Model::DeleteSqlFiltersRequest &request);
                void DeleteSqlFiltersAsync(const Model::DeleteSqlFiltersRequest& request, const DeleteSqlFiltersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSqlFiltersOutcomeCallable DeleteSqlFiltersCallable(const Model::DeleteSqlFiltersRequest& request);

                /**
                 *获取邮件发送中联系人的相关信息。
                 * @param req DescribeAllUserContactRequest
                 * @return DescribeAllUserContactOutcome
                 */
                DescribeAllUserContactOutcome DescribeAllUserContact(const Model::DescribeAllUserContactRequest &request);
                void DescribeAllUserContactAsync(const Model::DescribeAllUserContactRequest& request, const DescribeAllUserContactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAllUserContactOutcomeCallable DescribeAllUserContactCallable(const Model::DescribeAllUserContactRequest& request);

                /**
                 *获取邮件发送联系组的相关信息。
                 * @param req DescribeAllUserGroupRequest
                 * @return DescribeAllUserGroupOutcome
                 */
                DescribeAllUserGroupOutcome DescribeAllUserGroup(const Model::DescribeAllUserGroupRequest &request);
                void DescribeAllUserGroupAsync(const Model::DescribeAllUserGroupRequest& request, const DescribeAllUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAllUserGroupOutcomeCallable DescribeAllUserGroupCallable(const Model::DescribeAllUserGroupRequest& request);

                /**
                 *查询实例列表
                 * @param req DescribeAuditInstanceListRequest
                 * @return DescribeAuditInstanceListOutcome
                 */
                DescribeAuditInstanceListOutcome DescribeAuditInstanceList(const Model::DescribeAuditInstanceListRequest &request);
                void DescribeAuditInstanceListAsync(const Model::DescribeAuditInstanceListRequest& request, const DescribeAuditInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAuditInstanceListOutcomeCallable DescribeAuditInstanceListCallable(const Model::DescribeAuditInstanceListRequest& request);

                /**
                 *用于创建云数据库实例的审计日志文件
                 * @param req DescribeAuditLogFilesRequest
                 * @return DescribeAuditLogFilesOutcome
                 */
                DescribeAuditLogFilesOutcome DescribeAuditLogFiles(const Model::DescribeAuditLogFilesRequest &request);
                void DescribeAuditLogFilesAsync(const Model::DescribeAuditLogFilesRequest& request, const DescribeAuditLogFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAuditLogFilesOutcomeCallable DescribeAuditLogFilesCallable(const Model::DescribeAuditLogFilesRequest& request);

                /**
                 *获取实例异常诊断事件的详情信息。
                 * @param req DescribeDBDiagEventRequest
                 * @return DescribeDBDiagEventOutcome
                 */
                DescribeDBDiagEventOutcome DescribeDBDiagEvent(const Model::DescribeDBDiagEventRequest &request);
                void DescribeDBDiagEventAsync(const Model::DescribeDBDiagEventRequest& request, const DescribeDBDiagEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBDiagEventOutcomeCallable DescribeDBDiagEventCallable(const Model::DescribeDBDiagEventRequest& request);

                /**
                 *获取指定时间段内的诊断事件列表，支持依据风险等级、实例ID等条件过滤。
                 * @param req DescribeDBDiagEventsRequest
                 * @return DescribeDBDiagEventsOutcome
                 */
                DescribeDBDiagEventsOutcome DescribeDBDiagEvents(const Model::DescribeDBDiagEventsRequest &request);
                void DescribeDBDiagEventsAsync(const Model::DescribeDBDiagEventsRequest& request, const DescribeDBDiagEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBDiagEventsOutcomeCallable DescribeDBDiagEventsCallable(const Model::DescribeDBDiagEventsRequest& request);

                /**
                 *获取实例诊断事件的列表。
                 * @param req DescribeDBDiagHistoryRequest
                 * @return DescribeDBDiagHistoryOutcome
                 */
                DescribeDBDiagHistoryOutcome DescribeDBDiagHistory(const Model::DescribeDBDiagHistoryRequest &request);
                void DescribeDBDiagHistoryAsync(const Model::DescribeDBDiagHistoryRequest& request, const DescribeDBDiagHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBDiagHistoryOutcomeCallable DescribeDBDiagHistoryCallable(const Model::DescribeDBDiagHistoryRequest& request);

                /**
                 *查询健康报告生成任务列表。
                 * @param req DescribeDBDiagReportTasksRequest
                 * @return DescribeDBDiagReportTasksOutcome
                 */
                DescribeDBDiagReportTasksOutcome DescribeDBDiagReportTasks(const Model::DescribeDBDiagReportTasksRequest &request);
                void DescribeDBDiagReportTasksAsync(const Model::DescribeDBDiagReportTasksRequest& request, const DescribeDBDiagReportTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBDiagReportTasksOutcomeCallable DescribeDBDiagReportTasksCallable(const Model::DescribeDBDiagReportTasksRequest& request);

                /**
                 *获取指定时间段内的实例空间使用概览，包括磁盘增长量(MB)、磁盘剩余(MB)、磁盘总量(MB)及预计可用天数。
                 * @param req DescribeDBSpaceStatusRequest
                 * @return DescribeDBSpaceStatusOutcome
                 */
                DescribeDBSpaceStatusOutcome DescribeDBSpaceStatus(const Model::DescribeDBSpaceStatusRequest &request);
                void DescribeDBSpaceStatusAsync(const Model::DescribeDBSpaceStatusRequest& request, const DescribeDBSpaceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBSpaceStatusOutcomeCallable DescribeDBSpaceStatusCallable(const Model::DescribeDBSpaceStatusRequest& request);

                /**
                 *获取实例信息列表。Region统一选择广州。
                 * @param req DescribeDiagDBInstancesRequest
                 * @return DescribeDiagDBInstancesOutcome
                 */
                DescribeDiagDBInstancesOutcome DescribeDiagDBInstances(const Model::DescribeDiagDBInstancesRequest &request);
                void DescribeDiagDBInstancesAsync(const Model::DescribeDiagDBInstancesRequest& request, const DescribeDiagDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDiagDBInstancesOutcomeCallable DescribeDiagDBInstancesCallable(const Model::DescribeDiagDBInstancesRequest& request);

                /**
                 *根据实例ID获取指定时间段（30分钟）的健康得分，以及异常扣分项。
                 * @param req DescribeHealthScoreRequest
                 * @return DescribeHealthScoreOutcome
                 */
                DescribeHealthScoreOutcome DescribeHealthScore(const Model::DescribeHealthScoreRequest &request);
                void DescribeHealthScoreAsync(const Model::DescribeHealthScoreRequest& request, const DescribeHealthScoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHealthScoreOutcomeCallable DescribeHealthScoreCallable(const Model::DescribeHealthScoreRequest& request);

                /**
                 *获取发送邮件的配置， 包括数据库巡检的邮件配置以及定期生成健康报告的邮件发送配置。
                 * @param req DescribeMailProfileRequest
                 * @return DescribeMailProfileOutcome
                 */
                DescribeMailProfileOutcome DescribeMailProfile(const Model::DescribeMailProfileRequest &request);
                void DescribeMailProfileAsync(const Model::DescribeMailProfileRequest& request, const DescribeMailProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMailProfileOutcomeCallable DescribeMailProfileCallable(const Model::DescribeMailProfileRequest& request);

                /**
                 *查询关系型数据库的实时线程列表。
                 * @param req DescribeMySqlProcessListRequest
                 * @return DescribeMySqlProcessListOutcome
                 */
                DescribeMySqlProcessListOutcome DescribeMySqlProcessList(const Model::DescribeMySqlProcessListRequest &request);
                void DescribeMySqlProcessListAsync(const Model::DescribeMySqlProcessListRequest& request, const DescribeMySqlProcessListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMySqlProcessListOutcomeCallable DescribeMySqlProcessListCallable(const Model::DescribeMySqlProcessListRequest& request);

                /**
                 *查询实例无主键表。
                 * @param req DescribeNoPrimaryKeyTablesRequest
                 * @return DescribeNoPrimaryKeyTablesOutcome
                 */
                DescribeNoPrimaryKeyTablesOutcome DescribeNoPrimaryKeyTables(const Model::DescribeNoPrimaryKeyTablesRequest &request);
                void DescribeNoPrimaryKeyTablesAsync(const Model::DescribeNoPrimaryKeyTablesRequest& request, const DescribeNoPrimaryKeyTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNoPrimaryKeyTablesOutcomeCallable DescribeNoPrimaryKeyTablesCallable(const Model::DescribeNoPrimaryKeyTablesRequest& request);

                /**
                 *获取当前实例下的单个proxy的会话统计详情信息， 返回数据为单个 proxy 的会话统计信息。【注意】该接口仅限部分环境调用。
                 * @param req DescribeProxyProcessStatisticsRequest
                 * @return DescribeProxyProcessStatisticsOutcome
                 */
                DescribeProxyProcessStatisticsOutcome DescribeProxyProcessStatistics(const Model::DescribeProxyProcessStatisticsRequest &request);
                void DescribeProxyProcessStatisticsAsync(const Model::DescribeProxyProcessStatisticsRequest& request, const DescribeProxyProcessStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProxyProcessStatisticsOutcomeCallable DescribeProxyProcessStatisticsCallable(const Model::DescribeProxyProcessStatisticsRequest& request);

                /**
                 *用于查询 redis 执行 kill 会话任务后代理节点的执行结果，入参异步任务 ID 从接口 CreateProxySessionKillTask 调用成功后取得。当前 product 只支持：redis。
                 * @param req DescribeProxySessionKillTasksRequest
                 * @return DescribeProxySessionKillTasksOutcome
                 */
                DescribeProxySessionKillTasksOutcome DescribeProxySessionKillTasks(const Model::DescribeProxySessionKillTasksRequest &request);
                void DescribeProxySessionKillTasksAsync(const Model::DescribeProxySessionKillTasksRequest& request, const DescribeProxySessionKillTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProxySessionKillTasksOutcomeCallable DescribeProxySessionKillTasksCallable(const Model::DescribeProxySessionKillTasksRequest& request);

                /**
                 *查询redis实例大key列表。
                 * @param req DescribeRedisTopBigKeysRequest
                 * @return DescribeRedisTopBigKeysOutcome
                 */
                DescribeRedisTopBigKeysOutcome DescribeRedisTopBigKeys(const Model::DescribeRedisTopBigKeysRequest &request);
                void DescribeRedisTopBigKeysAsync(const Model::DescribeRedisTopBigKeysRequest& request, const DescribeRedisTopBigKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRedisTopBigKeysOutcomeCallable DescribeRedisTopBigKeysCallable(const Model::DescribeRedisTopBigKeysRequest& request);

                /**
                 *查询redis实例top key前缀列表。
                 * @param req DescribeRedisTopKeyPrefixListRequest
                 * @return DescribeRedisTopKeyPrefixListOutcome
                 */
                DescribeRedisTopKeyPrefixListOutcome DescribeRedisTopKeyPrefixList(const Model::DescribeRedisTopKeyPrefixListRequest &request);
                void DescribeRedisTopKeyPrefixListAsync(const Model::DescribeRedisTopKeyPrefixListRequest& request, const DescribeRedisTopKeyPrefixListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRedisTopKeyPrefixListOutcomeCallable DescribeRedisTopKeyPrefixListCallable(const Model::DescribeRedisTopKeyPrefixListRequest& request);

                /**
                 *查询安全审计日志导出文件下载链接。目前日志文件下载仅提供腾讯云内网地址，请通过广州地域的腾讯云服务器进行下载。
                 * @param req DescribeSecurityAuditLogDownloadUrlsRequest
                 * @return DescribeSecurityAuditLogDownloadUrlsOutcome
                 */
                DescribeSecurityAuditLogDownloadUrlsOutcome DescribeSecurityAuditLogDownloadUrls(const Model::DescribeSecurityAuditLogDownloadUrlsRequest &request);
                void DescribeSecurityAuditLogDownloadUrlsAsync(const Model::DescribeSecurityAuditLogDownloadUrlsRequest& request, const DescribeSecurityAuditLogDownloadUrlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityAuditLogDownloadUrlsOutcomeCallable DescribeSecurityAuditLogDownloadUrlsCallable(const Model::DescribeSecurityAuditLogDownloadUrlsRequest& request);

                /**
                 *查询安全审计日志导出任务列表。
                 * @param req DescribeSecurityAuditLogExportTasksRequest
                 * @return DescribeSecurityAuditLogExportTasksOutcome
                 */
                DescribeSecurityAuditLogExportTasksOutcome DescribeSecurityAuditLogExportTasks(const Model::DescribeSecurityAuditLogExportTasksRequest &request);
                void DescribeSecurityAuditLogExportTasksAsync(const Model::DescribeSecurityAuditLogExportTasksRequest& request, const DescribeSecurityAuditLogExportTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityAuditLogExportTasksOutcomeCallable DescribeSecurityAuditLogExportTasksCallable(const Model::DescribeSecurityAuditLogExportTasksRequest& request);

                /**
                 *获取慢日志统计柱状图。
                 * @param req DescribeSlowLogTimeSeriesStatsRequest
                 * @return DescribeSlowLogTimeSeriesStatsOutcome
                 */
                DescribeSlowLogTimeSeriesStatsOutcome DescribeSlowLogTimeSeriesStats(const Model::DescribeSlowLogTimeSeriesStatsRequest &request);
                void DescribeSlowLogTimeSeriesStatsAsync(const Model::DescribeSlowLogTimeSeriesStatsRequest& request, const DescribeSlowLogTimeSeriesStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSlowLogTimeSeriesStatsOutcomeCallable DescribeSlowLogTimeSeriesStatsCallable(const Model::DescribeSlowLogTimeSeriesStatsRequest& request);

                /**
                 *按照Sql模板+schema的聚合方式，统计排序指定时间段内的top慢sql。
                 * @param req DescribeSlowLogTopSqlsRequest
                 * @return DescribeSlowLogTopSqlsOutcome
                 */
                DescribeSlowLogTopSqlsOutcome DescribeSlowLogTopSqls(const Model::DescribeSlowLogTopSqlsRequest &request);
                void DescribeSlowLogTopSqlsAsync(const Model::DescribeSlowLogTopSqlsRequest& request, const DescribeSlowLogTopSqlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSlowLogTopSqlsOutcomeCallable DescribeSlowLogTopSqlsCallable(const Model::DescribeSlowLogTopSqlsRequest& request);

                /**
                 *获取慢日志来源地址统计分布图。
                 * @param req DescribeSlowLogUserHostStatsRequest
                 * @return DescribeSlowLogUserHostStatsOutcome
                 */
                DescribeSlowLogUserHostStatsOutcome DescribeSlowLogUserHostStats(const Model::DescribeSlowLogUserHostStatsRequest &request);
                void DescribeSlowLogUserHostStatsAsync(const Model::DescribeSlowLogUserHostStatsRequest& request, const DescribeSlowLogUserHostStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSlowLogUserHostStatsOutcomeCallable DescribeSlowLogUserHostStatsCallable(const Model::DescribeSlowLogUserHostStatsRequest& request);

                /**
                 *获取指定时间内某个sql模板的慢日志明细
                 * @param req DescribeSlowLogsRequest
                 * @return DescribeSlowLogsOutcome
                 */
                DescribeSlowLogsOutcome DescribeSlowLogs(const Model::DescribeSlowLogsRequest &request);
                void DescribeSlowLogsAsync(const Model::DescribeSlowLogsRequest& request, const DescribeSlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSlowLogsOutcomeCallable DescribeSlowLogsCallable(const Model::DescribeSlowLogsRequest& request);

                /**
                 *查询实例SQL限流任务列表。
                 * @param req DescribeSqlFiltersRequest
                 * @return DescribeSqlFiltersOutcome
                 */
                DescribeSqlFiltersOutcome DescribeSqlFilters(const Model::DescribeSqlFiltersRequest &request);
                void DescribeSqlFiltersAsync(const Model::DescribeSqlFiltersRequest& request, const DescribeSqlFiltersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSqlFiltersOutcomeCallable DescribeSqlFiltersCallable(const Model::DescribeSqlFiltersRequest& request);

                /**
                 *查询SQL模板。
                 * @param req DescribeSqlTemplateRequest
                 * @return DescribeSqlTemplateOutcome
                 */
                DescribeSqlTemplateOutcome DescribeSqlTemplate(const Model::DescribeSqlTemplateRequest &request);
                void DescribeSqlTemplateAsync(const Model::DescribeSqlTemplateRequest& request, const DescribeSqlTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSqlTemplateOutcomeCallable DescribeSqlTemplateCallable(const Model::DescribeSqlTemplateRequest& request);

                /**
                 *获取实例占用空间最大的前几个库在指定时间段内的每日由DBbrain定时采集的空间数据，默认返回按大小排序。
                 * @param req DescribeTopSpaceSchemaTimeSeriesRequest
                 * @return DescribeTopSpaceSchemaTimeSeriesOutcome
                 */
                DescribeTopSpaceSchemaTimeSeriesOutcome DescribeTopSpaceSchemaTimeSeries(const Model::DescribeTopSpaceSchemaTimeSeriesRequest &request);
                void DescribeTopSpaceSchemaTimeSeriesAsync(const Model::DescribeTopSpaceSchemaTimeSeriesRequest& request, const DescribeTopSpaceSchemaTimeSeriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopSpaceSchemaTimeSeriesOutcomeCallable DescribeTopSpaceSchemaTimeSeriesCallable(const Model::DescribeTopSpaceSchemaTimeSeriesRequest& request);

                /**
                 *获取实例Top库的实时空间统计信息，默认返回按大小排序。
                 * @param req DescribeTopSpaceSchemasRequest
                 * @return DescribeTopSpaceSchemasOutcome
                 */
                DescribeTopSpaceSchemasOutcome DescribeTopSpaceSchemas(const Model::DescribeTopSpaceSchemasRequest &request);
                void DescribeTopSpaceSchemasAsync(const Model::DescribeTopSpaceSchemasRequest& request, const DescribeTopSpaceSchemasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopSpaceSchemasOutcomeCallable DescribeTopSpaceSchemasCallable(const Model::DescribeTopSpaceSchemasRequest& request);

                /**
                 *获取实例占用空间最大的前几张表在指定时间段内的每日由DBbrain定时采集的空间数据，默认返回按大小排序。
                 * @param req DescribeTopSpaceTableTimeSeriesRequest
                 * @return DescribeTopSpaceTableTimeSeriesOutcome
                 */
                DescribeTopSpaceTableTimeSeriesOutcome DescribeTopSpaceTableTimeSeries(const Model::DescribeTopSpaceTableTimeSeriesRequest &request);
                void DescribeTopSpaceTableTimeSeriesAsync(const Model::DescribeTopSpaceTableTimeSeriesRequest& request, const DescribeTopSpaceTableTimeSeriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopSpaceTableTimeSeriesOutcomeCallable DescribeTopSpaceTableTimeSeriesCallable(const Model::DescribeTopSpaceTableTimeSeriesRequest& request);

                /**
                 *获取实例Top表的实时空间统计信息，默认返回按大小排序。
                 * @param req DescribeTopSpaceTablesRequest
                 * @return DescribeTopSpaceTablesOutcome
                 */
                DescribeTopSpaceTablesOutcome DescribeTopSpaceTables(const Model::DescribeTopSpaceTablesRequest &request);
                void DescribeTopSpaceTablesAsync(const Model::DescribeTopSpaceTablesRequest& request, const DescribeTopSpaceTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopSpaceTablesOutcomeCallable DescribeTopSpaceTablesCallable(const Model::DescribeTopSpaceTablesRequest& request);

                /**
                 *获取SQL优化建议。【产品用户回馈，此接口限免开放，后续将并入dbbrain专业版】
                 * @param req DescribeUserSqlAdviceRequest
                 * @return DescribeUserSqlAdviceOutcome
                 */
                DescribeUserSqlAdviceOutcome DescribeUserSqlAdvice(const Model::DescribeUserSqlAdviceRequest &request);
                void DescribeUserSqlAdviceAsync(const Model::DescribeUserSqlAdviceRequest& request, const DescribeUserSqlAdviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserSqlAdviceOutcomeCallable DescribeUserSqlAdviceCallable(const Model::DescribeUserSqlAdviceRequest& request);

                /**
                 *根据会话ID中断当前会话，该接口分为两次提交：第一次为预提交阶段，Stage为"Prepare"，得到的返回值包含SqlExecId；第二次为确认提交， Stage为"Commit"， 将SqlExecId的值作为参数传入，最终终止会话进程。
                 * @param req KillMySqlThreadsRequest
                 * @return KillMySqlThreadsOutcome
                 */
                KillMySqlThreadsOutcome KillMySqlThreads(const Model::KillMySqlThreadsRequest &request);
                void KillMySqlThreadsAsync(const Model::KillMySqlThreadsRequest& request, const KillMySqlThreadsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                KillMySqlThreadsOutcomeCallable KillMySqlThreadsCallable(const Model::KillMySqlThreadsRequest& request);

                /**
                 *修改审计配置相关信息，如高频存储时长等
                 * @param req ModifyAuditServiceRequest
                 * @return ModifyAuditServiceOutcome
                 */
                ModifyAuditServiceOutcome ModifyAuditService(const Model::ModifyAuditServiceRequest &request);
                void ModifyAuditServiceAsync(const Model::ModifyAuditServiceRequest& request, const ModifyAuditServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAuditServiceOutcomeCallable ModifyAuditServiceCallable(const Model::ModifyAuditServiceRequest& request);

                /**
                 *修改实例巡检开关。
                 * @param req ModifyDiagDBInstanceConfRequest
                 * @return ModifyDiagDBInstanceConfOutcome
                 */
                ModifyDiagDBInstanceConfOutcome ModifyDiagDBInstanceConf(const Model::ModifyDiagDBInstanceConfRequest &request);
                void ModifyDiagDBInstanceConfAsync(const Model::ModifyDiagDBInstanceConfRequest& request, const ModifyDiagDBInstanceConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDiagDBInstanceConfOutcomeCallable ModifyDiagDBInstanceConfCallable(const Model::ModifyDiagDBInstanceConfRequest& request);

                /**
                 *更改实例限流任务状态，目前仅用于终止限流。
                 * @param req ModifySqlFiltersRequest
                 * @return ModifySqlFiltersOutcome
                 */
                ModifySqlFiltersOutcome ModifySqlFilters(const Model::ModifySqlFiltersRequest &request);
                void ModifySqlFiltersAsync(const Model::ModifySqlFiltersRequest& request, const ModifySqlFiltersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySqlFiltersOutcomeCallable ModifySqlFiltersCallable(const Model::ModifySqlFiltersRequest& request);

                /**
                 *开启数据库审计服务
                 * @param req OpenAuditServiceRequest
                 * @return OpenAuditServiceOutcome
                 */
                OpenAuditServiceOutcome OpenAuditService(const Model::OpenAuditServiceRequest &request);
                void OpenAuditServiceAsync(const Model::OpenAuditServiceRequest& request, const OpenAuditServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenAuditServiceOutcomeCallable OpenAuditServiceCallable(const Model::OpenAuditServiceRequest& request);

                /**
                 *验证用户数据库账号权限，获取会话token。
                 * @param req VerifyUserAccountRequest
                 * @return VerifyUserAccountOutcome
                 */
                VerifyUserAccountOutcome VerifyUserAccount(const Model::VerifyUserAccountRequest &request);
                void VerifyUserAccountAsync(const Model::VerifyUserAccountRequest& request, const VerifyUserAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VerifyUserAccountOutcomeCallable VerifyUserAccountCallable(const Model::VerifyUserAccountRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_DBBRAINCLIENT_H_
