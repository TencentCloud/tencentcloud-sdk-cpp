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

#ifndef TENCENTCLOUD_IECP_V20210914_IECPCLIENT_H_
#define TENCENTCLOUD_IECP_V20210914_IECPCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/iecp/v20210914/model/BuildMessageRouteRequest.h>
#include <tencentcloud/iecp/v20210914/model/BuildMessageRouteResponse.h>
#include <tencentcloud/iecp/v20210914/model/CreateConfigMapRequest.h>
#include <tencentcloud/iecp/v20210914/model/CreateConfigMapResponse.h>
#include <tencentcloud/iecp/v20210914/model/CreateEdgeNodeRequest.h>
#include <tencentcloud/iecp/v20210914/model/CreateEdgeNodeResponse.h>
#include <tencentcloud/iecp/v20210914/model/CreateEdgeNodeBatchRequest.h>
#include <tencentcloud/iecp/v20210914/model/CreateEdgeNodeBatchResponse.h>
#include <tencentcloud/iecp/v20210914/model/CreateEdgeNodeGroupRequest.h>
#include <tencentcloud/iecp/v20210914/model/CreateEdgeNodeGroupResponse.h>
#include <tencentcloud/iecp/v20210914/model/CreateEdgeNodeUnitTemplateRequest.h>
#include <tencentcloud/iecp/v20210914/model/CreateEdgeNodeUnitTemplateResponse.h>
#include <tencentcloud/iecp/v20210914/model/CreateEdgeUnitCloudRequest.h>
#include <tencentcloud/iecp/v20210914/model/CreateEdgeUnitCloudResponse.h>
#include <tencentcloud/iecp/v20210914/model/CreateEdgeUnitDevicesRequest.h>
#include <tencentcloud/iecp/v20210914/model/CreateEdgeUnitDevicesResponse.h>
#include <tencentcloud/iecp/v20210914/model/CreateIotDeviceRequest.h>
#include <tencentcloud/iecp/v20210914/model/CreateIotDeviceResponse.h>
#include <tencentcloud/iecp/v20210914/model/CreateMessageRouteRequest.h>
#include <tencentcloud/iecp/v20210914/model/CreateMessageRouteResponse.h>
#include <tencentcloud/iecp/v20210914/model/CreateNamespaceRequest.h>
#include <tencentcloud/iecp/v20210914/model/CreateNamespaceResponse.h>
#include <tencentcloud/iecp/v20210914/model/CreateSecretRequest.h>
#include <tencentcloud/iecp/v20210914/model/CreateSecretResponse.h>
#include <tencentcloud/iecp/v20210914/model/CreateUpdateNodeUnitRequest.h>
#include <tencentcloud/iecp/v20210914/model/CreateUpdateNodeUnitResponse.h>
#include <tencentcloud/iecp/v20210914/model/CreateUserTokenRequest.h>
#include <tencentcloud/iecp/v20210914/model/CreateUserTokenResponse.h>
#include <tencentcloud/iecp/v20210914/model/DeleteConfigMapRequest.h>
#include <tencentcloud/iecp/v20210914/model/DeleteConfigMapResponse.h>
#include <tencentcloud/iecp/v20210914/model/DeleteEdgeNodeGroupRequest.h>
#include <tencentcloud/iecp/v20210914/model/DeleteEdgeNodeGroupResponse.h>
#include <tencentcloud/iecp/v20210914/model/DeleteEdgeNodeUnitTemplatesRequest.h>
#include <tencentcloud/iecp/v20210914/model/DeleteEdgeNodeUnitTemplatesResponse.h>
#include <tencentcloud/iecp/v20210914/model/DeleteEdgeNodesRequest.h>
#include <tencentcloud/iecp/v20210914/model/DeleteEdgeNodesResponse.h>
#include <tencentcloud/iecp/v20210914/model/DeleteEdgeUnitCloudRequest.h>
#include <tencentcloud/iecp/v20210914/model/DeleteEdgeUnitCloudResponse.h>
#include <tencentcloud/iecp/v20210914/model/DeleteEdgeUnitDeployGridItemRequest.h>
#include <tencentcloud/iecp/v20210914/model/DeleteEdgeUnitDeployGridItemResponse.h>
#include <tencentcloud/iecp/v20210914/model/DeleteEdgeUnitDevicesRequest.h>
#include <tencentcloud/iecp/v20210914/model/DeleteEdgeUnitDevicesResponse.h>
#include <tencentcloud/iecp/v20210914/model/DeleteEdgeUnitPodRequest.h>
#include <tencentcloud/iecp/v20210914/model/DeleteEdgeUnitPodResponse.h>
#include <tencentcloud/iecp/v20210914/model/DeleteIotDeviceRequest.h>
#include <tencentcloud/iecp/v20210914/model/DeleteIotDeviceResponse.h>
#include <tencentcloud/iecp/v20210914/model/DeleteIotDeviceBatchRequest.h>
#include <tencentcloud/iecp/v20210914/model/DeleteIotDeviceBatchResponse.h>
#include <tencentcloud/iecp/v20210914/model/DeleteMessageRouteRequest.h>
#include <tencentcloud/iecp/v20210914/model/DeleteMessageRouteResponse.h>
#include <tencentcloud/iecp/v20210914/model/DeleteNamespaceRequest.h>
#include <tencentcloud/iecp/v20210914/model/DeleteNamespaceResponse.h>
#include <tencentcloud/iecp/v20210914/model/DeleteNodeUnitRequest.h>
#include <tencentcloud/iecp/v20210914/model/DeleteNodeUnitResponse.h>
#include <tencentcloud/iecp/v20210914/model/DeleteSecretRequest.h>
#include <tencentcloud/iecp/v20210914/model/DeleteSecretResponse.h>
#include <tencentcloud/iecp/v20210914/model/DescribeConfigMapRequest.h>
#include <tencentcloud/iecp/v20210914/model/DescribeConfigMapResponse.h>
#include <tencentcloud/iecp/v20210914/model/DescribeConfigMapYamlErrorRequest.h>
#include <tencentcloud/iecp/v20210914/model/DescribeConfigMapYamlErrorResponse.h>
#include <tencentcloud/iecp/v20210914/model/DescribeConfigMapsRequest.h>
#include <tencentcloud/iecp/v20210914/model/DescribeConfigMapsResponse.h>
#include <tencentcloud/iecp/v20210914/model/DescribeDracoEdgeNodeInstallerRequest.h>
#include <tencentcloud/iecp/v20210914/model/DescribeDracoEdgeNodeInstallerResponse.h>
#include <tencentcloud/iecp/v20210914/model/DescribeEdgeAgentNodeInstallerRequest.h>
#include <tencentcloud/iecp/v20210914/model/DescribeEdgeAgentNodeInstallerResponse.h>
#include <tencentcloud/iecp/v20210914/model/DescribeEdgeDefaultVpcRequest.h>
#include <tencentcloud/iecp/v20210914/model/DescribeEdgeDefaultVpcResponse.h>
#include <tencentcloud/iecp/v20210914/model/DescribeEdgeNodeRequest.h>
#include <tencentcloud/iecp/v20210914/model/DescribeEdgeNodeResponse.h>
#include <tencentcloud/iecp/v20210914/model/DescribeEdgeNodePodContainersRequest.h>
#include <tencentcloud/iecp/v20210914/model/DescribeEdgeNodePodContainersResponse.h>
#include <tencentcloud/iecp/v20210914/model/DescribeEdgeNodePodsRequest.h>
#include <tencentcloud/iecp/v20210914/model/DescribeEdgeNodePodsResponse.h>
#include <tencentcloud/iecp/v20210914/model/DescribeEdgeNodeRemarkListRequest.h>
#include <tencentcloud/iecp/v20210914/model/DescribeEdgeNodeRemarkListResponse.h>
#include <tencentcloud/iecp/v20210914/model/DescribeEdgeNodesRequest.h>
#include <tencentcloud/iecp/v20210914/model/DescribeEdgeNodesResponse.h>
#include <tencentcloud/iecp/v20210914/model/DescribeEdgeOperationLogsRequest.h>
#include <tencentcloud/iecp/v20210914/model/DescribeEdgeOperationLogsResponse.h>
#include <tencentcloud/iecp/v20210914/model/DescribeEdgePodRequest.h>
#include <tencentcloud/iecp/v20210914/model/DescribeEdgePodResponse.h>
#include <tencentcloud/iecp/v20210914/model/DescribeEdgeSnNodesRequest.h>
#include <tencentcloud/iecp/v20210914/model/DescribeEdgeSnNodesResponse.h>
#include <tencentcloud/iecp/v20210914/model/DescribeEdgeUnitApplicationsRequest.h>
#include <tencentcloud/iecp/v20210914/model/DescribeEdgeUnitApplicationsResponse.h>
#include <tencentcloud/iecp/v20210914/model/DescribeEdgeUnitDeployGridRequest.h>
#include <tencentcloud/iecp/v20210914/model/DescribeEdgeUnitDeployGridResponse.h>
#include <tencentcloud/iecp/v20210914/model/DescribeEdgeUnitDeployGridItemRequest.h>
#include <tencentcloud/iecp/v20210914/model/DescribeEdgeUnitDeployGridItemResponse.h>
#include <tencentcloud/iecp/v20210914/model/DescribeEdgeUnitDeployGridItemYamlRequest.h>
#include <tencentcloud/iecp/v20210914/model/DescribeEdgeUnitDeployGridItemYamlResponse.h>
#include <tencentcloud/iecp/v20210914/model/DescribeEdgeUnitExtraRequest.h>
#include <tencentcloud/iecp/v20210914/model/DescribeEdgeUnitExtraResponse.h>
#include <tencentcloud/iecp/v20210914/model/DescribeEdgeUnitGridEventsRequest.h>
#include <tencentcloud/iecp/v20210914/model/DescribeEdgeUnitGridEventsResponse.h>
#include <tencentcloud/iecp/v20210914/model/DescribeEdgeUnitGridPodsRequest.h>
#include <tencentcloud/iecp/v20210914/model/DescribeEdgeUnitGridPodsResponse.h>
#include <tencentcloud/iecp/v20210914/model/DescribeEdgeUnitMonitorStatusRequest.h>
#include <tencentcloud/iecp/v20210914/model/DescribeEdgeUnitMonitorStatusResponse.h>
#include <tencentcloud/iecp/v20210914/model/DescribeEdgeUnitNodeGroupRequest.h>
#include <tencentcloud/iecp/v20210914/model/DescribeEdgeUnitNodeGroupResponse.h>
#include <tencentcloud/iecp/v20210914/model/DescribeEdgeUnitNodeUnitTemplatesRequest.h>
#include <tencentcloud/iecp/v20210914/model/DescribeEdgeUnitNodeUnitTemplatesResponse.h>
#include <tencentcloud/iecp/v20210914/model/DescribeEdgeUnitsCloudRequest.h>
#include <tencentcloud/iecp/v20210914/model/DescribeEdgeUnitsCloudResponse.h>
#include <tencentcloud/iecp/v20210914/model/DescribeIotDeviceRequest.h>
#include <tencentcloud/iecp/v20210914/model/DescribeIotDeviceResponse.h>
#include <tencentcloud/iecp/v20210914/model/DescribeIotDevicesRequest.h>
#include <tencentcloud/iecp/v20210914/model/DescribeIotDevicesResponse.h>
#include <tencentcloud/iecp/v20210914/model/DescribeMessageRouteListRequest.h>
#include <tencentcloud/iecp/v20210914/model/DescribeMessageRouteListResponse.h>
#include <tencentcloud/iecp/v20210914/model/DescribeMonitorMetricsRequest.h>
#include <tencentcloud/iecp/v20210914/model/DescribeMonitorMetricsResponse.h>
#include <tencentcloud/iecp/v20210914/model/DescribeNamespaceRequest.h>
#include <tencentcloud/iecp/v20210914/model/DescribeNamespaceResponse.h>
#include <tencentcloud/iecp/v20210914/model/DescribeNamespaceResourcesRequest.h>
#include <tencentcloud/iecp/v20210914/model/DescribeNamespaceResourcesResponse.h>
#include <tencentcloud/iecp/v20210914/model/DescribeNamespacesRequest.h>
#include <tencentcloud/iecp/v20210914/model/DescribeNamespacesResponse.h>
#include <tencentcloud/iecp/v20210914/model/DescribeNodeUnitRequest.h>
#include <tencentcloud/iecp/v20210914/model/DescribeNodeUnitResponse.h>
#include <tencentcloud/iecp/v20210914/model/DescribeNodeUnitTemplateOnNodeGroupRequest.h>
#include <tencentcloud/iecp/v20210914/model/DescribeNodeUnitTemplateOnNodeGroupResponse.h>
#include <tencentcloud/iecp/v20210914/model/DescribeSecretRequest.h>
#include <tencentcloud/iecp/v20210914/model/DescribeSecretResponse.h>
#include <tencentcloud/iecp/v20210914/model/DescribeSecretYamlErrorRequest.h>
#include <tencentcloud/iecp/v20210914/model/DescribeSecretYamlErrorResponse.h>
#include <tencentcloud/iecp/v20210914/model/DescribeSecretsRequest.h>
#include <tencentcloud/iecp/v20210914/model/DescribeSecretsResponse.h>
#include <tencentcloud/iecp/v20210914/model/DescribeYeheResourceLimitRequest.h>
#include <tencentcloud/iecp/v20210914/model/DescribeYeheResourceLimitResponse.h>
#include <tencentcloud/iecp/v20210914/model/GetMarketComponentRequest.h>
#include <tencentcloud/iecp/v20210914/model/GetMarketComponentResponse.h>
#include <tencentcloud/iecp/v20210914/model/GetMarketComponentListRequest.h>
#include <tencentcloud/iecp/v20210914/model/GetMarketComponentListResponse.h>
#include <tencentcloud/iecp/v20210914/model/ModifyConfigMapRequest.h>
#include <tencentcloud/iecp/v20210914/model/ModifyConfigMapResponse.h>
#include <tencentcloud/iecp/v20210914/model/ModifyEdgeDracoNodeRequest.h>
#include <tencentcloud/iecp/v20210914/model/ModifyEdgeDracoNodeResponse.h>
#include <tencentcloud/iecp/v20210914/model/ModifyEdgeNodeLabelsRequest.h>
#include <tencentcloud/iecp/v20210914/model/ModifyEdgeNodeLabelsResponse.h>
#include <tencentcloud/iecp/v20210914/model/ModifyEdgeUnitRequest.h>
#include <tencentcloud/iecp/v20210914/model/ModifyEdgeUnitResponse.h>
#include <tencentcloud/iecp/v20210914/model/ModifyEdgeUnitApplicationBasicInfoRequest.h>
#include <tencentcloud/iecp/v20210914/model/ModifyEdgeUnitApplicationBasicInfoResponse.h>
#include <tencentcloud/iecp/v20210914/model/ModifyEdgeUnitApplicationVisualizationRequest.h>
#include <tencentcloud/iecp/v20210914/model/ModifyEdgeUnitApplicationVisualizationResponse.h>
#include <tencentcloud/iecp/v20210914/model/ModifyEdgeUnitApplicationYamlRequest.h>
#include <tencentcloud/iecp/v20210914/model/ModifyEdgeUnitApplicationYamlResponse.h>
#include <tencentcloud/iecp/v20210914/model/ModifyEdgeUnitCloudApiRequest.h>
#include <tencentcloud/iecp/v20210914/model/ModifyEdgeUnitCloudApiResponse.h>
#include <tencentcloud/iecp/v20210914/model/ModifyEdgeUnitDeployGridItemRequest.h>
#include <tencentcloud/iecp/v20210914/model/ModifyEdgeUnitDeployGridItemResponse.h>
#include <tencentcloud/iecp/v20210914/model/ModifyIotDeviceRequest.h>
#include <tencentcloud/iecp/v20210914/model/ModifyIotDeviceResponse.h>
#include <tencentcloud/iecp/v20210914/model/ModifyNodeUnitTemplateRequest.h>
#include <tencentcloud/iecp/v20210914/model/ModifyNodeUnitTemplateResponse.h>
#include <tencentcloud/iecp/v20210914/model/ModifySecretRequest.h>
#include <tencentcloud/iecp/v20210914/model/ModifySecretResponse.h>
#include <tencentcloud/iecp/v20210914/model/RedeployEdgeUnitApplicationRequest.h>
#include <tencentcloud/iecp/v20210914/model/RedeployEdgeUnitApplicationResponse.h>
#include <tencentcloud/iecp/v20210914/model/SetRouteOnOffRequest.h>
#include <tencentcloud/iecp/v20210914/model/SetRouteOnOffResponse.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            class IecpClient : public AbstractClient
            {
            public:
                IecpClient(const Credential &credential, const std::string &region);
                IecpClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::BuildMessageRouteResponse> BuildMessageRouteOutcome;
                typedef std::future<BuildMessageRouteOutcome> BuildMessageRouteOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::BuildMessageRouteRequest&, BuildMessageRouteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BuildMessageRouteAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateConfigMapResponse> CreateConfigMapOutcome;
                typedef std::future<CreateConfigMapOutcome> CreateConfigMapOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::CreateConfigMapRequest&, CreateConfigMapOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateConfigMapAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEdgeNodeResponse> CreateEdgeNodeOutcome;
                typedef std::future<CreateEdgeNodeOutcome> CreateEdgeNodeOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::CreateEdgeNodeRequest&, CreateEdgeNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEdgeNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEdgeNodeBatchResponse> CreateEdgeNodeBatchOutcome;
                typedef std::future<CreateEdgeNodeBatchOutcome> CreateEdgeNodeBatchOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::CreateEdgeNodeBatchRequest&, CreateEdgeNodeBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEdgeNodeBatchAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEdgeNodeGroupResponse> CreateEdgeNodeGroupOutcome;
                typedef std::future<CreateEdgeNodeGroupOutcome> CreateEdgeNodeGroupOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::CreateEdgeNodeGroupRequest&, CreateEdgeNodeGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEdgeNodeGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEdgeNodeUnitTemplateResponse> CreateEdgeNodeUnitTemplateOutcome;
                typedef std::future<CreateEdgeNodeUnitTemplateOutcome> CreateEdgeNodeUnitTemplateOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::CreateEdgeNodeUnitTemplateRequest&, CreateEdgeNodeUnitTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEdgeNodeUnitTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEdgeUnitCloudResponse> CreateEdgeUnitCloudOutcome;
                typedef std::future<CreateEdgeUnitCloudOutcome> CreateEdgeUnitCloudOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::CreateEdgeUnitCloudRequest&, CreateEdgeUnitCloudOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEdgeUnitCloudAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEdgeUnitDevicesResponse> CreateEdgeUnitDevicesOutcome;
                typedef std::future<CreateEdgeUnitDevicesOutcome> CreateEdgeUnitDevicesOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::CreateEdgeUnitDevicesRequest&, CreateEdgeUnitDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEdgeUnitDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateIotDeviceResponse> CreateIotDeviceOutcome;
                typedef std::future<CreateIotDeviceOutcome> CreateIotDeviceOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::CreateIotDeviceRequest&, CreateIotDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIotDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMessageRouteResponse> CreateMessageRouteOutcome;
                typedef std::future<CreateMessageRouteOutcome> CreateMessageRouteOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::CreateMessageRouteRequest&, CreateMessageRouteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMessageRouteAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNamespaceResponse> CreateNamespaceOutcome;
                typedef std::future<CreateNamespaceOutcome> CreateNamespaceOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::CreateNamespaceRequest&, CreateNamespaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNamespaceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSecretResponse> CreateSecretOutcome;
                typedef std::future<CreateSecretOutcome> CreateSecretOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::CreateSecretRequest&, CreateSecretOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecretAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUpdateNodeUnitResponse> CreateUpdateNodeUnitOutcome;
                typedef std::future<CreateUpdateNodeUnitOutcome> CreateUpdateNodeUnitOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::CreateUpdateNodeUnitRequest&, CreateUpdateNodeUnitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUpdateNodeUnitAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUserTokenResponse> CreateUserTokenOutcome;
                typedef std::future<CreateUserTokenOutcome> CreateUserTokenOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::CreateUserTokenRequest&, CreateUserTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteConfigMapResponse> DeleteConfigMapOutcome;
                typedef std::future<DeleteConfigMapOutcome> DeleteConfigMapOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DeleteConfigMapRequest&, DeleteConfigMapOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConfigMapAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteEdgeNodeGroupResponse> DeleteEdgeNodeGroupOutcome;
                typedef std::future<DeleteEdgeNodeGroupOutcome> DeleteEdgeNodeGroupOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DeleteEdgeNodeGroupRequest&, DeleteEdgeNodeGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEdgeNodeGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteEdgeNodeUnitTemplatesResponse> DeleteEdgeNodeUnitTemplatesOutcome;
                typedef std::future<DeleteEdgeNodeUnitTemplatesOutcome> DeleteEdgeNodeUnitTemplatesOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DeleteEdgeNodeUnitTemplatesRequest&, DeleteEdgeNodeUnitTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEdgeNodeUnitTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteEdgeNodesResponse> DeleteEdgeNodesOutcome;
                typedef std::future<DeleteEdgeNodesOutcome> DeleteEdgeNodesOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DeleteEdgeNodesRequest&, DeleteEdgeNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEdgeNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteEdgeUnitCloudResponse> DeleteEdgeUnitCloudOutcome;
                typedef std::future<DeleteEdgeUnitCloudOutcome> DeleteEdgeUnitCloudOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DeleteEdgeUnitCloudRequest&, DeleteEdgeUnitCloudOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEdgeUnitCloudAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteEdgeUnitDeployGridItemResponse> DeleteEdgeUnitDeployGridItemOutcome;
                typedef std::future<DeleteEdgeUnitDeployGridItemOutcome> DeleteEdgeUnitDeployGridItemOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DeleteEdgeUnitDeployGridItemRequest&, DeleteEdgeUnitDeployGridItemOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEdgeUnitDeployGridItemAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteEdgeUnitDevicesResponse> DeleteEdgeUnitDevicesOutcome;
                typedef std::future<DeleteEdgeUnitDevicesOutcome> DeleteEdgeUnitDevicesOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DeleteEdgeUnitDevicesRequest&, DeleteEdgeUnitDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEdgeUnitDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteEdgeUnitPodResponse> DeleteEdgeUnitPodOutcome;
                typedef std::future<DeleteEdgeUnitPodOutcome> DeleteEdgeUnitPodOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DeleteEdgeUnitPodRequest&, DeleteEdgeUnitPodOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEdgeUnitPodAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteIotDeviceResponse> DeleteIotDeviceOutcome;
                typedef std::future<DeleteIotDeviceOutcome> DeleteIotDeviceOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DeleteIotDeviceRequest&, DeleteIotDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIotDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteIotDeviceBatchResponse> DeleteIotDeviceBatchOutcome;
                typedef std::future<DeleteIotDeviceBatchOutcome> DeleteIotDeviceBatchOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DeleteIotDeviceBatchRequest&, DeleteIotDeviceBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIotDeviceBatchAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMessageRouteResponse> DeleteMessageRouteOutcome;
                typedef std::future<DeleteMessageRouteOutcome> DeleteMessageRouteOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DeleteMessageRouteRequest&, DeleteMessageRouteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMessageRouteAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNamespaceResponse> DeleteNamespaceOutcome;
                typedef std::future<DeleteNamespaceOutcome> DeleteNamespaceOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DeleteNamespaceRequest&, DeleteNamespaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNamespaceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNodeUnitResponse> DeleteNodeUnitOutcome;
                typedef std::future<DeleteNodeUnitOutcome> DeleteNodeUnitOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DeleteNodeUnitRequest&, DeleteNodeUnitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNodeUnitAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSecretResponse> DeleteSecretOutcome;
                typedef std::future<DeleteSecretOutcome> DeleteSecretOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DeleteSecretRequest&, DeleteSecretOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecretAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConfigMapResponse> DescribeConfigMapOutcome;
                typedef std::future<DescribeConfigMapOutcome> DescribeConfigMapOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DescribeConfigMapRequest&, DescribeConfigMapOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigMapAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConfigMapYamlErrorResponse> DescribeConfigMapYamlErrorOutcome;
                typedef std::future<DescribeConfigMapYamlErrorOutcome> DescribeConfigMapYamlErrorOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DescribeConfigMapYamlErrorRequest&, DescribeConfigMapYamlErrorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigMapYamlErrorAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConfigMapsResponse> DescribeConfigMapsOutcome;
                typedef std::future<DescribeConfigMapsOutcome> DescribeConfigMapsOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DescribeConfigMapsRequest&, DescribeConfigMapsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigMapsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDracoEdgeNodeInstallerResponse> DescribeDracoEdgeNodeInstallerOutcome;
                typedef std::future<DescribeDracoEdgeNodeInstallerOutcome> DescribeDracoEdgeNodeInstallerOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DescribeDracoEdgeNodeInstallerRequest&, DescribeDracoEdgeNodeInstallerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDracoEdgeNodeInstallerAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdgeAgentNodeInstallerResponse> DescribeEdgeAgentNodeInstallerOutcome;
                typedef std::future<DescribeEdgeAgentNodeInstallerOutcome> DescribeEdgeAgentNodeInstallerOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DescribeEdgeAgentNodeInstallerRequest&, DescribeEdgeAgentNodeInstallerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdgeAgentNodeInstallerAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdgeDefaultVpcResponse> DescribeEdgeDefaultVpcOutcome;
                typedef std::future<DescribeEdgeDefaultVpcOutcome> DescribeEdgeDefaultVpcOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DescribeEdgeDefaultVpcRequest&, DescribeEdgeDefaultVpcOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdgeDefaultVpcAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdgeNodeResponse> DescribeEdgeNodeOutcome;
                typedef std::future<DescribeEdgeNodeOutcome> DescribeEdgeNodeOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DescribeEdgeNodeRequest&, DescribeEdgeNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdgeNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdgeNodePodContainersResponse> DescribeEdgeNodePodContainersOutcome;
                typedef std::future<DescribeEdgeNodePodContainersOutcome> DescribeEdgeNodePodContainersOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DescribeEdgeNodePodContainersRequest&, DescribeEdgeNodePodContainersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdgeNodePodContainersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdgeNodePodsResponse> DescribeEdgeNodePodsOutcome;
                typedef std::future<DescribeEdgeNodePodsOutcome> DescribeEdgeNodePodsOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DescribeEdgeNodePodsRequest&, DescribeEdgeNodePodsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdgeNodePodsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdgeNodeRemarkListResponse> DescribeEdgeNodeRemarkListOutcome;
                typedef std::future<DescribeEdgeNodeRemarkListOutcome> DescribeEdgeNodeRemarkListOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DescribeEdgeNodeRemarkListRequest&, DescribeEdgeNodeRemarkListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdgeNodeRemarkListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdgeNodesResponse> DescribeEdgeNodesOutcome;
                typedef std::future<DescribeEdgeNodesOutcome> DescribeEdgeNodesOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DescribeEdgeNodesRequest&, DescribeEdgeNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdgeNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdgeOperationLogsResponse> DescribeEdgeOperationLogsOutcome;
                typedef std::future<DescribeEdgeOperationLogsOutcome> DescribeEdgeOperationLogsOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DescribeEdgeOperationLogsRequest&, DescribeEdgeOperationLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdgeOperationLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdgePodResponse> DescribeEdgePodOutcome;
                typedef std::future<DescribeEdgePodOutcome> DescribeEdgePodOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DescribeEdgePodRequest&, DescribeEdgePodOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdgePodAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdgeSnNodesResponse> DescribeEdgeSnNodesOutcome;
                typedef std::future<DescribeEdgeSnNodesOutcome> DescribeEdgeSnNodesOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DescribeEdgeSnNodesRequest&, DescribeEdgeSnNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdgeSnNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdgeUnitApplicationsResponse> DescribeEdgeUnitApplicationsOutcome;
                typedef std::future<DescribeEdgeUnitApplicationsOutcome> DescribeEdgeUnitApplicationsOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DescribeEdgeUnitApplicationsRequest&, DescribeEdgeUnitApplicationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdgeUnitApplicationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdgeUnitDeployGridResponse> DescribeEdgeUnitDeployGridOutcome;
                typedef std::future<DescribeEdgeUnitDeployGridOutcome> DescribeEdgeUnitDeployGridOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DescribeEdgeUnitDeployGridRequest&, DescribeEdgeUnitDeployGridOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdgeUnitDeployGridAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdgeUnitDeployGridItemResponse> DescribeEdgeUnitDeployGridItemOutcome;
                typedef std::future<DescribeEdgeUnitDeployGridItemOutcome> DescribeEdgeUnitDeployGridItemOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DescribeEdgeUnitDeployGridItemRequest&, DescribeEdgeUnitDeployGridItemOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdgeUnitDeployGridItemAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdgeUnitDeployGridItemYamlResponse> DescribeEdgeUnitDeployGridItemYamlOutcome;
                typedef std::future<DescribeEdgeUnitDeployGridItemYamlOutcome> DescribeEdgeUnitDeployGridItemYamlOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DescribeEdgeUnitDeployGridItemYamlRequest&, DescribeEdgeUnitDeployGridItemYamlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdgeUnitDeployGridItemYamlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdgeUnitExtraResponse> DescribeEdgeUnitExtraOutcome;
                typedef std::future<DescribeEdgeUnitExtraOutcome> DescribeEdgeUnitExtraOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DescribeEdgeUnitExtraRequest&, DescribeEdgeUnitExtraOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdgeUnitExtraAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdgeUnitGridEventsResponse> DescribeEdgeUnitGridEventsOutcome;
                typedef std::future<DescribeEdgeUnitGridEventsOutcome> DescribeEdgeUnitGridEventsOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DescribeEdgeUnitGridEventsRequest&, DescribeEdgeUnitGridEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdgeUnitGridEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdgeUnitGridPodsResponse> DescribeEdgeUnitGridPodsOutcome;
                typedef std::future<DescribeEdgeUnitGridPodsOutcome> DescribeEdgeUnitGridPodsOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DescribeEdgeUnitGridPodsRequest&, DescribeEdgeUnitGridPodsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdgeUnitGridPodsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdgeUnitMonitorStatusResponse> DescribeEdgeUnitMonitorStatusOutcome;
                typedef std::future<DescribeEdgeUnitMonitorStatusOutcome> DescribeEdgeUnitMonitorStatusOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DescribeEdgeUnitMonitorStatusRequest&, DescribeEdgeUnitMonitorStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdgeUnitMonitorStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdgeUnitNodeGroupResponse> DescribeEdgeUnitNodeGroupOutcome;
                typedef std::future<DescribeEdgeUnitNodeGroupOutcome> DescribeEdgeUnitNodeGroupOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DescribeEdgeUnitNodeGroupRequest&, DescribeEdgeUnitNodeGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdgeUnitNodeGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdgeUnitNodeUnitTemplatesResponse> DescribeEdgeUnitNodeUnitTemplatesOutcome;
                typedef std::future<DescribeEdgeUnitNodeUnitTemplatesOutcome> DescribeEdgeUnitNodeUnitTemplatesOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DescribeEdgeUnitNodeUnitTemplatesRequest&, DescribeEdgeUnitNodeUnitTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdgeUnitNodeUnitTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdgeUnitsCloudResponse> DescribeEdgeUnitsCloudOutcome;
                typedef std::future<DescribeEdgeUnitsCloudOutcome> DescribeEdgeUnitsCloudOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DescribeEdgeUnitsCloudRequest&, DescribeEdgeUnitsCloudOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdgeUnitsCloudAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIotDeviceResponse> DescribeIotDeviceOutcome;
                typedef std::future<DescribeIotDeviceOutcome> DescribeIotDeviceOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DescribeIotDeviceRequest&, DescribeIotDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIotDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIotDevicesResponse> DescribeIotDevicesOutcome;
                typedef std::future<DescribeIotDevicesOutcome> DescribeIotDevicesOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DescribeIotDevicesRequest&, DescribeIotDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIotDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMessageRouteListResponse> DescribeMessageRouteListOutcome;
                typedef std::future<DescribeMessageRouteListOutcome> DescribeMessageRouteListOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DescribeMessageRouteListRequest&, DescribeMessageRouteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMessageRouteListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMonitorMetricsResponse> DescribeMonitorMetricsOutcome;
                typedef std::future<DescribeMonitorMetricsOutcome> DescribeMonitorMetricsOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DescribeMonitorMetricsRequest&, DescribeMonitorMetricsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMonitorMetricsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNamespaceResponse> DescribeNamespaceOutcome;
                typedef std::future<DescribeNamespaceOutcome> DescribeNamespaceOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DescribeNamespaceRequest&, DescribeNamespaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNamespaceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNamespaceResourcesResponse> DescribeNamespaceResourcesOutcome;
                typedef std::future<DescribeNamespaceResourcesOutcome> DescribeNamespaceResourcesOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DescribeNamespaceResourcesRequest&, DescribeNamespaceResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNamespaceResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNamespacesResponse> DescribeNamespacesOutcome;
                typedef std::future<DescribeNamespacesOutcome> DescribeNamespacesOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DescribeNamespacesRequest&, DescribeNamespacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNamespacesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNodeUnitResponse> DescribeNodeUnitOutcome;
                typedef std::future<DescribeNodeUnitOutcome> DescribeNodeUnitOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DescribeNodeUnitRequest&, DescribeNodeUnitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNodeUnitAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNodeUnitTemplateOnNodeGroupResponse> DescribeNodeUnitTemplateOnNodeGroupOutcome;
                typedef std::future<DescribeNodeUnitTemplateOnNodeGroupOutcome> DescribeNodeUnitTemplateOnNodeGroupOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DescribeNodeUnitTemplateOnNodeGroupRequest&, DescribeNodeUnitTemplateOnNodeGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNodeUnitTemplateOnNodeGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecretResponse> DescribeSecretOutcome;
                typedef std::future<DescribeSecretOutcome> DescribeSecretOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DescribeSecretRequest&, DescribeSecretOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecretAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecretYamlErrorResponse> DescribeSecretYamlErrorOutcome;
                typedef std::future<DescribeSecretYamlErrorOutcome> DescribeSecretYamlErrorOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DescribeSecretYamlErrorRequest&, DescribeSecretYamlErrorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecretYamlErrorAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecretsResponse> DescribeSecretsOutcome;
                typedef std::future<DescribeSecretsOutcome> DescribeSecretsOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DescribeSecretsRequest&, DescribeSecretsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecretsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeYeheResourceLimitResponse> DescribeYeheResourceLimitOutcome;
                typedef std::future<DescribeYeheResourceLimitOutcome> DescribeYeheResourceLimitOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::DescribeYeheResourceLimitRequest&, DescribeYeheResourceLimitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeYeheResourceLimitAsyncHandler;
                typedef Outcome<Core::Error, Model::GetMarketComponentResponse> GetMarketComponentOutcome;
                typedef std::future<GetMarketComponentOutcome> GetMarketComponentOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::GetMarketComponentRequest&, GetMarketComponentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetMarketComponentAsyncHandler;
                typedef Outcome<Core::Error, Model::GetMarketComponentListResponse> GetMarketComponentListOutcome;
                typedef std::future<GetMarketComponentListOutcome> GetMarketComponentListOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::GetMarketComponentListRequest&, GetMarketComponentListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetMarketComponentListAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyConfigMapResponse> ModifyConfigMapOutcome;
                typedef std::future<ModifyConfigMapOutcome> ModifyConfigMapOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::ModifyConfigMapRequest&, ModifyConfigMapOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyConfigMapAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEdgeDracoNodeResponse> ModifyEdgeDracoNodeOutcome;
                typedef std::future<ModifyEdgeDracoNodeOutcome> ModifyEdgeDracoNodeOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::ModifyEdgeDracoNodeRequest&, ModifyEdgeDracoNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEdgeDracoNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEdgeNodeLabelsResponse> ModifyEdgeNodeLabelsOutcome;
                typedef std::future<ModifyEdgeNodeLabelsOutcome> ModifyEdgeNodeLabelsOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::ModifyEdgeNodeLabelsRequest&, ModifyEdgeNodeLabelsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEdgeNodeLabelsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEdgeUnitResponse> ModifyEdgeUnitOutcome;
                typedef std::future<ModifyEdgeUnitOutcome> ModifyEdgeUnitOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::ModifyEdgeUnitRequest&, ModifyEdgeUnitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEdgeUnitAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEdgeUnitApplicationBasicInfoResponse> ModifyEdgeUnitApplicationBasicInfoOutcome;
                typedef std::future<ModifyEdgeUnitApplicationBasicInfoOutcome> ModifyEdgeUnitApplicationBasicInfoOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::ModifyEdgeUnitApplicationBasicInfoRequest&, ModifyEdgeUnitApplicationBasicInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEdgeUnitApplicationBasicInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEdgeUnitApplicationVisualizationResponse> ModifyEdgeUnitApplicationVisualizationOutcome;
                typedef std::future<ModifyEdgeUnitApplicationVisualizationOutcome> ModifyEdgeUnitApplicationVisualizationOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::ModifyEdgeUnitApplicationVisualizationRequest&, ModifyEdgeUnitApplicationVisualizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEdgeUnitApplicationVisualizationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEdgeUnitApplicationYamlResponse> ModifyEdgeUnitApplicationYamlOutcome;
                typedef std::future<ModifyEdgeUnitApplicationYamlOutcome> ModifyEdgeUnitApplicationYamlOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::ModifyEdgeUnitApplicationYamlRequest&, ModifyEdgeUnitApplicationYamlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEdgeUnitApplicationYamlAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEdgeUnitCloudApiResponse> ModifyEdgeUnitCloudApiOutcome;
                typedef std::future<ModifyEdgeUnitCloudApiOutcome> ModifyEdgeUnitCloudApiOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::ModifyEdgeUnitCloudApiRequest&, ModifyEdgeUnitCloudApiOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEdgeUnitCloudApiAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEdgeUnitDeployGridItemResponse> ModifyEdgeUnitDeployGridItemOutcome;
                typedef std::future<ModifyEdgeUnitDeployGridItemOutcome> ModifyEdgeUnitDeployGridItemOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::ModifyEdgeUnitDeployGridItemRequest&, ModifyEdgeUnitDeployGridItemOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEdgeUnitDeployGridItemAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyIotDeviceResponse> ModifyIotDeviceOutcome;
                typedef std::future<ModifyIotDeviceOutcome> ModifyIotDeviceOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::ModifyIotDeviceRequest&, ModifyIotDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIotDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNodeUnitTemplateResponse> ModifyNodeUnitTemplateOutcome;
                typedef std::future<ModifyNodeUnitTemplateOutcome> ModifyNodeUnitTemplateOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::ModifyNodeUnitTemplateRequest&, ModifyNodeUnitTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNodeUnitTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySecretResponse> ModifySecretOutcome;
                typedef std::future<ModifySecretOutcome> ModifySecretOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::ModifySecretRequest&, ModifySecretOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecretAsyncHandler;
                typedef Outcome<Core::Error, Model::RedeployEdgeUnitApplicationResponse> RedeployEdgeUnitApplicationOutcome;
                typedef std::future<RedeployEdgeUnitApplicationOutcome> RedeployEdgeUnitApplicationOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::RedeployEdgeUnitApplicationRequest&, RedeployEdgeUnitApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RedeployEdgeUnitApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::SetRouteOnOffResponse> SetRouteOnOffOutcome;
                typedef std::future<SetRouteOnOffOutcome> SetRouteOnOffOutcomeCallable;
                typedef std::function<void(const IecpClient*, const Model::SetRouteOnOffRequest&, SetRouteOnOffOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetRouteOnOffAsyncHandler;



                /**
                 *建立消息路由
                 * @param req BuildMessageRouteRequest
                 * @return BuildMessageRouteOutcome
                 */
                BuildMessageRouteOutcome BuildMessageRoute(const Model::BuildMessageRouteRequest &request);
                void BuildMessageRouteAsync(const Model::BuildMessageRouteRequest& request, const BuildMessageRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BuildMessageRouteOutcomeCallable BuildMessageRouteCallable(const Model::BuildMessageRouteRequest& request);

                /**
                 *创建ConfigMap
                 * @param req CreateConfigMapRequest
                 * @return CreateConfigMapOutcome
                 */
                CreateConfigMapOutcome CreateConfigMap(const Model::CreateConfigMapRequest &request);
                void CreateConfigMapAsync(const Model::CreateConfigMapRequest& request, const CreateConfigMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateConfigMapOutcomeCallable CreateConfigMapCallable(const Model::CreateConfigMapRequest& request);

                /**
                 *创建边缘节点
                 * @param req CreateEdgeNodeRequest
                 * @return CreateEdgeNodeOutcome
                 */
                CreateEdgeNodeOutcome CreateEdgeNode(const Model::CreateEdgeNodeRequest &request);
                void CreateEdgeNodeAsync(const Model::CreateEdgeNodeRequest& request, const CreateEdgeNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEdgeNodeOutcomeCallable CreateEdgeNodeCallable(const Model::CreateEdgeNodeRequest& request);

                /**
                 *批量预注册节点
                 * @param req CreateEdgeNodeBatchRequest
                 * @return CreateEdgeNodeBatchOutcome
                 */
                CreateEdgeNodeBatchOutcome CreateEdgeNodeBatch(const Model::CreateEdgeNodeBatchRequest &request);
                void CreateEdgeNodeBatchAsync(const Model::CreateEdgeNodeBatchRequest& request, const CreateEdgeNodeBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEdgeNodeBatchOutcomeCallable CreateEdgeNodeBatchCallable(const Model::CreateEdgeNodeBatchRequest& request);

                /**
                 *创建边缘单元NodeGroup
                 * @param req CreateEdgeNodeGroupRequest
                 * @return CreateEdgeNodeGroupOutcome
                 */
                CreateEdgeNodeGroupOutcome CreateEdgeNodeGroup(const Model::CreateEdgeNodeGroupRequest &request);
                void CreateEdgeNodeGroupAsync(const Model::CreateEdgeNodeGroupRequest& request, const CreateEdgeNodeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEdgeNodeGroupOutcomeCallable CreateEdgeNodeGroupCallable(const Model::CreateEdgeNodeGroupRequest& request);

                /**
                 *创建边缘单元NodeUnit模板
                 * @param req CreateEdgeNodeUnitTemplateRequest
                 * @return CreateEdgeNodeUnitTemplateOutcome
                 */
                CreateEdgeNodeUnitTemplateOutcome CreateEdgeNodeUnitTemplate(const Model::CreateEdgeNodeUnitTemplateRequest &request);
                void CreateEdgeNodeUnitTemplateAsync(const Model::CreateEdgeNodeUnitTemplateRequest& request, const CreateEdgeNodeUnitTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEdgeNodeUnitTemplateOutcomeCallable CreateEdgeNodeUnitTemplateCallable(const Model::CreateEdgeNodeUnitTemplateRequest& request);

                /**
                 *创建边缘单元
                 * @param req CreateEdgeUnitCloudRequest
                 * @return CreateEdgeUnitCloudOutcome
                 */
                CreateEdgeUnitCloudOutcome CreateEdgeUnitCloud(const Model::CreateEdgeUnitCloudRequest &request);
                void CreateEdgeUnitCloudAsync(const Model::CreateEdgeUnitCloudRequest& request, const CreateEdgeUnitCloudAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEdgeUnitCloudOutcomeCallable CreateEdgeUnitCloudCallable(const Model::CreateEdgeUnitCloudRequest& request);

                /**
                 *批量绑定设备到单元
                 * @param req CreateEdgeUnitDevicesRequest
                 * @return CreateEdgeUnitDevicesOutcome
                 */
                CreateEdgeUnitDevicesOutcome CreateEdgeUnitDevices(const Model::CreateEdgeUnitDevicesRequest &request);
                void CreateEdgeUnitDevicesAsync(const Model::CreateEdgeUnitDevicesRequest& request, const CreateEdgeUnitDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEdgeUnitDevicesOutcomeCallable CreateEdgeUnitDevicesCallable(const Model::CreateEdgeUnitDevicesRequest& request);

                /**
                 *创建子设备
                 * @param req CreateIotDeviceRequest
                 * @return CreateIotDeviceOutcome
                 */
                CreateIotDeviceOutcome CreateIotDevice(const Model::CreateIotDeviceRequest &request);
                void CreateIotDeviceAsync(const Model::CreateIotDeviceRequest& request, const CreateIotDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIotDeviceOutcomeCallable CreateIotDeviceCallable(const Model::CreateIotDeviceRequest& request);

                /**
                 *创建消息路由
                 * @param req CreateMessageRouteRequest
                 * @return CreateMessageRouteOutcome
                 */
                CreateMessageRouteOutcome CreateMessageRoute(const Model::CreateMessageRouteRequest &request);
                void CreateMessageRouteAsync(const Model::CreateMessageRouteRequest& request, const CreateMessageRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMessageRouteOutcomeCallable CreateMessageRouteCallable(const Model::CreateMessageRouteRequest& request);

                /**
                 *创建命名空间
                 * @param req CreateNamespaceRequest
                 * @return CreateNamespaceOutcome
                 */
                CreateNamespaceOutcome CreateNamespace(const Model::CreateNamespaceRequest &request);
                void CreateNamespaceAsync(const Model::CreateNamespaceRequest& request, const CreateNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNamespaceOutcomeCallable CreateNamespaceCallable(const Model::CreateNamespaceRequest& request);

                /**
                 *创建Secret
                 * @param req CreateSecretRequest
                 * @return CreateSecretOutcome
                 */
                CreateSecretOutcome CreateSecret(const Model::CreateSecretRequest &request);
                void CreateSecretAsync(const Model::CreateSecretRequest& request, const CreateSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSecretOutcomeCallable CreateSecretCallable(const Model::CreateSecretRequest& request);

                /**
                 *创建或更新边缘单元NodeUnit
                 * @param req CreateUpdateNodeUnitRequest
                 * @return CreateUpdateNodeUnitOutcome
                 */
                CreateUpdateNodeUnitOutcome CreateUpdateNodeUnit(const Model::CreateUpdateNodeUnitRequest &request);
                void CreateUpdateNodeUnitAsync(const Model::CreateUpdateNodeUnitRequest& request, const CreateUpdateNodeUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUpdateNodeUnitOutcomeCallable CreateUpdateNodeUnitCallable(const Model::CreateUpdateNodeUnitRequest& request);

                /**
                 *创建token
                 * @param req CreateUserTokenRequest
                 * @return CreateUserTokenOutcome
                 */
                CreateUserTokenOutcome CreateUserToken(const Model::CreateUserTokenRequest &request);
                void CreateUserTokenAsync(const Model::CreateUserTokenRequest& request, const CreateUserTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUserTokenOutcomeCallable CreateUserTokenCallable(const Model::CreateUserTokenRequest& request);

                /**
                 *删除ConfigMap
                 * @param req DeleteConfigMapRequest
                 * @return DeleteConfigMapOutcome
                 */
                DeleteConfigMapOutcome DeleteConfigMap(const Model::DeleteConfigMapRequest &request);
                void DeleteConfigMapAsync(const Model::DeleteConfigMapRequest& request, const DeleteConfigMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteConfigMapOutcomeCallable DeleteConfigMapCallable(const Model::DeleteConfigMapRequest& request);

                /**
                 *删除边缘单元NodeGroup
                 * @param req DeleteEdgeNodeGroupRequest
                 * @return DeleteEdgeNodeGroupOutcome
                 */
                DeleteEdgeNodeGroupOutcome DeleteEdgeNodeGroup(const Model::DeleteEdgeNodeGroupRequest &request);
                void DeleteEdgeNodeGroupAsync(const Model::DeleteEdgeNodeGroupRequest& request, const DeleteEdgeNodeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEdgeNodeGroupOutcomeCallable DeleteEdgeNodeGroupCallable(const Model::DeleteEdgeNodeGroupRequest& request);

                /**
                 *删除边缘单元NodeUnit模板
                 * @param req DeleteEdgeNodeUnitTemplatesRequest
                 * @return DeleteEdgeNodeUnitTemplatesOutcome
                 */
                DeleteEdgeNodeUnitTemplatesOutcome DeleteEdgeNodeUnitTemplates(const Model::DeleteEdgeNodeUnitTemplatesRequest &request);
                void DeleteEdgeNodeUnitTemplatesAsync(const Model::DeleteEdgeNodeUnitTemplatesRequest& request, const DeleteEdgeNodeUnitTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEdgeNodeUnitTemplatesOutcomeCallable DeleteEdgeNodeUnitTemplatesCallable(const Model::DeleteEdgeNodeUnitTemplatesRequest& request);

                /**
                 *批量删除边缘节点
                 * @param req DeleteEdgeNodesRequest
                 * @return DeleteEdgeNodesOutcome
                 */
                DeleteEdgeNodesOutcome DeleteEdgeNodes(const Model::DeleteEdgeNodesRequest &request);
                void DeleteEdgeNodesAsync(const Model::DeleteEdgeNodesRequest& request, const DeleteEdgeNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEdgeNodesOutcomeCallable DeleteEdgeNodesCallable(const Model::DeleteEdgeNodesRequest& request);

                /**
                 *删除边缘单元
                 * @param req DeleteEdgeUnitCloudRequest
                 * @return DeleteEdgeUnitCloudOutcome
                 */
                DeleteEdgeUnitCloudOutcome DeleteEdgeUnitCloud(const Model::DeleteEdgeUnitCloudRequest &request);
                void DeleteEdgeUnitCloudAsync(const Model::DeleteEdgeUnitCloudRequest& request, const DeleteEdgeUnitCloudAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEdgeUnitCloudOutcomeCallable DeleteEdgeUnitCloudCallable(const Model::DeleteEdgeUnitCloudRequest& request);

                /**
                 *重新部署边缘单元指定Grid下应用
                 * @param req DeleteEdgeUnitDeployGridItemRequest
                 * @return DeleteEdgeUnitDeployGridItemOutcome
                 */
                DeleteEdgeUnitDeployGridItemOutcome DeleteEdgeUnitDeployGridItem(const Model::DeleteEdgeUnitDeployGridItemRequest &request);
                void DeleteEdgeUnitDeployGridItemAsync(const Model::DeleteEdgeUnitDeployGridItemRequest& request, const DeleteEdgeUnitDeployGridItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEdgeUnitDeployGridItemOutcomeCallable DeleteEdgeUnitDeployGridItemCallable(const Model::DeleteEdgeUnitDeployGridItemRequest& request);

                /**
                 *批量解绑单元设备
                 * @param req DeleteEdgeUnitDevicesRequest
                 * @return DeleteEdgeUnitDevicesOutcome
                 */
                DeleteEdgeUnitDevicesOutcome DeleteEdgeUnitDevices(const Model::DeleteEdgeUnitDevicesRequest &request);
                void DeleteEdgeUnitDevicesAsync(const Model::DeleteEdgeUnitDevicesRequest& request, const DeleteEdgeUnitDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEdgeUnitDevicesOutcomeCallable DeleteEdgeUnitDevicesCallable(const Model::DeleteEdgeUnitDevicesRequest& request);

                /**
                 *删除指定pod
                 * @param req DeleteEdgeUnitPodRequest
                 * @return DeleteEdgeUnitPodOutcome
                 */
                DeleteEdgeUnitPodOutcome DeleteEdgeUnitPod(const Model::DeleteEdgeUnitPodRequest &request);
                void DeleteEdgeUnitPodAsync(const Model::DeleteEdgeUnitPodRequest& request, const DeleteEdgeUnitPodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEdgeUnitPodOutcomeCallable DeleteEdgeUnitPodCallable(const Model::DeleteEdgeUnitPodRequest& request);

                /**
                 *删除设备
                 * @param req DeleteIotDeviceRequest
                 * @return DeleteIotDeviceOutcome
                 */
                DeleteIotDeviceOutcome DeleteIotDevice(const Model::DeleteIotDeviceRequest &request);
                void DeleteIotDeviceAsync(const Model::DeleteIotDeviceRequest& request, const DeleteIotDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteIotDeviceOutcomeCallable DeleteIotDeviceCallable(const Model::DeleteIotDeviceRequest& request);

                /**
                 *批量删除设备
                 * @param req DeleteIotDeviceBatchRequest
                 * @return DeleteIotDeviceBatchOutcome
                 */
                DeleteIotDeviceBatchOutcome DeleteIotDeviceBatch(const Model::DeleteIotDeviceBatchRequest &request);
                void DeleteIotDeviceBatchAsync(const Model::DeleteIotDeviceBatchRequest& request, const DeleteIotDeviceBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteIotDeviceBatchOutcomeCallable DeleteIotDeviceBatchCallable(const Model::DeleteIotDeviceBatchRequest& request);

                /**
                 *删除消息路由
                 * @param req DeleteMessageRouteRequest
                 * @return DeleteMessageRouteOutcome
                 */
                DeleteMessageRouteOutcome DeleteMessageRoute(const Model::DeleteMessageRouteRequest &request);
                void DeleteMessageRouteAsync(const Model::DeleteMessageRouteRequest& request, const DeleteMessageRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMessageRouteOutcomeCallable DeleteMessageRouteCallable(const Model::DeleteMessageRouteRequest& request);

                /**
                 *删除命名空间
                 * @param req DeleteNamespaceRequest
                 * @return DeleteNamespaceOutcome
                 */
                DeleteNamespaceOutcome DeleteNamespace(const Model::DeleteNamespaceRequest &request);
                void DeleteNamespaceAsync(const Model::DeleteNamespaceRequest& request, const DeleteNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNamespaceOutcomeCallable DeleteNamespaceCallable(const Model::DeleteNamespaceRequest& request);

                /**
                 *删除边缘单元NodeUnit
                 * @param req DeleteNodeUnitRequest
                 * @return DeleteNodeUnitOutcome
                 */
                DeleteNodeUnitOutcome DeleteNodeUnit(const Model::DeleteNodeUnitRequest &request);
                void DeleteNodeUnitAsync(const Model::DeleteNodeUnitRequest& request, const DeleteNodeUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNodeUnitOutcomeCallable DeleteNodeUnitCallable(const Model::DeleteNodeUnitRequest& request);

                /**
                 *删除Secret
                 * @param req DeleteSecretRequest
                 * @return DeleteSecretOutcome
                 */
                DeleteSecretOutcome DeleteSecret(const Model::DeleteSecretRequest &request);
                void DeleteSecretAsync(const Model::DeleteSecretRequest& request, const DeleteSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSecretOutcomeCallable DeleteSecretCallable(const Model::DeleteSecretRequest& request);

                /**
                 *获取ConfigMap详情
                 * @param req DescribeConfigMapRequest
                 * @return DescribeConfigMapOutcome
                 */
                DescribeConfigMapOutcome DescribeConfigMap(const Model::DescribeConfigMapRequest &request);
                void DescribeConfigMapAsync(const Model::DescribeConfigMapRequest& request, const DescribeConfigMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConfigMapOutcomeCallable DescribeConfigMapCallable(const Model::DescribeConfigMapRequest& request);

                /**
                 *校验ConfigMap的Yaml语法
                 * @param req DescribeConfigMapYamlErrorRequest
                 * @return DescribeConfigMapYamlErrorOutcome
                 */
                DescribeConfigMapYamlErrorOutcome DescribeConfigMapYamlError(const Model::DescribeConfigMapYamlErrorRequest &request);
                void DescribeConfigMapYamlErrorAsync(const Model::DescribeConfigMapYamlErrorRequest& request, const DescribeConfigMapYamlErrorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConfigMapYamlErrorOutcomeCallable DescribeConfigMapYamlErrorCallable(const Model::DescribeConfigMapYamlErrorRequest& request);

                /**
                 *获取ConfigMap列表
                 * @param req DescribeConfigMapsRequest
                 * @return DescribeConfigMapsOutcome
                 */
                DescribeConfigMapsOutcome DescribeConfigMaps(const Model::DescribeConfigMapsRequest &request);
                void DescribeConfigMapsAsync(const Model::DescribeConfigMapsRequest& request, const DescribeConfigMapsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConfigMapsOutcomeCallable DescribeConfigMapsCallable(const Model::DescribeConfigMapsRequest& request);

                /**
                 *自动获取Draco设备的安装包
                 * @param req DescribeDracoEdgeNodeInstallerRequest
                 * @return DescribeDracoEdgeNodeInstallerOutcome
                 */
                DescribeDracoEdgeNodeInstallerOutcome DescribeDracoEdgeNodeInstaller(const Model::DescribeDracoEdgeNodeInstallerRequest &request);
                void DescribeDracoEdgeNodeInstallerAsync(const Model::DescribeDracoEdgeNodeInstallerRequest& request, const DescribeDracoEdgeNodeInstallerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDracoEdgeNodeInstallerOutcomeCallable DescribeDracoEdgeNodeInstallerCallable(const Model::DescribeDracoEdgeNodeInstallerRequest& request);

                /**
                 *获取节点安装信息
                 * @param req DescribeEdgeAgentNodeInstallerRequest
                 * @return DescribeEdgeAgentNodeInstallerOutcome
                 */
                DescribeEdgeAgentNodeInstallerOutcome DescribeEdgeAgentNodeInstaller(const Model::DescribeEdgeAgentNodeInstallerRequest &request);
                void DescribeEdgeAgentNodeInstallerAsync(const Model::DescribeEdgeAgentNodeInstallerRequest& request, const DescribeEdgeAgentNodeInstallerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdgeAgentNodeInstallerOutcomeCallable DescribeEdgeAgentNodeInstallerCallable(const Model::DescribeEdgeAgentNodeInstallerRequest& request);

                /**
                 *获取边缘集群默认VPC信息
                 * @param req DescribeEdgeDefaultVpcRequest
                 * @return DescribeEdgeDefaultVpcOutcome
                 */
                DescribeEdgeDefaultVpcOutcome DescribeEdgeDefaultVpc(const Model::DescribeEdgeDefaultVpcRequest &request);
                void DescribeEdgeDefaultVpcAsync(const Model::DescribeEdgeDefaultVpcRequest& request, const DescribeEdgeDefaultVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdgeDefaultVpcOutcomeCallable DescribeEdgeDefaultVpcCallable(const Model::DescribeEdgeDefaultVpcRequest& request);

                /**
                 *获取边缘节点信息
                 * @param req DescribeEdgeNodeRequest
                 * @return DescribeEdgeNodeOutcome
                 */
                DescribeEdgeNodeOutcome DescribeEdgeNode(const Model::DescribeEdgeNodeRequest &request);
                void DescribeEdgeNodeAsync(const Model::DescribeEdgeNodeRequest& request, const DescribeEdgeNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdgeNodeOutcomeCallable DescribeEdgeNodeCallable(const Model::DescribeEdgeNodeRequest& request);

                /**
                 *查询节点Pod内的容器列表
                 * @param req DescribeEdgeNodePodContainersRequest
                 * @return DescribeEdgeNodePodContainersOutcome
                 */
                DescribeEdgeNodePodContainersOutcome DescribeEdgeNodePodContainers(const Model::DescribeEdgeNodePodContainersRequest &request);
                void DescribeEdgeNodePodContainersAsync(const Model::DescribeEdgeNodePodContainersRequest& request, const DescribeEdgeNodePodContainersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdgeNodePodContainersOutcomeCallable DescribeEdgeNodePodContainersCallable(const Model::DescribeEdgeNodePodContainersRequest& request);

                /**
                 *查询节点Pod列表
                 * @param req DescribeEdgeNodePodsRequest
                 * @return DescribeEdgeNodePodsOutcome
                 */
                DescribeEdgeNodePodsOutcome DescribeEdgeNodePods(const Model::DescribeEdgeNodePodsRequest &request);
                void DescribeEdgeNodePodsAsync(const Model::DescribeEdgeNodePodsRequest& request, const DescribeEdgeNodePodsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdgeNodePodsOutcomeCallable DescribeEdgeNodePodsCallable(const Model::DescribeEdgeNodePodsRequest& request);

                /**
                 *获取节点备注信息列表
                 * @param req DescribeEdgeNodeRemarkListRequest
                 * @return DescribeEdgeNodeRemarkListOutcome
                 */
                DescribeEdgeNodeRemarkListOutcome DescribeEdgeNodeRemarkList(const Model::DescribeEdgeNodeRemarkListRequest &request);
                void DescribeEdgeNodeRemarkListAsync(const Model::DescribeEdgeNodeRemarkListRequest& request, const DescribeEdgeNodeRemarkListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdgeNodeRemarkListOutcomeCallable DescribeEdgeNodeRemarkListCallable(const Model::DescribeEdgeNodeRemarkListRequest& request);

                /**
                 *查询边缘节点列表
                 * @param req DescribeEdgeNodesRequest
                 * @return DescribeEdgeNodesOutcome
                 */
                DescribeEdgeNodesOutcome DescribeEdgeNodes(const Model::DescribeEdgeNodesRequest &request);
                void DescribeEdgeNodesAsync(const Model::DescribeEdgeNodesRequest& request, const DescribeEdgeNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdgeNodesOutcomeCallable DescribeEdgeNodesCallable(const Model::DescribeEdgeNodesRequest& request);

                /**
                 *查询边缘操作日志
                 * @param req DescribeEdgeOperationLogsRequest
                 * @return DescribeEdgeOperationLogsOutcome
                 */
                DescribeEdgeOperationLogsOutcome DescribeEdgeOperationLogs(const Model::DescribeEdgeOperationLogsRequest &request);
                void DescribeEdgeOperationLogsAsync(const Model::DescribeEdgeOperationLogsRequest& request, const DescribeEdgeOperationLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdgeOperationLogsOutcomeCallable DescribeEdgeOperationLogsCallable(const Model::DescribeEdgeOperationLogsRequest& request);

                /**
                 *查询边缘单元Pod
                 * @param req DescribeEdgePodRequest
                 * @return DescribeEdgePodOutcome
                 */
                DescribeEdgePodOutcome DescribeEdgePod(const Model::DescribeEdgePodRequest &request);
                void DescribeEdgePodAsync(const Model::DescribeEdgePodRequest& request, const DescribeEdgePodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdgePodOutcomeCallable DescribeEdgePodCallable(const Model::DescribeEdgePodRequest& request);

                /**
                 *查询预注册节点列表
                 * @param req DescribeEdgeSnNodesRequest
                 * @return DescribeEdgeSnNodesOutcome
                 */
                DescribeEdgeSnNodesOutcome DescribeEdgeSnNodes(const Model::DescribeEdgeSnNodesRequest &request);
                void DescribeEdgeSnNodesAsync(const Model::DescribeEdgeSnNodesRequest& request, const DescribeEdgeSnNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdgeSnNodesOutcomeCallable DescribeEdgeSnNodesCallable(const Model::DescribeEdgeSnNodesRequest& request);

                /**
                 *获取单元下应用列表
                 * @param req DescribeEdgeUnitApplicationsRequest
                 * @return DescribeEdgeUnitApplicationsOutcome
                 */
                DescribeEdgeUnitApplicationsOutcome DescribeEdgeUnitApplications(const Model::DescribeEdgeUnitApplicationsRequest &request);
                void DescribeEdgeUnitApplicationsAsync(const Model::DescribeEdgeUnitApplicationsRequest& request, const DescribeEdgeUnitApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdgeUnitApplicationsOutcomeCallable DescribeEdgeUnitApplicationsCallable(const Model::DescribeEdgeUnitApplicationsRequest& request);

                /**
                 *查询边缘单元Grid列表
                 * @param req DescribeEdgeUnitDeployGridRequest
                 * @return DescribeEdgeUnitDeployGridOutcome
                 */
                DescribeEdgeUnitDeployGridOutcome DescribeEdgeUnitDeployGrid(const Model::DescribeEdgeUnitDeployGridRequest &request);
                void DescribeEdgeUnitDeployGridAsync(const Model::DescribeEdgeUnitDeployGridRequest& request, const DescribeEdgeUnitDeployGridAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdgeUnitDeployGridOutcomeCallable DescribeEdgeUnitDeployGridCallable(const Model::DescribeEdgeUnitDeployGridRequest& request);

                /**
                 *查询边缘单元指定Grid下的部署应用列表
                 * @param req DescribeEdgeUnitDeployGridItemRequest
                 * @return DescribeEdgeUnitDeployGridItemOutcome
                 */
                DescribeEdgeUnitDeployGridItemOutcome DescribeEdgeUnitDeployGridItem(const Model::DescribeEdgeUnitDeployGridItemRequest &request);
                void DescribeEdgeUnitDeployGridItemAsync(const Model::DescribeEdgeUnitDeployGridItemRequest& request, const DescribeEdgeUnitDeployGridItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdgeUnitDeployGridItemOutcomeCallable DescribeEdgeUnitDeployGridItemCallable(const Model::DescribeEdgeUnitDeployGridItemRequest& request);

                /**
                 *查询指定Grid下应用的Yaml
                 * @param req DescribeEdgeUnitDeployGridItemYamlRequest
                 * @return DescribeEdgeUnitDeployGridItemYamlOutcome
                 */
                DescribeEdgeUnitDeployGridItemYamlOutcome DescribeEdgeUnitDeployGridItemYaml(const Model::DescribeEdgeUnitDeployGridItemYamlRequest &request);
                void DescribeEdgeUnitDeployGridItemYamlAsync(const Model::DescribeEdgeUnitDeployGridItemYamlRequest& request, const DescribeEdgeUnitDeployGridItemYamlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdgeUnitDeployGridItemYamlOutcomeCallable DescribeEdgeUnitDeployGridItemYamlCallable(const Model::DescribeEdgeUnitDeployGridItemYamlRequest& request);

                /**
                 *查询边缘单元额外信息
                 * @param req DescribeEdgeUnitExtraRequest
                 * @return DescribeEdgeUnitExtraOutcome
                 */
                DescribeEdgeUnitExtraOutcome DescribeEdgeUnitExtra(const Model::DescribeEdgeUnitExtraRequest &request);
                void DescribeEdgeUnitExtraAsync(const Model::DescribeEdgeUnitExtraRequest& request, const DescribeEdgeUnitExtraAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdgeUnitExtraOutcomeCallable DescribeEdgeUnitExtraCallable(const Model::DescribeEdgeUnitExtraRequest& request);

                /**
                 *查询边缘单元Grid事件列表
                 * @param req DescribeEdgeUnitGridEventsRequest
                 * @return DescribeEdgeUnitGridEventsOutcome
                 */
                DescribeEdgeUnitGridEventsOutcome DescribeEdgeUnitGridEvents(const Model::DescribeEdgeUnitGridEventsRequest &request);
                void DescribeEdgeUnitGridEventsAsync(const Model::DescribeEdgeUnitGridEventsRequest& request, const DescribeEdgeUnitGridEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdgeUnitGridEventsOutcomeCallable DescribeEdgeUnitGridEventsCallable(const Model::DescribeEdgeUnitGridEventsRequest& request);

                /**
                 *查询边缘单元Grid的Pod列表
                 * @param req DescribeEdgeUnitGridPodsRequest
                 * @return DescribeEdgeUnitGridPodsOutcome
                 */
                DescribeEdgeUnitGridPodsOutcome DescribeEdgeUnitGridPods(const Model::DescribeEdgeUnitGridPodsRequest &request);
                void DescribeEdgeUnitGridPodsAsync(const Model::DescribeEdgeUnitGridPodsRequest& request, const DescribeEdgeUnitGridPodsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdgeUnitGridPodsOutcomeCallable DescribeEdgeUnitGridPodsCallable(const Model::DescribeEdgeUnitGridPodsRequest& request);

                /**
                 *查询边缘集群监控状态
                 * @param req DescribeEdgeUnitMonitorStatusRequest
                 * @return DescribeEdgeUnitMonitorStatusOutcome
                 */
                DescribeEdgeUnitMonitorStatusOutcome DescribeEdgeUnitMonitorStatus(const Model::DescribeEdgeUnitMonitorStatusRequest &request);
                void DescribeEdgeUnitMonitorStatusAsync(const Model::DescribeEdgeUnitMonitorStatusRequest& request, const DescribeEdgeUnitMonitorStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdgeUnitMonitorStatusOutcomeCallable DescribeEdgeUnitMonitorStatusCallable(const Model::DescribeEdgeUnitMonitorStatusRequest& request);

                /**
                 *查询边缘集群NodeGroup
                 * @param req DescribeEdgeUnitNodeGroupRequest
                 * @return DescribeEdgeUnitNodeGroupOutcome
                 */
                DescribeEdgeUnitNodeGroupOutcome DescribeEdgeUnitNodeGroup(const Model::DescribeEdgeUnitNodeGroupRequest &request);
                void DescribeEdgeUnitNodeGroupAsync(const Model::DescribeEdgeUnitNodeGroupRequest& request, const DescribeEdgeUnitNodeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdgeUnitNodeGroupOutcomeCallable DescribeEdgeUnitNodeGroupCallable(const Model::DescribeEdgeUnitNodeGroupRequest& request);

                /**
                 *查询边缘单元EdgeUnit模板列表
                 * @param req DescribeEdgeUnitNodeUnitTemplatesRequest
                 * @return DescribeEdgeUnitNodeUnitTemplatesOutcome
                 */
                DescribeEdgeUnitNodeUnitTemplatesOutcome DescribeEdgeUnitNodeUnitTemplates(const Model::DescribeEdgeUnitNodeUnitTemplatesRequest &request);
                void DescribeEdgeUnitNodeUnitTemplatesAsync(const Model::DescribeEdgeUnitNodeUnitTemplatesRequest& request, const DescribeEdgeUnitNodeUnitTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdgeUnitNodeUnitTemplatesOutcomeCallable DescribeEdgeUnitNodeUnitTemplatesCallable(const Model::DescribeEdgeUnitNodeUnitTemplatesRequest& request);

                /**
                 *查询边缘单元列表
                 * @param req DescribeEdgeUnitsCloudRequest
                 * @return DescribeEdgeUnitsCloudOutcome
                 */
                DescribeEdgeUnitsCloudOutcome DescribeEdgeUnitsCloud(const Model::DescribeEdgeUnitsCloudRequest &request);
                void DescribeEdgeUnitsCloudAsync(const Model::DescribeEdgeUnitsCloudRequest& request, const DescribeEdgeUnitsCloudAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdgeUnitsCloudOutcomeCallable DescribeEdgeUnitsCloudCallable(const Model::DescribeEdgeUnitsCloudRequest& request);

                /**
                 *获取设备信息
                 * @param req DescribeIotDeviceRequest
                 * @return DescribeIotDeviceOutcome
                 */
                DescribeIotDeviceOutcome DescribeIotDevice(const Model::DescribeIotDeviceRequest &request);
                void DescribeIotDeviceAsync(const Model::DescribeIotDeviceRequest& request, const DescribeIotDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIotDeviceOutcomeCallable DescribeIotDeviceCallable(const Model::DescribeIotDeviceRequest& request);

                /**
                 *获取设备列表信息
                 * @param req DescribeIotDevicesRequest
                 * @return DescribeIotDevicesOutcome
                 */
                DescribeIotDevicesOutcome DescribeIotDevices(const Model::DescribeIotDevicesRequest &request);
                void DescribeIotDevicesAsync(const Model::DescribeIotDevicesRequest& request, const DescribeIotDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIotDevicesOutcomeCallable DescribeIotDevicesCallable(const Model::DescribeIotDevicesRequest& request);

                /**
                 *获取消息路由列表
                 * @param req DescribeMessageRouteListRequest
                 * @return DescribeMessageRouteListOutcome
                 */
                DescribeMessageRouteListOutcome DescribeMessageRouteList(const Model::DescribeMessageRouteListRequest &request);
                void DescribeMessageRouteListAsync(const Model::DescribeMessageRouteListRequest& request, const DescribeMessageRouteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMessageRouteListOutcomeCallable DescribeMessageRouteListCallable(const Model::DescribeMessageRouteListRequest& request);

                /**
                 *查询边缘单元监控数据
                 * @param req DescribeMonitorMetricsRequest
                 * @return DescribeMonitorMetricsOutcome
                 */
                DescribeMonitorMetricsOutcome DescribeMonitorMetrics(const Model::DescribeMonitorMetricsRequest &request);
                void DescribeMonitorMetricsAsync(const Model::DescribeMonitorMetricsRequest& request, const DescribeMonitorMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMonitorMetricsOutcomeCallable DescribeMonitorMetricsCallable(const Model::DescribeMonitorMetricsRequest& request);

                /**
                 *获取命名空间
                 * @param req DescribeNamespaceRequest
                 * @return DescribeNamespaceOutcome
                 */
                DescribeNamespaceOutcome DescribeNamespace(const Model::DescribeNamespaceRequest &request);
                void DescribeNamespaceAsync(const Model::DescribeNamespaceRequest& request, const DescribeNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNamespaceOutcomeCallable DescribeNamespaceCallable(const Model::DescribeNamespaceRequest& request);

                /**
                 *获取命名空间下的资源信息
                 * @param req DescribeNamespaceResourcesRequest
                 * @return DescribeNamespaceResourcesOutcome
                 */
                DescribeNamespaceResourcesOutcome DescribeNamespaceResources(const Model::DescribeNamespaceResourcesRequest &request);
                void DescribeNamespaceResourcesAsync(const Model::DescribeNamespaceResourcesRequest& request, const DescribeNamespaceResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNamespaceResourcesOutcomeCallable DescribeNamespaceResourcesCallable(const Model::DescribeNamespaceResourcesRequest& request);

                /**
                 *获取命名空间列表信息
                 * @param req DescribeNamespacesRequest
                 * @return DescribeNamespacesOutcome
                 */
                DescribeNamespacesOutcome DescribeNamespaces(const Model::DescribeNamespacesRequest &request);
                void DescribeNamespacesAsync(const Model::DescribeNamespacesRequest& request, const DescribeNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNamespacesOutcomeCallable DescribeNamespacesCallable(const Model::DescribeNamespacesRequest& request);

                /**
                 *查询边缘单元NodeUnit列表
                 * @param req DescribeNodeUnitRequest
                 * @return DescribeNodeUnitOutcome
                 */
                DescribeNodeUnitOutcome DescribeNodeUnit(const Model::DescribeNodeUnitRequest &request);
                void DescribeNodeUnitAsync(const Model::DescribeNodeUnitRequest& request, const DescribeNodeUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNodeUnitOutcomeCallable DescribeNodeUnitCallable(const Model::DescribeNodeUnitRequest& request);

                /**
                 *查询指定NodeGroup下NodeUnit模板列表
                 * @param req DescribeNodeUnitTemplateOnNodeGroupRequest
                 * @return DescribeNodeUnitTemplateOnNodeGroupOutcome
                 */
                DescribeNodeUnitTemplateOnNodeGroupOutcome DescribeNodeUnitTemplateOnNodeGroup(const Model::DescribeNodeUnitTemplateOnNodeGroupRequest &request);
                void DescribeNodeUnitTemplateOnNodeGroupAsync(const Model::DescribeNodeUnitTemplateOnNodeGroupRequest& request, const DescribeNodeUnitTemplateOnNodeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNodeUnitTemplateOnNodeGroupOutcomeCallable DescribeNodeUnitTemplateOnNodeGroupCallable(const Model::DescribeNodeUnitTemplateOnNodeGroupRequest& request);

                /**
                 *获取Secret详情
                 * @param req DescribeSecretRequest
                 * @return DescribeSecretOutcome
                 */
                DescribeSecretOutcome DescribeSecret(const Model::DescribeSecretRequest &request);
                void DescribeSecretAsync(const Model::DescribeSecretRequest& request, const DescribeSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecretOutcomeCallable DescribeSecretCallable(const Model::DescribeSecretRequest& request);

                /**
                 *校验Secret的Yaml语法
                 * @param req DescribeSecretYamlErrorRequest
                 * @return DescribeSecretYamlErrorOutcome
                 */
                DescribeSecretYamlErrorOutcome DescribeSecretYamlError(const Model::DescribeSecretYamlErrorRequest &request);
                void DescribeSecretYamlErrorAsync(const Model::DescribeSecretYamlErrorRequest& request, const DescribeSecretYamlErrorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecretYamlErrorOutcomeCallable DescribeSecretYamlErrorCallable(const Model::DescribeSecretYamlErrorRequest& request);

                /**
                 *获取Secrets列表
                 * @param req DescribeSecretsRequest
                 * @return DescribeSecretsOutcome
                 */
                DescribeSecretsOutcome DescribeSecrets(const Model::DescribeSecretsRequest &request);
                void DescribeSecretsAsync(const Model::DescribeSecretsRequest& request, const DescribeSecretsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecretsOutcomeCallable DescribeSecretsCallable(const Model::DescribeSecretsRequest& request);

                /**
                 *查询用户的资源限制
                 * @param req DescribeYeheResourceLimitRequest
                 * @return DescribeYeheResourceLimitOutcome
                 */
                DescribeYeheResourceLimitOutcome DescribeYeheResourceLimit(const Model::DescribeYeheResourceLimitRequest &request);
                void DescribeYeheResourceLimitAsync(const Model::DescribeYeheResourceLimitRequest& request, const DescribeYeheResourceLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeYeheResourceLimitOutcomeCallable DescribeYeheResourceLimitCallable(const Model::DescribeYeheResourceLimitRequest& request);

                /**
                 *获取组件市场的组件信息
                 * @param req GetMarketComponentRequest
                 * @return GetMarketComponentOutcome
                 */
                GetMarketComponentOutcome GetMarketComponent(const Model::GetMarketComponentRequest &request);
                void GetMarketComponentAsync(const Model::GetMarketComponentRequest& request, const GetMarketComponentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetMarketComponentOutcomeCallable GetMarketComponentCallable(const Model::GetMarketComponentRequest& request);

                /**
                 *获取组件市场组件列表
                 * @param req GetMarketComponentListRequest
                 * @return GetMarketComponentListOutcome
                 */
                GetMarketComponentListOutcome GetMarketComponentList(const Model::GetMarketComponentListRequest &request);
                void GetMarketComponentListAsync(const Model::GetMarketComponentListRequest& request, const GetMarketComponentListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetMarketComponentListOutcomeCallable GetMarketComponentListCallable(const Model::GetMarketComponentListRequest& request);

                /**
                 *修改ConfigMap
                 * @param req ModifyConfigMapRequest
                 * @return ModifyConfigMapOutcome
                 */
                ModifyConfigMapOutcome ModifyConfigMap(const Model::ModifyConfigMapRequest &request);
                void ModifyConfigMapAsync(const Model::ModifyConfigMapRequest& request, const ModifyConfigMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyConfigMapOutcomeCallable ModifyConfigMapCallable(const Model::ModifyConfigMapRequest& request);

                /**
                 *编辑draco设备信息
                 * @param req ModifyEdgeDracoNodeRequest
                 * @return ModifyEdgeDracoNodeOutcome
                 */
                ModifyEdgeDracoNodeOutcome ModifyEdgeDracoNode(const Model::ModifyEdgeDracoNodeRequest &request);
                void ModifyEdgeDracoNodeAsync(const Model::ModifyEdgeDracoNodeRequest& request, const ModifyEdgeDracoNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEdgeDracoNodeOutcomeCallable ModifyEdgeDracoNodeCallable(const Model::ModifyEdgeDracoNodeRequest& request);

                /**
                 *编辑边缘节点标签
                 * @param req ModifyEdgeNodeLabelsRequest
                 * @return ModifyEdgeNodeLabelsOutcome
                 */
                ModifyEdgeNodeLabelsOutcome ModifyEdgeNodeLabels(const Model::ModifyEdgeNodeLabelsRequest &request);
                void ModifyEdgeNodeLabelsAsync(const Model::ModifyEdgeNodeLabelsRequest& request, const ModifyEdgeNodeLabelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEdgeNodeLabelsOutcomeCallable ModifyEdgeNodeLabelsCallable(const Model::ModifyEdgeNodeLabelsRequest& request);

                /**
                 *修改边缘集群
                 * @param req ModifyEdgeUnitRequest
                 * @return ModifyEdgeUnitOutcome
                 */
                ModifyEdgeUnitOutcome ModifyEdgeUnit(const Model::ModifyEdgeUnitRequest &request);
                void ModifyEdgeUnitAsync(const Model::ModifyEdgeUnitRequest& request, const ModifyEdgeUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEdgeUnitOutcomeCallable ModifyEdgeUnitCallable(const Model::ModifyEdgeUnitRequest& request);

                /**
                 *修改单元应用基本信息
                 * @param req ModifyEdgeUnitApplicationBasicInfoRequest
                 * @return ModifyEdgeUnitApplicationBasicInfoOutcome
                 */
                ModifyEdgeUnitApplicationBasicInfoOutcome ModifyEdgeUnitApplicationBasicInfo(const Model::ModifyEdgeUnitApplicationBasicInfoRequest &request);
                void ModifyEdgeUnitApplicationBasicInfoAsync(const Model::ModifyEdgeUnitApplicationBasicInfoRequest& request, const ModifyEdgeUnitApplicationBasicInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEdgeUnitApplicationBasicInfoOutcomeCallable ModifyEdgeUnitApplicationBasicInfoCallable(const Model::ModifyEdgeUnitApplicationBasicInfoRequest& request);

                /**
                 *可视化修改应用配置
                 * @param req ModifyEdgeUnitApplicationVisualizationRequest
                 * @return ModifyEdgeUnitApplicationVisualizationOutcome
                 */
                ModifyEdgeUnitApplicationVisualizationOutcome ModifyEdgeUnitApplicationVisualization(const Model::ModifyEdgeUnitApplicationVisualizationRequest &request);
                void ModifyEdgeUnitApplicationVisualizationAsync(const Model::ModifyEdgeUnitApplicationVisualizationRequest& request, const ModifyEdgeUnitApplicationVisualizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEdgeUnitApplicationVisualizationOutcomeCallable ModifyEdgeUnitApplicationVisualizationCallable(const Model::ModifyEdgeUnitApplicationVisualizationRequest& request);

                /**
                 *Yaml方式修改应用配置
                 * @param req ModifyEdgeUnitApplicationYamlRequest
                 * @return ModifyEdgeUnitApplicationYamlOutcome
                 */
                ModifyEdgeUnitApplicationYamlOutcome ModifyEdgeUnitApplicationYaml(const Model::ModifyEdgeUnitApplicationYamlRequest &request);
                void ModifyEdgeUnitApplicationYamlAsync(const Model::ModifyEdgeUnitApplicationYamlRequest& request, const ModifyEdgeUnitApplicationYamlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEdgeUnitApplicationYamlOutcomeCallable ModifyEdgeUnitApplicationYamlCallable(const Model::ModifyEdgeUnitApplicationYamlRequest& request);

                /**
                 *更新边缘单元信息
                 * @param req ModifyEdgeUnitCloudApiRequest
                 * @return ModifyEdgeUnitCloudApiOutcome
                 */
                ModifyEdgeUnitCloudApiOutcome ModifyEdgeUnitCloudApi(const Model::ModifyEdgeUnitCloudApiRequest &request);
                void ModifyEdgeUnitCloudApiAsync(const Model::ModifyEdgeUnitCloudApiRequest& request, const ModifyEdgeUnitCloudApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEdgeUnitCloudApiOutcomeCallable ModifyEdgeUnitCloudApiCallable(const Model::ModifyEdgeUnitCloudApiRequest& request);

                /**
                 *修改边缘单元Grid部署应用副本数
                 * @param req ModifyEdgeUnitDeployGridItemRequest
                 * @return ModifyEdgeUnitDeployGridItemOutcome
                 */
                ModifyEdgeUnitDeployGridItemOutcome ModifyEdgeUnitDeployGridItem(const Model::ModifyEdgeUnitDeployGridItemRequest &request);
                void ModifyEdgeUnitDeployGridItemAsync(const Model::ModifyEdgeUnitDeployGridItemRequest& request, const ModifyEdgeUnitDeployGridItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEdgeUnitDeployGridItemOutcomeCallable ModifyEdgeUnitDeployGridItemCallable(const Model::ModifyEdgeUnitDeployGridItemRequest& request);

                /**
                 *修改设备信息
                 * @param req ModifyIotDeviceRequest
                 * @return ModifyIotDeviceOutcome
                 */
                ModifyIotDeviceOutcome ModifyIotDevice(const Model::ModifyIotDeviceRequest &request);
                void ModifyIotDeviceAsync(const Model::ModifyIotDeviceRequest& request, const ModifyIotDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyIotDeviceOutcomeCallable ModifyIotDeviceCallable(const Model::ModifyIotDeviceRequest& request);

                /**
                 *修改边缘单元NodeUnit模板
                 * @param req ModifyNodeUnitTemplateRequest
                 * @return ModifyNodeUnitTemplateOutcome
                 */
                ModifyNodeUnitTemplateOutcome ModifyNodeUnitTemplate(const Model::ModifyNodeUnitTemplateRequest &request);
                void ModifyNodeUnitTemplateAsync(const Model::ModifyNodeUnitTemplateRequest& request, const ModifyNodeUnitTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNodeUnitTemplateOutcomeCallable ModifyNodeUnitTemplateCallable(const Model::ModifyNodeUnitTemplateRequest& request);

                /**
                 *修改Secret
                 * @param req ModifySecretRequest
                 * @return ModifySecretOutcome
                 */
                ModifySecretOutcome ModifySecret(const Model::ModifySecretRequest &request);
                void ModifySecretAsync(const Model::ModifySecretRequest& request, const ModifySecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySecretOutcomeCallable ModifySecretCallable(const Model::ModifySecretRequest& request);

                /**
                 *单元应用重部署
                 * @param req RedeployEdgeUnitApplicationRequest
                 * @return RedeployEdgeUnitApplicationOutcome
                 */
                RedeployEdgeUnitApplicationOutcome RedeployEdgeUnitApplication(const Model::RedeployEdgeUnitApplicationRequest &request);
                void RedeployEdgeUnitApplicationAsync(const Model::RedeployEdgeUnitApplicationRequest& request, const RedeployEdgeUnitApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RedeployEdgeUnitApplicationOutcomeCallable RedeployEdgeUnitApplicationCallable(const Model::RedeployEdgeUnitApplicationRequest& request);

                /**
                 *开关消息路由
                 * @param req SetRouteOnOffRequest
                 * @return SetRouteOnOffOutcome
                 */
                SetRouteOnOffOutcome SetRouteOnOff(const Model::SetRouteOnOffRequest &request);
                void SetRouteOnOffAsync(const Model::SetRouteOnOffRequest& request, const SetRouteOnOffAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetRouteOnOffOutcomeCallable SetRouteOnOffCallable(const Model::SetRouteOnOffRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_IECPCLIENT_H_
