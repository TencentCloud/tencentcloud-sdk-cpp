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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTER_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/ClusterNetworkSettings.h>
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
                * 集群信息结构体
                */
                class Cluster : public AbstractModel
                {
                public:
                    Cluster();
                    ~Cluster() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param ClusterId 集群ID
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
                     * 获取集群描述
                     * @return ClusterDescription 集群描述
                     */
                    std::string GetClusterDescription() const;

                    /**
                     * 设置集群描述
                     * @param ClusterDescription 集群描述
                     */
                    void SetClusterDescription(const std::string& _clusterDescription);

                    /**
                     * 判断参数 ClusterDescription 是否已赋值
                     * @return ClusterDescription 是否已赋值
                     */
                    bool ClusterDescriptionHasBeenSet() const;

                    /**
                     * 获取集群版本（默认值为1.10.5）
                     * @return ClusterVersion 集群版本（默认值为1.10.5）
                     */
                    std::string GetClusterVersion() const;

                    /**
                     * 设置集群版本（默认值为1.10.5）
                     * @param ClusterVersion 集群版本（默认值为1.10.5）
                     */
                    void SetClusterVersion(const std::string& _clusterVersion);

                    /**
                     * 判断参数 ClusterVersion 是否已赋值
                     * @return ClusterVersion 是否已赋值
                     */
                    bool ClusterVersionHasBeenSet() const;

                    /**
                     * 获取集群系统。centos7.2x86_64 或者 ubuntu16.04.1 LTSx86_64，默认取值为ubuntu16.04.1 LTSx86_64
                     * @return ClusterOs 集群系统。centos7.2x86_64 或者 ubuntu16.04.1 LTSx86_64，默认取值为ubuntu16.04.1 LTSx86_64
                     */
                    std::string GetClusterOs() const;

                    /**
                     * 设置集群系统。centos7.2x86_64 或者 ubuntu16.04.1 LTSx86_64，默认取值为ubuntu16.04.1 LTSx86_64
                     * @param ClusterOs 集群系统。centos7.2x86_64 或者 ubuntu16.04.1 LTSx86_64，默认取值为ubuntu16.04.1 LTSx86_64
                     */
                    void SetClusterOs(const std::string& _clusterOs);

                    /**
                     * 判断参数 ClusterOs 是否已赋值
                     * @return ClusterOs 是否已赋值
                     */
                    bool ClusterOsHasBeenSet() const;

                    /**
                     * 获取集群类型，托管集群：MANAGED_CLUSTER，独立集群：INDEPENDENT_CLUSTER。
                     * @return ClusterType 集群类型，托管集群：MANAGED_CLUSTER，独立集群：INDEPENDENT_CLUSTER。
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置集群类型，托管集群：MANAGED_CLUSTER，独立集群：INDEPENDENT_CLUSTER。
                     * @param ClusterType 集群类型，托管集群：MANAGED_CLUSTER，独立集群：INDEPENDENT_CLUSTER。
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取集群网络相关参数
                     * @return ClusterNetworkSettings 集群网络相关参数
                     */
                    ClusterNetworkSettings GetClusterNetworkSettings() const;

                    /**
                     * 设置集群网络相关参数
                     * @param ClusterNetworkSettings 集群网络相关参数
                     */
                    void SetClusterNetworkSettings(const ClusterNetworkSettings& _clusterNetworkSettings);

                    /**
                     * 判断参数 ClusterNetworkSettings 是否已赋值
                     * @return ClusterNetworkSettings 是否已赋值
                     */
                    bool ClusterNetworkSettingsHasBeenSet() const;

                    /**
                     * 获取集群当前node数量
                     * @return ClusterNodeNum 集群当前node数量
                     */
                    uint64_t GetClusterNodeNum() const;

                    /**
                     * 设置集群当前node数量
                     * @param ClusterNodeNum 集群当前node数量
                     */
                    void SetClusterNodeNum(const uint64_t& _clusterNodeNum);

                    /**
                     * 判断参数 ClusterNodeNum 是否已赋值
                     * @return ClusterNodeNum 是否已赋值
                     */
                    bool ClusterNodeNumHasBeenSet() const;

                    /**
                     * 获取集群所属的项目ID
                     * @return ProjectId 集群所属的项目ID
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置集群所属的项目ID
                     * @param ProjectId 集群所属的项目ID
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取标签描述列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagSpecification 标签描述列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TagSpecification> GetTagSpecification() const;

                    /**
                     * 设置标签描述列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TagSpecification 标签描述列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTagSpecification(const std::vector<TagSpecification>& _tagSpecification);

                    /**
                     * 判断参数 TagSpecification 是否已赋值
                     * @return TagSpecification 是否已赋值
                     */
                    bool TagSpecificationHasBeenSet() const;

                    /**
                     * 获取集群状态 (Running 运行中  Creating 创建中 Abnormal 异常  )
                     * @return ClusterStatus 集群状态 (Running 运行中  Creating 创建中 Abnormal 异常  )
                     */
                    std::string GetClusterStatus() const;

                    /**
                     * 设置集群状态 (Running 运行中  Creating 创建中 Abnormal 异常  )
                     * @param ClusterStatus 集群状态 (Running 运行中  Creating 创建中 Abnormal 异常  )
                     */
                    void SetClusterStatus(const std::string& _clusterStatus);

                    /**
                     * 判断参数 ClusterStatus 是否已赋值
                     * @return ClusterStatus 是否已赋值
                     */
                    bool ClusterStatusHasBeenSet() const;

                    /**
                     * 获取集群属性(包括集群不同属性的MAP，属性字段包括NodeNameType (lan-ip模式和hostname 模式，默认无lan-ip模式))
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Property 集群属性(包括集群不同属性的MAP，属性字段包括NodeNameType (lan-ip模式和hostname 模式，默认无lan-ip模式))
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProperty() const;

                    /**
                     * 设置集群属性(包括集群不同属性的MAP，属性字段包括NodeNameType (lan-ip模式和hostname 模式，默认无lan-ip模式))
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Property 集群属性(包括集群不同属性的MAP，属性字段包括NodeNameType (lan-ip模式和hostname 模式，默认无lan-ip模式))
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProperty(const std::string& _property);

                    /**
                     * 判断参数 Property 是否已赋值
                     * @return Property 是否已赋值
                     */
                    bool PropertyHasBeenSet() const;

                    /**
                     * 获取集群当前master数量
                     * @return ClusterMaterNodeNum 集群当前master数量
                     */
                    uint64_t GetClusterMaterNodeNum() const;

                    /**
                     * 设置集群当前master数量
                     * @param ClusterMaterNodeNum 集群当前master数量
                     */
                    void SetClusterMaterNodeNum(const uint64_t& _clusterMaterNodeNum);

                    /**
                     * 判断参数 ClusterMaterNodeNum 是否已赋值
                     * @return ClusterMaterNodeNum 是否已赋值
                     */
                    bool ClusterMaterNodeNumHasBeenSet() const;

                    /**
                     * 获取集群使用镜像id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageId 集群使用镜像id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置集群使用镜像id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ImageId 集群使用镜像id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取OsCustomizeType 系统定制类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OsCustomizeType OsCustomizeType 系统定制类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOsCustomizeType() const;

                    /**
                     * 设置OsCustomizeType 系统定制类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OsCustomizeType OsCustomizeType 系统定制类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOsCustomizeType(const std::string& _osCustomizeType);

                    /**
                     * 判断参数 OsCustomizeType 是否已赋值
                     * @return OsCustomizeType 是否已赋值
                     */
                    bool OsCustomizeTypeHasBeenSet() const;

                    /**
                     * 获取集群运行环境docker或container
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContainerRuntime 集群运行环境docker或container
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetContainerRuntime() const;

                    /**
                     * 设置集群运行环境docker或container
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ContainerRuntime 集群运行环境docker或container
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetContainerRuntime(const std::string& _containerRuntime);

                    /**
                     * 判断参数 ContainerRuntime 是否已赋值
                     * @return ContainerRuntime 是否已赋值
                     */
                    bool ContainerRuntimeHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreatedTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取删除保护开关
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeletionProtection 删除保护开关
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetDeletionProtection() const;

                    /**
                     * 设置删除保护开关
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DeletionProtection 删除保护开关
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDeletionProtection(const bool& _deletionProtection);

                    /**
                     * 判断参数 DeletionProtection 是否已赋值
                     * @return DeletionProtection 是否已赋值
                     */
                    bool DeletionProtectionHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 集群描述
                     */
                    std::string m_clusterDescription;
                    bool m_clusterDescriptionHasBeenSet;

                    /**
                     * 集群版本（默认值为1.10.5）
                     */
                    std::string m_clusterVersion;
                    bool m_clusterVersionHasBeenSet;

                    /**
                     * 集群系统。centos7.2x86_64 或者 ubuntu16.04.1 LTSx86_64，默认取值为ubuntu16.04.1 LTSx86_64
                     */
                    std::string m_clusterOs;
                    bool m_clusterOsHasBeenSet;

                    /**
                     * 集群类型，托管集群：MANAGED_CLUSTER，独立集群：INDEPENDENT_CLUSTER。
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * 集群网络相关参数
                     */
                    ClusterNetworkSettings m_clusterNetworkSettings;
                    bool m_clusterNetworkSettingsHasBeenSet;

                    /**
                     * 集群当前node数量
                     */
                    uint64_t m_clusterNodeNum;
                    bool m_clusterNodeNumHasBeenSet;

                    /**
                     * 集群所属的项目ID
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 标签描述列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TagSpecification> m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                    /**
                     * 集群状态 (Running 运行中  Creating 创建中 Abnormal 异常  )
                     */
                    std::string m_clusterStatus;
                    bool m_clusterStatusHasBeenSet;

                    /**
                     * 集群属性(包括集群不同属性的MAP，属性字段包括NodeNameType (lan-ip模式和hostname 模式，默认无lan-ip模式))
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_property;
                    bool m_propertyHasBeenSet;

                    /**
                     * 集群当前master数量
                     */
                    uint64_t m_clusterMaterNodeNum;
                    bool m_clusterMaterNodeNumHasBeenSet;

                    /**
                     * 集群使用镜像id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * OsCustomizeType 系统定制类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_osCustomizeType;
                    bool m_osCustomizeTypeHasBeenSet;

                    /**
                     * 集群运行环境docker或container
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_containerRuntime;
                    bool m_containerRuntimeHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 删除保护开关
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_deletionProtection;
                    bool m_deletionProtectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTER_H_
