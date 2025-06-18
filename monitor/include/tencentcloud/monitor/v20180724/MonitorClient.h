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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MONITORCLIENT_H_
#define TENCENTCLOUD_MONITOR_V20180724_MONITORCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/monitor/v20180724/model/BindPrometheusManagedGrafanaRequest.h>
#include <tencentcloud/monitor/v20180724/model/BindPrometheusManagedGrafanaResponse.h>
#include <tencentcloud/monitor/v20180724/model/BindingPolicyObjectRequest.h>
#include <tencentcloud/monitor/v20180724/model/BindingPolicyObjectResponse.h>
#include <tencentcloud/monitor/v20180724/model/BindingPolicyTagRequest.h>
#include <tencentcloud/monitor/v20180724/model/BindingPolicyTagResponse.h>
#include <tencentcloud/monitor/v20180724/model/CleanGrafanaInstanceRequest.h>
#include <tencentcloud/monitor/v20180724/model/CleanGrafanaInstanceResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreateAlarmNoticeRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreateAlarmNoticeResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreateAlarmPolicyRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreateAlarmPolicyResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreateAlarmShieldRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreateAlarmShieldResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreateAlertRuleRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreateAlertRuleResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreateConditionsTemplateRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreateConditionsTemplateResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreateExporterIntegrationRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreateExporterIntegrationResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreateExternalClusterRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreateExternalClusterResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreateGrafanaInstanceRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreateGrafanaInstanceResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreateGrafanaIntegrationRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreateGrafanaIntegrationResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreateGrafanaNotificationChannelRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreateGrafanaNotificationChannelResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreatePolicyGroupRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreatePolicyGroupResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreatePrometheusAgentRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreatePrometheusAgentResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreatePrometheusAlertGroupRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreatePrometheusAlertGroupResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreatePrometheusAlertPolicyRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreatePrometheusAlertPolicyResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreatePrometheusClusterAgentRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreatePrometheusClusterAgentResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreatePrometheusConfigRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreatePrometheusConfigResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreatePrometheusGlobalNotificationRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreatePrometheusGlobalNotificationResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreatePrometheusMultiTenantInstancePostPayModeRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreatePrometheusMultiTenantInstancePostPayModeResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreatePrometheusRecordRuleYamlRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreatePrometheusRecordRuleYamlResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreatePrometheusScrapeJobRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreatePrometheusScrapeJobResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreatePrometheusTempRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreatePrometheusTempResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreateRecordingRuleRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreateRecordingRuleResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreateSSOAccountRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreateSSOAccountResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreateServiceDiscoveryRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreateServiceDiscoveryResponse.h>
#include <tencentcloud/monitor/v20180724/model/DeleteAlarmNoticesRequest.h>
#include <tencentcloud/monitor/v20180724/model/DeleteAlarmNoticesResponse.h>
#include <tencentcloud/monitor/v20180724/model/DeleteAlarmPolicyRequest.h>
#include <tencentcloud/monitor/v20180724/model/DeleteAlarmPolicyResponse.h>
#include <tencentcloud/monitor/v20180724/model/DeleteAlarmShieldsRequest.h>
#include <tencentcloud/monitor/v20180724/model/DeleteAlarmShieldsResponse.h>
#include <tencentcloud/monitor/v20180724/model/DeleteAlertRulesRequest.h>
#include <tencentcloud/monitor/v20180724/model/DeleteAlertRulesResponse.h>
#include <tencentcloud/monitor/v20180724/model/DeleteExporterIntegrationRequest.h>
#include <tencentcloud/monitor/v20180724/model/DeleteExporterIntegrationResponse.h>
#include <tencentcloud/monitor/v20180724/model/DeleteGrafanaInstanceRequest.h>
#include <tencentcloud/monitor/v20180724/model/DeleteGrafanaInstanceResponse.h>
#include <tencentcloud/monitor/v20180724/model/DeleteGrafanaIntegrationRequest.h>
#include <tencentcloud/monitor/v20180724/model/DeleteGrafanaIntegrationResponse.h>
#include <tencentcloud/monitor/v20180724/model/DeleteGrafanaNotificationChannelRequest.h>
#include <tencentcloud/monitor/v20180724/model/DeleteGrafanaNotificationChannelResponse.h>
#include <tencentcloud/monitor/v20180724/model/DeletePolicyGroupRequest.h>
#include <tencentcloud/monitor/v20180724/model/DeletePolicyGroupResponse.h>
#include <tencentcloud/monitor/v20180724/model/DeletePrometheusAlertGroupsRequest.h>
#include <tencentcloud/monitor/v20180724/model/DeletePrometheusAlertGroupsResponse.h>
#include <tencentcloud/monitor/v20180724/model/DeletePrometheusAlertPolicyRequest.h>
#include <tencentcloud/monitor/v20180724/model/DeletePrometheusAlertPolicyResponse.h>
#include <tencentcloud/monitor/v20180724/model/DeletePrometheusClusterAgentRequest.h>
#include <tencentcloud/monitor/v20180724/model/DeletePrometheusClusterAgentResponse.h>
#include <tencentcloud/monitor/v20180724/model/DeletePrometheusConfigRequest.h>
#include <tencentcloud/monitor/v20180724/model/DeletePrometheusConfigResponse.h>
#include <tencentcloud/monitor/v20180724/model/DeletePrometheusRecordRuleYamlRequest.h>
#include <tencentcloud/monitor/v20180724/model/DeletePrometheusRecordRuleYamlResponse.h>
#include <tencentcloud/monitor/v20180724/model/DeletePrometheusScrapeJobsRequest.h>
#include <tencentcloud/monitor/v20180724/model/DeletePrometheusScrapeJobsResponse.h>
#include <tencentcloud/monitor/v20180724/model/DeletePrometheusTempRequest.h>
#include <tencentcloud/monitor/v20180724/model/DeletePrometheusTempResponse.h>
#include <tencentcloud/monitor/v20180724/model/DeletePrometheusTempSyncRequest.h>
#include <tencentcloud/monitor/v20180724/model/DeletePrometheusTempSyncResponse.h>
#include <tencentcloud/monitor/v20180724/model/DeleteRecordingRulesRequest.h>
#include <tencentcloud/monitor/v20180724/model/DeleteRecordingRulesResponse.h>
#include <tencentcloud/monitor/v20180724/model/DeleteSSOAccountRequest.h>
#include <tencentcloud/monitor/v20180724/model/DeleteSSOAccountResponse.h>
#include <tencentcloud/monitor/v20180724/model/DeleteServiceDiscoveryRequest.h>
#include <tencentcloud/monitor/v20180724/model/DeleteServiceDiscoveryResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAccidentEventListRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAccidentEventListResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmEventsRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmEventsResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmHistoriesRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmHistoriesResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmMetricsRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmMetricsResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmNoticeRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmNoticeResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmNoticeCallbacksRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmNoticeCallbacksResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmNoticesRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmNoticesResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmPoliciesRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmPoliciesResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmPolicyRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmPolicyResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmSmsQuotaRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmSmsQuotaResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlertRulesRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlertRulesResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAllNamespacesRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAllNamespacesResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeBaseMetricsRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeBaseMetricsResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeBasicAlarmListRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeBasicAlarmListResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeBindingPolicyObjectListRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeBindingPolicyObjectListResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeClusterAgentCreatingProgressRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeClusterAgentCreatingProgressResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeConditionsTemplateListRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeConditionsTemplateListResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeDNSConfigRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeDNSConfigResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeExporterIntegrationsRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeExporterIntegrationsResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeExternalClusterRegisterCommandRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeExternalClusterRegisterCommandResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeExternalClusterUninstallCommandRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeExternalClusterUninstallCommandResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeGrafanaChannelsRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeGrafanaChannelsResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeGrafanaConfigRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeGrafanaConfigResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeGrafanaEnvironmentsRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeGrafanaEnvironmentsResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeGrafanaInstancesRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeGrafanaInstancesResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeGrafanaIntegrationsRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeGrafanaIntegrationsResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeGrafanaNotificationChannelsRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeGrafanaNotificationChannelsResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeGrafanaWhiteListRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeGrafanaWhiteListResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeInstalledPluginsRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeInstalledPluginsResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeMonitorResourceInfoRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeMonitorResourceInfoResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeMonitorTypesRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeMonitorTypesResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePhoneAlarmFlowTotalCountRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePhoneAlarmFlowTotalCountResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePluginOverviewsRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePluginOverviewsResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyConditionListRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyConditionListResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupInfoRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupInfoResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupListRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupListResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyObjectCountRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyObjectCountResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeProductEventListRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeProductEventListResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeProductListRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeProductListResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusAgentInstancesRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusAgentInstancesResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusAgentsRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusAgentsResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusAlertGroupsRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusAlertGroupsResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusAlertPolicyRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusAlertPolicyResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusClusterAgentsRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusClusterAgentsResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusConfigRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusConfigResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusGlobalConfigRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusGlobalConfigResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusGlobalNotificationRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusGlobalNotificationResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusInstanceDetailRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusInstanceDetailResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusInstanceInitStatusRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusInstanceInitStatusResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusInstanceUsageRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusInstanceUsageResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusInstancesRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusInstancesResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusInstancesOverviewRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusInstancesOverviewResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusIntegrationMetricsRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusIntegrationMetricsResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusRecordRulesRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusRecordRulesResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusRegionsRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusRegionsResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusScrapeJobsRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusScrapeJobsResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusTargetsTMPRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusTargetsTMPResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusTempRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusTempResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusTempSyncRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusTempSyncResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusZonesRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusZonesResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeRecordingRulesRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeRecordingRulesResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeRemoteURLsRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeRemoteURLsResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeSSOAccountRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeSSOAccountResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeServiceDiscoveryRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeServiceDiscoveryResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeStatisticDataRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeStatisticDataResponse.h>
#include <tencentcloud/monitor/v20180724/model/DestroyPrometheusInstanceRequest.h>
#include <tencentcloud/monitor/v20180724/model/DestroyPrometheusInstanceResponse.h>
#include <tencentcloud/monitor/v20180724/model/EnableGrafanaInternetRequest.h>
#include <tencentcloud/monitor/v20180724/model/EnableGrafanaInternetResponse.h>
#include <tencentcloud/monitor/v20180724/model/EnableGrafanaSSORequest.h>
#include <tencentcloud/monitor/v20180724/model/EnableGrafanaSSOResponse.h>
#include <tencentcloud/monitor/v20180724/model/EnableSSOCamCheckRequest.h>
#include <tencentcloud/monitor/v20180724/model/EnableSSOCamCheckResponse.h>
#include <tencentcloud/monitor/v20180724/model/ExportPrometheusReadOnlyDynamicAPIRequest.h>
#include <tencentcloud/monitor/v20180724/model/ExportPrometheusReadOnlyDynamicAPIResponse.h>
#include <tencentcloud/monitor/v20180724/model/GetMonitorDataRequest.h>
#include <tencentcloud/monitor/v20180724/model/GetMonitorDataResponse.h>
#include <tencentcloud/monitor/v20180724/model/GetPrometheusAgentManagementCommandRequest.h>
#include <tencentcloud/monitor/v20180724/model/GetPrometheusAgentManagementCommandResponse.h>
#include <tencentcloud/monitor/v20180724/model/GetTopNMonitorDataRequest.h>
#include <tencentcloud/monitor/v20180724/model/GetTopNMonitorDataResponse.h>
#include <tencentcloud/monitor/v20180724/model/InstallPluginsRequest.h>
#include <tencentcloud/monitor/v20180724/model/InstallPluginsResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmNoticeRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmNoticeResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmPolicyConditionRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmPolicyConditionResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmPolicyInfoRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmPolicyInfoResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmPolicyNoticeRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmPolicyNoticeResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmPolicyStatusRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmPolicyStatusResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmPolicyTasksRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmPolicyTasksResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmReceiversRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmReceiversResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyGrafanaInstanceRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyGrafanaInstanceResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyPolicyGroupRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyPolicyGroupResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyPrometheusAgentExternalLabelsRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyPrometheusAgentExternalLabelsResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyPrometheusAlertPolicyRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyPrometheusAlertPolicyResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyPrometheusConfigRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyPrometheusConfigResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyPrometheusGlobalNotificationRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyPrometheusGlobalNotificationResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyPrometheusInstanceAttributesRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyPrometheusInstanceAttributesResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyPrometheusRecordRuleYamlRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyPrometheusRecordRuleYamlResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyPrometheusTempRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyPrometheusTempResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyRemoteURLsRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyRemoteURLsResponse.h>
#include <tencentcloud/monitor/v20180724/model/ResumeGrafanaInstanceRequest.h>
#include <tencentcloud/monitor/v20180724/model/ResumeGrafanaInstanceResponse.h>
#include <tencentcloud/monitor/v20180724/model/RunPrometheusInstanceRequest.h>
#include <tencentcloud/monitor/v20180724/model/RunPrometheusInstanceResponse.h>
#include <tencentcloud/monitor/v20180724/model/SetDefaultAlarmPolicyRequest.h>
#include <tencentcloud/monitor/v20180724/model/SetDefaultAlarmPolicyResponse.h>
#include <tencentcloud/monitor/v20180724/model/SyncPrometheusTempRequest.h>
#include <tencentcloud/monitor/v20180724/model/SyncPrometheusTempResponse.h>
#include <tencentcloud/monitor/v20180724/model/TerminatePrometheusInstancesRequest.h>
#include <tencentcloud/monitor/v20180724/model/TerminatePrometheusInstancesResponse.h>
#include <tencentcloud/monitor/v20180724/model/UnBindingAllPolicyObjectRequest.h>
#include <tencentcloud/monitor/v20180724/model/UnBindingAllPolicyObjectResponse.h>
#include <tencentcloud/monitor/v20180724/model/UnBindingPolicyObjectRequest.h>
#include <tencentcloud/monitor/v20180724/model/UnBindingPolicyObjectResponse.h>
#include <tencentcloud/monitor/v20180724/model/UnbindPrometheusManagedGrafanaRequest.h>
#include <tencentcloud/monitor/v20180724/model/UnbindPrometheusManagedGrafanaResponse.h>
#include <tencentcloud/monitor/v20180724/model/UninstallGrafanaDashboardRequest.h>
#include <tencentcloud/monitor/v20180724/model/UninstallGrafanaDashboardResponse.h>
#include <tencentcloud/monitor/v20180724/model/UninstallGrafanaPluginsRequest.h>
#include <tencentcloud/monitor/v20180724/model/UninstallGrafanaPluginsResponse.h>
#include <tencentcloud/monitor/v20180724/model/UpdateAlertRuleRequest.h>
#include <tencentcloud/monitor/v20180724/model/UpdateAlertRuleResponse.h>
#include <tencentcloud/monitor/v20180724/model/UpdateAlertRuleStateRequest.h>
#include <tencentcloud/monitor/v20180724/model/UpdateAlertRuleStateResponse.h>
#include <tencentcloud/monitor/v20180724/model/UpdateDNSConfigRequest.h>
#include <tencentcloud/monitor/v20180724/model/UpdateDNSConfigResponse.h>
#include <tencentcloud/monitor/v20180724/model/UpdateExporterIntegrationRequest.h>
#include <tencentcloud/monitor/v20180724/model/UpdateExporterIntegrationResponse.h>
#include <tencentcloud/monitor/v20180724/model/UpdateGrafanaConfigRequest.h>
#include <tencentcloud/monitor/v20180724/model/UpdateGrafanaConfigResponse.h>
#include <tencentcloud/monitor/v20180724/model/UpdateGrafanaEnvironmentsRequest.h>
#include <tencentcloud/monitor/v20180724/model/UpdateGrafanaEnvironmentsResponse.h>
#include <tencentcloud/monitor/v20180724/model/UpdateGrafanaIntegrationRequest.h>
#include <tencentcloud/monitor/v20180724/model/UpdateGrafanaIntegrationResponse.h>
#include <tencentcloud/monitor/v20180724/model/UpdateGrafanaNotificationChannelRequest.h>
#include <tencentcloud/monitor/v20180724/model/UpdateGrafanaNotificationChannelResponse.h>
#include <tencentcloud/monitor/v20180724/model/UpdateGrafanaWhiteListRequest.h>
#include <tencentcloud/monitor/v20180724/model/UpdateGrafanaWhiteListResponse.h>
#include <tencentcloud/monitor/v20180724/model/UpdatePrometheusAgentStatusRequest.h>
#include <tencentcloud/monitor/v20180724/model/UpdatePrometheusAgentStatusResponse.h>
#include <tencentcloud/monitor/v20180724/model/UpdatePrometheusAlertGroupRequest.h>
#include <tencentcloud/monitor/v20180724/model/UpdatePrometheusAlertGroupResponse.h>
#include <tencentcloud/monitor/v20180724/model/UpdatePrometheusAlertGroupStateRequest.h>
#include <tencentcloud/monitor/v20180724/model/UpdatePrometheusAlertGroupStateResponse.h>
#include <tencentcloud/monitor/v20180724/model/UpdatePrometheusScrapeJobRequest.h>
#include <tencentcloud/monitor/v20180724/model/UpdatePrometheusScrapeJobResponse.h>
#include <tencentcloud/monitor/v20180724/model/UpdateRecordingRuleRequest.h>
#include <tencentcloud/monitor/v20180724/model/UpdateRecordingRuleResponse.h>
#include <tencentcloud/monitor/v20180724/model/UpdateSSOAccountRequest.h>
#include <tencentcloud/monitor/v20180724/model/UpdateSSOAccountResponse.h>
#include <tencentcloud/monitor/v20180724/model/UpdateServiceDiscoveryRequest.h>
#include <tencentcloud/monitor/v20180724/model/UpdateServiceDiscoveryResponse.h>
#include <tencentcloud/monitor/v20180724/model/UpgradeGrafanaDashboardRequest.h>
#include <tencentcloud/monitor/v20180724/model/UpgradeGrafanaDashboardResponse.h>
#include <tencentcloud/monitor/v20180724/model/UpgradeGrafanaInstanceRequest.h>
#include <tencentcloud/monitor/v20180724/model/UpgradeGrafanaInstanceResponse.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            class MonitorClient : public AbstractClient
            {
            public:
                MonitorClient(const Credential &credential, const std::string &region);
                MonitorClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::BindPrometheusManagedGrafanaResponse> BindPrometheusManagedGrafanaOutcome;
                typedef std::future<BindPrometheusManagedGrafanaOutcome> BindPrometheusManagedGrafanaOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::BindPrometheusManagedGrafanaRequest&, BindPrometheusManagedGrafanaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindPrometheusManagedGrafanaAsyncHandler;
                typedef Outcome<Core::Error, Model::BindingPolicyObjectResponse> BindingPolicyObjectOutcome;
                typedef std::future<BindingPolicyObjectOutcome> BindingPolicyObjectOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::BindingPolicyObjectRequest&, BindingPolicyObjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindingPolicyObjectAsyncHandler;
                typedef Outcome<Core::Error, Model::BindingPolicyTagResponse> BindingPolicyTagOutcome;
                typedef std::future<BindingPolicyTagOutcome> BindingPolicyTagOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::BindingPolicyTagRequest&, BindingPolicyTagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindingPolicyTagAsyncHandler;
                typedef Outcome<Core::Error, Model::CleanGrafanaInstanceResponse> CleanGrafanaInstanceOutcome;
                typedef std::future<CleanGrafanaInstanceOutcome> CleanGrafanaInstanceOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CleanGrafanaInstanceRequest&, CleanGrafanaInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CleanGrafanaInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAlarmNoticeResponse> CreateAlarmNoticeOutcome;
                typedef std::future<CreateAlarmNoticeOutcome> CreateAlarmNoticeOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreateAlarmNoticeRequest&, CreateAlarmNoticeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAlarmNoticeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAlarmPolicyResponse> CreateAlarmPolicyOutcome;
                typedef std::future<CreateAlarmPolicyOutcome> CreateAlarmPolicyOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreateAlarmPolicyRequest&, CreateAlarmPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAlarmPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAlarmShieldResponse> CreateAlarmShieldOutcome;
                typedef std::future<CreateAlarmShieldOutcome> CreateAlarmShieldOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreateAlarmShieldRequest&, CreateAlarmShieldOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAlarmShieldAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAlertRuleResponse> CreateAlertRuleOutcome;
                typedef std::future<CreateAlertRuleOutcome> CreateAlertRuleOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreateAlertRuleRequest&, CreateAlertRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAlertRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateConditionsTemplateResponse> CreateConditionsTemplateOutcome;
                typedef std::future<CreateConditionsTemplateOutcome> CreateConditionsTemplateOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreateConditionsTemplateRequest&, CreateConditionsTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateConditionsTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateExporterIntegrationResponse> CreateExporterIntegrationOutcome;
                typedef std::future<CreateExporterIntegrationOutcome> CreateExporterIntegrationOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreateExporterIntegrationRequest&, CreateExporterIntegrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateExporterIntegrationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateExternalClusterResponse> CreateExternalClusterOutcome;
                typedef std::future<CreateExternalClusterOutcome> CreateExternalClusterOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreateExternalClusterRequest&, CreateExternalClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateExternalClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateGrafanaInstanceResponse> CreateGrafanaInstanceOutcome;
                typedef std::future<CreateGrafanaInstanceOutcome> CreateGrafanaInstanceOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreateGrafanaInstanceRequest&, CreateGrafanaInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGrafanaInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateGrafanaIntegrationResponse> CreateGrafanaIntegrationOutcome;
                typedef std::future<CreateGrafanaIntegrationOutcome> CreateGrafanaIntegrationOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreateGrafanaIntegrationRequest&, CreateGrafanaIntegrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGrafanaIntegrationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateGrafanaNotificationChannelResponse> CreateGrafanaNotificationChannelOutcome;
                typedef std::future<CreateGrafanaNotificationChannelOutcome> CreateGrafanaNotificationChannelOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreateGrafanaNotificationChannelRequest&, CreateGrafanaNotificationChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGrafanaNotificationChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePolicyGroupResponse> CreatePolicyGroupOutcome;
                typedef std::future<CreatePolicyGroupOutcome> CreatePolicyGroupOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreatePolicyGroupRequest&, CreatePolicyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePolicyGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrometheusAgentResponse> CreatePrometheusAgentOutcome;
                typedef std::future<CreatePrometheusAgentOutcome> CreatePrometheusAgentOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreatePrometheusAgentRequest&, CreatePrometheusAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrometheusAgentAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrometheusAlertGroupResponse> CreatePrometheusAlertGroupOutcome;
                typedef std::future<CreatePrometheusAlertGroupOutcome> CreatePrometheusAlertGroupOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreatePrometheusAlertGroupRequest&, CreatePrometheusAlertGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrometheusAlertGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrometheusAlertPolicyResponse> CreatePrometheusAlertPolicyOutcome;
                typedef std::future<CreatePrometheusAlertPolicyOutcome> CreatePrometheusAlertPolicyOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreatePrometheusAlertPolicyRequest&, CreatePrometheusAlertPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrometheusAlertPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrometheusClusterAgentResponse> CreatePrometheusClusterAgentOutcome;
                typedef std::future<CreatePrometheusClusterAgentOutcome> CreatePrometheusClusterAgentOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreatePrometheusClusterAgentRequest&, CreatePrometheusClusterAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrometheusClusterAgentAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrometheusConfigResponse> CreatePrometheusConfigOutcome;
                typedef std::future<CreatePrometheusConfigOutcome> CreatePrometheusConfigOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreatePrometheusConfigRequest&, CreatePrometheusConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrometheusConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrometheusGlobalNotificationResponse> CreatePrometheusGlobalNotificationOutcome;
                typedef std::future<CreatePrometheusGlobalNotificationOutcome> CreatePrometheusGlobalNotificationOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreatePrometheusGlobalNotificationRequest&, CreatePrometheusGlobalNotificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrometheusGlobalNotificationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrometheusMultiTenantInstancePostPayModeResponse> CreatePrometheusMultiTenantInstancePostPayModeOutcome;
                typedef std::future<CreatePrometheusMultiTenantInstancePostPayModeOutcome> CreatePrometheusMultiTenantInstancePostPayModeOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreatePrometheusMultiTenantInstancePostPayModeRequest&, CreatePrometheusMultiTenantInstancePostPayModeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrometheusMultiTenantInstancePostPayModeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrometheusRecordRuleYamlResponse> CreatePrometheusRecordRuleYamlOutcome;
                typedef std::future<CreatePrometheusRecordRuleYamlOutcome> CreatePrometheusRecordRuleYamlOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreatePrometheusRecordRuleYamlRequest&, CreatePrometheusRecordRuleYamlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrometheusRecordRuleYamlAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrometheusScrapeJobResponse> CreatePrometheusScrapeJobOutcome;
                typedef std::future<CreatePrometheusScrapeJobOutcome> CreatePrometheusScrapeJobOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreatePrometheusScrapeJobRequest&, CreatePrometheusScrapeJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrometheusScrapeJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrometheusTempResponse> CreatePrometheusTempOutcome;
                typedef std::future<CreatePrometheusTempOutcome> CreatePrometheusTempOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreatePrometheusTempRequest&, CreatePrometheusTempOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrometheusTempAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRecordingRuleResponse> CreateRecordingRuleOutcome;
                typedef std::future<CreateRecordingRuleOutcome> CreateRecordingRuleOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreateRecordingRuleRequest&, CreateRecordingRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRecordingRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSSOAccountResponse> CreateSSOAccountOutcome;
                typedef std::future<CreateSSOAccountOutcome> CreateSSOAccountOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreateSSOAccountRequest&, CreateSSOAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSSOAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateServiceDiscoveryResponse> CreateServiceDiscoveryOutcome;
                typedef std::future<CreateServiceDiscoveryOutcome> CreateServiceDiscoveryOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreateServiceDiscoveryRequest&, CreateServiceDiscoveryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceDiscoveryAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAlarmNoticesResponse> DeleteAlarmNoticesOutcome;
                typedef std::future<DeleteAlarmNoticesOutcome> DeleteAlarmNoticesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeleteAlarmNoticesRequest&, DeleteAlarmNoticesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAlarmNoticesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAlarmPolicyResponse> DeleteAlarmPolicyOutcome;
                typedef std::future<DeleteAlarmPolicyOutcome> DeleteAlarmPolicyOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeleteAlarmPolicyRequest&, DeleteAlarmPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAlarmPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAlarmShieldsResponse> DeleteAlarmShieldsOutcome;
                typedef std::future<DeleteAlarmShieldsOutcome> DeleteAlarmShieldsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeleteAlarmShieldsRequest&, DeleteAlarmShieldsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAlarmShieldsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAlertRulesResponse> DeleteAlertRulesOutcome;
                typedef std::future<DeleteAlertRulesOutcome> DeleteAlertRulesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeleteAlertRulesRequest&, DeleteAlertRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAlertRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteExporterIntegrationResponse> DeleteExporterIntegrationOutcome;
                typedef std::future<DeleteExporterIntegrationOutcome> DeleteExporterIntegrationOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeleteExporterIntegrationRequest&, DeleteExporterIntegrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteExporterIntegrationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteGrafanaInstanceResponse> DeleteGrafanaInstanceOutcome;
                typedef std::future<DeleteGrafanaInstanceOutcome> DeleteGrafanaInstanceOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeleteGrafanaInstanceRequest&, DeleteGrafanaInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGrafanaInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteGrafanaIntegrationResponse> DeleteGrafanaIntegrationOutcome;
                typedef std::future<DeleteGrafanaIntegrationOutcome> DeleteGrafanaIntegrationOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeleteGrafanaIntegrationRequest&, DeleteGrafanaIntegrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGrafanaIntegrationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteGrafanaNotificationChannelResponse> DeleteGrafanaNotificationChannelOutcome;
                typedef std::future<DeleteGrafanaNotificationChannelOutcome> DeleteGrafanaNotificationChannelOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeleteGrafanaNotificationChannelRequest&, DeleteGrafanaNotificationChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGrafanaNotificationChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePolicyGroupResponse> DeletePolicyGroupOutcome;
                typedef std::future<DeletePolicyGroupOutcome> DeletePolicyGroupOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeletePolicyGroupRequest&, DeletePolicyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePolicyGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePrometheusAlertGroupsResponse> DeletePrometheusAlertGroupsOutcome;
                typedef std::future<DeletePrometheusAlertGroupsOutcome> DeletePrometheusAlertGroupsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeletePrometheusAlertGroupsRequest&, DeletePrometheusAlertGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrometheusAlertGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePrometheusAlertPolicyResponse> DeletePrometheusAlertPolicyOutcome;
                typedef std::future<DeletePrometheusAlertPolicyOutcome> DeletePrometheusAlertPolicyOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeletePrometheusAlertPolicyRequest&, DeletePrometheusAlertPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrometheusAlertPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePrometheusClusterAgentResponse> DeletePrometheusClusterAgentOutcome;
                typedef std::future<DeletePrometheusClusterAgentOutcome> DeletePrometheusClusterAgentOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeletePrometheusClusterAgentRequest&, DeletePrometheusClusterAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrometheusClusterAgentAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePrometheusConfigResponse> DeletePrometheusConfigOutcome;
                typedef std::future<DeletePrometheusConfigOutcome> DeletePrometheusConfigOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeletePrometheusConfigRequest&, DeletePrometheusConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrometheusConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePrometheusRecordRuleYamlResponse> DeletePrometheusRecordRuleYamlOutcome;
                typedef std::future<DeletePrometheusRecordRuleYamlOutcome> DeletePrometheusRecordRuleYamlOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeletePrometheusRecordRuleYamlRequest&, DeletePrometheusRecordRuleYamlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrometheusRecordRuleYamlAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePrometheusScrapeJobsResponse> DeletePrometheusScrapeJobsOutcome;
                typedef std::future<DeletePrometheusScrapeJobsOutcome> DeletePrometheusScrapeJobsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeletePrometheusScrapeJobsRequest&, DeletePrometheusScrapeJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrometheusScrapeJobsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePrometheusTempResponse> DeletePrometheusTempOutcome;
                typedef std::future<DeletePrometheusTempOutcome> DeletePrometheusTempOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeletePrometheusTempRequest&, DeletePrometheusTempOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrometheusTempAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePrometheusTempSyncResponse> DeletePrometheusTempSyncOutcome;
                typedef std::future<DeletePrometheusTempSyncOutcome> DeletePrometheusTempSyncOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeletePrometheusTempSyncRequest&, DeletePrometheusTempSyncOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrometheusTempSyncAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRecordingRulesResponse> DeleteRecordingRulesOutcome;
                typedef std::future<DeleteRecordingRulesOutcome> DeleteRecordingRulesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeleteRecordingRulesRequest&, DeleteRecordingRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRecordingRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSSOAccountResponse> DeleteSSOAccountOutcome;
                typedef std::future<DeleteSSOAccountOutcome> DeleteSSOAccountOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeleteSSOAccountRequest&, DeleteSSOAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSSOAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteServiceDiscoveryResponse> DeleteServiceDiscoveryOutcome;
                typedef std::future<DeleteServiceDiscoveryOutcome> DeleteServiceDiscoveryOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeleteServiceDiscoveryRequest&, DeleteServiceDiscoveryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServiceDiscoveryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccidentEventListResponse> DescribeAccidentEventListOutcome;
                typedef std::future<DescribeAccidentEventListOutcome> DescribeAccidentEventListOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAccidentEventListRequest&, DescribeAccidentEventListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccidentEventListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmEventsResponse> DescribeAlarmEventsOutcome;
                typedef std::future<DescribeAlarmEventsOutcome> DescribeAlarmEventsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAlarmEventsRequest&, DescribeAlarmEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmHistoriesResponse> DescribeAlarmHistoriesOutcome;
                typedef std::future<DescribeAlarmHistoriesOutcome> DescribeAlarmHistoriesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAlarmHistoriesRequest&, DescribeAlarmHistoriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmHistoriesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmMetricsResponse> DescribeAlarmMetricsOutcome;
                typedef std::future<DescribeAlarmMetricsOutcome> DescribeAlarmMetricsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAlarmMetricsRequest&, DescribeAlarmMetricsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmMetricsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmNoticeResponse> DescribeAlarmNoticeOutcome;
                typedef std::future<DescribeAlarmNoticeOutcome> DescribeAlarmNoticeOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAlarmNoticeRequest&, DescribeAlarmNoticeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmNoticeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmNoticeCallbacksResponse> DescribeAlarmNoticeCallbacksOutcome;
                typedef std::future<DescribeAlarmNoticeCallbacksOutcome> DescribeAlarmNoticeCallbacksOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAlarmNoticeCallbacksRequest&, DescribeAlarmNoticeCallbacksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmNoticeCallbacksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmNoticesResponse> DescribeAlarmNoticesOutcome;
                typedef std::future<DescribeAlarmNoticesOutcome> DescribeAlarmNoticesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAlarmNoticesRequest&, DescribeAlarmNoticesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmNoticesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmPoliciesResponse> DescribeAlarmPoliciesOutcome;
                typedef std::future<DescribeAlarmPoliciesOutcome> DescribeAlarmPoliciesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAlarmPoliciesRequest&, DescribeAlarmPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmPolicyResponse> DescribeAlarmPolicyOutcome;
                typedef std::future<DescribeAlarmPolicyOutcome> DescribeAlarmPolicyOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAlarmPolicyRequest&, DescribeAlarmPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmSmsQuotaResponse> DescribeAlarmSmsQuotaOutcome;
                typedef std::future<DescribeAlarmSmsQuotaOutcome> DescribeAlarmSmsQuotaOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAlarmSmsQuotaRequest&, DescribeAlarmSmsQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmSmsQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlertRulesResponse> DescribeAlertRulesOutcome;
                typedef std::future<DescribeAlertRulesOutcome> DescribeAlertRulesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAlertRulesRequest&, DescribeAlertRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlertRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAllNamespacesResponse> DescribeAllNamespacesOutcome;
                typedef std::future<DescribeAllNamespacesOutcome> DescribeAllNamespacesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAllNamespacesRequest&, DescribeAllNamespacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllNamespacesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaseMetricsResponse> DescribeBaseMetricsOutcome;
                typedef std::future<DescribeBaseMetricsOutcome> DescribeBaseMetricsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeBaseMetricsRequest&, DescribeBaseMetricsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaseMetricsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBasicAlarmListResponse> DescribeBasicAlarmListOutcome;
                typedef std::future<DescribeBasicAlarmListOutcome> DescribeBasicAlarmListOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeBasicAlarmListRequest&, DescribeBasicAlarmListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBasicAlarmListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBindingPolicyObjectListResponse> DescribeBindingPolicyObjectListOutcome;
                typedef std::future<DescribeBindingPolicyObjectListOutcome> DescribeBindingPolicyObjectListOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeBindingPolicyObjectListRequest&, DescribeBindingPolicyObjectListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBindingPolicyObjectListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterAgentCreatingProgressResponse> DescribeClusterAgentCreatingProgressOutcome;
                typedef std::future<DescribeClusterAgentCreatingProgressOutcome> DescribeClusterAgentCreatingProgressOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeClusterAgentCreatingProgressRequest&, DescribeClusterAgentCreatingProgressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterAgentCreatingProgressAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConditionsTemplateListResponse> DescribeConditionsTemplateListOutcome;
                typedef std::future<DescribeConditionsTemplateListOutcome> DescribeConditionsTemplateListOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeConditionsTemplateListRequest&, DescribeConditionsTemplateListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConditionsTemplateListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDNSConfigResponse> DescribeDNSConfigOutcome;
                typedef std::future<DescribeDNSConfigOutcome> DescribeDNSConfigOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeDNSConfigRequest&, DescribeDNSConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDNSConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExporterIntegrationsResponse> DescribeExporterIntegrationsOutcome;
                typedef std::future<DescribeExporterIntegrationsOutcome> DescribeExporterIntegrationsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeExporterIntegrationsRequest&, DescribeExporterIntegrationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExporterIntegrationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExternalClusterRegisterCommandResponse> DescribeExternalClusterRegisterCommandOutcome;
                typedef std::future<DescribeExternalClusterRegisterCommandOutcome> DescribeExternalClusterRegisterCommandOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeExternalClusterRegisterCommandRequest&, DescribeExternalClusterRegisterCommandOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExternalClusterRegisterCommandAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExternalClusterUninstallCommandResponse> DescribeExternalClusterUninstallCommandOutcome;
                typedef std::future<DescribeExternalClusterUninstallCommandOutcome> DescribeExternalClusterUninstallCommandOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeExternalClusterUninstallCommandRequest&, DescribeExternalClusterUninstallCommandOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExternalClusterUninstallCommandAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGrafanaChannelsResponse> DescribeGrafanaChannelsOutcome;
                typedef std::future<DescribeGrafanaChannelsOutcome> DescribeGrafanaChannelsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeGrafanaChannelsRequest&, DescribeGrafanaChannelsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGrafanaChannelsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGrafanaConfigResponse> DescribeGrafanaConfigOutcome;
                typedef std::future<DescribeGrafanaConfigOutcome> DescribeGrafanaConfigOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeGrafanaConfigRequest&, DescribeGrafanaConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGrafanaConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGrafanaEnvironmentsResponse> DescribeGrafanaEnvironmentsOutcome;
                typedef std::future<DescribeGrafanaEnvironmentsOutcome> DescribeGrafanaEnvironmentsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeGrafanaEnvironmentsRequest&, DescribeGrafanaEnvironmentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGrafanaEnvironmentsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGrafanaInstancesResponse> DescribeGrafanaInstancesOutcome;
                typedef std::future<DescribeGrafanaInstancesOutcome> DescribeGrafanaInstancesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeGrafanaInstancesRequest&, DescribeGrafanaInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGrafanaInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGrafanaIntegrationsResponse> DescribeGrafanaIntegrationsOutcome;
                typedef std::future<DescribeGrafanaIntegrationsOutcome> DescribeGrafanaIntegrationsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeGrafanaIntegrationsRequest&, DescribeGrafanaIntegrationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGrafanaIntegrationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGrafanaNotificationChannelsResponse> DescribeGrafanaNotificationChannelsOutcome;
                typedef std::future<DescribeGrafanaNotificationChannelsOutcome> DescribeGrafanaNotificationChannelsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeGrafanaNotificationChannelsRequest&, DescribeGrafanaNotificationChannelsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGrafanaNotificationChannelsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGrafanaWhiteListResponse> DescribeGrafanaWhiteListOutcome;
                typedef std::future<DescribeGrafanaWhiteListOutcome> DescribeGrafanaWhiteListOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeGrafanaWhiteListRequest&, DescribeGrafanaWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGrafanaWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstalledPluginsResponse> DescribeInstalledPluginsOutcome;
                typedef std::future<DescribeInstalledPluginsOutcome> DescribeInstalledPluginsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeInstalledPluginsRequest&, DescribeInstalledPluginsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstalledPluginsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMonitorResourceInfoResponse> DescribeMonitorResourceInfoOutcome;
                typedef std::future<DescribeMonitorResourceInfoOutcome> DescribeMonitorResourceInfoOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeMonitorResourceInfoRequest&, DescribeMonitorResourceInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMonitorResourceInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMonitorTypesResponse> DescribeMonitorTypesOutcome;
                typedef std::future<DescribeMonitorTypesOutcome> DescribeMonitorTypesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeMonitorTypesRequest&, DescribeMonitorTypesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMonitorTypesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePhoneAlarmFlowTotalCountResponse> DescribePhoneAlarmFlowTotalCountOutcome;
                typedef std::future<DescribePhoneAlarmFlowTotalCountOutcome> DescribePhoneAlarmFlowTotalCountOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePhoneAlarmFlowTotalCountRequest&, DescribePhoneAlarmFlowTotalCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePhoneAlarmFlowTotalCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePluginOverviewsResponse> DescribePluginOverviewsOutcome;
                typedef std::future<DescribePluginOverviewsOutcome> DescribePluginOverviewsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePluginOverviewsRequest&, DescribePluginOverviewsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePluginOverviewsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePolicyConditionListResponse> DescribePolicyConditionListOutcome;
                typedef std::future<DescribePolicyConditionListOutcome> DescribePolicyConditionListOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePolicyConditionListRequest&, DescribePolicyConditionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePolicyConditionListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePolicyGroupInfoResponse> DescribePolicyGroupInfoOutcome;
                typedef std::future<DescribePolicyGroupInfoOutcome> DescribePolicyGroupInfoOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePolicyGroupInfoRequest&, DescribePolicyGroupInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePolicyGroupInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePolicyGroupListResponse> DescribePolicyGroupListOutcome;
                typedef std::future<DescribePolicyGroupListOutcome> DescribePolicyGroupListOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePolicyGroupListRequest&, DescribePolicyGroupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePolicyGroupListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePolicyObjectCountResponse> DescribePolicyObjectCountOutcome;
                typedef std::future<DescribePolicyObjectCountOutcome> DescribePolicyObjectCountOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePolicyObjectCountRequest&, DescribePolicyObjectCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePolicyObjectCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProductEventListResponse> DescribeProductEventListOutcome;
                typedef std::future<DescribeProductEventListOutcome> DescribeProductEventListOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeProductEventListRequest&, DescribeProductEventListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductEventListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProductListResponse> DescribeProductListOutcome;
                typedef std::future<DescribeProductListOutcome> DescribeProductListOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeProductListRequest&, DescribeProductListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusAgentInstancesResponse> DescribePrometheusAgentInstancesOutcome;
                typedef std::future<DescribePrometheusAgentInstancesOutcome> DescribePrometheusAgentInstancesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePrometheusAgentInstancesRequest&, DescribePrometheusAgentInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusAgentInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusAgentsResponse> DescribePrometheusAgentsOutcome;
                typedef std::future<DescribePrometheusAgentsOutcome> DescribePrometheusAgentsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePrometheusAgentsRequest&, DescribePrometheusAgentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusAgentsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusAlertGroupsResponse> DescribePrometheusAlertGroupsOutcome;
                typedef std::future<DescribePrometheusAlertGroupsOutcome> DescribePrometheusAlertGroupsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePrometheusAlertGroupsRequest&, DescribePrometheusAlertGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusAlertGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusAlertPolicyResponse> DescribePrometheusAlertPolicyOutcome;
                typedef std::future<DescribePrometheusAlertPolicyOutcome> DescribePrometheusAlertPolicyOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePrometheusAlertPolicyRequest&, DescribePrometheusAlertPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusAlertPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusClusterAgentsResponse> DescribePrometheusClusterAgentsOutcome;
                typedef std::future<DescribePrometheusClusterAgentsOutcome> DescribePrometheusClusterAgentsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePrometheusClusterAgentsRequest&, DescribePrometheusClusterAgentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusClusterAgentsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusConfigResponse> DescribePrometheusConfigOutcome;
                typedef std::future<DescribePrometheusConfigOutcome> DescribePrometheusConfigOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePrometheusConfigRequest&, DescribePrometheusConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusGlobalConfigResponse> DescribePrometheusGlobalConfigOutcome;
                typedef std::future<DescribePrometheusGlobalConfigOutcome> DescribePrometheusGlobalConfigOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePrometheusGlobalConfigRequest&, DescribePrometheusGlobalConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusGlobalConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusGlobalNotificationResponse> DescribePrometheusGlobalNotificationOutcome;
                typedef std::future<DescribePrometheusGlobalNotificationOutcome> DescribePrometheusGlobalNotificationOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePrometheusGlobalNotificationRequest&, DescribePrometheusGlobalNotificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusGlobalNotificationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusInstanceDetailResponse> DescribePrometheusInstanceDetailOutcome;
                typedef std::future<DescribePrometheusInstanceDetailOutcome> DescribePrometheusInstanceDetailOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePrometheusInstanceDetailRequest&, DescribePrometheusInstanceDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusInstanceDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusInstanceInitStatusResponse> DescribePrometheusInstanceInitStatusOutcome;
                typedef std::future<DescribePrometheusInstanceInitStatusOutcome> DescribePrometheusInstanceInitStatusOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePrometheusInstanceInitStatusRequest&, DescribePrometheusInstanceInitStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusInstanceInitStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusInstanceUsageResponse> DescribePrometheusInstanceUsageOutcome;
                typedef std::future<DescribePrometheusInstanceUsageOutcome> DescribePrometheusInstanceUsageOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePrometheusInstanceUsageRequest&, DescribePrometheusInstanceUsageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusInstanceUsageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusInstancesResponse> DescribePrometheusInstancesOutcome;
                typedef std::future<DescribePrometheusInstancesOutcome> DescribePrometheusInstancesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePrometheusInstancesRequest&, DescribePrometheusInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusInstancesOverviewResponse> DescribePrometheusInstancesOverviewOutcome;
                typedef std::future<DescribePrometheusInstancesOverviewOutcome> DescribePrometheusInstancesOverviewOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePrometheusInstancesOverviewRequest&, DescribePrometheusInstancesOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusInstancesOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusIntegrationMetricsResponse> DescribePrometheusIntegrationMetricsOutcome;
                typedef std::future<DescribePrometheusIntegrationMetricsOutcome> DescribePrometheusIntegrationMetricsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePrometheusIntegrationMetricsRequest&, DescribePrometheusIntegrationMetricsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusIntegrationMetricsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusRecordRulesResponse> DescribePrometheusRecordRulesOutcome;
                typedef std::future<DescribePrometheusRecordRulesOutcome> DescribePrometheusRecordRulesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePrometheusRecordRulesRequest&, DescribePrometheusRecordRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusRecordRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusRegionsResponse> DescribePrometheusRegionsOutcome;
                typedef std::future<DescribePrometheusRegionsOutcome> DescribePrometheusRegionsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePrometheusRegionsRequest&, DescribePrometheusRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusScrapeJobsResponse> DescribePrometheusScrapeJobsOutcome;
                typedef std::future<DescribePrometheusScrapeJobsOutcome> DescribePrometheusScrapeJobsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePrometheusScrapeJobsRequest&, DescribePrometheusScrapeJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusScrapeJobsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusTargetsTMPResponse> DescribePrometheusTargetsTMPOutcome;
                typedef std::future<DescribePrometheusTargetsTMPOutcome> DescribePrometheusTargetsTMPOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePrometheusTargetsTMPRequest&, DescribePrometheusTargetsTMPOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusTargetsTMPAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusTempResponse> DescribePrometheusTempOutcome;
                typedef std::future<DescribePrometheusTempOutcome> DescribePrometheusTempOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePrometheusTempRequest&, DescribePrometheusTempOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusTempAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusTempSyncResponse> DescribePrometheusTempSyncOutcome;
                typedef std::future<DescribePrometheusTempSyncOutcome> DescribePrometheusTempSyncOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePrometheusTempSyncRequest&, DescribePrometheusTempSyncOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusTempSyncAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusZonesResponse> DescribePrometheusZonesOutcome;
                typedef std::future<DescribePrometheusZonesOutcome> DescribePrometheusZonesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePrometheusZonesRequest&, DescribePrometheusZonesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusZonesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRecordingRulesResponse> DescribeRecordingRulesOutcome;
                typedef std::future<DescribeRecordingRulesOutcome> DescribeRecordingRulesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeRecordingRulesRequest&, DescribeRecordingRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordingRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRemoteURLsResponse> DescribeRemoteURLsOutcome;
                typedef std::future<DescribeRemoteURLsOutcome> DescribeRemoteURLsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeRemoteURLsRequest&, DescribeRemoteURLsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRemoteURLsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSSOAccountResponse> DescribeSSOAccountOutcome;
                typedef std::future<DescribeSSOAccountOutcome> DescribeSSOAccountOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeSSOAccountRequest&, DescribeSSOAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSSOAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeServiceDiscoveryResponse> DescribeServiceDiscoveryOutcome;
                typedef std::future<DescribeServiceDiscoveryOutcome> DescribeServiceDiscoveryOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeServiceDiscoveryRequest&, DescribeServiceDiscoveryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceDiscoveryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStatisticDataResponse> DescribeStatisticDataOutcome;
                typedef std::future<DescribeStatisticDataOutcome> DescribeStatisticDataOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeStatisticDataRequest&, DescribeStatisticDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStatisticDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyPrometheusInstanceResponse> DestroyPrometheusInstanceOutcome;
                typedef std::future<DestroyPrometheusInstanceOutcome> DestroyPrometheusInstanceOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DestroyPrometheusInstanceRequest&, DestroyPrometheusInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyPrometheusInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableGrafanaInternetResponse> EnableGrafanaInternetOutcome;
                typedef std::future<EnableGrafanaInternetOutcome> EnableGrafanaInternetOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::EnableGrafanaInternetRequest&, EnableGrafanaInternetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableGrafanaInternetAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableGrafanaSSOResponse> EnableGrafanaSSOOutcome;
                typedef std::future<EnableGrafanaSSOOutcome> EnableGrafanaSSOOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::EnableGrafanaSSORequest&, EnableGrafanaSSOOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableGrafanaSSOAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableSSOCamCheckResponse> EnableSSOCamCheckOutcome;
                typedef std::future<EnableSSOCamCheckOutcome> EnableSSOCamCheckOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::EnableSSOCamCheckRequest&, EnableSSOCamCheckOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableSSOCamCheckAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportPrometheusReadOnlyDynamicAPIResponse> ExportPrometheusReadOnlyDynamicAPIOutcome;
                typedef std::future<ExportPrometheusReadOnlyDynamicAPIOutcome> ExportPrometheusReadOnlyDynamicAPIOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ExportPrometheusReadOnlyDynamicAPIRequest&, ExportPrometheusReadOnlyDynamicAPIOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportPrometheusReadOnlyDynamicAPIAsyncHandler;
                typedef Outcome<Core::Error, Model::GetMonitorDataResponse> GetMonitorDataOutcome;
                typedef std::future<GetMonitorDataOutcome> GetMonitorDataOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::GetMonitorDataRequest&, GetMonitorDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetMonitorDataAsyncHandler;
                typedef Outcome<Core::Error, Model::GetPrometheusAgentManagementCommandResponse> GetPrometheusAgentManagementCommandOutcome;
                typedef std::future<GetPrometheusAgentManagementCommandOutcome> GetPrometheusAgentManagementCommandOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::GetPrometheusAgentManagementCommandRequest&, GetPrometheusAgentManagementCommandOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetPrometheusAgentManagementCommandAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTopNMonitorDataResponse> GetTopNMonitorDataOutcome;
                typedef std::future<GetTopNMonitorDataOutcome> GetTopNMonitorDataOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::GetTopNMonitorDataRequest&, GetTopNMonitorDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTopNMonitorDataAsyncHandler;
                typedef Outcome<Core::Error, Model::InstallPluginsResponse> InstallPluginsOutcome;
                typedef std::future<InstallPluginsOutcome> InstallPluginsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::InstallPluginsRequest&, InstallPluginsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InstallPluginsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAlarmNoticeResponse> ModifyAlarmNoticeOutcome;
                typedef std::future<ModifyAlarmNoticeOutcome> ModifyAlarmNoticeOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyAlarmNoticeRequest&, ModifyAlarmNoticeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlarmNoticeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAlarmPolicyConditionResponse> ModifyAlarmPolicyConditionOutcome;
                typedef std::future<ModifyAlarmPolicyConditionOutcome> ModifyAlarmPolicyConditionOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyAlarmPolicyConditionRequest&, ModifyAlarmPolicyConditionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlarmPolicyConditionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAlarmPolicyInfoResponse> ModifyAlarmPolicyInfoOutcome;
                typedef std::future<ModifyAlarmPolicyInfoOutcome> ModifyAlarmPolicyInfoOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyAlarmPolicyInfoRequest&, ModifyAlarmPolicyInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlarmPolicyInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAlarmPolicyNoticeResponse> ModifyAlarmPolicyNoticeOutcome;
                typedef std::future<ModifyAlarmPolicyNoticeOutcome> ModifyAlarmPolicyNoticeOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyAlarmPolicyNoticeRequest&, ModifyAlarmPolicyNoticeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlarmPolicyNoticeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAlarmPolicyStatusResponse> ModifyAlarmPolicyStatusOutcome;
                typedef std::future<ModifyAlarmPolicyStatusOutcome> ModifyAlarmPolicyStatusOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyAlarmPolicyStatusRequest&, ModifyAlarmPolicyStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlarmPolicyStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAlarmPolicyTasksResponse> ModifyAlarmPolicyTasksOutcome;
                typedef std::future<ModifyAlarmPolicyTasksOutcome> ModifyAlarmPolicyTasksOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyAlarmPolicyTasksRequest&, ModifyAlarmPolicyTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlarmPolicyTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAlarmReceiversResponse> ModifyAlarmReceiversOutcome;
                typedef std::future<ModifyAlarmReceiversOutcome> ModifyAlarmReceiversOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyAlarmReceiversRequest&, ModifyAlarmReceiversOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlarmReceiversAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyGrafanaInstanceResponse> ModifyGrafanaInstanceOutcome;
                typedef std::future<ModifyGrafanaInstanceOutcome> ModifyGrafanaInstanceOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyGrafanaInstanceRequest&, ModifyGrafanaInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGrafanaInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPolicyGroupResponse> ModifyPolicyGroupOutcome;
                typedef std::future<ModifyPolicyGroupOutcome> ModifyPolicyGroupOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyPolicyGroupRequest&, ModifyPolicyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPolicyGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPrometheusAgentExternalLabelsResponse> ModifyPrometheusAgentExternalLabelsOutcome;
                typedef std::future<ModifyPrometheusAgentExternalLabelsOutcome> ModifyPrometheusAgentExternalLabelsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyPrometheusAgentExternalLabelsRequest&, ModifyPrometheusAgentExternalLabelsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPrometheusAgentExternalLabelsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPrometheusAlertPolicyResponse> ModifyPrometheusAlertPolicyOutcome;
                typedef std::future<ModifyPrometheusAlertPolicyOutcome> ModifyPrometheusAlertPolicyOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyPrometheusAlertPolicyRequest&, ModifyPrometheusAlertPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPrometheusAlertPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPrometheusConfigResponse> ModifyPrometheusConfigOutcome;
                typedef std::future<ModifyPrometheusConfigOutcome> ModifyPrometheusConfigOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyPrometheusConfigRequest&, ModifyPrometheusConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPrometheusConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPrometheusGlobalNotificationResponse> ModifyPrometheusGlobalNotificationOutcome;
                typedef std::future<ModifyPrometheusGlobalNotificationOutcome> ModifyPrometheusGlobalNotificationOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyPrometheusGlobalNotificationRequest&, ModifyPrometheusGlobalNotificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPrometheusGlobalNotificationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPrometheusInstanceAttributesResponse> ModifyPrometheusInstanceAttributesOutcome;
                typedef std::future<ModifyPrometheusInstanceAttributesOutcome> ModifyPrometheusInstanceAttributesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyPrometheusInstanceAttributesRequest&, ModifyPrometheusInstanceAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPrometheusInstanceAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPrometheusRecordRuleYamlResponse> ModifyPrometheusRecordRuleYamlOutcome;
                typedef std::future<ModifyPrometheusRecordRuleYamlOutcome> ModifyPrometheusRecordRuleYamlOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyPrometheusRecordRuleYamlRequest&, ModifyPrometheusRecordRuleYamlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPrometheusRecordRuleYamlAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPrometheusTempResponse> ModifyPrometheusTempOutcome;
                typedef std::future<ModifyPrometheusTempOutcome> ModifyPrometheusTempOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyPrometheusTempRequest&, ModifyPrometheusTempOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPrometheusTempAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRemoteURLsResponse> ModifyRemoteURLsOutcome;
                typedef std::future<ModifyRemoteURLsOutcome> ModifyRemoteURLsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyRemoteURLsRequest&, ModifyRemoteURLsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRemoteURLsAsyncHandler;
                typedef Outcome<Core::Error, Model::ResumeGrafanaInstanceResponse> ResumeGrafanaInstanceOutcome;
                typedef std::future<ResumeGrafanaInstanceOutcome> ResumeGrafanaInstanceOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ResumeGrafanaInstanceRequest&, ResumeGrafanaInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResumeGrafanaInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::RunPrometheusInstanceResponse> RunPrometheusInstanceOutcome;
                typedef std::future<RunPrometheusInstanceOutcome> RunPrometheusInstanceOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::RunPrometheusInstanceRequest&, RunPrometheusInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunPrometheusInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::SetDefaultAlarmPolicyResponse> SetDefaultAlarmPolicyOutcome;
                typedef std::future<SetDefaultAlarmPolicyOutcome> SetDefaultAlarmPolicyOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::SetDefaultAlarmPolicyRequest&, SetDefaultAlarmPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetDefaultAlarmPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::SyncPrometheusTempResponse> SyncPrometheusTempOutcome;
                typedef std::future<SyncPrometheusTempOutcome> SyncPrometheusTempOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::SyncPrometheusTempRequest&, SyncPrometheusTempOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SyncPrometheusTempAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminatePrometheusInstancesResponse> TerminatePrometheusInstancesOutcome;
                typedef std::future<TerminatePrometheusInstancesOutcome> TerminatePrometheusInstancesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::TerminatePrometheusInstancesRequest&, TerminatePrometheusInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminatePrometheusInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::UnBindingAllPolicyObjectResponse> UnBindingAllPolicyObjectOutcome;
                typedef std::future<UnBindingAllPolicyObjectOutcome> UnBindingAllPolicyObjectOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UnBindingAllPolicyObjectRequest&, UnBindingAllPolicyObjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnBindingAllPolicyObjectAsyncHandler;
                typedef Outcome<Core::Error, Model::UnBindingPolicyObjectResponse> UnBindingPolicyObjectOutcome;
                typedef std::future<UnBindingPolicyObjectOutcome> UnBindingPolicyObjectOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UnBindingPolicyObjectRequest&, UnBindingPolicyObjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnBindingPolicyObjectAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindPrometheusManagedGrafanaResponse> UnbindPrometheusManagedGrafanaOutcome;
                typedef std::future<UnbindPrometheusManagedGrafanaOutcome> UnbindPrometheusManagedGrafanaOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UnbindPrometheusManagedGrafanaRequest&, UnbindPrometheusManagedGrafanaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindPrometheusManagedGrafanaAsyncHandler;
                typedef Outcome<Core::Error, Model::UninstallGrafanaDashboardResponse> UninstallGrafanaDashboardOutcome;
                typedef std::future<UninstallGrafanaDashboardOutcome> UninstallGrafanaDashboardOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UninstallGrafanaDashboardRequest&, UninstallGrafanaDashboardOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UninstallGrafanaDashboardAsyncHandler;
                typedef Outcome<Core::Error, Model::UninstallGrafanaPluginsResponse> UninstallGrafanaPluginsOutcome;
                typedef std::future<UninstallGrafanaPluginsOutcome> UninstallGrafanaPluginsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UninstallGrafanaPluginsRequest&, UninstallGrafanaPluginsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UninstallGrafanaPluginsAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAlertRuleResponse> UpdateAlertRuleOutcome;
                typedef std::future<UpdateAlertRuleOutcome> UpdateAlertRuleOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UpdateAlertRuleRequest&, UpdateAlertRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAlertRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAlertRuleStateResponse> UpdateAlertRuleStateOutcome;
                typedef std::future<UpdateAlertRuleStateOutcome> UpdateAlertRuleStateOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UpdateAlertRuleStateRequest&, UpdateAlertRuleStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAlertRuleStateAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateDNSConfigResponse> UpdateDNSConfigOutcome;
                typedef std::future<UpdateDNSConfigOutcome> UpdateDNSConfigOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UpdateDNSConfigRequest&, UpdateDNSConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDNSConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateExporterIntegrationResponse> UpdateExporterIntegrationOutcome;
                typedef std::future<UpdateExporterIntegrationOutcome> UpdateExporterIntegrationOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UpdateExporterIntegrationRequest&, UpdateExporterIntegrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateExporterIntegrationAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateGrafanaConfigResponse> UpdateGrafanaConfigOutcome;
                typedef std::future<UpdateGrafanaConfigOutcome> UpdateGrafanaConfigOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UpdateGrafanaConfigRequest&, UpdateGrafanaConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGrafanaConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateGrafanaEnvironmentsResponse> UpdateGrafanaEnvironmentsOutcome;
                typedef std::future<UpdateGrafanaEnvironmentsOutcome> UpdateGrafanaEnvironmentsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UpdateGrafanaEnvironmentsRequest&, UpdateGrafanaEnvironmentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGrafanaEnvironmentsAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateGrafanaIntegrationResponse> UpdateGrafanaIntegrationOutcome;
                typedef std::future<UpdateGrafanaIntegrationOutcome> UpdateGrafanaIntegrationOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UpdateGrafanaIntegrationRequest&, UpdateGrafanaIntegrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGrafanaIntegrationAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateGrafanaNotificationChannelResponse> UpdateGrafanaNotificationChannelOutcome;
                typedef std::future<UpdateGrafanaNotificationChannelOutcome> UpdateGrafanaNotificationChannelOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UpdateGrafanaNotificationChannelRequest&, UpdateGrafanaNotificationChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGrafanaNotificationChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateGrafanaWhiteListResponse> UpdateGrafanaWhiteListOutcome;
                typedef std::future<UpdateGrafanaWhiteListOutcome> UpdateGrafanaWhiteListOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UpdateGrafanaWhiteListRequest&, UpdateGrafanaWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGrafanaWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdatePrometheusAgentStatusResponse> UpdatePrometheusAgentStatusOutcome;
                typedef std::future<UpdatePrometheusAgentStatusOutcome> UpdatePrometheusAgentStatusOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UpdatePrometheusAgentStatusRequest&, UpdatePrometheusAgentStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePrometheusAgentStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdatePrometheusAlertGroupResponse> UpdatePrometheusAlertGroupOutcome;
                typedef std::future<UpdatePrometheusAlertGroupOutcome> UpdatePrometheusAlertGroupOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UpdatePrometheusAlertGroupRequest&, UpdatePrometheusAlertGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePrometheusAlertGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdatePrometheusAlertGroupStateResponse> UpdatePrometheusAlertGroupStateOutcome;
                typedef std::future<UpdatePrometheusAlertGroupStateOutcome> UpdatePrometheusAlertGroupStateOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UpdatePrometheusAlertGroupStateRequest&, UpdatePrometheusAlertGroupStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePrometheusAlertGroupStateAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdatePrometheusScrapeJobResponse> UpdatePrometheusScrapeJobOutcome;
                typedef std::future<UpdatePrometheusScrapeJobOutcome> UpdatePrometheusScrapeJobOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UpdatePrometheusScrapeJobRequest&, UpdatePrometheusScrapeJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePrometheusScrapeJobAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateRecordingRuleResponse> UpdateRecordingRuleOutcome;
                typedef std::future<UpdateRecordingRuleOutcome> UpdateRecordingRuleOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UpdateRecordingRuleRequest&, UpdateRecordingRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRecordingRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateSSOAccountResponse> UpdateSSOAccountOutcome;
                typedef std::future<UpdateSSOAccountOutcome> UpdateSSOAccountOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UpdateSSOAccountRequest&, UpdateSSOAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSSOAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateServiceDiscoveryResponse> UpdateServiceDiscoveryOutcome;
                typedef std::future<UpdateServiceDiscoveryOutcome> UpdateServiceDiscoveryOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UpdateServiceDiscoveryRequest&, UpdateServiceDiscoveryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateServiceDiscoveryAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeGrafanaDashboardResponse> UpgradeGrafanaDashboardOutcome;
                typedef std::future<UpgradeGrafanaDashboardOutcome> UpgradeGrafanaDashboardOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UpgradeGrafanaDashboardRequest&, UpgradeGrafanaDashboardOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeGrafanaDashboardAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeGrafanaInstanceResponse> UpgradeGrafanaInstanceOutcome;
                typedef std::future<UpgradeGrafanaInstanceOutcome> UpgradeGrafanaInstanceOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UpgradeGrafanaInstanceRequest&, UpgradeGrafanaInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeGrafanaInstanceAsyncHandler;



                /**
                 *绑定 Grafana 可视化服务实例
                 * @param req BindPrometheusManagedGrafanaRequest
                 * @return BindPrometheusManagedGrafanaOutcome
                 */
                BindPrometheusManagedGrafanaOutcome BindPrometheusManagedGrafana(const Model::BindPrometheusManagedGrafanaRequest &request);
                void BindPrometheusManagedGrafanaAsync(const Model::BindPrometheusManagedGrafanaRequest& request, const BindPrometheusManagedGrafanaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindPrometheusManagedGrafanaOutcomeCallable BindPrometheusManagedGrafanaCallable(const Model::BindPrometheusManagedGrafanaRequest& request);

                /**
                 *将告警策略绑定到特定对象
                 * @param req BindingPolicyObjectRequest
                 * @return BindingPolicyObjectOutcome
                 */
                BindingPolicyObjectOutcome BindingPolicyObject(const Model::BindingPolicyObjectRequest &request);
                void BindingPolicyObjectAsync(const Model::BindingPolicyObjectRequest& request, const BindingPolicyObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindingPolicyObjectOutcomeCallable BindingPolicyObjectCallable(const Model::BindingPolicyObjectRequest& request);

                /**
                 *策略绑定标签
                 * @param req BindingPolicyTagRequest
                 * @return BindingPolicyTagOutcome
                 */
                BindingPolicyTagOutcome BindingPolicyTag(const Model::BindingPolicyTagRequest &request);
                void BindingPolicyTagAsync(const Model::BindingPolicyTagRequest& request, const BindingPolicyTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindingPolicyTagOutcomeCallable BindingPolicyTagCallable(const Model::BindingPolicyTagRequest& request);

                /**
                 *强制销毁 Grafana 实例
                 * @param req CleanGrafanaInstanceRequest
                 * @return CleanGrafanaInstanceOutcome
                 */
                CleanGrafanaInstanceOutcome CleanGrafanaInstance(const Model::CleanGrafanaInstanceRequest &request);
                void CleanGrafanaInstanceAsync(const Model::CleanGrafanaInstanceRequest& request, const CleanGrafanaInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CleanGrafanaInstanceOutcomeCallable CleanGrafanaInstanceCallable(const Model::CleanGrafanaInstanceRequest& request);

                /**
                 *创建通知模板
                 * @param req CreateAlarmNoticeRequest
                 * @return CreateAlarmNoticeOutcome
                 */
                CreateAlarmNoticeOutcome CreateAlarmNotice(const Model::CreateAlarmNoticeRequest &request);
                void CreateAlarmNoticeAsync(const Model::CreateAlarmNoticeRequest& request, const CreateAlarmNoticeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAlarmNoticeOutcomeCallable CreateAlarmNoticeCallable(const Model::CreateAlarmNoticeRequest& request);

                /**
                 *创建告警策略
                 * @param req CreateAlarmPolicyRequest
                 * @return CreateAlarmPolicyOutcome
                 */
                CreateAlarmPolicyOutcome CreateAlarmPolicy(const Model::CreateAlarmPolicyRequest &request);
                void CreateAlarmPolicyAsync(const Model::CreateAlarmPolicyRequest& request, const CreateAlarmPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAlarmPolicyOutcomeCallable CreateAlarmPolicyCallable(const Model::CreateAlarmPolicyRequest& request);

                /**
                 *创建告警屏蔽规则
                 * @param req CreateAlarmShieldRequest
                 * @return CreateAlarmShieldOutcome
                 */
                CreateAlarmShieldOutcome CreateAlarmShield(const Model::CreateAlarmShieldRequest &request);
                void CreateAlarmShieldAsync(const Model::CreateAlarmShieldRequest& request, const CreateAlarmShieldAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAlarmShieldOutcomeCallable CreateAlarmShieldCallable(const Model::CreateAlarmShieldRequest& request);

                /**
                 *创建 Prometheus 告警规则。

请注意，**告警对象和告警消息是 Prometheus Rule Annotations 的特殊字段，需要通过 annotations 来传递，对应的 Key 分别为summary/description**，，请参考 [Prometheus Rule更多配置请参考](https://prometheus.io/docs/prometheus/latest/configuration/alerting_rules/)。
                 * @param req CreateAlertRuleRequest
                 * @return CreateAlertRuleOutcome
                 */
                CreateAlertRuleOutcome CreateAlertRule(const Model::CreateAlertRuleRequest &request);
                void CreateAlertRuleAsync(const Model::CreateAlertRuleRequest& request, const CreateAlertRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAlertRuleOutcomeCallable CreateAlertRuleCallable(const Model::CreateAlertRuleRequest& request);

                /**
                 *创建告警条件模板
                 * @param req CreateConditionsTemplateRequest
                 * @return CreateConditionsTemplateOutcome
                 */
                CreateConditionsTemplateOutcome CreateConditionsTemplate(const Model::CreateConditionsTemplateRequest &request);
                void CreateConditionsTemplateAsync(const Model::CreateConditionsTemplateRequest& request, const CreateConditionsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateConditionsTemplateOutcomeCallable CreateConditionsTemplateCallable(const Model::CreateConditionsTemplateRequest& request);

                /**
                 *创建集成中心 exporter 集成，因集成较多，建议控制台创建集成。(前提：已授权创建托管 EKS 集群，验证方式：1. 控制台界面确认，未提示授权则表示已授权创建；2. 通过 DescribePrometheusInstanceInitStatus 接口查询集群状态，如果托管集群不存在，可通过 RunPrometheusInstance 接口创建)
                 * @param req CreateExporterIntegrationRequest
                 * @return CreateExporterIntegrationOutcome
                 */
                CreateExporterIntegrationOutcome CreateExporterIntegration(const Model::CreateExporterIntegrationRequest &request);
                void CreateExporterIntegrationAsync(const Model::CreateExporterIntegrationRequest& request, const CreateExporterIntegrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateExporterIntegrationOutcomeCallable CreateExporterIntegrationCallable(const Model::CreateExporterIntegrationRequest& request);

                /**
                 *注册外部集群到云上 TMP 实例
                 * @param req CreateExternalClusterRequest
                 * @return CreateExternalClusterOutcome
                 */
                CreateExternalClusterOutcome CreateExternalCluster(const Model::CreateExternalClusterRequest &request);
                void CreateExternalClusterAsync(const Model::CreateExternalClusterRequest& request, const CreateExternalClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateExternalClusterOutcomeCallable CreateExternalClusterCallable(const Model::CreateExternalClusterRequest& request);

                /**
                 *本接口（CreateGrafanaInstance）用于创建 Grafana 包年包月实例，默认基础版、到期自动续费、不可使用代金券。
                 * @param req CreateGrafanaInstanceRequest
                 * @return CreateGrafanaInstanceOutcome
                 */
                CreateGrafanaInstanceOutcome CreateGrafanaInstance(const Model::CreateGrafanaInstanceRequest &request);
                void CreateGrafanaInstanceAsync(const Model::CreateGrafanaInstanceRequest& request, const CreateGrafanaInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGrafanaInstanceOutcomeCallable CreateGrafanaInstanceCallable(const Model::CreateGrafanaInstanceRequest& request);

                /**
                 *创建 Grafana 集成配置，其中 Prometheus 集成不通过该接口创建，可参考 BindPrometheusManagedGrafana 接口
                 * @param req CreateGrafanaIntegrationRequest
                 * @return CreateGrafanaIntegrationOutcome
                 */
                CreateGrafanaIntegrationOutcome CreateGrafanaIntegration(const Model::CreateGrafanaIntegrationRequest &request);
                void CreateGrafanaIntegrationAsync(const Model::CreateGrafanaIntegrationRequest& request, const CreateGrafanaIntegrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGrafanaIntegrationOutcomeCallable CreateGrafanaIntegrationCallable(const Model::CreateGrafanaIntegrationRequest& request);

                /**
                 *创建 Grafana 告警通道
                 * @param req CreateGrafanaNotificationChannelRequest
                 * @return CreateGrafanaNotificationChannelOutcome
                 */
                CreateGrafanaNotificationChannelOutcome CreateGrafanaNotificationChannel(const Model::CreateGrafanaNotificationChannelRequest &request);
                void CreateGrafanaNotificationChannelAsync(const Model::CreateGrafanaNotificationChannelRequest& request, const CreateGrafanaNotificationChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGrafanaNotificationChannelOutcomeCallable CreateGrafanaNotificationChannelCallable(const Model::CreateGrafanaNotificationChannelRequest& request);

                /**
                 *增加策略组
                 * @param req CreatePolicyGroupRequest
                 * @return CreatePolicyGroupOutcome
                 */
                CreatePolicyGroupOutcome CreatePolicyGroup(const Model::CreatePolicyGroupRequest &request);
                void CreatePolicyGroupAsync(const Model::CreatePolicyGroupRequest& request, const CreatePolicyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePolicyGroupOutcomeCallable CreatePolicyGroupCallable(const Model::CreatePolicyGroupRequest& request);

                /**
                 *创建 Prometheus CVM Agent
                 * @param req CreatePrometheusAgentRequest
                 * @return CreatePrometheusAgentOutcome
                 */
                CreatePrometheusAgentOutcome CreatePrometheusAgent(const Model::CreatePrometheusAgentRequest &request);
                void CreatePrometheusAgentAsync(const Model::CreatePrometheusAgentRequest& request, const CreatePrometheusAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrometheusAgentOutcomeCallable CreatePrometheusAgentCallable(const Model::CreatePrometheusAgentRequest& request);

                /**
                 *创建Prometheus告警规则分组

告警分组中可包含多条告警规则，分组内告警消息通过告警分组的通知模板发送。
支持单个告警分组下分别创建启用/禁用的告警规则。
                 * @param req CreatePrometheusAlertGroupRequest
                 * @return CreatePrometheusAlertGroupOutcome
                 */
                CreatePrometheusAlertGroupOutcome CreatePrometheusAlertGroup(const Model::CreatePrometheusAlertGroupRequest &request);
                void CreatePrometheusAlertGroupAsync(const Model::CreatePrometheusAlertGroupRequest& request, const CreatePrometheusAlertGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrometheusAlertGroupOutcomeCallable CreatePrometheusAlertGroupCallable(const Model::CreatePrometheusAlertGroupRequest& request);

                /**
                 *创建 Prometheus 告警策略(将逐步废弃，建议使用 CreatePrometheusAlertGroup 创建告警策略)
                 * @param req CreatePrometheusAlertPolicyRequest
                 * @return CreatePrometheusAlertPolicyOutcome
                 */
                CreatePrometheusAlertPolicyOutcome CreatePrometheusAlertPolicy(const Model::CreatePrometheusAlertPolicyRequest &request);
                void CreatePrometheusAlertPolicyAsync(const Model::CreatePrometheusAlertPolicyRequest& request, const CreatePrometheusAlertPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrometheusAlertPolicyOutcomeCallable CreatePrometheusAlertPolicyCallable(const Model::CreatePrometheusAlertPolicyRequest& request);

                /**
                 *与腾讯云可观测融合的2.0实例关联集群
                 * @param req CreatePrometheusClusterAgentRequest
                 * @return CreatePrometheusClusterAgentOutcome
                 */
                CreatePrometheusClusterAgentOutcome CreatePrometheusClusterAgent(const Model::CreatePrometheusClusterAgentRequest &request);
                void CreatePrometheusClusterAgentAsync(const Model::CreatePrometheusClusterAgentRequest& request, const CreatePrometheusClusterAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrometheusClusterAgentOutcomeCallable CreatePrometheusClusterAgentCallable(const Model::CreatePrometheusClusterAgentRequest& request);

                /**
                 *创建prometheus配置
                 * @param req CreatePrometheusConfigRequest
                 * @return CreatePrometheusConfigOutcome
                 */
                CreatePrometheusConfigOutcome CreatePrometheusConfig(const Model::CreatePrometheusConfigRequest &request);
                void CreatePrometheusConfigAsync(const Model::CreatePrometheusConfigRequest& request, const CreatePrometheusConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrometheusConfigOutcomeCallable CreatePrometheusConfigCallable(const Model::CreatePrometheusConfigRequest& request);

                /**
                 *创建全局告警通知渠道。集群内创建的告警规则如果未配置告警通知渠道，默认走全局告警通知渠道（建议在控制台创建告警，集群内创建告警不易维护）
                 * @param req CreatePrometheusGlobalNotificationRequest
                 * @return CreatePrometheusGlobalNotificationOutcome
                 */
                CreatePrometheusGlobalNotificationOutcome CreatePrometheusGlobalNotification(const Model::CreatePrometheusGlobalNotificationRequest &request);
                void CreatePrometheusGlobalNotificationAsync(const Model::CreatePrometheusGlobalNotificationRequest& request, const CreatePrometheusGlobalNotificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrometheusGlobalNotificationOutcomeCallable CreatePrometheusGlobalNotificationCallable(const Model::CreatePrometheusGlobalNotificationRequest& request);

                /**
                 *创建按量 Prometheus 实例，根据用量收费实例
                 * @param req CreatePrometheusMultiTenantInstancePostPayModeRequest
                 * @return CreatePrometheusMultiTenantInstancePostPayModeOutcome
                 */
                CreatePrometheusMultiTenantInstancePostPayModeOutcome CreatePrometheusMultiTenantInstancePostPayMode(const Model::CreatePrometheusMultiTenantInstancePostPayModeRequest &request);
                void CreatePrometheusMultiTenantInstancePostPayModeAsync(const Model::CreatePrometheusMultiTenantInstancePostPayModeRequest& request, const CreatePrometheusMultiTenantInstancePostPayModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrometheusMultiTenantInstancePostPayModeOutcomeCallable CreatePrometheusMultiTenantInstancePostPayModeCallable(const Model::CreatePrometheusMultiTenantInstancePostPayModeRequest& request);

                /**
                 *以Yaml的方式创建聚合规则
                 * @param req CreatePrometheusRecordRuleYamlRequest
                 * @return CreatePrometheusRecordRuleYamlOutcome
                 */
                CreatePrometheusRecordRuleYamlOutcome CreatePrometheusRecordRuleYaml(const Model::CreatePrometheusRecordRuleYamlRequest &request);
                void CreatePrometheusRecordRuleYamlAsync(const Model::CreatePrometheusRecordRuleYamlRequest& request, const CreatePrometheusRecordRuleYamlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrometheusRecordRuleYamlOutcomeCallable CreatePrometheusRecordRuleYamlCallable(const Model::CreatePrometheusRecordRuleYamlRequest& request);

                /**
                 *创建 Prometheus Agent 抓取任务
                 * @param req CreatePrometheusScrapeJobRequest
                 * @return CreatePrometheusScrapeJobOutcome
                 */
                CreatePrometheusScrapeJobOutcome CreatePrometheusScrapeJob(const Model::CreatePrometheusScrapeJobRequest &request);
                void CreatePrometheusScrapeJobAsync(const Model::CreatePrometheusScrapeJobRequest& request, const CreatePrometheusScrapeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrometheusScrapeJobOutcomeCallable CreatePrometheusScrapeJobCallable(const Model::CreatePrometheusScrapeJobRequest& request);

                /**
                 *创建一个云原生Prometheus模板
                 * @param req CreatePrometheusTempRequest
                 * @return CreatePrometheusTempOutcome
                 */
                CreatePrometheusTempOutcome CreatePrometheusTemp(const Model::CreatePrometheusTempRequest &request);
                void CreatePrometheusTempAsync(const Model::CreatePrometheusTempRequest& request, const CreatePrometheusTempAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrometheusTempOutcomeCallable CreatePrometheusTempCallable(const Model::CreatePrometheusTempRequest& request);

                /**
                 *创建 Prometheus 的预聚合规则
                 * @param req CreateRecordingRuleRequest
                 * @return CreateRecordingRuleOutcome
                 */
                CreateRecordingRuleOutcome CreateRecordingRule(const Model::CreateRecordingRuleRequest &request);
                void CreateRecordingRuleAsync(const Model::CreateRecordingRuleRequest& request, const CreateRecordingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRecordingRuleOutcomeCallable CreateRecordingRuleCallable(const Model::CreateRecordingRuleRequest& request);

                /**
                 *Grafana实例授权其他腾讯云用户
                 * @param req CreateSSOAccountRequest
                 * @return CreateSSOAccountOutcome
                 */
                CreateSSOAccountOutcome CreateSSOAccount(const Model::CreateSSOAccountRequest &request);
                void CreateSSOAccountAsync(const Model::CreateSSOAccountRequest& request, const CreateSSOAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSSOAccountOutcomeCallable CreateSSOAccountCallable(const Model::CreateSSOAccountRequest& request);

                /**
                 *在腾讯云容器服务下创建 Prometheus 服务发现。
<p>注意：前提条件，已经通过 Prometheus 控制台集成了对应的腾讯云容器服务，具体请参考
<a href="https://cloud.tencent.com/document/product/248/48859" target="_blank">Agent 安装</a>。</p>
                 * @param req CreateServiceDiscoveryRequest
                 * @return CreateServiceDiscoveryOutcome
                 */
                CreateServiceDiscoveryOutcome CreateServiceDiscovery(const Model::CreateServiceDiscoveryRequest &request);
                void CreateServiceDiscoveryAsync(const Model::CreateServiceDiscoveryRequest& request, const CreateServiceDiscoveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateServiceDiscoveryOutcomeCallable CreateServiceDiscoveryCallable(const Model::CreateServiceDiscoveryRequest& request);

                /**
                 *删除告警通知模板
                 * @param req DeleteAlarmNoticesRequest
                 * @return DeleteAlarmNoticesOutcome
                 */
                DeleteAlarmNoticesOutcome DeleteAlarmNotices(const Model::DeleteAlarmNoticesRequest &request);
                void DeleteAlarmNoticesAsync(const Model::DeleteAlarmNoticesRequest& request, const DeleteAlarmNoticesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAlarmNoticesOutcomeCallable DeleteAlarmNoticesCallable(const Model::DeleteAlarmNoticesRequest& request);

                /**
                 *删除告警策略
                 * @param req DeleteAlarmPolicyRequest
                 * @return DeleteAlarmPolicyOutcome
                 */
                DeleteAlarmPolicyOutcome DeleteAlarmPolicy(const Model::DeleteAlarmPolicyRequest &request);
                void DeleteAlarmPolicyAsync(const Model::DeleteAlarmPolicyRequest& request, const DeleteAlarmPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAlarmPolicyOutcomeCallable DeleteAlarmPolicyCallable(const Model::DeleteAlarmPolicyRequest& request);

                /**
                 *删除告警屏蔽规则
                 * @param req DeleteAlarmShieldsRequest
                 * @return DeleteAlarmShieldsOutcome
                 */
                DeleteAlarmShieldsOutcome DeleteAlarmShields(const Model::DeleteAlarmShieldsRequest &request);
                void DeleteAlarmShieldsAsync(const Model::DeleteAlarmShieldsRequest& request, const DeleteAlarmShieldsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAlarmShieldsOutcomeCallable DeleteAlarmShieldsCallable(const Model::DeleteAlarmShieldsRequest& request);

                /**
                 *批量删除 Prometheus 报警规则
                 * @param req DeleteAlertRulesRequest
                 * @return DeleteAlertRulesOutcome
                 */
                DeleteAlertRulesOutcome DeleteAlertRules(const Model::DeleteAlertRulesRequest &request);
                void DeleteAlertRulesAsync(const Model::DeleteAlertRulesRequest& request, const DeleteAlertRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAlertRulesOutcomeCallable DeleteAlertRulesCallable(const Model::DeleteAlertRulesRequest& request);

                /**
                 *删除集成中心 exporter 集成
                 * @param req DeleteExporterIntegrationRequest
                 * @return DeleteExporterIntegrationOutcome
                 */
                DeleteExporterIntegrationOutcome DeleteExporterIntegration(const Model::DeleteExporterIntegrationRequest &request);
                void DeleteExporterIntegrationAsync(const Model::DeleteExporterIntegrationRequest& request, const DeleteExporterIntegrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteExporterIntegrationOutcomeCallable DeleteExporterIntegrationCallable(const Model::DeleteExporterIntegrationRequest& request);

                /**
                 *本接口（DeleteGrafanaInstance）用于 Grafana 包年包月实例的退费，调用后实例处于停服状态，不可使用，7天后自动销毁。
                 * @param req DeleteGrafanaInstanceRequest
                 * @return DeleteGrafanaInstanceOutcome
                 */
                DeleteGrafanaInstanceOutcome DeleteGrafanaInstance(const Model::DeleteGrafanaInstanceRequest &request);
                void DeleteGrafanaInstanceAsync(const Model::DeleteGrafanaInstanceRequest& request, const DeleteGrafanaInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteGrafanaInstanceOutcomeCallable DeleteGrafanaInstanceCallable(const Model::DeleteGrafanaInstanceRequest& request);

                /**
                 *删除 Grafana 集成配置
                 * @param req DeleteGrafanaIntegrationRequest
                 * @return DeleteGrafanaIntegrationOutcome
                 */
                DeleteGrafanaIntegrationOutcome DeleteGrafanaIntegration(const Model::DeleteGrafanaIntegrationRequest &request);
                void DeleteGrafanaIntegrationAsync(const Model::DeleteGrafanaIntegrationRequest& request, const DeleteGrafanaIntegrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteGrafanaIntegrationOutcomeCallable DeleteGrafanaIntegrationCallable(const Model::DeleteGrafanaIntegrationRequest& request);

                /**
                 *删除 Grafana 告警通道
                 * @param req DeleteGrafanaNotificationChannelRequest
                 * @return DeleteGrafanaNotificationChannelOutcome
                 */
                DeleteGrafanaNotificationChannelOutcome DeleteGrafanaNotificationChannel(const Model::DeleteGrafanaNotificationChannelRequest &request);
                void DeleteGrafanaNotificationChannelAsync(const Model::DeleteGrafanaNotificationChannelRequest& request, const DeleteGrafanaNotificationChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteGrafanaNotificationChannelOutcomeCallable DeleteGrafanaNotificationChannelCallable(const Model::DeleteGrafanaNotificationChannelRequest& request);

                /**
                 *删除告警策略组
                 * @param req DeletePolicyGroupRequest
                 * @return DeletePolicyGroupOutcome
                 */
                DeletePolicyGroupOutcome DeletePolicyGroup(const Model::DeletePolicyGroupRequest &request);
                void DeletePolicyGroupAsync(const Model::DeletePolicyGroupRequest& request, const DeletePolicyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePolicyGroupOutcomeCallable DeletePolicyGroupCallable(const Model::DeletePolicyGroupRequest& request);

                /**
                 *删除Prometheus告警规则分组
                 * @param req DeletePrometheusAlertGroupsRequest
                 * @return DeletePrometheusAlertGroupsOutcome
                 */
                DeletePrometheusAlertGroupsOutcome DeletePrometheusAlertGroups(const Model::DeletePrometheusAlertGroupsRequest &request);
                void DeletePrometheusAlertGroupsAsync(const Model::DeletePrometheusAlertGroupsRequest& request, const DeletePrometheusAlertGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePrometheusAlertGroupsOutcomeCallable DeletePrometheusAlertGroupsCallable(const Model::DeletePrometheusAlertGroupsRequest& request);

                /**
                 *删除2.0实例告警策略
                 * @param req DeletePrometheusAlertPolicyRequest
                 * @return DeletePrometheusAlertPolicyOutcome
                 */
                DeletePrometheusAlertPolicyOutcome DeletePrometheusAlertPolicy(const Model::DeletePrometheusAlertPolicyRequest &request);
                void DeletePrometheusAlertPolicyAsync(const Model::DeletePrometheusAlertPolicyRequest& request, const DeletePrometheusAlertPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePrometheusAlertPolicyOutcomeCallable DeletePrometheusAlertPolicyCallable(const Model::DeletePrometheusAlertPolicyRequest& request);

                /**
                 *解除TMP实例的集群关联
                 * @param req DeletePrometheusClusterAgentRequest
                 * @return DeletePrometheusClusterAgentOutcome
                 */
                DeletePrometheusClusterAgentOutcome DeletePrometheusClusterAgent(const Model::DeletePrometheusClusterAgentRequest &request);
                void DeletePrometheusClusterAgentAsync(const Model::DeletePrometheusClusterAgentRequest& request, const DeletePrometheusClusterAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePrometheusClusterAgentOutcomeCallable DeletePrometheusClusterAgentCallable(const Model::DeletePrometheusClusterAgentRequest& request);

                /**
                 *删除Prometheus配置，如果目标不存在，将返回成功
                 * @param req DeletePrometheusConfigRequest
                 * @return DeletePrometheusConfigOutcome
                 */
                DeletePrometheusConfigOutcome DeletePrometheusConfig(const Model::DeletePrometheusConfigRequest &request);
                void DeletePrometheusConfigAsync(const Model::DeletePrometheusConfigRequest& request, const DeletePrometheusConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePrometheusConfigOutcomeCallable DeletePrometheusConfigCallable(const Model::DeletePrometheusConfigRequest& request);

                /**
                 *删除聚合实例
                 * @param req DeletePrometheusRecordRuleYamlRequest
                 * @return DeletePrometheusRecordRuleYamlOutcome
                 */
                DeletePrometheusRecordRuleYamlOutcome DeletePrometheusRecordRuleYaml(const Model::DeletePrometheusRecordRuleYamlRequest &request);
                void DeletePrometheusRecordRuleYamlAsync(const Model::DeletePrometheusRecordRuleYamlRequest& request, const DeletePrometheusRecordRuleYamlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePrometheusRecordRuleYamlOutcomeCallable DeletePrometheusRecordRuleYamlCallable(const Model::DeletePrometheusRecordRuleYamlRequest& request);

                /**
                 *删除 Prometheus Agent 抓取任务
                 * @param req DeletePrometheusScrapeJobsRequest
                 * @return DeletePrometheusScrapeJobsOutcome
                 */
                DeletePrometheusScrapeJobsOutcome DeletePrometheusScrapeJobs(const Model::DeletePrometheusScrapeJobsRequest &request);
                void DeletePrometheusScrapeJobsAsync(const Model::DeletePrometheusScrapeJobsRequest& request, const DeletePrometheusScrapeJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePrometheusScrapeJobsOutcomeCallable DeletePrometheusScrapeJobsCallable(const Model::DeletePrometheusScrapeJobsRequest& request);

                /**
                 *删除一个云原生Prometheus配置模板
                 * @param req DeletePrometheusTempRequest
                 * @return DeletePrometheusTempOutcome
                 */
                DeletePrometheusTempOutcome DeletePrometheusTemp(const Model::DeletePrometheusTempRequest &request);
                void DeletePrometheusTempAsync(const Model::DeletePrometheusTempRequest& request, const DeletePrometheusTempAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePrometheusTempOutcomeCallable DeletePrometheusTempCallable(const Model::DeletePrometheusTempRequest& request);

                /**
                 *解除模板同步，这将会删除目标中该模板所生产的配置，针对V2版本实例
                 * @param req DeletePrometheusTempSyncRequest
                 * @return DeletePrometheusTempSyncOutcome
                 */
                DeletePrometheusTempSyncOutcome DeletePrometheusTempSync(const Model::DeletePrometheusTempSyncRequest &request);
                void DeletePrometheusTempSyncAsync(const Model::DeletePrometheusTempSyncRequest& request, const DeletePrometheusTempSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePrometheusTempSyncOutcomeCallable DeletePrometheusTempSyncCallable(const Model::DeletePrometheusTempSyncRequest& request);

                /**
                 *批量删除 Prometheus 预聚合规则
                 * @param req DeleteRecordingRulesRequest
                 * @return DeleteRecordingRulesOutcome
                 */
                DeleteRecordingRulesOutcome DeleteRecordingRules(const Model::DeleteRecordingRulesRequest &request);
                void DeleteRecordingRulesAsync(const Model::DeleteRecordingRulesRequest& request, const DeleteRecordingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRecordingRulesOutcomeCallable DeleteRecordingRulesCallable(const Model::DeleteRecordingRulesRequest& request);

                /**
                 *Grafana可视化服务 删除授权用户
                 * @param req DeleteSSOAccountRequest
                 * @return DeleteSSOAccountOutcome
                 */
                DeleteSSOAccountOutcome DeleteSSOAccount(const Model::DeleteSSOAccountRequest &request);
                void DeleteSSOAccountAsync(const Model::DeleteSSOAccountRequest& request, const DeleteSSOAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSSOAccountOutcomeCallable DeleteSSOAccountCallable(const Model::DeleteSSOAccountRequest& request);

                /**
                 *删除在腾讯云容器服务下创建的 Prometheus 服务发现。
<p>注意：前提条件，已经通过 Prometheus 控制台集成了对应的腾讯云容器服务，具体请参考
<a href="https://cloud.tencent.com/document/product/248/48859" target="_blank">Agent 安装</a>。</p>
                 * @param req DeleteServiceDiscoveryRequest
                 * @return DeleteServiceDiscoveryOutcome
                 */
                DeleteServiceDiscoveryOutcome DeleteServiceDiscovery(const Model::DeleteServiceDiscoveryRequest &request);
                void DeleteServiceDiscoveryAsync(const Model::DeleteServiceDiscoveryRequest& request, const DeleteServiceDiscoveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteServiceDiscoveryOutcomeCallable DeleteServiceDiscoveryCallable(const Model::DeleteServiceDiscoveryRequest& request);

                /**
                 *获取平台事件列表
                 * @param req DescribeAccidentEventListRequest
                 * @return DescribeAccidentEventListOutcome
                 */
                DescribeAccidentEventListOutcome DescribeAccidentEventList(const Model::DescribeAccidentEventListRequest &request);
                void DescribeAccidentEventListAsync(const Model::DescribeAccidentEventListRequest& request, const DescribeAccidentEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccidentEventListOutcomeCallable DescribeAccidentEventListCallable(const Model::DescribeAccidentEventListRequest& request);

                /**
                 *查询告警事件列表
                 * @param req DescribeAlarmEventsRequest
                 * @return DescribeAlarmEventsOutcome
                 */
                DescribeAlarmEventsOutcome DescribeAlarmEvents(const Model::DescribeAlarmEventsRequest &request);
                void DescribeAlarmEventsAsync(const Model::DescribeAlarmEventsRequest& request, const DescribeAlarmEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmEventsOutcomeCallable DescribeAlarmEventsCallable(const Model::DescribeAlarmEventsRequest& request);

                /**
                 *查询告警历史

请注意，**如果使用子用户进行告警历史的查询，只能查询到被授权项目下的告警历史**，或不区分项目的产品的告警历史。如何对子账户授予项目的权限，请参考 [访问管理-项目与标签](https://cloud.tencent.com/document/product/598/32738)。
                 * @param req DescribeAlarmHistoriesRequest
                 * @return DescribeAlarmHistoriesOutcome
                 */
                DescribeAlarmHistoriesOutcome DescribeAlarmHistories(const Model::DescribeAlarmHistoriesRequest &request);
                void DescribeAlarmHistoriesAsync(const Model::DescribeAlarmHistoriesRequest& request, const DescribeAlarmHistoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmHistoriesOutcomeCallable DescribeAlarmHistoriesCallable(const Model::DescribeAlarmHistoriesRequest& request);

                /**
                 *查询告警指标列表
                 * @param req DescribeAlarmMetricsRequest
                 * @return DescribeAlarmMetricsOutcome
                 */
                DescribeAlarmMetricsOutcome DescribeAlarmMetrics(const Model::DescribeAlarmMetricsRequest &request);
                void DescribeAlarmMetricsAsync(const Model::DescribeAlarmMetricsRequest& request, const DescribeAlarmMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmMetricsOutcomeCallable DescribeAlarmMetricsCallable(const Model::DescribeAlarmMetricsRequest& request);

                /**
                 *查询单个通知模板的详情
                 * @param req DescribeAlarmNoticeRequest
                 * @return DescribeAlarmNoticeOutcome
                 */
                DescribeAlarmNoticeOutcome DescribeAlarmNotice(const Model::DescribeAlarmNoticeRequest &request);
                void DescribeAlarmNoticeAsync(const Model::DescribeAlarmNoticeRequest& request, const DescribeAlarmNoticeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmNoticeOutcomeCallable DescribeAlarmNoticeCallable(const Model::DescribeAlarmNoticeRequest& request);

                /**
                 *获取告警通知模板所有回调URL
                 * @param req DescribeAlarmNoticeCallbacksRequest
                 * @return DescribeAlarmNoticeCallbacksOutcome
                 */
                DescribeAlarmNoticeCallbacksOutcome DescribeAlarmNoticeCallbacks(const Model::DescribeAlarmNoticeCallbacksRequest &request);
                void DescribeAlarmNoticeCallbacksAsync(const Model::DescribeAlarmNoticeCallbacksRequest& request, const DescribeAlarmNoticeCallbacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmNoticeCallbacksOutcomeCallable DescribeAlarmNoticeCallbacksCallable(const Model::DescribeAlarmNoticeCallbacksRequest& request);

                /**
                 *查询通知模板列表
                 * @param req DescribeAlarmNoticesRequest
                 * @return DescribeAlarmNoticesOutcome
                 */
                DescribeAlarmNoticesOutcome DescribeAlarmNotices(const Model::DescribeAlarmNoticesRequest &request);
                void DescribeAlarmNoticesAsync(const Model::DescribeAlarmNoticesRequest& request, const DescribeAlarmNoticesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmNoticesOutcomeCallable DescribeAlarmNoticesCallable(const Model::DescribeAlarmNoticesRequest& request);

                /**
                 *查询告警策略列表
                 * @param req DescribeAlarmPoliciesRequest
                 * @return DescribeAlarmPoliciesOutcome
                 */
                DescribeAlarmPoliciesOutcome DescribeAlarmPolicies(const Model::DescribeAlarmPoliciesRequest &request);
                void DescribeAlarmPoliciesAsync(const Model::DescribeAlarmPoliciesRequest& request, const DescribeAlarmPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmPoliciesOutcomeCallable DescribeAlarmPoliciesCallable(const Model::DescribeAlarmPoliciesRequest& request);

                /**
                 *获取单个告警策略详情
                 * @param req DescribeAlarmPolicyRequest
                 * @return DescribeAlarmPolicyOutcome
                 */
                DescribeAlarmPolicyOutcome DescribeAlarmPolicy(const Model::DescribeAlarmPolicyRequest &request);
                void DescribeAlarmPolicyAsync(const Model::DescribeAlarmPolicyRequest& request, const DescribeAlarmPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmPolicyOutcomeCallable DescribeAlarmPolicyCallable(const Model::DescribeAlarmPolicyRequest& request);

                /**
                 *获取告警短信配额
                 * @param req DescribeAlarmSmsQuotaRequest
                 * @return DescribeAlarmSmsQuotaOutcome
                 */
                DescribeAlarmSmsQuotaOutcome DescribeAlarmSmsQuota(const Model::DescribeAlarmSmsQuotaRequest &request);
                void DescribeAlarmSmsQuotaAsync(const Model::DescribeAlarmSmsQuotaRequest& request, const DescribeAlarmSmsQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmSmsQuotaOutcomeCallable DescribeAlarmSmsQuotaCallable(const Model::DescribeAlarmSmsQuotaRequest& request);

                /**
                 *Prometheus 报警规则查询接口
                 * @param req DescribeAlertRulesRequest
                 * @return DescribeAlertRulesOutcome
                 */
                DescribeAlertRulesOutcome DescribeAlertRules(const Model::DescribeAlertRulesRequest &request);
                void DescribeAlertRulesAsync(const Model::DescribeAlertRulesRequest& request, const DescribeAlertRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlertRulesOutcomeCallable DescribeAlertRulesCallable(const Model::DescribeAlertRulesRequest& request);

                /**
                 *查询所有名字空间
                 * @param req DescribeAllNamespacesRequest
                 * @return DescribeAllNamespacesOutcome
                 */
                DescribeAllNamespacesOutcome DescribeAllNamespaces(const Model::DescribeAllNamespacesRequest &request);
                void DescribeAllNamespacesAsync(const Model::DescribeAllNamespacesRequest& request, const DescribeAllNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAllNamespacesOutcomeCallable DescribeAllNamespacesCallable(const Model::DescribeAllNamespacesRequest& request);

                /**
                 *获取基础指标属性
                 * @param req DescribeBaseMetricsRequest
                 * @return DescribeBaseMetricsOutcome
                 */
                DescribeBaseMetricsOutcome DescribeBaseMetrics(const Model::DescribeBaseMetricsRequest &request);
                void DescribeBaseMetricsAsync(const Model::DescribeBaseMetricsRequest& request, const DescribeBaseMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaseMetricsOutcomeCallable DescribeBaseMetricsCallable(const Model::DescribeBaseMetricsRequest& request);

                /**
                 *获取基础告警列表
                 * @param req DescribeBasicAlarmListRequest
                 * @return DescribeBasicAlarmListOutcome
                 */
                DescribeBasicAlarmListOutcome DescribeBasicAlarmList(const Model::DescribeBasicAlarmListRequest &request);
                void DescribeBasicAlarmListAsync(const Model::DescribeBasicAlarmListRequest& request, const DescribeBasicAlarmListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBasicAlarmListOutcomeCallable DescribeBasicAlarmListCallable(const Model::DescribeBasicAlarmListRequest& request);

                /**
                 *获取已绑定对象列表
                 * @param req DescribeBindingPolicyObjectListRequest
                 * @return DescribeBindingPolicyObjectListOutcome
                 */
                DescribeBindingPolicyObjectListOutcome DescribeBindingPolicyObjectList(const Model::DescribeBindingPolicyObjectListRequest &request);
                void DescribeBindingPolicyObjectListAsync(const Model::DescribeBindingPolicyObjectListRequest& request, const DescribeBindingPolicyObjectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBindingPolicyObjectListOutcomeCallable DescribeBindingPolicyObjectListCallable(const Model::DescribeBindingPolicyObjectListRequest& request);

                /**
                 *获取prom实例中集群详细的关联状态
                 * @param req DescribeClusterAgentCreatingProgressRequest
                 * @return DescribeClusterAgentCreatingProgressOutcome
                 */
                DescribeClusterAgentCreatingProgressOutcome DescribeClusterAgentCreatingProgress(const Model::DescribeClusterAgentCreatingProgressRequest &request);
                void DescribeClusterAgentCreatingProgressAsync(const Model::DescribeClusterAgentCreatingProgressRequest& request, const DescribeClusterAgentCreatingProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterAgentCreatingProgressOutcomeCallable DescribeClusterAgentCreatingProgressCallable(const Model::DescribeClusterAgentCreatingProgressRequest& request);

                /**
                 *获取条件模板列表
                 * @param req DescribeConditionsTemplateListRequest
                 * @return DescribeConditionsTemplateListOutcome
                 */
                DescribeConditionsTemplateListOutcome DescribeConditionsTemplateList(const Model::DescribeConditionsTemplateListRequest &request);
                void DescribeConditionsTemplateListAsync(const Model::DescribeConditionsTemplateListRequest& request, const DescribeConditionsTemplateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConditionsTemplateListOutcomeCallable DescribeConditionsTemplateListCallable(const Model::DescribeConditionsTemplateListRequest& request);

                /**
                 *列出 Grafana DNS 配置
                 * @param req DescribeDNSConfigRequest
                 * @return DescribeDNSConfigOutcome
                 */
                DescribeDNSConfigOutcome DescribeDNSConfig(const Model::DescribeDNSConfigRequest &request);
                void DescribeDNSConfigAsync(const Model::DescribeDNSConfigRequest& request, const DescribeDNSConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDNSConfigOutcomeCallable DescribeDNSConfigCallable(const Model::DescribeDNSConfigRequest& request);

                /**
                 *查询集成中心 exporter 集成列表
                 * @param req DescribeExporterIntegrationsRequest
                 * @return DescribeExporterIntegrationsOutcome
                 */
                DescribeExporterIntegrationsOutcome DescribeExporterIntegrations(const Model::DescribeExporterIntegrationsRequest &request);
                void DescribeExporterIntegrationsAsync(const Model::DescribeExporterIntegrationsRequest& request, const DescribeExporterIntegrationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExporterIntegrationsOutcomeCallable DescribeExporterIntegrationsCallable(const Model::DescribeExporterIntegrationsRequest& request);

                /**
                 *查看外部集群注册命令
                 * @param req DescribeExternalClusterRegisterCommandRequest
                 * @return DescribeExternalClusterRegisterCommandOutcome
                 */
                DescribeExternalClusterRegisterCommandOutcome DescribeExternalClusterRegisterCommand(const Model::DescribeExternalClusterRegisterCommandRequest &request);
                void DescribeExternalClusterRegisterCommandAsync(const Model::DescribeExternalClusterRegisterCommandRequest& request, const DescribeExternalClusterRegisterCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExternalClusterRegisterCommandOutcomeCallable DescribeExternalClusterRegisterCommandCallable(const Model::DescribeExternalClusterRegisterCommandRequest& request);

                /**
                 *查看外部集群 Agent 卸载命令
                 * @param req DescribeExternalClusterUninstallCommandRequest
                 * @return DescribeExternalClusterUninstallCommandOutcome
                 */
                DescribeExternalClusterUninstallCommandOutcome DescribeExternalClusterUninstallCommand(const Model::DescribeExternalClusterUninstallCommandRequest &request);
                void DescribeExternalClusterUninstallCommandAsync(const Model::DescribeExternalClusterUninstallCommandRequest& request, const DescribeExternalClusterUninstallCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExternalClusterUninstallCommandOutcomeCallable DescribeExternalClusterUninstallCommandCallable(const Model::DescribeExternalClusterUninstallCommandRequest& request);

                /**
                 *列出 Grafana 所有告警通道
                 * @param req DescribeGrafanaChannelsRequest
                 * @return DescribeGrafanaChannelsOutcome
                 */
                DescribeGrafanaChannelsOutcome DescribeGrafanaChannels(const Model::DescribeGrafanaChannelsRequest &request);
                void DescribeGrafanaChannelsAsync(const Model::DescribeGrafanaChannelsRequest& request, const DescribeGrafanaChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGrafanaChannelsOutcomeCallable DescribeGrafanaChannelsCallable(const Model::DescribeGrafanaChannelsRequest& request);

                /**
                 *列出 Grafana 的设置，即 grafana.ini 文件内容
                 * @param req DescribeGrafanaConfigRequest
                 * @return DescribeGrafanaConfigOutcome
                 */
                DescribeGrafanaConfigOutcome DescribeGrafanaConfig(const Model::DescribeGrafanaConfigRequest &request);
                void DescribeGrafanaConfigAsync(const Model::DescribeGrafanaConfigRequest& request, const DescribeGrafanaConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGrafanaConfigOutcomeCallable DescribeGrafanaConfigCallable(const Model::DescribeGrafanaConfigRequest& request);

                /**
                 *列出 Grafana 环境变量
                 * @param req DescribeGrafanaEnvironmentsRequest
                 * @return DescribeGrafanaEnvironmentsOutcome
                 */
                DescribeGrafanaEnvironmentsOutcome DescribeGrafanaEnvironments(const Model::DescribeGrafanaEnvironmentsRequest &request);
                void DescribeGrafanaEnvironmentsAsync(const Model::DescribeGrafanaEnvironmentsRequest& request, const DescribeGrafanaEnvironmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGrafanaEnvironmentsOutcomeCallable DescribeGrafanaEnvironmentsCallable(const Model::DescribeGrafanaEnvironmentsRequest& request);

                /**
                 *列出用户所有的 Grafana 服务
                 * @param req DescribeGrafanaInstancesRequest
                 * @return DescribeGrafanaInstancesOutcome
                 */
                DescribeGrafanaInstancesOutcome DescribeGrafanaInstances(const Model::DescribeGrafanaInstancesRequest &request);
                void DescribeGrafanaInstancesAsync(const Model::DescribeGrafanaInstancesRequest& request, const DescribeGrafanaInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGrafanaInstancesOutcomeCallable DescribeGrafanaInstancesCallable(const Model::DescribeGrafanaInstancesRequest& request);

                /**
                 *列出 Grafana 已安装的集成
                 * @param req DescribeGrafanaIntegrationsRequest
                 * @return DescribeGrafanaIntegrationsOutcome
                 */
                DescribeGrafanaIntegrationsOutcome DescribeGrafanaIntegrations(const Model::DescribeGrafanaIntegrationsRequest &request);
                void DescribeGrafanaIntegrationsAsync(const Model::DescribeGrafanaIntegrationsRequest& request, const DescribeGrafanaIntegrationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGrafanaIntegrationsOutcomeCallable DescribeGrafanaIntegrationsCallable(const Model::DescribeGrafanaIntegrationsRequest& request);

                /**
                 *列出 Grafana 告警通道
                 * @param req DescribeGrafanaNotificationChannelsRequest
                 * @return DescribeGrafanaNotificationChannelsOutcome
                 */
                DescribeGrafanaNotificationChannelsOutcome DescribeGrafanaNotificationChannels(const Model::DescribeGrafanaNotificationChannelsRequest &request);
                void DescribeGrafanaNotificationChannelsAsync(const Model::DescribeGrafanaNotificationChannelsRequest& request, const DescribeGrafanaNotificationChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGrafanaNotificationChannelsOutcomeCallable DescribeGrafanaNotificationChannelsCallable(const Model::DescribeGrafanaNotificationChannelsRequest& request);

                /**
                 *列出 Grafana 白名单
                 * @param req DescribeGrafanaWhiteListRequest
                 * @return DescribeGrafanaWhiteListOutcome
                 */
                DescribeGrafanaWhiteListOutcome DescribeGrafanaWhiteList(const Model::DescribeGrafanaWhiteListRequest &request);
                void DescribeGrafanaWhiteListAsync(const Model::DescribeGrafanaWhiteListRequest& request, const DescribeGrafanaWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGrafanaWhiteListOutcomeCallable DescribeGrafanaWhiteListCallable(const Model::DescribeGrafanaWhiteListRequest& request);

                /**
                 *列出实例已安装的插件
                 * @param req DescribeInstalledPluginsRequest
                 * @return DescribeInstalledPluginsOutcome
                 */
                DescribeInstalledPluginsOutcome DescribeInstalledPlugins(const Model::DescribeInstalledPluginsRequest &request);
                void DescribeInstalledPluginsAsync(const Model::DescribeInstalledPluginsRequest& request, const DescribeInstalledPluginsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstalledPluginsOutcomeCallable DescribeInstalledPluginsCallable(const Model::DescribeInstalledPluginsRequest& request);

                /**
                 *获取资源消耗页概览
                 * @param req DescribeMonitorResourceInfoRequest
                 * @return DescribeMonitorResourceInfoOutcome
                 */
                DescribeMonitorResourceInfoOutcome DescribeMonitorResourceInfo(const Model::DescribeMonitorResourceInfoRequest &request);
                void DescribeMonitorResourceInfoAsync(const Model::DescribeMonitorResourceInfoRequest& request, const DescribeMonitorResourceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMonitorResourceInfoOutcomeCallable DescribeMonitorResourceInfoCallable(const Model::DescribeMonitorResourceInfoRequest& request);

                /**
                 *腾讯云可观测平台支持多种类型的监控，此接口列出支持的所有类型
                 * @param req DescribeMonitorTypesRequest
                 * @return DescribeMonitorTypesOutcome
                 */
                DescribeMonitorTypesOutcome DescribeMonitorTypes(const Model::DescribeMonitorTypesRequest &request);
                void DescribeMonitorTypesAsync(const Model::DescribeMonitorTypesRequest& request, const DescribeMonitorTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMonitorTypesOutcomeCallable DescribeMonitorTypesCallable(const Model::DescribeMonitorTypesRequest& request);

                /**
                 *查询周期内电话流水总数
                 * @param req DescribePhoneAlarmFlowTotalCountRequest
                 * @return DescribePhoneAlarmFlowTotalCountOutcome
                 */
                DescribePhoneAlarmFlowTotalCountOutcome DescribePhoneAlarmFlowTotalCount(const Model::DescribePhoneAlarmFlowTotalCountRequest &request);
                void DescribePhoneAlarmFlowTotalCountAsync(const Model::DescribePhoneAlarmFlowTotalCountRequest& request, const DescribePhoneAlarmFlowTotalCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePhoneAlarmFlowTotalCountOutcomeCallable DescribePhoneAlarmFlowTotalCountCallable(const Model::DescribePhoneAlarmFlowTotalCountRequest& request);

                /**
                 *列出可安装的所有 Grafana 插件。
                 * @param req DescribePluginOverviewsRequest
                 * @return DescribePluginOverviewsOutcome
                 */
                DescribePluginOverviewsOutcome DescribePluginOverviews(const Model::DescribePluginOverviewsRequest &request);
                void DescribePluginOverviewsAsync(const Model::DescribePluginOverviewsRequest& request, const DescribePluginOverviewsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePluginOverviewsOutcomeCallable DescribePluginOverviewsCallable(const Model::DescribePluginOverviewsRequest& request);

                /**
                 *获取基础告警策略条件
                 * @param req DescribePolicyConditionListRequest
                 * @return DescribePolicyConditionListOutcome
                 */
                DescribePolicyConditionListOutcome DescribePolicyConditionList(const Model::DescribePolicyConditionListRequest &request);
                void DescribePolicyConditionListAsync(const Model::DescribePolicyConditionListRequest& request, const DescribePolicyConditionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePolicyConditionListOutcomeCallable DescribePolicyConditionListCallable(const Model::DescribePolicyConditionListRequest& request);

                /**
                 *获取基础策略组详情
                 * @param req DescribePolicyGroupInfoRequest
                 * @return DescribePolicyGroupInfoOutcome
                 */
                DescribePolicyGroupInfoOutcome DescribePolicyGroupInfo(const Model::DescribePolicyGroupInfoRequest &request);
                void DescribePolicyGroupInfoAsync(const Model::DescribePolicyGroupInfoRequest& request, const DescribePolicyGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePolicyGroupInfoOutcomeCallable DescribePolicyGroupInfoCallable(const Model::DescribePolicyGroupInfoRequest& request);

                /**
                 *获取基础策略告警组列表
                 * @param req DescribePolicyGroupListRequest
                 * @return DescribePolicyGroupListOutcome
                 */
                DescribePolicyGroupListOutcome DescribePolicyGroupList(const Model::DescribePolicyGroupListRequest &request);
                void DescribePolicyGroupListAsync(const Model::DescribePolicyGroupListRequest& request, const DescribePolicyGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePolicyGroupListOutcomeCallable DescribePolicyGroupListCallable(const Model::DescribePolicyGroupListRequest& request);

                /**
                 *查询策略组在每个地域下面绑定的对象数统计
                 * @param req DescribePolicyObjectCountRequest
                 * @return DescribePolicyObjectCountOutcome
                 */
                DescribePolicyObjectCountOutcome DescribePolicyObjectCount(const Model::DescribePolicyObjectCountRequest &request);
                void DescribePolicyObjectCountAsync(const Model::DescribePolicyObjectCountRequest& request, const DescribePolicyObjectCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePolicyObjectCountOutcomeCallable DescribePolicyObjectCountCallable(const Model::DescribePolicyObjectCountRequest& request);

                /**
                 *分页获取产品事件的列表
                 * @param req DescribeProductEventListRequest
                 * @return DescribeProductEventListOutcome
                 */
                DescribeProductEventListOutcome DescribeProductEventList(const Model::DescribeProductEventListRequest &request);
                void DescribeProductEventListAsync(const Model::DescribeProductEventListRequest& request, const DescribeProductEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProductEventListOutcomeCallable DescribeProductEventListCallable(const Model::DescribeProductEventListRequest& request);

                /**
                 *查询腾讯云可观测平台云产品列表，支持云服务器CVM、云数据库、云消息队列、负载均衡、容器服务、专线等云产品。
                 * @param req DescribeProductListRequest
                 * @return DescribeProductListOutcome
                 */
                DescribeProductListOutcome DescribeProductList(const Model::DescribeProductListRequest &request);
                void DescribeProductListAsync(const Model::DescribeProductListRequest& request, const DescribeProductListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProductListOutcomeCallable DescribeProductListCallable(const Model::DescribeProductListRequest& request);

                /**
                 *获取关联目标集群的实例列表
                 * @param req DescribePrometheusAgentInstancesRequest
                 * @return DescribePrometheusAgentInstancesOutcome
                 */
                DescribePrometheusAgentInstancesOutcome DescribePrometheusAgentInstances(const Model::DescribePrometheusAgentInstancesRequest &request);
                void DescribePrometheusAgentInstancesAsync(const Model::DescribePrometheusAgentInstancesRequest& request, const DescribePrometheusAgentInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusAgentInstancesOutcomeCallable DescribePrometheusAgentInstancesCallable(const Model::DescribePrometheusAgentInstancesRequest& request);

                /**
                 *列出 Prometheus CVM Agent
                 * @param req DescribePrometheusAgentsRequest
                 * @return DescribePrometheusAgentsOutcome
                 */
                DescribePrometheusAgentsOutcome DescribePrometheusAgents(const Model::DescribePrometheusAgentsRequest &request);
                void DescribePrometheusAgentsAsync(const Model::DescribePrometheusAgentsRequest& request, const DescribePrometheusAgentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusAgentsOutcomeCallable DescribePrometheusAgentsCallable(const Model::DescribePrometheusAgentsRequest& request);

                /**
                 *查询给定prometheus下的告警分组
                 * @param req DescribePrometheusAlertGroupsRequest
                 * @return DescribePrometheusAlertGroupsOutcome
                 */
                DescribePrometheusAlertGroupsOutcome DescribePrometheusAlertGroups(const Model::DescribePrometheusAlertGroupsRequest &request);
                void DescribePrometheusAlertGroupsAsync(const Model::DescribePrometheusAlertGroupsRequest& request, const DescribePrometheusAlertGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusAlertGroupsOutcomeCallable DescribePrometheusAlertGroupsCallable(const Model::DescribePrometheusAlertGroupsRequest& request);

                /**
                 *获取2.0实例告警策略列表
                 * @param req DescribePrometheusAlertPolicyRequest
                 * @return DescribePrometheusAlertPolicyOutcome
                 */
                DescribePrometheusAlertPolicyOutcome DescribePrometheusAlertPolicy(const Model::DescribePrometheusAlertPolicyRequest &request);
                void DescribePrometheusAlertPolicyAsync(const Model::DescribePrometheusAlertPolicyRequest& request, const DescribePrometheusAlertPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusAlertPolicyOutcomeCallable DescribePrometheusAlertPolicyCallable(const Model::DescribePrometheusAlertPolicyRequest& request);

                /**
                 *获取TMP实例关联集群列表
                 * @param req DescribePrometheusClusterAgentsRequest
                 * @return DescribePrometheusClusterAgentsOutcome
                 */
                DescribePrometheusClusterAgentsOutcome DescribePrometheusClusterAgents(const Model::DescribePrometheusClusterAgentsRequest &request);
                void DescribePrometheusClusterAgentsAsync(const Model::DescribePrometheusClusterAgentsRequest& request, const DescribePrometheusClusterAgentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusClusterAgentsOutcomeCallable DescribePrometheusClusterAgentsCallable(const Model::DescribePrometheusClusterAgentsRequest& request);

                /**
                 *拉取Prometheus配置
                 * @param req DescribePrometheusConfigRequest
                 * @return DescribePrometheusConfigOutcome
                 */
                DescribePrometheusConfigOutcome DescribePrometheusConfig(const Model::DescribePrometheusConfigRequest &request);
                void DescribePrometheusConfigAsync(const Model::DescribePrometheusConfigRequest& request, const DescribePrometheusConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusConfigOutcomeCallable DescribePrometheusConfigCallable(const Model::DescribePrometheusConfigRequest& request);

                /**
                 *获得实例级别抓取配置
                 * @param req DescribePrometheusGlobalConfigRequest
                 * @return DescribePrometheusGlobalConfigOutcome
                 */
                DescribePrometheusGlobalConfigOutcome DescribePrometheusGlobalConfig(const Model::DescribePrometheusGlobalConfigRequest &request);
                void DescribePrometheusGlobalConfigAsync(const Model::DescribePrometheusGlobalConfigRequest& request, const DescribePrometheusGlobalConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusGlobalConfigOutcomeCallable DescribePrometheusGlobalConfigCallable(const Model::DescribePrometheusGlobalConfigRequest& request);

                /**
                 *查询全局告警通知渠道
                 * @param req DescribePrometheusGlobalNotificationRequest
                 * @return DescribePrometheusGlobalNotificationOutcome
                 */
                DescribePrometheusGlobalNotificationOutcome DescribePrometheusGlobalNotification(const Model::DescribePrometheusGlobalNotificationRequest &request);
                void DescribePrometheusGlobalNotificationAsync(const Model::DescribePrometheusGlobalNotificationRequest& request, const DescribePrometheusGlobalNotificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusGlobalNotificationOutcomeCallable DescribePrometheusGlobalNotificationCallable(const Model::DescribePrometheusGlobalNotificationRequest& request);

                /**
                 *获取TMP实例详情
                 * @param req DescribePrometheusInstanceDetailRequest
                 * @return DescribePrometheusInstanceDetailOutcome
                 */
                DescribePrometheusInstanceDetailOutcome DescribePrometheusInstanceDetail(const Model::DescribePrometheusInstanceDetailRequest &request);
                void DescribePrometheusInstanceDetailAsync(const Model::DescribePrometheusInstanceDetailRequest& request, const DescribePrometheusInstanceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusInstanceDetailOutcomeCallable DescribePrometheusInstanceDetailCallable(const Model::DescribePrometheusInstanceDetailRequest& request);

                /**
                 *获取2.0实例初始化任务状态
                 * @param req DescribePrometheusInstanceInitStatusRequest
                 * @return DescribePrometheusInstanceInitStatusOutcome
                 */
                DescribePrometheusInstanceInitStatusOutcome DescribePrometheusInstanceInitStatus(const Model::DescribePrometheusInstanceInitStatusRequest &request);
                void DescribePrometheusInstanceInitStatusAsync(const Model::DescribePrometheusInstanceInitStatusRequest& request, const DescribePrometheusInstanceInitStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusInstanceInitStatusOutcomeCallable DescribePrometheusInstanceInitStatusCallable(const Model::DescribePrometheusInstanceInitStatusRequest& request);

                /**
                 *查询Prometheus按量实例用量
                 * @param req DescribePrometheusInstanceUsageRequest
                 * @return DescribePrometheusInstanceUsageOutcome
                 */
                DescribePrometheusInstanceUsageOutcome DescribePrometheusInstanceUsage(const Model::DescribePrometheusInstanceUsageRequest &request);
                void DescribePrometheusInstanceUsageAsync(const Model::DescribePrometheusInstanceUsageRequest& request, const DescribePrometheusInstanceUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusInstanceUsageOutcomeCallable DescribePrometheusInstanceUsageCallable(const Model::DescribePrometheusInstanceUsageRequest& request);

                /**
                 *本接口 (DescribePrometheusInstances) 用于查询一个或多个实例的详细信息。
<ul>
<li>可以根据实例ID、实例名称或者实例状态等信息来查询实例的详细信息</li>
<li>如果参数为空，返回当前用户一定数量（Limit所指定的数量，默认为20）的实例。</li>
</ul>
                 * @param req DescribePrometheusInstancesRequest
                 * @return DescribePrometheusInstancesOutcome
                 */
                DescribePrometheusInstancesOutcome DescribePrometheusInstances(const Model::DescribePrometheusInstancesRequest &request);
                void DescribePrometheusInstancesAsync(const Model::DescribePrometheusInstancesRequest& request, const DescribePrometheusInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusInstancesOutcomeCallable DescribePrometheusInstancesCallable(const Model::DescribePrometheusInstancesRequest& request);

                /**
                 *获取与 Prometheus 监控融合实例列表
                 * @param req DescribePrometheusInstancesOverviewRequest
                 * @return DescribePrometheusInstancesOverviewOutcome
                 */
                DescribePrometheusInstancesOverviewOutcome DescribePrometheusInstancesOverview(const Model::DescribePrometheusInstancesOverviewRequest &request);
                void DescribePrometheusInstancesOverviewAsync(const Model::DescribePrometheusInstancesOverviewRequest& request, const DescribePrometheusInstancesOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusInstancesOverviewOutcomeCallable DescribePrometheusInstancesOverviewCallable(const Model::DescribePrometheusInstancesOverviewRequest& request);

                /**
                 *获取prometheus集成指标
                 * @param req DescribePrometheusIntegrationMetricsRequest
                 * @return DescribePrometheusIntegrationMetricsOutcome
                 */
                DescribePrometheusIntegrationMetricsOutcome DescribePrometheusIntegrationMetrics(const Model::DescribePrometheusIntegrationMetricsRequest &request);
                void DescribePrometheusIntegrationMetricsAsync(const Model::DescribePrometheusIntegrationMetricsRequest& request, const DescribePrometheusIntegrationMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusIntegrationMetricsOutcomeCallable DescribePrometheusIntegrationMetricsCallable(const Model::DescribePrometheusIntegrationMetricsRequest& request);

                /**
                 *获取聚合规则列表，包含关联集群内crd资源创建的record rule
                 * @param req DescribePrometheusRecordRulesRequest
                 * @return DescribePrometheusRecordRulesOutcome
                 */
                DescribePrometheusRecordRulesOutcome DescribePrometheusRecordRules(const Model::DescribePrometheusRecordRulesRequest &request);
                void DescribePrometheusRecordRulesAsync(const Model::DescribePrometheusRecordRulesRequest& request, const DescribePrometheusRecordRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusRecordRulesOutcomeCallable DescribePrometheusRecordRulesCallable(const Model::DescribePrometheusRecordRulesRequest& request);

                /**
                 *列出 Prometheus 服务所有可用的地域
                 * @param req DescribePrometheusRegionsRequest
                 * @return DescribePrometheusRegionsOutcome
                 */
                DescribePrometheusRegionsOutcome DescribePrometheusRegions(const Model::DescribePrometheusRegionsRequest &request);
                void DescribePrometheusRegionsAsync(const Model::DescribePrometheusRegionsRequest& request, const DescribePrometheusRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusRegionsOutcomeCallable DescribePrometheusRegionsCallable(const Model::DescribePrometheusRegionsRequest& request);

                /**
                 *列出 Prometheus 抓取任务
                 * @param req DescribePrometheusScrapeJobsRequest
                 * @return DescribePrometheusScrapeJobsOutcome
                 */
                DescribePrometheusScrapeJobsOutcome DescribePrometheusScrapeJobs(const Model::DescribePrometheusScrapeJobsRequest &request);
                void DescribePrometheusScrapeJobsAsync(const Model::DescribePrometheusScrapeJobsRequest& request, const DescribePrometheusScrapeJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusScrapeJobsOutcomeCallable DescribePrometheusScrapeJobsCallable(const Model::DescribePrometheusScrapeJobsRequest& request);

                /**
                 *获取targets信息，在过滤条件中指定job名称时返回targets详情，否则仅返回数量
                 * @param req DescribePrometheusTargetsTMPRequest
                 * @return DescribePrometheusTargetsTMPOutcome
                 */
                DescribePrometheusTargetsTMPOutcome DescribePrometheusTargetsTMP(const Model::DescribePrometheusTargetsTMPRequest &request);
                void DescribePrometheusTargetsTMPAsync(const Model::DescribePrometheusTargetsTMPRequest& request, const DescribePrometheusTargetsTMPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusTargetsTMPOutcomeCallable DescribePrometheusTargetsTMPCallable(const Model::DescribePrometheusTargetsTMPRequest& request);

                /**
                 *拉取模板列表，默认模板将总是在最前面
                 * @param req DescribePrometheusTempRequest
                 * @return DescribePrometheusTempOutcome
                 */
                DescribePrometheusTempOutcome DescribePrometheusTemp(const Model::DescribePrometheusTempRequest &request);
                void DescribePrometheusTempAsync(const Model::DescribePrometheusTempRequest& request, const DescribePrometheusTempAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusTempOutcomeCallable DescribePrometheusTempCallable(const Model::DescribePrometheusTempRequest& request);

                /**
                 *获取模板关联实例信息，针对V2版本实例
                 * @param req DescribePrometheusTempSyncRequest
                 * @return DescribePrometheusTempSyncOutcome
                 */
                DescribePrometheusTempSyncOutcome DescribePrometheusTempSync(const Model::DescribePrometheusTempSyncRequest &request);
                void DescribePrometheusTempSyncAsync(const Model::DescribePrometheusTempSyncRequest& request, const DescribePrometheusTempSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusTempSyncOutcomeCallable DescribePrometheusTempSyncCallable(const Model::DescribePrometheusTempSyncRequest& request);

                /**
                 *列出 Prometheus 服务可用区。
                 * @param req DescribePrometheusZonesRequest
                 * @return DescribePrometheusZonesOutcome
                 */
                DescribePrometheusZonesOutcome DescribePrometheusZones(const Model::DescribePrometheusZonesRequest &request);
                void DescribePrometheusZonesAsync(const Model::DescribePrometheusZonesRequest& request, const DescribePrometheusZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusZonesOutcomeCallable DescribePrometheusZonesCallable(const Model::DescribePrometheusZonesRequest& request);

                /**
                 *根据条件查询 Prometheus 预聚合规则
                 * @param req DescribeRecordingRulesRequest
                 * @return DescribeRecordingRulesOutcome
                 */
                DescribeRecordingRulesOutcome DescribeRecordingRules(const Model::DescribeRecordingRulesRequest &request);
                void DescribeRecordingRulesAsync(const Model::DescribeRecordingRulesRequest& request, const DescribeRecordingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRecordingRulesOutcomeCallable DescribeRecordingRulesCallable(const Model::DescribeRecordingRulesRequest& request);

                /**
                 *获取多写配置详情
                 * @param req DescribeRemoteURLsRequest
                 * @return DescribeRemoteURLsOutcome
                 */
                DescribeRemoteURLsOutcome DescribeRemoteURLs(const Model::DescribeRemoteURLsRequest &request);
                void DescribeRemoteURLsAsync(const Model::DescribeRemoteURLsRequest& request, const DescribeRemoteURLsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRemoteURLsOutcomeCallable DescribeRemoteURLsCallable(const Model::DescribeRemoteURLsRequest& request);

                /**
                 *列出当前grafana实例的所有授权账号
                 * @param req DescribeSSOAccountRequest
                 * @return DescribeSSOAccountOutcome
                 */
                DescribeSSOAccountOutcome DescribeSSOAccount(const Model::DescribeSSOAccountRequest &request);
                void DescribeSSOAccountAsync(const Model::DescribeSSOAccountRequest& request, const DescribeSSOAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSSOAccountOutcomeCallable DescribeSSOAccountCallable(const Model::DescribeSSOAccountRequest& request);

                /**
                 *列出在腾讯云容器服务下创建的 Prometheus 服务发现。
<p>注意：前提条件，已经通过 Prometheus 控制台集成了对应的腾讯云容器服务，具体请参考
<a href="https://cloud.tencent.com/document/product/248/48859" target="_blank">Agent 安装</a>。</p>
                 * @param req DescribeServiceDiscoveryRequest
                 * @return DescribeServiceDiscoveryOutcome
                 */
                DescribeServiceDiscoveryOutcome DescribeServiceDiscovery(const Model::DescribeServiceDiscoveryRequest &request);
                void DescribeServiceDiscoveryAsync(const Model::DescribeServiceDiscoveryRequest& request, const DescribeServiceDiscoveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServiceDiscoveryOutcomeCallable DescribeServiceDiscoveryCallable(const Model::DescribeServiceDiscoveryRequest& request);

                /**
                 *根据维度条件查询监控数据
                 * @param req DescribeStatisticDataRequest
                 * @return DescribeStatisticDataOutcome
                 */
                DescribeStatisticDataOutcome DescribeStatisticData(const Model::DescribeStatisticDataRequest &request);
                void DescribeStatisticDataAsync(const Model::DescribeStatisticDataRequest& request, const DescribeStatisticDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStatisticDataOutcomeCallable DescribeStatisticDataCallable(const Model::DescribeStatisticDataRequest& request);

                /**
                 *彻底删除 Prometheus 实例相关数据，给定的实例必须先被 Terminate(该接口是异步接口，实例是否释放需要通过 DescribePrometheusInstances 接口返回的状态来判断)。
                 * @param req DestroyPrometheusInstanceRequest
                 * @return DestroyPrometheusInstanceOutcome
                 */
                DestroyPrometheusInstanceOutcome DestroyPrometheusInstance(const Model::DestroyPrometheusInstanceRequest &request);
                void DestroyPrometheusInstanceAsync(const Model::DestroyPrometheusInstanceRequest& request, const DestroyPrometheusInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyPrometheusInstanceOutcomeCallable DestroyPrometheusInstanceCallable(const Model::DestroyPrometheusInstanceRequest& request);

                /**
                 *设置 Grafana 公网访问
                 * @param req EnableGrafanaInternetRequest
                 * @return EnableGrafanaInternetOutcome
                 */
                EnableGrafanaInternetOutcome EnableGrafanaInternet(const Model::EnableGrafanaInternetRequest &request);
                void EnableGrafanaInternetAsync(const Model::EnableGrafanaInternetRequest& request, const EnableGrafanaInternetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableGrafanaInternetOutcomeCallable EnableGrafanaInternetCallable(const Model::EnableGrafanaInternetRequest& request);

                /**
                 *设置 Grafana 单点登录，使用腾讯云账号
                 * @param req EnableGrafanaSSORequest
                 * @return EnableGrafanaSSOOutcome
                 */
                EnableGrafanaSSOOutcome EnableGrafanaSSO(const Model::EnableGrafanaSSORequest &request);
                void EnableGrafanaSSOAsync(const Model::EnableGrafanaSSORequest& request, const EnableGrafanaSSOAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableGrafanaSSOOutcomeCallable EnableGrafanaSSOCallable(const Model::EnableGrafanaSSORequest& request);

                /**
                 *SSO单点登录时，设置是否cam鉴权
                 * @param req EnableSSOCamCheckRequest
                 * @return EnableSSOCamCheckOutcome
                 */
                EnableSSOCamCheckOutcome EnableSSOCamCheck(const Model::EnableSSOCamCheckRequest &request);
                void EnableSSOCamCheckAsync(const Model::EnableSSOCamCheckRequest& request, const EnableSSOCamCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableSSOCamCheckOutcomeCallable EnableSSOCamCheckCallable(const Model::EnableSSOCamCheckRequest& request);

                /**
                 *Prometheus 内部动态 api 代理，仅内部使用
                 * @param req ExportPrometheusReadOnlyDynamicAPIRequest
                 * @return ExportPrometheusReadOnlyDynamicAPIOutcome
                 */
                ExportPrometheusReadOnlyDynamicAPIOutcome ExportPrometheusReadOnlyDynamicAPI(const Model::ExportPrometheusReadOnlyDynamicAPIRequest &request);
                void ExportPrometheusReadOnlyDynamicAPIAsync(const Model::ExportPrometheusReadOnlyDynamicAPIRequest& request, const ExportPrometheusReadOnlyDynamicAPIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportPrometheusReadOnlyDynamicAPIOutcomeCallable ExportPrometheusReadOnlyDynamicAPICallable(const Model::ExportPrometheusReadOnlyDynamicAPIRequest& request);

                /**
                 *获取云产品的监控数据。此接口不适用于拉取容器服务监控数据，如需拉取容器服务监控数据，请使用[根据维度条件查询监控数据](https://cloud.tencent.com/document/product/248/51845)接口。
传入产品的命名空间、对象维度描述和监控指标即可获得相应的监控数据。
接口调用限制：单请求最多可支持批量拉取10个实例的监控数据，单请求的数据点数限制为1440个。
若您需要调用的指标、对象较多，可能存在因限频出现拉取失败的情况，建议尽量将请求按时间维度均摊。
参数SpecifyStatistics目前可支持返回三种统计方式（avg，max，min），分别为二进制1，2，4。
例子：3:avg+max，5:avg+min，6:max+min，7:avg+max+min
拉取数据的粒度和统计方式的对应关系尽量在接入平台进行配置，如果没有配置对应统计方式，请提工单反馈。

>?
>- 2022年9月1日起，腾讯云可观测平台开始对GetMonitorData接口计费。每个主账号每月可获得100万次免费请求额度，超过免费额度后如需继续调用接口需要开通 [API请求按量付费](https://buy.cloud.tencent.com/APIRequestBuy)。计费规则可查看[API计费文档](https://cloud.tencent.com/document/product/248/77914)。
                 * @param req GetMonitorDataRequest
                 * @return GetMonitorDataOutcome
                 */
                GetMonitorDataOutcome GetMonitorData(const Model::GetMonitorDataRequest &request);
                void GetMonitorDataAsync(const Model::GetMonitorDataRequest& request, const GetMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetMonitorDataOutcomeCallable GetMonitorDataCallable(const Model::GetMonitorDataRequest& request);

                /**
                 *获取 Prometheus Agent 管理相关的命令行
                 * @param req GetPrometheusAgentManagementCommandRequest
                 * @return GetPrometheusAgentManagementCommandOutcome
                 */
                GetPrometheusAgentManagementCommandOutcome GetPrometheusAgentManagementCommand(const Model::GetPrometheusAgentManagementCommandRequest &request);
                void GetPrometheusAgentManagementCommandAsync(const Model::GetPrometheusAgentManagementCommandRequest& request, const GetPrometheusAgentManagementCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetPrometheusAgentManagementCommandOutcomeCallable GetPrometheusAgentManagementCommandCallable(const Model::GetPrometheusAgentManagementCommandRequest& request);

                /**
                 *支持TopN查询，对于给定的监控指标和时间区间，按照指标大小按序返回不同维度组合及数据。
                 * @param req GetTopNMonitorDataRequest
                 * @return GetTopNMonitorDataOutcome
                 */
                GetTopNMonitorDataOutcome GetTopNMonitorData(const Model::GetTopNMonitorDataRequest &request);
                void GetTopNMonitorDataAsync(const Model::GetTopNMonitorDataRequest& request, const GetTopNMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTopNMonitorDataOutcomeCallable GetTopNMonitorDataCallable(const Model::GetTopNMonitorDataRequest& request);

                /**
                 *安装 Grafana Plugin
                 * @param req InstallPluginsRequest
                 * @return InstallPluginsOutcome
                 */
                InstallPluginsOutcome InstallPlugins(const Model::InstallPluginsRequest &request);
                void InstallPluginsAsync(const Model::InstallPluginsRequest& request, const InstallPluginsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InstallPluginsOutcomeCallable InstallPluginsCallable(const Model::InstallPluginsRequest& request);

                /**
                 *编辑告警通知模板
                 * @param req ModifyAlarmNoticeRequest
                 * @return ModifyAlarmNoticeOutcome
                 */
                ModifyAlarmNoticeOutcome ModifyAlarmNotice(const Model::ModifyAlarmNoticeRequest &request);
                void ModifyAlarmNoticeAsync(const Model::ModifyAlarmNoticeRequest& request, const ModifyAlarmNoticeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAlarmNoticeOutcomeCallable ModifyAlarmNoticeCallable(const Model::ModifyAlarmNoticeRequest& request);

                /**
                 *修改告警策略触发条件
                 * @param req ModifyAlarmPolicyConditionRequest
                 * @return ModifyAlarmPolicyConditionOutcome
                 */
                ModifyAlarmPolicyConditionOutcome ModifyAlarmPolicyCondition(const Model::ModifyAlarmPolicyConditionRequest &request);
                void ModifyAlarmPolicyConditionAsync(const Model::ModifyAlarmPolicyConditionRequest& request, const ModifyAlarmPolicyConditionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAlarmPolicyConditionOutcomeCallable ModifyAlarmPolicyConditionCallable(const Model::ModifyAlarmPolicyConditionRequest& request);

                /**
                 *告警2.0编辑告警策略基本信息，包括策略名、备注
                 * @param req ModifyAlarmPolicyInfoRequest
                 * @return ModifyAlarmPolicyInfoOutcome
                 */
                ModifyAlarmPolicyInfoOutcome ModifyAlarmPolicyInfo(const Model::ModifyAlarmPolicyInfoRequest &request);
                void ModifyAlarmPolicyInfoAsync(const Model::ModifyAlarmPolicyInfoRequest& request, const ModifyAlarmPolicyInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAlarmPolicyInfoOutcomeCallable ModifyAlarmPolicyInfoCallable(const Model::ModifyAlarmPolicyInfoRequest& request);

                /**
                 *修改告警策略绑定的告警通知模板
                 * @param req ModifyAlarmPolicyNoticeRequest
                 * @return ModifyAlarmPolicyNoticeOutcome
                 */
                ModifyAlarmPolicyNoticeOutcome ModifyAlarmPolicyNotice(const Model::ModifyAlarmPolicyNoticeRequest &request);
                void ModifyAlarmPolicyNoticeAsync(const Model::ModifyAlarmPolicyNoticeRequest& request, const ModifyAlarmPolicyNoticeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAlarmPolicyNoticeOutcomeCallable ModifyAlarmPolicyNoticeCallable(const Model::ModifyAlarmPolicyNoticeRequest& request);

                /**
                 *启停告警策略
                 * @param req ModifyAlarmPolicyStatusRequest
                 * @return ModifyAlarmPolicyStatusOutcome
                 */
                ModifyAlarmPolicyStatusOutcome ModifyAlarmPolicyStatus(const Model::ModifyAlarmPolicyStatusRequest &request);
                void ModifyAlarmPolicyStatusAsync(const Model::ModifyAlarmPolicyStatusRequest& request, const ModifyAlarmPolicyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAlarmPolicyStatusOutcomeCallable ModifyAlarmPolicyStatusCallable(const Model::ModifyAlarmPolicyStatusRequest& request);

                /**
                 *修改告警策略的触发任务，TriggerTasks字段放触发任务列表，TriggerTasks传空数组时，代表解绑该策略的所有触发任务。
                 * @param req ModifyAlarmPolicyTasksRequest
                 * @return ModifyAlarmPolicyTasksOutcome
                 */
                ModifyAlarmPolicyTasksOutcome ModifyAlarmPolicyTasks(const Model::ModifyAlarmPolicyTasksRequest &request);
                void ModifyAlarmPolicyTasksAsync(const Model::ModifyAlarmPolicyTasksRequest& request, const ModifyAlarmPolicyTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAlarmPolicyTasksOutcomeCallable ModifyAlarmPolicyTasksCallable(const Model::ModifyAlarmPolicyTasksRequest& request);

                /**
                 *修改告警接收人
                 * @param req ModifyAlarmReceiversRequest
                 * @return ModifyAlarmReceiversOutcome
                 */
                ModifyAlarmReceiversOutcome ModifyAlarmReceivers(const Model::ModifyAlarmReceiversRequest &request);
                void ModifyAlarmReceiversAsync(const Model::ModifyAlarmReceiversRequest& request, const ModifyAlarmReceiversAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAlarmReceiversOutcomeCallable ModifyAlarmReceiversCallable(const Model::ModifyAlarmReceiversRequest& request);

                /**
                 *修改 Grafana 实例属性
                 * @param req ModifyGrafanaInstanceRequest
                 * @return ModifyGrafanaInstanceOutcome
                 */
                ModifyGrafanaInstanceOutcome ModifyGrafanaInstance(const Model::ModifyGrafanaInstanceRequest &request);
                void ModifyGrafanaInstanceAsync(const Model::ModifyGrafanaInstanceRequest& request, const ModifyGrafanaInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyGrafanaInstanceOutcomeCallable ModifyGrafanaInstanceCallable(const Model::ModifyGrafanaInstanceRequest& request);

                /**
                 *更新策略组
                 * @param req ModifyPolicyGroupRequest
                 * @return ModifyPolicyGroupOutcome
                 */
                ModifyPolicyGroupOutcome ModifyPolicyGroup(const Model::ModifyPolicyGroupRequest &request);
                void ModifyPolicyGroupAsync(const Model::ModifyPolicyGroupRequest& request, const ModifyPolicyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPolicyGroupOutcomeCallable ModifyPolicyGroupCallable(const Model::ModifyPolicyGroupRequest& request);

                /**
                 *修改被关联集群的external labels
                 * @param req ModifyPrometheusAgentExternalLabelsRequest
                 * @return ModifyPrometheusAgentExternalLabelsOutcome
                 */
                ModifyPrometheusAgentExternalLabelsOutcome ModifyPrometheusAgentExternalLabels(const Model::ModifyPrometheusAgentExternalLabelsRequest &request);
                void ModifyPrometheusAgentExternalLabelsAsync(const Model::ModifyPrometheusAgentExternalLabelsRequest& request, const ModifyPrometheusAgentExternalLabelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPrometheusAgentExternalLabelsOutcomeCallable ModifyPrometheusAgentExternalLabelsCallable(const Model::ModifyPrometheusAgentExternalLabelsRequest& request);

                /**
                 *修改2.0实例告警策略
                 * @param req ModifyPrometheusAlertPolicyRequest
                 * @return ModifyPrometheusAlertPolicyOutcome
                 */
                ModifyPrometheusAlertPolicyOutcome ModifyPrometheusAlertPolicy(const Model::ModifyPrometheusAlertPolicyRequest &request);
                void ModifyPrometheusAlertPolicyAsync(const Model::ModifyPrometheusAlertPolicyRequest& request, const ModifyPrometheusAlertPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPrometheusAlertPolicyOutcomeCallable ModifyPrometheusAlertPolicyCallable(const Model::ModifyPrometheusAlertPolicyRequest& request);

                /**
                 *修改prometheus采集配置
                 * @param req ModifyPrometheusConfigRequest
                 * @return ModifyPrometheusConfigOutcome
                 */
                ModifyPrometheusConfigOutcome ModifyPrometheusConfig(const Model::ModifyPrometheusConfigRequest &request);
                void ModifyPrometheusConfigAsync(const Model::ModifyPrometheusConfigRequest& request, const ModifyPrometheusConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPrometheusConfigOutcomeCallable ModifyPrometheusConfigCallable(const Model::ModifyPrometheusConfigRequest& request);

                /**
                 *修改全局告警通知渠道
                 * @param req ModifyPrometheusGlobalNotificationRequest
                 * @return ModifyPrometheusGlobalNotificationOutcome
                 */
                ModifyPrometheusGlobalNotificationOutcome ModifyPrometheusGlobalNotification(const Model::ModifyPrometheusGlobalNotificationRequest &request);
                void ModifyPrometheusGlobalNotificationAsync(const Model::ModifyPrometheusGlobalNotificationRequest& request, const ModifyPrometheusGlobalNotificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPrometheusGlobalNotificationOutcomeCallable ModifyPrometheusGlobalNotificationCallable(const Model::ModifyPrometheusGlobalNotificationRequest& request);

                /**
                 *修改 Prometheus 实例相关属性
                 * @param req ModifyPrometheusInstanceAttributesRequest
                 * @return ModifyPrometheusInstanceAttributesOutcome
                 */
                ModifyPrometheusInstanceAttributesOutcome ModifyPrometheusInstanceAttributes(const Model::ModifyPrometheusInstanceAttributesRequest &request);
                void ModifyPrometheusInstanceAttributesAsync(const Model::ModifyPrometheusInstanceAttributesRequest& request, const ModifyPrometheusInstanceAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPrometheusInstanceAttributesOutcomeCallable ModifyPrometheusInstanceAttributesCallable(const Model::ModifyPrometheusInstanceAttributesRequest& request);

                /**
                 *通过yaml的方式修改Prometheus预聚合规则
                 * @param req ModifyPrometheusRecordRuleYamlRequest
                 * @return ModifyPrometheusRecordRuleYamlOutcome
                 */
                ModifyPrometheusRecordRuleYamlOutcome ModifyPrometheusRecordRuleYaml(const Model::ModifyPrometheusRecordRuleYamlRequest &request);
                void ModifyPrometheusRecordRuleYamlAsync(const Model::ModifyPrometheusRecordRuleYamlRequest& request, const ModifyPrometheusRecordRuleYamlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPrometheusRecordRuleYamlOutcomeCallable ModifyPrometheusRecordRuleYamlCallable(const Model::ModifyPrometheusRecordRuleYamlRequest& request);

                /**
                 *修改模板内容
                 * @param req ModifyPrometheusTempRequest
                 * @return ModifyPrometheusTempOutcome
                 */
                ModifyPrometheusTempOutcome ModifyPrometheusTemp(const Model::ModifyPrometheusTempRequest &request);
                void ModifyPrometheusTempAsync(const Model::ModifyPrometheusTempRequest& request, const ModifyPrometheusTempAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPrometheusTempOutcomeCallable ModifyPrometheusTempCallable(const Model::ModifyPrometheusTempRequest& request);

                /**
                 *修改多写配置
                 * @param req ModifyRemoteURLsRequest
                 * @return ModifyRemoteURLsOutcome
                 */
                ModifyRemoteURLsOutcome ModifyRemoteURLs(const Model::ModifyRemoteURLsRequest &request);
                void ModifyRemoteURLsAsync(const Model::ModifyRemoteURLsRequest& request, const ModifyRemoteURLsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRemoteURLsOutcomeCallable ModifyRemoteURLsCallable(const Model::ModifyRemoteURLsRequest& request);

                /**
                 *本接口（ResumeGrafanaInstance）用于 Grafana 包年包月实例的停服续费，调用后按原版本续费一个月。仍在运行中的实例无法使用该接口进行续费。
                 * @param req ResumeGrafanaInstanceRequest
                 * @return ResumeGrafanaInstanceOutcome
                 */
                ResumeGrafanaInstanceOutcome ResumeGrafanaInstance(const Model::ResumeGrafanaInstanceRequest &request);
                void ResumeGrafanaInstanceAsync(const Model::ResumeGrafanaInstanceRequest& request, const ResumeGrafanaInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResumeGrafanaInstanceOutcomeCallable ResumeGrafanaInstanceCallable(const Model::ResumeGrafanaInstanceRequest& request);

                /**
                 *初始化TMP实例，开启集成中心时调用
                 * @param req RunPrometheusInstanceRequest
                 * @return RunPrometheusInstanceOutcome
                 */
                RunPrometheusInstanceOutcome RunPrometheusInstance(const Model::RunPrometheusInstanceRequest &request);
                void RunPrometheusInstanceAsync(const Model::RunPrometheusInstanceRequest& request, const RunPrometheusInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunPrometheusInstanceOutcomeCallable RunPrometheusInstanceCallable(const Model::RunPrometheusInstanceRequest& request);

                /**
                 *设置一个策略为该告警策略类型、该项目的默认告警策略。
同一项目下相同的告警策略类型，就会被设置为非默认。
                 * @param req SetDefaultAlarmPolicyRequest
                 * @return SetDefaultAlarmPolicyOutcome
                 */
                SetDefaultAlarmPolicyOutcome SetDefaultAlarmPolicy(const Model::SetDefaultAlarmPolicyRequest &request);
                void SetDefaultAlarmPolicyAsync(const Model::SetDefaultAlarmPolicyRequest& request, const SetDefaultAlarmPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetDefaultAlarmPolicyOutcomeCallable SetDefaultAlarmPolicyCallable(const Model::SetDefaultAlarmPolicyRequest& request);

                /**
                 *同步模板到实例或者集群，针对V2版本实例
                 * @param req SyncPrometheusTempRequest
                 * @return SyncPrometheusTempOutcome
                 */
                SyncPrometheusTempOutcome SyncPrometheusTemp(const Model::SyncPrometheusTempRequest &request);
                void SyncPrometheusTempAsync(const Model::SyncPrometheusTempRequest& request, const SyncPrometheusTempAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SyncPrometheusTempOutcomeCallable SyncPrometheusTempCallable(const Model::SyncPrometheusTempRequest& request);

                /**
                 *销毁按量 Prometheus 实例
                 * @param req TerminatePrometheusInstancesRequest
                 * @return TerminatePrometheusInstancesOutcome
                 */
                TerminatePrometheusInstancesOutcome TerminatePrometheusInstances(const Model::TerminatePrometheusInstancesRequest &request);
                void TerminatePrometheusInstancesAsync(const Model::TerminatePrometheusInstancesRequest& request, const TerminatePrometheusInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminatePrometheusInstancesOutcomeCallable TerminatePrometheusInstancesCallable(const Model::TerminatePrometheusInstancesRequest& request);

                /**
                 *删除全部的关联对象
                 * @param req UnBindingAllPolicyObjectRequest
                 * @return UnBindingAllPolicyObjectOutcome
                 */
                UnBindingAllPolicyObjectOutcome UnBindingAllPolicyObject(const Model::UnBindingAllPolicyObjectRequest &request);
                void UnBindingAllPolicyObjectAsync(const Model::UnBindingAllPolicyObjectRequest& request, const UnBindingAllPolicyObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnBindingAllPolicyObjectOutcomeCallable UnBindingAllPolicyObjectCallable(const Model::UnBindingAllPolicyObjectRequest& request);

                /**
                 *删除策略的关联对象
                 * @param req UnBindingPolicyObjectRequest
                 * @return UnBindingPolicyObjectOutcome
                 */
                UnBindingPolicyObjectOutcome UnBindingPolicyObject(const Model::UnBindingPolicyObjectRequest &request);
                void UnBindingPolicyObjectAsync(const Model::UnBindingPolicyObjectRequest& request, const UnBindingPolicyObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnBindingPolicyObjectOutcomeCallable UnBindingPolicyObjectCallable(const Model::UnBindingPolicyObjectRequest& request);

                /**
                 *解除实例绑定的 Grafana 可视化实例
                 * @param req UnbindPrometheusManagedGrafanaRequest
                 * @return UnbindPrometheusManagedGrafanaOutcome
                 */
                UnbindPrometheusManagedGrafanaOutcome UnbindPrometheusManagedGrafana(const Model::UnbindPrometheusManagedGrafanaRequest &request);
                void UnbindPrometheusManagedGrafanaAsync(const Model::UnbindPrometheusManagedGrafanaRequest& request, const UnbindPrometheusManagedGrafanaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindPrometheusManagedGrafanaOutcomeCallable UnbindPrometheusManagedGrafanaCallable(const Model::UnbindPrometheusManagedGrafanaRequest& request);

                /**
                 *删除 Grafana Dashboard
                 * @param req UninstallGrafanaDashboardRequest
                 * @return UninstallGrafanaDashboardOutcome
                 */
                UninstallGrafanaDashboardOutcome UninstallGrafanaDashboard(const Model::UninstallGrafanaDashboardRequest &request);
                void UninstallGrafanaDashboardAsync(const Model::UninstallGrafanaDashboardRequest& request, const UninstallGrafanaDashboardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UninstallGrafanaDashboardOutcomeCallable UninstallGrafanaDashboardCallable(const Model::UninstallGrafanaDashboardRequest& request);

                /**
                 *删除已安装的插件
                 * @param req UninstallGrafanaPluginsRequest
                 * @return UninstallGrafanaPluginsOutcome
                 */
                UninstallGrafanaPluginsOutcome UninstallGrafanaPlugins(const Model::UninstallGrafanaPluginsRequest &request);
                void UninstallGrafanaPluginsAsync(const Model::UninstallGrafanaPluginsRequest& request, const UninstallGrafanaPluginsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UninstallGrafanaPluginsOutcomeCallable UninstallGrafanaPluginsCallable(const Model::UninstallGrafanaPluginsRequest& request);

                /**
                 *更新 Prometheus 的告警规则。

请注意，**告警对象和告警消息是 Prometheus Rule Annotations 的特殊字段，需要通过 annotations 来传递，对应的 Key 分别为summary/description**，请参考 [Prometheus Rule更多配置请参考](https://prometheus.io/docs/prometheus/latest/configuration/alerting_rules/)。
                 * @param req UpdateAlertRuleRequest
                 * @return UpdateAlertRuleOutcome
                 */
                UpdateAlertRuleOutcome UpdateAlertRule(const Model::UpdateAlertRuleRequest &request);
                void UpdateAlertRuleAsync(const Model::UpdateAlertRuleRequest& request, const UpdateAlertRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAlertRuleOutcomeCallable UpdateAlertRuleCallable(const Model::UpdateAlertRuleRequest& request);

                /**
                 *更新 Prometheus 报警策略状态
                 * @param req UpdateAlertRuleStateRequest
                 * @return UpdateAlertRuleStateOutcome
                 */
                UpdateAlertRuleStateOutcome UpdateAlertRuleState(const Model::UpdateAlertRuleStateRequest &request);
                void UpdateAlertRuleStateAsync(const Model::UpdateAlertRuleStateRequest& request, const UpdateAlertRuleStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAlertRuleStateOutcomeCallable UpdateAlertRuleStateCallable(const Model::UpdateAlertRuleStateRequest& request);

                /**
                 *更新 Grafana 的 DNS 配置
                 * @param req UpdateDNSConfigRequest
                 * @return UpdateDNSConfigOutcome
                 */
                UpdateDNSConfigOutcome UpdateDNSConfig(const Model::UpdateDNSConfigRequest &request);
                void UpdateDNSConfigAsync(const Model::UpdateDNSConfigRequest& request, const UpdateDNSConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateDNSConfigOutcomeCallable UpdateDNSConfigCallable(const Model::UpdateDNSConfigRequest& request);

                /**
                 *更新 exporter 集成配置
                 * @param req UpdateExporterIntegrationRequest
                 * @return UpdateExporterIntegrationOutcome
                 */
                UpdateExporterIntegrationOutcome UpdateExporterIntegration(const Model::UpdateExporterIntegrationRequest &request);
                void UpdateExporterIntegrationAsync(const Model::UpdateExporterIntegrationRequest& request, const UpdateExporterIntegrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateExporterIntegrationOutcomeCallable UpdateExporterIntegrationCallable(const Model::UpdateExporterIntegrationRequest& request);

                /**
                 *更新 Grafana 配置
                 * @param req UpdateGrafanaConfigRequest
                 * @return UpdateGrafanaConfigOutcome
                 */
                UpdateGrafanaConfigOutcome UpdateGrafanaConfig(const Model::UpdateGrafanaConfigRequest &request);
                void UpdateGrafanaConfigAsync(const Model::UpdateGrafanaConfigRequest& request, const UpdateGrafanaConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateGrafanaConfigOutcomeCallable UpdateGrafanaConfigCallable(const Model::UpdateGrafanaConfigRequest& request);

                /**
                 *更新 Grafana 环境变量
                 * @param req UpdateGrafanaEnvironmentsRequest
                 * @return UpdateGrafanaEnvironmentsOutcome
                 */
                UpdateGrafanaEnvironmentsOutcome UpdateGrafanaEnvironments(const Model::UpdateGrafanaEnvironmentsRequest &request);
                void UpdateGrafanaEnvironmentsAsync(const Model::UpdateGrafanaEnvironmentsRequest& request, const UpdateGrafanaEnvironmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateGrafanaEnvironmentsOutcomeCallable UpdateGrafanaEnvironmentsCallable(const Model::UpdateGrafanaEnvironmentsRequest& request);

                /**
                 *更新 Grafana 集成配置
                 * @param req UpdateGrafanaIntegrationRequest
                 * @return UpdateGrafanaIntegrationOutcome
                 */
                UpdateGrafanaIntegrationOutcome UpdateGrafanaIntegration(const Model::UpdateGrafanaIntegrationRequest &request);
                void UpdateGrafanaIntegrationAsync(const Model::UpdateGrafanaIntegrationRequest& request, const UpdateGrafanaIntegrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateGrafanaIntegrationOutcomeCallable UpdateGrafanaIntegrationCallable(const Model::UpdateGrafanaIntegrationRequest& request);

                /**
                 *更新 Grafana 告警通道
                 * @param req UpdateGrafanaNotificationChannelRequest
                 * @return UpdateGrafanaNotificationChannelOutcome
                 */
                UpdateGrafanaNotificationChannelOutcome UpdateGrafanaNotificationChannel(const Model::UpdateGrafanaNotificationChannelRequest &request);
                void UpdateGrafanaNotificationChannelAsync(const Model::UpdateGrafanaNotificationChannelRequest& request, const UpdateGrafanaNotificationChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateGrafanaNotificationChannelOutcomeCallable UpdateGrafanaNotificationChannelCallable(const Model::UpdateGrafanaNotificationChannelRequest& request);

                /**
                 *更新 Grafana 白名单
                 * @param req UpdateGrafanaWhiteListRequest
                 * @return UpdateGrafanaWhiteListOutcome
                 */
                UpdateGrafanaWhiteListOutcome UpdateGrafanaWhiteList(const Model::UpdateGrafanaWhiteListRequest &request);
                void UpdateGrafanaWhiteListAsync(const Model::UpdateGrafanaWhiteListRequest& request, const UpdateGrafanaWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateGrafanaWhiteListOutcomeCallable UpdateGrafanaWhiteListCallable(const Model::UpdateGrafanaWhiteListRequest& request);

                /**
                 *更新 Prometheus CVM Agent 状态
                 * @param req UpdatePrometheusAgentStatusRequest
                 * @return UpdatePrometheusAgentStatusOutcome
                 */
                UpdatePrometheusAgentStatusOutcome UpdatePrometheusAgentStatus(const Model::UpdatePrometheusAgentStatusRequest &request);
                void UpdatePrometheusAgentStatusAsync(const Model::UpdatePrometheusAgentStatusRequest& request, const UpdatePrometheusAgentStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdatePrometheusAgentStatusOutcomeCallable UpdatePrometheusAgentStatusCallable(const Model::UpdatePrometheusAgentStatusRequest& request);

                /**
                 *更新Prometheus告警规则分组
                 * @param req UpdatePrometheusAlertGroupRequest
                 * @return UpdatePrometheusAlertGroupOutcome
                 */
                UpdatePrometheusAlertGroupOutcome UpdatePrometheusAlertGroup(const Model::UpdatePrometheusAlertGroupRequest &request);
                void UpdatePrometheusAlertGroupAsync(const Model::UpdatePrometheusAlertGroupRequest& request, const UpdatePrometheusAlertGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdatePrometheusAlertGroupOutcomeCallable UpdatePrometheusAlertGroupCallable(const Model::UpdatePrometheusAlertGroupRequest& request);

                /**
                 *批量更新告警分组状态，将分组中全部告警规则更新为目标状态
                 * @param req UpdatePrometheusAlertGroupStateRequest
                 * @return UpdatePrometheusAlertGroupStateOutcome
                 */
                UpdatePrometheusAlertGroupStateOutcome UpdatePrometheusAlertGroupState(const Model::UpdatePrometheusAlertGroupStateRequest &request);
                void UpdatePrometheusAlertGroupStateAsync(const Model::UpdatePrometheusAlertGroupStateRequest& request, const UpdatePrometheusAlertGroupStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdatePrometheusAlertGroupStateOutcomeCallable UpdatePrometheusAlertGroupStateCallable(const Model::UpdatePrometheusAlertGroupStateRequest& request);

                /**
                 *更新 Prometheus Agent 抓取任务
                 * @param req UpdatePrometheusScrapeJobRequest
                 * @return UpdatePrometheusScrapeJobOutcome
                 */
                UpdatePrometheusScrapeJobOutcome UpdatePrometheusScrapeJob(const Model::UpdatePrometheusScrapeJobRequest &request);
                void UpdatePrometheusScrapeJobAsync(const Model::UpdatePrometheusScrapeJobRequest& request, const UpdatePrometheusScrapeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdatePrometheusScrapeJobOutcomeCallable UpdatePrometheusScrapeJobCallable(const Model::UpdatePrometheusScrapeJobRequest& request);

                /**
                 *更新 Prometheus 的预聚合规则
                 * @param req UpdateRecordingRuleRequest
                 * @return UpdateRecordingRuleOutcome
                 */
                UpdateRecordingRuleOutcome UpdateRecordingRule(const Model::UpdateRecordingRuleRequest &request);
                void UpdateRecordingRuleAsync(const Model::UpdateRecordingRuleRequest& request, const UpdateRecordingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateRecordingRuleOutcomeCallable UpdateRecordingRuleCallable(const Model::UpdateRecordingRuleRequest& request);

                /**
                 *更新已授权账号的备注、权限信息，会直接覆盖原有的信息，不传则不会更新。
                 * @param req UpdateSSOAccountRequest
                 * @return UpdateSSOAccountOutcome
                 */
                UpdateSSOAccountOutcome UpdateSSOAccount(const Model::UpdateSSOAccountRequest &request);
                void UpdateSSOAccountAsync(const Model::UpdateSSOAccountRequest& request, const UpdateSSOAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateSSOAccountOutcomeCallable UpdateSSOAccountCallable(const Model::UpdateSSOAccountRequest& request);

                /**
                 *在腾讯云容器服务下更新 Prometheus 服务发现。
<p>注意：前提条件，已经通过 Prometheus 控制台集成了对应的腾讯云容器服务，具体请参考
<a href="https://cloud.tencent.com/document/product/248/48859" target="_blank">Agent 安装</a>。</p>
                 * @param req UpdateServiceDiscoveryRequest
                 * @return UpdateServiceDiscoveryOutcome
                 */
                UpdateServiceDiscoveryOutcome UpdateServiceDiscovery(const Model::UpdateServiceDiscoveryRequest &request);
                void UpdateServiceDiscoveryAsync(const Model::UpdateServiceDiscoveryRequest& request, const UpdateServiceDiscoveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateServiceDiscoveryOutcomeCallable UpdateServiceDiscoveryCallable(const Model::UpdateServiceDiscoveryRequest& request);

                /**
                 *升级 Grafana Dashboard
                 * @param req UpgradeGrafanaDashboardRequest
                 * @return UpgradeGrafanaDashboardOutcome
                 */
                UpgradeGrafanaDashboardOutcome UpgradeGrafanaDashboard(const Model::UpgradeGrafanaDashboardRequest &request);
                void UpgradeGrafanaDashboardAsync(const Model::UpgradeGrafanaDashboardRequest& request, const UpgradeGrafanaDashboardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeGrafanaDashboardOutcomeCallable UpgradeGrafanaDashboardCallable(const Model::UpgradeGrafanaDashboardRequest& request);

                /**
                 *升级 Grafana 实例
                 * @param req UpgradeGrafanaInstanceRequest
                 * @return UpgradeGrafanaInstanceOutcome
                 */
                UpgradeGrafanaInstanceOutcome UpgradeGrafanaInstance(const Model::UpgradeGrafanaInstanceRequest &request);
                void UpgradeGrafanaInstanceAsync(const Model::UpgradeGrafanaInstanceRequest& request, const UpgradeGrafanaInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeGrafanaInstanceOutcomeCallable UpgradeGrafanaInstanceCallable(const Model::UpgradeGrafanaInstanceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MONITORCLIENT_H_
