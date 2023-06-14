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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERCIDRSETTINGS_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERCIDRSETTINGS_H_

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
                * 集群容器网络相关参数
                */
                class ClusterCIDRSettings : public AbstractModel
                {
                public:
                    ClusterCIDRSettings();
                    ~ClusterCIDRSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用于分配集群容器和服务 IP 的 CIDR，不得与 VPC CIDR 冲突，也不得与同 VPC 内其他集群 CIDR 冲突。且网段范围必须在内网网段内，例如:10.1.0.0/14, 192.168.0.1/18,172.16.0.0/16。
                     * @return ClusterCIDR 用于分配集群容器和服务 IP 的 CIDR，不得与 VPC CIDR 冲突，也不得与同 VPC 内其他集群 CIDR 冲突。且网段范围必须在内网网段内，例如:10.1.0.0/14, 192.168.0.1/18,172.16.0.0/16。
                     * 
                     */
                    std::string GetClusterCIDR() const;

                    /**
                     * 设置用于分配集群容器和服务 IP 的 CIDR，不得与 VPC CIDR 冲突，也不得与同 VPC 内其他集群 CIDR 冲突。且网段范围必须在内网网段内，例如:10.1.0.0/14, 192.168.0.1/18,172.16.0.0/16。
                     * @param _clusterCIDR 用于分配集群容器和服务 IP 的 CIDR，不得与 VPC CIDR 冲突，也不得与同 VPC 内其他集群 CIDR 冲突。且网段范围必须在内网网段内，例如:10.1.0.0/14, 192.168.0.1/18,172.16.0.0/16。
                     * 
                     */
                    void SetClusterCIDR(const std::string& _clusterCIDR);

                    /**
                     * 判断参数 ClusterCIDR 是否已赋值
                     * @return ClusterCIDR 是否已赋值
                     * 
                     */
                    bool ClusterCIDRHasBeenSet() const;

                    /**
                     * 获取是否忽略 ClusterCIDR 冲突错误, 默认不忽略
                     * @return IgnoreClusterCIDRConflict 是否忽略 ClusterCIDR 冲突错误, 默认不忽略
                     * 
                     */
                    bool GetIgnoreClusterCIDRConflict() const;

                    /**
                     * 设置是否忽略 ClusterCIDR 冲突错误, 默认不忽略
                     * @param _ignoreClusterCIDRConflict 是否忽略 ClusterCIDR 冲突错误, 默认不忽略
                     * 
                     */
                    void SetIgnoreClusterCIDRConflict(const bool& _ignoreClusterCIDRConflict);

                    /**
                     * 判断参数 IgnoreClusterCIDRConflict 是否已赋值
                     * @return IgnoreClusterCIDRConflict 是否已赋值
                     * 
                     */
                    bool IgnoreClusterCIDRConflictHasBeenSet() const;

                    /**
                     * 获取集群中每个Node上最大的Pod数量。取值范围16～256。不为2的幂值时会向上取最接近的2的幂值。
                     * @return MaxNodePodNum 集群中每个Node上最大的Pod数量。取值范围16～256。不为2的幂值时会向上取最接近的2的幂值。
                     * 
                     */
                    uint64_t GetMaxNodePodNum() const;

                    /**
                     * 设置集群中每个Node上最大的Pod数量。取值范围16～256。不为2的幂值时会向上取最接近的2的幂值。
                     * @param _maxNodePodNum 集群中每个Node上最大的Pod数量。取值范围16～256。不为2的幂值时会向上取最接近的2的幂值。
                     * 
                     */
                    void SetMaxNodePodNum(const uint64_t& _maxNodePodNum);

                    /**
                     * 判断参数 MaxNodePodNum 是否已赋值
                     * @return MaxNodePodNum 是否已赋值
                     * 
                     */
                    bool MaxNodePodNumHasBeenSet() const;

                    /**
                     * 获取集群最大的service数量。取值范围32～32768，不为2的幂值时会向上取最接近的2的幂值。默认值256
                     * @return MaxClusterServiceNum 集群最大的service数量。取值范围32～32768，不为2的幂值时会向上取最接近的2的幂值。默认值256
                     * 
                     */
                    uint64_t GetMaxClusterServiceNum() const;

                    /**
                     * 设置集群最大的service数量。取值范围32～32768，不为2的幂值时会向上取最接近的2的幂值。默认值256
                     * @param _maxClusterServiceNum 集群最大的service数量。取值范围32～32768，不为2的幂值时会向上取最接近的2的幂值。默认值256
                     * 
                     */
                    void SetMaxClusterServiceNum(const uint64_t& _maxClusterServiceNum);

                    /**
                     * 判断参数 MaxClusterServiceNum 是否已赋值
                     * @return MaxClusterServiceNum 是否已赋值
                     * 
                     */
                    bool MaxClusterServiceNumHasBeenSet() const;

                    /**
                     * 获取用于分配集群服务 IP 的 CIDR，不得与 VPC CIDR 冲突，也不得与同 VPC 内其他集群 CIDR 冲突。且网段范围必须在内网网段内，例如:10.1.0.0/14, 192.168.0.1/18,172.16.0.0/16。
                     * @return ServiceCIDR 用于分配集群服务 IP 的 CIDR，不得与 VPC CIDR 冲突，也不得与同 VPC 内其他集群 CIDR 冲突。且网段范围必须在内网网段内，例如:10.1.0.0/14, 192.168.0.1/18,172.16.0.0/16。
                     * 
                     */
                    std::string GetServiceCIDR() const;

                    /**
                     * 设置用于分配集群服务 IP 的 CIDR，不得与 VPC CIDR 冲突，也不得与同 VPC 内其他集群 CIDR 冲突。且网段范围必须在内网网段内，例如:10.1.0.0/14, 192.168.0.1/18,172.16.0.0/16。
                     * @param _serviceCIDR 用于分配集群服务 IP 的 CIDR，不得与 VPC CIDR 冲突，也不得与同 VPC 内其他集群 CIDR 冲突。且网段范围必须在内网网段内，例如:10.1.0.0/14, 192.168.0.1/18,172.16.0.0/16。
                     * 
                     */
                    void SetServiceCIDR(const std::string& _serviceCIDR);

                    /**
                     * 判断参数 ServiceCIDR 是否已赋值
                     * @return ServiceCIDR 是否已赋值
                     * 
                     */
                    bool ServiceCIDRHasBeenSet() const;

                    /**
                     * 获取VPC-CNI网络模式下，弹性网卡的子网Id。
                     * @return EniSubnetIds VPC-CNI网络模式下，弹性网卡的子网Id。
                     * 
                     */
                    std::vector<std::string> GetEniSubnetIds() const;

                    /**
                     * 设置VPC-CNI网络模式下，弹性网卡的子网Id。
                     * @param _eniSubnetIds VPC-CNI网络模式下，弹性网卡的子网Id。
                     * 
                     */
                    void SetEniSubnetIds(const std::vector<std::string>& _eniSubnetIds);

                    /**
                     * 判断参数 EniSubnetIds 是否已赋值
                     * @return EniSubnetIds 是否已赋值
                     * 
                     */
                    bool EniSubnetIdsHasBeenSet() const;

                    /**
                     * 获取VPC-CNI网络模式下，弹性网卡IP的回收时间，取值范围[300,15768000)
                     * @return ClaimExpiredSeconds VPC-CNI网络模式下，弹性网卡IP的回收时间，取值范围[300,15768000)
                     * 
                     */
                    int64_t GetClaimExpiredSeconds() const;

                    /**
                     * 设置VPC-CNI网络模式下，弹性网卡IP的回收时间，取值范围[300,15768000)
                     * @param _claimExpiredSeconds VPC-CNI网络模式下，弹性网卡IP的回收时间，取值范围[300,15768000)
                     * 
                     */
                    void SetClaimExpiredSeconds(const int64_t& _claimExpiredSeconds);

                    /**
                     * 判断参数 ClaimExpiredSeconds 是否已赋值
                     * @return ClaimExpiredSeconds 是否已赋值
                     * 
                     */
                    bool ClaimExpiredSecondsHasBeenSet() const;

                    /**
                     * 获取是否忽略 ServiceCIDR 冲突错误, 仅在 VPC-CNI 模式生效，默认不忽略
                     * @return IgnoreServiceCIDRConflict 是否忽略 ServiceCIDR 冲突错误, 仅在 VPC-CNI 模式生效，默认不忽略
                     * 
                     */
                    bool GetIgnoreServiceCIDRConflict() const;

                    /**
                     * 设置是否忽略 ServiceCIDR 冲突错误, 仅在 VPC-CNI 模式生效，默认不忽略
                     * @param _ignoreServiceCIDRConflict 是否忽略 ServiceCIDR 冲突错误, 仅在 VPC-CNI 模式生效，默认不忽略
                     * 
                     */
                    void SetIgnoreServiceCIDRConflict(const bool& _ignoreServiceCIDRConflict);

                    /**
                     * 判断参数 IgnoreServiceCIDRConflict 是否已赋值
                     * @return IgnoreServiceCIDRConflict 是否已赋值
                     * 
                     */
                    bool IgnoreServiceCIDRConflictHasBeenSet() const;

                private:

                    /**
                     * 用于分配集群容器和服务 IP 的 CIDR，不得与 VPC CIDR 冲突，也不得与同 VPC 内其他集群 CIDR 冲突。且网段范围必须在内网网段内，例如:10.1.0.0/14, 192.168.0.1/18,172.16.0.0/16。
                     */
                    std::string m_clusterCIDR;
                    bool m_clusterCIDRHasBeenSet;

                    /**
                     * 是否忽略 ClusterCIDR 冲突错误, 默认不忽略
                     */
                    bool m_ignoreClusterCIDRConflict;
                    bool m_ignoreClusterCIDRConflictHasBeenSet;

                    /**
                     * 集群中每个Node上最大的Pod数量。取值范围16～256。不为2的幂值时会向上取最接近的2的幂值。
                     */
                    uint64_t m_maxNodePodNum;
                    bool m_maxNodePodNumHasBeenSet;

                    /**
                     * 集群最大的service数量。取值范围32～32768，不为2的幂值时会向上取最接近的2的幂值。默认值256
                     */
                    uint64_t m_maxClusterServiceNum;
                    bool m_maxClusterServiceNumHasBeenSet;

                    /**
                     * 用于分配集群服务 IP 的 CIDR，不得与 VPC CIDR 冲突，也不得与同 VPC 内其他集群 CIDR 冲突。且网段范围必须在内网网段内，例如:10.1.0.0/14, 192.168.0.1/18,172.16.0.0/16。
                     */
                    std::string m_serviceCIDR;
                    bool m_serviceCIDRHasBeenSet;

                    /**
                     * VPC-CNI网络模式下，弹性网卡的子网Id。
                     */
                    std::vector<std::string> m_eniSubnetIds;
                    bool m_eniSubnetIdsHasBeenSet;

                    /**
                     * VPC-CNI网络模式下，弹性网卡IP的回收时间，取值范围[300,15768000)
                     */
                    int64_t m_claimExpiredSeconds;
                    bool m_claimExpiredSecondsHasBeenSet;

                    /**
                     * 是否忽略 ServiceCIDR 冲突错误, 仅在 VPC-CNI 模式生效，默认不忽略
                     */
                    bool m_ignoreServiceCIDRConflict;
                    bool m_ignoreServiceCIDRConflictHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERCIDRSETTINGS_H_
