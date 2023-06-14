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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_UPDATETKEEDGECLUSTERREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_UPDATETKEEDGECLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/EdgeClusterPublicLB.h>
#include <tencentcloud/tke/v20180525/model/EdgeClusterInternalLB.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * UpdateTKEEdgeCluster请求参数结构体
                */
                class UpdateTKEEdgeClusterRequest : public AbstractModel
                {
                public:
                    UpdateTKEEdgeClusterRequest();
                    ~UpdateTKEEdgeClusterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取边缘计算集群ID
                     * @return ClusterId 边缘计算集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置边缘计算集群ID
                     * @param _clusterId 边缘计算集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取边缘计算集群名称
                     * @return ClusterName 边缘计算集群名称
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置边缘计算集群名称
                     * @param _clusterName 边缘计算集群名称
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取边缘计算集群描述信息
                     * @return ClusterDesc 边缘计算集群描述信息
                     * 
                     */
                    std::string GetClusterDesc() const;

                    /**
                     * 设置边缘计算集群描述信息
                     * @param _clusterDesc 边缘计算集群描述信息
                     * 
                     */
                    void SetClusterDesc(const std::string& _clusterDesc);

                    /**
                     * 判断参数 ClusterDesc 是否已赋值
                     * @return ClusterDesc 是否已赋值
                     * 
                     */
                    bool ClusterDescHasBeenSet() const;

                    /**
                     * 获取边缘计算集群的pod cidr
                     * @return PodCIDR 边缘计算集群的pod cidr
                     * 
                     */
                    std::string GetPodCIDR() const;

                    /**
                     * 设置边缘计算集群的pod cidr
                     * @param _podCIDR 边缘计算集群的pod cidr
                     * 
                     */
                    void SetPodCIDR(const std::string& _podCIDR);

                    /**
                     * 判断参数 PodCIDR 是否已赋值
                     * @return PodCIDR 是否已赋值
                     * 
                     */
                    bool PodCIDRHasBeenSet() const;

                    /**
                     * 获取边缘计算集群的service cidr
                     * @return ServiceCIDR 边缘计算集群的service cidr
                     * 
                     */
                    std::string GetServiceCIDR() const;

                    /**
                     * 设置边缘计算集群的service cidr
                     * @param _serviceCIDR 边缘计算集群的service cidr
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
                     * 获取边缘计算集群公网访问LB信息
                     * @return PublicLB 边缘计算集群公网访问LB信息
                     * 
                     */
                    EdgeClusterPublicLB GetPublicLB() const;

                    /**
                     * 设置边缘计算集群公网访问LB信息
                     * @param _publicLB 边缘计算集群公网访问LB信息
                     * 
                     */
                    void SetPublicLB(const EdgeClusterPublicLB& _publicLB);

                    /**
                     * 判断参数 PublicLB 是否已赋值
                     * @return PublicLB 是否已赋值
                     * 
                     */
                    bool PublicLBHasBeenSet() const;

                    /**
                     * 获取边缘计算集群内网访问LB信息
                     * @return InternalLB 边缘计算集群内网访问LB信息
                     * 
                     */
                    EdgeClusterInternalLB GetInternalLB() const;

                    /**
                     * 设置边缘计算集群内网访问LB信息
                     * @param _internalLB 边缘计算集群内网访问LB信息
                     * 
                     */
                    void SetInternalLB(const EdgeClusterInternalLB& _internalLB);

                    /**
                     * 判断参数 InternalLB 是否已赋值
                     * @return InternalLB 是否已赋值
                     * 
                     */
                    bool InternalLBHasBeenSet() const;

                    /**
                     * 获取边缘计算集群的CoreDns部署信息
                     * @return CoreDns 边缘计算集群的CoreDns部署信息
                     * 
                     */
                    std::string GetCoreDns() const;

                    /**
                     * 设置边缘计算集群的CoreDns部署信息
                     * @param _coreDns 边缘计算集群的CoreDns部署信息
                     * 
                     */
                    void SetCoreDns(const std::string& _coreDns);

                    /**
                     * 判断参数 CoreDns 是否已赋值
                     * @return CoreDns 是否已赋值
                     * 
                     */
                    bool CoreDnsHasBeenSet() const;

                    /**
                     * 获取边缘计算集群的健康检查多地域部署信息
                     * @return HealthRegion 边缘计算集群的健康检查多地域部署信息
                     * 
                     */
                    std::string GetHealthRegion() const;

                    /**
                     * 设置边缘计算集群的健康检查多地域部署信息
                     * @param _healthRegion 边缘计算集群的健康检查多地域部署信息
                     * 
                     */
                    void SetHealthRegion(const std::string& _healthRegion);

                    /**
                     * 判断参数 HealthRegion 是否已赋值
                     * @return HealthRegion 是否已赋值
                     * 
                     */
                    bool HealthRegionHasBeenSet() const;

                    /**
                     * 获取边缘计算集群的健康检查部署信息
                     * @return Health 边缘计算集群的健康检查部署信息
                     * 
                     */
                    std::string GetHealth() const;

                    /**
                     * 设置边缘计算集群的健康检查部署信息
                     * @param _health 边缘计算集群的健康检查部署信息
                     * 
                     */
                    void SetHealth(const std::string& _health);

                    /**
                     * 判断参数 Health 是否已赋值
                     * @return Health 是否已赋值
                     * 
                     */
                    bool HealthHasBeenSet() const;

                    /**
                     * 获取边缘计算集群的GridDaemon部署信息
                     * @return GridDaemon 边缘计算集群的GridDaemon部署信息
                     * 
                     */
                    std::string GetGridDaemon() const;

                    /**
                     * 设置边缘计算集群的GridDaemon部署信息
                     * @param _gridDaemon 边缘计算集群的GridDaemon部署信息
                     * 
                     */
                    void SetGridDaemon(const std::string& _gridDaemon);

                    /**
                     * 判断参数 GridDaemon 是否已赋值
                     * @return GridDaemon 是否已赋值
                     * 
                     */
                    bool GridDaemonHasBeenSet() const;

                    /**
                     * 获取边缘集群开启自动升配
                     * @return AutoUpgradeClusterLevel 边缘集群开启自动升配
                     * 
                     */
                    bool GetAutoUpgradeClusterLevel() const;

                    /**
                     * 设置边缘集群开启自动升配
                     * @param _autoUpgradeClusterLevel 边缘集群开启自动升配
                     * 
                     */
                    void SetAutoUpgradeClusterLevel(const bool& _autoUpgradeClusterLevel);

                    /**
                     * 判断参数 AutoUpgradeClusterLevel 是否已赋值
                     * @return AutoUpgradeClusterLevel 是否已赋值
                     * 
                     */
                    bool AutoUpgradeClusterLevelHasBeenSet() const;

                    /**
                     * 获取边缘集群的集群规模
                     * @return ClusterLevel 边缘集群的集群规模
                     * 
                     */
                    std::string GetClusterLevel() const;

                    /**
                     * 设置边缘集群的集群规模
                     * @param _clusterLevel 边缘集群的集群规模
                     * 
                     */
                    void SetClusterLevel(const std::string& _clusterLevel);

                    /**
                     * 判断参数 ClusterLevel 是否已赋值
                     * @return ClusterLevel 是否已赋值
                     * 
                     */
                    bool ClusterLevelHasBeenSet() const;

                private:

                    /**
                     * 边缘计算集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 边缘计算集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 边缘计算集群描述信息
                     */
                    std::string m_clusterDesc;
                    bool m_clusterDescHasBeenSet;

                    /**
                     * 边缘计算集群的pod cidr
                     */
                    std::string m_podCIDR;
                    bool m_podCIDRHasBeenSet;

                    /**
                     * 边缘计算集群的service cidr
                     */
                    std::string m_serviceCIDR;
                    bool m_serviceCIDRHasBeenSet;

                    /**
                     * 边缘计算集群公网访问LB信息
                     */
                    EdgeClusterPublicLB m_publicLB;
                    bool m_publicLBHasBeenSet;

                    /**
                     * 边缘计算集群内网访问LB信息
                     */
                    EdgeClusterInternalLB m_internalLB;
                    bool m_internalLBHasBeenSet;

                    /**
                     * 边缘计算集群的CoreDns部署信息
                     */
                    std::string m_coreDns;
                    bool m_coreDnsHasBeenSet;

                    /**
                     * 边缘计算集群的健康检查多地域部署信息
                     */
                    std::string m_healthRegion;
                    bool m_healthRegionHasBeenSet;

                    /**
                     * 边缘计算集群的健康检查部署信息
                     */
                    std::string m_health;
                    bool m_healthHasBeenSet;

                    /**
                     * 边缘计算集群的GridDaemon部署信息
                     */
                    std::string m_gridDaemon;
                    bool m_gridDaemonHasBeenSet;

                    /**
                     * 边缘集群开启自动升配
                     */
                    bool m_autoUpgradeClusterLevel;
                    bool m_autoUpgradeClusterLevelHasBeenSet;

                    /**
                     * 边缘集群的集群规模
                     */
                    std::string m_clusterLevel;
                    bool m_clusterLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_UPDATETKEEDGECLUSTERREQUEST_H_
