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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_APIGATEWAYCLIENT_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_APIGATEWAYCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/apigateway/v20180808/model/AttachPluginRequest.h>
#include <tencentcloud/apigateway/v20180808/model/AttachPluginResponse.h>
#include <tencentcloud/apigateway/v20180808/model/BindApiAppRequest.h>
#include <tencentcloud/apigateway/v20180808/model/BindApiAppResponse.h>
#include <tencentcloud/apigateway/v20180808/model/BindEnvironmentRequest.h>
#include <tencentcloud/apigateway/v20180808/model/BindEnvironmentResponse.h>
#include <tencentcloud/apigateway/v20180808/model/BindIPStrategyRequest.h>
#include <tencentcloud/apigateway/v20180808/model/BindIPStrategyResponse.h>
#include <tencentcloud/apigateway/v20180808/model/BindSecretIdsRequest.h>
#include <tencentcloud/apigateway/v20180808/model/BindSecretIdsResponse.h>
#include <tencentcloud/apigateway/v20180808/model/BindSubDomainRequest.h>
#include <tencentcloud/apigateway/v20180808/model/BindSubDomainResponse.h>
#include <tencentcloud/apigateway/v20180808/model/BuildAPIDocRequest.h>
#include <tencentcloud/apigateway/v20180808/model/BuildAPIDocResponse.h>
#include <tencentcloud/apigateway/v20180808/model/CreateAPIDocRequest.h>
#include <tencentcloud/apigateway/v20180808/model/CreateAPIDocResponse.h>
#include <tencentcloud/apigateway/v20180808/model/CreateApiRequest.h>
#include <tencentcloud/apigateway/v20180808/model/CreateApiResponse.h>
#include <tencentcloud/apigateway/v20180808/model/CreateApiAppRequest.h>
#include <tencentcloud/apigateway/v20180808/model/CreateApiAppResponse.h>
#include <tencentcloud/apigateway/v20180808/model/CreateApiKeyRequest.h>
#include <tencentcloud/apigateway/v20180808/model/CreateApiKeyResponse.h>
#include <tencentcloud/apigateway/v20180808/model/CreateExclusiveInstancesRequest.h>
#include <tencentcloud/apigateway/v20180808/model/CreateExclusiveInstancesResponse.h>
#include <tencentcloud/apigateway/v20180808/model/CreateIPStrategyRequest.h>
#include <tencentcloud/apigateway/v20180808/model/CreateIPStrategyResponse.h>
#include <tencentcloud/apigateway/v20180808/model/CreatePluginRequest.h>
#include <tencentcloud/apigateway/v20180808/model/CreatePluginResponse.h>
#include <tencentcloud/apigateway/v20180808/model/CreateServiceRequest.h>
#include <tencentcloud/apigateway/v20180808/model/CreateServiceResponse.h>
#include <tencentcloud/apigateway/v20180808/model/CreateUpstreamRequest.h>
#include <tencentcloud/apigateway/v20180808/model/CreateUpstreamResponse.h>
#include <tencentcloud/apigateway/v20180808/model/CreateUsagePlanRequest.h>
#include <tencentcloud/apigateway/v20180808/model/CreateUsagePlanResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DeleteAPIDocRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DeleteAPIDocResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DeleteApiRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DeleteApiResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DeleteApiAppRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DeleteApiAppResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DeleteApiKeyRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DeleteApiKeyResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DeleteIPStrategyRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DeleteIPStrategyResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DeletePluginRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DeletePluginResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DeleteServiceRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DeleteServiceResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DeleteServiceSubDomainMappingRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DeleteServiceSubDomainMappingResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DeleteUpstreamRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DeleteUpstreamResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DeleteUsagePlanRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DeleteUsagePlanResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DemoteServiceUsagePlanRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DemoteServiceUsagePlanResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeAPIDocDetailRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeAPIDocDetailResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeAPIDocsRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeAPIDocsResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeAllPluginApisRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeAllPluginApisResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeApiRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeApiResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeApiAppRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeApiAppResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeApiAppBindApisStatusRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeApiAppBindApisStatusResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeApiAppsStatusRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeApiAppsStatusResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeApiBindApiAppsStatusRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeApiBindApiAppsStatusResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeApiEnvironmentStrategyRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeApiEnvironmentStrategyResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeApiForApiAppRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeApiForApiAppResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeApiKeyRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeApiKeyResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeApiKeysStatusRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeApiKeysStatusResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeApiUsagePlanRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeApiUsagePlanResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeApisStatusRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeApisStatusResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeExclusiveInstanceDetailRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeExclusiveInstanceDetailResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeExclusiveInstanceRegionsRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeExclusiveInstanceRegionsResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeExclusiveInstancesRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeExclusiveInstancesResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeExclusiveInstancesStatusRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeExclusiveInstancesStatusResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeIPStrategyRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeIPStrategyResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeIPStrategyApisStatusRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeIPStrategyApisStatusResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeIPStrategysStatusRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeIPStrategysStatusResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeInstancesNetworkConfigRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeInstancesNetworkConfigResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeLogSearchRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeLogSearchResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribePluginRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribePluginResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribePluginApisRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribePluginApisResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribePluginsRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribePluginsResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribePluginsByApiRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribePluginsByApiResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeServiceRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeServiceResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeServiceEnvironmentListRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeServiceEnvironmentListResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeServiceEnvironmentReleaseHistoryRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeServiceEnvironmentReleaseHistoryResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeServiceEnvironmentStrategyRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeServiceEnvironmentStrategyResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeServiceForApiAppRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeServiceForApiAppResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeServiceReleaseVersionRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeServiceReleaseVersionResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeServiceSubDomainMappingsRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeServiceSubDomainMappingsResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeServiceSubDomainsRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeServiceSubDomainsResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeServiceUsagePlanRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeServiceUsagePlanResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeServicesStatusRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeServicesStatusResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeUpstreamBindApisRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeUpstreamBindApisResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeUpstreamsRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeUpstreamsResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeUsagePlanRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeUsagePlanResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeUsagePlanEnvironmentsRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeUsagePlanEnvironmentsResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeUsagePlanSecretIdsRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeUsagePlanSecretIdsResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeUsagePlansStatusRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeUsagePlansStatusResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DetachPluginRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DetachPluginResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DisableApiKeyRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DisableApiKeyResponse.h>
#include <tencentcloud/apigateway/v20180808/model/EnableApiKeyRequest.h>
#include <tencentcloud/apigateway/v20180808/model/EnableApiKeyResponse.h>
#include <tencentcloud/apigateway/v20180808/model/ImportOpenApiRequest.h>
#include <tencentcloud/apigateway/v20180808/model/ImportOpenApiResponse.h>
#include <tencentcloud/apigateway/v20180808/model/ModifyAPIDocRequest.h>
#include <tencentcloud/apigateway/v20180808/model/ModifyAPIDocResponse.h>
#include <tencentcloud/apigateway/v20180808/model/ModifyApiRequest.h>
#include <tencentcloud/apigateway/v20180808/model/ModifyApiResponse.h>
#include <tencentcloud/apigateway/v20180808/model/ModifyApiAppRequest.h>
#include <tencentcloud/apigateway/v20180808/model/ModifyApiAppResponse.h>
#include <tencentcloud/apigateway/v20180808/model/ModifyApiEnvironmentStrategyRequest.h>
#include <tencentcloud/apigateway/v20180808/model/ModifyApiEnvironmentStrategyResponse.h>
#include <tencentcloud/apigateway/v20180808/model/ModifyApiIncrementRequest.h>
#include <tencentcloud/apigateway/v20180808/model/ModifyApiIncrementResponse.h>
#include <tencentcloud/apigateway/v20180808/model/ModifyExclusiveInstanceRequest.h>
#include <tencentcloud/apigateway/v20180808/model/ModifyExclusiveInstanceResponse.h>
#include <tencentcloud/apigateway/v20180808/model/ModifyIPStrategyRequest.h>
#include <tencentcloud/apigateway/v20180808/model/ModifyIPStrategyResponse.h>
#include <tencentcloud/apigateway/v20180808/model/ModifyPluginRequest.h>
#include <tencentcloud/apigateway/v20180808/model/ModifyPluginResponse.h>
#include <tencentcloud/apigateway/v20180808/model/ModifyServiceRequest.h>
#include <tencentcloud/apigateway/v20180808/model/ModifyServiceResponse.h>
#include <tencentcloud/apigateway/v20180808/model/ModifyServiceEnvironmentStrategyRequest.h>
#include <tencentcloud/apigateway/v20180808/model/ModifyServiceEnvironmentStrategyResponse.h>
#include <tencentcloud/apigateway/v20180808/model/ModifySubDomainRequest.h>
#include <tencentcloud/apigateway/v20180808/model/ModifySubDomainResponse.h>
#include <tencentcloud/apigateway/v20180808/model/ModifyUpstreamRequest.h>
#include <tencentcloud/apigateway/v20180808/model/ModifyUpstreamResponse.h>
#include <tencentcloud/apigateway/v20180808/model/ModifyUsagePlanRequest.h>
#include <tencentcloud/apigateway/v20180808/model/ModifyUsagePlanResponse.h>
#include <tencentcloud/apigateway/v20180808/model/ReleaseServiceRequest.h>
#include <tencentcloud/apigateway/v20180808/model/ReleaseServiceResponse.h>
#include <tencentcloud/apigateway/v20180808/model/ResetAPIDocPasswordRequest.h>
#include <tencentcloud/apigateway/v20180808/model/ResetAPIDocPasswordResponse.h>
#include <tencentcloud/apigateway/v20180808/model/UnBindEnvironmentRequest.h>
#include <tencentcloud/apigateway/v20180808/model/UnBindEnvironmentResponse.h>
#include <tencentcloud/apigateway/v20180808/model/UnBindIPStrategyRequest.h>
#include <tencentcloud/apigateway/v20180808/model/UnBindIPStrategyResponse.h>
#include <tencentcloud/apigateway/v20180808/model/UnBindSecretIdsRequest.h>
#include <tencentcloud/apigateway/v20180808/model/UnBindSecretIdsResponse.h>
#include <tencentcloud/apigateway/v20180808/model/UnBindSubDomainRequest.h>
#include <tencentcloud/apigateway/v20180808/model/UnBindSubDomainResponse.h>
#include <tencentcloud/apigateway/v20180808/model/UnReleaseServiceRequest.h>
#include <tencentcloud/apigateway/v20180808/model/UnReleaseServiceResponse.h>
#include <tencentcloud/apigateway/v20180808/model/UnbindApiAppRequest.h>
#include <tencentcloud/apigateway/v20180808/model/UnbindApiAppResponse.h>
#include <tencentcloud/apigateway/v20180808/model/UpdateApiAppKeyRequest.h>
#include <tencentcloud/apigateway/v20180808/model/UpdateApiAppKeyResponse.h>
#include <tencentcloud/apigateway/v20180808/model/UpdateApiKeyRequest.h>
#include <tencentcloud/apigateway/v20180808/model/UpdateApiKeyResponse.h>
#include <tencentcloud/apigateway/v20180808/model/UpdateServiceRequest.h>
#include <tencentcloud/apigateway/v20180808/model/UpdateServiceResponse.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            class ApigatewayClient : public AbstractClient
            {
            public:
                ApigatewayClient(const Credential &credential, const std::string &region);
                ApigatewayClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AttachPluginResponse> AttachPluginOutcome;
                typedef std::future<AttachPluginOutcome> AttachPluginOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::AttachPluginRequest&, AttachPluginOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachPluginAsyncHandler;
                typedef Outcome<Core::Error, Model::BindApiAppResponse> BindApiAppOutcome;
                typedef std::future<BindApiAppOutcome> BindApiAppOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::BindApiAppRequest&, BindApiAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindApiAppAsyncHandler;
                typedef Outcome<Core::Error, Model::BindEnvironmentResponse> BindEnvironmentOutcome;
                typedef std::future<BindEnvironmentOutcome> BindEnvironmentOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::BindEnvironmentRequest&, BindEnvironmentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindEnvironmentAsyncHandler;
                typedef Outcome<Core::Error, Model::BindIPStrategyResponse> BindIPStrategyOutcome;
                typedef std::future<BindIPStrategyOutcome> BindIPStrategyOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::BindIPStrategyRequest&, BindIPStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindIPStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::BindSecretIdsResponse> BindSecretIdsOutcome;
                typedef std::future<BindSecretIdsOutcome> BindSecretIdsOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::BindSecretIdsRequest&, BindSecretIdsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindSecretIdsAsyncHandler;
                typedef Outcome<Core::Error, Model::BindSubDomainResponse> BindSubDomainOutcome;
                typedef std::future<BindSubDomainOutcome> BindSubDomainOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::BindSubDomainRequest&, BindSubDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindSubDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::BuildAPIDocResponse> BuildAPIDocOutcome;
                typedef std::future<BuildAPIDocOutcome> BuildAPIDocOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::BuildAPIDocRequest&, BuildAPIDocOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BuildAPIDocAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAPIDocResponse> CreateAPIDocOutcome;
                typedef std::future<CreateAPIDocOutcome> CreateAPIDocOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::CreateAPIDocRequest&, CreateAPIDocOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAPIDocAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateApiResponse> CreateApiOutcome;
                typedef std::future<CreateApiOutcome> CreateApiOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::CreateApiRequest&, CreateApiOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApiAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateApiAppResponse> CreateApiAppOutcome;
                typedef std::future<CreateApiAppOutcome> CreateApiAppOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::CreateApiAppRequest&, CreateApiAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApiAppAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateApiKeyResponse> CreateApiKeyOutcome;
                typedef std::future<CreateApiKeyOutcome> CreateApiKeyOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::CreateApiKeyRequest&, CreateApiKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApiKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateExclusiveInstancesResponse> CreateExclusiveInstancesOutcome;
                typedef std::future<CreateExclusiveInstancesOutcome> CreateExclusiveInstancesOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::CreateExclusiveInstancesRequest&, CreateExclusiveInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateExclusiveInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateIPStrategyResponse> CreateIPStrategyOutcome;
                typedef std::future<CreateIPStrategyOutcome> CreateIPStrategyOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::CreateIPStrategyRequest&, CreateIPStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIPStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePluginResponse> CreatePluginOutcome;
                typedef std::future<CreatePluginOutcome> CreatePluginOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::CreatePluginRequest&, CreatePluginOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePluginAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateServiceResponse> CreateServiceOutcome;
                typedef std::future<CreateServiceOutcome> CreateServiceOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::CreateServiceRequest&, CreateServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUpstreamResponse> CreateUpstreamOutcome;
                typedef std::future<CreateUpstreamOutcome> CreateUpstreamOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::CreateUpstreamRequest&, CreateUpstreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUpstreamAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUsagePlanResponse> CreateUsagePlanOutcome;
                typedef std::future<CreateUsagePlanOutcome> CreateUsagePlanOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::CreateUsagePlanRequest&, CreateUsagePlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUsagePlanAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAPIDocResponse> DeleteAPIDocOutcome;
                typedef std::future<DeleteAPIDocOutcome> DeleteAPIDocOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DeleteAPIDocRequest&, DeleteAPIDocOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAPIDocAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteApiResponse> DeleteApiOutcome;
                typedef std::future<DeleteApiOutcome> DeleteApiOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DeleteApiRequest&, DeleteApiOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApiAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteApiAppResponse> DeleteApiAppOutcome;
                typedef std::future<DeleteApiAppOutcome> DeleteApiAppOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DeleteApiAppRequest&, DeleteApiAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApiAppAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteApiKeyResponse> DeleteApiKeyOutcome;
                typedef std::future<DeleteApiKeyOutcome> DeleteApiKeyOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DeleteApiKeyRequest&, DeleteApiKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApiKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteIPStrategyResponse> DeleteIPStrategyOutcome;
                typedef std::future<DeleteIPStrategyOutcome> DeleteIPStrategyOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DeleteIPStrategyRequest&, DeleteIPStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIPStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePluginResponse> DeletePluginOutcome;
                typedef std::future<DeletePluginOutcome> DeletePluginOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DeletePluginRequest&, DeletePluginOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePluginAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteServiceResponse> DeleteServiceOutcome;
                typedef std::future<DeleteServiceOutcome> DeleteServiceOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DeleteServiceRequest&, DeleteServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteServiceSubDomainMappingResponse> DeleteServiceSubDomainMappingOutcome;
                typedef std::future<DeleteServiceSubDomainMappingOutcome> DeleteServiceSubDomainMappingOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DeleteServiceSubDomainMappingRequest&, DeleteServiceSubDomainMappingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServiceSubDomainMappingAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUpstreamResponse> DeleteUpstreamOutcome;
                typedef std::future<DeleteUpstreamOutcome> DeleteUpstreamOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DeleteUpstreamRequest&, DeleteUpstreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUpstreamAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUsagePlanResponse> DeleteUsagePlanOutcome;
                typedef std::future<DeleteUsagePlanOutcome> DeleteUsagePlanOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DeleteUsagePlanRequest&, DeleteUsagePlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUsagePlanAsyncHandler;
                typedef Outcome<Core::Error, Model::DemoteServiceUsagePlanResponse> DemoteServiceUsagePlanOutcome;
                typedef std::future<DemoteServiceUsagePlanOutcome> DemoteServiceUsagePlanOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DemoteServiceUsagePlanRequest&, DemoteServiceUsagePlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DemoteServiceUsagePlanAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAPIDocDetailResponse> DescribeAPIDocDetailOutcome;
                typedef std::future<DescribeAPIDocDetailOutcome> DescribeAPIDocDetailOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeAPIDocDetailRequest&, DescribeAPIDocDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAPIDocDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAPIDocsResponse> DescribeAPIDocsOutcome;
                typedef std::future<DescribeAPIDocsOutcome> DescribeAPIDocsOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeAPIDocsRequest&, DescribeAPIDocsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAPIDocsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAllPluginApisResponse> DescribeAllPluginApisOutcome;
                typedef std::future<DescribeAllPluginApisOutcome> DescribeAllPluginApisOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeAllPluginApisRequest&, DescribeAllPluginApisOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllPluginApisAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApiResponse> DescribeApiOutcome;
                typedef std::future<DescribeApiOutcome> DescribeApiOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeApiRequest&, DescribeApiOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApiAppResponse> DescribeApiAppOutcome;
                typedef std::future<DescribeApiAppOutcome> DescribeApiAppOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeApiAppRequest&, DescribeApiAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiAppAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApiAppBindApisStatusResponse> DescribeApiAppBindApisStatusOutcome;
                typedef std::future<DescribeApiAppBindApisStatusOutcome> DescribeApiAppBindApisStatusOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeApiAppBindApisStatusRequest&, DescribeApiAppBindApisStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiAppBindApisStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApiAppsStatusResponse> DescribeApiAppsStatusOutcome;
                typedef std::future<DescribeApiAppsStatusOutcome> DescribeApiAppsStatusOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeApiAppsStatusRequest&, DescribeApiAppsStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiAppsStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApiBindApiAppsStatusResponse> DescribeApiBindApiAppsStatusOutcome;
                typedef std::future<DescribeApiBindApiAppsStatusOutcome> DescribeApiBindApiAppsStatusOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeApiBindApiAppsStatusRequest&, DescribeApiBindApiAppsStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiBindApiAppsStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApiEnvironmentStrategyResponse> DescribeApiEnvironmentStrategyOutcome;
                typedef std::future<DescribeApiEnvironmentStrategyOutcome> DescribeApiEnvironmentStrategyOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeApiEnvironmentStrategyRequest&, DescribeApiEnvironmentStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiEnvironmentStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApiForApiAppResponse> DescribeApiForApiAppOutcome;
                typedef std::future<DescribeApiForApiAppOutcome> DescribeApiForApiAppOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeApiForApiAppRequest&, DescribeApiForApiAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiForApiAppAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApiKeyResponse> DescribeApiKeyOutcome;
                typedef std::future<DescribeApiKeyOutcome> DescribeApiKeyOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeApiKeyRequest&, DescribeApiKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApiKeysStatusResponse> DescribeApiKeysStatusOutcome;
                typedef std::future<DescribeApiKeysStatusOutcome> DescribeApiKeysStatusOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeApiKeysStatusRequest&, DescribeApiKeysStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiKeysStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApiUsagePlanResponse> DescribeApiUsagePlanOutcome;
                typedef std::future<DescribeApiUsagePlanOutcome> DescribeApiUsagePlanOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeApiUsagePlanRequest&, DescribeApiUsagePlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiUsagePlanAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApisStatusResponse> DescribeApisStatusOutcome;
                typedef std::future<DescribeApisStatusOutcome> DescribeApisStatusOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeApisStatusRequest&, DescribeApisStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApisStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExclusiveInstanceDetailResponse> DescribeExclusiveInstanceDetailOutcome;
                typedef std::future<DescribeExclusiveInstanceDetailOutcome> DescribeExclusiveInstanceDetailOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeExclusiveInstanceDetailRequest&, DescribeExclusiveInstanceDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExclusiveInstanceDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExclusiveInstanceRegionsResponse> DescribeExclusiveInstanceRegionsOutcome;
                typedef std::future<DescribeExclusiveInstanceRegionsOutcome> DescribeExclusiveInstanceRegionsOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeExclusiveInstanceRegionsRequest&, DescribeExclusiveInstanceRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExclusiveInstanceRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExclusiveInstancesResponse> DescribeExclusiveInstancesOutcome;
                typedef std::future<DescribeExclusiveInstancesOutcome> DescribeExclusiveInstancesOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeExclusiveInstancesRequest&, DescribeExclusiveInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExclusiveInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExclusiveInstancesStatusResponse> DescribeExclusiveInstancesStatusOutcome;
                typedef std::future<DescribeExclusiveInstancesStatusOutcome> DescribeExclusiveInstancesStatusOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeExclusiveInstancesStatusRequest&, DescribeExclusiveInstancesStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExclusiveInstancesStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIPStrategyResponse> DescribeIPStrategyOutcome;
                typedef std::future<DescribeIPStrategyOutcome> DescribeIPStrategyOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeIPStrategyRequest&, DescribeIPStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIPStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIPStrategyApisStatusResponse> DescribeIPStrategyApisStatusOutcome;
                typedef std::future<DescribeIPStrategyApisStatusOutcome> DescribeIPStrategyApisStatusOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeIPStrategyApisStatusRequest&, DescribeIPStrategyApisStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIPStrategyApisStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIPStrategysStatusResponse> DescribeIPStrategysStatusOutcome;
                typedef std::future<DescribeIPStrategysStatusOutcome> DescribeIPStrategysStatusOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeIPStrategysStatusRequest&, DescribeIPStrategysStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIPStrategysStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesNetworkConfigResponse> DescribeInstancesNetworkConfigOutcome;
                typedef std::future<DescribeInstancesNetworkConfigOutcome> DescribeInstancesNetworkConfigOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeInstancesNetworkConfigRequest&, DescribeInstancesNetworkConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesNetworkConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogSearchResponse> DescribeLogSearchOutcome;
                typedef std::future<DescribeLogSearchOutcome> DescribeLogSearchOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeLogSearchRequest&, DescribeLogSearchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogSearchAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePluginResponse> DescribePluginOutcome;
                typedef std::future<DescribePluginOutcome> DescribePluginOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribePluginRequest&, DescribePluginOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePluginAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePluginApisResponse> DescribePluginApisOutcome;
                typedef std::future<DescribePluginApisOutcome> DescribePluginApisOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribePluginApisRequest&, DescribePluginApisOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePluginApisAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePluginsResponse> DescribePluginsOutcome;
                typedef std::future<DescribePluginsOutcome> DescribePluginsOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribePluginsRequest&, DescribePluginsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePluginsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePluginsByApiResponse> DescribePluginsByApiOutcome;
                typedef std::future<DescribePluginsByApiOutcome> DescribePluginsByApiOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribePluginsByApiRequest&, DescribePluginsByApiOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePluginsByApiAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeServiceResponse> DescribeServiceOutcome;
                typedef std::future<DescribeServiceOutcome> DescribeServiceOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeServiceRequest&, DescribeServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeServiceEnvironmentListResponse> DescribeServiceEnvironmentListOutcome;
                typedef std::future<DescribeServiceEnvironmentListOutcome> DescribeServiceEnvironmentListOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeServiceEnvironmentListRequest&, DescribeServiceEnvironmentListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceEnvironmentListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeServiceEnvironmentReleaseHistoryResponse> DescribeServiceEnvironmentReleaseHistoryOutcome;
                typedef std::future<DescribeServiceEnvironmentReleaseHistoryOutcome> DescribeServiceEnvironmentReleaseHistoryOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeServiceEnvironmentReleaseHistoryRequest&, DescribeServiceEnvironmentReleaseHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceEnvironmentReleaseHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeServiceEnvironmentStrategyResponse> DescribeServiceEnvironmentStrategyOutcome;
                typedef std::future<DescribeServiceEnvironmentStrategyOutcome> DescribeServiceEnvironmentStrategyOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeServiceEnvironmentStrategyRequest&, DescribeServiceEnvironmentStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceEnvironmentStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeServiceForApiAppResponse> DescribeServiceForApiAppOutcome;
                typedef std::future<DescribeServiceForApiAppOutcome> DescribeServiceForApiAppOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeServiceForApiAppRequest&, DescribeServiceForApiAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceForApiAppAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeServiceReleaseVersionResponse> DescribeServiceReleaseVersionOutcome;
                typedef std::future<DescribeServiceReleaseVersionOutcome> DescribeServiceReleaseVersionOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeServiceReleaseVersionRequest&, DescribeServiceReleaseVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceReleaseVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeServiceSubDomainMappingsResponse> DescribeServiceSubDomainMappingsOutcome;
                typedef std::future<DescribeServiceSubDomainMappingsOutcome> DescribeServiceSubDomainMappingsOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeServiceSubDomainMappingsRequest&, DescribeServiceSubDomainMappingsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceSubDomainMappingsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeServiceSubDomainsResponse> DescribeServiceSubDomainsOutcome;
                typedef std::future<DescribeServiceSubDomainsOutcome> DescribeServiceSubDomainsOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeServiceSubDomainsRequest&, DescribeServiceSubDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceSubDomainsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeServiceUsagePlanResponse> DescribeServiceUsagePlanOutcome;
                typedef std::future<DescribeServiceUsagePlanOutcome> DescribeServiceUsagePlanOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeServiceUsagePlanRequest&, DescribeServiceUsagePlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceUsagePlanAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeServicesStatusResponse> DescribeServicesStatusOutcome;
                typedef std::future<DescribeServicesStatusOutcome> DescribeServicesStatusOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeServicesStatusRequest&, DescribeServicesStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServicesStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUpstreamBindApisResponse> DescribeUpstreamBindApisOutcome;
                typedef std::future<DescribeUpstreamBindApisOutcome> DescribeUpstreamBindApisOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeUpstreamBindApisRequest&, DescribeUpstreamBindApisOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUpstreamBindApisAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUpstreamsResponse> DescribeUpstreamsOutcome;
                typedef std::future<DescribeUpstreamsOutcome> DescribeUpstreamsOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeUpstreamsRequest&, DescribeUpstreamsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUpstreamsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUsagePlanResponse> DescribeUsagePlanOutcome;
                typedef std::future<DescribeUsagePlanOutcome> DescribeUsagePlanOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeUsagePlanRequest&, DescribeUsagePlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsagePlanAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUsagePlanEnvironmentsResponse> DescribeUsagePlanEnvironmentsOutcome;
                typedef std::future<DescribeUsagePlanEnvironmentsOutcome> DescribeUsagePlanEnvironmentsOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeUsagePlanEnvironmentsRequest&, DescribeUsagePlanEnvironmentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsagePlanEnvironmentsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUsagePlanSecretIdsResponse> DescribeUsagePlanSecretIdsOutcome;
                typedef std::future<DescribeUsagePlanSecretIdsOutcome> DescribeUsagePlanSecretIdsOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeUsagePlanSecretIdsRequest&, DescribeUsagePlanSecretIdsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsagePlanSecretIdsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUsagePlansStatusResponse> DescribeUsagePlansStatusOutcome;
                typedef std::future<DescribeUsagePlansStatusOutcome> DescribeUsagePlansStatusOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeUsagePlansStatusRequest&, DescribeUsagePlansStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsagePlansStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DetachPluginResponse> DetachPluginOutcome;
                typedef std::future<DetachPluginOutcome> DetachPluginOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DetachPluginRequest&, DetachPluginOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachPluginAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableApiKeyResponse> DisableApiKeyOutcome;
                typedef std::future<DisableApiKeyOutcome> DisableApiKeyOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DisableApiKeyRequest&, DisableApiKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableApiKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableApiKeyResponse> EnableApiKeyOutcome;
                typedef std::future<EnableApiKeyOutcome> EnableApiKeyOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::EnableApiKeyRequest&, EnableApiKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableApiKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::ImportOpenApiResponse> ImportOpenApiOutcome;
                typedef std::future<ImportOpenApiOutcome> ImportOpenApiOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::ImportOpenApiRequest&, ImportOpenApiOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImportOpenApiAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAPIDocResponse> ModifyAPIDocOutcome;
                typedef std::future<ModifyAPIDocOutcome> ModifyAPIDocOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::ModifyAPIDocRequest&, ModifyAPIDocOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAPIDocAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApiResponse> ModifyApiOutcome;
                typedef std::future<ModifyApiOutcome> ModifyApiOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::ModifyApiRequest&, ModifyApiOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApiAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApiAppResponse> ModifyApiAppOutcome;
                typedef std::future<ModifyApiAppOutcome> ModifyApiAppOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::ModifyApiAppRequest&, ModifyApiAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApiAppAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApiEnvironmentStrategyResponse> ModifyApiEnvironmentStrategyOutcome;
                typedef std::future<ModifyApiEnvironmentStrategyOutcome> ModifyApiEnvironmentStrategyOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::ModifyApiEnvironmentStrategyRequest&, ModifyApiEnvironmentStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApiEnvironmentStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApiIncrementResponse> ModifyApiIncrementOutcome;
                typedef std::future<ModifyApiIncrementOutcome> ModifyApiIncrementOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::ModifyApiIncrementRequest&, ModifyApiIncrementOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApiIncrementAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyExclusiveInstanceResponse> ModifyExclusiveInstanceOutcome;
                typedef std::future<ModifyExclusiveInstanceOutcome> ModifyExclusiveInstanceOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::ModifyExclusiveInstanceRequest&, ModifyExclusiveInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyExclusiveInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyIPStrategyResponse> ModifyIPStrategyOutcome;
                typedef std::future<ModifyIPStrategyOutcome> ModifyIPStrategyOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::ModifyIPStrategyRequest&, ModifyIPStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIPStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPluginResponse> ModifyPluginOutcome;
                typedef std::future<ModifyPluginOutcome> ModifyPluginOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::ModifyPluginRequest&, ModifyPluginOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPluginAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyServiceResponse> ModifyServiceOutcome;
                typedef std::future<ModifyServiceOutcome> ModifyServiceOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::ModifyServiceRequest&, ModifyServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyServiceEnvironmentStrategyResponse> ModifyServiceEnvironmentStrategyOutcome;
                typedef std::future<ModifyServiceEnvironmentStrategyOutcome> ModifyServiceEnvironmentStrategyOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::ModifyServiceEnvironmentStrategyRequest&, ModifyServiceEnvironmentStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyServiceEnvironmentStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySubDomainResponse> ModifySubDomainOutcome;
                typedef std::future<ModifySubDomainOutcome> ModifySubDomainOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::ModifySubDomainRequest&, ModifySubDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySubDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUpstreamResponse> ModifyUpstreamOutcome;
                typedef std::future<ModifyUpstreamOutcome> ModifyUpstreamOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::ModifyUpstreamRequest&, ModifyUpstreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUpstreamAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUsagePlanResponse> ModifyUsagePlanOutcome;
                typedef std::future<ModifyUsagePlanOutcome> ModifyUsagePlanOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::ModifyUsagePlanRequest&, ModifyUsagePlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUsagePlanAsyncHandler;
                typedef Outcome<Core::Error, Model::ReleaseServiceResponse> ReleaseServiceOutcome;
                typedef std::future<ReleaseServiceOutcome> ReleaseServiceOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::ReleaseServiceRequest&, ReleaseServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetAPIDocPasswordResponse> ResetAPIDocPasswordOutcome;
                typedef std::future<ResetAPIDocPasswordOutcome> ResetAPIDocPasswordOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::ResetAPIDocPasswordRequest&, ResetAPIDocPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetAPIDocPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::UnBindEnvironmentResponse> UnBindEnvironmentOutcome;
                typedef std::future<UnBindEnvironmentOutcome> UnBindEnvironmentOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::UnBindEnvironmentRequest&, UnBindEnvironmentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnBindEnvironmentAsyncHandler;
                typedef Outcome<Core::Error, Model::UnBindIPStrategyResponse> UnBindIPStrategyOutcome;
                typedef std::future<UnBindIPStrategyOutcome> UnBindIPStrategyOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::UnBindIPStrategyRequest&, UnBindIPStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnBindIPStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::UnBindSecretIdsResponse> UnBindSecretIdsOutcome;
                typedef std::future<UnBindSecretIdsOutcome> UnBindSecretIdsOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::UnBindSecretIdsRequest&, UnBindSecretIdsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnBindSecretIdsAsyncHandler;
                typedef Outcome<Core::Error, Model::UnBindSubDomainResponse> UnBindSubDomainOutcome;
                typedef std::future<UnBindSubDomainOutcome> UnBindSubDomainOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::UnBindSubDomainRequest&, UnBindSubDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnBindSubDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::UnReleaseServiceResponse> UnReleaseServiceOutcome;
                typedef std::future<UnReleaseServiceOutcome> UnReleaseServiceOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::UnReleaseServiceRequest&, UnReleaseServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnReleaseServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindApiAppResponse> UnbindApiAppOutcome;
                typedef std::future<UnbindApiAppOutcome> UnbindApiAppOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::UnbindApiAppRequest&, UnbindApiAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindApiAppAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateApiAppKeyResponse> UpdateApiAppKeyOutcome;
                typedef std::future<UpdateApiAppKeyOutcome> UpdateApiAppKeyOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::UpdateApiAppKeyRequest&, UpdateApiAppKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateApiAppKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateApiKeyResponse> UpdateApiKeyOutcome;
                typedef std::future<UpdateApiKeyOutcome> UpdateApiKeyOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::UpdateApiKeyRequest&, UpdateApiKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateApiKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateServiceResponse> UpdateServiceOutcome;
                typedef std::future<UpdateServiceOutcome> UpdateServiceOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::UpdateServiceRequest&, UpdateServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateServiceAsyncHandler;



                /**
                 *绑定插件到API上。
                 * @param req AttachPluginRequest
                 * @return AttachPluginOutcome
                 */
                AttachPluginOutcome AttachPlugin(const Model::AttachPluginRequest &request);
                void AttachPluginAsync(const Model::AttachPluginRequest& request, const AttachPluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachPluginOutcomeCallable AttachPluginCallable(const Model::AttachPluginRequest& request);

                /**
                 *本接口（BindApiApp）用于绑定应用到API。
                 * @param req BindApiAppRequest
                 * @return BindApiAppOutcome
                 */
                BindApiAppOutcome BindApiApp(const Model::BindApiAppRequest &request);
                void BindApiAppAsync(const Model::BindApiAppRequest& request, const BindApiAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindApiAppOutcomeCallable BindApiAppCallable(const Model::BindApiAppRequest& request);

                /**
                 *本接口（BindEnvironment）用于绑定使用计划到服务或API。
用户在发布服务到某个环境中后，如果 API 需要鉴权，还需要绑定使用计划才能进行调用，此接口用户将使用计划绑定到特定环境。
目前支持绑定使用计划到API，但是同一个服务不能同时存在绑定到服务的使用计划和绑定到API的使用计划，所以对已经绑定过服务级别使用计划的环境，请先使用 服务级别使用计划降级 接口进行降级操作。
                 * @param req BindEnvironmentRequest
                 * @return BindEnvironmentOutcome
                 */
                BindEnvironmentOutcome BindEnvironment(const Model::BindEnvironmentRequest &request);
                void BindEnvironmentAsync(const Model::BindEnvironmentRequest& request, const BindEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindEnvironmentOutcomeCallable BindEnvironmentCallable(const Model::BindEnvironmentRequest& request);

                /**
                 *本接口（BindIPStrategy）用于API绑定IP策略。
                 * @param req BindIPStrategyRequest
                 * @return BindIPStrategyOutcome
                 */
                BindIPStrategyOutcome BindIPStrategy(const Model::BindIPStrategyRequest &request);
                void BindIPStrategyAsync(const Model::BindIPStrategyRequest& request, const BindIPStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindIPStrategyOutcomeCallable BindIPStrategyCallable(const Model::BindIPStrategyRequest& request);

                /**
                 *本接口（BindSecretIds）用于为使用计划绑定密钥。
将密钥绑定到某个使用计划，并将此使用计划绑定到某个服务发布的环境上，调用者方可使用此密钥调用这个服务中的 API，可使用本接口为使用计划绑定密钥。
                 * @param req BindSecretIdsRequest
                 * @return BindSecretIdsOutcome
                 */
                BindSecretIdsOutcome BindSecretIds(const Model::BindSecretIdsRequest &request);
                void BindSecretIdsAsync(const Model::BindSecretIdsRequest& request, const BindSecretIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindSecretIdsOutcomeCallable BindSecretIdsCallable(const Model::BindSecretIdsRequest& request);

                /**
                 *本接口（BindSubDomain）用于绑定自定义域名到服务。
API 网关中每个服务都会提供一个默认的域名供用户调用，但当用户想使用自己的已有域名时，也可以将自定义域名绑定到此服务，在做好备案、与默认域名的 CNAME 后，可直接调用自定义域名。
                 * @param req BindSubDomainRequest
                 * @return BindSubDomainOutcome
                 */
                BindSubDomainOutcome BindSubDomain(const Model::BindSubDomainRequest &request);
                void BindSubDomainAsync(const Model::BindSubDomainRequest& request, const BindSubDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindSubDomainOutcomeCallable BindSubDomainCallable(const Model::BindSubDomainRequest& request);

                /**
                 *构建 API 文档
                 * @param req BuildAPIDocRequest
                 * @return BuildAPIDocOutcome
                 */
                BuildAPIDocOutcome BuildAPIDoc(const Model::BuildAPIDocRequest &request);
                void BuildAPIDocAsync(const Model::BuildAPIDocRequest& request, const BuildAPIDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BuildAPIDocOutcomeCallable BuildAPIDocCallable(const Model::BuildAPIDocRequest& request);

                /**
                 *创建 API 文档
                 * @param req CreateAPIDocRequest
                 * @return CreateAPIDocOutcome
                 */
                CreateAPIDocOutcome CreateAPIDoc(const Model::CreateAPIDocRequest &request);
                void CreateAPIDocAsync(const Model::CreateAPIDocRequest& request, const CreateAPIDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAPIDocOutcomeCallable CreateAPIDocCallable(const Model::CreateAPIDocRequest& request);

                /**
                 *本接口（CreateApi）用于创建 API 接口，创建 API 前，用户需要先创建服务，每个 API 都有自己归属的服务。
                 * @param req CreateApiRequest
                 * @return CreateApiOutcome
                 */
                CreateApiOutcome CreateApi(const Model::CreateApiRequest &request);
                void CreateApiAsync(const Model::CreateApiRequest& request, const CreateApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateApiOutcomeCallable CreateApiCallable(const Model::CreateApiRequest& request);

                /**
                 *本接口（CreateApiApp）用于创建应用。
                 * @param req CreateApiAppRequest
                 * @return CreateApiAppOutcome
                 */
                CreateApiAppOutcome CreateApiApp(const Model::CreateApiAppRequest &request);
                void CreateApiAppAsync(const Model::CreateApiAppRequest& request, const CreateApiAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateApiAppOutcomeCallable CreateApiAppCallable(const Model::CreateApiAppRequest& request);

                /**
                 *本接口（CreateApiKey）用于创建一对新的 API 密钥。
                 * @param req CreateApiKeyRequest
                 * @return CreateApiKeyOutcome
                 */
                CreateApiKeyOutcome CreateApiKey(const Model::CreateApiKeyRequest &request);
                void CreateApiKeyAsync(const Model::CreateApiKeyRequest& request, const CreateApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateApiKeyOutcomeCallable CreateApiKeyCallable(const Model::CreateApiKeyRequest& request);

                /**
                 *创建专享实例
                 * @param req CreateExclusiveInstancesRequest
                 * @return CreateExclusiveInstancesOutcome
                 */
                CreateExclusiveInstancesOutcome CreateExclusiveInstances(const Model::CreateExclusiveInstancesRequest &request);
                void CreateExclusiveInstancesAsync(const Model::CreateExclusiveInstancesRequest& request, const CreateExclusiveInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateExclusiveInstancesOutcomeCallable CreateExclusiveInstancesCallable(const Model::CreateExclusiveInstancesRequest& request);

                /**
                 *本接口（CreateIPStrategy）用于创建服务IP策略。
                 * @param req CreateIPStrategyRequest
                 * @return CreateIPStrategyOutcome
                 */
                CreateIPStrategyOutcome CreateIPStrategy(const Model::CreateIPStrategyRequest &request);
                void CreateIPStrategyAsync(const Model::CreateIPStrategyRequest& request, const CreateIPStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIPStrategyOutcomeCallable CreateIPStrategyCallable(const Model::CreateIPStrategyRequest& request);

                /**
                 *创建API网关插件。
                 * @param req CreatePluginRequest
                 * @return CreatePluginOutcome
                 */
                CreatePluginOutcome CreatePlugin(const Model::CreatePluginRequest &request);
                void CreatePluginAsync(const Model::CreatePluginRequest& request, const CreatePluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePluginOutcomeCallable CreatePluginCallable(const Model::CreatePluginRequest& request);

                /**
                 *本接口（CreateService）用于创建服务。
API 网关使用的最大单元为服务，每个服务中可创建多个 API 接口。每个服务有一个默认域名供客户调用，用户也可绑定自定义域名到此服务中。
                 * @param req CreateServiceRequest
                 * @return CreateServiceOutcome
                 */
                CreateServiceOutcome CreateService(const Model::CreateServiceRequest &request);
                void CreateServiceAsync(const Model::CreateServiceRequest& request, const CreateServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateServiceOutcomeCallable CreateServiceCallable(const Model::CreateServiceRequest& request);

                /**
                 *用于创建后端通道
                 * @param req CreateUpstreamRequest
                 * @return CreateUpstreamOutcome
                 */
                CreateUpstreamOutcome CreateUpstream(const Model::CreateUpstreamRequest &request);
                void CreateUpstreamAsync(const Model::CreateUpstreamRequest& request, const CreateUpstreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUpstreamOutcomeCallable CreateUpstreamCallable(const Model::CreateUpstreamRequest& request);

                /**
                 *本接口（CreateUsagePlan）用于创建使用计划。
用户在使用 API 网关时，需要创建使用计划并将其绑定到服务的环境中使用。
                 * @param req CreateUsagePlanRequest
                 * @return CreateUsagePlanOutcome
                 */
                CreateUsagePlanOutcome CreateUsagePlan(const Model::CreateUsagePlanRequest &request);
                void CreateUsagePlanAsync(const Model::CreateUsagePlanRequest& request, const CreateUsagePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUsagePlanOutcomeCallable CreateUsagePlanCallable(const Model::CreateUsagePlanRequest& request);

                /**
                 *删除 API 文档
                 * @param req DeleteAPIDocRequest
                 * @return DeleteAPIDocOutcome
                 */
                DeleteAPIDocOutcome DeleteAPIDoc(const Model::DeleteAPIDocRequest &request);
                void DeleteAPIDocAsync(const Model::DeleteAPIDocRequest& request, const DeleteAPIDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAPIDocOutcomeCallable DeleteAPIDocCallable(const Model::DeleteAPIDocRequest& request);

                /**
                 *本接口（DeleteApi）用于删除已经创建的API。
                 * @param req DeleteApiRequest
                 * @return DeleteApiOutcome
                 */
                DeleteApiOutcome DeleteApi(const Model::DeleteApiRequest &request);
                void DeleteApiAsync(const Model::DeleteApiRequest& request, const DeleteApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteApiOutcomeCallable DeleteApiCallable(const Model::DeleteApiRequest& request);

                /**
                 *本接口（DeleteApiApp）用于删除已经创建的应用。
                 * @param req DeleteApiAppRequest
                 * @return DeleteApiAppOutcome
                 */
                DeleteApiAppOutcome DeleteApiApp(const Model::DeleteApiAppRequest &request);
                void DeleteApiAppAsync(const Model::DeleteApiAppRequest& request, const DeleteApiAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteApiAppOutcomeCallable DeleteApiAppCallable(const Model::DeleteApiAppRequest& request);

                /**
                 *本接口（DeleteApiKey）用于删除一对 API 密钥。
                 * @param req DeleteApiKeyRequest
                 * @return DeleteApiKeyOutcome
                 */
                DeleteApiKeyOutcome DeleteApiKey(const Model::DeleteApiKeyRequest &request);
                void DeleteApiKeyAsync(const Model::DeleteApiKeyRequest& request, const DeleteApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteApiKeyOutcomeCallable DeleteApiKeyCallable(const Model::DeleteApiKeyRequest& request);

                /**
                 *本接口（DeleteIPStrategy）用于删除服务IP策略。
                 * @param req DeleteIPStrategyRequest
                 * @return DeleteIPStrategyOutcome
                 */
                DeleteIPStrategyOutcome DeleteIPStrategy(const Model::DeleteIPStrategyRequest &request);
                void DeleteIPStrategyAsync(const Model::DeleteIPStrategyRequest& request, const DeleteIPStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteIPStrategyOutcomeCallable DeleteIPStrategyCallable(const Model::DeleteIPStrategyRequest& request);

                /**
                 *删除API网关插件
                 * @param req DeletePluginRequest
                 * @return DeletePluginOutcome
                 */
                DeletePluginOutcome DeletePlugin(const Model::DeletePluginRequest &request);
                void DeletePluginAsync(const Model::DeletePluginRequest& request, const DeletePluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePluginOutcomeCallable DeletePluginCallable(const Model::DeletePluginRequest& request);

                /**
                 *本接口（DeleteService）用于删除 API 网关中某个服务。
                 * @param req DeleteServiceRequest
                 * @return DeleteServiceOutcome
                 */
                DeleteServiceOutcome DeleteService(const Model::DeleteServiceRequest &request);
                void DeleteServiceAsync(const Model::DeleteServiceRequest& request, const DeleteServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteServiceOutcomeCallable DeleteServiceCallable(const Model::DeleteServiceRequest& request);

                /**
                 *本接口（DeleteServiceSubDomainMapping）用于删除服务中某个环境的自定义域名映射。
当用户使用自定义域名，并使用了自定义映射时，可使用此接口。但需注意，若删除了所有环境的映射时，调用此 API 均会返回失败。
                 * @param req DeleteServiceSubDomainMappingRequest
                 * @return DeleteServiceSubDomainMappingOutcome
                 */
                DeleteServiceSubDomainMappingOutcome DeleteServiceSubDomainMapping(const Model::DeleteServiceSubDomainMappingRequest &request);
                void DeleteServiceSubDomainMappingAsync(const Model::DeleteServiceSubDomainMappingRequest& request, const DeleteServiceSubDomainMappingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteServiceSubDomainMappingOutcomeCallable DeleteServiceSubDomainMappingCallable(const Model::DeleteServiceSubDomainMappingRequest& request);

                /**
                 *删除后端通道，需要注意有API绑定时，不允许删除
                 * @param req DeleteUpstreamRequest
                 * @return DeleteUpstreamOutcome
                 */
                DeleteUpstreamOutcome DeleteUpstream(const Model::DeleteUpstreamRequest &request);
                void DeleteUpstreamAsync(const Model::DeleteUpstreamRequest& request, const DeleteUpstreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUpstreamOutcomeCallable DeleteUpstreamCallable(const Model::DeleteUpstreamRequest& request);

                /**
                 *本接口（DeleteUsagePlan）用于删除使用计划。
                 * @param req DeleteUsagePlanRequest
                 * @return DeleteUsagePlanOutcome
                 */
                DeleteUsagePlanOutcome DeleteUsagePlan(const Model::DeleteUsagePlanRequest &request);
                void DeleteUsagePlanAsync(const Model::DeleteUsagePlanRequest& request, const DeleteUsagePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUsagePlanOutcomeCallable DeleteUsagePlanCallable(const Model::DeleteUsagePlanRequest& request);

                /**
                 *本接口（DemoteServiceUsagePlan）用于将某个服务在某个环境的使用计划，降级到API上。
如果服务内没有API不允许进行此操作。
如果当前环境没有发布，不允许进行此操作。
                 * @param req DemoteServiceUsagePlanRequest
                 * @return DemoteServiceUsagePlanOutcome
                 */
                DemoteServiceUsagePlanOutcome DemoteServiceUsagePlan(const Model::DemoteServiceUsagePlanRequest &request);
                void DemoteServiceUsagePlanAsync(const Model::DemoteServiceUsagePlanRequest& request, const DemoteServiceUsagePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DemoteServiceUsagePlanOutcomeCallable DemoteServiceUsagePlanCallable(const Model::DemoteServiceUsagePlanRequest& request);

                /**
                 *查询 API 文档详情
                 * @param req DescribeAPIDocDetailRequest
                 * @return DescribeAPIDocDetailOutcome
                 */
                DescribeAPIDocDetailOutcome DescribeAPIDocDetail(const Model::DescribeAPIDocDetailRequest &request);
                void DescribeAPIDocDetailAsync(const Model::DescribeAPIDocDetailRequest& request, const DescribeAPIDocDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAPIDocDetailOutcomeCallable DescribeAPIDocDetailCallable(const Model::DescribeAPIDocDetailRequest& request);

                /**
                 *查询 API 文档列表
                 * @param req DescribeAPIDocsRequest
                 * @return DescribeAPIDocsOutcome
                 */
                DescribeAPIDocsOutcome DescribeAPIDocs(const Model::DescribeAPIDocsRequest &request);
                void DescribeAPIDocsAsync(const Model::DescribeAPIDocsRequest& request, const DescribeAPIDocsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAPIDocsOutcomeCallable DescribeAPIDocsCallable(const Model::DescribeAPIDocsRequest& request);

                /**
                 *展示插件相关的API列表，包括已绑定的和未绑定的API信息。
                 * @param req DescribeAllPluginApisRequest
                 * @return DescribeAllPluginApisOutcome
                 */
                DescribeAllPluginApisOutcome DescribeAllPluginApis(const Model::DescribeAllPluginApisRequest &request);
                void DescribeAllPluginApisAsync(const Model::DescribeAllPluginApisRequest& request, const DescribeAllPluginApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAllPluginApisOutcomeCallable DescribeAllPluginApisCallable(const Model::DescribeAllPluginApisRequest& request);

                /**
                 *本接口（DescribeApi）用于查询用户 API 网关的 API 接口的详细信息。​
                 * @param req DescribeApiRequest
                 * @return DescribeApiOutcome
                 */
                DescribeApiOutcome DescribeApi(const Model::DescribeApiRequest &request);
                void DescribeApiAsync(const Model::DescribeApiRequest& request, const DescribeApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApiOutcomeCallable DescribeApiCallable(const Model::DescribeApiRequest& request);

                /**
                 *本接口（DescribeApiApp）用于根据应用ID搜索应用。此接口已下线，如需使用功能请使用DescribeApiAppsStatus接口。
                 * @param req DescribeApiAppRequest
                 * @return DescribeApiAppOutcome
                 */
                DescribeApiAppOutcome DescribeApiApp(const Model::DescribeApiAppRequest &request);
                void DescribeApiAppAsync(const Model::DescribeApiAppRequest& request, const DescribeApiAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApiAppOutcomeCallable DescribeApiAppCallable(const Model::DescribeApiAppRequest& request);

                /**
                 *本接口（DescribeApiAppBindApisStatus）查询应用绑定的Api列表。
                 * @param req DescribeApiAppBindApisStatusRequest
                 * @return DescribeApiAppBindApisStatusOutcome
                 */
                DescribeApiAppBindApisStatusOutcome DescribeApiAppBindApisStatus(const Model::DescribeApiAppBindApisStatusRequest &request);
                void DescribeApiAppBindApisStatusAsync(const Model::DescribeApiAppBindApisStatusRequest& request, const DescribeApiAppBindApisStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApiAppBindApisStatusOutcomeCallable DescribeApiAppBindApisStatusCallable(const Model::DescribeApiAppBindApisStatusRequest& request);

                /**
                 *本接口（DescribeApiAppsStatus）查询应用列表。
                 * @param req DescribeApiAppsStatusRequest
                 * @return DescribeApiAppsStatusOutcome
                 */
                DescribeApiAppsStatusOutcome DescribeApiAppsStatus(const Model::DescribeApiAppsStatusRequest &request);
                void DescribeApiAppsStatusAsync(const Model::DescribeApiAppsStatusRequest& request, const DescribeApiAppsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApiAppsStatusOutcomeCallable DescribeApiAppsStatusCallable(const Model::DescribeApiAppsStatusRequest& request);

                /**
                 *本接口（DescribeApiBindApiAppsStatus）查询Api绑定的应用列表。
                 * @param req DescribeApiBindApiAppsStatusRequest
                 * @return DescribeApiBindApiAppsStatusOutcome
                 */
                DescribeApiBindApiAppsStatusOutcome DescribeApiBindApiAppsStatus(const Model::DescribeApiBindApiAppsStatusRequest &request);
                void DescribeApiBindApiAppsStatusAsync(const Model::DescribeApiBindApiAppsStatusRequest& request, const DescribeApiBindApiAppsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApiBindApiAppsStatusOutcomeCallable DescribeApiBindApiAppsStatusCallable(const Model::DescribeApiBindApiAppsStatusRequest& request);

                /**
                 *本接口（DescribeApiEnvironmentStrategy）用于展示API绑定的限流策略。
                 * @param req DescribeApiEnvironmentStrategyRequest
                 * @return DescribeApiEnvironmentStrategyOutcome
                 */
                DescribeApiEnvironmentStrategyOutcome DescribeApiEnvironmentStrategy(const Model::DescribeApiEnvironmentStrategyRequest &request);
                void DescribeApiEnvironmentStrategyAsync(const Model::DescribeApiEnvironmentStrategyRequest& request, const DescribeApiEnvironmentStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApiEnvironmentStrategyOutcomeCallable DescribeApiEnvironmentStrategyCallable(const Model::DescribeApiEnvironmentStrategyRequest& request);

                /**
                 *本接口（DescribeApiForApiApp）用于应用使用者查询部署于 API 网关的 API 接口的详细信息。​
                 * @param req DescribeApiForApiAppRequest
                 * @return DescribeApiForApiAppOutcome
                 */
                DescribeApiForApiAppOutcome DescribeApiForApiApp(const Model::DescribeApiForApiAppRequest &request);
                void DescribeApiForApiAppAsync(const Model::DescribeApiForApiAppRequest& request, const DescribeApiForApiAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApiForApiAppOutcomeCallable DescribeApiForApiAppCallable(const Model::DescribeApiForApiAppRequest& request);

                /**
                 *本接口（DescribeApiKey）用于查询密钥详情。
用户在创建密钥后，可用此接口查询一个 API 密钥的详情，该接口会显示密钥 Key。
                 * @param req DescribeApiKeyRequest
                 * @return DescribeApiKeyOutcome
                 */
                DescribeApiKeyOutcome DescribeApiKey(const Model::DescribeApiKeyRequest &request);
                void DescribeApiKeyAsync(const Model::DescribeApiKeyRequest& request, const DescribeApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApiKeyOutcomeCallable DescribeApiKeyCallable(const Model::DescribeApiKeyRequest& request);

                /**
                 *本接口（DescribeApiKeysStatus）用于查询密钥列表。
当用户创建了多个密钥对时，可使用本接口查询一个或多个 API 密钥信息。
                 * @param req DescribeApiKeysStatusRequest
                 * @return DescribeApiKeysStatusOutcome
                 */
                DescribeApiKeysStatusOutcome DescribeApiKeysStatus(const Model::DescribeApiKeysStatusRequest &request);
                void DescribeApiKeysStatusAsync(const Model::DescribeApiKeysStatusRequest& request, const DescribeApiKeysStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApiKeysStatusOutcomeCallable DescribeApiKeysStatusCallable(const Model::DescribeApiKeysStatusRequest& request);

                /**
                 *本接口（DescribeApiUsagePlan）用于查询服务中 API 使用计划详情。
服务若需要鉴权限流生效，则需要绑定使用计划到此服务中，本接口用于查询绑定到一个服务及其中 API 的所有使用计划。
                 * @param req DescribeApiUsagePlanRequest
                 * @return DescribeApiUsagePlanOutcome
                 */
                DescribeApiUsagePlanOutcome DescribeApiUsagePlan(const Model::DescribeApiUsagePlanRequest &request);
                void DescribeApiUsagePlanAsync(const Model::DescribeApiUsagePlanRequest& request, const DescribeApiUsagePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApiUsagePlanOutcomeCallable DescribeApiUsagePlanCallable(const Model::DescribeApiUsagePlanRequest& request);

                /**
                 *本接口（DescribeApisStatus）用于查看一个服务下的某个 API 或所有 API 列表及其相关信息。
                 * @param req DescribeApisStatusRequest
                 * @return DescribeApisStatusOutcome
                 */
                DescribeApisStatusOutcome DescribeApisStatus(const Model::DescribeApisStatusRequest &request);
                void DescribeApisStatusAsync(const Model::DescribeApisStatusRequest& request, const DescribeApisStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApisStatusOutcomeCallable DescribeApisStatusCallable(const Model::DescribeApisStatusRequest& request);

                /**
                 *本接口（DescribeExclusiveInstanceDetail）用于查询独享实例详情信息。
                 * @param req DescribeExclusiveInstanceDetailRequest
                 * @return DescribeExclusiveInstanceDetailOutcome
                 */
                DescribeExclusiveInstanceDetailOutcome DescribeExclusiveInstanceDetail(const Model::DescribeExclusiveInstanceDetailRequest &request);
                void DescribeExclusiveInstanceDetailAsync(const Model::DescribeExclusiveInstanceDetailRequest& request, const DescribeExclusiveInstanceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExclusiveInstanceDetailOutcomeCallable DescribeExclusiveInstanceDetailCallable(const Model::DescribeExclusiveInstanceDetailRequest& request);

                /**
                 *Get the list of supported regions for dedicated instances
                 * @param req DescribeExclusiveInstanceRegionsRequest
                 * @return DescribeExclusiveInstanceRegionsOutcome
                 */
                DescribeExclusiveInstanceRegionsOutcome DescribeExclusiveInstanceRegions(const Model::DescribeExclusiveInstanceRegionsRequest &request);
                void DescribeExclusiveInstanceRegionsAsync(const Model::DescribeExclusiveInstanceRegionsRequest& request, const DescribeExclusiveInstanceRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExclusiveInstanceRegionsOutcomeCallable DescribeExclusiveInstanceRegionsCallable(const Model::DescribeExclusiveInstanceRegionsRequest& request);

                /**
                 *本接口（DescribeExclusiveInstances）用于查询独享实例列表信息。
                 * @param req DescribeExclusiveInstancesRequest
                 * @return DescribeExclusiveInstancesOutcome
                 */
                DescribeExclusiveInstancesOutcome DescribeExclusiveInstances(const Model::DescribeExclusiveInstancesRequest &request);
                void DescribeExclusiveInstancesAsync(const Model::DescribeExclusiveInstancesRequest& request, const DescribeExclusiveInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExclusiveInstancesOutcomeCallable DescribeExclusiveInstancesCallable(const Model::DescribeExclusiveInstancesRequest& request);

                /**
                 *查询专享实例列表（新）
                 * @param req DescribeExclusiveInstancesStatusRequest
                 * @return DescribeExclusiveInstancesStatusOutcome
                 */
                DescribeExclusiveInstancesStatusOutcome DescribeExclusiveInstancesStatus(const Model::DescribeExclusiveInstancesStatusRequest &request);
                void DescribeExclusiveInstancesStatusAsync(const Model::DescribeExclusiveInstancesStatusRequest& request, const DescribeExclusiveInstancesStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExclusiveInstancesStatusOutcomeCallable DescribeExclusiveInstancesStatusCallable(const Model::DescribeExclusiveInstancesStatusRequest& request);

                /**
                 *本接口（DescribeIPStrategy）用于查询IP策略详情。
                 * @param req DescribeIPStrategyRequest
                 * @return DescribeIPStrategyOutcome
                 */
                DescribeIPStrategyOutcome DescribeIPStrategy(const Model::DescribeIPStrategyRequest &request);
                void DescribeIPStrategyAsync(const Model::DescribeIPStrategyRequest& request, const DescribeIPStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIPStrategyOutcomeCallable DescribeIPStrategyCallable(const Model::DescribeIPStrategyRequest& request);

                /**
                 *本接口（DescribeIPStrategyApisStatus）用于查询IP策略可以绑定的API列表。即服务下所有API和该策略已绑定API的差集。
                 * @param req DescribeIPStrategyApisStatusRequest
                 * @return DescribeIPStrategyApisStatusOutcome
                 */
                DescribeIPStrategyApisStatusOutcome DescribeIPStrategyApisStatus(const Model::DescribeIPStrategyApisStatusRequest &request);
                void DescribeIPStrategyApisStatusAsync(const Model::DescribeIPStrategyApisStatusRequest& request, const DescribeIPStrategyApisStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIPStrategyApisStatusOutcomeCallable DescribeIPStrategyApisStatusCallable(const Model::DescribeIPStrategyApisStatusRequest& request);

                /**
                 *本接口（DescribeIPStrategysStatus）用于查询服务IP策略列表，因为接口名拼写错误，已不推荐使用，请优先使用DescribeIPStrategiesStatus接口。
                 * @param req DescribeIPStrategysStatusRequest
                 * @return DescribeIPStrategysStatusOutcome
                 */
                DescribeIPStrategysStatusOutcome DescribeIPStrategysStatus(const Model::DescribeIPStrategysStatusRequest &request);
                void DescribeIPStrategysStatusAsync(const Model::DescribeIPStrategysStatusRequest& request, const DescribeIPStrategysStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIPStrategysStatusOutcomeCallable DescribeIPStrategysStatusCallable(const Model::DescribeIPStrategysStatusRequest& request);

                /**
                 *获取专享实例网络配置列表
                 * @param req DescribeInstancesNetworkConfigRequest
                 * @return DescribeInstancesNetworkConfigOutcome
                 */
                DescribeInstancesNetworkConfigOutcome DescribeInstancesNetworkConfig(const Model::DescribeInstancesNetworkConfigRequest &request);
                void DescribeInstancesNetworkConfigAsync(const Model::DescribeInstancesNetworkConfigRequest& request, const DescribeInstancesNetworkConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesNetworkConfigOutcomeCallable DescribeInstancesNetworkConfigCallable(const Model::DescribeInstancesNetworkConfigRequest& request);

                /**
                 *本接口DescribeLogSearch用于搜索日志
                 * @param req DescribeLogSearchRequest
                 * @return DescribeLogSearchOutcome
                 */
                DescribeLogSearchOutcome DescribeLogSearch(const Model::DescribeLogSearchRequest &request);
                void DescribeLogSearchAsync(const Model::DescribeLogSearchRequest& request, const DescribeLogSearchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogSearchOutcomeCallable DescribeLogSearchCallable(const Model::DescribeLogSearchRequest& request);

                /**
                 *展示插件详情，支持按照插件ID进行。
                 * @param req DescribePluginRequest
                 * @return DescribePluginOutcome
                 */
                DescribePluginOutcome DescribePlugin(const Model::DescribePluginRequest &request);
                void DescribePluginAsync(const Model::DescribePluginRequest& request, const DescribePluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePluginOutcomeCallable DescribePluginCallable(const Model::DescribePluginRequest& request);

                /**
                 *查询指定插件下绑定的API信息
                 * @param req DescribePluginApisRequest
                 * @return DescribePluginApisOutcome
                 */
                DescribePluginApisOutcome DescribePluginApis(const Model::DescribePluginApisRequest &request);
                void DescribePluginApisAsync(const Model::DescribePluginApisRequest& request, const DescribePluginApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePluginApisOutcomeCallable DescribePluginApisCallable(const Model::DescribePluginApisRequest& request);

                /**
                 *展示插件列表和详情，支持分页，支持按照插件类型查询，支持按照插件ID批量查询，支持按照插件名称查询。
                 * @param req DescribePluginsRequest
                 * @return DescribePluginsOutcome
                 */
                DescribePluginsOutcome DescribePlugins(const Model::DescribePluginsRequest &request);
                void DescribePluginsAsync(const Model::DescribePluginsRequest& request, const DescribePluginsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePluginsOutcomeCallable DescribePluginsCallable(const Model::DescribePluginsRequest& request);

                /**
                 *展示API上已绑定的插件列表。
                 * @param req DescribePluginsByApiRequest
                 * @return DescribePluginsByApiOutcome
                 */
                DescribePluginsByApiOutcome DescribePluginsByApi(const Model::DescribePluginsByApiRequest &request);
                void DescribePluginsByApiAsync(const Model::DescribePluginsByApiRequest& request, const DescribePluginsByApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePluginsByApiOutcomeCallable DescribePluginsByApiCallable(const Model::DescribePluginsByApiRequest& request);

                /**
                 *本接口（DescribeService）用于查询一个服务的详细信息、包括服务的描述、域名、协议、创建时间、发布情况等信息。
                 * @param req DescribeServiceRequest
                 * @return DescribeServiceOutcome
                 */
                DescribeServiceOutcome DescribeService(const Model::DescribeServiceRequest &request);
                void DescribeServiceAsync(const Model::DescribeServiceRequest& request, const DescribeServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServiceOutcomeCallable DescribeServiceCallable(const Model::DescribeServiceRequest& request);

                /**
                 *本接口（DescribeServiceEnvironmentList）用于查询一个服务的环境列表，可查询到此服务下所有环境及其状态。
                 * @param req DescribeServiceEnvironmentListRequest
                 * @return DescribeServiceEnvironmentListOutcome
                 */
                DescribeServiceEnvironmentListOutcome DescribeServiceEnvironmentList(const Model::DescribeServiceEnvironmentListRequest &request);
                void DescribeServiceEnvironmentListAsync(const Model::DescribeServiceEnvironmentListRequest& request, const DescribeServiceEnvironmentListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServiceEnvironmentListOutcomeCallable DescribeServiceEnvironmentListCallable(const Model::DescribeServiceEnvironmentListRequest& request);

                /**
                 *本接口（DescribeServiceEnvironmentReleaseHistory）用于查询服务环境的发布历史。
用户在创建好服务后需要发布到某个环境中才能进行使用，本接口用于查询一个服务某个环境的发布记录。
                 * @param req DescribeServiceEnvironmentReleaseHistoryRequest
                 * @return DescribeServiceEnvironmentReleaseHistoryOutcome
                 */
                DescribeServiceEnvironmentReleaseHistoryOutcome DescribeServiceEnvironmentReleaseHistory(const Model::DescribeServiceEnvironmentReleaseHistoryRequest &request);
                void DescribeServiceEnvironmentReleaseHistoryAsync(const Model::DescribeServiceEnvironmentReleaseHistoryRequest& request, const DescribeServiceEnvironmentReleaseHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServiceEnvironmentReleaseHistoryOutcomeCallable DescribeServiceEnvironmentReleaseHistoryCallable(const Model::DescribeServiceEnvironmentReleaseHistoryRequest& request);

                /**
                 *本接口（DescribeServiceEnvironmentStrategy）用于展示服务限流策略。
                 * @param req DescribeServiceEnvironmentStrategyRequest
                 * @return DescribeServiceEnvironmentStrategyOutcome
                 */
                DescribeServiceEnvironmentStrategyOutcome DescribeServiceEnvironmentStrategy(const Model::DescribeServiceEnvironmentStrategyRequest &request);
                void DescribeServiceEnvironmentStrategyAsync(const Model::DescribeServiceEnvironmentStrategyRequest& request, const DescribeServiceEnvironmentStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServiceEnvironmentStrategyOutcomeCallable DescribeServiceEnvironmentStrategyCallable(const Model::DescribeServiceEnvironmentStrategyRequest& request);

                /**
                 *本接口（DescribeServiceForApiApp）用于应用使用者查询一个服务的详细信息、包括服务的描述、域名、协议等信息。
                 * @param req DescribeServiceForApiAppRequest
                 * @return DescribeServiceForApiAppOutcome
                 */
                DescribeServiceForApiAppOutcome DescribeServiceForApiApp(const Model::DescribeServiceForApiAppRequest &request);
                void DescribeServiceForApiAppAsync(const Model::DescribeServiceForApiAppRequest& request, const DescribeServiceForApiAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServiceForApiAppOutcomeCallable DescribeServiceForApiAppCallable(const Model::DescribeServiceForApiAppRequest& request);

                /**
                 *本接口（DescribeServiceReleaseVersion）查询一个服务下面所有已经发布的版本列表。
用户在发布服务时，常有多个版本发布，可使用本接口查询已发布的版本。
                 * @param req DescribeServiceReleaseVersionRequest
                 * @return DescribeServiceReleaseVersionOutcome
                 */
                DescribeServiceReleaseVersionOutcome DescribeServiceReleaseVersion(const Model::DescribeServiceReleaseVersionRequest &request);
                void DescribeServiceReleaseVersionAsync(const Model::DescribeServiceReleaseVersionRequest& request, const DescribeServiceReleaseVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServiceReleaseVersionOutcomeCallable DescribeServiceReleaseVersionCallable(const Model::DescribeServiceReleaseVersionRequest& request);

                /**
                 *本接口（DescribeServiceSubDomainMappings）用于查询自定义域名的路径映射。
API 网关可绑定自定义域名到服务，并且可以对自定义域名的路径进行映射，可自定义不同的路径映射到服务中的三个环境，本接口用于查询绑定服务的自定义域名的路径映射列表。
                 * @param req DescribeServiceSubDomainMappingsRequest
                 * @return DescribeServiceSubDomainMappingsOutcome
                 */
                DescribeServiceSubDomainMappingsOutcome DescribeServiceSubDomainMappings(const Model::DescribeServiceSubDomainMappingsRequest &request);
                void DescribeServiceSubDomainMappingsAsync(const Model::DescribeServiceSubDomainMappingsRequest& request, const DescribeServiceSubDomainMappingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServiceSubDomainMappingsOutcomeCallable DescribeServiceSubDomainMappingsCallable(const Model::DescribeServiceSubDomainMappingsRequest& request);

                /**
                 *本接口（DescribeServiceSubDomains）用于查询自定义域名列表。
API 网关可绑定自定义域名到服务，用于服务调用。此接口用于查询用户绑定在服务的自定义域名列表。
                 * @param req DescribeServiceSubDomainsRequest
                 * @return DescribeServiceSubDomainsOutcome
                 */
                DescribeServiceSubDomainsOutcome DescribeServiceSubDomains(const Model::DescribeServiceSubDomainsRequest &request);
                void DescribeServiceSubDomainsAsync(const Model::DescribeServiceSubDomainsRequest& request, const DescribeServiceSubDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServiceSubDomainsOutcomeCallable DescribeServiceSubDomainsCallable(const Model::DescribeServiceSubDomainsRequest& request);

                /**
                 *本接口（DescribeServiceUsagePlan）用于查询服务使用计划详情。
服务若需要鉴权限流生效，则需要绑定使用计划到此服务中，本接口用于查询绑定到一个服务的所有使用计划。
                 * @param req DescribeServiceUsagePlanRequest
                 * @return DescribeServiceUsagePlanOutcome
                 */
                DescribeServiceUsagePlanOutcome DescribeServiceUsagePlan(const Model::DescribeServiceUsagePlanRequest &request);
                void DescribeServiceUsagePlanAsync(const Model::DescribeServiceUsagePlanRequest& request, const DescribeServiceUsagePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServiceUsagePlanOutcomeCallable DescribeServiceUsagePlanCallable(const Model::DescribeServiceUsagePlanRequest& request);

                /**
                 *本接口（DescribeServicesStatus）用于搜索查询某一个服务或多个服务的列表，并返回服务相关的域名、时间等信息。
                 * @param req DescribeServicesStatusRequest
                 * @return DescribeServicesStatusOutcome
                 */
                DescribeServicesStatusOutcome DescribeServicesStatus(const Model::DescribeServicesStatusRequest &request);
                void DescribeServicesStatusAsync(const Model::DescribeServicesStatusRequest& request, const DescribeServicesStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServicesStatusOutcomeCallable DescribeServicesStatusCallable(const Model::DescribeServicesStatusRequest& request);

                /**
                 *查询后端通道所绑定的API列表
                 * @param req DescribeUpstreamBindApisRequest
                 * @return DescribeUpstreamBindApisOutcome
                 */
                DescribeUpstreamBindApisOutcome DescribeUpstreamBindApis(const Model::DescribeUpstreamBindApisRequest &request);
                void DescribeUpstreamBindApisAsync(const Model::DescribeUpstreamBindApisRequest& request, const DescribeUpstreamBindApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUpstreamBindApisOutcomeCallable DescribeUpstreamBindApisCallable(const Model::DescribeUpstreamBindApisRequest& request);

                /**
                 *查询后端通道列表详情
                 * @param req DescribeUpstreamsRequest
                 * @return DescribeUpstreamsOutcome
                 */
                DescribeUpstreamsOutcome DescribeUpstreams(const Model::DescribeUpstreamsRequest &request);
                void DescribeUpstreamsAsync(const Model::DescribeUpstreamsRequest& request, const DescribeUpstreamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUpstreamsOutcomeCallable DescribeUpstreamsCallable(const Model::DescribeUpstreamsRequest& request);

                /**
                 *本接口（DescribeUsagePlan）用于查询一个使用计划的详细信息，包括名称、QPS、创建时间绑定的环境等。
                 * @param req DescribeUsagePlanRequest
                 * @return DescribeUsagePlanOutcome
                 */
                DescribeUsagePlanOutcome DescribeUsagePlan(const Model::DescribeUsagePlanRequest &request);
                void DescribeUsagePlanAsync(const Model::DescribeUsagePlanRequest& request, const DescribeUsagePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUsagePlanOutcomeCallable DescribeUsagePlanCallable(const Model::DescribeUsagePlanRequest& request);

                /**
                 *本接口（DescribeUsagePlanEnvironments）用于查询使用计划绑定的环境列表。
用户在绑定了某个使用计划到环境后，可使用本接口查询这个使用计划绑定的所有服务的环境。
                 * @param req DescribeUsagePlanEnvironmentsRequest
                 * @return DescribeUsagePlanEnvironmentsOutcome
                 */
                DescribeUsagePlanEnvironmentsOutcome DescribeUsagePlanEnvironments(const Model::DescribeUsagePlanEnvironmentsRequest &request);
                void DescribeUsagePlanEnvironmentsAsync(const Model::DescribeUsagePlanEnvironmentsRequest& request, const DescribeUsagePlanEnvironmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUsagePlanEnvironmentsOutcomeCallable DescribeUsagePlanEnvironmentsCallable(const Model::DescribeUsagePlanEnvironmentsRequest& request);

                /**
                 *本接口（DescribeUsagePlanSecretIds）用于查询使用计划绑定的密钥列表。
在 API 网关中，一个使用计划可绑定多个密钥对，可使用本接口查询使用计划绑定的密钥列表。
                 * @param req DescribeUsagePlanSecretIdsRequest
                 * @return DescribeUsagePlanSecretIdsOutcome
                 */
                DescribeUsagePlanSecretIdsOutcome DescribeUsagePlanSecretIds(const Model::DescribeUsagePlanSecretIdsRequest &request);
                void DescribeUsagePlanSecretIdsAsync(const Model::DescribeUsagePlanSecretIdsRequest& request, const DescribeUsagePlanSecretIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUsagePlanSecretIdsOutcomeCallable DescribeUsagePlanSecretIdsCallable(const Model::DescribeUsagePlanSecretIdsRequest& request);

                /**
                 *本接口（DescribeUsagePlanStatus）用于查询使用计划的列表。
                 * @param req DescribeUsagePlansStatusRequest
                 * @return DescribeUsagePlansStatusOutcome
                 */
                DescribeUsagePlansStatusOutcome DescribeUsagePlansStatus(const Model::DescribeUsagePlansStatusRequest &request);
                void DescribeUsagePlansStatusAsync(const Model::DescribeUsagePlansStatusRequest& request, const DescribeUsagePlansStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUsagePlansStatusOutcomeCallable DescribeUsagePlansStatusCallable(const Model::DescribeUsagePlansStatusRequest& request);

                /**
                 *解除插件与API绑定
                 * @param req DetachPluginRequest
                 * @return DetachPluginOutcome
                 */
                DetachPluginOutcome DetachPlugin(const Model::DetachPluginRequest &request);
                void DetachPluginAsync(const Model::DetachPluginRequest& request, const DetachPluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachPluginOutcomeCallable DetachPluginCallable(const Model::DetachPluginRequest& request);

                /**
                 *本接口（DisableApiKey）用于禁用一对 API 密钥。
                 * @param req DisableApiKeyRequest
                 * @return DisableApiKeyOutcome
                 */
                DisableApiKeyOutcome DisableApiKey(const Model::DisableApiKeyRequest &request);
                void DisableApiKeyAsync(const Model::DisableApiKeyRequest& request, const DisableApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableApiKeyOutcomeCallable DisableApiKeyCallable(const Model::DisableApiKeyRequest& request);

                /**
                 *本接口（EnableApiKey）用于启动一对被禁用的 API 密钥。
                 * @param req EnableApiKeyRequest
                 * @return EnableApiKeyOutcome
                 */
                EnableApiKeyOutcome EnableApiKey(const Model::EnableApiKeyRequest &request);
                void EnableApiKeyAsync(const Model::EnableApiKeyRequest& request, const EnableApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableApiKeyOutcomeCallable EnableApiKeyCallable(const Model::EnableApiKeyRequest& request);

                /**
                 *本接口（ImportOpenApi）用于将OpenAPI规范定义的API导入到API网关。 
                 * @param req ImportOpenApiRequest
                 * @return ImportOpenApiOutcome
                 */
                ImportOpenApiOutcome ImportOpenApi(const Model::ImportOpenApiRequest &request);
                void ImportOpenApiAsync(const Model::ImportOpenApiRequest& request, const ImportOpenApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImportOpenApiOutcomeCallable ImportOpenApiCallable(const Model::ImportOpenApiRequest& request);

                /**
                 *修改 API 文档
                 * @param req ModifyAPIDocRequest
                 * @return ModifyAPIDocOutcome
                 */
                ModifyAPIDocOutcome ModifyAPIDoc(const Model::ModifyAPIDocRequest &request);
                void ModifyAPIDocAsync(const Model::ModifyAPIDocRequest& request, const ModifyAPIDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAPIDocOutcomeCallable ModifyAPIDocCallable(const Model::ModifyAPIDocRequest& request);

                /**
                 *本接口（ModifyApi）用于修改 API 接口，可调用此接口对已经配置的 API 接口进行编辑修改。修改后的 API 需要重新发布 API 所在的服务到对应环境方能生效。
                 * @param req ModifyApiRequest
                 * @return ModifyApiOutcome
                 */
                ModifyApiOutcome ModifyApi(const Model::ModifyApiRequest &request);
                void ModifyApiAsync(const Model::ModifyApiRequest& request, const ModifyApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApiOutcomeCallable ModifyApiCallable(const Model::ModifyApiRequest& request);

                /**
                 *本接口（ModifyApiApp）用于修改已经创建的应用。
                 * @param req ModifyApiAppRequest
                 * @return ModifyApiAppOutcome
                 */
                ModifyApiAppOutcome ModifyApiApp(const Model::ModifyApiAppRequest &request);
                void ModifyApiAppAsync(const Model::ModifyApiAppRequest& request, const ModifyApiAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApiAppOutcomeCallable ModifyApiAppCallable(const Model::ModifyApiAppRequest& request);

                /**
                 *本接口（ModifyApiEnvironmentStrategy）用于修改API限流策略
                 * @param req ModifyApiEnvironmentStrategyRequest
                 * @return ModifyApiEnvironmentStrategyOutcome
                 */
                ModifyApiEnvironmentStrategyOutcome ModifyApiEnvironmentStrategy(const Model::ModifyApiEnvironmentStrategyRequest &request);
                void ModifyApiEnvironmentStrategyAsync(const Model::ModifyApiEnvironmentStrategyRequest& request, const ModifyApiEnvironmentStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApiEnvironmentStrategyOutcomeCallable ModifyApiEnvironmentStrategyCallable(const Model::ModifyApiEnvironmentStrategyRequest& request);

                /**
                 *提供增量更新API能力，主要是给程序调用（区别于ModifyApi，该接口是需要传入API的全量参数，对console使用较友好）
                 * @param req ModifyApiIncrementRequest
                 * @return ModifyApiIncrementOutcome
                 */
                ModifyApiIncrementOutcome ModifyApiIncrement(const Model::ModifyApiIncrementRequest &request);
                void ModifyApiIncrementAsync(const Model::ModifyApiIncrementRequest& request, const ModifyApiIncrementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApiIncrementOutcomeCallable ModifyApiIncrementCallable(const Model::ModifyApiIncrementRequest& request);

                /**
                 *本接口（ModifyExclusiveInstance）用于修改独享实例信息。​
                 * @param req ModifyExclusiveInstanceRequest
                 * @return ModifyExclusiveInstanceOutcome
                 */
                ModifyExclusiveInstanceOutcome ModifyExclusiveInstance(const Model::ModifyExclusiveInstanceRequest &request);
                void ModifyExclusiveInstanceAsync(const Model::ModifyExclusiveInstanceRequest& request, const ModifyExclusiveInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyExclusiveInstanceOutcomeCallable ModifyExclusiveInstanceCallable(const Model::ModifyExclusiveInstanceRequest& request);

                /**
                 *本接口（ModifyIPStrategy）用于修改服务IP策略。
                 * @param req ModifyIPStrategyRequest
                 * @return ModifyIPStrategyOutcome
                 */
                ModifyIPStrategyOutcome ModifyIPStrategy(const Model::ModifyIPStrategyRequest &request);
                void ModifyIPStrategyAsync(const Model::ModifyIPStrategyRequest& request, const ModifyIPStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyIPStrategyOutcomeCallable ModifyIPStrategyCallable(const Model::ModifyIPStrategyRequest& request);

                /**
                 *修改API网关插件。
                 * @param req ModifyPluginRequest
                 * @return ModifyPluginOutcome
                 */
                ModifyPluginOutcome ModifyPlugin(const Model::ModifyPluginRequest &request);
                void ModifyPluginAsync(const Model::ModifyPluginRequest& request, const ModifyPluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPluginOutcomeCallable ModifyPluginCallable(const Model::ModifyPluginRequest& request);

                /**
                 *本接口（ModifyService）用于修改服务的相关信息。当服务创建后，服务的名称、描述和服务类型均可被修改。
                 * @param req ModifyServiceRequest
                 * @return ModifyServiceOutcome
                 */
                ModifyServiceOutcome ModifyService(const Model::ModifyServiceRequest &request);
                void ModifyServiceAsync(const Model::ModifyServiceRequest& request, const ModifyServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyServiceOutcomeCallable ModifyServiceCallable(const Model::ModifyServiceRequest& request);

                /**
                 *本接口（ModifyServiceEnvironmentStrategy）用于修改服务限流策略
                 * @param req ModifyServiceEnvironmentStrategyRequest
                 * @return ModifyServiceEnvironmentStrategyOutcome
                 */
                ModifyServiceEnvironmentStrategyOutcome ModifyServiceEnvironmentStrategy(const Model::ModifyServiceEnvironmentStrategyRequest &request);
                void ModifyServiceEnvironmentStrategyAsync(const Model::ModifyServiceEnvironmentStrategyRequest& request, const ModifyServiceEnvironmentStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyServiceEnvironmentStrategyOutcomeCallable ModifyServiceEnvironmentStrategyCallable(const Model::ModifyServiceEnvironmentStrategyRequest& request);

                /**
                 *本接口（ModifySubDomain）用于修改服务的自定义域名设置中的路径映射，可以修改绑定自定义域名之前的路径映射规则。
                 * @param req ModifySubDomainRequest
                 * @return ModifySubDomainOutcome
                 */
                ModifySubDomainOutcome ModifySubDomain(const Model::ModifySubDomainRequest &request);
                void ModifySubDomainAsync(const Model::ModifySubDomainRequest& request, const ModifySubDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySubDomainOutcomeCallable ModifySubDomainCallable(const Model::ModifySubDomainRequest& request);

                /**
                 *修改后端通道
                 * @param req ModifyUpstreamRequest
                 * @return ModifyUpstreamOutcome
                 */
                ModifyUpstreamOutcome ModifyUpstream(const Model::ModifyUpstreamRequest &request);
                void ModifyUpstreamAsync(const Model::ModifyUpstreamRequest& request, const ModifyUpstreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUpstreamOutcomeCallable ModifyUpstreamCallable(const Model::ModifyUpstreamRequest& request);

                /**
                 *本接口（ModifyUsagePlan）用于修改使用计划的名称，描述及 QPS。
                 * @param req ModifyUsagePlanRequest
                 * @return ModifyUsagePlanOutcome
                 */
                ModifyUsagePlanOutcome ModifyUsagePlan(const Model::ModifyUsagePlanRequest &request);
                void ModifyUsagePlanAsync(const Model::ModifyUsagePlanRequest& request, const ModifyUsagePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUsagePlanOutcomeCallable ModifyUsagePlanCallable(const Model::ModifyUsagePlanRequest& request);

                /**
                 *本接口（ReleaseService）用于发布服务。
API 网关的服务创建后，需要发布到某个环境方生效后，使用者才能进行调用，此接口用于发布服务到环境，如 release 环境。
                 * @param req ReleaseServiceRequest
                 * @return ReleaseServiceOutcome
                 */
                ReleaseServiceOutcome ReleaseService(const Model::ReleaseServiceRequest &request);
                void ReleaseServiceAsync(const Model::ReleaseServiceRequest& request, const ReleaseServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReleaseServiceOutcomeCallable ReleaseServiceCallable(const Model::ReleaseServiceRequest& request);

                /**
                 *重置API文档密码
                 * @param req ResetAPIDocPasswordRequest
                 * @return ResetAPIDocPasswordOutcome
                 */
                ResetAPIDocPasswordOutcome ResetAPIDocPassword(const Model::ResetAPIDocPasswordRequest &request);
                void ResetAPIDocPasswordAsync(const Model::ResetAPIDocPasswordRequest& request, const ResetAPIDocPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetAPIDocPasswordOutcomeCallable ResetAPIDocPasswordCallable(const Model::ResetAPIDocPasswordRequest& request);

                /**
                 *本接口（UnBindEnvironment）用于将使用计划从特定环境解绑。
                 * @param req UnBindEnvironmentRequest
                 * @return UnBindEnvironmentOutcome
                 */
                UnBindEnvironmentOutcome UnBindEnvironment(const Model::UnBindEnvironmentRequest &request);
                void UnBindEnvironmentAsync(const Model::UnBindEnvironmentRequest& request, const UnBindEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnBindEnvironmentOutcomeCallable UnBindEnvironmentCallable(const Model::UnBindEnvironmentRequest& request);

                /**
                 *本接口（UnBindIPStrategy）用于服务解绑IP策略。
                 * @param req UnBindIPStrategyRequest
                 * @return UnBindIPStrategyOutcome
                 */
                UnBindIPStrategyOutcome UnBindIPStrategy(const Model::UnBindIPStrategyRequest &request);
                void UnBindIPStrategyAsync(const Model::UnBindIPStrategyRequest& request, const UnBindIPStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnBindIPStrategyOutcomeCallable UnBindIPStrategyCallable(const Model::UnBindIPStrategyRequest& request);

                /**
                 *本接口（UnBindSecretIds）用于为使用计划解绑密钥。
                 * @param req UnBindSecretIdsRequest
                 * @return UnBindSecretIdsOutcome
                 */
                UnBindSecretIdsOutcome UnBindSecretIds(const Model::UnBindSecretIdsRequest &request);
                void UnBindSecretIdsAsync(const Model::UnBindSecretIdsRequest& request, const UnBindSecretIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnBindSecretIdsOutcomeCallable UnBindSecretIdsCallable(const Model::UnBindSecretIdsRequest& request);

                /**
                 *本接口（UnBindSubDomain）用于解绑自定义域名。
用户使用 API 网关绑定了自定义域名到服务中后，若想要解绑此自定义域名，可使用此接口。
                 * @param req UnBindSubDomainRequest
                 * @return UnBindSubDomainOutcome
                 */
                UnBindSubDomainOutcome UnBindSubDomain(const Model::UnBindSubDomainRequest &request);
                void UnBindSubDomainAsync(const Model::UnBindSubDomainRequest& request, const UnBindSubDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnBindSubDomainOutcomeCallable UnBindSubDomainCallable(const Model::UnBindSubDomainRequest& request);

                /**
                 *本接口（UnReleaseService）用于下线服务。
用户发布服务到某个环境后，此服务中的 API 方可被调用者进行调用，当用户需要将此服务从发布环境中下线时，可调用此 API。下线后的服务不可被调用。
                 * @param req UnReleaseServiceRequest
                 * @return UnReleaseServiceOutcome
                 */
                UnReleaseServiceOutcome UnReleaseService(const Model::UnReleaseServiceRequest &request);
                void UnReleaseServiceAsync(const Model::UnReleaseServiceRequest& request, const UnReleaseServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnReleaseServiceOutcomeCallable UnReleaseServiceCallable(const Model::UnReleaseServiceRequest& request);

                /**
                 *本接口（UnbindApiApp）用于解除应用和API绑定。
                 * @param req UnbindApiAppRequest
                 * @return UnbindApiAppOutcome
                 */
                UnbindApiAppOutcome UnbindApiApp(const Model::UnbindApiAppRequest &request);
                void UnbindApiAppAsync(const Model::UnbindApiAppRequest& request, const UnbindApiAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindApiAppOutcomeCallable UnbindApiAppCallable(const Model::UnbindApiAppRequest& request);

                /**
                 *本接口（UpdateApiAppKey）用于更新应用密钥。
                 * @param req UpdateApiAppKeyRequest
                 * @return UpdateApiAppKeyOutcome
                 */
                UpdateApiAppKeyOutcome UpdateApiAppKey(const Model::UpdateApiAppKeyRequest &request);
                void UpdateApiAppKeyAsync(const Model::UpdateApiAppKeyRequest& request, const UpdateApiAppKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateApiAppKeyOutcomeCallable UpdateApiAppKeyCallable(const Model::UpdateApiAppKeyRequest& request);

                /**
                 *本接口（UpdateApiKey）用于更换用户已创建的一对 API 密钥。
                 * @param req UpdateApiKeyRequest
                 * @return UpdateApiKeyOutcome
                 */
                UpdateApiKeyOutcome UpdateApiKey(const Model::UpdateApiKeyRequest &request);
                void UpdateApiKeyAsync(const Model::UpdateApiKeyRequest& request, const UpdateApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateApiKeyOutcomeCallable UpdateApiKeyCallable(const Model::UpdateApiKeyRequest& request);

                /**
                 *本接口（UpdateService）用于从服务已发布的环境中将运行版本切换到特定版本。用户在使用 API 网关创建服务并发布服务到某个环境后，如在开发过程产生多个版本需要切换，此时可调用本接口。
                 * @param req UpdateServiceRequest
                 * @return UpdateServiceOutcome
                 */
                UpdateServiceOutcome UpdateService(const Model::UpdateServiceRequest &request);
                void UpdateServiceAsync(const Model::UpdateServiceRequest& request, const UpdateServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateServiceOutcomeCallable UpdateServiceCallable(const Model::UpdateServiceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_APIGATEWAYCLIENT_H_
