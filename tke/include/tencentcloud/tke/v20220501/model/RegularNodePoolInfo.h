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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_REGULARNODEPOOLINFO_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_REGULARNODEPOOLINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20220501/model/NodeCountSummary.h>
#include <tencentcloud/tke/v20220501/model/InstanceAdvancedSettings.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * 普通节点池信息
                */
                class RegularNodePoolInfo : public AbstractModel
                {
                public:
                    RegularNodePoolInfo();
                    ~RegularNodePoolInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取LaunchConfigurationId 配置
                     * @return LaunchConfigurationId LaunchConfigurationId 配置
                     * 
                     */
                    std::string GetLaunchConfigurationId() const;

                    /**
                     * 设置LaunchConfigurationId 配置
                     * @param _launchConfigurationId LaunchConfigurationId 配置
                     * 
                     */
                    void SetLaunchConfigurationId(const std::string& _launchConfigurationId);

                    /**
                     * 判断参数 LaunchConfigurationId 是否已赋值
                     * @return LaunchConfigurationId 是否已赋值
                     * 
                     */
                    bool LaunchConfigurationIdHasBeenSet() const;

                    /**
                     * 获取AutoscalingGroupId 分组id
                     * @return AutoscalingGroupId AutoscalingGroupId 分组id
                     * 
                     */
                    std::string GetAutoscalingGroupId() const;

                    /**
                     * 设置AutoscalingGroupId 分组id
                     * @param _autoscalingGroupId AutoscalingGroupId 分组id
                     * 
                     */
                    void SetAutoscalingGroupId(const std::string& _autoscalingGroupId);

                    /**
                     * 判断参数 AutoscalingGroupId 是否已赋值
                     * @return AutoscalingGroupId 是否已赋值
                     * 
                     */
                    bool AutoscalingGroupIdHasBeenSet() const;

                    /**
                     * 获取NodeCountSummary 节点列表
                     * @return NodeCountSummary NodeCountSummary 节点列表
                     * 
                     */
                    NodeCountSummary GetNodeCountSummary() const;

                    /**
                     * 设置NodeCountSummary 节点列表
                     * @param _nodeCountSummary NodeCountSummary 节点列表
                     * 
                     */
                    void SetNodeCountSummary(const NodeCountSummary& _nodeCountSummary);

                    /**
                     * 判断参数 NodeCountSummary 是否已赋值
                     * @return NodeCountSummary 是否已赋值
                     * 
                     */
                    bool NodeCountSummaryHasBeenSet() const;

                    /**
                     * 获取状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoscalingGroupStatus 状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAutoscalingGroupStatus() const;

                    /**
                     * 设置状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoscalingGroupStatus 状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAutoscalingGroupStatus(const std::string& _autoscalingGroupStatus);

                    /**
                     * 判断参数 AutoscalingGroupStatus 是否已赋值
                     * @return AutoscalingGroupStatus 是否已赋值
                     * 
                     */
                    bool AutoscalingGroupStatusHasBeenSet() const;

                    /**
                     * 获取最大节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxNodesNum 最大节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxNodesNum() const;

                    /**
                     * 设置最大节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxNodesNum 最大节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxNodesNum(const int64_t& _maxNodesNum);

                    /**
                     * 判断参数 MaxNodesNum 是否已赋值
                     * @return MaxNodesNum 是否已赋值
                     * 
                     */
                    bool MaxNodesNumHasBeenSet() const;

                    /**
                     * 获取最小节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MinNodesNum 最小节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMinNodesNum() const;

                    /**
                     * 设置最小节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _minNodesNum 最小节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMinNodesNum(const int64_t& _minNodesNum);

                    /**
                     * 判断参数 MinNodesNum 是否已赋值
                     * @return MinNodesNum 是否已赋值
                     * 
                     */
                    bool MinNodesNumHasBeenSet() const;

                    /**
                     * 获取期望的节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DesiredNodesNum 期望的节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDesiredNodesNum() const;

                    /**
                     * 设置期望的节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _desiredNodesNum 期望的节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDesiredNodesNum(const int64_t& _desiredNodesNum);

                    /**
                     * 判断参数 DesiredNodesNum 是否已赋值
                     * @return DesiredNodesNum 是否已赋值
                     * 
                     */
                    bool DesiredNodesNumHasBeenSet() const;

                    /**
                     * 获取节点池osName
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodePoolOs 节点池osName
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodePoolOs() const;

                    /**
                     * 设置节点池osName
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodePoolOs 节点池osName
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodePoolOs(const std::string& _nodePoolOs);

                    /**
                     * 判断参数 NodePoolOs 是否已赋值
                     * @return NodePoolOs 是否已赋值
                     * 
                     */
                    bool NodePoolOsHasBeenSet() const;

                    /**
                     * 获取节点配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceAdvancedSettings 节点配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    InstanceAdvancedSettings GetInstanceAdvancedSettings() const;

                    /**
                     * 设置节点配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceAdvancedSettings 节点配置
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

                private:

                    /**
                     * LaunchConfigurationId 配置
                     */
                    std::string m_launchConfigurationId;
                    bool m_launchConfigurationIdHasBeenSet;

                    /**
                     * AutoscalingGroupId 分组id
                     */
                    std::string m_autoscalingGroupId;
                    bool m_autoscalingGroupIdHasBeenSet;

                    /**
                     * NodeCountSummary 节点列表
                     */
                    NodeCountSummary m_nodeCountSummary;
                    bool m_nodeCountSummaryHasBeenSet;

                    /**
                     * 状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_autoscalingGroupStatus;
                    bool m_autoscalingGroupStatusHasBeenSet;

                    /**
                     * 最大节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxNodesNum;
                    bool m_maxNodesNumHasBeenSet;

                    /**
                     * 最小节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_minNodesNum;
                    bool m_minNodesNumHasBeenSet;

                    /**
                     * 期望的节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_desiredNodesNum;
                    bool m_desiredNodesNumHasBeenSet;

                    /**
                     * 节点池osName
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodePoolOs;
                    bool m_nodePoolOsHasBeenSet;

                    /**
                     * 节点配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InstanceAdvancedSettings m_instanceAdvancedSettings;
                    bool m_instanceAdvancedSettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_REGULARNODEPOOLINFO_H_
