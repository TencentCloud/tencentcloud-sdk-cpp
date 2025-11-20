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

#ifndef TENCENTCLOUD_GS_V20191118_GSCLIENT_H_
#define TENCENTCLOUD_GS_V20191118_GSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/gs/v20191118/model/BackUpAndroidInstanceRequest.h>
#include <tencentcloud/gs/v20191118/model/BackUpAndroidInstanceResponse.h>
#include <tencentcloud/gs/v20191118/model/BackUpAndroidInstanceToStorageRequest.h>
#include <tencentcloud/gs/v20191118/model/BackUpAndroidInstanceToStorageResponse.h>
#include <tencentcloud/gs/v20191118/model/CleanAndroidInstancesAppDataRequest.h>
#include <tencentcloud/gs/v20191118/model/CleanAndroidInstancesAppDataResponse.h>
#include <tencentcloud/gs/v20191118/model/ConnectAndroidInstanceRequest.h>
#include <tencentcloud/gs/v20191118/model/ConnectAndroidInstanceResponse.h>
#include <tencentcloud/gs/v20191118/model/CopyAndroidInstanceRequest.h>
#include <tencentcloud/gs/v20191118/model/CopyAndroidInstanceResponse.h>
#include <tencentcloud/gs/v20191118/model/CreateAndroidAppRequest.h>
#include <tencentcloud/gs/v20191118/model/CreateAndroidAppResponse.h>
#include <tencentcloud/gs/v20191118/model/CreateAndroidAppVersionRequest.h>
#include <tencentcloud/gs/v20191118/model/CreateAndroidAppVersionResponse.h>
#include <tencentcloud/gs/v20191118/model/CreateAndroidInstanceADBRequest.h>
#include <tencentcloud/gs/v20191118/model/CreateAndroidInstanceADBResponse.h>
#include <tencentcloud/gs/v20191118/model/CreateAndroidInstanceAcceleratorTokenRequest.h>
#include <tencentcloud/gs/v20191118/model/CreateAndroidInstanceAcceleratorTokenResponse.h>
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
#include <tencentcloud/gs/v20191118/model/CreateAndroidInstancesAccessTokenRequest.h>
#include <tencentcloud/gs/v20191118/model/CreateAndroidInstancesAccessTokenResponse.h>
#include <tencentcloud/gs/v20191118/model/CreateAndroidInstancesScreenshotRequest.h>
#include <tencentcloud/gs/v20191118/model/CreateAndroidInstancesScreenshotResponse.h>
#include <tencentcloud/gs/v20191118/model/CreateCosCredentialRequest.h>
#include <tencentcloud/gs/v20191118/model/CreateCosCredentialResponse.h>
#include <tencentcloud/gs/v20191118/model/CreateSessionRequest.h>
#include <tencentcloud/gs/v20191118/model/CreateSessionResponse.h>
#include <tencentcloud/gs/v20191118/model/DeleteAndroidAppRequest.h>
#include <tencentcloud/gs/v20191118/model/DeleteAndroidAppResponse.h>
#include <tencentcloud/gs/v20191118/model/DeleteAndroidAppVersionRequest.h>
#include <tencentcloud/gs/v20191118/model/DeleteAndroidAppVersionResponse.h>
#include <tencentcloud/gs/v20191118/model/DeleteAndroidInstanceBackupFilesRequest.h>
#include <tencentcloud/gs/v20191118/model/DeleteAndroidInstanceBackupFilesResponse.h>
#include <tencentcloud/gs/v20191118/model/DeleteAndroidInstanceBackupsRequest.h>
#include <tencentcloud/gs/v20191118/model/DeleteAndroidInstanceBackupsResponse.h>
#include <tencentcloud/gs/v20191118/model/DeleteAndroidInstanceImagesRequest.h>
#include <tencentcloud/gs/v20191118/model/DeleteAndroidInstanceImagesResponse.h>
#include <tencentcloud/gs/v20191118/model/DeleteAndroidInstanceLabelRequest.h>
#include <tencentcloud/gs/v20191118/model/DeleteAndroidInstanceLabelResponse.h>
#include <tencentcloud/gs/v20191118/model/DescribeAndroidAppsRequest.h>
#include <tencentcloud/gs/v20191118/model/DescribeAndroidAppsResponse.h>
#include <tencentcloud/gs/v20191118/model/DescribeAndroidInstanceAppsRequest.h>
#include <tencentcloud/gs/v20191118/model/DescribeAndroidInstanceAppsResponse.h>
#include <tencentcloud/gs/v20191118/model/DescribeAndroidInstanceBackupsRequest.h>
#include <tencentcloud/gs/v20191118/model/DescribeAndroidInstanceBackupsResponse.h>
#include <tencentcloud/gs/v20191118/model/DescribeAndroidInstanceImagesRequest.h>
#include <tencentcloud/gs/v20191118/model/DescribeAndroidInstanceImagesResponse.h>
#include <tencentcloud/gs/v20191118/model/DescribeAndroidInstanceLabelsRequest.h>
#include <tencentcloud/gs/v20191118/model/DescribeAndroidInstanceLabelsResponse.h>
#include <tencentcloud/gs/v20191118/model/DescribeAndroidInstanceTasksStatusRequest.h>
#include <tencentcloud/gs/v20191118/model/DescribeAndroidInstanceTasksStatusResponse.h>
#include <tencentcloud/gs/v20191118/model/DescribeAndroidInstancesRequest.h>
#include <tencentcloud/gs/v20191118/model/DescribeAndroidInstancesResponse.h>
#include <tencentcloud/gs/v20191118/model/DescribeAndroidInstancesAppBlacklistRequest.h>
#include <tencentcloud/gs/v20191118/model/DescribeAndroidInstancesAppBlacklistResponse.h>
#include <tencentcloud/gs/v20191118/model/DescribeAndroidInstancesByAppsRequest.h>
#include <tencentcloud/gs/v20191118/model/DescribeAndroidInstancesByAppsResponse.h>
#include <tencentcloud/gs/v20191118/model/DescribeInstancesCountRequest.h>
#include <tencentcloud/gs/v20191118/model/DescribeInstancesCountResponse.h>
#include <tencentcloud/gs/v20191118/model/DestroyAndroidInstancesRequest.h>
#include <tencentcloud/gs/v20191118/model/DestroyAndroidInstancesResponse.h>
#include <tencentcloud/gs/v20191118/model/DisableAndroidInstancesAppRequest.h>
#include <tencentcloud/gs/v20191118/model/DisableAndroidInstancesAppResponse.h>
#include <tencentcloud/gs/v20191118/model/DisconnectAndroidInstanceRequest.h>
#include <tencentcloud/gs/v20191118/model/DisconnectAndroidInstanceResponse.h>
#include <tencentcloud/gs/v20191118/model/DisconnectAndroidInstanceAcceleratorRequest.h>
#include <tencentcloud/gs/v20191118/model/DisconnectAndroidInstanceAcceleratorResponse.h>
#include <tencentcloud/gs/v20191118/model/DistributeAndroidInstanceImageToHostsRequest.h>
#include <tencentcloud/gs/v20191118/model/DistributeAndroidInstanceImageToHostsResponse.h>
#include <tencentcloud/gs/v20191118/model/DistributeFileToAndroidInstancesRequest.h>
#include <tencentcloud/gs/v20191118/model/DistributeFileToAndroidInstancesResponse.h>
#include <tencentcloud/gs/v20191118/model/DistributePhotoToAndroidInstancesRequest.h>
#include <tencentcloud/gs/v20191118/model/DistributePhotoToAndroidInstancesResponse.h>
#include <tencentcloud/gs/v20191118/model/EnableAndroidInstancesAppRequest.h>
#include <tencentcloud/gs/v20191118/model/EnableAndroidInstancesAppResponse.h>
#include <tencentcloud/gs/v20191118/model/ExecuteCommandOnAndroidInstancesRequest.h>
#include <tencentcloud/gs/v20191118/model/ExecuteCommandOnAndroidInstancesResponse.h>
#include <tencentcloud/gs/v20191118/model/FetchAndroidInstancesLogsRequest.h>
#include <tencentcloud/gs/v20191118/model/FetchAndroidInstancesLogsResponse.h>
#include <tencentcloud/gs/v20191118/model/ImportAndroidInstanceImageRequest.h>
#include <tencentcloud/gs/v20191118/model/ImportAndroidInstanceImageResponse.h>
#include <tencentcloud/gs/v20191118/model/InstallAndroidInstancesAppRequest.h>
#include <tencentcloud/gs/v20191118/model/InstallAndroidInstancesAppResponse.h>
#include <tencentcloud/gs/v20191118/model/InstallAndroidInstancesAppWithURLRequest.h>
#include <tencentcloud/gs/v20191118/model/InstallAndroidInstancesAppWithURLResponse.h>
#include <tencentcloud/gs/v20191118/model/ModifyAndroidAppRequest.h>
#include <tencentcloud/gs/v20191118/model/ModifyAndroidAppResponse.h>
#include <tencentcloud/gs/v20191118/model/ModifyAndroidAppVersionRequest.h>
#include <tencentcloud/gs/v20191118/model/ModifyAndroidAppVersionResponse.h>
#include <tencentcloud/gs/v20191118/model/ModifyAndroidInstanceInformationRequest.h>
#include <tencentcloud/gs/v20191118/model/ModifyAndroidInstanceInformationResponse.h>
#include <tencentcloud/gs/v20191118/model/ModifyAndroidInstanceResolutionRequest.h>
#include <tencentcloud/gs/v20191118/model/ModifyAndroidInstanceResolutionResponse.h>
#include <tencentcloud/gs/v20191118/model/ModifyAndroidInstancesAppBlacklistRequest.h>
#include <tencentcloud/gs/v20191118/model/ModifyAndroidInstancesAppBlacklistResponse.h>
#include <tencentcloud/gs/v20191118/model/ModifyAndroidInstancesInformationRequest.h>
#include <tencentcloud/gs/v20191118/model/ModifyAndroidInstancesInformationResponse.h>
#include <tencentcloud/gs/v20191118/model/ModifyAndroidInstancesLabelsRequest.h>
#include <tencentcloud/gs/v20191118/model/ModifyAndroidInstancesLabelsResponse.h>
#include <tencentcloud/gs/v20191118/model/ModifyAndroidInstancesPropertiesRequest.h>
#include <tencentcloud/gs/v20191118/model/ModifyAndroidInstancesPropertiesResponse.h>
#include <tencentcloud/gs/v20191118/model/ModifyAndroidInstancesResolutionRequest.h>
#include <tencentcloud/gs/v20191118/model/ModifyAndroidInstancesResolutionResponse.h>
#include <tencentcloud/gs/v20191118/model/ModifyAndroidInstancesResourcesRequest.h>
#include <tencentcloud/gs/v20191118/model/ModifyAndroidInstancesResourcesResponse.h>
#include <tencentcloud/gs/v20191118/model/ModifyAndroidInstancesUserIdRequest.h>
#include <tencentcloud/gs/v20191118/model/ModifyAndroidInstancesUserIdResponse.h>
#include <tencentcloud/gs/v20191118/model/RebootAndroidInstanceHostsRequest.h>
#include <tencentcloud/gs/v20191118/model/RebootAndroidInstanceHostsResponse.h>
#include <tencentcloud/gs/v20191118/model/RebootAndroidInstancesRequest.h>
#include <tencentcloud/gs/v20191118/model/RebootAndroidInstancesResponse.h>
#include <tencentcloud/gs/v20191118/model/RenewAndroidInstancesAccessTokenRequest.h>
#include <tencentcloud/gs/v20191118/model/RenewAndroidInstancesAccessTokenResponse.h>
#include <tencentcloud/gs/v20191118/model/ResetAndroidInstancesRequest.h>
#include <tencentcloud/gs/v20191118/model/ResetAndroidInstancesResponse.h>
#include <tencentcloud/gs/v20191118/model/RestartAndroidInstancesAppRequest.h>
#include <tencentcloud/gs/v20191118/model/RestartAndroidInstancesAppResponse.h>
#include <tencentcloud/gs/v20191118/model/RestoreAndroidInstanceRequest.h>
#include <tencentcloud/gs/v20191118/model/RestoreAndroidInstanceResponse.h>
#include <tencentcloud/gs/v20191118/model/RestoreAndroidInstanceFromStorageRequest.h>
#include <tencentcloud/gs/v20191118/model/RestoreAndroidInstanceFromStorageResponse.h>
#include <tencentcloud/gs/v20191118/model/SaveGameArchiveRequest.h>
#include <tencentcloud/gs/v20191118/model/SaveGameArchiveResponse.h>
#include <tencentcloud/gs/v20191118/model/SetAndroidInstancesBGAppKeepAliveRequest.h>
#include <tencentcloud/gs/v20191118/model/SetAndroidInstancesBGAppKeepAliveResponse.h>
#include <tencentcloud/gs/v20191118/model/SetAndroidInstancesFGAppKeepAliveRequest.h>
#include <tencentcloud/gs/v20191118/model/SetAndroidInstancesFGAppKeepAliveResponse.h>
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
#include <tencentcloud/gs/v20191118/model/UploadFilesToAndroidInstancesRequest.h>
#include <tencentcloud/gs/v20191118/model/UploadFilesToAndroidInstancesResponse.h>


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

                typedef Outcome<Core::Error, Model::BackUpAndroidInstanceResponse> BackUpAndroidInstanceOutcome;
                typedef std::future<BackUpAndroidInstanceOutcome> BackUpAndroidInstanceOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::BackUpAndroidInstanceRequest&, BackUpAndroidInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BackUpAndroidInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::BackUpAndroidInstanceToStorageResponse> BackUpAndroidInstanceToStorageOutcome;
                typedef std::future<BackUpAndroidInstanceToStorageOutcome> BackUpAndroidInstanceToStorageOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::BackUpAndroidInstanceToStorageRequest&, BackUpAndroidInstanceToStorageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BackUpAndroidInstanceToStorageAsyncHandler;
                typedef Outcome<Core::Error, Model::CleanAndroidInstancesAppDataResponse> CleanAndroidInstancesAppDataOutcome;
                typedef std::future<CleanAndroidInstancesAppDataOutcome> CleanAndroidInstancesAppDataOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::CleanAndroidInstancesAppDataRequest&, CleanAndroidInstancesAppDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CleanAndroidInstancesAppDataAsyncHandler;
                typedef Outcome<Core::Error, Model::ConnectAndroidInstanceResponse> ConnectAndroidInstanceOutcome;
                typedef std::future<ConnectAndroidInstanceOutcome> ConnectAndroidInstanceOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::ConnectAndroidInstanceRequest&, ConnectAndroidInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ConnectAndroidInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CopyAndroidInstanceResponse> CopyAndroidInstanceOutcome;
                typedef std::future<CopyAndroidInstanceOutcome> CopyAndroidInstanceOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::CopyAndroidInstanceRequest&, CopyAndroidInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CopyAndroidInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAndroidAppResponse> CreateAndroidAppOutcome;
                typedef std::future<CreateAndroidAppOutcome> CreateAndroidAppOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::CreateAndroidAppRequest&, CreateAndroidAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAndroidAppAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAndroidAppVersionResponse> CreateAndroidAppVersionOutcome;
                typedef std::future<CreateAndroidAppVersionOutcome> CreateAndroidAppVersionOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::CreateAndroidAppVersionRequest&, CreateAndroidAppVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAndroidAppVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAndroidInstanceADBResponse> CreateAndroidInstanceADBOutcome;
                typedef std::future<CreateAndroidInstanceADBOutcome> CreateAndroidInstanceADBOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::CreateAndroidInstanceADBRequest&, CreateAndroidInstanceADBOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAndroidInstanceADBAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAndroidInstanceAcceleratorTokenResponse> CreateAndroidInstanceAcceleratorTokenOutcome;
                typedef std::future<CreateAndroidInstanceAcceleratorTokenOutcome> CreateAndroidInstanceAcceleratorTokenOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::CreateAndroidInstanceAcceleratorTokenRequest&, CreateAndroidInstanceAcceleratorTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAndroidInstanceAcceleratorTokenAsyncHandler;
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
                typedef Outcome<Core::Error, Model::CreateAndroidInstancesAccessTokenResponse> CreateAndroidInstancesAccessTokenOutcome;
                typedef std::future<CreateAndroidInstancesAccessTokenOutcome> CreateAndroidInstancesAccessTokenOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::CreateAndroidInstancesAccessTokenRequest&, CreateAndroidInstancesAccessTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAndroidInstancesAccessTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAndroidInstancesScreenshotResponse> CreateAndroidInstancesScreenshotOutcome;
                typedef std::future<CreateAndroidInstancesScreenshotOutcome> CreateAndroidInstancesScreenshotOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::CreateAndroidInstancesScreenshotRequest&, CreateAndroidInstancesScreenshotOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAndroidInstancesScreenshotAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCosCredentialResponse> CreateCosCredentialOutcome;
                typedef std::future<CreateCosCredentialOutcome> CreateCosCredentialOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::CreateCosCredentialRequest&, CreateCosCredentialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCosCredentialAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSessionResponse> CreateSessionOutcome;
                typedef std::future<CreateSessionOutcome> CreateSessionOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::CreateSessionRequest&, CreateSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSessionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAndroidAppResponse> DeleteAndroidAppOutcome;
                typedef std::future<DeleteAndroidAppOutcome> DeleteAndroidAppOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::DeleteAndroidAppRequest&, DeleteAndroidAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAndroidAppAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAndroidAppVersionResponse> DeleteAndroidAppVersionOutcome;
                typedef std::future<DeleteAndroidAppVersionOutcome> DeleteAndroidAppVersionOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::DeleteAndroidAppVersionRequest&, DeleteAndroidAppVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAndroidAppVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAndroidInstanceBackupFilesResponse> DeleteAndroidInstanceBackupFilesOutcome;
                typedef std::future<DeleteAndroidInstanceBackupFilesOutcome> DeleteAndroidInstanceBackupFilesOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::DeleteAndroidInstanceBackupFilesRequest&, DeleteAndroidInstanceBackupFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAndroidInstanceBackupFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAndroidInstanceBackupsResponse> DeleteAndroidInstanceBackupsOutcome;
                typedef std::future<DeleteAndroidInstanceBackupsOutcome> DeleteAndroidInstanceBackupsOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::DeleteAndroidInstanceBackupsRequest&, DeleteAndroidInstanceBackupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAndroidInstanceBackupsAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeAndroidInstanceBackupsResponse> DescribeAndroidInstanceBackupsOutcome;
                typedef std::future<DescribeAndroidInstanceBackupsOutcome> DescribeAndroidInstanceBackupsOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::DescribeAndroidInstanceBackupsRequest&, DescribeAndroidInstanceBackupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAndroidInstanceBackupsAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeAndroidInstancesAppBlacklistResponse> DescribeAndroidInstancesAppBlacklistOutcome;
                typedef std::future<DescribeAndroidInstancesAppBlacklistOutcome> DescribeAndroidInstancesAppBlacklistOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::DescribeAndroidInstancesAppBlacklistRequest&, DescribeAndroidInstancesAppBlacklistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAndroidInstancesAppBlacklistAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAndroidInstancesByAppsResponse> DescribeAndroidInstancesByAppsOutcome;
                typedef std::future<DescribeAndroidInstancesByAppsOutcome> DescribeAndroidInstancesByAppsOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::DescribeAndroidInstancesByAppsRequest&, DescribeAndroidInstancesByAppsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAndroidInstancesByAppsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesCountResponse> DescribeInstancesCountOutcome;
                typedef std::future<DescribeInstancesCountOutcome> DescribeInstancesCountOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::DescribeInstancesCountRequest&, DescribeInstancesCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyAndroidInstancesResponse> DestroyAndroidInstancesOutcome;
                typedef std::future<DestroyAndroidInstancesOutcome> DestroyAndroidInstancesOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::DestroyAndroidInstancesRequest&, DestroyAndroidInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyAndroidInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableAndroidInstancesAppResponse> DisableAndroidInstancesAppOutcome;
                typedef std::future<DisableAndroidInstancesAppOutcome> DisableAndroidInstancesAppOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::DisableAndroidInstancesAppRequest&, DisableAndroidInstancesAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableAndroidInstancesAppAsyncHandler;
                typedef Outcome<Core::Error, Model::DisconnectAndroidInstanceResponse> DisconnectAndroidInstanceOutcome;
                typedef std::future<DisconnectAndroidInstanceOutcome> DisconnectAndroidInstanceOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::DisconnectAndroidInstanceRequest&, DisconnectAndroidInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisconnectAndroidInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DisconnectAndroidInstanceAcceleratorResponse> DisconnectAndroidInstanceAcceleratorOutcome;
                typedef std::future<DisconnectAndroidInstanceAcceleratorOutcome> DisconnectAndroidInstanceAcceleratorOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::DisconnectAndroidInstanceAcceleratorRequest&, DisconnectAndroidInstanceAcceleratorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisconnectAndroidInstanceAcceleratorAsyncHandler;
                typedef Outcome<Core::Error, Model::DistributeAndroidInstanceImageToHostsResponse> DistributeAndroidInstanceImageToHostsOutcome;
                typedef std::future<DistributeAndroidInstanceImageToHostsOutcome> DistributeAndroidInstanceImageToHostsOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::DistributeAndroidInstanceImageToHostsRequest&, DistributeAndroidInstanceImageToHostsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DistributeAndroidInstanceImageToHostsAsyncHandler;
                typedef Outcome<Core::Error, Model::DistributeFileToAndroidInstancesResponse> DistributeFileToAndroidInstancesOutcome;
                typedef std::future<DistributeFileToAndroidInstancesOutcome> DistributeFileToAndroidInstancesOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::DistributeFileToAndroidInstancesRequest&, DistributeFileToAndroidInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DistributeFileToAndroidInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DistributePhotoToAndroidInstancesResponse> DistributePhotoToAndroidInstancesOutcome;
                typedef std::future<DistributePhotoToAndroidInstancesOutcome> DistributePhotoToAndroidInstancesOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::DistributePhotoToAndroidInstancesRequest&, DistributePhotoToAndroidInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DistributePhotoToAndroidInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableAndroidInstancesAppResponse> EnableAndroidInstancesAppOutcome;
                typedef std::future<EnableAndroidInstancesAppOutcome> EnableAndroidInstancesAppOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::EnableAndroidInstancesAppRequest&, EnableAndroidInstancesAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableAndroidInstancesAppAsyncHandler;
                typedef Outcome<Core::Error, Model::ExecuteCommandOnAndroidInstancesResponse> ExecuteCommandOnAndroidInstancesOutcome;
                typedef std::future<ExecuteCommandOnAndroidInstancesOutcome> ExecuteCommandOnAndroidInstancesOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::ExecuteCommandOnAndroidInstancesRequest&, ExecuteCommandOnAndroidInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteCommandOnAndroidInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::FetchAndroidInstancesLogsResponse> FetchAndroidInstancesLogsOutcome;
                typedef std::future<FetchAndroidInstancesLogsOutcome> FetchAndroidInstancesLogsOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::FetchAndroidInstancesLogsRequest&, FetchAndroidInstancesLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FetchAndroidInstancesLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::ImportAndroidInstanceImageResponse> ImportAndroidInstanceImageOutcome;
                typedef std::future<ImportAndroidInstanceImageOutcome> ImportAndroidInstanceImageOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::ImportAndroidInstanceImageRequest&, ImportAndroidInstanceImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImportAndroidInstanceImageAsyncHandler;
                typedef Outcome<Core::Error, Model::InstallAndroidInstancesAppResponse> InstallAndroidInstancesAppOutcome;
                typedef std::future<InstallAndroidInstancesAppOutcome> InstallAndroidInstancesAppOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::InstallAndroidInstancesAppRequest&, InstallAndroidInstancesAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InstallAndroidInstancesAppAsyncHandler;
                typedef Outcome<Core::Error, Model::InstallAndroidInstancesAppWithURLResponse> InstallAndroidInstancesAppWithURLOutcome;
                typedef std::future<InstallAndroidInstancesAppWithURLOutcome> InstallAndroidInstancesAppWithURLOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::InstallAndroidInstancesAppWithURLRequest&, InstallAndroidInstancesAppWithURLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InstallAndroidInstancesAppWithURLAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAndroidAppResponse> ModifyAndroidAppOutcome;
                typedef std::future<ModifyAndroidAppOutcome> ModifyAndroidAppOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::ModifyAndroidAppRequest&, ModifyAndroidAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAndroidAppAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAndroidAppVersionResponse> ModifyAndroidAppVersionOutcome;
                typedef std::future<ModifyAndroidAppVersionOutcome> ModifyAndroidAppVersionOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::ModifyAndroidAppVersionRequest&, ModifyAndroidAppVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAndroidAppVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAndroidInstanceInformationResponse> ModifyAndroidInstanceInformationOutcome;
                typedef std::future<ModifyAndroidInstanceInformationOutcome> ModifyAndroidInstanceInformationOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::ModifyAndroidInstanceInformationRequest&, ModifyAndroidInstanceInformationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAndroidInstanceInformationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAndroidInstanceResolutionResponse> ModifyAndroidInstanceResolutionOutcome;
                typedef std::future<ModifyAndroidInstanceResolutionOutcome> ModifyAndroidInstanceResolutionOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::ModifyAndroidInstanceResolutionRequest&, ModifyAndroidInstanceResolutionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAndroidInstanceResolutionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAndroidInstancesAppBlacklistResponse> ModifyAndroidInstancesAppBlacklistOutcome;
                typedef std::future<ModifyAndroidInstancesAppBlacklistOutcome> ModifyAndroidInstancesAppBlacklistOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::ModifyAndroidInstancesAppBlacklistRequest&, ModifyAndroidInstancesAppBlacklistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAndroidInstancesAppBlacklistAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAndroidInstancesInformationResponse> ModifyAndroidInstancesInformationOutcome;
                typedef std::future<ModifyAndroidInstancesInformationOutcome> ModifyAndroidInstancesInformationOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::ModifyAndroidInstancesInformationRequest&, ModifyAndroidInstancesInformationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAndroidInstancesInformationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAndroidInstancesLabelsResponse> ModifyAndroidInstancesLabelsOutcome;
                typedef std::future<ModifyAndroidInstancesLabelsOutcome> ModifyAndroidInstancesLabelsOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::ModifyAndroidInstancesLabelsRequest&, ModifyAndroidInstancesLabelsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAndroidInstancesLabelsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAndroidInstancesPropertiesResponse> ModifyAndroidInstancesPropertiesOutcome;
                typedef std::future<ModifyAndroidInstancesPropertiesOutcome> ModifyAndroidInstancesPropertiesOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::ModifyAndroidInstancesPropertiesRequest&, ModifyAndroidInstancesPropertiesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAndroidInstancesPropertiesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAndroidInstancesResolutionResponse> ModifyAndroidInstancesResolutionOutcome;
                typedef std::future<ModifyAndroidInstancesResolutionOutcome> ModifyAndroidInstancesResolutionOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::ModifyAndroidInstancesResolutionRequest&, ModifyAndroidInstancesResolutionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAndroidInstancesResolutionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAndroidInstancesResourcesResponse> ModifyAndroidInstancesResourcesOutcome;
                typedef std::future<ModifyAndroidInstancesResourcesOutcome> ModifyAndroidInstancesResourcesOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::ModifyAndroidInstancesResourcesRequest&, ModifyAndroidInstancesResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAndroidInstancesResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAndroidInstancesUserIdResponse> ModifyAndroidInstancesUserIdOutcome;
                typedef std::future<ModifyAndroidInstancesUserIdOutcome> ModifyAndroidInstancesUserIdOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::ModifyAndroidInstancesUserIdRequest&, ModifyAndroidInstancesUserIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAndroidInstancesUserIdAsyncHandler;
                typedef Outcome<Core::Error, Model::RebootAndroidInstanceHostsResponse> RebootAndroidInstanceHostsOutcome;
                typedef std::future<RebootAndroidInstanceHostsOutcome> RebootAndroidInstanceHostsOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::RebootAndroidInstanceHostsRequest&, RebootAndroidInstanceHostsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RebootAndroidInstanceHostsAsyncHandler;
                typedef Outcome<Core::Error, Model::RebootAndroidInstancesResponse> RebootAndroidInstancesOutcome;
                typedef std::future<RebootAndroidInstancesOutcome> RebootAndroidInstancesOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::RebootAndroidInstancesRequest&, RebootAndroidInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RebootAndroidInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewAndroidInstancesAccessTokenResponse> RenewAndroidInstancesAccessTokenOutcome;
                typedef std::future<RenewAndroidInstancesAccessTokenOutcome> RenewAndroidInstancesAccessTokenOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::RenewAndroidInstancesAccessTokenRequest&, RenewAndroidInstancesAccessTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewAndroidInstancesAccessTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetAndroidInstancesResponse> ResetAndroidInstancesOutcome;
                typedef std::future<ResetAndroidInstancesOutcome> ResetAndroidInstancesOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::ResetAndroidInstancesRequest&, ResetAndroidInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetAndroidInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::RestartAndroidInstancesAppResponse> RestartAndroidInstancesAppOutcome;
                typedef std::future<RestartAndroidInstancesAppOutcome> RestartAndroidInstancesAppOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::RestartAndroidInstancesAppRequest&, RestartAndroidInstancesAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestartAndroidInstancesAppAsyncHandler;
                typedef Outcome<Core::Error, Model::RestoreAndroidInstanceResponse> RestoreAndroidInstanceOutcome;
                typedef std::future<RestoreAndroidInstanceOutcome> RestoreAndroidInstanceOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::RestoreAndroidInstanceRequest&, RestoreAndroidInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestoreAndroidInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::RestoreAndroidInstanceFromStorageResponse> RestoreAndroidInstanceFromStorageOutcome;
                typedef std::future<RestoreAndroidInstanceFromStorageOutcome> RestoreAndroidInstanceFromStorageOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::RestoreAndroidInstanceFromStorageRequest&, RestoreAndroidInstanceFromStorageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestoreAndroidInstanceFromStorageAsyncHandler;
                typedef Outcome<Core::Error, Model::SaveGameArchiveResponse> SaveGameArchiveOutcome;
                typedef std::future<SaveGameArchiveOutcome> SaveGameArchiveOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::SaveGameArchiveRequest&, SaveGameArchiveOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SaveGameArchiveAsyncHandler;
                typedef Outcome<Core::Error, Model::SetAndroidInstancesBGAppKeepAliveResponse> SetAndroidInstancesBGAppKeepAliveOutcome;
                typedef std::future<SetAndroidInstancesBGAppKeepAliveOutcome> SetAndroidInstancesBGAppKeepAliveOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::SetAndroidInstancesBGAppKeepAliveRequest&, SetAndroidInstancesBGAppKeepAliveOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetAndroidInstancesBGAppKeepAliveAsyncHandler;
                typedef Outcome<Core::Error, Model::SetAndroidInstancesFGAppKeepAliveResponse> SetAndroidInstancesFGAppKeepAliveOutcome;
                typedef std::future<SetAndroidInstancesFGAppKeepAliveOutcome> SetAndroidInstancesFGAppKeepAliveOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::SetAndroidInstancesFGAppKeepAliveRequest&, SetAndroidInstancesFGAppKeepAliveOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetAndroidInstancesFGAppKeepAliveAsyncHandler;
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
                typedef Outcome<Core::Error, Model::UploadFilesToAndroidInstancesResponse> UploadFilesToAndroidInstancesOutcome;
                typedef std::future<UploadFilesToAndroidInstancesOutcome> UploadFilesToAndroidInstancesOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::UploadFilesToAndroidInstancesRequest&, UploadFilesToAndroidInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadFilesToAndroidInstancesAsyncHandler;



                /**
                 *备份安卓实例。该接口需要联系我们开通内网存储才能使用。
                 * @param req BackUpAndroidInstanceRequest
                 * @return BackUpAndroidInstanceOutcome
                 */
                BackUpAndroidInstanceOutcome BackUpAndroidInstance(const Model::BackUpAndroidInstanceRequest &request);
                void BackUpAndroidInstanceAsync(const Model::BackUpAndroidInstanceRequest& request, const BackUpAndroidInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BackUpAndroidInstanceOutcomeCallable BackUpAndroidInstanceCallable(const Model::BackUpAndroidInstanceRequest& request);

                /**
                 *备份云手机数据到指定存储，支持 COS 和兼容 AWS S3 协议的对象存储服务。如果是备份到 COS 时，会使用公网流量，授权 COS bucket 请在控制台中操作。
                 * @param req BackUpAndroidInstanceToStorageRequest
                 * @return BackUpAndroidInstanceToStorageOutcome
                 */
                BackUpAndroidInstanceToStorageOutcome BackUpAndroidInstanceToStorage(const Model::BackUpAndroidInstanceToStorageRequest &request);
                void BackUpAndroidInstanceToStorageAsync(const Model::BackUpAndroidInstanceToStorageRequest& request, const BackUpAndroidInstanceToStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BackUpAndroidInstanceToStorageOutcomeCallable BackUpAndroidInstanceToStorageCallable(const Model::BackUpAndroidInstanceToStorageRequest& request);

                /**
                 *批量清理安卓实例应用数据
                 * @param req CleanAndroidInstancesAppDataRequest
                 * @return CleanAndroidInstancesAppDataOutcome
                 */
                CleanAndroidInstancesAppDataOutcome CleanAndroidInstancesAppData(const Model::CleanAndroidInstancesAppDataRequest &request);
                void CleanAndroidInstancesAppDataAsync(const Model::CleanAndroidInstancesAppDataRequest& request, const CleanAndroidInstancesAppDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CleanAndroidInstancesAppDataOutcomeCallable CleanAndroidInstancesAppDataCallable(const Model::CleanAndroidInstancesAppDataRequest& request);

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
1. 排除和包含文件只能指定 /data 下的文件，不指定时复制整个 /data 目录
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
                 *创建安卓应用
                 * @param req CreateAndroidAppRequest
                 * @return CreateAndroidAppOutcome
                 */
                CreateAndroidAppOutcome CreateAndroidApp(const Model::CreateAndroidAppRequest &request);
                void CreateAndroidAppAsync(const Model::CreateAndroidAppRequest& request, const CreateAndroidAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAndroidAppOutcomeCallable CreateAndroidAppCallable(const Model::CreateAndroidAppRequest& request);

                /**
                 *创建安卓应用版本
                 * @param req CreateAndroidAppVersionRequest
                 * @return CreateAndroidAppVersionOutcome
                 */
                CreateAndroidAppVersionOutcome CreateAndroidAppVersion(const Model::CreateAndroidAppVersionRequest &request);
                void CreateAndroidAppVersionAsync(const Model::CreateAndroidAppVersionRequest& request, const CreateAndroidAppVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAndroidAppVersionOutcomeCallable CreateAndroidAppVersionCallable(const Model::CreateAndroidAppVersionRequest& request);

                /**
                 *创建云手机实例 ADB 连接信息，请将返回结果的 PrivateKey 字段保存为 pem 文件，并将 pem 文件权限设置为 600，再参考返回结果的 ConnectCommand 使用 adb 连接实例。
                 * @param req CreateAndroidInstanceADBRequest
                 * @return CreateAndroidInstanceADBOutcome
                 */
                CreateAndroidInstanceADBOutcome CreateAndroidInstanceADB(const Model::CreateAndroidInstanceADBRequest &request);
                void CreateAndroidInstanceADBAsync(const Model::CreateAndroidInstanceADBRequest& request, const CreateAndroidInstanceADBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAndroidInstanceADBOutcomeCallable CreateAndroidInstanceADBCallable(const Model::CreateAndroidInstanceADBRequest& request);

                /**
                 *创建安卓实例加速Token
                 * @param req CreateAndroidInstanceAcceleratorTokenRequest
                 * @return CreateAndroidInstanceAcceleratorTokenOutcome
                 */
                CreateAndroidInstanceAcceleratorTokenOutcome CreateAndroidInstanceAcceleratorToken(const Model::CreateAndroidInstanceAcceleratorTokenRequest &request);
                void CreateAndroidInstanceAcceleratorTokenAsync(const Model::CreateAndroidInstanceAcceleratorTokenRequest& request, const CreateAndroidInstanceAcceleratorTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAndroidInstanceAcceleratorTokenOutcomeCallable CreateAndroidInstanceAcceleratorTokenCallable(const Model::CreateAndroidInstanceAcceleratorTokenRequest& request);

                /**
                 *使用指定的安卓实例创建镜像，创建镜像时指定的实例会关机，镜像创建完成后实例会自动开机。当镜像的 AndroidInstanceImageState 为 NORMAL 时，镜像创建完成处于可用状态。
                 * @param req CreateAndroidInstanceImageRequest
                 * @return CreateAndroidInstanceImageOutcome
                 */
                CreateAndroidInstanceImageOutcome CreateAndroidInstanceImage(const Model::CreateAndroidInstanceImageRequest &request);
                void CreateAndroidInstanceImageAsync(const Model::CreateAndroidInstanceImageRequest& request, const CreateAndroidInstanceImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAndroidInstanceImageOutcomeCallable CreateAndroidInstanceImageCallable(const Model::CreateAndroidInstanceImageRequest& request);

                /**
                 *创建安卓实例标签
                 * @param req CreateAndroidInstanceLabelRequest
                 * @return CreateAndroidInstanceLabelOutcome
                 */
                CreateAndroidInstanceLabelOutcome CreateAndroidInstanceLabel(const Model::CreateAndroidInstanceLabelRequest &request);
                void CreateAndroidInstanceLabelAsync(const Model::CreateAndroidInstanceLabelRequest& request, const CreateAndroidInstanceLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAndroidInstanceLabelOutcomeCallable CreateAndroidInstanceLabelCallable(const Model::CreateAndroidInstanceLabelRequest& request);

                /**
                 *创建安卓实例 SSH 连接信息，请将返回结果的 PrivateKey 字段保存为 pem 文件，并将 pem 文件权限设置为 600，再参考返回结果的 ConnectCommand 使用 ssh 连接实例。
                 * @param req CreateAndroidInstanceSSHRequest
                 * @return CreateAndroidInstanceSSHOutcome
                 */
                CreateAndroidInstanceSSHOutcome CreateAndroidInstanceSSH(const Model::CreateAndroidInstanceSSHRequest &request);
                void CreateAndroidInstanceSSHAsync(const Model::CreateAndroidInstanceSSHRequest& request, const CreateAndroidInstanceSSHAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAndroidInstanceSSHOutcomeCallable CreateAndroidInstanceSSHCallable(const Model::CreateAndroidInstanceSSHRequest& request);

                /**
                 *创建安卓实例 WebShell 连接信息，返回的 ConnectUrl 可通过浏览器直接打开访问，链接有效期 1 小时，链接打开后可持续使用。
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
                 *创建安卓实例访问Token
                 * @param req CreateAndroidInstancesAccessTokenRequest
                 * @return CreateAndroidInstancesAccessTokenOutcome
                 */
                CreateAndroidInstancesAccessTokenOutcome CreateAndroidInstancesAccessToken(const Model::CreateAndroidInstancesAccessTokenRequest &request);
                void CreateAndroidInstancesAccessTokenAsync(const Model::CreateAndroidInstancesAccessTokenRequest& request, const CreateAndroidInstancesAccessTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAndroidInstancesAccessTokenOutcomeCallable CreateAndroidInstancesAccessTokenCallable(const Model::CreateAndroidInstancesAccessTokenRequest& request);

                /**
                 *安卓实例截图
                 * @param req CreateAndroidInstancesScreenshotRequest
                 * @return CreateAndroidInstancesScreenshotOutcome
                 */
                CreateAndroidInstancesScreenshotOutcome CreateAndroidInstancesScreenshot(const Model::CreateAndroidInstancesScreenshotRequest &request);
                void CreateAndroidInstancesScreenshotAsync(const Model::CreateAndroidInstancesScreenshotRequest& request, const CreateAndroidInstancesScreenshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAndroidInstancesScreenshotOutcomeCallable CreateAndroidInstancesScreenshotCallable(const Model::CreateAndroidInstancesScreenshotRequest& request);

                /**
                 *用于创建 Cos 临时密钥
                 * @param req CreateCosCredentialRequest
                 * @return CreateCosCredentialOutcome
                 */
                CreateCosCredentialOutcome CreateCosCredential(const Model::CreateCosCredentialRequest &request);
                void CreateCosCredentialAsync(const Model::CreateCosCredentialRequest& request, const CreateCosCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCosCredentialOutcomeCallable CreateCosCredentialCallable(const Model::CreateCosCredentialRequest& request);

                /**
                 *创建会话
                 * @param req CreateSessionRequest
                 * @return CreateSessionOutcome
                 */
                CreateSessionOutcome CreateSession(const Model::CreateSessionRequest &request);
                void CreateSessionAsync(const Model::CreateSessionRequest& request, const CreateSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSessionOutcomeCallable CreateSessionCallable(const Model::CreateSessionRequest& request);

                /**
                 *删除安卓应用
                 * @param req DeleteAndroidAppRequest
                 * @return DeleteAndroidAppOutcome
                 */
                DeleteAndroidAppOutcome DeleteAndroidApp(const Model::DeleteAndroidAppRequest &request);
                void DeleteAndroidAppAsync(const Model::DeleteAndroidAppRequest& request, const DeleteAndroidAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAndroidAppOutcomeCallable DeleteAndroidAppCallable(const Model::DeleteAndroidAppRequest& request);

                /**
                 *删除安卓应用版本
                 * @param req DeleteAndroidAppVersionRequest
                 * @return DeleteAndroidAppVersionOutcome
                 */
                DeleteAndroidAppVersionOutcome DeleteAndroidAppVersion(const Model::DeleteAndroidAppVersionRequest &request);
                void DeleteAndroidAppVersionAsync(const Model::DeleteAndroidAppVersionRequest& request, const DeleteAndroidAppVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAndroidAppVersionOutcomeCallable DeleteAndroidAppVersionCallable(const Model::DeleteAndroidAppVersionRequest& request);

                /**
                 *删除安卓实例备份文件
                 * @param req DeleteAndroidInstanceBackupFilesRequest
                 * @return DeleteAndroidInstanceBackupFilesOutcome
                 */
                DeleteAndroidInstanceBackupFilesOutcome DeleteAndroidInstanceBackupFiles(const Model::DeleteAndroidInstanceBackupFilesRequest &request);
                void DeleteAndroidInstanceBackupFilesAsync(const Model::DeleteAndroidInstanceBackupFilesRequest& request, const DeleteAndroidInstanceBackupFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAndroidInstanceBackupFilesOutcomeCallable DeleteAndroidInstanceBackupFilesCallable(const Model::DeleteAndroidInstanceBackupFilesRequest& request);

                /**
                 *批量删除安卓实例备份
                 * @param req DeleteAndroidInstanceBackupsRequest
                 * @return DeleteAndroidInstanceBackupsOutcome
                 */
                DeleteAndroidInstanceBackupsOutcome DeleteAndroidInstanceBackups(const Model::DeleteAndroidInstanceBackupsRequest &request);
                void DeleteAndroidInstanceBackupsAsync(const Model::DeleteAndroidInstanceBackupsRequest& request, const DeleteAndroidInstanceBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAndroidInstanceBackupsOutcomeCallable DeleteAndroidInstanceBackupsCallable(const Model::DeleteAndroidInstanceBackupsRequest& request);

                /**
                 *删除安卓实例镜像
                 * @param req DeleteAndroidInstanceImagesRequest
                 * @return DeleteAndroidInstanceImagesOutcome
                 */
                DeleteAndroidInstanceImagesOutcome DeleteAndroidInstanceImages(const Model::DeleteAndroidInstanceImagesRequest &request);
                void DeleteAndroidInstanceImagesAsync(const Model::DeleteAndroidInstanceImagesRequest& request, const DeleteAndroidInstanceImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAndroidInstanceImagesOutcomeCallable DeleteAndroidInstanceImagesCallable(const Model::DeleteAndroidInstanceImagesRequest& request);

                /**
                 *删除安卓实例标签
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
                 *查询安卓实例备份列表
                 * @param req DescribeAndroidInstanceBackupsRequest
                 * @return DescribeAndroidInstanceBackupsOutcome
                 */
                DescribeAndroidInstanceBackupsOutcome DescribeAndroidInstanceBackups(const Model::DescribeAndroidInstanceBackupsRequest &request);
                void DescribeAndroidInstanceBackupsAsync(const Model::DescribeAndroidInstanceBackupsRequest& request, const DescribeAndroidInstanceBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAndroidInstanceBackupsOutcomeCallable DescribeAndroidInstanceBackupsCallable(const Model::DescribeAndroidInstanceBackupsRequest& request);

                /**
                 *查询安卓实例镜像信息，当镜像的 AndroidInstanceImageState 为 NORMAL 时，镜像处于可用状态。
                 * @param req DescribeAndroidInstanceImagesRequest
                 * @return DescribeAndroidInstanceImagesOutcome
                 */
                DescribeAndroidInstanceImagesOutcome DescribeAndroidInstanceImages(const Model::DescribeAndroidInstanceImagesRequest &request);
                void DescribeAndroidInstanceImagesAsync(const Model::DescribeAndroidInstanceImagesRequest& request, const DescribeAndroidInstanceImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAndroidInstanceImagesOutcomeCallable DescribeAndroidInstanceImagesCallable(const Model::DescribeAndroidInstanceImagesRequest& request);

                /**
                 *查询安卓实例标签
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
                 *查询安卓实例黑名单
                 * @param req DescribeAndroidInstancesAppBlacklistRequest
                 * @return DescribeAndroidInstancesAppBlacklistOutcome
                 */
                DescribeAndroidInstancesAppBlacklistOutcome DescribeAndroidInstancesAppBlacklist(const Model::DescribeAndroidInstancesAppBlacklistRequest &request);
                void DescribeAndroidInstancesAppBlacklistAsync(const Model::DescribeAndroidInstancesAppBlacklistRequest& request, const DescribeAndroidInstancesAppBlacklistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAndroidInstancesAppBlacklistOutcomeCallable DescribeAndroidInstancesAppBlacklistCallable(const Model::DescribeAndroidInstancesAppBlacklistRequest& request);

                /**
                 *批量查询安装指定应用的安卓实例
                 * @param req DescribeAndroidInstancesByAppsRequest
                 * @return DescribeAndroidInstancesByAppsOutcome
                 */
                DescribeAndroidInstancesByAppsOutcome DescribeAndroidInstancesByApps(const Model::DescribeAndroidInstancesByAppsRequest &request);
                void DescribeAndroidInstancesByAppsAsync(const Model::DescribeAndroidInstancesByAppsRequest& request, const DescribeAndroidInstancesByAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAndroidInstancesByAppsOutcomeCallable DescribeAndroidInstancesByAppsCallable(const Model::DescribeAndroidInstancesByAppsRequest& request);

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
                 *批量禁用安卓实例应用
                 * @param req DisableAndroidInstancesAppRequest
                 * @return DisableAndroidInstancesAppOutcome
                 */
                DisableAndroidInstancesAppOutcome DisableAndroidInstancesApp(const Model::DisableAndroidInstancesAppRequest &request);
                void DisableAndroidInstancesAppAsync(const Model::DisableAndroidInstancesAppRequest& request, const DisableAndroidInstancesAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableAndroidInstancesAppOutcomeCallable DisableAndroidInstancesAppCallable(const Model::DisableAndroidInstancesAppRequest& request);

                /**
                 *断开安卓实例
                 * @param req DisconnectAndroidInstanceRequest
                 * @return DisconnectAndroidInstanceOutcome
                 */
                DisconnectAndroidInstanceOutcome DisconnectAndroidInstance(const Model::DisconnectAndroidInstanceRequest &request);
                void DisconnectAndroidInstanceAsync(const Model::DisconnectAndroidInstanceRequest& request, const DisconnectAndroidInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisconnectAndroidInstanceOutcomeCallable DisconnectAndroidInstanceCallable(const Model::DisconnectAndroidInstanceRequest& request);

                /**
                 *断开安卓实例加速节点
                 * @param req DisconnectAndroidInstanceAcceleratorRequest
                 * @return DisconnectAndroidInstanceAcceleratorOutcome
                 */
                DisconnectAndroidInstanceAcceleratorOutcome DisconnectAndroidInstanceAccelerator(const Model::DisconnectAndroidInstanceAcceleratorRequest &request);
                void DisconnectAndroidInstanceAcceleratorAsync(const Model::DisconnectAndroidInstanceAcceleratorRequest& request, const DisconnectAndroidInstanceAcceleratorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisconnectAndroidInstanceAcceleratorOutcomeCallable DisconnectAndroidInstanceAcceleratorCallable(const Model::DisconnectAndroidInstanceAcceleratorRequest& request);

                /**
                 *分发安卓实例镜像至宿主机
                 * @param req DistributeAndroidInstanceImageToHostsRequest
                 * @return DistributeAndroidInstanceImageToHostsOutcome
                 */
                DistributeAndroidInstanceImageToHostsOutcome DistributeAndroidInstanceImageToHosts(const Model::DistributeAndroidInstanceImageToHostsRequest &request);
                void DistributeAndroidInstanceImageToHostsAsync(const Model::DistributeAndroidInstanceImageToHostsRequest& request, const DistributeAndroidInstanceImageToHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DistributeAndroidInstanceImageToHostsOutcomeCallable DistributeAndroidInstanceImageToHostsCallable(const Model::DistributeAndroidInstanceImageToHostsRequest& request);

                /**
                 *将一个文件批量分发到多个实例，一次接口调用触发一次文件分发，一次文件分发只会从公网下载一次，然后文件会走内网分发到实例列表中的实例。
                 * @param req DistributeFileToAndroidInstancesRequest
                 * @return DistributeFileToAndroidInstancesOutcome
                 */
                DistributeFileToAndroidInstancesOutcome DistributeFileToAndroidInstances(const Model::DistributeFileToAndroidInstancesRequest &request);
                void DistributeFileToAndroidInstancesAsync(const Model::DistributeFileToAndroidInstancesRequest& request, const DistributeFileToAndroidInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DistributeFileToAndroidInstancesOutcomeCallable DistributeFileToAndroidInstancesCallable(const Model::DistributeFileToAndroidInstancesRequest& request);

                /**
                 *将一张照片批量分发到多个实例的相册中，一次接口调用触发一次照片分发，一次照片分发只会从公网下载一次，然后照片会走内网分发到实例列表中的实例。
                 * @param req DistributePhotoToAndroidInstancesRequest
                 * @return DistributePhotoToAndroidInstancesOutcome
                 */
                DistributePhotoToAndroidInstancesOutcome DistributePhotoToAndroidInstances(const Model::DistributePhotoToAndroidInstancesRequest &request);
                void DistributePhotoToAndroidInstancesAsync(const Model::DistributePhotoToAndroidInstancesRequest& request, const DistributePhotoToAndroidInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DistributePhotoToAndroidInstancesOutcomeCallable DistributePhotoToAndroidInstancesCallable(const Model::DistributePhotoToAndroidInstancesRequest& request);

                /**
                 *批量启用安卓实例应用
                 * @param req EnableAndroidInstancesAppRequest
                 * @return EnableAndroidInstancesAppOutcome
                 */
                EnableAndroidInstancesAppOutcome EnableAndroidInstancesApp(const Model::EnableAndroidInstancesAppRequest &request);
                void EnableAndroidInstancesAppAsync(const Model::EnableAndroidInstancesAppRequest& request, const EnableAndroidInstancesAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableAndroidInstancesAppOutcomeCallable EnableAndroidInstancesAppCallable(const Model::EnableAndroidInstancesAppRequest& request);

                /**
                 *在安卓实例上异步执行命令，命令输出结果如果内容过长会被截断
                 * @param req ExecuteCommandOnAndroidInstancesRequest
                 * @return ExecuteCommandOnAndroidInstancesOutcome
                 */
                ExecuteCommandOnAndroidInstancesOutcome ExecuteCommandOnAndroidInstances(const Model::ExecuteCommandOnAndroidInstancesRequest &request);
                void ExecuteCommandOnAndroidInstancesAsync(const Model::ExecuteCommandOnAndroidInstancesRequest& request, const ExecuteCommandOnAndroidInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExecuteCommandOnAndroidInstancesOutcomeCallable ExecuteCommandOnAndroidInstancesCallable(const Model::ExecuteCommandOnAndroidInstancesRequest& request);

                /**
                 *批量将实例的 logcat 日志文件上传到您已授权的 COS bucket 中，授权 COS bucket 请在控制台中操作。
                 * @param req FetchAndroidInstancesLogsRequest
                 * @return FetchAndroidInstancesLogsOutcome
                 */
                FetchAndroidInstancesLogsOutcome FetchAndroidInstancesLogs(const Model::FetchAndroidInstancesLogsRequest &request);
                void FetchAndroidInstancesLogsAsync(const Model::FetchAndroidInstancesLogsRequest& request, const FetchAndroidInstancesLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FetchAndroidInstancesLogsOutcomeCallable FetchAndroidInstancesLogsCallable(const Model::FetchAndroidInstancesLogsRequest& request);

                /**
                 *导入安卓实例镜像，当镜像的 AndroidInstanceImageState 为 NORMAL 时，镜像导入完成处于可用状态。
                 * @param req ImportAndroidInstanceImageRequest
                 * @return ImportAndroidInstanceImageOutcome
                 */
                ImportAndroidInstanceImageOutcome ImportAndroidInstanceImage(const Model::ImportAndroidInstanceImageRequest &request);
                void ImportAndroidInstanceImageAsync(const Model::ImportAndroidInstanceImageRequest& request, const ImportAndroidInstanceImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImportAndroidInstanceImageOutcomeCallable ImportAndroidInstanceImageCallable(const Model::ImportAndroidInstanceImageRequest& request);

                /**
                 *安装安卓实例应用
                 * @param req InstallAndroidInstancesAppRequest
                 * @return InstallAndroidInstancesAppOutcome
                 */
                InstallAndroidInstancesAppOutcome InstallAndroidInstancesApp(const Model::InstallAndroidInstancesAppRequest &request);
                void InstallAndroidInstancesAppAsync(const Model::InstallAndroidInstancesAppRequest& request, const InstallAndroidInstancesAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InstallAndroidInstancesAppOutcomeCallable InstallAndroidInstancesAppCallable(const Model::InstallAndroidInstancesAppRequest& request);

                /**
                 *通过 URL 安装安卓实例应用
                 * @param req InstallAndroidInstancesAppWithURLRequest
                 * @return InstallAndroidInstancesAppWithURLOutcome
                 */
                InstallAndroidInstancesAppWithURLOutcome InstallAndroidInstancesAppWithURL(const Model::InstallAndroidInstancesAppWithURLRequest &request);
                void InstallAndroidInstancesAppWithURLAsync(const Model::InstallAndroidInstancesAppWithURLRequest& request, const InstallAndroidInstancesAppWithURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InstallAndroidInstancesAppWithURLOutcomeCallable InstallAndroidInstancesAppWithURLCallable(const Model::InstallAndroidInstancesAppWithURLRequest& request);

                /**
                 *修改安卓应用信息
                 * @param req ModifyAndroidAppRequest
                 * @return ModifyAndroidAppOutcome
                 */
                ModifyAndroidAppOutcome ModifyAndroidApp(const Model::ModifyAndroidAppRequest &request);
                void ModifyAndroidAppAsync(const Model::ModifyAndroidAppRequest& request, const ModifyAndroidAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAndroidAppOutcomeCallable ModifyAndroidAppCallable(const Model::ModifyAndroidAppRequest& request);

                /**
                 *修改安卓应用版本
                 * @param req ModifyAndroidAppVersionRequest
                 * @return ModifyAndroidAppVersionOutcome
                 */
                ModifyAndroidAppVersionOutcome ModifyAndroidAppVersion(const Model::ModifyAndroidAppVersionRequest &request);
                void ModifyAndroidAppVersionAsync(const Model::ModifyAndroidAppVersionRequest& request, const ModifyAndroidAppVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAndroidAppVersionOutcomeCallable ModifyAndroidAppVersionCallable(const Model::ModifyAndroidAppVersionRequest& request);

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
                 *修改安卓实例应用黑名单
                 * @param req ModifyAndroidInstancesAppBlacklistRequest
                 * @return ModifyAndroidInstancesAppBlacklistOutcome
                 */
                ModifyAndroidInstancesAppBlacklistOutcome ModifyAndroidInstancesAppBlacklist(const Model::ModifyAndroidInstancesAppBlacklistRequest &request);
                void ModifyAndroidInstancesAppBlacklistAsync(const Model::ModifyAndroidInstancesAppBlacklistRequest& request, const ModifyAndroidInstancesAppBlacklistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAndroidInstancesAppBlacklistOutcomeCallable ModifyAndroidInstancesAppBlacklistCallable(const Model::ModifyAndroidInstancesAppBlacklistRequest& request);

                /**
                 *批量修改安卓实例信息
                 * @param req ModifyAndroidInstancesInformationRequest
                 * @return ModifyAndroidInstancesInformationOutcome
                 */
                ModifyAndroidInstancesInformationOutcome ModifyAndroidInstancesInformation(const Model::ModifyAndroidInstancesInformationRequest &request);
                void ModifyAndroidInstancesInformationAsync(const Model::ModifyAndroidInstancesInformationRequest& request, const ModifyAndroidInstancesInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAndroidInstancesInformationOutcomeCallable ModifyAndroidInstancesInformationCallable(const Model::ModifyAndroidInstancesInformationRequest& request);

                /**
                 *批量修改安卓实例的标签
                 * @param req ModifyAndroidInstancesLabelsRequest
                 * @return ModifyAndroidInstancesLabelsOutcome
                 */
                ModifyAndroidInstancesLabelsOutcome ModifyAndroidInstancesLabels(const Model::ModifyAndroidInstancesLabelsRequest &request);
                void ModifyAndroidInstancesLabelsAsync(const Model::ModifyAndroidInstancesLabelsRequest& request, const ModifyAndroidInstancesLabelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAndroidInstancesLabelsOutcomeCallable ModifyAndroidInstancesLabelsCallable(const Model::ModifyAndroidInstancesLabelsRequest& request);

                /**
                 *批量修改安卓实例属性
                 * @param req ModifyAndroidInstancesPropertiesRequest
                 * @return ModifyAndroidInstancesPropertiesOutcome
                 */
                ModifyAndroidInstancesPropertiesOutcome ModifyAndroidInstancesProperties(const Model::ModifyAndroidInstancesPropertiesRequest &request);
                void ModifyAndroidInstancesPropertiesAsync(const Model::ModifyAndroidInstancesPropertiesRequest& request, const ModifyAndroidInstancesPropertiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAndroidInstancesPropertiesOutcomeCallable ModifyAndroidInstancesPropertiesCallable(const Model::ModifyAndroidInstancesPropertiesRequest& request);

                /**
                 *修改安卓实例分辨率。需要注意的是该接口需要重启才能生效。
                 * @param req ModifyAndroidInstancesResolutionRequest
                 * @return ModifyAndroidInstancesResolutionOutcome
                 */
                ModifyAndroidInstancesResolutionOutcome ModifyAndroidInstancesResolution(const Model::ModifyAndroidInstancesResolutionRequest &request);
                void ModifyAndroidInstancesResolutionAsync(const Model::ModifyAndroidInstancesResolutionRequest& request, const ModifyAndroidInstancesResolutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAndroidInstancesResolutionOutcomeCallable ModifyAndroidInstancesResolutionCallable(const Model::ModifyAndroidInstancesResolutionRequest& request);

                /**
                 *批量修改安卓实例资源限制
                 * @param req ModifyAndroidInstancesResourcesRequest
                 * @return ModifyAndroidInstancesResourcesOutcome
                 */
                ModifyAndroidInstancesResourcesOutcome ModifyAndroidInstancesResources(const Model::ModifyAndroidInstancesResourcesRequest &request);
                void ModifyAndroidInstancesResourcesAsync(const Model::ModifyAndroidInstancesResourcesRequest& request, const ModifyAndroidInstancesResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAndroidInstancesResourcesOutcomeCallable ModifyAndroidInstancesResourcesCallable(const Model::ModifyAndroidInstancesResourcesRequest& request);

                /**
                 *批量修改安卓实例的用户ID
                 * @param req ModifyAndroidInstancesUserIdRequest
                 * @return ModifyAndroidInstancesUserIdOutcome
                 */
                ModifyAndroidInstancesUserIdOutcome ModifyAndroidInstancesUserId(const Model::ModifyAndroidInstancesUserIdRequest &request);
                void ModifyAndroidInstancesUserIdAsync(const Model::ModifyAndroidInstancesUserIdRequest& request, const ModifyAndroidInstancesUserIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAndroidInstancesUserIdOutcomeCallable ModifyAndroidInstancesUserIdCallable(const Model::ModifyAndroidInstancesUserIdRequest& request);

                /**
                 *重启安卓实例宿主机。请注意：

- 当前每 15 分钟只能重启一次
- 一个宿主机可能有多个云手机实例，重启宿主机会影响运行在上面的所有实例，请确保该宿主机上的所有云手机实例未投入业务使用
                 * @param req RebootAndroidInstanceHostsRequest
                 * @return RebootAndroidInstanceHostsOutcome
                 */
                RebootAndroidInstanceHostsOutcome RebootAndroidInstanceHosts(const Model::RebootAndroidInstanceHostsRequest &request);
                void RebootAndroidInstanceHostsAsync(const Model::RebootAndroidInstanceHostsRequest& request, const RebootAndroidInstanceHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RebootAndroidInstanceHostsOutcomeCallable RebootAndroidInstanceHostsCallable(const Model::RebootAndroidInstanceHostsRequest& request);

                /**
                 *重启安卓实例
                 * @param req RebootAndroidInstancesRequest
                 * @return RebootAndroidInstancesOutcome
                 */
                RebootAndroidInstancesOutcome RebootAndroidInstances(const Model::RebootAndroidInstancesRequest &request);
                void RebootAndroidInstancesAsync(const Model::RebootAndroidInstancesRequest& request, const RebootAndroidInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RebootAndroidInstancesOutcomeCallable RebootAndroidInstancesCallable(const Model::RebootAndroidInstancesRequest& request);

                /**
                 *续期安卓实例访问Token
                 * @param req RenewAndroidInstancesAccessTokenRequest
                 * @return RenewAndroidInstancesAccessTokenOutcome
                 */
                RenewAndroidInstancesAccessTokenOutcome RenewAndroidInstancesAccessToken(const Model::RenewAndroidInstancesAccessTokenRequest &request);
                void RenewAndroidInstancesAccessTokenAsync(const Model::RenewAndroidInstancesAccessTokenRequest& request, const RenewAndroidInstancesAccessTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewAndroidInstancesAccessTokenOutcomeCallable RenewAndroidInstancesAccessTokenCallable(const Model::RenewAndroidInstancesAccessTokenRequest& request);

                /**
                 *重置安卓实例
                 * @param req ResetAndroidInstancesRequest
                 * @return ResetAndroidInstancesOutcome
                 */
                ResetAndroidInstancesOutcome ResetAndroidInstances(const Model::ResetAndroidInstancesRequest &request);
                void ResetAndroidInstancesAsync(const Model::ResetAndroidInstancesRequest& request, const ResetAndroidInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetAndroidInstancesOutcomeCallable ResetAndroidInstancesCallable(const Model::ResetAndroidInstancesRequest& request);

                /**
                 *重启安卓实例应用
                 * @param req RestartAndroidInstancesAppRequest
                 * @return RestartAndroidInstancesAppOutcome
                 */
                RestartAndroidInstancesAppOutcome RestartAndroidInstancesApp(const Model::RestartAndroidInstancesAppRequest &request);
                void RestartAndroidInstancesAppAsync(const Model::RestartAndroidInstancesAppRequest& request, const RestartAndroidInstancesAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestartAndroidInstancesAppOutcomeCallable RestartAndroidInstancesAppCallable(const Model::RestartAndroidInstancesAppRequest& request);

                /**
                 *还原安卓实例。该接口需要联系我们开通内网存储才能使用。
                 * @param req RestoreAndroidInstanceRequest
                 * @return RestoreAndroidInstanceOutcome
                 */
                RestoreAndroidInstanceOutcome RestoreAndroidInstance(const Model::RestoreAndroidInstanceRequest &request);
                void RestoreAndroidInstanceAsync(const Model::RestoreAndroidInstanceRequest& request, const RestoreAndroidInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestoreAndroidInstanceOutcomeCallable RestoreAndroidInstanceCallable(const Model::RestoreAndroidInstanceRequest& request);

                /**
                 *使用指定存储数据还原云手机，支持 COS 和兼容 AWS S3 协议的对象存储服务。如果还原数据来自 COS 时，会使用公网流量，授权 COS bucket 请在控制台中操作。
                 * @param req RestoreAndroidInstanceFromStorageRequest
                 * @return RestoreAndroidInstanceFromStorageOutcome
                 */
                RestoreAndroidInstanceFromStorageOutcome RestoreAndroidInstanceFromStorage(const Model::RestoreAndroidInstanceFromStorageRequest &request);
                void RestoreAndroidInstanceFromStorageAsync(const Model::RestoreAndroidInstanceFromStorageRequest& request, const RestoreAndroidInstanceFromStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestoreAndroidInstanceFromStorageOutcomeCallable RestoreAndroidInstanceFromStorageCallable(const Model::RestoreAndroidInstanceFromStorageRequest& request);

                /**
                 *保存游戏存档
                 * @param req SaveGameArchiveRequest
                 * @return SaveGameArchiveOutcome
                 */
                SaveGameArchiveOutcome SaveGameArchive(const Model::SaveGameArchiveRequest &request);
                void SaveGameArchiveAsync(const Model::SaveGameArchiveRequest& request, const SaveGameArchiveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SaveGameArchiveOutcomeCallable SaveGameArchiveCallable(const Model::SaveGameArchiveRequest& request);

                /**
                 *批量设置安卓实例应用后台保活，开启应用保活，只是降低应用被杀死或回收的优先级，并不能保证应用不会被杀死或回收（如出现内存不足等资源限制时，应用也有概率被杀死或回收）
                 * @param req SetAndroidInstancesBGAppKeepAliveRequest
                 * @return SetAndroidInstancesBGAppKeepAliveOutcome
                 */
                SetAndroidInstancesBGAppKeepAliveOutcome SetAndroidInstancesBGAppKeepAlive(const Model::SetAndroidInstancesBGAppKeepAliveRequest &request);
                void SetAndroidInstancesBGAppKeepAliveAsync(const Model::SetAndroidInstancesBGAppKeepAliveRequest& request, const SetAndroidInstancesBGAppKeepAliveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetAndroidInstancesBGAppKeepAliveOutcomeCallable SetAndroidInstancesBGAppKeepAliveCallable(const Model::SetAndroidInstancesBGAppKeepAliveRequest& request);

                /**
                 *批量设置安卓实例应用前台保活，开启应用保活，只是降低应用被杀死或回收的优先级，并不能保证应用不会被杀死或回收（如出现内存不足等资源限制时，应用也有概率被杀死或回收）
                 * @param req SetAndroidInstancesFGAppKeepAliveRequest
                 * @return SetAndroidInstancesFGAppKeepAliveOutcome
                 */
                SetAndroidInstancesFGAppKeepAliveOutcome SetAndroidInstancesFGAppKeepAlive(const Model::SetAndroidInstancesFGAppKeepAliveRequest &request);
                void SetAndroidInstancesFGAppKeepAliveAsync(const Model::SetAndroidInstancesFGAppKeepAliveRequest& request, const SetAndroidInstancesFGAppKeepAliveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetAndroidInstancesFGAppKeepAliveOutcomeCallable SetAndroidInstancesFGAppKeepAliveCallable(const Model::SetAndroidInstancesFGAppKeepAliveRequest& request);

                /**
                 *开机安卓实例
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
                 *关机安卓实例
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
                 *同步安卓实例镜像到其他区域，当镜像的 AndroidInstanceImageState 为 NORMAL 时，镜像已经同步完成处于可用状态。
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
                 *将文件下载到指定实例列表的实例上，每个实例都会从公网下载文件。如果您需要将同一个文件分发到多个实例，建议使用 DistributeFileToAndroidInstances 接口减少公网下载的流量。如果您需要将不同的文件下载到不同的实例，可考虑使用 UploadFilesToAndroidInstances 接口批量将不同文件下载到不同的实例。
                 * @param req UploadFileToAndroidInstancesRequest
                 * @return UploadFileToAndroidInstancesOutcome
                 */
                UploadFileToAndroidInstancesOutcome UploadFileToAndroidInstances(const Model::UploadFileToAndroidInstancesRequest &request);
                void UploadFileToAndroidInstancesAsync(const Model::UploadFileToAndroidInstancesRequest& request, const UploadFileToAndroidInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadFileToAndroidInstancesOutcomeCallable UploadFileToAndroidInstancesCallable(const Model::UploadFileToAndroidInstancesRequest& request);

                /**
                 *批量将不同的文件下载到不同的实例，每个实例下载文件都是从公网下载，建议只用在文件下载使用一次的场景。如果您需要将同一个文件分发到不同实例，建议使用 DistributeFileToAndroidInstances 接口。
                 * @param req UploadFilesToAndroidInstancesRequest
                 * @return UploadFilesToAndroidInstancesOutcome
                 */
                UploadFilesToAndroidInstancesOutcome UploadFilesToAndroidInstances(const Model::UploadFilesToAndroidInstancesRequest &request);
                void UploadFilesToAndroidInstancesAsync(const Model::UploadFilesToAndroidInstancesRequest& request, const UploadFilesToAndroidInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadFilesToAndroidInstancesOutcomeCallable UploadFilesToAndroidInstancesCallable(const Model::UploadFilesToAndroidInstancesRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_GSCLIENT_H_
