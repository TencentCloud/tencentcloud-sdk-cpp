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

#ifndef TENCENTCLOUD_DTS_V20180330_DTSCLIENT_H_
#define TENCENTCLOUD_DTS_V20180330_DTSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/dts/v20180330/model/CompleteMigrateJobRequest.h>
#include <tencentcloud/dts/v20180330/model/CompleteMigrateJobResponse.h>
#include <tencentcloud/dts/v20180330/model/CreateMigrateCheckJobRequest.h>
#include <tencentcloud/dts/v20180330/model/CreateMigrateCheckJobResponse.h>
#include <tencentcloud/dts/v20180330/model/CreateMigrateJobRequest.h>
#include <tencentcloud/dts/v20180330/model/CreateMigrateJobResponse.h>
#include <tencentcloud/dts/v20180330/model/CreateSyncCheckJobRequest.h>
#include <tencentcloud/dts/v20180330/model/CreateSyncCheckJobResponse.h>
#include <tencentcloud/dts/v20180330/model/CreateSyncJobRequest.h>
#include <tencentcloud/dts/v20180330/model/CreateSyncJobResponse.h>
#include <tencentcloud/dts/v20180330/model/DeleteMigrateJobRequest.h>
#include <tencentcloud/dts/v20180330/model/DeleteMigrateJobResponse.h>
#include <tencentcloud/dts/v20180330/model/DeleteSyncJobRequest.h>
#include <tencentcloud/dts/v20180330/model/DeleteSyncJobResponse.h>
#include <tencentcloud/dts/v20180330/model/DescribeMigrateCheckJobRequest.h>
#include <tencentcloud/dts/v20180330/model/DescribeMigrateCheckJobResponse.h>
#include <tencentcloud/dts/v20180330/model/DescribeMigrateJobsRequest.h>
#include <tencentcloud/dts/v20180330/model/DescribeMigrateJobsResponse.h>
#include <tencentcloud/dts/v20180330/model/DescribeSyncCheckJobRequest.h>
#include <tencentcloud/dts/v20180330/model/DescribeSyncCheckJobResponse.h>
#include <tencentcloud/dts/v20180330/model/DescribeSyncJobsRequest.h>
#include <tencentcloud/dts/v20180330/model/DescribeSyncJobsResponse.h>
#include <tencentcloud/dts/v20180330/model/ModifyMigrateJobRequest.h>
#include <tencentcloud/dts/v20180330/model/ModifyMigrateJobResponse.h>
#include <tencentcloud/dts/v20180330/model/ModifySyncJobRequest.h>
#include <tencentcloud/dts/v20180330/model/ModifySyncJobResponse.h>
#include <tencentcloud/dts/v20180330/model/StartMigrateJobRequest.h>
#include <tencentcloud/dts/v20180330/model/StartMigrateJobResponse.h>
#include <tencentcloud/dts/v20180330/model/StartSyncJobRequest.h>
#include <tencentcloud/dts/v20180330/model/StartSyncJobResponse.h>
#include <tencentcloud/dts/v20180330/model/StopMigrateJobRequest.h>
#include <tencentcloud/dts/v20180330/model/StopMigrateJobResponse.h>
#include <tencentcloud/dts/v20180330/model/SwitchDrToMasterRequest.h>
#include <tencentcloud/dts/v20180330/model/SwitchDrToMasterResponse.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            class DtsClient : public AbstractClient
            {
            public:
                DtsClient(const Credential &credential, const std::string &region);
                DtsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::CompleteMigrateJobResponse> CompleteMigrateJobOutcome;
                typedef std::future<CompleteMigrateJobOutcome> CompleteMigrateJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::CompleteMigrateJobRequest&, CompleteMigrateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CompleteMigrateJobAsyncHandler;
                typedef Outcome<Error, Model::CreateMigrateCheckJobResponse> CreateMigrateCheckJobOutcome;
                typedef std::future<CreateMigrateCheckJobOutcome> CreateMigrateCheckJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::CreateMigrateCheckJobRequest&, CreateMigrateCheckJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMigrateCheckJobAsyncHandler;
                typedef Outcome<Error, Model::CreateMigrateJobResponse> CreateMigrateJobOutcome;
                typedef std::future<CreateMigrateJobOutcome> CreateMigrateJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::CreateMigrateJobRequest&, CreateMigrateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMigrateJobAsyncHandler;
                typedef Outcome<Error, Model::CreateSyncCheckJobResponse> CreateSyncCheckJobOutcome;
                typedef std::future<CreateSyncCheckJobOutcome> CreateSyncCheckJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::CreateSyncCheckJobRequest&, CreateSyncCheckJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSyncCheckJobAsyncHandler;
                typedef Outcome<Error, Model::CreateSyncJobResponse> CreateSyncJobOutcome;
                typedef std::future<CreateSyncJobOutcome> CreateSyncJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::CreateSyncJobRequest&, CreateSyncJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSyncJobAsyncHandler;
                typedef Outcome<Error, Model::DeleteMigrateJobResponse> DeleteMigrateJobOutcome;
                typedef std::future<DeleteMigrateJobOutcome> DeleteMigrateJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DeleteMigrateJobRequest&, DeleteMigrateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMigrateJobAsyncHandler;
                typedef Outcome<Error, Model::DeleteSyncJobResponse> DeleteSyncJobOutcome;
                typedef std::future<DeleteSyncJobOutcome> DeleteSyncJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DeleteSyncJobRequest&, DeleteSyncJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSyncJobAsyncHandler;
                typedef Outcome<Error, Model::DescribeMigrateCheckJobResponse> DescribeMigrateCheckJobOutcome;
                typedef std::future<DescribeMigrateCheckJobOutcome> DescribeMigrateCheckJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DescribeMigrateCheckJobRequest&, DescribeMigrateCheckJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigrateCheckJobAsyncHandler;
                typedef Outcome<Error, Model::DescribeMigrateJobsResponse> DescribeMigrateJobsOutcome;
                typedef std::future<DescribeMigrateJobsOutcome> DescribeMigrateJobsOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DescribeMigrateJobsRequest&, DescribeMigrateJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigrateJobsAsyncHandler;
                typedef Outcome<Error, Model::DescribeSyncCheckJobResponse> DescribeSyncCheckJobOutcome;
                typedef std::future<DescribeSyncCheckJobOutcome> DescribeSyncCheckJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DescribeSyncCheckJobRequest&, DescribeSyncCheckJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSyncCheckJobAsyncHandler;
                typedef Outcome<Error, Model::DescribeSyncJobsResponse> DescribeSyncJobsOutcome;
                typedef std::future<DescribeSyncJobsOutcome> DescribeSyncJobsOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DescribeSyncJobsRequest&, DescribeSyncJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSyncJobsAsyncHandler;
                typedef Outcome<Error, Model::ModifyMigrateJobResponse> ModifyMigrateJobOutcome;
                typedef std::future<ModifyMigrateJobOutcome> ModifyMigrateJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ModifyMigrateJobRequest&, ModifyMigrateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMigrateJobAsyncHandler;
                typedef Outcome<Error, Model::ModifySyncJobResponse> ModifySyncJobOutcome;
                typedef std::future<ModifySyncJobOutcome> ModifySyncJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ModifySyncJobRequest&, ModifySyncJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySyncJobAsyncHandler;
                typedef Outcome<Error, Model::StartMigrateJobResponse> StartMigrateJobOutcome;
                typedef std::future<StartMigrateJobOutcome> StartMigrateJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::StartMigrateJobRequest&, StartMigrateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartMigrateJobAsyncHandler;
                typedef Outcome<Error, Model::StartSyncJobResponse> StartSyncJobOutcome;
                typedef std::future<StartSyncJobOutcome> StartSyncJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::StartSyncJobRequest&, StartSyncJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartSyncJobAsyncHandler;
                typedef Outcome<Error, Model::StopMigrateJobResponse> StopMigrateJobOutcome;
                typedef std::future<StopMigrateJobOutcome> StopMigrateJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::StopMigrateJobRequest&, StopMigrateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopMigrateJobAsyncHandler;
                typedef Outcome<Error, Model::SwitchDrToMasterResponse> SwitchDrToMasterOutcome;
                typedef std::future<SwitchDrToMasterOutcome> SwitchDrToMasterOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::SwitchDrToMasterRequest&, SwitchDrToMasterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SwitchDrToMasterAsyncHandler;



                /**
                 *本接口（CompleteMigrateJob）用于完成数据迁移任务。
选择采用增量迁移方式的任务, 需要在迁移进度进入准备完成阶段后, 调用本接口, 停止迁移增量数据。
通过DescribeMigrateJobs接口查询到任务的状态为准备完成（status=8）时，此时可以调用本接口完成迁移任务。

                 * @param req CompleteMigrateJobRequest
                 * @return CompleteMigrateJobOutcome
                 */
                CompleteMigrateJobOutcome CompleteMigrateJob(const Model::CompleteMigrateJobRequest &request);
                void CompleteMigrateJobAsync(const Model::CompleteMigrateJobRequest& request, const CompleteMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CompleteMigrateJobOutcomeCallable CompleteMigrateJobCallable(const Model::CompleteMigrateJobRequest& request);

                /**
                 *创建校验迁移任务
在开始迁移前, 必须调用本接口创建校验, 且校验成功后才能开始迁移. 校验的结果可以通过DescribeMigrateCheckJob查看.
校验成功后,迁移任务若有修改, 则必须重新创建校验并通过后, 才能开始迁移.
                 * @param req CreateMigrateCheckJobRequest
                 * @return CreateMigrateCheckJobOutcome
                 */
                CreateMigrateCheckJobOutcome CreateMigrateCheckJob(const Model::CreateMigrateCheckJobRequest &request);
                void CreateMigrateCheckJobAsync(const Model::CreateMigrateCheckJobRequest& request, const CreateMigrateCheckJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMigrateCheckJobOutcomeCallable CreateMigrateCheckJobCallable(const Model::CreateMigrateCheckJobRequest& request);

                /**
                 *本接口（CreateMigrateJob）用于创建数据迁移任务。

如果是金融区链路, 请使用域名: dts.ap-shenzhen-fsi.tencentcloudapi.com
                 * @param req CreateMigrateJobRequest
                 * @return CreateMigrateJobOutcome
                 */
                CreateMigrateJobOutcome CreateMigrateJob(const Model::CreateMigrateJobRequest &request);
                void CreateMigrateJobAsync(const Model::CreateMigrateJobRequest& request, const CreateMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMigrateJobOutcomeCallable CreateMigrateJobCallable(const Model::CreateMigrateJobRequest& request);

                /**
                 *在调用 StartSyncJob 接口启动灾备同步前, 必须调用本接口创建校验, 且校验成功后才能开始同步数据. 校验的结果可以通过 DescribeSyncCheckJob 查看.
校验成功后才能启动同步.
                 * @param req CreateSyncCheckJobRequest
                 * @return CreateSyncCheckJobOutcome
                 */
                CreateSyncCheckJobOutcome CreateSyncCheckJob(const Model::CreateSyncCheckJobRequest &request);
                void CreateSyncCheckJobAsync(const Model::CreateSyncCheckJobRequest& request, const CreateSyncCheckJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSyncCheckJobOutcomeCallable CreateSyncCheckJobCallable(const Model::CreateSyncCheckJobRequest& request);

                /**
                 *本接口(CreateSyncJob)用于创建灾备同步任务。
创建同步任务后，可以通过 CreateSyncCheckJob 接口发起校验任务。校验成功后才可以通过 StartSyncJob 接口启动同步任务。
                 * @param req CreateSyncJobRequest
                 * @return CreateSyncJobOutcome
                 */
                CreateSyncJobOutcome CreateSyncJob(const Model::CreateSyncJobRequest &request);
                void CreateSyncJobAsync(const Model::CreateSyncJobRequest& request, const CreateSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSyncJobOutcomeCallable CreateSyncJobCallable(const Model::CreateSyncJobRequest& request);

                /**
                 *本接口（DeleteMigrationJob）用于删除数据迁移任务。当通过DescribeMigrateJobs接口查询到任务的状态为：检验中（status=3）、运行中（status=7）、准备完成（status=8）、撤销中（status=11）或者完成中（status=12）时，不允许删除任务。
                 * @param req DeleteMigrateJobRequest
                 * @return DeleteMigrateJobOutcome
                 */
                DeleteMigrateJobOutcome DeleteMigrateJob(const Model::DeleteMigrateJobRequest &request);
                void DeleteMigrateJobAsync(const Model::DeleteMigrateJobRequest& request, const DeleteMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMigrateJobOutcomeCallable DeleteMigrateJobCallable(const Model::DeleteMigrateJobRequest& request);

                /**
                 *删除灾备同步任务 （运行中的同步任务不能删除）。
                 * @param req DeleteSyncJobRequest
                 * @return DeleteSyncJobOutcome
                 */
                DeleteSyncJobOutcome DeleteSyncJob(const Model::DeleteSyncJobRequest &request);
                void DeleteSyncJobAsync(const Model::DeleteSyncJobRequest& request, const DeleteSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSyncJobOutcomeCallable DeleteSyncJobCallable(const Model::DeleteSyncJobRequest& request);

                /**
                 *本接口用于创建校验后,获取校验的结果. 能查询到当前校验的状态和进度. 
若通过校验, 则可调用'StartMigrateJob' 开始迁移.
若未通过校验, 则能查询到校验失败的原因. 请按照报错, 通过'ModifyMigrateJob'修改迁移配置或是调整源/目标实例的相关参数.
                 * @param req DescribeMigrateCheckJobRequest
                 * @return DescribeMigrateCheckJobOutcome
                 */
                DescribeMigrateCheckJobOutcome DescribeMigrateCheckJob(const Model::DescribeMigrateCheckJobRequest &request);
                void DescribeMigrateCheckJobAsync(const Model::DescribeMigrateCheckJobRequest& request, const DescribeMigrateCheckJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMigrateCheckJobOutcomeCallable DescribeMigrateCheckJobCallable(const Model::DescribeMigrateCheckJobRequest& request);

                /**
                 *查询数据迁移任务.
如果是金融区链路, 请使用域名: https://dts.ap-shenzhen-fsi.tencentcloudapi.com
                 * @param req DescribeMigrateJobsRequest
                 * @return DescribeMigrateJobsOutcome
                 */
                DescribeMigrateJobsOutcome DescribeMigrateJobs(const Model::DescribeMigrateJobsRequest &request);
                void DescribeMigrateJobsAsync(const Model::DescribeMigrateJobsRequest& request, const DescribeMigrateJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMigrateJobsOutcomeCallable DescribeMigrateJobsCallable(const Model::DescribeMigrateJobsRequest& request);

                /**
                 *本接口用于在通过 CreateSyncCheckJob 接口创建灾备同步校验任务后，获取校验的结果。能查询到当前校验的状态和进度。
若通过校验, 则可调用 StartSyncJob 启动同步任务。
若未通过校验, 则会返回校验失败的原因。 可通过 ModifySyncJob 修改配置，然后再次发起校验。
校验任务需要大概约30秒，当返回的 Status 不为 finished 时表示尚未校验完成，需要轮询该接口。
如果 Status=finished 且 CheckFlag=1 时表示校验成功。
如果 Status=finished 且 CheckFlag !=1 时表示校验失败。
                 * @param req DescribeSyncCheckJobRequest
                 * @return DescribeSyncCheckJobOutcome
                 */
                DescribeSyncCheckJobOutcome DescribeSyncCheckJob(const Model::DescribeSyncCheckJobRequest &request);
                void DescribeSyncCheckJobAsync(const Model::DescribeSyncCheckJobRequest& request, const DescribeSyncCheckJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSyncCheckJobOutcomeCallable DescribeSyncCheckJobCallable(const Model::DescribeSyncCheckJobRequest& request);

                /**
                 *查询在迁移平台发起的灾备同步任务
                 * @param req DescribeSyncJobsRequest
                 * @return DescribeSyncJobsOutcome
                 */
                DescribeSyncJobsOutcome DescribeSyncJobs(const Model::DescribeSyncJobsRequest &request);
                void DescribeSyncJobsAsync(const Model::DescribeSyncJobsRequest& request, const DescribeSyncJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSyncJobsOutcomeCallable DescribeSyncJobsCallable(const Model::DescribeSyncJobsRequest& request);

                /**
                 *本接口（ModifyMigrateJob）用于修改数据迁移任务。
当迁移任务处于下述状态时，允许调用本接口修改迁移任务：迁移创建中（status=1）、 校验成功(status=4)、校验失败(status=5)、迁移失败(status=10)。但源实例、目标实例类型和目标实例地域不允许修改。

如果是金融区链路, 请使用域名: dts.ap-shenzhen-fsi.tencentcloudapi.com
                 * @param req ModifyMigrateJobRequest
                 * @return ModifyMigrateJobOutcome
                 */
                ModifyMigrateJobOutcome ModifyMigrateJob(const Model::ModifyMigrateJobRequest &request);
                void ModifyMigrateJobAsync(const Model::ModifyMigrateJobRequest& request, const ModifyMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMigrateJobOutcomeCallable ModifyMigrateJobCallable(const Model::ModifyMigrateJobRequest& request);

                /**
                 *修改灾备同步任务. 
当同步任务处于下述状态时, 允许调用本接口: 同步任务创建中, 创建完成, 校验成功, 校验失败. 
源实例和目标实例信息不允许修改，可以修改任务名、需要同步的库表。
                 * @param req ModifySyncJobRequest
                 * @return ModifySyncJobOutcome
                 */
                ModifySyncJobOutcome ModifySyncJob(const Model::ModifySyncJobRequest &request);
                void ModifySyncJobAsync(const Model::ModifySyncJobRequest& request, const ModifySyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySyncJobOutcomeCallable ModifySyncJobCallable(const Model::ModifySyncJobRequest& request);

                /**
                 *本接口（StartMigrationJob）用于启动迁移任务。非定时迁移任务会在调用后立即开始迁移，定时任务则会开始倒计时。
调用此接口前，请务必先使用CreateMigrateCheckJob校验数据迁移任务，并通过DescribeMigrateJobs接口查询到任务状态为校验通过（status=4）时，才能启动数据迁移任务。
                 * @param req StartMigrateJobRequest
                 * @return StartMigrateJobOutcome
                 */
                StartMigrateJobOutcome StartMigrateJob(const Model::StartMigrateJobRequest &request);
                void StartMigrateJobAsync(const Model::StartMigrateJobRequest& request, const StartMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartMigrateJobOutcomeCallable StartMigrateJobCallable(const Model::StartMigrateJobRequest& request);

                /**
                 *创建的灾备同步任务在通过 CreateSyncCheckJob 和 DescribeSyncCheckJob 确定校验成功后，可以调用该接口启动同步
                 * @param req StartSyncJobRequest
                 * @return StartSyncJobOutcome
                 */
                StartSyncJobOutcome StartSyncJob(const Model::StartSyncJobRequest &request);
                void StartSyncJobAsync(const Model::StartSyncJobRequest& request, const StartSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartSyncJobOutcomeCallable StartSyncJobCallable(const Model::StartSyncJobRequest& request);

                /**
                 *本接口（StopMigrateJob）用于撤销数据迁移任务。
在迁移过程中允许调用该接口撤销迁移, 撤销迁移的任务会失败。通过DescribeMigrateJobs接口查询到任务状态为运行中（status=7）或准备完成（status=8）时，才能撤销数据迁移任务。
                 * @param req StopMigrateJobRequest
                 * @return StopMigrateJobOutcome
                 */
                StopMigrateJobOutcome StopMigrateJob(const Model::StopMigrateJobRequest &request);
                void StopMigrateJobAsync(const Model::StopMigrateJobRequest& request, const StopMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopMigrateJobOutcomeCallable StopMigrateJobCallable(const Model::StopMigrateJobRequest& request);

                /**
                 *将灾备升级为主实例，停止从原来所属主实例的同步，断开主备关系。
                 * @param req SwitchDrToMasterRequest
                 * @return SwitchDrToMasterOutcome
                 */
                SwitchDrToMasterOutcome SwitchDrToMaster(const Model::SwitchDrToMasterRequest &request);
                void SwitchDrToMasterAsync(const Model::SwitchDrToMasterRequest& request, const SwitchDrToMasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SwitchDrToMasterOutcomeCallable SwitchDrToMasterCallable(const Model::SwitchDrToMasterRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_DTSCLIENT_H_
