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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGEUNITCLOUDRESPONSE_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGEUNITCLOUDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iecp/v20210914/model/EdgeUnitStatisticItem.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * DescribeEdgeUnitCloud返回参数结构体
                */
                class DescribeEdgeUnitCloudResponse : public AbstractModel
                {
                public:
                    DescribeEdgeUnitCloudResponse();
                    ~DescribeEdgeUnitCloudResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取边缘集群名称
                     * @return Name 边缘集群名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取集群最后探活时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LiveTime 集群最后探活时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLiveTime() const;

                    /**
                     * 判断参数 LiveTime 是否已赋值
                     * @return LiveTime 是否已赋值
                     * 
                     */
                    bool LiveTimeHasBeenSet() const;

                    /**
                     * 获取集群状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MasterStatus 集群状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMasterStatus() const;

                    /**
                     * 判断参数 MasterStatus 是否已赋值
                     * @return MasterStatus 是否已赋值
                     * 
                     */
                    bool MasterStatusHasBeenSet() const;

                    /**
                     * 获取版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return K8sVersion 版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetK8sVersion() const;

                    /**
                     * 判断参数 K8sVersion 是否已赋值
                     * @return K8sVersion 是否已赋值
                     * 
                     */
                    bool K8sVersionHasBeenSet() const;

                    /**
                     * 获取pod cidr
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PodCIDR pod cidr
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPodCIDR() const;

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
                     * 判断参数 ServiceCIDR 是否已赋值
                     * @return ServiceCIDR 是否已赋值
                     * 
                     */
                    bool ServiceCIDRHasBeenSet() const;

                    /**
                     * 获取集群内网访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return APIServerAddress 集群内网访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAPIServerAddress() const;

                    /**
                     * 判断参数 APIServerAddress 是否已赋值
                     * @return APIServerAddress 是否已赋值
                     * 
                     */
                    bool APIServerAddressHasBeenSet() const;

                    /**
                     * 获取集群外网访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return APIServerExposeAddress 集群外网访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAPIServerExposeAddress() const;

                    /**
                     * 判断参数 APIServerExposeAddress 是否已赋值
                     * @return APIServerExposeAddress 是否已赋值
                     * 
                     */
                    bool APIServerExposeAddressHasBeenSet() const;

                    /**
                     * 获取用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UID 用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUID() const;

                    /**
                     * 判断参数 UID 是否已赋值
                     * @return UID 是否已赋值
                     * 
                     */
                    bool UIDHasBeenSet() const;

                    /**
                     * 获取集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnitID 集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetUnitID() const;

                    /**
                     * 判断参数 UnitID 是否已赋值
                     * @return UnitID 是否已赋值
                     * 
                     */
                    bool UnitIDHasBeenSet() const;

                    /**
                     * 获取集群标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cluster 集群标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCluster() const;

                    /**
                     * 判断参数 Cluster 是否已赋值
                     * @return Cluster 是否已赋值
                     * 
                     */
                    bool ClusterHasBeenSet() const;

                    /**
                     * 获取节点统计
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Node 节点统计
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    EdgeUnitStatisticItem GetNode() const;

                    /**
                     * 判断参数 Node 是否已赋值
                     * @return Node 是否已赋值
                     * 
                     */
                    bool NodeHasBeenSet() const;

                    /**
                     * 获取工作负载统计
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Workload 工作负载统计
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    EdgeUnitStatisticItem GetWorkload() const;

                    /**
                     * 判断参数 Workload 是否已赋值
                     * @return Workload 是否已赋值
                     * 
                     */
                    bool WorkloadHasBeenSet() const;

                    /**
                     * 获取Grid应用统计
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Grid Grid应用统计
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    EdgeUnitStatisticItem GetGrid() const;

                    /**
                     * 判断参数 Grid 是否已赋值
                     * @return Grid 是否已赋值
                     * 
                     */
                    bool GridHasBeenSet() const;

                    /**
                     * 获取设备统计
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubDevice 设备统计
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    EdgeUnitStatisticItem GetSubDevice() const;

                    /**
                     * 判断参数 SubDevice 是否已赋值
                     * @return SubDevice 是否已赋值
                     * 
                     */
                    bool SubDeviceHasBeenSet() const;

                private:

                    /**
                     * 边缘集群名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 集群最后探活时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_liveTime;
                    bool m_liveTimeHasBeenSet;

                    /**
                     * 集群状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_masterStatus;
                    bool m_masterStatusHasBeenSet;

                    /**
                     * 版本号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_k8sVersion;
                    bool m_k8sVersionHasBeenSet;

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
                     * 集群内网访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_aPIServerAddress;
                    bool m_aPIServerAddressHasBeenSet;

                    /**
                     * 集群外网访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_aPIServerExposeAddress;
                    bool m_aPIServerExposeAddressHasBeenSet;

                    /**
                     * 用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uID;
                    bool m_uIDHasBeenSet;

                    /**
                     * 集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_unitID;
                    bool m_unitIDHasBeenSet;

                    /**
                     * 集群标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cluster;
                    bool m_clusterHasBeenSet;

                    /**
                     * 节点统计
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EdgeUnitStatisticItem m_node;
                    bool m_nodeHasBeenSet;

                    /**
                     * 工作负载统计
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EdgeUnitStatisticItem m_workload;
                    bool m_workloadHasBeenSet;

                    /**
                     * Grid应用统计
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EdgeUnitStatisticItem m_grid;
                    bool m_gridHasBeenSet;

                    /**
                     * 设备统计
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EdgeUnitStatisticItem m_subDevice;
                    bool m_subDeviceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGEUNITCLOUDRESPONSE_H_
