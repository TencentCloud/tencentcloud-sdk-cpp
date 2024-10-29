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

#ifndef TENCENTCLOUD_ES_V20180416_ESCLIENT_H_
#define TENCENTCLOUD_ES_V20180416_ESCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/es/v20180416/model/CheckMigrateIndexMetaDataRequest.h>
#include <tencentcloud/es/v20180416/model/CheckMigrateIndexMetaDataResponse.h>
#include <tencentcloud/es/v20180416/model/CreateClusterSnapshotRequest.h>
#include <tencentcloud/es/v20180416/model/CreateClusterSnapshotResponse.h>
#include <tencentcloud/es/v20180416/model/CreateCosMigrateToServerlessInstanceRequest.h>
#include <tencentcloud/es/v20180416/model/CreateCosMigrateToServerlessInstanceResponse.h>
#include <tencentcloud/es/v20180416/model/CreateIndexRequest.h>
#include <tencentcloud/es/v20180416/model/CreateIndexResponse.h>
#include <tencentcloud/es/v20180416/model/CreateInstanceRequest.h>
#include <tencentcloud/es/v20180416/model/CreateInstanceResponse.h>
#include <tencentcloud/es/v20180416/model/CreateLogstashInstanceRequest.h>
#include <tencentcloud/es/v20180416/model/CreateLogstashInstanceResponse.h>
#include <tencentcloud/es/v20180416/model/CreateServerlessInstanceRequest.h>
#include <tencentcloud/es/v20180416/model/CreateServerlessInstanceResponse.h>
#include <tencentcloud/es/v20180416/model/CreateServerlessSpaceV2Request.h>
#include <tencentcloud/es/v20180416/model/CreateServerlessSpaceV2Response.h>
#include <tencentcloud/es/v20180416/model/DeleteClusterSnapshotRequest.h>
#include <tencentcloud/es/v20180416/model/DeleteClusterSnapshotResponse.h>
#include <tencentcloud/es/v20180416/model/DeleteIndexRequest.h>
#include <tencentcloud/es/v20180416/model/DeleteIndexResponse.h>
#include <tencentcloud/es/v20180416/model/DeleteInstanceRequest.h>
#include <tencentcloud/es/v20180416/model/DeleteInstanceResponse.h>
#include <tencentcloud/es/v20180416/model/DeleteLogstashInstanceRequest.h>
#include <tencentcloud/es/v20180416/model/DeleteLogstashInstanceResponse.h>
#include <tencentcloud/es/v20180416/model/DeleteLogstashPipelinesRequest.h>
#include <tencentcloud/es/v20180416/model/DeleteLogstashPipelinesResponse.h>
#include <tencentcloud/es/v20180416/model/DeleteServerlessInstanceRequest.h>
#include <tencentcloud/es/v20180416/model/DeleteServerlessInstanceResponse.h>
#include <tencentcloud/es/v20180416/model/DeleteServerlessSpaceUserRequest.h>
#include <tencentcloud/es/v20180416/model/DeleteServerlessSpaceUserResponse.h>
#include <tencentcloud/es/v20180416/model/DescribeClusterSnapshotRequest.h>
#include <tencentcloud/es/v20180416/model/DescribeClusterSnapshotResponse.h>
#include <tencentcloud/es/v20180416/model/DescribeDiagnoseRequest.h>
#include <tencentcloud/es/v20180416/model/DescribeDiagnoseResponse.h>
#include <tencentcloud/es/v20180416/model/DescribeIndexListRequest.h>
#include <tencentcloud/es/v20180416/model/DescribeIndexListResponse.h>
#include <tencentcloud/es/v20180416/model/DescribeIndexMetaRequest.h>
#include <tencentcloud/es/v20180416/model/DescribeIndexMetaResponse.h>
#include <tencentcloud/es/v20180416/model/DescribeInstanceLogsRequest.h>
#include <tencentcloud/es/v20180416/model/DescribeInstanceLogsResponse.h>
#include <tencentcloud/es/v20180416/model/DescribeInstanceOperationsRequest.h>
#include <tencentcloud/es/v20180416/model/DescribeInstanceOperationsResponse.h>
#include <tencentcloud/es/v20180416/model/DescribeInstancePluginListRequest.h>
#include <tencentcloud/es/v20180416/model/DescribeInstancePluginListResponse.h>
#include <tencentcloud/es/v20180416/model/DescribeInstancesRequest.h>
#include <tencentcloud/es/v20180416/model/DescribeInstancesResponse.h>
#include <tencentcloud/es/v20180416/model/DescribeLogstashInstanceLogsRequest.h>
#include <tencentcloud/es/v20180416/model/DescribeLogstashInstanceLogsResponse.h>
#include <tencentcloud/es/v20180416/model/DescribeLogstashInstanceOperationsRequest.h>
#include <tencentcloud/es/v20180416/model/DescribeLogstashInstanceOperationsResponse.h>
#include <tencentcloud/es/v20180416/model/DescribeLogstashInstancesRequest.h>
#include <tencentcloud/es/v20180416/model/DescribeLogstashInstancesResponse.h>
#include <tencentcloud/es/v20180416/model/DescribeLogstashPipelinesRequest.h>
#include <tencentcloud/es/v20180416/model/DescribeLogstashPipelinesResponse.h>
#include <tencentcloud/es/v20180416/model/DescribeServerlessInstancesRequest.h>
#include <tencentcloud/es/v20180416/model/DescribeServerlessInstancesResponse.h>
#include <tencentcloud/es/v20180416/model/DescribeServerlessMetricsRequest.h>
#include <tencentcloud/es/v20180416/model/DescribeServerlessMetricsResponse.h>
#include <tencentcloud/es/v20180416/model/DescribeServerlessSpaceUserRequest.h>
#include <tencentcloud/es/v20180416/model/DescribeServerlessSpaceUserResponse.h>
#include <tencentcloud/es/v20180416/model/DescribeServerlessSpacesRequest.h>
#include <tencentcloud/es/v20180416/model/DescribeServerlessSpacesResponse.h>
#include <tencentcloud/es/v20180416/model/DescribeSpaceKibanaToolsRequest.h>
#include <tencentcloud/es/v20180416/model/DescribeSpaceKibanaToolsResponse.h>
#include <tencentcloud/es/v20180416/model/DescribeUserCosSnapshotListRequest.h>
#include <tencentcloud/es/v20180416/model/DescribeUserCosSnapshotListResponse.h>
#include <tencentcloud/es/v20180416/model/DescribeViewsRequest.h>
#include <tencentcloud/es/v20180416/model/DescribeViewsResponse.h>
#include <tencentcloud/es/v20180416/model/DiagnoseInstanceRequest.h>
#include <tencentcloud/es/v20180416/model/DiagnoseInstanceResponse.h>
#include <tencentcloud/es/v20180416/model/GetDiagnoseSettingsRequest.h>
#include <tencentcloud/es/v20180416/model/GetDiagnoseSettingsResponse.h>
#include <tencentcloud/es/v20180416/model/GetRequestTargetNodeTypesRequest.h>
#include <tencentcloud/es/v20180416/model/GetRequestTargetNodeTypesResponse.h>
#include <tencentcloud/es/v20180416/model/InquirePriceRenewInstanceRequest.h>
#include <tencentcloud/es/v20180416/model/InquirePriceRenewInstanceResponse.h>
#include <tencentcloud/es/v20180416/model/InstallInstanceModelRequest.h>
#include <tencentcloud/es/v20180416/model/InstallInstanceModelResponse.h>
#include <tencentcloud/es/v20180416/model/ModifyEsVipSecurityGroupRequest.h>
#include <tencentcloud/es/v20180416/model/ModifyEsVipSecurityGroupResponse.h>
#include <tencentcloud/es/v20180416/model/RestartInstanceRequest.h>
#include <tencentcloud/es/v20180416/model/RestartInstanceResponse.h>
#include <tencentcloud/es/v20180416/model/RestartKibanaRequest.h>
#include <tencentcloud/es/v20180416/model/RestartKibanaResponse.h>
#include <tencentcloud/es/v20180416/model/RestartLogstashInstanceRequest.h>
#include <tencentcloud/es/v20180416/model/RestartLogstashInstanceResponse.h>
#include <tencentcloud/es/v20180416/model/RestartNodesRequest.h>
#include <tencentcloud/es/v20180416/model/RestartNodesResponse.h>
#include <tencentcloud/es/v20180416/model/RestoreClusterSnapshotRequest.h>
#include <tencentcloud/es/v20180416/model/RestoreClusterSnapshotResponse.h>
#include <tencentcloud/es/v20180416/model/SaveAndDeployLogstashPipelineRequest.h>
#include <tencentcloud/es/v20180416/model/SaveAndDeployLogstashPipelineResponse.h>
#include <tencentcloud/es/v20180416/model/StartLogstashPipelinesRequest.h>
#include <tencentcloud/es/v20180416/model/StartLogstashPipelinesResponse.h>
#include <tencentcloud/es/v20180416/model/StopLogstashPipelinesRequest.h>
#include <tencentcloud/es/v20180416/model/StopLogstashPipelinesResponse.h>
#include <tencentcloud/es/v20180416/model/UpdateDiagnoseSettingsRequest.h>
#include <tencentcloud/es/v20180416/model/UpdateDiagnoseSettingsResponse.h>
#include <tencentcloud/es/v20180416/model/UpdateDictionariesRequest.h>
#include <tencentcloud/es/v20180416/model/UpdateDictionariesResponse.h>
#include <tencentcloud/es/v20180416/model/UpdateIndexRequest.h>
#include <tencentcloud/es/v20180416/model/UpdateIndexResponse.h>
#include <tencentcloud/es/v20180416/model/UpdateInstanceRequest.h>
#include <tencentcloud/es/v20180416/model/UpdateInstanceResponse.h>
#include <tencentcloud/es/v20180416/model/UpdateJdkRequest.h>
#include <tencentcloud/es/v20180416/model/UpdateJdkResponse.h>
#include <tencentcloud/es/v20180416/model/UpdateLogstashInstanceRequest.h>
#include <tencentcloud/es/v20180416/model/UpdateLogstashInstanceResponse.h>
#include <tencentcloud/es/v20180416/model/UpdateLogstashPipelineDescRequest.h>
#include <tencentcloud/es/v20180416/model/UpdateLogstashPipelineDescResponse.h>
#include <tencentcloud/es/v20180416/model/UpdatePluginsRequest.h>
#include <tencentcloud/es/v20180416/model/UpdatePluginsResponse.h>
#include <tencentcloud/es/v20180416/model/UpdateRequestTargetNodeTypesRequest.h>
#include <tencentcloud/es/v20180416/model/UpdateRequestTargetNodeTypesResponse.h>
#include <tencentcloud/es/v20180416/model/UpdateServerlessInstanceRequest.h>
#include <tencentcloud/es/v20180416/model/UpdateServerlessInstanceResponse.h>
#include <tencentcloud/es/v20180416/model/UpdateServerlessSpaceRequest.h>
#include <tencentcloud/es/v20180416/model/UpdateServerlessSpaceResponse.h>
#include <tencentcloud/es/v20180416/model/UpgradeInstanceRequest.h>
#include <tencentcloud/es/v20180416/model/UpgradeInstanceResponse.h>
#include <tencentcloud/es/v20180416/model/UpgradeLicenseRequest.h>
#include <tencentcloud/es/v20180416/model/UpgradeLicenseResponse.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            class EsClient : public AbstractClient
            {
            public:
                EsClient(const Credential &credential, const std::string &region);
                EsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CheckMigrateIndexMetaDataResponse> CheckMigrateIndexMetaDataOutcome;
                typedef std::future<CheckMigrateIndexMetaDataOutcome> CheckMigrateIndexMetaDataOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::CheckMigrateIndexMetaDataRequest&, CheckMigrateIndexMetaDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckMigrateIndexMetaDataAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClusterSnapshotResponse> CreateClusterSnapshotOutcome;
                typedef std::future<CreateClusterSnapshotOutcome> CreateClusterSnapshotOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::CreateClusterSnapshotRequest&, CreateClusterSnapshotOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterSnapshotAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCosMigrateToServerlessInstanceResponse> CreateCosMigrateToServerlessInstanceOutcome;
                typedef std::future<CreateCosMigrateToServerlessInstanceOutcome> CreateCosMigrateToServerlessInstanceOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::CreateCosMigrateToServerlessInstanceRequest&, CreateCosMigrateToServerlessInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCosMigrateToServerlessInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateIndexResponse> CreateIndexOutcome;
                typedef std::future<CreateIndexOutcome> CreateIndexOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::CreateIndexRequest&, CreateIndexOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIndexAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInstanceResponse> CreateInstanceOutcome;
                typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::CreateInstanceRequest&, CreateInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLogstashInstanceResponse> CreateLogstashInstanceOutcome;
                typedef std::future<CreateLogstashInstanceOutcome> CreateLogstashInstanceOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::CreateLogstashInstanceRequest&, CreateLogstashInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLogstashInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateServerlessInstanceResponse> CreateServerlessInstanceOutcome;
                typedef std::future<CreateServerlessInstanceOutcome> CreateServerlessInstanceOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::CreateServerlessInstanceRequest&, CreateServerlessInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateServerlessInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateServerlessSpaceV2Response> CreateServerlessSpaceV2Outcome;
                typedef std::future<CreateServerlessSpaceV2Outcome> CreateServerlessSpaceV2OutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::CreateServerlessSpaceV2Request&, CreateServerlessSpaceV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateServerlessSpaceV2AsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteClusterSnapshotResponse> DeleteClusterSnapshotOutcome;
                typedef std::future<DeleteClusterSnapshotOutcome> DeleteClusterSnapshotOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::DeleteClusterSnapshotRequest&, DeleteClusterSnapshotOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterSnapshotAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteIndexResponse> DeleteIndexOutcome;
                typedef std::future<DeleteIndexOutcome> DeleteIndexOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::DeleteIndexRequest&, DeleteIndexOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIndexAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteInstanceResponse> DeleteInstanceOutcome;
                typedef std::future<DeleteInstanceOutcome> DeleteInstanceOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::DeleteInstanceRequest&, DeleteInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLogstashInstanceResponse> DeleteLogstashInstanceOutcome;
                typedef std::future<DeleteLogstashInstanceOutcome> DeleteLogstashInstanceOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::DeleteLogstashInstanceRequest&, DeleteLogstashInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLogstashInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLogstashPipelinesResponse> DeleteLogstashPipelinesOutcome;
                typedef std::future<DeleteLogstashPipelinesOutcome> DeleteLogstashPipelinesOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::DeleteLogstashPipelinesRequest&, DeleteLogstashPipelinesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLogstashPipelinesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteServerlessInstanceResponse> DeleteServerlessInstanceOutcome;
                typedef std::future<DeleteServerlessInstanceOutcome> DeleteServerlessInstanceOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::DeleteServerlessInstanceRequest&, DeleteServerlessInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServerlessInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteServerlessSpaceUserResponse> DeleteServerlessSpaceUserOutcome;
                typedef std::future<DeleteServerlessSpaceUserOutcome> DeleteServerlessSpaceUserOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::DeleteServerlessSpaceUserRequest&, DeleteServerlessSpaceUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServerlessSpaceUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterSnapshotResponse> DescribeClusterSnapshotOutcome;
                typedef std::future<DescribeClusterSnapshotOutcome> DescribeClusterSnapshotOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::DescribeClusterSnapshotRequest&, DescribeClusterSnapshotOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterSnapshotAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDiagnoseResponse> DescribeDiagnoseOutcome;
                typedef std::future<DescribeDiagnoseOutcome> DescribeDiagnoseOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::DescribeDiagnoseRequest&, DescribeDiagnoseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDiagnoseAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIndexListResponse> DescribeIndexListOutcome;
                typedef std::future<DescribeIndexListOutcome> DescribeIndexListOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::DescribeIndexListRequest&, DescribeIndexListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIndexListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIndexMetaResponse> DescribeIndexMetaOutcome;
                typedef std::future<DescribeIndexMetaOutcome> DescribeIndexMetaOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::DescribeIndexMetaRequest&, DescribeIndexMetaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIndexMetaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceLogsResponse> DescribeInstanceLogsOutcome;
                typedef std::future<DescribeInstanceLogsOutcome> DescribeInstanceLogsOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::DescribeInstanceLogsRequest&, DescribeInstanceLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceOperationsResponse> DescribeInstanceOperationsOutcome;
                typedef std::future<DescribeInstanceOperationsOutcome> DescribeInstanceOperationsOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::DescribeInstanceOperationsRequest&, DescribeInstanceOperationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceOperationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancePluginListResponse> DescribeInstancePluginListOutcome;
                typedef std::future<DescribeInstancePluginListOutcome> DescribeInstancePluginListOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::DescribeInstancePluginListRequest&, DescribeInstancePluginListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancePluginListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesResponse> DescribeInstancesOutcome;
                typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::DescribeInstancesRequest&, DescribeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogstashInstanceLogsResponse> DescribeLogstashInstanceLogsOutcome;
                typedef std::future<DescribeLogstashInstanceLogsOutcome> DescribeLogstashInstanceLogsOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::DescribeLogstashInstanceLogsRequest&, DescribeLogstashInstanceLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogstashInstanceLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogstashInstanceOperationsResponse> DescribeLogstashInstanceOperationsOutcome;
                typedef std::future<DescribeLogstashInstanceOperationsOutcome> DescribeLogstashInstanceOperationsOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::DescribeLogstashInstanceOperationsRequest&, DescribeLogstashInstanceOperationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogstashInstanceOperationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogstashInstancesResponse> DescribeLogstashInstancesOutcome;
                typedef std::future<DescribeLogstashInstancesOutcome> DescribeLogstashInstancesOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::DescribeLogstashInstancesRequest&, DescribeLogstashInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogstashInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogstashPipelinesResponse> DescribeLogstashPipelinesOutcome;
                typedef std::future<DescribeLogstashPipelinesOutcome> DescribeLogstashPipelinesOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::DescribeLogstashPipelinesRequest&, DescribeLogstashPipelinesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogstashPipelinesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeServerlessInstancesResponse> DescribeServerlessInstancesOutcome;
                typedef std::future<DescribeServerlessInstancesOutcome> DescribeServerlessInstancesOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::DescribeServerlessInstancesRequest&, DescribeServerlessInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServerlessInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeServerlessMetricsResponse> DescribeServerlessMetricsOutcome;
                typedef std::future<DescribeServerlessMetricsOutcome> DescribeServerlessMetricsOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::DescribeServerlessMetricsRequest&, DescribeServerlessMetricsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServerlessMetricsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeServerlessSpaceUserResponse> DescribeServerlessSpaceUserOutcome;
                typedef std::future<DescribeServerlessSpaceUserOutcome> DescribeServerlessSpaceUserOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::DescribeServerlessSpaceUserRequest&, DescribeServerlessSpaceUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServerlessSpaceUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeServerlessSpacesResponse> DescribeServerlessSpacesOutcome;
                typedef std::future<DescribeServerlessSpacesOutcome> DescribeServerlessSpacesOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::DescribeServerlessSpacesRequest&, DescribeServerlessSpacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServerlessSpacesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSpaceKibanaToolsResponse> DescribeSpaceKibanaToolsOutcome;
                typedef std::future<DescribeSpaceKibanaToolsOutcome> DescribeSpaceKibanaToolsOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::DescribeSpaceKibanaToolsRequest&, DescribeSpaceKibanaToolsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSpaceKibanaToolsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserCosSnapshotListResponse> DescribeUserCosSnapshotListOutcome;
                typedef std::future<DescribeUserCosSnapshotListOutcome> DescribeUserCosSnapshotListOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::DescribeUserCosSnapshotListRequest&, DescribeUserCosSnapshotListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserCosSnapshotListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeViewsResponse> DescribeViewsOutcome;
                typedef std::future<DescribeViewsOutcome> DescribeViewsOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::DescribeViewsRequest&, DescribeViewsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeViewsAsyncHandler;
                typedef Outcome<Core::Error, Model::DiagnoseInstanceResponse> DiagnoseInstanceOutcome;
                typedef std::future<DiagnoseInstanceOutcome> DiagnoseInstanceOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::DiagnoseInstanceRequest&, DiagnoseInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DiagnoseInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDiagnoseSettingsResponse> GetDiagnoseSettingsOutcome;
                typedef std::future<GetDiagnoseSettingsOutcome> GetDiagnoseSettingsOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::GetDiagnoseSettingsRequest&, GetDiagnoseSettingsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDiagnoseSettingsAsyncHandler;
                typedef Outcome<Core::Error, Model::GetRequestTargetNodeTypesResponse> GetRequestTargetNodeTypesOutcome;
                typedef std::future<GetRequestTargetNodeTypesOutcome> GetRequestTargetNodeTypesOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::GetRequestTargetNodeTypesRequest&, GetRequestTargetNodeTypesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetRequestTargetNodeTypesAsyncHandler;
                typedef Outcome<Core::Error, Model::InquirePriceRenewInstanceResponse> InquirePriceRenewInstanceOutcome;
                typedef std::future<InquirePriceRenewInstanceOutcome> InquirePriceRenewInstanceOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::InquirePriceRenewInstanceRequest&, InquirePriceRenewInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquirePriceRenewInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::InstallInstanceModelResponse> InstallInstanceModelOutcome;
                typedef std::future<InstallInstanceModelOutcome> InstallInstanceModelOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::InstallInstanceModelRequest&, InstallInstanceModelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InstallInstanceModelAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEsVipSecurityGroupResponse> ModifyEsVipSecurityGroupOutcome;
                typedef std::future<ModifyEsVipSecurityGroupOutcome> ModifyEsVipSecurityGroupOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::ModifyEsVipSecurityGroupRequest&, ModifyEsVipSecurityGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEsVipSecurityGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::RestartInstanceResponse> RestartInstanceOutcome;
                typedef std::future<RestartInstanceOutcome> RestartInstanceOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::RestartInstanceRequest&, RestartInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestartInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::RestartKibanaResponse> RestartKibanaOutcome;
                typedef std::future<RestartKibanaOutcome> RestartKibanaOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::RestartKibanaRequest&, RestartKibanaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestartKibanaAsyncHandler;
                typedef Outcome<Core::Error, Model::RestartLogstashInstanceResponse> RestartLogstashInstanceOutcome;
                typedef std::future<RestartLogstashInstanceOutcome> RestartLogstashInstanceOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::RestartLogstashInstanceRequest&, RestartLogstashInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestartLogstashInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::RestartNodesResponse> RestartNodesOutcome;
                typedef std::future<RestartNodesOutcome> RestartNodesOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::RestartNodesRequest&, RestartNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestartNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::RestoreClusterSnapshotResponse> RestoreClusterSnapshotOutcome;
                typedef std::future<RestoreClusterSnapshotOutcome> RestoreClusterSnapshotOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::RestoreClusterSnapshotRequest&, RestoreClusterSnapshotOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestoreClusterSnapshotAsyncHandler;
                typedef Outcome<Core::Error, Model::SaveAndDeployLogstashPipelineResponse> SaveAndDeployLogstashPipelineOutcome;
                typedef std::future<SaveAndDeployLogstashPipelineOutcome> SaveAndDeployLogstashPipelineOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::SaveAndDeployLogstashPipelineRequest&, SaveAndDeployLogstashPipelineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SaveAndDeployLogstashPipelineAsyncHandler;
                typedef Outcome<Core::Error, Model::StartLogstashPipelinesResponse> StartLogstashPipelinesOutcome;
                typedef std::future<StartLogstashPipelinesOutcome> StartLogstashPipelinesOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::StartLogstashPipelinesRequest&, StartLogstashPipelinesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartLogstashPipelinesAsyncHandler;
                typedef Outcome<Core::Error, Model::StopLogstashPipelinesResponse> StopLogstashPipelinesOutcome;
                typedef std::future<StopLogstashPipelinesOutcome> StopLogstashPipelinesOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::StopLogstashPipelinesRequest&, StopLogstashPipelinesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopLogstashPipelinesAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateDiagnoseSettingsResponse> UpdateDiagnoseSettingsOutcome;
                typedef std::future<UpdateDiagnoseSettingsOutcome> UpdateDiagnoseSettingsOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::UpdateDiagnoseSettingsRequest&, UpdateDiagnoseSettingsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDiagnoseSettingsAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateDictionariesResponse> UpdateDictionariesOutcome;
                typedef std::future<UpdateDictionariesOutcome> UpdateDictionariesOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::UpdateDictionariesRequest&, UpdateDictionariesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDictionariesAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateIndexResponse> UpdateIndexOutcome;
                typedef std::future<UpdateIndexOutcome> UpdateIndexOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::UpdateIndexRequest&, UpdateIndexOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateIndexAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateInstanceResponse> UpdateInstanceOutcome;
                typedef std::future<UpdateInstanceOutcome> UpdateInstanceOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::UpdateInstanceRequest&, UpdateInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateJdkResponse> UpdateJdkOutcome;
                typedef std::future<UpdateJdkOutcome> UpdateJdkOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::UpdateJdkRequest&, UpdateJdkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateJdkAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateLogstashInstanceResponse> UpdateLogstashInstanceOutcome;
                typedef std::future<UpdateLogstashInstanceOutcome> UpdateLogstashInstanceOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::UpdateLogstashInstanceRequest&, UpdateLogstashInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLogstashInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateLogstashPipelineDescResponse> UpdateLogstashPipelineDescOutcome;
                typedef std::future<UpdateLogstashPipelineDescOutcome> UpdateLogstashPipelineDescOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::UpdateLogstashPipelineDescRequest&, UpdateLogstashPipelineDescOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLogstashPipelineDescAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdatePluginsResponse> UpdatePluginsOutcome;
                typedef std::future<UpdatePluginsOutcome> UpdatePluginsOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::UpdatePluginsRequest&, UpdatePluginsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePluginsAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateRequestTargetNodeTypesResponse> UpdateRequestTargetNodeTypesOutcome;
                typedef std::future<UpdateRequestTargetNodeTypesOutcome> UpdateRequestTargetNodeTypesOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::UpdateRequestTargetNodeTypesRequest&, UpdateRequestTargetNodeTypesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRequestTargetNodeTypesAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateServerlessInstanceResponse> UpdateServerlessInstanceOutcome;
                typedef std::future<UpdateServerlessInstanceOutcome> UpdateServerlessInstanceOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::UpdateServerlessInstanceRequest&, UpdateServerlessInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateServerlessInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateServerlessSpaceResponse> UpdateServerlessSpaceOutcome;
                typedef std::future<UpdateServerlessSpaceOutcome> UpdateServerlessSpaceOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::UpdateServerlessSpaceRequest&, UpdateServerlessSpaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateServerlessSpaceAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeInstanceResponse> UpgradeInstanceOutcome;
                typedef std::future<UpgradeInstanceOutcome> UpgradeInstanceOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::UpgradeInstanceRequest&, UpgradeInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeLicenseResponse> UpgradeLicenseOutcome;
                typedef std::future<UpgradeLicenseOutcome> UpgradeLicenseOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::UpgradeLicenseRequest&, UpgradeLicenseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeLicenseAsyncHandler;



                /**
                 *检查cos迁移索引元数据
                 * @param req CheckMigrateIndexMetaDataRequest
                 * @return CheckMigrateIndexMetaDataOutcome
                 */
                CheckMigrateIndexMetaDataOutcome CheckMigrateIndexMetaData(const Model::CheckMigrateIndexMetaDataRequest &request);
                void CheckMigrateIndexMetaDataAsync(const Model::CheckMigrateIndexMetaDataRequest& request, const CheckMigrateIndexMetaDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckMigrateIndexMetaDataOutcomeCallable CheckMigrateIndexMetaDataCallable(const Model::CheckMigrateIndexMetaDataRequest& request);

                /**
                 *集群快照手动创建
                 * @param req CreateClusterSnapshotRequest
                 * @return CreateClusterSnapshotOutcome
                 */
                CreateClusterSnapshotOutcome CreateClusterSnapshot(const Model::CreateClusterSnapshotRequest &request);
                void CreateClusterSnapshotAsync(const Model::CreateClusterSnapshotRequest& request, const CreateClusterSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterSnapshotOutcomeCallable CreateClusterSnapshotCallable(const Model::CreateClusterSnapshotRequest& request);

                /**
                 *cos迁移流程
                 * @param req CreateCosMigrateToServerlessInstanceRequest
                 * @return CreateCosMigrateToServerlessInstanceOutcome
                 */
                CreateCosMigrateToServerlessInstanceOutcome CreateCosMigrateToServerlessInstance(const Model::CreateCosMigrateToServerlessInstanceRequest &request);
                void CreateCosMigrateToServerlessInstanceAsync(const Model::CreateCosMigrateToServerlessInstanceRequest& request, const CreateCosMigrateToServerlessInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCosMigrateToServerlessInstanceOutcomeCallable CreateCosMigrateToServerlessInstanceCallable(const Model::CreateCosMigrateToServerlessInstanceRequest& request);

                /**
                 *创建索引
                 * @param req CreateIndexRequest
                 * @return CreateIndexOutcome
                 */
                CreateIndexOutcome CreateIndex(const Model::CreateIndexRequest &request);
                void CreateIndexAsync(const Model::CreateIndexRequest& request, const CreateIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIndexOutcomeCallable CreateIndexCallable(const Model::CreateIndexRequest& request);

                /**
                 *创建指定规格的ES集群实例
                 * @param req CreateInstanceRequest
                 * @return CreateInstanceOutcome
                 */
                CreateInstanceOutcome CreateInstance(const Model::CreateInstanceRequest &request);
                void CreateInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstanceOutcomeCallable CreateInstanceCallable(const Model::CreateInstanceRequest& request);

                /**
                 *用于创建Logstash实例
                 * @param req CreateLogstashInstanceRequest
                 * @return CreateLogstashInstanceOutcome
                 */
                CreateLogstashInstanceOutcome CreateLogstashInstance(const Model::CreateLogstashInstanceRequest &request);
                void CreateLogstashInstanceAsync(const Model::CreateLogstashInstanceRequest& request, const CreateLogstashInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLogstashInstanceOutcomeCallable CreateLogstashInstanceCallable(const Model::CreateLogstashInstanceRequest& request);

                /**
                 *创建Serverless索引
                 * @param req CreateServerlessInstanceRequest
                 * @return CreateServerlessInstanceOutcome
                 */
                CreateServerlessInstanceOutcome CreateServerlessInstance(const Model::CreateServerlessInstanceRequest &request);
                void CreateServerlessInstanceAsync(const Model::CreateServerlessInstanceRequest& request, const CreateServerlessInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateServerlessInstanceOutcomeCallable CreateServerlessInstanceCallable(const Model::CreateServerlessInstanceRequest& request);

                /**
                 *创建Serverless索引空间
                 * @param req CreateServerlessSpaceV2Request
                 * @return CreateServerlessSpaceV2Outcome
                 */
                CreateServerlessSpaceV2Outcome CreateServerlessSpaceV2(const Model::CreateServerlessSpaceV2Request &request);
                void CreateServerlessSpaceV2Async(const Model::CreateServerlessSpaceV2Request& request, const CreateServerlessSpaceV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateServerlessSpaceV2OutcomeCallable CreateServerlessSpaceV2Callable(const Model::CreateServerlessSpaceV2Request& request);

                /**
                 *删除快照仓库里备份的快照
                 * @param req DeleteClusterSnapshotRequest
                 * @return DeleteClusterSnapshotOutcome
                 */
                DeleteClusterSnapshotOutcome DeleteClusterSnapshot(const Model::DeleteClusterSnapshotRequest &request);
                void DeleteClusterSnapshotAsync(const Model::DeleteClusterSnapshotRequest& request, const DeleteClusterSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteClusterSnapshotOutcomeCallable DeleteClusterSnapshotCallable(const Model::DeleteClusterSnapshotRequest& request);

                /**
                 *删除索引
                 * @param req DeleteIndexRequest
                 * @return DeleteIndexOutcome
                 */
                DeleteIndexOutcome DeleteIndex(const Model::DeleteIndexRequest &request);
                void DeleteIndexAsync(const Model::DeleteIndexRequest& request, const DeleteIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteIndexOutcomeCallable DeleteIndexCallable(const Model::DeleteIndexRequest& request);

                /**
                 *销毁集群实例
                 * @param req DeleteInstanceRequest
                 * @return DeleteInstanceOutcome
                 */
                DeleteInstanceOutcome DeleteInstance(const Model::DeleteInstanceRequest &request);
                void DeleteInstanceAsync(const Model::DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteInstanceOutcomeCallable DeleteInstanceCallable(const Model::DeleteInstanceRequest& request);

                /**
                 *用于删除Logstash实例
                 * @param req DeleteLogstashInstanceRequest
                 * @return DeleteLogstashInstanceOutcome
                 */
                DeleteLogstashInstanceOutcome DeleteLogstashInstance(const Model::DeleteLogstashInstanceRequest &request);
                void DeleteLogstashInstanceAsync(const Model::DeleteLogstashInstanceRequest& request, const DeleteLogstashInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLogstashInstanceOutcomeCallable DeleteLogstashInstanceCallable(const Model::DeleteLogstashInstanceRequest& request);

                /**
                 *用于批量删除Logstash管道
                 * @param req DeleteLogstashPipelinesRequest
                 * @return DeleteLogstashPipelinesOutcome
                 */
                DeleteLogstashPipelinesOutcome DeleteLogstashPipelines(const Model::DeleteLogstashPipelinesRequest &request);
                void DeleteLogstashPipelinesAsync(const Model::DeleteLogstashPipelinesRequest& request, const DeleteLogstashPipelinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLogstashPipelinesOutcomeCallable DeleteLogstashPipelinesCallable(const Model::DeleteLogstashPipelinesRequest& request);

                /**
                 *删除Serverless索引
                 * @param req DeleteServerlessInstanceRequest
                 * @return DeleteServerlessInstanceOutcome
                 */
                DeleteServerlessInstanceOutcome DeleteServerlessInstance(const Model::DeleteServerlessInstanceRequest &request);
                void DeleteServerlessInstanceAsync(const Model::DeleteServerlessInstanceRequest& request, const DeleteServerlessInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteServerlessInstanceOutcomeCallable DeleteServerlessInstanceCallable(const Model::DeleteServerlessInstanceRequest& request);

                /**
                 *删除Serverless空间子用户
                 * @param req DeleteServerlessSpaceUserRequest
                 * @return DeleteServerlessSpaceUserOutcome
                 */
                DeleteServerlessSpaceUserOutcome DeleteServerlessSpaceUser(const Model::DeleteServerlessSpaceUserRequest &request);
                void DeleteServerlessSpaceUserAsync(const Model::DeleteServerlessSpaceUserRequest& request, const DeleteServerlessSpaceUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteServerlessSpaceUserOutcomeCallable DeleteServerlessSpaceUserCallable(const Model::DeleteServerlessSpaceUserRequest& request);

                /**
                 *获取快照备份列表
                 * @param req DescribeClusterSnapshotRequest
                 * @return DescribeClusterSnapshotOutcome
                 */
                DescribeClusterSnapshotOutcome DescribeClusterSnapshot(const Model::DescribeClusterSnapshotRequest &request);
                void DescribeClusterSnapshotAsync(const Model::DescribeClusterSnapshotRequest& request, const DescribeClusterSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterSnapshotOutcomeCallable DescribeClusterSnapshotCallable(const Model::DescribeClusterSnapshotRequest& request);

                /**
                 *查询智能运维诊断结果报告
                 * @param req DescribeDiagnoseRequest
                 * @return DescribeDiagnoseOutcome
                 */
                DescribeDiagnoseOutcome DescribeDiagnose(const Model::DescribeDiagnoseRequest &request);
                void DescribeDiagnoseAsync(const Model::DescribeDiagnoseRequest& request, const DescribeDiagnoseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDiagnoseOutcomeCallable DescribeDiagnoseCallable(const Model::DescribeDiagnoseRequest& request);

                /**
                 *获取索引列表
                 * @param req DescribeIndexListRequest
                 * @return DescribeIndexListOutcome
                 */
                DescribeIndexListOutcome DescribeIndexList(const Model::DescribeIndexListRequest &request);
                void DescribeIndexListAsync(const Model::DescribeIndexListRequest& request, const DescribeIndexListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIndexListOutcomeCallable DescribeIndexListCallable(const Model::DescribeIndexListRequest& request);

                /**
                 *获取索引元数据
                 * @param req DescribeIndexMetaRequest
                 * @return DescribeIndexMetaOutcome
                 */
                DescribeIndexMetaOutcome DescribeIndexMeta(const Model::DescribeIndexMetaRequest &request);
                void DescribeIndexMetaAsync(const Model::DescribeIndexMetaRequest& request, const DescribeIndexMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIndexMetaOutcomeCallable DescribeIndexMetaCallable(const Model::DescribeIndexMetaRequest& request);

                /**
                 *查询用户该地域下符合条件的ES集群的日志
                 * @param req DescribeInstanceLogsRequest
                 * @return DescribeInstanceLogsOutcome
                 */
                DescribeInstanceLogsOutcome DescribeInstanceLogs(const Model::DescribeInstanceLogsRequest &request);
                void DescribeInstanceLogsAsync(const Model::DescribeInstanceLogsRequest& request, const DescribeInstanceLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceLogsOutcomeCallable DescribeInstanceLogsCallable(const Model::DescribeInstanceLogsRequest& request);

                /**
                 *查询实例指定条件下的操作记录
                 * @param req DescribeInstanceOperationsRequest
                 * @return DescribeInstanceOperationsOutcome
                 */
                DescribeInstanceOperationsOutcome DescribeInstanceOperations(const Model::DescribeInstanceOperationsRequest &request);
                void DescribeInstanceOperationsAsync(const Model::DescribeInstanceOperationsRequest& request, const DescribeInstanceOperationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceOperationsOutcomeCallable DescribeInstanceOperationsCallable(const Model::DescribeInstanceOperationsRequest& request);

                /**
                 *查询实例插件列表
                 * @param req DescribeInstancePluginListRequest
                 * @return DescribeInstancePluginListOutcome
                 */
                DescribeInstancePluginListOutcome DescribeInstancePluginList(const Model::DescribeInstancePluginListRequest &request);
                void DescribeInstancePluginListAsync(const Model::DescribeInstancePluginListRequest& request, const DescribeInstancePluginListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancePluginListOutcomeCallable DescribeInstancePluginListCallable(const Model::DescribeInstancePluginListRequest& request);

                /**
                 *查询用户该地域下符合条件的所有实例
                 * @param req DescribeInstancesRequest
                 * @return DescribeInstancesOutcome
                 */
                DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest &request);
                void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request);

                /**
                 *查询用户该地域下符合条件的Logstash实例的日志
                 * @param req DescribeLogstashInstanceLogsRequest
                 * @return DescribeLogstashInstanceLogsOutcome
                 */
                DescribeLogstashInstanceLogsOutcome DescribeLogstashInstanceLogs(const Model::DescribeLogstashInstanceLogsRequest &request);
                void DescribeLogstashInstanceLogsAsync(const Model::DescribeLogstashInstanceLogsRequest& request, const DescribeLogstashInstanceLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogstashInstanceLogsOutcomeCallable DescribeLogstashInstanceLogsCallable(const Model::DescribeLogstashInstanceLogsRequest& request);

                /**
                 *查询实例指定条件下的操作记录
                 * @param req DescribeLogstashInstanceOperationsRequest
                 * @return DescribeLogstashInstanceOperationsOutcome
                 */
                DescribeLogstashInstanceOperationsOutcome DescribeLogstashInstanceOperations(const Model::DescribeLogstashInstanceOperationsRequest &request);
                void DescribeLogstashInstanceOperationsAsync(const Model::DescribeLogstashInstanceOperationsRequest& request, const DescribeLogstashInstanceOperationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogstashInstanceOperationsOutcomeCallable DescribeLogstashInstanceOperationsCallable(const Model::DescribeLogstashInstanceOperationsRequest& request);

                /**
                 *查询用户该地域下符合条件的所有Logstash实例
                 * @param req DescribeLogstashInstancesRequest
                 * @return DescribeLogstashInstancesOutcome
                 */
                DescribeLogstashInstancesOutcome DescribeLogstashInstances(const Model::DescribeLogstashInstancesRequest &request);
                void DescribeLogstashInstancesAsync(const Model::DescribeLogstashInstancesRequest& request, const DescribeLogstashInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogstashInstancesOutcomeCallable DescribeLogstashInstancesCallable(const Model::DescribeLogstashInstancesRequest& request);

                /**
                 *用于获取Logstash实例管道列表
                 * @param req DescribeLogstashPipelinesRequest
                 * @return DescribeLogstashPipelinesOutcome
                 */
                DescribeLogstashPipelinesOutcome DescribeLogstashPipelines(const Model::DescribeLogstashPipelinesRequest &request);
                void DescribeLogstashPipelinesAsync(const Model::DescribeLogstashPipelinesRequest& request, const DescribeLogstashPipelinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogstashPipelinesOutcomeCallable DescribeLogstashPipelinesCallable(const Model::DescribeLogstashPipelinesRequest& request);

                /**
                 *Serverless获取索引列表
                 * @param req DescribeServerlessInstancesRequest
                 * @return DescribeServerlessInstancesOutcome
                 */
                DescribeServerlessInstancesOutcome DescribeServerlessInstances(const Model::DescribeServerlessInstancesRequest &request);
                void DescribeServerlessInstancesAsync(const Model::DescribeServerlessInstancesRequest& request, const DescribeServerlessInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServerlessInstancesOutcomeCallable DescribeServerlessInstancesCallable(const Model::DescribeServerlessInstancesRequest& request);

                /**
                 *获取serverless实例对应指标，获取space维度时不需要传入indexid，获取index时不需要传入spaceid
获取一段时间时间范围内的指标数据
                 * @param req DescribeServerlessMetricsRequest
                 * @return DescribeServerlessMetricsOutcome
                 */
                DescribeServerlessMetricsOutcome DescribeServerlessMetrics(const Model::DescribeServerlessMetricsRequest &request);
                void DescribeServerlessMetricsAsync(const Model::DescribeServerlessMetricsRequest& request, const DescribeServerlessMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServerlessMetricsOutcomeCallable DescribeServerlessMetricsCallable(const Model::DescribeServerlessMetricsRequest& request);

                /**
                 *查看Serverless空间子用户
                 * @param req DescribeServerlessSpaceUserRequest
                 * @return DescribeServerlessSpaceUserOutcome
                 */
                DescribeServerlessSpaceUserOutcome DescribeServerlessSpaceUser(const Model::DescribeServerlessSpaceUserRequest &request);
                void DescribeServerlessSpaceUserAsync(const Model::DescribeServerlessSpaceUserRequest& request, const DescribeServerlessSpaceUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServerlessSpaceUserOutcomeCallable DescribeServerlessSpaceUserCallable(const Model::DescribeServerlessSpaceUserRequest& request);

                /**
                 *获取Serverless索引空间列表
                 * @param req DescribeServerlessSpacesRequest
                 * @return DescribeServerlessSpacesOutcome
                 */
                DescribeServerlessSpacesOutcome DescribeServerlessSpaces(const Model::DescribeServerlessSpacesRequest &request);
                void DescribeServerlessSpacesAsync(const Model::DescribeServerlessSpacesRequest& request, const DescribeServerlessSpacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServerlessSpacesOutcomeCallable DescribeServerlessSpacesCallable(const Model::DescribeServerlessSpacesRequest& request);

                /**
                 *space维度的kibana获取登录token
                 * @param req DescribeSpaceKibanaToolsRequest
                 * @return DescribeSpaceKibanaToolsOutcome
                 */
                DescribeSpaceKibanaToolsOutcome DescribeSpaceKibanaTools(const Model::DescribeSpaceKibanaToolsRequest &request);
                void DescribeSpaceKibanaToolsAsync(const Model::DescribeSpaceKibanaToolsRequest& request, const DescribeSpaceKibanaToolsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSpaceKibanaToolsOutcomeCallable DescribeSpaceKibanaToolsCallable(const Model::DescribeSpaceKibanaToolsRequest& request);

                /**
                 *查询快照信息接口
                 * @param req DescribeUserCosSnapshotListRequest
                 * @return DescribeUserCosSnapshotListOutcome
                 */
                DescribeUserCosSnapshotListOutcome DescribeUserCosSnapshotList(const Model::DescribeUserCosSnapshotListRequest &request);
                void DescribeUserCosSnapshotListAsync(const Model::DescribeUserCosSnapshotListRequest& request, const DescribeUserCosSnapshotListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserCosSnapshotListOutcomeCallable DescribeUserCosSnapshotListCallable(const Model::DescribeUserCosSnapshotListRequest& request);

                /**
                 *查询集群各视图数据，包括集群维度、节点维度、Kibana维度
                 * @param req DescribeViewsRequest
                 * @return DescribeViewsOutcome
                 */
                DescribeViewsOutcome DescribeViews(const Model::DescribeViewsRequest &request);
                void DescribeViewsAsync(const Model::DescribeViewsRequest& request, const DescribeViewsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeViewsOutcomeCallable DescribeViewsCallable(const Model::DescribeViewsRequest& request);

                /**
                 *智能运维诊断集群
                 * @param req DiagnoseInstanceRequest
                 * @return DiagnoseInstanceOutcome
                 */
                DiagnoseInstanceOutcome DiagnoseInstance(const Model::DiagnoseInstanceRequest &request);
                void DiagnoseInstanceAsync(const Model::DiagnoseInstanceRequest& request, const DiagnoseInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DiagnoseInstanceOutcomeCallable DiagnoseInstanceCallable(const Model::DiagnoseInstanceRequest& request);

                /**
                 *查看智能运维配置
                 * @param req GetDiagnoseSettingsRequest
                 * @return GetDiagnoseSettingsOutcome
                 */
                GetDiagnoseSettingsOutcome GetDiagnoseSettings(const Model::GetDiagnoseSettingsRequest &request);
                void GetDiagnoseSettingsAsync(const Model::GetDiagnoseSettingsRequest& request, const GetDiagnoseSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDiagnoseSettingsOutcomeCallable GetDiagnoseSettingsCallable(const Model::GetDiagnoseSettingsRequest& request);

                /**
                 *获取接收客户端请求的节点类型
                 * @param req GetRequestTargetNodeTypesRequest
                 * @return GetRequestTargetNodeTypesOutcome
                 */
                GetRequestTargetNodeTypesOutcome GetRequestTargetNodeTypes(const Model::GetRequestTargetNodeTypesRequest &request);
                void GetRequestTargetNodeTypesAsync(const Model::GetRequestTargetNodeTypesRequest& request, const GetRequestTargetNodeTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetRequestTargetNodeTypesOutcomeCallable GetRequestTargetNodeTypesCallable(const Model::GetRequestTargetNodeTypesRequest& request);

                /**
                 *集群续费询价接口，续费前通过调用该接口，可获取集群续费的价格。
                 * @param req InquirePriceRenewInstanceRequest
                 * @return InquirePriceRenewInstanceOutcome
                 */
                InquirePriceRenewInstanceOutcome InquirePriceRenewInstance(const Model::InquirePriceRenewInstanceRequest &request);
                void InquirePriceRenewInstanceAsync(const Model::InquirePriceRenewInstanceRequest& request, const InquirePriceRenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquirePriceRenewInstanceOutcomeCallable InquirePriceRenewInstanceCallable(const Model::InquirePriceRenewInstanceRequest& request);

                /**
                 *ES集群安装模型接口
                 * @param req InstallInstanceModelRequest
                 * @return InstallInstanceModelOutcome
                 */
                InstallInstanceModelOutcome InstallInstanceModel(const Model::InstallInstanceModelRequest &request);
                void InstallInstanceModelAsync(const Model::InstallInstanceModelRequest& request, const InstallInstanceModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InstallInstanceModelOutcomeCallable InstallInstanceModelCallable(const Model::InstallInstanceModelRequest& request);

                /**
                 *修改绑定VIP的安全组，传安全组id列表
                 * @param req ModifyEsVipSecurityGroupRequest
                 * @return ModifyEsVipSecurityGroupOutcome
                 */
                ModifyEsVipSecurityGroupOutcome ModifyEsVipSecurityGroup(const Model::ModifyEsVipSecurityGroupRequest &request);
                void ModifyEsVipSecurityGroupAsync(const Model::ModifyEsVipSecurityGroupRequest& request, const ModifyEsVipSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEsVipSecurityGroupOutcomeCallable ModifyEsVipSecurityGroupCallable(const Model::ModifyEsVipSecurityGroupRequest& request);

                /**
                 *重启ES集群实例(用于系统版本更新等操作)
                 * @param req RestartInstanceRequest
                 * @return RestartInstanceOutcome
                 */
                RestartInstanceOutcome RestartInstance(const Model::RestartInstanceRequest &request);
                void RestartInstanceAsync(const Model::RestartInstanceRequest& request, const RestartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestartInstanceOutcomeCallable RestartInstanceCallable(const Model::RestartInstanceRequest& request);

                /**
                 *重启Kibana
                 * @param req RestartKibanaRequest
                 * @return RestartKibanaOutcome
                 */
                RestartKibanaOutcome RestartKibana(const Model::RestartKibanaRequest &request);
                void RestartKibanaAsync(const Model::RestartKibanaRequest& request, const RestartKibanaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestartKibanaOutcomeCallable RestartKibanaCallable(const Model::RestartKibanaRequest& request);

                /**
                 *用于重启Logstash实例
                 * @param req RestartLogstashInstanceRequest
                 * @return RestartLogstashInstanceOutcome
                 */
                RestartLogstashInstanceOutcome RestartLogstashInstance(const Model::RestartLogstashInstanceRequest &request);
                void RestartLogstashInstanceAsync(const Model::RestartLogstashInstanceRequest& request, const RestartLogstashInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestartLogstashInstanceOutcomeCallable RestartLogstashInstanceCallable(const Model::RestartLogstashInstanceRequest& request);

                /**
                 *用于重启集群节点
                 * @param req RestartNodesRequest
                 * @return RestartNodesOutcome
                 */
                RestartNodesOutcome RestartNodes(const Model::RestartNodesRequest &request);
                void RestartNodesAsync(const Model::RestartNodesRequest& request, const RestartNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestartNodesOutcomeCallable RestartNodesCallable(const Model::RestartNodesRequest& request);

                /**
                 *快照备份恢复，从仓库中恢复快照到集群中
                 * @param req RestoreClusterSnapshotRequest
                 * @return RestoreClusterSnapshotOutcome
                 */
                RestoreClusterSnapshotOutcome RestoreClusterSnapshot(const Model::RestoreClusterSnapshotRequest &request);
                void RestoreClusterSnapshotAsync(const Model::RestoreClusterSnapshotRequest& request, const RestoreClusterSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestoreClusterSnapshotOutcomeCallable RestoreClusterSnapshotCallable(const Model::RestoreClusterSnapshotRequest& request);

                /**
                 *用于下发并且部署管道
                 * @param req SaveAndDeployLogstashPipelineRequest
                 * @return SaveAndDeployLogstashPipelineOutcome
                 */
                SaveAndDeployLogstashPipelineOutcome SaveAndDeployLogstashPipeline(const Model::SaveAndDeployLogstashPipelineRequest &request);
                void SaveAndDeployLogstashPipelineAsync(const Model::SaveAndDeployLogstashPipelineRequest& request, const SaveAndDeployLogstashPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SaveAndDeployLogstashPipelineOutcomeCallable SaveAndDeployLogstashPipelineCallable(const Model::SaveAndDeployLogstashPipelineRequest& request);

                /**
                 *用于启动Logstash管道
                 * @param req StartLogstashPipelinesRequest
                 * @return StartLogstashPipelinesOutcome
                 */
                StartLogstashPipelinesOutcome StartLogstashPipelines(const Model::StartLogstashPipelinesRequest &request);
                void StartLogstashPipelinesAsync(const Model::StartLogstashPipelinesRequest& request, const StartLogstashPipelinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartLogstashPipelinesOutcomeCallable StartLogstashPipelinesCallable(const Model::StartLogstashPipelinesRequest& request);

                /**
                 *用于批量停止Logstash管道
                 * @param req StopLogstashPipelinesRequest
                 * @return StopLogstashPipelinesOutcome
                 */
                StopLogstashPipelinesOutcome StopLogstashPipelines(const Model::StopLogstashPipelinesRequest &request);
                void StopLogstashPipelinesAsync(const Model::StopLogstashPipelinesRequest& request, const StopLogstashPipelinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopLogstashPipelinesOutcomeCallable StopLogstashPipelinesCallable(const Model::StopLogstashPipelinesRequest& request);

                /**
                 *更新智能运维配置
                 * @param req UpdateDiagnoseSettingsRequest
                 * @return UpdateDiagnoseSettingsOutcome
                 */
                UpdateDiagnoseSettingsOutcome UpdateDiagnoseSettings(const Model::UpdateDiagnoseSettingsRequest &request);
                void UpdateDiagnoseSettingsAsync(const Model::UpdateDiagnoseSettingsRequest& request, const UpdateDiagnoseSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateDiagnoseSettingsOutcomeCallable UpdateDiagnoseSettingsCallable(const Model::UpdateDiagnoseSettingsRequest& request);

                /**
                 *更新ES集群词典
                 * @param req UpdateDictionariesRequest
                 * @return UpdateDictionariesOutcome
                 */
                UpdateDictionariesOutcome UpdateDictionaries(const Model::UpdateDictionariesRequest &request);
                void UpdateDictionariesAsync(const Model::UpdateDictionariesRequest& request, const UpdateDictionariesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateDictionariesOutcomeCallable UpdateDictionariesCallable(const Model::UpdateDictionariesRequest& request);

                /**
                 *更新索引
                 * @param req UpdateIndexRequest
                 * @return UpdateIndexOutcome
                 */
                UpdateIndexOutcome UpdateIndex(const Model::UpdateIndexRequest &request);
                void UpdateIndexAsync(const Model::UpdateIndexRequest& request, const UpdateIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateIndexOutcomeCallable UpdateIndexCallable(const Model::UpdateIndexRequest& request);

                /**
                 *对集群进行节点规格变更，修改实例名称，修改配置，重置密码， 添加Kibana黑白名单等操作。参数中InstanceId为必传参数，ForceRestart为选填参数，剩余参数传递组合及含义如下：
- InstanceName：修改实例名称(仅用于标识实例)
- NodeInfoList: 修改节点配置（节点横向扩缩容，纵向扩缩容，增加主节点，增加冷节点等）
- EsConfig：修改集群配置
- Password：修改默认用户elastic的密码
- EsAcl：修改访问控制列表
- CosBackUp: 设置集群COS自动备份信息
以上参数组合只能传递一种，多传或少传均会导致请求失败
                 * @param req UpdateInstanceRequest
                 * @return UpdateInstanceOutcome
                 */
                UpdateInstanceOutcome UpdateInstance(const Model::UpdateInstanceRequest &request);
                void UpdateInstanceAsync(const Model::UpdateInstanceRequest& request, const UpdateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateInstanceOutcomeCallable UpdateInstanceCallable(const Model::UpdateInstanceRequest& request);

                /**
                 *更新实例Jdk配置
                 * @param req UpdateJdkRequest
                 * @return UpdateJdkOutcome
                 */
                UpdateJdkOutcome UpdateJdk(const Model::UpdateJdkRequest &request);
                void UpdateJdkAsync(const Model::UpdateJdkRequest& request, const UpdateJdkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateJdkOutcomeCallable UpdateJdkCallable(const Model::UpdateJdkRequest& request);

                /**
                 *对集群进行节点规格变更，修改实例名称，修改配置，等操作。参数中InstanceId为必传参数，参数传递组合及含义如下：
- InstanceName：修改实例名称(仅用于标识实例)
- NodeNum: 修改实例节点数量（节点横向扩缩容，纵向扩缩容等）
- YMLConfig: 修改实例YML配置
- BindedES：修改绑定的ES集群配置
以上参数组合只能传递一种，多传或少传均会导致请求失败
                 * @param req UpdateLogstashInstanceRequest
                 * @return UpdateLogstashInstanceOutcome
                 */
                UpdateLogstashInstanceOutcome UpdateLogstashInstance(const Model::UpdateLogstashInstanceRequest &request);
                void UpdateLogstashInstanceAsync(const Model::UpdateLogstashInstanceRequest& request, const UpdateLogstashInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateLogstashInstanceOutcomeCallable UpdateLogstashInstanceCallable(const Model::UpdateLogstashInstanceRequest& request);

                /**
                 *用于更新管道描述信息
                 * @param req UpdateLogstashPipelineDescRequest
                 * @return UpdateLogstashPipelineDescOutcome
                 */
                UpdateLogstashPipelineDescOutcome UpdateLogstashPipelineDesc(const Model::UpdateLogstashPipelineDescRequest &request);
                void UpdateLogstashPipelineDescAsync(const Model::UpdateLogstashPipelineDescRequest& request, const UpdateLogstashPipelineDescAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateLogstashPipelineDescOutcomeCallable UpdateLogstashPipelineDescCallable(const Model::UpdateLogstashPipelineDescRequest& request);

                /**
                 *变更插件列表
                 * @param req UpdatePluginsRequest
                 * @return UpdatePluginsOutcome
                 */
                UpdatePluginsOutcome UpdatePlugins(const Model::UpdatePluginsRequest &request);
                void UpdatePluginsAsync(const Model::UpdatePluginsRequest& request, const UpdatePluginsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdatePluginsOutcomeCallable UpdatePluginsCallable(const Model::UpdatePluginsRequest& request);

                /**
                 *更新接收客户端请求的节点类型
                 * @param req UpdateRequestTargetNodeTypesRequest
                 * @return UpdateRequestTargetNodeTypesOutcome
                 */
                UpdateRequestTargetNodeTypesOutcome UpdateRequestTargetNodeTypes(const Model::UpdateRequestTargetNodeTypesRequest &request);
                void UpdateRequestTargetNodeTypesAsync(const Model::UpdateRequestTargetNodeTypesRequest& request, const UpdateRequestTargetNodeTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateRequestTargetNodeTypesOutcomeCallable UpdateRequestTargetNodeTypesCallable(const Model::UpdateRequestTargetNodeTypesRequest& request);

                /**
                 *更新Serverless索引
                 * @param req UpdateServerlessInstanceRequest
                 * @return UpdateServerlessInstanceOutcome
                 */
                UpdateServerlessInstanceOutcome UpdateServerlessInstance(const Model::UpdateServerlessInstanceRequest &request);
                void UpdateServerlessInstanceAsync(const Model::UpdateServerlessInstanceRequest& request, const UpdateServerlessInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateServerlessInstanceOutcomeCallable UpdateServerlessInstanceCallable(const Model::UpdateServerlessInstanceRequest& request);

                /**
                 *更新Serverless索引空间
                 * @param req UpdateServerlessSpaceRequest
                 * @return UpdateServerlessSpaceOutcome
                 */
                UpdateServerlessSpaceOutcome UpdateServerlessSpace(const Model::UpdateServerlessSpaceRequest &request);
                void UpdateServerlessSpaceAsync(const Model::UpdateServerlessSpaceRequest& request, const UpdateServerlessSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateServerlessSpaceOutcomeCallable UpdateServerlessSpaceCallable(const Model::UpdateServerlessSpaceRequest& request);

                /**
                 *升级ES集群版本
                 * @param req UpgradeInstanceRequest
                 * @return UpgradeInstanceOutcome
                 */
                UpgradeInstanceOutcome UpgradeInstance(const Model::UpgradeInstanceRequest &request);
                void UpgradeInstanceAsync(const Model::UpgradeInstanceRequest& request, const UpgradeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeInstanceOutcomeCallable UpgradeInstanceCallable(const Model::UpgradeInstanceRequest& request);

                /**
                 *升级ES商业特性
                 * @param req UpgradeLicenseRequest
                 * @return UpgradeLicenseOutcome
                 */
                UpgradeLicenseOutcome UpgradeLicense(const Model::UpgradeLicenseRequest &request);
                void UpgradeLicenseAsync(const Model::UpgradeLicenseRequest& request, const UpgradeLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeLicenseOutcomeCallable UpgradeLicenseCallable(const Model::UpgradeLicenseRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_ESCLIENT_H_
