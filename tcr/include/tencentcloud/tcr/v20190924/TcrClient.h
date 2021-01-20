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

#ifndef TENCENTCLOUD_TCR_V20190924_TCRCLIENT_H_
#define TENCENTCLOUD_TCR_V20190924_TCRCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tcr/v20190924/model/BatchDeleteImagePersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/BatchDeleteImagePersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/BatchDeleteRepositoryPersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/BatchDeleteRepositoryPersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/CheckInstanceNameRequest.h>
#include <tencentcloud/tcr/v20190924/model/CheckInstanceNameResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateApplicationTriggerPersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateApplicationTriggerPersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateImageLifecyclePersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateImageLifecyclePersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateInstanceRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateInstanceResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateInstanceTokenRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateInstanceTokenResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateNamespaceRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateNamespaceResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateNamespacePersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateNamespacePersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateRepositoryRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateRepositoryResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateRepositoryPersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateRepositoryPersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateUserPersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateUserPersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateWebhookTriggerRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateWebhookTriggerResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteApplicationTriggerPersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteApplicationTriggerPersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteImageRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteImageResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteImageLifecycleGlobalPersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteImageLifecycleGlobalPersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteImageLifecyclePersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteImageLifecyclePersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteImagePersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteImagePersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteInstanceRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteInstanceResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteInstanceTokenRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteInstanceTokenResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteNamespaceRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteNamespaceResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteNamespacePersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteNamespacePersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteRepositoryRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteRepositoryResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteRepositoryPersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteRepositoryPersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteWebhookTriggerRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteWebhookTriggerResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeApplicationTriggerLogPersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeApplicationTriggerLogPersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeApplicationTriggerPersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeApplicationTriggerPersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeFavorRepositoryPersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeFavorRepositoryPersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeImageFilterPersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeImageFilterPersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeImageLifecycleGlobalPersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeImageLifecycleGlobalPersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeImageLifecyclePersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeImageLifecyclePersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeImageManifestsRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeImageManifestsResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeImagePersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeImagePersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeImagesRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeImagesResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeInstanceStatusRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeInstanceStatusResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeInstanceTokenRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeInstanceTokenResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeInstancesRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeInstancesResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeInternalEndpointsRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeInternalEndpointsResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeNamespacePersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeNamespacePersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeNamespacesRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeNamespacesResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeReplicationInstanceCreateTasksRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeReplicationInstanceCreateTasksResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeReplicationInstancesRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeReplicationInstancesResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeRepositoriesRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeRepositoriesResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeRepositoryFilterPersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeRepositoryFilterPersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeRepositoryOwnerPersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeRepositoryOwnerPersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeRepositoryPersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeRepositoryPersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeUserQuotaPersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeUserQuotaPersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeWebhookTriggerRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeWebhookTriggerResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeWebhookTriggerLogRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeWebhookTriggerLogResponse.h>
#include <tencentcloud/tcr/v20190924/model/DuplicateImagePersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/DuplicateImagePersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/ManageImageLifecycleGlobalPersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/ManageImageLifecycleGlobalPersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/ManageInternalEndpointRequest.h>
#include <tencentcloud/tcr/v20190924/model/ManageInternalEndpointResponse.h>
#include <tencentcloud/tcr/v20190924/model/ModifyApplicationTriggerPersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/ModifyApplicationTriggerPersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/ModifyInstanceTokenRequest.h>
#include <tencentcloud/tcr/v20190924/model/ModifyInstanceTokenResponse.h>
#include <tencentcloud/tcr/v20190924/model/ModifyNamespaceRequest.h>
#include <tencentcloud/tcr/v20190924/model/ModifyNamespaceResponse.h>
#include <tencentcloud/tcr/v20190924/model/ModifyRepositoryRequest.h>
#include <tencentcloud/tcr/v20190924/model/ModifyRepositoryResponse.h>
#include <tencentcloud/tcr/v20190924/model/ModifyRepositoryAccessPersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/ModifyRepositoryAccessPersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/ModifyRepositoryInfoPersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/ModifyRepositoryInfoPersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/ModifyUserPasswordPersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/ModifyUserPasswordPersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/ModifyWebhookTriggerRequest.h>
#include <tencentcloud/tcr/v20190924/model/ModifyWebhookTriggerResponse.h>
#include <tencentcloud/tcr/v20190924/model/RenewInstanceRequest.h>
#include <tencentcloud/tcr/v20190924/model/RenewInstanceResponse.h>
#include <tencentcloud/tcr/v20190924/model/ValidateNamespaceExistPersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/ValidateNamespaceExistPersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/ValidateRepositoryExistPersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/ValidateRepositoryExistPersonalResponse.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            class TcrClient : public AbstractClient
            {
            public:
                TcrClient(const Credential &credential, const std::string &region);
                TcrClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::BatchDeleteImagePersonalResponse> BatchDeleteImagePersonalOutcome;
                typedef std::future<BatchDeleteImagePersonalOutcome> BatchDeleteImagePersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::BatchDeleteImagePersonalRequest&, BatchDeleteImagePersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeleteImagePersonalAsyncHandler;
                typedef Outcome<Error, Model::BatchDeleteRepositoryPersonalResponse> BatchDeleteRepositoryPersonalOutcome;
                typedef std::future<BatchDeleteRepositoryPersonalOutcome> BatchDeleteRepositoryPersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::BatchDeleteRepositoryPersonalRequest&, BatchDeleteRepositoryPersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeleteRepositoryPersonalAsyncHandler;
                typedef Outcome<Error, Model::CheckInstanceNameResponse> CheckInstanceNameOutcome;
                typedef std::future<CheckInstanceNameOutcome> CheckInstanceNameOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CheckInstanceNameRequest&, CheckInstanceNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckInstanceNameAsyncHandler;
                typedef Outcome<Error, Model::CreateApplicationTriggerPersonalResponse> CreateApplicationTriggerPersonalOutcome;
                typedef std::future<CreateApplicationTriggerPersonalOutcome> CreateApplicationTriggerPersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateApplicationTriggerPersonalRequest&, CreateApplicationTriggerPersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationTriggerPersonalAsyncHandler;
                typedef Outcome<Error, Model::CreateImageLifecyclePersonalResponse> CreateImageLifecyclePersonalOutcome;
                typedef std::future<CreateImageLifecyclePersonalOutcome> CreateImageLifecyclePersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateImageLifecyclePersonalRequest&, CreateImageLifecyclePersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageLifecyclePersonalAsyncHandler;
                typedef Outcome<Error, Model::CreateInstanceResponse> CreateInstanceOutcome;
                typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateInstanceRequest&, CreateInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAsyncHandler;
                typedef Outcome<Error, Model::CreateInstanceTokenResponse> CreateInstanceTokenOutcome;
                typedef std::future<CreateInstanceTokenOutcome> CreateInstanceTokenOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateInstanceTokenRequest&, CreateInstanceTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceTokenAsyncHandler;
                typedef Outcome<Error, Model::CreateNamespaceResponse> CreateNamespaceOutcome;
                typedef std::future<CreateNamespaceOutcome> CreateNamespaceOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateNamespaceRequest&, CreateNamespaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNamespaceAsyncHandler;
                typedef Outcome<Error, Model::CreateNamespacePersonalResponse> CreateNamespacePersonalOutcome;
                typedef std::future<CreateNamespacePersonalOutcome> CreateNamespacePersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateNamespacePersonalRequest&, CreateNamespacePersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNamespacePersonalAsyncHandler;
                typedef Outcome<Error, Model::CreateRepositoryResponse> CreateRepositoryOutcome;
                typedef std::future<CreateRepositoryOutcome> CreateRepositoryOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateRepositoryRequest&, CreateRepositoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRepositoryAsyncHandler;
                typedef Outcome<Error, Model::CreateRepositoryPersonalResponse> CreateRepositoryPersonalOutcome;
                typedef std::future<CreateRepositoryPersonalOutcome> CreateRepositoryPersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateRepositoryPersonalRequest&, CreateRepositoryPersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRepositoryPersonalAsyncHandler;
                typedef Outcome<Error, Model::CreateUserPersonalResponse> CreateUserPersonalOutcome;
                typedef std::future<CreateUserPersonalOutcome> CreateUserPersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateUserPersonalRequest&, CreateUserPersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserPersonalAsyncHandler;
                typedef Outcome<Error, Model::CreateWebhookTriggerResponse> CreateWebhookTriggerOutcome;
                typedef std::future<CreateWebhookTriggerOutcome> CreateWebhookTriggerOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateWebhookTriggerRequest&, CreateWebhookTriggerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWebhookTriggerAsyncHandler;
                typedef Outcome<Error, Model::DeleteApplicationTriggerPersonalResponse> DeleteApplicationTriggerPersonalOutcome;
                typedef std::future<DeleteApplicationTriggerPersonalOutcome> DeleteApplicationTriggerPersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteApplicationTriggerPersonalRequest&, DeleteApplicationTriggerPersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApplicationTriggerPersonalAsyncHandler;
                typedef Outcome<Error, Model::DeleteImageResponse> DeleteImageOutcome;
                typedef std::future<DeleteImageOutcome> DeleteImageOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteImageRequest&, DeleteImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageAsyncHandler;
                typedef Outcome<Error, Model::DeleteImageLifecycleGlobalPersonalResponse> DeleteImageLifecycleGlobalPersonalOutcome;
                typedef std::future<DeleteImageLifecycleGlobalPersonalOutcome> DeleteImageLifecycleGlobalPersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteImageLifecycleGlobalPersonalRequest&, DeleteImageLifecycleGlobalPersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageLifecycleGlobalPersonalAsyncHandler;
                typedef Outcome<Error, Model::DeleteImageLifecyclePersonalResponse> DeleteImageLifecyclePersonalOutcome;
                typedef std::future<DeleteImageLifecyclePersonalOutcome> DeleteImageLifecyclePersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteImageLifecyclePersonalRequest&, DeleteImageLifecyclePersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageLifecyclePersonalAsyncHandler;
                typedef Outcome<Error, Model::DeleteImagePersonalResponse> DeleteImagePersonalOutcome;
                typedef std::future<DeleteImagePersonalOutcome> DeleteImagePersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteImagePersonalRequest&, DeleteImagePersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImagePersonalAsyncHandler;
                typedef Outcome<Error, Model::DeleteInstanceResponse> DeleteInstanceOutcome;
                typedef std::future<DeleteInstanceOutcome> DeleteInstanceOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteInstanceRequest&, DeleteInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInstanceAsyncHandler;
                typedef Outcome<Error, Model::DeleteInstanceTokenResponse> DeleteInstanceTokenOutcome;
                typedef std::future<DeleteInstanceTokenOutcome> DeleteInstanceTokenOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteInstanceTokenRequest&, DeleteInstanceTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInstanceTokenAsyncHandler;
                typedef Outcome<Error, Model::DeleteNamespaceResponse> DeleteNamespaceOutcome;
                typedef std::future<DeleteNamespaceOutcome> DeleteNamespaceOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteNamespaceRequest&, DeleteNamespaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNamespaceAsyncHandler;
                typedef Outcome<Error, Model::DeleteNamespacePersonalResponse> DeleteNamespacePersonalOutcome;
                typedef std::future<DeleteNamespacePersonalOutcome> DeleteNamespacePersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteNamespacePersonalRequest&, DeleteNamespacePersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNamespacePersonalAsyncHandler;
                typedef Outcome<Error, Model::DeleteRepositoryResponse> DeleteRepositoryOutcome;
                typedef std::future<DeleteRepositoryOutcome> DeleteRepositoryOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteRepositoryRequest&, DeleteRepositoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRepositoryAsyncHandler;
                typedef Outcome<Error, Model::DeleteRepositoryPersonalResponse> DeleteRepositoryPersonalOutcome;
                typedef std::future<DeleteRepositoryPersonalOutcome> DeleteRepositoryPersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteRepositoryPersonalRequest&, DeleteRepositoryPersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRepositoryPersonalAsyncHandler;
                typedef Outcome<Error, Model::DeleteWebhookTriggerResponse> DeleteWebhookTriggerOutcome;
                typedef std::future<DeleteWebhookTriggerOutcome> DeleteWebhookTriggerOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteWebhookTriggerRequest&, DeleteWebhookTriggerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWebhookTriggerAsyncHandler;
                typedef Outcome<Error, Model::DescribeApplicationTriggerLogPersonalResponse> DescribeApplicationTriggerLogPersonalOutcome;
                typedef std::future<DescribeApplicationTriggerLogPersonalOutcome> DescribeApplicationTriggerLogPersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeApplicationTriggerLogPersonalRequest&, DescribeApplicationTriggerLogPersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationTriggerLogPersonalAsyncHandler;
                typedef Outcome<Error, Model::DescribeApplicationTriggerPersonalResponse> DescribeApplicationTriggerPersonalOutcome;
                typedef std::future<DescribeApplicationTriggerPersonalOutcome> DescribeApplicationTriggerPersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeApplicationTriggerPersonalRequest&, DescribeApplicationTriggerPersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationTriggerPersonalAsyncHandler;
                typedef Outcome<Error, Model::DescribeFavorRepositoryPersonalResponse> DescribeFavorRepositoryPersonalOutcome;
                typedef std::future<DescribeFavorRepositoryPersonalOutcome> DescribeFavorRepositoryPersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeFavorRepositoryPersonalRequest&, DescribeFavorRepositoryPersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFavorRepositoryPersonalAsyncHandler;
                typedef Outcome<Error, Model::DescribeImageFilterPersonalResponse> DescribeImageFilterPersonalOutcome;
                typedef std::future<DescribeImageFilterPersonalOutcome> DescribeImageFilterPersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeImageFilterPersonalRequest&, DescribeImageFilterPersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageFilterPersonalAsyncHandler;
                typedef Outcome<Error, Model::DescribeImageLifecycleGlobalPersonalResponse> DescribeImageLifecycleGlobalPersonalOutcome;
                typedef std::future<DescribeImageLifecycleGlobalPersonalOutcome> DescribeImageLifecycleGlobalPersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeImageLifecycleGlobalPersonalRequest&, DescribeImageLifecycleGlobalPersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageLifecycleGlobalPersonalAsyncHandler;
                typedef Outcome<Error, Model::DescribeImageLifecyclePersonalResponse> DescribeImageLifecyclePersonalOutcome;
                typedef std::future<DescribeImageLifecyclePersonalOutcome> DescribeImageLifecyclePersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeImageLifecyclePersonalRequest&, DescribeImageLifecyclePersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageLifecyclePersonalAsyncHandler;
                typedef Outcome<Error, Model::DescribeImageManifestsResponse> DescribeImageManifestsOutcome;
                typedef std::future<DescribeImageManifestsOutcome> DescribeImageManifestsOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeImageManifestsRequest&, DescribeImageManifestsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageManifestsAsyncHandler;
                typedef Outcome<Error, Model::DescribeImagePersonalResponse> DescribeImagePersonalOutcome;
                typedef std::future<DescribeImagePersonalOutcome> DescribeImagePersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeImagePersonalRequest&, DescribeImagePersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImagePersonalAsyncHandler;
                typedef Outcome<Error, Model::DescribeImagesResponse> DescribeImagesOutcome;
                typedef std::future<DescribeImagesOutcome> DescribeImagesOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeImagesRequest&, DescribeImagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImagesAsyncHandler;
                typedef Outcome<Error, Model::DescribeInstanceStatusResponse> DescribeInstanceStatusOutcome;
                typedef std::future<DescribeInstanceStatusOutcome> DescribeInstanceStatusOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeInstanceStatusRequest&, DescribeInstanceStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceStatusAsyncHandler;
                typedef Outcome<Error, Model::DescribeInstanceTokenResponse> DescribeInstanceTokenOutcome;
                typedef std::future<DescribeInstanceTokenOutcome> DescribeInstanceTokenOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeInstanceTokenRequest&, DescribeInstanceTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceTokenAsyncHandler;
                typedef Outcome<Error, Model::DescribeInstancesResponse> DescribeInstancesOutcome;
                typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeInstancesRequest&, DescribeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
                typedef Outcome<Error, Model::DescribeInternalEndpointsResponse> DescribeInternalEndpointsOutcome;
                typedef std::future<DescribeInternalEndpointsOutcome> DescribeInternalEndpointsOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeInternalEndpointsRequest&, DescribeInternalEndpointsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInternalEndpointsAsyncHandler;
                typedef Outcome<Error, Model::DescribeNamespacePersonalResponse> DescribeNamespacePersonalOutcome;
                typedef std::future<DescribeNamespacePersonalOutcome> DescribeNamespacePersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeNamespacePersonalRequest&, DescribeNamespacePersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNamespacePersonalAsyncHandler;
                typedef Outcome<Error, Model::DescribeNamespacesResponse> DescribeNamespacesOutcome;
                typedef std::future<DescribeNamespacesOutcome> DescribeNamespacesOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeNamespacesRequest&, DescribeNamespacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNamespacesAsyncHandler;
                typedef Outcome<Error, Model::DescribeReplicationInstanceCreateTasksResponse> DescribeReplicationInstanceCreateTasksOutcome;
                typedef std::future<DescribeReplicationInstanceCreateTasksOutcome> DescribeReplicationInstanceCreateTasksOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeReplicationInstanceCreateTasksRequest&, DescribeReplicationInstanceCreateTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReplicationInstanceCreateTasksAsyncHandler;
                typedef Outcome<Error, Model::DescribeReplicationInstancesResponse> DescribeReplicationInstancesOutcome;
                typedef std::future<DescribeReplicationInstancesOutcome> DescribeReplicationInstancesOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeReplicationInstancesRequest&, DescribeReplicationInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReplicationInstancesAsyncHandler;
                typedef Outcome<Error, Model::DescribeRepositoriesResponse> DescribeRepositoriesOutcome;
                typedef std::future<DescribeRepositoriesOutcome> DescribeRepositoriesOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeRepositoriesRequest&, DescribeRepositoriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRepositoriesAsyncHandler;
                typedef Outcome<Error, Model::DescribeRepositoryFilterPersonalResponse> DescribeRepositoryFilterPersonalOutcome;
                typedef std::future<DescribeRepositoryFilterPersonalOutcome> DescribeRepositoryFilterPersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeRepositoryFilterPersonalRequest&, DescribeRepositoryFilterPersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRepositoryFilterPersonalAsyncHandler;
                typedef Outcome<Error, Model::DescribeRepositoryOwnerPersonalResponse> DescribeRepositoryOwnerPersonalOutcome;
                typedef std::future<DescribeRepositoryOwnerPersonalOutcome> DescribeRepositoryOwnerPersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeRepositoryOwnerPersonalRequest&, DescribeRepositoryOwnerPersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRepositoryOwnerPersonalAsyncHandler;
                typedef Outcome<Error, Model::DescribeRepositoryPersonalResponse> DescribeRepositoryPersonalOutcome;
                typedef std::future<DescribeRepositoryPersonalOutcome> DescribeRepositoryPersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeRepositoryPersonalRequest&, DescribeRepositoryPersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRepositoryPersonalAsyncHandler;
                typedef Outcome<Error, Model::DescribeUserQuotaPersonalResponse> DescribeUserQuotaPersonalOutcome;
                typedef std::future<DescribeUserQuotaPersonalOutcome> DescribeUserQuotaPersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeUserQuotaPersonalRequest&, DescribeUserQuotaPersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserQuotaPersonalAsyncHandler;
                typedef Outcome<Error, Model::DescribeWebhookTriggerResponse> DescribeWebhookTriggerOutcome;
                typedef std::future<DescribeWebhookTriggerOutcome> DescribeWebhookTriggerOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeWebhookTriggerRequest&, DescribeWebhookTriggerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebhookTriggerAsyncHandler;
                typedef Outcome<Error, Model::DescribeWebhookTriggerLogResponse> DescribeWebhookTriggerLogOutcome;
                typedef std::future<DescribeWebhookTriggerLogOutcome> DescribeWebhookTriggerLogOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeWebhookTriggerLogRequest&, DescribeWebhookTriggerLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebhookTriggerLogAsyncHandler;
                typedef Outcome<Error, Model::DuplicateImagePersonalResponse> DuplicateImagePersonalOutcome;
                typedef std::future<DuplicateImagePersonalOutcome> DuplicateImagePersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DuplicateImagePersonalRequest&, DuplicateImagePersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DuplicateImagePersonalAsyncHandler;
                typedef Outcome<Error, Model::ManageImageLifecycleGlobalPersonalResponse> ManageImageLifecycleGlobalPersonalOutcome;
                typedef std::future<ManageImageLifecycleGlobalPersonalOutcome> ManageImageLifecycleGlobalPersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::ManageImageLifecycleGlobalPersonalRequest&, ManageImageLifecycleGlobalPersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ManageImageLifecycleGlobalPersonalAsyncHandler;
                typedef Outcome<Error, Model::ManageInternalEndpointResponse> ManageInternalEndpointOutcome;
                typedef std::future<ManageInternalEndpointOutcome> ManageInternalEndpointOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::ManageInternalEndpointRequest&, ManageInternalEndpointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ManageInternalEndpointAsyncHandler;
                typedef Outcome<Error, Model::ModifyApplicationTriggerPersonalResponse> ModifyApplicationTriggerPersonalOutcome;
                typedef std::future<ModifyApplicationTriggerPersonalOutcome> ModifyApplicationTriggerPersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::ModifyApplicationTriggerPersonalRequest&, ModifyApplicationTriggerPersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApplicationTriggerPersonalAsyncHandler;
                typedef Outcome<Error, Model::ModifyInstanceTokenResponse> ModifyInstanceTokenOutcome;
                typedef std::future<ModifyInstanceTokenOutcome> ModifyInstanceTokenOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::ModifyInstanceTokenRequest&, ModifyInstanceTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceTokenAsyncHandler;
                typedef Outcome<Error, Model::ModifyNamespaceResponse> ModifyNamespaceOutcome;
                typedef std::future<ModifyNamespaceOutcome> ModifyNamespaceOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::ModifyNamespaceRequest&, ModifyNamespaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNamespaceAsyncHandler;
                typedef Outcome<Error, Model::ModifyRepositoryResponse> ModifyRepositoryOutcome;
                typedef std::future<ModifyRepositoryOutcome> ModifyRepositoryOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::ModifyRepositoryRequest&, ModifyRepositoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRepositoryAsyncHandler;
                typedef Outcome<Error, Model::ModifyRepositoryAccessPersonalResponse> ModifyRepositoryAccessPersonalOutcome;
                typedef std::future<ModifyRepositoryAccessPersonalOutcome> ModifyRepositoryAccessPersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::ModifyRepositoryAccessPersonalRequest&, ModifyRepositoryAccessPersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRepositoryAccessPersonalAsyncHandler;
                typedef Outcome<Error, Model::ModifyRepositoryInfoPersonalResponse> ModifyRepositoryInfoPersonalOutcome;
                typedef std::future<ModifyRepositoryInfoPersonalOutcome> ModifyRepositoryInfoPersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::ModifyRepositoryInfoPersonalRequest&, ModifyRepositoryInfoPersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRepositoryInfoPersonalAsyncHandler;
                typedef Outcome<Error, Model::ModifyUserPasswordPersonalResponse> ModifyUserPasswordPersonalOutcome;
                typedef std::future<ModifyUserPasswordPersonalOutcome> ModifyUserPasswordPersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::ModifyUserPasswordPersonalRequest&, ModifyUserPasswordPersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserPasswordPersonalAsyncHandler;
                typedef Outcome<Error, Model::ModifyWebhookTriggerResponse> ModifyWebhookTriggerOutcome;
                typedef std::future<ModifyWebhookTriggerOutcome> ModifyWebhookTriggerOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::ModifyWebhookTriggerRequest&, ModifyWebhookTriggerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebhookTriggerAsyncHandler;
                typedef Outcome<Error, Model::RenewInstanceResponse> RenewInstanceOutcome;
                typedef std::future<RenewInstanceOutcome> RenewInstanceOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::RenewInstanceRequest&, RenewInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewInstanceAsyncHandler;
                typedef Outcome<Error, Model::ValidateNamespaceExistPersonalResponse> ValidateNamespaceExistPersonalOutcome;
                typedef std::future<ValidateNamespaceExistPersonalOutcome> ValidateNamespaceExistPersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::ValidateNamespaceExistPersonalRequest&, ValidateNamespaceExistPersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ValidateNamespaceExistPersonalAsyncHandler;
                typedef Outcome<Error, Model::ValidateRepositoryExistPersonalResponse> ValidateRepositoryExistPersonalOutcome;
                typedef std::future<ValidateRepositoryExistPersonalOutcome> ValidateRepositoryExistPersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::ValidateRepositoryExistPersonalRequest&, ValidateRepositoryExistPersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ValidateRepositoryExistPersonalAsyncHandler;



                /**
                 *用于在个人版镜像仓库中批量删除Tag
                 * @param req BatchDeleteImagePersonalRequest
                 * @return BatchDeleteImagePersonalOutcome
                 */
                BatchDeleteImagePersonalOutcome BatchDeleteImagePersonal(const Model::BatchDeleteImagePersonalRequest &request);
                void BatchDeleteImagePersonalAsync(const Model::BatchDeleteImagePersonalRequest& request, const BatchDeleteImagePersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchDeleteImagePersonalOutcomeCallable BatchDeleteImagePersonalCallable(const Model::BatchDeleteImagePersonalRequest& request);

                /**
                 *用于个人版镜像仓库中批量删除镜像仓库
                 * @param req BatchDeleteRepositoryPersonalRequest
                 * @return BatchDeleteRepositoryPersonalOutcome
                 */
                BatchDeleteRepositoryPersonalOutcome BatchDeleteRepositoryPersonal(const Model::BatchDeleteRepositoryPersonalRequest &request);
                void BatchDeleteRepositoryPersonalAsync(const Model::BatchDeleteRepositoryPersonalRequest& request, const BatchDeleteRepositoryPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchDeleteRepositoryPersonalOutcomeCallable BatchDeleteRepositoryPersonalCallable(const Model::BatchDeleteRepositoryPersonalRequest& request);

                /**
                 *检查待创建的实例名称是否符合规范
                 * @param req CheckInstanceNameRequest
                 * @return CheckInstanceNameOutcome
                 */
                CheckInstanceNameOutcome CheckInstanceName(const Model::CheckInstanceNameRequest &request);
                void CheckInstanceNameAsync(const Model::CheckInstanceNameRequest& request, const CheckInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckInstanceNameOutcomeCallable CheckInstanceNameCallable(const Model::CheckInstanceNameRequest& request);

                /**
                 *用于创建应用更新触发器
                 * @param req CreateApplicationTriggerPersonalRequest
                 * @return CreateApplicationTriggerPersonalOutcome
                 */
                CreateApplicationTriggerPersonalOutcome CreateApplicationTriggerPersonal(const Model::CreateApplicationTriggerPersonalRequest &request);
                void CreateApplicationTriggerPersonalAsync(const Model::CreateApplicationTriggerPersonalRequest& request, const CreateApplicationTriggerPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateApplicationTriggerPersonalOutcomeCallable CreateApplicationTriggerPersonalCallable(const Model::CreateApplicationTriggerPersonalRequest& request);

                /**
                 *用于在个人版中创建清理策略
                 * @param req CreateImageLifecyclePersonalRequest
                 * @return CreateImageLifecyclePersonalOutcome
                 */
                CreateImageLifecyclePersonalOutcome CreateImageLifecyclePersonal(const Model::CreateImageLifecyclePersonalRequest &request);
                void CreateImageLifecyclePersonalAsync(const Model::CreateImageLifecyclePersonalRequest& request, const CreateImageLifecyclePersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageLifecyclePersonalOutcomeCallable CreateImageLifecyclePersonalCallable(const Model::CreateImageLifecyclePersonalRequest& request);

                /**
                 *创建实例
                 * @param req CreateInstanceRequest
                 * @return CreateInstanceOutcome
                 */
                CreateInstanceOutcome CreateInstance(const Model::CreateInstanceRequest &request);
                void CreateInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstanceOutcomeCallable CreateInstanceCallable(const Model::CreateInstanceRequest& request);

                /**
                 *创建实例的临时或长期访问凭证
                 * @param req CreateInstanceTokenRequest
                 * @return CreateInstanceTokenOutcome
                 */
                CreateInstanceTokenOutcome CreateInstanceToken(const Model::CreateInstanceTokenRequest &request);
                void CreateInstanceTokenAsync(const Model::CreateInstanceTokenRequest& request, const CreateInstanceTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstanceTokenOutcomeCallable CreateInstanceTokenCallable(const Model::CreateInstanceTokenRequest& request);

                /**
                 *用于在企业版中创建命名空间
                 * @param req CreateNamespaceRequest
                 * @return CreateNamespaceOutcome
                 */
                CreateNamespaceOutcome CreateNamespace(const Model::CreateNamespaceRequest &request);
                void CreateNamespaceAsync(const Model::CreateNamespaceRequest& request, const CreateNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNamespaceOutcomeCallable CreateNamespaceCallable(const Model::CreateNamespaceRequest& request);

                /**
                 *创建个人版镜像仓库命名空间，此命名空间全局唯一
                 * @param req CreateNamespacePersonalRequest
                 * @return CreateNamespacePersonalOutcome
                 */
                CreateNamespacePersonalOutcome CreateNamespacePersonal(const Model::CreateNamespacePersonalRequest &request);
                void CreateNamespacePersonalAsync(const Model::CreateNamespacePersonalRequest& request, const CreateNamespacePersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNamespacePersonalOutcomeCallable CreateNamespacePersonalCallable(const Model::CreateNamespacePersonalRequest& request);

                /**
                 *用于企业版创建镜像仓库
                 * @param req CreateRepositoryRequest
                 * @return CreateRepositoryOutcome
                 */
                CreateRepositoryOutcome CreateRepository(const Model::CreateRepositoryRequest &request);
                void CreateRepositoryAsync(const Model::CreateRepositoryRequest& request, const CreateRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRepositoryOutcomeCallable CreateRepositoryCallable(const Model::CreateRepositoryRequest& request);

                /**
                 *用于在个人版仓库中创建镜像仓库
                 * @param req CreateRepositoryPersonalRequest
                 * @return CreateRepositoryPersonalOutcome
                 */
                CreateRepositoryPersonalOutcome CreateRepositoryPersonal(const Model::CreateRepositoryPersonalRequest &request);
                void CreateRepositoryPersonalAsync(const Model::CreateRepositoryPersonalRequest& request, const CreateRepositoryPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRepositoryPersonalOutcomeCallable CreateRepositoryPersonalCallable(const Model::CreateRepositoryPersonalRequest& request);

                /**
                 *创建个人用户
                 * @param req CreateUserPersonalRequest
                 * @return CreateUserPersonalOutcome
                 */
                CreateUserPersonalOutcome CreateUserPersonal(const Model::CreateUserPersonalRequest &request);
                void CreateUserPersonalAsync(const Model::CreateUserPersonalRequest& request, const CreateUserPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUserPersonalOutcomeCallable CreateUserPersonalCallable(const Model::CreateUserPersonalRequest& request);

                /**
                 *创建触发器
                 * @param req CreateWebhookTriggerRequest
                 * @return CreateWebhookTriggerOutcome
                 */
                CreateWebhookTriggerOutcome CreateWebhookTrigger(const Model::CreateWebhookTriggerRequest &request);
                void CreateWebhookTriggerAsync(const Model::CreateWebhookTriggerRequest& request, const CreateWebhookTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWebhookTriggerOutcomeCallable CreateWebhookTriggerCallable(const Model::CreateWebhookTriggerRequest& request);

                /**
                 *用于删除应用更新触发器
                 * @param req DeleteApplicationTriggerPersonalRequest
                 * @return DeleteApplicationTriggerPersonalOutcome
                 */
                DeleteApplicationTriggerPersonalOutcome DeleteApplicationTriggerPersonal(const Model::DeleteApplicationTriggerPersonalRequest &request);
                void DeleteApplicationTriggerPersonalAsync(const Model::DeleteApplicationTriggerPersonalRequest& request, const DeleteApplicationTriggerPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteApplicationTriggerPersonalOutcomeCallable DeleteApplicationTriggerPersonalCallable(const Model::DeleteApplicationTriggerPersonalRequest& request);

                /**
                 *删除指定镜像
                 * @param req DeleteImageRequest
                 * @return DeleteImageOutcome
                 */
                DeleteImageOutcome DeleteImage(const Model::DeleteImageRequest &request);
                void DeleteImageAsync(const Model::DeleteImageRequest& request, const DeleteImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteImageOutcomeCallable DeleteImageCallable(const Model::DeleteImageRequest& request);

                /**
                 *用于删除个人版全局镜像版本自动清理策略
                 * @param req DeleteImageLifecycleGlobalPersonalRequest
                 * @return DeleteImageLifecycleGlobalPersonalOutcome
                 */
                DeleteImageLifecycleGlobalPersonalOutcome DeleteImageLifecycleGlobalPersonal(const Model::DeleteImageLifecycleGlobalPersonalRequest &request);
                void DeleteImageLifecycleGlobalPersonalAsync(const Model::DeleteImageLifecycleGlobalPersonalRequest& request, const DeleteImageLifecycleGlobalPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteImageLifecycleGlobalPersonalOutcomeCallable DeleteImageLifecycleGlobalPersonalCallable(const Model::DeleteImageLifecycleGlobalPersonalRequest& request);

                /**
                 *用于在个人版镜像仓库中删除仓库Tag自动清理策略
                 * @param req DeleteImageLifecyclePersonalRequest
                 * @return DeleteImageLifecyclePersonalOutcome
                 */
                DeleteImageLifecyclePersonalOutcome DeleteImageLifecyclePersonal(const Model::DeleteImageLifecyclePersonalRequest &request);
                void DeleteImageLifecyclePersonalAsync(const Model::DeleteImageLifecyclePersonalRequest& request, const DeleteImageLifecyclePersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteImageLifecyclePersonalOutcomeCallable DeleteImageLifecyclePersonalCallable(const Model::DeleteImageLifecyclePersonalRequest& request);

                /**
                 *用于在个人版中删除tag
                 * @param req DeleteImagePersonalRequest
                 * @return DeleteImagePersonalOutcome
                 */
                DeleteImagePersonalOutcome DeleteImagePersonal(const Model::DeleteImagePersonalRequest &request);
                void DeleteImagePersonalAsync(const Model::DeleteImagePersonalRequest& request, const DeleteImagePersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteImagePersonalOutcomeCallable DeleteImagePersonalCallable(const Model::DeleteImagePersonalRequest& request);

                /**
                 *删除镜像仓库企业版实例
                 * @param req DeleteInstanceRequest
                 * @return DeleteInstanceOutcome
                 */
                DeleteInstanceOutcome DeleteInstance(const Model::DeleteInstanceRequest &request);
                void DeleteInstanceAsync(const Model::DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteInstanceOutcomeCallable DeleteInstanceCallable(const Model::DeleteInstanceRequest& request);

                /**
                 *删除长期访问凭证
                 * @param req DeleteInstanceTokenRequest
                 * @return DeleteInstanceTokenOutcome
                 */
                DeleteInstanceTokenOutcome DeleteInstanceToken(const Model::DeleteInstanceTokenRequest &request);
                void DeleteInstanceTokenAsync(const Model::DeleteInstanceTokenRequest& request, const DeleteInstanceTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteInstanceTokenOutcomeCallable DeleteInstanceTokenCallable(const Model::DeleteInstanceTokenRequest& request);

                /**
                 *删除命名空间
                 * @param req DeleteNamespaceRequest
                 * @return DeleteNamespaceOutcome
                 */
                DeleteNamespaceOutcome DeleteNamespace(const Model::DeleteNamespaceRequest &request);
                void DeleteNamespaceAsync(const Model::DeleteNamespaceRequest& request, const DeleteNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNamespaceOutcomeCallable DeleteNamespaceCallable(const Model::DeleteNamespaceRequest& request);

                /**
                 *删除共享版命名空间
                 * @param req DeleteNamespacePersonalRequest
                 * @return DeleteNamespacePersonalOutcome
                 */
                DeleteNamespacePersonalOutcome DeleteNamespacePersonal(const Model::DeleteNamespacePersonalRequest &request);
                void DeleteNamespacePersonalAsync(const Model::DeleteNamespacePersonalRequest& request, const DeleteNamespacePersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNamespacePersonalOutcomeCallable DeleteNamespacePersonalCallable(const Model::DeleteNamespacePersonalRequest& request);

                /**
                 *删除镜像仓库
                 * @param req DeleteRepositoryRequest
                 * @return DeleteRepositoryOutcome
                 */
                DeleteRepositoryOutcome DeleteRepository(const Model::DeleteRepositoryRequest &request);
                void DeleteRepositoryAsync(const Model::DeleteRepositoryRequest& request, const DeleteRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRepositoryOutcomeCallable DeleteRepositoryCallable(const Model::DeleteRepositoryRequest& request);

                /**
                 *用于个人版镜像仓库中删除
                 * @param req DeleteRepositoryPersonalRequest
                 * @return DeleteRepositoryPersonalOutcome
                 */
                DeleteRepositoryPersonalOutcome DeleteRepositoryPersonal(const Model::DeleteRepositoryPersonalRequest &request);
                void DeleteRepositoryPersonalAsync(const Model::DeleteRepositoryPersonalRequest& request, const DeleteRepositoryPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRepositoryPersonalOutcomeCallable DeleteRepositoryPersonalCallable(const Model::DeleteRepositoryPersonalRequest& request);

                /**
                 *删除触发器
                 * @param req DeleteWebhookTriggerRequest
                 * @return DeleteWebhookTriggerOutcome
                 */
                DeleteWebhookTriggerOutcome DeleteWebhookTrigger(const Model::DeleteWebhookTriggerRequest &request);
                void DeleteWebhookTriggerAsync(const Model::DeleteWebhookTriggerRequest& request, const DeleteWebhookTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWebhookTriggerOutcomeCallable DeleteWebhookTriggerCallable(const Model::DeleteWebhookTriggerRequest& request);

                /**
                 *用于查询应用更新触发器触发日志
                 * @param req DescribeApplicationTriggerLogPersonalRequest
                 * @return DescribeApplicationTriggerLogPersonalOutcome
                 */
                DescribeApplicationTriggerLogPersonalOutcome DescribeApplicationTriggerLogPersonal(const Model::DescribeApplicationTriggerLogPersonalRequest &request);
                void DescribeApplicationTriggerLogPersonalAsync(const Model::DescribeApplicationTriggerLogPersonalRequest& request, const DescribeApplicationTriggerLogPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationTriggerLogPersonalOutcomeCallable DescribeApplicationTriggerLogPersonalCallable(const Model::DescribeApplicationTriggerLogPersonalRequest& request);

                /**
                 *用于查询应用更新触发器
                 * @param req DescribeApplicationTriggerPersonalRequest
                 * @return DescribeApplicationTriggerPersonalOutcome
                 */
                DescribeApplicationTriggerPersonalOutcome DescribeApplicationTriggerPersonal(const Model::DescribeApplicationTriggerPersonalRequest &request);
                void DescribeApplicationTriggerPersonalAsync(const Model::DescribeApplicationTriggerPersonalRequest& request, const DescribeApplicationTriggerPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationTriggerPersonalOutcomeCallable DescribeApplicationTriggerPersonalCallable(const Model::DescribeApplicationTriggerPersonalRequest& request);

                /**
                 *查询个人收藏仓库
                 * @param req DescribeFavorRepositoryPersonalRequest
                 * @return DescribeFavorRepositoryPersonalOutcome
                 */
                DescribeFavorRepositoryPersonalOutcome DescribeFavorRepositoryPersonal(const Model::DescribeFavorRepositoryPersonalRequest &request);
                void DescribeFavorRepositoryPersonalAsync(const Model::DescribeFavorRepositoryPersonalRequest& request, const DescribeFavorRepositoryPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFavorRepositoryPersonalOutcomeCallable DescribeFavorRepositoryPersonalCallable(const Model::DescribeFavorRepositoryPersonalRequest& request);

                /**
                 *用于在个人版中查询与指定tag镜像内容相同的tag列表
                 * @param req DescribeImageFilterPersonalRequest
                 * @return DescribeImageFilterPersonalOutcome
                 */
                DescribeImageFilterPersonalOutcome DescribeImageFilterPersonal(const Model::DescribeImageFilterPersonalRequest &request);
                void DescribeImageFilterPersonalAsync(const Model::DescribeImageFilterPersonalRequest& request, const DescribeImageFilterPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageFilterPersonalOutcomeCallable DescribeImageFilterPersonalCallable(const Model::DescribeImageFilterPersonalRequest& request);

                /**
                 *用于获取个人版全局镜像版本自动清理策略
                 * @param req DescribeImageLifecycleGlobalPersonalRequest
                 * @return DescribeImageLifecycleGlobalPersonalOutcome
                 */
                DescribeImageLifecycleGlobalPersonalOutcome DescribeImageLifecycleGlobalPersonal(const Model::DescribeImageLifecycleGlobalPersonalRequest &request);
                void DescribeImageLifecycleGlobalPersonalAsync(const Model::DescribeImageLifecycleGlobalPersonalRequest& request, const DescribeImageLifecycleGlobalPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageLifecycleGlobalPersonalOutcomeCallable DescribeImageLifecycleGlobalPersonalCallable(const Model::DescribeImageLifecycleGlobalPersonalRequest& request);

                /**
                 *用于获取个人版仓库中自动清理策略
                 * @param req DescribeImageLifecyclePersonalRequest
                 * @return DescribeImageLifecyclePersonalOutcome
                 */
                DescribeImageLifecyclePersonalOutcome DescribeImageLifecyclePersonal(const Model::DescribeImageLifecyclePersonalRequest &request);
                void DescribeImageLifecyclePersonalAsync(const Model::DescribeImageLifecyclePersonalRequest& request, const DescribeImageLifecyclePersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageLifecyclePersonalOutcomeCallable DescribeImageLifecyclePersonalCallable(const Model::DescribeImageLifecyclePersonalRequest& request);

                /**
                 *查询容器镜像Manifest信息
                 * @param req DescribeImageManifestsRequest
                 * @return DescribeImageManifestsOutcome
                 */
                DescribeImageManifestsOutcome DescribeImageManifests(const Model::DescribeImageManifestsRequest &request);
                void DescribeImageManifestsAsync(const Model::DescribeImageManifestsRequest& request, const DescribeImageManifestsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageManifestsOutcomeCallable DescribeImageManifestsCallable(const Model::DescribeImageManifestsRequest& request);

                /**
                 *用于获取个人版镜像仓库tag列表
                 * @param req DescribeImagePersonalRequest
                 * @return DescribeImagePersonalOutcome
                 */
                DescribeImagePersonalOutcome DescribeImagePersonal(const Model::DescribeImagePersonalRequest &request);
                void DescribeImagePersonalAsync(const Model::DescribeImagePersonalRequest& request, const DescribeImagePersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImagePersonalOutcomeCallable DescribeImagePersonalCallable(const Model::DescribeImagePersonalRequest& request);

                /**
                 *查询镜像版本列表或指定容器镜像信息
                 * @param req DescribeImagesRequest
                 * @return DescribeImagesOutcome
                 */
                DescribeImagesOutcome DescribeImages(const Model::DescribeImagesRequest &request);
                void DescribeImagesAsync(const Model::DescribeImagesRequest& request, const DescribeImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImagesOutcomeCallable DescribeImagesCallable(const Model::DescribeImagesRequest& request);

                /**
                 *查询实例当前状态以及过程信息
                 * @param req DescribeInstanceStatusRequest
                 * @return DescribeInstanceStatusOutcome
                 */
                DescribeInstanceStatusOutcome DescribeInstanceStatus(const Model::DescribeInstanceStatusRequest &request);
                void DescribeInstanceStatusAsync(const Model::DescribeInstanceStatusRequest& request, const DescribeInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceStatusOutcomeCallable DescribeInstanceStatusCallable(const Model::DescribeInstanceStatusRequest& request);

                /**
                 *查询长期访问凭证信息
                 * @param req DescribeInstanceTokenRequest
                 * @return DescribeInstanceTokenOutcome
                 */
                DescribeInstanceTokenOutcome DescribeInstanceToken(const Model::DescribeInstanceTokenRequest &request);
                void DescribeInstanceTokenAsync(const Model::DescribeInstanceTokenRequest& request, const DescribeInstanceTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceTokenOutcomeCallable DescribeInstanceTokenCallable(const Model::DescribeInstanceTokenRequest& request);

                /**
                 *查询实例信息
                 * @param req DescribeInstancesRequest
                 * @return DescribeInstancesOutcome
                 */
                DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest &request);
                void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request);

                /**
                 *查询实例内网访问VPC链接
                 * @param req DescribeInternalEndpointsRequest
                 * @return DescribeInternalEndpointsOutcome
                 */
                DescribeInternalEndpointsOutcome DescribeInternalEndpoints(const Model::DescribeInternalEndpointsRequest &request);
                void DescribeInternalEndpointsAsync(const Model::DescribeInternalEndpointsRequest& request, const DescribeInternalEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInternalEndpointsOutcomeCallable DescribeInternalEndpointsCallable(const Model::DescribeInternalEndpointsRequest& request);

                /**
                 *查询个人版命名空间信息
                 * @param req DescribeNamespacePersonalRequest
                 * @return DescribeNamespacePersonalOutcome
                 */
                DescribeNamespacePersonalOutcome DescribeNamespacePersonal(const Model::DescribeNamespacePersonalRequest &request);
                void DescribeNamespacePersonalAsync(const Model::DescribeNamespacePersonalRequest& request, const DescribeNamespacePersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNamespacePersonalOutcomeCallable DescribeNamespacePersonalCallable(const Model::DescribeNamespacePersonalRequest& request);

                /**
                 *查询命名空间列表或指定命名空间信息
                 * @param req DescribeNamespacesRequest
                 * @return DescribeNamespacesOutcome
                 */
                DescribeNamespacesOutcome DescribeNamespaces(const Model::DescribeNamespacesRequest &request);
                void DescribeNamespacesAsync(const Model::DescribeNamespacesRequest& request, const DescribeNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNamespacesOutcomeCallable DescribeNamespacesCallable(const Model::DescribeNamespacesRequest& request);

                /**
                 *查询创建从实例任务状态
                 * @param req DescribeReplicationInstanceCreateTasksRequest
                 * @return DescribeReplicationInstanceCreateTasksOutcome
                 */
                DescribeReplicationInstanceCreateTasksOutcome DescribeReplicationInstanceCreateTasks(const Model::DescribeReplicationInstanceCreateTasksRequest &request);
                void DescribeReplicationInstanceCreateTasksAsync(const Model::DescribeReplicationInstanceCreateTasksRequest& request, const DescribeReplicationInstanceCreateTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReplicationInstanceCreateTasksOutcomeCallable DescribeReplicationInstanceCreateTasksCallable(const Model::DescribeReplicationInstanceCreateTasksRequest& request);

                /**
                 *查询从实例列表
                 * @param req DescribeReplicationInstancesRequest
                 * @return DescribeReplicationInstancesOutcome
                 */
                DescribeReplicationInstancesOutcome DescribeReplicationInstances(const Model::DescribeReplicationInstancesRequest &request);
                void DescribeReplicationInstancesAsync(const Model::DescribeReplicationInstancesRequest& request, const DescribeReplicationInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReplicationInstancesOutcomeCallable DescribeReplicationInstancesCallable(const Model::DescribeReplicationInstancesRequest& request);

                /**
                 *查询镜像仓库列表或指定镜像仓库信息
                 * @param req DescribeRepositoriesRequest
                 * @return DescribeRepositoriesOutcome
                 */
                DescribeRepositoriesOutcome DescribeRepositories(const Model::DescribeRepositoriesRequest &request);
                void DescribeRepositoriesAsync(const Model::DescribeRepositoriesRequest& request, const DescribeRepositoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRepositoriesOutcomeCallable DescribeRepositoriesCallable(const Model::DescribeRepositoriesRequest& request);

                /**
                 *用于在个人版镜像仓库中，获取满足输入搜索条件的用户镜像仓库
                 * @param req DescribeRepositoryFilterPersonalRequest
                 * @return DescribeRepositoryFilterPersonalOutcome
                 */
                DescribeRepositoryFilterPersonalOutcome DescribeRepositoryFilterPersonal(const Model::DescribeRepositoryFilterPersonalRequest &request);
                void DescribeRepositoryFilterPersonalAsync(const Model::DescribeRepositoryFilterPersonalRequest& request, const DescribeRepositoryFilterPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRepositoryFilterPersonalOutcomeCallable DescribeRepositoryFilterPersonalCallable(const Model::DescribeRepositoryFilterPersonalRequest& request);

                /**
                 *用于在个人版中获取用户全部的镜像仓库列表
                 * @param req DescribeRepositoryOwnerPersonalRequest
                 * @return DescribeRepositoryOwnerPersonalOutcome
                 */
                DescribeRepositoryOwnerPersonalOutcome DescribeRepositoryOwnerPersonal(const Model::DescribeRepositoryOwnerPersonalRequest &request);
                void DescribeRepositoryOwnerPersonalAsync(const Model::DescribeRepositoryOwnerPersonalRequest& request, const DescribeRepositoryOwnerPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRepositoryOwnerPersonalOutcomeCallable DescribeRepositoryOwnerPersonalCallable(const Model::DescribeRepositoryOwnerPersonalRequest& request);

                /**
                 *查询个人版仓库信息
                 * @param req DescribeRepositoryPersonalRequest
                 * @return DescribeRepositoryPersonalOutcome
                 */
                DescribeRepositoryPersonalOutcome DescribeRepositoryPersonal(const Model::DescribeRepositoryPersonalRequest &request);
                void DescribeRepositoryPersonalAsync(const Model::DescribeRepositoryPersonalRequest& request, const DescribeRepositoryPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRepositoryPersonalOutcomeCallable DescribeRepositoryPersonalCallable(const Model::DescribeRepositoryPersonalRequest& request);

                /**
                 *查询个人用户配额
                 * @param req DescribeUserQuotaPersonalRequest
                 * @return DescribeUserQuotaPersonalOutcome
                 */
                DescribeUserQuotaPersonalOutcome DescribeUserQuotaPersonal(const Model::DescribeUserQuotaPersonalRequest &request);
                void DescribeUserQuotaPersonalAsync(const Model::DescribeUserQuotaPersonalRequest& request, const DescribeUserQuotaPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserQuotaPersonalOutcomeCallable DescribeUserQuotaPersonalCallable(const Model::DescribeUserQuotaPersonalRequest& request);

                /**
                 *查询触发器
                 * @param req DescribeWebhookTriggerRequest
                 * @return DescribeWebhookTriggerOutcome
                 */
                DescribeWebhookTriggerOutcome DescribeWebhookTrigger(const Model::DescribeWebhookTriggerRequest &request);
                void DescribeWebhookTriggerAsync(const Model::DescribeWebhookTriggerRequest& request, const DescribeWebhookTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebhookTriggerOutcomeCallable DescribeWebhookTriggerCallable(const Model::DescribeWebhookTriggerRequest& request);

                /**
                 *获取触发器日志
                 * @param req DescribeWebhookTriggerLogRequest
                 * @return DescribeWebhookTriggerLogOutcome
                 */
                DescribeWebhookTriggerLogOutcome DescribeWebhookTriggerLog(const Model::DescribeWebhookTriggerLogRequest &request);
                void DescribeWebhookTriggerLogAsync(const Model::DescribeWebhookTriggerLogRequest& request, const DescribeWebhookTriggerLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebhookTriggerLogOutcomeCallable DescribeWebhookTriggerLogCallable(const Model::DescribeWebhookTriggerLogRequest& request);

                /**
                 *用于在个人版镜像仓库中复制镜像版本
                 * @param req DuplicateImagePersonalRequest
                 * @return DuplicateImagePersonalOutcome
                 */
                DuplicateImagePersonalOutcome DuplicateImagePersonal(const Model::DuplicateImagePersonalRequest &request);
                void DuplicateImagePersonalAsync(const Model::DuplicateImagePersonalRequest& request, const DuplicateImagePersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DuplicateImagePersonalOutcomeCallable DuplicateImagePersonalCallable(const Model::DuplicateImagePersonalRequest& request);

                /**
                 *用于设置个人版全局镜像版本自动清理策略
                 * @param req ManageImageLifecycleGlobalPersonalRequest
                 * @return ManageImageLifecycleGlobalPersonalOutcome
                 */
                ManageImageLifecycleGlobalPersonalOutcome ManageImageLifecycleGlobalPersonal(const Model::ManageImageLifecycleGlobalPersonalRequest &request);
                void ManageImageLifecycleGlobalPersonalAsync(const Model::ManageImageLifecycleGlobalPersonalRequest& request, const ManageImageLifecycleGlobalPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ManageImageLifecycleGlobalPersonalOutcomeCallable ManageImageLifecycleGlobalPersonalCallable(const Model::ManageImageLifecycleGlobalPersonalRequest& request);

                /**
                 *管理实例内网访问VPC链接
                 * @param req ManageInternalEndpointRequest
                 * @return ManageInternalEndpointOutcome
                 */
                ManageInternalEndpointOutcome ManageInternalEndpoint(const Model::ManageInternalEndpointRequest &request);
                void ManageInternalEndpointAsync(const Model::ManageInternalEndpointRequest& request, const ManageInternalEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ManageInternalEndpointOutcomeCallable ManageInternalEndpointCallable(const Model::ManageInternalEndpointRequest& request);

                /**
                 *用于修改应用更新触发器
                 * @param req ModifyApplicationTriggerPersonalRequest
                 * @return ModifyApplicationTriggerPersonalOutcome
                 */
                ModifyApplicationTriggerPersonalOutcome ModifyApplicationTriggerPersonal(const Model::ModifyApplicationTriggerPersonalRequest &request);
                void ModifyApplicationTriggerPersonalAsync(const Model::ModifyApplicationTriggerPersonalRequest& request, const ModifyApplicationTriggerPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApplicationTriggerPersonalOutcomeCallable ModifyApplicationTriggerPersonalCallable(const Model::ModifyApplicationTriggerPersonalRequest& request);

                /**
                 *更新实例内指定长期访问凭证的启用状态
                 * @param req ModifyInstanceTokenRequest
                 * @return ModifyInstanceTokenOutcome
                 */
                ModifyInstanceTokenOutcome ModifyInstanceToken(const Model::ModifyInstanceTokenRequest &request);
                void ModifyInstanceTokenAsync(const Model::ModifyInstanceTokenRequest& request, const ModifyInstanceTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceTokenOutcomeCallable ModifyInstanceTokenCallable(const Model::ModifyInstanceTokenRequest& request);

                /**
                 *更新命名空间信息，当前仅支持修改命名空间访问级别
                 * @param req ModifyNamespaceRequest
                 * @return ModifyNamespaceOutcome
                 */
                ModifyNamespaceOutcome ModifyNamespace(const Model::ModifyNamespaceRequest &request);
                void ModifyNamespaceAsync(const Model::ModifyNamespaceRequest& request, const ModifyNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNamespaceOutcomeCallable ModifyNamespaceCallable(const Model::ModifyNamespaceRequest& request);

                /**
                 *更新镜像仓库信息，可修改仓库描述信息
                 * @param req ModifyRepositoryRequest
                 * @return ModifyRepositoryOutcome
                 */
                ModifyRepositoryOutcome ModifyRepository(const Model::ModifyRepositoryRequest &request);
                void ModifyRepositoryAsync(const Model::ModifyRepositoryRequest& request, const ModifyRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRepositoryOutcomeCallable ModifyRepositoryCallable(const Model::ModifyRepositoryRequest& request);

                /**
                 *用于更新个人版镜像仓库的访问属性
                 * @param req ModifyRepositoryAccessPersonalRequest
                 * @return ModifyRepositoryAccessPersonalOutcome
                 */
                ModifyRepositoryAccessPersonalOutcome ModifyRepositoryAccessPersonal(const Model::ModifyRepositoryAccessPersonalRequest &request);
                void ModifyRepositoryAccessPersonalAsync(const Model::ModifyRepositoryAccessPersonalRequest& request, const ModifyRepositoryAccessPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRepositoryAccessPersonalOutcomeCallable ModifyRepositoryAccessPersonalCallable(const Model::ModifyRepositoryAccessPersonalRequest& request);

                /**
                 *用于在个人版镜像仓库中更新容器镜像描述
                 * @param req ModifyRepositoryInfoPersonalRequest
                 * @return ModifyRepositoryInfoPersonalOutcome
                 */
                ModifyRepositoryInfoPersonalOutcome ModifyRepositoryInfoPersonal(const Model::ModifyRepositoryInfoPersonalRequest &request);
                void ModifyRepositoryInfoPersonalAsync(const Model::ModifyRepositoryInfoPersonalRequest& request, const ModifyRepositoryInfoPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRepositoryInfoPersonalOutcomeCallable ModifyRepositoryInfoPersonalCallable(const Model::ModifyRepositoryInfoPersonalRequest& request);

                /**
                 *修改个人用户登录密码
                 * @param req ModifyUserPasswordPersonalRequest
                 * @return ModifyUserPasswordPersonalOutcome
                 */
                ModifyUserPasswordPersonalOutcome ModifyUserPasswordPersonal(const Model::ModifyUserPasswordPersonalRequest &request);
                void ModifyUserPasswordPersonalAsync(const Model::ModifyUserPasswordPersonalRequest& request, const ModifyUserPasswordPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUserPasswordPersonalOutcomeCallable ModifyUserPasswordPersonalCallable(const Model::ModifyUserPasswordPersonalRequest& request);

                /**
                 *更新触发器
                 * @param req ModifyWebhookTriggerRequest
                 * @return ModifyWebhookTriggerOutcome
                 */
                ModifyWebhookTriggerOutcome ModifyWebhookTrigger(const Model::ModifyWebhookTriggerRequest &request);
                void ModifyWebhookTriggerAsync(const Model::ModifyWebhookTriggerRequest& request, const ModifyWebhookTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWebhookTriggerOutcomeCallable ModifyWebhookTriggerCallable(const Model::ModifyWebhookTriggerRequest& request);

                /**
                 *预付费实例续费，同时支持按量计费转包年包月
                 * @param req RenewInstanceRequest
                 * @return RenewInstanceOutcome
                 */
                RenewInstanceOutcome RenewInstance(const Model::RenewInstanceRequest &request);
                void RenewInstanceAsync(const Model::RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewInstanceOutcomeCallable RenewInstanceCallable(const Model::RenewInstanceRequest& request);

                /**
                 *查询个人版用户命名空间是否存在
                 * @param req ValidateNamespaceExistPersonalRequest
                 * @return ValidateNamespaceExistPersonalOutcome
                 */
                ValidateNamespaceExistPersonalOutcome ValidateNamespaceExistPersonal(const Model::ValidateNamespaceExistPersonalRequest &request);
                void ValidateNamespaceExistPersonalAsync(const Model::ValidateNamespaceExistPersonalRequest& request, const ValidateNamespaceExistPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ValidateNamespaceExistPersonalOutcomeCallable ValidateNamespaceExistPersonalCallable(const Model::ValidateNamespaceExistPersonalRequest& request);

                /**
                 *用于判断个人版仓库是否存在
                 * @param req ValidateRepositoryExistPersonalRequest
                 * @return ValidateRepositoryExistPersonalOutcome
                 */
                ValidateRepositoryExistPersonalOutcome ValidateRepositoryExistPersonal(const Model::ValidateRepositoryExistPersonalRequest &request);
                void ValidateRepositoryExistPersonalAsync(const Model::ValidateRepositoryExistPersonalRequest& request, const ValidateRepositoryExistPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ValidateRepositoryExistPersonalOutcomeCallable ValidateRepositoryExistPersonalCallable(const Model::ValidateRepositoryExistPersonalRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_TCRCLIENT_H_
