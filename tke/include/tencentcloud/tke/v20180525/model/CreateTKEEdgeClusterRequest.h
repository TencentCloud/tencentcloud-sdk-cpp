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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CREATETKEEDGECLUSTERREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CREATETKEEDGECLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/EdgeClusterAdvancedSettings.h>
#include <tencentcloud/tke/v20180525/model/EdgeClusterPublicLB.h>
#include <tencentcloud/tke/v20180525/model/TagSpecification.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * CreateTKEEdgeCluster请求参数结构体
                */
                class CreateTKEEdgeClusterRequest : public AbstractModel
                {
                public:
                    CreateTKEEdgeClusterRequest();
                    ~CreateTKEEdgeClusterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取k8s版本号
                     * @return K8SVersion k8s版本号
                     * 
                     */
                    std::string GetK8SVersion() const;

                    /**
                     * 设置k8s版本号
                     * @param _k8SVersion k8s版本号
                     * 
                     */
                    void SetK8SVersion(const std::string& _k8SVersion);

                    /**
                     * 判断参数 K8SVersion 是否已赋值
                     * @return K8SVersion 是否已赋值
                     * 
                     */
                    bool K8SVersionHasBeenSet() const;

                    /**
                     * 获取vpc 的Id
                     * @return VpcId vpc 的Id
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpc 的Id
                     * @param _vpcId vpc 的Id
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取集群名称
                     * @return ClusterName 集群名称
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称
                     * @param _clusterName 集群名称
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
                     * 获取集群pod cidr
                     * @return PodCIDR 集群pod cidr
                     * 
                     */
                    std::string GetPodCIDR() const;

                    /**
                     * 设置集群pod cidr
                     * @param _podCIDR 集群pod cidr
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
                     * 获取集群service cidr
                     * @return ServiceCIDR 集群service cidr
                     * 
                     */
                    std::string GetServiceCIDR() const;

                    /**
                     * 设置集群service cidr
                     * @param _serviceCIDR 集群service cidr
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
                     * 获取集群描述信息
                     * @return ClusterDesc 集群描述信息
                     * 
                     */
                    std::string GetClusterDesc() const;

                    /**
                     * 设置集群描述信息
                     * @param _clusterDesc 集群描述信息
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
                     * 获取集群高级设置
                     * @return ClusterAdvancedSettings 集群高级设置
                     * 
                     */
                    EdgeClusterAdvancedSettings GetClusterAdvancedSettings() const;

                    /**
                     * 设置集群高级设置
                     * @param _clusterAdvancedSettings 集群高级设置
                     * 
                     */
                    void SetClusterAdvancedSettings(const EdgeClusterAdvancedSettings& _clusterAdvancedSettings);

                    /**
                     * 判断参数 ClusterAdvancedSettings 是否已赋值
                     * @return ClusterAdvancedSettings 是否已赋值
                     * 
                     */
                    bool ClusterAdvancedSettingsHasBeenSet() const;

                    /**
                     * 获取节点上最大Pod数量
                     * @return MaxNodePodNum 节点上最大Pod数量
                     * 
                     */
                    int64_t GetMaxNodePodNum() const;

                    /**
                     * 设置节点上最大Pod数量
                     * @param _maxNodePodNum 节点上最大Pod数量
                     * 
                     */
                    void SetMaxNodePodNum(const int64_t& _maxNodePodNum);

                    /**
                     * 判断参数 MaxNodePodNum 是否已赋值
                     * @return MaxNodePodNum 是否已赋值
                     * 
                     */
                    bool MaxNodePodNumHasBeenSet() const;

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
                     * 获取集群的级别
                     * @return ClusterLevel 集群的级别
                     * 
                     */
                    std::string GetClusterLevel() const;

                    /**
                     * 设置集群的级别
                     * @param _clusterLevel 集群的级别
                     * 
                     */
                    void SetClusterLevel(const std::string& _clusterLevel);

                    /**
                     * 判断参数 ClusterLevel 是否已赋值
                     * @return ClusterLevel 是否已赋值
                     * 
                     */
                    bool ClusterLevelHasBeenSet() const;

                    /**
                     * 获取集群是否支持自动升配
                     * @return AutoUpgradeClusterLevel 集群是否支持自动升配
                     * 
                     */
                    bool GetAutoUpgradeClusterLevel() const;

                    /**
                     * 设置集群是否支持自动升配
                     * @param _autoUpgradeClusterLevel 集群是否支持自动升配
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
                     * 获取集群计费方式
                     * @return ChargeType 集群计费方式
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置集群计费方式
                     * @param _chargeType 集群计费方式
                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取边缘集群版本，此版本区别于k8s版本，是整个集群各组件版本集合
                     * @return EdgeVersion 边缘集群版本，此版本区别于k8s版本，是整个集群各组件版本集合
                     * 
                     */
                    std::string GetEdgeVersion() const;

                    /**
                     * 设置边缘集群版本，此版本区别于k8s版本，是整个集群各组件版本集合
                     * @param _edgeVersion 边缘集群版本，此版本区别于k8s版本，是整个集群各组件版本集合
                     * 
                     */
                    void SetEdgeVersion(const std::string& _edgeVersion);

                    /**
                     * 判断参数 EdgeVersion 是否已赋值
                     * @return EdgeVersion 是否已赋值
                     * 
                     */
                    bool EdgeVersionHasBeenSet() const;

                    /**
                     * 获取边缘组件镜像仓库前缀
                     * @return RegistryPrefix 边缘组件镜像仓库前缀
                     * 
                     */
                    std::string GetRegistryPrefix() const;

                    /**
                     * 设置边缘组件镜像仓库前缀
                     * @param _registryPrefix 边缘组件镜像仓库前缀
                     * 
                     */
                    void SetRegistryPrefix(const std::string& _registryPrefix);

                    /**
                     * 判断参数 RegistryPrefix 是否已赋值
                     * @return RegistryPrefix 是否已赋值
                     * 
                     */
                    bool RegistryPrefixHasBeenSet() const;

                    /**
                     * 获取集群绑定的云标签
                     * @return TagSpecification 集群绑定的云标签
                     * 
                     */
                    TagSpecification GetTagSpecification() const;

                    /**
                     * 设置集群绑定的云标签
                     * @param _tagSpecification 集群绑定的云标签
                     * 
                     */
                    void SetTagSpecification(const TagSpecification& _tagSpecification);

                    /**
                     * 判断参数 TagSpecification 是否已赋值
                     * @return TagSpecification 是否已赋值
                     * 
                     */
                    bool TagSpecificationHasBeenSet() const;

                private:

                    /**
                     * k8s版本号
                     */
                    std::string m_k8SVersion;
                    bool m_k8SVersionHasBeenSet;

                    /**
                     * vpc 的Id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 集群pod cidr
                     */
                    std::string m_podCIDR;
                    bool m_podCIDRHasBeenSet;

                    /**
                     * 集群service cidr
                     */
                    std::string m_serviceCIDR;
                    bool m_serviceCIDRHasBeenSet;

                    /**
                     * 集群描述信息
                     */
                    std::string m_clusterDesc;
                    bool m_clusterDescHasBeenSet;

                    /**
                     * 集群高级设置
                     */
                    EdgeClusterAdvancedSettings m_clusterAdvancedSettings;
                    bool m_clusterAdvancedSettingsHasBeenSet;

                    /**
                     * 节点上最大Pod数量
                     */
                    int64_t m_maxNodePodNum;
                    bool m_maxNodePodNumHasBeenSet;

                    /**
                     * 边缘计算集群公网访问LB信息
                     */
                    EdgeClusterPublicLB m_publicLB;
                    bool m_publicLBHasBeenSet;

                    /**
                     * 集群的级别
                     */
                    std::string m_clusterLevel;
                    bool m_clusterLevelHasBeenSet;

                    /**
                     * 集群是否支持自动升配
                     */
                    bool m_autoUpgradeClusterLevel;
                    bool m_autoUpgradeClusterLevelHasBeenSet;

                    /**
                     * 集群计费方式
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * 边缘集群版本，此版本区别于k8s版本，是整个集群各组件版本集合
                     */
                    std::string m_edgeVersion;
                    bool m_edgeVersionHasBeenSet;

                    /**
                     * 边缘组件镜像仓库前缀
                     */
                    std::string m_registryPrefix;
                    bool m_registryPrefixHasBeenSet;

                    /**
                     * 集群绑定的云标签
                     */
                    TagSpecification m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CREATETKEEDGECLUSTERREQUEST_H_
