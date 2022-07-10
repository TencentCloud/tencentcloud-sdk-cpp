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
#include <tencentcloud/gse/v20191112/model/CopyFleetRequest.h>
#include <tencentcloud/gse/v20191112/model/CopyFleetResponse.h>
#include <tencentcloud/gse/v20191112/model/CreateAliasRequest.h>
#include <tencentcloud/gse/v20191112/model/CreateAliasResponse.h>
#include <tencentcloud/gse/v20191112/model/CreateAssetRequest.h>
#include <tencentcloud/gse/v20191112/model/CreateAssetResponse.h>
#include <tencentcloud/gse/v20191112/model/CreateAssetWithImageRequest.h>
#include <tencentcloud/gse/v20191112/model/CreateAssetWithImageResponse.h>
#include <tencentcloud/gse/v20191112/model/CreateFleetRequest.h>
#include <tencentcloud/gse/v20191112/model/CreateFleetResponse.h>
#include <tencentcloud/gse/v20191112/model/CreateGameServerSessionRequest.h>
#include <tencentcloud/gse/v20191112/model/CreateGameServerSessionResponse.h>
#include <tencentcloud/gse/v20191112/model/CreateGameServerSessionQueueRequest.h>
#include <tencentcloud/gse/v20191112/model/CreateGameServerSessionQueueResponse.h>
#include <tencentcloud/gse/v20191112/model/DeleteAliasRequest.h>
#include <tencentcloud/gse/v20191112/model/DeleteAliasResponse.h>
#include <tencentcloud/gse/v20191112/model/DeleteAssetRequest.h>
#include <tencentcloud/gse/v20191112/model/DeleteAssetResponse.h>
#include <tencentcloud/gse/v20191112/model/DeleteFleetRequest.h>
#include <tencentcloud/gse/v20191112/model/DeleteFleetResponse.h>
#include <tencentcloud/gse/v20191112/model/DeleteGameServerSessionQueueRequest.h>
#include <tencentcloud/gse/v20191112/model/DeleteGameServerSessionQueueResponse.h>
#include <tencentcloud/gse/v20191112/model/DeleteScalingPolicyRequest.h>
#include <tencentcloud/gse/v20191112/model/DeleteScalingPolicyResponse.h>
#include <tencentcloud/gse/v20191112/model/DeleteTimerScalingPolicyRequest.h>
#include <tencentcloud/gse/v20191112/model/DeleteTimerScalingPolicyResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribeAliasRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeAliasResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribeAssetRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeAssetResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribeAssetSystemsRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeAssetSystemsResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribeAssetsRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeAssetsResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribeCcnInstancesRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeCcnInstancesResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribeFleetAttributesRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeFleetAttributesResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribeFleetCapacityRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeFleetCapacityResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribeFleetEventsRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeFleetEventsResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribeFleetPortSettingsRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeFleetPortSettingsResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribeFleetRelatedResourcesRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeFleetRelatedResourcesResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribeFleetStatisticDetailsRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeFleetStatisticDetailsResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribeFleetStatisticFlowsRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeFleetStatisticFlowsResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribeFleetStatisticSummaryRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeFleetStatisticSummaryResponse.h>
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
#include <tencentcloud/gse/v20191112/model/DescribeInstanceLimitRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeInstanceLimitResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribeInstanceTypesRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeInstanceTypesResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribeInstancesRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeInstancesResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribeInstancesExtendRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeInstancesExtendResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribePlayerSessionsRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribePlayerSessionsResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribeRuntimeConfigurationRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeRuntimeConfigurationResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribeScalingPoliciesRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeScalingPoliciesResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribeTimerScalingPoliciesRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeTimerScalingPoliciesResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribeUserQuotaRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeUserQuotaResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribeUserQuotasRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeUserQuotasResponse.h>
#include <tencentcloud/gse/v20191112/model/DetachCcnInstancesRequest.h>
#include <tencentcloud/gse/v20191112/model/DetachCcnInstancesResponse.h>
#include <tencentcloud/gse/v20191112/model/EndGameServerSessionAndProcessRequest.h>
#include <tencentcloud/gse/v20191112/model/EndGameServerSessionAndProcessResponse.h>
#include <tencentcloud/gse/v20191112/model/GetGameServerInstanceLogUrlRequest.h>
#include <tencentcloud/gse/v20191112/model/GetGameServerInstanceLogUrlResponse.h>
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
#include <tencentcloud/gse/v20191112/model/JoinGameServerSessionBatchRequest.h>
#include <tencentcloud/gse/v20191112/model/JoinGameServerSessionBatchResponse.h>
#include <tencentcloud/gse/v20191112/model/ListAliasesRequest.h>
#include <tencentcloud/gse/v20191112/model/ListAliasesResponse.h>
#include <tencentcloud/gse/v20191112/model/ListFleetsRequest.h>
#include <tencentcloud/gse/v20191112/model/ListFleetsResponse.h>
#include <tencentcloud/gse/v20191112/model/PutScalingPolicyRequest.h>
#include <tencentcloud/gse/v20191112/model/PutScalingPolicyResponse.h>
#include <tencentcloud/gse/v20191112/model/PutTimerScalingPolicyRequest.h>
#include <tencentcloud/gse/v20191112/model/PutTimerScalingPolicyResponse.h>
#include <tencentcloud/gse/v20191112/model/ResolveAliasRequest.h>
#include <tencentcloud/gse/v20191112/model/ResolveAliasResponse.h>
#include <tencentcloud/gse/v20191112/model/SearchGameServerSessionsRequest.h>
#include <tencentcloud/gse/v20191112/model/SearchGameServerSessionsResponse.h>
#include <tencentcloud/gse/v20191112/model/SetServerReservedRequest.h>
#include <tencentcloud/gse/v20191112/model/SetServerReservedResponse.h>
#include <tencentcloud/gse/v20191112/model/SetServerWeightRequest.h>
#include <tencentcloud/gse/v20191112/model/SetServerWeightResponse.h>
#include <tencentcloud/gse/v20191112/model/StartFleetActionsRequest.h>
#include <tencentcloud/gse/v20191112/model/StartFleetActionsResponse.h>
#include <tencentcloud/gse/v20191112/model/StartGameServerSessionPlacementRequest.h>
#include <tencentcloud/gse/v20191112/model/StartGameServerSessionPlacementResponse.h>
#include <tencentcloud/gse/v20191112/model/StopFleetActionsRequest.h>
#include <tencentcloud/gse/v20191112/model/StopFleetActionsResponse.h>
#include <tencentcloud/gse/v20191112/model/StopGameServerSessionPlacementRequest.h>
#include <tencentcloud/gse/v20191112/model/StopGameServerSessionPlacementResponse.h>
#include <tencentcloud/gse/v20191112/model/UpdateAliasRequest.h>
#include <tencentcloud/gse/v20191112/model/UpdateAliasResponse.h>
#include <tencentcloud/gse/v20191112/model/UpdateAssetRequest.h>
#include <tencentcloud/gse/v20191112/model/UpdateAssetResponse.h>
#include <tencentcloud/gse/v20191112/model/UpdateBucketAccelerateOptRequest.h>
#include <tencentcloud/gse/v20191112/model/UpdateBucketAccelerateOptResponse.h>
#include <tencentcloud/gse/v20191112/model/UpdateBucketCORSOptRequest.h>
#include <tencentcloud/gse/v20191112/model/UpdateBucketCORSOptResponse.h>
#include <tencentcloud/gse/v20191112/model/UpdateFleetAttributesRequest.h>
#include <tencentcloud/gse/v20191112/model/UpdateFleetAttributesResponse.h>
#include <tencentcloud/gse/v20191112/model/UpdateFleetCapacityRequest.h>
#include <tencentcloud/gse/v20191112/model/UpdateFleetCapacityResponse.h>
#include <tencentcloud/gse/v20191112/model/UpdateFleetNameRequest.h>
#include <tencentcloud/gse/v20191112/model/UpdateFleetNameResponse.h>
#include <tencentcloud/gse/v20191112/model/UpdateFleetPortSettingsRequest.h>
#include <tencentcloud/gse/v20191112/model/UpdateFleetPortSettingsResponse.h>
#include <tencentcloud/gse/v20191112/model/UpdateGameServerSessionRequest.h>
#include <tencentcloud/gse/v20191112/model/UpdateGameServerSessionResponse.h>
#include <tencentcloud/gse/v20191112/model/UpdateGameServerSessionQueueRequest.h>
#include <tencentcloud/gse/v20191112/model/UpdateGameServerSessionQueueResponse.h>
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

                typedef Outcome<Core::Error, Model::AttachCcnInstancesResponse> AttachCcnInstancesOutcome;
                typedef std::future<AttachCcnInstancesOutcome> AttachCcnInstancesOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::AttachCcnInstancesRequest&, AttachCcnInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachCcnInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::CopyFleetResponse> CopyFleetOutcome;
                typedef std::future<CopyFleetOutcome> CopyFleetOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::CopyFleetRequest&, CopyFleetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CopyFleetAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAliasResponse> CreateAliasOutcome;
                typedef std::future<CreateAliasOutcome> CreateAliasOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::CreateAliasRequest&, CreateAliasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAliasAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAssetResponse> CreateAssetOutcome;
                typedef std::future<CreateAssetOutcome> CreateAssetOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::CreateAssetRequest&, CreateAssetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAssetAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAssetWithImageResponse> CreateAssetWithImageOutcome;
                typedef std::future<CreateAssetWithImageOutcome> CreateAssetWithImageOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::CreateAssetWithImageRequest&, CreateAssetWithImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAssetWithImageAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFleetResponse> CreateFleetOutcome;
                typedef std::future<CreateFleetOutcome> CreateFleetOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::CreateFleetRequest&, CreateFleetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFleetAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateGameServerSessionResponse> CreateGameServerSessionOutcome;
                typedef std::future<CreateGameServerSessionOutcome> CreateGameServerSessionOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::CreateGameServerSessionRequest&, CreateGameServerSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGameServerSessionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateGameServerSessionQueueResponse> CreateGameServerSessionQueueOutcome;
                typedef std::future<CreateGameServerSessionQueueOutcome> CreateGameServerSessionQueueOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::CreateGameServerSessionQueueRequest&, CreateGameServerSessionQueueOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGameServerSessionQueueAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAliasResponse> DeleteAliasOutcome;
                typedef std::future<DeleteAliasOutcome> DeleteAliasOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DeleteAliasRequest&, DeleteAliasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAliasAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAssetResponse> DeleteAssetOutcome;
                typedef std::future<DeleteAssetOutcome> DeleteAssetOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DeleteAssetRequest&, DeleteAssetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAssetAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteFleetResponse> DeleteFleetOutcome;
                typedef std::future<DeleteFleetOutcome> DeleteFleetOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DeleteFleetRequest&, DeleteFleetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFleetAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteGameServerSessionQueueResponse> DeleteGameServerSessionQueueOutcome;
                typedef std::future<DeleteGameServerSessionQueueOutcome> DeleteGameServerSessionQueueOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DeleteGameServerSessionQueueRequest&, DeleteGameServerSessionQueueOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGameServerSessionQueueAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteScalingPolicyResponse> DeleteScalingPolicyOutcome;
                typedef std::future<DeleteScalingPolicyOutcome> DeleteScalingPolicyOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DeleteScalingPolicyRequest&, DeleteScalingPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteScalingPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTimerScalingPolicyResponse> DeleteTimerScalingPolicyOutcome;
                typedef std::future<DeleteTimerScalingPolicyOutcome> DeleteTimerScalingPolicyOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DeleteTimerScalingPolicyRequest&, DeleteTimerScalingPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTimerScalingPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAliasResponse> DescribeAliasOutcome;
                typedef std::future<DescribeAliasOutcome> DescribeAliasOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeAliasRequest&, DescribeAliasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAliasAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetResponse> DescribeAssetOutcome;
                typedef std::future<DescribeAssetOutcome> DescribeAssetOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeAssetRequest&, DescribeAssetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetSystemsResponse> DescribeAssetSystemsOutcome;
                typedef std::future<DescribeAssetSystemsOutcome> DescribeAssetSystemsOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeAssetSystemsRequest&, DescribeAssetSystemsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetSystemsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetsResponse> DescribeAssetsOutcome;
                typedef std::future<DescribeAssetsOutcome> DescribeAssetsOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeAssetsRequest&, DescribeAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCcnInstancesResponse> DescribeCcnInstancesOutcome;
                typedef std::future<DescribeCcnInstancesOutcome> DescribeCcnInstancesOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeCcnInstancesRequest&, DescribeCcnInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCcnInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFleetAttributesResponse> DescribeFleetAttributesOutcome;
                typedef std::future<DescribeFleetAttributesOutcome> DescribeFleetAttributesOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeFleetAttributesRequest&, DescribeFleetAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFleetAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFleetCapacityResponse> DescribeFleetCapacityOutcome;
                typedef std::future<DescribeFleetCapacityOutcome> DescribeFleetCapacityOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeFleetCapacityRequest&, DescribeFleetCapacityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFleetCapacityAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFleetEventsResponse> DescribeFleetEventsOutcome;
                typedef std::future<DescribeFleetEventsOutcome> DescribeFleetEventsOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeFleetEventsRequest&, DescribeFleetEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFleetEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFleetPortSettingsResponse> DescribeFleetPortSettingsOutcome;
                typedef std::future<DescribeFleetPortSettingsOutcome> DescribeFleetPortSettingsOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeFleetPortSettingsRequest&, DescribeFleetPortSettingsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFleetPortSettingsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFleetRelatedResourcesResponse> DescribeFleetRelatedResourcesOutcome;
                typedef std::future<DescribeFleetRelatedResourcesOutcome> DescribeFleetRelatedResourcesOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeFleetRelatedResourcesRequest&, DescribeFleetRelatedResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFleetRelatedResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFleetStatisticDetailsResponse> DescribeFleetStatisticDetailsOutcome;
                typedef std::future<DescribeFleetStatisticDetailsOutcome> DescribeFleetStatisticDetailsOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeFleetStatisticDetailsRequest&, DescribeFleetStatisticDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFleetStatisticDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFleetStatisticFlowsResponse> DescribeFleetStatisticFlowsOutcome;
                typedef std::future<DescribeFleetStatisticFlowsOutcome> DescribeFleetStatisticFlowsOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeFleetStatisticFlowsRequest&, DescribeFleetStatisticFlowsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFleetStatisticFlowsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFleetStatisticSummaryResponse> DescribeFleetStatisticSummaryOutcome;
                typedef std::future<DescribeFleetStatisticSummaryOutcome> DescribeFleetStatisticSummaryOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeFleetStatisticSummaryRequest&, DescribeFleetStatisticSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFleetStatisticSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFleetUtilizationResponse> DescribeFleetUtilizationOutcome;
                typedef std::future<DescribeFleetUtilizationOutcome> DescribeFleetUtilizationOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeFleetUtilizationRequest&, DescribeFleetUtilizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFleetUtilizationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGameServerSessionDetailsResponse> DescribeGameServerSessionDetailsOutcome;
                typedef std::future<DescribeGameServerSessionDetailsOutcome> DescribeGameServerSessionDetailsOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeGameServerSessionDetailsRequest&, DescribeGameServerSessionDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGameServerSessionDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGameServerSessionPlacementResponse> DescribeGameServerSessionPlacementOutcome;
                typedef std::future<DescribeGameServerSessionPlacementOutcome> DescribeGameServerSessionPlacementOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeGameServerSessionPlacementRequest&, DescribeGameServerSessionPlacementOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGameServerSessionPlacementAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGameServerSessionQueuesResponse> DescribeGameServerSessionQueuesOutcome;
                typedef std::future<DescribeGameServerSessionQueuesOutcome> DescribeGameServerSessionQueuesOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeGameServerSessionQueuesRequest&, DescribeGameServerSessionQueuesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGameServerSessionQueuesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGameServerSessionsResponse> DescribeGameServerSessionsOutcome;
                typedef std::future<DescribeGameServerSessionsOutcome> DescribeGameServerSessionsOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeGameServerSessionsRequest&, DescribeGameServerSessionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGameServerSessionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceLimitResponse> DescribeInstanceLimitOutcome;
                typedef std::future<DescribeInstanceLimitOutcome> DescribeInstanceLimitOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeInstanceLimitRequest&, DescribeInstanceLimitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceLimitAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceTypesResponse> DescribeInstanceTypesOutcome;
                typedef std::future<DescribeInstanceTypesOutcome> DescribeInstanceTypesOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeInstanceTypesRequest&, DescribeInstanceTypesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceTypesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesResponse> DescribeInstancesOutcome;
                typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeInstancesRequest&, DescribeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesExtendResponse> DescribeInstancesExtendOutcome;
                typedef std::future<DescribeInstancesExtendOutcome> DescribeInstancesExtendOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeInstancesExtendRequest&, DescribeInstancesExtendOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesExtendAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePlayerSessionsResponse> DescribePlayerSessionsOutcome;
                typedef std::future<DescribePlayerSessionsOutcome> DescribePlayerSessionsOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribePlayerSessionsRequest&, DescribePlayerSessionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePlayerSessionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRuntimeConfigurationResponse> DescribeRuntimeConfigurationOutcome;
                typedef std::future<DescribeRuntimeConfigurationOutcome> DescribeRuntimeConfigurationOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeRuntimeConfigurationRequest&, DescribeRuntimeConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuntimeConfigurationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScalingPoliciesResponse> DescribeScalingPoliciesOutcome;
                typedef std::future<DescribeScalingPoliciesOutcome> DescribeScalingPoliciesOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeScalingPoliciesRequest&, DescribeScalingPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScalingPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTimerScalingPoliciesResponse> DescribeTimerScalingPoliciesOutcome;
                typedef std::future<DescribeTimerScalingPoliciesOutcome> DescribeTimerScalingPoliciesOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeTimerScalingPoliciesRequest&, DescribeTimerScalingPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTimerScalingPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserQuotaResponse> DescribeUserQuotaOutcome;
                typedef std::future<DescribeUserQuotaOutcome> DescribeUserQuotaOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeUserQuotaRequest&, DescribeUserQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserQuotasResponse> DescribeUserQuotasOutcome;
                typedef std::future<DescribeUserQuotasOutcome> DescribeUserQuotasOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeUserQuotasRequest&, DescribeUserQuotasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserQuotasAsyncHandler;
                typedef Outcome<Core::Error, Model::DetachCcnInstancesResponse> DetachCcnInstancesOutcome;
                typedef std::future<DetachCcnInstancesOutcome> DetachCcnInstancesOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DetachCcnInstancesRequest&, DetachCcnInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachCcnInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::EndGameServerSessionAndProcessResponse> EndGameServerSessionAndProcessOutcome;
                typedef std::future<EndGameServerSessionAndProcessOutcome> EndGameServerSessionAndProcessOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::EndGameServerSessionAndProcessRequest&, EndGameServerSessionAndProcessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EndGameServerSessionAndProcessAsyncHandler;
                typedef Outcome<Core::Error, Model::GetGameServerInstanceLogUrlResponse> GetGameServerInstanceLogUrlOutcome;
                typedef std::future<GetGameServerInstanceLogUrlOutcome> GetGameServerInstanceLogUrlOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::GetGameServerInstanceLogUrlRequest&, GetGameServerInstanceLogUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetGameServerInstanceLogUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::GetGameServerSessionLogUrlResponse> GetGameServerSessionLogUrlOutcome;
                typedef std::future<GetGameServerSessionLogUrlOutcome> GetGameServerSessionLogUrlOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::GetGameServerSessionLogUrlRequest&, GetGameServerSessionLogUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetGameServerSessionLogUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::GetInstanceAccessResponse> GetInstanceAccessOutcome;
                typedef std::future<GetInstanceAccessOutcome> GetInstanceAccessOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::GetInstanceAccessRequest&, GetInstanceAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::GetUploadCredentialsResponse> GetUploadCredentialsOutcome;
                typedef std::future<GetUploadCredentialsOutcome> GetUploadCredentialsOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::GetUploadCredentialsRequest&, GetUploadCredentialsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetUploadCredentialsAsyncHandler;
                typedef Outcome<Core::Error, Model::GetUploadFederationTokenResponse> GetUploadFederationTokenOutcome;
                typedef std::future<GetUploadFederationTokenOutcome> GetUploadFederationTokenOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::GetUploadFederationTokenRequest&, GetUploadFederationTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetUploadFederationTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::JoinGameServerSessionResponse> JoinGameServerSessionOutcome;
                typedef std::future<JoinGameServerSessionOutcome> JoinGameServerSessionOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::JoinGameServerSessionRequest&, JoinGameServerSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> JoinGameServerSessionAsyncHandler;
                typedef Outcome<Core::Error, Model::JoinGameServerSessionBatchResponse> JoinGameServerSessionBatchOutcome;
                typedef std::future<JoinGameServerSessionBatchOutcome> JoinGameServerSessionBatchOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::JoinGameServerSessionBatchRequest&, JoinGameServerSessionBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> JoinGameServerSessionBatchAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAliasesResponse> ListAliasesOutcome;
                typedef std::future<ListAliasesOutcome> ListAliasesOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::ListAliasesRequest&, ListAliasesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAliasesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListFleetsResponse> ListFleetsOutcome;
                typedef std::future<ListFleetsOutcome> ListFleetsOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::ListFleetsRequest&, ListFleetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListFleetsAsyncHandler;
                typedef Outcome<Core::Error, Model::PutScalingPolicyResponse> PutScalingPolicyOutcome;
                typedef std::future<PutScalingPolicyOutcome> PutScalingPolicyOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::PutScalingPolicyRequest&, PutScalingPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PutScalingPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::PutTimerScalingPolicyResponse> PutTimerScalingPolicyOutcome;
                typedef std::future<PutTimerScalingPolicyOutcome> PutTimerScalingPolicyOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::PutTimerScalingPolicyRequest&, PutTimerScalingPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PutTimerScalingPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ResolveAliasResponse> ResolveAliasOutcome;
                typedef std::future<ResolveAliasOutcome> ResolveAliasOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::ResolveAliasRequest&, ResolveAliasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResolveAliasAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchGameServerSessionsResponse> SearchGameServerSessionsOutcome;
                typedef std::future<SearchGameServerSessionsOutcome> SearchGameServerSessionsOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::SearchGameServerSessionsRequest&, SearchGameServerSessionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchGameServerSessionsAsyncHandler;
                typedef Outcome<Core::Error, Model::SetServerReservedResponse> SetServerReservedOutcome;
                typedef std::future<SetServerReservedOutcome> SetServerReservedOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::SetServerReservedRequest&, SetServerReservedOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetServerReservedAsyncHandler;
                typedef Outcome<Core::Error, Model::SetServerWeightResponse> SetServerWeightOutcome;
                typedef std::future<SetServerWeightOutcome> SetServerWeightOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::SetServerWeightRequest&, SetServerWeightOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetServerWeightAsyncHandler;
                typedef Outcome<Core::Error, Model::StartFleetActionsResponse> StartFleetActionsOutcome;
                typedef std::future<StartFleetActionsOutcome> StartFleetActionsOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::StartFleetActionsRequest&, StartFleetActionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartFleetActionsAsyncHandler;
                typedef Outcome<Core::Error, Model::StartGameServerSessionPlacementResponse> StartGameServerSessionPlacementOutcome;
                typedef std::future<StartGameServerSessionPlacementOutcome> StartGameServerSessionPlacementOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::StartGameServerSessionPlacementRequest&, StartGameServerSessionPlacementOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartGameServerSessionPlacementAsyncHandler;
                typedef Outcome<Core::Error, Model::StopFleetActionsResponse> StopFleetActionsOutcome;
                typedef std::future<StopFleetActionsOutcome> StopFleetActionsOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::StopFleetActionsRequest&, StopFleetActionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopFleetActionsAsyncHandler;
                typedef Outcome<Core::Error, Model::StopGameServerSessionPlacementResponse> StopGameServerSessionPlacementOutcome;
                typedef std::future<StopGameServerSessionPlacementOutcome> StopGameServerSessionPlacementOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::StopGameServerSessionPlacementRequest&, StopGameServerSessionPlacementOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopGameServerSessionPlacementAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAliasResponse> UpdateAliasOutcome;
                typedef std::future<UpdateAliasOutcome> UpdateAliasOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::UpdateAliasRequest&, UpdateAliasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAliasAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAssetResponse> UpdateAssetOutcome;
                typedef std::future<UpdateAssetOutcome> UpdateAssetOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::UpdateAssetRequest&, UpdateAssetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAssetAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateBucketAccelerateOptResponse> UpdateBucketAccelerateOptOutcome;
                typedef std::future<UpdateBucketAccelerateOptOutcome> UpdateBucketAccelerateOptOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::UpdateBucketAccelerateOptRequest&, UpdateBucketAccelerateOptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateBucketAccelerateOptAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateBucketCORSOptResponse> UpdateBucketCORSOptOutcome;
                typedef std::future<UpdateBucketCORSOptOutcome> UpdateBucketCORSOptOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::UpdateBucketCORSOptRequest&, UpdateBucketCORSOptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateBucketCORSOptAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateFleetAttributesResponse> UpdateFleetAttributesOutcome;
                typedef std::future<UpdateFleetAttributesOutcome> UpdateFleetAttributesOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::UpdateFleetAttributesRequest&, UpdateFleetAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFleetAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateFleetCapacityResponse> UpdateFleetCapacityOutcome;
                typedef std::future<UpdateFleetCapacityOutcome> UpdateFleetCapacityOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::UpdateFleetCapacityRequest&, UpdateFleetCapacityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFleetCapacityAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateFleetNameResponse> UpdateFleetNameOutcome;
                typedef std::future<UpdateFleetNameOutcome> UpdateFleetNameOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::UpdateFleetNameRequest&, UpdateFleetNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFleetNameAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateFleetPortSettingsResponse> UpdateFleetPortSettingsOutcome;
                typedef std::future<UpdateFleetPortSettingsOutcome> UpdateFleetPortSettingsOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::UpdateFleetPortSettingsRequest&, UpdateFleetPortSettingsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFleetPortSettingsAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateGameServerSessionResponse> UpdateGameServerSessionOutcome;
                typedef std::future<UpdateGameServerSessionOutcome> UpdateGameServerSessionOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::UpdateGameServerSessionRequest&, UpdateGameServerSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGameServerSessionAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateGameServerSessionQueueResponse> UpdateGameServerSessionQueueOutcome;
                typedef std::future<UpdateGameServerSessionQueueOutcome> UpdateGameServerSessionQueueOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::UpdateGameServerSessionQueueRequest&, UpdateGameServerSessionQueueOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGameServerSessionQueueAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateRuntimeConfigurationResponse> UpdateRuntimeConfigurationOutcome;
                typedef std::future<UpdateRuntimeConfigurationOutcome> UpdateRuntimeConfigurationOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::UpdateRuntimeConfigurationRequest&, UpdateRuntimeConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRuntimeConfigurationAsyncHandler;



                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（AttachCcnInstances）用于关联云联网实例。
                 * @param req AttachCcnInstancesRequest
                 * @return AttachCcnInstancesOutcome
                 */
                AttachCcnInstancesOutcome AttachCcnInstances(const Model::AttachCcnInstancesRequest &request);
                void AttachCcnInstancesAsync(const Model::AttachCcnInstancesRequest& request, const AttachCcnInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachCcnInstancesOutcomeCallable AttachCcnInstancesCallable(const Model::AttachCcnInstancesRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（CopyFleet）用于复制服务器舰队。
                 * @param req CopyFleetRequest
                 * @return CopyFleetOutcome
                 */
                CopyFleetOutcome CopyFleet(const Model::CopyFleetRequest &request);
                void CopyFleetAsync(const Model::CopyFleetRequest& request, const CopyFleetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CopyFleetOutcomeCallable CopyFleetCallable(const Model::CopyFleetRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（CreateAlias）用于创建别名。
                 * @param req CreateAliasRequest
                 * @return CreateAliasOutcome
                 */
                CreateAliasOutcome CreateAlias(const Model::CreateAliasRequest &request);
                void CreateAliasAsync(const Model::CreateAliasRequest& request, const CreateAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAliasOutcomeCallable CreateAliasCallable(const Model::CreateAliasRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（CreateAsset）用于创建生成包。
通过获取上传cos的临时密钥，将文件上传至cos，然后将生成包的zip名称下发给本接口完成资源创建。  

上传文件至 cos支持俩种方式：

- 获取预签名方式，COS 简单上传
    1. [GetUploadCredentials](https://cloud.tencent.com/document/product/1165/48727) 获取预签名信息
    2. 使用 COS API 进行上传([参考文档](https://cloud.tencent.com/document/product/436/7749))
-  临时密钥方式，COS 简单上传或者分块上传方式
    1. [GetUploadCredentials](https://cloud.tencent.com/document/product/1165/48727)（获取上传 bucket  第一次调用需要，后续可以不用调用）
    2. [GetUploadFederationToken](https://cloud.tencent.com/document/product/1165/48742) 获取临时密钥
    3. 使用 COS API 进行上传([参考文档](https://cloud.tencent.com/document/product/436/7742))

具体使用场景可以参考 [GetUploadCredentials](https://cloud.tencent.com/document/product/1165/48727) ,  [GetUploadFederationToken](https://cloud.tencent.com/document/product/1165/48742)和下面 CreateAsset 示例。  
                 * @param req CreateAssetRequest
                 * @return CreateAssetOutcome
                 */
                CreateAssetOutcome CreateAsset(const Model::CreateAssetRequest &request);
                void CreateAssetAsync(const Model::CreateAssetRequest& request, const CreateAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAssetOutcomeCallable CreateAssetCallable(const Model::CreateAssetRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（CreateAssetWithImage）用于创建生成包镜像信息。
                 * @param req CreateAssetWithImageRequest
                 * @return CreateAssetWithImageOutcome
                 */
                CreateAssetWithImageOutcome CreateAssetWithImage(const Model::CreateAssetWithImageRequest &request);
                void CreateAssetWithImageAsync(const Model::CreateAssetWithImageRequest& request, const CreateAssetWithImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAssetWithImageOutcomeCallable CreateAssetWithImageCallable(const Model::CreateAssetWithImageRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（CreateFleet）用于创建服务器舰队。
                 * @param req CreateFleetRequest
                 * @return CreateFleetOutcome
                 */
                CreateFleetOutcome CreateFleet(const Model::CreateFleetRequest &request);
                void CreateFleetAsync(const Model::CreateFleetRequest& request, const CreateFleetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFleetOutcomeCallable CreateFleetCallable(const Model::CreateFleetRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（CreateGameServerSession）用于创建游戏服务会话。
                 * @param req CreateGameServerSessionRequest
                 * @return CreateGameServerSessionOutcome
                 */
                CreateGameServerSessionOutcome CreateGameServerSession(const Model::CreateGameServerSessionRequest &request);
                void CreateGameServerSessionAsync(const Model::CreateGameServerSessionRequest& request, const CreateGameServerSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGameServerSessionOutcomeCallable CreateGameServerSessionCallable(const Model::CreateGameServerSessionRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（CreateGameServerSessionQueue）用于创建游戏服务器会话队列。
                 * @param req CreateGameServerSessionQueueRequest
                 * @return CreateGameServerSessionQueueOutcome
                 */
                CreateGameServerSessionQueueOutcome CreateGameServerSessionQueue(const Model::CreateGameServerSessionQueueRequest &request);
                void CreateGameServerSessionQueueAsync(const Model::CreateGameServerSessionQueueRequest& request, const CreateGameServerSessionQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGameServerSessionQueueOutcomeCallable CreateGameServerSessionQueueCallable(const Model::CreateGameServerSessionQueueRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（DeleteAlias）用于删除别名。
                 * @param req DeleteAliasRequest
                 * @return DeleteAliasOutcome
                 */
                DeleteAliasOutcome DeleteAlias(const Model::DeleteAliasRequest &request);
                void DeleteAliasAsync(const Model::DeleteAliasRequest& request, const DeleteAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAliasOutcomeCallable DeleteAliasCallable(const Model::DeleteAliasRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（DeleteAsset）用于删除生成包。
                 * @param req DeleteAssetRequest
                 * @return DeleteAssetOutcome
                 */
                DeleteAssetOutcome DeleteAsset(const Model::DeleteAssetRequest &request);
                void DeleteAssetAsync(const Model::DeleteAssetRequest& request, const DeleteAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAssetOutcomeCallable DeleteAssetCallable(const Model::DeleteAssetRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（DeleteFleet）用于删除服务器舰队。
                 * @param req DeleteFleetRequest
                 * @return DeleteFleetOutcome
                 */
                DeleteFleetOutcome DeleteFleet(const Model::DeleteFleetRequest &request);
                void DeleteFleetAsync(const Model::DeleteFleetRequest& request, const DeleteFleetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteFleetOutcomeCallable DeleteFleetCallable(const Model::DeleteFleetRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（DeleteGameServerSessionQueue）用于删除游戏服务器会话队列。
                 * @param req DeleteGameServerSessionQueueRequest
                 * @return DeleteGameServerSessionQueueOutcome
                 */
                DeleteGameServerSessionQueueOutcome DeleteGameServerSessionQueue(const Model::DeleteGameServerSessionQueueRequest &request);
                void DeleteGameServerSessionQueueAsync(const Model::DeleteGameServerSessionQueueRequest& request, const DeleteGameServerSessionQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteGameServerSessionQueueOutcomeCallable DeleteGameServerSessionQueueCallable(const Model::DeleteGameServerSessionQueueRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（DeleteScalingPolicy）用于删除服务器舰队的扩缩容策略。
通过服务器舰队ID和策略名称删除服务器舰队的扩缩容策略，只传递服务器舰队ID时，会将这个服务器舰队下的所有策略都删除。
传递策略名称时，单独删除策略名称对应的策略。
                 * @param req DeleteScalingPolicyRequest
                 * @return DeleteScalingPolicyOutcome
                 */
                DeleteScalingPolicyOutcome DeleteScalingPolicy(const Model::DeleteScalingPolicyRequest &request);
                void DeleteScalingPolicyAsync(const Model::DeleteScalingPolicyRequest& request, const DeleteScalingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteScalingPolicyOutcomeCallable DeleteScalingPolicyCallable(const Model::DeleteScalingPolicyRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（DeleteTimerScalingPolicy）用于删除fleet下的定时器。

                 * @param req DeleteTimerScalingPolicyRequest
                 * @return DeleteTimerScalingPolicyOutcome
                 */
                DeleteTimerScalingPolicyOutcome DeleteTimerScalingPolicy(const Model::DeleteTimerScalingPolicyRequest &request);
                void DeleteTimerScalingPolicyAsync(const Model::DeleteTimerScalingPolicyRequest& request, const DeleteTimerScalingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTimerScalingPolicyOutcomeCallable DeleteTimerScalingPolicyCallable(const Model::DeleteTimerScalingPolicyRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（DescribeAlias）用于获取别名详情。
                 * @param req DescribeAliasRequest
                 * @return DescribeAliasOutcome
                 */
                DescribeAliasOutcome DescribeAlias(const Model::DescribeAliasRequest &request);
                void DescribeAliasAsync(const Model::DescribeAliasRequest& request, const DescribeAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAliasOutcomeCallable DescribeAliasCallable(const Model::DescribeAliasRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（DescribeAsset）获取生成包信息。
                 * @param req DescribeAssetRequest
                 * @return DescribeAssetOutcome
                 */
                DescribeAssetOutcome DescribeAsset(const Model::DescribeAssetRequest &request);
                void DescribeAssetAsync(const Model::DescribeAssetRequest& request, const DescribeAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetOutcomeCallable DescribeAssetCallable(const Model::DescribeAssetRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（DescribeAssetSystems）用于获取生成包支持的操作系统。
                 * @param req DescribeAssetSystemsRequest
                 * @return DescribeAssetSystemsOutcome
                 */
                DescribeAssetSystemsOutcome DescribeAssetSystems(const Model::DescribeAssetSystemsRequest &request);
                void DescribeAssetSystemsAsync(const Model::DescribeAssetSystemsRequest& request, const DescribeAssetSystemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetSystemsOutcomeCallable DescribeAssetSystemsCallable(const Model::DescribeAssetSystemsRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（DescribeAssets）用于获取生成包列表。
                 * @param req DescribeAssetsRequest
                 * @return DescribeAssetsOutcome
                 */
                DescribeAssetsOutcome DescribeAssets(const Model::DescribeAssetsRequest &request);
                void DescribeAssetsAsync(const Model::DescribeAssetsRequest& request, const DescribeAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetsOutcomeCallable DescribeAssetsCallable(const Model::DescribeAssetsRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（DescribeCcnInstances）用于查询云联网实例。
                 * @param req DescribeCcnInstancesRequest
                 * @return DescribeCcnInstancesOutcome
                 */
                DescribeCcnInstancesOutcome DescribeCcnInstances(const Model::DescribeCcnInstancesRequest &request);
                void DescribeCcnInstancesAsync(const Model::DescribeCcnInstancesRequest& request, const DescribeCcnInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCcnInstancesOutcomeCallable DescribeCcnInstancesCallable(const Model::DescribeCcnInstancesRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（DescribeFleetAttributes）用于查询服务器舰队属性。
                 * @param req DescribeFleetAttributesRequest
                 * @return DescribeFleetAttributesOutcome
                 */
                DescribeFleetAttributesOutcome DescribeFleetAttributes(const Model::DescribeFleetAttributesRequest &request);
                void DescribeFleetAttributesAsync(const Model::DescribeFleetAttributesRequest& request, const DescribeFleetAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFleetAttributesOutcomeCallable DescribeFleetAttributesCallable(const Model::DescribeFleetAttributesRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（DescribeFleetCapacity）用于查询服务部署容量配置。
                 * @param req DescribeFleetCapacityRequest
                 * @return DescribeFleetCapacityOutcome
                 */
                DescribeFleetCapacityOutcome DescribeFleetCapacity(const Model::DescribeFleetCapacityRequest &request);
                void DescribeFleetCapacityAsync(const Model::DescribeFleetCapacityRequest& request, const DescribeFleetCapacityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFleetCapacityOutcomeCallable DescribeFleetCapacityCallable(const Model::DescribeFleetCapacityRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（DescribeFleetEvents）用于查询服务器舰队相关的事件列表。
                 * @param req DescribeFleetEventsRequest
                 * @return DescribeFleetEventsOutcome
                 */
                DescribeFleetEventsOutcome DescribeFleetEvents(const Model::DescribeFleetEventsRequest &request);
                void DescribeFleetEventsAsync(const Model::DescribeFleetEventsRequest& request, const DescribeFleetEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFleetEventsOutcomeCallable DescribeFleetEventsCallable(const Model::DescribeFleetEventsRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（DescribeFleetPortSettings）用于获取服务器舰队安全组信息。
                 * @param req DescribeFleetPortSettingsRequest
                 * @return DescribeFleetPortSettingsOutcome
                 */
                DescribeFleetPortSettingsOutcome DescribeFleetPortSettings(const Model::DescribeFleetPortSettingsRequest &request);
                void DescribeFleetPortSettingsAsync(const Model::DescribeFleetPortSettingsRequest& request, const DescribeFleetPortSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFleetPortSettingsOutcomeCallable DescribeFleetPortSettingsCallable(const Model::DescribeFleetPortSettingsRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（DescribeFleetRelatedResources）用于获取与游戏服务器舰队关联的资源信息，如别名、队列
                 * @param req DescribeFleetRelatedResourcesRequest
                 * @return DescribeFleetRelatedResourcesOutcome
                 */
                DescribeFleetRelatedResourcesOutcome DescribeFleetRelatedResources(const Model::DescribeFleetRelatedResourcesRequest &request);
                void DescribeFleetRelatedResourcesAsync(const Model::DescribeFleetRelatedResourcesRequest& request, const DescribeFleetRelatedResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFleetRelatedResourcesOutcomeCallable DescribeFleetRelatedResourcesCallable(const Model::DescribeFleetRelatedResourcesRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（DescribeFleetStatisticDetails）用于查询服务部署统计详情。
                 * @param req DescribeFleetStatisticDetailsRequest
                 * @return DescribeFleetStatisticDetailsOutcome
                 */
                DescribeFleetStatisticDetailsOutcome DescribeFleetStatisticDetails(const Model::DescribeFleetStatisticDetailsRequest &request);
                void DescribeFleetStatisticDetailsAsync(const Model::DescribeFleetStatisticDetailsRequest& request, const DescribeFleetStatisticDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFleetStatisticDetailsOutcomeCallable DescribeFleetStatisticDetailsCallable(const Model::DescribeFleetStatisticDetailsRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（DescribeFleetStatisticFlows）用于查询服务部署统计用量。
                 * @param req DescribeFleetStatisticFlowsRequest
                 * @return DescribeFleetStatisticFlowsOutcome
                 */
                DescribeFleetStatisticFlowsOutcome DescribeFleetStatisticFlows(const Model::DescribeFleetStatisticFlowsRequest &request);
                void DescribeFleetStatisticFlowsAsync(const Model::DescribeFleetStatisticFlowsRequest& request, const DescribeFleetStatisticFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFleetStatisticFlowsOutcomeCallable DescribeFleetStatisticFlowsCallable(const Model::DescribeFleetStatisticFlowsRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（DescribeFleetStatisticSummary）用于查询服务部署统计汇总信息。
                 * @param req DescribeFleetStatisticSummaryRequest
                 * @return DescribeFleetStatisticSummaryOutcome
                 */
                DescribeFleetStatisticSummaryOutcome DescribeFleetStatisticSummary(const Model::DescribeFleetStatisticSummaryRequest &request);
                void DescribeFleetStatisticSummaryAsync(const Model::DescribeFleetStatisticSummaryRequest& request, const DescribeFleetStatisticSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFleetStatisticSummaryOutcomeCallable DescribeFleetStatisticSummaryCallable(const Model::DescribeFleetStatisticSummaryRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（DescribeFleetUtilization）用于查询服务器舰队的利用率信息。
                 * @param req DescribeFleetUtilizationRequest
                 * @return DescribeFleetUtilizationOutcome
                 */
                DescribeFleetUtilizationOutcome DescribeFleetUtilization(const Model::DescribeFleetUtilizationRequest &request);
                void DescribeFleetUtilizationAsync(const Model::DescribeFleetUtilizationRequest& request, const DescribeFleetUtilizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFleetUtilizationOutcomeCallable DescribeFleetUtilizationCallable(const Model::DescribeFleetUtilizationRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（DescribeGameServerSessionDetails）用于查询游戏服务器会话详情列表。
                 * @param req DescribeGameServerSessionDetailsRequest
                 * @return DescribeGameServerSessionDetailsOutcome
                 */
                DescribeGameServerSessionDetailsOutcome DescribeGameServerSessionDetails(const Model::DescribeGameServerSessionDetailsRequest &request);
                void DescribeGameServerSessionDetailsAsync(const Model::DescribeGameServerSessionDetailsRequest& request, const DescribeGameServerSessionDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGameServerSessionDetailsOutcomeCallable DescribeGameServerSessionDetailsCallable(const Model::DescribeGameServerSessionDetailsRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（DescribeGameServerSessionPlacement）用于查询游戏服务器会话的放置。
                 * @param req DescribeGameServerSessionPlacementRequest
                 * @return DescribeGameServerSessionPlacementOutcome
                 */
                DescribeGameServerSessionPlacementOutcome DescribeGameServerSessionPlacement(const Model::DescribeGameServerSessionPlacementRequest &request);
                void DescribeGameServerSessionPlacementAsync(const Model::DescribeGameServerSessionPlacementRequest& request, const DescribeGameServerSessionPlacementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGameServerSessionPlacementOutcomeCallable DescribeGameServerSessionPlacementCallable(const Model::DescribeGameServerSessionPlacementRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（DescribeGameServerSessionQueues）用于查询游戏服务器会话队列。
                 * @param req DescribeGameServerSessionQueuesRequest
                 * @return DescribeGameServerSessionQueuesOutcome
                 */
                DescribeGameServerSessionQueuesOutcome DescribeGameServerSessionQueues(const Model::DescribeGameServerSessionQueuesRequest &request);
                void DescribeGameServerSessionQueuesAsync(const Model::DescribeGameServerSessionQueuesRequest& request, const DescribeGameServerSessionQueuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGameServerSessionQueuesOutcomeCallable DescribeGameServerSessionQueuesCallable(const Model::DescribeGameServerSessionQueuesRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（DescribeGameServerSessions）用于查询游戏服务器会话列表。
                 * @param req DescribeGameServerSessionsRequest
                 * @return DescribeGameServerSessionsOutcome
                 */
                DescribeGameServerSessionsOutcome DescribeGameServerSessions(const Model::DescribeGameServerSessionsRequest &request);
                void DescribeGameServerSessionsAsync(const Model::DescribeGameServerSessionsRequest& request, const DescribeGameServerSessionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGameServerSessionsOutcomeCallable DescribeGameServerSessionsCallable(const Model::DescribeGameServerSessionsRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（DescribeInstanceLimit）用于查询用户实例数限额。
                 * @param req DescribeInstanceLimitRequest
                 * @return DescribeInstanceLimitOutcome
                 */
                DescribeInstanceLimitOutcome DescribeInstanceLimit(const Model::DescribeInstanceLimitRequest &request);
                void DescribeInstanceLimitAsync(const Model::DescribeInstanceLimitRequest& request, const DescribeInstanceLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceLimitOutcomeCallable DescribeInstanceLimitCallable(const Model::DescribeInstanceLimitRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（DescribeInstanceTypes）用于获取服务器实例类型列表。
                 * @param req DescribeInstanceTypesRequest
                 * @return DescribeInstanceTypesOutcome
                 */
                DescribeInstanceTypesOutcome DescribeInstanceTypes(const Model::DescribeInstanceTypesRequest &request);
                void DescribeInstanceTypesAsync(const Model::DescribeInstanceTypesRequest& request, const DescribeInstanceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceTypesOutcomeCallable DescribeInstanceTypesCallable(const Model::DescribeInstanceTypesRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（DescribeInstances）用于查询服务器实例列表。
                 * @param req DescribeInstancesRequest
                 * @return DescribeInstancesOutcome
                 */
                DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest &request);
                void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（DescribeInstancesExtend）用于查询实例扩展信息列表。
                 * @param req DescribeInstancesExtendRequest
                 * @return DescribeInstancesExtendOutcome
                 */
                DescribeInstancesExtendOutcome DescribeInstancesExtend(const Model::DescribeInstancesExtendRequest &request);
                void DescribeInstancesExtendAsync(const Model::DescribeInstancesExtendRequest& request, const DescribeInstancesExtendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesExtendOutcomeCallable DescribeInstancesExtendCallable(const Model::DescribeInstancesExtendRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（DescribePlayerSessions）用于获取玩家会话列表。
                 * @param req DescribePlayerSessionsRequest
                 * @return DescribePlayerSessionsOutcome
                 */
                DescribePlayerSessionsOutcome DescribePlayerSessions(const Model::DescribePlayerSessionsRequest &request);
                void DescribePlayerSessionsAsync(const Model::DescribePlayerSessionsRequest& request, const DescribePlayerSessionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePlayerSessionsOutcomeCallable DescribePlayerSessionsCallable(const Model::DescribePlayerSessionsRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（DescribeRuntimeConfiguration）用于获取服务器舰队运行配置。
                 * @param req DescribeRuntimeConfigurationRequest
                 * @return DescribeRuntimeConfigurationOutcome
                 */
                DescribeRuntimeConfigurationOutcome DescribeRuntimeConfiguration(const Model::DescribeRuntimeConfigurationRequest &request);
                void DescribeRuntimeConfigurationAsync(const Model::DescribeRuntimeConfigurationRequest& request, const DescribeRuntimeConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRuntimeConfigurationOutcomeCallable DescribeRuntimeConfigurationCallable(const Model::DescribeRuntimeConfigurationRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（DescribeScalingPolicies）用于查询服务器舰队的动态扩缩容策略列表。
                 * @param req DescribeScalingPoliciesRequest
                 * @return DescribeScalingPoliciesOutcome
                 */
                DescribeScalingPoliciesOutcome DescribeScalingPolicies(const Model::DescribeScalingPoliciesRequest &request);
                void DescribeScalingPoliciesAsync(const Model::DescribeScalingPoliciesRequest& request, const DescribeScalingPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScalingPoliciesOutcomeCallable DescribeScalingPoliciesCallable(const Model::DescribeScalingPoliciesRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（DescribeTimerScalingPolicies）用于查询fleet下的定时器列表。可以通过fleetid，定时器名称分页查询。

                 * @param req DescribeTimerScalingPoliciesRequest
                 * @return DescribeTimerScalingPoliciesOutcome
                 */
                DescribeTimerScalingPoliciesOutcome DescribeTimerScalingPolicies(const Model::DescribeTimerScalingPoliciesRequest &request);
                void DescribeTimerScalingPoliciesAsync(const Model::DescribeTimerScalingPoliciesRequest& request, const DescribeTimerScalingPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTimerScalingPoliciesOutcomeCallable DescribeTimerScalingPoliciesCallable(const Model::DescribeTimerScalingPoliciesRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（DescribeUserQuota）获取用户单个模块配额。
                 * @param req DescribeUserQuotaRequest
                 * @return DescribeUserQuotaOutcome
                 */
                DescribeUserQuotaOutcome DescribeUserQuota(const Model::DescribeUserQuotaRequest &request);
                void DescribeUserQuotaAsync(const Model::DescribeUserQuotaRequest& request, const DescribeUserQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserQuotaOutcomeCallable DescribeUserQuotaCallable(const Model::DescribeUserQuotaRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（DescribeUserQuotas）用于获取用户配额
                 * @param req DescribeUserQuotasRequest
                 * @return DescribeUserQuotasOutcome
                 */
                DescribeUserQuotasOutcome DescribeUserQuotas(const Model::DescribeUserQuotasRequest &request);
                void DescribeUserQuotasAsync(const Model::DescribeUserQuotasRequest& request, const DescribeUserQuotasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserQuotasOutcomeCallable DescribeUserQuotasCallable(const Model::DescribeUserQuotasRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（DetachCcnInstances）用于解关联云联网实例。
                 * @param req DetachCcnInstancesRequest
                 * @return DetachCcnInstancesOutcome
                 */
                DetachCcnInstancesOutcome DetachCcnInstances(const Model::DetachCcnInstancesRequest &request);
                void DetachCcnInstancesAsync(const Model::DetachCcnInstancesRequest& request, const DetachCcnInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachCcnInstancesOutcomeCallable DetachCcnInstancesCallable(const Model::DetachCcnInstancesRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（EndGameServerSessionAndProcess）用于终止游戏服务器会话和对应的进程，适用于时限保护和不保护。
                 * @param req EndGameServerSessionAndProcessRequest
                 * @return EndGameServerSessionAndProcessOutcome
                 */
                EndGameServerSessionAndProcessOutcome EndGameServerSessionAndProcess(const Model::EndGameServerSessionAndProcessRequest &request);
                void EndGameServerSessionAndProcessAsync(const Model::EndGameServerSessionAndProcessRequest& request, const EndGameServerSessionAndProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EndGameServerSessionAndProcessOutcomeCallable EndGameServerSessionAndProcessCallable(const Model::EndGameServerSessionAndProcessRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口用于获取游戏服务器实例的日志URL。
                 * @param req GetGameServerInstanceLogUrlRequest
                 * @return GetGameServerInstanceLogUrlOutcome
                 */
                GetGameServerInstanceLogUrlOutcome GetGameServerInstanceLogUrl(const Model::GetGameServerInstanceLogUrlRequest &request);
                void GetGameServerInstanceLogUrlAsync(const Model::GetGameServerInstanceLogUrlRequest& request, const GetGameServerInstanceLogUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetGameServerInstanceLogUrlOutcomeCallable GetGameServerInstanceLogUrlCallable(const Model::GetGameServerInstanceLogUrlRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（GetGameServerSessionLogUrl）用于获取游戏服务器会话的日志URL。
                 * @param req GetGameServerSessionLogUrlRequest
                 * @return GetGameServerSessionLogUrlOutcome
                 */
                GetGameServerSessionLogUrlOutcome GetGameServerSessionLogUrl(const Model::GetGameServerSessionLogUrlRequest &request);
                void GetGameServerSessionLogUrlAsync(const Model::GetGameServerSessionLogUrlRequest& request, const GetGameServerSessionLogUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetGameServerSessionLogUrlOutcomeCallable GetGameServerSessionLogUrlCallable(const Model::GetGameServerSessionLogUrlRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（GetInstanceAccess）用于获取实例登录所需要的凭据。
                 * @param req GetInstanceAccessRequest
                 * @return GetInstanceAccessOutcome
                 */
                GetInstanceAccessOutcome GetInstanceAccess(const Model::GetInstanceAccessRequest &request);
                void GetInstanceAccessAsync(const Model::GetInstanceAccessRequest& request, const GetInstanceAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetInstanceAccessOutcomeCallable GetInstanceAccessCallable(const Model::GetInstanceAccessRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（GetUploadCredentials）获取上传文件授权信息。
通过 [GetUploadCredentials](https://cloud.tencent.com/document/product/1165/48727) 接口获取临时授权信息后，调用 COS API将数据上传，根据上传的 BucketKey 信息进行生成包 [CreateAsset](https://cloud.tencent.com/document/product/1165/48731) 的创建。参考下面的示例部分。
                 * @param req GetUploadCredentialsRequest
                 * @return GetUploadCredentialsOutcome
                 */
                GetUploadCredentialsOutcome GetUploadCredentials(const Model::GetUploadCredentialsRequest &request);
                void GetUploadCredentialsAsync(const Model::GetUploadCredentialsRequest& request, const GetUploadCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetUploadCredentialsOutcomeCallable GetUploadCredentialsCallable(const Model::GetUploadCredentialsRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（GetUploadFederationToken）用于 获取生成包上传所需要的临时密钥。
                 * @param req GetUploadFederationTokenRequest
                 * @return GetUploadFederationTokenOutcome
                 */
                GetUploadFederationTokenOutcome GetUploadFederationToken(const Model::GetUploadFederationTokenRequest &request);
                void GetUploadFederationTokenAsync(const Model::GetUploadFederationTokenRequest& request, const GetUploadFederationTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetUploadFederationTokenOutcomeCallable GetUploadFederationTokenCallable(const Model::GetUploadFederationTokenRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（JoinGameServerSession）用于加入游戏服务器会话。
                 * @param req JoinGameServerSessionRequest
                 * @return JoinGameServerSessionOutcome
                 */
                JoinGameServerSessionOutcome JoinGameServerSession(const Model::JoinGameServerSessionRequest &request);
                void JoinGameServerSessionAsync(const Model::JoinGameServerSessionRequest& request, const JoinGameServerSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                JoinGameServerSessionOutcomeCallable JoinGameServerSessionCallable(const Model::JoinGameServerSessionRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（JoinGameServerSessionBatch）用于批量加入游戏服务器会话。
                 * @param req JoinGameServerSessionBatchRequest
                 * @return JoinGameServerSessionBatchOutcome
                 */
                JoinGameServerSessionBatchOutcome JoinGameServerSessionBatch(const Model::JoinGameServerSessionBatchRequest &request);
                void JoinGameServerSessionBatchAsync(const Model::JoinGameServerSessionBatchRequest& request, const JoinGameServerSessionBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                JoinGameServerSessionBatchOutcomeCallable JoinGameServerSessionBatchCallable(const Model::JoinGameServerSessionBatchRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（ListAliases）用于检索帐户下的所有别名。
                 * @param req ListAliasesRequest
                 * @return ListAliasesOutcome
                 */
                ListAliasesOutcome ListAliases(const Model::ListAliasesRequest &request);
                void ListAliasesAsync(const Model::ListAliasesRequest& request, const ListAliasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAliasesOutcomeCallable ListAliasesCallable(const Model::ListAliasesRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（ListFleets）用于获取服务器舰队列表。
                 * @param req ListFleetsRequest
                 * @return ListFleetsOutcome
                 */
                ListFleetsOutcome ListFleets(const Model::ListFleetsRequest &request);
                void ListFleetsAsync(const Model::ListFleetsRequest& request, const ListFleetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListFleetsOutcomeCallable ListFleetsCallable(const Model::ListFleetsRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（PutScalingPolicy）用于设置服务器舰队的动态扩缩容策略。

通过此接口可以增加或者更新服务器舰队的扩缩容策略。
服务器舰队可以有多个扩缩容策略，但是只有一个TargetBased基于目标的策略。

## TargetBased基于目标的策略

TargetBased策略计算的指标是PercentAvailableGameSessions，这个策略用于计算当前服务器舰队应该有多少个CVM实例来支撑和分配游戏会话。
PercentAvailableGameSessions表示服务器舰队的缓冲值；用来计算服务器舰队在当前容量下可以处理的额外玩家会话数量。
如果使用基于目标的策略，可以按照业务需求设置一个期望的缓冲区大小，GSE的会按照配置的策略来扩容和缩容到这个目标要求的CVM实例数。

例如：客户可以设置同时承载100个游戏会话的服务器舰队预留10%的缓冲区。GSE会按照这个策略执行时，若服务器舰队的可用容量低于或高于10%的游戏服务器会话时，执行扩缩容动作。
GSE按照策略期望，扩容新CVM实例或缩容未使用的实例，保持在10%左右的缓冲区。

#### 请求参数取值说明

```
Name取值策略名称，
FleetId取值为选择的服务器舰队ID，
PolicyType取值TargetBased，
MetricName取值PercentAvailableGameSessions，
TargetConfiguration取值为所需的缓冲区值对象，
其他参数不用传递。
请求成功时，将返回策略名称。扩缩容策略在成功创建立即自动生效。
```



## RuleBased基于规则的策略

####  请求参数取值说明

```
Name取值策略名称，
FleetId取值为选择的服务器舰队ID，
PolicyType取值RuleBased，
MetricName取值（AvailableGameServerSessions，AvailableCustomCount，PercentAvailableCustomCount，ActiveInstances，IdleInstances，CurrentPlayerSessions和PercentIdleInstances）说明见备注1，
其他参数不用传递。
ComparisonOperator取值为 >,>=,<,<=这4个比较符号中的一个，
Threshold取值为指标MetricName达到的阈值是多少，
EvaluationPeriods取值为指标MetricName达到的阈值持续了多少时间，单位是分钟，
ScalingAdjustmentType取值（ChangeInCapacity，ExactCapacity，PercentChangeInCapacity）说明见备注2
ScalingAdjustment取值为指标MetricName达到的阈值的条件后，扩缩容多少个CVM实例。
请求成功时，将返回策略名称。扩缩容策略在成功创建立即自动生效。
```

规则执行的条件表达式如下所示：

```
若 [MetricName] 是 [ComparisonOperator] [Threshold] 持续 [EvaluationPeriods] 分钟, 则 [ScalingAdjustmentType] 调整 [ScalingAdjustment]个实例。
```
```
if [MetricName] ComparisonOperator [Threshold] for [EvaluationPeriods] minutes, then scaling up by/to  [ScalingAdjustment]
```
例如1：如果当前AvailableCustomCount值大于等于10，持续5分钟，扩容1台CVM实例。
```
ScalingAdjustmentType = ChangeInCapacity
if [AvailableGameServerSessions] >= [10] for [5] minutes, then scaling up [1]
```
例如2：如果当前AvailableGameServerSessions值大于等于200，持续5分钟，扩容到2台CVM实例。
```
ScalingAdjustmentType = ExactCapacity
if [AvailableGameServerSessions] >= [200] for [5] minutes, then scaling to [2]
```
例如3：如果当前AvailableCustomCount值大于等于400，持续5分钟，扩容20%台CVM实例。
当前CVM实例数为10台。扩容20%台CVM实例就是增加 10*20%等于2台
```
ScalingAdjustmentType = PercentChangeInCapacity
if [AvailableGameServerSessions] >= [400] for [5] minutes, then scaling by [currentCVMCount * 20 %]
```
**备注1**

- | 策略名称（MetricName）                                       | 计算公式                                   | 场景                                        | 场景使用举例                                                 |
  | :----------------------------------------------------------- | :----------------------------------------- | :------------------------------------------ | :----------------------------------------------------------- |
  | CurrentPlayerSessions<br>当前玩家数指标                      | = 当前在线的玩家数                         | CVM随着玩家会话数变化做扩缩容。             | 例如：<br>MetricName: CurrentPlayerSessions<br>ComparisonOperator: '<=' <br>Threshold: 300<br/>EvaluationPeriods: 1<br/>ScalingAdjustment: 2<br/>ScalingAdjustment: ChangeInCapacity<br>说明：若当前CurrentPlayerSessions小于等于300，持续1分钟，则扩容2台CVM。 |
  | AvailableGameServerSessions<br>可用游戏服务器会话数          | = 可用游戏服务会话数                       | CVM随着可用游戏会话数变化做扩缩容。         | 例如：<br/>MetricName: AvailableGameServerSessions<br/>ComparisonOperator: '<' <br/>Threshold: 50<br/>EvaluationPeriods: 5<br/>ScalingAdjustment: 2<br/>ScalingAdjustment: ExactCapacity<br/>说明：若当前AvailableGameServerSessions小于50，持续5分钟，则扩容到2台CVM。 |
  | PercentAvailableGameServerSessions<br>可用游戏服务器会话百分比 | = 空闲游戏会话数 / 所有的游戏会话数 * 100% | CVM随着可用游戏会话数百分比变化做扩缩容。   | 例如：<br/>MetricName: PercentAvailableGameServerSessions<br/>ComparisonOperator: '<' <br/>Threshold: 50<br/>EvaluationPeriods: 1<br/>ScalingAdjustment: -30<br/>ScalingAdjustment: PercentChangeInCapacity<br/>说明：若当前PercentAvailableGameServerSessions小于50%，持续1分钟，则缩容当前实例数30%台CVM。 |
  | AvailableCustomCount<br>可用客户自定义数指标                 | = 客户自定义的数                           | CVM随着可用客户自定义数变化做扩缩容。       | 例如：<br/>MetricName: AvailableCustomCount<br/>ComparisonOperator: '>=' <br/>Threshold: 6<br/>EvaluationPeriods: 3<br/>ScalingAdjustment: -1<br/>ScalingAdjustment: ExactCapacity<br/>说明：若当前AvailableCustomCount大于等于6，持续3分钟，则缩容到1台CVM。 |
  | PercentAvailableCustomCount<br>可用客户自定义数百分比        | = 客户自定义数 / 客户最大自定义数* 100%    | CVM随着可用客户自定义数百分比变化做扩缩容。 | 例如：<br/>MetricName: PercentAvailableCustomCount<br/>ComparisonOperator: '<' <br/>Threshold: 15<br/>EvaluationPeriods: 3<br/>ScalingAdjustment: 1<br/>ScalingAdjustment: ChangeInCapacity<br/>说明：若当前PercentAvailableCustomCount小于15%，持续3分钟，则扩容1台CVM。 |
  | ActiveInstances<br>活跃实例数指标                            | = 总实例数 - 缩容中的实例数                | CVM随着活跃实例数变化做扩缩容。             | 例如：<br/>MetricName: ActiveInstances<br/>ComparisonOperator: '<' <br/>Threshold: 3<br/>EvaluationPeriods: 1<br/>ScalingAdjustment: 3<br/>ScalingAdjustment: ExactCapacity<br/>说明：若当前ActiveInstances小于3台，持续1分钟，则扩容保留到3台CVM。 |
  | IdleInstances<br>空闲实例数指标                              | = 未使用的进程数 / 每实例进程数            | CVM随着空闲实例数变化做扩缩容。             | 例如：<br/>MetricName: IdleInstances<br/>ComparisonOperator: '<' <br/>Threshold: 2<br/>EvaluationPeriods: 3<br/>ScalingAdjustment: 1<br/>ScalingAdjustment: ChangeInCapacity<br/>说明：若当前IdleInstances小于2台，持续3分钟，则扩容1台CVM。 |
  | PercentIdleInstances<br>空闲实例百分比                       | = IdleInstances / ActiveInstances * 100%   | CVM随着空闲实例百分比变化做扩缩容。         | 例如：<br/>MetricName: PercentIdleInstances<br/>ComparisonOperator: '<' <br/>Threshold: 50<br/>EvaluationPeriods: 3<br/>ScalingAdjustment: 1<br/>ScalingAdjustment: ChangeInCapacity<br/>说明：若当前PercentIdleInstances小于50%，持续3分钟，则扩容1台CVM。 |



**备注2**

**ChangeInCapacity**

    当前CVM实例个数的扩容或缩容的调整值。正值按值扩容，负值按值缩容。

**ExactCapacity**

    把当前CVM实例个数调整为ScalingAdjustment设置的CVM实例数。

**PercentChangeInCapacity**

    按比例增加或减少的百分比。正值按比例扩容，负值按比例缩容；例如，值“-10”将按10%的比例缩容CVM实例。
                 * @param req PutScalingPolicyRequest
                 * @return PutScalingPolicyOutcome
                 */
                PutScalingPolicyOutcome PutScalingPolicy(const Model::PutScalingPolicyRequest &request);
                void PutScalingPolicyAsync(const Model::PutScalingPolicyRequest& request, const PutScalingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PutScalingPolicyOutcomeCallable PutScalingPolicyCallable(const Model::PutScalingPolicyRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（PutTimerScalingPolicy）用于给fleet创建或更新定时器。

填写字段timer_id，表示更新；不填字段timer_id表示新增。

                 * @param req PutTimerScalingPolicyRequest
                 * @return PutTimerScalingPolicyOutcome
                 */
                PutTimerScalingPolicyOutcome PutTimerScalingPolicy(const Model::PutTimerScalingPolicyRequest &request);
                void PutTimerScalingPolicyAsync(const Model::PutTimerScalingPolicyRequest& request, const PutTimerScalingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PutTimerScalingPolicyOutcomeCallable PutTimerScalingPolicyCallable(const Model::PutTimerScalingPolicyRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（ResolveAlias）用于获取别名当前指向的fleetId。
                 * @param req ResolveAliasRequest
                 * @return ResolveAliasOutcome
                 */
                ResolveAliasOutcome ResolveAlias(const Model::ResolveAliasRequest &request);
                void ResolveAliasAsync(const Model::ResolveAliasRequest& request, const ResolveAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResolveAliasOutcomeCallable ResolveAliasCallable(const Model::ResolveAliasRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（SearchGameServerSessions）用于搜索游戏服务器会话列表。
                 * @param req SearchGameServerSessionsRequest
                 * @return SearchGameServerSessionsOutcome
                 */
                SearchGameServerSessionsOutcome SearchGameServerSessions(const Model::SearchGameServerSessionsRequest &request);
                void SearchGameServerSessionsAsync(const Model::SearchGameServerSessionsRequest& request, const SearchGameServerSessionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchGameServerSessionsOutcomeCallable SearchGameServerSessionsCallable(const Model::SearchGameServerSessionsRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（SetServerReserved）用于将异常的实例标记为保留，用于问题排查。

字段ReserveValue：0默认值，不保留；1 保留

                 * @param req SetServerReservedRequest
                 * @return SetServerReservedOutcome
                 */
                SetServerReservedOutcome SetServerReserved(const Model::SetServerReservedRequest &request);
                void SetServerReservedAsync(const Model::SetServerReservedRequest& request, const SetServerReservedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetServerReservedOutcomeCallable SetServerReservedCallable(const Model::SetServerReservedRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（SetServerWeight）用于设置服务器权重。
                 * @param req SetServerWeightRequest
                 * @return SetServerWeightOutcome
                 */
                SetServerWeightOutcome SetServerWeight(const Model::SetServerWeightRequest &request);
                void SetServerWeightAsync(const Model::SetServerWeightRequest& request, const SetServerWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetServerWeightOutcomeCallable SetServerWeightCallable(const Model::SetServerWeightRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（StartFleetActions）用于启用服务器舰队自动扩缩容。
                 * @param req StartFleetActionsRequest
                 * @return StartFleetActionsOutcome
                 */
                StartFleetActionsOutcome StartFleetActions(const Model::StartFleetActionsRequest &request);
                void StartFleetActionsAsync(const Model::StartFleetActionsRequest& request, const StartFleetActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartFleetActionsOutcomeCallable StartFleetActionsCallable(const Model::StartFleetActionsRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（StartGameServerSessionPlacement）用于开始放置游戏服务器会话。
                 * @param req StartGameServerSessionPlacementRequest
                 * @return StartGameServerSessionPlacementOutcome
                 */
                StartGameServerSessionPlacementOutcome StartGameServerSessionPlacement(const Model::StartGameServerSessionPlacementRequest &request);
                void StartGameServerSessionPlacementAsync(const Model::StartGameServerSessionPlacementRequest& request, const StartGameServerSessionPlacementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartGameServerSessionPlacementOutcomeCallable StartGameServerSessionPlacementCallable(const Model::StartGameServerSessionPlacementRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（StopFleetActions）用于停止服务器舰队自动扩缩容，改为手动扩缩容。
                 * @param req StopFleetActionsRequest
                 * @return StopFleetActionsOutcome
                 */
                StopFleetActionsOutcome StopFleetActions(const Model::StopFleetActionsRequest &request);
                void StopFleetActionsAsync(const Model::StopFleetActionsRequest& request, const StopFleetActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopFleetActionsOutcomeCallable StopFleetActionsCallable(const Model::StopFleetActionsRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（StopGameServerSessionPlacement）用于停止放置游戏服务器会话。
                 * @param req StopGameServerSessionPlacementRequest
                 * @return StopGameServerSessionPlacementOutcome
                 */
                StopGameServerSessionPlacementOutcome StopGameServerSessionPlacement(const Model::StopGameServerSessionPlacementRequest &request);
                void StopGameServerSessionPlacementAsync(const Model::StopGameServerSessionPlacementRequest& request, const StopGameServerSessionPlacementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopGameServerSessionPlacementOutcomeCallable StopGameServerSessionPlacementCallable(const Model::StopGameServerSessionPlacementRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（UpdateAlias）用于更新别名的属性。
                 * @param req UpdateAliasRequest
                 * @return UpdateAliasOutcome
                 */
                UpdateAliasOutcome UpdateAlias(const Model::UpdateAliasRequest &request);
                void UpdateAliasAsync(const Model::UpdateAliasRequest& request, const UpdateAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAliasOutcomeCallable UpdateAliasCallable(const Model::UpdateAliasRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（UpdateAsset）用于修改生成包信息。
                 * @param req UpdateAssetRequest
                 * @return UpdateAssetOutcome
                 */
                UpdateAssetOutcome UpdateAsset(const Model::UpdateAssetRequest &request);
                void UpdateAssetAsync(const Model::UpdateAssetRequest& request, const UpdateAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAssetOutcomeCallable UpdateAssetCallable(const Model::UpdateAssetRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（UpdateBucketAccelerateOpt）用于开启cos全球加速。
                 * @param req UpdateBucketAccelerateOptRequest
                 * @return UpdateBucketAccelerateOptOutcome
                 */
                UpdateBucketAccelerateOptOutcome UpdateBucketAccelerateOpt(const Model::UpdateBucketAccelerateOptRequest &request);
                void UpdateBucketAccelerateOptAsync(const Model::UpdateBucketAccelerateOptRequest& request, const UpdateBucketAccelerateOptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateBucketAccelerateOptOutcomeCallable UpdateBucketAccelerateOptCallable(const Model::UpdateBucketAccelerateOptRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（UpdateBucketCORSOpt）用于设置cos跨域访问。
                 * @param req UpdateBucketCORSOptRequest
                 * @return UpdateBucketCORSOptOutcome
                 */
                UpdateBucketCORSOptOutcome UpdateBucketCORSOpt(const Model::UpdateBucketCORSOptRequest &request);
                void UpdateBucketCORSOptAsync(const Model::UpdateBucketCORSOptRequest& request, const UpdateBucketCORSOptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateBucketCORSOptOutcomeCallable UpdateBucketCORSOptCallable(const Model::UpdateBucketCORSOptRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（UpdateFleetAttributes）用于更新服务器舰队属性。
                 * @param req UpdateFleetAttributesRequest
                 * @return UpdateFleetAttributesOutcome
                 */
                UpdateFleetAttributesOutcome UpdateFleetAttributes(const Model::UpdateFleetAttributesRequest &request);
                void UpdateFleetAttributesAsync(const Model::UpdateFleetAttributesRequest& request, const UpdateFleetAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateFleetAttributesOutcomeCallable UpdateFleetAttributesCallable(const Model::UpdateFleetAttributesRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（UpdateFleetCapacity）用于更新服务器舰队容量配置。
                 * @param req UpdateFleetCapacityRequest
                 * @return UpdateFleetCapacityOutcome
                 */
                UpdateFleetCapacityOutcome UpdateFleetCapacity(const Model::UpdateFleetCapacityRequest &request);
                void UpdateFleetCapacityAsync(const Model::UpdateFleetCapacityRequest& request, const UpdateFleetCapacityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateFleetCapacityOutcomeCallable UpdateFleetCapacityCallable(const Model::UpdateFleetCapacityRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（UpdateFleetName）用于更新服务器舰队名称。
                 * @param req UpdateFleetNameRequest
                 * @return UpdateFleetNameOutcome
                 */
                UpdateFleetNameOutcome UpdateFleetName(const Model::UpdateFleetNameRequest &request);
                void UpdateFleetNameAsync(const Model::UpdateFleetNameRequest& request, const UpdateFleetNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateFleetNameOutcomeCallable UpdateFleetNameCallable(const Model::UpdateFleetNameRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（UpdateFleetPortSettings）用于更新服务器舰队安全组。
                 * @param req UpdateFleetPortSettingsRequest
                 * @return UpdateFleetPortSettingsOutcome
                 */
                UpdateFleetPortSettingsOutcome UpdateFleetPortSettings(const Model::UpdateFleetPortSettingsRequest &request);
                void UpdateFleetPortSettingsAsync(const Model::UpdateFleetPortSettingsRequest& request, const UpdateFleetPortSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateFleetPortSettingsOutcomeCallable UpdateFleetPortSettingsCallable(const Model::UpdateFleetPortSettingsRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（UpdateGameServerSession）用于更新游戏服务器会话。
                 * @param req UpdateGameServerSessionRequest
                 * @return UpdateGameServerSessionOutcome
                 */
                UpdateGameServerSessionOutcome UpdateGameServerSession(const Model::UpdateGameServerSessionRequest &request);
                void UpdateGameServerSessionAsync(const Model::UpdateGameServerSessionRequest& request, const UpdateGameServerSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateGameServerSessionOutcomeCallable UpdateGameServerSessionCallable(const Model::UpdateGameServerSessionRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（UpdateGameServerSessionQueue）用于修改游戏服务器会话队列。
                 * @param req UpdateGameServerSessionQueueRequest
                 * @return UpdateGameServerSessionQueueOutcome
                 */
                UpdateGameServerSessionQueueOutcome UpdateGameServerSessionQueue(const Model::UpdateGameServerSessionQueueRequest &request);
                void UpdateGameServerSessionQueueAsync(const Model::UpdateGameServerSessionQueueRequest& request, const UpdateGameServerSessionQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateGameServerSessionQueueOutcomeCallable UpdateGameServerSessionQueueCallable(const Model::UpdateGameServerSessionQueueRequest& request);

                /**
                 *此接口无法使用，游戏服务器引擎GSE已于6.1正式下架，感谢您的支持

本接口（UpdateRuntimeConfiguration）用于更新服务器舰队配置。
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
