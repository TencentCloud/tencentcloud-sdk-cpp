/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_EDGEZONE_V20260401_EDGEZONECLIENT_H_
#define TENCENTCLOUD_EDGEZONE_V20260401_EDGEZONECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/edgezone/v20260401/model/ApplyPublicIpsRequest.h>
#include <tencentcloud/edgezone/v20260401/model/ApplyPublicIpsResponse.h>
#include <tencentcloud/edgezone/v20260401/model/CreateEdgeNodeServiceRequest.h>
#include <tencentcloud/edgezone/v20260401/model/CreateEdgeNodeServiceResponse.h>
#include <tencentcloud/edgezone/v20260401/model/CreateInstancesRequest.h>
#include <tencentcloud/edgezone/v20260401/model/CreateInstancesResponse.h>
#include <tencentcloud/edgezone/v20260401/model/CreatePrivateNetworkInstanceRequest.h>
#include <tencentcloud/edgezone/v20260401/model/CreatePrivateNetworkInstanceResponse.h>
#include <tencentcloud/edgezone/v20260401/model/CreatePublicNetworkInstanceRequest.h>
#include <tencentcloud/edgezone/v20260401/model/CreatePublicNetworkInstanceResponse.h>
#include <tencentcloud/edgezone/v20260401/model/DeletePrivateNetworkInstanceRequest.h>
#include <tencentcloud/edgezone/v20260401/model/DeletePrivateNetworkInstanceResponse.h>
#include <tencentcloud/edgezone/v20260401/model/DeletePublicNetworkInstanceRequest.h>
#include <tencentcloud/edgezone/v20260401/model/DeletePublicNetworkInstanceResponse.h>
#include <tencentcloud/edgezone/v20260401/model/DescribeInstanceTypesRequest.h>
#include <tencentcloud/edgezone/v20260401/model/DescribeInstanceTypesResponse.h>
#include <tencentcloud/edgezone/v20260401/model/DescribeInstancesRequest.h>
#include <tencentcloud/edgezone/v20260401/model/DescribeInstancesResponse.h>
#include <tencentcloud/edgezone/v20260401/model/DescribePrivateNetworkInstancesRequest.h>
#include <tencentcloud/edgezone/v20260401/model/DescribePrivateNetworkInstancesResponse.h>
#include <tencentcloud/edgezone/v20260401/model/DescribePublicIpsRequest.h>
#include <tencentcloud/edgezone/v20260401/model/DescribePublicIpsResponse.h>
#include <tencentcloud/edgezone/v20260401/model/DescribePublicNetworkInstancesRequest.h>
#include <tencentcloud/edgezone/v20260401/model/DescribePublicNetworkInstancesResponse.h>
#include <tencentcloud/edgezone/v20260401/model/DescribeZoneDataRequest.h>
#include <tencentcloud/edgezone/v20260401/model/DescribeZoneDataResponse.h>
#include <tencentcloud/edgezone/v20260401/model/DescribeZonesRequest.h>
#include <tencentcloud/edgezone/v20260401/model/DescribeZonesResponse.h>
#include <tencentcloud/edgezone/v20260401/model/ModifyInstanceAttributeRequest.h>
#include <tencentcloud/edgezone/v20260401/model/ModifyInstanceAttributeResponse.h>
#include <tencentcloud/edgezone/v20260401/model/ModifyPrivateNetworkInstanceRequest.h>
#include <tencentcloud/edgezone/v20260401/model/ModifyPrivateNetworkInstanceResponse.h>
#include <tencentcloud/edgezone/v20260401/model/ModifyPublicNetworkInstanceRequest.h>
#include <tencentcloud/edgezone/v20260401/model/ModifyPublicNetworkInstanceResponse.h>
#include <tencentcloud/edgezone/v20260401/model/ReleasePublicIpRequest.h>
#include <tencentcloud/edgezone/v20260401/model/ReleasePublicIpResponse.h>
#include <tencentcloud/edgezone/v20260401/model/TerminateInstancesRequest.h>
#include <tencentcloud/edgezone/v20260401/model/TerminateInstancesResponse.h>


namespace TencentCloud
{
    namespace Edgezone
    {
        namespace V20260401
        {
            class EdgezoneClient : public AbstractClient
            {
            public:
                EdgezoneClient(const Credential &credential, const std::string &region);
                EdgezoneClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ApplyPublicIpsResponse> ApplyPublicIpsOutcome;
                typedef std::future<ApplyPublicIpsOutcome> ApplyPublicIpsOutcomeCallable;
                typedef std::function<void(const EdgezoneClient*, const Model::ApplyPublicIpsRequest&, ApplyPublicIpsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyPublicIpsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEdgeNodeServiceResponse> CreateEdgeNodeServiceOutcome;
                typedef std::future<CreateEdgeNodeServiceOutcome> CreateEdgeNodeServiceOutcomeCallable;
                typedef std::function<void(const EdgezoneClient*, const Model::CreateEdgeNodeServiceRequest&, CreateEdgeNodeServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEdgeNodeServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInstancesResponse> CreateInstancesOutcome;
                typedef std::future<CreateInstancesOutcome> CreateInstancesOutcomeCallable;
                typedef std::function<void(const EdgezoneClient*, const Model::CreateInstancesRequest&, CreateInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrivateNetworkInstanceResponse> CreatePrivateNetworkInstanceOutcome;
                typedef std::future<CreatePrivateNetworkInstanceOutcome> CreatePrivateNetworkInstanceOutcomeCallable;
                typedef std::function<void(const EdgezoneClient*, const Model::CreatePrivateNetworkInstanceRequest&, CreatePrivateNetworkInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrivateNetworkInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePublicNetworkInstanceResponse> CreatePublicNetworkInstanceOutcome;
                typedef std::future<CreatePublicNetworkInstanceOutcome> CreatePublicNetworkInstanceOutcomeCallable;
                typedef std::function<void(const EdgezoneClient*, const Model::CreatePublicNetworkInstanceRequest&, CreatePublicNetworkInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePublicNetworkInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePrivateNetworkInstanceResponse> DeletePrivateNetworkInstanceOutcome;
                typedef std::future<DeletePrivateNetworkInstanceOutcome> DeletePrivateNetworkInstanceOutcomeCallable;
                typedef std::function<void(const EdgezoneClient*, const Model::DeletePrivateNetworkInstanceRequest&, DeletePrivateNetworkInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrivateNetworkInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePublicNetworkInstanceResponse> DeletePublicNetworkInstanceOutcome;
                typedef std::future<DeletePublicNetworkInstanceOutcome> DeletePublicNetworkInstanceOutcomeCallable;
                typedef std::function<void(const EdgezoneClient*, const Model::DeletePublicNetworkInstanceRequest&, DeletePublicNetworkInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePublicNetworkInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceTypesResponse> DescribeInstanceTypesOutcome;
                typedef std::future<DescribeInstanceTypesOutcome> DescribeInstanceTypesOutcomeCallable;
                typedef std::function<void(const EdgezoneClient*, const Model::DescribeInstanceTypesRequest&, DescribeInstanceTypesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceTypesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesResponse> DescribeInstancesOutcome;
                typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
                typedef std::function<void(const EdgezoneClient*, const Model::DescribeInstancesRequest&, DescribeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrivateNetworkInstancesResponse> DescribePrivateNetworkInstancesOutcome;
                typedef std::future<DescribePrivateNetworkInstancesOutcome> DescribePrivateNetworkInstancesOutcomeCallable;
                typedef std::function<void(const EdgezoneClient*, const Model::DescribePrivateNetworkInstancesRequest&, DescribePrivateNetworkInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrivateNetworkInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePublicIpsResponse> DescribePublicIpsOutcome;
                typedef std::future<DescribePublicIpsOutcome> DescribePublicIpsOutcomeCallable;
                typedef std::function<void(const EdgezoneClient*, const Model::DescribePublicIpsRequest&, DescribePublicIpsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePublicIpsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePublicNetworkInstancesResponse> DescribePublicNetworkInstancesOutcome;
                typedef std::future<DescribePublicNetworkInstancesOutcome> DescribePublicNetworkInstancesOutcomeCallable;
                typedef std::function<void(const EdgezoneClient*, const Model::DescribePublicNetworkInstancesRequest&, DescribePublicNetworkInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePublicNetworkInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZoneDataResponse> DescribeZoneDataOutcome;
                typedef std::future<DescribeZoneDataOutcome> DescribeZoneDataOutcomeCallable;
                typedef std::function<void(const EdgezoneClient*, const Model::DescribeZoneDataRequest&, DescribeZoneDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZoneDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZonesResponse> DescribeZonesOutcome;
                typedef std::future<DescribeZonesOutcome> DescribeZonesOutcomeCallable;
                typedef std::function<void(const EdgezoneClient*, const Model::DescribeZonesRequest&, DescribeZonesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZonesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceAttributeResponse> ModifyInstanceAttributeOutcome;
                typedef std::future<ModifyInstanceAttributeOutcome> ModifyInstanceAttributeOutcomeCallable;
                typedef std::function<void(const EdgezoneClient*, const Model::ModifyInstanceAttributeRequest&, ModifyInstanceAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPrivateNetworkInstanceResponse> ModifyPrivateNetworkInstanceOutcome;
                typedef std::future<ModifyPrivateNetworkInstanceOutcome> ModifyPrivateNetworkInstanceOutcomeCallable;
                typedef std::function<void(const EdgezoneClient*, const Model::ModifyPrivateNetworkInstanceRequest&, ModifyPrivateNetworkInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPrivateNetworkInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPublicNetworkInstanceResponse> ModifyPublicNetworkInstanceOutcome;
                typedef std::future<ModifyPublicNetworkInstanceOutcome> ModifyPublicNetworkInstanceOutcomeCallable;
                typedef std::function<void(const EdgezoneClient*, const Model::ModifyPublicNetworkInstanceRequest&, ModifyPublicNetworkInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPublicNetworkInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ReleasePublicIpResponse> ReleasePublicIpOutcome;
                typedef std::future<ReleasePublicIpOutcome> ReleasePublicIpOutcomeCallable;
                typedef std::function<void(const EdgezoneClient*, const Model::ReleasePublicIpRequest&, ReleasePublicIpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReleasePublicIpAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminateInstancesResponse> TerminateInstancesOutcome;
                typedef std::future<TerminateInstancesOutcome> TerminateInstancesOutcomeCallable;
                typedef std::function<void(const EdgezoneClient*, const Model::TerminateInstancesRequest&, TerminateInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateInstancesAsyncHandler;



                /**
                 *从静态 IP 池为指定公网实例批量申请多个 Ip 地址（随机分配）。申请前需检查用户配额。
此接口仅适用于 `RouteMode=static` 的公网实例。BGP/OSPF 实例调用此接口将返回错误。
                 * @param req ApplyPublicIpsRequest
                 * @return ApplyPublicIpsOutcome
                 */
                ApplyPublicIpsOutcome ApplyPublicIps(const Model::ApplyPublicIpsRequest &request);
                void ApplyPublicIpsAsync(const Model::ApplyPublicIpsRequest& request, const ApplyPublicIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyPublicIpsOutcomeCallable ApplyPublicIpsCallable(const Model::ApplyPublicIpsRequest& request);

                /**
                 *开通边缘节点计费服务。
                 * @param req CreateEdgeNodeServiceRequest
                 * @return CreateEdgeNodeServiceOutcome
                 */
                CreateEdgeNodeServiceOutcome CreateEdgeNodeService(const Model::CreateEdgeNodeServiceRequest &request);
                void CreateEdgeNodeServiceAsync(const Model::CreateEdgeNodeServiceRequest& request, const CreateEdgeNodeServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEdgeNodeServiceOutcomeCallable CreateEdgeNodeServiceCallable(const Model::CreateEdgeNodeServiceRequest& request);

                /**
                 *创建物理机实例，系统自动分配物理机资源并完成装机。如果用户未在当前可用区开通计费，系统自动开通。支持并发分配物理机资源，异步执行网络分配和装机任务。
                 * @param req CreateInstancesRequest
                 * @return CreateInstancesOutcome
                 */
                CreateInstancesOutcome CreateInstances(const Model::CreateInstancesRequest &request);
                void CreateInstancesAsync(const Model::CreateInstancesRequest& request, const CreateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstancesOutcomeCallable CreateInstancesCallable(const Model::CreateInstancesRequest& request);

                /**
                 *创建私网实例，一个用户在一个可用区仅支持创建一个私网实例，网络地址由 Network（网络号）和 Mask（掩码位数）两个参数共同决定子网范围。Network 必须是三个 RFC 1918 私有地址段之一的合法网络地址：10.0.0.0/8、172.16.0.0/12 或 192.168.0.0/16，且 host 位必须全为 0（即Network 与 Mask 组合后不能有主机位被置位，例如 10.0.0.1/24 是非法的，应填 10.0.0.0/24）。Mask 的上限统一为 28，下限由所属地址段决定：10.x.x.x 段允许 8～28，172.16.x.x 段允许 12～28，192.168.x.x 段允许 16～28。
                 * @param req CreatePrivateNetworkInstanceRequest
                 * @return CreatePrivateNetworkInstanceOutcome
                 */
                CreatePrivateNetworkInstanceOutcome CreatePrivateNetworkInstance(const Model::CreatePrivateNetworkInstanceRequest &request);
                void CreatePrivateNetworkInstanceAsync(const Model::CreatePrivateNetworkInstanceRequest& request, const CreatePrivateNetworkInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrivateNetworkInstanceOutcomeCallable CreatePrivateNetworkInstanceCallable(const Model::CreatePrivateNetworkInstanceRequest& request);

                /**
                 *用户输入可用区ID、公网实例名称、网络线路、路由模式以创建公网实例，一个用户在一个可用区仅支持创建一个公网实例
路由模式为 **静态** 的公网实例需要用户主动申请和释放公网IP
路由模式为 **OSPF、BGP** 的公网实例在创建时自动分配公网IP段，销毁时自动释放公网IP段
                 * @param req CreatePublicNetworkInstanceRequest
                 * @return CreatePublicNetworkInstanceOutcome
                 */
                CreatePublicNetworkInstanceOutcome CreatePublicNetworkInstance(const Model::CreatePublicNetworkInstanceRequest &request);
                void CreatePublicNetworkInstanceAsync(const Model::CreatePublicNetworkInstanceRequest& request, const CreatePublicNetworkInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePublicNetworkInstanceOutcomeCallable CreatePublicNetworkInstanceCallable(const Model::CreatePublicNetworkInstanceRequest& request);

                /**
                 *删除私网实例
                 * @param req DeletePrivateNetworkInstanceRequest
                 * @return DeletePrivateNetworkInstanceOutcome
                 */
                DeletePrivateNetworkInstanceOutcome DeletePrivateNetworkInstance(const Model::DeletePrivateNetworkInstanceRequest &request);
                void DeletePrivateNetworkInstanceAsync(const Model::DeletePrivateNetworkInstanceRequest& request, const DeletePrivateNetworkInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePrivateNetworkInstanceOutcomeCallable DeletePrivateNetworkInstanceCallable(const Model::DeletePrivateNetworkInstanceRequest& request);

                /**
                 *修改公网实例信息
                 * @param req DeletePublicNetworkInstanceRequest
                 * @return DeletePublicNetworkInstanceOutcome
                 */
                DeletePublicNetworkInstanceOutcome DeletePublicNetworkInstance(const Model::DeletePublicNetworkInstanceRequest &request);
                void DeletePublicNetworkInstanceAsync(const Model::DeletePublicNetworkInstanceRequest& request, const DeletePublicNetworkInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePublicNetworkInstanceOutcomeCallable DeletePublicNetworkInstanceCallable(const Model::DeletePublicNetworkInstanceRequest& request);

                /**
                 *根据 AppId 查询账号下可用区维度的机型配额列表；若传入 Zone，则仅返回指定可用区下的机型配额；若不传，则返回账号下所有可用区的机型配额。
                 * @param req DescribeInstanceTypesRequest
                 * @return DescribeInstanceTypesOutcome
                 */
                DescribeInstanceTypesOutcome DescribeInstanceTypes(const Model::DescribeInstanceTypesRequest &request);
                void DescribeInstanceTypesAsync(const Model::DescribeInstanceTypesRequest& request, const DescribeInstanceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceTypesOutcomeCallable DescribeInstanceTypesCallable(const Model::DescribeInstanceTypesRequest& request);

                /**
                 *查询物理机实例列表，支持按实例ID、实例名称、可用区、实例状态等条件筛选，并支持分页查询。
                 * @param req DescribeInstancesRequest
                 * @return DescribeInstancesOutcome
                 */
                DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest &request);
                void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request);

                /**
                 *查询私网实例，支持通过私网实例ID、私网实例名称、可用区ID等参数进行查询
                 * @param req DescribePrivateNetworkInstancesRequest
                 * @return DescribePrivateNetworkInstancesOutcome
                 */
                DescribePrivateNetworkInstancesOutcome DescribePrivateNetworkInstances(const Model::DescribePrivateNetworkInstancesRequest &request);
                void DescribePrivateNetworkInstancesAsync(const Model::DescribePrivateNetworkInstancesRequest& request, const DescribePrivateNetworkInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrivateNetworkInstancesOutcomeCallable DescribePrivateNetworkInstancesCallable(const Model::DescribePrivateNetworkInstancesRequest& request);

                /**
                 *查询用户的公网Ip信息，对于路由模式为Static的公网实例，会返回所有已申请的公网Ip信息，对于路由模式为Ospf和Bgp的公网实例，会直接返回网段信息
                 * @param req DescribePublicIpsRequest
                 * @return DescribePublicIpsOutcome
                 */
                DescribePublicIpsOutcome DescribePublicIps(const Model::DescribePublicIpsRequest &request);
                void DescribePublicIpsAsync(const Model::DescribePublicIpsRequest& request, const DescribePublicIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePublicIpsOutcomeCallable DescribePublicIpsCallable(const Model::DescribePublicIpsRequest& request);

                /**
                 *查询公网实例列表，支持按实例ID、实例名称、可用区等条件筛选，并支持分页查询。
                 * @param req DescribePublicNetworkInstancesRequest
                 * @return DescribePublicNetworkInstancesOutcome
                 */
                DescribePublicNetworkInstancesOutcome DescribePublicNetworkInstances(const Model::DescribePublicNetworkInstancesRequest &request);
                void DescribePublicNetworkInstancesAsync(const Model::DescribePublicNetworkInstancesRequest& request, const DescribePublicNetworkInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePublicNetworkInstancesOutcomeCallable DescribePublicNetworkInstancesCallable(const Model::DescribePublicNetworkInstancesRequest& request);

                /**
                 *按指标名，查询统计数据。数据按1分钟间隔统计
                 * @param req DescribeZoneDataRequest
                 * @return DescribeZoneDataOutcome
                 */
                DescribeZoneDataOutcome DescribeZoneData(const Model::DescribeZoneDataRequest &request);
                void DescribeZoneDataAsync(const Model::DescribeZoneDataRequest& request, const DescribeZoneDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZoneDataOutcomeCallable DescribeZoneDataCallable(const Model::DescribeZoneDataRequest& request);

                /**
                 *跨地域聚合查询所有已配置 region 下的可用区列表。支持通过 FilterByAppId 参数控制是否按账号过滤：默认仅返回账号关联的可用区，设为 False 时返回所有可用区。本地域直查数据库，远程地域并发 HTTP 请求后合并返回。
                 * @param req DescribeZonesRequest
                 * @return DescribeZonesOutcome
                 */
                DescribeZonesOutcome DescribeZones(const Model::DescribeZonesRequest &request);
                void DescribeZonesAsync(const Model::DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZonesOutcomeCallable DescribeZonesCallable(const Model::DescribeZonesRequest& request);

                /**
                 *修改物理机实例的属性，支持修改实例名称、变更公网IP（IPv4/IPv6）。InstanceName 和 NewPublicIp 至少传入一个。
                 * @param req ModifyInstanceAttributeRequest
                 * @return ModifyInstanceAttributeOutcome
                 */
                ModifyInstanceAttributeOutcome ModifyInstanceAttribute(const Model::ModifyInstanceAttributeRequest &request);
                void ModifyInstanceAttributeAsync(const Model::ModifyInstanceAttributeRequest& request, const ModifyInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceAttributeOutcomeCallable ModifyInstanceAttributeCallable(const Model::ModifyInstanceAttributeRequest& request);

                /**
                 *修改私网实例信息
                 * @param req ModifyPrivateNetworkInstanceRequest
                 * @return ModifyPrivateNetworkInstanceOutcome
                 */
                ModifyPrivateNetworkInstanceOutcome ModifyPrivateNetworkInstance(const Model::ModifyPrivateNetworkInstanceRequest &request);
                void ModifyPrivateNetworkInstanceAsync(const Model::ModifyPrivateNetworkInstanceRequest& request, const ModifyPrivateNetworkInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPrivateNetworkInstanceOutcomeCallable ModifyPrivateNetworkInstanceCallable(const Model::ModifyPrivateNetworkInstanceRequest& request);

                /**
                 *修改公网实例信息
                 * @param req ModifyPublicNetworkInstanceRequest
                 * @return ModifyPublicNetworkInstanceOutcome
                 */
                ModifyPublicNetworkInstanceOutcome ModifyPublicNetworkInstance(const Model::ModifyPublicNetworkInstanceRequest &request);
                void ModifyPublicNetworkInstanceAsync(const Model::ModifyPublicNetworkInstanceRequest& request, const ModifyPublicNetworkInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPublicNetworkInstanceOutcomeCallable ModifyPublicNetworkInstanceCallable(const Model::ModifyPublicNetworkInstanceRequest& request);

                /**
                 *批量释放已分配给 STATIC 公网实例但**未绑定物理服务器**的 IPv4 地址
此接口仅适用于 STATIC 模式实例。BGP/OSPF 实例的 CIDR 在实例删除时自动归还，无需手动释放单个 IP。
                 * @param req ReleasePublicIpRequest
                 * @return ReleasePublicIpOutcome
                 */
                ReleasePublicIpOutcome ReleasePublicIp(const Model::ReleasePublicIpRequest &request);
                void ReleasePublicIpAsync(const Model::ReleasePublicIpRequest& request, const ReleasePublicIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReleasePublicIpOutcomeCallable ReleasePublicIpCallable(const Model::ReleasePublicIpRequest& request);

                /**
                 *销毁物理机实例，释放资源。接口同步释放网络资源（IP回收）并更新状态为 terminating，后台异步执行磁盘清理。支持部分成功。
                 * @param req TerminateInstancesRequest
                 * @return TerminateInstancesOutcome
                 */
                TerminateInstancesOutcome TerminateInstances(const Model::TerminateInstancesRequest &request);
                void TerminateInstancesAsync(const Model::TerminateInstancesRequest& request, const TerminateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateInstancesOutcomeCallable TerminateInstancesCallable(const Model::TerminateInstancesRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_EDGEZONE_V20260401_EDGEZONECLIENT_H_
