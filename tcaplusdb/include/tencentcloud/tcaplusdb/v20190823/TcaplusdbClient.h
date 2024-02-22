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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_TCAPLUSDBCLIENT_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_TCAPLUSDBCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ClearTablesRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ClearTablesResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/CompareIdlFilesRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/CompareIdlFilesResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/CreateBackupRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/CreateBackupResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/CreateClusterRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/CreateClusterResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/CreateSnapshotsRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/CreateSnapshotsResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/CreateTableGroupRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/CreateTableGroupResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/CreateTablesRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/CreateTablesResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DeleteBackupRecordsRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DeleteBackupRecordsResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DeleteClusterRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DeleteClusterResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DeleteIdlFilesRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DeleteIdlFilesResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DeleteSnapshotsRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DeleteSnapshotsResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DeleteTableDataFlowRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DeleteTableDataFlowResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DeleteTableGroupRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DeleteTableGroupResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DeleteTableIndexRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DeleteTableIndexResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DeleteTablesRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DeleteTablesResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DescribeApplicationsRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DescribeApplicationsResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DescribeBackupRecordsRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DescribeBackupRecordsResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DescribeClusterTagsRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DescribeClusterTagsResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DescribeClustersRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DescribeClustersResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DescribeIdlFileInfosRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DescribeIdlFileInfosResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DescribeMachineRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DescribeMachineResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DescribeRegionsRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DescribeRegionsResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DescribeSnapshotsRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DescribeSnapshotsResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DescribeTableGroupTagsRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DescribeTableGroupTagsResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DescribeTableGroupsRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DescribeTableGroupsResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DescribeTableTagsRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DescribeTableTagsResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DescribeTablesRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DescribeTablesResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DescribeTablesInRecycleRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DescribeTablesInRecycleResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DescribeTasksRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DescribeTasksResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DescribeUinInWhitelistRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DescribeUinInWhitelistResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DisableRestProxyRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DisableRestProxyResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/EnableRestProxyRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/EnableRestProxyResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ImportSnapshotsRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ImportSnapshotsResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/MergeTablesDataRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/MergeTablesDataResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ModifyCensorshipRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ModifyCensorshipResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ModifyClusterMachineRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ModifyClusterMachineResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ModifyClusterNameRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ModifyClusterNameResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ModifyClusterPasswordRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ModifyClusterPasswordResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ModifyClusterTagsRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ModifyClusterTagsResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ModifySnapshotsRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ModifySnapshotsResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ModifyTableGroupNameRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ModifyTableGroupNameResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ModifyTableGroupTagsRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ModifyTableGroupTagsResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ModifyTableMemosRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ModifyTableMemosResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ModifyTableQuotasRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ModifyTableQuotasResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ModifyTableTagsRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ModifyTableTagsResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ModifyTablesRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ModifyTablesResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/RecoverRecycleTablesRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/RecoverRecycleTablesResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/RollbackTablesRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/RollbackTablesResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/SetBackupExpireRuleRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/SetBackupExpireRuleResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/SetTableDataFlowRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/SetTableDataFlowResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/SetTableIndexRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/SetTableIndexResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/UpdateApplyRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/UpdateApplyResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/VerifyIdlFilesRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/VerifyIdlFilesResponse.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            class TcaplusdbClient : public AbstractClient
            {
            public:
                TcaplusdbClient(const Credential &credential, const std::string &region);
                TcaplusdbClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ClearTablesResponse> ClearTablesOutcome;
                typedef std::future<ClearTablesOutcome> ClearTablesOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::ClearTablesRequest&, ClearTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ClearTablesAsyncHandler;
                typedef Outcome<Core::Error, Model::CompareIdlFilesResponse> CompareIdlFilesOutcome;
                typedef std::future<CompareIdlFilesOutcome> CompareIdlFilesOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::CompareIdlFilesRequest&, CompareIdlFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CompareIdlFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBackupResponse> CreateBackupOutcome;
                typedef std::future<CreateBackupOutcome> CreateBackupOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::CreateBackupRequest&, CreateBackupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBackupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClusterResponse> CreateClusterOutcome;
                typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::CreateClusterRequest&, CreateClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSnapshotsResponse> CreateSnapshotsOutcome;
                typedef std::future<CreateSnapshotsOutcome> CreateSnapshotsOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::CreateSnapshotsRequest&, CreateSnapshotsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSnapshotsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTableGroupResponse> CreateTableGroupOutcome;
                typedef std::future<CreateTableGroupOutcome> CreateTableGroupOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::CreateTableGroupRequest&, CreateTableGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTableGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTablesResponse> CreateTablesOutcome;
                typedef std::future<CreateTablesOutcome> CreateTablesOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::CreateTablesRequest&, CreateTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTablesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBackupRecordsResponse> DeleteBackupRecordsOutcome;
                typedef std::future<DeleteBackupRecordsOutcome> DeleteBackupRecordsOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::DeleteBackupRecordsRequest&, DeleteBackupRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBackupRecordsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteClusterResponse> DeleteClusterOutcome;
                typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::DeleteClusterRequest&, DeleteClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteIdlFilesResponse> DeleteIdlFilesOutcome;
                typedef std::future<DeleteIdlFilesOutcome> DeleteIdlFilesOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::DeleteIdlFilesRequest&, DeleteIdlFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIdlFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSnapshotsResponse> DeleteSnapshotsOutcome;
                typedef std::future<DeleteSnapshotsOutcome> DeleteSnapshotsOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::DeleteSnapshotsRequest&, DeleteSnapshotsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSnapshotsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTableDataFlowResponse> DeleteTableDataFlowOutcome;
                typedef std::future<DeleteTableDataFlowOutcome> DeleteTableDataFlowOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::DeleteTableDataFlowRequest&, DeleteTableDataFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTableDataFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTableGroupResponse> DeleteTableGroupOutcome;
                typedef std::future<DeleteTableGroupOutcome> DeleteTableGroupOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::DeleteTableGroupRequest&, DeleteTableGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTableGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTableIndexResponse> DeleteTableIndexOutcome;
                typedef std::future<DeleteTableIndexOutcome> DeleteTableIndexOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::DeleteTableIndexRequest&, DeleteTableIndexOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTableIndexAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTablesResponse> DeleteTablesOutcome;
                typedef std::future<DeleteTablesOutcome> DeleteTablesOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::DeleteTablesRequest&, DeleteTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTablesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationsResponse> DescribeApplicationsOutcome;
                typedef std::future<DescribeApplicationsOutcome> DescribeApplicationsOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::DescribeApplicationsRequest&, DescribeApplicationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupRecordsResponse> DescribeBackupRecordsOutcome;
                typedef std::future<DescribeBackupRecordsOutcome> DescribeBackupRecordsOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::DescribeBackupRecordsRequest&, DescribeBackupRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupRecordsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterTagsResponse> DescribeClusterTagsOutcome;
                typedef std::future<DescribeClusterTagsOutcome> DescribeClusterTagsOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::DescribeClusterTagsRequest&, DescribeClusterTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClustersResponse> DescribeClustersOutcome;
                typedef std::future<DescribeClustersOutcome> DescribeClustersOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::DescribeClustersRequest&, DescribeClustersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClustersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIdlFileInfosResponse> DescribeIdlFileInfosOutcome;
                typedef std::future<DescribeIdlFileInfosOutcome> DescribeIdlFileInfosOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::DescribeIdlFileInfosRequest&, DescribeIdlFileInfosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIdlFileInfosAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMachineResponse> DescribeMachineOutcome;
                typedef std::future<DescribeMachineOutcome> DescribeMachineOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::DescribeMachineRequest&, DescribeMachineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachineAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRegionsResponse> DescribeRegionsOutcome;
                typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::DescribeRegionsRequest&, DescribeRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSnapshotsResponse> DescribeSnapshotsOutcome;
                typedef std::future<DescribeSnapshotsOutcome> DescribeSnapshotsOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::DescribeSnapshotsRequest&, DescribeSnapshotsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTableGroupTagsResponse> DescribeTableGroupTagsOutcome;
                typedef std::future<DescribeTableGroupTagsOutcome> DescribeTableGroupTagsOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::DescribeTableGroupTagsRequest&, DescribeTableGroupTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTableGroupTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTableGroupsResponse> DescribeTableGroupsOutcome;
                typedef std::future<DescribeTableGroupsOutcome> DescribeTableGroupsOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::DescribeTableGroupsRequest&, DescribeTableGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTableGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTableTagsResponse> DescribeTableTagsOutcome;
                typedef std::future<DescribeTableTagsOutcome> DescribeTableTagsOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::DescribeTableTagsRequest&, DescribeTableTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTableTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTablesResponse> DescribeTablesOutcome;
                typedef std::future<DescribeTablesOutcome> DescribeTablesOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::DescribeTablesRequest&, DescribeTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTablesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTablesInRecycleResponse> DescribeTablesInRecycleOutcome;
                typedef std::future<DescribeTablesInRecycleOutcome> DescribeTablesInRecycleOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::DescribeTablesInRecycleRequest&, DescribeTablesInRecycleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTablesInRecycleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTasksResponse> DescribeTasksOutcome;
                typedef std::future<DescribeTasksOutcome> DescribeTasksOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::DescribeTasksRequest&, DescribeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUinInWhitelistResponse> DescribeUinInWhitelistOutcome;
                typedef std::future<DescribeUinInWhitelistOutcome> DescribeUinInWhitelistOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::DescribeUinInWhitelistRequest&, DescribeUinInWhitelistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUinInWhitelistAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableRestProxyResponse> DisableRestProxyOutcome;
                typedef std::future<DisableRestProxyOutcome> DisableRestProxyOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::DisableRestProxyRequest&, DisableRestProxyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableRestProxyAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableRestProxyResponse> EnableRestProxyOutcome;
                typedef std::future<EnableRestProxyOutcome> EnableRestProxyOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::EnableRestProxyRequest&, EnableRestProxyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableRestProxyAsyncHandler;
                typedef Outcome<Core::Error, Model::ImportSnapshotsResponse> ImportSnapshotsOutcome;
                typedef std::future<ImportSnapshotsOutcome> ImportSnapshotsOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::ImportSnapshotsRequest&, ImportSnapshotsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImportSnapshotsAsyncHandler;
                typedef Outcome<Core::Error, Model::MergeTablesDataResponse> MergeTablesDataOutcome;
                typedef std::future<MergeTablesDataOutcome> MergeTablesDataOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::MergeTablesDataRequest&, MergeTablesDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MergeTablesDataAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCensorshipResponse> ModifyCensorshipOutcome;
                typedef std::future<ModifyCensorshipOutcome> ModifyCensorshipOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::ModifyCensorshipRequest&, ModifyCensorshipOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCensorshipAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClusterMachineResponse> ModifyClusterMachineOutcome;
                typedef std::future<ModifyClusterMachineOutcome> ModifyClusterMachineOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::ModifyClusterMachineRequest&, ModifyClusterMachineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterMachineAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClusterNameResponse> ModifyClusterNameOutcome;
                typedef std::future<ModifyClusterNameOutcome> ModifyClusterNameOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::ModifyClusterNameRequest&, ModifyClusterNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterNameAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClusterPasswordResponse> ModifyClusterPasswordOutcome;
                typedef std::future<ModifyClusterPasswordOutcome> ModifyClusterPasswordOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::ModifyClusterPasswordRequest&, ModifyClusterPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClusterTagsResponse> ModifyClusterTagsOutcome;
                typedef std::future<ModifyClusterTagsOutcome> ModifyClusterTagsOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::ModifyClusterTagsRequest&, ModifyClusterTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySnapshotsResponse> ModifySnapshotsOutcome;
                typedef std::future<ModifySnapshotsOutcome> ModifySnapshotsOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::ModifySnapshotsRequest&, ModifySnapshotsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySnapshotsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTableGroupNameResponse> ModifyTableGroupNameOutcome;
                typedef std::future<ModifyTableGroupNameOutcome> ModifyTableGroupNameOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::ModifyTableGroupNameRequest&, ModifyTableGroupNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTableGroupNameAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTableGroupTagsResponse> ModifyTableGroupTagsOutcome;
                typedef std::future<ModifyTableGroupTagsOutcome> ModifyTableGroupTagsOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::ModifyTableGroupTagsRequest&, ModifyTableGroupTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTableGroupTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTableMemosResponse> ModifyTableMemosOutcome;
                typedef std::future<ModifyTableMemosOutcome> ModifyTableMemosOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::ModifyTableMemosRequest&, ModifyTableMemosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTableMemosAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTableQuotasResponse> ModifyTableQuotasOutcome;
                typedef std::future<ModifyTableQuotasOutcome> ModifyTableQuotasOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::ModifyTableQuotasRequest&, ModifyTableQuotasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTableQuotasAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTableTagsResponse> ModifyTableTagsOutcome;
                typedef std::future<ModifyTableTagsOutcome> ModifyTableTagsOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::ModifyTableTagsRequest&, ModifyTableTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTableTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTablesResponse> ModifyTablesOutcome;
                typedef std::future<ModifyTablesOutcome> ModifyTablesOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::ModifyTablesRequest&, ModifyTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTablesAsyncHandler;
                typedef Outcome<Core::Error, Model::RecoverRecycleTablesResponse> RecoverRecycleTablesOutcome;
                typedef std::future<RecoverRecycleTablesOutcome> RecoverRecycleTablesOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::RecoverRecycleTablesRequest&, RecoverRecycleTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecoverRecycleTablesAsyncHandler;
                typedef Outcome<Core::Error, Model::RollbackTablesResponse> RollbackTablesOutcome;
                typedef std::future<RollbackTablesOutcome> RollbackTablesOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::RollbackTablesRequest&, RollbackTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RollbackTablesAsyncHandler;
                typedef Outcome<Core::Error, Model::SetBackupExpireRuleResponse> SetBackupExpireRuleOutcome;
                typedef std::future<SetBackupExpireRuleOutcome> SetBackupExpireRuleOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::SetBackupExpireRuleRequest&, SetBackupExpireRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetBackupExpireRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::SetTableDataFlowResponse> SetTableDataFlowOutcome;
                typedef std::future<SetTableDataFlowOutcome> SetTableDataFlowOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::SetTableDataFlowRequest&, SetTableDataFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetTableDataFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::SetTableIndexResponse> SetTableIndexOutcome;
                typedef std::future<SetTableIndexOutcome> SetTableIndexOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::SetTableIndexRequest&, SetTableIndexOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetTableIndexAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateApplyResponse> UpdateApplyOutcome;
                typedef std::future<UpdateApplyOutcome> UpdateApplyOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::UpdateApplyRequest&, UpdateApplyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateApplyAsyncHandler;
                typedef Outcome<Core::Error, Model::VerifyIdlFilesResponse> VerifyIdlFilesOutcome;
                typedef std::future<VerifyIdlFilesOutcome> VerifyIdlFilesOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::VerifyIdlFilesRequest&, VerifyIdlFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VerifyIdlFilesAsyncHandler;



                /**
                 *根据给定的表信息，清除表数据。
                 * @param req ClearTablesRequest
                 * @return ClearTablesOutcome
                 */
                ClearTablesOutcome ClearTables(const Model::ClearTablesRequest &request);
                void ClearTablesAsync(const Model::ClearTablesRequest& request, const ClearTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ClearTablesOutcomeCallable ClearTablesCallable(const Model::ClearTablesRequest& request);

                /**
                 *选中目标表格，上传并校验改表文件，返回是否允许修改表格结构的结果。
                 * @param req CompareIdlFilesRequest
                 * @return CompareIdlFilesOutcome
                 */
                CompareIdlFilesOutcome CompareIdlFiles(const Model::CompareIdlFilesRequest &request);
                void CompareIdlFilesAsync(const Model::CompareIdlFilesRequest& request, const CompareIdlFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CompareIdlFilesOutcomeCallable CompareIdlFilesCallable(const Model::CompareIdlFilesRequest& request);

                /**
                 *用户创建备份任务
                 * @param req CreateBackupRequest
                 * @return CreateBackupOutcome
                 */
                CreateBackupOutcome CreateBackup(const Model::CreateBackupRequest &request);
                void CreateBackupAsync(const Model::CreateBackupRequest& request, const CreateBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBackupOutcomeCallable CreateBackupCallable(const Model::CreateBackupRequest& request);

                /**
                 *本接口用于创建TcaplusDB集群
                 * @param req CreateClusterRequest
                 * @return CreateClusterOutcome
                 */
                CreateClusterOutcome CreateCluster(const Model::CreateClusterRequest &request);
                void CreateClusterAsync(const Model::CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterOutcomeCallable CreateClusterCallable(const Model::CreateClusterRequest& request);

                /**
                 *构造表格过去时间点的快照
                 * @param req CreateSnapshotsRequest
                 * @return CreateSnapshotsOutcome
                 */
                CreateSnapshotsOutcome CreateSnapshots(const Model::CreateSnapshotsRequest &request);
                void CreateSnapshotsAsync(const Model::CreateSnapshotsRequest& request, const CreateSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSnapshotsOutcomeCallable CreateSnapshotsCallable(const Model::CreateSnapshotsRequest& request);

                /**
                 *在TcaplusDB集群下创建表格组
                 * @param req CreateTableGroupRequest
                 * @return CreateTableGroupOutcome
                 */
                CreateTableGroupOutcome CreateTableGroup(const Model::CreateTableGroupRequest &request);
                void CreateTableGroupAsync(const Model::CreateTableGroupRequest& request, const CreateTableGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTableGroupOutcomeCallable CreateTableGroupCallable(const Model::CreateTableGroupRequest& request);

                /**
                 *根据选择的IDL文件列表，批量创建表格
                 * @param req CreateTablesRequest
                 * @return CreateTablesOutcome
                 */
                CreateTablesOutcome CreateTables(const Model::CreateTablesRequest &request);
                void CreateTablesAsync(const Model::CreateTablesRequest& request, const CreateTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTablesOutcomeCallable CreateTablesCallable(const Model::CreateTablesRequest& request);

                /**
                 *删除手工备份
                 * @param req DeleteBackupRecordsRequest
                 * @return DeleteBackupRecordsOutcome
                 */
                DeleteBackupRecordsOutcome DeleteBackupRecords(const Model::DeleteBackupRecordsRequest &request);
                void DeleteBackupRecordsAsync(const Model::DeleteBackupRecordsRequest& request, const DeleteBackupRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBackupRecordsOutcomeCallable DeleteBackupRecordsCallable(const Model::DeleteBackupRecordsRequest& request);

                /**
                 *删除TcaplusDB集群，必须在集群所属所有资源（包括表格组，表）都已经释放的情况下才会成功。
                 * @param req DeleteClusterRequest
                 * @return DeleteClusterOutcome
                 */
                DeleteClusterOutcome DeleteCluster(const Model::DeleteClusterRequest &request);
                void DeleteClusterAsync(const Model::DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteClusterOutcomeCallable DeleteClusterCallable(const Model::DeleteClusterRequest& request);

                /**
                 *指定集群ID和待删除IDL文件的信息，删除目标文件，如果文件正在被表关联则删除失败。
                 * @param req DeleteIdlFilesRequest
                 * @return DeleteIdlFilesOutcome
                 */
                DeleteIdlFilesOutcome DeleteIdlFiles(const Model::DeleteIdlFilesRequest &request);
                void DeleteIdlFilesAsync(const Model::DeleteIdlFilesRequest& request, const DeleteIdlFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteIdlFilesOutcomeCallable DeleteIdlFilesCallable(const Model::DeleteIdlFilesRequest& request);

                /**
                 *删除表格的快照
                 * @param req DeleteSnapshotsRequest
                 * @return DeleteSnapshotsOutcome
                 */
                DeleteSnapshotsOutcome DeleteSnapshots(const Model::DeleteSnapshotsRequest &request);
                void DeleteSnapshotsAsync(const Model::DeleteSnapshotsRequest& request, const DeleteSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSnapshotsOutcomeCallable DeleteSnapshotsCallable(const Model::DeleteSnapshotsRequest& request);

                /**
                 *删除表格的数据订阅
                 * @param req DeleteTableDataFlowRequest
                 * @return DeleteTableDataFlowOutcome
                 */
                DeleteTableDataFlowOutcome DeleteTableDataFlow(const Model::DeleteTableDataFlowRequest &request);
                void DeleteTableDataFlowAsync(const Model::DeleteTableDataFlowRequest& request, const DeleteTableDataFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTableDataFlowOutcomeCallable DeleteTableDataFlowCallable(const Model::DeleteTableDataFlowRequest& request);

                /**
                 *删除表格组
                 * @param req DeleteTableGroupRequest
                 * @return DeleteTableGroupOutcome
                 */
                DeleteTableGroupOutcome DeleteTableGroup(const Model::DeleteTableGroupRequest &request);
                void DeleteTableGroupAsync(const Model::DeleteTableGroupRequest& request, const DeleteTableGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTableGroupOutcomeCallable DeleteTableGroupCallable(const Model::DeleteTableGroupRequest& request);

                /**
                 *删除表格的分布式索引
                 * @param req DeleteTableIndexRequest
                 * @return DeleteTableIndexOutcome
                 */
                DeleteTableIndexOutcome DeleteTableIndex(const Model::DeleteTableIndexRequest &request);
                void DeleteTableIndexAsync(const Model::DeleteTableIndexRequest& request, const DeleteTableIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTableIndexOutcomeCallable DeleteTableIndexCallable(const Model::DeleteTableIndexRequest& request);

                /**
                 *删除指定的表,第一次调用此接口代表将表移动至回收站，再次调用代表将此表格从回收站中彻底删除。
                 * @param req DeleteTablesRequest
                 * @return DeleteTablesOutcome
                 */
                DeleteTablesOutcome DeleteTables(const Model::DeleteTablesRequest &request);
                void DeleteTablesAsync(const Model::DeleteTablesRequest& request, const DeleteTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTablesOutcomeCallable DeleteTablesCallable(const Model::DeleteTablesRequest& request);

                /**
                 *获取审批管理的申请单
                 * @param req DescribeApplicationsRequest
                 * @return DescribeApplicationsOutcome
                 */
                DescribeApplicationsOutcome DescribeApplications(const Model::DescribeApplicationsRequest &request);
                void DescribeApplicationsAsync(const Model::DescribeApplicationsRequest& request, const DescribeApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationsOutcomeCallable DescribeApplicationsCallable(const Model::DescribeApplicationsRequest& request);

                /**
                 *查询备份记录

查询集群级别时， 将TableGroupId设置为"-1", 将TableName设置为"-1"
查询集群+表格组级别时， 将TableName设置为"-1"
查询集群+表格组+表格级别时， 都不能设置为“-1”
                 * @param req DescribeBackupRecordsRequest
                 * @return DescribeBackupRecordsOutcome
                 */
                DescribeBackupRecordsOutcome DescribeBackupRecords(const Model::DescribeBackupRecordsRequest &request);
                void DescribeBackupRecordsAsync(const Model::DescribeBackupRecordsRequest& request, const DescribeBackupRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupRecordsOutcomeCallable DescribeBackupRecordsCallable(const Model::DescribeBackupRecordsRequest& request);

                /**
                 *获取集群关联的标签列表
                 * @param req DescribeClusterTagsRequest
                 * @return DescribeClusterTagsOutcome
                 */
                DescribeClusterTagsOutcome DescribeClusterTags(const Model::DescribeClusterTagsRequest &request);
                void DescribeClusterTagsAsync(const Model::DescribeClusterTagsRequest& request, const DescribeClusterTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterTagsOutcomeCallable DescribeClusterTagsCallable(const Model::DescribeClusterTagsRequest& request);

                /**
                 *查询TcaplusDB集群列表，包含集群详细信息。
                 * @param req DescribeClustersRequest
                 * @return DescribeClustersOutcome
                 */
                DescribeClustersOutcome DescribeClusters(const Model::DescribeClustersRequest &request);
                void DescribeClustersAsync(const Model::DescribeClustersRequest& request, const DescribeClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClustersOutcomeCallable DescribeClustersCallable(const Model::DescribeClustersRequest& request);

                /**
                 *查询表描述文件详情
                 * @param req DescribeIdlFileInfosRequest
                 * @return DescribeIdlFileInfosOutcome
                 */
                DescribeIdlFileInfosOutcome DescribeIdlFileInfos(const Model::DescribeIdlFileInfosRequest &request);
                void DescribeIdlFileInfosAsync(const Model::DescribeIdlFileInfosRequest& request, const DescribeIdlFileInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIdlFileInfosOutcomeCallable DescribeIdlFileInfosCallable(const Model::DescribeIdlFileInfosRequest& request);

                /**
                 *查询独占集群可以申请的剩余机器
                 * @param req DescribeMachineRequest
                 * @return DescribeMachineOutcome
                 */
                DescribeMachineOutcome DescribeMachine(const Model::DescribeMachineRequest &request);
                void DescribeMachineAsync(const Model::DescribeMachineRequest& request, const DescribeMachineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMachineOutcomeCallable DescribeMachineCallable(const Model::DescribeMachineRequest& request);

                /**
                 *查询TcaplusDB服务支持的地域列表
                 * @param req DescribeRegionsRequest
                 * @return DescribeRegionsOutcome
                 */
                DescribeRegionsOutcome DescribeRegions(const Model::DescribeRegionsRequest &request);
                void DescribeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRegionsOutcomeCallable DescribeRegionsCallable(const Model::DescribeRegionsRequest& request);

                /**
                 *查询快照列表
                 * @param req DescribeSnapshotsRequest
                 * @return DescribeSnapshotsOutcome
                 */
                DescribeSnapshotsOutcome DescribeSnapshots(const Model::DescribeSnapshotsRequest &request);
                void DescribeSnapshotsAsync(const Model::DescribeSnapshotsRequest& request, const DescribeSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSnapshotsOutcomeCallable DescribeSnapshotsCallable(const Model::DescribeSnapshotsRequest& request);

                /**
                 *获取表格组关联的标签列表
                 * @param req DescribeTableGroupTagsRequest
                 * @return DescribeTableGroupTagsOutcome
                 */
                DescribeTableGroupTagsOutcome DescribeTableGroupTags(const Model::DescribeTableGroupTagsRequest &request);
                void DescribeTableGroupTagsAsync(const Model::DescribeTableGroupTagsRequest& request, const DescribeTableGroupTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTableGroupTagsOutcomeCallable DescribeTableGroupTagsCallable(const Model::DescribeTableGroupTagsRequest& request);

                /**
                 *查询表格组列表
                 * @param req DescribeTableGroupsRequest
                 * @return DescribeTableGroupsOutcome
                 */
                DescribeTableGroupsOutcome DescribeTableGroups(const Model::DescribeTableGroupsRequest &request);
                void DescribeTableGroupsAsync(const Model::DescribeTableGroupsRequest& request, const DescribeTableGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTableGroupsOutcomeCallable DescribeTableGroupsCallable(const Model::DescribeTableGroupsRequest& request);

                /**
                 *获取表格标签
                 * @param req DescribeTableTagsRequest
                 * @return DescribeTableTagsOutcome
                 */
                DescribeTableTagsOutcome DescribeTableTags(const Model::DescribeTableTagsRequest &request);
                void DescribeTableTagsAsync(const Model::DescribeTableTagsRequest& request, const DescribeTableTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTableTagsOutcomeCallable DescribeTableTagsCallable(const Model::DescribeTableTagsRequest& request);

                /**
                 *查询表详情
                 * @param req DescribeTablesRequest
                 * @return DescribeTablesOutcome
                 */
                DescribeTablesOutcome DescribeTables(const Model::DescribeTablesRequest &request);
                void DescribeTablesAsync(const Model::DescribeTablesRequest& request, const DescribeTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTablesOutcomeCallable DescribeTablesCallable(const Model::DescribeTablesRequest& request);

                /**
                 *查询回收站中的表详情
                 * @param req DescribeTablesInRecycleRequest
                 * @return DescribeTablesInRecycleOutcome
                 */
                DescribeTablesInRecycleOutcome DescribeTablesInRecycle(const Model::DescribeTablesInRecycleRequest &request);
                void DescribeTablesInRecycleAsync(const Model::DescribeTablesInRecycleRequest& request, const DescribeTablesInRecycleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTablesInRecycleOutcomeCallable DescribeTablesInRecycleCallable(const Model::DescribeTablesInRecycleRequest& request);

                /**
                 *查询任务列表
                 * @param req DescribeTasksRequest
                 * @return DescribeTasksOutcome
                 */
                DescribeTasksOutcome DescribeTasks(const Model::DescribeTasksRequest &request);
                void DescribeTasksAsync(const Model::DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTasksOutcomeCallable DescribeTasksCallable(const Model::DescribeTasksRequest& request);

                /**
                 *查询本用户是否在白名单中，控制是否能创建TDR类型的APP或表
                 * @param req DescribeUinInWhitelistRequest
                 * @return DescribeUinInWhitelistOutcome
                 */
                DescribeUinInWhitelistOutcome DescribeUinInWhitelist(const Model::DescribeUinInWhitelistRequest &request);
                void DescribeUinInWhitelistAsync(const Model::DescribeUinInWhitelistRequest& request, const DescribeUinInWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUinInWhitelistOutcomeCallable DescribeUinInWhitelistCallable(const Model::DescribeUinInWhitelistRequest& request);

                /**
                 *当restful api为关闭状态时，可以通过此接口关闭restful api
                 * @param req DisableRestProxyRequest
                 * @return DisableRestProxyOutcome
                 */
                DisableRestProxyOutcome DisableRestProxy(const Model::DisableRestProxyRequest &request);
                void DisableRestProxyAsync(const Model::DisableRestProxyRequest& request, const DisableRestProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableRestProxyOutcomeCallable DisableRestProxyCallable(const Model::DisableRestProxyRequest& request);

                /**
                 *当restful api为关闭状态时，可以通过此接口开启restful api。
                 * @param req EnableRestProxyRequest
                 * @return EnableRestProxyOutcome
                 */
                EnableRestProxyOutcome EnableRestProxy(const Model::EnableRestProxyRequest &request);
                void EnableRestProxyAsync(const Model::EnableRestProxyRequest& request, const EnableRestProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableRestProxyOutcomeCallable EnableRestProxyCallable(const Model::EnableRestProxyRequest& request);

                /**
                 *将快照数据导入到新表或当前表
                 * @param req ImportSnapshotsRequest
                 * @return ImportSnapshotsOutcome
                 */
                ImportSnapshotsOutcome ImportSnapshots(const Model::ImportSnapshotsRequest &request);
                void ImportSnapshotsAsync(const Model::ImportSnapshotsRequest& request, const ImportSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImportSnapshotsOutcomeCallable ImportSnapshotsCallable(const Model::ImportSnapshotsRequest& request);

                /**
                 *合并指定表格
                 * @param req MergeTablesDataRequest
                 * @return MergeTablesDataOutcome
                 */
                MergeTablesDataOutcome MergeTablesData(const Model::MergeTablesDataRequest &request);
                void MergeTablesDataAsync(const Model::MergeTablesDataRequest& request, const MergeTablesDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MergeTablesDataOutcomeCallable MergeTablesDataCallable(const Model::MergeTablesDataRequest& request);

                /**
                 *修改集群审批状态
                 * @param req ModifyCensorshipRequest
                 * @return ModifyCensorshipOutcome
                 */
                ModifyCensorshipOutcome ModifyCensorship(const Model::ModifyCensorshipRequest &request);
                void ModifyCensorshipAsync(const Model::ModifyCensorshipRequest& request, const ModifyCensorshipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCensorshipOutcomeCallable ModifyCensorshipCallable(const Model::ModifyCensorshipRequest& request);

                /**
                 *修改独占集群机器
                 * @param req ModifyClusterMachineRequest
                 * @return ModifyClusterMachineOutcome
                 */
                ModifyClusterMachineOutcome ModifyClusterMachine(const Model::ModifyClusterMachineRequest &request);
                void ModifyClusterMachineAsync(const Model::ModifyClusterMachineRequest& request, const ModifyClusterMachineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClusterMachineOutcomeCallable ModifyClusterMachineCallable(const Model::ModifyClusterMachineRequest& request);

                /**
                 *修改指定的集群名称
                 * @param req ModifyClusterNameRequest
                 * @return ModifyClusterNameOutcome
                 */
                ModifyClusterNameOutcome ModifyClusterName(const Model::ModifyClusterNameRequest &request);
                void ModifyClusterNameAsync(const Model::ModifyClusterNameRequest& request, const ModifyClusterNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClusterNameOutcomeCallable ModifyClusterNameCallable(const Model::ModifyClusterNameRequest& request);

                /**
                 *修改指定集群的密码，后台将在旧密码失效之前同时支持TcaplusDB SDK使用旧密码和新密码访问数据库。在旧密码失效之前不能提交新的密码修改请求，在旧密码失效之后不能提交修改旧密码过期时间的请求。
                 * @param req ModifyClusterPasswordRequest
                 * @return ModifyClusterPasswordOutcome
                 */
                ModifyClusterPasswordOutcome ModifyClusterPassword(const Model::ModifyClusterPasswordRequest &request);
                void ModifyClusterPasswordAsync(const Model::ModifyClusterPasswordRequest& request, const ModifyClusterPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClusterPasswordOutcomeCallable ModifyClusterPasswordCallable(const Model::ModifyClusterPasswordRequest& request);

                /**
                 *修改集群标签
                 * @param req ModifyClusterTagsRequest
                 * @return ModifyClusterTagsOutcome
                 */
                ModifyClusterTagsOutcome ModifyClusterTags(const Model::ModifyClusterTagsRequest &request);
                void ModifyClusterTagsAsync(const Model::ModifyClusterTagsRequest& request, const ModifyClusterTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClusterTagsOutcomeCallable ModifyClusterTagsCallable(const Model::ModifyClusterTagsRequest& request);

                /**
                 *修改表格快照的过期时间
                 * @param req ModifySnapshotsRequest
                 * @return ModifySnapshotsOutcome
                 */
                ModifySnapshotsOutcome ModifySnapshots(const Model::ModifySnapshotsRequest &request);
                void ModifySnapshotsAsync(const Model::ModifySnapshotsRequest& request, const ModifySnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySnapshotsOutcomeCallable ModifySnapshotsCallable(const Model::ModifySnapshotsRequest& request);

                /**
                 *修改TcaplusDB表格组名称
                 * @param req ModifyTableGroupNameRequest
                 * @return ModifyTableGroupNameOutcome
                 */
                ModifyTableGroupNameOutcome ModifyTableGroupName(const Model::ModifyTableGroupNameRequest &request);
                void ModifyTableGroupNameAsync(const Model::ModifyTableGroupNameRequest& request, const ModifyTableGroupNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTableGroupNameOutcomeCallable ModifyTableGroupNameCallable(const Model::ModifyTableGroupNameRequest& request);

                /**
                 *修改表格组标签
                 * @param req ModifyTableGroupTagsRequest
                 * @return ModifyTableGroupTagsOutcome
                 */
                ModifyTableGroupTagsOutcome ModifyTableGroupTags(const Model::ModifyTableGroupTagsRequest &request);
                void ModifyTableGroupTagsAsync(const Model::ModifyTableGroupTagsRequest& request, const ModifyTableGroupTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTableGroupTagsOutcomeCallable ModifyTableGroupTagsCallable(const Model::ModifyTableGroupTagsRequest& request);

                /**
                 *修改表备注信息
                 * @param req ModifyTableMemosRequest
                 * @return ModifyTableMemosOutcome
                 */
                ModifyTableMemosOutcome ModifyTableMemos(const Model::ModifyTableMemosRequest &request);
                void ModifyTableMemosAsync(const Model::ModifyTableMemosRequest& request, const ModifyTableMemosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTableMemosOutcomeCallable ModifyTableMemosCallable(const Model::ModifyTableMemosRequest& request);

                /**
                 *表格扩缩容
                 * @param req ModifyTableQuotasRequest
                 * @return ModifyTableQuotasOutcome
                 */
                ModifyTableQuotasOutcome ModifyTableQuotas(const Model::ModifyTableQuotasRequest &request);
                void ModifyTableQuotasAsync(const Model::ModifyTableQuotasRequest& request, const ModifyTableQuotasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTableQuotasOutcomeCallable ModifyTableQuotasCallable(const Model::ModifyTableQuotasRequest& request);

                /**
                 *修改表格标签
                 * @param req ModifyTableTagsRequest
                 * @return ModifyTableTagsOutcome
                 */
                ModifyTableTagsOutcome ModifyTableTags(const Model::ModifyTableTagsRequest &request);
                void ModifyTableTagsAsync(const Model::ModifyTableTagsRequest& request, const ModifyTableTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTableTagsOutcomeCallable ModifyTableTagsCallable(const Model::ModifyTableTagsRequest& request);

                /**
                 *根据用户选定的表定义IDL文件，批量修改指定的表
                 * @param req ModifyTablesRequest
                 * @return ModifyTablesOutcome
                 */
                ModifyTablesOutcome ModifyTables(const Model::ModifyTablesRequest &request);
                void ModifyTablesAsync(const Model::ModifyTablesRequest& request, const ModifyTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTablesOutcomeCallable ModifyTablesCallable(const Model::ModifyTablesRequest& request);

                /**
                 *恢复回收站中，用户自行删除的表。对欠费待释放的表无效。
                 * @param req RecoverRecycleTablesRequest
                 * @return RecoverRecycleTablesOutcome
                 */
                RecoverRecycleTablesOutcome RecoverRecycleTables(const Model::RecoverRecycleTablesRequest &request);
                void RecoverRecycleTablesAsync(const Model::RecoverRecycleTablesRequest& request, const RecoverRecycleTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecoverRecycleTablesOutcomeCallable RecoverRecycleTablesCallable(const Model::RecoverRecycleTablesRequest& request);

                /**
                 *表格数据回档
                 * @param req RollbackTablesRequest
                 * @return RollbackTablesOutcome
                 */
                RollbackTablesOutcome RollbackTables(const Model::RollbackTablesRequest &request);
                void RollbackTablesAsync(const Model::RollbackTablesRequest& request, const RollbackTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RollbackTablesOutcomeCallable RollbackTablesCallable(const Model::RollbackTablesRequest& request);

                /**
                 *新增、删除、修改备份过期策略， ClusterId必须为具体的集群Id（appid）
                 * @param req SetBackupExpireRuleRequest
                 * @return SetBackupExpireRuleOutcome
                 */
                SetBackupExpireRuleOutcome SetBackupExpireRule(const Model::SetBackupExpireRuleRequest &request);
                void SetBackupExpireRuleAsync(const Model::SetBackupExpireRuleRequest& request, const SetBackupExpireRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetBackupExpireRuleOutcomeCallable SetBackupExpireRuleCallable(const Model::SetBackupExpireRuleRequest& request);

                /**
                 *新增、修改表格数据订阅
                 * @param req SetTableDataFlowRequest
                 * @return SetTableDataFlowOutcome
                 */
                SetTableDataFlowOutcome SetTableDataFlow(const Model::SetTableDataFlowRequest &request);
                void SetTableDataFlowAsync(const Model::SetTableDataFlowRequest& request, const SetTableDataFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetTableDataFlowOutcomeCallable SetTableDataFlowCallable(const Model::SetTableDataFlowRequest& request);

                /**
                 *设置表格分布式索引
                 * @param req SetTableIndexRequest
                 * @return SetTableIndexOutcome
                 */
                SetTableIndexOutcome SetTableIndex(const Model::SetTableIndexRequest &request);
                void SetTableIndexAsync(const Model::SetTableIndexRequest& request, const SetTableIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetTableIndexOutcomeCallable SetTableIndexCallable(const Model::SetTableIndexRequest& request);

                /**
                 *更新申请单状态
                 * @param req UpdateApplyRequest
                 * @return UpdateApplyOutcome
                 */
                UpdateApplyOutcome UpdateApply(const Model::UpdateApplyRequest &request);
                void UpdateApplyAsync(const Model::UpdateApplyRequest& request, const UpdateApplyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateApplyOutcomeCallable UpdateApplyCallable(const Model::UpdateApplyRequest& request);

                /**
                 *上传并校验创建表格文件，返回校验合法的表格定义
                 * @param req VerifyIdlFilesRequest
                 * @return VerifyIdlFilesOutcome
                 */
                VerifyIdlFilesOutcome VerifyIdlFiles(const Model::VerifyIdlFilesRequest &request);
                void VerifyIdlFilesAsync(const Model::VerifyIdlFilesRequest& request, const VerifyIdlFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VerifyIdlFilesOutcomeCallable VerifyIdlFilesCallable(const Model::VerifyIdlFilesRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_TCAPLUSDBCLIENT_H_
