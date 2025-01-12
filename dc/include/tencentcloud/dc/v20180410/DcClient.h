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

#ifndef TENCENTCLOUD_DC_V20180410_DCCLIENT_H_
#define TENCENTCLOUD_DC_V20180410_DCCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/dc/v20180410/model/AcceptDirectConnectTunnelRequest.h>
#include <tencentcloud/dc/v20180410/model/AcceptDirectConnectTunnelResponse.h>
#include <tencentcloud/dc/v20180410/model/ApplyInternetAddressRequest.h>
#include <tencentcloud/dc/v20180410/model/ApplyInternetAddressResponse.h>
#include <tencentcloud/dc/v20180410/model/CreateCloudAttachServiceRequest.h>
#include <tencentcloud/dc/v20180410/model/CreateCloudAttachServiceResponse.h>
#include <tencentcloud/dc/v20180410/model/CreateDirectConnectRequest.h>
#include <tencentcloud/dc/v20180410/model/CreateDirectConnectResponse.h>
#include <tencentcloud/dc/v20180410/model/CreateDirectConnectTunnelRequest.h>
#include <tencentcloud/dc/v20180410/model/CreateDirectConnectTunnelResponse.h>
#include <tencentcloud/dc/v20180410/model/DeleteDirectConnectRequest.h>
#include <tencentcloud/dc/v20180410/model/DeleteDirectConnectResponse.h>
#include <tencentcloud/dc/v20180410/model/DeleteDirectConnectTunnelRequest.h>
#include <tencentcloud/dc/v20180410/model/DeleteDirectConnectTunnelResponse.h>
#include <tencentcloud/dc/v20180410/model/DescribeAccessPointsRequest.h>
#include <tencentcloud/dc/v20180410/model/DescribeAccessPointsResponse.h>
#include <tencentcloud/dc/v20180410/model/DescribeDirectConnectTunnelExtraRequest.h>
#include <tencentcloud/dc/v20180410/model/DescribeDirectConnectTunnelExtraResponse.h>
#include <tencentcloud/dc/v20180410/model/DescribeDirectConnectTunnelsRequest.h>
#include <tencentcloud/dc/v20180410/model/DescribeDirectConnectTunnelsResponse.h>
#include <tencentcloud/dc/v20180410/model/DescribeDirectConnectsRequest.h>
#include <tencentcloud/dc/v20180410/model/DescribeDirectConnectsResponse.h>
#include <tencentcloud/dc/v20180410/model/DescribeInternetAddressRequest.h>
#include <tencentcloud/dc/v20180410/model/DescribeInternetAddressResponse.h>
#include <tencentcloud/dc/v20180410/model/DescribeInternetAddressQuotaRequest.h>
#include <tencentcloud/dc/v20180410/model/DescribeInternetAddressQuotaResponse.h>
#include <tencentcloud/dc/v20180410/model/DescribeInternetAddressStatisticsRequest.h>
#include <tencentcloud/dc/v20180410/model/DescribeInternetAddressStatisticsResponse.h>
#include <tencentcloud/dc/v20180410/model/DescribePublicDirectConnectTunnelRoutesRequest.h>
#include <tencentcloud/dc/v20180410/model/DescribePublicDirectConnectTunnelRoutesResponse.h>
#include <tencentcloud/dc/v20180410/model/DisableInternetAddressRequest.h>
#include <tencentcloud/dc/v20180410/model/DisableInternetAddressResponse.h>
#include <tencentcloud/dc/v20180410/model/EnableInternetAddressRequest.h>
#include <tencentcloud/dc/v20180410/model/EnableInternetAddressResponse.h>
#include <tencentcloud/dc/v20180410/model/ModifyDirectConnectAttributeRequest.h>
#include <tencentcloud/dc/v20180410/model/ModifyDirectConnectAttributeResponse.h>
#include <tencentcloud/dc/v20180410/model/ModifyDirectConnectTunnelAttributeRequest.h>
#include <tencentcloud/dc/v20180410/model/ModifyDirectConnectTunnelAttributeResponse.h>
#include <tencentcloud/dc/v20180410/model/ModifyDirectConnectTunnelExtraRequest.h>
#include <tencentcloud/dc/v20180410/model/ModifyDirectConnectTunnelExtraResponse.h>
#include <tencentcloud/dc/v20180410/model/RejectDirectConnectTunnelRequest.h>
#include <tencentcloud/dc/v20180410/model/RejectDirectConnectTunnelResponse.h>
#include <tencentcloud/dc/v20180410/model/ReleaseInternetAddressRequest.h>
#include <tencentcloud/dc/v20180410/model/ReleaseInternetAddressResponse.h>


namespace TencentCloud
{
    namespace Dc
    {
        namespace V20180410
        {
            class DcClient : public AbstractClient
            {
            public:
                DcClient(const Credential &credential, const std::string &region);
                DcClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AcceptDirectConnectTunnelResponse> AcceptDirectConnectTunnelOutcome;
                typedef std::future<AcceptDirectConnectTunnelOutcome> AcceptDirectConnectTunnelOutcomeCallable;
                typedef std::function<void(const DcClient*, const Model::AcceptDirectConnectTunnelRequest&, AcceptDirectConnectTunnelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AcceptDirectConnectTunnelAsyncHandler;
                typedef Outcome<Core::Error, Model::ApplyInternetAddressResponse> ApplyInternetAddressOutcome;
                typedef std::future<ApplyInternetAddressOutcome> ApplyInternetAddressOutcomeCallable;
                typedef std::function<void(const DcClient*, const Model::ApplyInternetAddressRequest&, ApplyInternetAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyInternetAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCloudAttachServiceResponse> CreateCloudAttachServiceOutcome;
                typedef std::future<CreateCloudAttachServiceOutcome> CreateCloudAttachServiceOutcomeCallable;
                typedef std::function<void(const DcClient*, const Model::CreateCloudAttachServiceRequest&, CreateCloudAttachServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudAttachServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDirectConnectResponse> CreateDirectConnectOutcome;
                typedef std::future<CreateDirectConnectOutcome> CreateDirectConnectOutcomeCallable;
                typedef std::function<void(const DcClient*, const Model::CreateDirectConnectRequest&, CreateDirectConnectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDirectConnectAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDirectConnectTunnelResponse> CreateDirectConnectTunnelOutcome;
                typedef std::future<CreateDirectConnectTunnelOutcome> CreateDirectConnectTunnelOutcomeCallable;
                typedef std::function<void(const DcClient*, const Model::CreateDirectConnectTunnelRequest&, CreateDirectConnectTunnelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDirectConnectTunnelAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDirectConnectResponse> DeleteDirectConnectOutcome;
                typedef std::future<DeleteDirectConnectOutcome> DeleteDirectConnectOutcomeCallable;
                typedef std::function<void(const DcClient*, const Model::DeleteDirectConnectRequest&, DeleteDirectConnectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDirectConnectAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDirectConnectTunnelResponse> DeleteDirectConnectTunnelOutcome;
                typedef std::future<DeleteDirectConnectTunnelOutcome> DeleteDirectConnectTunnelOutcomeCallable;
                typedef std::function<void(const DcClient*, const Model::DeleteDirectConnectTunnelRequest&, DeleteDirectConnectTunnelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDirectConnectTunnelAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccessPointsResponse> DescribeAccessPointsOutcome;
                typedef std::future<DescribeAccessPointsOutcome> DescribeAccessPointsOutcomeCallable;
                typedef std::function<void(const DcClient*, const Model::DescribeAccessPointsRequest&, DescribeAccessPointsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessPointsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDirectConnectTunnelExtraResponse> DescribeDirectConnectTunnelExtraOutcome;
                typedef std::future<DescribeDirectConnectTunnelExtraOutcome> DescribeDirectConnectTunnelExtraOutcomeCallable;
                typedef std::function<void(const DcClient*, const Model::DescribeDirectConnectTunnelExtraRequest&, DescribeDirectConnectTunnelExtraOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDirectConnectTunnelExtraAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDirectConnectTunnelsResponse> DescribeDirectConnectTunnelsOutcome;
                typedef std::future<DescribeDirectConnectTunnelsOutcome> DescribeDirectConnectTunnelsOutcomeCallable;
                typedef std::function<void(const DcClient*, const Model::DescribeDirectConnectTunnelsRequest&, DescribeDirectConnectTunnelsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDirectConnectTunnelsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDirectConnectsResponse> DescribeDirectConnectsOutcome;
                typedef std::future<DescribeDirectConnectsOutcome> DescribeDirectConnectsOutcomeCallable;
                typedef std::function<void(const DcClient*, const Model::DescribeDirectConnectsRequest&, DescribeDirectConnectsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDirectConnectsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInternetAddressResponse> DescribeInternetAddressOutcome;
                typedef std::future<DescribeInternetAddressOutcome> DescribeInternetAddressOutcomeCallable;
                typedef std::function<void(const DcClient*, const Model::DescribeInternetAddressRequest&, DescribeInternetAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInternetAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInternetAddressQuotaResponse> DescribeInternetAddressQuotaOutcome;
                typedef std::future<DescribeInternetAddressQuotaOutcome> DescribeInternetAddressQuotaOutcomeCallable;
                typedef std::function<void(const DcClient*, const Model::DescribeInternetAddressQuotaRequest&, DescribeInternetAddressQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInternetAddressQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInternetAddressStatisticsResponse> DescribeInternetAddressStatisticsOutcome;
                typedef std::future<DescribeInternetAddressStatisticsOutcome> DescribeInternetAddressStatisticsOutcomeCallable;
                typedef std::function<void(const DcClient*, const Model::DescribeInternetAddressStatisticsRequest&, DescribeInternetAddressStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInternetAddressStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePublicDirectConnectTunnelRoutesResponse> DescribePublicDirectConnectTunnelRoutesOutcome;
                typedef std::future<DescribePublicDirectConnectTunnelRoutesOutcome> DescribePublicDirectConnectTunnelRoutesOutcomeCallable;
                typedef std::function<void(const DcClient*, const Model::DescribePublicDirectConnectTunnelRoutesRequest&, DescribePublicDirectConnectTunnelRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePublicDirectConnectTunnelRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableInternetAddressResponse> DisableInternetAddressOutcome;
                typedef std::future<DisableInternetAddressOutcome> DisableInternetAddressOutcomeCallable;
                typedef std::function<void(const DcClient*, const Model::DisableInternetAddressRequest&, DisableInternetAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableInternetAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableInternetAddressResponse> EnableInternetAddressOutcome;
                typedef std::future<EnableInternetAddressOutcome> EnableInternetAddressOutcomeCallable;
                typedef std::function<void(const DcClient*, const Model::EnableInternetAddressRequest&, EnableInternetAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableInternetAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDirectConnectAttributeResponse> ModifyDirectConnectAttributeOutcome;
                typedef std::future<ModifyDirectConnectAttributeOutcome> ModifyDirectConnectAttributeOutcomeCallable;
                typedef std::function<void(const DcClient*, const Model::ModifyDirectConnectAttributeRequest&, ModifyDirectConnectAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDirectConnectAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDirectConnectTunnelAttributeResponse> ModifyDirectConnectTunnelAttributeOutcome;
                typedef std::future<ModifyDirectConnectTunnelAttributeOutcome> ModifyDirectConnectTunnelAttributeOutcomeCallable;
                typedef std::function<void(const DcClient*, const Model::ModifyDirectConnectTunnelAttributeRequest&, ModifyDirectConnectTunnelAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDirectConnectTunnelAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDirectConnectTunnelExtraResponse> ModifyDirectConnectTunnelExtraOutcome;
                typedef std::future<ModifyDirectConnectTunnelExtraOutcome> ModifyDirectConnectTunnelExtraOutcomeCallable;
                typedef std::function<void(const DcClient*, const Model::ModifyDirectConnectTunnelExtraRequest&, ModifyDirectConnectTunnelExtraOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDirectConnectTunnelExtraAsyncHandler;
                typedef Outcome<Core::Error, Model::RejectDirectConnectTunnelResponse> RejectDirectConnectTunnelOutcome;
                typedef std::future<RejectDirectConnectTunnelOutcome> RejectDirectConnectTunnelOutcomeCallable;
                typedef std::function<void(const DcClient*, const Model::RejectDirectConnectTunnelRequest&, RejectDirectConnectTunnelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RejectDirectConnectTunnelAsyncHandler;
                typedef Outcome<Core::Error, Model::ReleaseInternetAddressResponse> ReleaseInternetAddressOutcome;
                typedef std::future<ReleaseInternetAddressOutcome> ReleaseInternetAddressOutcomeCallable;
                typedef std::function<void(const DcClient*, const Model::ReleaseInternetAddressRequest&, ReleaseInternetAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseInternetAddressAsyncHandler;



                /**
                 *接受专用通道申请。
                 * @param req AcceptDirectConnectTunnelRequest
                 * @return AcceptDirectConnectTunnelOutcome
                 */
                AcceptDirectConnectTunnelOutcome AcceptDirectConnectTunnel(const Model::AcceptDirectConnectTunnelRequest &request);
                void AcceptDirectConnectTunnelAsync(const Model::AcceptDirectConnectTunnelRequest& request, const AcceptDirectConnectTunnelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AcceptDirectConnectTunnelOutcomeCallable AcceptDirectConnectTunnelCallable(const Model::AcceptDirectConnectTunnelRequest& request);

                /**
                 *申请互联网CIDR地址
                 * @param req ApplyInternetAddressRequest
                 * @return ApplyInternetAddressOutcome
                 */
                ApplyInternetAddressOutcome ApplyInternetAddress(const Model::ApplyInternetAddressRequest &request);
                void ApplyInternetAddressAsync(const Model::ApplyInternetAddressRequest& request, const ApplyInternetAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyInternetAddressOutcomeCallable ApplyInternetAddressCallable(const Model::ApplyInternetAddressRequest& request);

                /**
                 *创建敏捷上云服务
                 * @param req CreateCloudAttachServiceRequest
                 * @return CreateCloudAttachServiceOutcome
                 */
                CreateCloudAttachServiceOutcome CreateCloudAttachService(const Model::CreateCloudAttachServiceRequest &request);
                void CreateCloudAttachServiceAsync(const Model::CreateCloudAttachServiceRequest& request, const CreateCloudAttachServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCloudAttachServiceOutcomeCallable CreateCloudAttachServiceCallable(const Model::CreateCloudAttachServiceRequest& request);

                /**
                 *申请物理专线接入。
调用该接口时，请注意：
账号要进行实名认证，否则不允许申请物理专线；
若账户下存在欠费状态的物理专线，则不能申请更多的物理专线。
                 * @param req CreateDirectConnectRequest
                 * @return CreateDirectConnectOutcome
                 */
                CreateDirectConnectOutcome CreateDirectConnect(const Model::CreateDirectConnectRequest &request);
                void CreateDirectConnectAsync(const Model::CreateDirectConnectRequest& request, const CreateDirectConnectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDirectConnectOutcomeCallable CreateDirectConnectCallable(const Model::CreateDirectConnectRequest& request);

                /**
                 *创建专用通道。
                 * @param req CreateDirectConnectTunnelRequest
                 * @return CreateDirectConnectTunnelOutcome
                 */
                CreateDirectConnectTunnelOutcome CreateDirectConnectTunnel(const Model::CreateDirectConnectTunnelRequest &request);
                void CreateDirectConnectTunnelAsync(const Model::CreateDirectConnectTunnelRequest& request, const CreateDirectConnectTunnelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDirectConnectTunnelOutcomeCallable CreateDirectConnectTunnelCallable(const Model::CreateDirectConnectTunnelRequest& request);

                /**
                 *删除物理专线。只能删除处于已连接状态的物理专线。
                 * @param req DeleteDirectConnectRequest
                 * @return DeleteDirectConnectOutcome
                 */
                DeleteDirectConnectOutcome DeleteDirectConnect(const Model::DeleteDirectConnectRequest &request);
                void DeleteDirectConnectAsync(const Model::DeleteDirectConnectRequest& request, const DeleteDirectConnectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDirectConnectOutcomeCallable DeleteDirectConnectCallable(const Model::DeleteDirectConnectRequest& request);

                /**
                 *删除专用通道。
                 * @param req DeleteDirectConnectTunnelRequest
                 * @return DeleteDirectConnectTunnelOutcome
                 */
                DeleteDirectConnectTunnelOutcome DeleteDirectConnectTunnel(const Model::DeleteDirectConnectTunnelRequest &request);
                void DeleteDirectConnectTunnelAsync(const Model::DeleteDirectConnectTunnelRequest& request, const DeleteDirectConnectTunnelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDirectConnectTunnelOutcomeCallable DeleteDirectConnectTunnelCallable(const Model::DeleteDirectConnectTunnelRequest& request);

                /**
                 *查询物理专线接入点。
                 * @param req DescribeAccessPointsRequest
                 * @return DescribeAccessPointsOutcome
                 */
                DescribeAccessPointsOutcome DescribeAccessPoints(const Model::DescribeAccessPointsRequest &request);
                void DescribeAccessPointsAsync(const Model::DescribeAccessPointsRequest& request, const DescribeAccessPointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccessPointsOutcomeCallable DescribeAccessPointsCallable(const Model::DescribeAccessPointsRequest& request);

                /**
                 *查询专用通道扩展信息。
                 * @param req DescribeDirectConnectTunnelExtraRequest
                 * @return DescribeDirectConnectTunnelExtraOutcome
                 */
                DescribeDirectConnectTunnelExtraOutcome DescribeDirectConnectTunnelExtra(const Model::DescribeDirectConnectTunnelExtraRequest &request);
                void DescribeDirectConnectTunnelExtraAsync(const Model::DescribeDirectConnectTunnelExtraRequest& request, const DescribeDirectConnectTunnelExtraAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDirectConnectTunnelExtraOutcomeCallable DescribeDirectConnectTunnelExtraCallable(const Model::DescribeDirectConnectTunnelExtraRequest& request);

                /**
                 *查询专用通道列表。
                 * @param req DescribeDirectConnectTunnelsRequest
                 * @return DescribeDirectConnectTunnelsOutcome
                 */
                DescribeDirectConnectTunnelsOutcome DescribeDirectConnectTunnels(const Model::DescribeDirectConnectTunnelsRequest &request);
                void DescribeDirectConnectTunnelsAsync(const Model::DescribeDirectConnectTunnelsRequest& request, const DescribeDirectConnectTunnelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDirectConnectTunnelsOutcomeCallable DescribeDirectConnectTunnelsCallable(const Model::DescribeDirectConnectTunnelsRequest& request);

                /**
                 *查询物理专线列表。
                 * @param req DescribeDirectConnectsRequest
                 * @return DescribeDirectConnectsOutcome
                 */
                DescribeDirectConnectsOutcome DescribeDirectConnects(const Model::DescribeDirectConnectsRequest &request);
                void DescribeDirectConnectsAsync(const Model::DescribeDirectConnectsRequest& request, const DescribeDirectConnectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDirectConnectsOutcomeCallable DescribeDirectConnectsCallable(const Model::DescribeDirectConnectsRequest& request);

                /**
                 *获取用户互联网公网地址信息
                 * @param req DescribeInternetAddressRequest
                 * @return DescribeInternetAddressOutcome
                 */
                DescribeInternetAddressOutcome DescribeInternetAddress(const Model::DescribeInternetAddressRequest &request);
                void DescribeInternetAddressAsync(const Model::DescribeInternetAddressRequest& request, const DescribeInternetAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInternetAddressOutcomeCallable DescribeInternetAddressCallable(const Model::DescribeInternetAddressRequest& request);

                /**
                 *获取用户互联网公网地址配额
                 * @param req DescribeInternetAddressQuotaRequest
                 * @return DescribeInternetAddressQuotaOutcome
                 */
                DescribeInternetAddressQuotaOutcome DescribeInternetAddressQuota(const Model::DescribeInternetAddressQuotaRequest &request);
                void DescribeInternetAddressQuotaAsync(const Model::DescribeInternetAddressQuotaRequest& request, const DescribeInternetAddressQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInternetAddressQuotaOutcomeCallable DescribeInternetAddressQuotaCallable(const Model::DescribeInternetAddressQuotaRequest& request);

                /**
                 *获取用户互联网公网地址分配统计信息
                 * @param req DescribeInternetAddressStatisticsRequest
                 * @return DescribeInternetAddressStatisticsOutcome
                 */
                DescribeInternetAddressStatisticsOutcome DescribeInternetAddressStatistics(const Model::DescribeInternetAddressStatisticsRequest &request);
                void DescribeInternetAddressStatisticsAsync(const Model::DescribeInternetAddressStatisticsRequest& request, const DescribeInternetAddressStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInternetAddressStatisticsOutcomeCallable DescribeInternetAddressStatisticsCallable(const Model::DescribeInternetAddressStatisticsRequest& request);

                /**
                 *查询互联网通道路由列表。
                 * @param req DescribePublicDirectConnectTunnelRoutesRequest
                 * @return DescribePublicDirectConnectTunnelRoutesOutcome
                 */
                DescribePublicDirectConnectTunnelRoutesOutcome DescribePublicDirectConnectTunnelRoutes(const Model::DescribePublicDirectConnectTunnelRoutesRequest &request);
                void DescribePublicDirectConnectTunnelRoutesAsync(const Model::DescribePublicDirectConnectTunnelRoutesRequest& request, const DescribePublicDirectConnectTunnelRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePublicDirectConnectTunnelRoutesOutcomeCallable DescribePublicDirectConnectTunnelRoutesCallable(const Model::DescribePublicDirectConnectTunnelRoutesRequest& request);

                /**
                 *停用用户申请的公网互联网地址
                 * @param req DisableInternetAddressRequest
                 * @return DisableInternetAddressOutcome
                 */
                DisableInternetAddressOutcome DisableInternetAddress(const Model::DisableInternetAddressRequest &request);
                void DisableInternetAddressAsync(const Model::DisableInternetAddressRequest& request, const DisableInternetAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableInternetAddressOutcomeCallable DisableInternetAddressCallable(const Model::DisableInternetAddressRequest& request);

                /**
                 *启用已停用的互联网公网地址
                 * @param req EnableInternetAddressRequest
                 * @return EnableInternetAddressOutcome
                 */
                EnableInternetAddressOutcome EnableInternetAddress(const Model::EnableInternetAddressRequest &request);
                void EnableInternetAddressAsync(const Model::EnableInternetAddressRequest& request, const EnableInternetAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableInternetAddressOutcomeCallable EnableInternetAddressCallable(const Model::EnableInternetAddressRequest& request);

                /**
                 *修改物理专线的属性。
                 * @param req ModifyDirectConnectAttributeRequest
                 * @return ModifyDirectConnectAttributeOutcome
                 */
                ModifyDirectConnectAttributeOutcome ModifyDirectConnectAttribute(const Model::ModifyDirectConnectAttributeRequest &request);
                void ModifyDirectConnectAttributeAsync(const Model::ModifyDirectConnectAttributeRequest& request, const ModifyDirectConnectAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDirectConnectAttributeOutcomeCallable ModifyDirectConnectAttributeCallable(const Model::ModifyDirectConnectAttributeRequest& request);

                /**
                 *修改专用通道属性。
                 * @param req ModifyDirectConnectTunnelAttributeRequest
                 * @return ModifyDirectConnectTunnelAttributeOutcome
                 */
                ModifyDirectConnectTunnelAttributeOutcome ModifyDirectConnectTunnelAttribute(const Model::ModifyDirectConnectTunnelAttributeRequest &request);
                void ModifyDirectConnectTunnelAttributeAsync(const Model::ModifyDirectConnectTunnelAttributeRequest& request, const ModifyDirectConnectTunnelAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDirectConnectTunnelAttributeOutcomeCallable ModifyDirectConnectTunnelAttributeCallable(const Model::ModifyDirectConnectTunnelAttributeRequest& request);

                /**
                 *修改专用通道扩展信息。
                 * @param req ModifyDirectConnectTunnelExtraRequest
                 * @return ModifyDirectConnectTunnelExtraOutcome
                 */
                ModifyDirectConnectTunnelExtraOutcome ModifyDirectConnectTunnelExtra(const Model::ModifyDirectConnectTunnelExtraRequest &request);
                void ModifyDirectConnectTunnelExtraAsync(const Model::ModifyDirectConnectTunnelExtraRequest& request, const ModifyDirectConnectTunnelExtraAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDirectConnectTunnelExtraOutcomeCallable ModifyDirectConnectTunnelExtraCallable(const Model::ModifyDirectConnectTunnelExtraRequest& request);

                /**
                 *拒绝专用通道申请。
                 * @param req RejectDirectConnectTunnelRequest
                 * @return RejectDirectConnectTunnelOutcome
                 */
                RejectDirectConnectTunnelOutcome RejectDirectConnectTunnel(const Model::RejectDirectConnectTunnelRequest &request);
                void RejectDirectConnectTunnelAsync(const Model::RejectDirectConnectTunnelRequest& request, const RejectDirectConnectTunnelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RejectDirectConnectTunnelOutcomeCallable RejectDirectConnectTunnelCallable(const Model::RejectDirectConnectTunnelRequest& request);

                /**
                 *释放已申请的互联网地址
                 * @param req ReleaseInternetAddressRequest
                 * @return ReleaseInternetAddressOutcome
                 */
                ReleaseInternetAddressOutcome ReleaseInternetAddress(const Model::ReleaseInternetAddressRequest &request);
                void ReleaseInternetAddressAsync(const Model::ReleaseInternetAddressRequest& request, const ReleaseInternetAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReleaseInternetAddressOutcomeCallable ReleaseInternetAddressCallable(const Model::ReleaseInternetAddressRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_DCCLIENT_H_
