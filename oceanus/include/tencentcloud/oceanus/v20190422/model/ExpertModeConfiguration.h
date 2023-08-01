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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_EXPERTMODECONFIGURATION_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_EXPERTMODECONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/oceanus/v20190422/model/JobGraph.h>
#include <tencentcloud/oceanus/v20190422/model/NodeConfig.h>
#include <tencentcloud/oceanus/v20190422/model/SlotSharingGroup.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * 作业配置 -- 专家模式的详细配置
                */
                class ExpertModeConfiguration : public AbstractModel
                {
                public:
                    ExpertModeConfiguration();
                    ~ExpertModeConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Job graph
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobGraph Job graph
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    JobGraph GetJobGraph() const;

                    /**
                     * 设置Job graph
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobGraph Job graph
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJobGraph(const JobGraph& _jobGraph);

                    /**
                     * 判断参数 JobGraph 是否已赋值
                     * @return JobGraph 是否已赋值
                     * 
                     */
                    bool JobGraphHasBeenSet() const;

                    /**
                     * 获取Node configuration
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeConfig Node configuration
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<NodeConfig> GetNodeConfig() const;

                    /**
                     * 设置Node configuration
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeConfig Node configuration
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeConfig(const std::vector<NodeConfig>& _nodeConfig);

                    /**
                     * 判断参数 NodeConfig 是否已赋值
                     * @return NodeConfig 是否已赋值
                     * 
                     */
                    bool NodeConfigHasBeenSet() const;

                    /**
                     * 获取Slot sharing groups
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SlotSharingGroups Slot sharing groups
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SlotSharingGroup> GetSlotSharingGroups() const;

                    /**
                     * 设置Slot sharing groups
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _slotSharingGroups Slot sharing groups
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSlotSharingGroups(const std::vector<SlotSharingGroup>& _slotSharingGroups);

                    /**
                     * 判断参数 SlotSharingGroups 是否已赋值
                     * @return SlotSharingGroups 是否已赋值
                     * 
                     */
                    bool SlotSharingGroupsHasBeenSet() const;

                private:

                    /**
                     * Job graph
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    JobGraph m_jobGraph;
                    bool m_jobGraphHasBeenSet;

                    /**
                     * Node configuration
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NodeConfig> m_nodeConfig;
                    bool m_nodeConfigHasBeenSet;

                    /**
                     * Slot sharing groups
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SlotSharingGroup> m_slotSharingGroups;
                    bool m_slotSharingGroupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_EXPERTMODECONFIGURATION_H_
