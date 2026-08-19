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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERSUPERNODEINFORESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERSUPERNODEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeClusterSuperNodeInfo返回参数结构体
                */
                class DescribeClusterSuperNodeInfoResponse : public AbstractModel
                {
                public:
                    DescribeClusterSuperNodeInfoResponse();
                    ~DescribeClusterSuperNodeInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>所属地域 code（原样，如 ap-chengdu）。</p>
                     * @return Region <p>所属地域 code（原样，如 ap-chengdu）。</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>地域中文名（如 西南地区（成都）；由地域 code 经字典翻译得到）。</p>
                     * @return RegionName <p>地域中文名（如 西南地区（成都）；由地域 code 经字典翻译得到）。</p>
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     * 
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取<p>地域英文名（如 Southwest China (Chengdu)；由地域 code 经字典翻译得到）。</p>
                     * @return RegionNameEn <p>地域英文名（如 Southwest China (Chengdu)；由地域 code 经字典翻译得到）。</p>
                     * 
                     */
                    std::string GetRegionNameEn() const;

                    /**
                     * 判断参数 RegionNameEn 是否已赋值
                     * @return RegionNameEn 是否已赋值
                     * 
                     */
                    bool RegionNameEnHasBeenSet() const;

                    /**
                     * 获取<p>可用区（中文名，由可用区 code 经字典翻译得到）。</p>
                     * @return Zone <p>可用区（中文名，由可用区 code 经字典翻译得到）。</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取<p>资产最后更新时间。<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式，UTC时区）</p>
                     * @return AssetSyncTime <p>资产最后更新时间。<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式，UTC时区）</p>
                     * 
                     */
                    std::string GetAssetSyncTime() const;

                    /**
                     * 判断参数 AssetSyncTime 是否已赋值
                     * @return AssetSyncTime 是否已赋值
                     * 
                     */
                    bool AssetSyncTimeHasBeenSet() const;

                    /**
                     * 获取<p>节点来源（所属集群类型）。<br>枚举值：<br>TKE_MANAGED_CLUSTER：腾讯云标准集群<br>TKE_INDEPENDENT_CLUSTER：腾讯云标准集群（Master自维护）<br>TKE_SERVERLESS_CLUSTER：腾讯云Serverless集群<br>TKE_EDGE_CLUSTER：腾讯云边缘集群<br>SELF_BUILT：腾讯云内自建集群<br>SELF_BUILT_OTHER：非腾讯云自建集群（混合云）</p>
                     * @return NodeSource <p>节点来源（所属集群类型）。<br>枚举值：<br>TKE_MANAGED_CLUSTER：腾讯云标准集群<br>TKE_INDEPENDENT_CLUSTER：腾讯云标准集群（Master自维护）<br>TKE_SERVERLESS_CLUSTER：腾讯云Serverless集群<br>TKE_EDGE_CLUSTER：腾讯云边缘集群<br>SELF_BUILT：腾讯云内自建集群<br>SELF_BUILT_OTHER：非腾讯云自建集群（混合云）</p>
                     * 
                     */
                    std::string GetNodeSource() const;

                    /**
                     * 判断参数 NodeSource 是否已赋值
                     * @return NodeSource 是否已赋值
                     * 
                     */
                    bool NodeSourceHasBeenSet() const;

                    /**
                     * 获取<p>子网名称。</p>
                     * @return SubNetName <p>子网名称。</p>
                     * 
                     */
                    std::string GetSubNetName() const;

                    /**
                     * 判断参数 SubNetName 是否已赋值
                     * @return SubNetName 是否已赋值
                     * 
                     */
                    bool SubNetNameHasBeenSet() const;

                    /**
                     * 获取<p>子网 ID。</p>
                     * @return SubNetId <p>子网 ID。</p>
                     * 
                     */
                    std::string GetSubNetId() const;

                    /**
                     * 判断参数 SubNetId 是否已赋值
                     * @return SubNetId 是否已赋值
                     * 
                     */
                    bool SubNetIdHasBeenSet() const;

                    /**
                     * 获取<p>子网网段（CIDR）。</p>
                     * @return SubNetCIDR <p>子网网段（CIDR）。</p>
                     * 
                     */
                    std::string GetSubNetCIDR() const;

                    /**
                     * 判断参数 SubNetCIDR 是否已赋值
                     * @return SubNetCIDR 是否已赋值
                     * 
                     */
                    bool SubNetCIDRHasBeenSet() const;

                    /**
                     * 获取<p>核数（由 cpu_request 除以 1000 得到）。<br>单位：核</p>
                     * @return CoresCount <p>核数（由 cpu_request 除以 1000 得到）。<br>单位：核</p>
                     * 
                     */
                    int64_t GetCoresCount() const;

                    /**
                     * 判断参数 CoresCount 是否已赋值
                     * @return CoresCount 是否已赋值
                     * 
                     */
                    bool CoresCountHasBeenSet() const;

                    /**
                     * 获取<p>所属集群名称。</p>
                     * @return ClusterName <p>所属集群名称。</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取<p>所属集群 ID。</p>
                     * @return ClusterId <p>所属集群 ID。</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>所属集群运行状态。<br>枚举值：<br>Running：运行中<br>Exception：异常<br>Unknown：未知<br>Creating：创建中<br>Destroyed：已销毁</p>
                     * @return Status <p>所属集群运行状态。<br>枚举值：<br>Running：运行中<br>Exception：异常<br>Unknown：未知<br>Creating：创建中<br>Destroyed：已销毁</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Kubernetes 版本。</p>
                     * @return ClusterVersion <p>Kubernetes 版本。</p>
                     * 
                     */
                    std::string GetClusterVersion() const;

                    /**
                     * 判断参数 ClusterVersion 是否已赋值
                     * @return ClusterVersion 是否已赋值
                     * 
                     */
                    bool ClusterVersionHasBeenSet() const;

                    /**
                     * 获取<p>Kubelet 版本。</p>
                     * @return KubeletVersion <p>Kubelet 版本。</p>
                     * 
                     */
                    std::string GetKubeletVersion() const;

                    /**
                     * 判断参数 KubeletVersion 是否已赋值
                     * @return KubeletVersion 是否已赋值
                     * 
                     */
                    bool KubeletVersionHasBeenSet() const;

                    /**
                     * 获取<p>超级节点所属账号APPID</p>
                     * @return AppID <p>超级节点所属账号APPID</p>
                     * 
                     */
                    uint64_t GetAppID() const;

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取<p>超级节点实例ID</p>
                     * @return InstanceId <p>超级节点实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>超级节点名称</p>
                     * @return NodeName <p>超级节点名称</p>
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
                     * 获取<p>VPCID</p>
                     * @return VpcId <p>VPCID</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                private:

                    /**
                     * <p>所属地域 code（原样，如 ap-chengdu）。</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>地域中文名（如 西南地区（成都）；由地域 code 经字典翻译得到）。</p>
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * <p>地域英文名（如 Southwest China (Chengdu)；由地域 code 经字典翻译得到）。</p>
                     */
                    std::string m_regionNameEn;
                    bool m_regionNameEnHasBeenSet;

                    /**
                     * <p>可用区（中文名，由可用区 code 经字典翻译得到）。</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>资产最后更新时间。<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式，UTC时区）</p>
                     */
                    std::string m_assetSyncTime;
                    bool m_assetSyncTimeHasBeenSet;

                    /**
                     * <p>节点来源（所属集群类型）。<br>枚举值：<br>TKE_MANAGED_CLUSTER：腾讯云标准集群<br>TKE_INDEPENDENT_CLUSTER：腾讯云标准集群（Master自维护）<br>TKE_SERVERLESS_CLUSTER：腾讯云Serverless集群<br>TKE_EDGE_CLUSTER：腾讯云边缘集群<br>SELF_BUILT：腾讯云内自建集群<br>SELF_BUILT_OTHER：非腾讯云自建集群（混合云）</p>
                     */
                    std::string m_nodeSource;
                    bool m_nodeSourceHasBeenSet;

                    /**
                     * <p>子网名称。</p>
                     */
                    std::string m_subNetName;
                    bool m_subNetNameHasBeenSet;

                    /**
                     * <p>子网 ID。</p>
                     */
                    std::string m_subNetId;
                    bool m_subNetIdHasBeenSet;

                    /**
                     * <p>子网网段（CIDR）。</p>
                     */
                    std::string m_subNetCIDR;
                    bool m_subNetCIDRHasBeenSet;

                    /**
                     * <p>核数（由 cpu_request 除以 1000 得到）。<br>单位：核</p>
                     */
                    int64_t m_coresCount;
                    bool m_coresCountHasBeenSet;

                    /**
                     * <p>所属集群名称。</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>所属集群 ID。</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>所属集群运行状态。<br>枚举值：<br>Running：运行中<br>Exception：异常<br>Unknown：未知<br>Creating：创建中<br>Destroyed：已销毁</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Kubernetes 版本。</p>
                     */
                    std::string m_clusterVersion;
                    bool m_clusterVersionHasBeenSet;

                    /**
                     * <p>Kubelet 版本。</p>
                     */
                    std::string m_kubeletVersion;
                    bool m_kubeletVersionHasBeenSet;

                    /**
                     * <p>超级节点所属账号APPID</p>
                     */
                    uint64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * <p>超级节点实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>超级节点名称</p>
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * <p>VPCID</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERSUPERNODEINFORESPONSE_H_
