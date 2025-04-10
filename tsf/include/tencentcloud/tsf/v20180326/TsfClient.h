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

#ifndef TENCENTCLOUD_TSF_V20180326_TSFCLIENT_H_
#define TENCENTCLOUD_TSF_V20180326_TSFCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tsf/v20180326/model/AddClusterInstancesRequest.h>
#include <tencentcloud/tsf/v20180326/model/AddClusterInstancesResponse.h>
#include <tencentcloud/tsf/v20180326/model/AddInstancesRequest.h>
#include <tencentcloud/tsf/v20180326/model/AddInstancesResponse.h>
#include <tencentcloud/tsf/v20180326/model/AssociateBusinessLogConfigRequest.h>
#include <tencentcloud/tsf/v20180326/model/AssociateBusinessLogConfigResponse.h>
#include <tencentcloud/tsf/v20180326/model/AssociateConfigWithGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/AssociateConfigWithGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/BindApiGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/BindApiGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/BindPluginRequest.h>
#include <tencentcloud/tsf/v20180326/model/BindPluginResponse.h>
#include <tencentcloud/tsf/v20180326/model/ChangeApiUsableStatusRequest.h>
#include <tencentcloud/tsf/v20180326/model/ChangeApiUsableStatusResponse.h>
#include <tencentcloud/tsf/v20180326/model/ContinueRunFailedTaskBatchRequest.h>
#include <tencentcloud/tsf/v20180326/model/ContinueRunFailedTaskBatchResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreateAllGatewayApiAsyncRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreateAllGatewayApiAsyncResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreateApiGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreateApiGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreateApiRateLimitRuleRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreateApiRateLimitRuleResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreateApiRateLimitRuleWithDetailRespRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreateApiRateLimitRuleWithDetailRespResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreateApplicationRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreateApplicationResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreateClusterRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreateClusterResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreateConfigRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreateConfigResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreateConfigTemplateRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreateConfigTemplateResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreateConfigTemplateWithDetailRespRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreateConfigTemplateWithDetailRespResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreateConfigWithDetailRespRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreateConfigWithDetailRespResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreateContainGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreateContainGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreateFileConfigRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreateFileConfigResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreateFileConfigWithDetailRespRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreateFileConfigWithDetailRespResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreateGatewayApiRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreateGatewayApiResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreateGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreateGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreateLaneRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreateLaneResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreateLaneRuleRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreateLaneRuleResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreateMicroserviceRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreateMicroserviceResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreateMicroserviceWithDetailRespRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreateMicroserviceWithDetailRespResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreateNamespaceRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreateNamespaceResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreatePathRewritesRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreatePathRewritesResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreatePathRewritesWithDetailRespRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreatePathRewritesWithDetailRespResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreateProgramRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreateProgramResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreatePublicConfigRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreatePublicConfigResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreatePublicConfigWithDetailRespRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreatePublicConfigWithDetailRespResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreateRepositoryRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreateRepositoryResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreateTaskRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreateTaskResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreateTaskFlowRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreateTaskFlowResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreateUnitNamespacesRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreateUnitNamespacesResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreateUnitRuleRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreateUnitRuleResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreateUnitRuleWithDetailRespRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreateUnitRuleWithDetailRespResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeleteApiGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeleteApiGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeleteApiRateLimitRuleRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeleteApiRateLimitRuleResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeleteApplicationRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeleteApplicationResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeleteClusterRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeleteClusterResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeleteConfigRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeleteConfigResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeleteConfigTemplateRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeleteConfigTemplateResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeleteContainerGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeleteContainerGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeleteFileConfigRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeleteFileConfigResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeleteGatewayApiRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeleteGatewayApiResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeleteGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeleteGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeleteImageTagsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeleteImageTagsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeleteLaneRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeleteLaneResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeleteLaneRuleRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeleteLaneRuleResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeleteMicroserviceRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeleteMicroserviceResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeleteNamespaceRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeleteNamespaceResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeletePathRewritesRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeletePathRewritesResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeletePkgsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeletePkgsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeletePublicConfigRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeletePublicConfigResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeleteRepositoryRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeleteRepositoryResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeleteServerlessGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeleteServerlessGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeleteTaskRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeleteTaskResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeleteUnitNamespacesRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeleteUnitNamespacesResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeleteUnitRuleRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeleteUnitRuleResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeployContainerGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeployContainerGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeployGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeployGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeApiDetailRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeApiDetailResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeApiGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeApiGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeApiGroupsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeApiGroupsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeApiRateLimitRulesRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeApiRateLimitRulesResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeApiUseDetailRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeApiUseDetailResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeApiVersionsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeApiVersionsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeApplicationRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeApplicationResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeApplicationAttributeRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeApplicationAttributeResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeApplicationsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeApplicationsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeBasicResourceUsageRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeBasicResourceUsageResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeBusinessLogConfigRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeBusinessLogConfigResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeBusinessLogConfigsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeBusinessLogConfigsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeClusterInstancesRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeClusterInstancesResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeClustersRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeClustersResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeConfigRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeConfigResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeConfigReleaseLogsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeConfigReleaseLogsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeConfigReleasesRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeConfigReleasesResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeConfigSummaryRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeConfigSummaryResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeConfigTemplateRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeConfigTemplateResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeConfigsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeConfigsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeContainerEventsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeContainerEventsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeContainerGroupAttributeRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeContainerGroupAttributeResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeContainerGroupDeployInfoRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeContainerGroupDeployInfoResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeContainerGroupDetailRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeContainerGroupDetailResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeContainerGroupsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeContainerGroupsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeCreateGatewayApiStatusRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeCreateGatewayApiStatusResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeDeliveryConfigRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeDeliveryConfigResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeDeliveryConfigByGroupIdRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeDeliveryConfigByGroupIdResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeDeliveryConfigsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeDeliveryConfigsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeDownloadInfoRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeDownloadInfoResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeEnabledUnitRuleRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeEnabledUnitRuleResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeFileConfigReleasesRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeFileConfigReleasesResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeFileConfigsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeFileConfigsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeFlowLastBatchStateRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeFlowLastBatchStateResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeGatewayAllGroupApisRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeGatewayAllGroupApisResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeGatewayApisRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeGatewayApisResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeGatewayMonitorOverviewRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeGatewayMonitorOverviewResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeGroupAttributeRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeGroupAttributeResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeGroupBindedGatewaysRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeGroupBindedGatewaysResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeGroupBusinessLogConfigsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeGroupBusinessLogConfigsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeGroupGatewaysRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeGroupGatewaysResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeGroupInstancesRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeGroupInstancesResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeGroupReleaseRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeGroupReleaseResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeGroupUseDetailRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeGroupUseDetailResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeGroupsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeGroupsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeGroupsWithPluginRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeGroupsWithPluginResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeImageRepositoryRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeImageRepositoryResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeImageTagsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeImageTagsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeInovcationIndicatorsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeInovcationIndicatorsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeInstancesRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeInstancesResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeInvocationMetricDataCurveRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeInvocationMetricDataCurveResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeInvocationMetricDataDimensionRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeInvocationMetricDataDimensionResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeInvocationMetricDataPointRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeInvocationMetricDataPointResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeInvocationMetricScatterPlotRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeInvocationMetricScatterPlotResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeJvmMonitorRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeJvmMonitorResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeLaneRulesRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeLaneRulesResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeLanesRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeLanesResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeMicroserviceRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeMicroserviceResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeMicroservicesRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeMicroservicesResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeMicroservicesByGroupIdsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeMicroservicesByGroupIdsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeMsApiListRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeMsApiListResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeOverviewInvocationRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeOverviewInvocationResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribePathRewriteRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribePathRewriteResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribePathRewritesRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribePathRewritesResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribePkgsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribePkgsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribePluginInstancesRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribePluginInstancesResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribePodInstancesRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribePodInstancesResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeProgramsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeProgramsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribePublicConfigRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribePublicConfigResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribePublicConfigReleaseLogsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribePublicConfigReleaseLogsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribePublicConfigReleasesRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribePublicConfigReleasesResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribePublicConfigSummaryRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribePublicConfigSummaryResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribePublicConfigsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribePublicConfigsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeReleasedConfigRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeReleasedConfigResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeRepositoriesRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeRepositoriesResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeRepositoryRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeRepositoryResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeResourceTaskStatusRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeResourceTaskStatusResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeSimpleApplicationsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeSimpleApplicationsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeSimpleClustersRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeSimpleClustersResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeSimpleGroupsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeSimpleGroupsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeSimpleNamespacesRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeSimpleNamespacesResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeStatisticsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeStatisticsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeTaskDetailRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeTaskDetailResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeTaskLastStatusRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeTaskLastStatusResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeTaskRecordsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeTaskRecordsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeUnitApiUseDetailRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeUnitApiUseDetailResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeUnitNamespacesRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeUnitNamespacesResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeUnitRuleRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeUnitRuleResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeUnitRulesRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeUnitRulesResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeUnitRulesV2Request.h>
#include <tencentcloud/tsf/v20180326/model/DescribeUnitRulesV2Response.h>
#include <tencentcloud/tsf/v20180326/model/DescribeUploadInfoRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeUploadInfoResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeUsableUnitNamespacesRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeUsableUnitNamespacesResponse.h>
#include <tencentcloud/tsf/v20180326/model/DisableLaneRuleRequest.h>
#include <tencentcloud/tsf/v20180326/model/DisableLaneRuleResponse.h>
#include <tencentcloud/tsf/v20180326/model/DisableTaskRequest.h>
#include <tencentcloud/tsf/v20180326/model/DisableTaskResponse.h>
#include <tencentcloud/tsf/v20180326/model/DisableTaskFlowRequest.h>
#include <tencentcloud/tsf/v20180326/model/DisableTaskFlowResponse.h>
#include <tencentcloud/tsf/v20180326/model/DisableUnitRouteRequest.h>
#include <tencentcloud/tsf/v20180326/model/DisableUnitRouteResponse.h>
#include <tencentcloud/tsf/v20180326/model/DisableUnitRuleRequest.h>
#include <tencentcloud/tsf/v20180326/model/DisableUnitRuleResponse.h>
#include <tencentcloud/tsf/v20180326/model/DisassociateBusinessLogConfigRequest.h>
#include <tencentcloud/tsf/v20180326/model/DisassociateBusinessLogConfigResponse.h>
#include <tencentcloud/tsf/v20180326/model/DisassociateKafkaConfigRequest.h>
#include <tencentcloud/tsf/v20180326/model/DisassociateKafkaConfigResponse.h>
#include <tencentcloud/tsf/v20180326/model/DraftApiGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/DraftApiGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/EnableLaneRuleRequest.h>
#include <tencentcloud/tsf/v20180326/model/EnableLaneRuleResponse.h>
#include <tencentcloud/tsf/v20180326/model/EnableTaskRequest.h>
#include <tencentcloud/tsf/v20180326/model/EnableTaskResponse.h>
#include <tencentcloud/tsf/v20180326/model/EnableTaskFlowRequest.h>
#include <tencentcloud/tsf/v20180326/model/EnableTaskFlowResponse.h>
#include <tencentcloud/tsf/v20180326/model/EnableUnitRouteRequest.h>
#include <tencentcloud/tsf/v20180326/model/EnableUnitRouteResponse.h>
#include <tencentcloud/tsf/v20180326/model/EnableUnitRuleRequest.h>
#include <tencentcloud/tsf/v20180326/model/EnableUnitRuleResponse.h>
#include <tencentcloud/tsf/v20180326/model/ExecuteTaskRequest.h>
#include <tencentcloud/tsf/v20180326/model/ExecuteTaskResponse.h>
#include <tencentcloud/tsf/v20180326/model/ExecuteTaskFlowRequest.h>
#include <tencentcloud/tsf/v20180326/model/ExecuteTaskFlowResponse.h>
#include <tencentcloud/tsf/v20180326/model/ExpandGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/ExpandGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/ModifyApplicationRequest.h>
#include <tencentcloud/tsf/v20180326/model/ModifyApplicationResponse.h>
#include <tencentcloud/tsf/v20180326/model/ModifyClusterRequest.h>
#include <tencentcloud/tsf/v20180326/model/ModifyClusterResponse.h>
#include <tencentcloud/tsf/v20180326/model/ModifyContainerGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/ModifyContainerGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/ModifyContainerReplicasRequest.h>
#include <tencentcloud/tsf/v20180326/model/ModifyContainerReplicasResponse.h>
#include <tencentcloud/tsf/v20180326/model/ModifyGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/ModifyGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/ModifyLaneRequest.h>
#include <tencentcloud/tsf/v20180326/model/ModifyLaneResponse.h>
#include <tencentcloud/tsf/v20180326/model/ModifyLaneRuleRequest.h>
#include <tencentcloud/tsf/v20180326/model/ModifyLaneRuleResponse.h>
#include <tencentcloud/tsf/v20180326/model/ModifyMicroserviceRequest.h>
#include <tencentcloud/tsf/v20180326/model/ModifyMicroserviceResponse.h>
#include <tencentcloud/tsf/v20180326/model/ModifyNamespaceRequest.h>
#include <tencentcloud/tsf/v20180326/model/ModifyNamespaceResponse.h>
#include <tencentcloud/tsf/v20180326/model/ModifyPathRewriteRequest.h>
#include <tencentcloud/tsf/v20180326/model/ModifyPathRewriteResponse.h>
#include <tencentcloud/tsf/v20180326/model/ModifyProgramRequest.h>
#include <tencentcloud/tsf/v20180326/model/ModifyProgramResponse.h>
#include <tencentcloud/tsf/v20180326/model/ModifyTaskRequest.h>
#include <tencentcloud/tsf/v20180326/model/ModifyTaskResponse.h>
#include <tencentcloud/tsf/v20180326/model/ModifyUploadInfoRequest.h>
#include <tencentcloud/tsf/v20180326/model/ModifyUploadInfoResponse.h>
#include <tencentcloud/tsf/v20180326/model/OperateApplicationTcrBindingRequest.h>
#include <tencentcloud/tsf/v20180326/model/OperateApplicationTcrBindingResponse.h>
#include <tencentcloud/tsf/v20180326/model/ReassociateBusinessLogConfigRequest.h>
#include <tencentcloud/tsf/v20180326/model/ReassociateBusinessLogConfigResponse.h>
#include <tencentcloud/tsf/v20180326/model/RedoTaskRequest.h>
#include <tencentcloud/tsf/v20180326/model/RedoTaskResponse.h>
#include <tencentcloud/tsf/v20180326/model/RedoTaskBatchRequest.h>
#include <tencentcloud/tsf/v20180326/model/RedoTaskBatchResponse.h>
#include <tencentcloud/tsf/v20180326/model/RedoTaskExecuteRequest.h>
#include <tencentcloud/tsf/v20180326/model/RedoTaskExecuteResponse.h>
#include <tencentcloud/tsf/v20180326/model/RedoTaskFlowBatchRequest.h>
#include <tencentcloud/tsf/v20180326/model/RedoTaskFlowBatchResponse.h>
#include <tencentcloud/tsf/v20180326/model/ReleaseApiGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/ReleaseApiGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/ReleaseConfigRequest.h>
#include <tencentcloud/tsf/v20180326/model/ReleaseConfigResponse.h>
#include <tencentcloud/tsf/v20180326/model/ReleaseConfigWithDetailRespRequest.h>
#include <tencentcloud/tsf/v20180326/model/ReleaseConfigWithDetailRespResponse.h>
#include <tencentcloud/tsf/v20180326/model/ReleaseFileConfigRequest.h>
#include <tencentcloud/tsf/v20180326/model/ReleaseFileConfigResponse.h>
#include <tencentcloud/tsf/v20180326/model/ReleasePublicConfigRequest.h>
#include <tencentcloud/tsf/v20180326/model/ReleasePublicConfigResponse.h>
#include <tencentcloud/tsf/v20180326/model/RemoveInstancesRequest.h>
#include <tencentcloud/tsf/v20180326/model/RemoveInstancesResponse.h>
#include <tencentcloud/tsf/v20180326/model/RevocationConfigRequest.h>
#include <tencentcloud/tsf/v20180326/model/RevocationConfigResponse.h>
#include <tencentcloud/tsf/v20180326/model/RevocationPublicConfigRequest.h>
#include <tencentcloud/tsf/v20180326/model/RevocationPublicConfigResponse.h>
#include <tencentcloud/tsf/v20180326/model/RevokeFileConfigRequest.h>
#include <tencentcloud/tsf/v20180326/model/RevokeFileConfigResponse.h>
#include <tencentcloud/tsf/v20180326/model/RollbackConfigRequest.h>
#include <tencentcloud/tsf/v20180326/model/RollbackConfigResponse.h>
#include <tencentcloud/tsf/v20180326/model/SearchBusinessLogRequest.h>
#include <tencentcloud/tsf/v20180326/model/SearchBusinessLogResponse.h>
#include <tencentcloud/tsf/v20180326/model/SearchStdoutLogRequest.h>
#include <tencentcloud/tsf/v20180326/model/SearchStdoutLogResponse.h>
#include <tencentcloud/tsf/v20180326/model/ShrinkGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/ShrinkGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/ShrinkInstancesRequest.h>
#include <tencentcloud/tsf/v20180326/model/ShrinkInstancesResponse.h>
#include <tencentcloud/tsf/v20180326/model/StartContainerGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/StartContainerGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/StartGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/StartGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/StopContainerGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/StopContainerGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/StopGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/StopGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/StopTaskBatchRequest.h>
#include <tencentcloud/tsf/v20180326/model/StopTaskBatchResponse.h>
#include <tencentcloud/tsf/v20180326/model/StopTaskExecuteRequest.h>
#include <tencentcloud/tsf/v20180326/model/StopTaskExecuteResponse.h>
#include <tencentcloud/tsf/v20180326/model/TerminateTaskFlowBatchRequest.h>
#include <tencentcloud/tsf/v20180326/model/TerminateTaskFlowBatchResponse.h>
#include <tencentcloud/tsf/v20180326/model/UnbindApiGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/UnbindApiGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/UpdateApiGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/UpdateApiGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/UpdateApiRateLimitRuleRequest.h>
#include <tencentcloud/tsf/v20180326/model/UpdateApiRateLimitRuleResponse.h>
#include <tencentcloud/tsf/v20180326/model/UpdateApiRateLimitRulesRequest.h>
#include <tencentcloud/tsf/v20180326/model/UpdateApiRateLimitRulesResponse.h>
#include <tencentcloud/tsf/v20180326/model/UpdateApiTimeoutsRequest.h>
#include <tencentcloud/tsf/v20180326/model/UpdateApiTimeoutsResponse.h>
#include <tencentcloud/tsf/v20180326/model/UpdateConfigTemplateRequest.h>
#include <tencentcloud/tsf/v20180326/model/UpdateConfigTemplateResponse.h>
#include <tencentcloud/tsf/v20180326/model/UpdateGatewayApiRequest.h>
#include <tencentcloud/tsf/v20180326/model/UpdateGatewayApiResponse.h>
#include <tencentcloud/tsf/v20180326/model/UpdateHealthCheckSettingsRequest.h>
#include <tencentcloud/tsf/v20180326/model/UpdateHealthCheckSettingsResponse.h>
#include <tencentcloud/tsf/v20180326/model/UpdateRepositoryRequest.h>
#include <tencentcloud/tsf/v20180326/model/UpdateRepositoryResponse.h>
#include <tencentcloud/tsf/v20180326/model/UpdateUnitRuleRequest.h>
#include <tencentcloud/tsf/v20180326/model/UpdateUnitRuleResponse.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            class TsfClient : public AbstractClient
            {
            public:
                TsfClient(const Credential &credential, const std::string &region);
                TsfClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddClusterInstancesResponse> AddClusterInstancesOutcome;
                typedef std::future<AddClusterInstancesOutcome> AddClusterInstancesOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::AddClusterInstancesRequest&, AddClusterInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddClusterInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::AddInstancesResponse> AddInstancesOutcome;
                typedef std::future<AddInstancesOutcome> AddInstancesOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::AddInstancesRequest&, AddInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::AssociateBusinessLogConfigResponse> AssociateBusinessLogConfigOutcome;
                typedef std::future<AssociateBusinessLogConfigOutcome> AssociateBusinessLogConfigOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::AssociateBusinessLogConfigRequest&, AssociateBusinessLogConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateBusinessLogConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::AssociateConfigWithGroupResponse> AssociateConfigWithGroupOutcome;
                typedef std::future<AssociateConfigWithGroupOutcome> AssociateConfigWithGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::AssociateConfigWithGroupRequest&, AssociateConfigWithGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateConfigWithGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::BindApiGroupResponse> BindApiGroupOutcome;
                typedef std::future<BindApiGroupOutcome> BindApiGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::BindApiGroupRequest&, BindApiGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindApiGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::BindPluginResponse> BindPluginOutcome;
                typedef std::future<BindPluginOutcome> BindPluginOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::BindPluginRequest&, BindPluginOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindPluginAsyncHandler;
                typedef Outcome<Core::Error, Model::ChangeApiUsableStatusResponse> ChangeApiUsableStatusOutcome;
                typedef std::future<ChangeApiUsableStatusOutcome> ChangeApiUsableStatusOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::ChangeApiUsableStatusRequest&, ChangeApiUsableStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChangeApiUsableStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ContinueRunFailedTaskBatchResponse> ContinueRunFailedTaskBatchOutcome;
                typedef std::future<ContinueRunFailedTaskBatchOutcome> ContinueRunFailedTaskBatchOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::ContinueRunFailedTaskBatchRequest&, ContinueRunFailedTaskBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ContinueRunFailedTaskBatchAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAllGatewayApiAsyncResponse> CreateAllGatewayApiAsyncOutcome;
                typedef std::future<CreateAllGatewayApiAsyncOutcome> CreateAllGatewayApiAsyncOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreateAllGatewayApiAsyncRequest&, CreateAllGatewayApiAsyncOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAllGatewayApiAsyncAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateApiGroupResponse> CreateApiGroupOutcome;
                typedef std::future<CreateApiGroupOutcome> CreateApiGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreateApiGroupRequest&, CreateApiGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApiGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateApiRateLimitRuleResponse> CreateApiRateLimitRuleOutcome;
                typedef std::future<CreateApiRateLimitRuleOutcome> CreateApiRateLimitRuleOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreateApiRateLimitRuleRequest&, CreateApiRateLimitRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApiRateLimitRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateApiRateLimitRuleWithDetailRespResponse> CreateApiRateLimitRuleWithDetailRespOutcome;
                typedef std::future<CreateApiRateLimitRuleWithDetailRespOutcome> CreateApiRateLimitRuleWithDetailRespOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreateApiRateLimitRuleWithDetailRespRequest&, CreateApiRateLimitRuleWithDetailRespOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApiRateLimitRuleWithDetailRespAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateApplicationResponse> CreateApplicationOutcome;
                typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreateApplicationRequest&, CreateApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClusterResponse> CreateClusterOutcome;
                typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreateClusterRequest&, CreateClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateConfigResponse> CreateConfigOutcome;
                typedef std::future<CreateConfigOutcome> CreateConfigOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreateConfigRequest&, CreateConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateConfigTemplateResponse> CreateConfigTemplateOutcome;
                typedef std::future<CreateConfigTemplateOutcome> CreateConfigTemplateOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreateConfigTemplateRequest&, CreateConfigTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateConfigTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateConfigTemplateWithDetailRespResponse> CreateConfigTemplateWithDetailRespOutcome;
                typedef std::future<CreateConfigTemplateWithDetailRespOutcome> CreateConfigTemplateWithDetailRespOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreateConfigTemplateWithDetailRespRequest&, CreateConfigTemplateWithDetailRespOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateConfigTemplateWithDetailRespAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateConfigWithDetailRespResponse> CreateConfigWithDetailRespOutcome;
                typedef std::future<CreateConfigWithDetailRespOutcome> CreateConfigWithDetailRespOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreateConfigWithDetailRespRequest&, CreateConfigWithDetailRespOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateConfigWithDetailRespAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateContainGroupResponse> CreateContainGroupOutcome;
                typedef std::future<CreateContainGroupOutcome> CreateContainGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreateContainGroupRequest&, CreateContainGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateContainGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFileConfigResponse> CreateFileConfigOutcome;
                typedef std::future<CreateFileConfigOutcome> CreateFileConfigOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreateFileConfigRequest&, CreateFileConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFileConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFileConfigWithDetailRespResponse> CreateFileConfigWithDetailRespOutcome;
                typedef std::future<CreateFileConfigWithDetailRespOutcome> CreateFileConfigWithDetailRespOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreateFileConfigWithDetailRespRequest&, CreateFileConfigWithDetailRespOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFileConfigWithDetailRespAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateGatewayApiResponse> CreateGatewayApiOutcome;
                typedef std::future<CreateGatewayApiOutcome> CreateGatewayApiOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreateGatewayApiRequest&, CreateGatewayApiOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGatewayApiAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateGroupResponse> CreateGroupOutcome;
                typedef std::future<CreateGroupOutcome> CreateGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreateGroupRequest&, CreateGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLaneResponse> CreateLaneOutcome;
                typedef std::future<CreateLaneOutcome> CreateLaneOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreateLaneRequest&, CreateLaneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLaneAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLaneRuleResponse> CreateLaneRuleOutcome;
                typedef std::future<CreateLaneRuleOutcome> CreateLaneRuleOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreateLaneRuleRequest&, CreateLaneRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLaneRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMicroserviceResponse> CreateMicroserviceOutcome;
                typedef std::future<CreateMicroserviceOutcome> CreateMicroserviceOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreateMicroserviceRequest&, CreateMicroserviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMicroserviceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMicroserviceWithDetailRespResponse> CreateMicroserviceWithDetailRespOutcome;
                typedef std::future<CreateMicroserviceWithDetailRespOutcome> CreateMicroserviceWithDetailRespOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreateMicroserviceWithDetailRespRequest&, CreateMicroserviceWithDetailRespOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMicroserviceWithDetailRespAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNamespaceResponse> CreateNamespaceOutcome;
                typedef std::future<CreateNamespaceOutcome> CreateNamespaceOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreateNamespaceRequest&, CreateNamespaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNamespaceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePathRewritesResponse> CreatePathRewritesOutcome;
                typedef std::future<CreatePathRewritesOutcome> CreatePathRewritesOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreatePathRewritesRequest&, CreatePathRewritesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePathRewritesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePathRewritesWithDetailRespResponse> CreatePathRewritesWithDetailRespOutcome;
                typedef std::future<CreatePathRewritesWithDetailRespOutcome> CreatePathRewritesWithDetailRespOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreatePathRewritesWithDetailRespRequest&, CreatePathRewritesWithDetailRespOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePathRewritesWithDetailRespAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateProgramResponse> CreateProgramOutcome;
                typedef std::future<CreateProgramOutcome> CreateProgramOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreateProgramRequest&, CreateProgramOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProgramAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePublicConfigResponse> CreatePublicConfigOutcome;
                typedef std::future<CreatePublicConfigOutcome> CreatePublicConfigOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreatePublicConfigRequest&, CreatePublicConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePublicConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePublicConfigWithDetailRespResponse> CreatePublicConfigWithDetailRespOutcome;
                typedef std::future<CreatePublicConfigWithDetailRespOutcome> CreatePublicConfigWithDetailRespOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreatePublicConfigWithDetailRespRequest&, CreatePublicConfigWithDetailRespOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePublicConfigWithDetailRespAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRepositoryResponse> CreateRepositoryOutcome;
                typedef std::future<CreateRepositoryOutcome> CreateRepositoryOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreateRepositoryRequest&, CreateRepositoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRepositoryAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTaskResponse> CreateTaskOutcome;
                typedef std::future<CreateTaskOutcome> CreateTaskOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreateTaskRequest&, CreateTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTaskFlowResponse> CreateTaskFlowOutcome;
                typedef std::future<CreateTaskFlowOutcome> CreateTaskFlowOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreateTaskFlowRequest&, CreateTaskFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTaskFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUnitNamespacesResponse> CreateUnitNamespacesOutcome;
                typedef std::future<CreateUnitNamespacesOutcome> CreateUnitNamespacesOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreateUnitNamespacesRequest&, CreateUnitNamespacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUnitNamespacesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUnitRuleResponse> CreateUnitRuleOutcome;
                typedef std::future<CreateUnitRuleOutcome> CreateUnitRuleOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreateUnitRuleRequest&, CreateUnitRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUnitRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUnitRuleWithDetailRespResponse> CreateUnitRuleWithDetailRespOutcome;
                typedef std::future<CreateUnitRuleWithDetailRespOutcome> CreateUnitRuleWithDetailRespOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreateUnitRuleWithDetailRespRequest&, CreateUnitRuleWithDetailRespOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUnitRuleWithDetailRespAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteApiGroupResponse> DeleteApiGroupOutcome;
                typedef std::future<DeleteApiGroupOutcome> DeleteApiGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeleteApiGroupRequest&, DeleteApiGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApiGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteApiRateLimitRuleResponse> DeleteApiRateLimitRuleOutcome;
                typedef std::future<DeleteApiRateLimitRuleOutcome> DeleteApiRateLimitRuleOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeleteApiRateLimitRuleRequest&, DeleteApiRateLimitRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApiRateLimitRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteApplicationResponse> DeleteApplicationOutcome;
                typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeleteApplicationRequest&, DeleteApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteClusterResponse> DeleteClusterOutcome;
                typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeleteClusterRequest&, DeleteClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteConfigResponse> DeleteConfigOutcome;
                typedef std::future<DeleteConfigOutcome> DeleteConfigOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeleteConfigRequest&, DeleteConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteConfigTemplateResponse> DeleteConfigTemplateOutcome;
                typedef std::future<DeleteConfigTemplateOutcome> DeleteConfigTemplateOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeleteConfigTemplateRequest&, DeleteConfigTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConfigTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteContainerGroupResponse> DeleteContainerGroupOutcome;
                typedef std::future<DeleteContainerGroupOutcome> DeleteContainerGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeleteContainerGroupRequest&, DeleteContainerGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteContainerGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteFileConfigResponse> DeleteFileConfigOutcome;
                typedef std::future<DeleteFileConfigOutcome> DeleteFileConfigOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeleteFileConfigRequest&, DeleteFileConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFileConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteGatewayApiResponse> DeleteGatewayApiOutcome;
                typedef std::future<DeleteGatewayApiOutcome> DeleteGatewayApiOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeleteGatewayApiRequest&, DeleteGatewayApiOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGatewayApiAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteGroupResponse> DeleteGroupOutcome;
                typedef std::future<DeleteGroupOutcome> DeleteGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeleteGroupRequest&, DeleteGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteImageTagsResponse> DeleteImageTagsOutcome;
                typedef std::future<DeleteImageTagsOutcome> DeleteImageTagsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeleteImageTagsRequest&, DeleteImageTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLaneResponse> DeleteLaneOutcome;
                typedef std::future<DeleteLaneOutcome> DeleteLaneOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeleteLaneRequest&, DeleteLaneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLaneAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLaneRuleResponse> DeleteLaneRuleOutcome;
                typedef std::future<DeleteLaneRuleOutcome> DeleteLaneRuleOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeleteLaneRuleRequest&, DeleteLaneRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLaneRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMicroserviceResponse> DeleteMicroserviceOutcome;
                typedef std::future<DeleteMicroserviceOutcome> DeleteMicroserviceOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeleteMicroserviceRequest&, DeleteMicroserviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMicroserviceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNamespaceResponse> DeleteNamespaceOutcome;
                typedef std::future<DeleteNamespaceOutcome> DeleteNamespaceOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeleteNamespaceRequest&, DeleteNamespaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNamespaceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePathRewritesResponse> DeletePathRewritesOutcome;
                typedef std::future<DeletePathRewritesOutcome> DeletePathRewritesOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeletePathRewritesRequest&, DeletePathRewritesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePathRewritesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePkgsResponse> DeletePkgsOutcome;
                typedef std::future<DeletePkgsOutcome> DeletePkgsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeletePkgsRequest&, DeletePkgsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePkgsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePublicConfigResponse> DeletePublicConfigOutcome;
                typedef std::future<DeletePublicConfigOutcome> DeletePublicConfigOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeletePublicConfigRequest&, DeletePublicConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePublicConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRepositoryResponse> DeleteRepositoryOutcome;
                typedef std::future<DeleteRepositoryOutcome> DeleteRepositoryOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeleteRepositoryRequest&, DeleteRepositoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRepositoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteServerlessGroupResponse> DeleteServerlessGroupOutcome;
                typedef std::future<DeleteServerlessGroupOutcome> DeleteServerlessGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeleteServerlessGroupRequest&, DeleteServerlessGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServerlessGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTaskResponse> DeleteTaskOutcome;
                typedef std::future<DeleteTaskOutcome> DeleteTaskOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeleteTaskRequest&, DeleteTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUnitNamespacesResponse> DeleteUnitNamespacesOutcome;
                typedef std::future<DeleteUnitNamespacesOutcome> DeleteUnitNamespacesOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeleteUnitNamespacesRequest&, DeleteUnitNamespacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUnitNamespacesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUnitRuleResponse> DeleteUnitRuleOutcome;
                typedef std::future<DeleteUnitRuleOutcome> DeleteUnitRuleOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeleteUnitRuleRequest&, DeleteUnitRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUnitRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeployContainerGroupResponse> DeployContainerGroupOutcome;
                typedef std::future<DeployContainerGroupOutcome> DeployContainerGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeployContainerGroupRequest&, DeployContainerGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeployContainerGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeployGroupResponse> DeployGroupOutcome;
                typedef std::future<DeployGroupOutcome> DeployGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeployGroupRequest&, DeployGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeployGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApiDetailResponse> DescribeApiDetailOutcome;
                typedef std::future<DescribeApiDetailOutcome> DescribeApiDetailOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeApiDetailRequest&, DescribeApiDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApiGroupResponse> DescribeApiGroupOutcome;
                typedef std::future<DescribeApiGroupOutcome> DescribeApiGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeApiGroupRequest&, DescribeApiGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApiGroupsResponse> DescribeApiGroupsOutcome;
                typedef std::future<DescribeApiGroupsOutcome> DescribeApiGroupsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeApiGroupsRequest&, DescribeApiGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApiRateLimitRulesResponse> DescribeApiRateLimitRulesOutcome;
                typedef std::future<DescribeApiRateLimitRulesOutcome> DescribeApiRateLimitRulesOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeApiRateLimitRulesRequest&, DescribeApiRateLimitRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiRateLimitRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApiUseDetailResponse> DescribeApiUseDetailOutcome;
                typedef std::future<DescribeApiUseDetailOutcome> DescribeApiUseDetailOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeApiUseDetailRequest&, DescribeApiUseDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiUseDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApiVersionsResponse> DescribeApiVersionsOutcome;
                typedef std::future<DescribeApiVersionsOutcome> DescribeApiVersionsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeApiVersionsRequest&, DescribeApiVersionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiVersionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationResponse> DescribeApplicationOutcome;
                typedef std::future<DescribeApplicationOutcome> DescribeApplicationOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeApplicationRequest&, DescribeApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationAttributeResponse> DescribeApplicationAttributeOutcome;
                typedef std::future<DescribeApplicationAttributeOutcome> DescribeApplicationAttributeOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeApplicationAttributeRequest&, DescribeApplicationAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationsResponse> DescribeApplicationsOutcome;
                typedef std::future<DescribeApplicationsOutcome> DescribeApplicationsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeApplicationsRequest&, DescribeApplicationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBasicResourceUsageResponse> DescribeBasicResourceUsageOutcome;
                typedef std::future<DescribeBasicResourceUsageOutcome> DescribeBasicResourceUsageOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeBasicResourceUsageRequest&, DescribeBasicResourceUsageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBasicResourceUsageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBusinessLogConfigResponse> DescribeBusinessLogConfigOutcome;
                typedef std::future<DescribeBusinessLogConfigOutcome> DescribeBusinessLogConfigOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeBusinessLogConfigRequest&, DescribeBusinessLogConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBusinessLogConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBusinessLogConfigsResponse> DescribeBusinessLogConfigsOutcome;
                typedef std::future<DescribeBusinessLogConfigsOutcome> DescribeBusinessLogConfigsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeBusinessLogConfigsRequest&, DescribeBusinessLogConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBusinessLogConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterInstancesResponse> DescribeClusterInstancesOutcome;
                typedef std::future<DescribeClusterInstancesOutcome> DescribeClusterInstancesOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeClusterInstancesRequest&, DescribeClusterInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClustersResponse> DescribeClustersOutcome;
                typedef std::future<DescribeClustersOutcome> DescribeClustersOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeClustersRequest&, DescribeClustersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClustersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConfigResponse> DescribeConfigOutcome;
                typedef std::future<DescribeConfigOutcome> DescribeConfigOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeConfigRequest&, DescribeConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConfigReleaseLogsResponse> DescribeConfigReleaseLogsOutcome;
                typedef std::future<DescribeConfigReleaseLogsOutcome> DescribeConfigReleaseLogsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeConfigReleaseLogsRequest&, DescribeConfigReleaseLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigReleaseLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConfigReleasesResponse> DescribeConfigReleasesOutcome;
                typedef std::future<DescribeConfigReleasesOutcome> DescribeConfigReleasesOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeConfigReleasesRequest&, DescribeConfigReleasesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigReleasesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConfigSummaryResponse> DescribeConfigSummaryOutcome;
                typedef std::future<DescribeConfigSummaryOutcome> DescribeConfigSummaryOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeConfigSummaryRequest&, DescribeConfigSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConfigTemplateResponse> DescribeConfigTemplateOutcome;
                typedef std::future<DescribeConfigTemplateOutcome> DescribeConfigTemplateOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeConfigTemplateRequest&, DescribeConfigTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConfigsResponse> DescribeConfigsOutcome;
                typedef std::future<DescribeConfigsOutcome> DescribeConfigsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeConfigsRequest&, DescribeConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeContainerEventsResponse> DescribeContainerEventsOutcome;
                typedef std::future<DescribeContainerEventsOutcome> DescribeContainerEventsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeContainerEventsRequest&, DescribeContainerEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeContainerEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeContainerGroupAttributeResponse> DescribeContainerGroupAttributeOutcome;
                typedef std::future<DescribeContainerGroupAttributeOutcome> DescribeContainerGroupAttributeOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeContainerGroupAttributeRequest&, DescribeContainerGroupAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeContainerGroupAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeContainerGroupDeployInfoResponse> DescribeContainerGroupDeployInfoOutcome;
                typedef std::future<DescribeContainerGroupDeployInfoOutcome> DescribeContainerGroupDeployInfoOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeContainerGroupDeployInfoRequest&, DescribeContainerGroupDeployInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeContainerGroupDeployInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeContainerGroupDetailResponse> DescribeContainerGroupDetailOutcome;
                typedef std::future<DescribeContainerGroupDetailOutcome> DescribeContainerGroupDetailOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeContainerGroupDetailRequest&, DescribeContainerGroupDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeContainerGroupDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeContainerGroupsResponse> DescribeContainerGroupsOutcome;
                typedef std::future<DescribeContainerGroupsOutcome> DescribeContainerGroupsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeContainerGroupsRequest&, DescribeContainerGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeContainerGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCreateGatewayApiStatusResponse> DescribeCreateGatewayApiStatusOutcome;
                typedef std::future<DescribeCreateGatewayApiStatusOutcome> DescribeCreateGatewayApiStatusOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeCreateGatewayApiStatusRequest&, DescribeCreateGatewayApiStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCreateGatewayApiStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeliveryConfigResponse> DescribeDeliveryConfigOutcome;
                typedef std::future<DescribeDeliveryConfigOutcome> DescribeDeliveryConfigOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeDeliveryConfigRequest&, DescribeDeliveryConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeliveryConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeliveryConfigByGroupIdResponse> DescribeDeliveryConfigByGroupIdOutcome;
                typedef std::future<DescribeDeliveryConfigByGroupIdOutcome> DescribeDeliveryConfigByGroupIdOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeDeliveryConfigByGroupIdRequest&, DescribeDeliveryConfigByGroupIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeliveryConfigByGroupIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeliveryConfigsResponse> DescribeDeliveryConfigsOutcome;
                typedef std::future<DescribeDeliveryConfigsOutcome> DescribeDeliveryConfigsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeDeliveryConfigsRequest&, DescribeDeliveryConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeliveryConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDownloadInfoResponse> DescribeDownloadInfoOutcome;
                typedef std::future<DescribeDownloadInfoOutcome> DescribeDownloadInfoOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeDownloadInfoRequest&, DescribeDownloadInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDownloadInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEnabledUnitRuleResponse> DescribeEnabledUnitRuleOutcome;
                typedef std::future<DescribeEnabledUnitRuleOutcome> DescribeEnabledUnitRuleOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeEnabledUnitRuleRequest&, DescribeEnabledUnitRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnabledUnitRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFileConfigReleasesResponse> DescribeFileConfigReleasesOutcome;
                typedef std::future<DescribeFileConfigReleasesOutcome> DescribeFileConfigReleasesOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeFileConfigReleasesRequest&, DescribeFileConfigReleasesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFileConfigReleasesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFileConfigsResponse> DescribeFileConfigsOutcome;
                typedef std::future<DescribeFileConfigsOutcome> DescribeFileConfigsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeFileConfigsRequest&, DescribeFileConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFileConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFlowLastBatchStateResponse> DescribeFlowLastBatchStateOutcome;
                typedef std::future<DescribeFlowLastBatchStateOutcome> DescribeFlowLastBatchStateOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeFlowLastBatchStateRequest&, DescribeFlowLastBatchStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowLastBatchStateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGatewayAllGroupApisResponse> DescribeGatewayAllGroupApisOutcome;
                typedef std::future<DescribeGatewayAllGroupApisOutcome> DescribeGatewayAllGroupApisOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeGatewayAllGroupApisRequest&, DescribeGatewayAllGroupApisOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewayAllGroupApisAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGatewayApisResponse> DescribeGatewayApisOutcome;
                typedef std::future<DescribeGatewayApisOutcome> DescribeGatewayApisOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeGatewayApisRequest&, DescribeGatewayApisOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewayApisAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGatewayMonitorOverviewResponse> DescribeGatewayMonitorOverviewOutcome;
                typedef std::future<DescribeGatewayMonitorOverviewOutcome> DescribeGatewayMonitorOverviewOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeGatewayMonitorOverviewRequest&, DescribeGatewayMonitorOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewayMonitorOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGroupResponse> DescribeGroupOutcome;
                typedef std::future<DescribeGroupOutcome> DescribeGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeGroupRequest&, DescribeGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGroupAttributeResponse> DescribeGroupAttributeOutcome;
                typedef std::future<DescribeGroupAttributeOutcome> DescribeGroupAttributeOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeGroupAttributeRequest&, DescribeGroupAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGroupBindedGatewaysResponse> DescribeGroupBindedGatewaysOutcome;
                typedef std::future<DescribeGroupBindedGatewaysOutcome> DescribeGroupBindedGatewaysOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeGroupBindedGatewaysRequest&, DescribeGroupBindedGatewaysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupBindedGatewaysAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGroupBusinessLogConfigsResponse> DescribeGroupBusinessLogConfigsOutcome;
                typedef std::future<DescribeGroupBusinessLogConfigsOutcome> DescribeGroupBusinessLogConfigsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeGroupBusinessLogConfigsRequest&, DescribeGroupBusinessLogConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupBusinessLogConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGroupGatewaysResponse> DescribeGroupGatewaysOutcome;
                typedef std::future<DescribeGroupGatewaysOutcome> DescribeGroupGatewaysOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeGroupGatewaysRequest&, DescribeGroupGatewaysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupGatewaysAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGroupInstancesResponse> DescribeGroupInstancesOutcome;
                typedef std::future<DescribeGroupInstancesOutcome> DescribeGroupInstancesOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeGroupInstancesRequest&, DescribeGroupInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGroupReleaseResponse> DescribeGroupReleaseOutcome;
                typedef std::future<DescribeGroupReleaseOutcome> DescribeGroupReleaseOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeGroupReleaseRequest&, DescribeGroupReleaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupReleaseAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGroupUseDetailResponse> DescribeGroupUseDetailOutcome;
                typedef std::future<DescribeGroupUseDetailOutcome> DescribeGroupUseDetailOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeGroupUseDetailRequest&, DescribeGroupUseDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupUseDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGroupsResponse> DescribeGroupsOutcome;
                typedef std::future<DescribeGroupsOutcome> DescribeGroupsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeGroupsRequest&, DescribeGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGroupsWithPluginResponse> DescribeGroupsWithPluginOutcome;
                typedef std::future<DescribeGroupsWithPluginOutcome> DescribeGroupsWithPluginOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeGroupsWithPluginRequest&, DescribeGroupsWithPluginOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupsWithPluginAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageRepositoryResponse> DescribeImageRepositoryOutcome;
                typedef std::future<DescribeImageRepositoryOutcome> DescribeImageRepositoryOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeImageRepositoryRequest&, DescribeImageRepositoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageRepositoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageTagsResponse> DescribeImageTagsOutcome;
                typedef std::future<DescribeImageTagsOutcome> DescribeImageTagsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeImageTagsRequest&, DescribeImageTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInovcationIndicatorsResponse> DescribeInovcationIndicatorsOutcome;
                typedef std::future<DescribeInovcationIndicatorsOutcome> DescribeInovcationIndicatorsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeInovcationIndicatorsRequest&, DescribeInovcationIndicatorsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInovcationIndicatorsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesResponse> DescribeInstancesOutcome;
                typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeInstancesRequest&, DescribeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInvocationMetricDataCurveResponse> DescribeInvocationMetricDataCurveOutcome;
                typedef std::future<DescribeInvocationMetricDataCurveOutcome> DescribeInvocationMetricDataCurveOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeInvocationMetricDataCurveRequest&, DescribeInvocationMetricDataCurveOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInvocationMetricDataCurveAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInvocationMetricDataDimensionResponse> DescribeInvocationMetricDataDimensionOutcome;
                typedef std::future<DescribeInvocationMetricDataDimensionOutcome> DescribeInvocationMetricDataDimensionOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeInvocationMetricDataDimensionRequest&, DescribeInvocationMetricDataDimensionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInvocationMetricDataDimensionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInvocationMetricDataPointResponse> DescribeInvocationMetricDataPointOutcome;
                typedef std::future<DescribeInvocationMetricDataPointOutcome> DescribeInvocationMetricDataPointOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeInvocationMetricDataPointRequest&, DescribeInvocationMetricDataPointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInvocationMetricDataPointAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInvocationMetricScatterPlotResponse> DescribeInvocationMetricScatterPlotOutcome;
                typedef std::future<DescribeInvocationMetricScatterPlotOutcome> DescribeInvocationMetricScatterPlotOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeInvocationMetricScatterPlotRequest&, DescribeInvocationMetricScatterPlotOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInvocationMetricScatterPlotAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeJvmMonitorResponse> DescribeJvmMonitorOutcome;
                typedef std::future<DescribeJvmMonitorOutcome> DescribeJvmMonitorOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeJvmMonitorRequest&, DescribeJvmMonitorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJvmMonitorAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLaneRulesResponse> DescribeLaneRulesOutcome;
                typedef std::future<DescribeLaneRulesOutcome> DescribeLaneRulesOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeLaneRulesRequest&, DescribeLaneRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLaneRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLanesResponse> DescribeLanesOutcome;
                typedef std::future<DescribeLanesOutcome> DescribeLanesOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeLanesRequest&, DescribeLanesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLanesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMicroserviceResponse> DescribeMicroserviceOutcome;
                typedef std::future<DescribeMicroserviceOutcome> DescribeMicroserviceOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeMicroserviceRequest&, DescribeMicroserviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMicroserviceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMicroservicesResponse> DescribeMicroservicesOutcome;
                typedef std::future<DescribeMicroservicesOutcome> DescribeMicroservicesOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeMicroservicesRequest&, DescribeMicroservicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMicroservicesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMicroservicesByGroupIdsResponse> DescribeMicroservicesByGroupIdsOutcome;
                typedef std::future<DescribeMicroservicesByGroupIdsOutcome> DescribeMicroservicesByGroupIdsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeMicroservicesByGroupIdsRequest&, DescribeMicroservicesByGroupIdsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMicroservicesByGroupIdsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMsApiListResponse> DescribeMsApiListOutcome;
                typedef std::future<DescribeMsApiListOutcome> DescribeMsApiListOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeMsApiListRequest&, DescribeMsApiListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMsApiListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOverviewInvocationResponse> DescribeOverviewInvocationOutcome;
                typedef std::future<DescribeOverviewInvocationOutcome> DescribeOverviewInvocationOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeOverviewInvocationRequest&, DescribeOverviewInvocationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOverviewInvocationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePathRewriteResponse> DescribePathRewriteOutcome;
                typedef std::future<DescribePathRewriteOutcome> DescribePathRewriteOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribePathRewriteRequest&, DescribePathRewriteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePathRewriteAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePathRewritesResponse> DescribePathRewritesOutcome;
                typedef std::future<DescribePathRewritesOutcome> DescribePathRewritesOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribePathRewritesRequest&, DescribePathRewritesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePathRewritesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePkgsResponse> DescribePkgsOutcome;
                typedef std::future<DescribePkgsOutcome> DescribePkgsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribePkgsRequest&, DescribePkgsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePkgsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePluginInstancesResponse> DescribePluginInstancesOutcome;
                typedef std::future<DescribePluginInstancesOutcome> DescribePluginInstancesOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribePluginInstancesRequest&, DescribePluginInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePluginInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePodInstancesResponse> DescribePodInstancesOutcome;
                typedef std::future<DescribePodInstancesOutcome> DescribePodInstancesOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribePodInstancesRequest&, DescribePodInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePodInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProgramsResponse> DescribeProgramsOutcome;
                typedef std::future<DescribeProgramsOutcome> DescribeProgramsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeProgramsRequest&, DescribeProgramsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProgramsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePublicConfigResponse> DescribePublicConfigOutcome;
                typedef std::future<DescribePublicConfigOutcome> DescribePublicConfigOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribePublicConfigRequest&, DescribePublicConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePublicConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePublicConfigReleaseLogsResponse> DescribePublicConfigReleaseLogsOutcome;
                typedef std::future<DescribePublicConfigReleaseLogsOutcome> DescribePublicConfigReleaseLogsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribePublicConfigReleaseLogsRequest&, DescribePublicConfigReleaseLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePublicConfigReleaseLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePublicConfigReleasesResponse> DescribePublicConfigReleasesOutcome;
                typedef std::future<DescribePublicConfigReleasesOutcome> DescribePublicConfigReleasesOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribePublicConfigReleasesRequest&, DescribePublicConfigReleasesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePublicConfigReleasesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePublicConfigSummaryResponse> DescribePublicConfigSummaryOutcome;
                typedef std::future<DescribePublicConfigSummaryOutcome> DescribePublicConfigSummaryOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribePublicConfigSummaryRequest&, DescribePublicConfigSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePublicConfigSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePublicConfigsResponse> DescribePublicConfigsOutcome;
                typedef std::future<DescribePublicConfigsOutcome> DescribePublicConfigsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribePublicConfigsRequest&, DescribePublicConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePublicConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReleasedConfigResponse> DescribeReleasedConfigOutcome;
                typedef std::future<DescribeReleasedConfigOutcome> DescribeReleasedConfigOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeReleasedConfigRequest&, DescribeReleasedConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReleasedConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRepositoriesResponse> DescribeRepositoriesOutcome;
                typedef std::future<DescribeRepositoriesOutcome> DescribeRepositoriesOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeRepositoriesRequest&, DescribeRepositoriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRepositoriesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRepositoryResponse> DescribeRepositoryOutcome;
                typedef std::future<DescribeRepositoryOutcome> DescribeRepositoryOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeRepositoryRequest&, DescribeRepositoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRepositoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourceTaskStatusResponse> DescribeResourceTaskStatusOutcome;
                typedef std::future<DescribeResourceTaskStatusOutcome> DescribeResourceTaskStatusOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeResourceTaskStatusRequest&, DescribeResourceTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceTaskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSimpleApplicationsResponse> DescribeSimpleApplicationsOutcome;
                typedef std::future<DescribeSimpleApplicationsOutcome> DescribeSimpleApplicationsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeSimpleApplicationsRequest&, DescribeSimpleApplicationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSimpleApplicationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSimpleClustersResponse> DescribeSimpleClustersOutcome;
                typedef std::future<DescribeSimpleClustersOutcome> DescribeSimpleClustersOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeSimpleClustersRequest&, DescribeSimpleClustersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSimpleClustersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSimpleGroupsResponse> DescribeSimpleGroupsOutcome;
                typedef std::future<DescribeSimpleGroupsOutcome> DescribeSimpleGroupsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeSimpleGroupsRequest&, DescribeSimpleGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSimpleGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSimpleNamespacesResponse> DescribeSimpleNamespacesOutcome;
                typedef std::future<DescribeSimpleNamespacesOutcome> DescribeSimpleNamespacesOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeSimpleNamespacesRequest&, DescribeSimpleNamespacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSimpleNamespacesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStatisticsResponse> DescribeStatisticsOutcome;
                typedef std::future<DescribeStatisticsOutcome> DescribeStatisticsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeStatisticsRequest&, DescribeStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskDetailResponse> DescribeTaskDetailOutcome;
                typedef std::future<DescribeTaskDetailOutcome> DescribeTaskDetailOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeTaskDetailRequest&, DescribeTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskLastStatusResponse> DescribeTaskLastStatusOutcome;
                typedef std::future<DescribeTaskLastStatusOutcome> DescribeTaskLastStatusOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeTaskLastStatusRequest&, DescribeTaskLastStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskLastStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskRecordsResponse> DescribeTaskRecordsOutcome;
                typedef std::future<DescribeTaskRecordsOutcome> DescribeTaskRecordsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeTaskRecordsRequest&, DescribeTaskRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskRecordsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUnitApiUseDetailResponse> DescribeUnitApiUseDetailOutcome;
                typedef std::future<DescribeUnitApiUseDetailOutcome> DescribeUnitApiUseDetailOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeUnitApiUseDetailRequest&, DescribeUnitApiUseDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUnitApiUseDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUnitNamespacesResponse> DescribeUnitNamespacesOutcome;
                typedef std::future<DescribeUnitNamespacesOutcome> DescribeUnitNamespacesOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeUnitNamespacesRequest&, DescribeUnitNamespacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUnitNamespacesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUnitRuleResponse> DescribeUnitRuleOutcome;
                typedef std::future<DescribeUnitRuleOutcome> DescribeUnitRuleOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeUnitRuleRequest&, DescribeUnitRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUnitRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUnitRulesResponse> DescribeUnitRulesOutcome;
                typedef std::future<DescribeUnitRulesOutcome> DescribeUnitRulesOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeUnitRulesRequest&, DescribeUnitRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUnitRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUnitRulesV2Response> DescribeUnitRulesV2Outcome;
                typedef std::future<DescribeUnitRulesV2Outcome> DescribeUnitRulesV2OutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeUnitRulesV2Request&, DescribeUnitRulesV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUnitRulesV2AsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUploadInfoResponse> DescribeUploadInfoOutcome;
                typedef std::future<DescribeUploadInfoOutcome> DescribeUploadInfoOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeUploadInfoRequest&, DescribeUploadInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUploadInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUsableUnitNamespacesResponse> DescribeUsableUnitNamespacesOutcome;
                typedef std::future<DescribeUsableUnitNamespacesOutcome> DescribeUsableUnitNamespacesOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeUsableUnitNamespacesRequest&, DescribeUsableUnitNamespacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsableUnitNamespacesAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableLaneRuleResponse> DisableLaneRuleOutcome;
                typedef std::future<DisableLaneRuleOutcome> DisableLaneRuleOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DisableLaneRuleRequest&, DisableLaneRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableLaneRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableTaskResponse> DisableTaskOutcome;
                typedef std::future<DisableTaskOutcome> DisableTaskOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DisableTaskRequest&, DisableTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableTaskFlowResponse> DisableTaskFlowOutcome;
                typedef std::future<DisableTaskFlowOutcome> DisableTaskFlowOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DisableTaskFlowRequest&, DisableTaskFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableTaskFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableUnitRouteResponse> DisableUnitRouteOutcome;
                typedef std::future<DisableUnitRouteOutcome> DisableUnitRouteOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DisableUnitRouteRequest&, DisableUnitRouteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableUnitRouteAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableUnitRuleResponse> DisableUnitRuleOutcome;
                typedef std::future<DisableUnitRuleOutcome> DisableUnitRuleOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DisableUnitRuleRequest&, DisableUnitRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableUnitRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateBusinessLogConfigResponse> DisassociateBusinessLogConfigOutcome;
                typedef std::future<DisassociateBusinessLogConfigOutcome> DisassociateBusinessLogConfigOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DisassociateBusinessLogConfigRequest&, DisassociateBusinessLogConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateBusinessLogConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateKafkaConfigResponse> DisassociateKafkaConfigOutcome;
                typedef std::future<DisassociateKafkaConfigOutcome> DisassociateKafkaConfigOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DisassociateKafkaConfigRequest&, DisassociateKafkaConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateKafkaConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DraftApiGroupResponse> DraftApiGroupOutcome;
                typedef std::future<DraftApiGroupOutcome> DraftApiGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DraftApiGroupRequest&, DraftApiGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DraftApiGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableLaneRuleResponse> EnableLaneRuleOutcome;
                typedef std::future<EnableLaneRuleOutcome> EnableLaneRuleOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::EnableLaneRuleRequest&, EnableLaneRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableLaneRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableTaskResponse> EnableTaskOutcome;
                typedef std::future<EnableTaskOutcome> EnableTaskOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::EnableTaskRequest&, EnableTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableTaskFlowResponse> EnableTaskFlowOutcome;
                typedef std::future<EnableTaskFlowOutcome> EnableTaskFlowOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::EnableTaskFlowRequest&, EnableTaskFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableTaskFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableUnitRouteResponse> EnableUnitRouteOutcome;
                typedef std::future<EnableUnitRouteOutcome> EnableUnitRouteOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::EnableUnitRouteRequest&, EnableUnitRouteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableUnitRouteAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableUnitRuleResponse> EnableUnitRuleOutcome;
                typedef std::future<EnableUnitRuleOutcome> EnableUnitRuleOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::EnableUnitRuleRequest&, EnableUnitRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableUnitRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ExecuteTaskResponse> ExecuteTaskOutcome;
                typedef std::future<ExecuteTaskOutcome> ExecuteTaskOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::ExecuteTaskRequest&, ExecuteTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::ExecuteTaskFlowResponse> ExecuteTaskFlowOutcome;
                typedef std::future<ExecuteTaskFlowOutcome> ExecuteTaskFlowOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::ExecuteTaskFlowRequest&, ExecuteTaskFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteTaskFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::ExpandGroupResponse> ExpandGroupOutcome;
                typedef std::future<ExpandGroupOutcome> ExpandGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::ExpandGroupRequest&, ExpandGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExpandGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApplicationResponse> ModifyApplicationOutcome;
                typedef std::future<ModifyApplicationOutcome> ModifyApplicationOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::ModifyApplicationRequest&, ModifyApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClusterResponse> ModifyClusterOutcome;
                typedef std::future<ModifyClusterOutcome> ModifyClusterOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::ModifyClusterRequest&, ModifyClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyContainerGroupResponse> ModifyContainerGroupOutcome;
                typedef std::future<ModifyContainerGroupOutcome> ModifyContainerGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::ModifyContainerGroupRequest&, ModifyContainerGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyContainerGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyContainerReplicasResponse> ModifyContainerReplicasOutcome;
                typedef std::future<ModifyContainerReplicasOutcome> ModifyContainerReplicasOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::ModifyContainerReplicasRequest&, ModifyContainerReplicasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyContainerReplicasAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyGroupResponse> ModifyGroupOutcome;
                typedef std::future<ModifyGroupOutcome> ModifyGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::ModifyGroupRequest&, ModifyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLaneResponse> ModifyLaneOutcome;
                typedef std::future<ModifyLaneOutcome> ModifyLaneOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::ModifyLaneRequest&, ModifyLaneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLaneAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLaneRuleResponse> ModifyLaneRuleOutcome;
                typedef std::future<ModifyLaneRuleOutcome> ModifyLaneRuleOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::ModifyLaneRuleRequest&, ModifyLaneRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLaneRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMicroserviceResponse> ModifyMicroserviceOutcome;
                typedef std::future<ModifyMicroserviceOutcome> ModifyMicroserviceOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::ModifyMicroserviceRequest&, ModifyMicroserviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMicroserviceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNamespaceResponse> ModifyNamespaceOutcome;
                typedef std::future<ModifyNamespaceOutcome> ModifyNamespaceOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::ModifyNamespaceRequest&, ModifyNamespaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNamespaceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPathRewriteResponse> ModifyPathRewriteOutcome;
                typedef std::future<ModifyPathRewriteOutcome> ModifyPathRewriteOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::ModifyPathRewriteRequest&, ModifyPathRewriteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPathRewriteAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyProgramResponse> ModifyProgramOutcome;
                typedef std::future<ModifyProgramOutcome> ModifyProgramOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::ModifyProgramRequest&, ModifyProgramOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProgramAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTaskResponse> ModifyTaskOutcome;
                typedef std::future<ModifyTaskOutcome> ModifyTaskOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::ModifyTaskRequest&, ModifyTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUploadInfoResponse> ModifyUploadInfoOutcome;
                typedef std::future<ModifyUploadInfoOutcome> ModifyUploadInfoOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::ModifyUploadInfoRequest&, ModifyUploadInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUploadInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::OperateApplicationTcrBindingResponse> OperateApplicationTcrBindingOutcome;
                typedef std::future<OperateApplicationTcrBindingOutcome> OperateApplicationTcrBindingOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::OperateApplicationTcrBindingRequest&, OperateApplicationTcrBindingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OperateApplicationTcrBindingAsyncHandler;
                typedef Outcome<Core::Error, Model::ReassociateBusinessLogConfigResponse> ReassociateBusinessLogConfigOutcome;
                typedef std::future<ReassociateBusinessLogConfigOutcome> ReassociateBusinessLogConfigOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::ReassociateBusinessLogConfigRequest&, ReassociateBusinessLogConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReassociateBusinessLogConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::RedoTaskResponse> RedoTaskOutcome;
                typedef std::future<RedoTaskOutcome> RedoTaskOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::RedoTaskRequest&, RedoTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RedoTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::RedoTaskBatchResponse> RedoTaskBatchOutcome;
                typedef std::future<RedoTaskBatchOutcome> RedoTaskBatchOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::RedoTaskBatchRequest&, RedoTaskBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RedoTaskBatchAsyncHandler;
                typedef Outcome<Core::Error, Model::RedoTaskExecuteResponse> RedoTaskExecuteOutcome;
                typedef std::future<RedoTaskExecuteOutcome> RedoTaskExecuteOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::RedoTaskExecuteRequest&, RedoTaskExecuteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RedoTaskExecuteAsyncHandler;
                typedef Outcome<Core::Error, Model::RedoTaskFlowBatchResponse> RedoTaskFlowBatchOutcome;
                typedef std::future<RedoTaskFlowBatchOutcome> RedoTaskFlowBatchOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::RedoTaskFlowBatchRequest&, RedoTaskFlowBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RedoTaskFlowBatchAsyncHandler;
                typedef Outcome<Core::Error, Model::ReleaseApiGroupResponse> ReleaseApiGroupOutcome;
                typedef std::future<ReleaseApiGroupOutcome> ReleaseApiGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::ReleaseApiGroupRequest&, ReleaseApiGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseApiGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ReleaseConfigResponse> ReleaseConfigOutcome;
                typedef std::future<ReleaseConfigOutcome> ReleaseConfigOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::ReleaseConfigRequest&, ReleaseConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ReleaseConfigWithDetailRespResponse> ReleaseConfigWithDetailRespOutcome;
                typedef std::future<ReleaseConfigWithDetailRespOutcome> ReleaseConfigWithDetailRespOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::ReleaseConfigWithDetailRespRequest&, ReleaseConfigWithDetailRespOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseConfigWithDetailRespAsyncHandler;
                typedef Outcome<Core::Error, Model::ReleaseFileConfigResponse> ReleaseFileConfigOutcome;
                typedef std::future<ReleaseFileConfigOutcome> ReleaseFileConfigOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::ReleaseFileConfigRequest&, ReleaseFileConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseFileConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ReleasePublicConfigResponse> ReleasePublicConfigOutcome;
                typedef std::future<ReleasePublicConfigOutcome> ReleasePublicConfigOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::ReleasePublicConfigRequest&, ReleasePublicConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReleasePublicConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveInstancesResponse> RemoveInstancesOutcome;
                typedef std::future<RemoveInstancesOutcome> RemoveInstancesOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::RemoveInstancesRequest&, RemoveInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::RevocationConfigResponse> RevocationConfigOutcome;
                typedef std::future<RevocationConfigOutcome> RevocationConfigOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::RevocationConfigRequest&, RevocationConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RevocationConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::RevocationPublicConfigResponse> RevocationPublicConfigOutcome;
                typedef std::future<RevocationPublicConfigOutcome> RevocationPublicConfigOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::RevocationPublicConfigRequest&, RevocationPublicConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RevocationPublicConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::RevokeFileConfigResponse> RevokeFileConfigOutcome;
                typedef std::future<RevokeFileConfigOutcome> RevokeFileConfigOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::RevokeFileConfigRequest&, RevokeFileConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RevokeFileConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::RollbackConfigResponse> RollbackConfigOutcome;
                typedef std::future<RollbackConfigOutcome> RollbackConfigOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::RollbackConfigRequest&, RollbackConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RollbackConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchBusinessLogResponse> SearchBusinessLogOutcome;
                typedef std::future<SearchBusinessLogOutcome> SearchBusinessLogOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::SearchBusinessLogRequest&, SearchBusinessLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchBusinessLogAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchStdoutLogResponse> SearchStdoutLogOutcome;
                typedef std::future<SearchStdoutLogOutcome> SearchStdoutLogOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::SearchStdoutLogRequest&, SearchStdoutLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchStdoutLogAsyncHandler;
                typedef Outcome<Core::Error, Model::ShrinkGroupResponse> ShrinkGroupOutcome;
                typedef std::future<ShrinkGroupOutcome> ShrinkGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::ShrinkGroupRequest&, ShrinkGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ShrinkGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ShrinkInstancesResponse> ShrinkInstancesOutcome;
                typedef std::future<ShrinkInstancesOutcome> ShrinkInstancesOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::ShrinkInstancesRequest&, ShrinkInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ShrinkInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::StartContainerGroupResponse> StartContainerGroupOutcome;
                typedef std::future<StartContainerGroupOutcome> StartContainerGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::StartContainerGroupRequest&, StartContainerGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartContainerGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::StartGroupResponse> StartGroupOutcome;
                typedef std::future<StartGroupOutcome> StartGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::StartGroupRequest&, StartGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::StopContainerGroupResponse> StopContainerGroupOutcome;
                typedef std::future<StopContainerGroupOutcome> StopContainerGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::StopContainerGroupRequest&, StopContainerGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopContainerGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::StopGroupResponse> StopGroupOutcome;
                typedef std::future<StopGroupOutcome> StopGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::StopGroupRequest&, StopGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::StopTaskBatchResponse> StopTaskBatchOutcome;
                typedef std::future<StopTaskBatchOutcome> StopTaskBatchOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::StopTaskBatchRequest&, StopTaskBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopTaskBatchAsyncHandler;
                typedef Outcome<Core::Error, Model::StopTaskExecuteResponse> StopTaskExecuteOutcome;
                typedef std::future<StopTaskExecuteOutcome> StopTaskExecuteOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::StopTaskExecuteRequest&, StopTaskExecuteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopTaskExecuteAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminateTaskFlowBatchResponse> TerminateTaskFlowBatchOutcome;
                typedef std::future<TerminateTaskFlowBatchOutcome> TerminateTaskFlowBatchOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::TerminateTaskFlowBatchRequest&, TerminateTaskFlowBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateTaskFlowBatchAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindApiGroupResponse> UnbindApiGroupOutcome;
                typedef std::future<UnbindApiGroupOutcome> UnbindApiGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::UnbindApiGroupRequest&, UnbindApiGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindApiGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateApiGroupResponse> UpdateApiGroupOutcome;
                typedef std::future<UpdateApiGroupOutcome> UpdateApiGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::UpdateApiGroupRequest&, UpdateApiGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateApiGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateApiRateLimitRuleResponse> UpdateApiRateLimitRuleOutcome;
                typedef std::future<UpdateApiRateLimitRuleOutcome> UpdateApiRateLimitRuleOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::UpdateApiRateLimitRuleRequest&, UpdateApiRateLimitRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateApiRateLimitRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateApiRateLimitRulesResponse> UpdateApiRateLimitRulesOutcome;
                typedef std::future<UpdateApiRateLimitRulesOutcome> UpdateApiRateLimitRulesOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::UpdateApiRateLimitRulesRequest&, UpdateApiRateLimitRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateApiRateLimitRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateApiTimeoutsResponse> UpdateApiTimeoutsOutcome;
                typedef std::future<UpdateApiTimeoutsOutcome> UpdateApiTimeoutsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::UpdateApiTimeoutsRequest&, UpdateApiTimeoutsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateApiTimeoutsAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateConfigTemplateResponse> UpdateConfigTemplateOutcome;
                typedef std::future<UpdateConfigTemplateOutcome> UpdateConfigTemplateOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::UpdateConfigTemplateRequest&, UpdateConfigTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateConfigTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateGatewayApiResponse> UpdateGatewayApiOutcome;
                typedef std::future<UpdateGatewayApiOutcome> UpdateGatewayApiOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::UpdateGatewayApiRequest&, UpdateGatewayApiOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGatewayApiAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateHealthCheckSettingsResponse> UpdateHealthCheckSettingsOutcome;
                typedef std::future<UpdateHealthCheckSettingsOutcome> UpdateHealthCheckSettingsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::UpdateHealthCheckSettingsRequest&, UpdateHealthCheckSettingsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateHealthCheckSettingsAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateRepositoryResponse> UpdateRepositoryOutcome;
                typedef std::future<UpdateRepositoryOutcome> UpdateRepositoryOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::UpdateRepositoryRequest&, UpdateRepositoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRepositoryAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateUnitRuleResponse> UpdateUnitRuleOutcome;
                typedef std::future<UpdateUnitRuleOutcome> UpdateUnitRuleOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::UpdateUnitRuleRequest&, UpdateUnitRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateUnitRuleAsyncHandler;



                /**
                 *添加云主机节点至TSF集群
                 * @param req AddClusterInstancesRequest
                 * @return AddClusterInstancesOutcome
                 */
                AddClusterInstancesOutcome AddClusterInstances(const Model::AddClusterInstancesRequest &request);
                void AddClusterInstancesAsync(const Model::AddClusterInstancesRequest& request, const AddClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddClusterInstancesOutcomeCallable AddClusterInstancesCallable(const Model::AddClusterInstancesRequest& request);

                /**
                 *添加云主机节点至TSF集群
                 * @param req AddInstancesRequest
                 * @return AddInstancesOutcome
                 */
                AddInstancesOutcome AddInstances(const Model::AddInstancesRequest &request);
                void AddInstancesAsync(const Model::AddInstancesRequest& request, const AddInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddInstancesOutcomeCallable AddInstancesCallable(const Model::AddInstancesRequest& request);

                /**
                 *关联日志配置项到应用
                 * @param req AssociateBusinessLogConfigRequest
                 * @return AssociateBusinessLogConfigOutcome
                 */
                AssociateBusinessLogConfigOutcome AssociateBusinessLogConfig(const Model::AssociateBusinessLogConfigRequest &request);
                void AssociateBusinessLogConfigAsync(const Model::AssociateBusinessLogConfigRequest& request, const AssociateBusinessLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateBusinessLogConfigOutcomeCallable AssociateBusinessLogConfigCallable(const Model::AssociateBusinessLogConfigRequest& request);

                /**
                 *关联投递配置到部署组
                 * @param req AssociateConfigWithGroupRequest
                 * @return AssociateConfigWithGroupOutcome
                 */
                AssociateConfigWithGroupOutcome AssociateConfigWithGroup(const Model::AssociateConfigWithGroupRequest &request);
                void AssociateConfigWithGroupAsync(const Model::AssociateConfigWithGroupRequest& request, const AssociateConfigWithGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateConfigWithGroupOutcomeCallable AssociateConfigWithGroupCallable(const Model::AssociateConfigWithGroupRequest& request);

                /**
                 *网关与API分组批量绑定
                 * @param req BindApiGroupRequest
                 * @return BindApiGroupOutcome
                 */
                BindApiGroupOutcome BindApiGroup(const Model::BindApiGroupRequest &request);
                void BindApiGroupAsync(const Model::BindApiGroupRequest& request, const BindApiGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindApiGroupOutcomeCallable BindApiGroupCallable(const Model::BindApiGroupRequest& request);

                /**
                 *插件与网关分组/API批量绑定
                 * @param req BindPluginRequest
                 * @return BindPluginOutcome
                 */
                BindPluginOutcome BindPlugin(const Model::BindPluginRequest &request);
                void BindPluginAsync(const Model::BindPluginRequest& request, const BindPluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindPluginOutcomeCallable BindPluginCallable(const Model::BindPluginRequest& request);

                /**
                 *启用或禁用API
                 * @param req ChangeApiUsableStatusRequest
                 * @return ChangeApiUsableStatusOutcome
                 */
                ChangeApiUsableStatusOutcome ChangeApiUsableStatus(const Model::ChangeApiUsableStatusRequest &request);
                void ChangeApiUsableStatusAsync(const Model::ChangeApiUsableStatusRequest& request, const ChangeApiUsableStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChangeApiUsableStatusOutcomeCallable ChangeApiUsableStatusCallable(const Model::ChangeApiUsableStatusRequest& request);

                /**
                 *对执行失败的任务批次执行续跑
                 * @param req ContinueRunFailedTaskBatchRequest
                 * @return ContinueRunFailedTaskBatchOutcome
                 */
                ContinueRunFailedTaskBatchOutcome ContinueRunFailedTaskBatch(const Model::ContinueRunFailedTaskBatchRequest &request);
                void ContinueRunFailedTaskBatchAsync(const Model::ContinueRunFailedTaskBatchRequest& request, const ContinueRunFailedTaskBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ContinueRunFailedTaskBatchOutcomeCallable ContinueRunFailedTaskBatchCallable(const Model::ContinueRunFailedTaskBatchRequest& request);

                /**
                 *一键导入API分组
                 * @param req CreateAllGatewayApiAsyncRequest
                 * @return CreateAllGatewayApiAsyncOutcome
                 */
                CreateAllGatewayApiAsyncOutcome CreateAllGatewayApiAsync(const Model::CreateAllGatewayApiAsyncRequest &request);
                void CreateAllGatewayApiAsyncAsync(const Model::CreateAllGatewayApiAsyncRequest& request, const CreateAllGatewayApiAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAllGatewayApiAsyncOutcomeCallable CreateAllGatewayApiAsyncCallable(const Model::CreateAllGatewayApiAsyncRequest& request);

                /**
                 *创建API分组
                 * @param req CreateApiGroupRequest
                 * @return CreateApiGroupOutcome
                 */
                CreateApiGroupOutcome CreateApiGroup(const Model::CreateApiGroupRequest &request);
                void CreateApiGroupAsync(const Model::CreateApiGroupRequest& request, const CreateApiGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateApiGroupOutcomeCallable CreateApiGroupCallable(const Model::CreateApiGroupRequest& request);

                /**
                 *创建API限流规则
                 * @param req CreateApiRateLimitRuleRequest
                 * @return CreateApiRateLimitRuleOutcome
                 */
                CreateApiRateLimitRuleOutcome CreateApiRateLimitRule(const Model::CreateApiRateLimitRuleRequest &request);
                void CreateApiRateLimitRuleAsync(const Model::CreateApiRateLimitRuleRequest& request, const CreateApiRateLimitRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateApiRateLimitRuleOutcomeCallable CreateApiRateLimitRuleCallable(const Model::CreateApiRateLimitRuleRequest& request);

                /**
                 *创建API限流规则,并返回规则信息
                 * @param req CreateApiRateLimitRuleWithDetailRespRequest
                 * @return CreateApiRateLimitRuleWithDetailRespOutcome
                 */
                CreateApiRateLimitRuleWithDetailRespOutcome CreateApiRateLimitRuleWithDetailResp(const Model::CreateApiRateLimitRuleWithDetailRespRequest &request);
                void CreateApiRateLimitRuleWithDetailRespAsync(const Model::CreateApiRateLimitRuleWithDetailRespRequest& request, const CreateApiRateLimitRuleWithDetailRespAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateApiRateLimitRuleWithDetailRespOutcomeCallable CreateApiRateLimitRuleWithDetailRespCallable(const Model::CreateApiRateLimitRuleWithDetailRespRequest& request);

                /**
                 *创建应用
                 * @param req CreateApplicationRequest
                 * @return CreateApplicationOutcome
                 */
                CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest &request);
                void CreateApplicationAsync(const Model::CreateApplicationRequest& request, const CreateApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateApplicationOutcomeCallable CreateApplicationCallable(const Model::CreateApplicationRequest& request);

                /**
                 *创建集群
                 * @param req CreateClusterRequest
                 * @return CreateClusterOutcome
                 */
                CreateClusterOutcome CreateCluster(const Model::CreateClusterRequest &request);
                void CreateClusterAsync(const Model::CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterOutcomeCallable CreateClusterCallable(const Model::CreateClusterRequest& request);

                /**
                 *创建配置项
                 * @param req CreateConfigRequest
                 * @return CreateConfigOutcome
                 */
                CreateConfigOutcome CreateConfig(const Model::CreateConfigRequest &request);
                void CreateConfigAsync(const Model::CreateConfigRequest& request, const CreateConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateConfigOutcomeCallable CreateConfigCallable(const Model::CreateConfigRequest& request);

                /**
                 *创建参数模板
                 * @param req CreateConfigTemplateRequest
                 * @return CreateConfigTemplateOutcome
                 */
                CreateConfigTemplateOutcome CreateConfigTemplate(const Model::CreateConfigTemplateRequest &request);
                void CreateConfigTemplateAsync(const Model::CreateConfigTemplateRequest& request, const CreateConfigTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateConfigTemplateOutcomeCallable CreateConfigTemplateCallable(const Model::CreateConfigTemplateRequest& request);

                /**
                 *创建参数模板，并返回模板详细信息
                 * @param req CreateConfigTemplateWithDetailRespRequest
                 * @return CreateConfigTemplateWithDetailRespOutcome
                 */
                CreateConfigTemplateWithDetailRespOutcome CreateConfigTemplateWithDetailResp(const Model::CreateConfigTemplateWithDetailRespRequest &request);
                void CreateConfigTemplateWithDetailRespAsync(const Model::CreateConfigTemplateWithDetailRespRequest& request, const CreateConfigTemplateWithDetailRespAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateConfigTemplateWithDetailRespOutcomeCallable CreateConfigTemplateWithDetailRespCallable(const Model::CreateConfigTemplateWithDetailRespRequest& request);

                /**
                 *创建配置项，返回详细信息
                 * @param req CreateConfigWithDetailRespRequest
                 * @return CreateConfigWithDetailRespOutcome
                 */
                CreateConfigWithDetailRespOutcome CreateConfigWithDetailResp(const Model::CreateConfigWithDetailRespRequest &request);
                void CreateConfigWithDetailRespAsync(const Model::CreateConfigWithDetailRespRequest& request, const CreateConfigWithDetailRespAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateConfigWithDetailRespOutcomeCallable CreateConfigWithDetailRespCallable(const Model::CreateConfigWithDetailRespRequest& request);

                /**
                 *（已废弃，请使用 CreateGroup 和 DeployContainerGroup 创建和部署容器部署组）创建容器部署组
                 * @param req CreateContainGroupRequest
                 * @return CreateContainGroupOutcome
                 */
                CreateContainGroupOutcome CreateContainGroup(const Model::CreateContainGroupRequest &request);
                void CreateContainGroupAsync(const Model::CreateContainGroupRequest& request, const CreateContainGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateContainGroupOutcomeCallable CreateContainGroupCallable(const Model::CreateContainGroupRequest& request);

                /**
                 *创建文件配置项
                 * @param req CreateFileConfigRequest
                 * @return CreateFileConfigOutcome
                 */
                CreateFileConfigOutcome CreateFileConfig(const Model::CreateFileConfigRequest &request);
                void CreateFileConfigAsync(const Model::CreateFileConfigRequest& request, const CreateFileConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFileConfigOutcomeCallable CreateFileConfigCallable(const Model::CreateFileConfigRequest& request);

                /**
                 *创建文件配置项，返回详细信息
                 * @param req CreateFileConfigWithDetailRespRequest
                 * @return CreateFileConfigWithDetailRespOutcome
                 */
                CreateFileConfigWithDetailRespOutcome CreateFileConfigWithDetailResp(const Model::CreateFileConfigWithDetailRespRequest &request);
                void CreateFileConfigWithDetailRespAsync(const Model::CreateFileConfigWithDetailRespRequest& request, const CreateFileConfigWithDetailRespAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFileConfigWithDetailRespOutcomeCallable CreateFileConfigWithDetailRespCallable(const Model::CreateFileConfigWithDetailRespRequest& request);

                /**
                 *批量导入API至api分组(也支持新建API到分组)
                 * @param req CreateGatewayApiRequest
                 * @return CreateGatewayApiOutcome
                 */
                CreateGatewayApiOutcome CreateGatewayApi(const Model::CreateGatewayApiRequest &request);
                void CreateGatewayApiAsync(const Model::CreateGatewayApiRequest& request, const CreateGatewayApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGatewayApiOutcomeCallable CreateGatewayApiCallable(const Model::CreateGatewayApiRequest& request);

                /**
                 *创建虚拟机部署组
                 * @param req CreateGroupRequest
                 * @return CreateGroupOutcome
                 */
                CreateGroupOutcome CreateGroup(const Model::CreateGroupRequest &request);
                void CreateGroupAsync(const Model::CreateGroupRequest& request, const CreateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGroupOutcomeCallable CreateGroupCallable(const Model::CreateGroupRequest& request);

                /**
                 *创建泳道
                 * @param req CreateLaneRequest
                 * @return CreateLaneOutcome
                 */
                CreateLaneOutcome CreateLane(const Model::CreateLaneRequest &request);
                void CreateLaneAsync(const Model::CreateLaneRequest& request, const CreateLaneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLaneOutcomeCallable CreateLaneCallable(const Model::CreateLaneRequest& request);

                /**
                 *创建泳道规则
                 * @param req CreateLaneRuleRequest
                 * @return CreateLaneRuleOutcome
                 */
                CreateLaneRuleOutcome CreateLaneRule(const Model::CreateLaneRuleRequest &request);
                void CreateLaneRuleAsync(const Model::CreateLaneRuleRequest& request, const CreateLaneRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLaneRuleOutcomeCallable CreateLaneRuleCallable(const Model::CreateLaneRuleRequest& request);

                /**
                 *新增微服务
                 * @param req CreateMicroserviceRequest
                 * @return CreateMicroserviceOutcome
                 */
                CreateMicroserviceOutcome CreateMicroservice(const Model::CreateMicroserviceRequest &request);
                void CreateMicroserviceAsync(const Model::CreateMicroserviceRequest& request, const CreateMicroserviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMicroserviceOutcomeCallable CreateMicroserviceCallable(const Model::CreateMicroserviceRequest& request);

                /**
                 *新增微服务返回id
                 * @param req CreateMicroserviceWithDetailRespRequest
                 * @return CreateMicroserviceWithDetailRespOutcome
                 */
                CreateMicroserviceWithDetailRespOutcome CreateMicroserviceWithDetailResp(const Model::CreateMicroserviceWithDetailRespRequest &request);
                void CreateMicroserviceWithDetailRespAsync(const Model::CreateMicroserviceWithDetailRespRequest& request, const CreateMicroserviceWithDetailRespAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMicroserviceWithDetailRespOutcomeCallable CreateMicroserviceWithDetailRespCallable(const Model::CreateMicroserviceWithDetailRespRequest& request);

                /**
                 *创建命名空间
                 * @param req CreateNamespaceRequest
                 * @return CreateNamespaceOutcome
                 */
                CreateNamespaceOutcome CreateNamespace(const Model::CreateNamespaceRequest &request);
                void CreateNamespaceAsync(const Model::CreateNamespaceRequest& request, const CreateNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNamespaceOutcomeCallable CreateNamespaceCallable(const Model::CreateNamespaceRequest& request);

                /**
                 *创建路径重写
                 * @param req CreatePathRewritesRequest
                 * @return CreatePathRewritesOutcome
                 */
                CreatePathRewritesOutcome CreatePathRewrites(const Model::CreatePathRewritesRequest &request);
                void CreatePathRewritesAsync(const Model::CreatePathRewritesRequest& request, const CreatePathRewritesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePathRewritesOutcomeCallable CreatePathRewritesCallable(const Model::CreatePathRewritesRequest& request);

                /**
                 *创建路径重写，并返回路径重写规则信息
                 * @param req CreatePathRewritesWithDetailRespRequest
                 * @return CreatePathRewritesWithDetailRespOutcome
                 */
                CreatePathRewritesWithDetailRespOutcome CreatePathRewritesWithDetailResp(const Model::CreatePathRewritesWithDetailRespRequest &request);
                void CreatePathRewritesWithDetailRespAsync(const Model::CreatePathRewritesWithDetailRespRequest& request, const CreatePathRewritesWithDetailRespAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePathRewritesWithDetailRespOutcomeCallable CreatePathRewritesWithDetailRespCallable(const Model::CreatePathRewritesWithDetailRespRequest& request);

                /**
                 *创建数据集
                 * @param req CreateProgramRequest
                 * @return CreateProgramOutcome
                 */
                CreateProgramOutcome CreateProgram(const Model::CreateProgramRequest &request);
                void CreateProgramAsync(const Model::CreateProgramRequest& request, const CreateProgramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProgramOutcomeCallable CreateProgramCallable(const Model::CreateProgramRequest& request);

                /**
                 *创建公共配置项
                 * @param req CreatePublicConfigRequest
                 * @return CreatePublicConfigOutcome
                 */
                CreatePublicConfigOutcome CreatePublicConfig(const Model::CreatePublicConfigRequest &request);
                void CreatePublicConfigAsync(const Model::CreatePublicConfigRequest& request, const CreatePublicConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePublicConfigOutcomeCallable CreatePublicConfigCallable(const Model::CreatePublicConfigRequest& request);

                /**
                 *创建公共配置项，并返回配置项详细信息
                 * @param req CreatePublicConfigWithDetailRespRequest
                 * @return CreatePublicConfigWithDetailRespOutcome
                 */
                CreatePublicConfigWithDetailRespOutcome CreatePublicConfigWithDetailResp(const Model::CreatePublicConfigWithDetailRespRequest &request);
                void CreatePublicConfigWithDetailRespAsync(const Model::CreatePublicConfigWithDetailRespRequest& request, const CreatePublicConfigWithDetailRespAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePublicConfigWithDetailRespOutcomeCallable CreatePublicConfigWithDetailRespCallable(const Model::CreatePublicConfigWithDetailRespRequest& request);

                /**
                 *创建仓库
                 * @param req CreateRepositoryRequest
                 * @return CreateRepositoryOutcome
                 */
                CreateRepositoryOutcome CreateRepository(const Model::CreateRepositoryRequest &request);
                void CreateRepositoryAsync(const Model::CreateRepositoryRequest& request, const CreateRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRepositoryOutcomeCallable CreateRepositoryCallable(const Model::CreateRepositoryRequest& request);

                /**
                 *创建任务
                 * @param req CreateTaskRequest
                 * @return CreateTaskOutcome
                 */
                CreateTaskOutcome CreateTask(const Model::CreateTaskRequest &request);
                void CreateTaskAsync(const Model::CreateTaskRequest& request, const CreateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTaskOutcomeCallable CreateTaskCallable(const Model::CreateTaskRequest& request);

                /**
                 *创建工作流
                 * @param req CreateTaskFlowRequest
                 * @return CreateTaskFlowOutcome
                 */
                CreateTaskFlowOutcome CreateTaskFlow(const Model::CreateTaskFlowRequest &request);
                void CreateTaskFlowAsync(const Model::CreateTaskFlowRequest& request, const CreateTaskFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTaskFlowOutcomeCallable CreateTaskFlowCallable(const Model::CreateTaskFlowRequest& request);

                /**
                 *批量创建单元化命名空间
                 * @param req CreateUnitNamespacesRequest
                 * @return CreateUnitNamespacesOutcome
                 */
                CreateUnitNamespacesOutcome CreateUnitNamespaces(const Model::CreateUnitNamespacesRequest &request);
                void CreateUnitNamespacesAsync(const Model::CreateUnitNamespacesRequest& request, const CreateUnitNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUnitNamespacesOutcomeCallable CreateUnitNamespacesCallable(const Model::CreateUnitNamespacesRequest& request);

                /**
                 *创建单元化规则
                 * @param req CreateUnitRuleRequest
                 * @return CreateUnitRuleOutcome
                 */
                CreateUnitRuleOutcome CreateUnitRule(const Model::CreateUnitRuleRequest &request);
                void CreateUnitRuleAsync(const Model::CreateUnitRuleRequest& request, const CreateUnitRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUnitRuleOutcomeCallable CreateUnitRuleCallable(const Model::CreateUnitRuleRequest& request);

                /**
                 *创建单元化规则, 并返回详细信息
                 * @param req CreateUnitRuleWithDetailRespRequest
                 * @return CreateUnitRuleWithDetailRespOutcome
                 */
                CreateUnitRuleWithDetailRespOutcome CreateUnitRuleWithDetailResp(const Model::CreateUnitRuleWithDetailRespRequest &request);
                void CreateUnitRuleWithDetailRespAsync(const Model::CreateUnitRuleWithDetailRespRequest& request, const CreateUnitRuleWithDetailRespAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUnitRuleWithDetailRespOutcomeCallable CreateUnitRuleWithDetailRespCallable(const Model::CreateUnitRuleWithDetailRespRequest& request);

                /**
                 *删除Api分组
                 * @param req DeleteApiGroupRequest
                 * @return DeleteApiGroupOutcome
                 */
                DeleteApiGroupOutcome DeleteApiGroup(const Model::DeleteApiGroupRequest &request);
                void DeleteApiGroupAsync(const Model::DeleteApiGroupRequest& request, const DeleteApiGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteApiGroupOutcomeCallable DeleteApiGroupCallable(const Model::DeleteApiGroupRequest& request);

                /**
                 *删除API限流规则
                 * @param req DeleteApiRateLimitRuleRequest
                 * @return DeleteApiRateLimitRuleOutcome
                 */
                DeleteApiRateLimitRuleOutcome DeleteApiRateLimitRule(const Model::DeleteApiRateLimitRuleRequest &request);
                void DeleteApiRateLimitRuleAsync(const Model::DeleteApiRateLimitRuleRequest& request, const DeleteApiRateLimitRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteApiRateLimitRuleOutcomeCallable DeleteApiRateLimitRuleCallable(const Model::DeleteApiRateLimitRuleRequest& request);

                /**
                 *删除应用
                 * @param req DeleteApplicationRequest
                 * @return DeleteApplicationOutcome
                 */
                DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest &request);
                void DeleteApplicationAsync(const Model::DeleteApplicationRequest& request, const DeleteApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteApplicationOutcomeCallable DeleteApplicationCallable(const Model::DeleteApplicationRequest& request);

                /**
                 *删除集群
                 * @param req DeleteClusterRequest
                 * @return DeleteClusterOutcome
                 */
                DeleteClusterOutcome DeleteCluster(const Model::DeleteClusterRequest &request);
                void DeleteClusterAsync(const Model::DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteClusterOutcomeCallable DeleteClusterCallable(const Model::DeleteClusterRequest& request);

                /**
                 *删除配置项
                 * @param req DeleteConfigRequest
                 * @return DeleteConfigOutcome
                 */
                DeleteConfigOutcome DeleteConfig(const Model::DeleteConfigRequest &request);
                void DeleteConfigAsync(const Model::DeleteConfigRequest& request, const DeleteConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteConfigOutcomeCallable DeleteConfigCallable(const Model::DeleteConfigRequest& request);

                /**
                 *删除模板
                 * @param req DeleteConfigTemplateRequest
                 * @return DeleteConfigTemplateOutcome
                 */
                DeleteConfigTemplateOutcome DeleteConfigTemplate(const Model::DeleteConfigTemplateRequest &request);
                void DeleteConfigTemplateAsync(const Model::DeleteConfigTemplateRequest& request, const DeleteConfigTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteConfigTemplateOutcomeCallable DeleteConfigTemplateCallable(const Model::DeleteConfigTemplateRequest& request);

                /**
                 *删除容器部署组
                 * @param req DeleteContainerGroupRequest
                 * @return DeleteContainerGroupOutcome
                 */
                DeleteContainerGroupOutcome DeleteContainerGroup(const Model::DeleteContainerGroupRequest &request);
                void DeleteContainerGroupAsync(const Model::DeleteContainerGroupRequest& request, const DeleteContainerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteContainerGroupOutcomeCallable DeleteContainerGroupCallable(const Model::DeleteContainerGroupRequest& request);

                /**
                 *删除文件配置项
                 * @param req DeleteFileConfigRequest
                 * @return DeleteFileConfigOutcome
                 */
                DeleteFileConfigOutcome DeleteFileConfig(const Model::DeleteFileConfigRequest &request);
                void DeleteFileConfigAsync(const Model::DeleteFileConfigRequest& request, const DeleteFileConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteFileConfigOutcomeCallable DeleteFileConfigCallable(const Model::DeleteFileConfigRequest& request);

                /**
                 *批量删除API
                 * @param req DeleteGatewayApiRequest
                 * @return DeleteGatewayApiOutcome
                 */
                DeleteGatewayApiOutcome DeleteGatewayApi(const Model::DeleteGatewayApiRequest &request);
                void DeleteGatewayApiAsync(const Model::DeleteGatewayApiRequest& request, const DeleteGatewayApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteGatewayApiOutcomeCallable DeleteGatewayApiCallable(const Model::DeleteGatewayApiRequest& request);

                /**
                 *删除容器部署组
                 * @param req DeleteGroupRequest
                 * @return DeleteGroupOutcome
                 */
                DeleteGroupOutcome DeleteGroup(const Model::DeleteGroupRequest &request);
                void DeleteGroupAsync(const Model::DeleteGroupRequest& request, const DeleteGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteGroupOutcomeCallable DeleteGroupCallable(const Model::DeleteGroupRequest& request);

                /**
                 *批量删除镜像版本
                 * @param req DeleteImageTagsRequest
                 * @return DeleteImageTagsOutcome
                 */
                DeleteImageTagsOutcome DeleteImageTags(const Model::DeleteImageTagsRequest &request);
                void DeleteImageTagsAsync(const Model::DeleteImageTagsRequest& request, const DeleteImageTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteImageTagsOutcomeCallable DeleteImageTagsCallable(const Model::DeleteImageTagsRequest& request);

                /**
                 *删除泳道
                 * @param req DeleteLaneRequest
                 * @return DeleteLaneOutcome
                 */
                DeleteLaneOutcome DeleteLane(const Model::DeleteLaneRequest &request);
                void DeleteLaneAsync(const Model::DeleteLaneRequest& request, const DeleteLaneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLaneOutcomeCallable DeleteLaneCallable(const Model::DeleteLaneRequest& request);

                /**
                 *删除泳道规则
                 * @param req DeleteLaneRuleRequest
                 * @return DeleteLaneRuleOutcome
                 */
                DeleteLaneRuleOutcome DeleteLaneRule(const Model::DeleteLaneRuleRequest &request);
                void DeleteLaneRuleAsync(const Model::DeleteLaneRuleRequest& request, const DeleteLaneRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLaneRuleOutcomeCallable DeleteLaneRuleCallable(const Model::DeleteLaneRuleRequest& request);

                /**
                 *删除微服务
                 * @param req DeleteMicroserviceRequest
                 * @return DeleteMicroserviceOutcome
                 */
                DeleteMicroserviceOutcome DeleteMicroservice(const Model::DeleteMicroserviceRequest &request);
                void DeleteMicroserviceAsync(const Model::DeleteMicroserviceRequest& request, const DeleteMicroserviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMicroserviceOutcomeCallable DeleteMicroserviceCallable(const Model::DeleteMicroserviceRequest& request);

                /**
                 *删除命名空间
                 * @param req DeleteNamespaceRequest
                 * @return DeleteNamespaceOutcome
                 */
                DeleteNamespaceOutcome DeleteNamespace(const Model::DeleteNamespaceRequest &request);
                void DeleteNamespaceAsync(const Model::DeleteNamespaceRequest& request, const DeleteNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNamespaceOutcomeCallable DeleteNamespaceCallable(const Model::DeleteNamespaceRequest& request);

                /**
                 *删除路径重写
                 * @param req DeletePathRewritesRequest
                 * @return DeletePathRewritesOutcome
                 */
                DeletePathRewritesOutcome DeletePathRewrites(const Model::DeletePathRewritesRequest &request);
                void DeletePathRewritesAsync(const Model::DeletePathRewritesRequest& request, const DeletePathRewritesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePathRewritesOutcomeCallable DeletePathRewritesCallable(const Model::DeletePathRewritesRequest& request);

                /**
                 *从软件仓库批量删除程序包。
一次最多支持删除1000个包，数量超过1000，返回UpperDeleteLimit错误。
                 * @param req DeletePkgsRequest
                 * @return DeletePkgsOutcome
                 */
                DeletePkgsOutcome DeletePkgs(const Model::DeletePkgsRequest &request);
                void DeletePkgsAsync(const Model::DeletePkgsRequest& request, const DeletePkgsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePkgsOutcomeCallable DeletePkgsCallable(const Model::DeletePkgsRequest& request);

                /**
                 *删除公共配置项
                 * @param req DeletePublicConfigRequest
                 * @return DeletePublicConfigOutcome
                 */
                DeletePublicConfigOutcome DeletePublicConfig(const Model::DeletePublicConfigRequest &request);
                void DeletePublicConfigAsync(const Model::DeletePublicConfigRequest& request, const DeletePublicConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePublicConfigOutcomeCallable DeletePublicConfigCallable(const Model::DeletePublicConfigRequest& request);

                /**
                 *删除仓库
                 * @param req DeleteRepositoryRequest
                 * @return DeleteRepositoryOutcome
                 */
                DeleteRepositoryOutcome DeleteRepository(const Model::DeleteRepositoryRequest &request);
                void DeleteRepositoryAsync(const Model::DeleteRepositoryRequest& request, const DeleteRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRepositoryOutcomeCallable DeleteRepositoryCallable(const Model::DeleteRepositoryRequest& request);

                /**
                 *serverless 能力已下线。下线对应接口。

删除Serverless部署组
                 * @param req DeleteServerlessGroupRequest
                 * @return DeleteServerlessGroupOutcome
                 */
                DeleteServerlessGroupOutcome DeleteServerlessGroup(const Model::DeleteServerlessGroupRequest &request);
                void DeleteServerlessGroupAsync(const Model::DeleteServerlessGroupRequest& request, const DeleteServerlessGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteServerlessGroupOutcomeCallable DeleteServerlessGroupCallable(const Model::DeleteServerlessGroupRequest& request);

                /**
                 *删除任务
                 * @param req DeleteTaskRequest
                 * @return DeleteTaskOutcome
                 */
                DeleteTaskOutcome DeleteTask(const Model::DeleteTaskRequest &request);
                void DeleteTaskAsync(const Model::DeleteTaskRequest& request, const DeleteTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTaskOutcomeCallable DeleteTaskCallable(const Model::DeleteTaskRequest& request);

                /**
                 *删除单元化命名空间
                 * @param req DeleteUnitNamespacesRequest
                 * @return DeleteUnitNamespacesOutcome
                 */
                DeleteUnitNamespacesOutcome DeleteUnitNamespaces(const Model::DeleteUnitNamespacesRequest &request);
                void DeleteUnitNamespacesAsync(const Model::DeleteUnitNamespacesRequest& request, const DeleteUnitNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUnitNamespacesOutcomeCallable DeleteUnitNamespacesCallable(const Model::DeleteUnitNamespacesRequest& request);

                /**
                 *删除单元化规则
                 * @param req DeleteUnitRuleRequest
                 * @return DeleteUnitRuleOutcome
                 */
                DeleteUnitRuleOutcome DeleteUnitRule(const Model::DeleteUnitRuleRequest &request);
                void DeleteUnitRuleAsync(const Model::DeleteUnitRuleRequest& request, const DeleteUnitRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUnitRuleOutcomeCallable DeleteUnitRuleCallable(const Model::DeleteUnitRuleRequest& request);

                /**
                 *部署容器应用-更新
                 * @param req DeployContainerGroupRequest
                 * @return DeployContainerGroupOutcome
                 */
                DeployContainerGroupOutcome DeployContainerGroup(const Model::DeployContainerGroupRequest &request);
                void DeployContainerGroupAsync(const Model::DeployContainerGroupRequest& request, const DeployContainerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeployContainerGroupOutcomeCallable DeployContainerGroupCallable(const Model::DeployContainerGroupRequest& request);

                /**
                 *部署虚拟机部署组应用
                 * @param req DeployGroupRequest
                 * @return DeployGroupOutcome
                 */
                DeployGroupOutcome DeployGroup(const Model::DeployGroupRequest &request);
                void DeployGroupAsync(const Model::DeployGroupRequest& request, const DeployGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeployGroupOutcomeCallable DeployGroupCallable(const Model::DeployGroupRequest& request);

                /**
                 *查询API详情
                 * @param req DescribeApiDetailRequest
                 * @return DescribeApiDetailOutcome
                 */
                DescribeApiDetailOutcome DescribeApiDetail(const Model::DescribeApiDetailRequest &request);
                void DescribeApiDetailAsync(const Model::DescribeApiDetailRequest& request, const DescribeApiDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApiDetailOutcomeCallable DescribeApiDetailCallable(const Model::DescribeApiDetailRequest& request);

                /**
                 *查询API分组
                 * @param req DescribeApiGroupRequest
                 * @return DescribeApiGroupOutcome
                 */
                DescribeApiGroupOutcome DescribeApiGroup(const Model::DescribeApiGroupRequest &request);
                void DescribeApiGroupAsync(const Model::DescribeApiGroupRequest& request, const DescribeApiGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApiGroupOutcomeCallable DescribeApiGroupCallable(const Model::DescribeApiGroupRequest& request);

                /**
                 *查询API 分组信息列表
                 * @param req DescribeApiGroupsRequest
                 * @return DescribeApiGroupsOutcome
                 */
                DescribeApiGroupsOutcome DescribeApiGroups(const Model::DescribeApiGroupsRequest &request);
                void DescribeApiGroupsAsync(const Model::DescribeApiGroupsRequest& request, const DescribeApiGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApiGroupsOutcomeCallable DescribeApiGroupsCallable(const Model::DescribeApiGroupsRequest& request);

                /**
                 *查询API限流规则
                 * @param req DescribeApiRateLimitRulesRequest
                 * @return DescribeApiRateLimitRulesOutcome
                 */
                DescribeApiRateLimitRulesOutcome DescribeApiRateLimitRules(const Model::DescribeApiRateLimitRulesRequest &request);
                void DescribeApiRateLimitRulesAsync(const Model::DescribeApiRateLimitRulesRequest& request, const DescribeApiRateLimitRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApiRateLimitRulesOutcomeCallable DescribeApiRateLimitRulesCallable(const Model::DescribeApiRateLimitRulesRequest& request);

                /**
                 *查询网关API监控明细数据
                 * @param req DescribeApiUseDetailRequest
                 * @return DescribeApiUseDetailOutcome
                 */
                DescribeApiUseDetailOutcome DescribeApiUseDetail(const Model::DescribeApiUseDetailRequest &request);
                void DescribeApiUseDetailAsync(const Model::DescribeApiUseDetailRequest& request, const DescribeApiUseDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApiUseDetailOutcomeCallable DescribeApiUseDetailCallable(const Model::DescribeApiUseDetailRequest& request);

                /**
                 *查询API 版本
                 * @param req DescribeApiVersionsRequest
                 * @return DescribeApiVersionsOutcome
                 */
                DescribeApiVersionsOutcome DescribeApiVersions(const Model::DescribeApiVersionsRequest &request);
                void DescribeApiVersionsAsync(const Model::DescribeApiVersionsRequest& request, const DescribeApiVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApiVersionsOutcomeCallable DescribeApiVersionsCallable(const Model::DescribeApiVersionsRequest& request);

                /**
                 *获取应用详情
                 * @param req DescribeApplicationRequest
                 * @return DescribeApplicationOutcome
                 */
                DescribeApplicationOutcome DescribeApplication(const Model::DescribeApplicationRequest &request);
                void DescribeApplicationAsync(const Model::DescribeApplicationRequest& request, const DescribeApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationOutcomeCallable DescribeApplicationCallable(const Model::DescribeApplicationRequest& request);

                /**
                 *获取应用列表其它字段，如实例数量信息等
                 * @param req DescribeApplicationAttributeRequest
                 * @return DescribeApplicationAttributeOutcome
                 */
                DescribeApplicationAttributeOutcome DescribeApplicationAttribute(const Model::DescribeApplicationAttributeRequest &request);
                void DescribeApplicationAttributeAsync(const Model::DescribeApplicationAttributeRequest& request, const DescribeApplicationAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationAttributeOutcomeCallable DescribeApplicationAttributeCallable(const Model::DescribeApplicationAttributeRequest& request);

                /**
                 *获取应用列表
                 * @param req DescribeApplicationsRequest
                 * @return DescribeApplicationsOutcome
                 */
                DescribeApplicationsOutcome DescribeApplications(const Model::DescribeApplicationsRequest &request);
                void DescribeApplicationsAsync(const Model::DescribeApplicationsRequest& request, const DescribeApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationsOutcomeCallable DescribeApplicationsCallable(const Model::DescribeApplicationsRequest& request);

                /**
                 *TSF基本资源信息概览接口
                 * @param req DescribeBasicResourceUsageRequest
                 * @return DescribeBasicResourceUsageOutcome
                 */
                DescribeBasicResourceUsageOutcome DescribeBasicResourceUsage(const Model::DescribeBasicResourceUsageRequest &request);
                void DescribeBasicResourceUsageAsync(const Model::DescribeBasicResourceUsageRequest& request, const DescribeBasicResourceUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBasicResourceUsageOutcomeCallable DescribeBasicResourceUsageCallable(const Model::DescribeBasicResourceUsageRequest& request);

                /**
                 *查询业务日志配置项信息
                 * @param req DescribeBusinessLogConfigRequest
                 * @return DescribeBusinessLogConfigOutcome
                 */
                DescribeBusinessLogConfigOutcome DescribeBusinessLogConfig(const Model::DescribeBusinessLogConfigRequest &request);
                void DescribeBusinessLogConfigAsync(const Model::DescribeBusinessLogConfigRequest& request, const DescribeBusinessLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBusinessLogConfigOutcomeCallable DescribeBusinessLogConfigCallable(const Model::DescribeBusinessLogConfigRequest& request);

                /**
                 *查询日志配置项列表
                 * @param req DescribeBusinessLogConfigsRequest
                 * @return DescribeBusinessLogConfigsOutcome
                 */
                DescribeBusinessLogConfigsOutcome DescribeBusinessLogConfigs(const Model::DescribeBusinessLogConfigsRequest &request);
                void DescribeBusinessLogConfigsAsync(const Model::DescribeBusinessLogConfigsRequest& request, const DescribeBusinessLogConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBusinessLogConfigsOutcomeCallable DescribeBusinessLogConfigsCallable(const Model::DescribeBusinessLogConfigsRequest& request);

                /**
                 *查询集群实例
                 * @param req DescribeClusterInstancesRequest
                 * @return DescribeClusterInstancesOutcome
                 */
                DescribeClusterInstancesOutcome DescribeClusterInstances(const Model::DescribeClusterInstancesRequest &request);
                void DescribeClusterInstancesAsync(const Model::DescribeClusterInstancesRequest& request, const DescribeClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterInstancesOutcomeCallable DescribeClusterInstancesCallable(const Model::DescribeClusterInstancesRequest& request);

                /**
                 *获取集群列表
                 * @param req DescribeClustersRequest
                 * @return DescribeClustersOutcome
                 */
                DescribeClustersOutcome DescribeClusters(const Model::DescribeClustersRequest &request);
                void DescribeClustersAsync(const Model::DescribeClustersRequest& request, const DescribeClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClustersOutcomeCallable DescribeClustersCallable(const Model::DescribeClustersRequest& request);

                /**
                 *查询配置
                 * @param req DescribeConfigRequest
                 * @return DescribeConfigOutcome
                 */
                DescribeConfigOutcome DescribeConfig(const Model::DescribeConfigRequest &request);
                void DescribeConfigAsync(const Model::DescribeConfigRequest& request, const DescribeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConfigOutcomeCallable DescribeConfigCallable(const Model::DescribeConfigRequest& request);

                /**
                 *查询配置发布历史
                 * @param req DescribeConfigReleaseLogsRequest
                 * @return DescribeConfigReleaseLogsOutcome
                 */
                DescribeConfigReleaseLogsOutcome DescribeConfigReleaseLogs(const Model::DescribeConfigReleaseLogsRequest &request);
                void DescribeConfigReleaseLogsAsync(const Model::DescribeConfigReleaseLogsRequest& request, const DescribeConfigReleaseLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConfigReleaseLogsOutcomeCallable DescribeConfigReleaseLogsCallable(const Model::DescribeConfigReleaseLogsRequest& request);

                /**
                 *查询配置发布信息
                 * @param req DescribeConfigReleasesRequest
                 * @return DescribeConfigReleasesOutcome
                 */
                DescribeConfigReleasesOutcome DescribeConfigReleases(const Model::DescribeConfigReleasesRequest &request);
                void DescribeConfigReleasesAsync(const Model::DescribeConfigReleasesRequest& request, const DescribeConfigReleasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConfigReleasesOutcomeCallable DescribeConfigReleasesCallable(const Model::DescribeConfigReleasesRequest& request);

                /**
                 *查询配置汇总列表
                 * @param req DescribeConfigSummaryRequest
                 * @return DescribeConfigSummaryOutcome
                 */
                DescribeConfigSummaryOutcome DescribeConfigSummary(const Model::DescribeConfigSummaryRequest &request);
                void DescribeConfigSummaryAsync(const Model::DescribeConfigSummaryRequest& request, const DescribeConfigSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConfigSummaryOutcomeCallable DescribeConfigSummaryCallable(const Model::DescribeConfigSummaryRequest& request);

                /**
                 *导入配置
                 * @param req DescribeConfigTemplateRequest
                 * @return DescribeConfigTemplateOutcome
                 */
                DescribeConfigTemplateOutcome DescribeConfigTemplate(const Model::DescribeConfigTemplateRequest &request);
                void DescribeConfigTemplateAsync(const Model::DescribeConfigTemplateRequest& request, const DescribeConfigTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConfigTemplateOutcomeCallable DescribeConfigTemplateCallable(const Model::DescribeConfigTemplateRequest& request);

                /**
                 *查询配置项列表
                 * @param req DescribeConfigsRequest
                 * @return DescribeConfigsOutcome
                 */
                DescribeConfigsOutcome DescribeConfigs(const Model::DescribeConfigsRequest &request);
                void DescribeConfigsAsync(const Model::DescribeConfigsRequest& request, const DescribeConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConfigsOutcomeCallable DescribeConfigsCallable(const Model::DescribeConfigsRequest& request);

                /**
                 *获取容器事件列表
参数限制

- 当类型是 instance 时，GroupId是必填项
                 * @param req DescribeContainerEventsRequest
                 * @return DescribeContainerEventsOutcome
                 */
                DescribeContainerEventsOutcome DescribeContainerEvents(const Model::DescribeContainerEventsRequest &request);
                void DescribeContainerEventsAsync(const Model::DescribeContainerEventsRequest& request, const DescribeContainerEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeContainerEventsOutcomeCallable DescribeContainerEventsCallable(const Model::DescribeContainerEventsRequest& request);

                /**
                 *获取部署组其他字段-用于前端并发调用
                 * @param req DescribeContainerGroupAttributeRequest
                 * @return DescribeContainerGroupAttributeOutcome
                 */
                DescribeContainerGroupAttributeOutcome DescribeContainerGroupAttribute(const Model::DescribeContainerGroupAttributeRequest &request);
                void DescribeContainerGroupAttributeAsync(const Model::DescribeContainerGroupAttributeRequest& request, const DescribeContainerGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeContainerGroupAttributeOutcomeCallable DescribeContainerGroupAttributeCallable(const Model::DescribeContainerGroupAttributeRequest& request);

                /**
                 *获取部署组详情
                 * @param req DescribeContainerGroupDeployInfoRequest
                 * @return DescribeContainerGroupDeployInfoOutcome
                 */
                DescribeContainerGroupDeployInfoOutcome DescribeContainerGroupDeployInfo(const Model::DescribeContainerGroupDeployInfoRequest &request);
                void DescribeContainerGroupDeployInfoAsync(const Model::DescribeContainerGroupDeployInfoRequest& request, const DescribeContainerGroupDeployInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeContainerGroupDeployInfoOutcomeCallable DescribeContainerGroupDeployInfoCallable(const Model::DescribeContainerGroupDeployInfoRequest& request);

                /**
                 *容器部署组详情（已废弃，请使用  DescribeContainerGroupDeployInfo）
                 * @param req DescribeContainerGroupDetailRequest
                 * @return DescribeContainerGroupDetailOutcome
                 */
                DescribeContainerGroupDetailOutcome DescribeContainerGroupDetail(const Model::DescribeContainerGroupDetailRequest &request);
                void DescribeContainerGroupDetailAsync(const Model::DescribeContainerGroupDetailRequest& request, const DescribeContainerGroupDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeContainerGroupDetailOutcomeCallable DescribeContainerGroupDetailCallable(const Model::DescribeContainerGroupDetailRequest& request);

                /**
                 *容器部署组列表
                 * @param req DescribeContainerGroupsRequest
                 * @return DescribeContainerGroupsOutcome
                 */
                DescribeContainerGroupsOutcome DescribeContainerGroups(const Model::DescribeContainerGroupsRequest &request);
                void DescribeContainerGroupsAsync(const Model::DescribeContainerGroupsRequest& request, const DescribeContainerGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeContainerGroupsOutcomeCallable DescribeContainerGroupsCallable(const Model::DescribeContainerGroupsRequest& request);

                /**
                 *查询一键导入API分组任务的状态
                 * @param req DescribeCreateGatewayApiStatusRequest
                 * @return DescribeCreateGatewayApiStatusOutcome
                 */
                DescribeCreateGatewayApiStatusOutcome DescribeCreateGatewayApiStatus(const Model::DescribeCreateGatewayApiStatusRequest &request);
                void DescribeCreateGatewayApiStatusAsync(const Model::DescribeCreateGatewayApiStatusRequest& request, const DescribeCreateGatewayApiStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCreateGatewayApiStatusOutcomeCallable DescribeCreateGatewayApiStatusCallable(const Model::DescribeCreateGatewayApiStatusRequest& request);

                /**
                 *获取单个投递项配置信息
                 * @param req DescribeDeliveryConfigRequest
                 * @return DescribeDeliveryConfigOutcome
                 */
                DescribeDeliveryConfigOutcome DescribeDeliveryConfig(const Model::DescribeDeliveryConfigRequest &request);
                void DescribeDeliveryConfigAsync(const Model::DescribeDeliveryConfigRequest& request, const DescribeDeliveryConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeliveryConfigOutcomeCallable DescribeDeliveryConfigCallable(const Model::DescribeDeliveryConfigRequest& request);

                /**
                 *用部署组id获取绑定信息
                 * @param req DescribeDeliveryConfigByGroupIdRequest
                 * @return DescribeDeliveryConfigByGroupIdOutcome
                 */
                DescribeDeliveryConfigByGroupIdOutcome DescribeDeliveryConfigByGroupId(const Model::DescribeDeliveryConfigByGroupIdRequest &request);
                void DescribeDeliveryConfigByGroupIdAsync(const Model::DescribeDeliveryConfigByGroupIdRequest& request, const DescribeDeliveryConfigByGroupIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeliveryConfigByGroupIdOutcomeCallable DescribeDeliveryConfigByGroupIdCallable(const Model::DescribeDeliveryConfigByGroupIdRequest& request);

                /**
                 *获取多个投递项配置
                 * @param req DescribeDeliveryConfigsRequest
                 * @return DescribeDeliveryConfigsOutcome
                 */
                DescribeDeliveryConfigsOutcome DescribeDeliveryConfigs(const Model::DescribeDeliveryConfigsRequest &request);
                void DescribeDeliveryConfigsAsync(const Model::DescribeDeliveryConfigsRequest& request, const DescribeDeliveryConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeliveryConfigsOutcomeCallable DescribeDeliveryConfigsCallable(const Model::DescribeDeliveryConfigsRequest& request);

                /**
                 *TSF上传的程序包存放在腾讯云对象存储（COS）中，通过该API可以获取从COS下载程序包需要的信息，包括包所在的桶、存储路径、鉴权信息等，之后使用COS API（或SDK）进行下载。
COS相关文档请查阅：https://cloud.tencent.com/document/product/436
                 * @param req DescribeDownloadInfoRequest
                 * @return DescribeDownloadInfoOutcome
                 */
                DescribeDownloadInfoOutcome DescribeDownloadInfo(const Model::DescribeDownloadInfoRequest &request);
                void DescribeDownloadInfoAsync(const Model::DescribeDownloadInfoRequest& request, const DescribeDownloadInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDownloadInfoOutcomeCallable DescribeDownloadInfoCallable(const Model::DescribeDownloadInfoRequest& request);

                /**
                 *查询生效的单元化规则
                 * @param req DescribeEnabledUnitRuleRequest
                 * @return DescribeEnabledUnitRuleOutcome
                 */
                DescribeEnabledUnitRuleOutcome DescribeEnabledUnitRule(const Model::DescribeEnabledUnitRuleRequest &request);
                void DescribeEnabledUnitRuleAsync(const Model::DescribeEnabledUnitRuleRequest& request, const DescribeEnabledUnitRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEnabledUnitRuleOutcomeCallable DescribeEnabledUnitRuleCallable(const Model::DescribeEnabledUnitRuleRequest& request);

                /**
                 *查询文件配置项发布信息
                 * @param req DescribeFileConfigReleasesRequest
                 * @return DescribeFileConfigReleasesOutcome
                 */
                DescribeFileConfigReleasesOutcome DescribeFileConfigReleases(const Model::DescribeFileConfigReleasesRequest &request);
                void DescribeFileConfigReleasesAsync(const Model::DescribeFileConfigReleasesRequest& request, const DescribeFileConfigReleasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFileConfigReleasesOutcomeCallable DescribeFileConfigReleasesCallable(const Model::DescribeFileConfigReleasesRequest& request);

                /**
                 *查询文件配置项列表
                 * @param req DescribeFileConfigsRequest
                 * @return DescribeFileConfigsOutcome
                 */
                DescribeFileConfigsOutcome DescribeFileConfigs(const Model::DescribeFileConfigsRequest &request);
                void DescribeFileConfigsAsync(const Model::DescribeFileConfigsRequest& request, const DescribeFileConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFileConfigsOutcomeCallable DescribeFileConfigsCallable(const Model::DescribeFileConfigsRequest& request);

                /**
                 *查询工作流最新一个批次的状态信息
                 * @param req DescribeFlowLastBatchStateRequest
                 * @return DescribeFlowLastBatchStateOutcome
                 */
                DescribeFlowLastBatchStateOutcome DescribeFlowLastBatchState(const Model::DescribeFlowLastBatchStateRequest &request);
                void DescribeFlowLastBatchStateAsync(const Model::DescribeFlowLastBatchStateRequest& request, const DescribeFlowLastBatchStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlowLastBatchStateOutcomeCallable DescribeFlowLastBatchStateCallable(const Model::DescribeFlowLastBatchStateRequest& request);

                /**
                 *查询网关所有分组下Api列表
                 * @param req DescribeGatewayAllGroupApisRequest
                 * @return DescribeGatewayAllGroupApisOutcome
                 */
                DescribeGatewayAllGroupApisOutcome DescribeGatewayAllGroupApis(const Model::DescribeGatewayAllGroupApisRequest &request);
                void DescribeGatewayAllGroupApisAsync(const Model::DescribeGatewayAllGroupApisRequest& request, const DescribeGatewayAllGroupApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGatewayAllGroupApisOutcomeCallable DescribeGatewayAllGroupApisCallable(const Model::DescribeGatewayAllGroupApisRequest& request);

                /**
                 *查询API分组下的Api列表信息
                 * @param req DescribeGatewayApisRequest
                 * @return DescribeGatewayApisOutcome
                 */
                DescribeGatewayApisOutcome DescribeGatewayApis(const Model::DescribeGatewayApisRequest &request);
                void DescribeGatewayApisAsync(const Model::DescribeGatewayApisRequest& request, const DescribeGatewayApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGatewayApisOutcomeCallable DescribeGatewayApisCallable(const Model::DescribeGatewayApisRequest& request);

                /**
                 *查询网关监控概览
                 * @param req DescribeGatewayMonitorOverviewRequest
                 * @return DescribeGatewayMonitorOverviewOutcome
                 */
                DescribeGatewayMonitorOverviewOutcome DescribeGatewayMonitorOverview(const Model::DescribeGatewayMonitorOverviewRequest &request);
                void DescribeGatewayMonitorOverviewAsync(const Model::DescribeGatewayMonitorOverviewRequest& request, const DescribeGatewayMonitorOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGatewayMonitorOverviewOutcomeCallable DescribeGatewayMonitorOverviewCallable(const Model::DescribeGatewayMonitorOverviewRequest& request);

                /**
                 *查询虚拟机部署组详情
                 * @param req DescribeGroupRequest
                 * @return DescribeGroupOutcome
                 */
                DescribeGroupOutcome DescribeGroup(const Model::DescribeGroupRequest &request);
                void DescribeGroupAsync(const Model::DescribeGroupRequest& request, const DescribeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGroupOutcomeCallable DescribeGroupCallable(const Model::DescribeGroupRequest& request);

                /**
                 *获取部署组其他属性
                 * @param req DescribeGroupAttributeRequest
                 * @return DescribeGroupAttributeOutcome
                 */
                DescribeGroupAttributeOutcome DescribeGroupAttribute(const Model::DescribeGroupAttributeRequest &request);
                void DescribeGroupAttributeAsync(const Model::DescribeGroupAttributeRequest& request, const DescribeGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGroupAttributeOutcomeCallable DescribeGroupAttributeCallable(const Model::DescribeGroupAttributeRequest& request);

                /**
                 *查询某个API分组已绑定的网关部署组信息列表
                 * @param req DescribeGroupBindedGatewaysRequest
                 * @return DescribeGroupBindedGatewaysOutcome
                 */
                DescribeGroupBindedGatewaysOutcome DescribeGroupBindedGateways(const Model::DescribeGroupBindedGatewaysRequest &request);
                void DescribeGroupBindedGatewaysAsync(const Model::DescribeGroupBindedGatewaysRequest& request, const DescribeGroupBindedGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGroupBindedGatewaysOutcomeCallable DescribeGroupBindedGatewaysCallable(const Model::DescribeGroupBindedGatewaysRequest& request);

                /**
                 *查询分组管理日志配置列表
                 * @param req DescribeGroupBusinessLogConfigsRequest
                 * @return DescribeGroupBusinessLogConfigsOutcome
                 */
                DescribeGroupBusinessLogConfigsOutcome DescribeGroupBusinessLogConfigs(const Model::DescribeGroupBusinessLogConfigsRequest &request);
                void DescribeGroupBusinessLogConfigsAsync(const Model::DescribeGroupBusinessLogConfigsRequest& request, const DescribeGroupBusinessLogConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGroupBusinessLogConfigsOutcomeCallable DescribeGroupBusinessLogConfigsCallable(const Model::DescribeGroupBusinessLogConfigsRequest& request);

                /**
                 *查询某个网关绑定的API 分组信息列表
                 * @param req DescribeGroupGatewaysRequest
                 * @return DescribeGroupGatewaysOutcome
                 */
                DescribeGroupGatewaysOutcome DescribeGroupGateways(const Model::DescribeGroupGatewaysRequest &request);
                void DescribeGroupGatewaysAsync(const Model::DescribeGroupGatewaysRequest& request, const DescribeGroupGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGroupGatewaysOutcomeCallable DescribeGroupGatewaysCallable(const Model::DescribeGroupGatewaysRequest& request);

                /**
                 *查询虚拟机部署组云主机列表
                 * @param req DescribeGroupInstancesRequest
                 * @return DescribeGroupInstancesOutcome
                 */
                DescribeGroupInstancesOutcome DescribeGroupInstances(const Model::DescribeGroupInstancesRequest &request);
                void DescribeGroupInstancesAsync(const Model::DescribeGroupInstancesRequest& request, const DescribeGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGroupInstancesOutcomeCallable DescribeGroupInstancesCallable(const Model::DescribeGroupInstancesRequest& request);

                /**
                 *查询部署组相关的发布信息
                 * @param req DescribeGroupReleaseRequest
                 * @return DescribeGroupReleaseOutcome
                 */
                DescribeGroupReleaseOutcome DescribeGroupRelease(const Model::DescribeGroupReleaseRequest &request);
                void DescribeGroupReleaseAsync(const Model::DescribeGroupReleaseRequest& request, const DescribeGroupReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGroupReleaseOutcomeCallable DescribeGroupReleaseCallable(const Model::DescribeGroupReleaseRequest& request);

                /**
                 *查询网关分组监控明细数据
                 * @param req DescribeGroupUseDetailRequest
                 * @return DescribeGroupUseDetailOutcome
                 */
                DescribeGroupUseDetailOutcome DescribeGroupUseDetail(const Model::DescribeGroupUseDetailRequest &request);
                void DescribeGroupUseDetailAsync(const Model::DescribeGroupUseDetailRequest& request, const DescribeGroupUseDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGroupUseDetailOutcomeCallable DescribeGroupUseDetailCallable(const Model::DescribeGroupUseDetailRequest& request);

                /**
                 *获取虚拟机部署组列表
                 * @param req DescribeGroupsRequest
                 * @return DescribeGroupsOutcome
                 */
                DescribeGroupsOutcome DescribeGroups(const Model::DescribeGroupsRequest &request);
                void DescribeGroupsAsync(const Model::DescribeGroupsRequest& request, const DescribeGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGroupsOutcomeCallable DescribeGroupsCallable(const Model::DescribeGroupsRequest& request);

                /**
                 *查询某个插件下绑定或未绑定的API分组
                 * @param req DescribeGroupsWithPluginRequest
                 * @return DescribeGroupsWithPluginOutcome
                 */
                DescribeGroupsWithPluginOutcome DescribeGroupsWithPlugin(const Model::DescribeGroupsWithPluginRequest &request);
                void DescribeGroupsWithPluginAsync(const Model::DescribeGroupsWithPluginRequest& request, const DescribeGroupsWithPluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGroupsWithPluginOutcomeCallable DescribeGroupsWithPluginCallable(const Model::DescribeGroupsWithPluginRequest& request);

                /**
                 *查询镜像仓库列表
                 * @param req DescribeImageRepositoryRequest
                 * @return DescribeImageRepositoryOutcome
                 */
                DescribeImageRepositoryOutcome DescribeImageRepository(const Model::DescribeImageRepositoryRequest &request);
                void DescribeImageRepositoryAsync(const Model::DescribeImageRepositoryRequest& request, const DescribeImageRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageRepositoryOutcomeCallable DescribeImageRepositoryCallable(const Model::DescribeImageRepositoryRequest& request);

                /**
                 *镜像版本列表
                 * @param req DescribeImageTagsRequest
                 * @return DescribeImageTagsOutcome
                 */
                DescribeImageTagsOutcome DescribeImageTags(const Model::DescribeImageTagsRequest &request);
                void DescribeImageTagsAsync(const Model::DescribeImageTagsRequest& request, const DescribeImageTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageTagsOutcomeCallable DescribeImageTagsCallable(const Model::DescribeImageTagsRequest& request);

                /**
                 *废弃接口

废弃
                 * @param req DescribeInovcationIndicatorsRequest
                 * @return DescribeInovcationIndicatorsOutcome
                 */
                DescribeInovcationIndicatorsOutcome DescribeInovcationIndicators(const Model::DescribeInovcationIndicatorsRequest &request);
                void DescribeInovcationIndicatorsAsync(const Model::DescribeInovcationIndicatorsRequest& request, const DescribeInovcationIndicatorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInovcationIndicatorsOutcomeCallable DescribeInovcationIndicatorsCallable(const Model::DescribeInovcationIndicatorsRequest& request);

                /**
                 *无
                 * @param req DescribeInstancesRequest
                 * @return DescribeInstancesOutcome
                 */
                DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest &request);
                void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request);

                /**
                 *查询调用指标数据变化曲线
                 * @param req DescribeInvocationMetricDataCurveRequest
                 * @return DescribeInvocationMetricDataCurveOutcome
                 */
                DescribeInvocationMetricDataCurveOutcome DescribeInvocationMetricDataCurve(const Model::DescribeInvocationMetricDataCurveRequest &request);
                void DescribeInvocationMetricDataCurveAsync(const Model::DescribeInvocationMetricDataCurveRequest& request, const DescribeInvocationMetricDataCurveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInvocationMetricDataCurveOutcomeCallable DescribeInvocationMetricDataCurveCallable(const Model::DescribeInvocationMetricDataCurveRequest& request);

                /**
                 *查询维度
                 * @param req DescribeInvocationMetricDataDimensionRequest
                 * @return DescribeInvocationMetricDataDimensionOutcome
                 */
                DescribeInvocationMetricDataDimensionOutcome DescribeInvocationMetricDataDimension(const Model::DescribeInvocationMetricDataDimensionRequest &request);
                void DescribeInvocationMetricDataDimensionAsync(const Model::DescribeInvocationMetricDataDimensionRequest& request, const DescribeInvocationMetricDataDimensionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInvocationMetricDataDimensionOutcomeCallable DescribeInvocationMetricDataDimensionCallable(const Model::DescribeInvocationMetricDataDimensionRequest& request);

                /**
                 *查询单值指标维度
                 * @param req DescribeInvocationMetricDataPointRequest
                 * @return DescribeInvocationMetricDataPointOutcome
                 */
                DescribeInvocationMetricDataPointOutcome DescribeInvocationMetricDataPoint(const Model::DescribeInvocationMetricDataPointRequest &request);
                void DescribeInvocationMetricDataPointAsync(const Model::DescribeInvocationMetricDataPointRequest& request, const DescribeInvocationMetricDataPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInvocationMetricDataPointOutcomeCallable DescribeInvocationMetricDataPointCallable(const Model::DescribeInvocationMetricDataPointRequest& request);

                /**
                 *查询调用指标数据散点图
                 * @param req DescribeInvocationMetricScatterPlotRequest
                 * @return DescribeInvocationMetricScatterPlotOutcome
                 */
                DescribeInvocationMetricScatterPlotOutcome DescribeInvocationMetricScatterPlot(const Model::DescribeInvocationMetricScatterPlotRequest &request);
                void DescribeInvocationMetricScatterPlotAsync(const Model::DescribeInvocationMetricScatterPlotRequest& request, const DescribeInvocationMetricScatterPlotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInvocationMetricScatterPlotOutcomeCallable DescribeInvocationMetricScatterPlotCallable(const Model::DescribeInvocationMetricScatterPlotRequest& request);

                /**
                 *查询java实例jvm监控数据,返回数据可选
                 * @param req DescribeJvmMonitorRequest
                 * @return DescribeJvmMonitorOutcome
                 */
                DescribeJvmMonitorOutcome DescribeJvmMonitor(const Model::DescribeJvmMonitorRequest &request);
                void DescribeJvmMonitorAsync(const Model::DescribeJvmMonitorRequest& request, const DescribeJvmMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeJvmMonitorOutcomeCallable DescribeJvmMonitorCallable(const Model::DescribeJvmMonitorRequest& request);

                /**
                 *查询泳道规则列表
                 * @param req DescribeLaneRulesRequest
                 * @return DescribeLaneRulesOutcome
                 */
                DescribeLaneRulesOutcome DescribeLaneRules(const Model::DescribeLaneRulesRequest &request);
                void DescribeLaneRulesAsync(const Model::DescribeLaneRulesRequest& request, const DescribeLaneRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLaneRulesOutcomeCallable DescribeLaneRulesCallable(const Model::DescribeLaneRulesRequest& request);

                /**
                 *查询泳道列表
                 * @param req DescribeLanesRequest
                 * @return DescribeLanesOutcome
                 */
                DescribeLanesOutcome DescribeLanes(const Model::DescribeLanesRequest &request);
                void DescribeLanesAsync(const Model::DescribeLanesRequest& request, const DescribeLanesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLanesOutcomeCallable DescribeLanesCallable(const Model::DescribeLanesRequest& request);

                /**
                 *查询微服务详情
                 * @param req DescribeMicroserviceRequest
                 * @return DescribeMicroserviceOutcome
                 */
                DescribeMicroserviceOutcome DescribeMicroservice(const Model::DescribeMicroserviceRequest &request);
                void DescribeMicroserviceAsync(const Model::DescribeMicroserviceRequest& request, const DescribeMicroserviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMicroserviceOutcomeCallable DescribeMicroserviceCallable(const Model::DescribeMicroserviceRequest& request);

                /**
                 *获取微服务列表
                 * @param req DescribeMicroservicesRequest
                 * @return DescribeMicroservicesOutcome
                 */
                DescribeMicroservicesOutcome DescribeMicroservices(const Model::DescribeMicroservicesRequest &request);
                void DescribeMicroservicesAsync(const Model::DescribeMicroservicesRequest& request, const DescribeMicroservicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMicroservicesOutcomeCallable DescribeMicroservicesCallable(const Model::DescribeMicroservicesRequest& request);

                /**
                 *通过部署组ID获取微服务
                 * @param req DescribeMicroservicesByGroupIdsRequest
                 * @return DescribeMicroservicesByGroupIdsOutcome
                 */
                DescribeMicroservicesByGroupIdsOutcome DescribeMicroservicesByGroupIds(const Model::DescribeMicroservicesByGroupIdsRequest &request);
                void DescribeMicroservicesByGroupIdsAsync(const Model::DescribeMicroservicesByGroupIdsRequest& request, const DescribeMicroservicesByGroupIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMicroservicesByGroupIdsOutcomeCallable DescribeMicroservicesByGroupIdsCallable(const Model::DescribeMicroservicesByGroupIdsRequest& request);

                /**
                 *查询服务API列表
                 * @param req DescribeMsApiListRequest
                 * @return DescribeMsApiListOutcome
                 */
                DescribeMsApiListOutcome DescribeMsApiList(const Model::DescribeMsApiListRequest &request);
                void DescribeMsApiListAsync(const Model::DescribeMsApiListRequest& request, const DescribeMsApiListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMsApiListOutcomeCallable DescribeMsApiListCallable(const Model::DescribeMsApiListRequest& request);

                /**
                 *服务调用监控统计概览
                 * @param req DescribeOverviewInvocationRequest
                 * @return DescribeOverviewInvocationOutcome
                 */
                DescribeOverviewInvocationOutcome DescribeOverviewInvocation(const Model::DescribeOverviewInvocationRequest &request);
                void DescribeOverviewInvocationAsync(const Model::DescribeOverviewInvocationRequest& request, const DescribeOverviewInvocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOverviewInvocationOutcomeCallable DescribeOverviewInvocationCallable(const Model::DescribeOverviewInvocationRequest& request);

                /**
                 *查询路径重写
                 * @param req DescribePathRewriteRequest
                 * @return DescribePathRewriteOutcome
                 */
                DescribePathRewriteOutcome DescribePathRewrite(const Model::DescribePathRewriteRequest &request);
                void DescribePathRewriteAsync(const Model::DescribePathRewriteRequest& request, const DescribePathRewriteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePathRewriteOutcomeCallable DescribePathRewriteCallable(const Model::DescribePathRewriteRequest& request);

                /**
                 *查询路径重写列表
                 * @param req DescribePathRewritesRequest
                 * @return DescribePathRewritesOutcome
                 */
                DescribePathRewritesOutcome DescribePathRewrites(const Model::DescribePathRewritesRequest &request);
                void DescribePathRewritesAsync(const Model::DescribePathRewritesRequest& request, const DescribePathRewritesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePathRewritesOutcomeCallable DescribePathRewritesCallable(const Model::DescribePathRewritesRequest& request);

                /**
                 *无
                 * @param req DescribePkgsRequest
                 * @return DescribePkgsOutcome
                 */
                DescribePkgsOutcome DescribePkgs(const Model::DescribePkgsRequest &request);
                void DescribePkgsAsync(const Model::DescribePkgsRequest& request, const DescribePkgsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePkgsOutcomeCallable DescribePkgsCallable(const Model::DescribePkgsRequest& request);

                /**
                 *分页查询网关分组/API绑定（或未绑定）的插件列表
                 * @param req DescribePluginInstancesRequest
                 * @return DescribePluginInstancesOutcome
                 */
                DescribePluginInstancesOutcome DescribePluginInstances(const Model::DescribePluginInstancesRequest &request);
                void DescribePluginInstancesAsync(const Model::DescribePluginInstancesRequest& request, const DescribePluginInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePluginInstancesOutcomeCallable DescribePluginInstancesCallable(const Model::DescribePluginInstancesRequest& request);

                /**
                 *获取部署组实例列表
                 * @param req DescribePodInstancesRequest
                 * @return DescribePodInstancesOutcome
                 */
                DescribePodInstancesOutcome DescribePodInstances(const Model::DescribePodInstancesRequest &request);
                void DescribePodInstancesAsync(const Model::DescribePodInstancesRequest& request, const DescribePodInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePodInstancesOutcomeCallable DescribePodInstancesCallable(const Model::DescribePodInstancesRequest& request);

                /**
                 *查询数据集列表
                 * @param req DescribeProgramsRequest
                 * @return DescribeProgramsOutcome
                 */
                DescribeProgramsOutcome DescribePrograms(const Model::DescribeProgramsRequest &request);
                void DescribeProgramsAsync(const Model::DescribeProgramsRequest& request, const DescribeProgramsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProgramsOutcomeCallable DescribeProgramsCallable(const Model::DescribeProgramsRequest& request);

                /**
                 *查询公共配置（单条）
                 * @param req DescribePublicConfigRequest
                 * @return DescribePublicConfigOutcome
                 */
                DescribePublicConfigOutcome DescribePublicConfig(const Model::DescribePublicConfigRequest &request);
                void DescribePublicConfigAsync(const Model::DescribePublicConfigRequest& request, const DescribePublicConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePublicConfigOutcomeCallable DescribePublicConfigCallable(const Model::DescribePublicConfigRequest& request);

                /**
                 *查询公共配置发布历史
                 * @param req DescribePublicConfigReleaseLogsRequest
                 * @return DescribePublicConfigReleaseLogsOutcome
                 */
                DescribePublicConfigReleaseLogsOutcome DescribePublicConfigReleaseLogs(const Model::DescribePublicConfigReleaseLogsRequest &request);
                void DescribePublicConfigReleaseLogsAsync(const Model::DescribePublicConfigReleaseLogsRequest& request, const DescribePublicConfigReleaseLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePublicConfigReleaseLogsOutcomeCallable DescribePublicConfigReleaseLogsCallable(const Model::DescribePublicConfigReleaseLogsRequest& request);

                /**
                 *查询公共配置发布信息
                 * @param req DescribePublicConfigReleasesRequest
                 * @return DescribePublicConfigReleasesOutcome
                 */
                DescribePublicConfigReleasesOutcome DescribePublicConfigReleases(const Model::DescribePublicConfigReleasesRequest &request);
                void DescribePublicConfigReleasesAsync(const Model::DescribePublicConfigReleasesRequest& request, const DescribePublicConfigReleasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePublicConfigReleasesOutcomeCallable DescribePublicConfigReleasesCallable(const Model::DescribePublicConfigReleasesRequest& request);

                /**
                 *查询公共配置汇总列表
                 * @param req DescribePublicConfigSummaryRequest
                 * @return DescribePublicConfigSummaryOutcome
                 */
                DescribePublicConfigSummaryOutcome DescribePublicConfigSummary(const Model::DescribePublicConfigSummaryRequest &request);
                void DescribePublicConfigSummaryAsync(const Model::DescribePublicConfigSummaryRequest& request, const DescribePublicConfigSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePublicConfigSummaryOutcomeCallable DescribePublicConfigSummaryCallable(const Model::DescribePublicConfigSummaryRequest& request);

                /**
                 *查询公共配置项列表
                 * @param req DescribePublicConfigsRequest
                 * @return DescribePublicConfigsOutcome
                 */
                DescribePublicConfigsOutcome DescribePublicConfigs(const Model::DescribePublicConfigsRequest &request);
                void DescribePublicConfigsAsync(const Model::DescribePublicConfigsRequest& request, const DescribePublicConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePublicConfigsOutcomeCallable DescribePublicConfigsCallable(const Model::DescribePublicConfigsRequest& request);

                /**
                 *查询group发布的配置
                 * @param req DescribeReleasedConfigRequest
                 * @return DescribeReleasedConfigOutcome
                 */
                DescribeReleasedConfigOutcome DescribeReleasedConfig(const Model::DescribeReleasedConfigRequest &request);
                void DescribeReleasedConfigAsync(const Model::DescribeReleasedConfigRequest& request, const DescribeReleasedConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReleasedConfigOutcomeCallable DescribeReleasedConfigCallable(const Model::DescribeReleasedConfigRequest& request);

                /**
                 *查询仓库列表
                 * @param req DescribeRepositoriesRequest
                 * @return DescribeRepositoriesOutcome
                 */
                DescribeRepositoriesOutcome DescribeRepositories(const Model::DescribeRepositoriesRequest &request);
                void DescribeRepositoriesAsync(const Model::DescribeRepositoriesRequest& request, const DescribeRepositoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRepositoriesOutcomeCallable DescribeRepositoriesCallable(const Model::DescribeRepositoriesRequest& request);

                /**
                 *查询仓库信息
                 * @param req DescribeRepositoryRequest
                 * @return DescribeRepositoryOutcome
                 */
                DescribeRepositoryOutcome DescribeRepository(const Model::DescribeRepositoryRequest &request);
                void DescribeRepositoryAsync(const Model::DescribeRepositoryRequest& request, const DescribeRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRepositoryOutcomeCallable DescribeRepositoryCallable(const Model::DescribeRepositoryRequest& request);

                /**
                 *资源任务的执行状态描述接口
                 * @param req DescribeResourceTaskStatusRequest
                 * @return DescribeResourceTaskStatusOutcome
                 */
                DescribeResourceTaskStatusOutcome DescribeResourceTaskStatus(const Model::DescribeResourceTaskStatusRequest &request);
                void DescribeResourceTaskStatusAsync(const Model::DescribeResourceTaskStatusRequest& request, const DescribeResourceTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourceTaskStatusOutcomeCallable DescribeResourceTaskStatusCallable(const Model::DescribeResourceTaskStatusRequest& request);

                /**
                 *查询简单应用列表
                 * @param req DescribeSimpleApplicationsRequest
                 * @return DescribeSimpleApplicationsOutcome
                 */
                DescribeSimpleApplicationsOutcome DescribeSimpleApplications(const Model::DescribeSimpleApplicationsRequest &request);
                void DescribeSimpleApplicationsAsync(const Model::DescribeSimpleApplicationsRequest& request, const DescribeSimpleApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSimpleApplicationsOutcomeCallable DescribeSimpleApplicationsCallable(const Model::DescribeSimpleApplicationsRequest& request);

                /**
                 *查询简单集群列表
                 * @param req DescribeSimpleClustersRequest
                 * @return DescribeSimpleClustersOutcome
                 */
                DescribeSimpleClustersOutcome DescribeSimpleClusters(const Model::DescribeSimpleClustersRequest &request);
                void DescribeSimpleClustersAsync(const Model::DescribeSimpleClustersRequest& request, const DescribeSimpleClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSimpleClustersOutcomeCallable DescribeSimpleClustersCallable(const Model::DescribeSimpleClustersRequest& request);

                /**
                 *查询简单部署组列表
                 * @param req DescribeSimpleGroupsRequest
                 * @return DescribeSimpleGroupsOutcome
                 */
                DescribeSimpleGroupsOutcome DescribeSimpleGroups(const Model::DescribeSimpleGroupsRequest &request);
                void DescribeSimpleGroupsAsync(const Model::DescribeSimpleGroupsRequest& request, const DescribeSimpleGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSimpleGroupsOutcomeCallable DescribeSimpleGroupsCallable(const Model::DescribeSimpleGroupsRequest& request);

                /**
                 *查询简单命名空间列表
                 * @param req DescribeSimpleNamespacesRequest
                 * @return DescribeSimpleNamespacesOutcome
                 */
                DescribeSimpleNamespacesOutcome DescribeSimpleNamespaces(const Model::DescribeSimpleNamespacesRequest &request);
                void DescribeSimpleNamespacesAsync(const Model::DescribeSimpleNamespacesRequest& request, const DescribeSimpleNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSimpleNamespacesOutcomeCallable DescribeSimpleNamespacesCallable(const Model::DescribeSimpleNamespacesRequest& request);

                /**
                 *服务统计页面：接口和服务维度
                 * @param req DescribeStatisticsRequest
                 * @return DescribeStatisticsOutcome
                 */
                DescribeStatisticsOutcome DescribeStatistics(const Model::DescribeStatisticsRequest &request);
                void DescribeStatisticsAsync(const Model::DescribeStatisticsRequest& request, const DescribeStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStatisticsOutcomeCallable DescribeStatisticsCallable(const Model::DescribeStatisticsRequest& request);

                /**
                 *查询任务详情
                 * @param req DescribeTaskDetailRequest
                 * @return DescribeTaskDetailOutcome
                 */
                DescribeTaskDetailOutcome DescribeTaskDetail(const Model::DescribeTaskDetailRequest &request);
                void DescribeTaskDetailAsync(const Model::DescribeTaskDetailRequest& request, const DescribeTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskDetailOutcomeCallable DescribeTaskDetailCallable(const Model::DescribeTaskDetailRequest& request);

                /**
                 *查询任务最近一次执行状态
                 * @param req DescribeTaskLastStatusRequest
                 * @return DescribeTaskLastStatusOutcome
                 */
                DescribeTaskLastStatusOutcome DescribeTaskLastStatus(const Model::DescribeTaskLastStatusRequest &request);
                void DescribeTaskLastStatusAsync(const Model::DescribeTaskLastStatusRequest& request, const DescribeTaskLastStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskLastStatusOutcomeCallable DescribeTaskLastStatusCallable(const Model::DescribeTaskLastStatusRequest& request);

                /**
                 *翻页查询任务列表
                 * @param req DescribeTaskRecordsRequest
                 * @return DescribeTaskRecordsOutcome
                 */
                DescribeTaskRecordsOutcome DescribeTaskRecords(const Model::DescribeTaskRecordsRequest &request);
                void DescribeTaskRecordsAsync(const Model::DescribeTaskRecordsRequest& request, const DescribeTaskRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskRecordsOutcomeCallable DescribeTaskRecordsCallable(const Model::DescribeTaskRecordsRequest& request);

                /**
                 *查询网关API监控明细数据（仅单元化网关），非单元化网关使用DescribeApiUseDetail
                 * @param req DescribeUnitApiUseDetailRequest
                 * @return DescribeUnitApiUseDetailOutcome
                 */
                DescribeUnitApiUseDetailOutcome DescribeUnitApiUseDetail(const Model::DescribeUnitApiUseDetailRequest &request);
                void DescribeUnitApiUseDetailAsync(const Model::DescribeUnitApiUseDetailRequest& request, const DescribeUnitApiUseDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUnitApiUseDetailOutcomeCallable DescribeUnitApiUseDetailCallable(const Model::DescribeUnitApiUseDetailRequest& request);

                /**
                 *查询单元化命名空间列表
                 * @param req DescribeUnitNamespacesRequest
                 * @return DescribeUnitNamespacesOutcome
                 */
                DescribeUnitNamespacesOutcome DescribeUnitNamespaces(const Model::DescribeUnitNamespacesRequest &request);
                void DescribeUnitNamespacesAsync(const Model::DescribeUnitNamespacesRequest& request, const DescribeUnitNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUnitNamespacesOutcomeCallable DescribeUnitNamespacesCallable(const Model::DescribeUnitNamespacesRequest& request);

                /**
                 *查询单元化规则详情
                 * @param req DescribeUnitRuleRequest
                 * @return DescribeUnitRuleOutcome
                 */
                DescribeUnitRuleOutcome DescribeUnitRule(const Model::DescribeUnitRuleRequest &request);
                void DescribeUnitRuleAsync(const Model::DescribeUnitRuleRequest& request, const DescribeUnitRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUnitRuleOutcomeCallable DescribeUnitRuleCallable(const Model::DescribeUnitRuleRequest& request);

                /**
                 *查询单元化规则列表
                 * @param req DescribeUnitRulesRequest
                 * @return DescribeUnitRulesOutcome
                 */
                DescribeUnitRulesOutcome DescribeUnitRules(const Model::DescribeUnitRulesRequest &request);
                void DescribeUnitRulesAsync(const Model::DescribeUnitRulesRequest& request, const DescribeUnitRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUnitRulesOutcomeCallable DescribeUnitRulesCallable(const Model::DescribeUnitRulesRequest& request);

                /**
                 *查询单元化规则列表V2
                 * @param req DescribeUnitRulesV2Request
                 * @return DescribeUnitRulesV2Outcome
                 */
                DescribeUnitRulesV2Outcome DescribeUnitRulesV2(const Model::DescribeUnitRulesV2Request &request);
                void DescribeUnitRulesV2Async(const Model::DescribeUnitRulesV2Request& request, const DescribeUnitRulesV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUnitRulesV2OutcomeCallable DescribeUnitRulesV2Callable(const Model::DescribeUnitRulesV2Request& request);

                /**
                 *TSF会将软件包上传到腾讯云对象存储（COS）。调用此接口获取上传信息，如目标地域，桶，包Id，存储路径，鉴权信息等，之后请使用COS API（或SDK）进行上传。
COS相关文档请查阅：https://cloud.tencent.com/document/product/436
                 * @param req DescribeUploadInfoRequest
                 * @return DescribeUploadInfoOutcome
                 */
                DescribeUploadInfoOutcome DescribeUploadInfo(const Model::DescribeUploadInfoRequest &request);
                void DescribeUploadInfoAsync(const Model::DescribeUploadInfoRequest& request, const DescribeUploadInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUploadInfoOutcomeCallable DescribeUploadInfoCallable(const Model::DescribeUploadInfoRequest& request);

                /**
                 *查询可用于被导入的命名空间列表
                 * @param req DescribeUsableUnitNamespacesRequest
                 * @return DescribeUsableUnitNamespacesOutcome
                 */
                DescribeUsableUnitNamespacesOutcome DescribeUsableUnitNamespaces(const Model::DescribeUsableUnitNamespacesRequest &request);
                void DescribeUsableUnitNamespacesAsync(const Model::DescribeUsableUnitNamespacesRequest& request, const DescribeUsableUnitNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUsableUnitNamespacesOutcomeCallable DescribeUsableUnitNamespacesCallable(const Model::DescribeUsableUnitNamespacesRequest& request);

                /**
                 *禁用泳道规则
                 * @param req DisableLaneRuleRequest
                 * @return DisableLaneRuleOutcome
                 */
                DisableLaneRuleOutcome DisableLaneRule(const Model::DisableLaneRuleRequest &request);
                void DisableLaneRuleAsync(const Model::DisableLaneRuleRequest& request, const DisableLaneRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableLaneRuleOutcomeCallable DisableLaneRuleCallable(const Model::DisableLaneRuleRequest& request);

                /**
                 *停用任务
                 * @param req DisableTaskRequest
                 * @return DisableTaskOutcome
                 */
                DisableTaskOutcome DisableTask(const Model::DisableTaskRequest &request);
                void DisableTaskAsync(const Model::DisableTaskRequest& request, const DisableTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableTaskOutcomeCallable DisableTaskCallable(const Model::DisableTaskRequest& request);

                /**
                 *停用工作流
                 * @param req DisableTaskFlowRequest
                 * @return DisableTaskFlowOutcome
                 */
                DisableTaskFlowOutcome DisableTaskFlow(const Model::DisableTaskFlowRequest &request);
                void DisableTaskFlowAsync(const Model::DisableTaskFlowRequest& request, const DisableTaskFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableTaskFlowOutcomeCallable DisableTaskFlowCallable(const Model::DisableTaskFlowRequest& request);

                /**
                 *禁用单元化路由
                 * @param req DisableUnitRouteRequest
                 * @return DisableUnitRouteOutcome
                 */
                DisableUnitRouteOutcome DisableUnitRoute(const Model::DisableUnitRouteRequest &request);
                void DisableUnitRouteAsync(const Model::DisableUnitRouteRequest& request, const DisableUnitRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableUnitRouteOutcomeCallable DisableUnitRouteCallable(const Model::DisableUnitRouteRequest& request);

                /**
                 *禁用单元化规则
                 * @param req DisableUnitRuleRequest
                 * @return DisableUnitRuleOutcome
                 */
                DisableUnitRuleOutcome DisableUnitRule(const Model::DisableUnitRuleRequest &request);
                void DisableUnitRuleAsync(const Model::DisableUnitRuleRequest& request, const DisableUnitRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableUnitRuleOutcomeCallable DisableUnitRuleCallable(const Model::DisableUnitRuleRequest& request);

                /**
                 *取消关联业务日志配置项和应用
                 * @param req DisassociateBusinessLogConfigRequest
                 * @return DisassociateBusinessLogConfigOutcome
                 */
                DisassociateBusinessLogConfigOutcome DisassociateBusinessLogConfig(const Model::DisassociateBusinessLogConfigRequest &request);
                void DisassociateBusinessLogConfigAsync(const Model::DisassociateBusinessLogConfigRequest& request, const DisassociateBusinessLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateBusinessLogConfigOutcomeCallable DisassociateBusinessLogConfigCallable(const Model::DisassociateBusinessLogConfigRequest& request);

                /**
                 *取消关联投递信息和部署组
                 * @param req DisassociateKafkaConfigRequest
                 * @return DisassociateKafkaConfigOutcome
                 */
                DisassociateKafkaConfigOutcome DisassociateKafkaConfig(const Model::DisassociateKafkaConfigRequest &request);
                void DisassociateKafkaConfigAsync(const Model::DisassociateKafkaConfigRequest& request, const DisassociateKafkaConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateKafkaConfigOutcomeCallable DisassociateKafkaConfigCallable(const Model::DisassociateKafkaConfigRequest& request);

                /**
                 *下线Api分组
                 * @param req DraftApiGroupRequest
                 * @return DraftApiGroupOutcome
                 */
                DraftApiGroupOutcome DraftApiGroup(const Model::DraftApiGroupRequest &request);
                void DraftApiGroupAsync(const Model::DraftApiGroupRequest& request, const DraftApiGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DraftApiGroupOutcomeCallable DraftApiGroupCallable(const Model::DraftApiGroupRequest& request);

                /**
                 *启用泳道规则
                 * @param req EnableLaneRuleRequest
                 * @return EnableLaneRuleOutcome
                 */
                EnableLaneRuleOutcome EnableLaneRule(const Model::EnableLaneRuleRequest &request);
                void EnableLaneRuleAsync(const Model::EnableLaneRuleRequest& request, const EnableLaneRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableLaneRuleOutcomeCallable EnableLaneRuleCallable(const Model::EnableLaneRuleRequest& request);

                /**
                 *启用任务
                 * @param req EnableTaskRequest
                 * @return EnableTaskOutcome
                 */
                EnableTaskOutcome EnableTask(const Model::EnableTaskRequest &request);
                void EnableTaskAsync(const Model::EnableTaskRequest& request, const EnableTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableTaskOutcomeCallable EnableTaskCallable(const Model::EnableTaskRequest& request);

                /**
                 *启用工作流
                 * @param req EnableTaskFlowRequest
                 * @return EnableTaskFlowOutcome
                 */
                EnableTaskFlowOutcome EnableTaskFlow(const Model::EnableTaskFlowRequest &request);
                void EnableTaskFlowAsync(const Model::EnableTaskFlowRequest& request, const EnableTaskFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableTaskFlowOutcomeCallable EnableTaskFlowCallable(const Model::EnableTaskFlowRequest& request);

                /**
                 *启用单元化路由
                 * @param req EnableUnitRouteRequest
                 * @return EnableUnitRouteOutcome
                 */
                EnableUnitRouteOutcome EnableUnitRoute(const Model::EnableUnitRouteRequest &request);
                void EnableUnitRouteAsync(const Model::EnableUnitRouteRequest& request, const EnableUnitRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableUnitRouteOutcomeCallable EnableUnitRouteCallable(const Model::EnableUnitRouteRequest& request);

                /**
                 *启用单元化规则
                 * @param req EnableUnitRuleRequest
                 * @return EnableUnitRuleOutcome
                 */
                EnableUnitRuleOutcome EnableUnitRule(const Model::EnableUnitRuleRequest &request);
                void EnableUnitRuleAsync(const Model::EnableUnitRuleRequest& request, const EnableUnitRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableUnitRuleOutcomeCallable EnableUnitRuleCallable(const Model::EnableUnitRuleRequest& request);

                /**
                 *手动执行一次任务
                 * @param req ExecuteTaskRequest
                 * @return ExecuteTaskOutcome
                 */
                ExecuteTaskOutcome ExecuteTask(const Model::ExecuteTaskRequest &request);
                void ExecuteTaskAsync(const Model::ExecuteTaskRequest& request, const ExecuteTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExecuteTaskOutcomeCallable ExecuteTaskCallable(const Model::ExecuteTaskRequest& request);

                /**
                 *执行一次工作流
                 * @param req ExecuteTaskFlowRequest
                 * @return ExecuteTaskFlowOutcome
                 */
                ExecuteTaskFlowOutcome ExecuteTaskFlow(const Model::ExecuteTaskFlowRequest &request);
                void ExecuteTaskFlowAsync(const Model::ExecuteTaskFlowRequest& request, const ExecuteTaskFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExecuteTaskFlowOutcomeCallable ExecuteTaskFlowCallable(const Model::ExecuteTaskFlowRequest& request);

                /**
                 *虚拟机部署组添加实例
                 * @param req ExpandGroupRequest
                 * @return ExpandGroupOutcome
                 */
                ExpandGroupOutcome ExpandGroup(const Model::ExpandGroupRequest &request);
                void ExpandGroupAsync(const Model::ExpandGroupRequest& request, const ExpandGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExpandGroupOutcomeCallable ExpandGroupCallable(const Model::ExpandGroupRequest& request);

                /**
                 *修改应用
                 * @param req ModifyApplicationRequest
                 * @return ModifyApplicationOutcome
                 */
                ModifyApplicationOutcome ModifyApplication(const Model::ModifyApplicationRequest &request);
                void ModifyApplicationAsync(const Model::ModifyApplicationRequest& request, const ModifyApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApplicationOutcomeCallable ModifyApplicationCallable(const Model::ModifyApplicationRequest& request);

                /**
                 *修改集群信息
                 * @param req ModifyClusterRequest
                 * @return ModifyClusterOutcome
                 */
                ModifyClusterOutcome ModifyCluster(const Model::ModifyClusterRequest &request);
                void ModifyClusterAsync(const Model::ModifyClusterRequest& request, const ModifyClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClusterOutcomeCallable ModifyClusterCallable(const Model::ModifyClusterRequest& request);

                /**
                 *修改容器部署组
                 * @param req ModifyContainerGroupRequest
                 * @return ModifyContainerGroupOutcome
                 */
                ModifyContainerGroupOutcome ModifyContainerGroup(const Model::ModifyContainerGroupRequest &request);
                void ModifyContainerGroupAsync(const Model::ModifyContainerGroupRequest& request, const ModifyContainerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyContainerGroupOutcomeCallable ModifyContainerGroupCallable(const Model::ModifyContainerGroupRequest& request);

                /**
                 *修改容器部署组实例数
                 * @param req ModifyContainerReplicasRequest
                 * @return ModifyContainerReplicasOutcome
                 */
                ModifyContainerReplicasOutcome ModifyContainerReplicas(const Model::ModifyContainerReplicasRequest &request);
                void ModifyContainerReplicasAsync(const Model::ModifyContainerReplicasRequest& request, const ModifyContainerReplicasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyContainerReplicasOutcomeCallable ModifyContainerReplicasCallable(const Model::ModifyContainerReplicasRequest& request);

                /**
                 *更新部署组信息
                 * @param req ModifyGroupRequest
                 * @return ModifyGroupOutcome
                 */
                ModifyGroupOutcome ModifyGroup(const Model::ModifyGroupRequest &request);
                void ModifyGroupAsync(const Model::ModifyGroupRequest& request, const ModifyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyGroupOutcomeCallable ModifyGroupCallable(const Model::ModifyGroupRequest& request);

                /**
                 *更新泳道信息
                 * @param req ModifyLaneRequest
                 * @return ModifyLaneOutcome
                 */
                ModifyLaneOutcome ModifyLane(const Model::ModifyLaneRequest &request);
                void ModifyLaneAsync(const Model::ModifyLaneRequest& request, const ModifyLaneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLaneOutcomeCallable ModifyLaneCallable(const Model::ModifyLaneRequest& request);

                /**
                 *更新泳道规则
                 * @param req ModifyLaneRuleRequest
                 * @return ModifyLaneRuleOutcome
                 */
                ModifyLaneRuleOutcome ModifyLaneRule(const Model::ModifyLaneRuleRequest &request);
                void ModifyLaneRuleAsync(const Model::ModifyLaneRuleRequest& request, const ModifyLaneRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLaneRuleOutcomeCallable ModifyLaneRuleCallable(const Model::ModifyLaneRuleRequest& request);

                /**
                 *修改微服务详情
                 * @param req ModifyMicroserviceRequest
                 * @return ModifyMicroserviceOutcome
                 */
                ModifyMicroserviceOutcome ModifyMicroservice(const Model::ModifyMicroserviceRequest &request);
                void ModifyMicroserviceAsync(const Model::ModifyMicroserviceRequest& request, const ModifyMicroserviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMicroserviceOutcomeCallable ModifyMicroserviceCallable(const Model::ModifyMicroserviceRequest& request);

                /**
                 *修改命名空间
                 * @param req ModifyNamespaceRequest
                 * @return ModifyNamespaceOutcome
                 */
                ModifyNamespaceOutcome ModifyNamespace(const Model::ModifyNamespaceRequest &request);
                void ModifyNamespaceAsync(const Model::ModifyNamespaceRequest& request, const ModifyNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNamespaceOutcomeCallable ModifyNamespaceCallable(const Model::ModifyNamespaceRequest& request);

                /**
                 *修改路径重写
                 * @param req ModifyPathRewriteRequest
                 * @return ModifyPathRewriteOutcome
                 */
                ModifyPathRewriteOutcome ModifyPathRewrite(const Model::ModifyPathRewriteRequest &request);
                void ModifyPathRewriteAsync(const Model::ModifyPathRewriteRequest& request, const ModifyPathRewriteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPathRewriteOutcomeCallable ModifyPathRewriteCallable(const Model::ModifyPathRewriteRequest& request);

                /**
                 *更新数据集
                 * @param req ModifyProgramRequest
                 * @return ModifyProgramOutcome
                 */
                ModifyProgramOutcome ModifyProgram(const Model::ModifyProgramRequest &request);
                void ModifyProgramAsync(const Model::ModifyProgramRequest& request, const ModifyProgramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyProgramOutcomeCallable ModifyProgramCallable(const Model::ModifyProgramRequest& request);

                /**
                 *修改任务
                 * @param req ModifyTaskRequest
                 * @return ModifyTaskOutcome
                 */
                ModifyTaskOutcome ModifyTask(const Model::ModifyTaskRequest &request);
                void ModifyTaskAsync(const Model::ModifyTaskRequest& request, const ModifyTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTaskOutcomeCallable ModifyTaskCallable(const Model::ModifyTaskRequest& request);

                /**
                 *调用该接口和COS的上传接口后，需要调用此接口更新TSF中保存的程序包状态。
调用此接口完成后，才标志上传包流程结束。
                 * @param req ModifyUploadInfoRequest
                 * @return ModifyUploadInfoOutcome
                 */
                ModifyUploadInfoOutcome ModifyUploadInfo(const Model::ModifyUploadInfoRequest &request);
                void ModifyUploadInfoAsync(const Model::ModifyUploadInfoRequest& request, const ModifyUploadInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUploadInfoOutcomeCallable ModifyUploadInfoCallable(const Model::ModifyUploadInfoRequest& request);

                /**
                 *绑定解绑tcr仓库
                 * @param req OperateApplicationTcrBindingRequest
                 * @return OperateApplicationTcrBindingOutcome
                 */
                OperateApplicationTcrBindingOutcome OperateApplicationTcrBinding(const Model::OperateApplicationTcrBindingRequest &request);
                void OperateApplicationTcrBindingAsync(const Model::OperateApplicationTcrBindingRequest& request, const OperateApplicationTcrBindingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OperateApplicationTcrBindingOutcomeCallable OperateApplicationTcrBindingCallable(const Model::OperateApplicationTcrBindingRequest& request);

                /**
                 *后端服务已经删除这个接口,  API 接口下线处理

重关联业务日志配置
                 * @param req ReassociateBusinessLogConfigRequest
                 * @return ReassociateBusinessLogConfigOutcome
                 */
                ReassociateBusinessLogConfigOutcome ReassociateBusinessLogConfig(const Model::ReassociateBusinessLogConfigRequest &request);
                void ReassociateBusinessLogConfigAsync(const Model::ReassociateBusinessLogConfigRequest& request, const ReassociateBusinessLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReassociateBusinessLogConfigOutcomeCallable ReassociateBusinessLogConfigCallable(const Model::ReassociateBusinessLogConfigRequest& request);

                /**
                 *重新执行任务
                 * @param req RedoTaskRequest
                 * @return RedoTaskOutcome
                 */
                RedoTaskOutcome RedoTask(const Model::RedoTaskRequest &request);
                void RedoTaskAsync(const Model::RedoTaskRequest& request, const RedoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RedoTaskOutcomeCallable RedoTaskCallable(const Model::RedoTaskRequest& request);

                /**
                 *重新执行任务批次
                 * @param req RedoTaskBatchRequest
                 * @return RedoTaskBatchOutcome
                 */
                RedoTaskBatchOutcome RedoTaskBatch(const Model::RedoTaskBatchRequest &request);
                void RedoTaskBatchAsync(const Model::RedoTaskBatchRequest& request, const RedoTaskBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RedoTaskBatchOutcomeCallable RedoTaskBatchCallable(const Model::RedoTaskBatchRequest& request);

                /**
                 *重新执行在某个节点上执行任务。
                 * @param req RedoTaskExecuteRequest
                 * @return RedoTaskExecuteOutcome
                 */
                RedoTaskExecuteOutcome RedoTaskExecute(const Model::RedoTaskExecuteRequest &request);
                void RedoTaskExecuteAsync(const Model::RedoTaskExecuteRequest& request, const RedoTaskExecuteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RedoTaskExecuteOutcomeCallable RedoTaskExecuteCallable(const Model::RedoTaskExecuteRequest& request);

                /**
                 *重新执行工作流批次
                 * @param req RedoTaskFlowBatchRequest
                 * @return RedoTaskFlowBatchOutcome
                 */
                RedoTaskFlowBatchOutcome RedoTaskFlowBatch(const Model::RedoTaskFlowBatchRequest &request);
                void RedoTaskFlowBatchAsync(const Model::RedoTaskFlowBatchRequest& request, const RedoTaskFlowBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RedoTaskFlowBatchOutcomeCallable RedoTaskFlowBatchCallable(const Model::RedoTaskFlowBatchRequest& request);

                /**
                 *发布Api分组
                 * @param req ReleaseApiGroupRequest
                 * @return ReleaseApiGroupOutcome
                 */
                ReleaseApiGroupOutcome ReleaseApiGroup(const Model::ReleaseApiGroupRequest &request);
                void ReleaseApiGroupAsync(const Model::ReleaseApiGroupRequest& request, const ReleaseApiGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReleaseApiGroupOutcomeCallable ReleaseApiGroupCallable(const Model::ReleaseApiGroupRequest& request);

                /**
                 *发布配置
                 * @param req ReleaseConfigRequest
                 * @return ReleaseConfigOutcome
                 */
                ReleaseConfigOutcome ReleaseConfig(const Model::ReleaseConfigRequest &request);
                void ReleaseConfigAsync(const Model::ReleaseConfigRequest& request, const ReleaseConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReleaseConfigOutcomeCallable ReleaseConfigCallable(const Model::ReleaseConfigRequest& request);

                /**
                 *发布配置,并且返回配置 ID
                 * @param req ReleaseConfigWithDetailRespRequest
                 * @return ReleaseConfigWithDetailRespOutcome
                 */
                ReleaseConfigWithDetailRespOutcome ReleaseConfigWithDetailResp(const Model::ReleaseConfigWithDetailRespRequest &request);
                void ReleaseConfigWithDetailRespAsync(const Model::ReleaseConfigWithDetailRespRequest& request, const ReleaseConfigWithDetailRespAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReleaseConfigWithDetailRespOutcomeCallable ReleaseConfigWithDetailRespCallable(const Model::ReleaseConfigWithDetailRespRequest& request);

                /**
                 *发布文件配置
                 * @param req ReleaseFileConfigRequest
                 * @return ReleaseFileConfigOutcome
                 */
                ReleaseFileConfigOutcome ReleaseFileConfig(const Model::ReleaseFileConfigRequest &request);
                void ReleaseFileConfigAsync(const Model::ReleaseFileConfigRequest& request, const ReleaseFileConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReleaseFileConfigOutcomeCallable ReleaseFileConfigCallable(const Model::ReleaseFileConfigRequest& request);

                /**
                 *发布公共配置
                 * @param req ReleasePublicConfigRequest
                 * @return ReleasePublicConfigOutcome
                 */
                ReleasePublicConfigOutcome ReleasePublicConfig(const Model::ReleasePublicConfigRequest &request);
                void ReleasePublicConfigAsync(const Model::ReleasePublicConfigRequest& request, const ReleasePublicConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReleasePublicConfigOutcomeCallable ReleasePublicConfigCallable(const Model::ReleasePublicConfigRequest& request);

                /**
                 *从 TSF 集群中批量移除云主机节点
                 * @param req RemoveInstancesRequest
                 * @return RemoveInstancesOutcome
                 */
                RemoveInstancesOutcome RemoveInstances(const Model::RemoveInstancesRequest &request);
                void RemoveInstancesAsync(const Model::RemoveInstancesRequest& request, const RemoveInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveInstancesOutcomeCallable RemoveInstancesCallable(const Model::RemoveInstancesRequest& request);

                /**
                 *撤回已发布的配置
                 * @param req RevocationConfigRequest
                 * @return RevocationConfigOutcome
                 */
                RevocationConfigOutcome RevocationConfig(const Model::RevocationConfigRequest &request);
                void RevocationConfigAsync(const Model::RevocationConfigRequest& request, const RevocationConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RevocationConfigOutcomeCallable RevocationConfigCallable(const Model::RevocationConfigRequest& request);

                /**
                 *撤回已发布的公共配置
                 * @param req RevocationPublicConfigRequest
                 * @return RevocationPublicConfigOutcome
                 */
                RevocationPublicConfigOutcome RevocationPublicConfig(const Model::RevocationPublicConfigRequest &request);
                void RevocationPublicConfigAsync(const Model::RevocationPublicConfigRequest& request, const RevocationPublicConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RevocationPublicConfigOutcomeCallable RevocationPublicConfigCallable(const Model::RevocationPublicConfigRequest& request);

                /**
                 *撤回已发布的文件配置
                 * @param req RevokeFileConfigRequest
                 * @return RevokeFileConfigOutcome
                 */
                RevokeFileConfigOutcome RevokeFileConfig(const Model::RevokeFileConfigRequest &request);
                void RevokeFileConfigAsync(const Model::RevokeFileConfigRequest& request, const RevokeFileConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RevokeFileConfigOutcomeCallable RevokeFileConfigCallable(const Model::RevokeFileConfigRequest& request);

                /**
                 *回滚配置
                 * @param req RollbackConfigRequest
                 * @return RollbackConfigOutcome
                 */
                RollbackConfigOutcome RollbackConfig(const Model::RollbackConfigRequest &request);
                void RollbackConfigAsync(const Model::RollbackConfigRequest& request, const RollbackConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RollbackConfigOutcomeCallable RollbackConfigCallable(const Model::RollbackConfigRequest& request);

                /**
                 *业务日志搜索
                 * @param req SearchBusinessLogRequest
                 * @return SearchBusinessLogOutcome
                 */
                SearchBusinessLogOutcome SearchBusinessLog(const Model::SearchBusinessLogRequest &request);
                void SearchBusinessLogAsync(const Model::SearchBusinessLogRequest& request, const SearchBusinessLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchBusinessLogOutcomeCallable SearchBusinessLogCallable(const Model::SearchBusinessLogRequest& request);

                /**
                 *标准输出日志搜索
                 * @param req SearchStdoutLogRequest
                 * @return SearchStdoutLogOutcome
                 */
                SearchStdoutLogOutcome SearchStdoutLog(const Model::SearchStdoutLogRequest &request);
                void SearchStdoutLogAsync(const Model::SearchStdoutLogRequest& request, const SearchStdoutLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchStdoutLogOutcomeCallable SearchStdoutLogCallable(const Model::SearchStdoutLogRequest& request);

                /**
                 *下线部署组所有机器实例
                 * @param req ShrinkGroupRequest
                 * @return ShrinkGroupOutcome
                 */
                ShrinkGroupOutcome ShrinkGroup(const Model::ShrinkGroupRequest &request);
                void ShrinkGroupAsync(const Model::ShrinkGroupRequest& request, const ShrinkGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ShrinkGroupOutcomeCallable ShrinkGroupCallable(const Model::ShrinkGroupRequest& request);

                /**
                 *虚拟机部署组下线实例
                 * @param req ShrinkInstancesRequest
                 * @return ShrinkInstancesOutcome
                 */
                ShrinkInstancesOutcome ShrinkInstances(const Model::ShrinkInstancesRequest &request);
                void ShrinkInstancesAsync(const Model::ShrinkInstancesRequest& request, const ShrinkInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ShrinkInstancesOutcomeCallable ShrinkInstancesCallable(const Model::ShrinkInstancesRequest& request);

                /**
                 *启动容器部署组
                 * @param req StartContainerGroupRequest
                 * @return StartContainerGroupOutcome
                 */
                StartContainerGroupOutcome StartContainerGroup(const Model::StartContainerGroupRequest &request);
                void StartContainerGroupAsync(const Model::StartContainerGroupRequest& request, const StartContainerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartContainerGroupOutcomeCallable StartContainerGroupCallable(const Model::StartContainerGroupRequest& request);

                /**
                 *启动分组
                 * @param req StartGroupRequest
                 * @return StartGroupOutcome
                 */
                StartGroupOutcome StartGroup(const Model::StartGroupRequest &request);
                void StartGroupAsync(const Model::StartGroupRequest& request, const StartGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartGroupOutcomeCallable StartGroupCallable(const Model::StartGroupRequest& request);

                /**
                 *停止容器部署组
                 * @param req StopContainerGroupRequest
                 * @return StopContainerGroupOutcome
                 */
                StopContainerGroupOutcome StopContainerGroup(const Model::StopContainerGroupRequest &request);
                void StopContainerGroupAsync(const Model::StopContainerGroupRequest& request, const StopContainerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopContainerGroupOutcomeCallable StopContainerGroupCallable(const Model::StopContainerGroupRequest& request);

                /**
                 *停止虚拟机部署组
                 * @param req StopGroupRequest
                 * @return StopGroupOutcome
                 */
                StopGroupOutcome StopGroup(const Model::StopGroupRequest &request);
                void StopGroupAsync(const Model::StopGroupRequest& request, const StopGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopGroupOutcomeCallable StopGroupCallable(const Model::StopGroupRequest& request);

                /**
                 *停止执行中的任务批次， 非运行中的任务不可调用。
                 * @param req StopTaskBatchRequest
                 * @return StopTaskBatchOutcome
                 */
                StopTaskBatchOutcome StopTaskBatch(const Model::StopTaskBatchRequest &request);
                void StopTaskBatchAsync(const Model::StopTaskBatchRequest& request, const StopTaskBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopTaskBatchOutcomeCallable StopTaskBatchCallable(const Model::StopTaskBatchRequest& request);

                /**
                 *停止正在某个节点上执行的任务
                 * @param req StopTaskExecuteRequest
                 * @return StopTaskExecuteOutcome
                 */
                StopTaskExecuteOutcome StopTaskExecute(const Model::StopTaskExecuteRequest &request);
                void StopTaskExecuteAsync(const Model::StopTaskExecuteRequest& request, const StopTaskExecuteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopTaskExecuteOutcomeCallable StopTaskExecuteCallable(const Model::StopTaskExecuteRequest& request);

                /**
                 *停止一个工作流批次
                 * @param req TerminateTaskFlowBatchRequest
                 * @return TerminateTaskFlowBatchOutcome
                 */
                TerminateTaskFlowBatchOutcome TerminateTaskFlowBatch(const Model::TerminateTaskFlowBatchRequest &request);
                void TerminateTaskFlowBatchAsync(const Model::TerminateTaskFlowBatchRequest& request, const TerminateTaskFlowBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateTaskFlowBatchOutcomeCallable TerminateTaskFlowBatchCallable(const Model::TerminateTaskFlowBatchRequest& request);

                /**
                 *API分组批量与网关解绑
                 * @param req UnbindApiGroupRequest
                 * @return UnbindApiGroupOutcome
                 */
                UnbindApiGroupOutcome UnbindApiGroup(const Model::UnbindApiGroupRequest &request);
                void UnbindApiGroupAsync(const Model::UnbindApiGroupRequest& request, const UnbindApiGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindApiGroupOutcomeCallable UnbindApiGroupCallable(const Model::UnbindApiGroupRequest& request);

                /**
                 *更新Api分组
                 * @param req UpdateApiGroupRequest
                 * @return UpdateApiGroupOutcome
                 */
                UpdateApiGroupOutcome UpdateApiGroup(const Model::UpdateApiGroupRequest &request);
                void UpdateApiGroupAsync(const Model::UpdateApiGroupRequest& request, const UpdateApiGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateApiGroupOutcomeCallable UpdateApiGroupCallable(const Model::UpdateApiGroupRequest& request);

                /**
                 *更新API限流规则
                 * @param req UpdateApiRateLimitRuleRequest
                 * @return UpdateApiRateLimitRuleOutcome
                 */
                UpdateApiRateLimitRuleOutcome UpdateApiRateLimitRule(const Model::UpdateApiRateLimitRuleRequest &request);
                void UpdateApiRateLimitRuleAsync(const Model::UpdateApiRateLimitRuleRequest& request, const UpdateApiRateLimitRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateApiRateLimitRuleOutcomeCallable UpdateApiRateLimitRuleCallable(const Model::UpdateApiRateLimitRuleRequest& request);

                /**
                 *批量更新API限流规则
                 * @param req UpdateApiRateLimitRulesRequest
                 * @return UpdateApiRateLimitRulesOutcome
                 */
                UpdateApiRateLimitRulesOutcome UpdateApiRateLimitRules(const Model::UpdateApiRateLimitRulesRequest &request);
                void UpdateApiRateLimitRulesAsync(const Model::UpdateApiRateLimitRulesRequest& request, const UpdateApiRateLimitRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateApiRateLimitRulesOutcomeCallable UpdateApiRateLimitRulesCallable(const Model::UpdateApiRateLimitRulesRequest& request);

                /**
                 *批量更新API超时
                 * @param req UpdateApiTimeoutsRequest
                 * @return UpdateApiTimeoutsOutcome
                 */
                UpdateApiTimeoutsOutcome UpdateApiTimeouts(const Model::UpdateApiTimeoutsRequest &request);
                void UpdateApiTimeoutsAsync(const Model::UpdateApiTimeoutsRequest& request, const UpdateApiTimeoutsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateApiTimeoutsOutcomeCallable UpdateApiTimeoutsCallable(const Model::UpdateApiTimeoutsRequest& request);

                /**
                 *更新参数模板
                 * @param req UpdateConfigTemplateRequest
                 * @return UpdateConfigTemplateOutcome
                 */
                UpdateConfigTemplateOutcome UpdateConfigTemplate(const Model::UpdateConfigTemplateRequest &request);
                void UpdateConfigTemplateAsync(const Model::UpdateConfigTemplateRequest& request, const UpdateConfigTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateConfigTemplateOutcomeCallable UpdateConfigTemplateCallable(const Model::UpdateConfigTemplateRequest& request);

                /**
                 *更新API
                 * @param req UpdateGatewayApiRequest
                 * @return UpdateGatewayApiOutcome
                 */
                UpdateGatewayApiOutcome UpdateGatewayApi(const Model::UpdateGatewayApiRequest &request);
                void UpdateGatewayApiAsync(const Model::UpdateGatewayApiRequest& request, const UpdateGatewayApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateGatewayApiOutcomeCallable UpdateGatewayApiCallable(const Model::UpdateGatewayApiRequest& request);

                /**
                 *更新健康检查配置
                 * @param req UpdateHealthCheckSettingsRequest
                 * @return UpdateHealthCheckSettingsOutcome
                 */
                UpdateHealthCheckSettingsOutcome UpdateHealthCheckSettings(const Model::UpdateHealthCheckSettingsRequest &request);
                void UpdateHealthCheckSettingsAsync(const Model::UpdateHealthCheckSettingsRequest& request, const UpdateHealthCheckSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateHealthCheckSettingsOutcomeCallable UpdateHealthCheckSettingsCallable(const Model::UpdateHealthCheckSettingsRequest& request);

                /**
                 *更新仓库信息
                 * @param req UpdateRepositoryRequest
                 * @return UpdateRepositoryOutcome
                 */
                UpdateRepositoryOutcome UpdateRepository(const Model::UpdateRepositoryRequest &request);
                void UpdateRepositoryAsync(const Model::UpdateRepositoryRequest& request, const UpdateRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateRepositoryOutcomeCallable UpdateRepositoryCallable(const Model::UpdateRepositoryRequest& request);

                /**
                 *更新单元化规则
                 * @param req UpdateUnitRuleRequest
                 * @return UpdateUnitRuleOutcome
                 */
                UpdateUnitRuleOutcome UpdateUnitRule(const Model::UpdateUnitRuleRequest &request);
                void UpdateUnitRuleAsync(const Model::UpdateUnitRuleRequest& request, const UpdateUnitRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateUnitRuleOutcomeCallable UpdateUnitRuleCallable(const Model::UpdateUnitRuleRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_TSFCLIENT_H_
