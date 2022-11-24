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

#ifndef TENCENTCLOUD_DTS_V20211206_DTSCLIENT_H_
#define TENCENTCLOUD_DTS_V20211206_DTSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/dts/v20211206/model/CompleteMigrateJobRequest.h>
#include <tencentcloud/dts/v20211206/model/CompleteMigrateJobResponse.h>
#include <tencentcloud/dts/v20211206/model/ConfigureSyncJobRequest.h>
#include <tencentcloud/dts/v20211206/model/ConfigureSyncJobResponse.h>
#include <tencentcloud/dts/v20211206/model/CreateCheckSyncJobRequest.h>
#include <tencentcloud/dts/v20211206/model/CreateCheckSyncJobResponse.h>
#include <tencentcloud/dts/v20211206/model/CreateCompareTaskRequest.h>
#include <tencentcloud/dts/v20211206/model/CreateCompareTaskResponse.h>
#include <tencentcloud/dts/v20211206/model/CreateMigrateCheckJobRequest.h>
#include <tencentcloud/dts/v20211206/model/CreateMigrateCheckJobResponse.h>
#include <tencentcloud/dts/v20211206/model/CreateMigrationServiceRequest.h>
#include <tencentcloud/dts/v20211206/model/CreateMigrationServiceResponse.h>
#include <tencentcloud/dts/v20211206/model/CreateSyncJobRequest.h>
#include <tencentcloud/dts/v20211206/model/CreateSyncJobResponse.h>
#include <tencentcloud/dts/v20211206/model/DeleteCompareTaskRequest.h>
#include <tencentcloud/dts/v20211206/model/DeleteCompareTaskResponse.h>
#include <tencentcloud/dts/v20211206/model/DescribeCheckSyncJobResultRequest.h>
#include <tencentcloud/dts/v20211206/model/DescribeCheckSyncJobResultResponse.h>
#include <tencentcloud/dts/v20211206/model/DescribeCompareReportRequest.h>
#include <tencentcloud/dts/v20211206/model/DescribeCompareReportResponse.h>
#include <tencentcloud/dts/v20211206/model/DescribeCompareTasksRequest.h>
#include <tencentcloud/dts/v20211206/model/DescribeCompareTasksResponse.h>
#include <tencentcloud/dts/v20211206/model/DescribeMigrateDBInstancesRequest.h>
#include <tencentcloud/dts/v20211206/model/DescribeMigrateDBInstancesResponse.h>
#include <tencentcloud/dts/v20211206/model/DescribeMigrationCheckJobRequest.h>
#include <tencentcloud/dts/v20211206/model/DescribeMigrationCheckJobResponse.h>
#include <tencentcloud/dts/v20211206/model/DescribeMigrationDetailRequest.h>
#include <tencentcloud/dts/v20211206/model/DescribeMigrationDetailResponse.h>
#include <tencentcloud/dts/v20211206/model/DescribeMigrationJobsRequest.h>
#include <tencentcloud/dts/v20211206/model/DescribeMigrationJobsResponse.h>
#include <tencentcloud/dts/v20211206/model/DescribeSyncJobsRequest.h>
#include <tencentcloud/dts/v20211206/model/DescribeSyncJobsResponse.h>
#include <tencentcloud/dts/v20211206/model/DestroyMigrateJobRequest.h>
#include <tencentcloud/dts/v20211206/model/DestroyMigrateJobResponse.h>
#include <tencentcloud/dts/v20211206/model/DestroySyncJobRequest.h>
#include <tencentcloud/dts/v20211206/model/DestroySyncJobResponse.h>
#include <tencentcloud/dts/v20211206/model/IsolateMigrateJobRequest.h>
#include <tencentcloud/dts/v20211206/model/IsolateMigrateJobResponse.h>
#include <tencentcloud/dts/v20211206/model/IsolateSyncJobRequest.h>
#include <tencentcloud/dts/v20211206/model/IsolateSyncJobResponse.h>
#include <tencentcloud/dts/v20211206/model/ModifyCompareTaskRequest.h>
#include <tencentcloud/dts/v20211206/model/ModifyCompareTaskResponse.h>
#include <tencentcloud/dts/v20211206/model/ModifyCompareTaskNameRequest.h>
#include <tencentcloud/dts/v20211206/model/ModifyCompareTaskNameResponse.h>
#include <tencentcloud/dts/v20211206/model/ModifyMigrateJobSpecRequest.h>
#include <tencentcloud/dts/v20211206/model/ModifyMigrateJobSpecResponse.h>
#include <tencentcloud/dts/v20211206/model/ModifyMigrateNameRequest.h>
#include <tencentcloud/dts/v20211206/model/ModifyMigrateNameResponse.h>
#include <tencentcloud/dts/v20211206/model/ModifyMigrationJobRequest.h>
#include <tencentcloud/dts/v20211206/model/ModifyMigrationJobResponse.h>
#include <tencentcloud/dts/v20211206/model/RecoverMigrateJobRequest.h>
#include <tencentcloud/dts/v20211206/model/RecoverMigrateJobResponse.h>
#include <tencentcloud/dts/v20211206/model/RecoverSyncJobRequest.h>
#include <tencentcloud/dts/v20211206/model/RecoverSyncJobResponse.h>
#include <tencentcloud/dts/v20211206/model/ResizeSyncJobRequest.h>
#include <tencentcloud/dts/v20211206/model/ResizeSyncJobResponse.h>
#include <tencentcloud/dts/v20211206/model/ResumeMigrateJobRequest.h>
#include <tencentcloud/dts/v20211206/model/ResumeMigrateJobResponse.h>
#include <tencentcloud/dts/v20211206/model/ResumeSyncJobRequest.h>
#include <tencentcloud/dts/v20211206/model/ResumeSyncJobResponse.h>
#include <tencentcloud/dts/v20211206/model/StartCompareRequest.h>
#include <tencentcloud/dts/v20211206/model/StartCompareResponse.h>
#include <tencentcloud/dts/v20211206/model/StartMigrateJobRequest.h>
#include <tencentcloud/dts/v20211206/model/StartMigrateJobResponse.h>
#include <tencentcloud/dts/v20211206/model/StartSyncJobRequest.h>
#include <tencentcloud/dts/v20211206/model/StartSyncJobResponse.h>
#include <tencentcloud/dts/v20211206/model/StopCompareRequest.h>
#include <tencentcloud/dts/v20211206/model/StopCompareResponse.h>
#include <tencentcloud/dts/v20211206/model/StopMigrateJobRequest.h>
#include <tencentcloud/dts/v20211206/model/StopMigrateJobResponse.h>
#include <tencentcloud/dts/v20211206/model/StopSyncJobRequest.h>
#include <tencentcloud/dts/v20211206/model/StopSyncJobResponse.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            class DtsClient : public AbstractClient
            {
            public:
                DtsClient(const Credential &credential, const std::string &region);
                DtsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CompleteMigrateJobResponse> CompleteMigrateJobOutcome;
                typedef std::future<CompleteMigrateJobOutcome> CompleteMigrateJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::CompleteMigrateJobRequest&, CompleteMigrateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CompleteMigrateJobAsyncHandler;
                typedef Outcome<Core::Error, Model::ConfigureSyncJobResponse> ConfigureSyncJobOutcome;
                typedef std::future<ConfigureSyncJobOutcome> ConfigureSyncJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ConfigureSyncJobRequest&, ConfigureSyncJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ConfigureSyncJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCheckSyncJobResponse> CreateCheckSyncJobOutcome;
                typedef std::future<CreateCheckSyncJobOutcome> CreateCheckSyncJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::CreateCheckSyncJobRequest&, CreateCheckSyncJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCheckSyncJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCompareTaskResponse> CreateCompareTaskOutcome;
                typedef std::future<CreateCompareTaskOutcome> CreateCompareTaskOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::CreateCompareTaskRequest&, CreateCompareTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCompareTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMigrateCheckJobResponse> CreateMigrateCheckJobOutcome;
                typedef std::future<CreateMigrateCheckJobOutcome> CreateMigrateCheckJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::CreateMigrateCheckJobRequest&, CreateMigrateCheckJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMigrateCheckJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMigrationServiceResponse> CreateMigrationServiceOutcome;
                typedef std::future<CreateMigrationServiceOutcome> CreateMigrationServiceOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::CreateMigrationServiceRequest&, CreateMigrationServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMigrationServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSyncJobResponse> CreateSyncJobOutcome;
                typedef std::future<CreateSyncJobOutcome> CreateSyncJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::CreateSyncJobRequest&, CreateSyncJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSyncJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCompareTaskResponse> DeleteCompareTaskOutcome;
                typedef std::future<DeleteCompareTaskOutcome> DeleteCompareTaskOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DeleteCompareTaskRequest&, DeleteCompareTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCompareTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCheckSyncJobResultResponse> DescribeCheckSyncJobResultOutcome;
                typedef std::future<DescribeCheckSyncJobResultOutcome> DescribeCheckSyncJobResultOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DescribeCheckSyncJobResultRequest&, DescribeCheckSyncJobResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCheckSyncJobResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCompareReportResponse> DescribeCompareReportOutcome;
                typedef std::future<DescribeCompareReportOutcome> DescribeCompareReportOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DescribeCompareReportRequest&, DescribeCompareReportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCompareReportAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCompareTasksResponse> DescribeCompareTasksOutcome;
                typedef std::future<DescribeCompareTasksOutcome> DescribeCompareTasksOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DescribeCompareTasksRequest&, DescribeCompareTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCompareTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMigrateDBInstancesResponse> DescribeMigrateDBInstancesOutcome;
                typedef std::future<DescribeMigrateDBInstancesOutcome> DescribeMigrateDBInstancesOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DescribeMigrateDBInstancesRequest&, DescribeMigrateDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigrateDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMigrationCheckJobResponse> DescribeMigrationCheckJobOutcome;
                typedef std::future<DescribeMigrationCheckJobOutcome> DescribeMigrationCheckJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DescribeMigrationCheckJobRequest&, DescribeMigrationCheckJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigrationCheckJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMigrationDetailResponse> DescribeMigrationDetailOutcome;
                typedef std::future<DescribeMigrationDetailOutcome> DescribeMigrationDetailOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DescribeMigrationDetailRequest&, DescribeMigrationDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigrationDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMigrationJobsResponse> DescribeMigrationJobsOutcome;
                typedef std::future<DescribeMigrationJobsOutcome> DescribeMigrationJobsOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DescribeMigrationJobsRequest&, DescribeMigrationJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigrationJobsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSyncJobsResponse> DescribeSyncJobsOutcome;
                typedef std::future<DescribeSyncJobsOutcome> DescribeSyncJobsOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DescribeSyncJobsRequest&, DescribeSyncJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSyncJobsAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyMigrateJobResponse> DestroyMigrateJobOutcome;
                typedef std::future<DestroyMigrateJobOutcome> DestroyMigrateJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DestroyMigrateJobRequest&, DestroyMigrateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyMigrateJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroySyncJobResponse> DestroySyncJobOutcome;
                typedef std::future<DestroySyncJobOutcome> DestroySyncJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DestroySyncJobRequest&, DestroySyncJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroySyncJobAsyncHandler;
                typedef Outcome<Core::Error, Model::IsolateMigrateJobResponse> IsolateMigrateJobOutcome;
                typedef std::future<IsolateMigrateJobOutcome> IsolateMigrateJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::IsolateMigrateJobRequest&, IsolateMigrateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IsolateMigrateJobAsyncHandler;
                typedef Outcome<Core::Error, Model::IsolateSyncJobResponse> IsolateSyncJobOutcome;
                typedef std::future<IsolateSyncJobOutcome> IsolateSyncJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::IsolateSyncJobRequest&, IsolateSyncJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IsolateSyncJobAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCompareTaskResponse> ModifyCompareTaskOutcome;
                typedef std::future<ModifyCompareTaskOutcome> ModifyCompareTaskOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ModifyCompareTaskRequest&, ModifyCompareTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCompareTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCompareTaskNameResponse> ModifyCompareTaskNameOutcome;
                typedef std::future<ModifyCompareTaskNameOutcome> ModifyCompareTaskNameOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ModifyCompareTaskNameRequest&, ModifyCompareTaskNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCompareTaskNameAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMigrateJobSpecResponse> ModifyMigrateJobSpecOutcome;
                typedef std::future<ModifyMigrateJobSpecOutcome> ModifyMigrateJobSpecOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ModifyMigrateJobSpecRequest&, ModifyMigrateJobSpecOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMigrateJobSpecAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMigrateNameResponse> ModifyMigrateNameOutcome;
                typedef std::future<ModifyMigrateNameOutcome> ModifyMigrateNameOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ModifyMigrateNameRequest&, ModifyMigrateNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMigrateNameAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMigrationJobResponse> ModifyMigrationJobOutcome;
                typedef std::future<ModifyMigrationJobOutcome> ModifyMigrationJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ModifyMigrationJobRequest&, ModifyMigrationJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMigrationJobAsyncHandler;
                typedef Outcome<Core::Error, Model::RecoverMigrateJobResponse> RecoverMigrateJobOutcome;
                typedef std::future<RecoverMigrateJobOutcome> RecoverMigrateJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::RecoverMigrateJobRequest&, RecoverMigrateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecoverMigrateJobAsyncHandler;
                typedef Outcome<Core::Error, Model::RecoverSyncJobResponse> RecoverSyncJobOutcome;
                typedef std::future<RecoverSyncJobOutcome> RecoverSyncJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::RecoverSyncJobRequest&, RecoverSyncJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecoverSyncJobAsyncHandler;
                typedef Outcome<Core::Error, Model::ResizeSyncJobResponse> ResizeSyncJobOutcome;
                typedef std::future<ResizeSyncJobOutcome> ResizeSyncJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ResizeSyncJobRequest&, ResizeSyncJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResizeSyncJobAsyncHandler;
                typedef Outcome<Core::Error, Model::ResumeMigrateJobResponse> ResumeMigrateJobOutcome;
                typedef std::future<ResumeMigrateJobOutcome> ResumeMigrateJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ResumeMigrateJobRequest&, ResumeMigrateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResumeMigrateJobAsyncHandler;
                typedef Outcome<Core::Error, Model::ResumeSyncJobResponse> ResumeSyncJobOutcome;
                typedef std::future<ResumeSyncJobOutcome> ResumeSyncJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ResumeSyncJobRequest&, ResumeSyncJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResumeSyncJobAsyncHandler;
                typedef Outcome<Core::Error, Model::StartCompareResponse> StartCompareOutcome;
                typedef std::future<StartCompareOutcome> StartCompareOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::StartCompareRequest&, StartCompareOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartCompareAsyncHandler;
                typedef Outcome<Core::Error, Model::StartMigrateJobResponse> StartMigrateJobOutcome;
                typedef std::future<StartMigrateJobOutcome> StartMigrateJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::StartMigrateJobRequest&, StartMigrateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartMigrateJobAsyncHandler;
                typedef Outcome<Core::Error, Model::StartSyncJobResponse> StartSyncJobOutcome;
                typedef std::future<StartSyncJobOutcome> StartSyncJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::StartSyncJobRequest&, StartSyncJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartSyncJobAsyncHandler;
                typedef Outcome<Core::Error, Model::StopCompareResponse> StopCompareOutcome;
                typedef std::future<StopCompareOutcome> StopCompareOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::StopCompareRequest&, StopCompareOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopCompareAsyncHandler;
                typedef Outcome<Core::Error, Model::StopMigrateJobResponse> StopMigrateJobOutcome;
                typedef std::future<StopMigrateJobOutcome> StopMigrateJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::StopMigrateJobRequest&, StopMigrateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopMigrateJobAsyncHandler;
                typedef Outcome<Core::Error, Model::StopSyncJobResponse> StopSyncJobOutcome;
                typedef std::future<StopSyncJobOutcome> StopSyncJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::StopSyncJobRequest&, StopSyncJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopSyncJobAsyncHandler;



                /**
                 *本接口（CompleteMigrateJob）用于完成数据迁移任务。
选择采用增量迁移方式的任务, 需要在迁移进度进入准备完成阶段后, 调用本接口, 停止迁移增量数据。
通过DescribeMigrationJobs接口查询到任务的状态为准备完成（Status="readyComplete"）时，此时可以调用本接口完成迁移任务。

                 * @param req CompleteMigrateJobRequest
                 * @return CompleteMigrateJobOutcome
                 */
                CompleteMigrateJobOutcome CompleteMigrateJob(const Model::CompleteMigrateJobRequest &request);
                void CompleteMigrateJobAsync(const Model::CompleteMigrateJobRequest& request, const CompleteMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CompleteMigrateJobOutcomeCallable CompleteMigrateJobCallable(const Model::CompleteMigrateJobRequest& request);

                /**
                 *配置一个同步任务
                 * @param req ConfigureSyncJobRequest
                 * @return ConfigureSyncJobOutcome
                 */
                ConfigureSyncJobOutcome ConfigureSyncJob(const Model::ConfigureSyncJobRequest &request);
                void ConfigureSyncJobAsync(const Model::ConfigureSyncJobRequest& request, const ConfigureSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ConfigureSyncJobOutcomeCallable ConfigureSyncJobCallable(const Model::ConfigureSyncJobRequest& request);

                /**
                 *校验同步任务，检查必要参数和周边配置。
                 * @param req CreateCheckSyncJobRequest
                 * @return CreateCheckSyncJobOutcome
                 */
                CreateCheckSyncJobOutcome CreateCheckSyncJob(const Model::CreateCheckSyncJobRequest &request);
                void CreateCheckSyncJobAsync(const Model::CreateCheckSyncJobRequest& request, const CreateCheckSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCheckSyncJobOutcomeCallable CreateCheckSyncJobCallable(const Model::CreateCheckSyncJobRequest& request);

                /**
                 *本接口用于创建数据对比任务，创建成功后会返回数据对比任务 ID，形如：dts-8yv4w2i1-cmp-37skmii9，创建成功后可通过StartCompare启动一致性校验任务
                 * @param req CreateCompareTaskRequest
                 * @return CreateCompareTaskOutcome
                 */
                CreateCompareTaskOutcome CreateCompareTask(const Model::CreateCompareTaskRequest &request);
                void CreateCompareTaskAsync(const Model::CreateCompareTaskRequest& request, const CreateCompareTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCompareTaskOutcomeCallable CreateCompareTaskCallable(const Model::CreateCompareTaskRequest& request);

                /**
                 *校验迁移任务，
在开始迁移前, 必须调用本接口创建校验迁移任务, 且校验成功后才能开始迁移. 校验的结果可以通过DescribeMigrationCheckJob查看，
校验成功后,迁移任务若有修改, 则必须重新校验并通过后, 才能开始迁移

                 * @param req CreateMigrateCheckJobRequest
                 * @return CreateMigrateCheckJobOutcome
                 */
                CreateMigrateCheckJobOutcome CreateMigrateCheckJob(const Model::CreateMigrateCheckJobRequest &request);
                void CreateMigrateCheckJobAsync(const Model::CreateMigrateCheckJobRequest& request, const CreateMigrateCheckJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMigrateCheckJobOutcomeCallable CreateMigrateCheckJobCallable(const Model::CreateMigrateCheckJobRequest& request);

                /**
                 *购买迁移任务。购买成功后会返回随机生成的迁移任务id列表，也可以通过查询迁移任务任务列表接口`DescribeMigrationJobs`看到购买成功的实例Id。注意，一旦购买成功后源及目标数据库类型，源及目标实例地域不可修改。
                 * @param req CreateMigrationServiceRequest
                 * @return CreateMigrationServiceOutcome
                 */
                CreateMigrationServiceOutcome CreateMigrationService(const Model::CreateMigrationServiceRequest &request);
                void CreateMigrationServiceAsync(const Model::CreateMigrationServiceRequest& request, const CreateMigrationServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMigrationServiceOutcomeCallable CreateMigrationServiceCallable(const Model::CreateMigrationServiceRequest& request);

                /**
                 *创建一个同步任务
                 * @param req CreateSyncJobRequest
                 * @return CreateSyncJobOutcome
                 */
                CreateSyncJobOutcome CreateSyncJob(const Model::CreateSyncJobRequest &request);
                void CreateSyncJobAsync(const Model::CreateSyncJobRequest& request, const CreateSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSyncJobOutcomeCallable CreateSyncJobCallable(const Model::CreateSyncJobRequest& request);

                /**
                 *删除一致性校验任务
                 * @param req DeleteCompareTaskRequest
                 * @return DeleteCompareTaskOutcome
                 */
                DeleteCompareTaskOutcome DeleteCompareTask(const Model::DeleteCompareTaskRequest &request);
                void DeleteCompareTaskAsync(const Model::DeleteCompareTaskRequest& request, const DeleteCompareTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCompareTaskOutcomeCallable DeleteCompareTaskCallable(const Model::DeleteCompareTaskRequest& request);

                /**
                 *查询同步校验任务结果
                 * @param req DescribeCheckSyncJobResultRequest
                 * @return DescribeCheckSyncJobResultOutcome
                 */
                DescribeCheckSyncJobResultOutcome DescribeCheckSyncJobResult(const Model::DescribeCheckSyncJobResultRequest &request);
                void DescribeCheckSyncJobResultAsync(const Model::DescribeCheckSyncJobResultRequest& request, const DescribeCheckSyncJobResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCheckSyncJobResultOutcomeCallable DescribeCheckSyncJobResultCallable(const Model::DescribeCheckSyncJobResultRequest& request);

                /**
                 *查询一致性校验任务详情
                 * @param req DescribeCompareReportRequest
                 * @return DescribeCompareReportOutcome
                 */
                DescribeCompareReportOutcome DescribeCompareReport(const Model::DescribeCompareReportRequest &request);
                void DescribeCompareReportAsync(const Model::DescribeCompareReportRequest& request, const DescribeCompareReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCompareReportOutcomeCallable DescribeCompareReportCallable(const Model::DescribeCompareReportRequest& request);

                /**
                 *查询一致性校验任务列表，调用该接口后可通过接口`DescribeCompareTasks` 查询一致性校验任务列表来获得启动后的状态。
                 * @param req DescribeCompareTasksRequest
                 * @return DescribeCompareTasksOutcome
                 */
                DescribeCompareTasksOutcome DescribeCompareTasks(const Model::DescribeCompareTasksRequest &request);
                void DescribeCompareTasksAsync(const Model::DescribeCompareTasksRequest& request, const DescribeCompareTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCompareTasksOutcomeCallable DescribeCompareTasksCallable(const Model::DescribeCompareTasksRequest& request);

                /**
                 *本接口用于查询支持迁移的云数据库实例
                 * @param req DescribeMigrateDBInstancesRequest
                 * @return DescribeMigrateDBInstancesOutcome
                 */
                DescribeMigrateDBInstancesOutcome DescribeMigrateDBInstances(const Model::DescribeMigrateDBInstancesRequest &request);
                void DescribeMigrateDBInstancesAsync(const Model::DescribeMigrateDBInstancesRequest& request, const DescribeMigrateDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMigrateDBInstancesOutcomeCallable DescribeMigrateDBInstancesCallable(const Model::DescribeMigrateDBInstancesRequest& request);

                /**
                 *本接口用于创建校验后,获取校验的结果. 能查询到当前校验的状态和进度. 
若通过校验, 则可调用'StartMigrateJob' 开始迁移.
若未通过校验, 则能查询到校验失败的原因. 请按照报错, 通过'ModifyMigrationJob'修改迁移配置或是调整源/目标实例的相关参数.
                 * @param req DescribeMigrationCheckJobRequest
                 * @return DescribeMigrationCheckJobOutcome
                 */
                DescribeMigrationCheckJobOutcome DescribeMigrationCheckJob(const Model::DescribeMigrationCheckJobRequest &request);
                void DescribeMigrationCheckJobAsync(const Model::DescribeMigrationCheckJobRequest& request, const DescribeMigrationCheckJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMigrationCheckJobOutcomeCallable DescribeMigrationCheckJobCallable(const Model::DescribeMigrationCheckJobRequest& request);

                /**
                 *查询某个迁移任务详情
                 * @param req DescribeMigrationDetailRequest
                 * @return DescribeMigrationDetailOutcome
                 */
                DescribeMigrationDetailOutcome DescribeMigrationDetail(const Model::DescribeMigrationDetailRequest &request);
                void DescribeMigrationDetailAsync(const Model::DescribeMigrationDetailRequest& request, const DescribeMigrationDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMigrationDetailOutcomeCallable DescribeMigrationDetailCallable(const Model::DescribeMigrationDetailRequest& request);

                /**
                 *查询数据迁移任务列表
                 * @param req DescribeMigrationJobsRequest
                 * @return DescribeMigrationJobsOutcome
                 */
                DescribeMigrationJobsOutcome DescribeMigrationJobs(const Model::DescribeMigrationJobsRequest &request);
                void DescribeMigrationJobsAsync(const Model::DescribeMigrationJobsRequest& request, const DescribeMigrationJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMigrationJobsOutcomeCallable DescribeMigrationJobsCallable(const Model::DescribeMigrationJobsRequest& request);

                /**
                 *查询同步任务信息
                 * @param req DescribeSyncJobsRequest
                 * @return DescribeSyncJobsOutcome
                 */
                DescribeSyncJobsOutcome DescribeSyncJobs(const Model::DescribeSyncJobsRequest &request);
                void DescribeSyncJobsAsync(const Model::DescribeSyncJobsRequest& request, const DescribeSyncJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSyncJobsOutcomeCallable DescribeSyncJobsCallable(const Model::DescribeSyncJobsRequest& request);

                /**
                 *下线数据迁移任务。计费任务必须先调用隔离(IsolateMigrateJob)接口，且只有是**已隔离**状态下，才能调用此接口销毁任务。对于不计费任务，调用隔离(IsolateMigrateJob)接口删除任务操作。
                 * @param req DestroyMigrateJobRequest
                 * @return DestroyMigrateJobOutcome
                 */
                DestroyMigrateJobOutcome DestroyMigrateJob(const Model::DestroyMigrateJobRequest &request);
                void DestroyMigrateJobAsync(const Model::DestroyMigrateJobRequest& request, const DestroyMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyMigrateJobOutcomeCallable DestroyMigrateJobCallable(const Model::DestroyMigrateJobRequest& request);

                /**
                 *下线同步任务，任务在已隔离状态下可以通过此操作进行任务下线，即彻底删除任务。下线操作后可通过查询同步任务信息接口DescribeSyncJobs，获取下线后任务列表，此操作成功后无法看到此任务表示下线成功。
                 * @param req DestroySyncJobRequest
                 * @return DestroySyncJobOutcome
                 */
                DestroySyncJobOutcome DestroySyncJob(const Model::DestroySyncJobRequest &request);
                void DestroySyncJobAsync(const Model::DestroySyncJobRequest& request, const DestroySyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroySyncJobOutcomeCallable DestroySyncJobCallable(const Model::DestroySyncJobRequest& request);

                /**
                 * 隔离退还数据迁移服务。调用此接口后可通过查询迁移服务列表接口`DescribeMigrationJobs`来查询当前任务状态。对于计费任务，在任务隔离后可进行解除隔离(RecoverMigrationJob)操作或直接进行下线销毁(DestroyMigrateJob)操作。对于不计费任务，调用此接口会直接销毁任务，无法进行恢复操作。
                 * @param req IsolateMigrateJobRequest
                 * @return IsolateMigrateJobOutcome
                 */
                IsolateMigrateJobOutcome IsolateMigrateJob(const Model::IsolateMigrateJobRequest &request);
                void IsolateMigrateJobAsync(const Model::IsolateMigrateJobRequest& request, const IsolateMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IsolateMigrateJobOutcomeCallable IsolateMigrateJobCallable(const Model::IsolateMigrateJobRequest& request);

                /**
                 *销毁(隔离)同步任务，销毁后可通过查询同步任务信息接口DescribeSyncJobs，获取销毁后状态。在任务销毁后可进行解除隔离(RecoverSyncJob)操作或直接进行立即下线操作。对于不计费任务，调用此接口后会直接删除任务，无法进行恢复操作。
                 * @param req IsolateSyncJobRequest
                 * @return IsolateSyncJobOutcome
                 */
                IsolateSyncJobOutcome IsolateSyncJob(const Model::IsolateSyncJobRequest &request);
                void IsolateSyncJobAsync(const Model::IsolateSyncJobRequest& request, const IsolateSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IsolateSyncJobOutcomeCallable IsolateSyncJobCallable(const Model::IsolateSyncJobRequest& request);

                /**
                 *修改一致性校验任务，在任务创建后启动之前，可修改一致性校验参数
                 * @param req ModifyCompareTaskRequest
                 * @return ModifyCompareTaskOutcome
                 */
                ModifyCompareTaskOutcome ModifyCompareTask(const Model::ModifyCompareTaskRequest &request);
                void ModifyCompareTaskAsync(const Model::ModifyCompareTaskRequest& request, const ModifyCompareTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCompareTaskOutcomeCallable ModifyCompareTaskCallable(const Model::ModifyCompareTaskRequest& request);

                /**
                 *修改一致性校验任务名称
                 * @param req ModifyCompareTaskNameRequest
                 * @return ModifyCompareTaskNameOutcome
                 */
                ModifyCompareTaskNameOutcome ModifyCompareTaskName(const Model::ModifyCompareTaskNameRequest &request);
                void ModifyCompareTaskNameAsync(const Model::ModifyCompareTaskNameRequest& request, const ModifyCompareTaskNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCompareTaskNameOutcomeCallable ModifyCompareTaskNameCallable(const Model::ModifyCompareTaskNameRequest& request);

                /**
                 *调整实例规格，此接口只支持按量计费任务的调整。调用此接口后可通过查询迁移服务列表接口`DescribeMigrationJobs`来查询当前任务状态。
                 * @param req ModifyMigrateJobSpecRequest
                 * @return ModifyMigrateJobSpecOutcome
                 */
                ModifyMigrateJobSpecOutcome ModifyMigrateJobSpec(const Model::ModifyMigrateJobSpecRequest &request);
                void ModifyMigrateJobSpecAsync(const Model::ModifyMigrateJobSpecRequest& request, const ModifyMigrateJobSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMigrateJobSpecOutcomeCallable ModifyMigrateJobSpecCallable(const Model::ModifyMigrateJobSpecRequest& request);

                /**
                 *修改迁移任务名
                 * @param req ModifyMigrateNameRequest
                 * @return ModifyMigrateNameOutcome
                 */
                ModifyMigrateNameOutcome ModifyMigrateName(const Model::ModifyMigrateNameRequest &request);
                void ModifyMigrateNameAsync(const Model::ModifyMigrateNameRequest& request, const ModifyMigrateNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMigrateNameOutcomeCallable ModifyMigrateNameCallable(const Model::ModifyMigrateNameRequest& request);

                /**
                 *配置迁移服务，配置成功后可通过`CreateMigrationCheckJob` 创建迁移校验任务接口发起校验任务，只有校验通过才能启动迁移任务。
                 * @param req ModifyMigrationJobRequest
                 * @return ModifyMigrationJobOutcome
                 */
                ModifyMigrationJobOutcome ModifyMigrationJob(const Model::ModifyMigrationJobRequest &request);
                void ModifyMigrationJobAsync(const Model::ModifyMigrationJobRequest& request, const ModifyMigrationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMigrationJobOutcomeCallable ModifyMigrationJobCallable(const Model::ModifyMigrationJobRequest& request);

                /**
                 *解除隔离数据迁移任务，用户手动发起隔离后的手动解隔离，只有任务状态为已隔离(手动操作)状态下才能触发此操作。调用此接口后可通过查询迁移服务列表接口`DescribeMigrationJobs`来查询当前任务状态。
                 * @param req RecoverMigrateJobRequest
                 * @return RecoverMigrateJobOutcome
                 */
                RecoverMigrateJobOutcome RecoverMigrateJob(const Model::RecoverMigrateJobRequest &request);
                void RecoverMigrateJobAsync(const Model::RecoverMigrateJobRequest& request, const RecoverMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecoverMigrateJobOutcomeCallable RecoverMigrateJobCallable(const Model::RecoverMigrateJobRequest& request);

                /**
                 *解除隔离同步任务，任务在已隔离状态下可调用该接口解除隔离状态任务，同时可通过查询同步任务信息接口DescribeSyncJobs，获取操作后状态。
                 * @param req RecoverSyncJobRequest
                 * @return RecoverSyncJobOutcome
                 */
                RecoverSyncJobOutcome RecoverSyncJob(const Model::RecoverSyncJobRequest &request);
                void RecoverSyncJobAsync(const Model::RecoverSyncJobRequest& request, const RecoverSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecoverSyncJobOutcomeCallable RecoverSyncJobCallable(const Model::RecoverSyncJobRequest& request);

                /**
                 *调整同步任务规格，此接口只支持按量计费任务的调整，调用此接口后不会立即生效，后台调整时间大概为3~5分钟。调用此接口后可通过查询同步任务信息接口DescribeSyncJobs，获取变配后的状态。
                 * @param req ResizeSyncJobRequest
                 * @return ResizeSyncJobOutcome
                 */
                ResizeSyncJobOutcome ResizeSyncJob(const Model::ResizeSyncJobRequest &request);
                void ResizeSyncJobAsync(const Model::ResizeSyncJobRequest& request, const ResizeSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResizeSyncJobOutcomeCallable ResizeSyncJobCallable(const Model::ResizeSyncJobRequest& request);

                /**
                 *重试数据迁移任务，针对异常情况可进行重试，对于redis在失败时也可重试。注意：此操作跳过校验阶段，直接重新发起任务，相当于从StartMigrationJob开始执行。调用此接口后可通过查询迁移服务列表接口`DescribeMigrationJobs`来查询当前任务状态。
                 * @param req ResumeMigrateJobRequest
                 * @return ResumeMigrateJobOutcome
                 */
                ResumeMigrateJobOutcome ResumeMigrateJob(const Model::ResumeMigrateJobRequest &request);
                void ResumeMigrateJobAsync(const Model::ResumeMigrateJobRequest& request, const ResumeMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResumeMigrateJobOutcomeCallable ResumeMigrateJobCallable(const Model::ResumeMigrateJobRequest& request);

                /**
                 *重试同步任务，部分可恢复报错情况下，可通过该接口重试同步任务，可通过查询同步任务信息接口DescribeSyncJobs，获取操作后状态。
                 * @param req ResumeSyncJobRequest
                 * @return ResumeSyncJobOutcome
                 */
                ResumeSyncJobOutcome ResumeSyncJob(const Model::ResumeSyncJobRequest &request);
                void ResumeSyncJobAsync(const Model::ResumeSyncJobRequest& request, const ResumeSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResumeSyncJobOutcomeCallable ResumeSyncJobCallable(const Model::ResumeSyncJobRequest& request);

                /**
                 *启动一致性校验任务，启动之前需要先通过接口`CreateCompareTask` 创建一致性校验任务，启动后可通过接口`DescribeCompareTasks` 查询一致性校验任务列表来获得启动后的状态
                 * @param req StartCompareRequest
                 * @return StartCompareOutcome
                 */
                StartCompareOutcome StartCompare(const Model::StartCompareRequest &request);
                void StartCompareAsync(const Model::StartCompareRequest& request, const StartCompareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartCompareOutcomeCallable StartCompareCallable(const Model::StartCompareRequest& request);

                /**
                 *本接口（StartMigrationJob）用于启动迁移任务。调用此接口后可通过查询迁移服务列表接口`DescribeMigrationJobs`来查询当前任务状态。
                 * @param req StartMigrateJobRequest
                 * @return StartMigrateJobOutcome
                 */
                StartMigrateJobOutcome StartMigrateJob(const Model::StartMigrateJobRequest &request);
                void StartMigrateJobAsync(const Model::StartMigrateJobRequest& request, const StartMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartMigrateJobOutcomeCallable StartMigrateJobCallable(const Model::StartMigrateJobRequest& request);

                /**
                 *启动同步任务
                 * @param req StartSyncJobRequest
                 * @return StartSyncJobOutcome
                 */
                StartSyncJobOutcome StartSyncJob(const Model::StartSyncJobRequest &request);
                void StartSyncJobAsync(const Model::StartSyncJobRequest& request, const StartSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartSyncJobOutcomeCallable StartSyncJobCallable(const Model::StartSyncJobRequest& request);

                /**
                 *终止一致性校验任务
                 * @param req StopCompareRequest
                 * @return StopCompareOutcome
                 */
                StopCompareOutcome StopCompare(const Model::StopCompareRequest &request);
                void StopCompareAsync(const Model::StopCompareRequest& request, const StopCompareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopCompareOutcomeCallable StopCompareCallable(const Model::StopCompareRequest& request);

                /**
                 *本接口（StopMigrateJob）用于终止数据迁移任务。
调用此接口后可通过查询迁移服务列表接口`DescribeMigrationJobs`来查询当前任务状态。
                 * @param req StopMigrateJobRequest
                 * @return StopMigrateJobOutcome
                 */
                StopMigrateJobOutcome StopMigrateJob(const Model::StopMigrateJobRequest &request);
                void StopMigrateJobAsync(const Model::StopMigrateJobRequest& request, const StopMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopMigrateJobOutcomeCallable StopMigrateJobCallable(const Model::StopMigrateJobRequest& request);

                /**
                 *终止同步任务
                 * @param req StopSyncJobRequest
                 * @return StopSyncJobOutcome
                 */
                StopSyncJobOutcome StopSyncJob(const Model::StopSyncJobRequest &request);
                void StopSyncJobAsync(const Model::StopSyncJobRequest& request, const StopSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopSyncJobOutcomeCallable StopSyncJobCallable(const Model::StopSyncJobRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_DTSCLIENT_H_
