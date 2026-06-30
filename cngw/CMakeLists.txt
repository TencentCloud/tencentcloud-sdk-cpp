#
# Copyright (c) 2017-2025 Tencent. All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(cngw_public_header
  include/tencentcloud/cngw/v20230418/CngwClient.h
  )

set(cngw_public_header_model
  include/tencentcloud/cngw/v20230418/model/CreateCloudNativeAPIGatewayMCPToolRequest.h
  include/tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayLLMModelServicesResponse.h
  include/tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayConsumerGroupResponse.h
  include/tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayMCPServerACLRequest.h
  include/tencentcloud/cngw/v20230418/model/DeleteCloudNativeAPIGatewayMCPToolResponse.h
  include/tencentcloud/cngw/v20230418/model/CreateCloudNativeAPIGatewayMCPServerRequest.h
  include/tencentcloud/cngw/v20230418/model/DeleteCloudNativeAPIGatewaySecretKeyRequest.h
  include/tencentcloud/cngw/v20230418/model/AIGWMCPUpstreamInfo.h
  include/tencentcloud/cngw/v20230418/model/AIGWLLMTokenUsageItem.h
  include/tencentcloud/cngw/v20230418/model/DeleteCloudNativeAPIGatewayMCPToolRequest.h
  include/tencentcloud/cngw/v20230418/model/AIGWRedisConfig.h
  include/tencentcloud/cngw/v20230418/model/AIGWIntentRoute.h
  include/tencentcloud/cngw/v20230418/model/AIGWFallbackServiceItem.h
  include/tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewaySecretKeyValueRequest.h
  include/tencentcloud/cngw/v20230418/model/AIGWLatencyPriorityRouteRule.h
  include/tencentcloud/cngw/v20230418/model/AIGWConsumerGroupBrief.h
  include/tencentcloud/cngw/v20230418/model/DeleteCloudNativeAPIGatewayConsumerResponse.h
  include/tencentcloud/cngw/v20230418/model/RemoveCloudNativeAPIGatewayConsumerGroupAuthResponse.h
  include/tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayMCPServerRequest.h
  include/tencentcloud/cngw/v20230418/model/DefaultKongRoute.h
  include/tencentcloud/cngw/v20230418/model/AIGWKVMatch.h
  include/tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayMCPServerAuthResponse.h
  include/tencentcloud/cngw/v20230418/model/DeleteCloudNativeAPIGatewayConsumerGroupRequest.h
  include/tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayLLMModelServiceRequest.h
  include/tencentcloud/cngw/v20230418/model/AIGWACLSubject.h
  include/tencentcloud/cngw/v20230418/model/CloudNativeAPIGatewayLLMModelServiceRouteWeightedStrategy.h
  include/tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewaySecretKeyResponse.h
  include/tencentcloud/cngw/v20230418/model/AddCloudNativeAPIGatewayConsumerInGroupResponse.h
  include/tencentcloud/cngw/v20230418/model/AIGWTagFilter.h
  include/tencentcloud/cngw/v20230418/model/CloudNativeAPIGatewayLLMModelParamCheckInfo.h
  include/tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayMCPToolACLListResponse.h
  include/tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayMCPServerAuthResponse.h
  include/tencentcloud/cngw/v20230418/model/CreateCloudNativeAPIGatewayConsumerGroupRequest.h
  include/tencentcloud/cngw/v20230418/model/CNAPIGwSecretKey.h
  include/tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayLLMModelAPIResponse.h
  include/tencentcloud/cngw/v20230418/model/CNAPIGwConsumer.h
  include/tencentcloud/cngw/v20230418/model/AIGWLogConfig.h
  include/tencentcloud/cngw/v20230418/model/AIGWMCPServerList.h
  include/tencentcloud/cngw/v20230418/model/CreateCloudNativeAPIGatewayLLMModelServiceRequest.h
  include/tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayLLMModelServiceResponse.h
  include/tencentcloud/cngw/v20230418/model/CreateCloudNativeAPIGatewayLLMModelServiceResponse.h
  include/tencentcloud/cngw/v20230418/model/AIGWTopConsumersItem.h
  include/tencentcloud/cngw/v20230418/model/RemoveCloudNativeAPIGatewayConsumerInGroupRequest.h
  include/tencentcloud/cngw/v20230418/model/AIGWMCPServerAuthResult.h
  include/tencentcloud/cngw/v20230418/model/CreateCloudNativeAPIGatewayLLMModelAPIRequest.h
  include/tencentcloud/cngw/v20230418/model/CNAPIGwMCPToolParam.h
  include/tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayMCPServerACLResponse.h
  include/tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayConsumerGroupRequest.h
  include/tencentcloud/cngw/v20230418/model/CreateCloudNativeAPIGatewayConsumerRequest.h
  include/tencentcloud/cngw/v20230418/model/CloudNativeAPIGatewayLLMModelAPI.h
  include/tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayLLMModelAPIsRequest.h
  include/tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayMCPServerACLRequest.h
  include/tencentcloud/cngw/v20230418/model/CNAPIGwCreateCommonResult.h
  include/tencentcloud/cngw/v20230418/model/CloudNativeAPIGatewayLLMModelServiceRoute.h
  include/tencentcloud/cngw/v20230418/model/CNAPIGwConsumerGroup.h
  include/tencentcloud/cngw/v20230418/model/AIGWMCPServerACLResult.h
  include/tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayConsumerRequest.h
  include/tencentcloud/cngw/v20230418/model/AIGWLogDesensitizeConfig.h
  include/tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewaySecretKeyResponse.h
  include/tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayConsumerResponse.h
  include/tencentcloud/cngw/v20230418/model/AIGWMCPSessionConfig.h
  include/tencentcloud/cngw/v20230418/model/DeleteCloudNativeAPIGatewayLLMModelServiceResponse.h
  include/tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayMCPToolListRequest.h
  include/tencentcloud/cngw/v20230418/model/DeleteCloudNativeAPIGatewayMCPServerResponse.h
  include/tencentcloud/cngw/v20230418/model/AIGWIntentRouteRule.h
  include/tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayMCPToolRequest.h
  include/tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayMCPToolACLListRequest.h
  include/tencentcloud/cngw/v20230418/model/ListCloudNativeAPIGatewayLLMModelAPI.h
  include/tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayMCPToolResponse.h
  include/tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayMCPToolACLResponse.h
  include/tencentcloud/cngw/v20230418/model/CreateCloudNativeAPIGatewayConsumerGroupResponse.h
  include/tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayLLMModelAPIResponse.h
  include/tencentcloud/cngw/v20230418/model/AIGWMCPUpstreamInfoDetail.h
  include/tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayMCPServerStatusResponse.h
  include/tencentcloud/cngw/v20230418/model/BindCloudNativeAPIGatewaySecretKeyRequest.h
  include/tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayConsumerResponse.h
  include/tencentcloud/cngw/v20230418/model/DeleteCloudNativeAPIGatewayMCPServerRequest.h
  include/tencentcloud/cngw/v20230418/model/DeleteCloudNativeAPIGatewaySecretKeyResponse.h
  include/tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayMCPToolRequest.h
  include/tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayLLMTokenUsageStatisticsRequest.h
  include/tencentcloud/cngw/v20230418/model/CreateCloudNativeAPIGatewaySecretKeyRequest.h
  include/tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayMCPServerResponse.h
  include/tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayLLMModelServicesRequest.h
  include/tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayMCPToolACLRequest.h
  include/tencentcloud/cngw/v20230418/model/CreateCloudNativeAPIGatewayMCPServerResponse.h
  include/tencentcloud/cngw/v20230418/model/AIGWHealthCheckSetting.h
  include/tencentcloud/cngw/v20230418/model/AIGWLLMTokenUsageStatisticsResult.h
  include/tencentcloud/cngw/v20230418/model/DeleteCloudNativeAPIGatewayLLMModelAPIRequest.h
  include/tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayMCPServerStatusRequest.h
  include/tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayMCPToolResponse.h
  include/tencentcloud/cngw/v20230418/model/RemoveCloudNativeAPIGatewayConsumerInGroupResponse.h
  include/tencentcloud/cngw/v20230418/model/AIGWCrossServiceFallbackConfig.h
  include/tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayLLMModelAPIsResponse.h
  include/tencentcloud/cngw/v20230418/model/AddCloudNativeAPIGatewayConsumerInGroupRequest.h
  include/tencentcloud/cngw/v20230418/model/CreateCloudNativeAPIGatewayConsumerResponse.h
  include/tencentcloud/cngw/v20230418/model/CloudNativeAPIGatewayLLMModelServiceRouteModelNameStrategy.h
  include/tencentcloud/cngw/v20230418/model/DeleteCloudNativeAPIGatewayLLMModelAPIResponse.h
  include/tencentcloud/cngw/v20230418/model/UnbindCloudNativeAPIGatewaySecretKeyResponse.h
  include/tencentcloud/cngw/v20230418/model/AIGWLLMTokenUsageListResult.h
  include/tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewaySecretKeyRequest.h
  include/tencentcloud/cngw/v20230418/model/Filter.h
  include/tencentcloud/cngw/v20230418/model/CNAPIGwMCPTool.h
  include/tencentcloud/cngw/v20230418/model/AIGWMCPToolACLItem.h
  include/tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayLLMTokenUsageStatisticsResponse.h
  include/tencentcloud/cngw/v20230418/model/ListCloudNativeAPIGatewayLLMModelService.h
  include/tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayMCPServerACLResponse.h
  include/tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayMCPServerResponse.h
  include/tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayLLMModelServiceResponse.h
  include/tencentcloud/cngw/v20230418/model/AIGWLLMQuotaFallbackTrigger.h
  include/tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewaySecretKeyRequest.h
  include/tencentcloud/cngw/v20230418/model/AIGWMCPToolACLListResult.h
  include/tencentcloud/cngw/v20230418/model/AddCloudNativeAPIGatewayConsumerGroupAuthResponse.h
  include/tencentcloud/cngw/v20230418/model/DeleteCloudNativeAPIGatewayConsumerRequest.h
  include/tencentcloud/cngw/v20230418/model/CloudNativeAPIGatewayLLMModelFallbackRule.h
  include/tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayMCPToolStatusResponse.h
  include/tencentcloud/cngw/v20230418/model/AIGWLLMQuotaLimit.h
  include/tencentcloud/cngw/v20230418/model/AIGWCustomDesensitizeRule.h
  include/tencentcloud/cngw/v20230418/model/CNAPIGwMCPToolList.h
  include/tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayLLMModelAPIRequest.h
  include/tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayConsumerGroupRequest.h
  include/tencentcloud/cngw/v20230418/model/UnbindCloudNativeAPIGatewaySecretKeyRequest.h
  include/tencentcloud/cngw/v20230418/model/BindCloudNativeAPIGatewaySecretKeyResponse.h
  include/tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayMCPToolListResponse.h
  include/tencentcloud/cngw/v20230418/model/CloudNativeAPIGatewayLLMModelService.h
  include/tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayConsumerRequest.h
  include/tencentcloud/cngw/v20230418/model/RemoveCloudNativeAPIGatewayConsumerGroupAuthRequest.h
  include/tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayMCPServerListRequest.h
  include/tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayConsumerGroupResponse.h
  include/tencentcloud/cngw/v20230418/model/AIGWLatencyPriorityConfig.h
  include/tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayMCPServerAuthRequest.h
  include/tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayMCPServerRequest.h
  include/tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayLLMTokenUsageListRequest.h
  include/tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayMCPToolStatusRequest.h
  include/tencentcloud/cngw/v20230418/model/AddCloudNativeAPIGatewayConsumerGroupAuthRequest.h
  include/tencentcloud/cngw/v20230418/model/AIGWForwardDesensitizeConfig.h
  include/tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewaySecretKeyValueResponse.h
  include/tencentcloud/cngw/v20230418/model/CreateCloudNativeAPIGatewayMCPToolResponse.h
  include/tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayLLMModelServiceRequest.h
  include/tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayMCPServerListResponse.h
  include/tencentcloud/cngw/v20230418/model/CreateCloudNativeAPIGatewayLLMModelAPIResponse.h
  include/tencentcloud/cngw/v20230418/model/AIGWMCPServer.h
  include/tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayMCPServerAuthRequest.h
  include/tencentcloud/cngw/v20230418/model/DeleteCloudNativeAPIGatewayLLMModelServiceRequest.h
  include/tencentcloud/cngw/v20230418/model/DeleteCloudNativeAPIGatewayConsumerGroupResponse.h
  include/tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayLLMModelAPIRequest.h
  include/tencentcloud/cngw/v20230418/model/CreateCloudNativeAPIGatewaySecretKeyResponse.h
  include/tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayLLMTokenUsageListResponse.h
  )

set(cngw_src
  src/v20230418/CngwClient.cpp
  src/v20230418/model/CreateCloudNativeAPIGatewayMCPToolRequest.cpp
  src/v20230418/model/DescribeCloudNativeAPIGatewayLLMModelServicesResponse.cpp
  src/v20230418/model/ModifyCloudNativeAPIGatewayConsumerGroupResponse.cpp
  src/v20230418/model/DescribeCloudNativeAPIGatewayMCPServerACLRequest.cpp
  src/v20230418/model/DeleteCloudNativeAPIGatewayMCPToolResponse.cpp
  src/v20230418/model/CreateCloudNativeAPIGatewayMCPServerRequest.cpp
  src/v20230418/model/DeleteCloudNativeAPIGatewaySecretKeyRequest.cpp
  src/v20230418/model/AIGWMCPUpstreamInfo.cpp
  src/v20230418/model/AIGWLLMTokenUsageItem.cpp
  src/v20230418/model/DeleteCloudNativeAPIGatewayMCPToolRequest.cpp
  src/v20230418/model/AIGWRedisConfig.cpp
  src/v20230418/model/AIGWIntentRoute.cpp
  src/v20230418/model/AIGWFallbackServiceItem.cpp
  src/v20230418/model/DescribeCloudNativeAPIGatewaySecretKeyValueRequest.cpp
  src/v20230418/model/AIGWLatencyPriorityRouteRule.cpp
  src/v20230418/model/AIGWConsumerGroupBrief.cpp
  src/v20230418/model/DeleteCloudNativeAPIGatewayConsumerResponse.cpp
  src/v20230418/model/RemoveCloudNativeAPIGatewayConsumerGroupAuthResponse.cpp
  src/v20230418/model/ModifyCloudNativeAPIGatewayMCPServerRequest.cpp
  src/v20230418/model/DefaultKongRoute.cpp
  src/v20230418/model/AIGWKVMatch.cpp
  src/v20230418/model/DescribeCloudNativeAPIGatewayMCPServerAuthResponse.cpp
  src/v20230418/model/DeleteCloudNativeAPIGatewayConsumerGroupRequest.cpp
  src/v20230418/model/DescribeCloudNativeAPIGatewayLLMModelServiceRequest.cpp
  src/v20230418/model/AIGWACLSubject.cpp
  src/v20230418/model/CloudNativeAPIGatewayLLMModelServiceRouteWeightedStrategy.cpp
  src/v20230418/model/ModifyCloudNativeAPIGatewaySecretKeyResponse.cpp
  src/v20230418/model/AddCloudNativeAPIGatewayConsumerInGroupResponse.cpp
  src/v20230418/model/AIGWTagFilter.cpp
  src/v20230418/model/CloudNativeAPIGatewayLLMModelParamCheckInfo.cpp
  src/v20230418/model/DescribeCloudNativeAPIGatewayMCPToolACLListResponse.cpp
  src/v20230418/model/ModifyCloudNativeAPIGatewayMCPServerAuthResponse.cpp
  src/v20230418/model/CreateCloudNativeAPIGatewayConsumerGroupRequest.cpp
  src/v20230418/model/CNAPIGwSecretKey.cpp
  src/v20230418/model/ModifyCloudNativeAPIGatewayLLMModelAPIResponse.cpp
  src/v20230418/model/CNAPIGwConsumer.cpp
  src/v20230418/model/AIGWLogConfig.cpp
  src/v20230418/model/AIGWMCPServerList.cpp
  src/v20230418/model/CreateCloudNativeAPIGatewayLLMModelServiceRequest.cpp
  src/v20230418/model/ModifyCloudNativeAPIGatewayLLMModelServiceResponse.cpp
  src/v20230418/model/CreateCloudNativeAPIGatewayLLMModelServiceResponse.cpp
  src/v20230418/model/AIGWTopConsumersItem.cpp
  src/v20230418/model/RemoveCloudNativeAPIGatewayConsumerInGroupRequest.cpp
  src/v20230418/model/AIGWMCPServerAuthResult.cpp
  src/v20230418/model/CreateCloudNativeAPIGatewayLLMModelAPIRequest.cpp
  src/v20230418/model/CNAPIGwMCPToolParam.cpp
  src/v20230418/model/ModifyCloudNativeAPIGatewayMCPServerACLResponse.cpp
  src/v20230418/model/DescribeCloudNativeAPIGatewayConsumerGroupRequest.cpp
  src/v20230418/model/CreateCloudNativeAPIGatewayConsumerRequest.cpp
  src/v20230418/model/CloudNativeAPIGatewayLLMModelAPI.cpp
  src/v20230418/model/DescribeCloudNativeAPIGatewayLLMModelAPIsRequest.cpp
  src/v20230418/model/ModifyCloudNativeAPIGatewayMCPServerACLRequest.cpp
  src/v20230418/model/CNAPIGwCreateCommonResult.cpp
  src/v20230418/model/CloudNativeAPIGatewayLLMModelServiceRoute.cpp
  src/v20230418/model/CNAPIGwConsumerGroup.cpp
  src/v20230418/model/AIGWMCPServerACLResult.cpp
  src/v20230418/model/ModifyCloudNativeAPIGatewayConsumerRequest.cpp
  src/v20230418/model/AIGWLogDesensitizeConfig.cpp
  src/v20230418/model/DescribeCloudNativeAPIGatewaySecretKeyResponse.cpp
  src/v20230418/model/DescribeCloudNativeAPIGatewayConsumerResponse.cpp
  src/v20230418/model/AIGWMCPSessionConfig.cpp
  src/v20230418/model/DeleteCloudNativeAPIGatewayLLMModelServiceResponse.cpp
  src/v20230418/model/DescribeCloudNativeAPIGatewayMCPToolListRequest.cpp
  src/v20230418/model/DeleteCloudNativeAPIGatewayMCPServerResponse.cpp
  src/v20230418/model/AIGWIntentRouteRule.cpp
  src/v20230418/model/ModifyCloudNativeAPIGatewayMCPToolRequest.cpp
  src/v20230418/model/DescribeCloudNativeAPIGatewayMCPToolACLListRequest.cpp
  src/v20230418/model/ListCloudNativeAPIGatewayLLMModelAPI.cpp
  src/v20230418/model/DescribeCloudNativeAPIGatewayMCPToolResponse.cpp
  src/v20230418/model/ModifyCloudNativeAPIGatewayMCPToolACLResponse.cpp
  src/v20230418/model/CreateCloudNativeAPIGatewayConsumerGroupResponse.cpp
  src/v20230418/model/DescribeCloudNativeAPIGatewayLLMModelAPIResponse.cpp
  src/v20230418/model/AIGWMCPUpstreamInfoDetail.cpp
  src/v20230418/model/ModifyCloudNativeAPIGatewayMCPServerStatusResponse.cpp
  src/v20230418/model/BindCloudNativeAPIGatewaySecretKeyRequest.cpp
  src/v20230418/model/ModifyCloudNativeAPIGatewayConsumerResponse.cpp
  src/v20230418/model/DeleteCloudNativeAPIGatewayMCPServerRequest.cpp
  src/v20230418/model/DeleteCloudNativeAPIGatewaySecretKeyResponse.cpp
  src/v20230418/model/DescribeCloudNativeAPIGatewayMCPToolRequest.cpp
  src/v20230418/model/DescribeCloudNativeAPIGatewayLLMTokenUsageStatisticsRequest.cpp
  src/v20230418/model/CreateCloudNativeAPIGatewaySecretKeyRequest.cpp
  src/v20230418/model/DescribeCloudNativeAPIGatewayMCPServerResponse.cpp
  src/v20230418/model/DescribeCloudNativeAPIGatewayLLMModelServicesRequest.cpp
  src/v20230418/model/ModifyCloudNativeAPIGatewayMCPToolACLRequest.cpp
  src/v20230418/model/CreateCloudNativeAPIGatewayMCPServerResponse.cpp
  src/v20230418/model/AIGWHealthCheckSetting.cpp
  src/v20230418/model/AIGWLLMTokenUsageStatisticsResult.cpp
  src/v20230418/model/DeleteCloudNativeAPIGatewayLLMModelAPIRequest.cpp
  src/v20230418/model/ModifyCloudNativeAPIGatewayMCPServerStatusRequest.cpp
  src/v20230418/model/ModifyCloudNativeAPIGatewayMCPToolResponse.cpp
  src/v20230418/model/RemoveCloudNativeAPIGatewayConsumerInGroupResponse.cpp
  src/v20230418/model/AIGWCrossServiceFallbackConfig.cpp
  src/v20230418/model/DescribeCloudNativeAPIGatewayLLMModelAPIsResponse.cpp
  src/v20230418/model/AddCloudNativeAPIGatewayConsumerInGroupRequest.cpp
  src/v20230418/model/CreateCloudNativeAPIGatewayConsumerResponse.cpp
  src/v20230418/model/CloudNativeAPIGatewayLLMModelServiceRouteModelNameStrategy.cpp
  src/v20230418/model/DeleteCloudNativeAPIGatewayLLMModelAPIResponse.cpp
  src/v20230418/model/UnbindCloudNativeAPIGatewaySecretKeyResponse.cpp
  src/v20230418/model/AIGWLLMTokenUsageListResult.cpp
  src/v20230418/model/ModifyCloudNativeAPIGatewaySecretKeyRequest.cpp
  src/v20230418/model/Filter.cpp
  src/v20230418/model/CNAPIGwMCPTool.cpp
  src/v20230418/model/AIGWMCPToolACLItem.cpp
  src/v20230418/model/DescribeCloudNativeAPIGatewayLLMTokenUsageStatisticsResponse.cpp
  src/v20230418/model/ListCloudNativeAPIGatewayLLMModelService.cpp
  src/v20230418/model/DescribeCloudNativeAPIGatewayMCPServerACLResponse.cpp
  src/v20230418/model/ModifyCloudNativeAPIGatewayMCPServerResponse.cpp
  src/v20230418/model/DescribeCloudNativeAPIGatewayLLMModelServiceResponse.cpp
  src/v20230418/model/AIGWLLMQuotaFallbackTrigger.cpp
  src/v20230418/model/DescribeCloudNativeAPIGatewaySecretKeyRequest.cpp
  src/v20230418/model/AIGWMCPToolACLListResult.cpp
  src/v20230418/model/AddCloudNativeAPIGatewayConsumerGroupAuthResponse.cpp
  src/v20230418/model/DeleteCloudNativeAPIGatewayConsumerRequest.cpp
  src/v20230418/model/CloudNativeAPIGatewayLLMModelFallbackRule.cpp
  src/v20230418/model/ModifyCloudNativeAPIGatewayMCPToolStatusResponse.cpp
  src/v20230418/model/AIGWLLMQuotaLimit.cpp
  src/v20230418/model/AIGWCustomDesensitizeRule.cpp
  src/v20230418/model/CNAPIGwMCPToolList.cpp
  src/v20230418/model/DescribeCloudNativeAPIGatewayLLMModelAPIRequest.cpp
  src/v20230418/model/ModifyCloudNativeAPIGatewayConsumerGroupRequest.cpp
  src/v20230418/model/UnbindCloudNativeAPIGatewaySecretKeyRequest.cpp
  src/v20230418/model/BindCloudNativeAPIGatewaySecretKeyResponse.cpp
  src/v20230418/model/DescribeCloudNativeAPIGatewayMCPToolListResponse.cpp
  src/v20230418/model/CloudNativeAPIGatewayLLMModelService.cpp
  src/v20230418/model/DescribeCloudNativeAPIGatewayConsumerRequest.cpp
  src/v20230418/model/RemoveCloudNativeAPIGatewayConsumerGroupAuthRequest.cpp
  src/v20230418/model/DescribeCloudNativeAPIGatewayMCPServerListRequest.cpp
  src/v20230418/model/DescribeCloudNativeAPIGatewayConsumerGroupResponse.cpp
  src/v20230418/model/AIGWLatencyPriorityConfig.cpp
  src/v20230418/model/ModifyCloudNativeAPIGatewayMCPServerAuthRequest.cpp
  src/v20230418/model/DescribeCloudNativeAPIGatewayMCPServerRequest.cpp
  src/v20230418/model/DescribeCloudNativeAPIGatewayLLMTokenUsageListRequest.cpp
  src/v20230418/model/ModifyCloudNativeAPIGatewayMCPToolStatusRequest.cpp
  src/v20230418/model/AddCloudNativeAPIGatewayConsumerGroupAuthRequest.cpp
  src/v20230418/model/AIGWForwardDesensitizeConfig.cpp
  src/v20230418/model/DescribeCloudNativeAPIGatewaySecretKeyValueResponse.cpp
  src/v20230418/model/CreateCloudNativeAPIGatewayMCPToolResponse.cpp
  src/v20230418/model/ModifyCloudNativeAPIGatewayLLMModelServiceRequest.cpp
  src/v20230418/model/DescribeCloudNativeAPIGatewayMCPServerListResponse.cpp
  src/v20230418/model/CreateCloudNativeAPIGatewayLLMModelAPIResponse.cpp
  src/v20230418/model/AIGWMCPServer.cpp
  src/v20230418/model/DescribeCloudNativeAPIGatewayMCPServerAuthRequest.cpp
  src/v20230418/model/DeleteCloudNativeAPIGatewayLLMModelServiceRequest.cpp
  src/v20230418/model/DeleteCloudNativeAPIGatewayConsumerGroupResponse.cpp
  src/v20230418/model/ModifyCloudNativeAPIGatewayLLMModelAPIRequest.cpp
  src/v20230418/model/CreateCloudNativeAPIGatewaySecretKeyResponse.cpp
  src/v20230418/model/DescribeCloudNativeAPIGatewayLLMTokenUsageListResponse.cpp
  )

set(cngw_include
    include/tencentcloud/cngw
  )

add_library(cngw ${LIB_TYPE}
  ${cngw_public_header}
  ${cngw_public_header_model}
  ${cngw_src})

set_target_properties(cngw
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cngw
  )

target_include_directories(cngw
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(cngw
  core)

#install(FILES ${cngw_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cngw/v20230418)
#install(FILES ${cngw_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cngw/v20230418/model)
install(DIRECTORY ${cngw_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS cngw
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
