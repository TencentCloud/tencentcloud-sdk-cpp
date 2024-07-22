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
#include <tencentcloud/tcr/v20190924/model/CheckInstanceRequest.h>
#include <tencentcloud/tcr/v20190924/model/CheckInstanceResponse.h>
#include <tencentcloud/tcr/v20190924/model/CheckInstanceNameRequest.h>
#include <tencentcloud/tcr/v20190924/model/CheckInstanceNameResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateApplicationTriggerPersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateApplicationTriggerPersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateImageAccelerationServiceRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateImageAccelerationServiceResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateImmutableTagRulesRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateImmutableTagRulesResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateInstanceRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateInstanceResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateInstanceCustomizedDomainRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateInstanceCustomizedDomainResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateInstanceTokenRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateInstanceTokenResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateInternalEndpointDnsRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateInternalEndpointDnsResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateMultipleSecurityPolicyRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateMultipleSecurityPolicyResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateNamespaceRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateNamespaceResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateNamespacePersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateNamespacePersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateReplicationInstanceRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateReplicationInstanceResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateRepositoryRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateRepositoryResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateRepositoryPersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateRepositoryPersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateSecurityPolicyRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateSecurityPolicyResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateServiceAccountRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateServiceAccountResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateSignatureRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateSignatureResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateSignaturePolicyRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateSignaturePolicyResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateTagRetentionExecutionRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateTagRetentionExecutionResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateTagRetentionRuleRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateTagRetentionRuleResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateUserPersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateUserPersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateWebhookTriggerRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateWebhookTriggerResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteApplicationTriggerPersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteApplicationTriggerPersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteImageRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteImageResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteImageAccelerateServiceRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteImageAccelerateServiceResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteImageLifecycleGlobalPersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteImageLifecycleGlobalPersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteImagePersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteImagePersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteImmutableTagRulesRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteImmutableTagRulesResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteInstanceRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteInstanceResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteInstanceCustomizedDomainRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteInstanceCustomizedDomainResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteInstanceTokenRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteInstanceTokenResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteInternalEndpointDnsRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteInternalEndpointDnsResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteMultipleSecurityPolicyRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteMultipleSecurityPolicyResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteNamespaceRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteNamespaceResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteNamespacePersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteNamespacePersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteReplicationInstanceRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteReplicationInstanceResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteRepositoryRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteRepositoryResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteRepositoryPersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteRepositoryPersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteRepositoryTagsRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteRepositoryTagsResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteSecurityPolicyRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteSecurityPolicyResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteServiceAccountRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteServiceAccountResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteSignaturePolicyRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteSignaturePolicyResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteTagRetentionRuleRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteTagRetentionRuleResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteWebhookTriggerRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteWebhookTriggerResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeApplicationTriggerLogPersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeApplicationTriggerLogPersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeApplicationTriggerPersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeApplicationTriggerPersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeChartDownloadInfoRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeChartDownloadInfoResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeExternalEndpointStatusRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeExternalEndpointStatusResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeFavorRepositoryPersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeFavorRepositoryPersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeGCJobsRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeGCJobsResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeImageAccelerateServiceRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeImageAccelerateServiceResponse.h>
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
#include <tencentcloud/tcr/v20190924/model/DescribeImmutableTagRulesRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeImmutableTagRulesResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeInstanceAllNamespacesRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeInstanceAllNamespacesResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeInstanceCustomizedDomainRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeInstanceCustomizedDomainResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeInstanceStatusRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeInstanceStatusResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeInstanceTokenRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeInstanceTokenResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeInstancesRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeInstancesResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeInternalEndpointDnsStatusRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeInternalEndpointDnsStatusResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeInternalEndpointsRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeInternalEndpointsResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeNamespacePersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeNamespacePersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeNamespacesRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeNamespacesResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeRegionsRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeRegionsResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeReplicationInstanceCreateTasksRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeReplicationInstanceCreateTasksResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeReplicationInstanceSyncStatusRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeReplicationInstanceSyncStatusResponse.h>
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
#include <tencentcloud/tcr/v20190924/model/DescribeSecurityPoliciesRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeSecurityPoliciesResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeServiceAccountsRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeServiceAccountsResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeTagRetentionExecutionRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeTagRetentionExecutionResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeTagRetentionExecutionTaskRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeTagRetentionExecutionTaskResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeTagRetentionRulesRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeTagRetentionRulesResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeUserQuotaPersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeUserQuotaPersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeWebhookTriggerRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeWebhookTriggerResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeWebhookTriggerLogRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeWebhookTriggerLogResponse.h>
#include <tencentcloud/tcr/v20190924/model/DownloadHelmChartRequest.h>
#include <tencentcloud/tcr/v20190924/model/DownloadHelmChartResponse.h>
#include <tencentcloud/tcr/v20190924/model/DuplicateImageRequest.h>
#include <tencentcloud/tcr/v20190924/model/DuplicateImageResponse.h>
#include <tencentcloud/tcr/v20190924/model/DuplicateImagePersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/DuplicateImagePersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/ManageExternalEndpointRequest.h>
#include <tencentcloud/tcr/v20190924/model/ManageExternalEndpointResponse.h>
#include <tencentcloud/tcr/v20190924/model/ManageImageLifecycleGlobalPersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/ManageImageLifecycleGlobalPersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/ManageInternalEndpointRequest.h>
#include <tencentcloud/tcr/v20190924/model/ManageInternalEndpointResponse.h>
#include <tencentcloud/tcr/v20190924/model/ManageReplicationRequest.h>
#include <tencentcloud/tcr/v20190924/model/ManageReplicationResponse.h>
#include <tencentcloud/tcr/v20190924/model/ModifyApplicationTriggerPersonalRequest.h>
#include <tencentcloud/tcr/v20190924/model/ModifyApplicationTriggerPersonalResponse.h>
#include <tencentcloud/tcr/v20190924/model/ModifyImmutableTagRulesRequest.h>
#include <tencentcloud/tcr/v20190924/model/ModifyImmutableTagRulesResponse.h>
#include <tencentcloud/tcr/v20190924/model/ModifyInstanceRequest.h>
#include <tencentcloud/tcr/v20190924/model/ModifyInstanceResponse.h>
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
#include <tencentcloud/tcr/v20190924/model/ModifySecurityPolicyRequest.h>
#include <tencentcloud/tcr/v20190924/model/ModifySecurityPolicyResponse.h>
#include <tencentcloud/tcr/v20190924/model/ModifyServiceAccountRequest.h>
#include <tencentcloud/tcr/v20190924/model/ModifyServiceAccountResponse.h>
#include <tencentcloud/tcr/v20190924/model/ModifyServiceAccountPasswordRequest.h>
#include <tencentcloud/tcr/v20190924/model/ModifyServiceAccountPasswordResponse.h>
#include <tencentcloud/tcr/v20190924/model/ModifyTagRetentionRuleRequest.h>
#include <tencentcloud/tcr/v20190924/model/ModifyTagRetentionRuleResponse.h>
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

                typedef Outcome<Core::Error, Model::BatchDeleteImagePersonalResponse> BatchDeleteImagePersonalOutcome;
                typedef std::future<BatchDeleteImagePersonalOutcome> BatchDeleteImagePersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::BatchDeleteImagePersonalRequest&, BatchDeleteImagePersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeleteImagePersonalAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchDeleteRepositoryPersonalResponse> BatchDeleteRepositoryPersonalOutcome;
                typedef std::future<BatchDeleteRepositoryPersonalOutcome> BatchDeleteRepositoryPersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::BatchDeleteRepositoryPersonalRequest&, BatchDeleteRepositoryPersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeleteRepositoryPersonalAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckInstanceResponse> CheckInstanceOutcome;
                typedef std::future<CheckInstanceOutcome> CheckInstanceOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CheckInstanceRequest&, CheckInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckInstanceNameResponse> CheckInstanceNameOutcome;
                typedef std::future<CheckInstanceNameOutcome> CheckInstanceNameOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CheckInstanceNameRequest&, CheckInstanceNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckInstanceNameAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateApplicationTriggerPersonalResponse> CreateApplicationTriggerPersonalOutcome;
                typedef std::future<CreateApplicationTriggerPersonalOutcome> CreateApplicationTriggerPersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateApplicationTriggerPersonalRequest&, CreateApplicationTriggerPersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationTriggerPersonalAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageAccelerationServiceResponse> CreateImageAccelerationServiceOutcome;
                typedef std::future<CreateImageAccelerationServiceOutcome> CreateImageAccelerationServiceOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateImageAccelerationServiceRequest&, CreateImageAccelerationServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageAccelerationServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImmutableTagRulesResponse> CreateImmutableTagRulesOutcome;
                typedef std::future<CreateImmutableTagRulesOutcome> CreateImmutableTagRulesOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateImmutableTagRulesRequest&, CreateImmutableTagRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImmutableTagRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInstanceResponse> CreateInstanceOutcome;
                typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateInstanceRequest&, CreateInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInstanceCustomizedDomainResponse> CreateInstanceCustomizedDomainOutcome;
                typedef std::future<CreateInstanceCustomizedDomainOutcome> CreateInstanceCustomizedDomainOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateInstanceCustomizedDomainRequest&, CreateInstanceCustomizedDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceCustomizedDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInstanceTokenResponse> CreateInstanceTokenOutcome;
                typedef std::future<CreateInstanceTokenOutcome> CreateInstanceTokenOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateInstanceTokenRequest&, CreateInstanceTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInternalEndpointDnsResponse> CreateInternalEndpointDnsOutcome;
                typedef std::future<CreateInternalEndpointDnsOutcome> CreateInternalEndpointDnsOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateInternalEndpointDnsRequest&, CreateInternalEndpointDnsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInternalEndpointDnsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMultipleSecurityPolicyResponse> CreateMultipleSecurityPolicyOutcome;
                typedef std::future<CreateMultipleSecurityPolicyOutcome> CreateMultipleSecurityPolicyOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateMultipleSecurityPolicyRequest&, CreateMultipleSecurityPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMultipleSecurityPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNamespaceResponse> CreateNamespaceOutcome;
                typedef std::future<CreateNamespaceOutcome> CreateNamespaceOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateNamespaceRequest&, CreateNamespaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNamespaceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNamespacePersonalResponse> CreateNamespacePersonalOutcome;
                typedef std::future<CreateNamespacePersonalOutcome> CreateNamespacePersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateNamespacePersonalRequest&, CreateNamespacePersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNamespacePersonalAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateReplicationInstanceResponse> CreateReplicationInstanceOutcome;
                typedef std::future<CreateReplicationInstanceOutcome> CreateReplicationInstanceOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateReplicationInstanceRequest&, CreateReplicationInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateReplicationInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRepositoryResponse> CreateRepositoryOutcome;
                typedef std::future<CreateRepositoryOutcome> CreateRepositoryOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateRepositoryRequest&, CreateRepositoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRepositoryAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRepositoryPersonalResponse> CreateRepositoryPersonalOutcome;
                typedef std::future<CreateRepositoryPersonalOutcome> CreateRepositoryPersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateRepositoryPersonalRequest&, CreateRepositoryPersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRepositoryPersonalAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSecurityPolicyResponse> CreateSecurityPolicyOutcome;
                typedef std::future<CreateSecurityPolicyOutcome> CreateSecurityPolicyOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateSecurityPolicyRequest&, CreateSecurityPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecurityPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateServiceAccountResponse> CreateServiceAccountOutcome;
                typedef std::future<CreateServiceAccountOutcome> CreateServiceAccountOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateServiceAccountRequest&, CreateServiceAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSignatureResponse> CreateSignatureOutcome;
                typedef std::future<CreateSignatureOutcome> CreateSignatureOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateSignatureRequest&, CreateSignatureOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSignatureAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSignaturePolicyResponse> CreateSignaturePolicyOutcome;
                typedef std::future<CreateSignaturePolicyOutcome> CreateSignaturePolicyOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateSignaturePolicyRequest&, CreateSignaturePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSignaturePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTagRetentionExecutionResponse> CreateTagRetentionExecutionOutcome;
                typedef std::future<CreateTagRetentionExecutionOutcome> CreateTagRetentionExecutionOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateTagRetentionExecutionRequest&, CreateTagRetentionExecutionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTagRetentionExecutionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTagRetentionRuleResponse> CreateTagRetentionRuleOutcome;
                typedef std::future<CreateTagRetentionRuleOutcome> CreateTagRetentionRuleOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateTagRetentionRuleRequest&, CreateTagRetentionRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTagRetentionRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUserPersonalResponse> CreateUserPersonalOutcome;
                typedef std::future<CreateUserPersonalOutcome> CreateUserPersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateUserPersonalRequest&, CreateUserPersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserPersonalAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWebhookTriggerResponse> CreateWebhookTriggerOutcome;
                typedef std::future<CreateWebhookTriggerOutcome> CreateWebhookTriggerOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateWebhookTriggerRequest&, CreateWebhookTriggerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWebhookTriggerAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteApplicationTriggerPersonalResponse> DeleteApplicationTriggerPersonalOutcome;
                typedef std::future<DeleteApplicationTriggerPersonalOutcome> DeleteApplicationTriggerPersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteApplicationTriggerPersonalRequest&, DeleteApplicationTriggerPersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApplicationTriggerPersonalAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteImageResponse> DeleteImageOutcome;
                typedef std::future<DeleteImageOutcome> DeleteImageOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteImageRequest&, DeleteImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteImageAccelerateServiceResponse> DeleteImageAccelerateServiceOutcome;
                typedef std::future<DeleteImageAccelerateServiceOutcome> DeleteImageAccelerateServiceOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteImageAccelerateServiceRequest&, DeleteImageAccelerateServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageAccelerateServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteImageLifecycleGlobalPersonalResponse> DeleteImageLifecycleGlobalPersonalOutcome;
                typedef std::future<DeleteImageLifecycleGlobalPersonalOutcome> DeleteImageLifecycleGlobalPersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteImageLifecycleGlobalPersonalRequest&, DeleteImageLifecycleGlobalPersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageLifecycleGlobalPersonalAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteImagePersonalResponse> DeleteImagePersonalOutcome;
                typedef std::future<DeleteImagePersonalOutcome> DeleteImagePersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteImagePersonalRequest&, DeleteImagePersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImagePersonalAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteImmutableTagRulesResponse> DeleteImmutableTagRulesOutcome;
                typedef std::future<DeleteImmutableTagRulesOutcome> DeleteImmutableTagRulesOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteImmutableTagRulesRequest&, DeleteImmutableTagRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImmutableTagRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteInstanceResponse> DeleteInstanceOutcome;
                typedef std::future<DeleteInstanceOutcome> DeleteInstanceOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteInstanceRequest&, DeleteInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteInstanceCustomizedDomainResponse> DeleteInstanceCustomizedDomainOutcome;
                typedef std::future<DeleteInstanceCustomizedDomainOutcome> DeleteInstanceCustomizedDomainOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteInstanceCustomizedDomainRequest&, DeleteInstanceCustomizedDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInstanceCustomizedDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteInstanceTokenResponse> DeleteInstanceTokenOutcome;
                typedef std::future<DeleteInstanceTokenOutcome> DeleteInstanceTokenOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteInstanceTokenRequest&, DeleteInstanceTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInstanceTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteInternalEndpointDnsResponse> DeleteInternalEndpointDnsOutcome;
                typedef std::future<DeleteInternalEndpointDnsOutcome> DeleteInternalEndpointDnsOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteInternalEndpointDnsRequest&, DeleteInternalEndpointDnsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInternalEndpointDnsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMultipleSecurityPolicyResponse> DeleteMultipleSecurityPolicyOutcome;
                typedef std::future<DeleteMultipleSecurityPolicyOutcome> DeleteMultipleSecurityPolicyOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteMultipleSecurityPolicyRequest&, DeleteMultipleSecurityPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMultipleSecurityPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNamespaceResponse> DeleteNamespaceOutcome;
                typedef std::future<DeleteNamespaceOutcome> DeleteNamespaceOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteNamespaceRequest&, DeleteNamespaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNamespaceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNamespacePersonalResponse> DeleteNamespacePersonalOutcome;
                typedef std::future<DeleteNamespacePersonalOutcome> DeleteNamespacePersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteNamespacePersonalRequest&, DeleteNamespacePersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNamespacePersonalAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteReplicationInstanceResponse> DeleteReplicationInstanceOutcome;
                typedef std::future<DeleteReplicationInstanceOutcome> DeleteReplicationInstanceOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteReplicationInstanceRequest&, DeleteReplicationInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteReplicationInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRepositoryResponse> DeleteRepositoryOutcome;
                typedef std::future<DeleteRepositoryOutcome> DeleteRepositoryOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteRepositoryRequest&, DeleteRepositoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRepositoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRepositoryPersonalResponse> DeleteRepositoryPersonalOutcome;
                typedef std::future<DeleteRepositoryPersonalOutcome> DeleteRepositoryPersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteRepositoryPersonalRequest&, DeleteRepositoryPersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRepositoryPersonalAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRepositoryTagsResponse> DeleteRepositoryTagsOutcome;
                typedef std::future<DeleteRepositoryTagsOutcome> DeleteRepositoryTagsOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteRepositoryTagsRequest&, DeleteRepositoryTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRepositoryTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSecurityPolicyResponse> DeleteSecurityPolicyOutcome;
                typedef std::future<DeleteSecurityPolicyOutcome> DeleteSecurityPolicyOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteSecurityPolicyRequest&, DeleteSecurityPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecurityPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteServiceAccountResponse> DeleteServiceAccountOutcome;
                typedef std::future<DeleteServiceAccountOutcome> DeleteServiceAccountOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteServiceAccountRequest&, DeleteServiceAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServiceAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSignaturePolicyResponse> DeleteSignaturePolicyOutcome;
                typedef std::future<DeleteSignaturePolicyOutcome> DeleteSignaturePolicyOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteSignaturePolicyRequest&, DeleteSignaturePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSignaturePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTagRetentionRuleResponse> DeleteTagRetentionRuleOutcome;
                typedef std::future<DeleteTagRetentionRuleOutcome> DeleteTagRetentionRuleOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteTagRetentionRuleRequest&, DeleteTagRetentionRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTagRetentionRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWebhookTriggerResponse> DeleteWebhookTriggerOutcome;
                typedef std::future<DeleteWebhookTriggerOutcome> DeleteWebhookTriggerOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteWebhookTriggerRequest&, DeleteWebhookTriggerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWebhookTriggerAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationTriggerLogPersonalResponse> DescribeApplicationTriggerLogPersonalOutcome;
                typedef std::future<DescribeApplicationTriggerLogPersonalOutcome> DescribeApplicationTriggerLogPersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeApplicationTriggerLogPersonalRequest&, DescribeApplicationTriggerLogPersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationTriggerLogPersonalAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationTriggerPersonalResponse> DescribeApplicationTriggerPersonalOutcome;
                typedef std::future<DescribeApplicationTriggerPersonalOutcome> DescribeApplicationTriggerPersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeApplicationTriggerPersonalRequest&, DescribeApplicationTriggerPersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationTriggerPersonalAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeChartDownloadInfoResponse> DescribeChartDownloadInfoOutcome;
                typedef std::future<DescribeChartDownloadInfoOutcome> DescribeChartDownloadInfoOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeChartDownloadInfoRequest&, DescribeChartDownloadInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeChartDownloadInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExternalEndpointStatusResponse> DescribeExternalEndpointStatusOutcome;
                typedef std::future<DescribeExternalEndpointStatusOutcome> DescribeExternalEndpointStatusOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeExternalEndpointStatusRequest&, DescribeExternalEndpointStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExternalEndpointStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFavorRepositoryPersonalResponse> DescribeFavorRepositoryPersonalOutcome;
                typedef std::future<DescribeFavorRepositoryPersonalOutcome> DescribeFavorRepositoryPersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeFavorRepositoryPersonalRequest&, DescribeFavorRepositoryPersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFavorRepositoryPersonalAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGCJobsResponse> DescribeGCJobsOutcome;
                typedef std::future<DescribeGCJobsOutcome> DescribeGCJobsOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeGCJobsRequest&, DescribeGCJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGCJobsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageAccelerateServiceResponse> DescribeImageAccelerateServiceOutcome;
                typedef std::future<DescribeImageAccelerateServiceOutcome> DescribeImageAccelerateServiceOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeImageAccelerateServiceRequest&, DescribeImageAccelerateServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageAccelerateServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageFilterPersonalResponse> DescribeImageFilterPersonalOutcome;
                typedef std::future<DescribeImageFilterPersonalOutcome> DescribeImageFilterPersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeImageFilterPersonalRequest&, DescribeImageFilterPersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageFilterPersonalAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageLifecycleGlobalPersonalResponse> DescribeImageLifecycleGlobalPersonalOutcome;
                typedef std::future<DescribeImageLifecycleGlobalPersonalOutcome> DescribeImageLifecycleGlobalPersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeImageLifecycleGlobalPersonalRequest&, DescribeImageLifecycleGlobalPersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageLifecycleGlobalPersonalAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageLifecyclePersonalResponse> DescribeImageLifecyclePersonalOutcome;
                typedef std::future<DescribeImageLifecyclePersonalOutcome> DescribeImageLifecyclePersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeImageLifecyclePersonalRequest&, DescribeImageLifecyclePersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageLifecyclePersonalAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageManifestsResponse> DescribeImageManifestsOutcome;
                typedef std::future<DescribeImageManifestsOutcome> DescribeImageManifestsOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeImageManifestsRequest&, DescribeImageManifestsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageManifestsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImagePersonalResponse> DescribeImagePersonalOutcome;
                typedef std::future<DescribeImagePersonalOutcome> DescribeImagePersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeImagePersonalRequest&, DescribeImagePersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImagePersonalAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImagesResponse> DescribeImagesOutcome;
                typedef std::future<DescribeImagesOutcome> DescribeImagesOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeImagesRequest&, DescribeImagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImagesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImmutableTagRulesResponse> DescribeImmutableTagRulesOutcome;
                typedef std::future<DescribeImmutableTagRulesOutcome> DescribeImmutableTagRulesOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeImmutableTagRulesRequest&, DescribeImmutableTagRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImmutableTagRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceAllNamespacesResponse> DescribeInstanceAllNamespacesOutcome;
                typedef std::future<DescribeInstanceAllNamespacesOutcome> DescribeInstanceAllNamespacesOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeInstanceAllNamespacesRequest&, DescribeInstanceAllNamespacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAllNamespacesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceCustomizedDomainResponse> DescribeInstanceCustomizedDomainOutcome;
                typedef std::future<DescribeInstanceCustomizedDomainOutcome> DescribeInstanceCustomizedDomainOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeInstanceCustomizedDomainRequest&, DescribeInstanceCustomizedDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceCustomizedDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceStatusResponse> DescribeInstanceStatusOutcome;
                typedef std::future<DescribeInstanceStatusOutcome> DescribeInstanceStatusOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeInstanceStatusRequest&, DescribeInstanceStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceTokenResponse> DescribeInstanceTokenOutcome;
                typedef std::future<DescribeInstanceTokenOutcome> DescribeInstanceTokenOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeInstanceTokenRequest&, DescribeInstanceTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesResponse> DescribeInstancesOutcome;
                typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeInstancesRequest&, DescribeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInternalEndpointDnsStatusResponse> DescribeInternalEndpointDnsStatusOutcome;
                typedef std::future<DescribeInternalEndpointDnsStatusOutcome> DescribeInternalEndpointDnsStatusOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeInternalEndpointDnsStatusRequest&, DescribeInternalEndpointDnsStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInternalEndpointDnsStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInternalEndpointsResponse> DescribeInternalEndpointsOutcome;
                typedef std::future<DescribeInternalEndpointsOutcome> DescribeInternalEndpointsOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeInternalEndpointsRequest&, DescribeInternalEndpointsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInternalEndpointsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNamespacePersonalResponse> DescribeNamespacePersonalOutcome;
                typedef std::future<DescribeNamespacePersonalOutcome> DescribeNamespacePersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeNamespacePersonalRequest&, DescribeNamespacePersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNamespacePersonalAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNamespacesResponse> DescribeNamespacesOutcome;
                typedef std::future<DescribeNamespacesOutcome> DescribeNamespacesOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeNamespacesRequest&, DescribeNamespacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNamespacesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRegionsResponse> DescribeRegionsOutcome;
                typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeRegionsRequest&, DescribeRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReplicationInstanceCreateTasksResponse> DescribeReplicationInstanceCreateTasksOutcome;
                typedef std::future<DescribeReplicationInstanceCreateTasksOutcome> DescribeReplicationInstanceCreateTasksOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeReplicationInstanceCreateTasksRequest&, DescribeReplicationInstanceCreateTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReplicationInstanceCreateTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReplicationInstanceSyncStatusResponse> DescribeReplicationInstanceSyncStatusOutcome;
                typedef std::future<DescribeReplicationInstanceSyncStatusOutcome> DescribeReplicationInstanceSyncStatusOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeReplicationInstanceSyncStatusRequest&, DescribeReplicationInstanceSyncStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReplicationInstanceSyncStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReplicationInstancesResponse> DescribeReplicationInstancesOutcome;
                typedef std::future<DescribeReplicationInstancesOutcome> DescribeReplicationInstancesOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeReplicationInstancesRequest&, DescribeReplicationInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReplicationInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRepositoriesResponse> DescribeRepositoriesOutcome;
                typedef std::future<DescribeRepositoriesOutcome> DescribeRepositoriesOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeRepositoriesRequest&, DescribeRepositoriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRepositoriesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRepositoryFilterPersonalResponse> DescribeRepositoryFilterPersonalOutcome;
                typedef std::future<DescribeRepositoryFilterPersonalOutcome> DescribeRepositoryFilterPersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeRepositoryFilterPersonalRequest&, DescribeRepositoryFilterPersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRepositoryFilterPersonalAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRepositoryOwnerPersonalResponse> DescribeRepositoryOwnerPersonalOutcome;
                typedef std::future<DescribeRepositoryOwnerPersonalOutcome> DescribeRepositoryOwnerPersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeRepositoryOwnerPersonalRequest&, DescribeRepositoryOwnerPersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRepositoryOwnerPersonalAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRepositoryPersonalResponse> DescribeRepositoryPersonalOutcome;
                typedef std::future<DescribeRepositoryPersonalOutcome> DescribeRepositoryPersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeRepositoryPersonalRequest&, DescribeRepositoryPersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRepositoryPersonalAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityPoliciesResponse> DescribeSecurityPoliciesOutcome;
                typedef std::future<DescribeSecurityPoliciesOutcome> DescribeSecurityPoliciesOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeSecurityPoliciesRequest&, DescribeSecurityPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeServiceAccountsResponse> DescribeServiceAccountsOutcome;
                typedef std::future<DescribeServiceAccountsOutcome> DescribeServiceAccountsOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeServiceAccountsRequest&, DescribeServiceAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceAccountsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTagRetentionExecutionResponse> DescribeTagRetentionExecutionOutcome;
                typedef std::future<DescribeTagRetentionExecutionOutcome> DescribeTagRetentionExecutionOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeTagRetentionExecutionRequest&, DescribeTagRetentionExecutionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagRetentionExecutionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTagRetentionExecutionTaskResponse> DescribeTagRetentionExecutionTaskOutcome;
                typedef std::future<DescribeTagRetentionExecutionTaskOutcome> DescribeTagRetentionExecutionTaskOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeTagRetentionExecutionTaskRequest&, DescribeTagRetentionExecutionTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagRetentionExecutionTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTagRetentionRulesResponse> DescribeTagRetentionRulesOutcome;
                typedef std::future<DescribeTagRetentionRulesOutcome> DescribeTagRetentionRulesOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeTagRetentionRulesRequest&, DescribeTagRetentionRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagRetentionRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserQuotaPersonalResponse> DescribeUserQuotaPersonalOutcome;
                typedef std::future<DescribeUserQuotaPersonalOutcome> DescribeUserQuotaPersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeUserQuotaPersonalRequest&, DescribeUserQuotaPersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserQuotaPersonalAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebhookTriggerResponse> DescribeWebhookTriggerOutcome;
                typedef std::future<DescribeWebhookTriggerOutcome> DescribeWebhookTriggerOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeWebhookTriggerRequest&, DescribeWebhookTriggerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebhookTriggerAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebhookTriggerLogResponse> DescribeWebhookTriggerLogOutcome;
                typedef std::future<DescribeWebhookTriggerLogOutcome> DescribeWebhookTriggerLogOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeWebhookTriggerLogRequest&, DescribeWebhookTriggerLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebhookTriggerLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DownloadHelmChartResponse> DownloadHelmChartOutcome;
                typedef std::future<DownloadHelmChartOutcome> DownloadHelmChartOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DownloadHelmChartRequest&, DownloadHelmChartOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DownloadHelmChartAsyncHandler;
                typedef Outcome<Core::Error, Model::DuplicateImageResponse> DuplicateImageOutcome;
                typedef std::future<DuplicateImageOutcome> DuplicateImageOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DuplicateImageRequest&, DuplicateImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DuplicateImageAsyncHandler;
                typedef Outcome<Core::Error, Model::DuplicateImagePersonalResponse> DuplicateImagePersonalOutcome;
                typedef std::future<DuplicateImagePersonalOutcome> DuplicateImagePersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DuplicateImagePersonalRequest&, DuplicateImagePersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DuplicateImagePersonalAsyncHandler;
                typedef Outcome<Core::Error, Model::ManageExternalEndpointResponse> ManageExternalEndpointOutcome;
                typedef std::future<ManageExternalEndpointOutcome> ManageExternalEndpointOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::ManageExternalEndpointRequest&, ManageExternalEndpointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ManageExternalEndpointAsyncHandler;
                typedef Outcome<Core::Error, Model::ManageImageLifecycleGlobalPersonalResponse> ManageImageLifecycleGlobalPersonalOutcome;
                typedef std::future<ManageImageLifecycleGlobalPersonalOutcome> ManageImageLifecycleGlobalPersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::ManageImageLifecycleGlobalPersonalRequest&, ManageImageLifecycleGlobalPersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ManageImageLifecycleGlobalPersonalAsyncHandler;
                typedef Outcome<Core::Error, Model::ManageInternalEndpointResponse> ManageInternalEndpointOutcome;
                typedef std::future<ManageInternalEndpointOutcome> ManageInternalEndpointOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::ManageInternalEndpointRequest&, ManageInternalEndpointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ManageInternalEndpointAsyncHandler;
                typedef Outcome<Core::Error, Model::ManageReplicationResponse> ManageReplicationOutcome;
                typedef std::future<ManageReplicationOutcome> ManageReplicationOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::ManageReplicationRequest&, ManageReplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ManageReplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApplicationTriggerPersonalResponse> ModifyApplicationTriggerPersonalOutcome;
                typedef std::future<ModifyApplicationTriggerPersonalOutcome> ModifyApplicationTriggerPersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::ModifyApplicationTriggerPersonalRequest&, ModifyApplicationTriggerPersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApplicationTriggerPersonalAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyImmutableTagRulesResponse> ModifyImmutableTagRulesOutcome;
                typedef std::future<ModifyImmutableTagRulesOutcome> ModifyImmutableTagRulesOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::ModifyImmutableTagRulesRequest&, ModifyImmutableTagRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyImmutableTagRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceResponse> ModifyInstanceOutcome;
                typedef std::future<ModifyInstanceOutcome> ModifyInstanceOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::ModifyInstanceRequest&, ModifyInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceTokenResponse> ModifyInstanceTokenOutcome;
                typedef std::future<ModifyInstanceTokenOutcome> ModifyInstanceTokenOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::ModifyInstanceTokenRequest&, ModifyInstanceTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNamespaceResponse> ModifyNamespaceOutcome;
                typedef std::future<ModifyNamespaceOutcome> ModifyNamespaceOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::ModifyNamespaceRequest&, ModifyNamespaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNamespaceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRepositoryResponse> ModifyRepositoryOutcome;
                typedef std::future<ModifyRepositoryOutcome> ModifyRepositoryOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::ModifyRepositoryRequest&, ModifyRepositoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRepositoryAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRepositoryAccessPersonalResponse> ModifyRepositoryAccessPersonalOutcome;
                typedef std::future<ModifyRepositoryAccessPersonalOutcome> ModifyRepositoryAccessPersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::ModifyRepositoryAccessPersonalRequest&, ModifyRepositoryAccessPersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRepositoryAccessPersonalAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRepositoryInfoPersonalResponse> ModifyRepositoryInfoPersonalOutcome;
                typedef std::future<ModifyRepositoryInfoPersonalOutcome> ModifyRepositoryInfoPersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::ModifyRepositoryInfoPersonalRequest&, ModifyRepositoryInfoPersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRepositoryInfoPersonalAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySecurityPolicyResponse> ModifySecurityPolicyOutcome;
                typedef std::future<ModifySecurityPolicyOutcome> ModifySecurityPolicyOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::ModifySecurityPolicyRequest&, ModifySecurityPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyServiceAccountResponse> ModifyServiceAccountOutcome;
                typedef std::future<ModifyServiceAccountOutcome> ModifyServiceAccountOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::ModifyServiceAccountRequest&, ModifyServiceAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyServiceAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyServiceAccountPasswordResponse> ModifyServiceAccountPasswordOutcome;
                typedef std::future<ModifyServiceAccountPasswordOutcome> ModifyServiceAccountPasswordOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::ModifyServiceAccountPasswordRequest&, ModifyServiceAccountPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyServiceAccountPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTagRetentionRuleResponse> ModifyTagRetentionRuleOutcome;
                typedef std::future<ModifyTagRetentionRuleOutcome> ModifyTagRetentionRuleOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::ModifyTagRetentionRuleRequest&, ModifyTagRetentionRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTagRetentionRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserPasswordPersonalResponse> ModifyUserPasswordPersonalOutcome;
                typedef std::future<ModifyUserPasswordPersonalOutcome> ModifyUserPasswordPersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::ModifyUserPasswordPersonalRequest&, ModifyUserPasswordPersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserPasswordPersonalAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWebhookTriggerResponse> ModifyWebhookTriggerOutcome;
                typedef std::future<ModifyWebhookTriggerOutcome> ModifyWebhookTriggerOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::ModifyWebhookTriggerRequest&, ModifyWebhookTriggerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebhookTriggerAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewInstanceResponse> RenewInstanceOutcome;
                typedef std::future<RenewInstanceOutcome> RenewInstanceOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::RenewInstanceRequest&, RenewInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ValidateNamespaceExistPersonalResponse> ValidateNamespaceExistPersonalOutcome;
                typedef std::future<ValidateNamespaceExistPersonalOutcome> ValidateNamespaceExistPersonalOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::ValidateNamespaceExistPersonalRequest&, ValidateNamespaceExistPersonalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ValidateNamespaceExistPersonalAsyncHandler;
                typedef Outcome<Core::Error, Model::ValidateRepositoryExistPersonalResponse> ValidateRepositoryExistPersonalOutcome;
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
                 *用于校验企业版实例信息
                 * @param req CheckInstanceRequest
                 * @return CheckInstanceOutcome
                 */
                CheckInstanceOutcome CheckInstance(const Model::CheckInstanceRequest &request);
                void CheckInstanceAsync(const Model::CheckInstanceRequest& request, const CheckInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckInstanceOutcomeCallable CheckInstanceCallable(const Model::CheckInstanceRequest& request);

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
                 *创建镜像加速服务
                 * @param req CreateImageAccelerationServiceRequest
                 * @return CreateImageAccelerationServiceOutcome
                 */
                CreateImageAccelerationServiceOutcome CreateImageAccelerationService(const Model::CreateImageAccelerationServiceRequest &request);
                void CreateImageAccelerationServiceAsync(const Model::CreateImageAccelerationServiceRequest& request, const CreateImageAccelerationServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageAccelerationServiceOutcomeCallable CreateImageAccelerationServiceCallable(const Model::CreateImageAccelerationServiceRequest& request);

                /**
                 *创建镜像不可变规则
                 * @param req CreateImmutableTagRulesRequest
                 * @return CreateImmutableTagRulesOutcome
                 */
                CreateImmutableTagRulesOutcome CreateImmutableTagRules(const Model::CreateImmutableTagRulesRequest &request);
                void CreateImmutableTagRulesAsync(const Model::CreateImmutableTagRulesRequest& request, const CreateImmutableTagRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImmutableTagRulesOutcomeCallable CreateImmutableTagRulesCallable(const Model::CreateImmutableTagRulesRequest& request);

                /**
                 *创建实例
                 * @param req CreateInstanceRequest
                 * @return CreateInstanceOutcome
                 */
                CreateInstanceOutcome CreateInstance(const Model::CreateInstanceRequest &request);
                void CreateInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstanceOutcomeCallable CreateInstanceCallable(const Model::CreateInstanceRequest& request);

                /**
                 *创建自定义域名
                 * @param req CreateInstanceCustomizedDomainRequest
                 * @return CreateInstanceCustomizedDomainOutcome
                 */
                CreateInstanceCustomizedDomainOutcome CreateInstanceCustomizedDomain(const Model::CreateInstanceCustomizedDomainRequest &request);
                void CreateInstanceCustomizedDomainAsync(const Model::CreateInstanceCustomizedDomainRequest& request, const CreateInstanceCustomizedDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstanceCustomizedDomainOutcomeCallable CreateInstanceCustomizedDomainCallable(const Model::CreateInstanceCustomizedDomainRequest& request);

                /**
                 *创建实例的临时或长期访问凭证
                 * @param req CreateInstanceTokenRequest
                 * @return CreateInstanceTokenOutcome
                 */
                CreateInstanceTokenOutcome CreateInstanceToken(const Model::CreateInstanceTokenRequest &request);
                void CreateInstanceTokenAsync(const Model::CreateInstanceTokenRequest& request, const CreateInstanceTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstanceTokenOutcomeCallable CreateInstanceTokenCallable(const Model::CreateInstanceTokenRequest& request);

                /**
                 *创建tcr内网私有域名解析
                 * @param req CreateInternalEndpointDnsRequest
                 * @return CreateInternalEndpointDnsOutcome
                 */
                CreateInternalEndpointDnsOutcome CreateInternalEndpointDns(const Model::CreateInternalEndpointDnsRequest &request);
                void CreateInternalEndpointDnsAsync(const Model::CreateInternalEndpointDnsRequest& request, const CreateInternalEndpointDnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInternalEndpointDnsOutcomeCallable CreateInternalEndpointDnsCallable(const Model::CreateInternalEndpointDnsRequest& request);

                /**
                 *用于在TCR实例中，创建多个白名单策略
                 * @param req CreateMultipleSecurityPolicyRequest
                 * @return CreateMultipleSecurityPolicyOutcome
                 */
                CreateMultipleSecurityPolicyOutcome CreateMultipleSecurityPolicy(const Model::CreateMultipleSecurityPolicyRequest &request);
                void CreateMultipleSecurityPolicyAsync(const Model::CreateMultipleSecurityPolicyRequest& request, const CreateMultipleSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMultipleSecurityPolicyOutcomeCallable CreateMultipleSecurityPolicyCallable(const Model::CreateMultipleSecurityPolicyRequest& request);

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
                 *创建从实例
                 * @param req CreateReplicationInstanceRequest
                 * @return CreateReplicationInstanceOutcome
                 */
                CreateReplicationInstanceOutcome CreateReplicationInstance(const Model::CreateReplicationInstanceRequest &request);
                void CreateReplicationInstanceAsync(const Model::CreateReplicationInstanceRequest& request, const CreateReplicationInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateReplicationInstanceOutcomeCallable CreateReplicationInstanceCallable(const Model::CreateReplicationInstanceRequest& request);

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
                 *创建实例公网访问白名单策略
                 * @param req CreateSecurityPolicyRequest
                 * @return CreateSecurityPolicyOutcome
                 */
                CreateSecurityPolicyOutcome CreateSecurityPolicy(const Model::CreateSecurityPolicyRequest &request);
                void CreateSecurityPolicyAsync(const Model::CreateSecurityPolicyRequest& request, const CreateSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSecurityPolicyOutcomeCallable CreateSecurityPolicyCallable(const Model::CreateSecurityPolicyRequest& request);

                /**
                 *创建服务级账户
                 * @param req CreateServiceAccountRequest
                 * @return CreateServiceAccountOutcome
                 */
                CreateServiceAccountOutcome CreateServiceAccount(const Model::CreateServiceAccountRequest &request);
                void CreateServiceAccountAsync(const Model::CreateServiceAccountRequest& request, const CreateServiceAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateServiceAccountOutcomeCallable CreateServiceAccountCallable(const Model::CreateServiceAccountRequest& request);

                /**
                 *为一个镜像版本创建签名
                 * @param req CreateSignatureRequest
                 * @return CreateSignatureOutcome
                 */
                CreateSignatureOutcome CreateSignature(const Model::CreateSignatureRequest &request);
                void CreateSignatureAsync(const Model::CreateSignatureRequest& request, const CreateSignatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSignatureOutcomeCallable CreateSignatureCallable(const Model::CreateSignatureRequest& request);

                /**
                 *创建镜像签名策略
                 * @param req CreateSignaturePolicyRequest
                 * @return CreateSignaturePolicyOutcome
                 */
                CreateSignaturePolicyOutcome CreateSignaturePolicy(const Model::CreateSignaturePolicyRequest &request);
                void CreateSignaturePolicyAsync(const Model::CreateSignaturePolicyRequest& request, const CreateSignaturePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSignaturePolicyOutcomeCallable CreateSignaturePolicyCallable(const Model::CreateSignaturePolicyRequest& request);

                /**
                 *手动执行版本保留
                 * @param req CreateTagRetentionExecutionRequest
                 * @return CreateTagRetentionExecutionOutcome
                 */
                CreateTagRetentionExecutionOutcome CreateTagRetentionExecution(const Model::CreateTagRetentionExecutionRequest &request);
                void CreateTagRetentionExecutionAsync(const Model::CreateTagRetentionExecutionRequest& request, const CreateTagRetentionExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTagRetentionExecutionOutcomeCallable CreateTagRetentionExecutionCallable(const Model::CreateTagRetentionExecutionRequest& request);

                /**
                 *创建版本保留规则
                 * @param req CreateTagRetentionRuleRequest
                 * @return CreateTagRetentionRuleOutcome
                 */
                CreateTagRetentionRuleOutcome CreateTagRetentionRule(const Model::CreateTagRetentionRuleRequest &request);
                void CreateTagRetentionRuleAsync(const Model::CreateTagRetentionRuleRequest& request, const CreateTagRetentionRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTagRetentionRuleOutcomeCallable CreateTagRetentionRuleCallable(const Model::CreateTagRetentionRuleRequest& request);

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
                 *删除镜像加速服务
                 * @param req DeleteImageAccelerateServiceRequest
                 * @return DeleteImageAccelerateServiceOutcome
                 */
                DeleteImageAccelerateServiceOutcome DeleteImageAccelerateService(const Model::DeleteImageAccelerateServiceRequest &request);
                void DeleteImageAccelerateServiceAsync(const Model::DeleteImageAccelerateServiceRequest& request, const DeleteImageAccelerateServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteImageAccelerateServiceOutcomeCallable DeleteImageAccelerateServiceCallable(const Model::DeleteImageAccelerateServiceRequest& request);

                /**
                 *用于删除个人版全局镜像版本自动清理策略
                 * @param req DeleteImageLifecycleGlobalPersonalRequest
                 * @return DeleteImageLifecycleGlobalPersonalOutcome
                 */
                DeleteImageLifecycleGlobalPersonalOutcome DeleteImageLifecycleGlobalPersonal(const Model::DeleteImageLifecycleGlobalPersonalRequest &request);
                void DeleteImageLifecycleGlobalPersonalAsync(const Model::DeleteImageLifecycleGlobalPersonalRequest& request, const DeleteImageLifecycleGlobalPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteImageLifecycleGlobalPersonalOutcomeCallable DeleteImageLifecycleGlobalPersonalCallable(const Model::DeleteImageLifecycleGlobalPersonalRequest& request);

                /**
                 *用于在个人版中删除tag
                 * @param req DeleteImagePersonalRequest
                 * @return DeleteImagePersonalOutcome
                 */
                DeleteImagePersonalOutcome DeleteImagePersonal(const Model::DeleteImagePersonalRequest &request);
                void DeleteImagePersonalAsync(const Model::DeleteImagePersonalRequest& request, const DeleteImagePersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteImagePersonalOutcomeCallable DeleteImagePersonalCallable(const Model::DeleteImagePersonalRequest& request);

                /**
                 * 删除镜像不可变规则
                 * @param req DeleteImmutableTagRulesRequest
                 * @return DeleteImmutableTagRulesOutcome
                 */
                DeleteImmutableTagRulesOutcome DeleteImmutableTagRules(const Model::DeleteImmutableTagRulesRequest &request);
                void DeleteImmutableTagRulesAsync(const Model::DeleteImmutableTagRulesRequest& request, const DeleteImmutableTagRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteImmutableTagRulesOutcomeCallable DeleteImmutableTagRulesCallable(const Model::DeleteImmutableTagRulesRequest& request);

                /**
                 *删除镜像仓库企业版实例
                 * @param req DeleteInstanceRequest
                 * @return DeleteInstanceOutcome
                 */
                DeleteInstanceOutcome DeleteInstance(const Model::DeleteInstanceRequest &request);
                void DeleteInstanceAsync(const Model::DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteInstanceOutcomeCallable DeleteInstanceCallable(const Model::DeleteInstanceRequest& request);

                /**
                 *删除自定义域名
                 * @param req DeleteInstanceCustomizedDomainRequest
                 * @return DeleteInstanceCustomizedDomainOutcome
                 */
                DeleteInstanceCustomizedDomainOutcome DeleteInstanceCustomizedDomain(const Model::DeleteInstanceCustomizedDomainRequest &request);
                void DeleteInstanceCustomizedDomainAsync(const Model::DeleteInstanceCustomizedDomainRequest& request, const DeleteInstanceCustomizedDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteInstanceCustomizedDomainOutcomeCallable DeleteInstanceCustomizedDomainCallable(const Model::DeleteInstanceCustomizedDomainRequest& request);

                /**
                 *删除长期访问凭证
                 * @param req DeleteInstanceTokenRequest
                 * @return DeleteInstanceTokenOutcome
                 */
                DeleteInstanceTokenOutcome DeleteInstanceToken(const Model::DeleteInstanceTokenRequest &request);
                void DeleteInstanceTokenAsync(const Model::DeleteInstanceTokenRequest& request, const DeleteInstanceTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteInstanceTokenOutcomeCallable DeleteInstanceTokenCallable(const Model::DeleteInstanceTokenRequest& request);

                /**
                 *删除tcr内网私有域名解析
                 * @param req DeleteInternalEndpointDnsRequest
                 * @return DeleteInternalEndpointDnsOutcome
                 */
                DeleteInternalEndpointDnsOutcome DeleteInternalEndpointDns(const Model::DeleteInternalEndpointDnsRequest &request);
                void DeleteInternalEndpointDnsAsync(const Model::DeleteInternalEndpointDnsRequest& request, const DeleteInternalEndpointDnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteInternalEndpointDnsOutcomeCallable DeleteInternalEndpointDnsCallable(const Model::DeleteInternalEndpointDnsRequest& request);

                /**
                 *用于删除实例多个公网访问白名单策略
                 * @param req DeleteMultipleSecurityPolicyRequest
                 * @return DeleteMultipleSecurityPolicyOutcome
                 */
                DeleteMultipleSecurityPolicyOutcome DeleteMultipleSecurityPolicy(const Model::DeleteMultipleSecurityPolicyRequest &request);
                void DeleteMultipleSecurityPolicyAsync(const Model::DeleteMultipleSecurityPolicyRequest& request, const DeleteMultipleSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMultipleSecurityPolicyOutcomeCallable DeleteMultipleSecurityPolicyCallable(const Model::DeleteMultipleSecurityPolicyRequest& request);

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
                 *删除从实例
                 * @param req DeleteReplicationInstanceRequest
                 * @return DeleteReplicationInstanceOutcome
                 */
                DeleteReplicationInstanceOutcome DeleteReplicationInstance(const Model::DeleteReplicationInstanceRequest &request);
                void DeleteReplicationInstanceAsync(const Model::DeleteReplicationInstanceRequest& request, const DeleteReplicationInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteReplicationInstanceOutcomeCallable DeleteReplicationInstanceCallable(const Model::DeleteReplicationInstanceRequest& request);

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
                 *用于企业版批量删除Repository Tag
                 * @param req DeleteRepositoryTagsRequest
                 * @return DeleteRepositoryTagsOutcome
                 */
                DeleteRepositoryTagsOutcome DeleteRepositoryTags(const Model::DeleteRepositoryTagsRequest &request);
                void DeleteRepositoryTagsAsync(const Model::DeleteRepositoryTagsRequest& request, const DeleteRepositoryTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRepositoryTagsOutcomeCallable DeleteRepositoryTagsCallable(const Model::DeleteRepositoryTagsRequest& request);

                /**
                 *删除实例公网访问白名单策略

注意：当PolicyIndex和CidrBlock同时存在时，CidrBlock优先级更高
                 * @param req DeleteSecurityPolicyRequest
                 * @return DeleteSecurityPolicyOutcome
                 */
                DeleteSecurityPolicyOutcome DeleteSecurityPolicy(const Model::DeleteSecurityPolicyRequest &request);
                void DeleteSecurityPolicyAsync(const Model::DeleteSecurityPolicyRequest& request, const DeleteSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSecurityPolicyOutcomeCallable DeleteSecurityPolicyCallable(const Model::DeleteSecurityPolicyRequest& request);

                /**
                 *删除服务级账号
                 * @param req DeleteServiceAccountRequest
                 * @return DeleteServiceAccountOutcome
                 */
                DeleteServiceAccountOutcome DeleteServiceAccount(const Model::DeleteServiceAccountRequest &request);
                void DeleteServiceAccountAsync(const Model::DeleteServiceAccountRequest& request, const DeleteServiceAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteServiceAccountOutcomeCallable DeleteServiceAccountCallable(const Model::DeleteServiceAccountRequest& request);

                /**
                 *删除命名空间加签策略
                 * @param req DeleteSignaturePolicyRequest
                 * @return DeleteSignaturePolicyOutcome
                 */
                DeleteSignaturePolicyOutcome DeleteSignaturePolicy(const Model::DeleteSignaturePolicyRequest &request);
                void DeleteSignaturePolicyAsync(const Model::DeleteSignaturePolicyRequest& request, const DeleteSignaturePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSignaturePolicyOutcomeCallable DeleteSignaturePolicyCallable(const Model::DeleteSignaturePolicyRequest& request);

                /**
                 *删除版本保留规则
                 * @param req DeleteTagRetentionRuleRequest
                 * @return DeleteTagRetentionRuleOutcome
                 */
                DeleteTagRetentionRuleOutcome DeleteTagRetentionRule(const Model::DeleteTagRetentionRuleRequest &request);
                void DeleteTagRetentionRuleAsync(const Model::DeleteTagRetentionRuleRequest& request, const DeleteTagRetentionRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTagRetentionRuleOutcomeCallable DeleteTagRetentionRuleCallable(const Model::DeleteTagRetentionRuleRequest& request);

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
                 *用于在企业版中返回Chart的下载信息
                 * @param req DescribeChartDownloadInfoRequest
                 * @return DescribeChartDownloadInfoOutcome
                 */
                DescribeChartDownloadInfoOutcome DescribeChartDownloadInfo(const Model::DescribeChartDownloadInfoRequest &request);
                void DescribeChartDownloadInfoAsync(const Model::DescribeChartDownloadInfoRequest& request, const DescribeChartDownloadInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeChartDownloadInfoOutcomeCallable DescribeChartDownloadInfoCallable(const Model::DescribeChartDownloadInfoRequest& request);

                /**
                 *查询实例公网访问入口状态
                 * @param req DescribeExternalEndpointStatusRequest
                 * @return DescribeExternalEndpointStatusOutcome
                 */
                DescribeExternalEndpointStatusOutcome DescribeExternalEndpointStatus(const Model::DescribeExternalEndpointStatusRequest &request);
                void DescribeExternalEndpointStatusAsync(const Model::DescribeExternalEndpointStatusRequest& request, const DescribeExternalEndpointStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExternalEndpointStatusOutcomeCallable DescribeExternalEndpointStatusCallable(const Model::DescribeExternalEndpointStatusRequest& request);

                /**
                 *查询个人收藏仓库
                 * @param req DescribeFavorRepositoryPersonalRequest
                 * @return DescribeFavorRepositoryPersonalOutcome
                 */
                DescribeFavorRepositoryPersonalOutcome DescribeFavorRepositoryPersonal(const Model::DescribeFavorRepositoryPersonalRequest &request);
                void DescribeFavorRepositoryPersonalAsync(const Model::DescribeFavorRepositoryPersonalRequest& request, const DescribeFavorRepositoryPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFavorRepositoryPersonalOutcomeCallable DescribeFavorRepositoryPersonalCallable(const Model::DescribeFavorRepositoryPersonalRequest& request);

                /**
                 *GC 最近10条历史
                 * @param req DescribeGCJobsRequest
                 * @return DescribeGCJobsOutcome
                 */
                DescribeGCJobsOutcome DescribeGCJobs(const Model::DescribeGCJobsRequest &request);
                void DescribeGCJobsAsync(const Model::DescribeGCJobsRequest& request, const DescribeGCJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGCJobsOutcomeCallable DescribeGCJobsCallable(const Model::DescribeGCJobsRequest& request);

                /**
                 *查询镜像加速服务状态
                 * @param req DescribeImageAccelerateServiceRequest
                 * @return DescribeImageAccelerateServiceOutcome
                 */
                DescribeImageAccelerateServiceOutcome DescribeImageAccelerateService(const Model::DescribeImageAccelerateServiceRequest &request);
                void DescribeImageAccelerateServiceAsync(const Model::DescribeImageAccelerateServiceRequest& request, const DescribeImageAccelerateServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageAccelerateServiceOutcomeCallable DescribeImageAccelerateServiceCallable(const Model::DescribeImageAccelerateServiceRequest& request);

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
                 *列出镜像不可变规则
                 * @param req DescribeImmutableTagRulesRequest
                 * @return DescribeImmutableTagRulesOutcome
                 */
                DescribeImmutableTagRulesOutcome DescribeImmutableTagRules(const Model::DescribeImmutableTagRulesRequest &request);
                void DescribeImmutableTagRulesAsync(const Model::DescribeImmutableTagRulesRequest& request, const DescribeImmutableTagRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImmutableTagRulesOutcomeCallable DescribeImmutableTagRulesCallable(const Model::DescribeImmutableTagRulesRequest& request);

                /**
                 *查询所有有实例命名空间列表
                 * @param req DescribeInstanceAllNamespacesRequest
                 * @return DescribeInstanceAllNamespacesOutcome
                 */
                DescribeInstanceAllNamespacesOutcome DescribeInstanceAllNamespaces(const Model::DescribeInstanceAllNamespacesRequest &request);
                void DescribeInstanceAllNamespacesAsync(const Model::DescribeInstanceAllNamespacesRequest& request, const DescribeInstanceAllNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceAllNamespacesOutcomeCallable DescribeInstanceAllNamespacesCallable(const Model::DescribeInstanceAllNamespacesRequest& request);

                /**
                 *查询实例自定义域名列表
                 * @param req DescribeInstanceCustomizedDomainRequest
                 * @return DescribeInstanceCustomizedDomainOutcome
                 */
                DescribeInstanceCustomizedDomainOutcome DescribeInstanceCustomizedDomain(const Model::DescribeInstanceCustomizedDomainRequest &request);
                void DescribeInstanceCustomizedDomainAsync(const Model::DescribeInstanceCustomizedDomainRequest& request, const DescribeInstanceCustomizedDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceCustomizedDomainOutcomeCallable DescribeInstanceCustomizedDomainCallable(const Model::DescribeInstanceCustomizedDomainRequest& request);

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
                 *批量查询vpc是否已经添加私有域名解析
                 * @param req DescribeInternalEndpointDnsStatusRequest
                 * @return DescribeInternalEndpointDnsStatusOutcome
                 */
                DescribeInternalEndpointDnsStatusOutcome DescribeInternalEndpointDnsStatus(const Model::DescribeInternalEndpointDnsStatusRequest &request);
                void DescribeInternalEndpointDnsStatusAsync(const Model::DescribeInternalEndpointDnsStatusRequest& request, const DescribeInternalEndpointDnsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInternalEndpointDnsStatusOutcomeCallable DescribeInternalEndpointDnsStatusCallable(const Model::DescribeInternalEndpointDnsStatusRequest& request);

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
                 *用于在TCR中获取可用区域
                 * @param req DescribeRegionsRequest
                 * @return DescribeRegionsOutcome
                 */
                DescribeRegionsOutcome DescribeRegions(const Model::DescribeRegionsRequest &request);
                void DescribeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRegionsOutcomeCallable DescribeRegionsCallable(const Model::DescribeRegionsRequest& request);

                /**
                 *查询创建从实例任务状态
                 * @param req DescribeReplicationInstanceCreateTasksRequest
                 * @return DescribeReplicationInstanceCreateTasksOutcome
                 */
                DescribeReplicationInstanceCreateTasksOutcome DescribeReplicationInstanceCreateTasks(const Model::DescribeReplicationInstanceCreateTasksRequest &request);
                void DescribeReplicationInstanceCreateTasksAsync(const Model::DescribeReplicationInstanceCreateTasksRequest& request, const DescribeReplicationInstanceCreateTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReplicationInstanceCreateTasksOutcomeCallable DescribeReplicationInstanceCreateTasksCallable(const Model::DescribeReplicationInstanceCreateTasksRequest& request);

                /**
                 *查询从实例同步状态
                 * @param req DescribeReplicationInstanceSyncStatusRequest
                 * @return DescribeReplicationInstanceSyncStatusOutcome
                 */
                DescribeReplicationInstanceSyncStatusOutcome DescribeReplicationInstanceSyncStatus(const Model::DescribeReplicationInstanceSyncStatusRequest &request);
                void DescribeReplicationInstanceSyncStatusAsync(const Model::DescribeReplicationInstanceSyncStatusRequest& request, const DescribeReplicationInstanceSyncStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReplicationInstanceSyncStatusOutcomeCallable DescribeReplicationInstanceSyncStatusCallable(const Model::DescribeReplicationInstanceSyncStatusRequest& request);

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
                 *查询实例公网访问白名单策略
                 * @param req DescribeSecurityPoliciesRequest
                 * @return DescribeSecurityPoliciesOutcome
                 */
                DescribeSecurityPoliciesOutcome DescribeSecurityPolicies(const Model::DescribeSecurityPoliciesRequest &request);
                void DescribeSecurityPoliciesAsync(const Model::DescribeSecurityPoliciesRequest& request, const DescribeSecurityPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityPoliciesOutcomeCallable DescribeSecurityPoliciesCallable(const Model::DescribeSecurityPoliciesRequest& request);

                /**
                 *查询服务级账号
                 * @param req DescribeServiceAccountsRequest
                 * @return DescribeServiceAccountsOutcome
                 */
                DescribeServiceAccountsOutcome DescribeServiceAccounts(const Model::DescribeServiceAccountsRequest &request);
                void DescribeServiceAccountsAsync(const Model::DescribeServiceAccountsRequest& request, const DescribeServiceAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServiceAccountsOutcomeCallable DescribeServiceAccountsCallable(const Model::DescribeServiceAccountsRequest& request);

                /**
                 *查询版本保留执行记录
                 * @param req DescribeTagRetentionExecutionRequest
                 * @return DescribeTagRetentionExecutionOutcome
                 */
                DescribeTagRetentionExecutionOutcome DescribeTagRetentionExecution(const Model::DescribeTagRetentionExecutionRequest &request);
                void DescribeTagRetentionExecutionAsync(const Model::DescribeTagRetentionExecutionRequest& request, const DescribeTagRetentionExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTagRetentionExecutionOutcomeCallable DescribeTagRetentionExecutionCallable(const Model::DescribeTagRetentionExecutionRequest& request);

                /**
                 *查询版本保留执行任务
                 * @param req DescribeTagRetentionExecutionTaskRequest
                 * @return DescribeTagRetentionExecutionTaskOutcome
                 */
                DescribeTagRetentionExecutionTaskOutcome DescribeTagRetentionExecutionTask(const Model::DescribeTagRetentionExecutionTaskRequest &request);
                void DescribeTagRetentionExecutionTaskAsync(const Model::DescribeTagRetentionExecutionTaskRequest& request, const DescribeTagRetentionExecutionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTagRetentionExecutionTaskOutcomeCallable DescribeTagRetentionExecutionTaskCallable(const Model::DescribeTagRetentionExecutionTaskRequest& request);

                /**
                 *查询镜像版本保留规则
                 * @param req DescribeTagRetentionRulesRequest
                 * @return DescribeTagRetentionRulesOutcome
                 */
                DescribeTagRetentionRulesOutcome DescribeTagRetentionRules(const Model::DescribeTagRetentionRulesRequest &request);
                void DescribeTagRetentionRulesAsync(const Model::DescribeTagRetentionRulesRequest& request, const DescribeTagRetentionRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTagRetentionRulesOutcomeCallable DescribeTagRetentionRulesCallable(const Model::DescribeTagRetentionRulesRequest& request);

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
                 *用于在TCR中下载helm chart
                 * @param req DownloadHelmChartRequest
                 * @return DownloadHelmChartOutcome
                 */
                DownloadHelmChartOutcome DownloadHelmChart(const Model::DownloadHelmChartRequest &request);
                void DownloadHelmChartAsync(const Model::DownloadHelmChartRequest& request, const DownloadHelmChartAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DownloadHelmChartOutcomeCallable DownloadHelmChartCallable(const Model::DownloadHelmChartRequest& request);

                /**
                 *用于在企业版镜像仓库中复制镜像版本
                 * @param req DuplicateImageRequest
                 * @return DuplicateImageOutcome
                 */
                DuplicateImageOutcome DuplicateImage(const Model::DuplicateImageRequest &request);
                void DuplicateImageAsync(const Model::DuplicateImageRequest& request, const DuplicateImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DuplicateImageOutcomeCallable DuplicateImageCallable(const Model::DuplicateImageRequest& request);

                /**
                 *用于在个人版镜像仓库中复制镜像版本
                 * @param req DuplicateImagePersonalRequest
                 * @return DuplicateImagePersonalOutcome
                 */
                DuplicateImagePersonalOutcome DuplicateImagePersonal(const Model::DuplicateImagePersonalRequest &request);
                void DuplicateImagePersonalAsync(const Model::DuplicateImagePersonalRequest& request, const DuplicateImagePersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DuplicateImagePersonalOutcomeCallable DuplicateImagePersonalCallable(const Model::DuplicateImagePersonalRequest& request);

                /**
                 *管理实例公网访问
                 * @param req ManageExternalEndpointRequest
                 * @return ManageExternalEndpointOutcome
                 */
                ManageExternalEndpointOutcome ManageExternalEndpoint(const Model::ManageExternalEndpointRequest &request);
                void ManageExternalEndpointAsync(const Model::ManageExternalEndpointRequest& request, const ManageExternalEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ManageExternalEndpointOutcomeCallable ManageExternalEndpointCallable(const Model::ManageExternalEndpointRequest& request);

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
                 *管理实例同步
                 * @param req ManageReplicationRequest
                 * @return ManageReplicationOutcome
                 */
                ManageReplicationOutcome ManageReplication(const Model::ManageReplicationRequest &request);
                void ManageReplicationAsync(const Model::ManageReplicationRequest& request, const ManageReplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ManageReplicationOutcomeCallable ManageReplicationCallable(const Model::ManageReplicationRequest& request);

                /**
                 *用于修改应用更新触发器
                 * @param req ModifyApplicationTriggerPersonalRequest
                 * @return ModifyApplicationTriggerPersonalOutcome
                 */
                ModifyApplicationTriggerPersonalOutcome ModifyApplicationTriggerPersonal(const Model::ModifyApplicationTriggerPersonalRequest &request);
                void ModifyApplicationTriggerPersonalAsync(const Model::ModifyApplicationTriggerPersonalRequest& request, const ModifyApplicationTriggerPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApplicationTriggerPersonalOutcomeCallable ModifyApplicationTriggerPersonalCallable(const Model::ModifyApplicationTriggerPersonalRequest& request);

                /**
                 *更新镜像不可变规则
                 * @param req ModifyImmutableTagRulesRequest
                 * @return ModifyImmutableTagRulesOutcome
                 */
                ModifyImmutableTagRulesOutcome ModifyImmutableTagRules(const Model::ModifyImmutableTagRulesRequest &request);
                void ModifyImmutableTagRulesAsync(const Model::ModifyImmutableTagRulesRequest& request, const ModifyImmutableTagRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyImmutableTagRulesOutcomeCallable ModifyImmutableTagRulesCallable(const Model::ModifyImmutableTagRulesRequest& request);

                /**
                 *更新实例信息
                 * @param req ModifyInstanceRequest
                 * @return ModifyInstanceOutcome
                 */
                ModifyInstanceOutcome ModifyInstance(const Model::ModifyInstanceRequest &request);
                void ModifyInstanceAsync(const Model::ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceOutcomeCallable ModifyInstanceCallable(const Model::ModifyInstanceRequest& request);

                /**
                 *更新实例内指定长期访问凭证的启用状态
                 * @param req ModifyInstanceTokenRequest
                 * @return ModifyInstanceTokenOutcome
                 */
                ModifyInstanceTokenOutcome ModifyInstanceToken(const Model::ModifyInstanceTokenRequest &request);
                void ModifyInstanceTokenAsync(const Model::ModifyInstanceTokenRequest& request, const ModifyInstanceTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceTokenOutcomeCallable ModifyInstanceTokenCallable(const Model::ModifyInstanceTokenRequest& request);

                /**
                 *更新命名空间信息
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
                 *更新实例公网访问白名单
                 * @param req ModifySecurityPolicyRequest
                 * @return ModifySecurityPolicyOutcome
                 */
                ModifySecurityPolicyOutcome ModifySecurityPolicy(const Model::ModifySecurityPolicyRequest &request);
                void ModifySecurityPolicyAsync(const Model::ModifySecurityPolicyRequest& request, const ModifySecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySecurityPolicyOutcomeCallable ModifySecurityPolicyCallable(const Model::ModifySecurityPolicyRequest& request);

                /**
                 *更新服务级账号
                 * @param req ModifyServiceAccountRequest
                 * @return ModifyServiceAccountOutcome
                 */
                ModifyServiceAccountOutcome ModifyServiceAccount(const Model::ModifyServiceAccountRequest &request);
                void ModifyServiceAccountAsync(const Model::ModifyServiceAccountRequest& request, const ModifyServiceAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyServiceAccountOutcomeCallable ModifyServiceAccountCallable(const Model::ModifyServiceAccountRequest& request);

                /**
                 *更新服务级账号密码
                 * @param req ModifyServiceAccountPasswordRequest
                 * @return ModifyServiceAccountPasswordOutcome
                 */
                ModifyServiceAccountPasswordOutcome ModifyServiceAccountPassword(const Model::ModifyServiceAccountPasswordRequest &request);
                void ModifyServiceAccountPasswordAsync(const Model::ModifyServiceAccountPasswordRequest& request, const ModifyServiceAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyServiceAccountPasswordOutcomeCallable ModifyServiceAccountPasswordCallable(const Model::ModifyServiceAccountPasswordRequest& request);

                /**
                 *更新版本保留规则
                 * @param req ModifyTagRetentionRuleRequest
                 * @return ModifyTagRetentionRuleOutcome
                 */
                ModifyTagRetentionRuleOutcome ModifyTagRetentionRule(const Model::ModifyTagRetentionRuleRequest &request);
                void ModifyTagRetentionRuleAsync(const Model::ModifyTagRetentionRuleRequest& request, const ModifyTagRetentionRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTagRetentionRuleOutcomeCallable ModifyTagRetentionRuleCallable(const Model::ModifyTagRetentionRuleRequest& request);

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
