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
                     */
                    std::string GetK8SVersion() const;

                    /**
                     * 设置k8s版本号
                     * @param K8SVersion k8s版本号
                     */
                    void SetK8SVersion(const std::string& _k8SVersion);

                    /**
                     * 判断参数 K8SVersion 是否已赋值
                     * @return K8SVersion 是否已赋值
                     */
                    bool K8SVersionHasBeenSet() const;

                    /**
                     * 获取vpc 的Id
                     * @return VpcId vpc 的Id
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpc 的Id
                     * @param VpcId vpc 的Id
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取集群名称
                     * @return ClusterName 集群名称
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称
                     * @param ClusterName 集群名称
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取集群pod cidr
                     * @return PodCIDR 集群pod cidr
                     */
                    std::string GetPodCIDR() const;

                    /**
                     * 设置集群pod cidr
                     * @param PodCIDR 集群pod cidr
                     */
                    void SetPodCIDR(const std::string& _podCIDR);

                    /**
                     * 判断参数 PodCIDR 是否已赋值
                     * @return PodCIDR 是否已赋值
                     */
                    bool PodCIDRHasBeenSet() const;

                    /**
                     * 获取集群service cidr
                     * @return ServiceCIDR 集群service cidr
                     */
                    std::string GetServiceCIDR() const;

                    /**
                     * 设置集群service cidr
                     * @param ServiceCIDR 集群service cidr
                     */
                    void SetServiceCIDR(const std::string& _serviceCIDR);

                    /**
                     * 判断参数 ServiceCIDR 是否已赋值
                     * @return ServiceCIDR 是否已赋值
                     */
                    bool ServiceCIDRHasBeenSet() const;

                    /**
                     * 获取集群描述信息
                     * @return ClusterDesc 集群描述信息
                     */
                    std::string GetClusterDesc() const;

                    /**
                     * 设置集群描述信息
                     * @param ClusterDesc 集群描述信息
                     */
                    void SetClusterDesc(const std::string& _clusterDesc);

                    /**
                     * 判断参数 ClusterDesc 是否已赋值
                     * @return ClusterDesc 是否已赋值
                     */
                    bool ClusterDescHasBeenSet() const;

                    /**
                     * 获取集群高级设置
                     * @return ClusterAdvancedSettings 集群高级设置
                     */
                    EdgeClusterAdvancedSettings GetClusterAdvancedSettings() const;

                    /**
                     * 设置集群高级设置
                     * @param ClusterAdvancedSettings 集群高级设置
                     */
                    void SetClusterAdvancedSettings(const EdgeClusterAdvancedSettings& _clusterAdvancedSettings);

                    /**
                     * 判断参数 ClusterAdvancedSettings 是否已赋值
                     * @return ClusterAdvancedSettings 是否已赋值
                     */
                    bool ClusterAdvancedSettingsHasBeenSet() const;

                    /**
                     * 获取节点上最大Pod数量
                     * @return MaxNodePodNum 节点上最大Pod数量
                     */
                    int64_t GetMaxNodePodNum() const;

                    /**
                     * 设置节点上最大Pod数量
                     * @param MaxNodePodNum 节点上最大Pod数量
                     */
                    void SetMaxNodePodNum(const int64_t& _maxNodePodNum);

                    /**
                     * 判断参数 MaxNodePodNum 是否已赋值
                     * @return MaxNodePodNum 是否已赋值
                     */
                    bool MaxNodePodNumHasBeenSet() const;

                    /**
                     * 获取边缘计算集群公网访问LB信息
                     * @return PublicLB 边缘计算集群公网访问LB信息
                     */
                    EdgeClusterPublicLB GetPublicLB() const;

                    /**
                     * 设置边缘计算集群公网访问LB信息
                     * @param PublicLB 边缘计算集群公网访问LB信息
                     */
                    void SetPublicLB(const EdgeClusterPublicLB& _publicLB);

                    /**
                     * 判断参数 PublicLB 是否已赋值
                     * @return PublicLB 是否已赋值
                     */
                    bool PublicLBHasBeenSet() const;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CREATETKEEDGECLUSTERREQUEST_H_
