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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_TASKFLOWSUMMARY_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_TASKFLOWSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/ValueInfo.h>
#include <tencentcloud/lke/v20231130/model/RunNodeInfo.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 任务流程调试信息
                */
                class TaskFlowSummary : public AbstractModel
                {
                public:
                    TaskFlowSummary();
                    ~TaskFlowSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务流程名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IntentName 任务流程名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIntentName() const;

                    /**
                     * 设置任务流程名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _intentName 任务流程名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIntentName(const std::string& _intentName);

                    /**
                     * 判断参数 IntentName 是否已赋值
                     * @return IntentName 是否已赋值
                     * 
                     */
                    bool IntentNameHasBeenSet() const;

                    /**
                     * 获取实体列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedSlotValues 实体列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ValueInfo> GetUpdatedSlotValues() const;

                    /**
                     * 设置实体列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatedSlotValues 实体列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdatedSlotValues(const std::vector<ValueInfo>& _updatedSlotValues);

                    /**
                     * 判断参数 UpdatedSlotValues 是否已赋值
                     * @return UpdatedSlotValues 是否已赋值
                     * 
                     */
                    bool UpdatedSlotValuesHasBeenSet() const;

                    /**
                     * 获取节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunNodes 节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RunNodeInfo> GetRunNodes() const;

                    /**
                     * 设置节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runNodes 节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunNodes(const std::vector<RunNodeInfo>& _runNodes);

                    /**
                     * 判断参数 RunNodes 是否已赋值
                     * @return RunNodes 是否已赋值
                     * 
                     */
                    bool RunNodesHasBeenSet() const;

                    /**
                     * 获取意图判断
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Purposes 意图判断
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetPurposes() const;

                    /**
                     * 设置意图判断
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _purposes 意图判断
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPurposes(const std::vector<std::string>& _purposes);

                    /**
                     * 判断参数 Purposes 是否已赋值
                     * @return Purposes 是否已赋值
                     * 
                     */
                    bool PurposesHasBeenSet() const;

                private:

                    /**
                     * 任务流程名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_intentName;
                    bool m_intentNameHasBeenSet;

                    /**
                     * 实体列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ValueInfo> m_updatedSlotValues;
                    bool m_updatedSlotValuesHasBeenSet;

                    /**
                     * 节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RunNodeInfo> m_runNodes;
                    bool m_runNodesHasBeenSet;

                    /**
                     * 意图判断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_purposes;
                    bool m_purposesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_TASKFLOWSUMMARY_H_
