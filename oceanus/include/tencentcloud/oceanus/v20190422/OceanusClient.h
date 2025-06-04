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
#include <tencentcloud/oceanus/v20190422/model/CheckSavepointRequest.h>
#include <tencentcloud/oceanus/v20190422/model/CheckSavepointResponse.h>
#include <tencentcloud/oceanus/v20190422/model/CopyJobsRequest.h>
#include <tencentcloud/oceanus/v20190422/model/CopyJobsResponse.h>
#include <tencentcloud/oceanus/v20190422/model/CreateFolderRequest.h>
#include <tencentcloud/oceanus/v20190422/model/CreateFolderResponse.h>
#include <tencentcloud/oceanus/v20190422/model/CreateJobRequest.h>
#include <tencentcloud/oceanus/v20190422/model/CreateJobResponse.h>
#include <tencentcloud/oceanus/v20190422/model/CreateJobConfigRequest.h>
#include <tencentcloud/oceanus/v20190422/model/CreateJobConfigResponse.h>
#include <tencentcloud/oceanus/v20190422/model/CreateResourceRequest.h>
#include <tencentcloud/oceanus/v20190422/model/CreateResourceResponse.h>
#include <tencentcloud/oceanus/v20190422/model/CreateResourceConfigRequest.h>
#include <tencentcloud/oceanus/v20190422/model/CreateResourceConfigResponse.h>
#include <tencentcloud/oceanus/v20190422/model/CreateWorkSpaceRequest.h>
#include <tencentcloud/oceanus/v20190422/model/CreateWorkSpaceResponse.h>
#include <tencentcloud/oceanus/v20190422/model/DeleteFoldersRequest.h>
#include <tencentcloud/oceanus/v20190422/model/DeleteFoldersResponse.h>
#include <tencentcloud/oceanus/v20190422/model/DeleteJobConfigsRequest.h>
#include <tencentcloud/oceanus/v20190422/model/DeleteJobConfigsResponse.h>
#include <tencentcloud/oceanus/v20190422/model/DeleteJobsRequest.h>
#include <tencentcloud/oceanus/v20190422/model/DeleteJobsResponse.h>
#include <tencentcloud/oceanus/v20190422/model/DeleteResourceConfigsRequest.h>
#include <tencentcloud/oceanus/v20190422/model/DeleteResourceConfigsResponse.h>
#include <tencentcloud/oceanus/v20190422/model/DeleteResourcesRequest.h>
#include <tencentcloud/oceanus/v20190422/model/DeleteResourcesResponse.h>
#include <tencentcloud/oceanus/v20190422/model/DeleteTableConfigRequest.h>
#include <tencentcloud/oceanus/v20190422/model/DeleteTableConfigResponse.h>
#include <tencentcloud/oceanus/v20190422/model/DeleteWorkSpaceRequest.h>
#include <tencentcloud/oceanus/v20190422/model/DeleteWorkSpaceResponse.h>
#include <tencentcloud/oceanus/v20190422/model/DescribeClustersRequest.h>
#include <tencentcloud/oceanus/v20190422/model/DescribeClustersResponse.h>
#include <tencentcloud/oceanus/v20190422/model/DescribeFolderRequest.h>
#include <tencentcloud/oceanus/v20190422/model/DescribeFolderResponse.h>
#include <tencentcloud/oceanus/v20190422/model/DescribeJobConfigsRequest.h>
#include <tencentcloud/oceanus/v20190422/model/DescribeJobConfigsResponse.h>
#include <tencentcloud/oceanus/v20190422/model/DescribeJobEventsRequest.h>
#include <tencentcloud/oceanus/v20190422/model/DescribeJobEventsResponse.h>
#include <tencentcloud/oceanus/v20190422/model/DescribeJobRuntimeInfoRequest.h>
#include <tencentcloud/oceanus/v20190422/model/DescribeJobRuntimeInfoResponse.h>
#include <tencentcloud/oceanus/v20190422/model/DescribeJobSavepointRequest.h>
#include <tencentcloud/oceanus/v20190422/model/DescribeJobSavepointResponse.h>
#include <tencentcloud/oceanus/v20190422/model/DescribeJobSubmissionLogRequest.h>
#include <tencentcloud/oceanus/v20190422/model/DescribeJobSubmissionLogResponse.h>
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
#include <tencentcloud/oceanus/v20190422/model/DescribeTreeJobsRequest.h>
#include <tencentcloud/oceanus/v20190422/model/DescribeTreeJobsResponse.h>
#include <tencentcloud/oceanus/v20190422/model/DescribeTreeResourcesRequest.h>
#include <tencentcloud/oceanus/v20190422/model/DescribeTreeResourcesResponse.h>
#include <tencentcloud/oceanus/v20190422/model/DescribeWorkSpacesRequest.h>
#include <tencentcloud/oceanus/v20190422/model/DescribeWorkSpacesResponse.h>
#include <tencentcloud/oceanus/v20190422/model/FetchSqlGatewayStatementResultRequest.h>
#include <tencentcloud/oceanus/v20190422/model/FetchSqlGatewayStatementResultResponse.h>
#include <tencentcloud/oceanus/v20190422/model/GetMetaTableRequest.h>
#include <tencentcloud/oceanus/v20190422/model/GetMetaTableResponse.h>
#include <tencentcloud/oceanus/v20190422/model/ModifyFolderRequest.h>
#include <tencentcloud/oceanus/v20190422/model/ModifyFolderResponse.h>
#include <tencentcloud/oceanus/v20190422/model/ModifyJobRequest.h>
#include <tencentcloud/oceanus/v20190422/model/ModifyJobResponse.h>
#include <tencentcloud/oceanus/v20190422/model/ModifyWorkSpaceRequest.h>
#include <tencentcloud/oceanus/v20190422/model/ModifyWorkSpaceResponse.h>
#include <tencentcloud/oceanus/v20190422/model/RunJobsRequest.h>
#include <tencentcloud/oceanus/v20190422/model/RunJobsResponse.h>
#include <tencentcloud/oceanus/v20190422/model/RunSqlGatewayStatementRequest.h>
#include <tencentcloud/oceanus/v20190422/model/RunSqlGatewayStatementResponse.h>
#include <tencentcloud/oceanus/v20190422/model/StopJobsRequest.h>
#include <tencentcloud/oceanus/v20190422/model/StopJobsResponse.h>
#include <tencentcloud/oceanus/v20190422/model/TriggerJobSavepointRequest.h>
#include <tencentcloud/oceanus/v20190422/model/TriggerJobSavepointResponse.h>


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

                typedef Outcome<Core::Error, Model::CheckSavepointResponse> CheckSavepointOutcome;
                typedef std::future<CheckSavepointOutcome> CheckSavepointOutcomeCallable;
                typedef std::function<void(const OceanusClient*, const Model::CheckSavepointRequest&, CheckSavepointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckSavepointAsyncHandler;
                typedef Outcome<Core::Error, Model::CopyJobsResponse> CopyJobsOutcome;
                typedef std::future<CopyJobsOutcome> CopyJobsOutcomeCallable;
                typedef std::function<void(const OceanusClient*, const Model::CopyJobsRequest&, CopyJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CopyJobsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFolderResponse> CreateFolderOutcome;
                typedef std::future<CreateFolderOutcome> CreateFolderOutcomeCallable;
                typedef std::function<void(const OceanusClient*, const Model::CreateFolderRequest&, CreateFolderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFolderAsyncHandler;
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
                typedef Outcome<Core::Error, Model::CreateWorkSpaceResponse> CreateWorkSpaceOutcome;
                typedef std::future<CreateWorkSpaceOutcome> CreateWorkSpaceOutcomeCallable;
                typedef std::function<void(const OceanusClient*, const Model::CreateWorkSpaceRequest&, CreateWorkSpaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWorkSpaceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteFoldersResponse> DeleteFoldersOutcome;
                typedef std::future<DeleteFoldersOutcome> DeleteFoldersOutcomeCallable;
                typedef std::function<void(const OceanusClient*, const Model::DeleteFoldersRequest&, DeleteFoldersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFoldersAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteJobConfigsResponse> DeleteJobConfigsOutcome;
                typedef std::future<DeleteJobConfigsOutcome> DeleteJobConfigsOutcomeCallable;
                typedef std::function<void(const OceanusClient*, const Model::DeleteJobConfigsRequest&, DeleteJobConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteJobConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteJobsResponse> DeleteJobsOutcome;
                typedef std::future<DeleteJobsOutcome> DeleteJobsOutcomeCallable;
                typedef std::function<void(const OceanusClient*, const Model::DeleteJobsRequest&, DeleteJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteJobsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteResourceConfigsResponse> DeleteResourceConfigsOutcome;
                typedef std::future<DeleteResourceConfigsOutcome> DeleteResourceConfigsOutcomeCallable;
                typedef std::function<void(const OceanusClient*, const Model::DeleteResourceConfigsRequest&, DeleteResourceConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteResourceConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteResourcesResponse> DeleteResourcesOutcome;
                typedef std::future<DeleteResourcesOutcome> DeleteResourcesOutcomeCallable;
                typedef std::function<void(const OceanusClient*, const Model::DeleteResourcesRequest&, DeleteResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTableConfigResponse> DeleteTableConfigOutcome;
                typedef std::future<DeleteTableConfigOutcome> DeleteTableConfigOutcomeCallable;
                typedef std::function<void(const OceanusClient*, const Model::DeleteTableConfigRequest&, DeleteTableConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTableConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWorkSpaceResponse> DeleteWorkSpaceOutcome;
                typedef std::future<DeleteWorkSpaceOutcome> DeleteWorkSpaceOutcomeCallable;
                typedef std::function<void(const OceanusClient*, const Model::DeleteWorkSpaceRequest&, DeleteWorkSpaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWorkSpaceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClustersResponse> DescribeClustersOutcome;
                typedef std::future<DescribeClustersOutcome> DescribeClustersOutcomeCallable;
                typedef std::function<void(const OceanusClient*, const Model::DescribeClustersRequest&, DescribeClustersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClustersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFolderResponse> DescribeFolderOutcome;
                typedef std::future<DescribeFolderOutcome> DescribeFolderOutcomeCallable;
                typedef std::function<void(const OceanusClient*, const Model::DescribeFolderRequest&, DescribeFolderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFolderAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeJobConfigsResponse> DescribeJobConfigsOutcome;
                typedef std::future<DescribeJobConfigsOutcome> DescribeJobConfigsOutcomeCallable;
                typedef std::function<void(const OceanusClient*, const Model::DescribeJobConfigsRequest&, DescribeJobConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJobConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeJobEventsResponse> DescribeJobEventsOutcome;
                typedef std::future<DescribeJobEventsOutcome> DescribeJobEventsOutcomeCallable;
                typedef std::function<void(const OceanusClient*, const Model::DescribeJobEventsRequest&, DescribeJobEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJobEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeJobRuntimeInfoResponse> DescribeJobRuntimeInfoOutcome;
                typedef std::future<DescribeJobRuntimeInfoOutcome> DescribeJobRuntimeInfoOutcomeCallable;
                typedef std::function<void(const OceanusClient*, const Model::DescribeJobRuntimeInfoRequest&, DescribeJobRuntimeInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJobRuntimeInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeJobSavepointResponse> DescribeJobSavepointOutcome;
                typedef std::future<DescribeJobSavepointOutcome> DescribeJobSavepointOutcomeCallable;
                typedef std::function<void(const OceanusClient*, const Model::DescribeJobSavepointRequest&, DescribeJobSavepointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJobSavepointAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeJobSubmissionLogResponse> DescribeJobSubmissionLogOutcome;
                typedef std::future<DescribeJobSubmissionLogOutcome> DescribeJobSubmissionLogOutcomeCallable;
                typedef std::function<void(const OceanusClient*, const Model::DescribeJobSubmissionLogRequest&, DescribeJobSubmissionLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJobSubmissionLogAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeTreeJobsResponse> DescribeTreeJobsOutcome;
                typedef std::future<DescribeTreeJobsOutcome> DescribeTreeJobsOutcomeCallable;
                typedef std::function<void(const OceanusClient*, const Model::DescribeTreeJobsRequest&, DescribeTreeJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTreeJobsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTreeResourcesResponse> DescribeTreeResourcesOutcome;
                typedef std::future<DescribeTreeResourcesOutcome> DescribeTreeResourcesOutcomeCallable;
                typedef std::function<void(const OceanusClient*, const Model::DescribeTreeResourcesRequest&, DescribeTreeResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTreeResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkSpacesResponse> DescribeWorkSpacesOutcome;
                typedef std::future<DescribeWorkSpacesOutcome> DescribeWorkSpacesOutcomeCallable;
                typedef std::function<void(const OceanusClient*, const Model::DescribeWorkSpacesRequest&, DescribeWorkSpacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkSpacesAsyncHandler;
                typedef Outcome<Core::Error, Model::FetchSqlGatewayStatementResultResponse> FetchSqlGatewayStatementResultOutcome;
                typedef std::future<FetchSqlGatewayStatementResultOutcome> FetchSqlGatewayStatementResultOutcomeCallable;
                typedef std::function<void(const OceanusClient*, const Model::FetchSqlGatewayStatementResultRequest&, FetchSqlGatewayStatementResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FetchSqlGatewayStatementResultAsyncHandler;
                typedef Outcome<Core::Error, Model::GetMetaTableResponse> GetMetaTableOutcome;
                typedef std::future<GetMetaTableOutcome> GetMetaTableOutcomeCallable;
                typedef std::function<void(const OceanusClient*, const Model::GetMetaTableRequest&, GetMetaTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetMetaTableAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyFolderResponse> ModifyFolderOutcome;
                typedef std::future<ModifyFolderOutcome> ModifyFolderOutcomeCallable;
                typedef std::function<void(const OceanusClient*, const Model::ModifyFolderRequest&, ModifyFolderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFolderAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyJobResponse> ModifyJobOutcome;
                typedef std::future<ModifyJobOutcome> ModifyJobOutcomeCallable;
                typedef std::function<void(const OceanusClient*, const Model::ModifyJobRequest&, ModifyJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyJobAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWorkSpaceResponse> ModifyWorkSpaceOutcome;
                typedef std::future<ModifyWorkSpaceOutcome> ModifyWorkSpaceOutcomeCallable;
                typedef std::function<void(const OceanusClient*, const Model::ModifyWorkSpaceRequest&, ModifyWorkSpaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWorkSpaceAsyncHandler;
                typedef Outcome<Core::Error, Model::RunJobsResponse> RunJobsOutcome;
                typedef std::future<RunJobsOutcome> RunJobsOutcomeCallable;
                typedef std::function<void(const OceanusClient*, const Model::RunJobsRequest&, RunJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunJobsAsyncHandler;
                typedef Outcome<Core::Error, Model::RunSqlGatewayStatementResponse> RunSqlGatewayStatementOutcome;
                typedef std::future<RunSqlGatewayStatementOutcome> RunSqlGatewayStatementOutcomeCallable;
                typedef std::function<void(const OceanusClient*, const Model::RunSqlGatewayStatementRequest&, RunSqlGatewayStatementOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunSqlGatewayStatementAsyncHandler;
                typedef Outcome<Core::Error, Model::StopJobsResponse> StopJobsOutcome;
                typedef std::future<StopJobsOutcome> StopJobsOutcomeCallable;
                typedef std::function<void(const OceanusClient*, const Model::StopJobsRequest&, StopJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopJobsAsyncHandler;
                typedef Outcome<Core::Error, Model::TriggerJobSavepointResponse> TriggerJobSavepointOutcome;
                typedef std::future<TriggerJobSavepointOutcome> TriggerJobSavepointOutcomeCallable;
                typedef std::function<void(const OceanusClient*, const Model::TriggerJobSavepointRequest&, TriggerJobSavepointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TriggerJobSavepointAsyncHandler;



                /**
                 *检查快照是否可用
                 * @param req CheckSavepointRequest
                 * @return CheckSavepointOutcome
                 */
                CheckSavepointOutcome CheckSavepoint(const Model::CheckSavepointRequest &request);
                void CheckSavepointAsync(const Model::CheckSavepointRequest& request, const CheckSavepointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckSavepointOutcomeCallable CheckSavepointCallable(const Model::CheckSavepointRequest& request);

                /**
                 *单条和批量复制作业
                 * @param req CopyJobsRequest
                 * @return CopyJobsOutcome
                 */
                CopyJobsOutcome CopyJobs(const Model::CopyJobsRequest &request);
                void CopyJobsAsync(const Model::CopyJobsRequest& request, const CopyJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CopyJobsOutcomeCallable CopyJobsCallable(const Model::CopyJobsRequest& request);

                /**
                 *作业列表页面新建文件夹请求
                 * @param req CreateFolderRequest
                 * @return CreateFolderOutcome
                 */
                CreateFolderOutcome CreateFolder(const Model::CreateFolderRequest &request);
                void CreateFolderAsync(const Model::CreateFolderRequest& request, const CreateFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFolderOutcomeCallable CreateFolderCallable(const Model::CreateFolderRequest& request);

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
                 *创建工作空间
                 * @param req CreateWorkSpaceRequest
                 * @return CreateWorkSpaceOutcome
                 */
                CreateWorkSpaceOutcome CreateWorkSpace(const Model::CreateWorkSpaceRequest &request);
                void CreateWorkSpaceAsync(const Model::CreateWorkSpaceRequest& request, const CreateWorkSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWorkSpaceOutcomeCallable CreateWorkSpaceCallable(const Model::CreateWorkSpaceRequest& request);

                /**
                 *作业列表删除文件夹
                 * @param req DeleteFoldersRequest
                 * @return DeleteFoldersOutcome
                 */
                DeleteFoldersOutcome DeleteFolders(const Model::DeleteFoldersRequest &request);
                void DeleteFoldersAsync(const Model::DeleteFoldersRequest& request, const DeleteFoldersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteFoldersOutcomeCallable DeleteFoldersCallable(const Model::DeleteFoldersRequest& request);

                /**
                 *删除作业配置
                 * @param req DeleteJobConfigsRequest
                 * @return DeleteJobConfigsOutcome
                 */
                DeleteJobConfigsOutcome DeleteJobConfigs(const Model::DeleteJobConfigsRequest &request);
                void DeleteJobConfigsAsync(const Model::DeleteJobConfigsRequest& request, const DeleteJobConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteJobConfigsOutcomeCallable DeleteJobConfigsCallable(const Model::DeleteJobConfigsRequest& request);

                /**
                 *批量删除作业接口，批量操作数量上限20
                 * @param req DeleteJobsRequest
                 * @return DeleteJobsOutcome
                 */
                DeleteJobsOutcome DeleteJobs(const Model::DeleteJobsRequest &request);
                void DeleteJobsAsync(const Model::DeleteJobsRequest& request, const DeleteJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteJobsOutcomeCallable DeleteJobsCallable(const Model::DeleteJobsRequest& request);

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
                 *删除工作空间
                 * @param req DeleteWorkSpaceRequest
                 * @return DeleteWorkSpaceOutcome
                 */
                DeleteWorkSpaceOutcome DeleteWorkSpace(const Model::DeleteWorkSpaceRequest &request);
                void DeleteWorkSpaceAsync(const Model::DeleteWorkSpaceRequest& request, const DeleteWorkSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWorkSpaceOutcomeCallable DeleteWorkSpaceCallable(const Model::DeleteWorkSpaceRequest& request);

                /**
                 *查询集群
                 * @param req DescribeClustersRequest
                 * @return DescribeClustersOutcome
                 */
                DescribeClustersOutcome DescribeClusters(const Model::DescribeClustersRequest &request);
                void DescribeClustersAsync(const Model::DescribeClustersRequest& request, const DescribeClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClustersOutcomeCallable DescribeClustersCallable(const Model::DescribeClustersRequest& request);

                /**
                 *查询指定文件夹及其相应的子文件夹信息
                 * @param req DescribeFolderRequest
                 * @return DescribeFolderOutcome
                 */
                DescribeFolderOutcome DescribeFolder(const Model::DescribeFolderRequest &request);
                void DescribeFolderAsync(const Model::DescribeFolderRequest& request, const DescribeFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFolderOutcomeCallable DescribeFolderCallable(const Model::DescribeFolderRequest& request);

                /**
                 *查询作业配置列表，一次最多查询100个
                 * @param req DescribeJobConfigsRequest
                 * @return DescribeJobConfigsOutcome
                 */
                DescribeJobConfigsOutcome DescribeJobConfigs(const Model::DescribeJobConfigsRequest &request);
                void DescribeJobConfigsAsync(const Model::DescribeJobConfigsRequest& request, const DescribeJobConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeJobConfigsOutcomeCallable DescribeJobConfigsCallable(const Model::DescribeJobConfigsRequest& request);

                /**
                 *请求参数不包含 "RunningOrderIds"时，接口获取指定作业的事件，包括作业启动停止、运行失败、快照失败、作业异常等各种事件类型;请求参数不包含 "RunningOrderIds"时，接口为查询作业实例ID接口,获取作业实例
                 * @param req DescribeJobEventsRequest
                 * @return DescribeJobEventsOutcome
                 */
                DescribeJobEventsOutcome DescribeJobEvents(const Model::DescribeJobEventsRequest &request);
                void DescribeJobEventsAsync(const Model::DescribeJobEventsRequest& request, const DescribeJobEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeJobEventsOutcomeCallable DescribeJobEventsCallable(const Model::DescribeJobEventsRequest& request);

                /**
                 *获取作业运行时的信息
                 * @param req DescribeJobRuntimeInfoRequest
                 * @return DescribeJobRuntimeInfoOutcome
                 */
                DescribeJobRuntimeInfoOutcome DescribeJobRuntimeInfo(const Model::DescribeJobRuntimeInfoRequest &request);
                void DescribeJobRuntimeInfoAsync(const Model::DescribeJobRuntimeInfoRequest& request, const DescribeJobRuntimeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeJobRuntimeInfoOutcomeCallable DescribeJobRuntimeInfoCallable(const Model::DescribeJobRuntimeInfoRequest& request);

                /**
                 *查找Savepoint列表
                 * @param req DescribeJobSavepointRequest
                 * @return DescribeJobSavepointOutcome
                 */
                DescribeJobSavepointOutcome DescribeJobSavepoint(const Model::DescribeJobSavepointRequest &request);
                void DescribeJobSavepointAsync(const Model::DescribeJobSavepointRequest& request, const DescribeJobSavepointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeJobSavepointOutcomeCallable DescribeJobSavepointCallable(const Model::DescribeJobSavepointRequest& request);

                /**
                 *查询作业实例启动日志
                 * @param req DescribeJobSubmissionLogRequest
                 * @return DescribeJobSubmissionLogOutcome
                 */
                DescribeJobSubmissionLogOutcome DescribeJobSubmissionLog(const Model::DescribeJobSubmissionLogRequest &request);
                void DescribeJobSubmissionLogAsync(const Model::DescribeJobSubmissionLogRequest& request, const DescribeJobSubmissionLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeJobSubmissionLogOutcomeCallable DescribeJobSubmissionLogCallable(const Model::DescribeJobSubmissionLogRequest& request);

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
                 *生成树状作业显示结构
                 * @param req DescribeTreeJobsRequest
                 * @return DescribeTreeJobsOutcome
                 */
                DescribeTreeJobsOutcome DescribeTreeJobs(const Model::DescribeTreeJobsRequest &request);
                void DescribeTreeJobsAsync(const Model::DescribeTreeJobsRequest& request, const DescribeTreeJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTreeJobsOutcomeCallable DescribeTreeJobsCallable(const Model::DescribeTreeJobsRequest& request);

                /**
                 *查询树状结构资源列表
                 * @param req DescribeTreeResourcesRequest
                 * @return DescribeTreeResourcesOutcome
                 */
                DescribeTreeResourcesOutcome DescribeTreeResources(const Model::DescribeTreeResourcesRequest &request);
                void DescribeTreeResourcesAsync(const Model::DescribeTreeResourcesRequest& request, const DescribeTreeResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTreeResourcesOutcomeCallable DescribeTreeResourcesCallable(const Model::DescribeTreeResourcesRequest& request);

                /**
                 *授权工作空间列表
                 * @param req DescribeWorkSpacesRequest
                 * @return DescribeWorkSpacesOutcome
                 */
                DescribeWorkSpacesOutcome DescribeWorkSpaces(const Model::DescribeWorkSpacesRequest &request);
                void DescribeWorkSpacesAsync(const Model::DescribeWorkSpacesRequest& request, const DescribeWorkSpacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkSpacesOutcomeCallable DescribeWorkSpacesCallable(const Model::DescribeWorkSpacesRequest& request);

                /**
                 *查询Sql Gateway的Statement执行结果
                 * @param req FetchSqlGatewayStatementResultRequest
                 * @return FetchSqlGatewayStatementResultOutcome
                 */
                FetchSqlGatewayStatementResultOutcome FetchSqlGatewayStatementResult(const Model::FetchSqlGatewayStatementResultRequest &request);
                void FetchSqlGatewayStatementResultAsync(const Model::FetchSqlGatewayStatementResultRequest& request, const FetchSqlGatewayStatementResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FetchSqlGatewayStatementResultOutcomeCallable FetchSqlGatewayStatementResultCallable(const Model::FetchSqlGatewayStatementResultRequest& request);

                /**
                 *查询元数据表
                 * @param req GetMetaTableRequest
                 * @return GetMetaTableOutcome
                 */
                GetMetaTableOutcome GetMetaTable(const Model::GetMetaTableRequest &request);
                void GetMetaTableAsync(const Model::GetMetaTableRequest& request, const GetMetaTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetMetaTableOutcomeCallable GetMetaTableCallable(const Model::GetMetaTableRequest& request);

                /**
                 *自定义树状结构页面拖拽文件夹
                 * @param req ModifyFolderRequest
                 * @return ModifyFolderOutcome
                 */
                ModifyFolderOutcome ModifyFolder(const Model::ModifyFolderRequest &request);
                void ModifyFolderAsync(const Model::ModifyFolderRequest& request, const ModifyFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyFolderOutcomeCallable ModifyFolderCallable(const Model::ModifyFolderRequest& request);

                /**
                 *更新作业属性，仅允许以下3种操作，不支持组合操作：
(1)	更新作业名称
(2)	更新作业备注 
(3)	更新作业最大并行度
变更前提：WorkerCuNum<=MaxParallelism
如果MaxParallelism变小，不重启作业，待下一次重启生效
如果MaxParallelism变大，则要求入参RestartAllowed必须为True
假设作业运行状态，则先停止作业，再启动作业，中间状态丢失
假设作业暂停状态，则将作业更改为停止状态，中间状态丢失
                 * @param req ModifyJobRequest
                 * @return ModifyJobOutcome
                 */
                ModifyJobOutcome ModifyJob(const Model::ModifyJobRequest &request);
                void ModifyJobAsync(const Model::ModifyJobRequest& request, const ModifyJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyJobOutcomeCallable ModifyJobCallable(const Model::ModifyJobRequest& request);

                /**
                 *修改工作空间
                 * @param req ModifyWorkSpaceRequest
                 * @return ModifyWorkSpaceOutcome
                 */
                ModifyWorkSpaceOutcome ModifyWorkSpace(const Model::ModifyWorkSpaceRequest &request);
                void ModifyWorkSpaceAsync(const Model::ModifyWorkSpaceRequest& request, const ModifyWorkSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWorkSpaceOutcomeCallable ModifyWorkSpaceCallable(const Model::ModifyWorkSpaceRequest& request);

                /**
                 *批量启动或者恢复作业，批量操作数量上限20
                 * @param req RunJobsRequest
                 * @return RunJobsOutcome
                 */
                RunJobsOutcome RunJobs(const Model::RunJobsRequest &request);
                void RunJobsAsync(const Model::RunJobsRequest& request, const RunJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunJobsOutcomeCallable RunJobsCallable(const Model::RunJobsRequest& request);

                /**
                 *通过Sql gateway执行satement
                 * @param req RunSqlGatewayStatementRequest
                 * @return RunSqlGatewayStatementOutcome
                 */
                RunSqlGatewayStatementOutcome RunSqlGatewayStatement(const Model::RunSqlGatewayStatementRequest &request);
                void RunSqlGatewayStatementAsync(const Model::RunSqlGatewayStatementRequest& request, const RunSqlGatewayStatementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunSqlGatewayStatementOutcomeCallable RunSqlGatewayStatementCallable(const Model::RunSqlGatewayStatementRequest& request);

                /**
                 *批量停止作业，批量操作数量上限为20
                 * @param req StopJobsRequest
                 * @return StopJobsOutcome
                 */
                StopJobsOutcome StopJobs(const Model::StopJobsRequest &request);
                void StopJobsAsync(const Model::StopJobsRequest& request, const StopJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopJobsOutcomeCallable StopJobsCallable(const Model::StopJobsRequest& request);

                /**
                 *触发Savepoint
                 * @param req TriggerJobSavepointRequest
                 * @return TriggerJobSavepointOutcome
                 */
                TriggerJobSavepointOutcome TriggerJobSavepoint(const Model::TriggerJobSavepointRequest &request);
                void TriggerJobSavepointAsync(const Model::TriggerJobSavepointRequest& request, const TriggerJobSavepointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TriggerJobSavepointOutcomeCallable TriggerJobSavepointCallable(const Model::TriggerJobSavepointRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_OCEANUSCLIENT_H_
