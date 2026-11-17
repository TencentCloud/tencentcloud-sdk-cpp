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

#ifndef TENCENTCLOUD_DBS_V20211108_DBSCLIENT_H_
#define TENCENTCLOUD_DBS_V20211108_DBSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/dbs/v20211108/model/ConfigureBackupPlanRequest.h>
#include <tencentcloud/dbs/v20211108/model/ConfigureBackupPlanResponse.h>
#include <tencentcloud/dbs/v20211108/model/CreateBackupPlanRequest.h>
#include <tencentcloud/dbs/v20211108/model/CreateBackupPlanResponse.h>
#include <tencentcloud/dbs/v20211108/model/CreateConnectTestJobRequest.h>
#include <tencentcloud/dbs/v20211108/model/CreateConnectTestJobResponse.h>
#include <tencentcloud/dbs/v20211108/model/DeleteBackupPlanRequest.h>
#include <tencentcloud/dbs/v20211108/model/DeleteBackupPlanResponse.h>
#include <tencentcloud/dbs/v20211108/model/DescribeBackupCheckJobRequest.h>
#include <tencentcloud/dbs/v20211108/model/DescribeBackupCheckJobResponse.h>
#include <tencentcloud/dbs/v20211108/model/DescribeBackupPlanDetailRequest.h>
#include <tencentcloud/dbs/v20211108/model/DescribeBackupPlanDetailResponse.h>
#include <tencentcloud/dbs/v20211108/model/DescribeBackupPlansRequest.h>
#include <tencentcloud/dbs/v20211108/model/DescribeBackupPlansResponse.h>
#include <tencentcloud/dbs/v20211108/model/DescribeConnectTestResultRequest.h>
#include <tencentcloud/dbs/v20211108/model/DescribeConnectTestResultResponse.h>
#include <tencentcloud/dbs/v20211108/model/DescribeFullBackupSetDetailRequest.h>
#include <tencentcloud/dbs/v20211108/model/DescribeFullBackupSetDetailResponse.h>
#include <tencentcloud/dbs/v20211108/model/DescribeIncrementBackupSetFilesRequest.h>
#include <tencentcloud/dbs/v20211108/model/DescribeIncrementBackupSetFilesResponse.h>
#include <tencentcloud/dbs/v20211108/model/DescribeIncrementBackupSetsRequest.h>
#include <tencentcloud/dbs/v20211108/model/DescribeIncrementBackupSetsResponse.h>
#include <tencentcloud/dbs/v20211108/model/DestroyBackupPlanByUserRequest.h>
#include <tencentcloud/dbs/v20211108/model/DestroyBackupPlanByUserResponse.h>
#include <tencentcloud/dbs/v20211108/model/ModifyBackupPlanSourceInfoRequest.h>
#include <tencentcloud/dbs/v20211108/model/ModifyBackupPlanSourceInfoResponse.h>
#include <tencentcloud/dbs/v20211108/model/ResumeBackupPlanRequest.h>
#include <tencentcloud/dbs/v20211108/model/ResumeBackupPlanResponse.h>
#include <tencentcloud/dbs/v20211108/model/StartBackupCheckJobRequest.h>
#include <tencentcloud/dbs/v20211108/model/StartBackupCheckJobResponse.h>
#include <tencentcloud/dbs/v20211108/model/StartBackupPlanRequest.h>
#include <tencentcloud/dbs/v20211108/model/StartBackupPlanResponse.h>
#include <tencentcloud/dbs/v20211108/model/StopBackupPlanRequest.h>
#include <tencentcloud/dbs/v20211108/model/StopBackupPlanResponse.h>


namespace TencentCloud
{
    namespace Dbs
    {
        namespace V20211108
        {
            class DbsClient : public AbstractClient
            {
            public:
                DbsClient(const Credential &credential, const std::string &region);
                DbsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ConfigureBackupPlanResponse> ConfigureBackupPlanOutcome;
                typedef std::future<ConfigureBackupPlanOutcome> ConfigureBackupPlanOutcomeCallable;
                typedef std::function<void(const DbsClient*, const Model::ConfigureBackupPlanRequest&, ConfigureBackupPlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ConfigureBackupPlanAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBackupPlanResponse> CreateBackupPlanOutcome;
                typedef std::future<CreateBackupPlanOutcome> CreateBackupPlanOutcomeCallable;
                typedef std::function<void(const DbsClient*, const Model::CreateBackupPlanRequest&, CreateBackupPlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBackupPlanAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateConnectTestJobResponse> CreateConnectTestJobOutcome;
                typedef std::future<CreateConnectTestJobOutcome> CreateConnectTestJobOutcomeCallable;
                typedef std::function<void(const DbsClient*, const Model::CreateConnectTestJobRequest&, CreateConnectTestJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateConnectTestJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBackupPlanResponse> DeleteBackupPlanOutcome;
                typedef std::future<DeleteBackupPlanOutcome> DeleteBackupPlanOutcomeCallable;
                typedef std::function<void(const DbsClient*, const Model::DeleteBackupPlanRequest&, DeleteBackupPlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBackupPlanAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupCheckJobResponse> DescribeBackupCheckJobOutcome;
                typedef std::future<DescribeBackupCheckJobOutcome> DescribeBackupCheckJobOutcomeCallable;
                typedef std::function<void(const DbsClient*, const Model::DescribeBackupCheckJobRequest&, DescribeBackupCheckJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupCheckJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupPlanDetailResponse> DescribeBackupPlanDetailOutcome;
                typedef std::future<DescribeBackupPlanDetailOutcome> DescribeBackupPlanDetailOutcomeCallable;
                typedef std::function<void(const DbsClient*, const Model::DescribeBackupPlanDetailRequest&, DescribeBackupPlanDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupPlanDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupPlansResponse> DescribeBackupPlansOutcome;
                typedef std::future<DescribeBackupPlansOutcome> DescribeBackupPlansOutcomeCallable;
                typedef std::function<void(const DbsClient*, const Model::DescribeBackupPlansRequest&, DescribeBackupPlansOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupPlansAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConnectTestResultResponse> DescribeConnectTestResultOutcome;
                typedef std::future<DescribeConnectTestResultOutcome> DescribeConnectTestResultOutcomeCallable;
                typedef std::function<void(const DbsClient*, const Model::DescribeConnectTestResultRequest&, DescribeConnectTestResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConnectTestResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFullBackupSetDetailResponse> DescribeFullBackupSetDetailOutcome;
                typedef std::future<DescribeFullBackupSetDetailOutcome> DescribeFullBackupSetDetailOutcomeCallable;
                typedef std::function<void(const DbsClient*, const Model::DescribeFullBackupSetDetailRequest&, DescribeFullBackupSetDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFullBackupSetDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIncrementBackupSetFilesResponse> DescribeIncrementBackupSetFilesOutcome;
                typedef std::future<DescribeIncrementBackupSetFilesOutcome> DescribeIncrementBackupSetFilesOutcomeCallable;
                typedef std::function<void(const DbsClient*, const Model::DescribeIncrementBackupSetFilesRequest&, DescribeIncrementBackupSetFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIncrementBackupSetFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIncrementBackupSetsResponse> DescribeIncrementBackupSetsOutcome;
                typedef std::future<DescribeIncrementBackupSetsOutcome> DescribeIncrementBackupSetsOutcomeCallable;
                typedef std::function<void(const DbsClient*, const Model::DescribeIncrementBackupSetsRequest&, DescribeIncrementBackupSetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIncrementBackupSetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyBackupPlanByUserResponse> DestroyBackupPlanByUserOutcome;
                typedef std::future<DestroyBackupPlanByUserOutcome> DestroyBackupPlanByUserOutcomeCallable;
                typedef std::function<void(const DbsClient*, const Model::DestroyBackupPlanByUserRequest&, DestroyBackupPlanByUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyBackupPlanByUserAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBackupPlanSourceInfoResponse> ModifyBackupPlanSourceInfoOutcome;
                typedef std::future<ModifyBackupPlanSourceInfoOutcome> ModifyBackupPlanSourceInfoOutcomeCallable;
                typedef std::function<void(const DbsClient*, const Model::ModifyBackupPlanSourceInfoRequest&, ModifyBackupPlanSourceInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupPlanSourceInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ResumeBackupPlanResponse> ResumeBackupPlanOutcome;
                typedef std::future<ResumeBackupPlanOutcome> ResumeBackupPlanOutcomeCallable;
                typedef std::function<void(const DbsClient*, const Model::ResumeBackupPlanRequest&, ResumeBackupPlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResumeBackupPlanAsyncHandler;
                typedef Outcome<Core::Error, Model::StartBackupCheckJobResponse> StartBackupCheckJobOutcome;
                typedef std::future<StartBackupCheckJobOutcome> StartBackupCheckJobOutcomeCallable;
                typedef std::function<void(const DbsClient*, const Model::StartBackupCheckJobRequest&, StartBackupCheckJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartBackupCheckJobAsyncHandler;
                typedef Outcome<Core::Error, Model::StartBackupPlanResponse> StartBackupPlanOutcome;
                typedef std::future<StartBackupPlanOutcome> StartBackupPlanOutcomeCallable;
                typedef std::function<void(const DbsClient*, const Model::StartBackupPlanRequest&, StartBackupPlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartBackupPlanAsyncHandler;
                typedef Outcome<Core::Error, Model::StopBackupPlanResponse> StopBackupPlanOutcome;
                typedef std::future<StopBackupPlanOutcome> StopBackupPlanOutcomeCallable;
                typedef std::function<void(const DbsClient*, const Model::StopBackupPlanRequest&, StopBackupPlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopBackupPlanAsyncHandler;



                /**
                 *本接口（ConfigureBackupPlan）用于配置备份计划。包括配置备份源实例信息、备份对象以及备份策略等。
                 * @param req ConfigureBackupPlanRequest
                 * @return ConfigureBackupPlanOutcome
                 */
                ConfigureBackupPlanOutcome ConfigureBackupPlan(const Model::ConfigureBackupPlanRequest &request);
                void ConfigureBackupPlanAsync(const Model::ConfigureBackupPlanRequest& request, const ConfigureBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ConfigureBackupPlanOutcomeCallable ConfigureBackupPlanCallable(const Model::ConfigureBackupPlanRequest& request);

                /**
                 *该接口用于创建备份计划。
                 * @param req CreateBackupPlanRequest
                 * @return CreateBackupPlanOutcome
                 */
                CreateBackupPlanOutcome CreateBackupPlan(const Model::CreateBackupPlanRequest &request);
                void CreateBackupPlanAsync(const Model::CreateBackupPlanRequest& request, const CreateBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBackupPlanOutcomeCallable CreateBackupPlanCallable(const Model::CreateBackupPlanRequest& request);

                /**
                 *该接口用于创建连通性检测任务，请在创建备份计划前，通过该接口来检测你的源端实例是否连通性正常。
                 * @param req CreateConnectTestJobRequest
                 * @return CreateConnectTestJobOutcome
                 */
                CreateConnectTestJobOutcome CreateConnectTestJob(const Model::CreateConnectTestJobRequest &request);
                void CreateConnectTestJobAsync(const Model::CreateConnectTestJobRequest& request, const CreateConnectTestJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateConnectTestJobOutcomeCallable CreateConnectTestJobCallable(const Model::CreateConnectTestJobRequest& request);

                /**
                 *删除备份计划。

仅已下线的备份计划支持删除，删除后不可恢复。已隔离（isolated）的备份计划请先调用 DestroyBackupPlanByUser 完成下线，再进行删除。调用接口后，若通过 DescribeBackupPlans 接口查询不到对应的备份计划，则表示删除成功。
                 * @param req DeleteBackupPlanRequest
                 * @return DeleteBackupPlanOutcome
                 */
                DeleteBackupPlanOutcome DeleteBackupPlan(const Model::DeleteBackupPlanRequest &request);
                void DeleteBackupPlanAsync(const Model::DeleteBackupPlanRequest& request, const DeleteBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBackupPlanOutcomeCallable DeleteBackupPlanCallable(const Model::DeleteBackupPlanRequest& request);

                /**
                 *本接口（DescribeBackupCheckJob）用于查询备份计划预校验任务的结果。仅对于预校验通过的任务，才能启动备份计划。
                 * @param req DescribeBackupCheckJobRequest
                 * @return DescribeBackupCheckJobOutcome
                 */
                DescribeBackupCheckJobOutcome DescribeBackupCheckJob(const Model::DescribeBackupCheckJobRequest &request);
                void DescribeBackupCheckJobAsync(const Model::DescribeBackupCheckJobRequest& request, const DescribeBackupCheckJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupCheckJobOutcomeCallable DescribeBackupCheckJobCallable(const Model::DescribeBackupCheckJobRequest& request);

                /**
                 *查询备份计划详情。
返回备份计划的基本信息、源库信息、备份对象、备份策略、备份进度和付费信息。
                 * @param req DescribeBackupPlanDetailRequest
                 * @return DescribeBackupPlanDetailOutcome
                 */
                DescribeBackupPlanDetailOutcome DescribeBackupPlanDetail(const Model::DescribeBackupPlanDetailRequest &request);
                void DescribeBackupPlanDetailAsync(const Model::DescribeBackupPlanDetailRequest& request, const DescribeBackupPlanDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupPlanDetailOutcomeCallable DescribeBackupPlanDetailCallable(const Model::DescribeBackupPlanDetailRequest& request);

                /**
                 *本接口（DescribeBackupPlans）用于查询备份计划列表。
                 * @param req DescribeBackupPlansRequest
                 * @return DescribeBackupPlansOutcome
                 */
                DescribeBackupPlansOutcome DescribeBackupPlans(const Model::DescribeBackupPlansRequest &request);
                void DescribeBackupPlansAsync(const Model::DescribeBackupPlansRequest& request, const DescribeBackupPlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupPlansOutcomeCallable DescribeBackupPlansCallable(const Model::DescribeBackupPlansRequest& request);

                /**
                 *该接口用于查询连通性检测任务的结果
                 * @param req DescribeConnectTestResultRequest
                 * @return DescribeConnectTestResultOutcome
                 */
                DescribeConnectTestResultOutcome DescribeConnectTestResult(const Model::DescribeConnectTestResultRequest &request);
                void DescribeConnectTestResultAsync(const Model::DescribeConnectTestResultRequest& request, const DescribeConnectTestResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConnectTestResultOutcomeCallable DescribeConnectTestResultCallable(const Model::DescribeConnectTestResultRequest& request);

                /**
                 *查询全量备份集详情。

返回全量备份集的基本信息、源库信息、备份对象、备份进度和加密信息。
                 * @param req DescribeFullBackupSetDetailRequest
                 * @return DescribeFullBackupSetDetailOutcome
                 */
                DescribeFullBackupSetDetailOutcome DescribeFullBackupSetDetail(const Model::DescribeFullBackupSetDetailRequest &request);
                void DescribeFullBackupSetDetailAsync(const Model::DescribeFullBackupSetDetailRequest& request, const DescribeFullBackupSetDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFullBackupSetDetailOutcomeCallable DescribeFullBackupSetDetailCallable(const Model::DescribeFullBackupSetDetailRequest& request);

                /**
                 *查询增量备份集文件列表。

文件按最后修改时间倒序返回，支持分页。
                 * @param req DescribeIncrementBackupSetFilesRequest
                 * @return DescribeIncrementBackupSetFilesOutcome
                 */
                DescribeIncrementBackupSetFilesOutcome DescribeIncrementBackupSetFiles(const Model::DescribeIncrementBackupSetFilesRequest &request);
                void DescribeIncrementBackupSetFilesAsync(const Model::DescribeIncrementBackupSetFilesRequest& request, const DescribeIncrementBackupSetFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIncrementBackupSetFilesOutcomeCallable DescribeIncrementBackupSetFilesCallable(const Model::DescribeIncrementBackupSetFilesRequest& request);

                /**
                 *本接口（DescribeIncrementBackupSets）用于查询增量备份集列表。
                 * @param req DescribeIncrementBackupSetsRequest
                 * @return DescribeIncrementBackupSetsOutcome
                 */
                DescribeIncrementBackupSetsOutcome DescribeIncrementBackupSets(const Model::DescribeIncrementBackupSetsRequest &request);
                void DescribeIncrementBackupSetsAsync(const Model::DescribeIncrementBackupSetsRequest& request, const DescribeIncrementBackupSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIncrementBackupSetsOutcomeCallable DescribeIncrementBackupSetsCallable(const Model::DescribeIncrementBackupSetsRequest& request);

                /**
                 *立即下线已隔离的备份计划。

下线后备份计划不可恢复。调用接口后，若通过 DescribeBackupPlanDetail 接口查询到备份计划状态为 offlined，则表示下线成功。
                 * @param req DestroyBackupPlanByUserRequest
                 * @return DestroyBackupPlanByUserOutcome
                 */
                DestroyBackupPlanByUserOutcome DestroyBackupPlanByUser(const Model::DestroyBackupPlanByUserRequest &request);
                void DestroyBackupPlanByUserAsync(const Model::DestroyBackupPlanByUserRequest& request, const DestroyBackupPlanByUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyBackupPlanByUserOutcomeCallable DestroyBackupPlanByUserCallable(const Model::DestroyBackupPlanByUserRequest& request);

                /**
                 *本接口（ModifyBackupPlanSourceInfo）用于修改备份计划的源实例信息、备份对象信息等。注意，调用该接口后，原有备份计划任务将立即停止，您可以在修改完源信息后重新启动备份任务。
                 * @param req ModifyBackupPlanSourceInfoRequest
                 * @return ModifyBackupPlanSourceInfoOutcome
                 */
                ModifyBackupPlanSourceInfoOutcome ModifyBackupPlanSourceInfo(const Model::ModifyBackupPlanSourceInfoRequest &request);
                void ModifyBackupPlanSourceInfoAsync(const Model::ModifyBackupPlanSourceInfoRequest& request, const ModifyBackupPlanSourceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBackupPlanSourceInfoOutcomeCallable ModifyBackupPlanSourceInfoCallable(const Model::ModifyBackupPlanSourceInfoRequest& request);

                /**
                 *恢复已暂停的备份计划。

仅已暂停的备份计划支持恢复。调用接口后，若通过 DescribeBackupPlanDetail 接口查询到备份计划状态为 running，则表示恢复成功。
                 * @param req ResumeBackupPlanRequest
                 * @return ResumeBackupPlanOutcome
                 */
                ResumeBackupPlanOutcome ResumeBackupPlan(const Model::ResumeBackupPlanRequest &request);
                void ResumeBackupPlanAsync(const Model::ResumeBackupPlanRequest& request, const ResumeBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResumeBackupPlanOutcomeCallable ResumeBackupPlanCallable(const Model::ResumeBackupPlanRequest& request);

                /**
                 *本接口（StartBackupCheckJob）用于创建备份计划预校验任务。
                 * @param req StartBackupCheckJobRequest
                 * @return StartBackupCheckJobOutcome
                 */
                StartBackupCheckJobOutcome StartBackupCheckJob(const Model::StartBackupCheckJobRequest &request);
                void StartBackupCheckJobAsync(const Model::StartBackupCheckJobRequest& request, const StartBackupCheckJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartBackupCheckJobOutcomeCallable StartBackupCheckJobCallable(const Model::StartBackupCheckJobRequest& request);

                /**
                 *本接口（StartBackupPlan）用于启动备份计划。调用此接口前，请务必先使用 StartBackupCheckJob 创建备份计划预校验任务，并通过 DescribeBackupCheckJob 接口查询到任务状态为校验通过时，才能启动备份计划。
                 * @param req StartBackupPlanRequest
                 * @return StartBackupPlanOutcome
                 */
                StartBackupPlanOutcome StartBackupPlan(const Model::StartBackupPlanRequest &request);
                void StartBackupPlanAsync(const Model::StartBackupPlanRequest& request, const StartBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartBackupPlanOutcomeCallable StartBackupPlanCallable(const Model::StartBackupPlanRequest& request);

                /**
                 *暂停备份计划。

仅运行中的备份计划支持暂停。调用接口后，若通过 DescribeBackupPlanDetail 接口查询到备份计划状态为 paused，则表示暂停成功。
                 * @param req StopBackupPlanRequest
                 * @return StopBackupPlanOutcome
                 */
                StopBackupPlanOutcome StopBackupPlan(const Model::StopBackupPlanRequest &request);
                void StopBackupPlanAsync(const Model::StopBackupPlanRequest& request, const StopBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopBackupPlanOutcomeCallable StopBackupPlanCallable(const Model::StopBackupPlanRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_DBS_V20211108_DBSCLIENT_H_
