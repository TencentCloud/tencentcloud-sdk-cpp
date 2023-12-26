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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_CDWDORISCLIENT_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_CDWDORISCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cdwdoris/v20211228/model/CreateInstanceNewRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/CreateInstanceNewResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeClusterConfigsRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeClusterConfigsResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeDatabaseAuditDownloadRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeDatabaseAuditDownloadResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeDatabaseAuditRecordsRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeDatabaseAuditRecordsResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstanceRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstanceResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstanceNodesRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstanceNodesResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstanceNodesInfoRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstanceNodesInfoResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstanceStateRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstanceStateResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstancesRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstancesResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeSlowQueryRecordsRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeSlowQueryRecordsResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeSlowQueryRecordsDownloadRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeSlowQueryRecordsDownloadResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DestroyInstanceRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DestroyInstanceResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/ModifyInstanceRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/ModifyInstanceResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/ResizeDiskRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/ResizeDiskResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/RestartClusterForNodeRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/RestartClusterForNodeResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/ScaleOutInstanceRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/ScaleOutInstanceResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/ScaleUpInstanceRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/ScaleUpInstanceResponse.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            class CdwdorisClient : public AbstractClient
            {
            public:
                CdwdorisClient(const Credential &credential, const std::string &region);
                CdwdorisClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateInstanceNewResponse> CreateInstanceNewOutcome;
                typedef std::future<CreateInstanceNewOutcome> CreateInstanceNewOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::CreateInstanceNewRequest&, CreateInstanceNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceNewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterConfigsResponse> DescribeClusterConfigsOutcome;
                typedef std::future<DescribeClusterConfigsOutcome> DescribeClusterConfigsOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeClusterConfigsRequest&, DescribeClusterConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatabaseAuditDownloadResponse> DescribeDatabaseAuditDownloadOutcome;
                typedef std::future<DescribeDatabaseAuditDownloadOutcome> DescribeDatabaseAuditDownloadOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeDatabaseAuditDownloadRequest&, DescribeDatabaseAuditDownloadOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabaseAuditDownloadAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatabaseAuditRecordsResponse> DescribeDatabaseAuditRecordsOutcome;
                typedef std::future<DescribeDatabaseAuditRecordsOutcome> DescribeDatabaseAuditRecordsOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeDatabaseAuditRecordsRequest&, DescribeDatabaseAuditRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabaseAuditRecordsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceResponse> DescribeInstanceOutcome;
                typedef std::future<DescribeInstanceOutcome> DescribeInstanceOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeInstanceRequest&, DescribeInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceNodesResponse> DescribeInstanceNodesOutcome;
                typedef std::future<DescribeInstanceNodesOutcome> DescribeInstanceNodesOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeInstanceNodesRequest&, DescribeInstanceNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceNodesInfoResponse> DescribeInstanceNodesInfoOutcome;
                typedef std::future<DescribeInstanceNodesInfoOutcome> DescribeInstanceNodesInfoOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeInstanceNodesInfoRequest&, DescribeInstanceNodesInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceNodesInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceStateResponse> DescribeInstanceStateOutcome;
                typedef std::future<DescribeInstanceStateOutcome> DescribeInstanceStateOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeInstanceStateRequest&, DescribeInstanceStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceStateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesResponse> DescribeInstancesOutcome;
                typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeInstancesRequest&, DescribeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSlowQueryRecordsResponse> DescribeSlowQueryRecordsOutcome;
                typedef std::future<DescribeSlowQueryRecordsOutcome> DescribeSlowQueryRecordsOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeSlowQueryRecordsRequest&, DescribeSlowQueryRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowQueryRecordsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSlowQueryRecordsDownloadResponse> DescribeSlowQueryRecordsDownloadOutcome;
                typedef std::future<DescribeSlowQueryRecordsDownloadOutcome> DescribeSlowQueryRecordsDownloadOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeSlowQueryRecordsDownloadRequest&, DescribeSlowQueryRecordsDownloadOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowQueryRecordsDownloadAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyInstanceResponse> DestroyInstanceOutcome;
                typedef std::future<DestroyInstanceOutcome> DestroyInstanceOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DestroyInstanceRequest&, DestroyInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceResponse> ModifyInstanceOutcome;
                typedef std::future<ModifyInstanceOutcome> ModifyInstanceOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::ModifyInstanceRequest&, ModifyInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ResizeDiskResponse> ResizeDiskOutcome;
                typedef std::future<ResizeDiskOutcome> ResizeDiskOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::ResizeDiskRequest&, ResizeDiskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResizeDiskAsyncHandler;
                typedef Outcome<Core::Error, Model::RestartClusterForNodeResponse> RestartClusterForNodeOutcome;
                typedef std::future<RestartClusterForNodeOutcome> RestartClusterForNodeOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::RestartClusterForNodeRequest&, RestartClusterForNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestartClusterForNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::ScaleOutInstanceResponse> ScaleOutInstanceOutcome;
                typedef std::future<ScaleOutInstanceOutcome> ScaleOutInstanceOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::ScaleOutInstanceRequest&, ScaleOutInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScaleOutInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ScaleUpInstanceResponse> ScaleUpInstanceOutcome;
                typedef std::future<ScaleUpInstanceOutcome> ScaleUpInstanceOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::ScaleUpInstanceRequest&, ScaleUpInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScaleUpInstanceAsyncHandler;



                /**
                 *通过API创建集群
                 * @param req CreateInstanceNewRequest
                 * @return CreateInstanceNewOutcome
                 */
                CreateInstanceNewOutcome CreateInstanceNew(const Model::CreateInstanceNewRequest &request);
                void CreateInstanceNewAsync(const Model::CreateInstanceNewRequest& request, const CreateInstanceNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstanceNewOutcomeCallable CreateInstanceNewCallable(const Model::CreateInstanceNewRequest& request);

                /**
                 *获取集群的最新的几个配置文件（config.xml、metrika.xml、user.xml）的内容，显示给用户
                 * @param req DescribeClusterConfigsRequest
                 * @return DescribeClusterConfigsOutcome
                 */
                DescribeClusterConfigsOutcome DescribeClusterConfigs(const Model::DescribeClusterConfigsRequest &request);
                void DescribeClusterConfigsAsync(const Model::DescribeClusterConfigsRequest& request, const DescribeClusterConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterConfigsOutcomeCallable DescribeClusterConfigsCallable(const Model::DescribeClusterConfigsRequest& request);

                /**
                 *下载数据库审计日志
                 * @param req DescribeDatabaseAuditDownloadRequest
                 * @return DescribeDatabaseAuditDownloadOutcome
                 */
                DescribeDatabaseAuditDownloadOutcome DescribeDatabaseAuditDownload(const Model::DescribeDatabaseAuditDownloadRequest &request);
                void DescribeDatabaseAuditDownloadAsync(const Model::DescribeDatabaseAuditDownloadRequest& request, const DescribeDatabaseAuditDownloadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatabaseAuditDownloadOutcomeCallable DescribeDatabaseAuditDownloadCallable(const Model::DescribeDatabaseAuditDownloadRequest& request);

                /**
                 *获取数据库审计记录
                 * @param req DescribeDatabaseAuditRecordsRequest
                 * @return DescribeDatabaseAuditRecordsOutcome
                 */
                DescribeDatabaseAuditRecordsOutcome DescribeDatabaseAuditRecords(const Model::DescribeDatabaseAuditRecordsRequest &request);
                void DescribeDatabaseAuditRecordsAsync(const Model::DescribeDatabaseAuditRecordsRequest& request, const DescribeDatabaseAuditRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatabaseAuditRecordsOutcomeCallable DescribeDatabaseAuditRecordsCallable(const Model::DescribeDatabaseAuditRecordsRequest& request);

                /**
                 *根据集群ID查询某个集群的具体信息
                 * @param req DescribeInstanceRequest
                 * @return DescribeInstanceOutcome
                 */
                DescribeInstanceOutcome DescribeInstance(const Model::DescribeInstanceRequest &request);
                void DescribeInstanceAsync(const Model::DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceOutcomeCallable DescribeInstanceCallable(const Model::DescribeInstanceRequest& request);

                /**
                 *获取集群节点信息列表
                 * @param req DescribeInstanceNodesRequest
                 * @return DescribeInstanceNodesOutcome
                 */
                DescribeInstanceNodesOutcome DescribeInstanceNodes(const Model::DescribeInstanceNodesRequest &request);
                void DescribeInstanceNodesAsync(const Model::DescribeInstanceNodesRequest& request, const DescribeInstanceNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceNodesOutcomeCallable DescribeInstanceNodesCallable(const Model::DescribeInstanceNodesRequest& request);

                /**
                 *获取BE/FE节点角色
                 * @param req DescribeInstanceNodesInfoRequest
                 * @return DescribeInstanceNodesInfoOutcome
                 */
                DescribeInstanceNodesInfoOutcome DescribeInstanceNodesInfo(const Model::DescribeInstanceNodesInfoRequest &request);
                void DescribeInstanceNodesInfoAsync(const Model::DescribeInstanceNodesInfoRequest& request, const DescribeInstanceNodesInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceNodesInfoOutcomeCallable DescribeInstanceNodesInfoCallable(const Model::DescribeInstanceNodesInfoRequest& request);

                /**
                 *集群详情页中显示集群状态、流程进度等
                 * @param req DescribeInstanceStateRequest
                 * @return DescribeInstanceStateOutcome
                 */
                DescribeInstanceStateOutcome DescribeInstanceState(const Model::DescribeInstanceStateRequest &request);
                void DescribeInstanceStateAsync(const Model::DescribeInstanceStateRequest& request, const DescribeInstanceStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceStateOutcomeCallable DescribeInstanceStateCallable(const Model::DescribeInstanceStateRequest& request);

                /**
                 *获取集群列表
                 * @param req DescribeInstancesRequest
                 * @return DescribeInstancesOutcome
                 */
                DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest &request);
                void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request);

                /**
                 *获取慢查询列表
                 * @param req DescribeSlowQueryRecordsRequest
                 * @return DescribeSlowQueryRecordsOutcome
                 */
                DescribeSlowQueryRecordsOutcome DescribeSlowQueryRecords(const Model::DescribeSlowQueryRecordsRequest &request);
                void DescribeSlowQueryRecordsAsync(const Model::DescribeSlowQueryRecordsRequest& request, const DescribeSlowQueryRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSlowQueryRecordsOutcomeCallable DescribeSlowQueryRecordsCallable(const Model::DescribeSlowQueryRecordsRequest& request);

                /**
                 *下载慢查询文件
                 * @param req DescribeSlowQueryRecordsDownloadRequest
                 * @return DescribeSlowQueryRecordsDownloadOutcome
                 */
                DescribeSlowQueryRecordsDownloadOutcome DescribeSlowQueryRecordsDownload(const Model::DescribeSlowQueryRecordsDownloadRequest &request);
                void DescribeSlowQueryRecordsDownloadAsync(const Model::DescribeSlowQueryRecordsDownloadRequest& request, const DescribeSlowQueryRecordsDownloadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSlowQueryRecordsDownloadOutcomeCallable DescribeSlowQueryRecordsDownloadCallable(const Model::DescribeSlowQueryRecordsDownloadRequest& request);

                /**
                 *销毁集群
                 * @param req DestroyInstanceRequest
                 * @return DestroyInstanceOutcome
                 */
                DestroyInstanceOutcome DestroyInstance(const Model::DestroyInstanceRequest &request);
                void DestroyInstanceAsync(const Model::DestroyInstanceRequest& request, const DestroyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyInstanceOutcomeCallable DestroyInstanceCallable(const Model::DestroyInstanceRequest& request);

                /**
                 *修改集群名称
                 * @param req ModifyInstanceRequest
                 * @return ModifyInstanceOutcome
                 */
                ModifyInstanceOutcome ModifyInstance(const Model::ModifyInstanceRequest &request);
                void ModifyInstanceAsync(const Model::ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceOutcomeCallable ModifyInstanceCallable(const Model::ModifyInstanceRequest& request);

                /**
                 *扩容云盘
                 * @param req ResizeDiskRequest
                 * @return ResizeDiskOutcome
                 */
                ResizeDiskOutcome ResizeDisk(const Model::ResizeDiskRequest &request);
                void ResizeDiskAsync(const Model::ResizeDiskRequest& request, const ResizeDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResizeDiskOutcomeCallable ResizeDiskCallable(const Model::ResizeDiskRequest& request);

                /**
                 *集群滚动重启
                 * @param req RestartClusterForNodeRequest
                 * @return RestartClusterForNodeOutcome
                 */
                RestartClusterForNodeOutcome RestartClusterForNode(const Model::RestartClusterForNodeRequest &request);
                void RestartClusterForNodeAsync(const Model::RestartClusterForNodeRequest& request, const RestartClusterForNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestartClusterForNodeOutcomeCallable RestartClusterForNodeCallable(const Model::RestartClusterForNodeRequest& request);

                /**
                 *水平扩容节点
                 * @param req ScaleOutInstanceRequest
                 * @return ScaleOutInstanceOutcome
                 */
                ScaleOutInstanceOutcome ScaleOutInstance(const Model::ScaleOutInstanceRequest &request);
                void ScaleOutInstanceAsync(const Model::ScaleOutInstanceRequest& request, const ScaleOutInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScaleOutInstanceOutcomeCallable ScaleOutInstanceCallable(const Model::ScaleOutInstanceRequest& request);

                /**
                 *计算资源垂直变配
                 * @param req ScaleUpInstanceRequest
                 * @return ScaleUpInstanceOutcome
                 */
                ScaleUpInstanceOutcome ScaleUpInstance(const Model::ScaleUpInstanceRequest &request);
                void ScaleUpInstanceAsync(const Model::ScaleUpInstanceRequest& request, const ScaleUpInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScaleUpInstanceOutcomeCallable ScaleUpInstanceCallable(const Model::ScaleUpInstanceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_CDWDORISCLIENT_H_
