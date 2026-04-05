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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_NODERUNBASE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_NODERUNBASE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 节点运行的基本信息
                */
                class NodeRunBase : public AbstractModel
                {
                public:
                    NodeRunBase();
                    ~NodeRunBase() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>节点运行的ID</p>
                     * @return NodeRunId <p>节点运行的ID</p>
                     * 
                     */
                    std::string GetNodeRunId() const;

                    /**
                     * 设置<p>节点运行的ID</p>
                     * @param _nodeRunId <p>节点运行的ID</p>
                     * 
                     */
                    void SetNodeRunId(const std::string& _nodeRunId);

                    /**
                     * 判断参数 NodeRunId 是否已赋值
                     * @return NodeRunId 是否已赋值
                     * 
                     */
                    bool NodeRunIdHasBeenSet() const;

                    /**
                     * 获取<p>节点ID</p>
                     * @return NodeId <p>节点ID</p>
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置<p>节点ID</p>
                     * @param _nodeId <p>节点ID</p>
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
                     * 获取<p>工作流运行实例的ID</p>
                     * @return WorkflowRunId <p>工作流运行实例的ID</p>
                     * 
                     */
                    std::string GetWorkflowRunId() const;

                    /**
                     * 设置<p>工作流运行实例的ID</p>
                     * @param _workflowRunId <p>工作流运行实例的ID</p>
                     * 
                     */
                    void SetWorkflowRunId(const std::string& _workflowRunId);

                    /**
                     * 判断参数 WorkflowRunId 是否已赋值
                     * @return WorkflowRunId 是否已赋值
                     * 
                     */
                    bool WorkflowRunIdHasBeenSet() const;

                    /**
                     * 获取<p>节点名称</p>
                     * @return NodeName <p>节点名称</p>
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置<p>节点名称</p>
                     * @param _nodeName <p>节点名称</p>
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
                     * 获取<p>节点类型。<br>1： 开始节点<br>2：参数提取节点<br>3：大模型节点<br>4：知识问答节点<br>5：知识检索节点<br>6：标签提取节点<br>7：代码执行节点<br>8：工具节点<br>9：逻辑判断节点<br>10：回复节点<br>11：选项卡节点<br>12：循环节点<br>13：意图识别节点<br>14：工作流节点<br>15：插件节点<br>16：结束节点<br>17: 变量聚合节点数据<br>18: 批处理节点<br>19: 消息队列节点</p>
                     * @return NodeType <p>节点类型。<br>1： 开始节点<br>2：参数提取节点<br>3：大模型节点<br>4：知识问答节点<br>5：知识检索节点<br>6：标签提取节点<br>7：代码执行节点<br>8：工具节点<br>9：逻辑判断节点<br>10：回复节点<br>11：选项卡节点<br>12：循环节点<br>13：意图识别节点<br>14：工作流节点<br>15：插件节点<br>16：结束节点<br>17: 变量聚合节点数据<br>18: 批处理节点<br>19: 消息队列节点</p>
                     * 
                     */
                    uint64_t GetNodeType() const;

                    /**
                     * 设置<p>节点类型。<br>1： 开始节点<br>2：参数提取节点<br>3：大模型节点<br>4：知识问答节点<br>5：知识检索节点<br>6：标签提取节点<br>7：代码执行节点<br>8：工具节点<br>9：逻辑判断节点<br>10：回复节点<br>11：选项卡节点<br>12：循环节点<br>13：意图识别节点<br>14：工作流节点<br>15：插件节点<br>16：结束节点<br>17: 变量聚合节点数据<br>18: 批处理节点<br>19: 消息队列节点</p>
                     * @param _nodeType <p>节点类型。<br>1： 开始节点<br>2：参数提取节点<br>3：大模型节点<br>4：知识问答节点<br>5：知识检索节点<br>6：标签提取节点<br>7：代码执行节点<br>8：工具节点<br>9：逻辑判断节点<br>10：回复节点<br>11：选项卡节点<br>12：循环节点<br>13：意图识别节点<br>14：工作流节点<br>15：插件节点<br>16：结束节点<br>17: 变量聚合节点数据<br>18: 批处理节点<br>19: 消息队列节点</p>
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
                     * 获取<p>运行状态。0: 初始状态；1: 运行中；2: 运行成功； 3: 运行失败； 4: 已取消</p>
                     * @return State <p>运行状态。0: 初始状态；1: 运行中；2: 运行成功； 3: 运行失败； 4: 已取消</p>
                     * 
                     */
                    uint64_t GetState() const;

                    /**
                     * 设置<p>运行状态。0: 初始状态；1: 运行中；2: 运行成功； 3: 运行失败； 4: 已取消</p>
                     * @param _state <p>运行状态。0: 初始状态；1: 运行中；2: 运行成功； 3: 运行失败； 4: 已取消</p>
                     * 
                     */
                    void SetState(const uint64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取<p>错误码</p>
                     * @return FailCode <p>错误码</p>
                     * 
                     */
                    std::string GetFailCode() const;

                    /**
                     * 设置<p>错误码</p>
                     * @param _failCode <p>错误码</p>
                     * 
                     */
                    void SetFailCode(const std::string& _failCode);

                    /**
                     * 判断参数 FailCode 是否已赋值
                     * @return FailCode 是否已赋值
                     * 
                     */
                    bool FailCodeHasBeenSet() const;

                    /**
                     * 获取<p>错误信息</p>
                     * @return FailMessage <p>错误信息</p>
                     * 
                     */
                    std::string GetFailMessage() const;

                    /**
                     * 设置<p>错误信息</p>
                     * @param _failMessage <p>错误信息</p>
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
                     * 获取<p>消耗时间（毫秒）</p>
                     * @return CostMilliseconds <p>消耗时间（毫秒）</p>
                     * 
                     */
                    uint64_t GetCostMilliseconds() const;

                    /**
                     * 设置<p>消耗时间（毫秒）</p>
                     * @param _costMilliseconds <p>消耗时间（毫秒）</p>
                     * 
                     */
                    void SetCostMilliseconds(const uint64_t& _costMilliseconds);

                    /**
                     * 判断参数 CostMilliseconds 是否已赋值
                     * @return CostMilliseconds 是否已赋值
                     * 
                     */
                    bool CostMillisecondsHasBeenSet() const;

                    /**
                     * 获取<p>消耗的token总数</p>
                     * @return TotalTokens <p>消耗的token总数</p>
                     * 
                     */
                    uint64_t GetTotalTokens() const;

                    /**
                     * 设置<p>消耗的token总数</p>
                     * @param _totalTokens <p>消耗的token总数</p>
                     * 
                     */
                    void SetTotalTokens(const uint64_t& _totalTokens);

                    /**
                     * 判断参数 TotalTokens 是否已赋值
                     * @return TotalTokens 是否已赋值
                     * 
                     */
                    bool TotalTokensHasBeenSet() const;

                    /**
                     * 获取<p>分支下标列表</p><p>单位：无</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BranchIndexList <p>分支下标列表</p><p>单位：无</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetBranchIndexList() const;

                    /**
                     * 设置<p>分支下标列表</p><p>单位：无</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _branchIndexList <p>分支下标列表</p><p>单位：无</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBranchIndexList(const std::vector<int64_t>& _branchIndexList);

                    /**
                     * 判断参数 BranchIndexList 是否已赋值
                     * @return BranchIndexList 是否已赋值
                     * 
                     */
                    bool BranchIndexListHasBeenSet() const;

                private:

                    /**
                     * <p>节点运行的ID</p>
                     */
                    std::string m_nodeRunId;
                    bool m_nodeRunIdHasBeenSet;

                    /**
                     * <p>节点ID</p>
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * <p>工作流运行实例的ID</p>
                     */
                    std::string m_workflowRunId;
                    bool m_workflowRunIdHasBeenSet;

                    /**
                     * <p>节点名称</p>
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * <p>节点类型。<br>1： 开始节点<br>2：参数提取节点<br>3：大模型节点<br>4：知识问答节点<br>5：知识检索节点<br>6：标签提取节点<br>7：代码执行节点<br>8：工具节点<br>9：逻辑判断节点<br>10：回复节点<br>11：选项卡节点<br>12：循环节点<br>13：意图识别节点<br>14：工作流节点<br>15：插件节点<br>16：结束节点<br>17: 变量聚合节点数据<br>18: 批处理节点<br>19: 消息队列节点</p>
                     */
                    uint64_t m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * <p>运行状态。0: 初始状态；1: 运行中；2: 运行成功； 3: 运行失败； 4: 已取消</p>
                     */
                    uint64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * <p>错误码</p>
                     */
                    std::string m_failCode;
                    bool m_failCodeHasBeenSet;

                    /**
                     * <p>错误信息</p>
                     */
                    std::string m_failMessage;
                    bool m_failMessageHasBeenSet;

                    /**
                     * <p>消耗时间（毫秒）</p>
                     */
                    uint64_t m_costMilliseconds;
                    bool m_costMillisecondsHasBeenSet;

                    /**
                     * <p>消耗的token总数</p>
                     */
                    uint64_t m_totalTokens;
                    bool m_totalTokensHasBeenSet;

                    /**
                     * <p>分支下标列表</p><p>单位：无</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_branchIndexList;
                    bool m_branchIndexListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_NODERUNBASE_H_
