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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_TASKFLOWEDGE_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_TASKFLOWEDGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 工作流图中的边
                */
                class TaskFlowEdge : public AbstractModel
                {
                public:
                    TaskFlowEdge();
                    ~TaskFlowEdge() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点 ID
                     * @return NodeId 节点 ID
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置节点 ID
                     * @param NodeId 节点 ID
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取子节点 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChildNodeId 子节点 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetChildNodeId() const;

                    /**
                     * 设置子节点 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ChildNodeId 子节点 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetChildNodeId(const std::string& _childNodeId);

                    /**
                     * 判断参数 ChildNodeId 是否已赋值
                     * @return ChildNodeId 是否已赋值
                     */
                    bool ChildNodeIdHasBeenSet() const;

                    /**
                     * 获取是否核心任务,Y/N
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CoreNode 是否核心任务,Y/N
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCoreNode() const;

                    /**
                     * 设置是否核心任务,Y/N
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CoreNode 是否核心任务,Y/N
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCoreNode(const std::string& _coreNode);

                    /**
                     * 判断参数 CoreNode 是否已赋值
                     * @return CoreNode 是否已赋值
                     */
                    bool CoreNodeHasBeenSet() const;

                    /**
                     * 获取边类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EdgeType 边类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEdgeType() const;

                    /**
                     * 设置边类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EdgeType 边类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEdgeType(const std::string& _edgeType);

                    /**
                     * 判断参数 EdgeType 是否已赋值
                     * @return EdgeType 是否已赋值
                     */
                    bool EdgeTypeHasBeenSet() const;

                    /**
                     * 获取任务节点类型
                     * @return NodeType 任务节点类型
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置任务节点类型
                     * @param NodeType 任务节点类型
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取X轴坐标位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PositionX X轴坐标位置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPositionX() const;

                    /**
                     * 设置X轴坐标位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PositionX X轴坐标位置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPositionX(const std::string& _positionX);

                    /**
                     * 判断参数 PositionX 是否已赋值
                     * @return PositionX 是否已赋值
                     */
                    bool PositionXHasBeenSet() const;

                    /**
                     * 获取Y轴坐标位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PositionY Y轴坐标位置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPositionY() const;

                    /**
                     * 设置Y轴坐标位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PositionY Y轴坐标位置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPositionY(const std::string& _positionY);

                    /**
                     * 判断参数 PositionY 是否已赋值
                     * @return PositionY 是否已赋值
                     */
                    bool PositionYHasBeenSet() const;

                    /**
                     * 获取图 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GraphId 图 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetGraphId() const;

                    /**
                     * 设置图 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param GraphId 图 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGraphId(const std::string& _graphId);

                    /**
                     * 判断参数 GraphId 是否已赋值
                     * @return GraphId 是否已赋值
                     */
                    bool GraphIdHasBeenSet() const;

                    /**
                     * 获取工作流 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FlowId 工作流 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置工作流 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FlowId 工作流 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeName 节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NodeName 节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TaskId 任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取任务历史ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskLogId 任务历史ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTaskLogId() const;

                    /**
                     * 设置任务历史ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TaskLogId 任务历史ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTaskLogId(const std::string& _taskLogId);

                    /**
                     * 判断参数 TaskLogId 是否已赋值
                     * @return TaskLogId 是否已赋值
                     */
                    bool TaskLogIdHasBeenSet() const;

                private:

                    /**
                     * 节点 ID
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * 子节点 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_childNodeId;
                    bool m_childNodeIdHasBeenSet;

                    /**
                     * 是否核心任务,Y/N
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_coreNode;
                    bool m_coreNodeHasBeenSet;

                    /**
                     * 边类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_edgeType;
                    bool m_edgeTypeHasBeenSet;

                    /**
                     * 任务节点类型
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * X轴坐标位置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_positionX;
                    bool m_positionXHasBeenSet;

                    /**
                     * Y轴坐标位置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_positionY;
                    bool m_positionYHasBeenSet;

                    /**
                     * 图 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_graphId;
                    bool m_graphIdHasBeenSet;

                    /**
                     * 工作流 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * 任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务历史ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskLogId;
                    bool m_taskLogIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_TASKFLOWEDGE_H_
