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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_OCEANUSCLIENT_H_
#define TENCENTCLOUD_OCEANUS_V20190422_OCEANUSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/oceanus/v20190422/model/CreateJobRequest.h>
#include <tencentcloud/oceanus/v20190422/model/CreateJobResponse.h>
#include <tencentcloud/oceanus/v20190422/model/CreateJobConfigRequest.h>
#include <tencentcloud/oceanus/v20190422/model/CreateJobConfigResponse.h>
#include <tencentcloud/oceanus/v20190422/model/CreateResourceRequest.h>
#include <tencentcloud/oceanus/v20190422/model/CreateResourceResponse.h>
#include <tencentcloud/oceanus/v20190422/model/CreateResourceConfigRequest.h>
#include <tencentcloud/oceanus/v20190422/model/CreateResourceConfigResponse.h>
#include <tencentcloud/oceanus/v20190422/model/DeleteResourceConfigsRequest.h>
#include <tencentcloud/oceanus/v20190422/model/DeleteResourceConfigsResponse.h>
#include <tencentcloud/oceanus/v20190422/model/DeleteResourcesRequest.h>
#include <tencentcloud/oceanus/v20190422/model/DeleteResourcesResponse.h>
#include <tencentcloud/oceanus/v20190422/model/DeleteTableConfigRequest.h>
#include <tencentcloud/oceanus/v20190422/model/DeleteTableConfigResponse.h>
#include <tencentcloud/oceanus/v20190422/model/DescribeJobConfigsRequest.h>
#include <tencentcloud/oceanus/v20190422/model/DescribeJobConfigsResponse.h>
#include <tencentcloud/oceanus/v20190422/model/DescribeJobsRequest.h>
#include <tencentcloud/oceanus/v20190422/model/DescribeJobsResponse.h>
#include <tencentcloud/oceanus/v20190422/model/DescribeResourceConfigsRequest.h>
#include <tencentcloud/oceanus/v20190422/model/DescribeResourceConfigsResponse.h>
#include <tencentcloud/oceanus/v20190422/model/DescribeResourceRelatedJobsRequest.h>
#include <tencentcloud/oceanus/v20190422/model/DescribeResourceRelatedJobsResponse.h>
#include <tencentcloud/oceanus/v20190422/model/DescribeResourcesRequest.h>
#include <tencentcloud/oceanus/v20190422/model/DescribeResourcesResponse.h>
#include <tencentcloud/oceanus/v20190422/model/DescribeSystemResourcesRequest.h>
#include <tencentcloud/oceanus/v20190422/model/DescribeSystemResourcesResponse.h>
#include <tencentcloud/oceanus/v20190422/model/RunJobsRequest.h>
#include <tencentcloud/oceanus/v20190422/model/RunJobsResponse.h>
#include <tencentcloud/oceanus/v20190422/model/StopJobsRequest.h>
#include <tencentcloud/oceanus/v20190422/model/StopJobsResponse.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            class OceanusClient : public AbstractClient
            {
            public:
                OceanusClient(const Credential &credential, const std::string &region);
                OceanusClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateJobResponse> CreateJobOutcome;
                typedef std::future<CreateJobOutcome> CreateJobOutcomeCallable;
                typedef std::function<void(const OceanusClient*, const Model::CreateJobRequest&, CreateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateJobConfigResponse> CreateJobConfigOutcome;
                typedef std::future<CreateJobConfigOutcome> CreateJobConfigOutcomeCallable;
                typedef std::function<void(const OceanusClient*, const Model::CreateJobConfigRequest&, CreateJobConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateJobConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateResourceResponse> CreateResourceOutcome;
                typedef std::future<CreateResourceOutcome> CreateResourceOutcomeCallable;
                typedef std::function<void(const OceanusClient*, const Model::CreateResourceRequest&, CreateResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateResourceConfigResponse> CreateResourceConfigOutcome;
                typedef std::future<CreateResourceConfigOutcome> CreateResourceConfigOutcomeCallable;
                typedef std::function<void(const OceanusClient*, const Model::CreateResourceConfigRequest&, CreateResourceConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateResourceConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteResourceConfigsResponse> DeleteResourceConfigsOutcome;
                typedef std::future<DeleteResourceConfigsOutcome> DeleteResourceConfigsOutcomeCallable;
                typedef std::function<void(const OceanusClient*, const Model::DeleteResourceConfigsRequest&, DeleteResourceConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteResourceConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteResourcesResponse> DeleteResourcesOutcome;
                typedef std::future<DeleteResourcesOutcome> DeleteResourcesOutcomeCallable;
                typedef std::function<void(const OceanusClient*, const Model::DeleteResourcesRequest&, DeleteResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTableConfigResponse> DeleteTableConfigOutcome;
                typedef std::future<DeleteTableConfigOutcome> DeleteTableConfigOutcomeCallable;
                typedef std::function<void(const OceanusClient*, const Model::DeleteTableConfigRequest&, DeleteTableConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTableConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeJobConfigsResponse> DescribeJobConfigsOutcome;
                typedef std::future<DescribeJobConfigsOutcome> DescribeJobConfigsOutcomeCallable;
                typedef std::function<void(const OceanusClient*, const Model::DescribeJobConfigsRequest&, DescribeJobConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJobConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeJobsResponse> DescribeJobsOutcome;
                typedef std::future<DescribeJobsOutcome> DescribeJobsOutcomeCallable;
                typedef std::function<void(const OceanusClient*, const Model::DescribeJobsRequest&, DescribeJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJobsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourceConfigsResponse> DescribeResourceConfigsOutcome;
                typedef std::future<DescribeResourceConfigsOutcome> DescribeResourceConfigsOutcomeCallable;
                typedef std::function<void(const OceanusClient*, const Model::DescribeResourceConfigsRequest&, DescribeResourceConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourceRelatedJobsResponse> DescribeResourceRelatedJobsOutcome;
                typedef std::future<DescribeResourceRelatedJobsOutcome> DescribeResourceRelatedJobsOutcomeCallable;
                typedef std::function<void(const OceanusClient*, const Model::DescribeResourceRelatedJobsRequest&, DescribeResourceRelatedJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceRelatedJobsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourcesResponse> DescribeResourcesOutcome;
                typedef std::future<DescribeResourcesOutcome> DescribeResourcesOutcomeCallable;
                typedef std::function<void(const OceanusClient*, const Model::DescribeResourcesRequest&, DescribeResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSystemResourcesResponse> DescribeSystemResourcesOutcome;
                typedef std::future<DescribeSystemResourcesOutcome> DescribeSystemResourcesOutcomeCallable;
                typedef std::function<void(const OceanusClient*, const Model::DescribeSystemResourcesRequest&, DescribeSystemResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSystemResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::RunJobsResponse> RunJobsOutcome;
                typedef std::future<RunJobsOutcome> RunJobsOutcomeCallable;
                typedef std::function<void(const OceanusClient*, const Model::RunJobsRequest&, RunJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunJobsAsyncHandler;
                typedef Outcome<Core::Error, Model::StopJobsResponse> StopJobsOutcome;
                typedef std::future<StopJobsOutcome> StopJobsOutcomeCallable;
                typedef std::function<void(const OceanusClient*, const Model::StopJobsRequest&, StopJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopJobsAsyncHandler;



                /**
                 *新建作业接口，一个 AppId 最多允许创建1000个作业
                 * @param req CreateJobRequest
                 * @return CreateJobOutcome
                 */
                CreateJobOutcome CreateJob(const Model::CreateJobRequest &request);
                void CreateJobAsync(const Model::CreateJobRequest& request, const CreateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateJobOutcomeCallable CreateJobCallable(const Model::CreateJobRequest& request);

                /**
                 *创建作业配置，一个作业最多有100个配置版本
                 * @param req CreateJobConfigRequest
                 * @return CreateJobConfigOutcome
                 */
                CreateJobConfigOutcome CreateJobConfig(const Model::CreateJobConfigRequest &request);
                void CreateJobConfigAsync(const Model::CreateJobConfigRequest& request, const CreateJobConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateJobConfigOutcomeCallable CreateJobConfigCallable(const Model::CreateJobConfigRequest& request);

                /**
                 *创建资源接口
                 * @param req CreateResourceRequest
                 * @return CreateResourceOutcome
                 */
                CreateResourceOutcome CreateResource(const Model::CreateResourceRequest &request);
                void CreateResourceAsync(const Model::CreateResourceRequest& request, const CreateResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateResourceOutcomeCallable CreateResourceCallable(const Model::CreateResourceRequest& request);

                /**
                 *创建资源配置接口
                 * @param req CreateResourceConfigRequest
                 * @return CreateResourceConfigOutcome
                 */
                CreateResourceConfigOutcome CreateResourceConfig(const Model::CreateResourceConfigRequest &request);
                void CreateResourceConfigAsync(const Model::CreateResourceConfigRequest& request, const CreateResourceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateResourceConfigOutcomeCallable CreateResourceConfigCallable(const Model::CreateResourceConfigRequest& request);

                /**
                 *删除资源版本
                 * @param req DeleteResourceConfigsRequest
                 * @return DeleteResourceConfigsOutcome
                 */
                DeleteResourceConfigsOutcome DeleteResourceConfigs(const Model::DeleteResourceConfigsRequest &request);
                void DeleteResourceConfigsAsync(const Model::DeleteResourceConfigsRequest& request, const DeleteResourceConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteResourceConfigsOutcomeCallable DeleteResourceConfigsCallable(const Model::DeleteResourceConfigsRequest& request);

                /**
                 *删除资源接口
                 * @param req DeleteResourcesRequest
                 * @return DeleteResourcesOutcome
                 */
                DeleteResourcesOutcome DeleteResources(const Model::DeleteResourcesRequest &request);
                void DeleteResourcesAsync(const Model::DeleteResourcesRequest& request, const DeleteResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteResourcesOutcomeCallable DeleteResourcesCallable(const Model::DeleteResourcesRequest& request);

                /**
                 *删除作业表配置
                 * @param req DeleteTableConfigRequest
                 * @return DeleteTableConfigOutcome
                 */
                DeleteTableConfigOutcome DeleteTableConfig(const Model::DeleteTableConfigRequest &request);
                void DeleteTableConfigAsync(const Model::DeleteTableConfigRequest& request, const DeleteTableConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTableConfigOutcomeCallable DeleteTableConfigCallable(const Model::DeleteTableConfigRequest& request);

                /**
                 *查询作业配置列表，一次最多查询100个
                 * @param req DescribeJobConfigsRequest
                 * @return DescribeJobConfigsOutcome
                 */
                DescribeJobConfigsOutcome DescribeJobConfigs(const Model::DescribeJobConfigsRequest &request);
                void DescribeJobConfigsAsync(const Model::DescribeJobConfigsRequest& request, const DescribeJobConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeJobConfigsOutcomeCallable DescribeJobConfigsCallable(const Model::DescribeJobConfigsRequest& request);

                /**
                 *查询作业
                 * @param req DescribeJobsRequest
                 * @return DescribeJobsOutcome
                 */
                DescribeJobsOutcome DescribeJobs(const Model::DescribeJobsRequest &request);
                void DescribeJobsAsync(const Model::DescribeJobsRequest& request, const DescribeJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeJobsOutcomeCallable DescribeJobsCallable(const Model::DescribeJobsRequest& request);

                /**
                 *描述资源配置接口
                 * @param req DescribeResourceConfigsRequest
                 * @return DescribeResourceConfigsOutcome
                 */
                DescribeResourceConfigsOutcome DescribeResourceConfigs(const Model::DescribeResourceConfigsRequest &request);
                void DescribeResourceConfigsAsync(const Model::DescribeResourceConfigsRequest& request, const DescribeResourceConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourceConfigsOutcomeCallable DescribeResourceConfigsCallable(const Model::DescribeResourceConfigsRequest& request);

                /**
                 *获取资源关联作业信息
                 * @param req DescribeResourceRelatedJobsRequest
                 * @return DescribeResourceRelatedJobsOutcome
                 */
                DescribeResourceRelatedJobsOutcome DescribeResourceRelatedJobs(const Model::DescribeResourceRelatedJobsRequest &request);
                void DescribeResourceRelatedJobsAsync(const Model::DescribeResourceRelatedJobsRequest& request, const DescribeResourceRelatedJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourceRelatedJobsOutcomeCallable DescribeResourceRelatedJobsCallable(const Model::DescribeResourceRelatedJobsRequest& request);

                /**
                 *描述资源接口
                 * @param req DescribeResourcesRequest
                 * @return DescribeResourcesOutcome
                 */
                DescribeResourcesOutcome DescribeResources(const Model::DescribeResourcesRequest &request);
                void DescribeResourcesAsync(const Model::DescribeResourcesRequest& request, const DescribeResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourcesOutcomeCallable DescribeResourcesCallable(const Model::DescribeResourcesRequest& request);

                /**
                 *描述系统资源接口
                 * @param req DescribeSystemResourcesRequest
                 * @return DescribeSystemResourcesOutcome
                 */
                DescribeSystemResourcesOutcome DescribeSystemResources(const Model::DescribeSystemResourcesRequest &request);
                void DescribeSystemResourcesAsync(const Model::DescribeSystemResourcesRequest& request, const DescribeSystemResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSystemResourcesOutcomeCallable DescribeSystemResourcesCallable(const Model::DescribeSystemResourcesRequest& request);

                /**
                 *批量启动或者恢复作业，批量操作数量上限20
                 * @param req RunJobsRequest
                 * @return RunJobsOutcome
                 */
                RunJobsOutcome RunJobs(const Model::RunJobsRequest &request);
                void RunJobsAsync(const Model::RunJobsRequest& request, const RunJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunJobsOutcomeCallable RunJobsCallable(const Model::RunJobsRequest& request);

                /**
                 *批量停止作业，批量操作数量上限为20
                 * @param req StopJobsRequest
                 * @return StopJobsOutcome
                 */
                StopJobsOutcome StopJobs(const Model::StopJobsRequest &request);
                void StopJobsAsync(const Model::StopJobsRequest& request, const StopJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopJobsOutcomeCallable StopJobsCallable(const Model::StopJobsRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_OCEANUSCLIENT_H_
