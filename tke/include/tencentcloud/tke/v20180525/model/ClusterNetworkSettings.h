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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERNETWORKSETTINGS_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERNETWORKSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 集群网络相关的参数
                */
                class ClusterNetworkSettings : public AbstractModel
                {
                public:
                    ClusterNetworkSettings();
                    ~ClusterNetworkSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用于分配集群容器和服务 IP 的 CIDR，不得与 VPC CIDR 冲突，也不得与同 VPC 内其他集群 CIDR 冲突
                     * @return ClusterCIDR 用于分配集群容器和服务 IP 的 CIDR，不得与 VPC CIDR 冲突，也不得与同 VPC 内其他集群 CIDR 冲突
                     */
                    std::string GetClusterCIDR() const;

                    /**
                     * 设置用于分配集群容器和服务 IP 的 CIDR，不得与 VPC CIDR 冲突，也不得与同 VPC 内其他集群 CIDR 冲突
                     * @param ClusterCIDR 用于分配集群容器和服务 IP 的 CIDR，不得与 VPC CIDR 冲突，也不得与同 VPC 内其他集群 CIDR 冲突
                     */
                    void SetClusterCIDR(const std::string& _clusterCIDR);

                    /**
                     * 判断参数 ClusterCIDR 是否已赋值
                     * @return ClusterCIDR 是否已赋值
                     */
                    bool ClusterCIDRHasBeenSet() const;

                    /**
                     * 获取是否忽略 ClusterCIDR 冲突错误, 默认不忽略
                     * @return IgnoreClusterCIDRConflict 是否忽略 ClusterCIDR 冲突错误, 默认不忽略
                     */
                    bool GetIgnoreClusterCIDRConflict() const;

                    /**
                     * 设置是否忽略 ClusterCIDR 冲突错误, 默认不忽略
                     * @param IgnoreClusterCIDRConflict 是否忽略 ClusterCIDR 冲突错误, 默认不忽略
                     */
                    void SetIgnoreClusterCIDRConflict(const bool& _ignoreClusterCIDRConflict);

                    /**
                     * 判断参数 IgnoreClusterCIDRConflict 是否已赋值
                     * @return IgnoreClusterCIDRConflict 是否已赋值
                     */
                    bool IgnoreClusterCIDRConflictHasBeenSet() const;

                    /**
                     * 获取集群中每个Node上最大的Pod数量(默认为256)
                     * @return MaxNodePodNum 集群中每个Node上最大的Pod数量(默认为256)
                     */
                    uint64_t GetMaxNodePodNum() const;

                    /**
                     * 设置集群中每个Node上最大的Pod数量(默认为256)
                     * @param MaxNodePodNum 集群中每个Node上最大的Pod数量(默认为256)
                     */
                    void SetMaxNodePodNum(const uint64_t& _maxNodePodNum);

                    /**
                     * 判断参数 MaxNodePodNum 是否已赋值
                     * @return MaxNodePodNum 是否已赋值
                     */
                    bool MaxNodePodNumHasBeenSet() const;

                    /**
                     * 获取集群最大的service数量(默认为256)
                     * @return MaxClusterServiceNum 集群最大的service数量(默认为256)
                     */
                    uint64_t GetMaxClusterServiceNum() const;

                    /**
                     * 设置集群最大的service数量(默认为256)
                     * @param MaxClusterServiceNum 集群最大的service数量(默认为256)
                     */
                    void SetMaxClusterServiceNum(const uint64_t& _maxClusterServiceNum);

                    /**
                     * 判断参数 MaxClusterServiceNum 是否已赋值
                     * @return MaxClusterServiceNum 是否已赋值
                     */
                    bool MaxClusterServiceNumHasBeenSet() const;

                    /**
                     * 获取是否启用IPVS(默认不开启)
                     * @return Ipvs 是否启用IPVS(默认不开启)
                     */
                    bool GetIpvs() const;

                    /**
                     * 设置是否启用IPVS(默认不开启)
                     * @param Ipvs 是否启用IPVS(默认不开启)
                     */
                    void SetIpvs(const bool& _ipvs);

                    /**
                     * 判断参数 Ipvs 是否已赋值
                     * @return Ipvs 是否已赋值
                     */
                    bool IpvsHasBeenSet() const;

                    /**
                     * 获取集群的VPCID（如果创建空集群，为必传值，否则自动设置为和集群的节点保持一致）
                     * @return VpcId 集群的VPCID（如果创建空集群，为必传值，否则自动设置为和集群的节点保持一致）
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置集群的VPCID（如果创建空集群，为必传值，否则自动设置为和集群的节点保持一致）
                     * @param VpcId 集群的VPCID（如果创建空集群，为必传值，否则自动设置为和集群的节点保持一致）
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                private:

                    /**
                     * 用于分配集群容器和服务 IP 的 CIDR，不得与 VPC CIDR 冲突，也不得与同 VPC 内其他集群 CIDR 冲突
                     */
                    std::string m_clusterCIDR;
                    bool m_clusterCIDRHasBeenSet;

                    /**
                     * 是否忽略 ClusterCIDR 冲突错误, 默认不忽略
                     */
                    bool m_ignoreClusterCIDRConflict;
                    bool m_ignoreClusterCIDRConflictHasBeenSet;

                    /**
                     * 集群中每个Node上最大的Pod数量(默认为256)
                     */
                    uint64_t m_maxNodePodNum;
                    bool m_maxNodePodNumHasBeenSet;

                    /**
                     * 集群最大的service数量(默认为256)
                     */
                    uint64_t m_maxClusterServiceNum;
                    bool m_maxClusterServiceNumHasBeenSet;

                    /**
                     * 是否启用IPVS(默认不开启)
                     */
                    bool m_ipvs;
                    bool m_ipvsHasBeenSet;

                    /**
                     * 集群的VPCID（如果创建空集群，为必传值，否则自动设置为和集群的节点保持一致）
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERNETWORKSETTINGS_H_
