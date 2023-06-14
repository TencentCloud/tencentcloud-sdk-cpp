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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_EDGECLOUDCLUSTER_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_EDGECLOUDCLUSTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * 获取边缘集群列表
                */
                class EdgeCloudCluster : public AbstractModel
                {
                public:
                    EdgeCloudCluster();
                    ~EdgeCloudCluster() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IECP侧边缘集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EdgeId IECP侧边缘集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetEdgeId() const;

                    /**
                     * 设置IECP侧边缘集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _edgeId IECP侧边缘集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEdgeId(const uint64_t& _edgeId);

                    /**
                     * 判断参数 EdgeId 是否已赋值
                     * @return EdgeId 是否已赋值
                     * 
                     */
                    bool EdgeIdHasBeenSet() const;

                    /**
                     * 获取边缘集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId 边缘集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置边缘集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterId 边缘集群ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取区域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 区域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置区域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 区域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterName 集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterName 集群名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取集群版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return K8SVersion 集群版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetK8SVersion() const;

                    /**
                     * 设置集群版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _k8SVersion 集群版本
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取私有网络ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId 私有网络ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcId 私有网络ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterDesc 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterDesc() const;

                    /**
                     * 设置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterDesc 描述
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取集群状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 集群状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置集群状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 集群状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取pod cidr
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PodCIDR pod cidr
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPodCIDR() const;

                    /**
                     * 设置pod cidr
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _podCIDR pod cidr
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取service cidr
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceCIDR service cidr
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceCIDR() const;

                    /**
                     * 设置service cidr
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceCIDR service cidr
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取边缘版本类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EdgeClusterVersion 边缘版本类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEdgeClusterVersion() const;

                    /**
                     * 设置边缘版本类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _edgeClusterVersion 边缘版本类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEdgeClusterVersion(const std::string& _edgeClusterVersion);

                    /**
                     * 判断参数 EdgeClusterVersion 是否已赋值
                     * @return EdgeClusterVersion 是否已赋值
                     * 
                     */
                    bool EdgeClusterVersionHasBeenSet() const;

                    /**
                     * 获取用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UID 用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUID() const;

                    /**
                     * 设置用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uID 用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUID(const std::string& _uID);

                    /**
                     * 判断参数 UID 是否已赋值
                     * @return UID 是否已赋值
                     * 
                     */
                    bool UIDHasBeenSet() const;

                private:

                    /**
                     * IECP侧边缘集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_edgeId;
                    bool m_edgeIdHasBeenSet;

                    /**
                     * 边缘集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 区域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 集群版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_k8SVersion;
                    bool m_k8SVersionHasBeenSet;

                    /**
                     * 私有网络ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterDesc;
                    bool m_clusterDescHasBeenSet;

                    /**
                     * 集群状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * pod cidr
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_podCIDR;
                    bool m_podCIDRHasBeenSet;

                    /**
                     * service cidr
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceCIDR;
                    bool m_serviceCIDRHasBeenSet;

                    /**
                     * 边缘版本类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_edgeClusterVersion;
                    bool m_edgeClusterVersionHasBeenSet;

                    /**
                     * 用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uID;
                    bool m_uIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_EDGECLOUDCLUSTER_H_
