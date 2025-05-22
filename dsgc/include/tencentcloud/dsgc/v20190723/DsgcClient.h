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

#ifndef TENCENTCLOUD_DSGC_V20190723_DSGCCLIENT_H_
#define TENCENTCLOUD_DSGC_V20190723_DSGCCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/dsgc/v20190723/model/AuthorizeDSPAMetaResourcesRequest.h>
#include <tencentcloud/dsgc/v20190723/model/AuthorizeDSPAMetaResourcesResponse.h>
#include <tencentcloud/dsgc/v20190723/model/BindDSPAResourceCosBucketsRequest.h>
#include <tencentcloud/dsgc/v20190723/model/BindDSPAResourceCosBucketsResponse.h>
#include <tencentcloud/dsgc/v20190723/model/BindDSPAResourceDatabasesRequest.h>
#include <tencentcloud/dsgc/v20190723/model/BindDSPAResourceDatabasesResponse.h>
#include <tencentcloud/dsgc/v20190723/model/CopyDSPATemplateRequest.h>
#include <tencentcloud/dsgc/v20190723/model/CopyDSPATemplateResponse.h>
#include <tencentcloud/dsgc/v20190723/model/CreateAssetSortingReportRetryTaskRequest.h>
#include <tencentcloud/dsgc/v20190723/model/CreateAssetSortingReportRetryTaskResponse.h>
#include <tencentcloud/dsgc/v20190723/model/CreateAssetSortingReportTaskRequest.h>
#include <tencentcloud/dsgc/v20190723/model/CreateAssetSortingReportTaskResponse.h>
#include <tencentcloud/dsgc/v20190723/model/CreateDSPAAssessmentRiskLevelRequest.h>
#include <tencentcloud/dsgc/v20190723/model/CreateDSPAAssessmentRiskLevelResponse.h>
#include <tencentcloud/dsgc/v20190723/model/CreateDSPAAssessmentRiskTemplateRequest.h>
#include <tencentcloud/dsgc/v20190723/model/CreateDSPAAssessmentRiskTemplateResponse.h>
#include <tencentcloud/dsgc/v20190723/model/CreateDSPAAssessmentTaskRequest.h>
#include <tencentcloud/dsgc/v20190723/model/CreateDSPAAssessmentTaskResponse.h>
#include <tencentcloud/dsgc/v20190723/model/CreateDSPACOSDiscoveryTaskRequest.h>
#include <tencentcloud/dsgc/v20190723/model/CreateDSPACOSDiscoveryTaskResponse.h>
#include <tencentcloud/dsgc/v20190723/model/CreateDSPACategoryRequest.h>
#include <tencentcloud/dsgc/v20190723/model/CreateDSPACategoryResponse.h>
#include <tencentcloud/dsgc/v20190723/model/CreateDSPACategoryRelationRequest.h>
#include <tencentcloud/dsgc/v20190723/model/CreateDSPACategoryRelationResponse.h>
#include <tencentcloud/dsgc/v20190723/model/CreateDSPAComplianceGroupRequest.h>
#include <tencentcloud/dsgc/v20190723/model/CreateDSPAComplianceGroupResponse.h>
#include <tencentcloud/dsgc/v20190723/model/CreateDSPAComplianceRulesRequest.h>
#include <tencentcloud/dsgc/v20190723/model/CreateDSPAComplianceRulesResponse.h>
#include <tencentcloud/dsgc/v20190723/model/CreateDSPACosMetaResourcesRequest.h>
#include <tencentcloud/dsgc/v20190723/model/CreateDSPACosMetaResourcesResponse.h>
#include <tencentcloud/dsgc/v20190723/model/CreateDSPADbMetaResourcesRequest.h>
#include <tencentcloud/dsgc/v20190723/model/CreateDSPADbMetaResourcesResponse.h>
#include <tencentcloud/dsgc/v20190723/model/CreateDSPADiscoveryRuleRequest.h>
#include <tencentcloud/dsgc/v20190723/model/CreateDSPADiscoveryRuleResponse.h>
#include <tencentcloud/dsgc/v20190723/model/CreateDSPADiscoveryTaskRequest.h>
#include <tencentcloud/dsgc/v20190723/model/CreateDSPADiscoveryTaskResponse.h>
#include <tencentcloud/dsgc/v20190723/model/CreateDSPALevelGroupRequest.h>
#include <tencentcloud/dsgc/v20190723/model/CreateDSPALevelGroupResponse.h>
#include <tencentcloud/dsgc/v20190723/model/CreateDSPAMetaResourcesRequest.h>
#include <tencentcloud/dsgc/v20190723/model/CreateDSPAMetaResourcesResponse.h>
#include <tencentcloud/dsgc/v20190723/model/CreateDSPASelfBuildMetaResourceRequest.h>
#include <tencentcloud/dsgc/v20190723/model/CreateDSPASelfBuildMetaResourceResponse.h>
#include <tencentcloud/dsgc/v20190723/model/CreateIdentifyRuleAnotherNameRequest.h>
#include <tencentcloud/dsgc/v20190723/model/CreateIdentifyRuleAnotherNameResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DecribeSuggestRiskLevelMatrixRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DecribeSuggestRiskLevelMatrixResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DeleteCosMetaResourceRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DeleteCosMetaResourceResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DeleteDSPAAssessmentTaskRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DeleteDSPAAssessmentTaskResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DeleteDSPACOSDiscoveryTaskRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DeleteDSPACOSDiscoveryTaskResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DeleteDSPACOSDiscoveryTaskResultRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DeleteDSPACOSDiscoveryTaskResultResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DeleteDSPADiscoveryTaskRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DeleteDSPADiscoveryTaskResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DeleteDSPADiscoveryTaskResultRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DeleteDSPADiscoveryTaskResultResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DeleteDSPAMetaResourceRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DeleteDSPAMetaResourceResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeAssetDetailDataExportResultRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeAssetDetailDataExportResultResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeAssetOverviewRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeAssetOverviewResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeBindDBListRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeBindDBListResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeCOSAssetSensitiveDistributionRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeCOSAssetSensitiveDistributionResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentHighRiskTop10OverviewRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentHighRiskTop10OverviewResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentLatestRiskDetailInfoRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentLatestRiskDetailInfoResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentLatestRiskListRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentLatestRiskListResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentNewDiscoveredRiskOverviewRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentNewDiscoveredRiskOverviewResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentPendingRiskOverviewRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentPendingRiskOverviewResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentProcessingRiskOverviewRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentProcessingRiskOverviewResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentRiskAmountOverviewRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentRiskAmountOverviewResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentRiskDatasourceTop5Request.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentRiskDatasourceTop5Response.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentRiskDealedOverviewRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentRiskDealedOverviewResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentRiskDealedTrendRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentRiskDealedTrendResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentRiskDistributionOverviewRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentRiskDistributionOverviewResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentRiskItemTop5Request.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentRiskItemTop5Response.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentRiskLevelDetailRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentRiskLevelDetailResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentRiskLevelListRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentRiskLevelListResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentRiskLevelTrendRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentRiskLevelTrendResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentRiskOverviewRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentRiskOverviewResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentRiskProcessHistoryRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentRiskProcessHistoryResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentRiskSideDistributedRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentRiskSideDistributedResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentRiskSideListRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentRiskSideListResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentRiskTemplateDetailRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentRiskTemplateDetailResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentRiskTemplateVulnerableListRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentRiskTemplateVulnerableListResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentRisksRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentRisksResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentTasksRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentTasksResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentTemplateControlItemsRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentTemplateControlItemsResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentTemplatesRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentTemplatesResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPACOSDataAssetBucketsRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPACOSDataAssetBucketsResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPACOSDataAssetByComplianceIdRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPACOSDataAssetByComplianceIdResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPACOSDataAssetDetailRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPACOSDataAssetDetailResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPACOSDiscoveryTaskDetailRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPACOSDiscoveryTaskDetailResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPACOSDiscoveryTaskFilesRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPACOSDiscoveryTaskFilesResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPACOSDiscoveryTaskResultRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPACOSDiscoveryTaskResultResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPACOSDiscoveryTasksRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPACOSDiscoveryTasksResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPACOSTaskResultDetailRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPACOSTaskResultDetailResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPACategoriesRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPACategoriesResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPACategoryRuleStatisticRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPACategoryRuleStatisticResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPACategoryRulesRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPACategoryRulesResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPACategoryTreeRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPACategoryTreeResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPACategoryTreeWithRulesRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPACategoryTreeWithRulesResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAComplianceGroupDetailRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAComplianceGroupDetailResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAComplianceGroupsRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAComplianceGroupsResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAComplianceUpdateNotificationRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAComplianceUpdateNotificationResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPADataSourceDbInfoRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPADataSourceDbInfoResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPADiscoveryRulesRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPADiscoveryRulesResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPADiscoveryServiceStatusRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPADiscoveryServiceStatusResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPADiscoveryTaskDetailRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPADiscoveryTaskDetailResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPADiscoveryTaskResultRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPADiscoveryTaskResultResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPADiscoveryTaskResultDetailRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPADiscoveryTaskResultDetailResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPADiscoveryTaskTablesRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPADiscoveryTaskTablesResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPADiscoveryTasksRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPADiscoveryTasksResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAESDataAssetByComplianceIdRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAESDataAssetByComplianceIdResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAESDataAssetDetailRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAESDataAssetDetailResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAESDataSampleRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAESDataSampleResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAESDiscoveryTaskResultDetailRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAESDiscoveryTaskResultDetailResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPALevelDetailRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPALevelDetailResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPALevelGroupsRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPALevelGroupsResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPARDBDataAssetByComplianceIdRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPARDBDataAssetByComplianceIdResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPARDBDataAssetDetailRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPARDBDataAssetDetailResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPASupportedMetasRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPASupportedMetasResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPATaskResultDataSampleRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeDSPATaskResultDataSampleResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeESAssetSensitiveDistributionRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeESAssetSensitiveDistributionResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeExportTaskResultRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeExportTaskResultResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeMongoAssetSensitiveDistributionRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeMongoAssetSensitiveDistributionResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeRDBAssetSensitiveDistributionRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeRDBAssetSensitiveDistributionResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeReportTaskDownloadUrlRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeReportTaskDownloadUrlResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeReportTasksRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeReportTasksResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeSensitiveCOSDataDistributionRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeSensitiveCOSDataDistributionResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeSensitiveRDBDataDistributionRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DescribeSensitiveRDBDataDistributionResponse.h>
#include <tencentcloud/dsgc/v20190723/model/DisableDSPAMetaResourceAuthRequest.h>
#include <tencentcloud/dsgc/v20190723/model/DisableDSPAMetaResourceAuthResponse.h>
#include <tencentcloud/dsgc/v20190723/model/EnableDSPADiscoveryRuleRequest.h>
#include <tencentcloud/dsgc/v20190723/model/EnableDSPADiscoveryRuleResponse.h>
#include <tencentcloud/dsgc/v20190723/model/EnableTrialVersionRequest.h>
#include <tencentcloud/dsgc/v20190723/model/EnableTrialVersionResponse.h>
#include <tencentcloud/dsgc/v20190723/model/ExportAssetDetailDataRequest.h>
#include <tencentcloud/dsgc/v20190723/model/ExportAssetDetailDataResponse.h>
#include <tencentcloud/dsgc/v20190723/model/GetResourceConnectionStatusRequest.h>
#include <tencentcloud/dsgc/v20190723/model/GetResourceConnectionStatusResponse.h>
#include <tencentcloud/dsgc/v20190723/model/GetTrialVersionRequest.h>
#include <tencentcloud/dsgc/v20190723/model/GetTrialVersionResponse.h>
#include <tencentcloud/dsgc/v20190723/model/GetUserQuotaInfoRequest.h>
#include <tencentcloud/dsgc/v20190723/model/GetUserQuotaInfoResponse.h>
#include <tencentcloud/dsgc/v20190723/model/ListDSPAClustersRequest.h>
#include <tencentcloud/dsgc/v20190723/model/ListDSPAClustersResponse.h>
#include <tencentcloud/dsgc/v20190723/model/ListDSPACosMetaResourcesRequest.h>
#include <tencentcloud/dsgc/v20190723/model/ListDSPACosMetaResourcesResponse.h>
#include <tencentcloud/dsgc/v20190723/model/ListDSPAMetaResourcesRequest.h>
#include <tencentcloud/dsgc/v20190723/model/ListDSPAMetaResourcesResponse.h>
#include <tencentcloud/dsgc/v20190723/model/ModifyDSPAAssessmentRiskRequest.h>
#include <tencentcloud/dsgc/v20190723/model/ModifyDSPAAssessmentRiskResponse.h>
#include <tencentcloud/dsgc/v20190723/model/ModifyDSPAAssessmentRiskLatestRequest.h>
#include <tencentcloud/dsgc/v20190723/model/ModifyDSPAAssessmentRiskLatestResponse.h>
#include <tencentcloud/dsgc/v20190723/model/ModifyDSPAAssessmentRiskLevelRequest.h>
#include <tencentcloud/dsgc/v20190723/model/ModifyDSPAAssessmentRiskLevelResponse.h>
#include <tencentcloud/dsgc/v20190723/model/ModifyDSPAAssessmentRiskTemplateRequest.h>
#include <tencentcloud/dsgc/v20190723/model/ModifyDSPAAssessmentRiskTemplateResponse.h>
#include <tencentcloud/dsgc/v20190723/model/ModifyDSPACOSDiscoveryTaskRequest.h>
#include <tencentcloud/dsgc/v20190723/model/ModifyDSPACOSDiscoveryTaskResponse.h>
#include <tencentcloud/dsgc/v20190723/model/ModifyDSPACOSTaskResultRequest.h>
#include <tencentcloud/dsgc/v20190723/model/ModifyDSPACOSTaskResultResponse.h>
#include <tencentcloud/dsgc/v20190723/model/ModifyDSPACategoryRequest.h>
#include <tencentcloud/dsgc/v20190723/model/ModifyDSPACategoryResponse.h>
#include <tencentcloud/dsgc/v20190723/model/ModifyDSPACategoryRelationRequest.h>
#include <tencentcloud/dsgc/v20190723/model/ModifyDSPACategoryRelationResponse.h>
#include <tencentcloud/dsgc/v20190723/model/ModifyDSPAClusterInfoRequest.h>
#include <tencentcloud/dsgc/v20190723/model/ModifyDSPAClusterInfoResponse.h>
#include <tencentcloud/dsgc/v20190723/model/ModifyDSPAComplianceGroupRequest.h>
#include <tencentcloud/dsgc/v20190723/model/ModifyDSPAComplianceGroupResponse.h>
#include <tencentcloud/dsgc/v20190723/model/ModifyDSPADiscoveryRuleRequest.h>
#include <tencentcloud/dsgc/v20190723/model/ModifyDSPADiscoveryRuleResponse.h>
#include <tencentcloud/dsgc/v20190723/model/ModifyDSPADiscoveryTaskRequest.h>
#include <tencentcloud/dsgc/v20190723/model/ModifyDSPADiscoveryTaskResponse.h>
#include <tencentcloud/dsgc/v20190723/model/ModifyDSPAESTaskResultRequest.h>
#include <tencentcloud/dsgc/v20190723/model/ModifyDSPAESTaskResultResponse.h>
#include <tencentcloud/dsgc/v20190723/model/ModifyDSPATaskResultRequest.h>
#include <tencentcloud/dsgc/v20190723/model/ModifyDSPATaskResultResponse.h>
#include <tencentcloud/dsgc/v20190723/model/QueryDSPAMetaResourceDbListRequest.h>
#include <tencentcloud/dsgc/v20190723/model/QueryDSPAMetaResourceDbListResponse.h>
#include <tencentcloud/dsgc/v20190723/model/QueryResourceDbBindStatusRequest.h>
#include <tencentcloud/dsgc/v20190723/model/QueryResourceDbBindStatusResponse.h>
#include <tencentcloud/dsgc/v20190723/model/RestartDSPAAssessmentTaskRequest.h>
#include <tencentcloud/dsgc/v20190723/model/RestartDSPAAssessmentTaskResponse.h>
#include <tencentcloud/dsgc/v20190723/model/StartDSPADiscoveryTaskRequest.h>
#include <tencentcloud/dsgc/v20190723/model/StartDSPADiscoveryTaskResponse.h>
#include <tencentcloud/dsgc/v20190723/model/StopDSPADiscoveryTaskRequest.h>
#include <tencentcloud/dsgc/v20190723/model/StopDSPADiscoveryTaskResponse.h>
#include <tencentcloud/dsgc/v20190723/model/UpdateDSPASelfBuildResourceRequest.h>
#include <tencentcloud/dsgc/v20190723/model/UpdateDSPASelfBuildResourceResponse.h>
#include <tencentcloud/dsgc/v20190723/model/VerifyDSPACOSRuleRequest.h>
#include <tencentcloud/dsgc/v20190723/model/VerifyDSPACOSRuleResponse.h>
#include <tencentcloud/dsgc/v20190723/model/VerifyDSPADiscoveryRuleRequest.h>
#include <tencentcloud/dsgc/v20190723/model/VerifyDSPADiscoveryRuleResponse.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            class DsgcClient : public AbstractClient
            {
            public:
                DsgcClient(const Credential &credential, const std::string &region);
                DsgcClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AuthorizeDSPAMetaResourcesResponse> AuthorizeDSPAMetaResourcesOutcome;
                typedef std::future<AuthorizeDSPAMetaResourcesOutcome> AuthorizeDSPAMetaResourcesOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::AuthorizeDSPAMetaResourcesRequest&, AuthorizeDSPAMetaResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AuthorizeDSPAMetaResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::BindDSPAResourceCosBucketsResponse> BindDSPAResourceCosBucketsOutcome;
                typedef std::future<BindDSPAResourceCosBucketsOutcome> BindDSPAResourceCosBucketsOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::BindDSPAResourceCosBucketsRequest&, BindDSPAResourceCosBucketsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindDSPAResourceCosBucketsAsyncHandler;
                typedef Outcome<Core::Error, Model::BindDSPAResourceDatabasesResponse> BindDSPAResourceDatabasesOutcome;
                typedef std::future<BindDSPAResourceDatabasesOutcome> BindDSPAResourceDatabasesOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::BindDSPAResourceDatabasesRequest&, BindDSPAResourceDatabasesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindDSPAResourceDatabasesAsyncHandler;
                typedef Outcome<Core::Error, Model::CopyDSPATemplateResponse> CopyDSPATemplateOutcome;
                typedef std::future<CopyDSPATemplateOutcome> CopyDSPATemplateOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::CopyDSPATemplateRequest&, CopyDSPATemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CopyDSPATemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAssetSortingReportRetryTaskResponse> CreateAssetSortingReportRetryTaskOutcome;
                typedef std::future<CreateAssetSortingReportRetryTaskOutcome> CreateAssetSortingReportRetryTaskOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::CreateAssetSortingReportRetryTaskRequest&, CreateAssetSortingReportRetryTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAssetSortingReportRetryTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAssetSortingReportTaskResponse> CreateAssetSortingReportTaskOutcome;
                typedef std::future<CreateAssetSortingReportTaskOutcome> CreateAssetSortingReportTaskOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::CreateAssetSortingReportTaskRequest&, CreateAssetSortingReportTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAssetSortingReportTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDSPAAssessmentRiskLevelResponse> CreateDSPAAssessmentRiskLevelOutcome;
                typedef std::future<CreateDSPAAssessmentRiskLevelOutcome> CreateDSPAAssessmentRiskLevelOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::CreateDSPAAssessmentRiskLevelRequest&, CreateDSPAAssessmentRiskLevelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDSPAAssessmentRiskLevelAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDSPAAssessmentRiskTemplateResponse> CreateDSPAAssessmentRiskTemplateOutcome;
                typedef std::future<CreateDSPAAssessmentRiskTemplateOutcome> CreateDSPAAssessmentRiskTemplateOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::CreateDSPAAssessmentRiskTemplateRequest&, CreateDSPAAssessmentRiskTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDSPAAssessmentRiskTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDSPAAssessmentTaskResponse> CreateDSPAAssessmentTaskOutcome;
                typedef std::future<CreateDSPAAssessmentTaskOutcome> CreateDSPAAssessmentTaskOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::CreateDSPAAssessmentTaskRequest&, CreateDSPAAssessmentTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDSPAAssessmentTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDSPACOSDiscoveryTaskResponse> CreateDSPACOSDiscoveryTaskOutcome;
                typedef std::future<CreateDSPACOSDiscoveryTaskOutcome> CreateDSPACOSDiscoveryTaskOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::CreateDSPACOSDiscoveryTaskRequest&, CreateDSPACOSDiscoveryTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDSPACOSDiscoveryTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDSPACategoryResponse> CreateDSPACategoryOutcome;
                typedef std::future<CreateDSPACategoryOutcome> CreateDSPACategoryOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::CreateDSPACategoryRequest&, CreateDSPACategoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDSPACategoryAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDSPACategoryRelationResponse> CreateDSPACategoryRelationOutcome;
                typedef std::future<CreateDSPACategoryRelationOutcome> CreateDSPACategoryRelationOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::CreateDSPACategoryRelationRequest&, CreateDSPACategoryRelationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDSPACategoryRelationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDSPAComplianceGroupResponse> CreateDSPAComplianceGroupOutcome;
                typedef std::future<CreateDSPAComplianceGroupOutcome> CreateDSPAComplianceGroupOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::CreateDSPAComplianceGroupRequest&, CreateDSPAComplianceGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDSPAComplianceGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDSPAComplianceRulesResponse> CreateDSPAComplianceRulesOutcome;
                typedef std::future<CreateDSPAComplianceRulesOutcome> CreateDSPAComplianceRulesOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::CreateDSPAComplianceRulesRequest&, CreateDSPAComplianceRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDSPAComplianceRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDSPACosMetaResourcesResponse> CreateDSPACosMetaResourcesOutcome;
                typedef std::future<CreateDSPACosMetaResourcesOutcome> CreateDSPACosMetaResourcesOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::CreateDSPACosMetaResourcesRequest&, CreateDSPACosMetaResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDSPACosMetaResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDSPADbMetaResourcesResponse> CreateDSPADbMetaResourcesOutcome;
                typedef std::future<CreateDSPADbMetaResourcesOutcome> CreateDSPADbMetaResourcesOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::CreateDSPADbMetaResourcesRequest&, CreateDSPADbMetaResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDSPADbMetaResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDSPADiscoveryRuleResponse> CreateDSPADiscoveryRuleOutcome;
                typedef std::future<CreateDSPADiscoveryRuleOutcome> CreateDSPADiscoveryRuleOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::CreateDSPADiscoveryRuleRequest&, CreateDSPADiscoveryRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDSPADiscoveryRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDSPADiscoveryTaskResponse> CreateDSPADiscoveryTaskOutcome;
                typedef std::future<CreateDSPADiscoveryTaskOutcome> CreateDSPADiscoveryTaskOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::CreateDSPADiscoveryTaskRequest&, CreateDSPADiscoveryTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDSPADiscoveryTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDSPALevelGroupResponse> CreateDSPALevelGroupOutcome;
                typedef std::future<CreateDSPALevelGroupOutcome> CreateDSPALevelGroupOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::CreateDSPALevelGroupRequest&, CreateDSPALevelGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDSPALevelGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDSPAMetaResourcesResponse> CreateDSPAMetaResourcesOutcome;
                typedef std::future<CreateDSPAMetaResourcesOutcome> CreateDSPAMetaResourcesOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::CreateDSPAMetaResourcesRequest&, CreateDSPAMetaResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDSPAMetaResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDSPASelfBuildMetaResourceResponse> CreateDSPASelfBuildMetaResourceOutcome;
                typedef std::future<CreateDSPASelfBuildMetaResourceOutcome> CreateDSPASelfBuildMetaResourceOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::CreateDSPASelfBuildMetaResourceRequest&, CreateDSPASelfBuildMetaResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDSPASelfBuildMetaResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateIdentifyRuleAnotherNameResponse> CreateIdentifyRuleAnotherNameOutcome;
                typedef std::future<CreateIdentifyRuleAnotherNameOutcome> CreateIdentifyRuleAnotherNameOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::CreateIdentifyRuleAnotherNameRequest&, CreateIdentifyRuleAnotherNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIdentifyRuleAnotherNameAsyncHandler;
                typedef Outcome<Core::Error, Model::DecribeSuggestRiskLevelMatrixResponse> DecribeSuggestRiskLevelMatrixOutcome;
                typedef std::future<DecribeSuggestRiskLevelMatrixOutcome> DecribeSuggestRiskLevelMatrixOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DecribeSuggestRiskLevelMatrixRequest&, DecribeSuggestRiskLevelMatrixOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DecribeSuggestRiskLevelMatrixAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCosMetaResourceResponse> DeleteCosMetaResourceOutcome;
                typedef std::future<DeleteCosMetaResourceOutcome> DeleteCosMetaResourceOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DeleteCosMetaResourceRequest&, DeleteCosMetaResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCosMetaResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDSPAAssessmentTaskResponse> DeleteDSPAAssessmentTaskOutcome;
                typedef std::future<DeleteDSPAAssessmentTaskOutcome> DeleteDSPAAssessmentTaskOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DeleteDSPAAssessmentTaskRequest&, DeleteDSPAAssessmentTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDSPAAssessmentTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDSPACOSDiscoveryTaskResponse> DeleteDSPACOSDiscoveryTaskOutcome;
                typedef std::future<DeleteDSPACOSDiscoveryTaskOutcome> DeleteDSPACOSDiscoveryTaskOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DeleteDSPACOSDiscoveryTaskRequest&, DeleteDSPACOSDiscoveryTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDSPACOSDiscoveryTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDSPACOSDiscoveryTaskResultResponse> DeleteDSPACOSDiscoveryTaskResultOutcome;
                typedef std::future<DeleteDSPACOSDiscoveryTaskResultOutcome> DeleteDSPACOSDiscoveryTaskResultOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DeleteDSPACOSDiscoveryTaskResultRequest&, DeleteDSPACOSDiscoveryTaskResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDSPACOSDiscoveryTaskResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDSPADiscoveryTaskResponse> DeleteDSPADiscoveryTaskOutcome;
                typedef std::future<DeleteDSPADiscoveryTaskOutcome> DeleteDSPADiscoveryTaskOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DeleteDSPADiscoveryTaskRequest&, DeleteDSPADiscoveryTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDSPADiscoveryTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDSPADiscoveryTaskResultResponse> DeleteDSPADiscoveryTaskResultOutcome;
                typedef std::future<DeleteDSPADiscoveryTaskResultOutcome> DeleteDSPADiscoveryTaskResultOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DeleteDSPADiscoveryTaskResultRequest&, DeleteDSPADiscoveryTaskResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDSPADiscoveryTaskResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDSPAMetaResourceResponse> DeleteDSPAMetaResourceOutcome;
                typedef std::future<DeleteDSPAMetaResourceOutcome> DeleteDSPAMetaResourceOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DeleteDSPAMetaResourceRequest&, DeleteDSPAMetaResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDSPAMetaResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetDetailDataExportResultResponse> DescribeAssetDetailDataExportResultOutcome;
                typedef std::future<DescribeAssetDetailDataExportResultOutcome> DescribeAssetDetailDataExportResultOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeAssetDetailDataExportResultRequest&, DescribeAssetDetailDataExportResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetDetailDataExportResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetOverviewResponse> DescribeAssetOverviewOutcome;
                typedef std::future<DescribeAssetOverviewOutcome> DescribeAssetOverviewOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeAssetOverviewRequest&, DescribeAssetOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBindDBListResponse> DescribeBindDBListOutcome;
                typedef std::future<DescribeBindDBListOutcome> DescribeBindDBListOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeBindDBListRequest&, DescribeBindDBListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBindDBListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCOSAssetSensitiveDistributionResponse> DescribeCOSAssetSensitiveDistributionOutcome;
                typedef std::future<DescribeCOSAssetSensitiveDistributionOutcome> DescribeCOSAssetSensitiveDistributionOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeCOSAssetSensitiveDistributionRequest&, DescribeCOSAssetSensitiveDistributionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCOSAssetSensitiveDistributionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPAAssessmentHighRiskTop10OverviewResponse> DescribeDSPAAssessmentHighRiskTop10OverviewOutcome;
                typedef std::future<DescribeDSPAAssessmentHighRiskTop10OverviewOutcome> DescribeDSPAAssessmentHighRiskTop10OverviewOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPAAssessmentHighRiskTop10OverviewRequest&, DescribeDSPAAssessmentHighRiskTop10OverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPAAssessmentHighRiskTop10OverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPAAssessmentLatestRiskDetailInfoResponse> DescribeDSPAAssessmentLatestRiskDetailInfoOutcome;
                typedef std::future<DescribeDSPAAssessmentLatestRiskDetailInfoOutcome> DescribeDSPAAssessmentLatestRiskDetailInfoOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPAAssessmentLatestRiskDetailInfoRequest&, DescribeDSPAAssessmentLatestRiskDetailInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPAAssessmentLatestRiskDetailInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPAAssessmentLatestRiskListResponse> DescribeDSPAAssessmentLatestRiskListOutcome;
                typedef std::future<DescribeDSPAAssessmentLatestRiskListOutcome> DescribeDSPAAssessmentLatestRiskListOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPAAssessmentLatestRiskListRequest&, DescribeDSPAAssessmentLatestRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPAAssessmentLatestRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPAAssessmentNewDiscoveredRiskOverviewResponse> DescribeDSPAAssessmentNewDiscoveredRiskOverviewOutcome;
                typedef std::future<DescribeDSPAAssessmentNewDiscoveredRiskOverviewOutcome> DescribeDSPAAssessmentNewDiscoveredRiskOverviewOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPAAssessmentNewDiscoveredRiskOverviewRequest&, DescribeDSPAAssessmentNewDiscoveredRiskOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPAAssessmentNewDiscoveredRiskOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPAAssessmentPendingRiskOverviewResponse> DescribeDSPAAssessmentPendingRiskOverviewOutcome;
                typedef std::future<DescribeDSPAAssessmentPendingRiskOverviewOutcome> DescribeDSPAAssessmentPendingRiskOverviewOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPAAssessmentPendingRiskOverviewRequest&, DescribeDSPAAssessmentPendingRiskOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPAAssessmentPendingRiskOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPAAssessmentProcessingRiskOverviewResponse> DescribeDSPAAssessmentProcessingRiskOverviewOutcome;
                typedef std::future<DescribeDSPAAssessmentProcessingRiskOverviewOutcome> DescribeDSPAAssessmentProcessingRiskOverviewOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPAAssessmentProcessingRiskOverviewRequest&, DescribeDSPAAssessmentProcessingRiskOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPAAssessmentProcessingRiskOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPAAssessmentRiskAmountOverviewResponse> DescribeDSPAAssessmentRiskAmountOverviewOutcome;
                typedef std::future<DescribeDSPAAssessmentRiskAmountOverviewOutcome> DescribeDSPAAssessmentRiskAmountOverviewOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPAAssessmentRiskAmountOverviewRequest&, DescribeDSPAAssessmentRiskAmountOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPAAssessmentRiskAmountOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPAAssessmentRiskDatasourceTop5Response> DescribeDSPAAssessmentRiskDatasourceTop5Outcome;
                typedef std::future<DescribeDSPAAssessmentRiskDatasourceTop5Outcome> DescribeDSPAAssessmentRiskDatasourceTop5OutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPAAssessmentRiskDatasourceTop5Request&, DescribeDSPAAssessmentRiskDatasourceTop5Outcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPAAssessmentRiskDatasourceTop5AsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPAAssessmentRiskDealedOverviewResponse> DescribeDSPAAssessmentRiskDealedOverviewOutcome;
                typedef std::future<DescribeDSPAAssessmentRiskDealedOverviewOutcome> DescribeDSPAAssessmentRiskDealedOverviewOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPAAssessmentRiskDealedOverviewRequest&, DescribeDSPAAssessmentRiskDealedOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPAAssessmentRiskDealedOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPAAssessmentRiskDealedTrendResponse> DescribeDSPAAssessmentRiskDealedTrendOutcome;
                typedef std::future<DescribeDSPAAssessmentRiskDealedTrendOutcome> DescribeDSPAAssessmentRiskDealedTrendOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPAAssessmentRiskDealedTrendRequest&, DescribeDSPAAssessmentRiskDealedTrendOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPAAssessmentRiskDealedTrendAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPAAssessmentRiskDistributionOverviewResponse> DescribeDSPAAssessmentRiskDistributionOverviewOutcome;
                typedef std::future<DescribeDSPAAssessmentRiskDistributionOverviewOutcome> DescribeDSPAAssessmentRiskDistributionOverviewOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPAAssessmentRiskDistributionOverviewRequest&, DescribeDSPAAssessmentRiskDistributionOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPAAssessmentRiskDistributionOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPAAssessmentRiskItemTop5Response> DescribeDSPAAssessmentRiskItemTop5Outcome;
                typedef std::future<DescribeDSPAAssessmentRiskItemTop5Outcome> DescribeDSPAAssessmentRiskItemTop5OutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPAAssessmentRiskItemTop5Request&, DescribeDSPAAssessmentRiskItemTop5Outcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPAAssessmentRiskItemTop5AsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPAAssessmentRiskLevelDetailResponse> DescribeDSPAAssessmentRiskLevelDetailOutcome;
                typedef std::future<DescribeDSPAAssessmentRiskLevelDetailOutcome> DescribeDSPAAssessmentRiskLevelDetailOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPAAssessmentRiskLevelDetailRequest&, DescribeDSPAAssessmentRiskLevelDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPAAssessmentRiskLevelDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPAAssessmentRiskLevelListResponse> DescribeDSPAAssessmentRiskLevelListOutcome;
                typedef std::future<DescribeDSPAAssessmentRiskLevelListOutcome> DescribeDSPAAssessmentRiskLevelListOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPAAssessmentRiskLevelListRequest&, DescribeDSPAAssessmentRiskLevelListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPAAssessmentRiskLevelListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPAAssessmentRiskLevelTrendResponse> DescribeDSPAAssessmentRiskLevelTrendOutcome;
                typedef std::future<DescribeDSPAAssessmentRiskLevelTrendOutcome> DescribeDSPAAssessmentRiskLevelTrendOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPAAssessmentRiskLevelTrendRequest&, DescribeDSPAAssessmentRiskLevelTrendOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPAAssessmentRiskLevelTrendAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPAAssessmentRiskOverviewResponse> DescribeDSPAAssessmentRiskOverviewOutcome;
                typedef std::future<DescribeDSPAAssessmentRiskOverviewOutcome> DescribeDSPAAssessmentRiskOverviewOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPAAssessmentRiskOverviewRequest&, DescribeDSPAAssessmentRiskOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPAAssessmentRiskOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPAAssessmentRiskProcessHistoryResponse> DescribeDSPAAssessmentRiskProcessHistoryOutcome;
                typedef std::future<DescribeDSPAAssessmentRiskProcessHistoryOutcome> DescribeDSPAAssessmentRiskProcessHistoryOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPAAssessmentRiskProcessHistoryRequest&, DescribeDSPAAssessmentRiskProcessHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPAAssessmentRiskProcessHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPAAssessmentRiskSideDistributedResponse> DescribeDSPAAssessmentRiskSideDistributedOutcome;
                typedef std::future<DescribeDSPAAssessmentRiskSideDistributedOutcome> DescribeDSPAAssessmentRiskSideDistributedOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPAAssessmentRiskSideDistributedRequest&, DescribeDSPAAssessmentRiskSideDistributedOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPAAssessmentRiskSideDistributedAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPAAssessmentRiskSideListResponse> DescribeDSPAAssessmentRiskSideListOutcome;
                typedef std::future<DescribeDSPAAssessmentRiskSideListOutcome> DescribeDSPAAssessmentRiskSideListOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPAAssessmentRiskSideListRequest&, DescribeDSPAAssessmentRiskSideListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPAAssessmentRiskSideListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPAAssessmentRiskTemplateDetailResponse> DescribeDSPAAssessmentRiskTemplateDetailOutcome;
                typedef std::future<DescribeDSPAAssessmentRiskTemplateDetailOutcome> DescribeDSPAAssessmentRiskTemplateDetailOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPAAssessmentRiskTemplateDetailRequest&, DescribeDSPAAssessmentRiskTemplateDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPAAssessmentRiskTemplateDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPAAssessmentRiskTemplateVulnerableListResponse> DescribeDSPAAssessmentRiskTemplateVulnerableListOutcome;
                typedef std::future<DescribeDSPAAssessmentRiskTemplateVulnerableListOutcome> DescribeDSPAAssessmentRiskTemplateVulnerableListOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPAAssessmentRiskTemplateVulnerableListRequest&, DescribeDSPAAssessmentRiskTemplateVulnerableListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPAAssessmentRiskTemplateVulnerableListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPAAssessmentRisksResponse> DescribeDSPAAssessmentRisksOutcome;
                typedef std::future<DescribeDSPAAssessmentRisksOutcome> DescribeDSPAAssessmentRisksOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPAAssessmentRisksRequest&, DescribeDSPAAssessmentRisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPAAssessmentRisksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPAAssessmentTasksResponse> DescribeDSPAAssessmentTasksOutcome;
                typedef std::future<DescribeDSPAAssessmentTasksOutcome> DescribeDSPAAssessmentTasksOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPAAssessmentTasksRequest&, DescribeDSPAAssessmentTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPAAssessmentTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPAAssessmentTemplateControlItemsResponse> DescribeDSPAAssessmentTemplateControlItemsOutcome;
                typedef std::future<DescribeDSPAAssessmentTemplateControlItemsOutcome> DescribeDSPAAssessmentTemplateControlItemsOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPAAssessmentTemplateControlItemsRequest&, DescribeDSPAAssessmentTemplateControlItemsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPAAssessmentTemplateControlItemsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPAAssessmentTemplatesResponse> DescribeDSPAAssessmentTemplatesOutcome;
                typedef std::future<DescribeDSPAAssessmentTemplatesOutcome> DescribeDSPAAssessmentTemplatesOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPAAssessmentTemplatesRequest&, DescribeDSPAAssessmentTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPAAssessmentTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPACOSDataAssetBucketsResponse> DescribeDSPACOSDataAssetBucketsOutcome;
                typedef std::future<DescribeDSPACOSDataAssetBucketsOutcome> DescribeDSPACOSDataAssetBucketsOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPACOSDataAssetBucketsRequest&, DescribeDSPACOSDataAssetBucketsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPACOSDataAssetBucketsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPACOSDataAssetByComplianceIdResponse> DescribeDSPACOSDataAssetByComplianceIdOutcome;
                typedef std::future<DescribeDSPACOSDataAssetByComplianceIdOutcome> DescribeDSPACOSDataAssetByComplianceIdOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPACOSDataAssetByComplianceIdRequest&, DescribeDSPACOSDataAssetByComplianceIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPACOSDataAssetByComplianceIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPACOSDataAssetDetailResponse> DescribeDSPACOSDataAssetDetailOutcome;
                typedef std::future<DescribeDSPACOSDataAssetDetailOutcome> DescribeDSPACOSDataAssetDetailOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPACOSDataAssetDetailRequest&, DescribeDSPACOSDataAssetDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPACOSDataAssetDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPACOSDiscoveryTaskDetailResponse> DescribeDSPACOSDiscoveryTaskDetailOutcome;
                typedef std::future<DescribeDSPACOSDiscoveryTaskDetailOutcome> DescribeDSPACOSDiscoveryTaskDetailOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPACOSDiscoveryTaskDetailRequest&, DescribeDSPACOSDiscoveryTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPACOSDiscoveryTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPACOSDiscoveryTaskFilesResponse> DescribeDSPACOSDiscoveryTaskFilesOutcome;
                typedef std::future<DescribeDSPACOSDiscoveryTaskFilesOutcome> DescribeDSPACOSDiscoveryTaskFilesOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPACOSDiscoveryTaskFilesRequest&, DescribeDSPACOSDiscoveryTaskFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPACOSDiscoveryTaskFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPACOSDiscoveryTaskResultResponse> DescribeDSPACOSDiscoveryTaskResultOutcome;
                typedef std::future<DescribeDSPACOSDiscoveryTaskResultOutcome> DescribeDSPACOSDiscoveryTaskResultOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPACOSDiscoveryTaskResultRequest&, DescribeDSPACOSDiscoveryTaskResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPACOSDiscoveryTaskResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPACOSDiscoveryTasksResponse> DescribeDSPACOSDiscoveryTasksOutcome;
                typedef std::future<DescribeDSPACOSDiscoveryTasksOutcome> DescribeDSPACOSDiscoveryTasksOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPACOSDiscoveryTasksRequest&, DescribeDSPACOSDiscoveryTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPACOSDiscoveryTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPACOSTaskResultDetailResponse> DescribeDSPACOSTaskResultDetailOutcome;
                typedef std::future<DescribeDSPACOSTaskResultDetailOutcome> DescribeDSPACOSTaskResultDetailOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPACOSTaskResultDetailRequest&, DescribeDSPACOSTaskResultDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPACOSTaskResultDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPACategoriesResponse> DescribeDSPACategoriesOutcome;
                typedef std::future<DescribeDSPACategoriesOutcome> DescribeDSPACategoriesOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPACategoriesRequest&, DescribeDSPACategoriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPACategoriesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPACategoryRuleStatisticResponse> DescribeDSPACategoryRuleStatisticOutcome;
                typedef std::future<DescribeDSPACategoryRuleStatisticOutcome> DescribeDSPACategoryRuleStatisticOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPACategoryRuleStatisticRequest&, DescribeDSPACategoryRuleStatisticOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPACategoryRuleStatisticAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPACategoryRulesResponse> DescribeDSPACategoryRulesOutcome;
                typedef std::future<DescribeDSPACategoryRulesOutcome> DescribeDSPACategoryRulesOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPACategoryRulesRequest&, DescribeDSPACategoryRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPACategoryRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPACategoryTreeResponse> DescribeDSPACategoryTreeOutcome;
                typedef std::future<DescribeDSPACategoryTreeOutcome> DescribeDSPACategoryTreeOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPACategoryTreeRequest&, DescribeDSPACategoryTreeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPACategoryTreeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPACategoryTreeWithRulesResponse> DescribeDSPACategoryTreeWithRulesOutcome;
                typedef std::future<DescribeDSPACategoryTreeWithRulesOutcome> DescribeDSPACategoryTreeWithRulesOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPACategoryTreeWithRulesRequest&, DescribeDSPACategoryTreeWithRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPACategoryTreeWithRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPAComplianceGroupDetailResponse> DescribeDSPAComplianceGroupDetailOutcome;
                typedef std::future<DescribeDSPAComplianceGroupDetailOutcome> DescribeDSPAComplianceGroupDetailOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPAComplianceGroupDetailRequest&, DescribeDSPAComplianceGroupDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPAComplianceGroupDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPAComplianceGroupsResponse> DescribeDSPAComplianceGroupsOutcome;
                typedef std::future<DescribeDSPAComplianceGroupsOutcome> DescribeDSPAComplianceGroupsOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPAComplianceGroupsRequest&, DescribeDSPAComplianceGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPAComplianceGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPAComplianceUpdateNotificationResponse> DescribeDSPAComplianceUpdateNotificationOutcome;
                typedef std::future<DescribeDSPAComplianceUpdateNotificationOutcome> DescribeDSPAComplianceUpdateNotificationOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPAComplianceUpdateNotificationRequest&, DescribeDSPAComplianceUpdateNotificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPAComplianceUpdateNotificationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPADataSourceDbInfoResponse> DescribeDSPADataSourceDbInfoOutcome;
                typedef std::future<DescribeDSPADataSourceDbInfoOutcome> DescribeDSPADataSourceDbInfoOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPADataSourceDbInfoRequest&, DescribeDSPADataSourceDbInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPADataSourceDbInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPADiscoveryRulesResponse> DescribeDSPADiscoveryRulesOutcome;
                typedef std::future<DescribeDSPADiscoveryRulesOutcome> DescribeDSPADiscoveryRulesOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPADiscoveryRulesRequest&, DescribeDSPADiscoveryRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPADiscoveryRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPADiscoveryServiceStatusResponse> DescribeDSPADiscoveryServiceStatusOutcome;
                typedef std::future<DescribeDSPADiscoveryServiceStatusOutcome> DescribeDSPADiscoveryServiceStatusOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPADiscoveryServiceStatusRequest&, DescribeDSPADiscoveryServiceStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPADiscoveryServiceStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPADiscoveryTaskDetailResponse> DescribeDSPADiscoveryTaskDetailOutcome;
                typedef std::future<DescribeDSPADiscoveryTaskDetailOutcome> DescribeDSPADiscoveryTaskDetailOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPADiscoveryTaskDetailRequest&, DescribeDSPADiscoveryTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPADiscoveryTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPADiscoveryTaskResultResponse> DescribeDSPADiscoveryTaskResultOutcome;
                typedef std::future<DescribeDSPADiscoveryTaskResultOutcome> DescribeDSPADiscoveryTaskResultOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPADiscoveryTaskResultRequest&, DescribeDSPADiscoveryTaskResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPADiscoveryTaskResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPADiscoveryTaskResultDetailResponse> DescribeDSPADiscoveryTaskResultDetailOutcome;
                typedef std::future<DescribeDSPADiscoveryTaskResultDetailOutcome> DescribeDSPADiscoveryTaskResultDetailOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPADiscoveryTaskResultDetailRequest&, DescribeDSPADiscoveryTaskResultDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPADiscoveryTaskResultDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPADiscoveryTaskTablesResponse> DescribeDSPADiscoveryTaskTablesOutcome;
                typedef std::future<DescribeDSPADiscoveryTaskTablesOutcome> DescribeDSPADiscoveryTaskTablesOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPADiscoveryTaskTablesRequest&, DescribeDSPADiscoveryTaskTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPADiscoveryTaskTablesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPADiscoveryTasksResponse> DescribeDSPADiscoveryTasksOutcome;
                typedef std::future<DescribeDSPADiscoveryTasksOutcome> DescribeDSPADiscoveryTasksOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPADiscoveryTasksRequest&, DescribeDSPADiscoveryTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPADiscoveryTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPAESDataAssetByComplianceIdResponse> DescribeDSPAESDataAssetByComplianceIdOutcome;
                typedef std::future<DescribeDSPAESDataAssetByComplianceIdOutcome> DescribeDSPAESDataAssetByComplianceIdOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPAESDataAssetByComplianceIdRequest&, DescribeDSPAESDataAssetByComplianceIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPAESDataAssetByComplianceIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPAESDataAssetDetailResponse> DescribeDSPAESDataAssetDetailOutcome;
                typedef std::future<DescribeDSPAESDataAssetDetailOutcome> DescribeDSPAESDataAssetDetailOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPAESDataAssetDetailRequest&, DescribeDSPAESDataAssetDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPAESDataAssetDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPAESDataSampleResponse> DescribeDSPAESDataSampleOutcome;
                typedef std::future<DescribeDSPAESDataSampleOutcome> DescribeDSPAESDataSampleOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPAESDataSampleRequest&, DescribeDSPAESDataSampleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPAESDataSampleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPAESDiscoveryTaskResultDetailResponse> DescribeDSPAESDiscoveryTaskResultDetailOutcome;
                typedef std::future<DescribeDSPAESDiscoveryTaskResultDetailOutcome> DescribeDSPAESDiscoveryTaskResultDetailOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPAESDiscoveryTaskResultDetailRequest&, DescribeDSPAESDiscoveryTaskResultDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPAESDiscoveryTaskResultDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPALevelDetailResponse> DescribeDSPALevelDetailOutcome;
                typedef std::future<DescribeDSPALevelDetailOutcome> DescribeDSPALevelDetailOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPALevelDetailRequest&, DescribeDSPALevelDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPALevelDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPALevelGroupsResponse> DescribeDSPALevelGroupsOutcome;
                typedef std::future<DescribeDSPALevelGroupsOutcome> DescribeDSPALevelGroupsOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPALevelGroupsRequest&, DescribeDSPALevelGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPALevelGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPARDBDataAssetByComplianceIdResponse> DescribeDSPARDBDataAssetByComplianceIdOutcome;
                typedef std::future<DescribeDSPARDBDataAssetByComplianceIdOutcome> DescribeDSPARDBDataAssetByComplianceIdOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPARDBDataAssetByComplianceIdRequest&, DescribeDSPARDBDataAssetByComplianceIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPARDBDataAssetByComplianceIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPARDBDataAssetDetailResponse> DescribeDSPARDBDataAssetDetailOutcome;
                typedef std::future<DescribeDSPARDBDataAssetDetailOutcome> DescribeDSPARDBDataAssetDetailOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPARDBDataAssetDetailRequest&, DescribeDSPARDBDataAssetDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPARDBDataAssetDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPASupportedMetasResponse> DescribeDSPASupportedMetasOutcome;
                typedef std::future<DescribeDSPASupportedMetasOutcome> DescribeDSPASupportedMetasOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPASupportedMetasRequest&, DescribeDSPASupportedMetasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPASupportedMetasAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDSPATaskResultDataSampleResponse> DescribeDSPATaskResultDataSampleOutcome;
                typedef std::future<DescribeDSPATaskResultDataSampleOutcome> DescribeDSPATaskResultDataSampleOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeDSPATaskResultDataSampleRequest&, DescribeDSPATaskResultDataSampleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDSPATaskResultDataSampleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeESAssetSensitiveDistributionResponse> DescribeESAssetSensitiveDistributionOutcome;
                typedef std::future<DescribeESAssetSensitiveDistributionOutcome> DescribeESAssetSensitiveDistributionOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeESAssetSensitiveDistributionRequest&, DescribeESAssetSensitiveDistributionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeESAssetSensitiveDistributionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExportTaskResultResponse> DescribeExportTaskResultOutcome;
                typedef std::future<DescribeExportTaskResultOutcome> DescribeExportTaskResultOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeExportTaskResultRequest&, DescribeExportTaskResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExportTaskResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMongoAssetSensitiveDistributionResponse> DescribeMongoAssetSensitiveDistributionOutcome;
                typedef std::future<DescribeMongoAssetSensitiveDistributionOutcome> DescribeMongoAssetSensitiveDistributionOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeMongoAssetSensitiveDistributionRequest&, DescribeMongoAssetSensitiveDistributionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMongoAssetSensitiveDistributionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRDBAssetSensitiveDistributionResponse> DescribeRDBAssetSensitiveDistributionOutcome;
                typedef std::future<DescribeRDBAssetSensitiveDistributionOutcome> DescribeRDBAssetSensitiveDistributionOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeRDBAssetSensitiveDistributionRequest&, DescribeRDBAssetSensitiveDistributionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRDBAssetSensitiveDistributionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReportTaskDownloadUrlResponse> DescribeReportTaskDownloadUrlOutcome;
                typedef std::future<DescribeReportTaskDownloadUrlOutcome> DescribeReportTaskDownloadUrlOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeReportTaskDownloadUrlRequest&, DescribeReportTaskDownloadUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReportTaskDownloadUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReportTasksResponse> DescribeReportTasksOutcome;
                typedef std::future<DescribeReportTasksOutcome> DescribeReportTasksOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeReportTasksRequest&, DescribeReportTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReportTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSensitiveCOSDataDistributionResponse> DescribeSensitiveCOSDataDistributionOutcome;
                typedef std::future<DescribeSensitiveCOSDataDistributionOutcome> DescribeSensitiveCOSDataDistributionOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeSensitiveCOSDataDistributionRequest&, DescribeSensitiveCOSDataDistributionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSensitiveCOSDataDistributionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSensitiveRDBDataDistributionResponse> DescribeSensitiveRDBDataDistributionOutcome;
                typedef std::future<DescribeSensitiveRDBDataDistributionOutcome> DescribeSensitiveRDBDataDistributionOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DescribeSensitiveRDBDataDistributionRequest&, DescribeSensitiveRDBDataDistributionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSensitiveRDBDataDistributionAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableDSPAMetaResourceAuthResponse> DisableDSPAMetaResourceAuthOutcome;
                typedef std::future<DisableDSPAMetaResourceAuthOutcome> DisableDSPAMetaResourceAuthOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::DisableDSPAMetaResourceAuthRequest&, DisableDSPAMetaResourceAuthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableDSPAMetaResourceAuthAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableDSPADiscoveryRuleResponse> EnableDSPADiscoveryRuleOutcome;
                typedef std::future<EnableDSPADiscoveryRuleOutcome> EnableDSPADiscoveryRuleOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::EnableDSPADiscoveryRuleRequest&, EnableDSPADiscoveryRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableDSPADiscoveryRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableTrialVersionResponse> EnableTrialVersionOutcome;
                typedef std::future<EnableTrialVersionOutcome> EnableTrialVersionOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::EnableTrialVersionRequest&, EnableTrialVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableTrialVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportAssetDetailDataResponse> ExportAssetDetailDataOutcome;
                typedef std::future<ExportAssetDetailDataOutcome> ExportAssetDetailDataOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::ExportAssetDetailDataRequest&, ExportAssetDetailDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportAssetDetailDataAsyncHandler;
                typedef Outcome<Core::Error, Model::GetResourceConnectionStatusResponse> GetResourceConnectionStatusOutcome;
                typedef std::future<GetResourceConnectionStatusOutcome> GetResourceConnectionStatusOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::GetResourceConnectionStatusRequest&, GetResourceConnectionStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetResourceConnectionStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTrialVersionResponse> GetTrialVersionOutcome;
                typedef std::future<GetTrialVersionOutcome> GetTrialVersionOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::GetTrialVersionRequest&, GetTrialVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTrialVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::GetUserQuotaInfoResponse> GetUserQuotaInfoOutcome;
                typedef std::future<GetUserQuotaInfoOutcome> GetUserQuotaInfoOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::GetUserQuotaInfoRequest&, GetUserQuotaInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetUserQuotaInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ListDSPAClustersResponse> ListDSPAClustersOutcome;
                typedef std::future<ListDSPAClustersOutcome> ListDSPAClustersOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::ListDSPAClustersRequest&, ListDSPAClustersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListDSPAClustersAsyncHandler;
                typedef Outcome<Core::Error, Model::ListDSPACosMetaResourcesResponse> ListDSPACosMetaResourcesOutcome;
                typedef std::future<ListDSPACosMetaResourcesOutcome> ListDSPACosMetaResourcesOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::ListDSPACosMetaResourcesRequest&, ListDSPACosMetaResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListDSPACosMetaResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListDSPAMetaResourcesResponse> ListDSPAMetaResourcesOutcome;
                typedef std::future<ListDSPAMetaResourcesOutcome> ListDSPAMetaResourcesOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::ListDSPAMetaResourcesRequest&, ListDSPAMetaResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListDSPAMetaResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDSPAAssessmentRiskResponse> ModifyDSPAAssessmentRiskOutcome;
                typedef std::future<ModifyDSPAAssessmentRiskOutcome> ModifyDSPAAssessmentRiskOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::ModifyDSPAAssessmentRiskRequest&, ModifyDSPAAssessmentRiskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDSPAAssessmentRiskAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDSPAAssessmentRiskLatestResponse> ModifyDSPAAssessmentRiskLatestOutcome;
                typedef std::future<ModifyDSPAAssessmentRiskLatestOutcome> ModifyDSPAAssessmentRiskLatestOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::ModifyDSPAAssessmentRiskLatestRequest&, ModifyDSPAAssessmentRiskLatestOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDSPAAssessmentRiskLatestAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDSPAAssessmentRiskLevelResponse> ModifyDSPAAssessmentRiskLevelOutcome;
                typedef std::future<ModifyDSPAAssessmentRiskLevelOutcome> ModifyDSPAAssessmentRiskLevelOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::ModifyDSPAAssessmentRiskLevelRequest&, ModifyDSPAAssessmentRiskLevelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDSPAAssessmentRiskLevelAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDSPAAssessmentRiskTemplateResponse> ModifyDSPAAssessmentRiskTemplateOutcome;
                typedef std::future<ModifyDSPAAssessmentRiskTemplateOutcome> ModifyDSPAAssessmentRiskTemplateOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::ModifyDSPAAssessmentRiskTemplateRequest&, ModifyDSPAAssessmentRiskTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDSPAAssessmentRiskTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDSPACOSDiscoveryTaskResponse> ModifyDSPACOSDiscoveryTaskOutcome;
                typedef std::future<ModifyDSPACOSDiscoveryTaskOutcome> ModifyDSPACOSDiscoveryTaskOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::ModifyDSPACOSDiscoveryTaskRequest&, ModifyDSPACOSDiscoveryTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDSPACOSDiscoveryTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDSPACOSTaskResultResponse> ModifyDSPACOSTaskResultOutcome;
                typedef std::future<ModifyDSPACOSTaskResultOutcome> ModifyDSPACOSTaskResultOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::ModifyDSPACOSTaskResultRequest&, ModifyDSPACOSTaskResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDSPACOSTaskResultAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDSPACategoryResponse> ModifyDSPACategoryOutcome;
                typedef std::future<ModifyDSPACategoryOutcome> ModifyDSPACategoryOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::ModifyDSPACategoryRequest&, ModifyDSPACategoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDSPACategoryAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDSPACategoryRelationResponse> ModifyDSPACategoryRelationOutcome;
                typedef std::future<ModifyDSPACategoryRelationOutcome> ModifyDSPACategoryRelationOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::ModifyDSPACategoryRelationRequest&, ModifyDSPACategoryRelationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDSPACategoryRelationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDSPAClusterInfoResponse> ModifyDSPAClusterInfoOutcome;
                typedef std::future<ModifyDSPAClusterInfoOutcome> ModifyDSPAClusterInfoOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::ModifyDSPAClusterInfoRequest&, ModifyDSPAClusterInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDSPAClusterInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDSPAComplianceGroupResponse> ModifyDSPAComplianceGroupOutcome;
                typedef std::future<ModifyDSPAComplianceGroupOutcome> ModifyDSPAComplianceGroupOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::ModifyDSPAComplianceGroupRequest&, ModifyDSPAComplianceGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDSPAComplianceGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDSPADiscoveryRuleResponse> ModifyDSPADiscoveryRuleOutcome;
                typedef std::future<ModifyDSPADiscoveryRuleOutcome> ModifyDSPADiscoveryRuleOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::ModifyDSPADiscoveryRuleRequest&, ModifyDSPADiscoveryRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDSPADiscoveryRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDSPADiscoveryTaskResponse> ModifyDSPADiscoveryTaskOutcome;
                typedef std::future<ModifyDSPADiscoveryTaskOutcome> ModifyDSPADiscoveryTaskOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::ModifyDSPADiscoveryTaskRequest&, ModifyDSPADiscoveryTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDSPADiscoveryTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDSPAESTaskResultResponse> ModifyDSPAESTaskResultOutcome;
                typedef std::future<ModifyDSPAESTaskResultOutcome> ModifyDSPAESTaskResultOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::ModifyDSPAESTaskResultRequest&, ModifyDSPAESTaskResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDSPAESTaskResultAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDSPATaskResultResponse> ModifyDSPATaskResultOutcome;
                typedef std::future<ModifyDSPATaskResultOutcome> ModifyDSPATaskResultOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::ModifyDSPATaskResultRequest&, ModifyDSPATaskResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDSPATaskResultAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryDSPAMetaResourceDbListResponse> QueryDSPAMetaResourceDbListOutcome;
                typedef std::future<QueryDSPAMetaResourceDbListOutcome> QueryDSPAMetaResourceDbListOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::QueryDSPAMetaResourceDbListRequest&, QueryDSPAMetaResourceDbListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryDSPAMetaResourceDbListAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryResourceDbBindStatusResponse> QueryResourceDbBindStatusOutcome;
                typedef std::future<QueryResourceDbBindStatusOutcome> QueryResourceDbBindStatusOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::QueryResourceDbBindStatusRequest&, QueryResourceDbBindStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryResourceDbBindStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::RestartDSPAAssessmentTaskResponse> RestartDSPAAssessmentTaskOutcome;
                typedef std::future<RestartDSPAAssessmentTaskOutcome> RestartDSPAAssessmentTaskOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::RestartDSPAAssessmentTaskRequest&, RestartDSPAAssessmentTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestartDSPAAssessmentTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::StartDSPADiscoveryTaskResponse> StartDSPADiscoveryTaskOutcome;
                typedef std::future<StartDSPADiscoveryTaskOutcome> StartDSPADiscoveryTaskOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::StartDSPADiscoveryTaskRequest&, StartDSPADiscoveryTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartDSPADiscoveryTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::StopDSPADiscoveryTaskResponse> StopDSPADiscoveryTaskOutcome;
                typedef std::future<StopDSPADiscoveryTaskOutcome> StopDSPADiscoveryTaskOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::StopDSPADiscoveryTaskRequest&, StopDSPADiscoveryTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopDSPADiscoveryTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateDSPASelfBuildResourceResponse> UpdateDSPASelfBuildResourceOutcome;
                typedef std::future<UpdateDSPASelfBuildResourceOutcome> UpdateDSPASelfBuildResourceOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::UpdateDSPASelfBuildResourceRequest&, UpdateDSPASelfBuildResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDSPASelfBuildResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::VerifyDSPACOSRuleResponse> VerifyDSPACOSRuleOutcome;
                typedef std::future<VerifyDSPACOSRuleOutcome> VerifyDSPACOSRuleOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::VerifyDSPACOSRuleRequest&, VerifyDSPACOSRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VerifyDSPACOSRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::VerifyDSPADiscoveryRuleResponse> VerifyDSPADiscoveryRuleOutcome;
                typedef std::future<VerifyDSPADiscoveryRuleOutcome> VerifyDSPADiscoveryRuleOutcomeCallable;
                typedef std::function<void(const DsgcClient*, const Model::VerifyDSPADiscoveryRuleRequest&, VerifyDSPADiscoveryRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VerifyDSPADiscoveryRuleAsyncHandler;



                /**
                 *授权用户云资源
                 * @param req AuthorizeDSPAMetaResourcesRequest
                 * @return AuthorizeDSPAMetaResourcesOutcome
                 */
                AuthorizeDSPAMetaResourcesOutcome AuthorizeDSPAMetaResources(const Model::AuthorizeDSPAMetaResourcesRequest &request);
                void AuthorizeDSPAMetaResourcesAsync(const Model::AuthorizeDSPAMetaResourcesRequest& request, const AuthorizeDSPAMetaResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AuthorizeDSPAMetaResourcesOutcomeCallable AuthorizeDSPAMetaResourcesCallable(const Model::AuthorizeDSPAMetaResourcesRequest& request);

                /**
                 *绑定或解绑COS桶
                 * @param req BindDSPAResourceCosBucketsRequest
                 * @return BindDSPAResourceCosBucketsOutcome
                 */
                BindDSPAResourceCosBucketsOutcome BindDSPAResourceCosBuckets(const Model::BindDSPAResourceCosBucketsRequest &request);
                void BindDSPAResourceCosBucketsAsync(const Model::BindDSPAResourceCosBucketsRequest& request, const BindDSPAResourceCosBucketsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindDSPAResourceCosBucketsOutcomeCallable BindDSPAResourceCosBucketsCallable(const Model::BindDSPAResourceCosBucketsRequest& request);

                /**
                 *绑定或解绑数据库实例DB
                 * @param req BindDSPAResourceDatabasesRequest
                 * @return BindDSPAResourceDatabasesOutcome
                 */
                BindDSPAResourceDatabasesOutcome BindDSPAResourceDatabases(const Model::BindDSPAResourceDatabasesRequest &request);
                void BindDSPAResourceDatabasesAsync(const Model::BindDSPAResourceDatabasesRequest& request, const BindDSPAResourceDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindDSPAResourceDatabasesOutcomeCallable BindDSPAResourceDatabasesCallable(const Model::BindDSPAResourceDatabasesRequest& request);

                /**
                 *复制合规组模板
                 * @param req CopyDSPATemplateRequest
                 * @return CopyDSPATemplateOutcome
                 */
                CopyDSPATemplateOutcome CopyDSPATemplate(const Model::CopyDSPATemplateRequest &request);
                void CopyDSPATemplateAsync(const Model::CopyDSPATemplateRequest& request, const CopyDSPATemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CopyDSPATemplateOutcomeCallable CopyDSPATemplateCallable(const Model::CopyDSPATemplateRequest& request);

                /**
                 *创建资产梳理报表导出重试任务
                 * @param req CreateAssetSortingReportRetryTaskRequest
                 * @return CreateAssetSortingReportRetryTaskOutcome
                 */
                CreateAssetSortingReportRetryTaskOutcome CreateAssetSortingReportRetryTask(const Model::CreateAssetSortingReportRetryTaskRequest &request);
                void CreateAssetSortingReportRetryTaskAsync(const Model::CreateAssetSortingReportRetryTaskRequest& request, const CreateAssetSortingReportRetryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAssetSortingReportRetryTaskOutcomeCallable CreateAssetSortingReportRetryTaskCallable(const Model::CreateAssetSortingReportRetryTaskRequest& request);

                /**
                 *创建资产梳理报告任务
                 * @param req CreateAssetSortingReportTaskRequest
                 * @return CreateAssetSortingReportTaskOutcome
                 */
                CreateAssetSortingReportTaskOutcome CreateAssetSortingReportTask(const Model::CreateAssetSortingReportTaskRequest &request);
                void CreateAssetSortingReportTaskAsync(const Model::CreateAssetSortingReportTaskRequest& request, const CreateAssetSortingReportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAssetSortingReportTaskOutcomeCallable CreateAssetSortingReportTaskCallable(const Model::CreateAssetSortingReportTaskRequest& request);

                /**
                 *风险项页面---创建风险等级
                 * @param req CreateDSPAAssessmentRiskLevelRequest
                 * @return CreateDSPAAssessmentRiskLevelOutcome
                 */
                CreateDSPAAssessmentRiskLevelOutcome CreateDSPAAssessmentRiskLevel(const Model::CreateDSPAAssessmentRiskLevelRequest &request);
                void CreateDSPAAssessmentRiskLevelAsync(const Model::CreateDSPAAssessmentRiskLevelRequest& request, const CreateDSPAAssessmentRiskLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDSPAAssessmentRiskLevelOutcomeCallable CreateDSPAAssessmentRiskLevelCallable(const Model::CreateDSPAAssessmentRiskLevelRequest& request);

                /**
                 *风险评估模板---创建风险评估模板
                 * @param req CreateDSPAAssessmentRiskTemplateRequest
                 * @return CreateDSPAAssessmentRiskTemplateOutcome
                 */
                CreateDSPAAssessmentRiskTemplateOutcome CreateDSPAAssessmentRiskTemplate(const Model::CreateDSPAAssessmentRiskTemplateRequest &request);
                void CreateDSPAAssessmentRiskTemplateAsync(const Model::CreateDSPAAssessmentRiskTemplateRequest& request, const CreateDSPAAssessmentRiskTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDSPAAssessmentRiskTemplateOutcomeCallable CreateDSPAAssessmentRiskTemplateCallable(const Model::CreateDSPAAssessmentRiskTemplateRequest& request);

                /**
                 *新建DSPA风险评估任务
                 * @param req CreateDSPAAssessmentTaskRequest
                 * @return CreateDSPAAssessmentTaskOutcome
                 */
                CreateDSPAAssessmentTaskOutcome CreateDSPAAssessmentTask(const Model::CreateDSPAAssessmentTaskRequest &request);
                void CreateDSPAAssessmentTaskAsync(const Model::CreateDSPAAssessmentTaskRequest& request, const CreateDSPAAssessmentTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDSPAAssessmentTaskOutcomeCallable CreateDSPAAssessmentTaskCallable(const Model::CreateDSPAAssessmentTaskRequest& request);

                /**
                 *新增COS分类分级扫描任务，单个用户最多允许创建100个任务。
                 * @param req CreateDSPACOSDiscoveryTaskRequest
                 * @return CreateDSPACOSDiscoveryTaskOutcome
                 */
                CreateDSPACOSDiscoveryTaskOutcome CreateDSPACOSDiscoveryTask(const Model::CreateDSPACOSDiscoveryTaskRequest &request);
                void CreateDSPACOSDiscoveryTaskAsync(const Model::CreateDSPACOSDiscoveryTaskRequest& request, const CreateDSPACOSDiscoveryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDSPACOSDiscoveryTaskOutcomeCallable CreateDSPACOSDiscoveryTaskCallable(const Model::CreateDSPACOSDiscoveryTaskRequest& request);

                /**
                 *新增分类，单个用户最多允许创建100个数据分类。
                 * @param req CreateDSPACategoryRequest
                 * @return CreateDSPACategoryOutcome
                 */
                CreateDSPACategoryOutcome CreateDSPACategory(const Model::CreateDSPACategoryRequest &request);
                void CreateDSPACategoryAsync(const Model::CreateDSPACategoryRequest& request, const CreateDSPACategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDSPACategoryOutcomeCallable CreateDSPACategoryCallable(const Model::CreateDSPACategoryRequest& request);

                /**
                 *创建分类关联关系
                 * @param req CreateDSPACategoryRelationRequest
                 * @return CreateDSPACategoryRelationOutcome
                 */
                CreateDSPACategoryRelationOutcome CreateDSPACategoryRelation(const Model::CreateDSPACategoryRelationRequest &request);
                void CreateDSPACategoryRelationAsync(const Model::CreateDSPACategoryRelationRequest& request, const CreateDSPACategoryRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDSPACategoryRelationOutcomeCallable CreateDSPACategoryRelationCallable(const Model::CreateDSPACategoryRelationRequest& request);

                /**
                 *新增分类分级模板，单个用户最多允许创建100个合规组。
                 * @param req CreateDSPAComplianceGroupRequest
                 * @return CreateDSPAComplianceGroupOutcome
                 */
                CreateDSPAComplianceGroupOutcome CreateDSPAComplianceGroup(const Model::CreateDSPAComplianceGroupRequest &request);
                void CreateDSPAComplianceGroupAsync(const Model::CreateDSPAComplianceGroupRequest& request, const CreateDSPAComplianceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDSPAComplianceGroupOutcomeCallable CreateDSPAComplianceGroupCallable(const Model::CreateDSPAComplianceGroupRequest& request);

                /**
                 *创建合规组分类规则关联关系
                 * @param req CreateDSPAComplianceRulesRequest
                 * @return CreateDSPAComplianceRulesOutcome
                 */
                CreateDSPAComplianceRulesOutcome CreateDSPAComplianceRules(const Model::CreateDSPAComplianceRulesRequest &request);
                void CreateDSPAComplianceRulesAsync(const Model::CreateDSPAComplianceRulesRequest& request, const CreateDSPAComplianceRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDSPAComplianceRulesOutcomeCallable CreateDSPAComplianceRulesCallable(const Model::CreateDSPAComplianceRulesRequest& request);

                /**
                 *添加COS元数据
                 * @param req CreateDSPACosMetaResourcesRequest
                 * @return CreateDSPACosMetaResourcesOutcome
                 */
                CreateDSPACosMetaResourcesOutcome CreateDSPACosMetaResources(const Model::CreateDSPACosMetaResourcesRequest &request);
                void CreateDSPACosMetaResourcesAsync(const Model::CreateDSPACosMetaResourcesRequest& request, const CreateDSPACosMetaResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDSPACosMetaResourcesOutcomeCallable CreateDSPACosMetaResourcesCallable(const Model::CreateDSPACosMetaResourcesRequest& request);

                /**
                 *添加用户云上数据库类型资源
                 * @param req CreateDSPADbMetaResourcesRequest
                 * @return CreateDSPADbMetaResourcesOutcome
                 */
                CreateDSPADbMetaResourcesOutcome CreateDSPADbMetaResources(const Model::CreateDSPADbMetaResourcesRequest &request);
                void CreateDSPADbMetaResourcesAsync(const Model::CreateDSPADbMetaResourcesRequest& request, const CreateDSPADbMetaResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDSPADbMetaResourcesOutcomeCallable CreateDSPADbMetaResourcesCallable(const Model::CreateDSPADbMetaResourcesRequest& request);

                /**
                 *新增分类分级规则，单个用户最多允许创建200个规则。
                 * @param req CreateDSPADiscoveryRuleRequest
                 * @return CreateDSPADiscoveryRuleOutcome
                 */
                CreateDSPADiscoveryRuleOutcome CreateDSPADiscoveryRule(const Model::CreateDSPADiscoveryRuleRequest &request);
                void CreateDSPADiscoveryRuleAsync(const Model::CreateDSPADiscoveryRuleRequest& request, const CreateDSPADiscoveryRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDSPADiscoveryRuleOutcomeCallable CreateDSPADiscoveryRuleCallable(const Model::CreateDSPADiscoveryRuleRequest& request);

                /**
                 *新增分类分级任务，单个用户最多允许创建100个任务。
                 * @param req CreateDSPADiscoveryTaskRequest
                 * @return CreateDSPADiscoveryTaskOutcome
                 */
                CreateDSPADiscoveryTaskOutcome CreateDSPADiscoveryTask(const Model::CreateDSPADiscoveryTaskRequest &request);
                void CreateDSPADiscoveryTaskAsync(const Model::CreateDSPADiscoveryTaskRequest& request, const CreateDSPADiscoveryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDSPADiscoveryTaskOutcomeCallable CreateDSPADiscoveryTaskCallable(const Model::CreateDSPADiscoveryTaskRequest& request);

                /**
                 *新增分级，单个Casb实例最多允许创建100个数据分级
                 * @param req CreateDSPALevelGroupRequest
                 * @return CreateDSPALevelGroupOutcome
                 */
                CreateDSPALevelGroupOutcome CreateDSPALevelGroup(const Model::CreateDSPALevelGroupRequest &request);
                void CreateDSPALevelGroupAsync(const Model::CreateDSPALevelGroupRequest& request, const CreateDSPALevelGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDSPALevelGroupOutcomeCallable CreateDSPALevelGroupCallable(const Model::CreateDSPALevelGroupRequest& request);

                /**
                 *添加用户云上资源列表
                 * @param req CreateDSPAMetaResourcesRequest
                 * @return CreateDSPAMetaResourcesOutcome
                 */
                CreateDSPAMetaResourcesOutcome CreateDSPAMetaResources(const Model::CreateDSPAMetaResourcesRequest &request);
                void CreateDSPAMetaResourcesAsync(const Model::CreateDSPAMetaResourcesRequest& request, const CreateDSPAMetaResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDSPAMetaResourcesOutcomeCallable CreateDSPAMetaResourcesCallable(const Model::CreateDSPAMetaResourcesRequest& request);

                /**
                 *新建用户自建云资源
                 * @param req CreateDSPASelfBuildMetaResourceRequest
                 * @return CreateDSPASelfBuildMetaResourceOutcome
                 */
                CreateDSPASelfBuildMetaResourceOutcome CreateDSPASelfBuildMetaResource(const Model::CreateDSPASelfBuildMetaResourceRequest &request);
                void CreateDSPASelfBuildMetaResourceAsync(const Model::CreateDSPASelfBuildMetaResourceRequest& request, const CreateDSPASelfBuildMetaResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDSPASelfBuildMetaResourceOutcomeCallable CreateDSPASelfBuildMetaResourceCallable(const Model::CreateDSPASelfBuildMetaResourceRequest& request);

                /**
                 *创建规则别名
                 * @param req CreateIdentifyRuleAnotherNameRequest
                 * @return CreateIdentifyRuleAnotherNameOutcome
                 */
                CreateIdentifyRuleAnotherNameOutcome CreateIdentifyRuleAnotherName(const Model::CreateIdentifyRuleAnotherNameRequest &request);
                void CreateIdentifyRuleAnotherNameAsync(const Model::CreateIdentifyRuleAnotherNameRequest& request, const CreateIdentifyRuleAnotherNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIdentifyRuleAnotherNameOutcomeCallable CreateIdentifyRuleAnotherNameCallable(const Model::CreateIdentifyRuleAnotherNameRequest& request);

                /**
                 *风险等级的定义页面-创建风险等级的时候生成的一个默认的矩阵
                 * @param req DecribeSuggestRiskLevelMatrixRequest
                 * @return DecribeSuggestRiskLevelMatrixOutcome
                 */
                DecribeSuggestRiskLevelMatrixOutcome DecribeSuggestRiskLevelMatrix(const Model::DecribeSuggestRiskLevelMatrixRequest &request);
                void DecribeSuggestRiskLevelMatrixAsync(const Model::DecribeSuggestRiskLevelMatrixRequest& request, const DecribeSuggestRiskLevelMatrixAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DecribeSuggestRiskLevelMatrixOutcomeCallable DecribeSuggestRiskLevelMatrixCallable(const Model::DecribeSuggestRiskLevelMatrixRequest& request);

                /**
                 *本接口（DeleteCOSMetaData）用于删除COS元数据信息。
                 * @param req DeleteCosMetaResourceRequest
                 * @return DeleteCosMetaResourceOutcome
                 */
                DeleteCosMetaResourceOutcome DeleteCosMetaResource(const Model::DeleteCosMetaResourceRequest &request);
                void DeleteCosMetaResourceAsync(const Model::DeleteCosMetaResourceRequest& request, const DeleteCosMetaResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCosMetaResourceOutcomeCallable DeleteCosMetaResourceCallable(const Model::DeleteCosMetaResourceRequest& request);

                /**
                 *删除DSPA风险评估任务
                 * @param req DeleteDSPAAssessmentTaskRequest
                 * @return DeleteDSPAAssessmentTaskOutcome
                 */
                DeleteDSPAAssessmentTaskOutcome DeleteDSPAAssessmentTask(const Model::DeleteDSPAAssessmentTaskRequest &request);
                void DeleteDSPAAssessmentTaskAsync(const Model::DeleteDSPAAssessmentTaskRequest& request, const DeleteDSPAAssessmentTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDSPAAssessmentTaskOutcomeCallable DeleteDSPAAssessmentTaskCallable(const Model::DeleteDSPAAssessmentTaskRequest& request);

                /**
                 *删除COS分类分级任务，该接口只有在任务状态为以下几个状态值时才支持正确删除：
0 待扫描，
2 扫描终止， 
3 扫描成功，
4 扫描失败
                 * @param req DeleteDSPACOSDiscoveryTaskRequest
                 * @return DeleteDSPACOSDiscoveryTaskOutcome
                 */
                DeleteDSPACOSDiscoveryTaskOutcome DeleteDSPACOSDiscoveryTask(const Model::DeleteDSPACOSDiscoveryTaskRequest &request);
                void DeleteDSPACOSDiscoveryTaskAsync(const Model::DeleteDSPACOSDiscoveryTaskRequest& request, const DeleteDSPACOSDiscoveryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDSPACOSDiscoveryTaskOutcomeCallable DeleteDSPACOSDiscoveryTaskCallable(const Model::DeleteDSPACOSDiscoveryTaskRequest& request);

                /**
                 *删除COS分类分级任务结果
                 * @param req DeleteDSPACOSDiscoveryTaskResultRequest
                 * @return DeleteDSPACOSDiscoveryTaskResultOutcome
                 */
                DeleteDSPACOSDiscoveryTaskResultOutcome DeleteDSPACOSDiscoveryTaskResult(const Model::DeleteDSPACOSDiscoveryTaskResultRequest &request);
                void DeleteDSPACOSDiscoveryTaskResultAsync(const Model::DeleteDSPACOSDiscoveryTaskResultRequest& request, const DeleteDSPACOSDiscoveryTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDSPACOSDiscoveryTaskResultOutcomeCallable DeleteDSPACOSDiscoveryTaskResultCallable(const Model::DeleteDSPACOSDiscoveryTaskResultRequest& request);

                /**
                 *删除分类分级识别任务，该接口只有在任务状态为以下几个状态值时才支持正确删除：
0 待扫描，
2 扫描终止， 
3 扫描成功，
4 扫描失败
                 * @param req DeleteDSPADiscoveryTaskRequest
                 * @return DeleteDSPADiscoveryTaskOutcome
                 */
                DeleteDSPADiscoveryTaskOutcome DeleteDSPADiscoveryTask(const Model::DeleteDSPADiscoveryTaskRequest &request);
                void DeleteDSPADiscoveryTaskAsync(const Model::DeleteDSPADiscoveryTaskRequest& request, const DeleteDSPADiscoveryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDSPADiscoveryTaskOutcomeCallable DeleteDSPADiscoveryTaskCallable(const Model::DeleteDSPADiscoveryTaskRequest& request);

                /**
                 *删除分类分级识别任务结果
                 * @param req DeleteDSPADiscoveryTaskResultRequest
                 * @return DeleteDSPADiscoveryTaskResultOutcome
                 */
                DeleteDSPADiscoveryTaskResultOutcome DeleteDSPADiscoveryTaskResult(const Model::DeleteDSPADiscoveryTaskResultRequest &request);
                void DeleteDSPADiscoveryTaskResultAsync(const Model::DeleteDSPADiscoveryTaskResultRequest& request, const DeleteDSPADiscoveryTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDSPADiscoveryTaskResultOutcomeCallable DeleteDSPADiscoveryTaskResultCallable(const Model::DeleteDSPADiscoveryTaskResultRequest& request);

                /**
                 *删除用户云资源
                 * @param req DeleteDSPAMetaResourceRequest
                 * @return DeleteDSPAMetaResourceOutcome
                 */
                DeleteDSPAMetaResourceOutcome DeleteDSPAMetaResource(const Model::DeleteDSPAMetaResourceRequest &request);
                void DeleteDSPAMetaResourceAsync(const Model::DeleteDSPAMetaResourceRequest& request, const DeleteDSPAMetaResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDSPAMetaResourceOutcomeCallable DeleteDSPAMetaResourceCallable(const Model::DeleteDSPAMetaResourceRequest& request);

                /**
                 *查询敏感数据导出结果URL
                 * @param req DescribeAssetDetailDataExportResultRequest
                 * @return DescribeAssetDetailDataExportResultOutcome
                 */
                DescribeAssetDetailDataExportResultOutcome DescribeAssetDetailDataExportResult(const Model::DescribeAssetDetailDataExportResultRequest &request);
                void DescribeAssetDetailDataExportResultAsync(const Model::DescribeAssetDetailDataExportResultRequest& request, const DescribeAssetDetailDataExportResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetDetailDataExportResultOutcomeCallable DescribeAssetDetailDataExportResultCallable(const Model::DescribeAssetDetailDataExportResultRequest& request);

                /**
                 *数据资产报告页面-查询数据资产概览接口（包括数据库资产详情和存储资产详情）
                 * @param req DescribeAssetOverviewRequest
                 * @return DescribeAssetOverviewOutcome
                 */
                DescribeAssetOverviewOutcome DescribeAssetOverview(const Model::DescribeAssetOverviewRequest &request);
                void DescribeAssetOverviewAsync(const Model::DescribeAssetOverviewRequest& request, const DescribeAssetOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetOverviewOutcomeCallable DescribeAssetOverviewCallable(const Model::DescribeAssetOverviewRequest& request);

                /**
                 *查询DB绑定的列表
                 * @param req DescribeBindDBListRequest
                 * @return DescribeBindDBListOutcome
                 */
                DescribeBindDBListOutcome DescribeBindDBList(const Model::DescribeBindDBListRequest &request);
                void DescribeBindDBListAsync(const Model::DescribeBindDBListRequest& request, const DescribeBindDBListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBindDBListOutcomeCallable DescribeBindDBListCallable(const Model::DescribeBindDBListRequest& request);

                /**
                 *数据资产报告-查询cos的资产分布详情接口
                 * @param req DescribeCOSAssetSensitiveDistributionRequest
                 * @return DescribeCOSAssetSensitiveDistributionOutcome
                 */
                DescribeCOSAssetSensitiveDistributionOutcome DescribeCOSAssetSensitiveDistribution(const Model::DescribeCOSAssetSensitiveDistributionRequest &request);
                void DescribeCOSAssetSensitiveDistributionAsync(const Model::DescribeCOSAssetSensitiveDistributionRequest& request, const DescribeCOSAssetSensitiveDistributionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCOSAssetSensitiveDistributionOutcomeCallable DescribeCOSAssetSensitiveDistributionCallable(const Model::DescribeCOSAssetSensitiveDistributionRequest& request);

                /**
                 *查询高风险资产的top10
                 * @param req DescribeDSPAAssessmentHighRiskTop10OverviewRequest
                 * @return DescribeDSPAAssessmentHighRiskTop10OverviewOutcome
                 */
                DescribeDSPAAssessmentHighRiskTop10OverviewOutcome DescribeDSPAAssessmentHighRiskTop10Overview(const Model::DescribeDSPAAssessmentHighRiskTop10OverviewRequest &request);
                void DescribeDSPAAssessmentHighRiskTop10OverviewAsync(const Model::DescribeDSPAAssessmentHighRiskTop10OverviewRequest& request, const DescribeDSPAAssessmentHighRiskTop10OverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPAAssessmentHighRiskTop10OverviewOutcomeCallable DescribeDSPAAssessmentHighRiskTop10OverviewCallable(const Model::DescribeDSPAAssessmentHighRiskTop10OverviewRequest& request);

                /**
                 *查询最新风险项详情数据
                 * @param req DescribeDSPAAssessmentLatestRiskDetailInfoRequest
                 * @return DescribeDSPAAssessmentLatestRiskDetailInfoOutcome
                 */
                DescribeDSPAAssessmentLatestRiskDetailInfoOutcome DescribeDSPAAssessmentLatestRiskDetailInfo(const Model::DescribeDSPAAssessmentLatestRiskDetailInfoRequest &request);
                void DescribeDSPAAssessmentLatestRiskDetailInfoAsync(const Model::DescribeDSPAAssessmentLatestRiskDetailInfoRequest& request, const DescribeDSPAAssessmentLatestRiskDetailInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPAAssessmentLatestRiskDetailInfoOutcomeCallable DescribeDSPAAssessmentLatestRiskDetailInfoCallable(const Model::DescribeDSPAAssessmentLatestRiskDetailInfoRequest& request);

                /**
                 *查询最新的风险详情列表数据
                 * @param req DescribeDSPAAssessmentLatestRiskListRequest
                 * @return DescribeDSPAAssessmentLatestRiskListOutcome
                 */
                DescribeDSPAAssessmentLatestRiskListOutcome DescribeDSPAAssessmentLatestRiskList(const Model::DescribeDSPAAssessmentLatestRiskListRequest &request);
                void DescribeDSPAAssessmentLatestRiskListAsync(const Model::DescribeDSPAAssessmentLatestRiskListRequest& request, const DescribeDSPAAssessmentLatestRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPAAssessmentLatestRiskListOutcomeCallable DescribeDSPAAssessmentLatestRiskListCallable(const Model::DescribeDSPAAssessmentLatestRiskListRequest& request);

                /**
                 *风险概览-查询新发现风险统计数
                 * @param req DescribeDSPAAssessmentNewDiscoveredRiskOverviewRequest
                 * @return DescribeDSPAAssessmentNewDiscoveredRiskOverviewOutcome
                 */
                DescribeDSPAAssessmentNewDiscoveredRiskOverviewOutcome DescribeDSPAAssessmentNewDiscoveredRiskOverview(const Model::DescribeDSPAAssessmentNewDiscoveredRiskOverviewRequest &request);
                void DescribeDSPAAssessmentNewDiscoveredRiskOverviewAsync(const Model::DescribeDSPAAssessmentNewDiscoveredRiskOverviewRequest& request, const DescribeDSPAAssessmentNewDiscoveredRiskOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPAAssessmentNewDiscoveredRiskOverviewOutcomeCallable DescribeDSPAAssessmentNewDiscoveredRiskOverviewCallable(const Model::DescribeDSPAAssessmentNewDiscoveredRiskOverviewRequest& request);

                /**
                 *风险概览-查询待处理风险统计数
                 * @param req DescribeDSPAAssessmentPendingRiskOverviewRequest
                 * @return DescribeDSPAAssessmentPendingRiskOverviewOutcome
                 */
                DescribeDSPAAssessmentPendingRiskOverviewOutcome DescribeDSPAAssessmentPendingRiskOverview(const Model::DescribeDSPAAssessmentPendingRiskOverviewRequest &request);
                void DescribeDSPAAssessmentPendingRiskOverviewAsync(const Model::DescribeDSPAAssessmentPendingRiskOverviewRequest& request, const DescribeDSPAAssessmentPendingRiskOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPAAssessmentPendingRiskOverviewOutcomeCallable DescribeDSPAAssessmentPendingRiskOverviewCallable(const Model::DescribeDSPAAssessmentPendingRiskOverviewRequest& request);

                /**
                 *风险概览-查询处理中风险统计数
                 * @param req DescribeDSPAAssessmentProcessingRiskOverviewRequest
                 * @return DescribeDSPAAssessmentProcessingRiskOverviewOutcome
                 */
                DescribeDSPAAssessmentProcessingRiskOverviewOutcome DescribeDSPAAssessmentProcessingRiskOverview(const Model::DescribeDSPAAssessmentProcessingRiskOverviewRequest &request);
                void DescribeDSPAAssessmentProcessingRiskOverviewAsync(const Model::DescribeDSPAAssessmentProcessingRiskOverviewRequest& request, const DescribeDSPAAssessmentProcessingRiskOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPAAssessmentProcessingRiskOverviewOutcomeCallable DescribeDSPAAssessmentProcessingRiskOverviewCallable(const Model::DescribeDSPAAssessmentProcessingRiskOverviewRequest& request);

                /**
                 *风险概览页风险数量和受影响资产数概览统计
                 * @param req DescribeDSPAAssessmentRiskAmountOverviewRequest
                 * @return DescribeDSPAAssessmentRiskAmountOverviewOutcome
                 */
                DescribeDSPAAssessmentRiskAmountOverviewOutcome DescribeDSPAAssessmentRiskAmountOverview(const Model::DescribeDSPAAssessmentRiskAmountOverviewRequest &request);
                void DescribeDSPAAssessmentRiskAmountOverviewAsync(const Model::DescribeDSPAAssessmentRiskAmountOverviewRequest& request, const DescribeDSPAAssessmentRiskAmountOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPAAssessmentRiskAmountOverviewOutcomeCallable DescribeDSPAAssessmentRiskAmountOverviewCallable(const Model::DescribeDSPAAssessmentRiskAmountOverviewRequest& request);

                /**
                 *受影响资产TOP5统计
                 * @param req DescribeDSPAAssessmentRiskDatasourceTop5Request
                 * @return DescribeDSPAAssessmentRiskDatasourceTop5Outcome
                 */
                DescribeDSPAAssessmentRiskDatasourceTop5Outcome DescribeDSPAAssessmentRiskDatasourceTop5(const Model::DescribeDSPAAssessmentRiskDatasourceTop5Request &request);
                void DescribeDSPAAssessmentRiskDatasourceTop5Async(const Model::DescribeDSPAAssessmentRiskDatasourceTop5Request& request, const DescribeDSPAAssessmentRiskDatasourceTop5AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPAAssessmentRiskDatasourceTop5OutcomeCallable DescribeDSPAAssessmentRiskDatasourceTop5Callable(const Model::DescribeDSPAAssessmentRiskDatasourceTop5Request& request);

                /**
                 *遗留待处理&昨日完成风险处置概览统计
                 * @param req DescribeDSPAAssessmentRiskDealedOverviewRequest
                 * @return DescribeDSPAAssessmentRiskDealedOverviewOutcome
                 */
                DescribeDSPAAssessmentRiskDealedOverviewOutcome DescribeDSPAAssessmentRiskDealedOverview(const Model::DescribeDSPAAssessmentRiskDealedOverviewRequest &request);
                void DescribeDSPAAssessmentRiskDealedOverviewAsync(const Model::DescribeDSPAAssessmentRiskDealedOverviewRequest& request, const DescribeDSPAAssessmentRiskDealedOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPAAssessmentRiskDealedOverviewOutcomeCallable DescribeDSPAAssessmentRiskDealedOverviewCallable(const Model::DescribeDSPAAssessmentRiskDealedOverviewRequest& request);

                /**
                 *风险项处理趋势统计
                 * @param req DescribeDSPAAssessmentRiskDealedTrendRequest
                 * @return DescribeDSPAAssessmentRiskDealedTrendOutcome
                 */
                DescribeDSPAAssessmentRiskDealedTrendOutcome DescribeDSPAAssessmentRiskDealedTrend(const Model::DescribeDSPAAssessmentRiskDealedTrendRequest &request);
                void DescribeDSPAAssessmentRiskDealedTrendAsync(const Model::DescribeDSPAAssessmentRiskDealedTrendRequest& request, const DescribeDSPAAssessmentRiskDealedTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPAAssessmentRiskDealedTrendOutcomeCallable DescribeDSPAAssessmentRiskDealedTrendCallable(const Model::DescribeDSPAAssessmentRiskDealedTrendRequest& request);

                /**
                 *查询风险分布数据，包含风险类型分布，风险详情分布，风险资产的分布
                 * @param req DescribeDSPAAssessmentRiskDistributionOverviewRequest
                 * @return DescribeDSPAAssessmentRiskDistributionOverviewOutcome
                 */
                DescribeDSPAAssessmentRiskDistributionOverviewOutcome DescribeDSPAAssessmentRiskDistributionOverview(const Model::DescribeDSPAAssessmentRiskDistributionOverviewRequest &request);
                void DescribeDSPAAssessmentRiskDistributionOverviewAsync(const Model::DescribeDSPAAssessmentRiskDistributionOverviewRequest& request, const DescribeDSPAAssessmentRiskDistributionOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPAAssessmentRiskDistributionOverviewOutcomeCallable DescribeDSPAAssessmentRiskDistributionOverviewCallable(const Model::DescribeDSPAAssessmentRiskDistributionOverviewRequest& request);

                /**
                 *风险分类TOP5统计
                 * @param req DescribeDSPAAssessmentRiskItemTop5Request
                 * @return DescribeDSPAAssessmentRiskItemTop5Outcome
                 */
                DescribeDSPAAssessmentRiskItemTop5Outcome DescribeDSPAAssessmentRiskItemTop5(const Model::DescribeDSPAAssessmentRiskItemTop5Request &request);
                void DescribeDSPAAssessmentRiskItemTop5Async(const Model::DescribeDSPAAssessmentRiskItemTop5Request& request, const DescribeDSPAAssessmentRiskItemTop5AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPAAssessmentRiskItemTop5OutcomeCallable DescribeDSPAAssessmentRiskItemTop5Callable(const Model::DescribeDSPAAssessmentRiskItemTop5Request& request);

                /**
                 *风险项页面----查询风险等级的详情数据
                 * @param req DescribeDSPAAssessmentRiskLevelDetailRequest
                 * @return DescribeDSPAAssessmentRiskLevelDetailOutcome
                 */
                DescribeDSPAAssessmentRiskLevelDetailOutcome DescribeDSPAAssessmentRiskLevelDetail(const Model::DescribeDSPAAssessmentRiskLevelDetailRequest &request);
                void DescribeDSPAAssessmentRiskLevelDetailAsync(const Model::DescribeDSPAAssessmentRiskLevelDetailRequest& request, const DescribeDSPAAssessmentRiskLevelDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPAAssessmentRiskLevelDetailOutcomeCallable DescribeDSPAAssessmentRiskLevelDetailCallable(const Model::DescribeDSPAAssessmentRiskLevelDetailRequest& request);

                /**
                 *风险项页面----查询风险等级的列表
                 * @param req DescribeDSPAAssessmentRiskLevelListRequest
                 * @return DescribeDSPAAssessmentRiskLevelListOutcome
                 */
                DescribeDSPAAssessmentRiskLevelListOutcome DescribeDSPAAssessmentRiskLevelList(const Model::DescribeDSPAAssessmentRiskLevelListRequest &request);
                void DescribeDSPAAssessmentRiskLevelListAsync(const Model::DescribeDSPAAssessmentRiskLevelListRequest& request, const DescribeDSPAAssessmentRiskLevelListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPAAssessmentRiskLevelListOutcomeCallable DescribeDSPAAssessmentRiskLevelListCallable(const Model::DescribeDSPAAssessmentRiskLevelListRequest& request);

                /**
                 *风险级别趋势统计
                 * @param req DescribeDSPAAssessmentRiskLevelTrendRequest
                 * @return DescribeDSPAAssessmentRiskLevelTrendOutcome
                 */
                DescribeDSPAAssessmentRiskLevelTrendOutcome DescribeDSPAAssessmentRiskLevelTrend(const Model::DescribeDSPAAssessmentRiskLevelTrendRequest &request);
                void DescribeDSPAAssessmentRiskLevelTrendAsync(const Model::DescribeDSPAAssessmentRiskLevelTrendRequest& request, const DescribeDSPAAssessmentRiskLevelTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPAAssessmentRiskLevelTrendOutcomeCallable DescribeDSPAAssessmentRiskLevelTrendCallable(const Model::DescribeDSPAAssessmentRiskLevelTrendRequest& request);

                /**
                 *风险数量概览统计
                 * @param req DescribeDSPAAssessmentRiskOverviewRequest
                 * @return DescribeDSPAAssessmentRiskOverviewOutcome
                 */
                DescribeDSPAAssessmentRiskOverviewOutcome DescribeDSPAAssessmentRiskOverview(const Model::DescribeDSPAAssessmentRiskOverviewRequest &request);
                void DescribeDSPAAssessmentRiskOverviewAsync(const Model::DescribeDSPAAssessmentRiskOverviewRequest& request, const DescribeDSPAAssessmentRiskOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPAAssessmentRiskOverviewOutcomeCallable DescribeDSPAAssessmentRiskOverviewCallable(const Model::DescribeDSPAAssessmentRiskOverviewRequest& request);

                /**
                 *查询风险的处理历史
                 * @param req DescribeDSPAAssessmentRiskProcessHistoryRequest
                 * @return DescribeDSPAAssessmentRiskProcessHistoryOutcome
                 */
                DescribeDSPAAssessmentRiskProcessHistoryOutcome DescribeDSPAAssessmentRiskProcessHistory(const Model::DescribeDSPAAssessmentRiskProcessHistoryRequest &request);
                void DescribeDSPAAssessmentRiskProcessHistoryAsync(const Model::DescribeDSPAAssessmentRiskProcessHistoryRequest& request, const DescribeDSPAAssessmentRiskProcessHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPAAssessmentRiskProcessHistoryOutcomeCallable DescribeDSPAAssessmentRiskProcessHistoryCallable(const Model::DescribeDSPAAssessmentRiskProcessHistoryRequest& request);

                /**
                 *风险评估概览页，查询风险面的分布
                 * @param req DescribeDSPAAssessmentRiskSideDistributedRequest
                 * @return DescribeDSPAAssessmentRiskSideDistributedOutcome
                 */
                DescribeDSPAAssessmentRiskSideDistributedOutcome DescribeDSPAAssessmentRiskSideDistributed(const Model::DescribeDSPAAssessmentRiskSideDistributedRequest &request);
                void DescribeDSPAAssessmentRiskSideDistributedAsync(const Model::DescribeDSPAAssessmentRiskSideDistributedRequest& request, const DescribeDSPAAssessmentRiskSideDistributedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPAAssessmentRiskSideDistributedOutcomeCallable DescribeDSPAAssessmentRiskSideDistributedCallable(const Model::DescribeDSPAAssessmentRiskSideDistributedRequest& request);

                /**
                 *风险评估概览页，查询风险面的分布
                 * @param req DescribeDSPAAssessmentRiskSideListRequest
                 * @return DescribeDSPAAssessmentRiskSideListOutcome
                 */
                DescribeDSPAAssessmentRiskSideListOutcome DescribeDSPAAssessmentRiskSideList(const Model::DescribeDSPAAssessmentRiskSideListRequest &request);
                void DescribeDSPAAssessmentRiskSideListAsync(const Model::DescribeDSPAAssessmentRiskSideListRequest& request, const DescribeDSPAAssessmentRiskSideListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPAAssessmentRiskSideListOutcomeCallable DescribeDSPAAssessmentRiskSideListCallable(const Model::DescribeDSPAAssessmentRiskSideListRequest& request);

                /**
                 *风险项页面--查看评估模板详情
                 * @param req DescribeDSPAAssessmentRiskTemplateDetailRequest
                 * @return DescribeDSPAAssessmentRiskTemplateDetailOutcome
                 */
                DescribeDSPAAssessmentRiskTemplateDetailOutcome DescribeDSPAAssessmentRiskTemplateDetail(const Model::DescribeDSPAAssessmentRiskTemplateDetailRequest &request);
                void DescribeDSPAAssessmentRiskTemplateDetailAsync(const Model::DescribeDSPAAssessmentRiskTemplateDetailRequest& request, const DescribeDSPAAssessmentRiskTemplateDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPAAssessmentRiskTemplateDetailOutcomeCallable DescribeDSPAAssessmentRiskTemplateDetailCallable(const Model::DescribeDSPAAssessmentRiskTemplateDetailRequest& request);

                /**
                 *风险模板页面--查询风险模板中的脆弱项配置
                 * @param req DescribeDSPAAssessmentRiskTemplateVulnerableListRequest
                 * @return DescribeDSPAAssessmentRiskTemplateVulnerableListOutcome
                 */
                DescribeDSPAAssessmentRiskTemplateVulnerableListOutcome DescribeDSPAAssessmentRiskTemplateVulnerableList(const Model::DescribeDSPAAssessmentRiskTemplateVulnerableListRequest &request);
                void DescribeDSPAAssessmentRiskTemplateVulnerableListAsync(const Model::DescribeDSPAAssessmentRiskTemplateVulnerableListRequest& request, const DescribeDSPAAssessmentRiskTemplateVulnerableListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPAAssessmentRiskTemplateVulnerableListOutcomeCallable DescribeDSPAAssessmentRiskTemplateVulnerableListCallable(const Model::DescribeDSPAAssessmentRiskTemplateVulnerableListRequest& request);

                /**
                 *获取DSPA评估风险项列表
                 * @param req DescribeDSPAAssessmentRisksRequest
                 * @return DescribeDSPAAssessmentRisksOutcome
                 */
                DescribeDSPAAssessmentRisksOutcome DescribeDSPAAssessmentRisks(const Model::DescribeDSPAAssessmentRisksRequest &request);
                void DescribeDSPAAssessmentRisksAsync(const Model::DescribeDSPAAssessmentRisksRequest& request, const DescribeDSPAAssessmentRisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPAAssessmentRisksOutcomeCallable DescribeDSPAAssessmentRisksCallable(const Model::DescribeDSPAAssessmentRisksRequest& request);

                /**
                 *获取DSPA评估任务列表
                 * @param req DescribeDSPAAssessmentTasksRequest
                 * @return DescribeDSPAAssessmentTasksOutcome
                 */
                DescribeDSPAAssessmentTasksOutcome DescribeDSPAAssessmentTasks(const Model::DescribeDSPAAssessmentTasksRequest &request);
                void DescribeDSPAAssessmentTasksAsync(const Model::DescribeDSPAAssessmentTasksRequest& request, const DescribeDSPAAssessmentTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPAAssessmentTasksOutcomeCallable DescribeDSPAAssessmentTasksCallable(const Model::DescribeDSPAAssessmentTasksRequest& request);

                /**
                 *获取DSPA评估模版关联的评估控制项列表
                 * @param req DescribeDSPAAssessmentTemplateControlItemsRequest
                 * @return DescribeDSPAAssessmentTemplateControlItemsOutcome
                 */
                DescribeDSPAAssessmentTemplateControlItemsOutcome DescribeDSPAAssessmentTemplateControlItems(const Model::DescribeDSPAAssessmentTemplateControlItemsRequest &request);
                void DescribeDSPAAssessmentTemplateControlItemsAsync(const Model::DescribeDSPAAssessmentTemplateControlItemsRequest& request, const DescribeDSPAAssessmentTemplateControlItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPAAssessmentTemplateControlItemsOutcomeCallable DescribeDSPAAssessmentTemplateControlItemsCallable(const Model::DescribeDSPAAssessmentTemplateControlItemsRequest& request);

                /**
                 *获取DSPA评估模板列表
                 * @param req DescribeDSPAAssessmentTemplatesRequest
                 * @return DescribeDSPAAssessmentTemplatesOutcome
                 */
                DescribeDSPAAssessmentTemplatesOutcome DescribeDSPAAssessmentTemplates(const Model::DescribeDSPAAssessmentTemplatesRequest &request);
                void DescribeDSPAAssessmentTemplatesAsync(const Model::DescribeDSPAAssessmentTemplatesRequest& request, const DescribeDSPAAssessmentTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPAAssessmentTemplatesOutcomeCallable DescribeDSPAAssessmentTemplatesCallable(const Model::DescribeDSPAAssessmentTemplatesRequest& request);

                /**
                 *获取COS敏感数据资产桶列表
                 * @param req DescribeDSPACOSDataAssetBucketsRequest
                 * @return DescribeDSPACOSDataAssetBucketsOutcome
                 */
                DescribeDSPACOSDataAssetBucketsOutcome DescribeDSPACOSDataAssetBuckets(const Model::DescribeDSPACOSDataAssetBucketsRequest &request);
                void DescribeDSPACOSDataAssetBucketsAsync(const Model::DescribeDSPACOSDataAssetBucketsRequest& request, const DescribeDSPACOSDataAssetBucketsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPACOSDataAssetBucketsOutcomeCallable DescribeDSPACOSDataAssetBucketsCallable(const Model::DescribeDSPACOSDataAssetBucketsRequest& request);

                /**
                 *获取COS单个模板下的敏感数据资产
                 * @param req DescribeDSPACOSDataAssetByComplianceIdRequest
                 * @return DescribeDSPACOSDataAssetByComplianceIdOutcome
                 */
                DescribeDSPACOSDataAssetByComplianceIdOutcome DescribeDSPACOSDataAssetByComplianceId(const Model::DescribeDSPACOSDataAssetByComplianceIdRequest &request);
                void DescribeDSPACOSDataAssetByComplianceIdAsync(const Model::DescribeDSPACOSDataAssetByComplianceIdRequest& request, const DescribeDSPACOSDataAssetByComplianceIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPACOSDataAssetByComplianceIdOutcomeCallable DescribeDSPACOSDataAssetByComplianceIdCallable(const Model::DescribeDSPACOSDataAssetByComplianceIdRequest& request);

                /**
                 *获取COS分类分级数据资产详情
                 * @param req DescribeDSPACOSDataAssetDetailRequest
                 * @return DescribeDSPACOSDataAssetDetailOutcome
                 */
                DescribeDSPACOSDataAssetDetailOutcome DescribeDSPACOSDataAssetDetail(const Model::DescribeDSPACOSDataAssetDetailRequest &request);
                void DescribeDSPACOSDataAssetDetailAsync(const Model::DescribeDSPACOSDataAssetDetailRequest& request, const DescribeDSPACOSDataAssetDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPACOSDataAssetDetailOutcomeCallable DescribeDSPACOSDataAssetDetailCallable(const Model::DescribeDSPACOSDataAssetDetailRequest& request);

                /**
                 *获取COS分类分级任务详情
                 * @param req DescribeDSPACOSDiscoveryTaskDetailRequest
                 * @return DescribeDSPACOSDiscoveryTaskDetailOutcome
                 */
                DescribeDSPACOSDiscoveryTaskDetailOutcome DescribeDSPACOSDiscoveryTaskDetail(const Model::DescribeDSPACOSDiscoveryTaskDetailRequest &request);
                void DescribeDSPACOSDiscoveryTaskDetailAsync(const Model::DescribeDSPACOSDiscoveryTaskDetailRequest& request, const DescribeDSPACOSDiscoveryTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPACOSDiscoveryTaskDetailOutcomeCallable DescribeDSPACOSDiscoveryTaskDetailCallable(const Model::DescribeDSPACOSDiscoveryTaskDetailRequest& request);

                /**
                 *获取COS分类分级任务结果详情文件列表
                 * @param req DescribeDSPACOSDiscoveryTaskFilesRequest
                 * @return DescribeDSPACOSDiscoveryTaskFilesOutcome
                 */
                DescribeDSPACOSDiscoveryTaskFilesOutcome DescribeDSPACOSDiscoveryTaskFiles(const Model::DescribeDSPACOSDiscoveryTaskFilesRequest &request);
                void DescribeDSPACOSDiscoveryTaskFilesAsync(const Model::DescribeDSPACOSDiscoveryTaskFilesRequest& request, const DescribeDSPACOSDiscoveryTaskFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPACOSDiscoveryTaskFilesOutcomeCallable DescribeDSPACOSDiscoveryTaskFilesCallable(const Model::DescribeDSPACOSDiscoveryTaskFilesRequest& request);

                /**
                 *获取COS分类分级任务结果，该接口只有在任务状态为以下状态时才支持结果正常查询：
3 扫描成功，
4 扫描失败
                 * @param req DescribeDSPACOSDiscoveryTaskResultRequest
                 * @return DescribeDSPACOSDiscoveryTaskResultOutcome
                 */
                DescribeDSPACOSDiscoveryTaskResultOutcome DescribeDSPACOSDiscoveryTaskResult(const Model::DescribeDSPACOSDiscoveryTaskResultRequest &request);
                void DescribeDSPACOSDiscoveryTaskResultAsync(const Model::DescribeDSPACOSDiscoveryTaskResultRequest& request, const DescribeDSPACOSDiscoveryTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPACOSDiscoveryTaskResultOutcomeCallable DescribeDSPACOSDiscoveryTaskResultCallable(const Model::DescribeDSPACOSDiscoveryTaskResultRequest& request);

                /**
                 *获取COS分类分级任务列表
                 * @param req DescribeDSPACOSDiscoveryTasksRequest
                 * @return DescribeDSPACOSDiscoveryTasksOutcome
                 */
                DescribeDSPACOSDiscoveryTasksOutcome DescribeDSPACOSDiscoveryTasks(const Model::DescribeDSPACOSDiscoveryTasksRequest &request);
                void DescribeDSPACOSDiscoveryTasksAsync(const Model::DescribeDSPACOSDiscoveryTasksRequest& request, const DescribeDSPACOSDiscoveryTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPACOSDiscoveryTasksOutcomeCallable DescribeDSPACOSDiscoveryTasksCallable(const Model::DescribeDSPACOSDiscoveryTasksRequest& request);

                /**
                 *获取COS分类分级任务结果详情，该接口只有在任务状态为时才支持结果正确查询：
3 扫描成功
                 * @param req DescribeDSPACOSTaskResultDetailRequest
                 * @return DescribeDSPACOSTaskResultDetailOutcome
                 */
                DescribeDSPACOSTaskResultDetailOutcome DescribeDSPACOSTaskResultDetail(const Model::DescribeDSPACOSTaskResultDetailRequest &request);
                void DescribeDSPACOSTaskResultDetailAsync(const Model::DescribeDSPACOSTaskResultDetailRequest& request, const DescribeDSPACOSTaskResultDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPACOSTaskResultDetailOutcomeCallable DescribeDSPACOSTaskResultDetailCallable(const Model::DescribeDSPACOSTaskResultDetailRequest& request);

                /**
                 *获取敏感数据分类列表
                 * @param req DescribeDSPACategoriesRequest
                 * @return DescribeDSPACategoriesOutcome
                 */
                DescribeDSPACategoriesOutcome DescribeDSPACategories(const Model::DescribeDSPACategoriesRequest &request);
                void DescribeDSPACategoriesAsync(const Model::DescribeDSPACategoriesRequest& request, const DescribeDSPACategoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPACategoriesOutcomeCallable DescribeDSPACategoriesCallable(const Model::DescribeDSPACategoriesRequest& request);

                /**
                 *获取分类规则统计信息
                 * @param req DescribeDSPACategoryRuleStatisticRequest
                 * @return DescribeDSPACategoryRuleStatisticOutcome
                 */
                DescribeDSPACategoryRuleStatisticOutcome DescribeDSPACategoryRuleStatistic(const Model::DescribeDSPACategoryRuleStatisticRequest &request);
                void DescribeDSPACategoryRuleStatisticAsync(const Model::DescribeDSPACategoryRuleStatisticRequest& request, const DescribeDSPACategoryRuleStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPACategoryRuleStatisticOutcomeCallable DescribeDSPACategoryRuleStatisticCallable(const Model::DescribeDSPACategoryRuleStatisticRequest& request);

                /**
                 *获取合规组分类规则信息
                 * @param req DescribeDSPACategoryRulesRequest
                 * @return DescribeDSPACategoryRulesOutcome
                 */
                DescribeDSPACategoryRulesOutcome DescribeDSPACategoryRules(const Model::DescribeDSPACategoryRulesRequest &request);
                void DescribeDSPACategoryRulesAsync(const Model::DescribeDSPACategoryRulesRequest& request, const DescribeDSPACategoryRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPACategoryRulesOutcomeCallable DescribeDSPACategoryRulesCallable(const Model::DescribeDSPACategoryRulesRequest& request);

                /**
                 *获取分类树信息
                 * @param req DescribeDSPACategoryTreeRequest
                 * @return DescribeDSPACategoryTreeOutcome
                 */
                DescribeDSPACategoryTreeOutcome DescribeDSPACategoryTree(const Model::DescribeDSPACategoryTreeRequest &request);
                void DescribeDSPACategoryTreeAsync(const Model::DescribeDSPACategoryTreeRequest& request, const DescribeDSPACategoryTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPACategoryTreeOutcomeCallable DescribeDSPACategoryTreeCallable(const Model::DescribeDSPACategoryTreeRequest& request);

                /**
                 *获取分类规则树信息
                 * @param req DescribeDSPACategoryTreeWithRulesRequest
                 * @return DescribeDSPACategoryTreeWithRulesOutcome
                 */
                DescribeDSPACategoryTreeWithRulesOutcome DescribeDSPACategoryTreeWithRules(const Model::DescribeDSPACategoryTreeWithRulesRequest &request);
                void DescribeDSPACategoryTreeWithRulesAsync(const Model::DescribeDSPACategoryTreeWithRulesRequest& request, const DescribeDSPACategoryTreeWithRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPACategoryTreeWithRulesOutcomeCallable DescribeDSPACategoryTreeWithRulesCallable(const Model::DescribeDSPACategoryTreeWithRulesRequest& request);

                /**
                 *获取模板详情信息
                 * @param req DescribeDSPAComplianceGroupDetailRequest
                 * @return DescribeDSPAComplianceGroupDetailOutcome
                 */
                DescribeDSPAComplianceGroupDetailOutcome DescribeDSPAComplianceGroupDetail(const Model::DescribeDSPAComplianceGroupDetailRequest &request);
                void DescribeDSPAComplianceGroupDetailAsync(const Model::DescribeDSPAComplianceGroupDetailRequest& request, const DescribeDSPAComplianceGroupDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPAComplianceGroupDetailOutcomeCallable DescribeDSPAComplianceGroupDetailCallable(const Model::DescribeDSPAComplianceGroupDetailRequest& request);

                /**
                 *获取分类分级模板列表
                 * @param req DescribeDSPAComplianceGroupsRequest
                 * @return DescribeDSPAComplianceGroupsOutcome
                 */
                DescribeDSPAComplianceGroupsOutcome DescribeDSPAComplianceGroups(const Model::DescribeDSPAComplianceGroupsRequest &request);
                void DescribeDSPAComplianceGroupsAsync(const Model::DescribeDSPAComplianceGroupsRequest& request, const DescribeDSPAComplianceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPAComplianceGroupsOutcomeCallable DescribeDSPAComplianceGroupsCallable(const Model::DescribeDSPAComplianceGroupsRequest& request);

                /**
                 *获取模板更新提示信息
                 * @param req DescribeDSPAComplianceUpdateNotificationRequest
                 * @return DescribeDSPAComplianceUpdateNotificationOutcome
                 */
                DescribeDSPAComplianceUpdateNotificationOutcome DescribeDSPAComplianceUpdateNotification(const Model::DescribeDSPAComplianceUpdateNotificationRequest &request);
                void DescribeDSPAComplianceUpdateNotificationAsync(const Model::DescribeDSPAComplianceUpdateNotificationRequest& request, const DescribeDSPAComplianceUpdateNotificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPAComplianceUpdateNotificationOutcomeCallable DescribeDSPAComplianceUpdateNotificationCallable(const Model::DescribeDSPAComplianceUpdateNotificationRequest& request);

                /**
                 *获取数据源的数据库信息
                 * @param req DescribeDSPADataSourceDbInfoRequest
                 * @return DescribeDSPADataSourceDbInfoOutcome
                 */
                DescribeDSPADataSourceDbInfoOutcome DescribeDSPADataSourceDbInfo(const Model::DescribeDSPADataSourceDbInfoRequest &request);
                void DescribeDSPADataSourceDbInfoAsync(const Model::DescribeDSPADataSourceDbInfoRequest& request, const DescribeDSPADataSourceDbInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPADataSourceDbInfoOutcomeCallable DescribeDSPADataSourceDbInfoCallable(const Model::DescribeDSPADataSourceDbInfoRequest& request);

                /**
                 *获取分类分级规则列表
                 * @param req DescribeDSPADiscoveryRulesRequest
                 * @return DescribeDSPADiscoveryRulesOutcome
                 */
                DescribeDSPADiscoveryRulesOutcome DescribeDSPADiscoveryRules(const Model::DescribeDSPADiscoveryRulesRequest &request);
                void DescribeDSPADiscoveryRulesAsync(const Model::DescribeDSPADiscoveryRulesRequest& request, const DescribeDSPADiscoveryRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPADiscoveryRulesOutcomeCallable DescribeDSPADiscoveryRulesCallable(const Model::DescribeDSPADiscoveryRulesRequest& request);

                /**
                 *用于查询该用户是否已开通分类分级服务
                 * @param req DescribeDSPADiscoveryServiceStatusRequest
                 * @return DescribeDSPADiscoveryServiceStatusOutcome
                 */
                DescribeDSPADiscoveryServiceStatusOutcome DescribeDSPADiscoveryServiceStatus(const Model::DescribeDSPADiscoveryServiceStatusRequest &request);
                void DescribeDSPADiscoveryServiceStatusAsync(const Model::DescribeDSPADiscoveryServiceStatusRequest& request, const DescribeDSPADiscoveryServiceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPADiscoveryServiceStatusOutcomeCallable DescribeDSPADiscoveryServiceStatusCallable(const Model::DescribeDSPADiscoveryServiceStatusRequest& request);

                /**
                 *获取分类分级任务详情
                 * @param req DescribeDSPADiscoveryTaskDetailRequest
                 * @return DescribeDSPADiscoveryTaskDetailOutcome
                 */
                DescribeDSPADiscoveryTaskDetailOutcome DescribeDSPADiscoveryTaskDetail(const Model::DescribeDSPADiscoveryTaskDetailRequest &request);
                void DescribeDSPADiscoveryTaskDetailAsync(const Model::DescribeDSPADiscoveryTaskDetailRequest& request, const DescribeDSPADiscoveryTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPADiscoveryTaskDetailOutcomeCallable DescribeDSPADiscoveryTaskDetailCallable(const Model::DescribeDSPADiscoveryTaskDetailRequest& request);

                /**
                 *获取分类分级任务结果，该接口只有在任务状态为以下状态时才支持结果正常查询：
3 扫描成功，
4 扫描失败
                 * @param req DescribeDSPADiscoveryTaskResultRequest
                 * @return DescribeDSPADiscoveryTaskResultOutcome
                 */
                DescribeDSPADiscoveryTaskResultOutcome DescribeDSPADiscoveryTaskResult(const Model::DescribeDSPADiscoveryTaskResultRequest &request);
                void DescribeDSPADiscoveryTaskResultAsync(const Model::DescribeDSPADiscoveryTaskResultRequest& request, const DescribeDSPADiscoveryTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPADiscoveryTaskResultOutcomeCallable DescribeDSPADiscoveryTaskResultCallable(const Model::DescribeDSPADiscoveryTaskResultRequest& request);

                /**
                 *获取分类分级任务结果详情，该接口只有在任务状态为时才支持结果正确查询：
3 扫描成功
                 * @param req DescribeDSPADiscoveryTaskResultDetailRequest
                 * @return DescribeDSPADiscoveryTaskResultDetailOutcome
                 */
                DescribeDSPADiscoveryTaskResultDetailOutcome DescribeDSPADiscoveryTaskResultDetail(const Model::DescribeDSPADiscoveryTaskResultDetailRequest &request);
                void DescribeDSPADiscoveryTaskResultDetailAsync(const Model::DescribeDSPADiscoveryTaskResultDetailRequest& request, const DescribeDSPADiscoveryTaskResultDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPADiscoveryTaskResultDetailOutcomeCallable DescribeDSPADiscoveryTaskResultDetailCallable(const Model::DescribeDSPADiscoveryTaskResultDetailRequest& request);

                /**
                 *获取分级分级扫描的表集合
                 * @param req DescribeDSPADiscoveryTaskTablesRequest
                 * @return DescribeDSPADiscoveryTaskTablesOutcome
                 */
                DescribeDSPADiscoveryTaskTablesOutcome DescribeDSPADiscoveryTaskTables(const Model::DescribeDSPADiscoveryTaskTablesRequest &request);
                void DescribeDSPADiscoveryTaskTablesAsync(const Model::DescribeDSPADiscoveryTaskTablesRequest& request, const DescribeDSPADiscoveryTaskTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPADiscoveryTaskTablesOutcomeCallable DescribeDSPADiscoveryTaskTablesCallable(const Model::DescribeDSPADiscoveryTaskTablesRequest& request);

                /**
                 *获取分类分级任务列表
                 * @param req DescribeDSPADiscoveryTasksRequest
                 * @return DescribeDSPADiscoveryTasksOutcome
                 */
                DescribeDSPADiscoveryTasksOutcome DescribeDSPADiscoveryTasks(const Model::DescribeDSPADiscoveryTasksRequest &request);
                void DescribeDSPADiscoveryTasksAsync(const Model::DescribeDSPADiscoveryTasksRequest& request, const DescribeDSPADiscoveryTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPADiscoveryTasksOutcomeCallable DescribeDSPADiscoveryTasksCallable(const Model::DescribeDSPADiscoveryTasksRequest& request);

                /**
                 *根据合规组id，去查询ES的概览页统计数据
                 * @param req DescribeDSPAESDataAssetByComplianceIdRequest
                 * @return DescribeDSPAESDataAssetByComplianceIdOutcome
                 */
                DescribeDSPAESDataAssetByComplianceIdOutcome DescribeDSPAESDataAssetByComplianceId(const Model::DescribeDSPAESDataAssetByComplianceIdRequest &request);
                void DescribeDSPAESDataAssetByComplianceIdAsync(const Model::DescribeDSPAESDataAssetByComplianceIdRequest& request, const DescribeDSPAESDataAssetByComplianceIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPAESDataAssetByComplianceIdOutcomeCallable DescribeDSPAESDataAssetByComplianceIdCallable(const Model::DescribeDSPAESDataAssetByComplianceIdRequest& request);

                /**
                 *根据合规组id，去查询ES的概览页下的统计列表数据
                 * @param req DescribeDSPAESDataAssetDetailRequest
                 * @return DescribeDSPAESDataAssetDetailOutcome
                 */
                DescribeDSPAESDataAssetDetailOutcome DescribeDSPAESDataAssetDetail(const Model::DescribeDSPAESDataAssetDetailRequest &request);
                void DescribeDSPAESDataAssetDetailAsync(const Model::DescribeDSPAESDataAssetDetailRequest& request, const DescribeDSPAESDataAssetDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPAESDataAssetDetailOutcomeCallable DescribeDSPAESDataAssetDetailCallable(const Model::DescribeDSPAESDataAssetDetailRequest& request);

                /**
                 *获取ES扫描结果数据样本
                 * @param req DescribeDSPAESDataSampleRequest
                 * @return DescribeDSPAESDataSampleOutcome
                 */
                DescribeDSPAESDataSampleOutcome DescribeDSPAESDataSample(const Model::DescribeDSPAESDataSampleRequest &request);
                void DescribeDSPAESDataSampleAsync(const Model::DescribeDSPAESDataSampleRequest& request, const DescribeDSPAESDataSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPAESDataSampleOutcomeCallable DescribeDSPAESDataSampleCallable(const Model::DescribeDSPAESDataSampleRequest& request);

                /**
                 *获取ES的分类分级任务结果详情，该接口只有在任务状态为时才支持结果正确查询：
3 扫描成功
                 * @param req DescribeDSPAESDiscoveryTaskResultDetailRequest
                 * @return DescribeDSPAESDiscoveryTaskResultDetailOutcome
                 */
                DescribeDSPAESDiscoveryTaskResultDetailOutcome DescribeDSPAESDiscoveryTaskResultDetail(const Model::DescribeDSPAESDiscoveryTaskResultDetailRequest &request);
                void DescribeDSPAESDiscoveryTaskResultDetailAsync(const Model::DescribeDSPAESDiscoveryTaskResultDetailRequest& request, const DescribeDSPAESDiscoveryTaskResultDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPAESDiscoveryTaskResultDetailOutcomeCallable DescribeDSPAESDiscoveryTaskResultDetailCallable(const Model::DescribeDSPAESDiscoveryTaskResultDetailRequest& request);

                /**
                 *获取分级详情
                 * @param req DescribeDSPALevelDetailRequest
                 * @return DescribeDSPALevelDetailOutcome
                 */
                DescribeDSPALevelDetailOutcome DescribeDSPALevelDetail(const Model::DescribeDSPALevelDetailRequest &request);
                void DescribeDSPALevelDetailAsync(const Model::DescribeDSPALevelDetailRequest& request, const DescribeDSPALevelDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPALevelDetailOutcomeCallable DescribeDSPALevelDetailCallable(const Model::DescribeDSPALevelDetailRequest& request);

                /**
                 *获取分级列表，限制100个 不分页返回
                 * @param req DescribeDSPALevelGroupsRequest
                 * @return DescribeDSPALevelGroupsOutcome
                 */
                DescribeDSPALevelGroupsOutcome DescribeDSPALevelGroups(const Model::DescribeDSPALevelGroupsRequest &request);
                void DescribeDSPALevelGroupsAsync(const Model::DescribeDSPALevelGroupsRequest& request, const DescribeDSPALevelGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPALevelGroupsOutcomeCallable DescribeDSPALevelGroupsCallable(const Model::DescribeDSPALevelGroupsRequest& request);

                /**
                 *获取单个合规组下的RDB关系数据库分类分级数据资产
                 * @param req DescribeDSPARDBDataAssetByComplianceIdRequest
                 * @return DescribeDSPARDBDataAssetByComplianceIdOutcome
                 */
                DescribeDSPARDBDataAssetByComplianceIdOutcome DescribeDSPARDBDataAssetByComplianceId(const Model::DescribeDSPARDBDataAssetByComplianceIdRequest &request);
                void DescribeDSPARDBDataAssetByComplianceIdAsync(const Model::DescribeDSPARDBDataAssetByComplianceIdRequest& request, const DescribeDSPARDBDataAssetByComplianceIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPARDBDataAssetByComplianceIdOutcomeCallable DescribeDSPARDBDataAssetByComplianceIdCallable(const Model::DescribeDSPARDBDataAssetByComplianceIdRequest& request);

                /**
                 *获取RDB关系数据库分类分级资产详情
                 * @param req DescribeDSPARDBDataAssetDetailRequest
                 * @return DescribeDSPARDBDataAssetDetailOutcome
                 */
                DescribeDSPARDBDataAssetDetailOutcome DescribeDSPARDBDataAssetDetail(const Model::DescribeDSPARDBDataAssetDetailRequest &request);
                void DescribeDSPARDBDataAssetDetailAsync(const Model::DescribeDSPARDBDataAssetDetailRequest& request, const DescribeDSPARDBDataAssetDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPARDBDataAssetDetailOutcomeCallable DescribeDSPARDBDataAssetDetailCallable(const Model::DescribeDSPARDBDataAssetDetailRequest& request);

                /**
                 *拉取DSPA支持的Meta元数据类型，返回包括：元数据类型，支持的元数据地域信息
                 * @param req DescribeDSPASupportedMetasRequest
                 * @return DescribeDSPASupportedMetasOutcome
                 */
                DescribeDSPASupportedMetasOutcome DescribeDSPASupportedMetas(const Model::DescribeDSPASupportedMetasRequest &request);
                void DescribeDSPASupportedMetasAsync(const Model::DescribeDSPASupportedMetasRequest& request, const DescribeDSPASupportedMetasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPASupportedMetasOutcomeCallable DescribeDSPASupportedMetasCallable(const Model::DescribeDSPASupportedMetasRequest& request);

                /**
                 *获取扫描结果数据样本
                 * @param req DescribeDSPATaskResultDataSampleRequest
                 * @return DescribeDSPATaskResultDataSampleOutcome
                 */
                DescribeDSPATaskResultDataSampleOutcome DescribeDSPATaskResultDataSample(const Model::DescribeDSPATaskResultDataSampleRequest &request);
                void DescribeDSPATaskResultDataSampleAsync(const Model::DescribeDSPATaskResultDataSampleRequest& request, const DescribeDSPATaskResultDataSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDSPATaskResultDataSampleOutcomeCallable DescribeDSPATaskResultDataSampleCallable(const Model::DescribeDSPATaskResultDataSampleRequest& request);

                /**
                 *数据资产报告-查询es的敏感资产报告，包含（数据库资产，设敏级别数据库top10，资产详情）
                 * @param req DescribeESAssetSensitiveDistributionRequest
                 * @return DescribeESAssetSensitiveDistributionOutcome
                 */
                DescribeESAssetSensitiveDistributionOutcome DescribeESAssetSensitiveDistribution(const Model::DescribeESAssetSensitiveDistributionRequest &request);
                void DescribeESAssetSensitiveDistributionAsync(const Model::DescribeESAssetSensitiveDistributionRequest& request, const DescribeESAssetSensitiveDistributionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeESAssetSensitiveDistributionOutcomeCallable DescribeESAssetSensitiveDistributionCallable(const Model::DescribeESAssetSensitiveDistributionRequest& request);

                /**
                 *获取导出任务结果
                 * @param req DescribeExportTaskResultRequest
                 * @return DescribeExportTaskResultOutcome
                 */
                DescribeExportTaskResultOutcome DescribeExportTaskResult(const Model::DescribeExportTaskResultRequest &request);
                void DescribeExportTaskResultAsync(const Model::DescribeExportTaskResultRequest& request, const DescribeExportTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExportTaskResultOutcomeCallable DescribeExportTaskResultCallable(const Model::DescribeExportTaskResultRequest& request);

                /**
                 *数据资产报告-查询mongo 的敏感资产报告，包含（数据库资产，设敏级别数据库top10，资产详情）
                 * @param req DescribeMongoAssetSensitiveDistributionRequest
                 * @return DescribeMongoAssetSensitiveDistributionOutcome
                 */
                DescribeMongoAssetSensitiveDistributionOutcome DescribeMongoAssetSensitiveDistribution(const Model::DescribeMongoAssetSensitiveDistributionRequest &request);
                void DescribeMongoAssetSensitiveDistributionAsync(const Model::DescribeMongoAssetSensitiveDistributionRequest& request, const DescribeMongoAssetSensitiveDistributionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMongoAssetSensitiveDistributionOutcomeCallable DescribeMongoAssetSensitiveDistributionCallable(const Model::DescribeMongoAssetSensitiveDistributionRequest& request);

                /**
                 *数据资产报告-查询rbd 的敏感资产报告，包含（数据库资产，设敏级别数据库top10，资产详情）
                 * @param req DescribeRDBAssetSensitiveDistributionRequest
                 * @return DescribeRDBAssetSensitiveDistributionOutcome
                 */
                DescribeRDBAssetSensitiveDistributionOutcome DescribeRDBAssetSensitiveDistribution(const Model::DescribeRDBAssetSensitiveDistributionRequest &request);
                void DescribeRDBAssetSensitiveDistributionAsync(const Model::DescribeRDBAssetSensitiveDistributionRequest& request, const DescribeRDBAssetSensitiveDistributionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRDBAssetSensitiveDistributionOutcomeCallable DescribeRDBAssetSensitiveDistributionCallable(const Model::DescribeRDBAssetSensitiveDistributionRequest& request);

                /**
                 *获取报表下载链接
                 * @param req DescribeReportTaskDownloadUrlRequest
                 * @return DescribeReportTaskDownloadUrlOutcome
                 */
                DescribeReportTaskDownloadUrlOutcome DescribeReportTaskDownloadUrl(const Model::DescribeReportTaskDownloadUrlRequest &request);
                void DescribeReportTaskDownloadUrlAsync(const Model::DescribeReportTaskDownloadUrlRequest& request, const DescribeReportTaskDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReportTaskDownloadUrlOutcomeCallable DescribeReportTaskDownloadUrlCallable(const Model::DescribeReportTaskDownloadUrlRequest& request);

                /**
                 *获取资产报表任务列表
                 * @param req DescribeReportTasksRequest
                 * @return DescribeReportTasksOutcome
                 */
                DescribeReportTasksOutcome DescribeReportTasks(const Model::DescribeReportTasksRequest &request);
                void DescribeReportTasksAsync(const Model::DescribeReportTasksRequest& request, const DescribeReportTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReportTasksOutcomeCallable DescribeReportTasksCallable(const Model::DescribeReportTasksRequest& request);

                /**
                 *数据资产报告-查询cos的敏感数据分布（分级分布 分类分布 敏感规则分布详情列表）
                 * @param req DescribeSensitiveCOSDataDistributionRequest
                 * @return DescribeSensitiveCOSDataDistributionOutcome
                 */
                DescribeSensitiveCOSDataDistributionOutcome DescribeSensitiveCOSDataDistribution(const Model::DescribeSensitiveCOSDataDistributionRequest &request);
                void DescribeSensitiveCOSDataDistributionAsync(const Model::DescribeSensitiveCOSDataDistributionRequest& request, const DescribeSensitiveCOSDataDistributionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSensitiveCOSDataDistributionOutcomeCallable DescribeSensitiveCOSDataDistributionCallable(const Model::DescribeSensitiveCOSDataDistributionRequest& request);

                /**
                 *数据资产报告-查询rdb的敏感数据分布-敏感规则字段分布-敏感分布详情
                 * @param req DescribeSensitiveRDBDataDistributionRequest
                 * @return DescribeSensitiveRDBDataDistributionOutcome
                 */
                DescribeSensitiveRDBDataDistributionOutcome DescribeSensitiveRDBDataDistribution(const Model::DescribeSensitiveRDBDataDistributionRequest &request);
                void DescribeSensitiveRDBDataDistributionAsync(const Model::DescribeSensitiveRDBDataDistributionRequest& request, const DescribeSensitiveRDBDataDistributionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSensitiveRDBDataDistributionOutcomeCallable DescribeSensitiveRDBDataDistributionCallable(const Model::DescribeSensitiveRDBDataDistributionRequest& request);

                /**
                 *取消用户云资源授权
                 * @param req DisableDSPAMetaResourceAuthRequest
                 * @return DisableDSPAMetaResourceAuthOutcome
                 */
                DisableDSPAMetaResourceAuthOutcome DisableDSPAMetaResourceAuth(const Model::DisableDSPAMetaResourceAuthRequest &request);
                void DisableDSPAMetaResourceAuthAsync(const Model::DisableDSPAMetaResourceAuthRequest& request, const DisableDSPAMetaResourceAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableDSPAMetaResourceAuthOutcomeCallable DisableDSPAMetaResourceAuthCallable(const Model::DisableDSPAMetaResourceAuthRequest& request);

                /**
                 *打开或者关闭分类分级规则
注：此API同时对该规则下的RDB跟COS规则操作。
                 * @param req EnableDSPADiscoveryRuleRequest
                 * @return EnableDSPADiscoveryRuleOutcome
                 */
                EnableDSPADiscoveryRuleOutcome EnableDSPADiscoveryRule(const Model::EnableDSPADiscoveryRuleRequest &request);
                void EnableDSPADiscoveryRuleAsync(const Model::EnableDSPADiscoveryRuleRequest& request, const EnableDSPADiscoveryRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableDSPADiscoveryRuleOutcomeCallable EnableDSPADiscoveryRuleCallable(const Model::EnableDSPADiscoveryRuleRequest& request);

                /**
                 *启用版本体验
                 * @param req EnableTrialVersionRequest
                 * @return EnableTrialVersionOutcome
                 */
                EnableTrialVersionOutcome EnableTrialVersion(const Model::EnableTrialVersionRequest &request);
                void EnableTrialVersionAsync(const Model::EnableTrialVersionRequest& request, const EnableTrialVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableTrialVersionOutcomeCallable EnableTrialVersionCallable(const Model::EnableTrialVersionRequest& request);

                /**
                 *创建敏感数据导出任务
                 * @param req ExportAssetDetailDataRequest
                 * @return ExportAssetDetailDataOutcome
                 */
                ExportAssetDetailDataOutcome ExportAssetDetailData(const Model::ExportAssetDetailDataRequest &request);
                void ExportAssetDetailDataAsync(const Model::ExportAssetDetailDataRequest& request, const ExportAssetDetailDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportAssetDetailDataOutcomeCallable ExportAssetDetailDataCallable(const Model::ExportAssetDetailDataRequest& request);

                /**
                 *获取授权资源的连接状态
                 * @param req GetResourceConnectionStatusRequest
                 * @return GetResourceConnectionStatusOutcome
                 */
                GetResourceConnectionStatusOutcome GetResourceConnectionStatus(const Model::GetResourceConnectionStatusRequest &request);
                void GetResourceConnectionStatusAsync(const Model::GetResourceConnectionStatusRequest& request, const GetResourceConnectionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetResourceConnectionStatusOutcomeCallable GetResourceConnectionStatusCallable(const Model::GetResourceConnectionStatusRequest& request);

                /**
                 *获取体验版本信息
                 * @param req GetTrialVersionRequest
                 * @return GetTrialVersionOutcome
                 */
                GetTrialVersionOutcome GetTrialVersion(const Model::GetTrialVersionRequest &request);
                void GetTrialVersionAsync(const Model::GetTrialVersionRequest& request, const GetTrialVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTrialVersionOutcomeCallable GetTrialVersionCallable(const Model::GetTrialVersionRequest& request);

                /**
                 *获取用户购买配额信息
                 * @param req GetUserQuotaInfoRequest
                 * @return GetUserQuotaInfoOutcome
                 */
                GetUserQuotaInfoOutcome GetUserQuotaInfo(const Model::GetUserQuotaInfoRequest &request);
                void GetUserQuotaInfoAsync(const Model::GetUserQuotaInfoRequest& request, const GetUserQuotaInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetUserQuotaInfoOutcomeCallable GetUserQuotaInfoCallable(const Model::GetUserQuotaInfoRequest& request);

                /**
                 *拉取DSPA集群列表
                 * @param req ListDSPAClustersRequest
                 * @return ListDSPAClustersOutcome
                 */
                ListDSPAClustersOutcome ListDSPAClusters(const Model::ListDSPAClustersRequest &request);
                void ListDSPAClustersAsync(const Model::ListDSPAClustersRequest& request, const ListDSPAClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListDSPAClustersOutcomeCallable ListDSPAClustersCallable(const Model::ListDSPAClustersRequest& request);

                /**
                 *本接口用于获取COS元数据信息，返回COS元数据信息列表。
                 * @param req ListDSPACosMetaResourcesRequest
                 * @return ListDSPACosMetaResourcesOutcome
                 */
                ListDSPACosMetaResourcesOutcome ListDSPACosMetaResources(const Model::ListDSPACosMetaResourcesRequest &request);
                void ListDSPACosMetaResourcesAsync(const Model::ListDSPACosMetaResourcesRequest& request, const ListDSPACosMetaResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListDSPACosMetaResourcesOutcomeCallable ListDSPACosMetaResourcesCallable(const Model::ListDSPACosMetaResourcesRequest& request);

                /**
                 *拉取用户云资源
                 * @param req ListDSPAMetaResourcesRequest
                 * @return ListDSPAMetaResourcesOutcome
                 */
                ListDSPAMetaResourcesOutcome ListDSPAMetaResources(const Model::ListDSPAMetaResourcesRequest &request);
                void ListDSPAMetaResourcesAsync(const Model::ListDSPAMetaResourcesRequest& request, const ListDSPAMetaResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListDSPAMetaResourcesOutcomeCallable ListDSPAMetaResourcesCallable(const Model::ListDSPAMetaResourcesRequest& request);

                /**
                 *修改DSPA评估风险项，支持修改Status
                 * @param req ModifyDSPAAssessmentRiskRequest
                 * @return ModifyDSPAAssessmentRiskOutcome
                 */
                ModifyDSPAAssessmentRiskOutcome ModifyDSPAAssessmentRisk(const Model::ModifyDSPAAssessmentRiskRequest &request);
                void ModifyDSPAAssessmentRiskAsync(const Model::ModifyDSPAAssessmentRiskRequest& request, const ModifyDSPAAssessmentRiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDSPAAssessmentRiskOutcomeCallable ModifyDSPAAssessmentRiskCallable(const Model::ModifyDSPAAssessmentRiskRequest& request);

                /**
                 *修改最新评估风险项状态
                 * @param req ModifyDSPAAssessmentRiskLatestRequest
                 * @return ModifyDSPAAssessmentRiskLatestOutcome
                 */
                ModifyDSPAAssessmentRiskLatestOutcome ModifyDSPAAssessmentRiskLatest(const Model::ModifyDSPAAssessmentRiskLatestRequest &request);
                void ModifyDSPAAssessmentRiskLatestAsync(const Model::ModifyDSPAAssessmentRiskLatestRequest& request, const ModifyDSPAAssessmentRiskLatestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDSPAAssessmentRiskLatestOutcomeCallable ModifyDSPAAssessmentRiskLatestCallable(const Model::ModifyDSPAAssessmentRiskLatestRequest& request);

                /**
                 *风险项页面----修改风险等级的详情数据
                 * @param req ModifyDSPAAssessmentRiskLevelRequest
                 * @return ModifyDSPAAssessmentRiskLevelOutcome
                 */
                ModifyDSPAAssessmentRiskLevelOutcome ModifyDSPAAssessmentRiskLevel(const Model::ModifyDSPAAssessmentRiskLevelRequest &request);
                void ModifyDSPAAssessmentRiskLevelAsync(const Model::ModifyDSPAAssessmentRiskLevelRequest& request, const ModifyDSPAAssessmentRiskLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDSPAAssessmentRiskLevelOutcomeCallable ModifyDSPAAssessmentRiskLevelCallable(const Model::ModifyDSPAAssessmentRiskLevelRequest& request);

                /**
                 *风险模板---修改风险模板
                 * @param req ModifyDSPAAssessmentRiskTemplateRequest
                 * @return ModifyDSPAAssessmentRiskTemplateOutcome
                 */
                ModifyDSPAAssessmentRiskTemplateOutcome ModifyDSPAAssessmentRiskTemplate(const Model::ModifyDSPAAssessmentRiskTemplateRequest &request);
                void ModifyDSPAAssessmentRiskTemplateAsync(const Model::ModifyDSPAAssessmentRiskTemplateRequest& request, const ModifyDSPAAssessmentRiskTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDSPAAssessmentRiskTemplateOutcomeCallable ModifyDSPAAssessmentRiskTemplateCallable(const Model::ModifyDSPAAssessmentRiskTemplateRequest& request);

                /**
                 *修改COS分类分级任务，该接口只有在任务状态为以下状态时才支持正确修改：
0 待扫描，
2 扫描终止， 
3 扫描成功，
4 扫描失败
                 * @param req ModifyDSPACOSDiscoveryTaskRequest
                 * @return ModifyDSPACOSDiscoveryTaskOutcome
                 */
                ModifyDSPACOSDiscoveryTaskOutcome ModifyDSPACOSDiscoveryTask(const Model::ModifyDSPACOSDiscoveryTaskRequest &request);
                void ModifyDSPACOSDiscoveryTaskAsync(const Model::ModifyDSPACOSDiscoveryTaskRequest& request, const ModifyDSPACOSDiscoveryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDSPACOSDiscoveryTaskOutcomeCallable ModifyDSPACOSDiscoveryTaskCallable(const Model::ModifyDSPACOSDiscoveryTaskRequest& request);

                /**
                 *调整COS任务扫描结果
                 * @param req ModifyDSPACOSTaskResultRequest
                 * @return ModifyDSPACOSTaskResultOutcome
                 */
                ModifyDSPACOSTaskResultOutcome ModifyDSPACOSTaskResult(const Model::ModifyDSPACOSTaskResultRequest &request);
                void ModifyDSPACOSTaskResultAsync(const Model::ModifyDSPACOSTaskResultRequest& request, const ModifyDSPACOSTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDSPACOSTaskResultOutcomeCallable ModifyDSPACOSTaskResultCallable(const Model::ModifyDSPACOSTaskResultRequest& request);

                /**
                 *修改分类，内置分类不支持修改。
                 * @param req ModifyDSPACategoryRequest
                 * @return ModifyDSPACategoryOutcome
                 */
                ModifyDSPACategoryOutcome ModifyDSPACategory(const Model::ModifyDSPACategoryRequest &request);
                void ModifyDSPACategoryAsync(const Model::ModifyDSPACategoryRequest& request, const ModifyDSPACategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDSPACategoryOutcomeCallable ModifyDSPACategoryCallable(const Model::ModifyDSPACategoryRequest& request);

                /**
                 *修改分类分级关系
                 * @param req ModifyDSPACategoryRelationRequest
                 * @return ModifyDSPACategoryRelationOutcome
                 */
                ModifyDSPACategoryRelationOutcome ModifyDSPACategoryRelation(const Model::ModifyDSPACategoryRelationRequest &request);
                void ModifyDSPACategoryRelationAsync(const Model::ModifyDSPACategoryRelationRequest& request, const ModifyDSPACategoryRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDSPACategoryRelationOutcomeCallable ModifyDSPACategoryRelationCallable(const Model::ModifyDSPACategoryRelationRequest& request);

                /**
                 *修改DSPA集群信息
                 * @param req ModifyDSPAClusterInfoRequest
                 * @return ModifyDSPAClusterInfoOutcome
                 */
                ModifyDSPAClusterInfoOutcome ModifyDSPAClusterInfo(const Model::ModifyDSPAClusterInfoRequest &request);
                void ModifyDSPAClusterInfoAsync(const Model::ModifyDSPAClusterInfoRequest& request, const ModifyDSPAClusterInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDSPAClusterInfoOutcomeCallable ModifyDSPAClusterInfoCallable(const Model::ModifyDSPAClusterInfoRequest& request);

                /**
                 *修改分类分级模板，内置模板不支持修改。
                 * @param req ModifyDSPAComplianceGroupRequest
                 * @return ModifyDSPAComplianceGroupOutcome
                 */
                ModifyDSPAComplianceGroupOutcome ModifyDSPAComplianceGroup(const Model::ModifyDSPAComplianceGroupRequest &request);
                void ModifyDSPAComplianceGroupAsync(const Model::ModifyDSPAComplianceGroupRequest& request, const ModifyDSPAComplianceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDSPAComplianceGroupOutcomeCallable ModifyDSPAComplianceGroupCallable(const Model::ModifyDSPAComplianceGroupRequest& request);

                /**
                 *修改分类分级规则，单个用户最多允许创建200个规则。
注：此API同时适用RDB跟COS类型数据。
                 * @param req ModifyDSPADiscoveryRuleRequest
                 * @return ModifyDSPADiscoveryRuleOutcome
                 */
                ModifyDSPADiscoveryRuleOutcome ModifyDSPADiscoveryRule(const Model::ModifyDSPADiscoveryRuleRequest &request);
                void ModifyDSPADiscoveryRuleAsync(const Model::ModifyDSPADiscoveryRuleRequest& request, const ModifyDSPADiscoveryRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDSPADiscoveryRuleOutcomeCallable ModifyDSPADiscoveryRuleCallable(const Model::ModifyDSPADiscoveryRuleRequest& request);

                /**
                 *修改分类分级任务，该接口只有在任务状态为以下状态时才支持正确修改：
0 待扫描，
2 扫描终止， 
3 扫描成功，
4 扫描失败
                 * @param req ModifyDSPADiscoveryTaskRequest
                 * @return ModifyDSPADiscoveryTaskOutcome
                 */
                ModifyDSPADiscoveryTaskOutcome ModifyDSPADiscoveryTask(const Model::ModifyDSPADiscoveryTaskRequest &request);
                void ModifyDSPADiscoveryTaskAsync(const Model::ModifyDSPADiscoveryTaskRequest& request, const ModifyDSPADiscoveryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDSPADiscoveryTaskOutcomeCallable ModifyDSPADiscoveryTaskCallable(const Model::ModifyDSPADiscoveryTaskRequest& request);

                /**
                 *调整ES任务扫描结果
                 * @param req ModifyDSPAESTaskResultRequest
                 * @return ModifyDSPAESTaskResultOutcome
                 */
                ModifyDSPAESTaskResultOutcome ModifyDSPAESTaskResult(const Model::ModifyDSPAESTaskResultRequest &request);
                void ModifyDSPAESTaskResultAsync(const Model::ModifyDSPAESTaskResultRequest& request, const ModifyDSPAESTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDSPAESTaskResultOutcomeCallable ModifyDSPAESTaskResultCallable(const Model::ModifyDSPAESTaskResultRequest& request);

                /**
                 *调整任务扫描结果
                 * @param req ModifyDSPATaskResultRequest
                 * @return ModifyDSPATaskResultOutcome
                 */
                ModifyDSPATaskResultOutcome ModifyDSPATaskResult(const Model::ModifyDSPATaskResultRequest &request);
                void ModifyDSPATaskResultAsync(const Model::ModifyDSPATaskResultRequest& request, const ModifyDSPATaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDSPATaskResultOutcomeCallable ModifyDSPATaskResultCallable(const Model::ModifyDSPATaskResultRequest& request);

                /**
                 *查询DSPA实例的db列表
                 * @param req QueryDSPAMetaResourceDbListRequest
                 * @return QueryDSPAMetaResourceDbListOutcome
                 */
                QueryDSPAMetaResourceDbListOutcome QueryDSPAMetaResourceDbList(const Model::QueryDSPAMetaResourceDbListRequest &request);
                void QueryDSPAMetaResourceDbListAsync(const Model::QueryDSPAMetaResourceDbListRequest& request, const QueryDSPAMetaResourceDbListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryDSPAMetaResourceDbListOutcomeCallable QueryDSPAMetaResourceDbListCallable(const Model::QueryDSPAMetaResourceDbListRequest& request);

                /**
                 *获取资源绑定DB状态
                 * @param req QueryResourceDbBindStatusRequest
                 * @return QueryResourceDbBindStatusOutcome
                 */
                QueryResourceDbBindStatusOutcome QueryResourceDbBindStatus(const Model::QueryResourceDbBindStatusRequest &request);
                void QueryResourceDbBindStatusAsync(const Model::QueryResourceDbBindStatusRequest& request, const QueryResourceDbBindStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryResourceDbBindStatusOutcomeCallable QueryResourceDbBindStatusCallable(const Model::QueryResourceDbBindStatusRequest& request);

                /**
                 *重新启动DSPA风险评估任务
                 * @param req RestartDSPAAssessmentTaskRequest
                 * @return RestartDSPAAssessmentTaskOutcome
                 */
                RestartDSPAAssessmentTaskOutcome RestartDSPAAssessmentTask(const Model::RestartDSPAAssessmentTaskRequest &request);
                void RestartDSPAAssessmentTaskAsync(const Model::RestartDSPAAssessmentTaskRequest& request, const RestartDSPAAssessmentTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestartDSPAAssessmentTaskOutcomeCallable RestartDSPAAssessmentTaskCallable(const Model::RestartDSPAAssessmentTaskRequest& request);

                /**
                 *立即启动分类分级任务，该接口只有在任务状态为以下状态时才支持正确执行立即扫描：
0 待扫描，
2 扫描终止，
3 扫描成功，
4 扫描失败
                 * @param req StartDSPADiscoveryTaskRequest
                 * @return StartDSPADiscoveryTaskOutcome
                 */
                StartDSPADiscoveryTaskOutcome StartDSPADiscoveryTask(const Model::StartDSPADiscoveryTaskRequest &request);
                void StartDSPADiscoveryTaskAsync(const Model::StartDSPADiscoveryTaskRequest& request, const StartDSPADiscoveryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartDSPADiscoveryTaskOutcomeCallable StartDSPADiscoveryTaskCallable(const Model::StartDSPADiscoveryTaskRequest& request);

                /**
                 *停止分类分级任务，该接口只有在任务状态为以下状态时才支持正确执行停止扫描：
1 扫描中
                 * @param req StopDSPADiscoveryTaskRequest
                 * @return StopDSPADiscoveryTaskOutcome
                 */
                StopDSPADiscoveryTaskOutcome StopDSPADiscoveryTask(const Model::StopDSPADiscoveryTaskRequest &request);
                void StopDSPADiscoveryTaskAsync(const Model::StopDSPADiscoveryTaskRequest& request, const StopDSPADiscoveryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopDSPADiscoveryTaskOutcomeCallable StopDSPADiscoveryTaskCallable(const Model::StopDSPADiscoveryTaskRequest& request);

                /**
                 *更新自建资源基础信息，包括：端口、账户名、密码。
请注意：
如果资源自身的VPC、VIP信息发生变化，后台会自动更新。
如果监听的端口发生变化，请显式输入端口。
如果账户名密码任意一个发生变化，请务必同时显式输入账户名密码。
                 * @param req UpdateDSPASelfBuildResourceRequest
                 * @return UpdateDSPASelfBuildResourceOutcome
                 */
                UpdateDSPASelfBuildResourceOutcome UpdateDSPASelfBuildResource(const Model::UpdateDSPASelfBuildResourceRequest &request);
                void UpdateDSPASelfBuildResourceAsync(const Model::UpdateDSPASelfBuildResourceRequest& request, const UpdateDSPASelfBuildResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateDSPASelfBuildResourceOutcomeCallable UpdateDSPASelfBuildResourceCallable(const Model::UpdateDSPASelfBuildResourceRequest& request);

                /**
                 *验证COS分类分级规则
                 * @param req VerifyDSPACOSRuleRequest
                 * @return VerifyDSPACOSRuleOutcome
                 */
                VerifyDSPACOSRuleOutcome VerifyDSPACOSRule(const Model::VerifyDSPACOSRuleRequest &request);
                void VerifyDSPACOSRuleAsync(const Model::VerifyDSPACOSRuleRequest& request, const VerifyDSPACOSRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VerifyDSPACOSRuleOutcomeCallable VerifyDSPACOSRuleCallable(const Model::VerifyDSPACOSRuleRequest& request);

                /**
                 *验证分类分级规则
                 * @param req VerifyDSPADiscoveryRuleRequest
                 * @return VerifyDSPADiscoveryRuleOutcome
                 */
                VerifyDSPADiscoveryRuleOutcome VerifyDSPADiscoveryRule(const Model::VerifyDSPADiscoveryRuleRequest &request);
                void VerifyDSPADiscoveryRuleAsync(const Model::VerifyDSPADiscoveryRuleRequest& request, const VerifyDSPADiscoveryRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VerifyDSPADiscoveryRuleOutcomeCallable VerifyDSPADiscoveryRuleCallable(const Model::VerifyDSPADiscoveryRuleRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_DSGCCLIENT_H_
