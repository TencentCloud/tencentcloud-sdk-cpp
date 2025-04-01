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

#ifndef TENCENTCLOUD_DBBRAIN_V20191016_DBBRAINCLIENT_H_
#define TENCENTCLOUD_DBBRAIN_V20191016_DBBRAINCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/dbbrain/v20191016/model/AddUserContactRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/AddUserContactResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/CreateDBDiagReportTaskRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/CreateDBDiagReportTaskResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/CreateDBDiagReportUrlRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/CreateDBDiagReportUrlResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/CreateMailProfileRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/CreateMailProfileResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/CreateSchedulerMailProfileRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/CreateSchedulerMailProfileResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/CreateSecurityAuditLogExportTaskRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/CreateSecurityAuditLogExportTaskResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/DeleteSecurityAuditLogExportTasksRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/DeleteSecurityAuditLogExportTasksResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeAllUserContactRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeAllUserContactResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeAllUserGroupRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeAllUserGroupResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeDBDiagEventRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeDBDiagEventResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeDBDiagHistoryRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeDBDiagHistoryResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeDBDiagReportTasksRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeDBDiagReportTasksResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeDBSpaceStatusRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeDBSpaceStatusResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeDiagDBInstancesRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeDiagDBInstancesResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeHealthScoreRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeHealthScoreResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeMailProfileRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeMailProfileResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeMySqlProcessListRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeMySqlProcessListResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeSecurityAuditLogDownloadUrlsRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeSecurityAuditLogDownloadUrlsResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeSecurityAuditLogExportTasksRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeSecurityAuditLogExportTasksResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeSlowLogTimeSeriesStatsRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeSlowLogTimeSeriesStatsResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeSlowLogTopSqlsRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeSlowLogTopSqlsResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeSlowLogUserHostStatsRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeSlowLogUserHostStatsResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeTopSpaceSchemaTimeSeriesRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeTopSpaceSchemaTimeSeriesResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeTopSpaceSchemasRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeTopSpaceSchemasResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeTopSpaceTableTimeSeriesRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeTopSpaceTableTimeSeriesResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeTopSpaceTablesRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeTopSpaceTablesResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeUserSqlAdviceRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeUserSqlAdviceResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/ModifyDiagDBInstanceConfRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/ModifyDiagDBInstanceConfResponse.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20191016
        {
            class DbbrainClient : public AbstractClient
            {
            public:
                DbbrainClient(const Credential &credential, const std::string &region);
                DbbrainClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddUserContactResponse> AddUserContactOutcome;
                typedef std::future<AddUserContactOutcome> AddUserContactOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::AddUserContactRequest&, AddUserContactOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddUserContactAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDBDiagReportTaskResponse> CreateDBDiagReportTaskOutcome;
                typedef std::future<CreateDBDiagReportTaskOutcome> CreateDBDiagReportTaskOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::CreateDBDiagReportTaskRequest&, CreateDBDiagReportTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBDiagReportTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDBDiagReportUrlResponse> CreateDBDiagReportUrlOutcome;
                typedef std::future<CreateDBDiagReportUrlOutcome> CreateDBDiagReportUrlOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::CreateDBDiagReportUrlRequest&, CreateDBDiagReportUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBDiagReportUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMailProfileResponse> CreateMailProfileOutcome;
                typedef std::future<CreateMailProfileOutcome> CreateMailProfileOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::CreateMailProfileRequest&, CreateMailProfileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMailProfileAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSchedulerMailProfileResponse> CreateSchedulerMailProfileOutcome;
                typedef std::future<CreateSchedulerMailProfileOutcome> CreateSchedulerMailProfileOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::CreateSchedulerMailProfileRequest&, CreateSchedulerMailProfileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSchedulerMailProfileAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSecurityAuditLogExportTaskResponse> CreateSecurityAuditLogExportTaskOutcome;
                typedef std::future<CreateSecurityAuditLogExportTaskOutcome> CreateSecurityAuditLogExportTaskOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::CreateSecurityAuditLogExportTaskRequest&, CreateSecurityAuditLogExportTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecurityAuditLogExportTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSecurityAuditLogExportTasksResponse> DeleteSecurityAuditLogExportTasksOutcome;
                typedef std::future<DeleteSecurityAuditLogExportTasksOutcome> DeleteSecurityAuditLogExportTasksOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DeleteSecurityAuditLogExportTasksRequest&, DeleteSecurityAuditLogExportTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecurityAuditLogExportTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAllUserContactResponse> DescribeAllUserContactOutcome;
                typedef std::future<DescribeAllUserContactOutcome> DescribeAllUserContactOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeAllUserContactRequest&, DescribeAllUserContactOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllUserContactAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAllUserGroupResponse> DescribeAllUserGroupOutcome;
                typedef std::future<DescribeAllUserGroupOutcome> DescribeAllUserGroupOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeAllUserGroupRequest&, DescribeAllUserGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllUserGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBDiagEventResponse> DescribeDBDiagEventOutcome;
                typedef std::future<DescribeDBDiagEventOutcome> DescribeDBDiagEventOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeDBDiagEventRequest&, DescribeDBDiagEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBDiagEventAsyncHandler;
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
                typedef Outcome<Core::Error, Model::ModifyDiagDBInstanceConfResponse> ModifyDiagDBInstanceConfOutcome;
                typedef std::future<ModifyDiagDBInstanceConfOutcome> ModifyDiagDBInstanceConfOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::ModifyDiagDBInstanceConfRequest&, ModifyDiagDBInstanceConfOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDiagDBInstanceConfAsyncHandler;



                /**
                 *添加邮件接收联系人的姓名， 邮件地址，返回值为添加成功的联系人id。Region统一选择广州。
                 * @param req AddUserContactRequest
                 * @return AddUserContactOutcome
                 */
                AddUserContactOutcome AddUserContact(const Model::AddUserContactRequest &request);
                void AddUserContactAsync(const Model::AddUserContactRequest& request, const AddUserContactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddUserContactOutcomeCallable AddUserContactCallable(const Model::AddUserContactRequest& request);

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
                 *创建邮件配置。其中入参ProfileType表示所创建配置的类型，ProfileType 取值包括：dbScan_mail_configuration（数据库巡检邮件配置）、scheduler_mail_configuration（定期生成健康报告的邮件发送配置）。Region统一选择广州，和实例所属地域无关。
                 * @param req CreateMailProfileRequest
                 * @return CreateMailProfileOutcome
                 */
                CreateMailProfileOutcome CreateMailProfile(const Model::CreateMailProfileRequest &request);
                void CreateMailProfileAsync(const Model::CreateMailProfileRequest& request, const CreateMailProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMailProfileOutcomeCallable CreateMailProfileCallable(const Model::CreateMailProfileRequest& request);

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
                 *删除安全审计日志导出任务。
                 * @param req DeleteSecurityAuditLogExportTasksRequest
                 * @return DeleteSecurityAuditLogExportTasksOutcome
                 */
                DeleteSecurityAuditLogExportTasksOutcome DeleteSecurityAuditLogExportTasks(const Model::DeleteSecurityAuditLogExportTasksRequest &request);
                void DeleteSecurityAuditLogExportTasksAsync(const Model::DeleteSecurityAuditLogExportTasksRequest& request, const DeleteSecurityAuditLogExportTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSecurityAuditLogExportTasksOutcomeCallable DeleteSecurityAuditLogExportTasksCallable(const Model::DeleteSecurityAuditLogExportTasksRequest& request);

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
                 *获取实例异常诊断事件的详情信息。
                 * @param req DescribeDBDiagEventRequest
                 * @return DescribeDBDiagEventOutcome
                 */
                DescribeDBDiagEventOutcome DescribeDBDiagEvent(const Model::DescribeDBDiagEventRequest &request);
                void DescribeDBDiagEventAsync(const Model::DescribeDBDiagEventRequest& request, const DescribeDBDiagEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBDiagEventOutcomeCallable DescribeDBDiagEventCallable(const Model::DescribeDBDiagEventRequest& request);

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
                 *获取发送邮件的配置， 包括数据库巡检的邮件配置以及定期生成健康报告的邮件发送配置。Region统一选择广州。
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
                 *获取SQL优化建议。
                 * @param req DescribeUserSqlAdviceRequest
                 * @return DescribeUserSqlAdviceOutcome
                 */
                DescribeUserSqlAdviceOutcome DescribeUserSqlAdvice(const Model::DescribeUserSqlAdviceRequest &request);
                void DescribeUserSqlAdviceAsync(const Model::DescribeUserSqlAdviceRequest& request, const DescribeUserSqlAdviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserSqlAdviceOutcomeCallable DescribeUserSqlAdviceCallable(const Model::DescribeUserSqlAdviceRequest& request);

                /**
                 *修改实例巡检开关。
                 * @param req ModifyDiagDBInstanceConfRequest
                 * @return ModifyDiagDBInstanceConfOutcome
                 */
                ModifyDiagDBInstanceConfOutcome ModifyDiagDBInstanceConf(const Model::ModifyDiagDBInstanceConfRequest &request);
                void ModifyDiagDBInstanceConfAsync(const Model::ModifyDiagDBInstanceConfRequest& request, const ModifyDiagDBInstanceConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDiagDBInstanceConfOutcomeCallable ModifyDiagDBInstanceConfCallable(const Model::ModifyDiagDBInstanceConfRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20191016_DBBRAINCLIENT_H_
