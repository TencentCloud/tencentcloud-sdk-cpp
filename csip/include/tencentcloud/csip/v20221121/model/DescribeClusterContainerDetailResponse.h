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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERCONTAINERDETAILRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERCONTAINERDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ContainerMountItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeClusterContainerDetail返回参数结构体
                */
                class DescribeClusterContainerDetailResponse : public AbstractModel
                {
                public:
                    DescribeClusterContainerDetailResponse();
                    ~DescribeClusterContainerDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>主账号AppID</p>
                     * @return AppID <p>主账号AppID</p>
                     * 
                     */
                    int64_t GetAppID() const;

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取<p>容器ID</p>
                     * @return ContainerId <p>容器ID</p>
                     * 
                     */
                    std::string GetContainerId() const;

                    /**
                     * 判断参数 ContainerId 是否已赋值
                     * @return ContainerId 是否已赋值
                     * 
                     */
                    bool ContainerIdHasBeenSet() const;

                    /**
                     * 获取<p>容器启动CMD</p>
                     * @return Cmd <p>容器启动CMD</p>
                     * 
                     */
                    std::string GetCmd() const;

                    /**
                     * 判断参数 Cmd 是否已赋值
                     * @return Cmd 是否已赋值
                     * 
                     */
                    bool CmdHasBeenSet() const;

                    /**
                     * 获取<p>容器创建时间</p>
                     * @return CreateTime <p>容器创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>运行状态</p>
                     * @return RunStatus <p>运行状态</p>
                     * 
                     */
                    std::string GetRunStatus() const;

                    /**
                     * 判断参数 RunStatus 是否已赋值
                     * @return RunStatus 是否已赋值
                     * 
                     */
                    bool RunStatusHasBeenSet() const;

                    /**
                     * 获取<p>隔离状态</p>
                     * @return IsolateStatus <p>隔离状态</p>
                     * 
                     */
                    std::string GetIsolateStatus() const;

                    /**
                     * 判断参数 IsolateStatus 是否已赋值
                     * @return IsolateStatus 是否已赋值
                     * 
                     */
                    bool IsolateStatusHasBeenSet() const;

                    /**
                     * 获取<p>严重风险事件数</p>
                     * @return RiskEventCriticalCount <p>严重风险事件数</p>
                     * @deprecated
                     */
                    int64_t GetRiskEventCriticalCount() const;

                    /**
                     * 判断参数 RiskEventCriticalCount 是否已赋值
                     * @return RiskEventCriticalCount 是否已赋值
                     * @deprecated
                     */
                    bool RiskEventCriticalCountHasBeenSet() const;

                    /**
                     * 获取<p>高风险事件数</p>
                     * @return RiskEventHighCount <p>高风险事件数</p>
                     * @deprecated
                     */
                    int64_t GetRiskEventHighCount() const;

                    /**
                     * 判断参数 RiskEventHighCount 是否已赋值
                     * @return RiskEventHighCount 是否已赋值
                     * @deprecated
                     */
                    bool RiskEventHighCountHasBeenSet() const;

                    /**
                     * 获取<p>中风险事件数</p>
                     * @return RiskEventMiddleCount <p>中风险事件数</p>
                     * @deprecated
                     */
                    int64_t GetRiskEventMiddleCount() const;

                    /**
                     * 判断参数 RiskEventMiddleCount 是否已赋值
                     * @return RiskEventMiddleCount 是否已赋值
                     * @deprecated
                     */
                    bool RiskEventMiddleCountHasBeenSet() const;

                    /**
                     * 获取<p>低风险事件数</p>
                     * @return RiskEventLowCount <p>低风险事件数</p>
                     * @deprecated
                     */
                    int64_t GetRiskEventLowCount() const;

                    /**
                     * 判断参数 RiskEventLowCount 是否已赋值
                     * @return RiskEventLowCount 是否已赋值
                     * @deprecated
                     */
                    bool RiskEventLowCountHasBeenSet() const;

                    /**
                     * 获取<p>镜像名称</p>
                     * @return ImageName <p>镜像名称</p>
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     * 
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取<p>镜像ID</p>
                     * @return ImageId <p>镜像ID</p>
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取<p>镜像大小</p>
                     * @return ImageSize <p>镜像大小</p>
                     * 
                     */
                    std::string GetImageSize() const;

                    /**
                     * 判断参数 ImageSize 是否已赋值
                     * @return ImageSize 是否已赋值
                     * 
                     */
                    bool ImageSizeHasBeenSet() const;

                    /**
                     * 获取<p>镜像创建时间</p>
                     * @return ImageCreateTime <p>镜像创建时间</p>
                     * 
                     */
                    std::string GetImageCreateTime() const;

                    /**
                     * 判断参数 ImageCreateTime 是否已赋值
                     * @return ImageCreateTime 是否已赋值
                     * 
                     */
                    bool ImageCreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>节点名称</p>
                     * @return NodeName <p>节点名称</p>
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取<p>节点内网IP</p>
                     * @return NodeInternalIP <p>节点内网IP</p>
                     * 
                     */
                    std::string GetNodeInternalIP() const;

                    /**
                     * 判断参数 NodeInternalIP 是否已赋值
                     * @return NodeInternalIP 是否已赋值
                     * 
                     */
                    bool NodeInternalIPHasBeenSet() const;

                    /**
                     * 获取<p>节点运行状态</p>
                     * @return NodeRunStatus <p>节点运行状态</p>
                     * 
                     */
                    std::string GetNodeRunStatus() const;

                    /**
                     * 判断参数 NodeRunStatus 是否已赋值
                     * @return NodeRunStatus 是否已赋值
                     * 
                     */
                    bool NodeRunStatusHasBeenSet() const;

                    /**
                     * 获取<p>挂载信息列表</p>
                     * @return Mounts <p>挂载信息列表</p>
                     * 
                     */
                    std::vector<ContainerMountItem> GetMounts() const;

                    /**
                     * 判断参数 Mounts 是否已赋值
                     * @return Mounts 是否已赋值
                     * 
                     */
                    bool MountsHasBeenSet() const;

                    /**
                     * 获取<p>网络名称</p>
                     * @return NetworkName <p>网络名称</p>
                     * 
                     */
                    std::string GetNetworkName() const;

                    /**
                     * 判断参数 NetworkName 是否已赋值
                     * @return NetworkName 是否已赋值
                     * 
                     */
                    bool NetworkNameHasBeenSet() const;

                    /**
                     * 获取<p>网络模式</p>
                     * @return NetworkMode <p>网络模式</p>
                     * 
                     */
                    std::string GetNetworkMode() const;

                    /**
                     * 判断参数 NetworkMode 是否已赋值
                     * @return NetworkMode 是否已赋值
                     * 
                     */
                    bool NetworkModeHasBeenSet() const;

                    /**
                     * 获取<p>网络ID</p>
                     * @return NetworkId <p>网络ID</p>
                     * 
                     */
                    std::string GetNetworkId() const;

                    /**
                     * 判断参数 NetworkId 是否已赋值
                     * @return NetworkId 是否已赋值
                     * 
                     */
                    bool NetworkIdHasBeenSet() const;

                    /**
                     * 获取<p>端点ID</p>
                     * @return EndpointId <p>端点ID</p>
                     * 
                     */
                    std::string GetEndpointId() const;

                    /**
                     * 判断参数 EndpointId 是否已赋值
                     * @return EndpointId 是否已赋值
                     * 
                     */
                    bool EndpointIdHasBeenSet() const;

                    /**
                     * 获取<p>网关地址</p>
                     * @return Gateway <p>网关地址</p>
                     * 
                     */
                    std::string GetGateway() const;

                    /**
                     * 判断参数 Gateway 是否已赋值
                     * @return Gateway 是否已赋值
                     * 
                     */
                    bool GatewayHasBeenSet() const;

                    /**
                     * 获取<p>IPv4地址</p>
                     * @return IPv4 <p>IPv4地址</p>
                     * 
                     */
                    std::string GetIPv4() const;

                    /**
                     * 判断参数 IPv4 是否已赋值
                     * @return IPv4 是否已赋值
                     * 
                     */
                    bool IPv4HasBeenSet() const;

                    /**
                     * 获取<p>IPv6地址</p>
                     * @return IPv6 <p>IPv6地址</p>
                     * 
                     */
                    std::string GetIPv6() const;

                    /**
                     * 判断参数 IPv6 是否已赋值
                     * @return IPv6 是否已赋值
                     * 
                     */
                    bool IPv6HasBeenSet() const;

                    /**
                     * 获取<p>MAC地址</p>
                     * @return MAC <p>MAC地址</p>
                     * 
                     */
                    std::string GetMAC() const;

                    /**
                     * 判断参数 MAC 是否已赋值
                     * @return MAC 是否已赋值
                     * 
                     */
                    bool MACHasBeenSet() const;

                    /**
                     * 获取<p>容器名称</p>
                     * @return ContainerName <p>容器名称</p>
                     * 
                     */
                    std::string GetContainerName() const;

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     * 
                     */
                    bool ContainerNameHasBeenSet() const;

                    /**
                     * 获取<p>节点实例ID</p>
                     * @return NodeInstanceId <p>节点实例ID</p>
                     * 
                     */
                    std::string GetNodeInstanceId() const;

                    /**
                     * 判断参数 NodeInstanceId 是否已赋值
                     * @return NodeInstanceId 是否已赋值
                     * 
                     */
                    bool NodeInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>容器关联节点的节点类型</p>
                     * @return NodeType <p>容器关联节点的节点类型</p>
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取<p>容器关联节点的节点唯一ID</p>
                     * @return NodeUniqueID <p>容器关联节点的节点唯一ID</p>
                     * 
                     */
                    std::string GetNodeUniqueID() const;

                    /**
                     * 判断参数 NodeUniqueID 是否已赋值
                     * @return NodeUniqueID 是否已赋值
                     * 
                     */
                    bool NodeUniqueIDHasBeenSet() const;

                    /**
                     * 获取<p>容器关联集群的集群ca证书md5值，集群的唯一标识</p>
                     * @return ClusterCaMD5 <p>容器关联集群的集群ca证书md5值，集群的唯一标识</p>
                     * 
                     */
                    std::string GetClusterCaMD5() const;

                    /**
                     * 判断参数 ClusterCaMD5 是否已赋值
                     * @return ClusterCaMD5 是否已赋值
                     * 
                     */
                    bool ClusterCaMD5HasBeenSet() const;

                    /**
                     * 获取<p>容器镜像能否关联到镜像仓库中的记录</p>
                     * @return EnableLinkImage <p>容器镜像能否关联到镜像仓库中的记录</p>
                     * 
                     */
                    bool GetEnableLinkImage() const;

                    /**
                     * 判断参数 EnableLinkImage 是否已赋值
                     * @return EnableLinkImage 是否已赋值
                     * 
                     */
                    bool EnableLinkImageHasBeenSet() const;

                private:

                    /**
                     * <p>主账号AppID</p>
                     */
                    int64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * <p>容器ID</p>
                     */
                    std::string m_containerId;
                    bool m_containerIdHasBeenSet;

                    /**
                     * <p>容器启动CMD</p>
                     */
                    std::string m_cmd;
                    bool m_cmdHasBeenSet;

                    /**
                     * <p>容器创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>运行状态</p>
                     */
                    std::string m_runStatus;
                    bool m_runStatusHasBeenSet;

                    /**
                     * <p>隔离状态</p>
                     */
                    std::string m_isolateStatus;
                    bool m_isolateStatusHasBeenSet;

                    /**
                     * <p>严重风险事件数</p>
                     */
                    int64_t m_riskEventCriticalCount;
                    bool m_riskEventCriticalCountHasBeenSet;

                    /**
                     * <p>高风险事件数</p>
                     */
                    int64_t m_riskEventHighCount;
                    bool m_riskEventHighCountHasBeenSet;

                    /**
                     * <p>中风险事件数</p>
                     */
                    int64_t m_riskEventMiddleCount;
                    bool m_riskEventMiddleCountHasBeenSet;

                    /**
                     * <p>低风险事件数</p>
                     */
                    int64_t m_riskEventLowCount;
                    bool m_riskEventLowCountHasBeenSet;

                    /**
                     * <p>镜像名称</p>
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * <p>镜像ID</p>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * <p>镜像大小</p>
                     */
                    std::string m_imageSize;
                    bool m_imageSizeHasBeenSet;

                    /**
                     * <p>镜像创建时间</p>
                     */
                    std::string m_imageCreateTime;
                    bool m_imageCreateTimeHasBeenSet;

                    /**
                     * <p>节点名称</p>
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * <p>节点内网IP</p>
                     */
                    std::string m_nodeInternalIP;
                    bool m_nodeInternalIPHasBeenSet;

                    /**
                     * <p>节点运行状态</p>
                     */
                    std::string m_nodeRunStatus;
                    bool m_nodeRunStatusHasBeenSet;

                    /**
                     * <p>挂载信息列表</p>
                     */
                    std::vector<ContainerMountItem> m_mounts;
                    bool m_mountsHasBeenSet;

                    /**
                     * <p>网络名称</p>
                     */
                    std::string m_networkName;
                    bool m_networkNameHasBeenSet;

                    /**
                     * <p>网络模式</p>
                     */
                    std::string m_networkMode;
                    bool m_networkModeHasBeenSet;

                    /**
                     * <p>网络ID</p>
                     */
                    std::string m_networkId;
                    bool m_networkIdHasBeenSet;

                    /**
                     * <p>端点ID</p>
                     */
                    std::string m_endpointId;
                    bool m_endpointIdHasBeenSet;

                    /**
                     * <p>网关地址</p>
                     */
                    std::string m_gateway;
                    bool m_gatewayHasBeenSet;

                    /**
                     * <p>IPv4地址</p>
                     */
                    std::string m_iPv4;
                    bool m_iPv4HasBeenSet;

                    /**
                     * <p>IPv6地址</p>
                     */
                    std::string m_iPv6;
                    bool m_iPv6HasBeenSet;

                    /**
                     * <p>MAC地址</p>
                     */
                    std::string m_mAC;
                    bool m_mACHasBeenSet;

                    /**
                     * <p>容器名称</p>
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * <p>节点实例ID</p>
                     */
                    std::string m_nodeInstanceId;
                    bool m_nodeInstanceIdHasBeenSet;

                    /**
                     * <p>容器关联节点的节点类型</p>
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * <p>容器关联节点的节点唯一ID</p>
                     */
                    std::string m_nodeUniqueID;
                    bool m_nodeUniqueIDHasBeenSet;

                    /**
                     * <p>容器关联集群的集群ca证书md5值，集群的唯一标识</p>
                     */
                    std::string m_clusterCaMD5;
                    bool m_clusterCaMD5HasBeenSet;

                    /**
                     * <p>容器镜像能否关联到镜像仓库中的记录</p>
                     */
                    bool m_enableLinkImage;
                    bool m_enableLinkImageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERCONTAINERDETAILRESPONSE_H_
