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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_GOOSEFSCLIENT_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_GOOSEFSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/goosefs/v20220519/model/AddCrossVpcSubnetSupportForClientNodeRequest.h>
#include <tencentcloud/goosefs/v20220519/model/AddCrossVpcSubnetSupportForClientNodeResponse.h>
#include <tencentcloud/goosefs/v20220519/model/AttachFileSystemBucketRequest.h>
#include <tencentcloud/goosefs/v20220519/model/AttachFileSystemBucketResponse.h>
#include <tencentcloud/goosefs/v20220519/model/BatchAddClientNodesRequest.h>
#include <tencentcloud/goosefs/v20220519/model/BatchAddClientNodesResponse.h>
#include <tencentcloud/goosefs/v20220519/model/BatchDeleteClientNodesRequest.h>
#include <tencentcloud/goosefs/v20220519/model/BatchDeleteClientNodesResponse.h>
#include <tencentcloud/goosefs/v20220519/model/BuildClientNodeMountCommandRequest.h>
#include <tencentcloud/goosefs/v20220519/model/BuildClientNodeMountCommandResponse.h>
#include <tencentcloud/goosefs/v20220519/model/CreateDataRepositoryTaskRequest.h>
#include <tencentcloud/goosefs/v20220519/model/CreateDataRepositoryTaskResponse.h>
#include <tencentcloud/goosefs/v20220519/model/CreateFileSystemRequest.h>
#include <tencentcloud/goosefs/v20220519/model/CreateFileSystemResponse.h>
#include <tencentcloud/goosefs/v20220519/model/CreateFilesetRequest.h>
#include <tencentcloud/goosefs/v20220519/model/CreateFilesetResponse.h>
#include <tencentcloud/goosefs/v20220519/model/DeleteCrossVpcSubnetSupportForClientNodeRequest.h>
#include <tencentcloud/goosefs/v20220519/model/DeleteCrossVpcSubnetSupportForClientNodeResponse.h>
#include <tencentcloud/goosefs/v20220519/model/DeleteFileSystemRequest.h>
#include <tencentcloud/goosefs/v20220519/model/DeleteFileSystemResponse.h>
#include <tencentcloud/goosefs/v20220519/model/DeleteFilesetRequest.h>
#include <tencentcloud/goosefs/v20220519/model/DeleteFilesetResponse.h>
#include <tencentcloud/goosefs/v20220519/model/DescribeClientNodesRequest.h>
#include <tencentcloud/goosefs/v20220519/model/DescribeClientNodesResponse.h>
#include <tencentcloud/goosefs/v20220519/model/DescribeClusterClientTokenRequest.h>
#include <tencentcloud/goosefs/v20220519/model/DescribeClusterClientTokenResponse.h>
#include <tencentcloud/goosefs/v20220519/model/DescribeClusterRoleTokenRequest.h>
#include <tencentcloud/goosefs/v20220519/model/DescribeClusterRoleTokenResponse.h>
#include <tencentcloud/goosefs/v20220519/model/DescribeClusterRolesRequest.h>
#include <tencentcloud/goosefs/v20220519/model/DescribeClusterRolesResponse.h>
#include <tencentcloud/goosefs/v20220519/model/DescribeDataRepositoryTaskStatusRequest.h>
#include <tencentcloud/goosefs/v20220519/model/DescribeDataRepositoryTaskStatusResponse.h>
#include <tencentcloud/goosefs/v20220519/model/DescribeFileSystemBucketsRequest.h>
#include <tencentcloud/goosefs/v20220519/model/DescribeFileSystemBucketsResponse.h>
#include <tencentcloud/goosefs/v20220519/model/DescribeFileSystemsRequest.h>
#include <tencentcloud/goosefs/v20220519/model/DescribeFileSystemsResponse.h>
#include <tencentcloud/goosefs/v20220519/model/DescribeFilesetGeneralConfigRequest.h>
#include <tencentcloud/goosefs/v20220519/model/DescribeFilesetGeneralConfigResponse.h>
#include <tencentcloud/goosefs/v20220519/model/DescribeFilesetsRequest.h>
#include <tencentcloud/goosefs/v20220519/model/DescribeFilesetsResponse.h>
#include <tencentcloud/goosefs/v20220519/model/DetachFileSystemBucketRequest.h>
#include <tencentcloud/goosefs/v20220519/model/DetachFileSystemBucketResponse.h>
#include <tencentcloud/goosefs/v20220519/model/ExpandCapacityRequest.h>
#include <tencentcloud/goosefs/v20220519/model/ExpandCapacityResponse.h>
#include <tencentcloud/goosefs/v20220519/model/ModifyDataRepositoryBandwidthRequest.h>
#include <tencentcloud/goosefs/v20220519/model/ModifyDataRepositoryBandwidthResponse.h>
#include <tencentcloud/goosefs/v20220519/model/QueryCrossVpcSubnetSupportForClientNodeRequest.h>
#include <tencentcloud/goosefs/v20220519/model/QueryCrossVpcSubnetSupportForClientNodeResponse.h>
#include <tencentcloud/goosefs/v20220519/model/QueryDataRepositoryBandwidthRequest.h>
#include <tencentcloud/goosefs/v20220519/model/QueryDataRepositoryBandwidthResponse.h>
#include <tencentcloud/goosefs/v20220519/model/UpdateFilesetRequest.h>
#include <tencentcloud/goosefs/v20220519/model/UpdateFilesetResponse.h>
#include <tencentcloud/goosefs/v20220519/model/UpdateFilesetGeneralConfigRequest.h>
#include <tencentcloud/goosefs/v20220519/model/UpdateFilesetGeneralConfigResponse.h>


namespace TencentCloud
{
    namespace Goosefs
    {
        namespace V20220519
        {
            class GoosefsClient : public AbstractClient
            {
            public:
                GoosefsClient(const Credential &credential, const std::string &region);
                GoosefsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddCrossVpcSubnetSupportForClientNodeResponse> AddCrossVpcSubnetSupportForClientNodeOutcome;
                typedef std::future<AddCrossVpcSubnetSupportForClientNodeOutcome> AddCrossVpcSubnetSupportForClientNodeOutcomeCallable;
                typedef std::function<void(const GoosefsClient*, const Model::AddCrossVpcSubnetSupportForClientNodeRequest&, AddCrossVpcSubnetSupportForClientNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddCrossVpcSubnetSupportForClientNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::AttachFileSystemBucketResponse> AttachFileSystemBucketOutcome;
                typedef std::future<AttachFileSystemBucketOutcome> AttachFileSystemBucketOutcomeCallable;
                typedef std::function<void(const GoosefsClient*, const Model::AttachFileSystemBucketRequest&, AttachFileSystemBucketOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachFileSystemBucketAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchAddClientNodesResponse> BatchAddClientNodesOutcome;
                typedef std::future<BatchAddClientNodesOutcome> BatchAddClientNodesOutcomeCallable;
                typedef std::function<void(const GoosefsClient*, const Model::BatchAddClientNodesRequest&, BatchAddClientNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchAddClientNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchDeleteClientNodesResponse> BatchDeleteClientNodesOutcome;
                typedef std::future<BatchDeleteClientNodesOutcome> BatchDeleteClientNodesOutcomeCallable;
                typedef std::function<void(const GoosefsClient*, const Model::BatchDeleteClientNodesRequest&, BatchDeleteClientNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeleteClientNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::BuildClientNodeMountCommandResponse> BuildClientNodeMountCommandOutcome;
                typedef std::future<BuildClientNodeMountCommandOutcome> BuildClientNodeMountCommandOutcomeCallable;
                typedef std::function<void(const GoosefsClient*, const Model::BuildClientNodeMountCommandRequest&, BuildClientNodeMountCommandOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BuildClientNodeMountCommandAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDataRepositoryTaskResponse> CreateDataRepositoryTaskOutcome;
                typedef std::future<CreateDataRepositoryTaskOutcome> CreateDataRepositoryTaskOutcomeCallable;
                typedef std::function<void(const GoosefsClient*, const Model::CreateDataRepositoryTaskRequest&, CreateDataRepositoryTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDataRepositoryTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFileSystemResponse> CreateFileSystemOutcome;
                typedef std::future<CreateFileSystemOutcome> CreateFileSystemOutcomeCallable;
                typedef std::function<void(const GoosefsClient*, const Model::CreateFileSystemRequest&, CreateFileSystemOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFileSystemAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFilesetResponse> CreateFilesetOutcome;
                typedef std::future<CreateFilesetOutcome> CreateFilesetOutcomeCallable;
                typedef std::function<void(const GoosefsClient*, const Model::CreateFilesetRequest&, CreateFilesetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFilesetAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCrossVpcSubnetSupportForClientNodeResponse> DeleteCrossVpcSubnetSupportForClientNodeOutcome;
                typedef std::future<DeleteCrossVpcSubnetSupportForClientNodeOutcome> DeleteCrossVpcSubnetSupportForClientNodeOutcomeCallable;
                typedef std::function<void(const GoosefsClient*, const Model::DeleteCrossVpcSubnetSupportForClientNodeRequest&, DeleteCrossVpcSubnetSupportForClientNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCrossVpcSubnetSupportForClientNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteFileSystemResponse> DeleteFileSystemOutcome;
                typedef std::future<DeleteFileSystemOutcome> DeleteFileSystemOutcomeCallable;
                typedef std::function<void(const GoosefsClient*, const Model::DeleteFileSystemRequest&, DeleteFileSystemOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFileSystemAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteFilesetResponse> DeleteFilesetOutcome;
                typedef std::future<DeleteFilesetOutcome> DeleteFilesetOutcomeCallable;
                typedef std::function<void(const GoosefsClient*, const Model::DeleteFilesetRequest&, DeleteFilesetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFilesetAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClientNodesResponse> DescribeClientNodesOutcome;
                typedef std::future<DescribeClientNodesOutcome> DescribeClientNodesOutcomeCallable;
                typedef std::function<void(const GoosefsClient*, const Model::DescribeClientNodesRequest&, DescribeClientNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClientNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterClientTokenResponse> DescribeClusterClientTokenOutcome;
                typedef std::future<DescribeClusterClientTokenOutcome> DescribeClusterClientTokenOutcomeCallable;
                typedef std::function<void(const GoosefsClient*, const Model::DescribeClusterClientTokenRequest&, DescribeClusterClientTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterClientTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterRoleTokenResponse> DescribeClusterRoleTokenOutcome;
                typedef std::future<DescribeClusterRoleTokenOutcome> DescribeClusterRoleTokenOutcomeCallable;
                typedef std::function<void(const GoosefsClient*, const Model::DescribeClusterRoleTokenRequest&, DescribeClusterRoleTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterRoleTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterRolesResponse> DescribeClusterRolesOutcome;
                typedef std::future<DescribeClusterRolesOutcome> DescribeClusterRolesOutcomeCallable;
                typedef std::function<void(const GoosefsClient*, const Model::DescribeClusterRolesRequest&, DescribeClusterRolesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterRolesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataRepositoryTaskStatusResponse> DescribeDataRepositoryTaskStatusOutcome;
                typedef std::future<DescribeDataRepositoryTaskStatusOutcome> DescribeDataRepositoryTaskStatusOutcomeCallable;
                typedef std::function<void(const GoosefsClient*, const Model::DescribeDataRepositoryTaskStatusRequest&, DescribeDataRepositoryTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataRepositoryTaskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFileSystemBucketsResponse> DescribeFileSystemBucketsOutcome;
                typedef std::future<DescribeFileSystemBucketsOutcome> DescribeFileSystemBucketsOutcomeCallable;
                typedef std::function<void(const GoosefsClient*, const Model::DescribeFileSystemBucketsRequest&, DescribeFileSystemBucketsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFileSystemBucketsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFileSystemsResponse> DescribeFileSystemsOutcome;
                typedef std::future<DescribeFileSystemsOutcome> DescribeFileSystemsOutcomeCallable;
                typedef std::function<void(const GoosefsClient*, const Model::DescribeFileSystemsRequest&, DescribeFileSystemsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFileSystemsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFilesetGeneralConfigResponse> DescribeFilesetGeneralConfigOutcome;
                typedef std::future<DescribeFilesetGeneralConfigOutcome> DescribeFilesetGeneralConfigOutcomeCallable;
                typedef std::function<void(const GoosefsClient*, const Model::DescribeFilesetGeneralConfigRequest&, DescribeFilesetGeneralConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFilesetGeneralConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFilesetsResponse> DescribeFilesetsOutcome;
                typedef std::future<DescribeFilesetsOutcome> DescribeFilesetsOutcomeCallable;
                typedef std::function<void(const GoosefsClient*, const Model::DescribeFilesetsRequest&, DescribeFilesetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFilesetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DetachFileSystemBucketResponse> DetachFileSystemBucketOutcome;
                typedef std::future<DetachFileSystemBucketOutcome> DetachFileSystemBucketOutcomeCallable;
                typedef std::function<void(const GoosefsClient*, const Model::DetachFileSystemBucketRequest&, DetachFileSystemBucketOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachFileSystemBucketAsyncHandler;
                typedef Outcome<Core::Error, Model::ExpandCapacityResponse> ExpandCapacityOutcome;
                typedef std::future<ExpandCapacityOutcome> ExpandCapacityOutcomeCallable;
                typedef std::function<void(const GoosefsClient*, const Model::ExpandCapacityRequest&, ExpandCapacityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExpandCapacityAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDataRepositoryBandwidthResponse> ModifyDataRepositoryBandwidthOutcome;
                typedef std::future<ModifyDataRepositoryBandwidthOutcome> ModifyDataRepositoryBandwidthOutcomeCallable;
                typedef std::function<void(const GoosefsClient*, const Model::ModifyDataRepositoryBandwidthRequest&, ModifyDataRepositoryBandwidthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDataRepositoryBandwidthAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryCrossVpcSubnetSupportForClientNodeResponse> QueryCrossVpcSubnetSupportForClientNodeOutcome;
                typedef std::future<QueryCrossVpcSubnetSupportForClientNodeOutcome> QueryCrossVpcSubnetSupportForClientNodeOutcomeCallable;
                typedef std::function<void(const GoosefsClient*, const Model::QueryCrossVpcSubnetSupportForClientNodeRequest&, QueryCrossVpcSubnetSupportForClientNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryCrossVpcSubnetSupportForClientNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryDataRepositoryBandwidthResponse> QueryDataRepositoryBandwidthOutcome;
                typedef std::future<QueryDataRepositoryBandwidthOutcome> QueryDataRepositoryBandwidthOutcomeCallable;
                typedef std::function<void(const GoosefsClient*, const Model::QueryDataRepositoryBandwidthRequest&, QueryDataRepositoryBandwidthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryDataRepositoryBandwidthAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateFilesetResponse> UpdateFilesetOutcome;
                typedef std::future<UpdateFilesetOutcome> UpdateFilesetOutcomeCallable;
                typedef std::function<void(const GoosefsClient*, const Model::UpdateFilesetRequest&, UpdateFilesetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFilesetAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateFilesetGeneralConfigResponse> UpdateFilesetGeneralConfigOutcome;
                typedef std::future<UpdateFilesetGeneralConfigOutcome> UpdateFilesetGeneralConfigOutcomeCallable;
                typedef std::function<void(const GoosefsClient*, const Model::UpdateFilesetGeneralConfigRequest&, UpdateFilesetGeneralConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFilesetGeneralConfigAsyncHandler;



                /**
                 *为客户端节点添加跨vpc或子网访问能力
                 * @param req AddCrossVpcSubnetSupportForClientNodeRequest
                 * @return AddCrossVpcSubnetSupportForClientNodeOutcome
                 */
                AddCrossVpcSubnetSupportForClientNodeOutcome AddCrossVpcSubnetSupportForClientNode(const Model::AddCrossVpcSubnetSupportForClientNodeRequest &request);
                void AddCrossVpcSubnetSupportForClientNodeAsync(const Model::AddCrossVpcSubnetSupportForClientNodeRequest& request, const AddCrossVpcSubnetSupportForClientNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddCrossVpcSubnetSupportForClientNodeOutcomeCallable AddCrossVpcSubnetSupportForClientNodeCallable(const Model::AddCrossVpcSubnetSupportForClientNodeRequest& request);

                /**
                 *为文件系统关联Bucket
                 * @param req AttachFileSystemBucketRequest
                 * @return AttachFileSystemBucketOutcome
                 */
                AttachFileSystemBucketOutcome AttachFileSystemBucket(const Model::AttachFileSystemBucketRequest &request);
                void AttachFileSystemBucketAsync(const Model::AttachFileSystemBucketRequest& request, const AttachFileSystemBucketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachFileSystemBucketOutcomeCallable AttachFileSystemBucketCallable(const Model::AttachFileSystemBucketRequest& request);

                /**
                 *批量添加客户端节点
                 * @param req BatchAddClientNodesRequest
                 * @return BatchAddClientNodesOutcome
                 */
                BatchAddClientNodesOutcome BatchAddClientNodes(const Model::BatchAddClientNodesRequest &request);
                void BatchAddClientNodesAsync(const Model::BatchAddClientNodesRequest& request, const BatchAddClientNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchAddClientNodesOutcomeCallable BatchAddClientNodesCallable(const Model::BatchAddClientNodesRequest& request);

                /**
                 *批量删除客户端节点
                 * @param req BatchDeleteClientNodesRequest
                 * @return BatchDeleteClientNodesOutcome
                 */
                BatchDeleteClientNodesOutcome BatchDeleteClientNodes(const Model::BatchDeleteClientNodesRequest &request);
                void BatchDeleteClientNodesAsync(const Model::BatchDeleteClientNodesRequest& request, const BatchDeleteClientNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchDeleteClientNodesOutcomeCallable BatchDeleteClientNodesCallable(const Model::BatchDeleteClientNodesRequest& request);

                /**
                 *生成客户端的挂载命令
                 * @param req BuildClientNodeMountCommandRequest
                 * @return BuildClientNodeMountCommandOutcome
                 */
                BuildClientNodeMountCommandOutcome BuildClientNodeMountCommand(const Model::BuildClientNodeMountCommandRequest &request);
                void BuildClientNodeMountCommandAsync(const Model::BuildClientNodeMountCommandRequest& request, const BuildClientNodeMountCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BuildClientNodeMountCommandOutcomeCallable BuildClientNodeMountCommandCallable(const Model::BuildClientNodeMountCommandRequest& request);

                /**
                 *创建数据流通任务,包括从将文件系统的数据上传到存储桶下, 以及从存储桶下载到文件系统里。
                 * @param req CreateDataRepositoryTaskRequest
                 * @return CreateDataRepositoryTaskOutcome
                 */
                CreateDataRepositoryTaskOutcome CreateDataRepositoryTask(const Model::CreateDataRepositoryTaskRequest &request);
                void CreateDataRepositoryTaskAsync(const Model::CreateDataRepositoryTaskRequest& request, const CreateDataRepositoryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDataRepositoryTaskOutcomeCallable CreateDataRepositoryTaskCallable(const Model::CreateDataRepositoryTaskRequest& request);

                /**
                 *创建文件系统
                 * @param req CreateFileSystemRequest
                 * @return CreateFileSystemOutcome
                 */
                CreateFileSystemOutcome CreateFileSystem(const Model::CreateFileSystemRequest &request);
                void CreateFileSystemAsync(const Model::CreateFileSystemRequest& request, const CreateFileSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFileSystemOutcomeCallable CreateFileSystemCallable(const Model::CreateFileSystemRequest& request);

                /**
                 *创建Fileset
                 * @param req CreateFilesetRequest
                 * @return CreateFilesetOutcome
                 */
                CreateFilesetOutcome CreateFileset(const Model::CreateFilesetRequest &request);
                void CreateFilesetAsync(const Model::CreateFilesetRequest& request, const CreateFilesetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFilesetOutcomeCallable CreateFilesetCallable(const Model::CreateFilesetRequest& request);

                /**
                 *为客户端节点删除跨vpc子网访问能力
                 * @param req DeleteCrossVpcSubnetSupportForClientNodeRequest
                 * @return DeleteCrossVpcSubnetSupportForClientNodeOutcome
                 */
                DeleteCrossVpcSubnetSupportForClientNodeOutcome DeleteCrossVpcSubnetSupportForClientNode(const Model::DeleteCrossVpcSubnetSupportForClientNodeRequest &request);
                void DeleteCrossVpcSubnetSupportForClientNodeAsync(const Model::DeleteCrossVpcSubnetSupportForClientNodeRequest& request, const DeleteCrossVpcSubnetSupportForClientNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCrossVpcSubnetSupportForClientNodeOutcomeCallable DeleteCrossVpcSubnetSupportForClientNodeCallable(const Model::DeleteCrossVpcSubnetSupportForClientNodeRequest& request);

                /**
                 *删除文件系统
                 * @param req DeleteFileSystemRequest
                 * @return DeleteFileSystemOutcome
                 */
                DeleteFileSystemOutcome DeleteFileSystem(const Model::DeleteFileSystemRequest &request);
                void DeleteFileSystemAsync(const Model::DeleteFileSystemRequest& request, const DeleteFileSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteFileSystemOutcomeCallable DeleteFileSystemCallable(const Model::DeleteFileSystemRequest& request);

                /**
                 *删除Fileset
                 * @param req DeleteFilesetRequest
                 * @return DeleteFilesetOutcome
                 */
                DeleteFilesetOutcome DeleteFileset(const Model::DeleteFilesetRequest &request);
                void DeleteFilesetAsync(const Model::DeleteFilesetRequest& request, const DeleteFilesetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteFilesetOutcomeCallable DeleteFilesetCallable(const Model::DeleteFilesetRequest& request);

                /**
                 *列出集群中所有的客户端节点
                 * @param req DescribeClientNodesRequest
                 * @return DescribeClientNodesOutcome
                 */
                DescribeClientNodesOutcome DescribeClientNodes(const Model::DescribeClientNodesRequest &request);
                void DescribeClientNodesAsync(const Model::DescribeClientNodesRequest& request, const DescribeClientNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClientNodesOutcomeCallable DescribeClientNodesCallable(const Model::DescribeClientNodesRequest& request);

                /**
                 *查询GooseFS集群客户端凭证
                 * @param req DescribeClusterClientTokenRequest
                 * @return DescribeClusterClientTokenOutcome
                 */
                DescribeClusterClientTokenOutcome DescribeClusterClientToken(const Model::DescribeClusterClientTokenRequest &request);
                void DescribeClusterClientTokenAsync(const Model::DescribeClusterClientTokenRequest& request, const DescribeClusterClientTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterClientTokenOutcomeCallable DescribeClusterClientTokenCallable(const Model::DescribeClusterClientTokenRequest& request);

                /**
                 *查询GooseFS集群角色凭证
                 * @param req DescribeClusterRoleTokenRequest
                 * @return DescribeClusterRoleTokenOutcome
                 */
                DescribeClusterRoleTokenOutcome DescribeClusterRoleToken(const Model::DescribeClusterRoleTokenRequest &request);
                void DescribeClusterRoleTokenAsync(const Model::DescribeClusterRoleTokenRequest& request, const DescribeClusterRoleTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterRoleTokenOutcomeCallable DescribeClusterRoleTokenCallable(const Model::DescribeClusterRoleTokenRequest& request);

                /**
                 *接口废弃

查询GooseFS集群角色
                 * @param req DescribeClusterRolesRequest
                 * @return DescribeClusterRolesOutcome
                 */
                DescribeClusterRolesOutcome DescribeClusterRoles(const Model::DescribeClusterRolesRequest &request);
                void DescribeClusterRolesAsync(const Model::DescribeClusterRolesRequest& request, const DescribeClusterRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterRolesOutcomeCallable DescribeClusterRolesCallable(const Model::DescribeClusterRolesRequest& request);

                /**
                 *获取数据流通任务实时状态，用作客户端控制
                 * @param req DescribeDataRepositoryTaskStatusRequest
                 * @return DescribeDataRepositoryTaskStatusOutcome
                 */
                DescribeDataRepositoryTaskStatusOutcome DescribeDataRepositoryTaskStatus(const Model::DescribeDataRepositoryTaskStatusRequest &request);
                void DescribeDataRepositoryTaskStatusAsync(const Model::DescribeDataRepositoryTaskStatusRequest& request, const DescribeDataRepositoryTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataRepositoryTaskStatusOutcomeCallable DescribeDataRepositoryTaskStatusCallable(const Model::DescribeDataRepositoryTaskStatusRequest& request);

                /**
                 *罗列文件系统关联的Bucket映射
                 * @param req DescribeFileSystemBucketsRequest
                 * @return DescribeFileSystemBucketsOutcome
                 */
                DescribeFileSystemBucketsOutcome DescribeFileSystemBuckets(const Model::DescribeFileSystemBucketsRequest &request);
                void DescribeFileSystemBucketsAsync(const Model::DescribeFileSystemBucketsRequest& request, const DescribeFileSystemBucketsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFileSystemBucketsOutcomeCallable DescribeFileSystemBucketsCallable(const Model::DescribeFileSystemBucketsRequest& request);

                /**
                 *列出所有的文件系统
                 * @param req DescribeFileSystemsRequest
                 * @return DescribeFileSystemsOutcome
                 */
                DescribeFileSystemsOutcome DescribeFileSystems(const Model::DescribeFileSystemsRequest &request);
                void DescribeFileSystemsAsync(const Model::DescribeFileSystemsRequest& request, const DescribeFileSystemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFileSystemsOutcomeCallable DescribeFileSystemsCallable(const Model::DescribeFileSystemsRequest& request);

                /**
                 *查询Fileset通用配置
                 * @param req DescribeFilesetGeneralConfigRequest
                 * @return DescribeFilesetGeneralConfigOutcome
                 */
                DescribeFilesetGeneralConfigOutcome DescribeFilesetGeneralConfig(const Model::DescribeFilesetGeneralConfigRequest &request);
                void DescribeFilesetGeneralConfigAsync(const Model::DescribeFilesetGeneralConfigRequest& request, const DescribeFilesetGeneralConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFilesetGeneralConfigOutcomeCallable DescribeFilesetGeneralConfigCallable(const Model::DescribeFilesetGeneralConfigRequest& request);

                /**
                 *查询Fileset列表
                 * @param req DescribeFilesetsRequest
                 * @return DescribeFilesetsOutcome
                 */
                DescribeFilesetsOutcome DescribeFilesets(const Model::DescribeFilesetsRequest &request);
                void DescribeFilesetsAsync(const Model::DescribeFilesetsRequest& request, const DescribeFilesetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFilesetsOutcomeCallable DescribeFilesetsCallable(const Model::DescribeFilesetsRequest& request);

                /**
                 *解绑文件系统与Bucket的映射
                 * @param req DetachFileSystemBucketRequest
                 * @return DetachFileSystemBucketOutcome
                 */
                DetachFileSystemBucketOutcome DetachFileSystemBucket(const Model::DetachFileSystemBucketRequest &request);
                void DetachFileSystemBucketAsync(const Model::DetachFileSystemBucketRequest& request, const DetachFileSystemBucketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachFileSystemBucketOutcomeCallable DetachFileSystemBucketCallable(const Model::DetachFileSystemBucketRequest& request);

                /**
                 *扩展文件系统容量
                 * @param req ExpandCapacityRequest
                 * @return ExpandCapacityOutcome
                 */
                ExpandCapacityOutcome ExpandCapacity(const Model::ExpandCapacityRequest &request);
                void ExpandCapacityAsync(const Model::ExpandCapacityRequest& request, const ExpandCapacityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExpandCapacityOutcomeCallable ExpandCapacityCallable(const Model::ExpandCapacityRequest& request);

                /**
                 *修改数据流动带宽
                 * @param req ModifyDataRepositoryBandwidthRequest
                 * @return ModifyDataRepositoryBandwidthOutcome
                 */
                ModifyDataRepositoryBandwidthOutcome ModifyDataRepositoryBandwidth(const Model::ModifyDataRepositoryBandwidthRequest &request);
                void ModifyDataRepositoryBandwidthAsync(const Model::ModifyDataRepositoryBandwidthRequest& request, const ModifyDataRepositoryBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDataRepositoryBandwidthOutcomeCallable ModifyDataRepositoryBandwidthCallable(const Model::ModifyDataRepositoryBandwidthRequest& request);

                /**
                 *查询客户端节点跨vpc子网访问能力
                 * @param req QueryCrossVpcSubnetSupportForClientNodeRequest
                 * @return QueryCrossVpcSubnetSupportForClientNodeOutcome
                 */
                QueryCrossVpcSubnetSupportForClientNodeOutcome QueryCrossVpcSubnetSupportForClientNode(const Model::QueryCrossVpcSubnetSupportForClientNodeRequest &request);
                void QueryCrossVpcSubnetSupportForClientNodeAsync(const Model::QueryCrossVpcSubnetSupportForClientNodeRequest& request, const QueryCrossVpcSubnetSupportForClientNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryCrossVpcSubnetSupportForClientNodeOutcomeCallable QueryCrossVpcSubnetSupportForClientNodeCallable(const Model::QueryCrossVpcSubnetSupportForClientNodeRequest& request);

                /**
                 *查询数据流动带宽
                 * @param req QueryDataRepositoryBandwidthRequest
                 * @return QueryDataRepositoryBandwidthOutcome
                 */
                QueryDataRepositoryBandwidthOutcome QueryDataRepositoryBandwidth(const Model::QueryDataRepositoryBandwidthRequest &request);
                void QueryDataRepositoryBandwidthAsync(const Model::QueryDataRepositoryBandwidthRequest& request, const QueryDataRepositoryBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryDataRepositoryBandwidthOutcomeCallable QueryDataRepositoryBandwidthCallable(const Model::QueryDataRepositoryBandwidthRequest& request);

                /**
                 *修改FIleset
                 * @param req UpdateFilesetRequest
                 * @return UpdateFilesetOutcome
                 */
                UpdateFilesetOutcome UpdateFileset(const Model::UpdateFilesetRequest &request);
                void UpdateFilesetAsync(const Model::UpdateFilesetRequest& request, const UpdateFilesetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateFilesetOutcomeCallable UpdateFilesetCallable(const Model::UpdateFilesetRequest& request);

                /**
                 *修改Fileset通用配置
                 * @param req UpdateFilesetGeneralConfigRequest
                 * @return UpdateFilesetGeneralConfigOutcome
                 */
                UpdateFilesetGeneralConfigOutcome UpdateFilesetGeneralConfig(const Model::UpdateFilesetGeneralConfigRequest &request);
                void UpdateFilesetGeneralConfigAsync(const Model::UpdateFilesetGeneralConfigRequest& request, const UpdateFilesetGeneralConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateFilesetGeneralConfigOutcomeCallable UpdateFilesetGeneralConfigCallable(const Model::UpdateFilesetGeneralConfigRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_GOOSEFSCLIENT_H_
