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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_EDGECLUSTER_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_EDGECLUSTER_H_

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
                * 边缘计算集群信息
                */
                class EdgeCluster : public AbstractModel
                {
                public:
                    EdgeCluster();
                    ~EdgeCluster() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群Id
                     * @return ClusterId 集群Id
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群Id
                     * @param ClusterId 集群Id
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

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
                     * 获取Vpc Id
                     * @return VpcId Vpc Id
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Vpc Id
                     * @param VpcId Vpc Id
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

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
                     * 获取集群 service cidr
                     * @return ServiceCIDR 集群 service cidr
                     */
                    std::string GetServiceCIDR() const;

                    /**
                     * 设置集群 service cidr
                     * @param ServiceCIDR 集群 service cidr
                     */
                    void SetServiceCIDR(const std::string& _serviceCIDR);

                    /**
                     * 判断参数 ServiceCIDR 是否已赋值
                     * @return ServiceCIDR 是否已赋值
                     */
                    bool ServiceCIDRHasBeenSet() const;

                    /**
                     * 获取k8s 版本号
                     * @return K8SVersion k8s 版本号
                     */
                    std::string GetK8SVersion() const;

                    /**
                     * 设置k8s 版本号
                     * @param K8SVersion k8s 版本号
                     */
                    void SetK8SVersion(const std::string& _k8SVersion);

                    /**
                     * 判断参数 K8SVersion 是否已赋值
                     * @return K8SVersion 是否已赋值
                     */
                    bool K8SVersionHasBeenSet() const;

                    /**
                     * 获取集群状态
                     * @return Status 集群状态
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置集群状态
                     * @param Status 集群状态
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

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
                     * 获取集群创建时间
                     * @return CreatedTime 集群创建时间
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置集群创建时间
                     * @param CreatedTime 集群创建时间
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取边缘集群版本
                     * @return EdgeClusterVersion 边缘集群版本
                     */
                    std::string GetEdgeClusterVersion() const;

                    /**
                     * 设置边缘集群版本
                     * @param EdgeClusterVersion 边缘集群版本
                     */
                    void SetEdgeClusterVersion(const std::string& _edgeClusterVersion);

                    /**
                     * 判断参数 EdgeClusterVersion 是否已赋值
                     * @return EdgeClusterVersion 是否已赋值
                     */
                    bool EdgeClusterVersionHasBeenSet() const;

                    /**
                     * 获取节点最大Pod数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxNodePodNum 节点最大Pod数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetMaxNodePodNum() const;

                    /**
                     * 设置节点最大Pod数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MaxNodePodNum 节点最大Pod数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMaxNodePodNum(const int64_t& _maxNodePodNum);

                    /**
                     * 判断参数 MaxNodePodNum 是否已赋值
                     * @return MaxNodePodNum 是否已赋值
                     */
                    bool MaxNodePodNumHasBeenSet() const;

                private:

                    /**
                     * 集群Id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Vpc Id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 集群pod cidr
                     */
                    std::string m_podCIDR;
                    bool m_podCIDRHasBeenSet;

                    /**
                     * 集群 service cidr
                     */
                    std::string m_serviceCIDR;
                    bool m_serviceCIDRHasBeenSet;

                    /**
                     * k8s 版本号
                     */
                    std::string m_k8SVersion;
                    bool m_k8SVersionHasBeenSet;

                    /**
                     * 集群状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 集群描述信息
                     */
                    std::string m_clusterDesc;
                    bool m_clusterDescHasBeenSet;

                    /**
                     * 集群创建时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 边缘集群版本
                     */
                    std::string m_edgeClusterVersion;
                    bool m_edgeClusterVersionHasBeenSet;

                    /**
                     * 节点最大Pod数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxNodePodNum;
                    bool m_maxNodePodNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_EDGECLUSTER_H_
