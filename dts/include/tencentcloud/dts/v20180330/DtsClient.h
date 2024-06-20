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
#include <tencentcloud/dts/v20180330/model/ActivateSubscribeRequest.h>
#include <tencentcloud/dts/v20180330/model/ActivateSubscribeResponse.h>
#include <tencentcloud/dts/v20180330/model/CompleteMigrateJobRequest.h>
#include <tencentcloud/dts/v20180330/model/CompleteMigrateJobResponse.h>
#include <tencentcloud/dts/v20180330/model/CreateMigrateCheckJobRequest.h>
#include <tencentcloud/dts/v20180330/model/CreateMigrateCheckJobResponse.h>
#include <tencentcloud/dts/v20180330/model/CreateMigrateJobRequest.h>
#include <tencentcloud/dts/v20180330/model/CreateMigrateJobResponse.h>
#include <tencentcloud/dts/v20180330/model/CreateSubscribeRequest.h>
#include <tencentcloud/dts/v20180330/model/CreateSubscribeResponse.h>
#include <tencentcloud/dts/v20180330/model/DeleteMigrateJobRequest.h>
#include <tencentcloud/dts/v20180330/model/DeleteMigrateJobResponse.h>
#include <tencentcloud/dts/v20180330/model/DescribeAsyncRequestInfoRequest.h>
#include <tencentcloud/dts/v20180330/model/DescribeAsyncRequestInfoResponse.h>
#include <tencentcloud/dts/v20180330/model/DescribeMigrateCheckJobRequest.h>
#include <tencentcloud/dts/v20180330/model/DescribeMigrateCheckJobResponse.h>
#include <tencentcloud/dts/v20180330/model/DescribeMigrateJobsRequest.h>
#include <tencentcloud/dts/v20180330/model/DescribeMigrateJobsResponse.h>
#include <tencentcloud/dts/v20180330/model/DescribeSubscribeConfRequest.h>
#include <tencentcloud/dts/v20180330/model/DescribeSubscribeConfResponse.h>
#include <tencentcloud/dts/v20180330/model/DescribeSubscribesRequest.h>
#include <tencentcloud/dts/v20180330/model/DescribeSubscribesResponse.h>
#include <tencentcloud/dts/v20180330/model/IsolateSubscribeRequest.h>
#include <tencentcloud/dts/v20180330/model/IsolateSubscribeResponse.h>
#include <tencentcloud/dts/v20180330/model/ModifyMigrateJobRequest.h>
#include <tencentcloud/dts/v20180330/model/ModifyMigrateJobResponse.h>
#include <tencentcloud/dts/v20180330/model/ModifySubscribeAutoRenewFlagRequest.h>
#include <tencentcloud/dts/v20180330/model/ModifySubscribeAutoRenewFlagResponse.h>
#include <tencentcloud/dts/v20180330/model/ModifySubscribeConsumeTimeRequest.h>
#include <tencentcloud/dts/v20180330/model/ModifySubscribeConsumeTimeResponse.h>
#include <tencentcloud/dts/v20180330/model/ModifySubscribeNameRequest.h>
#include <tencentcloud/dts/v20180330/model/ModifySubscribeNameResponse.h>
#include <tencentcloud/dts/v20180330/model/ModifySubscribeObjectsRequest.h>
#include <tencentcloud/dts/v20180330/model/ModifySubscribeObjectsResponse.h>
#include <tencentcloud/dts/v20180330/model/ModifySubscribeVipVportRequest.h>
#include <tencentcloud/dts/v20180330/model/ModifySubscribeVipVportResponse.h>
#include <tencentcloud/dts/v20180330/model/OfflineIsolatedSubscribeRequest.h>
#include <tencentcloud/dts/v20180330/model/OfflineIsolatedSubscribeResponse.h>
#include <tencentcloud/dts/v20180330/model/ResetSubscribeRequest.h>
#include <tencentcloud/dts/v20180330/model/ResetSubscribeResponse.h>
#include <tencentcloud/dts/v20180330/model/StartMigrateJobRequest.h>
#include <tencentcloud/dts/v20180330/model/StartMigrateJobResponse.h>
#include <tencentcloud/dts/v20180330/model/StopMigrateJobRequest.h>
#include <tencentcloud/dts/v20180330/model/StopMigrateJobResponse.h>


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

                typedef Outcome<Core::Error, Model::ActivateSubscribeResponse> ActivateSubscribeOutcome;
                typedef std::future<ActivateSubscribeOutcome> ActivateSubscribeOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ActivateSubscribeRequest&, ActivateSubscribeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ActivateSubscribeAsyncHandler;
                typedef Outcome<Core::Error, Model::CompleteMigrateJobResponse> CompleteMigrateJobOutcome;
                typedef std::future<CompleteMigrateJobOutcome> CompleteMigrateJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::CompleteMigrateJobRequest&, CompleteMigrateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CompleteMigrateJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMigrateCheckJobResponse> CreateMigrateCheckJobOutcome;
                typedef std::future<CreateMigrateCheckJobOutcome> CreateMigrateCheckJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::CreateMigrateCheckJobRequest&, CreateMigrateCheckJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMigrateCheckJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMigrateJobResponse> CreateMigrateJobOutcome;
                typedef std::future<CreateMigrateJobOutcome> CreateMigrateJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::CreateMigrateJobRequest&, CreateMigrateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMigrateJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSubscribeResponse> CreateSubscribeOutcome;
                typedef std::future<CreateSubscribeOutcome> CreateSubscribeOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::CreateSubscribeRequest&, CreateSubscribeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSubscribeAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMigrateJobResponse> DeleteMigrateJobOutcome;
                typedef std::future<DeleteMigrateJobOutcome> DeleteMigrateJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DeleteMigrateJobRequest&, DeleteMigrateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMigrateJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAsyncRequestInfoResponse> DescribeAsyncRequestInfoOutcome;
                typedef std::future<DescribeAsyncRequestInfoOutcome> DescribeAsyncRequestInfoOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DescribeAsyncRequestInfoRequest&, DescribeAsyncRequestInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAsyncRequestInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMigrateCheckJobResponse> DescribeMigrateCheckJobOutcome;
                typedef std::future<DescribeMigrateCheckJobOutcome> DescribeMigrateCheckJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DescribeMigrateCheckJobRequest&, DescribeMigrateCheckJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigrateCheckJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMigrateJobsResponse> DescribeMigrateJobsOutcome;
                typedef std::future<DescribeMigrateJobsOutcome> DescribeMigrateJobsOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DescribeMigrateJobsRequest&, DescribeMigrateJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigrateJobsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSubscribeConfResponse> DescribeSubscribeConfOutcome;
                typedef std::future<DescribeSubscribeConfOutcome> DescribeSubscribeConfOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DescribeSubscribeConfRequest&, DescribeSubscribeConfOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubscribeConfAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSubscribesResponse> DescribeSubscribesOutcome;
                typedef std::future<DescribeSubscribesOutcome> DescribeSubscribesOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DescribeSubscribesRequest&, DescribeSubscribesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubscribesAsyncHandler;
                typedef Outcome<Core::Error, Model::IsolateSubscribeResponse> IsolateSubscribeOutcome;
                typedef std::future<IsolateSubscribeOutcome> IsolateSubscribeOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::IsolateSubscribeRequest&, IsolateSubscribeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IsolateSubscribeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMigrateJobResponse> ModifyMigrateJobOutcome;
                typedef std::future<ModifyMigrateJobOutcome> ModifyMigrateJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ModifyMigrateJobRequest&, ModifyMigrateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMigrateJobAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySubscribeAutoRenewFlagResponse> ModifySubscribeAutoRenewFlagOutcome;
                typedef std::future<ModifySubscribeAutoRenewFlagOutcome> ModifySubscribeAutoRenewFlagOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ModifySubscribeAutoRenewFlagRequest&, ModifySubscribeAutoRenewFlagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySubscribeAutoRenewFlagAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySubscribeConsumeTimeResponse> ModifySubscribeConsumeTimeOutcome;
                typedef std::future<ModifySubscribeConsumeTimeOutcome> ModifySubscribeConsumeTimeOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ModifySubscribeConsumeTimeRequest&, ModifySubscribeConsumeTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySubscribeConsumeTimeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySubscribeNameResponse> ModifySubscribeNameOutcome;
                typedef std::future<ModifySubscribeNameOutcome> ModifySubscribeNameOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ModifySubscribeNameRequest&, ModifySubscribeNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySubscribeNameAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySubscribeObjectsResponse> ModifySubscribeObjectsOutcome;
                typedef std::future<ModifySubscribeObjectsOutcome> ModifySubscribeObjectsOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ModifySubscribeObjectsRequest&, ModifySubscribeObjectsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySubscribeObjectsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySubscribeVipVportResponse> ModifySubscribeVipVportOutcome;
                typedef std::future<ModifySubscribeVipVportOutcome> ModifySubscribeVipVportOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ModifySubscribeVipVportRequest&, ModifySubscribeVipVportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySubscribeVipVportAsyncHandler;
                typedef Outcome<Core::Error, Model::OfflineIsolatedSubscribeResponse> OfflineIsolatedSubscribeOutcome;
                typedef std::future<OfflineIsolatedSubscribeOutcome> OfflineIsolatedSubscribeOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::OfflineIsolatedSubscribeRequest&, OfflineIsolatedSubscribeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OfflineIsolatedSubscribeAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetSubscribeResponse> ResetSubscribeOutcome;
                typedef std::future<ResetSubscribeOutcome> ResetSubscribeOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ResetSubscribeRequest&, ResetSubscribeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetSubscribeAsyncHandler;
                typedef Outcome<Core::Error, Model::StartMigrateJobResponse> StartMigrateJobOutcome;
                typedef std::future<StartMigrateJobOutcome> StartMigrateJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::StartMigrateJobRequest&, StartMigrateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartMigrateJobAsyncHandler;
                typedef Outcome<Core::Error, Model::StopMigrateJobResponse> StopMigrateJobOutcome;
                typedef std::future<StopMigrateJobOutcome> StopMigrateJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::StopMigrateJobRequest&, StopMigrateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopMigrateJobAsyncHandler;



                /**
                 *本接口用于配置数据订阅，只有在未配置状态的订阅实例才能调用此接口。
                 * @param req ActivateSubscribeRequest
                 * @return ActivateSubscribeOutcome
                 */
                ActivateSubscribeOutcome ActivateSubscribe(const Model::ActivateSubscribeRequest &request);
                void ActivateSubscribeAsync(const Model::ActivateSubscribeRequest& request, const ActivateSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ActivateSubscribeOutcomeCallable ActivateSubscribeCallable(const Model::ActivateSubscribeRequest& request);

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

如果是金融区链路, 请使用域名: https://dts.ap-shenzhen-fsi.tencentcloudapi.com
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
                 *本接口(CreateSubscribe)用于创建一个数据订阅实例。
                 * @param req CreateSubscribeRequest
                 * @return CreateSubscribeOutcome
                 */
                CreateSubscribeOutcome CreateSubscribe(const Model::CreateSubscribeRequest &request);
                void CreateSubscribeAsync(const Model::CreateSubscribeRequest& request, const CreateSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSubscribeOutcomeCallable CreateSubscribeCallable(const Model::CreateSubscribeRequest& request);

                /**
                 *本接口（DeleteMigrationJob）用于删除数据迁移任务。当通过DescribeMigrateJobs接口查询到任务的状态为：检验中（status=3）、运行中（status=7）、准备完成（status=8）、撤销中（status=11）或者完成中（status=12）时，不允许删除任务。
                 * @param req DeleteMigrateJobRequest
                 * @return DeleteMigrateJobOutcome
                 */
                DeleteMigrateJobOutcome DeleteMigrateJob(const Model::DeleteMigrateJobRequest &request);
                void DeleteMigrateJobAsync(const Model::DeleteMigrateJobRequest& request, const DeleteMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMigrateJobOutcomeCallable DeleteMigrateJobCallable(const Model::DeleteMigrateJobRequest& request);

                /**
                 *本接口（DescribeAsyncRequestInfo）用于查询任务执行结果
                 * @param req DescribeAsyncRequestInfoRequest
                 * @return DescribeAsyncRequestInfoOutcome
                 */
                DescribeAsyncRequestInfoOutcome DescribeAsyncRequestInfo(const Model::DescribeAsyncRequestInfoRequest &request);
                void DescribeAsyncRequestInfoAsync(const Model::DescribeAsyncRequestInfoRequest& request, const DescribeAsyncRequestInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAsyncRequestInfoOutcomeCallable DescribeAsyncRequestInfoCallable(const Model::DescribeAsyncRequestInfoRequest& request);

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
                 *本接口（DescribeSubscribeConf）用于查询订阅实例配置
                 * @param req DescribeSubscribeConfRequest
                 * @return DescribeSubscribeConfOutcome
                 */
                DescribeSubscribeConfOutcome DescribeSubscribeConf(const Model::DescribeSubscribeConfRequest &request);
                void DescribeSubscribeConfAsync(const Model::DescribeSubscribeConfRequest& request, const DescribeSubscribeConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSubscribeConfOutcomeCallable DescribeSubscribeConfCallable(const Model::DescribeSubscribeConfRequest& request);

                /**
                 *本接口(DescribeSubscribes)获取数据订阅实例信息列表，默认分页，每次返回20条
                 * @param req DescribeSubscribesRequest
                 * @return DescribeSubscribesOutcome
                 */
                DescribeSubscribesOutcome DescribeSubscribes(const Model::DescribeSubscribesRequest &request);
                void DescribeSubscribesAsync(const Model::DescribeSubscribesRequest& request, const DescribeSubscribesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSubscribesOutcomeCallable DescribeSubscribesCallable(const Model::DescribeSubscribesRequest& request);

                /**
                 *本接口（IsolateSubscribe）用于隔离小时计费的订阅实例。调用后，订阅实例将不能使用，同时停止计费。
                 * @param req IsolateSubscribeRequest
                 * @return IsolateSubscribeOutcome
                 */
                IsolateSubscribeOutcome IsolateSubscribe(const Model::IsolateSubscribeRequest &request);
                void IsolateSubscribeAsync(const Model::IsolateSubscribeRequest& request, const IsolateSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IsolateSubscribeOutcomeCallable IsolateSubscribeCallable(const Model::IsolateSubscribeRequest& request);

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
                 *修改订阅实例自动续费标识
                 * @param req ModifySubscribeAutoRenewFlagRequest
                 * @return ModifySubscribeAutoRenewFlagOutcome
                 */
                ModifySubscribeAutoRenewFlagOutcome ModifySubscribeAutoRenewFlag(const Model::ModifySubscribeAutoRenewFlagRequest &request);
                void ModifySubscribeAutoRenewFlagAsync(const Model::ModifySubscribeAutoRenewFlagRequest& request, const ModifySubscribeAutoRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySubscribeAutoRenewFlagOutcomeCallable ModifySubscribeAutoRenewFlagCallable(const Model::ModifySubscribeAutoRenewFlagRequest& request);

                /**
                 *本接口(ModifySubscribeConsumeTime)用于修改数据订阅通道的消费时间点
                 * @param req ModifySubscribeConsumeTimeRequest
                 * @return ModifySubscribeConsumeTimeOutcome
                 */
                ModifySubscribeConsumeTimeOutcome ModifySubscribeConsumeTime(const Model::ModifySubscribeConsumeTimeRequest &request);
                void ModifySubscribeConsumeTimeAsync(const Model::ModifySubscribeConsumeTimeRequest& request, const ModifySubscribeConsumeTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySubscribeConsumeTimeOutcomeCallable ModifySubscribeConsumeTimeCallable(const Model::ModifySubscribeConsumeTimeRequest& request);

                /**
                 *本接口(ModifySubscribeName)用于修改数据订阅实例的名称
                 * @param req ModifySubscribeNameRequest
                 * @return ModifySubscribeNameOutcome
                 */
                ModifySubscribeNameOutcome ModifySubscribeName(const Model::ModifySubscribeNameRequest &request);
                void ModifySubscribeNameAsync(const Model::ModifySubscribeNameRequest& request, const ModifySubscribeNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySubscribeNameOutcomeCallable ModifySubscribeNameCallable(const Model::ModifySubscribeNameRequest& request);

                /**
                 *本接口(ModifySubscribeObjects)用于修改数据订阅通道的订阅规则
                 * @param req ModifySubscribeObjectsRequest
                 * @return ModifySubscribeObjectsOutcome
                 */
                ModifySubscribeObjectsOutcome ModifySubscribeObjects(const Model::ModifySubscribeObjectsRequest &request);
                void ModifySubscribeObjectsAsync(const Model::ModifySubscribeObjectsRequest& request, const ModifySubscribeObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySubscribeObjectsOutcomeCallable ModifySubscribeObjectsCallable(const Model::ModifySubscribeObjectsRequest& request);

                /**
                 *本接口(ModifySubscribeVipVport)用于修改数据订阅实例的IP和端口号
                 * @param req ModifySubscribeVipVportRequest
                 * @return ModifySubscribeVipVportOutcome
                 */
                ModifySubscribeVipVportOutcome ModifySubscribeVipVport(const Model::ModifySubscribeVipVportRequest &request);
                void ModifySubscribeVipVportAsync(const Model::ModifySubscribeVipVportRequest& request, const ModifySubscribeVipVportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySubscribeVipVportOutcomeCallable ModifySubscribeVipVportCallable(const Model::ModifySubscribeVipVportRequest& request);

                /**
                 *本接口（OfflineIsolatedSubscribe）用于下线已隔离的数据订阅实例
                 * @param req OfflineIsolatedSubscribeRequest
                 * @return OfflineIsolatedSubscribeOutcome
                 */
                OfflineIsolatedSubscribeOutcome OfflineIsolatedSubscribe(const Model::OfflineIsolatedSubscribeRequest &request);
                void OfflineIsolatedSubscribeAsync(const Model::OfflineIsolatedSubscribeRequest& request, const OfflineIsolatedSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OfflineIsolatedSubscribeOutcomeCallable OfflineIsolatedSubscribeCallable(const Model::OfflineIsolatedSubscribeRequest& request);

                /**
                 *本接口(ResetSubscribe)用于重置数据订阅实例，已经激活的数据订阅实例，重置后可以使用ActivateSubscribe接口绑定其他的数据库实例
                 * @param req ResetSubscribeRequest
                 * @return ResetSubscribeOutcome
                 */
                ResetSubscribeOutcome ResetSubscribe(const Model::ResetSubscribeRequest &request);
                void ResetSubscribeAsync(const Model::ResetSubscribeRequest& request, const ResetSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetSubscribeOutcomeCallable ResetSubscribeCallable(const Model::ResetSubscribeRequest& request);

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
                 *本接口（StopMigrateJob）用于撤销数据迁移任务。
在迁移过程中允许调用该接口撤销迁移, 撤销迁移的任务会失败。通过DescribeMigrateJobs接口查询到任务状态为运行中（status=7）或准备完成（status=8）时，才能撤销数据迁移任务。
                 * @param req StopMigrateJobRequest
                 * @return StopMigrateJobOutcome
                 */
                StopMigrateJobOutcome StopMigrateJob(const Model::StopMigrateJobRequest &request);
                void StopMigrateJobAsync(const Model::StopMigrateJobRequest& request, const StopMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopMigrateJobOutcomeCallable StopMigrateJobCallable(const Model::StopMigrateJobRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_DTSCLIENT_H_
