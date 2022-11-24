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

#ifndef TENCENTCLOUD_TCM_V20210413_TCMCLIENT_H_
#define TENCENTCLOUD_TCM_V20210413_TCMCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tcm/v20210413/model/CreateMeshRequest.h>
#include <tencentcloud/tcm/v20210413/model/CreateMeshResponse.h>
#include <tencentcloud/tcm/v20210413/model/DeleteMeshRequest.h>
#include <tencentcloud/tcm/v20210413/model/DeleteMeshResponse.h>
#include <tencentcloud/tcm/v20210413/model/DescribeAccessLogConfigRequest.h>
#include <tencentcloud/tcm/v20210413/model/DescribeAccessLogConfigResponse.h>
#include <tencentcloud/tcm/v20210413/model/DescribeMeshRequest.h>
#include <tencentcloud/tcm/v20210413/model/DescribeMeshResponse.h>
#include <tencentcloud/tcm/v20210413/model/DescribeMeshListRequest.h>
#include <tencentcloud/tcm/v20210413/model/DescribeMeshListResponse.h>
#include <tencentcloud/tcm/v20210413/model/LinkClusterListRequest.h>
#include <tencentcloud/tcm/v20210413/model/LinkClusterListResponse.h>
#include <tencentcloud/tcm/v20210413/model/LinkPrometheusRequest.h>
#include <tencentcloud/tcm/v20210413/model/LinkPrometheusResponse.h>
#include <tencentcloud/tcm/v20210413/model/ModifyAccessLogConfigRequest.h>
#include <tencentcloud/tcm/v20210413/model/ModifyAccessLogConfigResponse.h>
#include <tencentcloud/tcm/v20210413/model/ModifyMeshRequest.h>
#include <tencentcloud/tcm/v20210413/model/ModifyMeshResponse.h>
#include <tencentcloud/tcm/v20210413/model/ModifyTracingConfigRequest.h>
#include <tencentcloud/tcm/v20210413/model/ModifyTracingConfigResponse.h>
#include <tencentcloud/tcm/v20210413/model/UnlinkClusterRequest.h>
#include <tencentcloud/tcm/v20210413/model/UnlinkClusterResponse.h>
#include <tencentcloud/tcm/v20210413/model/UnlinkPrometheusRequest.h>
#include <tencentcloud/tcm/v20210413/model/UnlinkPrometheusResponse.h>


namespace TencentCloud
{
    namespace Tcm
    {
        namespace V20210413
        {
            class TcmClient : public AbstractClient
            {
            public:
                TcmClient(const Credential &credential, const std::string &region);
                TcmClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateMeshResponse> CreateMeshOutcome;
                typedef std::future<CreateMeshOutcome> CreateMeshOutcomeCallable;
                typedef std::function<void(const TcmClient*, const Model::CreateMeshRequest&, CreateMeshOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMeshAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMeshResponse> DeleteMeshOutcome;
                typedef std::future<DeleteMeshOutcome> DeleteMeshOutcomeCallable;
                typedef std::function<void(const TcmClient*, const Model::DeleteMeshRequest&, DeleteMeshOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMeshAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccessLogConfigResponse> DescribeAccessLogConfigOutcome;
                typedef std::future<DescribeAccessLogConfigOutcome> DescribeAccessLogConfigOutcomeCallable;
                typedef std::function<void(const TcmClient*, const Model::DescribeAccessLogConfigRequest&, DescribeAccessLogConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessLogConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMeshResponse> DescribeMeshOutcome;
                typedef std::future<DescribeMeshOutcome> DescribeMeshOutcomeCallable;
                typedef std::function<void(const TcmClient*, const Model::DescribeMeshRequest&, DescribeMeshOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMeshAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMeshListResponse> DescribeMeshListOutcome;
                typedef std::future<DescribeMeshListOutcome> DescribeMeshListOutcomeCallable;
                typedef std::function<void(const TcmClient*, const Model::DescribeMeshListRequest&, DescribeMeshListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMeshListAsyncHandler;
                typedef Outcome<Core::Error, Model::LinkClusterListResponse> LinkClusterListOutcome;
                typedef std::future<LinkClusterListOutcome> LinkClusterListOutcomeCallable;
                typedef std::function<void(const TcmClient*, const Model::LinkClusterListRequest&, LinkClusterListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> LinkClusterListAsyncHandler;
                typedef Outcome<Core::Error, Model::LinkPrometheusResponse> LinkPrometheusOutcome;
                typedef std::future<LinkPrometheusOutcome> LinkPrometheusOutcomeCallable;
                typedef std::function<void(const TcmClient*, const Model::LinkPrometheusRequest&, LinkPrometheusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> LinkPrometheusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccessLogConfigResponse> ModifyAccessLogConfigOutcome;
                typedef std::future<ModifyAccessLogConfigOutcome> ModifyAccessLogConfigOutcomeCallable;
                typedef std::function<void(const TcmClient*, const Model::ModifyAccessLogConfigRequest&, ModifyAccessLogConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccessLogConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMeshResponse> ModifyMeshOutcome;
                typedef std::future<ModifyMeshOutcome> ModifyMeshOutcomeCallable;
                typedef std::function<void(const TcmClient*, const Model::ModifyMeshRequest&, ModifyMeshOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMeshAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTracingConfigResponse> ModifyTracingConfigOutcome;
                typedef std::future<ModifyTracingConfigOutcome> ModifyTracingConfigOutcomeCallable;
                typedef std::function<void(const TcmClient*, const Model::ModifyTracingConfigRequest&, ModifyTracingConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTracingConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::UnlinkClusterResponse> UnlinkClusterOutcome;
                typedef std::future<UnlinkClusterOutcome> UnlinkClusterOutcomeCallable;
                typedef std::function<void(const TcmClient*, const Model::UnlinkClusterRequest&, UnlinkClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnlinkClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::UnlinkPrometheusResponse> UnlinkPrometheusOutcome;
                typedef std::future<UnlinkPrometheusOutcome> UnlinkPrometheusOutcomeCallable;
                typedef std::function<void(const TcmClient*, const Model::UnlinkPrometheusRequest&, UnlinkPrometheusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnlinkPrometheusAsyncHandler;



                /**
                 *创建网格
                 * @param req CreateMeshRequest
                 * @return CreateMeshOutcome
                 */
                CreateMeshOutcome CreateMesh(const Model::CreateMeshRequest &request);
                void CreateMeshAsync(const Model::CreateMeshRequest& request, const CreateMeshAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMeshOutcomeCallable CreateMeshCallable(const Model::CreateMeshRequest& request);

                /**
                 *删除网格
                 * @param req DeleteMeshRequest
                 * @return DeleteMeshOutcome
                 */
                DeleteMeshOutcome DeleteMesh(const Model::DeleteMeshRequest &request);
                void DeleteMeshAsync(const Model::DeleteMeshRequest& request, const DeleteMeshAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMeshOutcomeCallable DeleteMeshCallable(const Model::DeleteMeshRequest& request);

                /**
                 *获取AccessLog配置
                 * @param req DescribeAccessLogConfigRequest
                 * @return DescribeAccessLogConfigOutcome
                 */
                DescribeAccessLogConfigOutcome DescribeAccessLogConfig(const Model::DescribeAccessLogConfigRequest &request);
                void DescribeAccessLogConfigAsync(const Model::DescribeAccessLogConfigRequest& request, const DescribeAccessLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccessLogConfigOutcomeCallable DescribeAccessLogConfigCallable(const Model::DescribeAccessLogConfigRequest& request);

                /**
                 *查询网格详情
                 * @param req DescribeMeshRequest
                 * @return DescribeMeshOutcome
                 */
                DescribeMeshOutcome DescribeMesh(const Model::DescribeMeshRequest &request);
                void DescribeMeshAsync(const Model::DescribeMeshRequest& request, const DescribeMeshAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMeshOutcomeCallable DescribeMeshCallable(const Model::DescribeMeshRequest& request);

                /**
                 *查询网格列表
                 * @param req DescribeMeshListRequest
                 * @return DescribeMeshListOutcome
                 */
                DescribeMeshListOutcome DescribeMeshList(const Model::DescribeMeshListRequest &request);
                void DescribeMeshListAsync(const Model::DescribeMeshListRequest& request, const DescribeMeshListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMeshListOutcomeCallable DescribeMeshListCallable(const Model::DescribeMeshListRequest& request);

                /**
                 *关联集群
                 * @param req LinkClusterListRequest
                 * @return LinkClusterListOutcome
                 */
                LinkClusterListOutcome LinkClusterList(const Model::LinkClusterListRequest &request);
                void LinkClusterListAsync(const Model::LinkClusterListRequest& request, const LinkClusterListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                LinkClusterListOutcomeCallable LinkClusterListCallable(const Model::LinkClusterListRequest& request);

                /**
                 *关联Prometheus
                 * @param req LinkPrometheusRequest
                 * @return LinkPrometheusOutcome
                 */
                LinkPrometheusOutcome LinkPrometheus(const Model::LinkPrometheusRequest &request);
                void LinkPrometheusAsync(const Model::LinkPrometheusRequest& request, const LinkPrometheusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                LinkPrometheusOutcomeCallable LinkPrometheusCallable(const Model::LinkPrometheusRequest& request);

                /**
                 *修改访问日志配置
                 * @param req ModifyAccessLogConfigRequest
                 * @return ModifyAccessLogConfigOutcome
                 */
                ModifyAccessLogConfigOutcome ModifyAccessLogConfig(const Model::ModifyAccessLogConfigRequest &request);
                void ModifyAccessLogConfigAsync(const Model::ModifyAccessLogConfigRequest& request, const ModifyAccessLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccessLogConfigOutcomeCallable ModifyAccessLogConfigCallable(const Model::ModifyAccessLogConfigRequest& request);

                /**
                 *修改网格
                 * @param req ModifyMeshRequest
                 * @return ModifyMeshOutcome
                 */
                ModifyMeshOutcome ModifyMesh(const Model::ModifyMeshRequest &request);
                void ModifyMeshAsync(const Model::ModifyMeshRequest& request, const ModifyMeshAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMeshOutcomeCallable ModifyMeshCallable(const Model::ModifyMeshRequest& request);

                /**
                 *修改 Tracing 配置
                 * @param req ModifyTracingConfigRequest
                 * @return ModifyTracingConfigOutcome
                 */
                ModifyTracingConfigOutcome ModifyTracingConfig(const Model::ModifyTracingConfigRequest &request);
                void ModifyTracingConfigAsync(const Model::ModifyTracingConfigRequest& request, const ModifyTracingConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTracingConfigOutcomeCallable ModifyTracingConfigCallable(const Model::ModifyTracingConfigRequest& request);

                /**
                 *解关联集群
                 * @param req UnlinkClusterRequest
                 * @return UnlinkClusterOutcome
                 */
                UnlinkClusterOutcome UnlinkCluster(const Model::UnlinkClusterRequest &request);
                void UnlinkClusterAsync(const Model::UnlinkClusterRequest& request, const UnlinkClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnlinkClusterOutcomeCallable UnlinkClusterCallable(const Model::UnlinkClusterRequest& request);

                /**
                 *解除关联Prometheus
                 * @param req UnlinkPrometheusRequest
                 * @return UnlinkPrometheusOutcome
                 */
                UnlinkPrometheusOutcome UnlinkPrometheus(const Model::UnlinkPrometheusRequest &request);
                void UnlinkPrometheusAsync(const Model::UnlinkPrometheusRequest& request, const UnlinkPrometheusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnlinkPrometheusOutcomeCallable UnlinkPrometheusCallable(const Model::UnlinkPrometheusRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TCM_V20210413_TCMCLIENT_H_
