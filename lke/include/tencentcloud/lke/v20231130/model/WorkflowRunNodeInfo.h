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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_WORKFLOWRUNNODEINFO_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_WORKFLOWRUNNODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/StatisticInfo.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 工作流运行节点信息
                */
                class WorkflowRunNodeInfo : public AbstractModel
                {
                public:
                    WorkflowRunNodeInfo();
                    ~WorkflowRunNodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeId 节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeId 节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取节点类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeType 节点类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetNodeType() const;

                    /**
                     * 设置节点类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeType 节点类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeType(const uint64_t& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeName 节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeName 节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取输入
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Input 输入
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInput() const;

                    /**
                     * 设置输入
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _input 输入
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInput(const std::string& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取输出
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Output 输出
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOutput() const;

                    /**
                     * 设置输出
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _output 输出
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutput(const std::string& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskOutput 任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskOutput() const;

                    /**
                     * 设置任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskOutput 任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskOutput(const std::string& _taskOutput);

                    /**
                     * 判断参数 TaskOutput 是否已赋值
                     * @return TaskOutput 是否已赋值
                     * 
                     */
                    bool TaskOutputHasBeenSet() const;

                    /**
                     * 获取错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailMessage 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFailMessage() const;

                    /**
                     * 设置错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _failMessage 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFailMessage(const std::string& _failMessage);

                    /**
                     * 判断参数 FailMessage 是否已赋值
                     * @return FailMessage 是否已赋值
                     * 
                     */
                    bool FailMessageHasBeenSet() const;

                    /**
                     * 获取花费时长
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CostMilliSeconds 花费时长
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCostMilliSeconds() const;

                    /**
                     * 设置花费时长
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _costMilliSeconds 花费时长
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCostMilliSeconds(const uint64_t& _costMilliSeconds);

                    /**
                     * 判断参数 CostMilliSeconds 是否已赋值
                     * @return CostMilliSeconds 是否已赋值
                     * 
                     */
                    bool CostMilliSecondsHasBeenSet() const;

                    /**
                     * 获取大模型输出信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatisticInfos 大模型输出信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<StatisticInfo> GetStatisticInfos() const;

                    /**
                     * 设置大模型输出信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statisticInfos 大模型输出信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatisticInfos(const std::vector<StatisticInfo>& _statisticInfos);

                    /**
                     * 判断参数 StatisticInfos 是否已赋值
                     * @return StatisticInfos 是否已赋值
                     * 
                     */
                    bool StatisticInfosHasBeenSet() const;

                private:

                    /**
                     * 节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * 节点类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * 节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 输入
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * 输出
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * 任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskOutput;
                    bool m_taskOutputHasBeenSet;

                    /**
                     * 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_failMessage;
                    bool m_failMessageHasBeenSet;

                    /**
                     * 花费时长
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_costMilliSeconds;
                    bool m_costMilliSecondsHasBeenSet;

                    /**
                     * 大模型输出信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<StatisticInfo> m_statisticInfos;
                    bool m_statisticInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_WORKFLOWRUNNODEINFO_H_
