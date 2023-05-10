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

#ifndef TENCENTCLOUD_OMICS_V20221128_OMICSCLIENT_H_
#define TENCENTCLOUD_OMICS_V20221128_OMICSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/omics/v20221128/model/CreateEnvironmentRequest.h>
#include <tencentcloud/omics/v20221128/model/CreateEnvironmentResponse.h>
#include <tencentcloud/omics/v20221128/model/DeleteEnvironmentRequest.h>
#include <tencentcloud/omics/v20221128/model/DeleteEnvironmentResponse.h>
#include <tencentcloud/omics/v20221128/model/DescribeEnvironmentsRequest.h>
#include <tencentcloud/omics/v20221128/model/DescribeEnvironmentsResponse.h>
#include <tencentcloud/omics/v20221128/model/DescribeRunGroupsRequest.h>
#include <tencentcloud/omics/v20221128/model/DescribeRunGroupsResponse.h>
#include <tencentcloud/omics/v20221128/model/DescribeRunsRequest.h>
#include <tencentcloud/omics/v20221128/model/DescribeRunsResponse.h>
#include <tencentcloud/omics/v20221128/model/GetRunCallsRequest.h>
#include <tencentcloud/omics/v20221128/model/GetRunCallsResponse.h>
#include <tencentcloud/omics/v20221128/model/GetRunStatusRequest.h>
#include <tencentcloud/omics/v20221128/model/GetRunStatusResponse.h>
#include <tencentcloud/omics/v20221128/model/ImportTableFileRequest.h>
#include <tencentcloud/omics/v20221128/model/ImportTableFileResponse.h>
#include <tencentcloud/omics/v20221128/model/RunApplicationRequest.h>
#include <tencentcloud/omics/v20221128/model/RunApplicationResponse.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            class OmicsClient : public AbstractClient
            {
            public:
                OmicsClient(const Credential &credential, const std::string &region);
                OmicsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateEnvironmentResponse> CreateEnvironmentOutcome;
                typedef std::future<CreateEnvironmentOutcome> CreateEnvironmentOutcomeCallable;
                typedef std::function<void(const OmicsClient*, const Model::CreateEnvironmentRequest&, CreateEnvironmentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEnvironmentAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteEnvironmentResponse> DeleteEnvironmentOutcome;
                typedef std::future<DeleteEnvironmentOutcome> DeleteEnvironmentOutcomeCallable;
                typedef std::function<void(const OmicsClient*, const Model::DeleteEnvironmentRequest&, DeleteEnvironmentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEnvironmentAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEnvironmentsResponse> DescribeEnvironmentsOutcome;
                typedef std::future<DescribeEnvironmentsOutcome> DescribeEnvironmentsOutcomeCallable;
                typedef std::function<void(const OmicsClient*, const Model::DescribeEnvironmentsRequest&, DescribeEnvironmentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnvironmentsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRunGroupsResponse> DescribeRunGroupsOutcome;
                typedef std::future<DescribeRunGroupsOutcome> DescribeRunGroupsOutcomeCallable;
                typedef std::function<void(const OmicsClient*, const Model::DescribeRunGroupsRequest&, DescribeRunGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRunGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRunsResponse> DescribeRunsOutcome;
                typedef std::future<DescribeRunsOutcome> DescribeRunsOutcomeCallable;
                typedef std::function<void(const OmicsClient*, const Model::DescribeRunsRequest&, DescribeRunsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRunsAsyncHandler;
                typedef Outcome<Core::Error, Model::GetRunCallsResponse> GetRunCallsOutcome;
                typedef std::future<GetRunCallsOutcome> GetRunCallsOutcomeCallable;
                typedef std::function<void(const OmicsClient*, const Model::GetRunCallsRequest&, GetRunCallsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetRunCallsAsyncHandler;
                typedef Outcome<Core::Error, Model::GetRunStatusResponse> GetRunStatusOutcome;
                typedef std::future<GetRunStatusOutcome> GetRunStatusOutcomeCallable;
                typedef std::function<void(const OmicsClient*, const Model::GetRunStatusRequest&, GetRunStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetRunStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ImportTableFileResponse> ImportTableFileOutcome;
                typedef std::future<ImportTableFileOutcome> ImportTableFileOutcomeCallable;
                typedef std::function<void(const OmicsClient*, const Model::ImportTableFileRequest&, ImportTableFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImportTableFileAsyncHandler;
                typedef Outcome<Core::Error, Model::RunApplicationResponse> RunApplicationOutcome;
                typedef std::future<RunApplicationOutcome> RunApplicationOutcomeCallable;
                typedef std::function<void(const OmicsClient*, const Model::RunApplicationRequest&, RunApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunApplicationAsyncHandler;



                /**
                 *创建组学平台计算环境。
                 * @param req CreateEnvironmentRequest
                 * @return CreateEnvironmentOutcome
                 */
                CreateEnvironmentOutcome CreateEnvironment(const Model::CreateEnvironmentRequest &request);
                void CreateEnvironmentAsync(const Model::CreateEnvironmentRequest& request, const CreateEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEnvironmentOutcomeCallable CreateEnvironmentCallable(const Model::CreateEnvironmentRequest& request);

                /**
                 *删除环境。
                 * @param req DeleteEnvironmentRequest
                 * @return DeleteEnvironmentOutcome
                 */
                DeleteEnvironmentOutcome DeleteEnvironment(const Model::DeleteEnvironmentRequest &request);
                void DeleteEnvironmentAsync(const Model::DeleteEnvironmentRequest& request, const DeleteEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEnvironmentOutcomeCallable DeleteEnvironmentCallable(const Model::DeleteEnvironmentRequest& request);

                /**
                 *查询环境列表。
                 * @param req DescribeEnvironmentsRequest
                 * @return DescribeEnvironmentsOutcome
                 */
                DescribeEnvironmentsOutcome DescribeEnvironments(const Model::DescribeEnvironmentsRequest &request);
                void DescribeEnvironmentsAsync(const Model::DescribeEnvironmentsRequest& request, const DescribeEnvironmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEnvironmentsOutcomeCallable DescribeEnvironmentsCallable(const Model::DescribeEnvironmentsRequest& request);

                /**
                 *查询任务批次列表。
                 * @param req DescribeRunGroupsRequest
                 * @return DescribeRunGroupsOutcome
                 */
                DescribeRunGroupsOutcome DescribeRunGroups(const Model::DescribeRunGroupsRequest &request);
                void DescribeRunGroupsAsync(const Model::DescribeRunGroupsRequest& request, const DescribeRunGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRunGroupsOutcomeCallable DescribeRunGroupsCallable(const Model::DescribeRunGroupsRequest& request);

                /**
                 *查询任务列表。
                 * @param req DescribeRunsRequest
                 * @return DescribeRunsOutcome
                 */
                DescribeRunsOutcome DescribeRuns(const Model::DescribeRunsRequest &request);
                void DescribeRunsAsync(const Model::DescribeRunsRequest& request, const DescribeRunsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRunsOutcomeCallable DescribeRunsCallable(const Model::DescribeRunsRequest& request);

                /**
                 *查询作业详情。
                 * @param req GetRunCallsRequest
                 * @return GetRunCallsOutcome
                 */
                GetRunCallsOutcome GetRunCalls(const Model::GetRunCallsRequest &request);
                void GetRunCallsAsync(const Model::GetRunCallsRequest& request, const GetRunCallsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetRunCallsOutcomeCallable GetRunCallsCallable(const Model::GetRunCallsRequest& request);

                /**
                 *查询任务详情。
                 * @param req GetRunStatusRequest
                 * @return GetRunStatusOutcome
                 */
                GetRunStatusOutcome GetRunStatus(const Model::GetRunStatusRequest &request);
                void GetRunStatusAsync(const Model::GetRunStatusRequest& request, const GetRunStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetRunStatusOutcomeCallable GetRunStatusCallable(const Model::GetRunStatusRequest& request);

                /**
                 *导入表格文件。
                 * @param req ImportTableFileRequest
                 * @return ImportTableFileOutcome
                 */
                ImportTableFileOutcome ImportTableFile(const Model::ImportTableFileRequest &request);
                void ImportTableFileAsync(const Model::ImportTableFileRequest& request, const ImportTableFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImportTableFileOutcomeCallable ImportTableFileCallable(const Model::ImportTableFileRequest& request);

                /**
                 *运行应用。
                 * @param req RunApplicationRequest
                 * @return RunApplicationOutcome
                 */
                RunApplicationOutcome RunApplication(const Model::RunApplicationRequest &request);
                void RunApplicationAsync(const Model::RunApplicationRequest& request, const RunApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunApplicationOutcomeCallable RunApplicationCallable(const Model::RunApplicationRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_OMICSCLIENT_H_
