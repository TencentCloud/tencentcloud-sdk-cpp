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
#include <tencentcloud/dbs/v20211108/model/DescribeBackupCheckJobRequest.h>
#include <tencentcloud/dbs/v20211108/model/DescribeBackupCheckJobResponse.h>
#include <tencentcloud/dbs/v20211108/model/DescribeBackupPlansRequest.h>
#include <tencentcloud/dbs/v20211108/model/DescribeBackupPlansResponse.h>
#include <tencentcloud/dbs/v20211108/model/DescribeConnectTestResultRequest.h>
#include <tencentcloud/dbs/v20211108/model/DescribeConnectTestResultResponse.h>
#include <tencentcloud/dbs/v20211108/model/StartBackupCheckJobRequest.h>
#include <tencentcloud/dbs/v20211108/model/StartBackupCheckJobResponse.h>
#include <tencentcloud/dbs/v20211108/model/StartBackupPlanRequest.h>
#include <tencentcloud/dbs/v20211108/model/StartBackupPlanResponse.h>


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
                typedef Outcome<Core::Error, Model::DescribeBackupCheckJobResponse> DescribeBackupCheckJobOutcome;
                typedef std::future<DescribeBackupCheckJobOutcome> DescribeBackupCheckJobOutcomeCallable;
                typedef std::function<void(const DbsClient*, const Model::DescribeBackupCheckJobRequest&, DescribeBackupCheckJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupCheckJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupPlansResponse> DescribeBackupPlansOutcome;
                typedef std::future<DescribeBackupPlansOutcome> DescribeBackupPlansOutcomeCallable;
                typedef std::function<void(const DbsClient*, const Model::DescribeBackupPlansRequest&, DescribeBackupPlansOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupPlansAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConnectTestResultResponse> DescribeConnectTestResultOutcome;
                typedef std::future<DescribeConnectTestResultOutcome> DescribeConnectTestResultOutcomeCallable;
                typedef std::function<void(const DbsClient*, const Model::DescribeConnectTestResultRequest&, DescribeConnectTestResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConnectTestResultAsyncHandler;
                typedef Outcome<Core::Error, Model::StartBackupCheckJobResponse> StartBackupCheckJobOutcome;
                typedef std::future<StartBackupCheckJobOutcome> StartBackupCheckJobOutcomeCallable;
                typedef std::function<void(const DbsClient*, const Model::StartBackupCheckJobRequest&, StartBackupCheckJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartBackupCheckJobAsyncHandler;
                typedef Outcome<Core::Error, Model::StartBackupPlanResponse> StartBackupPlanOutcome;
                typedef std::future<StartBackupPlanOutcome> StartBackupPlanOutcomeCallable;
                typedef std::function<void(const DbsClient*, const Model::StartBackupPlanRequest&, StartBackupPlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartBackupPlanAsyncHandler;



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
                 *本接口（DescribeBackupCheckJob）用于查询备份计划预校验任务的结果。仅对于预校验通过的任务，才能启动备份计划。
                 * @param req DescribeBackupCheckJobRequest
                 * @return DescribeBackupCheckJobOutcome
                 */
                DescribeBackupCheckJobOutcome DescribeBackupCheckJob(const Model::DescribeBackupCheckJobRequest &request);
                void DescribeBackupCheckJobAsync(const Model::DescribeBackupCheckJobRequest& request, const DescribeBackupCheckJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupCheckJobOutcomeCallable DescribeBackupCheckJobCallable(const Model::DescribeBackupCheckJobRequest& request);

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

            };
        }
    }
}

#endif // !TENCENTCLOUD_DBS_V20211108_DBSCLIENT_H_
