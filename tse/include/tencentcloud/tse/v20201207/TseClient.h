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

#ifndef TENCENTCLOUD_TSE_V20201207_TSECLIENT_H_
#define TENCENTCLOUD_TSE_V20201207_TSECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tse/v20201207/model/BindAutoScalerResourceStrategyToGroupsRequest.h>
#include <tencentcloud/tse/v20201207/model/BindAutoScalerResourceStrategyToGroupsResponse.h>
#include <tencentcloud/tse/v20201207/model/CloseWafProtectionRequest.h>
#include <tencentcloud/tse/v20201207/model/CloseWafProtectionResponse.h>
#include <tencentcloud/tse/v20201207/model/CreateAutoScalerResourceStrategyRequest.h>
#include <tencentcloud/tse/v20201207/model/CreateAutoScalerResourceStrategyResponse.h>
#include <tencentcloud/tse/v20201207/model/CreateCloudNativeAPIGatewayRequest.h>
#include <tencentcloud/tse/v20201207/model/CreateCloudNativeAPIGatewayResponse.h>
#include <tencentcloud/tse/v20201207/model/CreateCloudNativeAPIGatewayCanaryRuleRequest.h>
#include <tencentcloud/tse/v20201207/model/CreateCloudNativeAPIGatewayCanaryRuleResponse.h>
#include <tencentcloud/tse/v20201207/model/CreateCloudNativeAPIGatewayCertificateRequest.h>
#include <tencentcloud/tse/v20201207/model/CreateCloudNativeAPIGatewayCertificateResponse.h>
#include <tencentcloud/tse/v20201207/model/CreateCloudNativeAPIGatewayPublicNetworkRequest.h>
#include <tencentcloud/tse/v20201207/model/CreateCloudNativeAPIGatewayPublicNetworkResponse.h>
#include <tencentcloud/tse/v20201207/model/CreateCloudNativeAPIGatewayRouteRequest.h>
#include <tencentcloud/tse/v20201207/model/CreateCloudNativeAPIGatewayRouteResponse.h>
#include <tencentcloud/tse/v20201207/model/CreateCloudNativeAPIGatewayRouteRateLimitRequest.h>
#include <tencentcloud/tse/v20201207/model/CreateCloudNativeAPIGatewayRouteRateLimitResponse.h>
#include <tencentcloud/tse/v20201207/model/CreateCloudNativeAPIGatewayServiceRequest.h>
#include <tencentcloud/tse/v20201207/model/CreateCloudNativeAPIGatewayServiceResponse.h>
#include <tencentcloud/tse/v20201207/model/CreateCloudNativeAPIGatewayServiceRateLimitRequest.h>
#include <tencentcloud/tse/v20201207/model/CreateCloudNativeAPIGatewayServiceRateLimitResponse.h>
#include <tencentcloud/tse/v20201207/model/CreateConfigFileRequest.h>
#include <tencentcloud/tse/v20201207/model/CreateConfigFileResponse.h>
#include <tencentcloud/tse/v20201207/model/CreateConfigFileGroupRequest.h>
#include <tencentcloud/tse/v20201207/model/CreateConfigFileGroupResponse.h>
#include <tencentcloud/tse/v20201207/model/CreateEngineRequest.h>
#include <tencentcloud/tse/v20201207/model/CreateEngineResponse.h>
#include <tencentcloud/tse/v20201207/model/CreateGovernanceAliasRequest.h>
#include <tencentcloud/tse/v20201207/model/CreateGovernanceAliasResponse.h>
#include <tencentcloud/tse/v20201207/model/CreateGovernanceInstancesRequest.h>
#include <tencentcloud/tse/v20201207/model/CreateGovernanceInstancesResponse.h>
#include <tencentcloud/tse/v20201207/model/CreateGovernanceNamespacesRequest.h>
#include <tencentcloud/tse/v20201207/model/CreateGovernanceNamespacesResponse.h>
#include <tencentcloud/tse/v20201207/model/CreateGovernanceServicesRequest.h>
#include <tencentcloud/tse/v20201207/model/CreateGovernanceServicesResponse.h>
#include <tencentcloud/tse/v20201207/model/CreateNativeGatewayServerGroupRequest.h>
#include <tencentcloud/tse/v20201207/model/CreateNativeGatewayServerGroupResponse.h>
#include <tencentcloud/tse/v20201207/model/CreateNativeGatewayServiceSourceRequest.h>
#include <tencentcloud/tse/v20201207/model/CreateNativeGatewayServiceSourceResponse.h>
#include <tencentcloud/tse/v20201207/model/CreateOrUpdateConfigFileAndReleaseRequest.h>
#include <tencentcloud/tse/v20201207/model/CreateOrUpdateConfigFileAndReleaseResponse.h>
#include <tencentcloud/tse/v20201207/model/CreateWafDomainsRequest.h>
#include <tencentcloud/tse/v20201207/model/CreateWafDomainsResponse.h>
#include <tencentcloud/tse/v20201207/model/DeleteAutoScalerResourceStrategyRequest.h>
#include <tencentcloud/tse/v20201207/model/DeleteAutoScalerResourceStrategyResponse.h>
#include <tencentcloud/tse/v20201207/model/DeleteCloudNativeAPIGatewayRequest.h>
#include <tencentcloud/tse/v20201207/model/DeleteCloudNativeAPIGatewayResponse.h>
#include <tencentcloud/tse/v20201207/model/DeleteCloudNativeAPIGatewayCanaryRuleRequest.h>
#include <tencentcloud/tse/v20201207/model/DeleteCloudNativeAPIGatewayCanaryRuleResponse.h>
#include <tencentcloud/tse/v20201207/model/DeleteCloudNativeAPIGatewayCertificateRequest.h>
#include <tencentcloud/tse/v20201207/model/DeleteCloudNativeAPIGatewayCertificateResponse.h>
#include <tencentcloud/tse/v20201207/model/DeleteCloudNativeAPIGatewayPublicNetworkRequest.h>
#include <tencentcloud/tse/v20201207/model/DeleteCloudNativeAPIGatewayPublicNetworkResponse.h>
#include <tencentcloud/tse/v20201207/model/DeleteCloudNativeAPIGatewayRouteRequest.h>
#include <tencentcloud/tse/v20201207/model/DeleteCloudNativeAPIGatewayRouteResponse.h>
#include <tencentcloud/tse/v20201207/model/DeleteCloudNativeAPIGatewayRouteRateLimitRequest.h>
#include <tencentcloud/tse/v20201207/model/DeleteCloudNativeAPIGatewayRouteRateLimitResponse.h>
#include <tencentcloud/tse/v20201207/model/DeleteCloudNativeAPIGatewayServiceRequest.h>
#include <tencentcloud/tse/v20201207/model/DeleteCloudNativeAPIGatewayServiceResponse.h>
#include <tencentcloud/tse/v20201207/model/DeleteCloudNativeAPIGatewayServiceRateLimitRequest.h>
#include <tencentcloud/tse/v20201207/model/DeleteCloudNativeAPIGatewayServiceRateLimitResponse.h>
#include <tencentcloud/tse/v20201207/model/DeleteConfigFileGroupRequest.h>
#include <tencentcloud/tse/v20201207/model/DeleteConfigFileGroupResponse.h>
#include <tencentcloud/tse/v20201207/model/DeleteConfigFileReleasesRequest.h>
#include <tencentcloud/tse/v20201207/model/DeleteConfigFileReleasesResponse.h>
#include <tencentcloud/tse/v20201207/model/DeleteConfigFilesRequest.h>
#include <tencentcloud/tse/v20201207/model/DeleteConfigFilesResponse.h>
#include <tencentcloud/tse/v20201207/model/DeleteEngineRequest.h>
#include <tencentcloud/tse/v20201207/model/DeleteEngineResponse.h>
#include <tencentcloud/tse/v20201207/model/DeleteGovernanceAliasesRequest.h>
#include <tencentcloud/tse/v20201207/model/DeleteGovernanceAliasesResponse.h>
#include <tencentcloud/tse/v20201207/model/DeleteGovernanceInstancesRequest.h>
#include <tencentcloud/tse/v20201207/model/DeleteGovernanceInstancesResponse.h>
#include <tencentcloud/tse/v20201207/model/DeleteGovernanceInstancesByHostRequest.h>
#include <tencentcloud/tse/v20201207/model/DeleteGovernanceInstancesByHostResponse.h>
#include <tencentcloud/tse/v20201207/model/DeleteGovernanceNamespacesRequest.h>
#include <tencentcloud/tse/v20201207/model/DeleteGovernanceNamespacesResponse.h>
#include <tencentcloud/tse/v20201207/model/DeleteGovernanceServicesRequest.h>
#include <tencentcloud/tse/v20201207/model/DeleteGovernanceServicesResponse.h>
#include <tencentcloud/tse/v20201207/model/DeleteNativeGatewayServerGroupRequest.h>
#include <tencentcloud/tse/v20201207/model/DeleteNativeGatewayServerGroupResponse.h>
#include <tencentcloud/tse/v20201207/model/DeleteNativeGatewayServiceSourceRequest.h>
#include <tencentcloud/tse/v20201207/model/DeleteNativeGatewayServiceSourceResponse.h>
#include <tencentcloud/tse/v20201207/model/DeleteWafDomainsRequest.h>
#include <tencentcloud/tse/v20201207/model/DeleteWafDomainsResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeAllConfigFileTemplatesRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeAllConfigFileTemplatesResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeAutoScalerResourceStrategiesRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeAutoScalerResourceStrategiesResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeAutoScalerResourceStrategyBindingGroupsRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeAutoScalerResourceStrategyBindingGroupsResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayCanaryRulesRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayCanaryRulesResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayCertificateDetailsRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayCertificateDetailsResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayCertificatesRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayCertificatesResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayConfigRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayConfigResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayInfoByIpRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayInfoByIpResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayNodesRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayNodesResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayPortsRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayPortsResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayRouteRateLimitRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayRouteRateLimitResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayRoutesRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayRoutesResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayServiceRateLimitRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayServiceRateLimitResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayServicesRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayServicesResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayUpstreamRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayUpstreamResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewaysRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewaysResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeConfigFileRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeConfigFileResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeConfigFileGroupsRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeConfigFileGroupsResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeConfigFileReleaseRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeConfigFileReleaseResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeConfigFileReleaseHistoriesRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeConfigFileReleaseHistoriesResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeConfigFileReleaseVersionsRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeConfigFileReleaseVersionsResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeConfigFileReleasesRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeConfigFileReleasesResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeConfigFilesRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeConfigFilesResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeConfigFilesByGroupRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeConfigFilesByGroupResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeGovernanceAliasesRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeGovernanceAliasesResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeGovernanceInstancesRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeGovernanceInstancesResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeGovernanceNamespacesRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeGovernanceNamespacesResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeGovernanceServiceContractVersionsRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeGovernanceServiceContractVersionsResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeGovernanceServiceContractsRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeGovernanceServiceContractsResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeGovernanceServicesRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeGovernanceServicesResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeInstanceTagInfosRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeInstanceTagInfosResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeNacosReplicasRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeNacosReplicasResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeNacosServerInterfacesRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeNacosServerInterfacesResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeNativeGatewayServerGroupsRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeNativeGatewayServerGroupsResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeNativeGatewayServiceSourcesRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeNativeGatewayServiceSourcesResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeOneCloudNativeAPIGatewayServiceRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeOneCloudNativeAPIGatewayServiceResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribePublicAddressConfigRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribePublicAddressConfigResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribePublicNetworkRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribePublicNetworkResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeSREInstanceAccessAddressRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeSREInstanceAccessAddressResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeSREInstancesRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeSREInstancesResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeUpstreamHealthCheckConfigRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeUpstreamHealthCheckConfigResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeWafDomainsRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeWafDomainsResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeWafProtectionRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeWafProtectionResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeZookeeperReplicasRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeZookeeperReplicasResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeZookeeperServerInterfacesRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeZookeeperServerInterfacesResponse.h>
#include <tencentcloud/tse/v20201207/model/ModifyAutoScalerResourceStrategyRequest.h>
#include <tencentcloud/tse/v20201207/model/ModifyAutoScalerResourceStrategyResponse.h>
#include <tencentcloud/tse/v20201207/model/ModifyCloudNativeAPIGatewayRequest.h>
#include <tencentcloud/tse/v20201207/model/ModifyCloudNativeAPIGatewayResponse.h>
#include <tencentcloud/tse/v20201207/model/ModifyCloudNativeAPIGatewayCanaryRuleRequest.h>
#include <tencentcloud/tse/v20201207/model/ModifyCloudNativeAPIGatewayCanaryRuleResponse.h>
#include <tencentcloud/tse/v20201207/model/ModifyCloudNativeAPIGatewayCertificateRequest.h>
#include <tencentcloud/tse/v20201207/model/ModifyCloudNativeAPIGatewayCertificateResponse.h>
#include <tencentcloud/tse/v20201207/model/ModifyCloudNativeAPIGatewayRouteRequest.h>
#include <tencentcloud/tse/v20201207/model/ModifyCloudNativeAPIGatewayRouteResponse.h>
#include <tencentcloud/tse/v20201207/model/ModifyCloudNativeAPIGatewayRouteRateLimitRequest.h>
#include <tencentcloud/tse/v20201207/model/ModifyCloudNativeAPIGatewayRouteRateLimitResponse.h>
#include <tencentcloud/tse/v20201207/model/ModifyCloudNativeAPIGatewayServiceRequest.h>
#include <tencentcloud/tse/v20201207/model/ModifyCloudNativeAPIGatewayServiceResponse.h>
#include <tencentcloud/tse/v20201207/model/ModifyCloudNativeAPIGatewayServiceRateLimitRequest.h>
#include <tencentcloud/tse/v20201207/model/ModifyCloudNativeAPIGatewayServiceRateLimitResponse.h>
#include <tencentcloud/tse/v20201207/model/ModifyConfigFileGroupRequest.h>
#include <tencentcloud/tse/v20201207/model/ModifyConfigFileGroupResponse.h>
#include <tencentcloud/tse/v20201207/model/ModifyConfigFilesRequest.h>
#include <tencentcloud/tse/v20201207/model/ModifyConfigFilesResponse.h>
#include <tencentcloud/tse/v20201207/model/ModifyConsoleNetworkRequest.h>
#include <tencentcloud/tse/v20201207/model/ModifyConsoleNetworkResponse.h>
#include <tencentcloud/tse/v20201207/model/ModifyGovernanceAliasRequest.h>
#include <tencentcloud/tse/v20201207/model/ModifyGovernanceAliasResponse.h>
#include <tencentcloud/tse/v20201207/model/ModifyGovernanceInstancesRequest.h>
#include <tencentcloud/tse/v20201207/model/ModifyGovernanceInstancesResponse.h>
#include <tencentcloud/tse/v20201207/model/ModifyGovernanceNamespacesRequest.h>
#include <tencentcloud/tse/v20201207/model/ModifyGovernanceNamespacesResponse.h>
#include <tencentcloud/tse/v20201207/model/ModifyGovernanceServicesRequest.h>
#include <tencentcloud/tse/v20201207/model/ModifyGovernanceServicesResponse.h>
#include <tencentcloud/tse/v20201207/model/ModifyNativeGatewayServerGroupRequest.h>
#include <tencentcloud/tse/v20201207/model/ModifyNativeGatewayServerGroupResponse.h>
#include <tencentcloud/tse/v20201207/model/ModifyNativeGatewayServiceSourceRequest.h>
#include <tencentcloud/tse/v20201207/model/ModifyNativeGatewayServiceSourceResponse.h>
#include <tencentcloud/tse/v20201207/model/ModifyNetworkAccessStrategyRequest.h>
#include <tencentcloud/tse/v20201207/model/ModifyNetworkAccessStrategyResponse.h>
#include <tencentcloud/tse/v20201207/model/ModifyNetworkBasicInfoRequest.h>
#include <tencentcloud/tse/v20201207/model/ModifyNetworkBasicInfoResponse.h>
#include <tencentcloud/tse/v20201207/model/ModifyUpstreamNodeStatusRequest.h>
#include <tencentcloud/tse/v20201207/model/ModifyUpstreamNodeStatusResponse.h>
#include <tencentcloud/tse/v20201207/model/OpenWafProtectionRequest.h>
#include <tencentcloud/tse/v20201207/model/OpenWafProtectionResponse.h>
#include <tencentcloud/tse/v20201207/model/PublishConfigFilesRequest.h>
#include <tencentcloud/tse/v20201207/model/PublishConfigFilesResponse.h>
#include <tencentcloud/tse/v20201207/model/RestartSREInstanceRequest.h>
#include <tencentcloud/tse/v20201207/model/RestartSREInstanceResponse.h>
#include <tencentcloud/tse/v20201207/model/RollbackConfigFileReleasesRequest.h>
#include <tencentcloud/tse/v20201207/model/RollbackConfigFileReleasesResponse.h>
#include <tencentcloud/tse/v20201207/model/UnbindAutoScalerResourceStrategyFromGroupsRequest.h>
#include <tencentcloud/tse/v20201207/model/UnbindAutoScalerResourceStrategyFromGroupsResponse.h>
#include <tencentcloud/tse/v20201207/model/UpdateCloudNativeAPIGatewayCertificateInfoRequest.h>
#include <tencentcloud/tse/v20201207/model/UpdateCloudNativeAPIGatewayCertificateInfoResponse.h>
#include <tencentcloud/tse/v20201207/model/UpdateCloudNativeAPIGatewaySpecRequest.h>
#include <tencentcloud/tse/v20201207/model/UpdateCloudNativeAPIGatewaySpecResponse.h>
#include <tencentcloud/tse/v20201207/model/UpdateEngineInternetAccessRequest.h>
#include <tencentcloud/tse/v20201207/model/UpdateEngineInternetAccessResponse.h>
#include <tencentcloud/tse/v20201207/model/UpdateUpstreamHealthCheckConfigRequest.h>
#include <tencentcloud/tse/v20201207/model/UpdateUpstreamHealthCheckConfigResponse.h>
#include <tencentcloud/tse/v20201207/model/UpdateUpstreamTargetsRequest.h>
#include <tencentcloud/tse/v20201207/model/UpdateUpstreamTargetsResponse.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            class TseClient : public AbstractClient
            {
            public:
                TseClient(const Credential &credential, const std::string &region);
                TseClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::BindAutoScalerResourceStrategyToGroupsResponse> BindAutoScalerResourceStrategyToGroupsOutcome;
                typedef std::future<BindAutoScalerResourceStrategyToGroupsOutcome> BindAutoScalerResourceStrategyToGroupsOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::BindAutoScalerResourceStrategyToGroupsRequest&, BindAutoScalerResourceStrategyToGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindAutoScalerResourceStrategyToGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::CloseWafProtectionResponse> CloseWafProtectionOutcome;
                typedef std::future<CloseWafProtectionOutcome> CloseWafProtectionOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::CloseWafProtectionRequest&, CloseWafProtectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseWafProtectionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAutoScalerResourceStrategyResponse> CreateAutoScalerResourceStrategyOutcome;
                typedef std::future<CreateAutoScalerResourceStrategyOutcome> CreateAutoScalerResourceStrategyOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::CreateAutoScalerResourceStrategyRequest&, CreateAutoScalerResourceStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAutoScalerResourceStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCloudNativeAPIGatewayResponse> CreateCloudNativeAPIGatewayOutcome;
                typedef std::future<CreateCloudNativeAPIGatewayOutcome> CreateCloudNativeAPIGatewayOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::CreateCloudNativeAPIGatewayRequest&, CreateCloudNativeAPIGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudNativeAPIGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCloudNativeAPIGatewayCanaryRuleResponse> CreateCloudNativeAPIGatewayCanaryRuleOutcome;
                typedef std::future<CreateCloudNativeAPIGatewayCanaryRuleOutcome> CreateCloudNativeAPIGatewayCanaryRuleOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::CreateCloudNativeAPIGatewayCanaryRuleRequest&, CreateCloudNativeAPIGatewayCanaryRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudNativeAPIGatewayCanaryRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCloudNativeAPIGatewayCertificateResponse> CreateCloudNativeAPIGatewayCertificateOutcome;
                typedef std::future<CreateCloudNativeAPIGatewayCertificateOutcome> CreateCloudNativeAPIGatewayCertificateOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::CreateCloudNativeAPIGatewayCertificateRequest&, CreateCloudNativeAPIGatewayCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudNativeAPIGatewayCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCloudNativeAPIGatewayPublicNetworkResponse> CreateCloudNativeAPIGatewayPublicNetworkOutcome;
                typedef std::future<CreateCloudNativeAPIGatewayPublicNetworkOutcome> CreateCloudNativeAPIGatewayPublicNetworkOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::CreateCloudNativeAPIGatewayPublicNetworkRequest&, CreateCloudNativeAPIGatewayPublicNetworkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudNativeAPIGatewayPublicNetworkAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCloudNativeAPIGatewayRouteResponse> CreateCloudNativeAPIGatewayRouteOutcome;
                typedef std::future<CreateCloudNativeAPIGatewayRouteOutcome> CreateCloudNativeAPIGatewayRouteOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::CreateCloudNativeAPIGatewayRouteRequest&, CreateCloudNativeAPIGatewayRouteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudNativeAPIGatewayRouteAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCloudNativeAPIGatewayRouteRateLimitResponse> CreateCloudNativeAPIGatewayRouteRateLimitOutcome;
                typedef std::future<CreateCloudNativeAPIGatewayRouteRateLimitOutcome> CreateCloudNativeAPIGatewayRouteRateLimitOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::CreateCloudNativeAPIGatewayRouteRateLimitRequest&, CreateCloudNativeAPIGatewayRouteRateLimitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudNativeAPIGatewayRouteRateLimitAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCloudNativeAPIGatewayServiceResponse> CreateCloudNativeAPIGatewayServiceOutcome;
                typedef std::future<CreateCloudNativeAPIGatewayServiceOutcome> CreateCloudNativeAPIGatewayServiceOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::CreateCloudNativeAPIGatewayServiceRequest&, CreateCloudNativeAPIGatewayServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudNativeAPIGatewayServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCloudNativeAPIGatewayServiceRateLimitResponse> CreateCloudNativeAPIGatewayServiceRateLimitOutcome;
                typedef std::future<CreateCloudNativeAPIGatewayServiceRateLimitOutcome> CreateCloudNativeAPIGatewayServiceRateLimitOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::CreateCloudNativeAPIGatewayServiceRateLimitRequest&, CreateCloudNativeAPIGatewayServiceRateLimitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudNativeAPIGatewayServiceRateLimitAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateConfigFileResponse> CreateConfigFileOutcome;
                typedef std::future<CreateConfigFileOutcome> CreateConfigFileOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::CreateConfigFileRequest&, CreateConfigFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateConfigFileAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateConfigFileGroupResponse> CreateConfigFileGroupOutcome;
                typedef std::future<CreateConfigFileGroupOutcome> CreateConfigFileGroupOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::CreateConfigFileGroupRequest&, CreateConfigFileGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateConfigFileGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEngineResponse> CreateEngineOutcome;
                typedef std::future<CreateEngineOutcome> CreateEngineOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::CreateEngineRequest&, CreateEngineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEngineAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateGovernanceAliasResponse> CreateGovernanceAliasOutcome;
                typedef std::future<CreateGovernanceAliasOutcome> CreateGovernanceAliasOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::CreateGovernanceAliasRequest&, CreateGovernanceAliasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGovernanceAliasAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateGovernanceInstancesResponse> CreateGovernanceInstancesOutcome;
                typedef std::future<CreateGovernanceInstancesOutcome> CreateGovernanceInstancesOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::CreateGovernanceInstancesRequest&, CreateGovernanceInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGovernanceInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateGovernanceNamespacesResponse> CreateGovernanceNamespacesOutcome;
                typedef std::future<CreateGovernanceNamespacesOutcome> CreateGovernanceNamespacesOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::CreateGovernanceNamespacesRequest&, CreateGovernanceNamespacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGovernanceNamespacesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateGovernanceServicesResponse> CreateGovernanceServicesOutcome;
                typedef std::future<CreateGovernanceServicesOutcome> CreateGovernanceServicesOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::CreateGovernanceServicesRequest&, CreateGovernanceServicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGovernanceServicesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNativeGatewayServerGroupResponse> CreateNativeGatewayServerGroupOutcome;
                typedef std::future<CreateNativeGatewayServerGroupOutcome> CreateNativeGatewayServerGroupOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::CreateNativeGatewayServerGroupRequest&, CreateNativeGatewayServerGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNativeGatewayServerGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNativeGatewayServiceSourceResponse> CreateNativeGatewayServiceSourceOutcome;
                typedef std::future<CreateNativeGatewayServiceSourceOutcome> CreateNativeGatewayServiceSourceOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::CreateNativeGatewayServiceSourceRequest&, CreateNativeGatewayServiceSourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNativeGatewayServiceSourceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOrUpdateConfigFileAndReleaseResponse> CreateOrUpdateConfigFileAndReleaseOutcome;
                typedef std::future<CreateOrUpdateConfigFileAndReleaseOutcome> CreateOrUpdateConfigFileAndReleaseOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::CreateOrUpdateConfigFileAndReleaseRequest&, CreateOrUpdateConfigFileAndReleaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrUpdateConfigFileAndReleaseAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWafDomainsResponse> CreateWafDomainsOutcome;
                typedef std::future<CreateWafDomainsOutcome> CreateWafDomainsOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::CreateWafDomainsRequest&, CreateWafDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWafDomainsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAutoScalerResourceStrategyResponse> DeleteAutoScalerResourceStrategyOutcome;
                typedef std::future<DeleteAutoScalerResourceStrategyOutcome> DeleteAutoScalerResourceStrategyOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DeleteAutoScalerResourceStrategyRequest&, DeleteAutoScalerResourceStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAutoScalerResourceStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCloudNativeAPIGatewayResponse> DeleteCloudNativeAPIGatewayOutcome;
                typedef std::future<DeleteCloudNativeAPIGatewayOutcome> DeleteCloudNativeAPIGatewayOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DeleteCloudNativeAPIGatewayRequest&, DeleteCloudNativeAPIGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCloudNativeAPIGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCloudNativeAPIGatewayCanaryRuleResponse> DeleteCloudNativeAPIGatewayCanaryRuleOutcome;
                typedef std::future<DeleteCloudNativeAPIGatewayCanaryRuleOutcome> DeleteCloudNativeAPIGatewayCanaryRuleOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DeleteCloudNativeAPIGatewayCanaryRuleRequest&, DeleteCloudNativeAPIGatewayCanaryRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCloudNativeAPIGatewayCanaryRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCloudNativeAPIGatewayCertificateResponse> DeleteCloudNativeAPIGatewayCertificateOutcome;
                typedef std::future<DeleteCloudNativeAPIGatewayCertificateOutcome> DeleteCloudNativeAPIGatewayCertificateOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DeleteCloudNativeAPIGatewayCertificateRequest&, DeleteCloudNativeAPIGatewayCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCloudNativeAPIGatewayCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCloudNativeAPIGatewayPublicNetworkResponse> DeleteCloudNativeAPIGatewayPublicNetworkOutcome;
                typedef std::future<DeleteCloudNativeAPIGatewayPublicNetworkOutcome> DeleteCloudNativeAPIGatewayPublicNetworkOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DeleteCloudNativeAPIGatewayPublicNetworkRequest&, DeleteCloudNativeAPIGatewayPublicNetworkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCloudNativeAPIGatewayPublicNetworkAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCloudNativeAPIGatewayRouteResponse> DeleteCloudNativeAPIGatewayRouteOutcome;
                typedef std::future<DeleteCloudNativeAPIGatewayRouteOutcome> DeleteCloudNativeAPIGatewayRouteOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DeleteCloudNativeAPIGatewayRouteRequest&, DeleteCloudNativeAPIGatewayRouteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCloudNativeAPIGatewayRouteAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCloudNativeAPIGatewayRouteRateLimitResponse> DeleteCloudNativeAPIGatewayRouteRateLimitOutcome;
                typedef std::future<DeleteCloudNativeAPIGatewayRouteRateLimitOutcome> DeleteCloudNativeAPIGatewayRouteRateLimitOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DeleteCloudNativeAPIGatewayRouteRateLimitRequest&, DeleteCloudNativeAPIGatewayRouteRateLimitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCloudNativeAPIGatewayRouteRateLimitAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCloudNativeAPIGatewayServiceResponse> DeleteCloudNativeAPIGatewayServiceOutcome;
                typedef std::future<DeleteCloudNativeAPIGatewayServiceOutcome> DeleteCloudNativeAPIGatewayServiceOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DeleteCloudNativeAPIGatewayServiceRequest&, DeleteCloudNativeAPIGatewayServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCloudNativeAPIGatewayServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCloudNativeAPIGatewayServiceRateLimitResponse> DeleteCloudNativeAPIGatewayServiceRateLimitOutcome;
                typedef std::future<DeleteCloudNativeAPIGatewayServiceRateLimitOutcome> DeleteCloudNativeAPIGatewayServiceRateLimitOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DeleteCloudNativeAPIGatewayServiceRateLimitRequest&, DeleteCloudNativeAPIGatewayServiceRateLimitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCloudNativeAPIGatewayServiceRateLimitAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteConfigFileGroupResponse> DeleteConfigFileGroupOutcome;
                typedef std::future<DeleteConfigFileGroupOutcome> DeleteConfigFileGroupOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DeleteConfigFileGroupRequest&, DeleteConfigFileGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConfigFileGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteConfigFileReleasesResponse> DeleteConfigFileReleasesOutcome;
                typedef std::future<DeleteConfigFileReleasesOutcome> DeleteConfigFileReleasesOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DeleteConfigFileReleasesRequest&, DeleteConfigFileReleasesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConfigFileReleasesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteConfigFilesResponse> DeleteConfigFilesOutcome;
                typedef std::future<DeleteConfigFilesOutcome> DeleteConfigFilesOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DeleteConfigFilesRequest&, DeleteConfigFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConfigFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteEngineResponse> DeleteEngineOutcome;
                typedef std::future<DeleteEngineOutcome> DeleteEngineOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DeleteEngineRequest&, DeleteEngineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEngineAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteGovernanceAliasesResponse> DeleteGovernanceAliasesOutcome;
                typedef std::future<DeleteGovernanceAliasesOutcome> DeleteGovernanceAliasesOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DeleteGovernanceAliasesRequest&, DeleteGovernanceAliasesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGovernanceAliasesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteGovernanceInstancesResponse> DeleteGovernanceInstancesOutcome;
                typedef std::future<DeleteGovernanceInstancesOutcome> DeleteGovernanceInstancesOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DeleteGovernanceInstancesRequest&, DeleteGovernanceInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGovernanceInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteGovernanceInstancesByHostResponse> DeleteGovernanceInstancesByHostOutcome;
                typedef std::future<DeleteGovernanceInstancesByHostOutcome> DeleteGovernanceInstancesByHostOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DeleteGovernanceInstancesByHostRequest&, DeleteGovernanceInstancesByHostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGovernanceInstancesByHostAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteGovernanceNamespacesResponse> DeleteGovernanceNamespacesOutcome;
                typedef std::future<DeleteGovernanceNamespacesOutcome> DeleteGovernanceNamespacesOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DeleteGovernanceNamespacesRequest&, DeleteGovernanceNamespacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGovernanceNamespacesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteGovernanceServicesResponse> DeleteGovernanceServicesOutcome;
                typedef std::future<DeleteGovernanceServicesOutcome> DeleteGovernanceServicesOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DeleteGovernanceServicesRequest&, DeleteGovernanceServicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGovernanceServicesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNativeGatewayServerGroupResponse> DeleteNativeGatewayServerGroupOutcome;
                typedef std::future<DeleteNativeGatewayServerGroupOutcome> DeleteNativeGatewayServerGroupOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DeleteNativeGatewayServerGroupRequest&, DeleteNativeGatewayServerGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNativeGatewayServerGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNativeGatewayServiceSourceResponse> DeleteNativeGatewayServiceSourceOutcome;
                typedef std::future<DeleteNativeGatewayServiceSourceOutcome> DeleteNativeGatewayServiceSourceOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DeleteNativeGatewayServiceSourceRequest&, DeleteNativeGatewayServiceSourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNativeGatewayServiceSourceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWafDomainsResponse> DeleteWafDomainsOutcome;
                typedef std::future<DeleteWafDomainsOutcome> DeleteWafDomainsOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DeleteWafDomainsRequest&, DeleteWafDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWafDomainsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAllConfigFileTemplatesResponse> DescribeAllConfigFileTemplatesOutcome;
                typedef std::future<DescribeAllConfigFileTemplatesOutcome> DescribeAllConfigFileTemplatesOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeAllConfigFileTemplatesRequest&, DescribeAllConfigFileTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllConfigFileTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAutoScalerResourceStrategiesResponse> DescribeAutoScalerResourceStrategiesOutcome;
                typedef std::future<DescribeAutoScalerResourceStrategiesOutcome> DescribeAutoScalerResourceStrategiesOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeAutoScalerResourceStrategiesRequest&, DescribeAutoScalerResourceStrategiesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoScalerResourceStrategiesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAutoScalerResourceStrategyBindingGroupsResponse> DescribeAutoScalerResourceStrategyBindingGroupsOutcome;
                typedef std::future<DescribeAutoScalerResourceStrategyBindingGroupsOutcome> DescribeAutoScalerResourceStrategyBindingGroupsOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeAutoScalerResourceStrategyBindingGroupsRequest&, DescribeAutoScalerResourceStrategyBindingGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoScalerResourceStrategyBindingGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudNativeAPIGatewayResponse> DescribeCloudNativeAPIGatewayOutcome;
                typedef std::future<DescribeCloudNativeAPIGatewayOutcome> DescribeCloudNativeAPIGatewayOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeCloudNativeAPIGatewayRequest&, DescribeCloudNativeAPIGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudNativeAPIGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudNativeAPIGatewayCanaryRulesResponse> DescribeCloudNativeAPIGatewayCanaryRulesOutcome;
                typedef std::future<DescribeCloudNativeAPIGatewayCanaryRulesOutcome> DescribeCloudNativeAPIGatewayCanaryRulesOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeCloudNativeAPIGatewayCanaryRulesRequest&, DescribeCloudNativeAPIGatewayCanaryRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudNativeAPIGatewayCanaryRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudNativeAPIGatewayCertificateDetailsResponse> DescribeCloudNativeAPIGatewayCertificateDetailsOutcome;
                typedef std::future<DescribeCloudNativeAPIGatewayCertificateDetailsOutcome> DescribeCloudNativeAPIGatewayCertificateDetailsOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeCloudNativeAPIGatewayCertificateDetailsRequest&, DescribeCloudNativeAPIGatewayCertificateDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudNativeAPIGatewayCertificateDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudNativeAPIGatewayCertificatesResponse> DescribeCloudNativeAPIGatewayCertificatesOutcome;
                typedef std::future<DescribeCloudNativeAPIGatewayCertificatesOutcome> DescribeCloudNativeAPIGatewayCertificatesOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeCloudNativeAPIGatewayCertificatesRequest&, DescribeCloudNativeAPIGatewayCertificatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudNativeAPIGatewayCertificatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudNativeAPIGatewayConfigResponse> DescribeCloudNativeAPIGatewayConfigOutcome;
                typedef std::future<DescribeCloudNativeAPIGatewayConfigOutcome> DescribeCloudNativeAPIGatewayConfigOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeCloudNativeAPIGatewayConfigRequest&, DescribeCloudNativeAPIGatewayConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudNativeAPIGatewayConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudNativeAPIGatewayInfoByIpResponse> DescribeCloudNativeAPIGatewayInfoByIpOutcome;
                typedef std::future<DescribeCloudNativeAPIGatewayInfoByIpOutcome> DescribeCloudNativeAPIGatewayInfoByIpOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeCloudNativeAPIGatewayInfoByIpRequest&, DescribeCloudNativeAPIGatewayInfoByIpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudNativeAPIGatewayInfoByIpAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudNativeAPIGatewayNodesResponse> DescribeCloudNativeAPIGatewayNodesOutcome;
                typedef std::future<DescribeCloudNativeAPIGatewayNodesOutcome> DescribeCloudNativeAPIGatewayNodesOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeCloudNativeAPIGatewayNodesRequest&, DescribeCloudNativeAPIGatewayNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudNativeAPIGatewayNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudNativeAPIGatewayPortsResponse> DescribeCloudNativeAPIGatewayPortsOutcome;
                typedef std::future<DescribeCloudNativeAPIGatewayPortsOutcome> DescribeCloudNativeAPIGatewayPortsOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeCloudNativeAPIGatewayPortsRequest&, DescribeCloudNativeAPIGatewayPortsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudNativeAPIGatewayPortsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudNativeAPIGatewayRouteRateLimitResponse> DescribeCloudNativeAPIGatewayRouteRateLimitOutcome;
                typedef std::future<DescribeCloudNativeAPIGatewayRouteRateLimitOutcome> DescribeCloudNativeAPIGatewayRouteRateLimitOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeCloudNativeAPIGatewayRouteRateLimitRequest&, DescribeCloudNativeAPIGatewayRouteRateLimitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudNativeAPIGatewayRouteRateLimitAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudNativeAPIGatewayRoutesResponse> DescribeCloudNativeAPIGatewayRoutesOutcome;
                typedef std::future<DescribeCloudNativeAPIGatewayRoutesOutcome> DescribeCloudNativeAPIGatewayRoutesOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeCloudNativeAPIGatewayRoutesRequest&, DescribeCloudNativeAPIGatewayRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudNativeAPIGatewayRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudNativeAPIGatewayServiceRateLimitResponse> DescribeCloudNativeAPIGatewayServiceRateLimitOutcome;
                typedef std::future<DescribeCloudNativeAPIGatewayServiceRateLimitOutcome> DescribeCloudNativeAPIGatewayServiceRateLimitOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeCloudNativeAPIGatewayServiceRateLimitRequest&, DescribeCloudNativeAPIGatewayServiceRateLimitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudNativeAPIGatewayServiceRateLimitAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudNativeAPIGatewayServicesResponse> DescribeCloudNativeAPIGatewayServicesOutcome;
                typedef std::future<DescribeCloudNativeAPIGatewayServicesOutcome> DescribeCloudNativeAPIGatewayServicesOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeCloudNativeAPIGatewayServicesRequest&, DescribeCloudNativeAPIGatewayServicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudNativeAPIGatewayServicesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudNativeAPIGatewayUpstreamResponse> DescribeCloudNativeAPIGatewayUpstreamOutcome;
                typedef std::future<DescribeCloudNativeAPIGatewayUpstreamOutcome> DescribeCloudNativeAPIGatewayUpstreamOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeCloudNativeAPIGatewayUpstreamRequest&, DescribeCloudNativeAPIGatewayUpstreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudNativeAPIGatewayUpstreamAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudNativeAPIGatewaysResponse> DescribeCloudNativeAPIGatewaysOutcome;
                typedef std::future<DescribeCloudNativeAPIGatewaysOutcome> DescribeCloudNativeAPIGatewaysOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeCloudNativeAPIGatewaysRequest&, DescribeCloudNativeAPIGatewaysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudNativeAPIGatewaysAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConfigFileResponse> DescribeConfigFileOutcome;
                typedef std::future<DescribeConfigFileOutcome> DescribeConfigFileOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeConfigFileRequest&, DescribeConfigFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigFileAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConfigFileGroupsResponse> DescribeConfigFileGroupsOutcome;
                typedef std::future<DescribeConfigFileGroupsOutcome> DescribeConfigFileGroupsOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeConfigFileGroupsRequest&, DescribeConfigFileGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigFileGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConfigFileReleaseResponse> DescribeConfigFileReleaseOutcome;
                typedef std::future<DescribeConfigFileReleaseOutcome> DescribeConfigFileReleaseOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeConfigFileReleaseRequest&, DescribeConfigFileReleaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigFileReleaseAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConfigFileReleaseHistoriesResponse> DescribeConfigFileReleaseHistoriesOutcome;
                typedef std::future<DescribeConfigFileReleaseHistoriesOutcome> DescribeConfigFileReleaseHistoriesOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeConfigFileReleaseHistoriesRequest&, DescribeConfigFileReleaseHistoriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigFileReleaseHistoriesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConfigFileReleaseVersionsResponse> DescribeConfigFileReleaseVersionsOutcome;
                typedef std::future<DescribeConfigFileReleaseVersionsOutcome> DescribeConfigFileReleaseVersionsOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeConfigFileReleaseVersionsRequest&, DescribeConfigFileReleaseVersionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigFileReleaseVersionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConfigFileReleasesResponse> DescribeConfigFileReleasesOutcome;
                typedef std::future<DescribeConfigFileReleasesOutcome> DescribeConfigFileReleasesOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeConfigFileReleasesRequest&, DescribeConfigFileReleasesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigFileReleasesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConfigFilesResponse> DescribeConfigFilesOutcome;
                typedef std::future<DescribeConfigFilesOutcome> DescribeConfigFilesOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeConfigFilesRequest&, DescribeConfigFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConfigFilesByGroupResponse> DescribeConfigFilesByGroupOutcome;
                typedef std::future<DescribeConfigFilesByGroupOutcome> DescribeConfigFilesByGroupOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeConfigFilesByGroupRequest&, DescribeConfigFilesByGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigFilesByGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGovernanceAliasesResponse> DescribeGovernanceAliasesOutcome;
                typedef std::future<DescribeGovernanceAliasesOutcome> DescribeGovernanceAliasesOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeGovernanceAliasesRequest&, DescribeGovernanceAliasesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGovernanceAliasesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGovernanceInstancesResponse> DescribeGovernanceInstancesOutcome;
                typedef std::future<DescribeGovernanceInstancesOutcome> DescribeGovernanceInstancesOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeGovernanceInstancesRequest&, DescribeGovernanceInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGovernanceInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGovernanceNamespacesResponse> DescribeGovernanceNamespacesOutcome;
                typedef std::future<DescribeGovernanceNamespacesOutcome> DescribeGovernanceNamespacesOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeGovernanceNamespacesRequest&, DescribeGovernanceNamespacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGovernanceNamespacesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGovernanceServiceContractVersionsResponse> DescribeGovernanceServiceContractVersionsOutcome;
                typedef std::future<DescribeGovernanceServiceContractVersionsOutcome> DescribeGovernanceServiceContractVersionsOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeGovernanceServiceContractVersionsRequest&, DescribeGovernanceServiceContractVersionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGovernanceServiceContractVersionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGovernanceServiceContractsResponse> DescribeGovernanceServiceContractsOutcome;
                typedef std::future<DescribeGovernanceServiceContractsOutcome> DescribeGovernanceServiceContractsOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeGovernanceServiceContractsRequest&, DescribeGovernanceServiceContractsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGovernanceServiceContractsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGovernanceServicesResponse> DescribeGovernanceServicesOutcome;
                typedef std::future<DescribeGovernanceServicesOutcome> DescribeGovernanceServicesOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeGovernanceServicesRequest&, DescribeGovernanceServicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGovernanceServicesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceTagInfosResponse> DescribeInstanceTagInfosOutcome;
                typedef std::future<DescribeInstanceTagInfosOutcome> DescribeInstanceTagInfosOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeInstanceTagInfosRequest&, DescribeInstanceTagInfosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceTagInfosAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNacosReplicasResponse> DescribeNacosReplicasOutcome;
                typedef std::future<DescribeNacosReplicasOutcome> DescribeNacosReplicasOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeNacosReplicasRequest&, DescribeNacosReplicasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNacosReplicasAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNacosServerInterfacesResponse> DescribeNacosServerInterfacesOutcome;
                typedef std::future<DescribeNacosServerInterfacesOutcome> DescribeNacosServerInterfacesOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeNacosServerInterfacesRequest&, DescribeNacosServerInterfacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNacosServerInterfacesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNativeGatewayServerGroupsResponse> DescribeNativeGatewayServerGroupsOutcome;
                typedef std::future<DescribeNativeGatewayServerGroupsOutcome> DescribeNativeGatewayServerGroupsOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeNativeGatewayServerGroupsRequest&, DescribeNativeGatewayServerGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNativeGatewayServerGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNativeGatewayServiceSourcesResponse> DescribeNativeGatewayServiceSourcesOutcome;
                typedef std::future<DescribeNativeGatewayServiceSourcesOutcome> DescribeNativeGatewayServiceSourcesOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeNativeGatewayServiceSourcesRequest&, DescribeNativeGatewayServiceSourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNativeGatewayServiceSourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOneCloudNativeAPIGatewayServiceResponse> DescribeOneCloudNativeAPIGatewayServiceOutcome;
                typedef std::future<DescribeOneCloudNativeAPIGatewayServiceOutcome> DescribeOneCloudNativeAPIGatewayServiceOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeOneCloudNativeAPIGatewayServiceRequest&, DescribeOneCloudNativeAPIGatewayServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOneCloudNativeAPIGatewayServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePublicAddressConfigResponse> DescribePublicAddressConfigOutcome;
                typedef std::future<DescribePublicAddressConfigOutcome> DescribePublicAddressConfigOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribePublicAddressConfigRequest&, DescribePublicAddressConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePublicAddressConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePublicNetworkResponse> DescribePublicNetworkOutcome;
                typedef std::future<DescribePublicNetworkOutcome> DescribePublicNetworkOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribePublicNetworkRequest&, DescribePublicNetworkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePublicNetworkAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSREInstanceAccessAddressResponse> DescribeSREInstanceAccessAddressOutcome;
                typedef std::future<DescribeSREInstanceAccessAddressOutcome> DescribeSREInstanceAccessAddressOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeSREInstanceAccessAddressRequest&, DescribeSREInstanceAccessAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSREInstanceAccessAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSREInstancesResponse> DescribeSREInstancesOutcome;
                typedef std::future<DescribeSREInstancesOutcome> DescribeSREInstancesOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeSREInstancesRequest&, DescribeSREInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSREInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUpstreamHealthCheckConfigResponse> DescribeUpstreamHealthCheckConfigOutcome;
                typedef std::future<DescribeUpstreamHealthCheckConfigOutcome> DescribeUpstreamHealthCheckConfigOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeUpstreamHealthCheckConfigRequest&, DescribeUpstreamHealthCheckConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUpstreamHealthCheckConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWafDomainsResponse> DescribeWafDomainsOutcome;
                typedef std::future<DescribeWafDomainsOutcome> DescribeWafDomainsOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeWafDomainsRequest&, DescribeWafDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWafDomainsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWafProtectionResponse> DescribeWafProtectionOutcome;
                typedef std::future<DescribeWafProtectionOutcome> DescribeWafProtectionOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeWafProtectionRequest&, DescribeWafProtectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWafProtectionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZookeeperReplicasResponse> DescribeZookeeperReplicasOutcome;
                typedef std::future<DescribeZookeeperReplicasOutcome> DescribeZookeeperReplicasOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeZookeeperReplicasRequest&, DescribeZookeeperReplicasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZookeeperReplicasAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZookeeperServerInterfacesResponse> DescribeZookeeperServerInterfacesOutcome;
                typedef std::future<DescribeZookeeperServerInterfacesOutcome> DescribeZookeeperServerInterfacesOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeZookeeperServerInterfacesRequest&, DescribeZookeeperServerInterfacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZookeeperServerInterfacesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAutoScalerResourceStrategyResponse> ModifyAutoScalerResourceStrategyOutcome;
                typedef std::future<ModifyAutoScalerResourceStrategyOutcome> ModifyAutoScalerResourceStrategyOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::ModifyAutoScalerResourceStrategyRequest&, ModifyAutoScalerResourceStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAutoScalerResourceStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCloudNativeAPIGatewayResponse> ModifyCloudNativeAPIGatewayOutcome;
                typedef std::future<ModifyCloudNativeAPIGatewayOutcome> ModifyCloudNativeAPIGatewayOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::ModifyCloudNativeAPIGatewayRequest&, ModifyCloudNativeAPIGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCloudNativeAPIGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCloudNativeAPIGatewayCanaryRuleResponse> ModifyCloudNativeAPIGatewayCanaryRuleOutcome;
                typedef std::future<ModifyCloudNativeAPIGatewayCanaryRuleOutcome> ModifyCloudNativeAPIGatewayCanaryRuleOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::ModifyCloudNativeAPIGatewayCanaryRuleRequest&, ModifyCloudNativeAPIGatewayCanaryRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCloudNativeAPIGatewayCanaryRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCloudNativeAPIGatewayCertificateResponse> ModifyCloudNativeAPIGatewayCertificateOutcome;
                typedef std::future<ModifyCloudNativeAPIGatewayCertificateOutcome> ModifyCloudNativeAPIGatewayCertificateOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::ModifyCloudNativeAPIGatewayCertificateRequest&, ModifyCloudNativeAPIGatewayCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCloudNativeAPIGatewayCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCloudNativeAPIGatewayRouteResponse> ModifyCloudNativeAPIGatewayRouteOutcome;
                typedef std::future<ModifyCloudNativeAPIGatewayRouteOutcome> ModifyCloudNativeAPIGatewayRouteOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::ModifyCloudNativeAPIGatewayRouteRequest&, ModifyCloudNativeAPIGatewayRouteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCloudNativeAPIGatewayRouteAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCloudNativeAPIGatewayRouteRateLimitResponse> ModifyCloudNativeAPIGatewayRouteRateLimitOutcome;
                typedef std::future<ModifyCloudNativeAPIGatewayRouteRateLimitOutcome> ModifyCloudNativeAPIGatewayRouteRateLimitOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::ModifyCloudNativeAPIGatewayRouteRateLimitRequest&, ModifyCloudNativeAPIGatewayRouteRateLimitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCloudNativeAPIGatewayRouteRateLimitAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCloudNativeAPIGatewayServiceResponse> ModifyCloudNativeAPIGatewayServiceOutcome;
                typedef std::future<ModifyCloudNativeAPIGatewayServiceOutcome> ModifyCloudNativeAPIGatewayServiceOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::ModifyCloudNativeAPIGatewayServiceRequest&, ModifyCloudNativeAPIGatewayServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCloudNativeAPIGatewayServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCloudNativeAPIGatewayServiceRateLimitResponse> ModifyCloudNativeAPIGatewayServiceRateLimitOutcome;
                typedef std::future<ModifyCloudNativeAPIGatewayServiceRateLimitOutcome> ModifyCloudNativeAPIGatewayServiceRateLimitOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::ModifyCloudNativeAPIGatewayServiceRateLimitRequest&, ModifyCloudNativeAPIGatewayServiceRateLimitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCloudNativeAPIGatewayServiceRateLimitAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyConfigFileGroupResponse> ModifyConfigFileGroupOutcome;
                typedef std::future<ModifyConfigFileGroupOutcome> ModifyConfigFileGroupOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::ModifyConfigFileGroupRequest&, ModifyConfigFileGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyConfigFileGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyConfigFilesResponse> ModifyConfigFilesOutcome;
                typedef std::future<ModifyConfigFilesOutcome> ModifyConfigFilesOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::ModifyConfigFilesRequest&, ModifyConfigFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyConfigFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyConsoleNetworkResponse> ModifyConsoleNetworkOutcome;
                typedef std::future<ModifyConsoleNetworkOutcome> ModifyConsoleNetworkOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::ModifyConsoleNetworkRequest&, ModifyConsoleNetworkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyConsoleNetworkAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyGovernanceAliasResponse> ModifyGovernanceAliasOutcome;
                typedef std::future<ModifyGovernanceAliasOutcome> ModifyGovernanceAliasOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::ModifyGovernanceAliasRequest&, ModifyGovernanceAliasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGovernanceAliasAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyGovernanceInstancesResponse> ModifyGovernanceInstancesOutcome;
                typedef std::future<ModifyGovernanceInstancesOutcome> ModifyGovernanceInstancesOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::ModifyGovernanceInstancesRequest&, ModifyGovernanceInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGovernanceInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyGovernanceNamespacesResponse> ModifyGovernanceNamespacesOutcome;
                typedef std::future<ModifyGovernanceNamespacesOutcome> ModifyGovernanceNamespacesOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::ModifyGovernanceNamespacesRequest&, ModifyGovernanceNamespacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGovernanceNamespacesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyGovernanceServicesResponse> ModifyGovernanceServicesOutcome;
                typedef std::future<ModifyGovernanceServicesOutcome> ModifyGovernanceServicesOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::ModifyGovernanceServicesRequest&, ModifyGovernanceServicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGovernanceServicesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNativeGatewayServerGroupResponse> ModifyNativeGatewayServerGroupOutcome;
                typedef std::future<ModifyNativeGatewayServerGroupOutcome> ModifyNativeGatewayServerGroupOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::ModifyNativeGatewayServerGroupRequest&, ModifyNativeGatewayServerGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNativeGatewayServerGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNativeGatewayServiceSourceResponse> ModifyNativeGatewayServiceSourceOutcome;
                typedef std::future<ModifyNativeGatewayServiceSourceOutcome> ModifyNativeGatewayServiceSourceOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::ModifyNativeGatewayServiceSourceRequest&, ModifyNativeGatewayServiceSourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNativeGatewayServiceSourceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNetworkAccessStrategyResponse> ModifyNetworkAccessStrategyOutcome;
                typedef std::future<ModifyNetworkAccessStrategyOutcome> ModifyNetworkAccessStrategyOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::ModifyNetworkAccessStrategyRequest&, ModifyNetworkAccessStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNetworkAccessStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNetworkBasicInfoResponse> ModifyNetworkBasicInfoOutcome;
                typedef std::future<ModifyNetworkBasicInfoOutcome> ModifyNetworkBasicInfoOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::ModifyNetworkBasicInfoRequest&, ModifyNetworkBasicInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNetworkBasicInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUpstreamNodeStatusResponse> ModifyUpstreamNodeStatusOutcome;
                typedef std::future<ModifyUpstreamNodeStatusOutcome> ModifyUpstreamNodeStatusOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::ModifyUpstreamNodeStatusRequest&, ModifyUpstreamNodeStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUpstreamNodeStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenWafProtectionResponse> OpenWafProtectionOutcome;
                typedef std::future<OpenWafProtectionOutcome> OpenWafProtectionOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::OpenWafProtectionRequest&, OpenWafProtectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenWafProtectionAsyncHandler;
                typedef Outcome<Core::Error, Model::PublishConfigFilesResponse> PublishConfigFilesOutcome;
                typedef std::future<PublishConfigFilesOutcome> PublishConfigFilesOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::PublishConfigFilesRequest&, PublishConfigFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PublishConfigFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::RestartSREInstanceResponse> RestartSREInstanceOutcome;
                typedef std::future<RestartSREInstanceOutcome> RestartSREInstanceOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::RestartSREInstanceRequest&, RestartSREInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestartSREInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::RollbackConfigFileReleasesResponse> RollbackConfigFileReleasesOutcome;
                typedef std::future<RollbackConfigFileReleasesOutcome> RollbackConfigFileReleasesOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::RollbackConfigFileReleasesRequest&, RollbackConfigFileReleasesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RollbackConfigFileReleasesAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindAutoScalerResourceStrategyFromGroupsResponse> UnbindAutoScalerResourceStrategyFromGroupsOutcome;
                typedef std::future<UnbindAutoScalerResourceStrategyFromGroupsOutcome> UnbindAutoScalerResourceStrategyFromGroupsOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::UnbindAutoScalerResourceStrategyFromGroupsRequest&, UnbindAutoScalerResourceStrategyFromGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindAutoScalerResourceStrategyFromGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateCloudNativeAPIGatewayCertificateInfoResponse> UpdateCloudNativeAPIGatewayCertificateInfoOutcome;
                typedef std::future<UpdateCloudNativeAPIGatewayCertificateInfoOutcome> UpdateCloudNativeAPIGatewayCertificateInfoOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::UpdateCloudNativeAPIGatewayCertificateInfoRequest&, UpdateCloudNativeAPIGatewayCertificateInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCloudNativeAPIGatewayCertificateInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateCloudNativeAPIGatewaySpecResponse> UpdateCloudNativeAPIGatewaySpecOutcome;
                typedef std::future<UpdateCloudNativeAPIGatewaySpecOutcome> UpdateCloudNativeAPIGatewaySpecOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::UpdateCloudNativeAPIGatewaySpecRequest&, UpdateCloudNativeAPIGatewaySpecOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCloudNativeAPIGatewaySpecAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateEngineInternetAccessResponse> UpdateEngineInternetAccessOutcome;
                typedef std::future<UpdateEngineInternetAccessOutcome> UpdateEngineInternetAccessOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::UpdateEngineInternetAccessRequest&, UpdateEngineInternetAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEngineInternetAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateUpstreamHealthCheckConfigResponse> UpdateUpstreamHealthCheckConfigOutcome;
                typedef std::future<UpdateUpstreamHealthCheckConfigOutcome> UpdateUpstreamHealthCheckConfigOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::UpdateUpstreamHealthCheckConfigRequest&, UpdateUpstreamHealthCheckConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateUpstreamHealthCheckConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateUpstreamTargetsResponse> UpdateUpstreamTargetsOutcome;
                typedef std::future<UpdateUpstreamTargetsOutcome> UpdateUpstreamTargetsOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::UpdateUpstreamTargetsRequest&, UpdateUpstreamTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateUpstreamTargetsAsyncHandler;



                /**
                 *弹性伸缩策略批量绑定网关分组
                 * @param req BindAutoScalerResourceStrategyToGroupsRequest
                 * @return BindAutoScalerResourceStrategyToGroupsOutcome
                 */
                BindAutoScalerResourceStrategyToGroupsOutcome BindAutoScalerResourceStrategyToGroups(const Model::BindAutoScalerResourceStrategyToGroupsRequest &request);
                void BindAutoScalerResourceStrategyToGroupsAsync(const Model::BindAutoScalerResourceStrategyToGroupsRequest& request, const BindAutoScalerResourceStrategyToGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindAutoScalerResourceStrategyToGroupsOutcomeCallable BindAutoScalerResourceStrategyToGroupsCallable(const Model::BindAutoScalerResourceStrategyToGroupsRequest& request);

                /**
                 *关闭 WAF 防护
                 * @param req CloseWafProtectionRequest
                 * @return CloseWafProtectionOutcome
                 */
                CloseWafProtectionOutcome CloseWafProtection(const Model::CloseWafProtectionRequest &request);
                void CloseWafProtectionAsync(const Model::CloseWafProtectionRequest& request, const CloseWafProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloseWafProtectionOutcomeCallable CloseWafProtectionCallable(const Model::CloseWafProtectionRequest& request);

                /**
                 *创建弹性伸缩策略
                 * @param req CreateAutoScalerResourceStrategyRequest
                 * @return CreateAutoScalerResourceStrategyOutcome
                 */
                CreateAutoScalerResourceStrategyOutcome CreateAutoScalerResourceStrategy(const Model::CreateAutoScalerResourceStrategyRequest &request);
                void CreateAutoScalerResourceStrategyAsync(const Model::CreateAutoScalerResourceStrategyRequest& request, const CreateAutoScalerResourceStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAutoScalerResourceStrategyOutcomeCallable CreateAutoScalerResourceStrategyCallable(const Model::CreateAutoScalerResourceStrategyRequest& request);

                /**
                 *创建云原生API网关实例
                 * @param req CreateCloudNativeAPIGatewayRequest
                 * @return CreateCloudNativeAPIGatewayOutcome
                 */
                CreateCloudNativeAPIGatewayOutcome CreateCloudNativeAPIGateway(const Model::CreateCloudNativeAPIGatewayRequest &request);
                void CreateCloudNativeAPIGatewayAsync(const Model::CreateCloudNativeAPIGatewayRequest& request, const CreateCloudNativeAPIGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCloudNativeAPIGatewayOutcomeCallable CreateCloudNativeAPIGatewayCallable(const Model::CreateCloudNativeAPIGatewayRequest& request);

                /**
                 *创建云原生网关的灰度规则
                 * @param req CreateCloudNativeAPIGatewayCanaryRuleRequest
                 * @return CreateCloudNativeAPIGatewayCanaryRuleOutcome
                 */
                CreateCloudNativeAPIGatewayCanaryRuleOutcome CreateCloudNativeAPIGatewayCanaryRule(const Model::CreateCloudNativeAPIGatewayCanaryRuleRequest &request);
                void CreateCloudNativeAPIGatewayCanaryRuleAsync(const Model::CreateCloudNativeAPIGatewayCanaryRuleRequest& request, const CreateCloudNativeAPIGatewayCanaryRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCloudNativeAPIGatewayCanaryRuleOutcomeCallable CreateCloudNativeAPIGatewayCanaryRuleCallable(const Model::CreateCloudNativeAPIGatewayCanaryRuleRequest& request);

                /**
                 *创建云原生网关证书
                 * @param req CreateCloudNativeAPIGatewayCertificateRequest
                 * @return CreateCloudNativeAPIGatewayCertificateOutcome
                 */
                CreateCloudNativeAPIGatewayCertificateOutcome CreateCloudNativeAPIGatewayCertificate(const Model::CreateCloudNativeAPIGatewayCertificateRequest &request);
                void CreateCloudNativeAPIGatewayCertificateAsync(const Model::CreateCloudNativeAPIGatewayCertificateRequest& request, const CreateCloudNativeAPIGatewayCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCloudNativeAPIGatewayCertificateOutcomeCallable CreateCloudNativeAPIGatewayCertificateCallable(const Model::CreateCloudNativeAPIGatewayCertificateRequest& request);

                /**
                 *创建公网网络配置
                 * @param req CreateCloudNativeAPIGatewayPublicNetworkRequest
                 * @return CreateCloudNativeAPIGatewayPublicNetworkOutcome
                 */
                CreateCloudNativeAPIGatewayPublicNetworkOutcome CreateCloudNativeAPIGatewayPublicNetwork(const Model::CreateCloudNativeAPIGatewayPublicNetworkRequest &request);
                void CreateCloudNativeAPIGatewayPublicNetworkAsync(const Model::CreateCloudNativeAPIGatewayPublicNetworkRequest& request, const CreateCloudNativeAPIGatewayPublicNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCloudNativeAPIGatewayPublicNetworkOutcomeCallable CreateCloudNativeAPIGatewayPublicNetworkCallable(const Model::CreateCloudNativeAPIGatewayPublicNetworkRequest& request);

                /**
                 *创建云原生网关路由
                 * @param req CreateCloudNativeAPIGatewayRouteRequest
                 * @return CreateCloudNativeAPIGatewayRouteOutcome
                 */
                CreateCloudNativeAPIGatewayRouteOutcome CreateCloudNativeAPIGatewayRoute(const Model::CreateCloudNativeAPIGatewayRouteRequest &request);
                void CreateCloudNativeAPIGatewayRouteAsync(const Model::CreateCloudNativeAPIGatewayRouteRequest& request, const CreateCloudNativeAPIGatewayRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCloudNativeAPIGatewayRouteOutcomeCallable CreateCloudNativeAPIGatewayRouteCallable(const Model::CreateCloudNativeAPIGatewayRouteRequest& request);

                /**
                 *创建云原生网关限流插件(路由)
                 * @param req CreateCloudNativeAPIGatewayRouteRateLimitRequest
                 * @return CreateCloudNativeAPIGatewayRouteRateLimitOutcome
                 */
                CreateCloudNativeAPIGatewayRouteRateLimitOutcome CreateCloudNativeAPIGatewayRouteRateLimit(const Model::CreateCloudNativeAPIGatewayRouteRateLimitRequest &request);
                void CreateCloudNativeAPIGatewayRouteRateLimitAsync(const Model::CreateCloudNativeAPIGatewayRouteRateLimitRequest& request, const CreateCloudNativeAPIGatewayRouteRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCloudNativeAPIGatewayRouteRateLimitOutcomeCallable CreateCloudNativeAPIGatewayRouteRateLimitCallable(const Model::CreateCloudNativeAPIGatewayRouteRateLimitRequest& request);

                /**
                 *创建云原生网关服务
                 * @param req CreateCloudNativeAPIGatewayServiceRequest
                 * @return CreateCloudNativeAPIGatewayServiceOutcome
                 */
                CreateCloudNativeAPIGatewayServiceOutcome CreateCloudNativeAPIGatewayService(const Model::CreateCloudNativeAPIGatewayServiceRequest &request);
                void CreateCloudNativeAPIGatewayServiceAsync(const Model::CreateCloudNativeAPIGatewayServiceRequest& request, const CreateCloudNativeAPIGatewayServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCloudNativeAPIGatewayServiceOutcomeCallable CreateCloudNativeAPIGatewayServiceCallable(const Model::CreateCloudNativeAPIGatewayServiceRequest& request);

                /**
                 *创建云原生网关限流插件(服务)
                 * @param req CreateCloudNativeAPIGatewayServiceRateLimitRequest
                 * @return CreateCloudNativeAPIGatewayServiceRateLimitOutcome
                 */
                CreateCloudNativeAPIGatewayServiceRateLimitOutcome CreateCloudNativeAPIGatewayServiceRateLimit(const Model::CreateCloudNativeAPIGatewayServiceRateLimitRequest &request);
                void CreateCloudNativeAPIGatewayServiceRateLimitAsync(const Model::CreateCloudNativeAPIGatewayServiceRateLimitRequest& request, const CreateCloudNativeAPIGatewayServiceRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCloudNativeAPIGatewayServiceRateLimitOutcomeCallable CreateCloudNativeAPIGatewayServiceRateLimitCallable(const Model::CreateCloudNativeAPIGatewayServiceRateLimitRequest& request);

                /**
                 *创建配置文件
                 * @param req CreateConfigFileRequest
                 * @return CreateConfigFileOutcome
                 */
                CreateConfigFileOutcome CreateConfigFile(const Model::CreateConfigFileRequest &request);
                void CreateConfigFileAsync(const Model::CreateConfigFileRequest& request, const CreateConfigFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateConfigFileOutcomeCallable CreateConfigFileCallable(const Model::CreateConfigFileRequest& request);

                /**
                 *创建服务治理中心配置文件组
                 * @param req CreateConfigFileGroupRequest
                 * @return CreateConfigFileGroupOutcome
                 */
                CreateConfigFileGroupOutcome CreateConfigFileGroup(const Model::CreateConfigFileGroupRequest &request);
                void CreateConfigFileGroupAsync(const Model::CreateConfigFileGroupRequest& request, const CreateConfigFileGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateConfigFileGroupOutcomeCallable CreateConfigFileGroupCallable(const Model::CreateConfigFileGroupRequest& request);

                /**
                 *创建引擎实例
                 * @param req CreateEngineRequest
                 * @return CreateEngineOutcome
                 */
                CreateEngineOutcome CreateEngine(const Model::CreateEngineRequest &request);
                void CreateEngineAsync(const Model::CreateEngineRequest& request, const CreateEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEngineOutcomeCallable CreateEngineCallable(const Model::CreateEngineRequest& request);

                /**
                 *创建治理中心服务别名
                 * @param req CreateGovernanceAliasRequest
                 * @return CreateGovernanceAliasOutcome
                 */
                CreateGovernanceAliasOutcome CreateGovernanceAlias(const Model::CreateGovernanceAliasRequest &request);
                void CreateGovernanceAliasAsync(const Model::CreateGovernanceAliasRequest& request, const CreateGovernanceAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGovernanceAliasOutcomeCallable CreateGovernanceAliasCallable(const Model::CreateGovernanceAliasRequest& request);

                /**
                 *创建服务实例
                 * @param req CreateGovernanceInstancesRequest
                 * @return CreateGovernanceInstancesOutcome
                 */
                CreateGovernanceInstancesOutcome CreateGovernanceInstances(const Model::CreateGovernanceInstancesRequest &request);
                void CreateGovernanceInstancesAsync(const Model::CreateGovernanceInstancesRequest& request, const CreateGovernanceInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGovernanceInstancesOutcomeCallable CreateGovernanceInstancesCallable(const Model::CreateGovernanceInstancesRequest& request);

                /**
                 *创建治理中心命名空间
                 * @param req CreateGovernanceNamespacesRequest
                 * @return CreateGovernanceNamespacesOutcome
                 */
                CreateGovernanceNamespacesOutcome CreateGovernanceNamespaces(const Model::CreateGovernanceNamespacesRequest &request);
                void CreateGovernanceNamespacesAsync(const Model::CreateGovernanceNamespacesRequest& request, const CreateGovernanceNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGovernanceNamespacesOutcomeCallable CreateGovernanceNamespacesCallable(const Model::CreateGovernanceNamespacesRequest& request);

                /**
                 *创建治理中心服务
                 * @param req CreateGovernanceServicesRequest
                 * @return CreateGovernanceServicesOutcome
                 */
                CreateGovernanceServicesOutcome CreateGovernanceServices(const Model::CreateGovernanceServicesRequest &request);
                void CreateGovernanceServicesAsync(const Model::CreateGovernanceServicesRequest& request, const CreateGovernanceServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGovernanceServicesOutcomeCallable CreateGovernanceServicesCallable(const Model::CreateGovernanceServicesRequest& request);

                /**
                 *创建云原生网关引擎分组
                 * @param req CreateNativeGatewayServerGroupRequest
                 * @return CreateNativeGatewayServerGroupOutcome
                 */
                CreateNativeGatewayServerGroupOutcome CreateNativeGatewayServerGroup(const Model::CreateNativeGatewayServerGroupRequest &request);
                void CreateNativeGatewayServerGroupAsync(const Model::CreateNativeGatewayServerGroupRequest& request, const CreateNativeGatewayServerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNativeGatewayServerGroupOutcomeCallable CreateNativeGatewayServerGroupCallable(const Model::CreateNativeGatewayServerGroupRequest& request);

                /**
                 *创建网关服务来源
                 * @param req CreateNativeGatewayServiceSourceRequest
                 * @return CreateNativeGatewayServiceSourceOutcome
                 */
                CreateNativeGatewayServiceSourceOutcome CreateNativeGatewayServiceSource(const Model::CreateNativeGatewayServiceSourceRequest &request);
                void CreateNativeGatewayServiceSourceAsync(const Model::CreateNativeGatewayServiceSourceRequest& request, const CreateNativeGatewayServiceSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNativeGatewayServiceSourceOutcomeCallable CreateNativeGatewayServiceSourceCallable(const Model::CreateNativeGatewayServiceSourceRequest& request);

                /**
                 *创建或更新配置文件并发布配置
                 * @param req CreateOrUpdateConfigFileAndReleaseRequest
                 * @return CreateOrUpdateConfigFileAndReleaseOutcome
                 */
                CreateOrUpdateConfigFileAndReleaseOutcome CreateOrUpdateConfigFileAndRelease(const Model::CreateOrUpdateConfigFileAndReleaseRequest &request);
                void CreateOrUpdateConfigFileAndReleaseAsync(const Model::CreateOrUpdateConfigFileAndReleaseRequest& request, const CreateOrUpdateConfigFileAndReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOrUpdateConfigFileAndReleaseOutcomeCallable CreateOrUpdateConfigFileAndReleaseCallable(const Model::CreateOrUpdateConfigFileAndReleaseRequest& request);

                /**
                 *新建 WAF 防护域名
                 * @param req CreateWafDomainsRequest
                 * @return CreateWafDomainsOutcome
                 */
                CreateWafDomainsOutcome CreateWafDomains(const Model::CreateWafDomainsRequest &request);
                void CreateWafDomainsAsync(const Model::CreateWafDomainsRequest& request, const CreateWafDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWafDomainsOutcomeCallable CreateWafDomainsCallable(const Model::CreateWafDomainsRequest& request);

                /**
                 *删除弹性伸缩策略
                 * @param req DeleteAutoScalerResourceStrategyRequest
                 * @return DeleteAutoScalerResourceStrategyOutcome
                 */
                DeleteAutoScalerResourceStrategyOutcome DeleteAutoScalerResourceStrategy(const Model::DeleteAutoScalerResourceStrategyRequest &request);
                void DeleteAutoScalerResourceStrategyAsync(const Model::DeleteAutoScalerResourceStrategyRequest& request, const DeleteAutoScalerResourceStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAutoScalerResourceStrategyOutcomeCallable DeleteAutoScalerResourceStrategyCallable(const Model::DeleteAutoScalerResourceStrategyRequest& request);

                /**
                 *删除云原生API网关实例
                 * @param req DeleteCloudNativeAPIGatewayRequest
                 * @return DeleteCloudNativeAPIGatewayOutcome
                 */
                DeleteCloudNativeAPIGatewayOutcome DeleteCloudNativeAPIGateway(const Model::DeleteCloudNativeAPIGatewayRequest &request);
                void DeleteCloudNativeAPIGatewayAsync(const Model::DeleteCloudNativeAPIGatewayRequest& request, const DeleteCloudNativeAPIGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCloudNativeAPIGatewayOutcomeCallable DeleteCloudNativeAPIGatewayCallable(const Model::DeleteCloudNativeAPIGatewayRequest& request);

                /**
                 *删除云原生网关的灰度规则
                 * @param req DeleteCloudNativeAPIGatewayCanaryRuleRequest
                 * @return DeleteCloudNativeAPIGatewayCanaryRuleOutcome
                 */
                DeleteCloudNativeAPIGatewayCanaryRuleOutcome DeleteCloudNativeAPIGatewayCanaryRule(const Model::DeleteCloudNativeAPIGatewayCanaryRuleRequest &request);
                void DeleteCloudNativeAPIGatewayCanaryRuleAsync(const Model::DeleteCloudNativeAPIGatewayCanaryRuleRequest& request, const DeleteCloudNativeAPIGatewayCanaryRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCloudNativeAPIGatewayCanaryRuleOutcomeCallable DeleteCloudNativeAPIGatewayCanaryRuleCallable(const Model::DeleteCloudNativeAPIGatewayCanaryRuleRequest& request);

                /**
                 *删除云原生网关证书
                 * @param req DeleteCloudNativeAPIGatewayCertificateRequest
                 * @return DeleteCloudNativeAPIGatewayCertificateOutcome
                 */
                DeleteCloudNativeAPIGatewayCertificateOutcome DeleteCloudNativeAPIGatewayCertificate(const Model::DeleteCloudNativeAPIGatewayCertificateRequest &request);
                void DeleteCloudNativeAPIGatewayCertificateAsync(const Model::DeleteCloudNativeAPIGatewayCertificateRequest& request, const DeleteCloudNativeAPIGatewayCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCloudNativeAPIGatewayCertificateOutcomeCallable DeleteCloudNativeAPIGatewayCertificateCallable(const Model::DeleteCloudNativeAPIGatewayCertificateRequest& request);

                /**
                 *删除公网网络配置
                 * @param req DeleteCloudNativeAPIGatewayPublicNetworkRequest
                 * @return DeleteCloudNativeAPIGatewayPublicNetworkOutcome
                 */
                DeleteCloudNativeAPIGatewayPublicNetworkOutcome DeleteCloudNativeAPIGatewayPublicNetwork(const Model::DeleteCloudNativeAPIGatewayPublicNetworkRequest &request);
                void DeleteCloudNativeAPIGatewayPublicNetworkAsync(const Model::DeleteCloudNativeAPIGatewayPublicNetworkRequest& request, const DeleteCloudNativeAPIGatewayPublicNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCloudNativeAPIGatewayPublicNetworkOutcomeCallable DeleteCloudNativeAPIGatewayPublicNetworkCallable(const Model::DeleteCloudNativeAPIGatewayPublicNetworkRequest& request);

                /**
                 *删除云原生网关路由
                 * @param req DeleteCloudNativeAPIGatewayRouteRequest
                 * @return DeleteCloudNativeAPIGatewayRouteOutcome
                 */
                DeleteCloudNativeAPIGatewayRouteOutcome DeleteCloudNativeAPIGatewayRoute(const Model::DeleteCloudNativeAPIGatewayRouteRequest &request);
                void DeleteCloudNativeAPIGatewayRouteAsync(const Model::DeleteCloudNativeAPIGatewayRouteRequest& request, const DeleteCloudNativeAPIGatewayRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCloudNativeAPIGatewayRouteOutcomeCallable DeleteCloudNativeAPIGatewayRouteCallable(const Model::DeleteCloudNativeAPIGatewayRouteRequest& request);

                /**
                 *删除云原生网关的限流插件(路由)
                 * @param req DeleteCloudNativeAPIGatewayRouteRateLimitRequest
                 * @return DeleteCloudNativeAPIGatewayRouteRateLimitOutcome
                 */
                DeleteCloudNativeAPIGatewayRouteRateLimitOutcome DeleteCloudNativeAPIGatewayRouteRateLimit(const Model::DeleteCloudNativeAPIGatewayRouteRateLimitRequest &request);
                void DeleteCloudNativeAPIGatewayRouteRateLimitAsync(const Model::DeleteCloudNativeAPIGatewayRouteRateLimitRequest& request, const DeleteCloudNativeAPIGatewayRouteRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCloudNativeAPIGatewayRouteRateLimitOutcomeCallable DeleteCloudNativeAPIGatewayRouteRateLimitCallable(const Model::DeleteCloudNativeAPIGatewayRouteRateLimitRequest& request);

                /**
                 *删除云原生网关服务
                 * @param req DeleteCloudNativeAPIGatewayServiceRequest
                 * @return DeleteCloudNativeAPIGatewayServiceOutcome
                 */
                DeleteCloudNativeAPIGatewayServiceOutcome DeleteCloudNativeAPIGatewayService(const Model::DeleteCloudNativeAPIGatewayServiceRequest &request);
                void DeleteCloudNativeAPIGatewayServiceAsync(const Model::DeleteCloudNativeAPIGatewayServiceRequest& request, const DeleteCloudNativeAPIGatewayServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCloudNativeAPIGatewayServiceOutcomeCallable DeleteCloudNativeAPIGatewayServiceCallable(const Model::DeleteCloudNativeAPIGatewayServiceRequest& request);

                /**
                 *删除云原生网关的限流插件(服务)
                 * @param req DeleteCloudNativeAPIGatewayServiceRateLimitRequest
                 * @return DeleteCloudNativeAPIGatewayServiceRateLimitOutcome
                 */
                DeleteCloudNativeAPIGatewayServiceRateLimitOutcome DeleteCloudNativeAPIGatewayServiceRateLimit(const Model::DeleteCloudNativeAPIGatewayServiceRateLimitRequest &request);
                void DeleteCloudNativeAPIGatewayServiceRateLimitAsync(const Model::DeleteCloudNativeAPIGatewayServiceRateLimitRequest& request, const DeleteCloudNativeAPIGatewayServiceRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCloudNativeAPIGatewayServiceRateLimitOutcomeCallable DeleteCloudNativeAPIGatewayServiceRateLimitCallable(const Model::DeleteCloudNativeAPIGatewayServiceRateLimitRequest& request);

                /**
                 *删除配置文件分组
                 * @param req DeleteConfigFileGroupRequest
                 * @return DeleteConfigFileGroupOutcome
                 */
                DeleteConfigFileGroupOutcome DeleteConfigFileGroup(const Model::DeleteConfigFileGroupRequest &request);
                void DeleteConfigFileGroupAsync(const Model::DeleteConfigFileGroupRequest& request, const DeleteConfigFileGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteConfigFileGroupOutcomeCallable DeleteConfigFileGroupCallable(const Model::DeleteConfigFileGroupRequest& request);

                /**
                 *删除配置发布
                 * @param req DeleteConfigFileReleasesRequest
                 * @return DeleteConfigFileReleasesOutcome
                 */
                DeleteConfigFileReleasesOutcome DeleteConfigFileReleases(const Model::DeleteConfigFileReleasesRequest &request);
                void DeleteConfigFileReleasesAsync(const Model::DeleteConfigFileReleasesRequest& request, const DeleteConfigFileReleasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteConfigFileReleasesOutcomeCallable DeleteConfigFileReleasesCallable(const Model::DeleteConfigFileReleasesRequest& request);

                /**
                 *删除配置文件
                 * @param req DeleteConfigFilesRequest
                 * @return DeleteConfigFilesOutcome
                 */
                DeleteConfigFilesOutcome DeleteConfigFiles(const Model::DeleteConfigFilesRequest &request);
                void DeleteConfigFilesAsync(const Model::DeleteConfigFilesRequest& request, const DeleteConfigFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteConfigFilesOutcomeCallable DeleteConfigFilesCallable(const Model::DeleteConfigFilesRequest& request);

                /**
                 *删除引擎实例
                 * @param req DeleteEngineRequest
                 * @return DeleteEngineOutcome
                 */
                DeleteEngineOutcome DeleteEngine(const Model::DeleteEngineRequest &request);
                void DeleteEngineAsync(const Model::DeleteEngineRequest& request, const DeleteEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEngineOutcomeCallable DeleteEngineCallable(const Model::DeleteEngineRequest& request);

                /**
                 *删除治理中心服务别名
                 * @param req DeleteGovernanceAliasesRequest
                 * @return DeleteGovernanceAliasesOutcome
                 */
                DeleteGovernanceAliasesOutcome DeleteGovernanceAliases(const Model::DeleteGovernanceAliasesRequest &request);
                void DeleteGovernanceAliasesAsync(const Model::DeleteGovernanceAliasesRequest& request, const DeleteGovernanceAliasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteGovernanceAliasesOutcomeCallable DeleteGovernanceAliasesCallable(const Model::DeleteGovernanceAliasesRequest& request);

                /**
                 *删除服务实例
                 * @param req DeleteGovernanceInstancesRequest
                 * @return DeleteGovernanceInstancesOutcome
                 */
                DeleteGovernanceInstancesOutcome DeleteGovernanceInstances(const Model::DeleteGovernanceInstancesRequest &request);
                void DeleteGovernanceInstancesAsync(const Model::DeleteGovernanceInstancesRequest& request, const DeleteGovernanceInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteGovernanceInstancesOutcomeCallable DeleteGovernanceInstancesCallable(const Model::DeleteGovernanceInstancesRequest& request);

                /**
                 *删除治理中心服务实例
                 * @param req DeleteGovernanceInstancesByHostRequest
                 * @return DeleteGovernanceInstancesByHostOutcome
                 */
                DeleteGovernanceInstancesByHostOutcome DeleteGovernanceInstancesByHost(const Model::DeleteGovernanceInstancesByHostRequest &request);
                void DeleteGovernanceInstancesByHostAsync(const Model::DeleteGovernanceInstancesByHostRequest& request, const DeleteGovernanceInstancesByHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteGovernanceInstancesByHostOutcomeCallable DeleteGovernanceInstancesByHostCallable(const Model::DeleteGovernanceInstancesByHostRequest& request);

                /**
                 *删除治理中心命名空间
                 * @param req DeleteGovernanceNamespacesRequest
                 * @return DeleteGovernanceNamespacesOutcome
                 */
                DeleteGovernanceNamespacesOutcome DeleteGovernanceNamespaces(const Model::DeleteGovernanceNamespacesRequest &request);
                void DeleteGovernanceNamespacesAsync(const Model::DeleteGovernanceNamespacesRequest& request, const DeleteGovernanceNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteGovernanceNamespacesOutcomeCallable DeleteGovernanceNamespacesCallable(const Model::DeleteGovernanceNamespacesRequest& request);

                /**
                 *删除治理中心服务
                 * @param req DeleteGovernanceServicesRequest
                 * @return DeleteGovernanceServicesOutcome
                 */
                DeleteGovernanceServicesOutcome DeleteGovernanceServices(const Model::DeleteGovernanceServicesRequest &request);
                void DeleteGovernanceServicesAsync(const Model::DeleteGovernanceServicesRequest& request, const DeleteGovernanceServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteGovernanceServicesOutcomeCallable DeleteGovernanceServicesCallable(const Model::DeleteGovernanceServicesRequest& request);

                /**
                 *删除网关实例分组
                 * @param req DeleteNativeGatewayServerGroupRequest
                 * @return DeleteNativeGatewayServerGroupOutcome
                 */
                DeleteNativeGatewayServerGroupOutcome DeleteNativeGatewayServerGroup(const Model::DeleteNativeGatewayServerGroupRequest &request);
                void DeleteNativeGatewayServerGroupAsync(const Model::DeleteNativeGatewayServerGroupRequest& request, const DeleteNativeGatewayServerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNativeGatewayServerGroupOutcomeCallable DeleteNativeGatewayServerGroupCallable(const Model::DeleteNativeGatewayServerGroupRequest& request);

                /**
                 *删除网关服务来源实例
                 * @param req DeleteNativeGatewayServiceSourceRequest
                 * @return DeleteNativeGatewayServiceSourceOutcome
                 */
                DeleteNativeGatewayServiceSourceOutcome DeleteNativeGatewayServiceSource(const Model::DeleteNativeGatewayServiceSourceRequest &request);
                void DeleteNativeGatewayServiceSourceAsync(const Model::DeleteNativeGatewayServiceSourceRequest& request, const DeleteNativeGatewayServiceSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNativeGatewayServiceSourceOutcomeCallable DeleteNativeGatewayServiceSourceCallable(const Model::DeleteNativeGatewayServiceSourceRequest& request);

                /**
                 *删除 WAF 防护域名
                 * @param req DeleteWafDomainsRequest
                 * @return DeleteWafDomainsOutcome
                 */
                DeleteWafDomainsOutcome DeleteWafDomains(const Model::DeleteWafDomainsRequest &request);
                void DeleteWafDomainsAsync(const Model::DeleteWafDomainsRequest& request, const DeleteWafDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWafDomainsOutcomeCallable DeleteWafDomainsCallable(const Model::DeleteWafDomainsRequest& request);

                /**
                 *获取全量配置文件模板列表
                 * @param req DescribeAllConfigFileTemplatesRequest
                 * @return DescribeAllConfigFileTemplatesOutcome
                 */
                DescribeAllConfigFileTemplatesOutcome DescribeAllConfigFileTemplates(const Model::DescribeAllConfigFileTemplatesRequest &request);
                void DescribeAllConfigFileTemplatesAsync(const Model::DescribeAllConfigFileTemplatesRequest& request, const DescribeAllConfigFileTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAllConfigFileTemplatesOutcomeCallable DescribeAllConfigFileTemplatesCallable(const Model::DescribeAllConfigFileTemplatesRequest& request);

                /**
                 *查看弹性伸缩策略列表
                 * @param req DescribeAutoScalerResourceStrategiesRequest
                 * @return DescribeAutoScalerResourceStrategiesOutcome
                 */
                DescribeAutoScalerResourceStrategiesOutcome DescribeAutoScalerResourceStrategies(const Model::DescribeAutoScalerResourceStrategiesRequest &request);
                void DescribeAutoScalerResourceStrategiesAsync(const Model::DescribeAutoScalerResourceStrategiesRequest& request, const DescribeAutoScalerResourceStrategiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAutoScalerResourceStrategiesOutcomeCallable DescribeAutoScalerResourceStrategiesCallable(const Model::DescribeAutoScalerResourceStrategiesRequest& request);

                /**
                 *查看弹性伸缩策略绑定的网关分组
                 * @param req DescribeAutoScalerResourceStrategyBindingGroupsRequest
                 * @return DescribeAutoScalerResourceStrategyBindingGroupsOutcome
                 */
                DescribeAutoScalerResourceStrategyBindingGroupsOutcome DescribeAutoScalerResourceStrategyBindingGroups(const Model::DescribeAutoScalerResourceStrategyBindingGroupsRequest &request);
                void DescribeAutoScalerResourceStrategyBindingGroupsAsync(const Model::DescribeAutoScalerResourceStrategyBindingGroupsRequest& request, const DescribeAutoScalerResourceStrategyBindingGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAutoScalerResourceStrategyBindingGroupsOutcomeCallable DescribeAutoScalerResourceStrategyBindingGroupsCallable(const Model::DescribeAutoScalerResourceStrategyBindingGroupsRequest& request);

                /**
                 *获取云原生API网关实例信息
                 * @param req DescribeCloudNativeAPIGatewayRequest
                 * @return DescribeCloudNativeAPIGatewayOutcome
                 */
                DescribeCloudNativeAPIGatewayOutcome DescribeCloudNativeAPIGateway(const Model::DescribeCloudNativeAPIGatewayRequest &request);
                void DescribeCloudNativeAPIGatewayAsync(const Model::DescribeCloudNativeAPIGatewayRequest& request, const DescribeCloudNativeAPIGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudNativeAPIGatewayOutcomeCallable DescribeCloudNativeAPIGatewayCallable(const Model::DescribeCloudNativeAPIGatewayRequest& request);

                /**
                 *查询云原生网关灰度规则列表
                 * @param req DescribeCloudNativeAPIGatewayCanaryRulesRequest
                 * @return DescribeCloudNativeAPIGatewayCanaryRulesOutcome
                 */
                DescribeCloudNativeAPIGatewayCanaryRulesOutcome DescribeCloudNativeAPIGatewayCanaryRules(const Model::DescribeCloudNativeAPIGatewayCanaryRulesRequest &request);
                void DescribeCloudNativeAPIGatewayCanaryRulesAsync(const Model::DescribeCloudNativeAPIGatewayCanaryRulesRequest& request, const DescribeCloudNativeAPIGatewayCanaryRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudNativeAPIGatewayCanaryRulesOutcomeCallable DescribeCloudNativeAPIGatewayCanaryRulesCallable(const Model::DescribeCloudNativeAPIGatewayCanaryRulesRequest& request);

                /**
                 *查询云原生网关单个证书详情
                 * @param req DescribeCloudNativeAPIGatewayCertificateDetailsRequest
                 * @return DescribeCloudNativeAPIGatewayCertificateDetailsOutcome
                 */
                DescribeCloudNativeAPIGatewayCertificateDetailsOutcome DescribeCloudNativeAPIGatewayCertificateDetails(const Model::DescribeCloudNativeAPIGatewayCertificateDetailsRequest &request);
                void DescribeCloudNativeAPIGatewayCertificateDetailsAsync(const Model::DescribeCloudNativeAPIGatewayCertificateDetailsRequest& request, const DescribeCloudNativeAPIGatewayCertificateDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudNativeAPIGatewayCertificateDetailsOutcomeCallable DescribeCloudNativeAPIGatewayCertificateDetailsCallable(const Model::DescribeCloudNativeAPIGatewayCertificateDetailsRequest& request);

                /**
                 *查询云原生网关证书列表
                 * @param req DescribeCloudNativeAPIGatewayCertificatesRequest
                 * @return DescribeCloudNativeAPIGatewayCertificatesOutcome
                 */
                DescribeCloudNativeAPIGatewayCertificatesOutcome DescribeCloudNativeAPIGatewayCertificates(const Model::DescribeCloudNativeAPIGatewayCertificatesRequest &request);
                void DescribeCloudNativeAPIGatewayCertificatesAsync(const Model::DescribeCloudNativeAPIGatewayCertificatesRequest& request, const DescribeCloudNativeAPIGatewayCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudNativeAPIGatewayCertificatesOutcomeCallable DescribeCloudNativeAPIGatewayCertificatesCallable(const Model::DescribeCloudNativeAPIGatewayCertificatesRequest& request);

                /**
                 *获取云原生API网关实例网络配置信息
                 * @param req DescribeCloudNativeAPIGatewayConfigRequest
                 * @return DescribeCloudNativeAPIGatewayConfigOutcome
                 */
                DescribeCloudNativeAPIGatewayConfigOutcome DescribeCloudNativeAPIGatewayConfig(const Model::DescribeCloudNativeAPIGatewayConfigRequest &request);
                void DescribeCloudNativeAPIGatewayConfigAsync(const Model::DescribeCloudNativeAPIGatewayConfigRequest& request, const DescribeCloudNativeAPIGatewayConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudNativeAPIGatewayConfigOutcomeCallable DescribeCloudNativeAPIGatewayConfigCallable(const Model::DescribeCloudNativeAPIGatewayConfigRequest& request);

                /**
                 *根据公网IP查询云原生网关实例信息
                 * @param req DescribeCloudNativeAPIGatewayInfoByIpRequest
                 * @return DescribeCloudNativeAPIGatewayInfoByIpOutcome
                 */
                DescribeCloudNativeAPIGatewayInfoByIpOutcome DescribeCloudNativeAPIGatewayInfoByIp(const Model::DescribeCloudNativeAPIGatewayInfoByIpRequest &request);
                void DescribeCloudNativeAPIGatewayInfoByIpAsync(const Model::DescribeCloudNativeAPIGatewayInfoByIpRequest& request, const DescribeCloudNativeAPIGatewayInfoByIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudNativeAPIGatewayInfoByIpOutcomeCallable DescribeCloudNativeAPIGatewayInfoByIpCallable(const Model::DescribeCloudNativeAPIGatewayInfoByIpRequest& request);

                /**
                 *获取云原生网关节点列表
                 * @param req DescribeCloudNativeAPIGatewayNodesRequest
                 * @return DescribeCloudNativeAPIGatewayNodesOutcome
                 */
                DescribeCloudNativeAPIGatewayNodesOutcome DescribeCloudNativeAPIGatewayNodes(const Model::DescribeCloudNativeAPIGatewayNodesRequest &request);
                void DescribeCloudNativeAPIGatewayNodesAsync(const Model::DescribeCloudNativeAPIGatewayNodesRequest& request, const DescribeCloudNativeAPIGatewayNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudNativeAPIGatewayNodesOutcomeCallable DescribeCloudNativeAPIGatewayNodesCallable(const Model::DescribeCloudNativeAPIGatewayNodesRequest& request);

                /**
                 *获取云原生API网关实例端口信息
                 * @param req DescribeCloudNativeAPIGatewayPortsRequest
                 * @return DescribeCloudNativeAPIGatewayPortsOutcome
                 */
                DescribeCloudNativeAPIGatewayPortsOutcome DescribeCloudNativeAPIGatewayPorts(const Model::DescribeCloudNativeAPIGatewayPortsRequest &request);
                void DescribeCloudNativeAPIGatewayPortsAsync(const Model::DescribeCloudNativeAPIGatewayPortsRequest& request, const DescribeCloudNativeAPIGatewayPortsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudNativeAPIGatewayPortsOutcomeCallable DescribeCloudNativeAPIGatewayPortsCallable(const Model::DescribeCloudNativeAPIGatewayPortsRequest& request);

                /**
                 *查询云原生网关的限流插件(路由)
                 * @param req DescribeCloudNativeAPIGatewayRouteRateLimitRequest
                 * @return DescribeCloudNativeAPIGatewayRouteRateLimitOutcome
                 */
                DescribeCloudNativeAPIGatewayRouteRateLimitOutcome DescribeCloudNativeAPIGatewayRouteRateLimit(const Model::DescribeCloudNativeAPIGatewayRouteRateLimitRequest &request);
                void DescribeCloudNativeAPIGatewayRouteRateLimitAsync(const Model::DescribeCloudNativeAPIGatewayRouteRateLimitRequest& request, const DescribeCloudNativeAPIGatewayRouteRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudNativeAPIGatewayRouteRateLimitOutcomeCallable DescribeCloudNativeAPIGatewayRouteRateLimitCallable(const Model::DescribeCloudNativeAPIGatewayRouteRateLimitRequest& request);

                /**
                 *查询云原生网关路由列表
                 * @param req DescribeCloudNativeAPIGatewayRoutesRequest
                 * @return DescribeCloudNativeAPIGatewayRoutesOutcome
                 */
                DescribeCloudNativeAPIGatewayRoutesOutcome DescribeCloudNativeAPIGatewayRoutes(const Model::DescribeCloudNativeAPIGatewayRoutesRequest &request);
                void DescribeCloudNativeAPIGatewayRoutesAsync(const Model::DescribeCloudNativeAPIGatewayRoutesRequest& request, const DescribeCloudNativeAPIGatewayRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudNativeAPIGatewayRoutesOutcomeCallable DescribeCloudNativeAPIGatewayRoutesCallable(const Model::DescribeCloudNativeAPIGatewayRoutesRequest& request);

                /**
                 *查询云原生网关的限流插件(服务)
                 * @param req DescribeCloudNativeAPIGatewayServiceRateLimitRequest
                 * @return DescribeCloudNativeAPIGatewayServiceRateLimitOutcome
                 */
                DescribeCloudNativeAPIGatewayServiceRateLimitOutcome DescribeCloudNativeAPIGatewayServiceRateLimit(const Model::DescribeCloudNativeAPIGatewayServiceRateLimitRequest &request);
                void DescribeCloudNativeAPIGatewayServiceRateLimitAsync(const Model::DescribeCloudNativeAPIGatewayServiceRateLimitRequest& request, const DescribeCloudNativeAPIGatewayServiceRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudNativeAPIGatewayServiceRateLimitOutcomeCallable DescribeCloudNativeAPIGatewayServiceRateLimitCallable(const Model::DescribeCloudNativeAPIGatewayServiceRateLimitRequest& request);

                /**
                 *查询云原生网关服务列表
                 * @param req DescribeCloudNativeAPIGatewayServicesRequest
                 * @return DescribeCloudNativeAPIGatewayServicesOutcome
                 */
                DescribeCloudNativeAPIGatewayServicesOutcome DescribeCloudNativeAPIGatewayServices(const Model::DescribeCloudNativeAPIGatewayServicesRequest &request);
                void DescribeCloudNativeAPIGatewayServicesAsync(const Model::DescribeCloudNativeAPIGatewayServicesRequest& request, const DescribeCloudNativeAPIGatewayServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudNativeAPIGatewayServicesOutcomeCallable DescribeCloudNativeAPIGatewayServicesCallable(const Model::DescribeCloudNativeAPIGatewayServicesRequest& request);

                /**
                 *获取云原生网关服务详情下的Upstream列表
                 * @param req DescribeCloudNativeAPIGatewayUpstreamRequest
                 * @return DescribeCloudNativeAPIGatewayUpstreamOutcome
                 */
                DescribeCloudNativeAPIGatewayUpstreamOutcome DescribeCloudNativeAPIGatewayUpstream(const Model::DescribeCloudNativeAPIGatewayUpstreamRequest &request);
                void DescribeCloudNativeAPIGatewayUpstreamAsync(const Model::DescribeCloudNativeAPIGatewayUpstreamRequest& request, const DescribeCloudNativeAPIGatewayUpstreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudNativeAPIGatewayUpstreamOutcomeCallable DescribeCloudNativeAPIGatewayUpstreamCallable(const Model::DescribeCloudNativeAPIGatewayUpstreamRequest& request);

                /**
                 *获取云原生API网关实例列表
                 * @param req DescribeCloudNativeAPIGatewaysRequest
                 * @return DescribeCloudNativeAPIGatewaysOutcome
                 */
                DescribeCloudNativeAPIGatewaysOutcome DescribeCloudNativeAPIGateways(const Model::DescribeCloudNativeAPIGatewaysRequest &request);
                void DescribeCloudNativeAPIGatewaysAsync(const Model::DescribeCloudNativeAPIGatewaysRequest& request, const DescribeCloudNativeAPIGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudNativeAPIGatewaysOutcomeCallable DescribeCloudNativeAPIGatewaysCallable(const Model::DescribeCloudNativeAPIGatewaysRequest& request);

                /**
                 *根据命名空间、组、名字查找配置文件
                 * @param req DescribeConfigFileRequest
                 * @return DescribeConfigFileOutcome
                 */
                DescribeConfigFileOutcome DescribeConfigFile(const Model::DescribeConfigFileRequest &request);
                void DescribeConfigFileAsync(const Model::DescribeConfigFileRequest& request, const DescribeConfigFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConfigFileOutcomeCallable DescribeConfigFileCallable(const Model::DescribeConfigFileRequest& request);

                /**
                 *根据条件分页查询配置文件组
                 * @param req DescribeConfigFileGroupsRequest
                 * @return DescribeConfigFileGroupsOutcome
                 */
                DescribeConfigFileGroupsOutcome DescribeConfigFileGroups(const Model::DescribeConfigFileGroupsRequest &request);
                void DescribeConfigFileGroupsAsync(const Model::DescribeConfigFileGroupsRequest& request, const DescribeConfigFileGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConfigFileGroupsOutcomeCallable DescribeConfigFileGroupsCallable(const Model::DescribeConfigFileGroupsRequest& request);

                /**
                 *获取配置文件发布
                 * @param req DescribeConfigFileReleaseRequest
                 * @return DescribeConfigFileReleaseOutcome
                 */
                DescribeConfigFileReleaseOutcome DescribeConfigFileRelease(const Model::DescribeConfigFileReleaseRequest &request);
                void DescribeConfigFileReleaseAsync(const Model::DescribeConfigFileReleaseRequest& request, const DescribeConfigFileReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConfigFileReleaseOutcomeCallable DescribeConfigFileReleaseCallable(const Model::DescribeConfigFileReleaseRequest& request);

                /**
                 *获取配置文件发布历史列表
                 * @param req DescribeConfigFileReleaseHistoriesRequest
                 * @return DescribeConfigFileReleaseHistoriesOutcome
                 */
                DescribeConfigFileReleaseHistoriesOutcome DescribeConfigFileReleaseHistories(const Model::DescribeConfigFileReleaseHistoriesRequest &request);
                void DescribeConfigFileReleaseHistoriesAsync(const Model::DescribeConfigFileReleaseHistoriesRequest& request, const DescribeConfigFileReleaseHistoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConfigFileReleaseHistoriesOutcomeCallable DescribeConfigFileReleaseHistoriesCallable(const Model::DescribeConfigFileReleaseHistoriesRequest& request);

                /**
                 *查询某个配置所有版本信息
                 * @param req DescribeConfigFileReleaseVersionsRequest
                 * @return DescribeConfigFileReleaseVersionsOutcome
                 */
                DescribeConfigFileReleaseVersionsOutcome DescribeConfigFileReleaseVersions(const Model::DescribeConfigFileReleaseVersionsRequest &request);
                void DescribeConfigFileReleaseVersionsAsync(const Model::DescribeConfigFileReleaseVersionsRequest& request, const DescribeConfigFileReleaseVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConfigFileReleaseVersionsOutcomeCallable DescribeConfigFileReleaseVersionsCallable(const Model::DescribeConfigFileReleaseVersionsRequest& request);

                /**
                 *查询配置版本列表
                 * @param req DescribeConfigFileReleasesRequest
                 * @return DescribeConfigFileReleasesOutcome
                 */
                DescribeConfigFileReleasesOutcome DescribeConfigFileReleases(const Model::DescribeConfigFileReleasesRequest &request);
                void DescribeConfigFileReleasesAsync(const Model::DescribeConfigFileReleasesRequest& request, const DescribeConfigFileReleasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConfigFileReleasesOutcomeCallable DescribeConfigFileReleasesCallable(const Model::DescribeConfigFileReleasesRequest& request);

                /**
                 *根据命名空间、组名、名称、标签查询配置文件列表
                 * @param req DescribeConfigFilesRequest
                 * @return DescribeConfigFilesOutcome
                 */
                DescribeConfigFilesOutcome DescribeConfigFiles(const Model::DescribeConfigFilesRequest &request);
                void DescribeConfigFilesAsync(const Model::DescribeConfigFilesRequest& request, const DescribeConfigFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConfigFilesOutcomeCallable DescribeConfigFilesCallable(const Model::DescribeConfigFilesRequest& request);

                /**
                 *根据group查询配置文件列表
                 * @param req DescribeConfigFilesByGroupRequest
                 * @return DescribeConfigFilesByGroupOutcome
                 */
                DescribeConfigFilesByGroupOutcome DescribeConfigFilesByGroup(const Model::DescribeConfigFilesByGroupRequest &request);
                void DescribeConfigFilesByGroupAsync(const Model::DescribeConfigFilesByGroupRequest& request, const DescribeConfigFilesByGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConfigFilesByGroupOutcomeCallable DescribeConfigFilesByGroupCallable(const Model::DescribeConfigFilesByGroupRequest& request);

                /**
                 *查询治理中心服务别名列表
                 * @param req DescribeGovernanceAliasesRequest
                 * @return DescribeGovernanceAliasesOutcome
                 */
                DescribeGovernanceAliasesOutcome DescribeGovernanceAliases(const Model::DescribeGovernanceAliasesRequest &request);
                void DescribeGovernanceAliasesAsync(const Model::DescribeGovernanceAliasesRequest& request, const DescribeGovernanceAliasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGovernanceAliasesOutcomeCallable DescribeGovernanceAliasesCallable(const Model::DescribeGovernanceAliasesRequest& request);

                /**
                 *查询服务实例
                 * @param req DescribeGovernanceInstancesRequest
                 * @return DescribeGovernanceInstancesOutcome
                 */
                DescribeGovernanceInstancesOutcome DescribeGovernanceInstances(const Model::DescribeGovernanceInstancesRequest &request);
                void DescribeGovernanceInstancesAsync(const Model::DescribeGovernanceInstancesRequest& request, const DescribeGovernanceInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGovernanceInstancesOutcomeCallable DescribeGovernanceInstancesCallable(const Model::DescribeGovernanceInstancesRequest& request);

                /**
                 *查询服务治理中心命名空间列表
                 * @param req DescribeGovernanceNamespacesRequest
                 * @return DescribeGovernanceNamespacesOutcome
                 */
                DescribeGovernanceNamespacesOutcome DescribeGovernanceNamespaces(const Model::DescribeGovernanceNamespacesRequest &request);
                void DescribeGovernanceNamespacesAsync(const Model::DescribeGovernanceNamespacesRequest& request, const DescribeGovernanceNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGovernanceNamespacesOutcomeCallable DescribeGovernanceNamespacesCallable(const Model::DescribeGovernanceNamespacesRequest& request);

                /**
                 *查询服务下契约版本列表
                 * @param req DescribeGovernanceServiceContractVersionsRequest
                 * @return DescribeGovernanceServiceContractVersionsOutcome
                 */
                DescribeGovernanceServiceContractVersionsOutcome DescribeGovernanceServiceContractVersions(const Model::DescribeGovernanceServiceContractVersionsRequest &request);
                void DescribeGovernanceServiceContractVersionsAsync(const Model::DescribeGovernanceServiceContractVersionsRequest& request, const DescribeGovernanceServiceContractVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGovernanceServiceContractVersionsOutcomeCallable DescribeGovernanceServiceContractVersionsCallable(const Model::DescribeGovernanceServiceContractVersionsRequest& request);

                /**
                 *查询服务契约定义列表
                 * @param req DescribeGovernanceServiceContractsRequest
                 * @return DescribeGovernanceServiceContractsOutcome
                 */
                DescribeGovernanceServiceContractsOutcome DescribeGovernanceServiceContracts(const Model::DescribeGovernanceServiceContractsRequest &request);
                void DescribeGovernanceServiceContractsAsync(const Model::DescribeGovernanceServiceContractsRequest& request, const DescribeGovernanceServiceContractsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGovernanceServiceContractsOutcomeCallable DescribeGovernanceServiceContractsCallable(const Model::DescribeGovernanceServiceContractsRequest& request);

                /**
                 *查询治理中心服务列表
                 * @param req DescribeGovernanceServicesRequest
                 * @return DescribeGovernanceServicesOutcome
                 */
                DescribeGovernanceServicesOutcome DescribeGovernanceServices(const Model::DescribeGovernanceServicesRequest &request);
                void DescribeGovernanceServicesAsync(const Model::DescribeGovernanceServicesRequest& request, const DescribeGovernanceServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGovernanceServicesOutcomeCallable DescribeGovernanceServicesCallable(const Model::DescribeGovernanceServicesRequest& request);

                /**
                 *查看实例的标签信息
                 * @param req DescribeInstanceTagInfosRequest
                 * @return DescribeInstanceTagInfosOutcome
                 */
                DescribeInstanceTagInfosOutcome DescribeInstanceTagInfos(const Model::DescribeInstanceTagInfosRequest &request);
                void DescribeInstanceTagInfosAsync(const Model::DescribeInstanceTagInfosRequest& request, const DescribeInstanceTagInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceTagInfosOutcomeCallable DescribeInstanceTagInfosCallable(const Model::DescribeInstanceTagInfosRequest& request);

                /**
                 *查询Nacos类型引擎实例副本信息
                 * @param req DescribeNacosReplicasRequest
                 * @return DescribeNacosReplicasOutcome
                 */
                DescribeNacosReplicasOutcome DescribeNacosReplicas(const Model::DescribeNacosReplicasRequest &request);
                void DescribeNacosReplicasAsync(const Model::DescribeNacosReplicasRequest& request, const DescribeNacosReplicasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNacosReplicasOutcomeCallable DescribeNacosReplicasCallable(const Model::DescribeNacosReplicasRequest& request);

                /**
                 *查询nacos服务接口列表
                 * @param req DescribeNacosServerInterfacesRequest
                 * @return DescribeNacosServerInterfacesOutcome
                 */
                DescribeNacosServerInterfacesOutcome DescribeNacosServerInterfaces(const Model::DescribeNacosServerInterfacesRequest &request);
                void DescribeNacosServerInterfacesAsync(const Model::DescribeNacosServerInterfacesRequest& request, const DescribeNacosServerInterfacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNacosServerInterfacesOutcomeCallable DescribeNacosServerInterfacesCallable(const Model::DescribeNacosServerInterfacesRequest& request);

                /**
                 *查询云原生网关分组信息
                 * @param req DescribeNativeGatewayServerGroupsRequest
                 * @return DescribeNativeGatewayServerGroupsOutcome
                 */
                DescribeNativeGatewayServerGroupsOutcome DescribeNativeGatewayServerGroups(const Model::DescribeNativeGatewayServerGroupsRequest &request);
                void DescribeNativeGatewayServerGroupsAsync(const Model::DescribeNativeGatewayServerGroupsRequest& request, const DescribeNativeGatewayServerGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNativeGatewayServerGroupsOutcomeCallable DescribeNativeGatewayServerGroupsCallable(const Model::DescribeNativeGatewayServerGroupsRequest& request);

                /**
                 *查询网关服务来源实例列表
                 * @param req DescribeNativeGatewayServiceSourcesRequest
                 * @return DescribeNativeGatewayServiceSourcesOutcome
                 */
                DescribeNativeGatewayServiceSourcesOutcome DescribeNativeGatewayServiceSources(const Model::DescribeNativeGatewayServiceSourcesRequest &request);
                void DescribeNativeGatewayServiceSourcesAsync(const Model::DescribeNativeGatewayServiceSourcesRequest& request, const DescribeNativeGatewayServiceSourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNativeGatewayServiceSourcesOutcomeCallable DescribeNativeGatewayServiceSourcesCallable(const Model::DescribeNativeGatewayServiceSourcesRequest& request);

                /**
                 *获取云原生网关服务详情
                 * @param req DescribeOneCloudNativeAPIGatewayServiceRequest
                 * @return DescribeOneCloudNativeAPIGatewayServiceOutcome
                 */
                DescribeOneCloudNativeAPIGatewayServiceOutcome DescribeOneCloudNativeAPIGatewayService(const Model::DescribeOneCloudNativeAPIGatewayServiceRequest &request);
                void DescribeOneCloudNativeAPIGatewayServiceAsync(const Model::DescribeOneCloudNativeAPIGatewayServiceRequest& request, const DescribeOneCloudNativeAPIGatewayServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOneCloudNativeAPIGatewayServiceOutcomeCallable DescribeOneCloudNativeAPIGatewayServiceCallable(const Model::DescribeOneCloudNativeAPIGatewayServiceRequest& request);

                /**
                 *查询公网地址信息
                 * @param req DescribePublicAddressConfigRequest
                 * @return DescribePublicAddressConfigOutcome
                 */
                DescribePublicAddressConfigOutcome DescribePublicAddressConfig(const Model::DescribePublicAddressConfigRequest &request);
                void DescribePublicAddressConfigAsync(const Model::DescribePublicAddressConfigRequest& request, const DescribePublicAddressConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePublicAddressConfigOutcomeCallable DescribePublicAddressConfigCallable(const Model::DescribePublicAddressConfigRequest& request);

                /**
                 *查询云原生API网关实例公网详情
                 * @param req DescribePublicNetworkRequest
                 * @return DescribePublicNetworkOutcome
                 */
                DescribePublicNetworkOutcome DescribePublicNetwork(const Model::DescribePublicNetworkRequest &request);
                void DescribePublicNetworkAsync(const Model::DescribePublicNetworkRequest& request, const DescribePublicNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePublicNetworkOutcomeCallable DescribePublicNetworkCallable(const Model::DescribePublicNetworkRequest& request);

                /**
                 *查询引擎实例访问地址
                 * @param req DescribeSREInstanceAccessAddressRequest
                 * @return DescribeSREInstanceAccessAddressOutcome
                 */
                DescribeSREInstanceAccessAddressOutcome DescribeSREInstanceAccessAddress(const Model::DescribeSREInstanceAccessAddressRequest &request);
                void DescribeSREInstanceAccessAddressAsync(const Model::DescribeSREInstanceAccessAddressRequest& request, const DescribeSREInstanceAccessAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSREInstanceAccessAddressOutcomeCallable DescribeSREInstanceAccessAddressCallable(const Model::DescribeSREInstanceAccessAddressRequest& request);

                /**
                 *用于查询引擎实例列表
                 * @param req DescribeSREInstancesRequest
                 * @return DescribeSREInstancesOutcome
                 */
                DescribeSREInstancesOutcome DescribeSREInstances(const Model::DescribeSREInstancesRequest &request);
                void DescribeSREInstancesAsync(const Model::DescribeSREInstancesRequest& request, const DescribeSREInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSREInstancesOutcomeCallable DescribeSREInstancesCallable(const Model::DescribeSREInstancesRequest& request);

                /**
                 *获取云原生网关服务健康检查配置
                 * @param req DescribeUpstreamHealthCheckConfigRequest
                 * @return DescribeUpstreamHealthCheckConfigOutcome
                 */
                DescribeUpstreamHealthCheckConfigOutcome DescribeUpstreamHealthCheckConfig(const Model::DescribeUpstreamHealthCheckConfigRequest &request);
                void DescribeUpstreamHealthCheckConfigAsync(const Model::DescribeUpstreamHealthCheckConfigRequest& request, const DescribeUpstreamHealthCheckConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUpstreamHealthCheckConfigOutcomeCallable DescribeUpstreamHealthCheckConfigCallable(const Model::DescribeUpstreamHealthCheckConfigRequest& request);

                /**
                 *获取 WAF 防护域名
                 * @param req DescribeWafDomainsRequest
                 * @return DescribeWafDomainsOutcome
                 */
                DescribeWafDomainsOutcome DescribeWafDomains(const Model::DescribeWafDomainsRequest &request);
                void DescribeWafDomainsAsync(const Model::DescribeWafDomainsRequest& request, const DescribeWafDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWafDomainsOutcomeCallable DescribeWafDomainsCallable(const Model::DescribeWafDomainsRequest& request);

                /**
                 *获取 WAF 防护状态
                 * @param req DescribeWafProtectionRequest
                 * @return DescribeWafProtectionOutcome
                 */
                DescribeWafProtectionOutcome DescribeWafProtection(const Model::DescribeWafProtectionRequest &request);
                void DescribeWafProtectionAsync(const Model::DescribeWafProtectionRequest& request, const DescribeWafProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWafProtectionOutcomeCallable DescribeWafProtectionCallable(const Model::DescribeWafProtectionRequest& request);

                /**
                 *查询Zookeeper类型注册引擎实例副本信息
                 * @param req DescribeZookeeperReplicasRequest
                 * @return DescribeZookeeperReplicasOutcome
                 */
                DescribeZookeeperReplicasOutcome DescribeZookeeperReplicas(const Model::DescribeZookeeperReplicasRequest &request);
                void DescribeZookeeperReplicasAsync(const Model::DescribeZookeeperReplicasRequest& request, const DescribeZookeeperReplicasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZookeeperReplicasOutcomeCallable DescribeZookeeperReplicasCallable(const Model::DescribeZookeeperReplicasRequest& request);

                /**
                 *查询zookeeper服务接口列表
                 * @param req DescribeZookeeperServerInterfacesRequest
                 * @return DescribeZookeeperServerInterfacesOutcome
                 */
                DescribeZookeeperServerInterfacesOutcome DescribeZookeeperServerInterfaces(const Model::DescribeZookeeperServerInterfacesRequest &request);
                void DescribeZookeeperServerInterfacesAsync(const Model::DescribeZookeeperServerInterfacesRequest& request, const DescribeZookeeperServerInterfacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZookeeperServerInterfacesOutcomeCallable DescribeZookeeperServerInterfacesCallable(const Model::DescribeZookeeperServerInterfacesRequest& request);

                /**
                 *更新弹性伸缩策略
                 * @param req ModifyAutoScalerResourceStrategyRequest
                 * @return ModifyAutoScalerResourceStrategyOutcome
                 */
                ModifyAutoScalerResourceStrategyOutcome ModifyAutoScalerResourceStrategy(const Model::ModifyAutoScalerResourceStrategyRequest &request);
                void ModifyAutoScalerResourceStrategyAsync(const Model::ModifyAutoScalerResourceStrategyRequest& request, const ModifyAutoScalerResourceStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAutoScalerResourceStrategyOutcomeCallable ModifyAutoScalerResourceStrategyCallable(const Model::ModifyAutoScalerResourceStrategyRequest& request);

                /**
                 *修改云原生API网关实例基础信息
                 * @param req ModifyCloudNativeAPIGatewayRequest
                 * @return ModifyCloudNativeAPIGatewayOutcome
                 */
                ModifyCloudNativeAPIGatewayOutcome ModifyCloudNativeAPIGateway(const Model::ModifyCloudNativeAPIGatewayRequest &request);
                void ModifyCloudNativeAPIGatewayAsync(const Model::ModifyCloudNativeAPIGatewayRequest& request, const ModifyCloudNativeAPIGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCloudNativeAPIGatewayOutcomeCallable ModifyCloudNativeAPIGatewayCallable(const Model::ModifyCloudNativeAPIGatewayRequest& request);

                /**
                 *修改云原生网关的灰度规则
                 * @param req ModifyCloudNativeAPIGatewayCanaryRuleRequest
                 * @return ModifyCloudNativeAPIGatewayCanaryRuleOutcome
                 */
                ModifyCloudNativeAPIGatewayCanaryRuleOutcome ModifyCloudNativeAPIGatewayCanaryRule(const Model::ModifyCloudNativeAPIGatewayCanaryRuleRequest &request);
                void ModifyCloudNativeAPIGatewayCanaryRuleAsync(const Model::ModifyCloudNativeAPIGatewayCanaryRuleRequest& request, const ModifyCloudNativeAPIGatewayCanaryRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCloudNativeAPIGatewayCanaryRuleOutcomeCallable ModifyCloudNativeAPIGatewayCanaryRuleCallable(const Model::ModifyCloudNativeAPIGatewayCanaryRuleRequest& request);

                /**
                 *更新云原生网关证书
                 * @param req ModifyCloudNativeAPIGatewayCertificateRequest
                 * @return ModifyCloudNativeAPIGatewayCertificateOutcome
                 */
                ModifyCloudNativeAPIGatewayCertificateOutcome ModifyCloudNativeAPIGatewayCertificate(const Model::ModifyCloudNativeAPIGatewayCertificateRequest &request);
                void ModifyCloudNativeAPIGatewayCertificateAsync(const Model::ModifyCloudNativeAPIGatewayCertificateRequest& request, const ModifyCloudNativeAPIGatewayCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCloudNativeAPIGatewayCertificateOutcomeCallable ModifyCloudNativeAPIGatewayCertificateCallable(const Model::ModifyCloudNativeAPIGatewayCertificateRequest& request);

                /**
                 *修改云原生网关路由
                 * @param req ModifyCloudNativeAPIGatewayRouteRequest
                 * @return ModifyCloudNativeAPIGatewayRouteOutcome
                 */
                ModifyCloudNativeAPIGatewayRouteOutcome ModifyCloudNativeAPIGatewayRoute(const Model::ModifyCloudNativeAPIGatewayRouteRequest &request);
                void ModifyCloudNativeAPIGatewayRouteAsync(const Model::ModifyCloudNativeAPIGatewayRouteRequest& request, const ModifyCloudNativeAPIGatewayRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCloudNativeAPIGatewayRouteOutcomeCallable ModifyCloudNativeAPIGatewayRouteCallable(const Model::ModifyCloudNativeAPIGatewayRouteRequest& request);

                /**
                 *修改云原生网关限流插件(路由)
                 * @param req ModifyCloudNativeAPIGatewayRouteRateLimitRequest
                 * @return ModifyCloudNativeAPIGatewayRouteRateLimitOutcome
                 */
                ModifyCloudNativeAPIGatewayRouteRateLimitOutcome ModifyCloudNativeAPIGatewayRouteRateLimit(const Model::ModifyCloudNativeAPIGatewayRouteRateLimitRequest &request);
                void ModifyCloudNativeAPIGatewayRouteRateLimitAsync(const Model::ModifyCloudNativeAPIGatewayRouteRateLimitRequest& request, const ModifyCloudNativeAPIGatewayRouteRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCloudNativeAPIGatewayRouteRateLimitOutcomeCallable ModifyCloudNativeAPIGatewayRouteRateLimitCallable(const Model::ModifyCloudNativeAPIGatewayRouteRateLimitRequest& request);

                /**
                 *修改云原生网关服务
                 * @param req ModifyCloudNativeAPIGatewayServiceRequest
                 * @return ModifyCloudNativeAPIGatewayServiceOutcome
                 */
                ModifyCloudNativeAPIGatewayServiceOutcome ModifyCloudNativeAPIGatewayService(const Model::ModifyCloudNativeAPIGatewayServiceRequest &request);
                void ModifyCloudNativeAPIGatewayServiceAsync(const Model::ModifyCloudNativeAPIGatewayServiceRequest& request, const ModifyCloudNativeAPIGatewayServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCloudNativeAPIGatewayServiceOutcomeCallable ModifyCloudNativeAPIGatewayServiceCallable(const Model::ModifyCloudNativeAPIGatewayServiceRequest& request);

                /**
                 *修改云原生网关限流插件(服务)
                 * @param req ModifyCloudNativeAPIGatewayServiceRateLimitRequest
                 * @return ModifyCloudNativeAPIGatewayServiceRateLimitOutcome
                 */
                ModifyCloudNativeAPIGatewayServiceRateLimitOutcome ModifyCloudNativeAPIGatewayServiceRateLimit(const Model::ModifyCloudNativeAPIGatewayServiceRateLimitRequest &request);
                void ModifyCloudNativeAPIGatewayServiceRateLimitAsync(const Model::ModifyCloudNativeAPIGatewayServiceRateLimitRequest& request, const ModifyCloudNativeAPIGatewayServiceRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCloudNativeAPIGatewayServiceRateLimitOutcomeCallable ModifyCloudNativeAPIGatewayServiceRateLimitCallable(const Model::ModifyCloudNativeAPIGatewayServiceRateLimitRequest& request);

                /**
                 *批量修改配置文件组
                 * @param req ModifyConfigFileGroupRequest
                 * @return ModifyConfigFileGroupOutcome
                 */
                ModifyConfigFileGroupOutcome ModifyConfigFileGroup(const Model::ModifyConfigFileGroupRequest &request);
                void ModifyConfigFileGroupAsync(const Model::ModifyConfigFileGroupRequest& request, const ModifyConfigFileGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyConfigFileGroupOutcomeCallable ModifyConfigFileGroupCallable(const Model::ModifyConfigFileGroupRequest& request);

                /**
                 *修改配置文件
                 * @param req ModifyConfigFilesRequest
                 * @return ModifyConfigFilesOutcome
                 */
                ModifyConfigFilesOutcome ModifyConfigFiles(const Model::ModifyConfigFilesRequest &request);
                void ModifyConfigFilesAsync(const Model::ModifyConfigFilesRequest& request, const ModifyConfigFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyConfigFilesOutcomeCallable ModifyConfigFilesCallable(const Model::ModifyConfigFilesRequest& request);

                /**
                 *修改网关实例Konga网络配置
                 * @param req ModifyConsoleNetworkRequest
                 * @return ModifyConsoleNetworkOutcome
                 */
                ModifyConsoleNetworkOutcome ModifyConsoleNetwork(const Model::ModifyConsoleNetworkRequest &request);
                void ModifyConsoleNetworkAsync(const Model::ModifyConsoleNetworkRequest& request, const ModifyConsoleNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyConsoleNetworkOutcomeCallable ModifyConsoleNetworkCallable(const Model::ModifyConsoleNetworkRequest& request);

                /**
                 *修改治理中心服务别名
                 * @param req ModifyGovernanceAliasRequest
                 * @return ModifyGovernanceAliasOutcome
                 */
                ModifyGovernanceAliasOutcome ModifyGovernanceAlias(const Model::ModifyGovernanceAliasRequest &request);
                void ModifyGovernanceAliasAsync(const Model::ModifyGovernanceAliasRequest& request, const ModifyGovernanceAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyGovernanceAliasOutcomeCallable ModifyGovernanceAliasCallable(const Model::ModifyGovernanceAliasRequest& request);

                /**
                 *修改治理中心服务实例
                 * @param req ModifyGovernanceInstancesRequest
                 * @return ModifyGovernanceInstancesOutcome
                 */
                ModifyGovernanceInstancesOutcome ModifyGovernanceInstances(const Model::ModifyGovernanceInstancesRequest &request);
                void ModifyGovernanceInstancesAsync(const Model::ModifyGovernanceInstancesRequest& request, const ModifyGovernanceInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyGovernanceInstancesOutcomeCallable ModifyGovernanceInstancesCallable(const Model::ModifyGovernanceInstancesRequest& request);

                /**
                 *修改治理中心命名空间
                 * @param req ModifyGovernanceNamespacesRequest
                 * @return ModifyGovernanceNamespacesOutcome
                 */
                ModifyGovernanceNamespacesOutcome ModifyGovernanceNamespaces(const Model::ModifyGovernanceNamespacesRequest &request);
                void ModifyGovernanceNamespacesAsync(const Model::ModifyGovernanceNamespacesRequest& request, const ModifyGovernanceNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyGovernanceNamespacesOutcomeCallable ModifyGovernanceNamespacesCallable(const Model::ModifyGovernanceNamespacesRequest& request);

                /**
                 *修改治理中心服务
                 * @param req ModifyGovernanceServicesRequest
                 * @return ModifyGovernanceServicesOutcome
                 */
                ModifyGovernanceServicesOutcome ModifyGovernanceServices(const Model::ModifyGovernanceServicesRequest &request);
                void ModifyGovernanceServicesAsync(const Model::ModifyGovernanceServicesRequest& request, const ModifyGovernanceServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyGovernanceServicesOutcomeCallable ModifyGovernanceServicesCallable(const Model::ModifyGovernanceServicesRequest& request);

                /**
                 *修改云原生API网关实例分组基础信息
                 * @param req ModifyNativeGatewayServerGroupRequest
                 * @return ModifyNativeGatewayServerGroupOutcome
                 */
                ModifyNativeGatewayServerGroupOutcome ModifyNativeGatewayServerGroup(const Model::ModifyNativeGatewayServerGroupRequest &request);
                void ModifyNativeGatewayServerGroupAsync(const Model::ModifyNativeGatewayServerGroupRequest& request, const ModifyNativeGatewayServerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNativeGatewayServerGroupOutcomeCallable ModifyNativeGatewayServerGroupCallable(const Model::ModifyNativeGatewayServerGroupRequest& request);

                /**
                 *修改网关服务来源
                 * @param req ModifyNativeGatewayServiceSourceRequest
                 * @return ModifyNativeGatewayServiceSourceOutcome
                 */
                ModifyNativeGatewayServiceSourceOutcome ModifyNativeGatewayServiceSource(const Model::ModifyNativeGatewayServiceSourceRequest &request);
                void ModifyNativeGatewayServiceSourceAsync(const Model::ModifyNativeGatewayServiceSourceRequest& request, const ModifyNativeGatewayServiceSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNativeGatewayServiceSourceOutcomeCallable ModifyNativeGatewayServiceSourceCallable(const Model::ModifyNativeGatewayServiceSourceRequest& request);

                /**
                 *修改云原生API网关实例Kong访问策略，支持白名单或者黑名单。
                 * @param req ModifyNetworkAccessStrategyRequest
                 * @return ModifyNetworkAccessStrategyOutcome
                 */
                ModifyNetworkAccessStrategyOutcome ModifyNetworkAccessStrategy(const Model::ModifyNetworkAccessStrategyRequest &request);
                void ModifyNetworkAccessStrategyAsync(const Model::ModifyNetworkAccessStrategyRequest& request, const ModifyNetworkAccessStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNetworkAccessStrategyOutcomeCallable ModifyNetworkAccessStrategyCallable(const Model::ModifyNetworkAccessStrategyRequest& request);

                /**
                 *修改云原生API网关实例网络基本信息，例如带宽以及描述，只支持修改客户端公网/内网的信息。
                 * @param req ModifyNetworkBasicInfoRequest
                 * @return ModifyNetworkBasicInfoOutcome
                 */
                ModifyNetworkBasicInfoOutcome ModifyNetworkBasicInfo(const Model::ModifyNetworkBasicInfoRequest &request);
                void ModifyNetworkBasicInfoAsync(const Model::ModifyNetworkBasicInfoRequest& request, const ModifyNetworkBasicInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNetworkBasicInfoOutcomeCallable ModifyNetworkBasicInfoCallable(const Model::ModifyNetworkBasicInfoRequest& request);

                /**
                 *修改云原生网关上游实例节点健康状态
                 * @param req ModifyUpstreamNodeStatusRequest
                 * @return ModifyUpstreamNodeStatusOutcome
                 */
                ModifyUpstreamNodeStatusOutcome ModifyUpstreamNodeStatus(const Model::ModifyUpstreamNodeStatusRequest &request);
                void ModifyUpstreamNodeStatusAsync(const Model::ModifyUpstreamNodeStatusRequest& request, const ModifyUpstreamNodeStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUpstreamNodeStatusOutcomeCallable ModifyUpstreamNodeStatusCallable(const Model::ModifyUpstreamNodeStatusRequest& request);

                /**
                 *开启 WAF 防护
                 * @param req OpenWafProtectionRequest
                 * @return OpenWafProtectionOutcome
                 */
                OpenWafProtectionOutcome OpenWafProtection(const Model::OpenWafProtectionRequest &request);
                void OpenWafProtectionAsync(const Model::OpenWafProtectionRequest& request, const OpenWafProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenWafProtectionOutcomeCallable OpenWafProtectionCallable(const Model::OpenWafProtectionRequest& request);

                /**
                 *发布配置文件
                 * @param req PublishConfigFilesRequest
                 * @return PublishConfigFilesOutcome
                 */
                PublishConfigFilesOutcome PublishConfigFiles(const Model::PublishConfigFilesRequest &request);
                void PublishConfigFilesAsync(const Model::PublishConfigFilesRequest& request, const PublishConfigFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PublishConfigFilesOutcomeCallable PublishConfigFilesCallable(const Model::PublishConfigFilesRequest& request);

                /**
                 *重启微服务引擎实例
                 * @param req RestartSREInstanceRequest
                 * @return RestartSREInstanceOutcome
                 */
                RestartSREInstanceOutcome RestartSREInstance(const Model::RestartSREInstanceRequest &request);
                void RestartSREInstanceAsync(const Model::RestartSREInstanceRequest& request, const RestartSREInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestartSREInstanceOutcomeCallable RestartSREInstanceCallable(const Model::RestartSREInstanceRequest& request);

                /**
                 *回滚配置发布
                 * @param req RollbackConfigFileReleasesRequest
                 * @return RollbackConfigFileReleasesOutcome
                 */
                RollbackConfigFileReleasesOutcome RollbackConfigFileReleases(const Model::RollbackConfigFileReleasesRequest &request);
                void RollbackConfigFileReleasesAsync(const Model::RollbackConfigFileReleasesRequest& request, const RollbackConfigFileReleasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RollbackConfigFileReleasesOutcomeCallable RollbackConfigFileReleasesCallable(const Model::RollbackConfigFileReleasesRequest& request);

                /**
                 *弹性伸缩策略批量解绑网关分组
                 * @param req UnbindAutoScalerResourceStrategyFromGroupsRequest
                 * @return UnbindAutoScalerResourceStrategyFromGroupsOutcome
                 */
                UnbindAutoScalerResourceStrategyFromGroupsOutcome UnbindAutoScalerResourceStrategyFromGroups(const Model::UnbindAutoScalerResourceStrategyFromGroupsRequest &request);
                void UnbindAutoScalerResourceStrategyFromGroupsAsync(const Model::UnbindAutoScalerResourceStrategyFromGroupsRequest& request, const UnbindAutoScalerResourceStrategyFromGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindAutoScalerResourceStrategyFromGroupsOutcomeCallable UnbindAutoScalerResourceStrategyFromGroupsCallable(const Model::UnbindAutoScalerResourceStrategyFromGroupsRequest& request);

                /**
                 *修改云原生网关证书信息
                 * @param req UpdateCloudNativeAPIGatewayCertificateInfoRequest
                 * @return UpdateCloudNativeAPIGatewayCertificateInfoOutcome
                 */
                UpdateCloudNativeAPIGatewayCertificateInfoOutcome UpdateCloudNativeAPIGatewayCertificateInfo(const Model::UpdateCloudNativeAPIGatewayCertificateInfoRequest &request);
                void UpdateCloudNativeAPIGatewayCertificateInfoAsync(const Model::UpdateCloudNativeAPIGatewayCertificateInfoRequest& request, const UpdateCloudNativeAPIGatewayCertificateInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateCloudNativeAPIGatewayCertificateInfoOutcomeCallable UpdateCloudNativeAPIGatewayCertificateInfoCallable(const Model::UpdateCloudNativeAPIGatewayCertificateInfoRequest& request);

                /**
                 *修改云原生API网关实例的节点规格信息，例如节点扩缩容或者升降配
                 * @param req UpdateCloudNativeAPIGatewaySpecRequest
                 * @return UpdateCloudNativeAPIGatewaySpecOutcome
                 */
                UpdateCloudNativeAPIGatewaySpecOutcome UpdateCloudNativeAPIGatewaySpec(const Model::UpdateCloudNativeAPIGatewaySpecRequest &request);
                void UpdateCloudNativeAPIGatewaySpecAsync(const Model::UpdateCloudNativeAPIGatewaySpecRequest& request, const UpdateCloudNativeAPIGatewaySpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateCloudNativeAPIGatewaySpecOutcomeCallable UpdateCloudNativeAPIGatewaySpecCallable(const Model::UpdateCloudNativeAPIGatewaySpecRequest& request);

                /**
                 *修改引擎公网访问配置
                 * @param req UpdateEngineInternetAccessRequest
                 * @return UpdateEngineInternetAccessOutcome
                 */
                UpdateEngineInternetAccessOutcome UpdateEngineInternetAccess(const Model::UpdateEngineInternetAccessRequest &request);
                void UpdateEngineInternetAccessAsync(const Model::UpdateEngineInternetAccessRequest& request, const UpdateEngineInternetAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateEngineInternetAccessOutcomeCallable UpdateEngineInternetAccessCallable(const Model::UpdateEngineInternetAccessRequest& request);

                /**
                 *更新云原生网关健康检查配置
                 * @param req UpdateUpstreamHealthCheckConfigRequest
                 * @return UpdateUpstreamHealthCheckConfigOutcome
                 */
                UpdateUpstreamHealthCheckConfigOutcome UpdateUpstreamHealthCheckConfig(const Model::UpdateUpstreamHealthCheckConfigRequest &request);
                void UpdateUpstreamHealthCheckConfigAsync(const Model::UpdateUpstreamHealthCheckConfigRequest& request, const UpdateUpstreamHealthCheckConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateUpstreamHealthCheckConfigOutcomeCallable UpdateUpstreamHealthCheckConfigCallable(const Model::UpdateUpstreamHealthCheckConfigRequest& request);

                /**
                 *更新网关上游实例列表，仅支持IPList服务类型
                 * @param req UpdateUpstreamTargetsRequest
                 * @return UpdateUpstreamTargetsOutcome
                 */
                UpdateUpstreamTargetsOutcome UpdateUpstreamTargets(const Model::UpdateUpstreamTargetsRequest &request);
                void UpdateUpstreamTargetsAsync(const Model::UpdateUpstreamTargetsRequest& request, const UpdateUpstreamTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateUpstreamTargetsOutcomeCallable UpdateUpstreamTargetsCallable(const Model::UpdateUpstreamTargetsRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_TSECLIENT_H_
