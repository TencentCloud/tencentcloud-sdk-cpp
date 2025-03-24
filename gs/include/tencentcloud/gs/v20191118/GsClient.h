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

#ifndef TENCENTCLOUD_GS_V20191118_GSCLIENT_H_
#define TENCENTCLOUD_GS_V20191118_GSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/gs/v20191118/model/ConnectAndroidInstanceRequest.h>
#include <tencentcloud/gs/v20191118/model/ConnectAndroidInstanceResponse.h>
#include <tencentcloud/gs/v20191118/model/CopyAndroidInstanceRequest.h>
#include <tencentcloud/gs/v20191118/model/CopyAndroidInstanceResponse.h>
#include <tencentcloud/gs/v20191118/model/CreateAndroidInstanceImageRequest.h>
#include <tencentcloud/gs/v20191118/model/CreateAndroidInstanceImageResponse.h>
#include <tencentcloud/gs/v20191118/model/CreateAndroidInstanceLabelRequest.h>
#include <tencentcloud/gs/v20191118/model/CreateAndroidInstanceLabelResponse.h>
#include <tencentcloud/gs/v20191118/model/CreateAndroidInstanceSSHRequest.h>
#include <tencentcloud/gs/v20191118/model/CreateAndroidInstanceSSHResponse.h>
#include <tencentcloud/gs/v20191118/model/CreateAndroidInstanceWebShellRequest.h>
#include <tencentcloud/gs/v20191118/model/CreateAndroidInstanceWebShellResponse.h>
#include <tencentcloud/gs/v20191118/model/CreateAndroidInstancesRequest.h>
#include <tencentcloud/gs/v20191118/model/CreateAndroidInstancesResponse.h>
#include <tencentcloud/gs/v20191118/model/CreateSessionRequest.h>
#include <tencentcloud/gs/v20191118/model/CreateSessionResponse.h>
#include <tencentcloud/gs/v20191118/model/DeleteAndroidInstanceImagesRequest.h>
#include <tencentcloud/gs/v20191118/model/DeleteAndroidInstanceImagesResponse.h>
#include <tencentcloud/gs/v20191118/model/DeleteAndroidInstanceLabelRequest.h>
#include <tencentcloud/gs/v20191118/model/DeleteAndroidInstanceLabelResponse.h>
#include <tencentcloud/gs/v20191118/model/DescribeAndroidAppsRequest.h>
#include <tencentcloud/gs/v20191118/model/DescribeAndroidAppsResponse.h>
#include <tencentcloud/gs/v20191118/model/DescribeAndroidInstanceAppsRequest.h>
#include <tencentcloud/gs/v20191118/model/DescribeAndroidInstanceAppsResponse.h>
#include <tencentcloud/gs/v20191118/model/DescribeAndroidInstanceImagesRequest.h>
#include <tencentcloud/gs/v20191118/model/DescribeAndroidInstanceImagesResponse.h>
#include <tencentcloud/gs/v20191118/model/DescribeAndroidInstanceLabelsRequest.h>
#include <tencentcloud/gs/v20191118/model/DescribeAndroidInstanceLabelsResponse.h>
#include <tencentcloud/gs/v20191118/model/DescribeAndroidInstanceTasksStatusRequest.h>
#include <tencentcloud/gs/v20191118/model/DescribeAndroidInstanceTasksStatusResponse.h>
#include <tencentcloud/gs/v20191118/model/DescribeAndroidInstancesRequest.h>
#include <tencentcloud/gs/v20191118/model/DescribeAndroidInstancesResponse.h>
#include <tencentcloud/gs/v20191118/model/DescribeInstancesCountRequest.h>
#include <tencentcloud/gs/v20191118/model/DescribeInstancesCountResponse.h>
#include <tencentcloud/gs/v20191118/model/DestroyAndroidInstancesRequest.h>
#include <tencentcloud/gs/v20191118/model/DestroyAndroidInstancesResponse.h>
#include <tencentcloud/gs/v20191118/model/ExecuteCommandOnAndroidInstancesRequest.h>
#include <tencentcloud/gs/v20191118/model/ExecuteCommandOnAndroidInstancesResponse.h>
#include <tencentcloud/gs/v20191118/model/InstallAndroidInstancesAppRequest.h>
#include <tencentcloud/gs/v20191118/model/InstallAndroidInstancesAppResponse.h>
#include <tencentcloud/gs/v20191118/model/ModifyAndroidInstanceInformationRequest.h>
#include <tencentcloud/gs/v20191118/model/ModifyAndroidInstanceInformationResponse.h>
#include <tencentcloud/gs/v20191118/model/ModifyAndroidInstanceResolutionRequest.h>
#include <tencentcloud/gs/v20191118/model/ModifyAndroidInstanceResolutionResponse.h>
#include <tencentcloud/gs/v20191118/model/ModifyAndroidInstancesLabelsRequest.h>
#include <tencentcloud/gs/v20191118/model/ModifyAndroidInstancesLabelsResponse.h>
#include <tencentcloud/gs/v20191118/model/ModifyAndroidInstancesUserIdRequest.h>
#include <tencentcloud/gs/v20191118/model/ModifyAndroidInstancesUserIdResponse.h>
#include <tencentcloud/gs/v20191118/model/RebootAndroidInstancesRequest.h>
#include <tencentcloud/gs/v20191118/model/RebootAndroidInstancesResponse.h>
#include <tencentcloud/gs/v20191118/model/ResetAndroidInstancesRequest.h>
#include <tencentcloud/gs/v20191118/model/ResetAndroidInstancesResponse.h>
#include <tencentcloud/gs/v20191118/model/RestartAndroidInstancesAppRequest.h>
#include <tencentcloud/gs/v20191118/model/RestartAndroidInstancesAppResponse.h>
#include <tencentcloud/gs/v20191118/model/SaveGameArchiveRequest.h>
#include <tencentcloud/gs/v20191118/model/SaveGameArchiveResponse.h>
#include <tencentcloud/gs/v20191118/model/StartAndroidInstancesRequest.h>
#include <tencentcloud/gs/v20191118/model/StartAndroidInstancesResponse.h>
#include <tencentcloud/gs/v20191118/model/StartAndroidInstancesAppRequest.h>
#include <tencentcloud/gs/v20191118/model/StartAndroidInstancesAppResponse.h>
#include <tencentcloud/gs/v20191118/model/StartPublishStreamRequest.h>
#include <tencentcloud/gs/v20191118/model/StartPublishStreamResponse.h>
#include <tencentcloud/gs/v20191118/model/StartPublishStreamToCSSRequest.h>
#include <tencentcloud/gs/v20191118/model/StartPublishStreamToCSSResponse.h>
#include <tencentcloud/gs/v20191118/model/StopAndroidInstancesRequest.h>
#include <tencentcloud/gs/v20191118/model/StopAndroidInstancesResponse.h>
#include <tencentcloud/gs/v20191118/model/StopAndroidInstancesAppRequest.h>
#include <tencentcloud/gs/v20191118/model/StopAndroidInstancesAppResponse.h>
#include <tencentcloud/gs/v20191118/model/StopGameRequest.h>
#include <tencentcloud/gs/v20191118/model/StopGameResponse.h>
#include <tencentcloud/gs/v20191118/model/StopPublishStreamRequest.h>
#include <tencentcloud/gs/v20191118/model/StopPublishStreamResponse.h>
#include <tencentcloud/gs/v20191118/model/SwitchGameArchiveRequest.h>
#include <tencentcloud/gs/v20191118/model/SwitchGameArchiveResponse.h>
#include <tencentcloud/gs/v20191118/model/SyncAndroidInstanceImageRequest.h>
#include <tencentcloud/gs/v20191118/model/SyncAndroidInstanceImageResponse.h>
#include <tencentcloud/gs/v20191118/model/SyncExecuteCommandOnAndroidInstancesRequest.h>
#include <tencentcloud/gs/v20191118/model/SyncExecuteCommandOnAndroidInstancesResponse.h>
#include <tencentcloud/gs/v20191118/model/TrylockWorkerRequest.h>
#include <tencentcloud/gs/v20191118/model/TrylockWorkerResponse.h>
#include <tencentcloud/gs/v20191118/model/UninstallAndroidInstancesAppRequest.h>
#include <tencentcloud/gs/v20191118/model/UninstallAndroidInstancesAppResponse.h>
#include <tencentcloud/gs/v20191118/model/UploadFileToAndroidInstancesRequest.h>
#include <tencentcloud/gs/v20191118/model/UploadFileToAndroidInstancesResponse.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            class GsClient : public AbstractClient
            {
            public:
                GsClient(const Credential &credential, const std::string &region);
                GsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ConnectAndroidInstanceResponse> ConnectAndroidInstanceOutcome;
                typedef std::future<ConnectAndroidInstanceOutcome> ConnectAndroidInstanceOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::ConnectAndroidInstanceRequest&, ConnectAndroidInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ConnectAndroidInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CopyAndroidInstanceResponse> CopyAndroidInstanceOutcome;
                typedef std::future<CopyAndroidInstanceOutcome> CopyAndroidInstanceOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::CopyAndroidInstanceRequest&, CopyAndroidInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CopyAndroidInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAndroidInstanceImageResponse> CreateAndroidInstanceImageOutcome;
                typedef std::future<CreateAndroidInstanceImageOutcome> CreateAndroidInstanceImageOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::CreateAndroidInstanceImageRequest&, CreateAndroidInstanceImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAndroidInstanceImageAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAndroidInstanceLabelResponse> CreateAndroidInstanceLabelOutcome;
                typedef std::future<CreateAndroidInstanceLabelOutcome> CreateAndroidInstanceLabelOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::CreateAndroidInstanceLabelRequest&, CreateAndroidInstanceLabelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAndroidInstanceLabelAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAndroidInstanceSSHResponse> CreateAndroidInstanceSSHOutcome;
                typedef std::future<CreateAndroidInstanceSSHOutcome> CreateAndroidInstanceSSHOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::CreateAndroidInstanceSSHRequest&, CreateAndroidInstanceSSHOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAndroidInstanceSSHAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAndroidInstanceWebShellResponse> CreateAndroidInstanceWebShellOutcome;
                typedef std::future<CreateAndroidInstanceWebShellOutcome> CreateAndroidInstanceWebShellOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::CreateAndroidInstanceWebShellRequest&, CreateAndroidInstanceWebShellOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAndroidInstanceWebShellAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAndroidInstancesResponse> CreateAndroidInstancesOutcome;
                typedef std::future<CreateAndroidInstancesOutcome> CreateAndroidInstancesOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::CreateAndroidInstancesRequest&, CreateAndroidInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAndroidInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSessionResponse> CreateSessionOutcome;
                typedef std::future<CreateSessionOutcome> CreateSessionOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::CreateSessionRequest&, CreateSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSessionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAndroidInstanceImagesResponse> DeleteAndroidInstanceImagesOutcome;
                typedef std::future<DeleteAndroidInstanceImagesOutcome> DeleteAndroidInstanceImagesOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::DeleteAndroidInstanceImagesRequest&, DeleteAndroidInstanceImagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAndroidInstanceImagesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAndroidInstanceLabelResponse> DeleteAndroidInstanceLabelOutcome;
                typedef std::future<DeleteAndroidInstanceLabelOutcome> DeleteAndroidInstanceLabelOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::DeleteAndroidInstanceLabelRequest&, DeleteAndroidInstanceLabelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAndroidInstanceLabelAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAndroidAppsResponse> DescribeAndroidAppsOutcome;
                typedef std::future<DescribeAndroidAppsOutcome> DescribeAndroidAppsOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::DescribeAndroidAppsRequest&, DescribeAndroidAppsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAndroidAppsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAndroidInstanceAppsResponse> DescribeAndroidInstanceAppsOutcome;
                typedef std::future<DescribeAndroidInstanceAppsOutcome> DescribeAndroidInstanceAppsOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::DescribeAndroidInstanceAppsRequest&, DescribeAndroidInstanceAppsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAndroidInstanceAppsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAndroidInstanceImagesResponse> DescribeAndroidInstanceImagesOutcome;
                typedef std::future<DescribeAndroidInstanceImagesOutcome> DescribeAndroidInstanceImagesOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::DescribeAndroidInstanceImagesRequest&, DescribeAndroidInstanceImagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAndroidInstanceImagesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAndroidInstanceLabelsResponse> DescribeAndroidInstanceLabelsOutcome;
                typedef std::future<DescribeAndroidInstanceLabelsOutcome> DescribeAndroidInstanceLabelsOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::DescribeAndroidInstanceLabelsRequest&, DescribeAndroidInstanceLabelsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAndroidInstanceLabelsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAndroidInstanceTasksStatusResponse> DescribeAndroidInstanceTasksStatusOutcome;
                typedef std::future<DescribeAndroidInstanceTasksStatusOutcome> DescribeAndroidInstanceTasksStatusOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::DescribeAndroidInstanceTasksStatusRequest&, DescribeAndroidInstanceTasksStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAndroidInstanceTasksStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAndroidInstancesResponse> DescribeAndroidInstancesOutcome;
                typedef std::future<DescribeAndroidInstancesOutcome> DescribeAndroidInstancesOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::DescribeAndroidInstancesRequest&, DescribeAndroidInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAndroidInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesCountResponse> DescribeInstancesCountOutcome;
                typedef std::future<DescribeInstancesCountOutcome> DescribeInstancesCountOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::DescribeInstancesCountRequest&, DescribeInstancesCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyAndroidInstancesResponse> DestroyAndroidInstancesOutcome;
                typedef std::future<DestroyAndroidInstancesOutcome> DestroyAndroidInstancesOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::DestroyAndroidInstancesRequest&, DestroyAndroidInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyAndroidInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::ExecuteCommandOnAndroidInstancesResponse> ExecuteCommandOnAndroidInstancesOutcome;
                typedef std::future<ExecuteCommandOnAndroidInstancesOutcome> ExecuteCommandOnAndroidInstancesOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::ExecuteCommandOnAndroidInstancesRequest&, ExecuteCommandOnAndroidInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteCommandOnAndroidInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::InstallAndroidInstancesAppResponse> InstallAndroidInstancesAppOutcome;
                typedef std::future<InstallAndroidInstancesAppOutcome> InstallAndroidInstancesAppOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::InstallAndroidInstancesAppRequest&, InstallAndroidInstancesAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InstallAndroidInstancesAppAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAndroidInstanceInformationResponse> ModifyAndroidInstanceInformationOutcome;
                typedef std::future<ModifyAndroidInstanceInformationOutcome> ModifyAndroidInstanceInformationOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::ModifyAndroidInstanceInformationRequest&, ModifyAndroidInstanceInformationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAndroidInstanceInformationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAndroidInstanceResolutionResponse> ModifyAndroidInstanceResolutionOutcome;
                typedef std::future<ModifyAndroidInstanceResolutionOutcome> ModifyAndroidInstanceResolutionOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::ModifyAndroidInstanceResolutionRequest&, ModifyAndroidInstanceResolutionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAndroidInstanceResolutionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAndroidInstancesLabelsResponse> ModifyAndroidInstancesLabelsOutcome;
                typedef std::future<ModifyAndroidInstancesLabelsOutcome> ModifyAndroidInstancesLabelsOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::ModifyAndroidInstancesLabelsRequest&, ModifyAndroidInstancesLabelsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAndroidInstancesLabelsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAndroidInstancesUserIdResponse> ModifyAndroidInstancesUserIdOutcome;
                typedef std::future<ModifyAndroidInstancesUserIdOutcome> ModifyAndroidInstancesUserIdOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::ModifyAndroidInstancesUserIdRequest&, ModifyAndroidInstancesUserIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAndroidInstancesUserIdAsyncHandler;
                typedef Outcome<Core::Error, Model::RebootAndroidInstancesResponse> RebootAndroidInstancesOutcome;
                typedef std::future<RebootAndroidInstancesOutcome> RebootAndroidInstancesOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::RebootAndroidInstancesRequest&, RebootAndroidInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RebootAndroidInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetAndroidInstancesResponse> ResetAndroidInstancesOutcome;
                typedef std::future<ResetAndroidInstancesOutcome> ResetAndroidInstancesOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::ResetAndroidInstancesRequest&, ResetAndroidInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetAndroidInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::RestartAndroidInstancesAppResponse> RestartAndroidInstancesAppOutcome;
                typedef std::future<RestartAndroidInstancesAppOutcome> RestartAndroidInstancesAppOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::RestartAndroidInstancesAppRequest&, RestartAndroidInstancesAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestartAndroidInstancesAppAsyncHandler;
                typedef Outcome<Core::Error, Model::SaveGameArchiveResponse> SaveGameArchiveOutcome;
                typedef std::future<SaveGameArchiveOutcome> SaveGameArchiveOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::SaveGameArchiveRequest&, SaveGameArchiveOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SaveGameArchiveAsyncHandler;
                typedef Outcome<Core::Error, Model::StartAndroidInstancesResponse> StartAndroidInstancesOutcome;
                typedef std::future<StartAndroidInstancesOutcome> StartAndroidInstancesOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::StartAndroidInstancesRequest&, StartAndroidInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartAndroidInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::StartAndroidInstancesAppResponse> StartAndroidInstancesAppOutcome;
                typedef std::future<StartAndroidInstancesAppOutcome> StartAndroidInstancesAppOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::StartAndroidInstancesAppRequest&, StartAndroidInstancesAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartAndroidInstancesAppAsyncHandler;
                typedef Outcome<Core::Error, Model::StartPublishStreamResponse> StartPublishStreamOutcome;
                typedef std::future<StartPublishStreamOutcome> StartPublishStreamOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::StartPublishStreamRequest&, StartPublishStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartPublishStreamAsyncHandler;
                typedef Outcome<Core::Error, Model::StartPublishStreamToCSSResponse> StartPublishStreamToCSSOutcome;
                typedef std::future<StartPublishStreamToCSSOutcome> StartPublishStreamToCSSOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::StartPublishStreamToCSSRequest&, StartPublishStreamToCSSOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartPublishStreamToCSSAsyncHandler;
                typedef Outcome<Core::Error, Model::StopAndroidInstancesResponse> StopAndroidInstancesOutcome;
                typedef std::future<StopAndroidInstancesOutcome> StopAndroidInstancesOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::StopAndroidInstancesRequest&, StopAndroidInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopAndroidInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::StopAndroidInstancesAppResponse> StopAndroidInstancesAppOutcome;
                typedef std::future<StopAndroidInstancesAppOutcome> StopAndroidInstancesAppOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::StopAndroidInstancesAppRequest&, StopAndroidInstancesAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopAndroidInstancesAppAsyncHandler;
                typedef Outcome<Core::Error, Model::StopGameResponse> StopGameOutcome;
                typedef std::future<StopGameOutcome> StopGameOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::StopGameRequest&, StopGameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopGameAsyncHandler;
                typedef Outcome<Core::Error, Model::StopPublishStreamResponse> StopPublishStreamOutcome;
                typedef std::future<StopPublishStreamOutcome> StopPublishStreamOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::StopPublishStreamRequest&, StopPublishStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopPublishStreamAsyncHandler;
                typedef Outcome<Core::Error, Model::SwitchGameArchiveResponse> SwitchGameArchiveOutcome;
                typedef std::future<SwitchGameArchiveOutcome> SwitchGameArchiveOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::SwitchGameArchiveRequest&, SwitchGameArchiveOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SwitchGameArchiveAsyncHandler;
                typedef Outcome<Core::Error, Model::SyncAndroidInstanceImageResponse> SyncAndroidInstanceImageOutcome;
                typedef std::future<SyncAndroidInstanceImageOutcome> SyncAndroidInstanceImageOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::SyncAndroidInstanceImageRequest&, SyncAndroidInstanceImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SyncAndroidInstanceImageAsyncHandler;
                typedef Outcome<Core::Error, Model::SyncExecuteCommandOnAndroidInstancesResponse> SyncExecuteCommandOnAndroidInstancesOutcome;
                typedef std::future<SyncExecuteCommandOnAndroidInstancesOutcome> SyncExecuteCommandOnAndroidInstancesOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::SyncExecuteCommandOnAndroidInstancesRequest&, SyncExecuteCommandOnAndroidInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SyncExecuteCommandOnAndroidInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::TrylockWorkerResponse> TrylockWorkerOutcome;
                typedef std::future<TrylockWorkerOutcome> TrylockWorkerOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::TrylockWorkerRequest&, TrylockWorkerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TrylockWorkerAsyncHandler;
                typedef Outcome<Core::Error, Model::UninstallAndroidInstancesAppResponse> UninstallAndroidInstancesAppOutcome;
                typedef std::future<UninstallAndroidInstancesAppOutcome> UninstallAndroidInstancesAppOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::UninstallAndroidInstancesAppRequest&, UninstallAndroidInstancesAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UninstallAndroidInstancesAppAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadFileToAndroidInstancesResponse> UploadFileToAndroidInstancesOutcome;
                typedef std::future<UploadFileToAndroidInstancesOutcome> UploadFileToAndroidInstancesOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::UploadFileToAndroidInstancesRequest&, UploadFileToAndroidInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadFileToAndroidInstancesAsyncHandler;



                /**
                 *连接安卓实例
                 * @param req ConnectAndroidInstanceRequest
                 * @return ConnectAndroidInstanceOutcome
                 */
                ConnectAndroidInstanceOutcome ConnectAndroidInstance(const Model::ConnectAndroidInstanceRequest &request);
                void ConnectAndroidInstanceAsync(const Model::ConnectAndroidInstanceRequest& request, const ConnectAndroidInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ConnectAndroidInstanceOutcomeCallable ConnectAndroidInstanceCallable(const Model::ConnectAndroidInstanceRequest& request);

                /**
                 *复制安卓实例：
1. 排除和包含文件只能指定/data下的文件，不指定时复制整个/data目录
2. 源实例和目的实例必须在同一区域
3. 复制时，源实例和目的实例都会停机，复制完后实例会自动启动
4. 复制时会产生大量内网流量，请限制并发
                 * @param req CopyAndroidInstanceRequest
                 * @return CopyAndroidInstanceOutcome
                 */
                CopyAndroidInstanceOutcome CopyAndroidInstance(const Model::CopyAndroidInstanceRequest &request);
                void CopyAndroidInstanceAsync(const Model::CopyAndroidInstanceRequest& request, const CopyAndroidInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CopyAndroidInstanceOutcomeCallable CopyAndroidInstanceCallable(const Model::CopyAndroidInstanceRequest& request);

                /**
                 *创建安卓实例镜像
                 * @param req CreateAndroidInstanceImageRequest
                 * @return CreateAndroidInstanceImageOutcome
                 */
                CreateAndroidInstanceImageOutcome CreateAndroidInstanceImage(const Model::CreateAndroidInstanceImageRequest &request);
                void CreateAndroidInstanceImageAsync(const Model::CreateAndroidInstanceImageRequest& request, const CreateAndroidInstanceImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAndroidInstanceImageOutcomeCallable CreateAndroidInstanceImageCallable(const Model::CreateAndroidInstanceImageRequest& request);

                /**
                 *创建安卓实例
                 * @param req CreateAndroidInstanceLabelRequest
                 * @return CreateAndroidInstanceLabelOutcome
                 */
                CreateAndroidInstanceLabelOutcome CreateAndroidInstanceLabel(const Model::CreateAndroidInstanceLabelRequest &request);
                void CreateAndroidInstanceLabelAsync(const Model::CreateAndroidInstanceLabelRequest& request, const CreateAndroidInstanceLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAndroidInstanceLabelOutcomeCallable CreateAndroidInstanceLabelCallable(const Model::CreateAndroidInstanceLabelRequest& request);

                /**
                 *创建安卓实例 SSH 连接
                 * @param req CreateAndroidInstanceSSHRequest
                 * @return CreateAndroidInstanceSSHOutcome
                 */
                CreateAndroidInstanceSSHOutcome CreateAndroidInstanceSSH(const Model::CreateAndroidInstanceSSHRequest &request);
                void CreateAndroidInstanceSSHAsync(const Model::CreateAndroidInstanceSSHRequest& request, const CreateAndroidInstanceSSHAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAndroidInstanceSSHOutcomeCallable CreateAndroidInstanceSSHCallable(const Model::CreateAndroidInstanceSSHRequest& request);

                /**
                 *创建安卓实例 WebShell 连接
                 * @param req CreateAndroidInstanceWebShellRequest
                 * @return CreateAndroidInstanceWebShellOutcome
                 */
                CreateAndroidInstanceWebShellOutcome CreateAndroidInstanceWebShell(const Model::CreateAndroidInstanceWebShellRequest &request);
                void CreateAndroidInstanceWebShellAsync(const Model::CreateAndroidInstanceWebShellRequest& request, const CreateAndroidInstanceWebShellAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAndroidInstanceWebShellOutcomeCallable CreateAndroidInstanceWebShellCallable(const Model::CreateAndroidInstanceWebShellRequest& request);

                /**
                 *创建安卓实例
                 * @param req CreateAndroidInstancesRequest
                 * @return CreateAndroidInstancesOutcome
                 */
                CreateAndroidInstancesOutcome CreateAndroidInstances(const Model::CreateAndroidInstancesRequest &request);
                void CreateAndroidInstancesAsync(const Model::CreateAndroidInstancesRequest& request, const CreateAndroidInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAndroidInstancesOutcomeCallable CreateAndroidInstancesCallable(const Model::CreateAndroidInstancesRequest& request);

                /**
                 *创建会话
                 * @param req CreateSessionRequest
                 * @return CreateSessionOutcome
                 */
                CreateSessionOutcome CreateSession(const Model::CreateSessionRequest &request);
                void CreateSessionAsync(const Model::CreateSessionRequest& request, const CreateSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSessionOutcomeCallable CreateSessionCallable(const Model::CreateSessionRequest& request);

                /**
                 *删除安卓实例镜像
                 * @param req DeleteAndroidInstanceImagesRequest
                 * @return DeleteAndroidInstanceImagesOutcome
                 */
                DeleteAndroidInstanceImagesOutcome DeleteAndroidInstanceImages(const Model::DeleteAndroidInstanceImagesRequest &request);
                void DeleteAndroidInstanceImagesAsync(const Model::DeleteAndroidInstanceImagesRequest& request, const DeleteAndroidInstanceImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAndroidInstanceImagesOutcomeCallable DeleteAndroidInstanceImagesCallable(const Model::DeleteAndroidInstanceImagesRequest& request);

                /**
                 *创建安卓实例
                 * @param req DeleteAndroidInstanceLabelRequest
                 * @return DeleteAndroidInstanceLabelOutcome
                 */
                DeleteAndroidInstanceLabelOutcome DeleteAndroidInstanceLabel(const Model::DeleteAndroidInstanceLabelRequest &request);
                void DeleteAndroidInstanceLabelAsync(const Model::DeleteAndroidInstanceLabelRequest& request, const DeleteAndroidInstanceLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAndroidInstanceLabelOutcomeCallable DeleteAndroidInstanceLabelCallable(const Model::DeleteAndroidInstanceLabelRequest& request);

                /**
                 *查询安卓应用信息
                 * @param req DescribeAndroidAppsRequest
                 * @return DescribeAndroidAppsOutcome
                 */
                DescribeAndroidAppsOutcome DescribeAndroidApps(const Model::DescribeAndroidAppsRequest &request);
                void DescribeAndroidAppsAsync(const Model::DescribeAndroidAppsRequest& request, const DescribeAndroidAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAndroidAppsOutcomeCallable DescribeAndroidAppsCallable(const Model::DescribeAndroidAppsRequest& request);

                /**
                 *查询安卓实例应用
                 * @param req DescribeAndroidInstanceAppsRequest
                 * @return DescribeAndroidInstanceAppsOutcome
                 */
                DescribeAndroidInstanceAppsOutcome DescribeAndroidInstanceApps(const Model::DescribeAndroidInstanceAppsRequest &request);
                void DescribeAndroidInstanceAppsAsync(const Model::DescribeAndroidInstanceAppsRequest& request, const DescribeAndroidInstanceAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAndroidInstanceAppsOutcomeCallable DescribeAndroidInstanceAppsCallable(const Model::DescribeAndroidInstanceAppsRequest& request);

                /**
                 *查询安卓实例镜像
                 * @param req DescribeAndroidInstanceImagesRequest
                 * @return DescribeAndroidInstanceImagesOutcome
                 */
                DescribeAndroidInstanceImagesOutcome DescribeAndroidInstanceImages(const Model::DescribeAndroidInstanceImagesRequest &request);
                void DescribeAndroidInstanceImagesAsync(const Model::DescribeAndroidInstanceImagesRequest& request, const DescribeAndroidInstanceImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAndroidInstanceImagesOutcomeCallable DescribeAndroidInstanceImagesCallable(const Model::DescribeAndroidInstanceImagesRequest& request);

                /**
                 *创建安卓实例
                 * @param req DescribeAndroidInstanceLabelsRequest
                 * @return DescribeAndroidInstanceLabelsOutcome
                 */
                DescribeAndroidInstanceLabelsOutcome DescribeAndroidInstanceLabels(const Model::DescribeAndroidInstanceLabelsRequest &request);
                void DescribeAndroidInstanceLabelsAsync(const Model::DescribeAndroidInstanceLabelsRequest& request, const DescribeAndroidInstanceLabelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAndroidInstanceLabelsOutcomeCallable DescribeAndroidInstanceLabelsCallable(const Model::DescribeAndroidInstanceLabelsRequest& request);

                /**
                 *查询安卓实例任务状态
                 * @param req DescribeAndroidInstanceTasksStatusRequest
                 * @return DescribeAndroidInstanceTasksStatusOutcome
                 */
                DescribeAndroidInstanceTasksStatusOutcome DescribeAndroidInstanceTasksStatus(const Model::DescribeAndroidInstanceTasksStatusRequest &request);
                void DescribeAndroidInstanceTasksStatusAsync(const Model::DescribeAndroidInstanceTasksStatusRequest& request, const DescribeAndroidInstanceTasksStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAndroidInstanceTasksStatusOutcomeCallable DescribeAndroidInstanceTasksStatusCallable(const Model::DescribeAndroidInstanceTasksStatusRequest& request);

                /**
                 *查询安卓实例
                 * @param req DescribeAndroidInstancesRequest
                 * @return DescribeAndroidInstancesOutcome
                 */
                DescribeAndroidInstancesOutcome DescribeAndroidInstances(const Model::DescribeAndroidInstancesRequest &request);
                void DescribeAndroidInstancesAsync(const Model::DescribeAndroidInstancesRequest& request, const DescribeAndroidInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAndroidInstancesOutcomeCallable DescribeAndroidInstancesCallable(const Model::DescribeAndroidInstancesRequest& request);

                /**
                 *获取并发总数和运行数
                 * @param req DescribeInstancesCountRequest
                 * @return DescribeInstancesCountOutcome
                 */
                DescribeInstancesCountOutcome DescribeInstancesCount(const Model::DescribeInstancesCountRequest &request);
                void DescribeInstancesCountAsync(const Model::DescribeInstancesCountRequest& request, const DescribeInstancesCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesCountOutcomeCallable DescribeInstancesCountCallable(const Model::DescribeInstancesCountRequest& request);

                /**
                 *销毁安卓实例
                 * @param req DestroyAndroidInstancesRequest
                 * @return DestroyAndroidInstancesOutcome
                 */
                DestroyAndroidInstancesOutcome DestroyAndroidInstances(const Model::DestroyAndroidInstancesRequest &request);
                void DestroyAndroidInstancesAsync(const Model::DestroyAndroidInstancesRequest& request, const DestroyAndroidInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyAndroidInstancesOutcomeCallable DestroyAndroidInstancesCallable(const Model::DestroyAndroidInstancesRequest& request);

                /**
                 *在安卓实例上异步执行命令，命令输出结果如果内容过长会被截断
                 * @param req ExecuteCommandOnAndroidInstancesRequest
                 * @return ExecuteCommandOnAndroidInstancesOutcome
                 */
                ExecuteCommandOnAndroidInstancesOutcome ExecuteCommandOnAndroidInstances(const Model::ExecuteCommandOnAndroidInstancesRequest &request);
                void ExecuteCommandOnAndroidInstancesAsync(const Model::ExecuteCommandOnAndroidInstancesRequest& request, const ExecuteCommandOnAndroidInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExecuteCommandOnAndroidInstancesOutcomeCallable ExecuteCommandOnAndroidInstancesCallable(const Model::ExecuteCommandOnAndroidInstancesRequest& request);

                /**
                 *安装安卓实例应用
                 * @param req InstallAndroidInstancesAppRequest
                 * @return InstallAndroidInstancesAppOutcome
                 */
                InstallAndroidInstancesAppOutcome InstallAndroidInstancesApp(const Model::InstallAndroidInstancesAppRequest &request);
                void InstallAndroidInstancesAppAsync(const Model::InstallAndroidInstancesAppRequest& request, const InstallAndroidInstancesAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InstallAndroidInstancesAppOutcomeCallable InstallAndroidInstancesAppCallable(const Model::InstallAndroidInstancesAppRequest& request);

                /**
                 *修改安卓实例的信息
                 * @param req ModifyAndroidInstanceInformationRequest
                 * @return ModifyAndroidInstanceInformationOutcome
                 */
                ModifyAndroidInstanceInformationOutcome ModifyAndroidInstanceInformation(const Model::ModifyAndroidInstanceInformationRequest &request);
                void ModifyAndroidInstanceInformationAsync(const Model::ModifyAndroidInstanceInformationRequest& request, const ModifyAndroidInstanceInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAndroidInstanceInformationOutcomeCallable ModifyAndroidInstanceInformationCallable(const Model::ModifyAndroidInstanceInformationRequest& request);

                /**
                 *修改安卓实例分辨率。需要注意的是该接口可能导致正在运行的应用出现闪退，所以建议在实例维护时期才进行调用。
                 * @param req ModifyAndroidInstanceResolutionRequest
                 * @return ModifyAndroidInstanceResolutionOutcome
                 */
                ModifyAndroidInstanceResolutionOutcome ModifyAndroidInstanceResolution(const Model::ModifyAndroidInstanceResolutionRequest &request);
                void ModifyAndroidInstanceResolutionAsync(const Model::ModifyAndroidInstanceResolutionRequest& request, const ModifyAndroidInstanceResolutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAndroidInstanceResolutionOutcomeCallable ModifyAndroidInstanceResolutionCallable(const Model::ModifyAndroidInstanceResolutionRequest& request);

                /**
                 *修改安卓实例分辨率。需要注意的是该接口可能导致正在运行的应用出现闪退，所以建议在实例维护时期才进行调用。
                 * @param req ModifyAndroidInstancesLabelsRequest
                 * @return ModifyAndroidInstancesLabelsOutcome
                 */
                ModifyAndroidInstancesLabelsOutcome ModifyAndroidInstancesLabels(const Model::ModifyAndroidInstancesLabelsRequest &request);
                void ModifyAndroidInstancesLabelsAsync(const Model::ModifyAndroidInstancesLabelsRequest& request, const ModifyAndroidInstancesLabelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAndroidInstancesLabelsOutcomeCallable ModifyAndroidInstancesLabelsCallable(const Model::ModifyAndroidInstancesLabelsRequest& request);

                /**
                 *批量修改安卓实例的用户ID
                 * @param req ModifyAndroidInstancesUserIdRequest
                 * @return ModifyAndroidInstancesUserIdOutcome
                 */
                ModifyAndroidInstancesUserIdOutcome ModifyAndroidInstancesUserId(const Model::ModifyAndroidInstancesUserIdRequest &request);
                void ModifyAndroidInstancesUserIdAsync(const Model::ModifyAndroidInstancesUserIdRequest& request, const ModifyAndroidInstancesUserIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAndroidInstancesUserIdOutcomeCallable ModifyAndroidInstancesUserIdCallable(const Model::ModifyAndroidInstancesUserIdRequest& request);

                /**
                 *重启安卓实例
                 * @param req RebootAndroidInstancesRequest
                 * @return RebootAndroidInstancesOutcome
                 */
                RebootAndroidInstancesOutcome RebootAndroidInstances(const Model::RebootAndroidInstancesRequest &request);
                void RebootAndroidInstancesAsync(const Model::RebootAndroidInstancesRequest& request, const RebootAndroidInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RebootAndroidInstancesOutcomeCallable RebootAndroidInstancesCallable(const Model::RebootAndroidInstancesRequest& request);

                /**
                 *重置安卓实例
                 * @param req ResetAndroidInstancesRequest
                 * @return ResetAndroidInstancesOutcome
                 */
                ResetAndroidInstancesOutcome ResetAndroidInstances(const Model::ResetAndroidInstancesRequest &request);
                void ResetAndroidInstancesAsync(const Model::ResetAndroidInstancesRequest& request, const ResetAndroidInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetAndroidInstancesOutcomeCallable ResetAndroidInstancesCallable(const Model::ResetAndroidInstancesRequest& request);

                /**
                 *启动安卓实例应用
                 * @param req RestartAndroidInstancesAppRequest
                 * @return RestartAndroidInstancesAppOutcome
                 */
                RestartAndroidInstancesAppOutcome RestartAndroidInstancesApp(const Model::RestartAndroidInstancesAppRequest &request);
                void RestartAndroidInstancesAppAsync(const Model::RestartAndroidInstancesAppRequest& request, const RestartAndroidInstancesAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestartAndroidInstancesAppOutcomeCallable RestartAndroidInstancesAppCallable(const Model::RestartAndroidInstancesAppRequest& request);

                /**
                 *保存游戏存档
                 * @param req SaveGameArchiveRequest
                 * @return SaveGameArchiveOutcome
                 */
                SaveGameArchiveOutcome SaveGameArchive(const Model::SaveGameArchiveRequest &request);
                void SaveGameArchiveAsync(const Model::SaveGameArchiveRequest& request, const SaveGameArchiveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SaveGameArchiveOutcomeCallable SaveGameArchiveCallable(const Model::SaveGameArchiveRequest& request);

                /**
                 *重启安卓实例
                 * @param req StartAndroidInstancesRequest
                 * @return StartAndroidInstancesOutcome
                 */
                StartAndroidInstancesOutcome StartAndroidInstances(const Model::StartAndroidInstancesRequest &request);
                void StartAndroidInstancesAsync(const Model::StartAndroidInstancesRequest& request, const StartAndroidInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartAndroidInstancesOutcomeCallable StartAndroidInstancesCallable(const Model::StartAndroidInstancesRequest& request);

                /**
                 *启动安卓实例应用
                 * @param req StartAndroidInstancesAppRequest
                 * @return StartAndroidInstancesAppOutcome
                 */
                StartAndroidInstancesAppOutcome StartAndroidInstancesApp(const Model::StartAndroidInstancesAppRequest &request);
                void StartAndroidInstancesAppAsync(const Model::StartAndroidInstancesAppRequest& request, const StartAndroidInstancesAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartAndroidInstancesAppOutcomeCallable StartAndroidInstancesAppCallable(const Model::StartAndroidInstancesAppRequest& request);

                /**
                 *开始云端推流
                 * @param req StartPublishStreamRequest
                 * @return StartPublishStreamOutcome
                 */
                StartPublishStreamOutcome StartPublishStream(const Model::StartPublishStreamRequest &request);
                void StartPublishStreamAsync(const Model::StartPublishStreamRequest& request, const StartPublishStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartPublishStreamOutcomeCallable StartPublishStreamCallable(const Model::StartPublishStreamRequest& request);

                /**
                 *开始云端推流
                 * @param req StartPublishStreamToCSSRequest
                 * @return StartPublishStreamToCSSOutcome
                 */
                StartPublishStreamToCSSOutcome StartPublishStreamToCSS(const Model::StartPublishStreamToCSSRequest &request);
                void StartPublishStreamToCSSAsync(const Model::StartPublishStreamToCSSRequest& request, const StartPublishStreamToCSSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartPublishStreamToCSSOutcomeCallable StartPublishStreamToCSSCallable(const Model::StartPublishStreamToCSSRequest& request);

                /**
                 *重启安卓实例
                 * @param req StopAndroidInstancesRequest
                 * @return StopAndroidInstancesOutcome
                 */
                StopAndroidInstancesOutcome StopAndroidInstances(const Model::StopAndroidInstancesRequest &request);
                void StopAndroidInstancesAsync(const Model::StopAndroidInstancesRequest& request, const StopAndroidInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopAndroidInstancesOutcomeCallable StopAndroidInstancesCallable(const Model::StopAndroidInstancesRequest& request);

                /**
                 *停止安卓实例应用
                 * @param req StopAndroidInstancesAppRequest
                 * @return StopAndroidInstancesAppOutcome
                 */
                StopAndroidInstancesAppOutcome StopAndroidInstancesApp(const Model::StopAndroidInstancesAppRequest &request);
                void StopAndroidInstancesAppAsync(const Model::StopAndroidInstancesAppRequest& request, const StopAndroidInstancesAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopAndroidInstancesAppOutcomeCallable StopAndroidInstancesAppCallable(const Model::StopAndroidInstancesAppRequest& request);

                /**
                 *强制退出游戏
                 * @param req StopGameRequest
                 * @return StopGameOutcome
                 */
                StopGameOutcome StopGame(const Model::StopGameRequest &request);
                void StopGameAsync(const Model::StopGameRequest& request, const StopGameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopGameOutcomeCallable StopGameCallable(const Model::StopGameRequest& request);

                /**
                 *停止云端推流
                 * @param req StopPublishStreamRequest
                 * @return StopPublishStreamOutcome
                 */
                StopPublishStreamOutcome StopPublishStream(const Model::StopPublishStreamRequest &request);
                void StopPublishStreamAsync(const Model::StopPublishStreamRequest& request, const StopPublishStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopPublishStreamOutcomeCallable StopPublishStreamCallable(const Model::StopPublishStreamRequest& request);

                /**
                 *切换游戏存档
                 * @param req SwitchGameArchiveRequest
                 * @return SwitchGameArchiveOutcome
                 */
                SwitchGameArchiveOutcome SwitchGameArchive(const Model::SwitchGameArchiveRequest &request);
                void SwitchGameArchiveAsync(const Model::SwitchGameArchiveRequest& request, const SwitchGameArchiveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SwitchGameArchiveOutcomeCallable SwitchGameArchiveCallable(const Model::SwitchGameArchiveRequest& request);

                /**
                 *同步安卓实例镜像
                 * @param req SyncAndroidInstanceImageRequest
                 * @return SyncAndroidInstanceImageOutcome
                 */
                SyncAndroidInstanceImageOutcome SyncAndroidInstanceImage(const Model::SyncAndroidInstanceImageRequest &request);
                void SyncAndroidInstanceImageAsync(const Model::SyncAndroidInstanceImageRequest& request, const SyncAndroidInstanceImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SyncAndroidInstanceImageOutcomeCallable SyncAndroidInstanceImageCallable(const Model::SyncAndroidInstanceImageRequest& request);

                /**
                 *在安卓实例上同步执行命令，仅支持1秒内可以返回结果的命令，例如：ls、cd。同时执行的实例数量不能过多，否则可能云api返回超时。不支持超过1秒无法返回或无法自主结束的命令，例如：top、vim，执行结果最大1KB
                 * @param req SyncExecuteCommandOnAndroidInstancesRequest
                 * @return SyncExecuteCommandOnAndroidInstancesOutcome
                 */
                SyncExecuteCommandOnAndroidInstancesOutcome SyncExecuteCommandOnAndroidInstances(const Model::SyncExecuteCommandOnAndroidInstancesRequest &request);
                void SyncExecuteCommandOnAndroidInstancesAsync(const Model::SyncExecuteCommandOnAndroidInstancesRequest& request, const SyncExecuteCommandOnAndroidInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SyncExecuteCommandOnAndroidInstancesOutcomeCallable SyncExecuteCommandOnAndroidInstancesCallable(const Model::SyncExecuteCommandOnAndroidInstancesRequest& request);

                /**
                 *尝试锁定机器
                 * @param req TrylockWorkerRequest
                 * @return TrylockWorkerOutcome
                 */
                TrylockWorkerOutcome TrylockWorker(const Model::TrylockWorkerRequest &request);
                void TrylockWorkerAsync(const Model::TrylockWorkerRequest& request, const TrylockWorkerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TrylockWorkerOutcomeCallable TrylockWorkerCallable(const Model::TrylockWorkerRequest& request);

                /**
                 *卸载安卓实例应用
                 * @param req UninstallAndroidInstancesAppRequest
                 * @return UninstallAndroidInstancesAppOutcome
                 */
                UninstallAndroidInstancesAppOutcome UninstallAndroidInstancesApp(const Model::UninstallAndroidInstancesAppRequest &request);
                void UninstallAndroidInstancesAppAsync(const Model::UninstallAndroidInstancesAppRequest& request, const UninstallAndroidInstancesAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UninstallAndroidInstancesAppOutcomeCallable UninstallAndroidInstancesAppCallable(const Model::UninstallAndroidInstancesAppRequest& request);

                /**
                 *上传文件到安卓实例
                 * @param req UploadFileToAndroidInstancesRequest
                 * @return UploadFileToAndroidInstancesOutcome
                 */
                UploadFileToAndroidInstancesOutcome UploadFileToAndroidInstances(const Model::UploadFileToAndroidInstancesRequest &request);
                void UploadFileToAndroidInstancesAsync(const Model::UploadFileToAndroidInstancesRequest& request, const UploadFileToAndroidInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadFileToAndroidInstancesOutcomeCallable UploadFileToAndroidInstancesCallable(const Model::UploadFileToAndroidInstancesRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_GSCLIENT_H_
