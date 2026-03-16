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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_EXTERNALNODEPOOL_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_EXTERNALNODEPOOL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/RuntimeConfig.h>
#include <tencentcloud/tke/v20180525/model/Label.h>
#include <tencentcloud/tke/v20180525/model/Taint.h>
#include <tencentcloud/tke/v20180525/model/InstanceAdvancedSettings.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 第三方节点池信息
                */
                class ExternalNodePool : public AbstractModel
                {
                public:
                    ExternalNodePool();
                    ~ExternalNodePool() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取第三方节点池ID
                     * @return NodePoolId 第三方节点池ID
                     * 
                     */
                    std::string GetNodePoolId() const;

                    /**
                     * 设置第三方节点池ID
                     * @param _nodePoolId 第三方节点池ID
                     * 
                     */
                    void SetNodePoolId(const std::string& _nodePoolId);

                    /**
                     * 判断参数 NodePoolId 是否已赋值
                     * @return NodePoolId 是否已赋值
                     * 
                     */
                    bool NodePoolIdHasBeenSet() const;

                    /**
                     * 获取第三方节点池名称
                     * @return Name 第三方节点池名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置第三方节点池名称
                     * @param _name 第三方节点池名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取节点池生命周期
                     * @return LifeState 节点池生命周期
                     * 
                     */
                    std::string GetLifeState() const;

                    /**
                     * 设置节点池生命周期
                     * @param _lifeState 节点池生命周期
                     * 
                     */
                    void SetLifeState(const std::string& _lifeState);

                    /**
                     * 判断参数 LifeState 是否已赋值
                     * @return LifeState 是否已赋值
                     * 
                     */
                    bool LifeStateHasBeenSet() const;

                    /**
                     * 获取集群CIDR
                     * @return ClusterCIDR 集群CIDR
                     * 
                     */
                    std::string GetClusterCIDR() const;

                    /**
                     * 设置集群CIDR
                     * @param _clusterCIDR 集群CIDR
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
                     * 获取集群网络插件类型
                     * @return NetworkType 集群网络插件类型
                     * 
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置集群网络插件类型
                     * @param _networkType 集群网络插件类型
                     * 
                     */
                    void SetNetworkType(const std::string& _networkType);

                    /**
                     * 判断参数 NetworkType 是否已赋值
                     * @return NetworkType 是否已赋值
                     * 
                     */
                    bool NetworkTypeHasBeenSet() const;

                    /**
                     * 获取第三方节点Runtime配置
                     * @return RuntimeConfig 第三方节点Runtime配置
                     * 
                     */
                    RuntimeConfig GetRuntimeConfig() const;

                    /**
                     * 设置第三方节点Runtime配置
                     * @param _runtimeConfig 第三方节点Runtime配置
                     * 
                     */
                    void SetRuntimeConfig(const RuntimeConfig& _runtimeConfig);

                    /**
                     * 判断参数 RuntimeConfig 是否已赋值
                     * @return RuntimeConfig 是否已赋值
                     * 
                     */
                    bool RuntimeConfigHasBeenSet() const;

                    /**
                     * 获取第三方节点label
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Labels 第三方节点label
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Label> GetLabels() const;

                    /**
                     * 设置第三方节点label
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labels 第三方节点label
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabels(const std::vector<Label>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取第三方节点taint
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Taints 第三方节点taint
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Taint> GetTaints() const;

                    /**
                     * 设置第三方节点taint
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taints 第三方节点taint
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaints(const std::vector<Taint>& _taints);

                    /**
                     * 判断参数 Taints 是否已赋值
                     * @return Taints 是否已赋值
                     * 
                     */
                    bool TaintsHasBeenSet() const;

                    /**
                     * 获取第三方节点高级设置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceAdvancedSettings 第三方节点高级设置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    InstanceAdvancedSettings GetInstanceAdvancedSettings() const;

                    /**
                     * 设置第三方节点高级设置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceAdvancedSettings 第三方节点高级设置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceAdvancedSettings(const InstanceAdvancedSettings& _instanceAdvancedSettings);

                    /**
                     * 判断参数 InstanceAdvancedSettings 是否已赋值
                     * @return InstanceAdvancedSettings 是否已赋值
                     * 
                     */
                    bool InstanceAdvancedSettingsHasBeenSet() const;

                    /**
                     * 获取删除保护开关
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeletionProtection 删除保护开关
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetDeletionProtection() const;

                    /**
                     * 设置删除保护开关
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deletionProtection 删除保护开关
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeletionProtection(const bool& _deletionProtection);

                    /**
                     * 判断参数 DeletionProtection 是否已赋值
                     * @return DeletionProtection 是否已赋值
                     * 
                     */
                    bool DeletionProtectionHasBeenSet() const;

                private:

                    /**
                     * 第三方节点池ID
                     */
                    std::string m_nodePoolId;
                    bool m_nodePoolIdHasBeenSet;

                    /**
                     * 第三方节点池名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 节点池生命周期
                     */
                    std::string m_lifeState;
                    bool m_lifeStateHasBeenSet;

                    /**
                     * 集群CIDR
                     */
                    std::string m_clusterCIDR;
                    bool m_clusterCIDRHasBeenSet;

                    /**
                     * 集群网络插件类型
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * 第三方节点Runtime配置
                     */
                    RuntimeConfig m_runtimeConfig;
                    bool m_runtimeConfigHasBeenSet;

                    /**
                     * 第三方节点label
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Label> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * 第三方节点taint
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Taint> m_taints;
                    bool m_taintsHasBeenSet;

                    /**
                     * 第三方节点高级设置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InstanceAdvancedSettings m_instanceAdvancedSettings;
                    bool m_instanceAdvancedSettingsHasBeenSet;

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

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_EXTERNALNODEPOOL_H_
