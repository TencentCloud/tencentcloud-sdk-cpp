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
#include <tencentcloud/tke/v20180525/model/SecurityModeConfig.h>


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
                     * 获取<p>集群ID</p>
                     * @return ClusterId <p>集群ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群ID</p>
                     * @param _clusterId <p>集群ID</p>
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
                     * 获取<p>集群名称</p>
                     * @return ClusterName <p>集群名称</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>集群名称</p>
                     * @param _clusterName <p>集群名称</p>
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
                     * 获取<p>集群描述</p>
                     * @return ClusterDescription <p>集群描述</p>
                     * 
                     */
                    std::string GetClusterDescription() const;

                    /**
                     * 设置<p>集群描述</p>
                     * @param _clusterDescription <p>集群描述</p>
                     * 
                     */
                    void SetClusterDescription(const std::string& _clusterDescription);

                    /**
                     * 判断参数 ClusterDescription 是否已赋值
                     * @return ClusterDescription 是否已赋值
                     * 
                     */
                    bool ClusterDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>集群版本（默认值为1.10.5）</p>
                     * @return ClusterVersion <p>集群版本（默认值为1.10.5）</p>
                     * 
                     */
                    std::string GetClusterVersion() const;

                    /**
                     * 设置<p>集群版本（默认值为1.10.5）</p>
                     * @param _clusterVersion <p>集群版本（默认值为1.10.5）</p>
                     * 
                     */
                    void SetClusterVersion(const std::string& _clusterVersion);

                    /**
                     * 判断参数 ClusterVersion 是否已赋值
                     * @return ClusterVersion 是否已赋值
                     * 
                     */
                    bool ClusterVersionHasBeenSet() const;

                    /**
                     * 获取<p>集群系统。centos7.2x86_64 或者 ubuntu16.04.1 LTSx86_64，默认取值为ubuntu16.04.1 LTSx86_64</p>
                     * @return ClusterOs <p>集群系统。centos7.2x86_64 或者 ubuntu16.04.1 LTSx86_64，默认取值为ubuntu16.04.1 LTSx86_64</p>
                     * 
                     */
                    std::string GetClusterOs() const;

                    /**
                     * 设置<p>集群系统。centos7.2x86_64 或者 ubuntu16.04.1 LTSx86_64，默认取值为ubuntu16.04.1 LTSx86_64</p>
                     * @param _clusterOs <p>集群系统。centos7.2x86_64 或者 ubuntu16.04.1 LTSx86_64，默认取值为ubuntu16.04.1 LTSx86_64</p>
                     * 
                     */
                    void SetClusterOs(const std::string& _clusterOs);

                    /**
                     * 判断参数 ClusterOs 是否已赋值
                     * @return ClusterOs 是否已赋值
                     * 
                     */
                    bool ClusterOsHasBeenSet() const;

                    /**
                     * 获取<p>集群类型，托管集群：MANAGED_CLUSTER，独立集群：INDEPENDENT_CLUSTER。</p>
                     * @return ClusterType <p>集群类型，托管集群：MANAGED_CLUSTER，独立集群：INDEPENDENT_CLUSTER。</p>
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置<p>集群类型，托管集群：MANAGED_CLUSTER，独立集群：INDEPENDENT_CLUSTER。</p>
                     * @param _clusterType <p>集群类型，托管集群：MANAGED_CLUSTER，独立集群：INDEPENDENT_CLUSTER。</p>
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取<p>集群网络相关参数</p>
                     * @return ClusterNetworkSettings <p>集群网络相关参数</p>
                     * 
                     */
                    ClusterNetworkSettings GetClusterNetworkSettings() const;

                    /**
                     * 设置<p>集群网络相关参数</p>
                     * @param _clusterNetworkSettings <p>集群网络相关参数</p>
                     * 
                     */
                    void SetClusterNetworkSettings(const ClusterNetworkSettings& _clusterNetworkSettings);

                    /**
                     * 判断参数 ClusterNetworkSettings 是否已赋值
                     * @return ClusterNetworkSettings 是否已赋值
                     * 
                     */
                    bool ClusterNetworkSettingsHasBeenSet() const;

                    /**
                     * 获取<p>集群当前node数量</p>
                     * @return ClusterNodeNum <p>集群当前node数量</p>
                     * 
                     */
                    uint64_t GetClusterNodeNum() const;

                    /**
                     * 设置<p>集群当前node数量</p>
                     * @param _clusterNodeNum <p>集群当前node数量</p>
                     * 
                     */
                    void SetClusterNodeNum(const uint64_t& _clusterNodeNum);

                    /**
                     * 判断参数 ClusterNodeNum 是否已赋值
                     * @return ClusterNodeNum 是否已赋值
                     * 
                     */
                    bool ClusterNodeNumHasBeenSet() const;

                    /**
                     * 获取<p>集群所属的项目ID</p>
                     * @return ProjectId <p>集群所属的项目ID</p>
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置<p>集群所属的项目ID</p>
                     * @param _projectId <p>集群所属的项目ID</p>
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>标签描述列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagSpecification <p>标签描述列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TagSpecification> GetTagSpecification() const;

                    /**
                     * 设置<p>标签描述列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagSpecification <p>标签描述列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTagSpecification(const std::vector<TagSpecification>& _tagSpecification);

                    /**
                     * 判断参数 TagSpecification 是否已赋值
                     * @return TagSpecification 是否已赋值
                     * 
                     */
                    bool TagSpecificationHasBeenSet() const;

                    /**
                     * 获取<p>集群状态 (Trading 集群开通中,Creating 创建中,Running 运行中,Deleting 删除中,Idling 闲置中,Recovering 唤醒中,Scaling 规模调整中,Upgrading 升级中,WaittingForConnect 等待注册,Trading 集群开通中,Isolated 欠费隔离中,Pause 集群升级暂停,NodeUpgrading 节点升级中,RuntimeUpgrading 节点运行时升级中,MasterScaling Master扩缩容中,ClusterLevelUpgrading 调整规格中,ResourceIsolate 隔离中,ResourceIsolated 已隔离,ResourceReverse 冲正中,Abnormal 异常)</p>
                     * @return ClusterStatus <p>集群状态 (Trading 集群开通中,Creating 创建中,Running 运行中,Deleting 删除中,Idling 闲置中,Recovering 唤醒中,Scaling 规模调整中,Upgrading 升级中,WaittingForConnect 等待注册,Trading 集群开通中,Isolated 欠费隔离中,Pause 集群升级暂停,NodeUpgrading 节点升级中,RuntimeUpgrading 节点运行时升级中,MasterScaling Master扩缩容中,ClusterLevelUpgrading 调整规格中,ResourceIsolate 隔离中,ResourceIsolated 已隔离,ResourceReverse 冲正中,Abnormal 异常)</p>
                     * 
                     */
                    std::string GetClusterStatus() const;

                    /**
                     * 设置<p>集群状态 (Trading 集群开通中,Creating 创建中,Running 运行中,Deleting 删除中,Idling 闲置中,Recovering 唤醒中,Scaling 规模调整中,Upgrading 升级中,WaittingForConnect 等待注册,Trading 集群开通中,Isolated 欠费隔离中,Pause 集群升级暂停,NodeUpgrading 节点升级中,RuntimeUpgrading 节点运行时升级中,MasterScaling Master扩缩容中,ClusterLevelUpgrading 调整规格中,ResourceIsolate 隔离中,ResourceIsolated 已隔离,ResourceReverse 冲正中,Abnormal 异常)</p>
                     * @param _clusterStatus <p>集群状态 (Trading 集群开通中,Creating 创建中,Running 运行中,Deleting 删除中,Idling 闲置中,Recovering 唤醒中,Scaling 规模调整中,Upgrading 升级中,WaittingForConnect 等待注册,Trading 集群开通中,Isolated 欠费隔离中,Pause 集群升级暂停,NodeUpgrading 节点升级中,RuntimeUpgrading 节点运行时升级中,MasterScaling Master扩缩容中,ClusterLevelUpgrading 调整规格中,ResourceIsolate 隔离中,ResourceIsolated 已隔离,ResourceReverse 冲正中,Abnormal 异常)</p>
                     * 
                     */
                    void SetClusterStatus(const std::string& _clusterStatus);

                    /**
                     * 判断参数 ClusterStatus 是否已赋值
                     * @return ClusterStatus 是否已赋值
                     * 
                     */
                    bool ClusterStatusHasBeenSet() const;

                    /**
                     * 获取<p>集群属性(包括集群不同属性的MAP，属性字段包括NodeNameType (lan-ip模式和hostname 模式，默认无lan-ip模式))</p>
                     * @return Property <p>集群属性(包括集群不同属性的MAP，属性字段包括NodeNameType (lan-ip模式和hostname 模式，默认无lan-ip模式))</p>
                     * 
                     */
                    std::string GetProperty() const;

                    /**
                     * 设置<p>集群属性(包括集群不同属性的MAP，属性字段包括NodeNameType (lan-ip模式和hostname 模式，默认无lan-ip模式))</p>
                     * @param _property <p>集群属性(包括集群不同属性的MAP，属性字段包括NodeNameType (lan-ip模式和hostname 模式，默认无lan-ip模式))</p>
                     * 
                     */
                    void SetProperty(const std::string& _property);

                    /**
                     * 判断参数 Property 是否已赋值
                     * @return Property 是否已赋值
                     * 
                     */
                    bool PropertyHasBeenSet() const;

                    /**
                     * 获取<p>集群当前master数量</p>
                     * @return ClusterMaterNodeNum <p>集群当前master数量</p>
                     * 
                     */
                    uint64_t GetClusterMaterNodeNum() const;

                    /**
                     * 设置<p>集群当前master数量</p>
                     * @param _clusterMaterNodeNum <p>集群当前master数量</p>
                     * 
                     */
                    void SetClusterMaterNodeNum(const uint64_t& _clusterMaterNodeNum);

                    /**
                     * 判断参数 ClusterMaterNodeNum 是否已赋值
                     * @return ClusterMaterNodeNum 是否已赋值
                     * 
                     */
                    bool ClusterMaterNodeNumHasBeenSet() const;

                    /**
                     * 获取<p>集群使用镜像id</p>
                     * @return ImageId <p>集群使用镜像id</p>
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置<p>集群使用镜像id</p>
                     * @param _imageId <p>集群使用镜像id</p>
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取<p>OsCustomizeType 系统定制类型</p>
                     * @return OsCustomizeType <p>OsCustomizeType 系统定制类型</p>
                     * 
                     */
                    std::string GetOsCustomizeType() const;

                    /**
                     * 设置<p>OsCustomizeType 系统定制类型</p>
                     * @param _osCustomizeType <p>OsCustomizeType 系统定制类型</p>
                     * 
                     */
                    void SetOsCustomizeType(const std::string& _osCustomizeType);

                    /**
                     * 判断参数 OsCustomizeType 是否已赋值
                     * @return OsCustomizeType 是否已赋值
                     * 
                     */
                    bool OsCustomizeTypeHasBeenSet() const;

                    /**
                     * 获取<p>集群运行环境docker或container</p>
                     * @return ContainerRuntime <p>集群运行环境docker或container</p>
                     * 
                     */
                    std::string GetContainerRuntime() const;

                    /**
                     * 设置<p>集群运行环境docker或container</p>
                     * @param _containerRuntime <p>集群运行环境docker或container</p>
                     * 
                     */
                    void SetContainerRuntime(const std::string& _containerRuntime);

                    /**
                     * 判断参数 ContainerRuntime 是否已赋值
                     * @return ContainerRuntime 是否已赋值
                     * 
                     */
                    bool ContainerRuntimeHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreatedTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createdTime <p>创建时间</p>
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取<p>集群删除保护开关，打开：true，关闭：false</p>
                     * @return DeletionProtection <p>集群删除保护开关，打开：true，关闭：false</p>
                     * 
                     */
                    bool GetDeletionProtection() const;

                    /**
                     * 设置<p>集群删除保护开关，打开：true，关闭：false</p>
                     * @param _deletionProtection <p>集群删除保护开关，打开：true，关闭：false</p>
                     * 
                     */
                    void SetDeletionProtection(const bool& _deletionProtection);

                    /**
                     * 判断参数 DeletionProtection 是否已赋值
                     * @return DeletionProtection 是否已赋值
                     * 
                     */
                    bool DeletionProtectionHasBeenSet() const;

                    /**
                     * 获取<p>集群是否开启第三方节点支持，开启：true，关闭：false</p>
                     * @return EnableExternalNode <p>集群是否开启第三方节点支持，开启：true，关闭：false</p>
                     * 
                     */
                    bool GetEnableExternalNode() const;

                    /**
                     * 设置<p>集群是否开启第三方节点支持，开启：true，关闭：false</p>
                     * @param _enableExternalNode <p>集群是否开启第三方节点支持，开启：true，关闭：false</p>
                     * 
                     */
                    void SetEnableExternalNode(const bool& _enableExternalNode);

                    /**
                     * 判断参数 EnableExternalNode 是否已赋值
                     * @return EnableExternalNode 是否已赋值
                     * 
                     */
                    bool EnableExternalNodeHasBeenSet() const;

                    /**
                     * 获取<p>集群等级，针对托管集群生效</p>
                     * @return ClusterLevel <p>集群等级，针对托管集群生效</p>
                     * 
                     */
                    std::string GetClusterLevel() const;

                    /**
                     * 设置<p>集群等级，针对托管集群生效</p>
                     * @param _clusterLevel <p>集群等级，针对托管集群生效</p>
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
                     * 获取<p>自动变配集群等级，针对托管集群生效。开启：true，关闭：false</p>
                     * @return AutoUpgradeClusterLevel <p>自动变配集群等级，针对托管集群生效。开启：true，关闭：false</p>
                     * 
                     */
                    bool GetAutoUpgradeClusterLevel() const;

                    /**
                     * 设置<p>自动变配集群等级，针对托管集群生效。开启：true，关闭：false</p>
                     * @param _autoUpgradeClusterLevel <p>自动变配集群等级，针对托管集群生效。开启：true，关闭：false</p>
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
                     * 获取<p>是否开启QGPU共享，开启：true，关闭：false</p>
                     * @return QGPUShareEnable <p>是否开启QGPU共享，开启：true，关闭：false</p>
                     * 
                     */
                    bool GetQGPUShareEnable() const;

                    /**
                     * 设置<p>是否开启QGPU共享，开启：true，关闭：false</p>
                     * @param _qGPUShareEnable <p>是否开启QGPU共享，开启：true，关闭：false</p>
                     * 
                     */
                    void SetQGPUShareEnable(const bool& _qGPUShareEnable);

                    /**
                     * 判断参数 QGPUShareEnable 是否已赋值
                     * @return QGPUShareEnable 是否已赋值
                     * 
                     */
                    bool QGPUShareEnableHasBeenSet() const;

                    /**
                     * 获取<p>运行时版本</p>
                     * @return RuntimeVersion <p>运行时版本</p>
                     * 
                     */
                    std::string GetRuntimeVersion() const;

                    /**
                     * 设置<p>运行时版本</p>
                     * @param _runtimeVersion <p>运行时版本</p>
                     * 
                     */
                    void SetRuntimeVersion(const std::string& _runtimeVersion);

                    /**
                     * 判断参数 RuntimeVersion 是否已赋值
                     * @return RuntimeVersion 是否已赋值
                     * 
                     */
                    bool RuntimeVersionHasBeenSet() const;

                    /**
                     * 获取<p>集群当前etcd数量</p>
                     * @return ClusterEtcdNodeNum <p>集群当前etcd数量</p>
                     * 
                     */
                    uint64_t GetClusterEtcdNodeNum() const;

                    /**
                     * 设置<p>集群当前etcd数量</p>
                     * @param _clusterEtcdNodeNum <p>集群当前etcd数量</p>
                     * 
                     */
                    void SetClusterEtcdNodeNum(const uint64_t& _clusterEtcdNodeNum);

                    /**
                     * 判断参数 ClusterEtcdNodeNum 是否已赋值
                     * @return ClusterEtcdNodeNum 是否已赋值
                     * 
                     */
                    bool ClusterEtcdNodeNumHasBeenSet() const;

                    /**
                     * 获取<p>本地专用集群Id</p>
                     * @return CdcId <p>本地专用集群Id</p>
                     * 
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置<p>本地专用集群Id</p>
                     * @param _cdcId <p>本地专用集群Id</p>
                     * 
                     */
                    void SetCdcId(const std::string& _cdcId);

                    /**
                     * 判断参数 CdcId 是否已赋值
                     * @return CdcId 是否已赋值
                     * 
                     */
                    bool CdcIdHasBeenSet() const;

                    /**
                     * 获取<p>集群是否启用高可用模式。用于指导跨可用区资源打散等高可用策略的执行</p>
                     * @return IsHighAvailability <p>集群是否启用高可用模式。用于指导跨可用区资源打散等高可用策略的执行</p>
                     * 
                     */
                    bool GetIsHighAvailability() const;

                    /**
                     * 设置<p>集群是否启用高可用模式。用于指导跨可用区资源打散等高可用策略的执行</p>
                     * @param _isHighAvailability <p>集群是否启用高可用模式。用于指导跨可用区资源打散等高可用策略的执行</p>
                     * 
                     */
                    void SetIsHighAvailability(const bool& _isHighAvailability);

                    /**
                     * 判断参数 IsHighAvailability 是否已赋值
                     * @return IsHighAvailability 是否已赋值
                     * 
                     */
                    bool IsHighAvailabilityHasBeenSet() const;

                    /**
                     * 获取<p>开启后会下发Gatekeeper和网络策略</p>
                     * @return SecurityModeConfig <p>开启后会下发Gatekeeper和网络策略</p>
                     * 
                     */
                    SecurityModeConfig GetSecurityModeConfig() const;

                    /**
                     * 设置<p>开启后会下发Gatekeeper和网络策略</p>
                     * @param _securityModeConfig <p>开启后会下发Gatekeeper和网络策略</p>
                     * 
                     */
                    void SetSecurityModeConfig(const SecurityModeConfig& _securityModeConfig);

                    /**
                     * 判断参数 SecurityModeConfig 是否已赋值
                     * @return SecurityModeConfig 是否已赋值
                     * 
                     */
                    bool SecurityModeConfigHasBeenSet() const;

                private:

                    /**
                     * <p>集群ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>集群名称</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>集群描述</p>
                     */
                    std::string m_clusterDescription;
                    bool m_clusterDescriptionHasBeenSet;

                    /**
                     * <p>集群版本（默认值为1.10.5）</p>
                     */
                    std::string m_clusterVersion;
                    bool m_clusterVersionHasBeenSet;

                    /**
                     * <p>集群系统。centos7.2x86_64 或者 ubuntu16.04.1 LTSx86_64，默认取值为ubuntu16.04.1 LTSx86_64</p>
                     */
                    std::string m_clusterOs;
                    bool m_clusterOsHasBeenSet;

                    /**
                     * <p>集群类型，托管集群：MANAGED_CLUSTER，独立集群：INDEPENDENT_CLUSTER。</p>
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * <p>集群网络相关参数</p>
                     */
                    ClusterNetworkSettings m_clusterNetworkSettings;
                    bool m_clusterNetworkSettingsHasBeenSet;

                    /**
                     * <p>集群当前node数量</p>
                     */
                    uint64_t m_clusterNodeNum;
                    bool m_clusterNodeNumHasBeenSet;

                    /**
                     * <p>集群所属的项目ID</p>
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>标签描述列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TagSpecification> m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                    /**
                     * <p>集群状态 (Trading 集群开通中,Creating 创建中,Running 运行中,Deleting 删除中,Idling 闲置中,Recovering 唤醒中,Scaling 规模调整中,Upgrading 升级中,WaittingForConnect 等待注册,Trading 集群开通中,Isolated 欠费隔离中,Pause 集群升级暂停,NodeUpgrading 节点升级中,RuntimeUpgrading 节点运行时升级中,MasterScaling Master扩缩容中,ClusterLevelUpgrading 调整规格中,ResourceIsolate 隔离中,ResourceIsolated 已隔离,ResourceReverse 冲正中,Abnormal 异常)</p>
                     */
                    std::string m_clusterStatus;
                    bool m_clusterStatusHasBeenSet;

                    /**
                     * <p>集群属性(包括集群不同属性的MAP，属性字段包括NodeNameType (lan-ip模式和hostname 模式，默认无lan-ip模式))</p>
                     */
                    std::string m_property;
                    bool m_propertyHasBeenSet;

                    /**
                     * <p>集群当前master数量</p>
                     */
                    uint64_t m_clusterMaterNodeNum;
                    bool m_clusterMaterNodeNumHasBeenSet;

                    /**
                     * <p>集群使用镜像id</p>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * <p>OsCustomizeType 系统定制类型</p>
                     */
                    std::string m_osCustomizeType;
                    bool m_osCustomizeTypeHasBeenSet;

                    /**
                     * <p>集群运行环境docker或container</p>
                     */
                    std::string m_containerRuntime;
                    bool m_containerRuntimeHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>集群删除保护开关，打开：true，关闭：false</p>
                     */
                    bool m_deletionProtection;
                    bool m_deletionProtectionHasBeenSet;

                    /**
                     * <p>集群是否开启第三方节点支持，开启：true，关闭：false</p>
                     */
                    bool m_enableExternalNode;
                    bool m_enableExternalNodeHasBeenSet;

                    /**
                     * <p>集群等级，针对托管集群生效</p>
                     */
                    std::string m_clusterLevel;
                    bool m_clusterLevelHasBeenSet;

                    /**
                     * <p>自动变配集群等级，针对托管集群生效。开启：true，关闭：false</p>
                     */
                    bool m_autoUpgradeClusterLevel;
                    bool m_autoUpgradeClusterLevelHasBeenSet;

                    /**
                     * <p>是否开启QGPU共享，开启：true，关闭：false</p>
                     */
                    bool m_qGPUShareEnable;
                    bool m_qGPUShareEnableHasBeenSet;

                    /**
                     * <p>运行时版本</p>
                     */
                    std::string m_runtimeVersion;
                    bool m_runtimeVersionHasBeenSet;

                    /**
                     * <p>集群当前etcd数量</p>
                     */
                    uint64_t m_clusterEtcdNodeNum;
                    bool m_clusterEtcdNodeNumHasBeenSet;

                    /**
                     * <p>本地专用集群Id</p>
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                    /**
                     * <p>集群是否启用高可用模式。用于指导跨可用区资源打散等高可用策略的执行</p>
                     */
                    bool m_isHighAvailability;
                    bool m_isHighAvailabilityHasBeenSet;

                    /**
                     * <p>开启后会下发Gatekeeper和网络策略</p>
                     */
                    SecurityModeConfig m_securityModeConfig;
                    bool m_securityModeConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTER_H_
