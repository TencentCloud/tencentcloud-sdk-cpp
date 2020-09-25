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

#ifndef TENCENTCLOUD_GSE_V20191112_GSECLIENT_H_
#define TENCENTCLOUD_GSE_V20191112_GSECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/gse/v20191112/model/AttachCcnInstancesRequest.h>
#include <tencentcloud/gse/v20191112/model/AttachCcnInstancesResponse.h>
#include <tencentcloud/gse/v20191112/model/CreateAliasRequest.h>
#include <tencentcloud/gse/v20191112/model/CreateAliasResponse.h>
#include <tencentcloud/gse/v20191112/model/CreateAssetRequest.h>
#include <tencentcloud/gse/v20191112/model/CreateAssetResponse.h>
#include <tencentcloud/gse/v20191112/model/CreateGameServerSessionRequest.h>
#include <tencentcloud/gse/v20191112/model/CreateGameServerSessionResponse.h>
#include <tencentcloud/gse/v20191112/model/DeleteAliasRequest.h>
#include <tencentcloud/gse/v20191112/model/DeleteAliasResponse.h>
#include <tencentcloud/gse/v20191112/model/DeleteAssetRequest.h>
#include <tencentcloud/gse/v20191112/model/DeleteAssetResponse.h>
#include <tencentcloud/gse/v20191112/model/DeleteFleetRequest.h>
#include <tencentcloud/gse/v20191112/model/DeleteFleetResponse.h>
#include <tencentcloud/gse/v20191112/model/DeleteScalingPolicyRequest.h>
#include <tencentcloud/gse/v20191112/model/DeleteScalingPolicyResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribeAliasRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeAliasResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribeAssetRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeAssetResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribeAssetsRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeAssetsResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribeCcnInstancesRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeCcnInstancesResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribeFleetAttributesRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeFleetAttributesResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribeFleetEventsRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeFleetEventsResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribeFleetPortSettingsRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeFleetPortSettingsResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribeFleetUtilizationRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeFleetUtilizationResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribeGameServerSessionDetailsRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeGameServerSessionDetailsResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribeGameServerSessionPlacementRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeGameServerSessionPlacementResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribeGameServerSessionQueuesRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeGameServerSessionQueuesResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribeGameServerSessionsRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeGameServerSessionsResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribeInstanceTypesRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeInstanceTypesResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribeInstancesRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeInstancesResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribePlayerSessionsRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribePlayerSessionsResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribeRuntimeConfigurationRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeRuntimeConfigurationResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribeScalingPoliciesRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeScalingPoliciesResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribeUserQuotaRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeUserQuotaResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribeUserQuotasRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeUserQuotasResponse.h>
#include <tencentcloud/gse/v20191112/model/DetachCcnInstancesRequest.h>
#include <tencentcloud/gse/v20191112/model/DetachCcnInstancesResponse.h>
#include <tencentcloud/gse/v20191112/model/GetGameServerSessionLogUrlRequest.h>
#include <tencentcloud/gse/v20191112/model/GetGameServerSessionLogUrlResponse.h>
#include <tencentcloud/gse/v20191112/model/GetInstanceAccessRequest.h>
#include <tencentcloud/gse/v20191112/model/GetInstanceAccessResponse.h>
#include <tencentcloud/gse/v20191112/model/GetUploadCredentialsRequest.h>
#include <tencentcloud/gse/v20191112/model/GetUploadCredentialsResponse.h>
#include <tencentcloud/gse/v20191112/model/GetUploadFederationTokenRequest.h>
#include <tencentcloud/gse/v20191112/model/GetUploadFederationTokenResponse.h>
#include <tencentcloud/gse/v20191112/model/JoinGameServerSessionRequest.h>
#include <tencentcloud/gse/v20191112/model/JoinGameServerSessionResponse.h>
#include <tencentcloud/gse/v20191112/model/ListAliasesRequest.h>
#include <tencentcloud/gse/v20191112/model/ListAliasesResponse.h>
#include <tencentcloud/gse/v20191112/model/ListFleetsRequest.h>
#include <tencentcloud/gse/v20191112/model/ListFleetsResponse.h>
#include <tencentcloud/gse/v20191112/model/PutScalingPolicyRequest.h>
#include <tencentcloud/gse/v20191112/model/PutScalingPolicyResponse.h>
#include <tencentcloud/gse/v20191112/model/ResolveAliasRequest.h>
#include <tencentcloud/gse/v20191112/model/ResolveAliasResponse.h>
#include <tencentcloud/gse/v20191112/model/SearchGameServerSessionsRequest.h>
#include <tencentcloud/gse/v20191112/model/SearchGameServerSessionsResponse.h>
#include <tencentcloud/gse/v20191112/model/SetServerWeightRequest.h>
#include <tencentcloud/gse/v20191112/model/SetServerWeightResponse.h>
#include <tencentcloud/gse/v20191112/model/StartFleetActionsRequest.h>
#include <tencentcloud/gse/v20191112/model/StartFleetActionsResponse.h>
#include <tencentcloud/gse/v20191112/model/StartGameServerSessionPlacementRequest.h>
#include <tencentcloud/gse/v20191112/model/StartGameServerSessionPlacementResponse.h>
#include <tencentcloud/gse/v20191112/model/StartMatchPlacementRequest.h>
#include <tencentcloud/gse/v20191112/model/StartMatchPlacementResponse.h>
#include <tencentcloud/gse/v20191112/model/StopFleetActionsRequest.h>
#include <tencentcloud/gse/v20191112/model/StopFleetActionsResponse.h>
#include <tencentcloud/gse/v20191112/model/StopGameServerSessionPlacementRequest.h>
#include <tencentcloud/gse/v20191112/model/StopGameServerSessionPlacementResponse.h>
#include <tencentcloud/gse/v20191112/model/UpdateAliasRequest.h>
#include <tencentcloud/gse/v20191112/model/UpdateAliasResponse.h>
#include <tencentcloud/gse/v20191112/model/UpdateAssetRequest.h>
#include <tencentcloud/gse/v20191112/model/UpdateAssetResponse.h>
#include <tencentcloud/gse/v20191112/model/UpdateFleetAttributesRequest.h>
#include <tencentcloud/gse/v20191112/model/UpdateFleetAttributesResponse.h>
#include <tencentcloud/gse/v20191112/model/UpdateFleetPortSettingsRequest.h>
#include <tencentcloud/gse/v20191112/model/UpdateFleetPortSettingsResponse.h>
#include <tencentcloud/gse/v20191112/model/UpdateGameServerSessionRequest.h>
#include <tencentcloud/gse/v20191112/model/UpdateGameServerSessionResponse.h>
#include <tencentcloud/gse/v20191112/model/UpdateRuntimeConfigurationRequest.h>
#include <tencentcloud/gse/v20191112/model/UpdateRuntimeConfigurationResponse.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            class GseClient : public AbstractClient
            {
            public:
                GseClient(const Credential &credential, const std::string &region);
                GseClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::AttachCcnInstancesResponse> AttachCcnInstancesOutcome;
                typedef std::future<AttachCcnInstancesOutcome> AttachCcnInstancesOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::AttachCcnInstancesRequest&, AttachCcnInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachCcnInstancesAsyncHandler;
                typedef Outcome<Error, Model::CreateAliasResponse> CreateAliasOutcome;
                typedef std::future<CreateAliasOutcome> CreateAliasOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::CreateAliasRequest&, CreateAliasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAliasAsyncHandler;
                typedef Outcome<Error, Model::CreateAssetResponse> CreateAssetOutcome;
                typedef std::future<CreateAssetOutcome> CreateAssetOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::CreateAssetRequest&, CreateAssetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAssetAsyncHandler;
                typedef Outcome<Error, Model::CreateGameServerSessionResponse> CreateGameServerSessionOutcome;
                typedef std::future<CreateGameServerSessionOutcome> CreateGameServerSessionOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::CreateGameServerSessionRequest&, CreateGameServerSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGameServerSessionAsyncHandler;
                typedef Outcome<Error, Model::DeleteAliasResponse> DeleteAliasOutcome;
                typedef std::future<DeleteAliasOutcome> DeleteAliasOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DeleteAliasRequest&, DeleteAliasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAliasAsyncHandler;
                typedef Outcome<Error, Model::DeleteAssetResponse> DeleteAssetOutcome;
                typedef std::future<DeleteAssetOutcome> DeleteAssetOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DeleteAssetRequest&, DeleteAssetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAssetAsyncHandler;
                typedef Outcome<Error, Model::DeleteFleetResponse> DeleteFleetOutcome;
                typedef std::future<DeleteFleetOutcome> DeleteFleetOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DeleteFleetRequest&, DeleteFleetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFleetAsyncHandler;
                typedef Outcome<Error, Model::DeleteScalingPolicyResponse> DeleteScalingPolicyOutcome;
                typedef std::future<DeleteScalingPolicyOutcome> DeleteScalingPolicyOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DeleteScalingPolicyRequest&, DeleteScalingPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteScalingPolicyAsyncHandler;
                typedef Outcome<Error, Model::DescribeAliasResponse> DescribeAliasOutcome;
                typedef std::future<DescribeAliasOutcome> DescribeAliasOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeAliasRequest&, DescribeAliasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAliasAsyncHandler;
                typedef Outcome<Error, Model::DescribeAssetResponse> DescribeAssetOutcome;
                typedef std::future<DescribeAssetOutcome> DescribeAssetOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeAssetRequest&, DescribeAssetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetAsyncHandler;
                typedef Outcome<Error, Model::DescribeAssetsResponse> DescribeAssetsOutcome;
                typedef std::future<DescribeAssetsOutcome> DescribeAssetsOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeAssetsRequest&, DescribeAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetsAsyncHandler;
                typedef Outcome<Error, Model::DescribeCcnInstancesResponse> DescribeCcnInstancesOutcome;
                typedef std::future<DescribeCcnInstancesOutcome> DescribeCcnInstancesOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeCcnInstancesRequest&, DescribeCcnInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCcnInstancesAsyncHandler;
                typedef Outcome<Error, Model::DescribeFleetAttributesResponse> DescribeFleetAttributesOutcome;
                typedef std::future<DescribeFleetAttributesOutcome> DescribeFleetAttributesOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeFleetAttributesRequest&, DescribeFleetAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFleetAttributesAsyncHandler;
                typedef Outcome<Error, Model::DescribeFleetEventsResponse> DescribeFleetEventsOutcome;
                typedef std::future<DescribeFleetEventsOutcome> DescribeFleetEventsOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeFleetEventsRequest&, DescribeFleetEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFleetEventsAsyncHandler;
                typedef Outcome<Error, Model::DescribeFleetPortSettingsResponse> DescribeFleetPortSettingsOutcome;
                typedef std::future<DescribeFleetPortSettingsOutcome> DescribeFleetPortSettingsOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeFleetPortSettingsRequest&, DescribeFleetPortSettingsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFleetPortSettingsAsyncHandler;
                typedef Outcome<Error, Model::DescribeFleetUtilizationResponse> DescribeFleetUtilizationOutcome;
                typedef std::future<DescribeFleetUtilizationOutcome> DescribeFleetUtilizationOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeFleetUtilizationRequest&, DescribeFleetUtilizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFleetUtilizationAsyncHandler;
                typedef Outcome<Error, Model::DescribeGameServerSessionDetailsResponse> DescribeGameServerSessionDetailsOutcome;
                typedef std::future<DescribeGameServerSessionDetailsOutcome> DescribeGameServerSessionDetailsOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeGameServerSessionDetailsRequest&, DescribeGameServerSessionDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGameServerSessionDetailsAsyncHandler;
                typedef Outcome<Error, Model::DescribeGameServerSessionPlacementResponse> DescribeGameServerSessionPlacementOutcome;
                typedef std::future<DescribeGameServerSessionPlacementOutcome> DescribeGameServerSessionPlacementOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeGameServerSessionPlacementRequest&, DescribeGameServerSessionPlacementOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGameServerSessionPlacementAsyncHandler;
                typedef Outcome<Error, Model::DescribeGameServerSessionQueuesResponse> DescribeGameServerSessionQueuesOutcome;
                typedef std::future<DescribeGameServerSessionQueuesOutcome> DescribeGameServerSessionQueuesOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeGameServerSessionQueuesRequest&, DescribeGameServerSessionQueuesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGameServerSessionQueuesAsyncHandler;
                typedef Outcome<Error, Model::DescribeGameServerSessionsResponse> DescribeGameServerSessionsOutcome;
                typedef std::future<DescribeGameServerSessionsOutcome> DescribeGameServerSessionsOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeGameServerSessionsRequest&, DescribeGameServerSessionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGameServerSessionsAsyncHandler;
                typedef Outcome<Error, Model::DescribeInstanceTypesResponse> DescribeInstanceTypesOutcome;
                typedef std::future<DescribeInstanceTypesOutcome> DescribeInstanceTypesOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeInstanceTypesRequest&, DescribeInstanceTypesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceTypesAsyncHandler;
                typedef Outcome<Error, Model::DescribeInstancesResponse> DescribeInstancesOutcome;
                typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeInstancesRequest&, DescribeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
                typedef Outcome<Error, Model::DescribePlayerSessionsResponse> DescribePlayerSessionsOutcome;
                typedef std::future<DescribePlayerSessionsOutcome> DescribePlayerSessionsOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribePlayerSessionsRequest&, DescribePlayerSessionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePlayerSessionsAsyncHandler;
                typedef Outcome<Error, Model::DescribeRuntimeConfigurationResponse> DescribeRuntimeConfigurationOutcome;
                typedef std::future<DescribeRuntimeConfigurationOutcome> DescribeRuntimeConfigurationOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeRuntimeConfigurationRequest&, DescribeRuntimeConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuntimeConfigurationAsyncHandler;
                typedef Outcome<Error, Model::DescribeScalingPoliciesResponse> DescribeScalingPoliciesOutcome;
                typedef std::future<DescribeScalingPoliciesOutcome> DescribeScalingPoliciesOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeScalingPoliciesRequest&, DescribeScalingPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScalingPoliciesAsyncHandler;
                typedef Outcome<Error, Model::DescribeUserQuotaResponse> DescribeUserQuotaOutcome;
                typedef std::future<DescribeUserQuotaOutcome> DescribeUserQuotaOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeUserQuotaRequest&, DescribeUserQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserQuotaAsyncHandler;
                typedef Outcome<Error, Model::DescribeUserQuotasResponse> DescribeUserQuotasOutcome;
                typedef std::future<DescribeUserQuotasOutcome> DescribeUserQuotasOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeUserQuotasRequest&, DescribeUserQuotasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserQuotasAsyncHandler;
                typedef Outcome<Error, Model::DetachCcnInstancesResponse> DetachCcnInstancesOutcome;
                typedef std::future<DetachCcnInstancesOutcome> DetachCcnInstancesOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DetachCcnInstancesRequest&, DetachCcnInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachCcnInstancesAsyncHandler;
                typedef Outcome<Error, Model::GetGameServerSessionLogUrlResponse> GetGameServerSessionLogUrlOutcome;
                typedef std::future<GetGameServerSessionLogUrlOutcome> GetGameServerSessionLogUrlOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::GetGameServerSessionLogUrlRequest&, GetGameServerSessionLogUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetGameServerSessionLogUrlAsyncHandler;
                typedef Outcome<Error, Model::GetInstanceAccessResponse> GetInstanceAccessOutcome;
                typedef std::future<GetInstanceAccessOutcome> GetInstanceAccessOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::GetInstanceAccessRequest&, GetInstanceAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceAccessAsyncHandler;
                typedef Outcome<Error, Model::GetUploadCredentialsResponse> GetUploadCredentialsOutcome;
                typedef std::future<GetUploadCredentialsOutcome> GetUploadCredentialsOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::GetUploadCredentialsRequest&, GetUploadCredentialsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetUploadCredentialsAsyncHandler;
                typedef Outcome<Error, Model::GetUploadFederationTokenResponse> GetUploadFederationTokenOutcome;
                typedef std::future<GetUploadFederationTokenOutcome> GetUploadFederationTokenOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::GetUploadFederationTokenRequest&, GetUploadFederationTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetUploadFederationTokenAsyncHandler;
                typedef Outcome<Error, Model::JoinGameServerSessionResponse> JoinGameServerSessionOutcome;
                typedef std::future<JoinGameServerSessionOutcome> JoinGameServerSessionOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::JoinGameServerSessionRequest&, JoinGameServerSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> JoinGameServerSessionAsyncHandler;
                typedef Outcome<Error, Model::ListAliasesResponse> ListAliasesOutcome;
                typedef std::future<ListAliasesOutcome> ListAliasesOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::ListAliasesRequest&, ListAliasesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAliasesAsyncHandler;
                typedef Outcome<Error, Model::ListFleetsResponse> ListFleetsOutcome;
                typedef std::future<ListFleetsOutcome> ListFleetsOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::ListFleetsRequest&, ListFleetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListFleetsAsyncHandler;
                typedef Outcome<Error, Model::PutScalingPolicyResponse> PutScalingPolicyOutcome;
                typedef std::future<PutScalingPolicyOutcome> PutScalingPolicyOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::PutScalingPolicyRequest&, PutScalingPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PutScalingPolicyAsyncHandler;
                typedef Outcome<Error, Model::ResolveAliasResponse> ResolveAliasOutcome;
                typedef std::future<ResolveAliasOutcome> ResolveAliasOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::ResolveAliasRequest&, ResolveAliasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResolveAliasAsyncHandler;
                typedef Outcome<Error, Model::SearchGameServerSessionsResponse> SearchGameServerSessionsOutcome;
                typedef std::future<SearchGameServerSessionsOutcome> SearchGameServerSessionsOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::SearchGameServerSessionsRequest&, SearchGameServerSessionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchGameServerSessionsAsyncHandler;
                typedef Outcome<Error, Model::SetServerWeightResponse> SetServerWeightOutcome;
                typedef std::future<SetServerWeightOutcome> SetServerWeightOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::SetServerWeightRequest&, SetServerWeightOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetServerWeightAsyncHandler;
                typedef Outcome<Error, Model::StartFleetActionsResponse> StartFleetActionsOutcome;
                typedef std::future<StartFleetActionsOutcome> StartFleetActionsOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::StartFleetActionsRequest&, StartFleetActionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartFleetActionsAsyncHandler;
                typedef Outcome<Error, Model::StartGameServerSessionPlacementResponse> StartGameServerSessionPlacementOutcome;
                typedef std::future<StartGameServerSessionPlacementOutcome> StartGameServerSessionPlacementOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::StartGameServerSessionPlacementRequest&, StartGameServerSessionPlacementOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartGameServerSessionPlacementAsyncHandler;
                typedef Outcome<Error, Model::StartMatchPlacementResponse> StartMatchPlacementOutcome;
                typedef std::future<StartMatchPlacementOutcome> StartMatchPlacementOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::StartMatchPlacementRequest&, StartMatchPlacementOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartMatchPlacementAsyncHandler;
                typedef Outcome<Error, Model::StopFleetActionsResponse> StopFleetActionsOutcome;
                typedef std::future<StopFleetActionsOutcome> StopFleetActionsOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::StopFleetActionsRequest&, StopFleetActionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopFleetActionsAsyncHandler;
                typedef Outcome<Error, Model::StopGameServerSessionPlacementResponse> StopGameServerSessionPlacementOutcome;
                typedef std::future<StopGameServerSessionPlacementOutcome> StopGameServerSessionPlacementOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::StopGameServerSessionPlacementRequest&, StopGameServerSessionPlacementOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopGameServerSessionPlacementAsyncHandler;
                typedef Outcome<Error, Model::UpdateAliasResponse> UpdateAliasOutcome;
                typedef std::future<UpdateAliasOutcome> UpdateAliasOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::UpdateAliasRequest&, UpdateAliasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAliasAsyncHandler;
                typedef Outcome<Error, Model::UpdateAssetResponse> UpdateAssetOutcome;
                typedef std::future<UpdateAssetOutcome> UpdateAssetOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::UpdateAssetRequest&, UpdateAssetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAssetAsyncHandler;
                typedef Outcome<Error, Model::UpdateFleetAttributesResponse> UpdateFleetAttributesOutcome;
                typedef std::future<UpdateFleetAttributesOutcome> UpdateFleetAttributesOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::UpdateFleetAttributesRequest&, UpdateFleetAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFleetAttributesAsyncHandler;
                typedef Outcome<Error, Model::UpdateFleetPortSettingsResponse> UpdateFleetPortSettingsOutcome;
                typedef std::future<UpdateFleetPortSettingsOutcome> UpdateFleetPortSettingsOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::UpdateFleetPortSettingsRequest&, UpdateFleetPortSettingsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFleetPortSettingsAsyncHandler;
                typedef Outcome<Error, Model::UpdateGameServerSessionResponse> UpdateGameServerSessionOutcome;
                typedef std::future<UpdateGameServerSessionOutcome> UpdateGameServerSessionOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::UpdateGameServerSessionRequest&, UpdateGameServerSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGameServerSessionAsyncHandler;
                typedef Outcome<Error, Model::UpdateRuntimeConfigurationResponse> UpdateRuntimeConfigurationOutcome;
                typedef std::future<UpdateRuntimeConfigurationOutcome> UpdateRuntimeConfigurationOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::UpdateRuntimeConfigurationRequest&, UpdateRuntimeConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRuntimeConfigurationAsyncHandler;



                /**
                 *本接口（AttachCcnInstances）用于关联云联网实例
                 * @param req AttachCcnInstancesRequest
                 * @return AttachCcnInstancesOutcome
                 */
                AttachCcnInstancesOutcome AttachCcnInstances(const Model::AttachCcnInstancesRequest &request);
                void AttachCcnInstancesAsync(const Model::AttachCcnInstancesRequest& request, const AttachCcnInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachCcnInstancesOutcomeCallable AttachCcnInstancesCallable(const Model::AttachCcnInstancesRequest& request);

                /**
                 *本接口（CreateAlias）用于创建别名
                 * @param req CreateAliasRequest
                 * @return CreateAliasOutcome
                 */
                CreateAliasOutcome CreateAlias(const Model::CreateAliasRequest &request);
                void CreateAliasAsync(const Model::CreateAliasRequest& request, const CreateAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAliasOutcomeCallable CreateAliasCallable(const Model::CreateAliasRequest& request);

                /**
                 *本接口（CreateAsset）用于创建生成包。
通过获取上传cos的临时秘钥，将文件上传至cos，然后将生成包的zip名称下发给[CreateAsset](https://tcloud-dev.oa.com/document/product/1139/46582?!preview&!document=1)完成接口创建。上传文件至 cos支持俩种方式：

 a.获取预签名， cos 调用上传 （小的文件 5G以内， 前端 1G 以内）  
  1). [GetUploadCredentials](https://tcloud-dev.oa.com/document/product/1139/39889?!preview&!document=1)  
  2). 使用 cos API 上传 （cos sdk ）  
 b.新的方式，适用场景，（大文件）  
  1). [GetUploadCredentials](https://tcloud-dev.oa.com/document/product/1139/39889?!preview&!document=1) （获取上传 bucket  第一次调用需要，后续可以不用调用 ）  
  2). GetUploadFederationToken（获取临时密钥）  
  3). 分块上传 API （cos sdk 有集成 upload_file）  
                 * @param req CreateAssetRequest
                 * @return CreateAssetOutcome
                 */
                CreateAssetOutcome CreateAsset(const Model::CreateAssetRequest &request);
                void CreateAssetAsync(const Model::CreateAssetRequest& request, const CreateAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAssetOutcomeCallable CreateAssetCallable(const Model::CreateAssetRequest& request);

                /**
                 *本接口（CreateGameServerSession）用于创建游戏服务会话
                 * @param req CreateGameServerSessionRequest
                 * @return CreateGameServerSessionOutcome
                 */
                CreateGameServerSessionOutcome CreateGameServerSession(const Model::CreateGameServerSessionRequest &request);
                void CreateGameServerSessionAsync(const Model::CreateGameServerSessionRequest& request, const CreateGameServerSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGameServerSessionOutcomeCallable CreateGameServerSessionCallable(const Model::CreateGameServerSessionRequest& request);

                /**
                 *本接口（DeleteAlias）用于删除别名
                 * @param req DeleteAliasRequest
                 * @return DeleteAliasOutcome
                 */
                DeleteAliasOutcome DeleteAlias(const Model::DeleteAliasRequest &request);
                void DeleteAliasAsync(const Model::DeleteAliasRequest& request, const DeleteAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAliasOutcomeCallable DeleteAliasCallable(const Model::DeleteAliasRequest& request);

                /**
                 *本接口（DeleteAsset）用于删除生成包
                 * @param req DeleteAssetRequest
                 * @return DeleteAssetOutcome
                 */
                DeleteAssetOutcome DeleteAsset(const Model::DeleteAssetRequest &request);
                void DeleteAssetAsync(const Model::DeleteAssetRequest& request, const DeleteAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAssetOutcomeCallable DeleteAssetCallable(const Model::DeleteAssetRequest& request);

                /**
                 *本接口（DeleteFleet）用于删除服务器舰队
                 * @param req DeleteFleetRequest
                 * @return DeleteFleetOutcome
                 */
                DeleteFleetOutcome DeleteFleet(const Model::DeleteFleetRequest &request);
                void DeleteFleetAsync(const Model::DeleteFleetRequest& request, const DeleteFleetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteFleetOutcomeCallable DeleteFleetCallable(const Model::DeleteFleetRequest& request);

                /**
                 *本接口（DeleteScalingPolicy）用于删除扩缩容配置
                 * @param req DeleteScalingPolicyRequest
                 * @return DeleteScalingPolicyOutcome
                 */
                DeleteScalingPolicyOutcome DeleteScalingPolicy(const Model::DeleteScalingPolicyRequest &request);
                void DeleteScalingPolicyAsync(const Model::DeleteScalingPolicyRequest& request, const DeleteScalingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteScalingPolicyOutcomeCallable DeleteScalingPolicyCallable(const Model::DeleteScalingPolicyRequest& request);

                /**
                 *本接口（DescribeAlias）用于获取别名详情
                 * @param req DescribeAliasRequest
                 * @return DescribeAliasOutcome
                 */
                DescribeAliasOutcome DescribeAlias(const Model::DescribeAliasRequest &request);
                void DescribeAliasAsync(const Model::DescribeAliasRequest& request, const DescribeAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAliasOutcomeCallable DescribeAliasCallable(const Model::DescribeAliasRequest& request);

                /**
                 *本接口（DescribeAsset）获取生成包信息
                 * @param req DescribeAssetRequest
                 * @return DescribeAssetOutcome
                 */
                DescribeAssetOutcome DescribeAsset(const Model::DescribeAssetRequest &request);
                void DescribeAssetAsync(const Model::DescribeAssetRequest& request, const DescribeAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetOutcomeCallable DescribeAssetCallable(const Model::DescribeAssetRequest& request);

                /**
                 *本接口（DescribeAssets）用于获取生成包列表
                 * @param req DescribeAssetsRequest
                 * @return DescribeAssetsOutcome
                 */
                DescribeAssetsOutcome DescribeAssets(const Model::DescribeAssetsRequest &request);
                void DescribeAssetsAsync(const Model::DescribeAssetsRequest& request, const DescribeAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetsOutcomeCallable DescribeAssetsCallable(const Model::DescribeAssetsRequest& request);

                /**
                 *本接口（DescribeCcnInstances）用于查询云联网实例
                 * @param req DescribeCcnInstancesRequest
                 * @return DescribeCcnInstancesOutcome
                 */
                DescribeCcnInstancesOutcome DescribeCcnInstances(const Model::DescribeCcnInstancesRequest &request);
                void DescribeCcnInstancesAsync(const Model::DescribeCcnInstancesRequest& request, const DescribeCcnInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCcnInstancesOutcomeCallable DescribeCcnInstancesCallable(const Model::DescribeCcnInstancesRequest& request);

                /**
                 *本接口（DescribeFleetAttributes）用于查询服务器舰队属性
                 * @param req DescribeFleetAttributesRequest
                 * @return DescribeFleetAttributesOutcome
                 */
                DescribeFleetAttributesOutcome DescribeFleetAttributes(const Model::DescribeFleetAttributesRequest &request);
                void DescribeFleetAttributesAsync(const Model::DescribeFleetAttributesRequest& request, const DescribeFleetAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFleetAttributesOutcomeCallable DescribeFleetAttributesCallable(const Model::DescribeFleetAttributesRequest& request);

                /**
                 *本接口（DescribeFleetEvents）用于查询部署服务器舰队相关的事件列表
                 * @param req DescribeFleetEventsRequest
                 * @return DescribeFleetEventsOutcome
                 */
                DescribeFleetEventsOutcome DescribeFleetEvents(const Model::DescribeFleetEventsRequest &request);
                void DescribeFleetEventsAsync(const Model::DescribeFleetEventsRequest& request, const DescribeFleetEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFleetEventsOutcomeCallable DescribeFleetEventsCallable(const Model::DescribeFleetEventsRequest& request);

                /**
                 *本接口（DescribeFleetPortSettings）用于获取服务器舰队安全组信息
                 * @param req DescribeFleetPortSettingsRequest
                 * @return DescribeFleetPortSettingsOutcome
                 */
                DescribeFleetPortSettingsOutcome DescribeFleetPortSettings(const Model::DescribeFleetPortSettingsRequest &request);
                void DescribeFleetPortSettingsAsync(const Model::DescribeFleetPortSettingsRequest& request, const DescribeFleetPortSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFleetPortSettingsOutcomeCallable DescribeFleetPortSettingsCallable(const Model::DescribeFleetPortSettingsRequest& request);

                /**
                 *本接口（DescribeFleetUtilization）用于查询服务器舰队的利用率信息
                 * @param req DescribeFleetUtilizationRequest
                 * @return DescribeFleetUtilizationOutcome
                 */
                DescribeFleetUtilizationOutcome DescribeFleetUtilization(const Model::DescribeFleetUtilizationRequest &request);
                void DescribeFleetUtilizationAsync(const Model::DescribeFleetUtilizationRequest& request, const DescribeFleetUtilizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFleetUtilizationOutcomeCallable DescribeFleetUtilizationCallable(const Model::DescribeFleetUtilizationRequest& request);

                /**
                 *本接口（DescribeGameServerSessionDetails）用于查询游戏服务器会话详情列表
                 * @param req DescribeGameServerSessionDetailsRequest
                 * @return DescribeGameServerSessionDetailsOutcome
                 */
                DescribeGameServerSessionDetailsOutcome DescribeGameServerSessionDetails(const Model::DescribeGameServerSessionDetailsRequest &request);
                void DescribeGameServerSessionDetailsAsync(const Model::DescribeGameServerSessionDetailsRequest& request, const DescribeGameServerSessionDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGameServerSessionDetailsOutcomeCallable DescribeGameServerSessionDetailsCallable(const Model::DescribeGameServerSessionDetailsRequest& request);

                /**
                 *本接口（DescribeGameServerSessionPlacement）用于查询游戏服务器会话的放置
                 * @param req DescribeGameServerSessionPlacementRequest
                 * @return DescribeGameServerSessionPlacementOutcome
                 */
                DescribeGameServerSessionPlacementOutcome DescribeGameServerSessionPlacement(const Model::DescribeGameServerSessionPlacementRequest &request);
                void DescribeGameServerSessionPlacementAsync(const Model::DescribeGameServerSessionPlacementRequest& request, const DescribeGameServerSessionPlacementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGameServerSessionPlacementOutcomeCallable DescribeGameServerSessionPlacementCallable(const Model::DescribeGameServerSessionPlacementRequest& request);

                /**
                 *本接口（DescribeGameServerSessionQueues）用于查询游戏服务器会话队列
                 * @param req DescribeGameServerSessionQueuesRequest
                 * @return DescribeGameServerSessionQueuesOutcome
                 */
                DescribeGameServerSessionQueuesOutcome DescribeGameServerSessionQueues(const Model::DescribeGameServerSessionQueuesRequest &request);
                void DescribeGameServerSessionQueuesAsync(const Model::DescribeGameServerSessionQueuesRequest& request, const DescribeGameServerSessionQueuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGameServerSessionQueuesOutcomeCallable DescribeGameServerSessionQueuesCallable(const Model::DescribeGameServerSessionQueuesRequest& request);

                /**
                 *本接口（DescribeGameServerSessions）用于查询游戏服务器会话列表
                 * @param req DescribeGameServerSessionsRequest
                 * @return DescribeGameServerSessionsOutcome
                 */
                DescribeGameServerSessionsOutcome DescribeGameServerSessions(const Model::DescribeGameServerSessionsRequest &request);
                void DescribeGameServerSessionsAsync(const Model::DescribeGameServerSessionsRequest& request, const DescribeGameServerSessionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGameServerSessionsOutcomeCallable DescribeGameServerSessionsCallable(const Model::DescribeGameServerSessionsRequest& request);

                /**
                 *本接口（DescribeInstanceTypes）用于获取服务器实例类型列表
                 * @param req DescribeInstanceTypesRequest
                 * @return DescribeInstanceTypesOutcome
                 */
                DescribeInstanceTypesOutcome DescribeInstanceTypes(const Model::DescribeInstanceTypesRequest &request);
                void DescribeInstanceTypesAsync(const Model::DescribeInstanceTypesRequest& request, const DescribeInstanceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceTypesOutcomeCallable DescribeInstanceTypesCallable(const Model::DescribeInstanceTypesRequest& request);

                /**
                 *本接口（DescribeInstances）用于查询服务器实例列表
                 * @param req DescribeInstancesRequest
                 * @return DescribeInstancesOutcome
                 */
                DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest &request);
                void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request);

                /**
                 *本接口（DescribePlayerSessions）用于获取玩家会话列表
                 * @param req DescribePlayerSessionsRequest
                 * @return DescribePlayerSessionsOutcome
                 */
                DescribePlayerSessionsOutcome DescribePlayerSessions(const Model::DescribePlayerSessionsRequest &request);
                void DescribePlayerSessionsAsync(const Model::DescribePlayerSessionsRequest& request, const DescribePlayerSessionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePlayerSessionsOutcomeCallable DescribePlayerSessionsCallable(const Model::DescribePlayerSessionsRequest& request);

                /**
                 *本接口（DescribeRuntimeConfiguration）用于获取服务器舰队运行配置
                 * @param req DescribeRuntimeConfigurationRequest
                 * @return DescribeRuntimeConfigurationOutcome
                 */
                DescribeRuntimeConfigurationOutcome DescribeRuntimeConfiguration(const Model::DescribeRuntimeConfigurationRequest &request);
                void DescribeRuntimeConfigurationAsync(const Model::DescribeRuntimeConfigurationRequest& request, const DescribeRuntimeConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRuntimeConfigurationOutcomeCallable DescribeRuntimeConfigurationCallable(const Model::DescribeRuntimeConfigurationRequest& request);

                /**
                 *本接口（DescribeScalingPolicies）用于查询服务部署的动态扩缩容配置
                 * @param req DescribeScalingPoliciesRequest
                 * @return DescribeScalingPoliciesOutcome
                 */
                DescribeScalingPoliciesOutcome DescribeScalingPolicies(const Model::DescribeScalingPoliciesRequest &request);
                void DescribeScalingPoliciesAsync(const Model::DescribeScalingPoliciesRequest& request, const DescribeScalingPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScalingPoliciesOutcomeCallable DescribeScalingPoliciesCallable(const Model::DescribeScalingPoliciesRequest& request);

                /**
                 *本接口（DescribeUserQuota）获取用户单个模块配额
                 * @param req DescribeUserQuotaRequest
                 * @return DescribeUserQuotaOutcome
                 */
                DescribeUserQuotaOutcome DescribeUserQuota(const Model::DescribeUserQuotaRequest &request);
                void DescribeUserQuotaAsync(const Model::DescribeUserQuotaRequest& request, const DescribeUserQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserQuotaOutcomeCallable DescribeUserQuotaCallable(const Model::DescribeUserQuotaRequest& request);

                /**
                 *本接口（DescribeUserQuotas）用于获取用户配额
                 * @param req DescribeUserQuotasRequest
                 * @return DescribeUserQuotasOutcome
                 */
                DescribeUserQuotasOutcome DescribeUserQuotas(const Model::DescribeUserQuotasRequest &request);
                void DescribeUserQuotasAsync(const Model::DescribeUserQuotasRequest& request, const DescribeUserQuotasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserQuotasOutcomeCallable DescribeUserQuotasCallable(const Model::DescribeUserQuotasRequest& request);

                /**
                 *本接口（DetachCcnInstances）用于解关联云联网实例
                 * @param req DetachCcnInstancesRequest
                 * @return DetachCcnInstancesOutcome
                 */
                DetachCcnInstancesOutcome DetachCcnInstances(const Model::DetachCcnInstancesRequest &request);
                void DetachCcnInstancesAsync(const Model::DetachCcnInstancesRequest& request, const DetachCcnInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachCcnInstancesOutcomeCallable DetachCcnInstancesCallable(const Model::DetachCcnInstancesRequest& request);

                /**
                 *本接口（GetGameServerSessionLogUrl）用于获取游戏服务器会话的日志URL
                 * @param req GetGameServerSessionLogUrlRequest
                 * @return GetGameServerSessionLogUrlOutcome
                 */
                GetGameServerSessionLogUrlOutcome GetGameServerSessionLogUrl(const Model::GetGameServerSessionLogUrlRequest &request);
                void GetGameServerSessionLogUrlAsync(const Model::GetGameServerSessionLogUrlRequest& request, const GetGameServerSessionLogUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetGameServerSessionLogUrlOutcomeCallable GetGameServerSessionLogUrlCallable(const Model::GetGameServerSessionLogUrlRequest& request);

                /**
                 *本接口（GetInstanceAccess）用于获取实例登录所需要的凭据
                 * @param req GetInstanceAccessRequest
                 * @return GetInstanceAccessOutcome
                 */
                GetInstanceAccessOutcome GetInstanceAccess(const Model::GetInstanceAccessRequest &request);
                void GetInstanceAccessAsync(const Model::GetInstanceAccessRequest& request, const GetInstanceAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetInstanceAccessOutcomeCallable GetInstanceAccessCallable(const Model::GetInstanceAccessRequest& request);

                /**
                 *本接口（GetUploadCredentials）获取上传文件授权信息。
详细描述：通过[GetUploadCredentials](https://tcloud-dev.oa.com/document/product/1139/39889?!preview&!document=1)接口获取临时秘钥后，使用http put请求将数据上传至cos，然后将生成的生成包zip名称下发给[CreateAsset](https://tcloud-dev.oa.com/document/product/1139/46582?!preview&!document=1)接口进行asset创建
                 * @param req GetUploadCredentialsRequest
                 * @return GetUploadCredentialsOutcome
                 */
                GetUploadCredentialsOutcome GetUploadCredentials(const Model::GetUploadCredentialsRequest &request);
                void GetUploadCredentialsAsync(const Model::GetUploadCredentialsRequest& request, const GetUploadCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetUploadCredentialsOutcomeCallable GetUploadCredentialsCallable(const Model::GetUploadCredentialsRequest& request);

                /**
                 *本接口（GetUploadFederationToken）用于 获取生成包上传所需要的临时密钥
                 * @param req GetUploadFederationTokenRequest
                 * @return GetUploadFederationTokenOutcome
                 */
                GetUploadFederationTokenOutcome GetUploadFederationToken(const Model::GetUploadFederationTokenRequest &request);
                void GetUploadFederationTokenAsync(const Model::GetUploadFederationTokenRequest& request, const GetUploadFederationTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetUploadFederationTokenOutcomeCallable GetUploadFederationTokenCallable(const Model::GetUploadFederationTokenRequest& request);

                /**
                 *本接口（JoinGameServerSession）用于加入游戏服务器会话
                 * @param req JoinGameServerSessionRequest
                 * @return JoinGameServerSessionOutcome
                 */
                JoinGameServerSessionOutcome JoinGameServerSession(const Model::JoinGameServerSessionRequest &request);
                void JoinGameServerSessionAsync(const Model::JoinGameServerSessionRequest& request, const JoinGameServerSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                JoinGameServerSessionOutcomeCallable JoinGameServerSessionCallable(const Model::JoinGameServerSessionRequest& request);

                /**
                 *本接口（ListAliases）用于检索帐户下的所有别名
                 * @param req ListAliasesRequest
                 * @return ListAliasesOutcome
                 */
                ListAliasesOutcome ListAliases(const Model::ListAliasesRequest &request);
                void ListAliasesAsync(const Model::ListAliasesRequest& request, const ListAliasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAliasesOutcomeCallable ListAliasesCallable(const Model::ListAliasesRequest& request);

                /**
                 *本接口（ListFleets）用于获取服务器舰队列表
                 * @param req ListFleetsRequest
                 * @return ListFleetsOutcome
                 */
                ListFleetsOutcome ListFleets(const Model::ListFleetsRequest &request);
                void ListFleetsAsync(const Model::ListFleetsRequest& request, const ListFleetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListFleetsOutcomeCallable ListFleetsCallable(const Model::ListFleetsRequest& request);

                /**
                 *本接口（PutScalingPolicy）用于设置动态扩缩容配置
                 * @param req PutScalingPolicyRequest
                 * @return PutScalingPolicyOutcome
                 */
                PutScalingPolicyOutcome PutScalingPolicy(const Model::PutScalingPolicyRequest &request);
                void PutScalingPolicyAsync(const Model::PutScalingPolicyRequest& request, const PutScalingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PutScalingPolicyOutcomeCallable PutScalingPolicyCallable(const Model::PutScalingPolicyRequest& request);

                /**
                 *本接口（ResolveAlias）用于获取别名当前指向的fleetId
                 * @param req ResolveAliasRequest
                 * @return ResolveAliasOutcome
                 */
                ResolveAliasOutcome ResolveAlias(const Model::ResolveAliasRequest &request);
                void ResolveAliasAsync(const Model::ResolveAliasRequest& request, const ResolveAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResolveAliasOutcomeCallable ResolveAliasCallable(const Model::ResolveAliasRequest& request);

                /**
                 *本接口（SearchGameServerSessions）用于搜索游戏服务器会话列表
                 * @param req SearchGameServerSessionsRequest
                 * @return SearchGameServerSessionsOutcome
                 */
                SearchGameServerSessionsOutcome SearchGameServerSessions(const Model::SearchGameServerSessionsRequest &request);
                void SearchGameServerSessionsAsync(const Model::SearchGameServerSessionsRequest& request, const SearchGameServerSessionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchGameServerSessionsOutcomeCallable SearchGameServerSessionsCallable(const Model::SearchGameServerSessionsRequest& request);

                /**
                 *设置服务器权重
                 * @param req SetServerWeightRequest
                 * @return SetServerWeightOutcome
                 */
                SetServerWeightOutcome SetServerWeight(const Model::SetServerWeightRequest &request);
                void SetServerWeightAsync(const Model::SetServerWeightRequest& request, const SetServerWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetServerWeightOutcomeCallable SetServerWeightCallable(const Model::SetServerWeightRequest& request);

                /**
                 *本接口（StartFleetActions）用于启用服务器舰队自动扩缩容
                 * @param req StartFleetActionsRequest
                 * @return StartFleetActionsOutcome
                 */
                StartFleetActionsOutcome StartFleetActions(const Model::StartFleetActionsRequest &request);
                void StartFleetActionsAsync(const Model::StartFleetActionsRequest& request, const StartFleetActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartFleetActionsOutcomeCallable StartFleetActionsCallable(const Model::StartFleetActionsRequest& request);

                /**
                 *本接口（StartGameServerSessionPlacement）用于开始放置游戏服务器会话
                 * @param req StartGameServerSessionPlacementRequest
                 * @return StartGameServerSessionPlacementOutcome
                 */
                StartGameServerSessionPlacementOutcome StartGameServerSessionPlacement(const Model::StartGameServerSessionPlacementRequest &request);
                void StartGameServerSessionPlacementAsync(const Model::StartGameServerSessionPlacementRequest& request, const StartGameServerSessionPlacementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartGameServerSessionPlacementOutcomeCallable StartGameServerSessionPlacementCallable(const Model::StartGameServerSessionPlacementRequest& request);

                /**
                 *本接口（StartMatchPlacement）用于开始匹配放置游戏服务器会话
                 * @param req StartMatchPlacementRequest
                 * @return StartMatchPlacementOutcome
                 */
                StartMatchPlacementOutcome StartMatchPlacement(const Model::StartMatchPlacementRequest &request);
                void StartMatchPlacementAsync(const Model::StartMatchPlacementRequest& request, const StartMatchPlacementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartMatchPlacementOutcomeCallable StartMatchPlacementCallable(const Model::StartMatchPlacementRequest& request);

                /**
                 *本接口（StopFleetActions）用于停止服务器舰队自动扩缩容，改为手动扩缩容
                 * @param req StopFleetActionsRequest
                 * @return StopFleetActionsOutcome
                 */
                StopFleetActionsOutcome StopFleetActions(const Model::StopFleetActionsRequest &request);
                void StopFleetActionsAsync(const Model::StopFleetActionsRequest& request, const StopFleetActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopFleetActionsOutcomeCallable StopFleetActionsCallable(const Model::StopFleetActionsRequest& request);

                /**
                 *本接口（StopGameServerSessionPlacement）用于停止放置游戏服务器会话
                 * @param req StopGameServerSessionPlacementRequest
                 * @return StopGameServerSessionPlacementOutcome
                 */
                StopGameServerSessionPlacementOutcome StopGameServerSessionPlacement(const Model::StopGameServerSessionPlacementRequest &request);
                void StopGameServerSessionPlacementAsync(const Model::StopGameServerSessionPlacementRequest& request, const StopGameServerSessionPlacementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopGameServerSessionPlacementOutcomeCallable StopGameServerSessionPlacementCallable(const Model::StopGameServerSessionPlacementRequest& request);

                /**
                 *本接口（UpdateAlias）用于更新别名的属性
                 * @param req UpdateAliasRequest
                 * @return UpdateAliasOutcome
                 */
                UpdateAliasOutcome UpdateAlias(const Model::UpdateAliasRequest &request);
                void UpdateAliasAsync(const Model::UpdateAliasRequest& request, const UpdateAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAliasOutcomeCallable UpdateAliasCallable(const Model::UpdateAliasRequest& request);

                /**
                 *本接口（UpdateAsset）用于修改生成包信息
                 * @param req UpdateAssetRequest
                 * @return UpdateAssetOutcome
                 */
                UpdateAssetOutcome UpdateAsset(const Model::UpdateAssetRequest &request);
                void UpdateAssetAsync(const Model::UpdateAssetRequest& request, const UpdateAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAssetOutcomeCallable UpdateAssetCallable(const Model::UpdateAssetRequest& request);

                /**
                 *本接口（UpdateFleetAttributes）用于更新服务器舰队属性
                 * @param req UpdateFleetAttributesRequest
                 * @return UpdateFleetAttributesOutcome
                 */
                UpdateFleetAttributesOutcome UpdateFleetAttributes(const Model::UpdateFleetAttributesRequest &request);
                void UpdateFleetAttributesAsync(const Model::UpdateFleetAttributesRequest& request, const UpdateFleetAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateFleetAttributesOutcomeCallable UpdateFleetAttributesCallable(const Model::UpdateFleetAttributesRequest& request);

                /**
                 *本接口（UpdateFleetPortSettings）用于更新服务器舰队安全组
                 * @param req UpdateFleetPortSettingsRequest
                 * @return UpdateFleetPortSettingsOutcome
                 */
                UpdateFleetPortSettingsOutcome UpdateFleetPortSettings(const Model::UpdateFleetPortSettingsRequest &request);
                void UpdateFleetPortSettingsAsync(const Model::UpdateFleetPortSettingsRequest& request, const UpdateFleetPortSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateFleetPortSettingsOutcomeCallable UpdateFleetPortSettingsCallable(const Model::UpdateFleetPortSettingsRequest& request);

                /**
                 *本接口（UpdateGameServerSession）用于更新游戏服务器会话
                 * @param req UpdateGameServerSessionRequest
                 * @return UpdateGameServerSessionOutcome
                 */
                UpdateGameServerSessionOutcome UpdateGameServerSession(const Model::UpdateGameServerSessionRequest &request);
                void UpdateGameServerSessionAsync(const Model::UpdateGameServerSessionRequest& request, const UpdateGameServerSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateGameServerSessionOutcomeCallable UpdateGameServerSessionCallable(const Model::UpdateGameServerSessionRequest& request);

                /**
                 *本接口（UpdateRuntimeConfiguration）用于更新服务器舰队配置
                 * @param req UpdateRuntimeConfigurationRequest
                 * @return UpdateRuntimeConfigurationOutcome
                 */
                UpdateRuntimeConfigurationOutcome UpdateRuntimeConfiguration(const Model::UpdateRuntimeConfigurationRequest &request);
                void UpdateRuntimeConfigurationAsync(const Model::UpdateRuntimeConfigurationRequest& request, const UpdateRuntimeConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateRuntimeConfigurationOutcomeCallable UpdateRuntimeConfigurationCallable(const Model::UpdateRuntimeConfigurationRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_GSECLIENT_H_
