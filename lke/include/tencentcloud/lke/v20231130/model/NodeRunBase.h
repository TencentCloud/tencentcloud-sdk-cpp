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
                     * 获取节点运行的ID
                     * @return NodeRunId 节点运行的ID
                     * 
                     */
                    std::string GetNodeRunId() const;

                    /**
                     * 设置节点运行的ID
                     * @param _nodeRunId 节点运行的ID
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
                     * 获取节点ID
                     * @return NodeId 节点ID
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置节点ID
                     * @param _nodeId 节点ID
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
                     * 获取工作流运行实例的ID
                     * @return WorkflowRunId 工作流运行实例的ID
                     * 
                     */
                    std::string GetWorkflowRunId() const;

                    /**
                     * 设置工作流运行实例的ID
                     * @param _workflowRunId 工作流运行实例的ID
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
                     * 获取节点名称
                     * @return NodeName 节点名称
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置节点名称
                     * @param _nodeName 节点名称
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
                     * 获取节点类型。
1： 开始节点
2：参数提取节点
3：大模型节点
4：知识问答节点
5：知识检索节点
6：标签提取节点
7：代码执行节点
8：工具节点
9：逻辑判断节点
10：回复节点
11：选项卡节点
12：循环节点
13：意图识别节点
14：工作流节点
15：插件节点
16：结束节点
17: 变量聚合节点数据
18: 批处理节点
19: 消息队列节点
                     * @return NodeType 节点类型。
1： 开始节点
2：参数提取节点
3：大模型节点
4：知识问答节点
5：知识检索节点
6：标签提取节点
7：代码执行节点
8：工具节点
9：逻辑判断节点
10：回复节点
11：选项卡节点
12：循环节点
13：意图识别节点
14：工作流节点
15：插件节点
16：结束节点
17: 变量聚合节点数据
18: 批处理节点
19: 消息队列节点
                     * 
                     */
                    uint64_t GetNodeType() const;

                    /**
                     * 设置节点类型。
1： 开始节点
2：参数提取节点
3：大模型节点
4：知识问答节点
5：知识检索节点
6：标签提取节点
7：代码执行节点
8：工具节点
9：逻辑判断节点
10：回复节点
11：选项卡节点
12：循环节点
13：意图识别节点
14：工作流节点
15：插件节点
16：结束节点
17: 变量聚合节点数据
18: 批处理节点
19: 消息队列节点
                     * @param _nodeType 节点类型。
1： 开始节点
2：参数提取节点
3：大模型节点
4：知识问答节点
5：知识检索节点
6：标签提取节点
7：代码执行节点
8：工具节点
9：逻辑判断节点
10：回复节点
11：选项卡节点
12：循环节点
13：意图识别节点
14：工作流节点
15：插件节点
16：结束节点
17: 变量聚合节点数据
18: 批处理节点
19: 消息队列节点
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
                     * 获取运行状态。0: 初始状态；1: 运行中；2: 运行成功； 3: 运行失败； 4: 已取消
                     * @return State 运行状态。0: 初始状态；1: 运行中；2: 运行成功； 3: 运行失败； 4: 已取消
                     * 
                     */
                    uint64_t GetState() const;

                    /**
                     * 设置运行状态。0: 初始状态；1: 运行中；2: 运行成功； 3: 运行失败； 4: 已取消
                     * @param _state 运行状态。0: 初始状态；1: 运行中；2: 运行成功； 3: 运行失败； 4: 已取消
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
                     * 获取错误码
                     * @return FailCode 错误码
                     * 
                     */
                    std::string GetFailCode() const;

                    /**
                     * 设置错误码
                     * @param _failCode 错误码
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
                     * 获取错误信息
                     * @return FailMessage 错误信息
                     * 
                     */
                    std::string GetFailMessage() const;

                    /**
                     * 设置错误信息
                     * @param _failMessage 错误信息
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
                     * 获取消耗时间（毫秒）
                     * @return CostMilliseconds 消耗时间（毫秒）
                     * 
                     */
                    uint64_t GetCostMilliseconds() const;

                    /**
                     * 设置消耗时间（毫秒）
                     * @param _costMilliseconds 消耗时间（毫秒）
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
                     * 获取消耗的token总数
                     * @return TotalTokens 消耗的token总数
                     * 
                     */
                    uint64_t GetTotalTokens() const;

                    /**
                     * 设置消耗的token总数
                     * @param _totalTokens 消耗的token总数
                     * 
                     */
                    void SetTotalTokens(const uint64_t& _totalTokens);

                    /**
                     * 判断参数 TotalTokens 是否已赋值
                     * @return TotalTokens 是否已赋值
                     * 
                     */
                    bool TotalTokensHasBeenSet() const;

                private:

                    /**
                     * 节点运行的ID
                     */
                    std::string m_nodeRunId;
                    bool m_nodeRunIdHasBeenSet;

                    /**
                     * 节点ID
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * 工作流运行实例的ID
                     */
                    std::string m_workflowRunId;
                    bool m_workflowRunIdHasBeenSet;

                    /**
                     * 节点名称
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * 节点类型。
1： 开始节点
2：参数提取节点
3：大模型节点
4：知识问答节点
5：知识检索节点
6：标签提取节点
7：代码执行节点
8：工具节点
9：逻辑判断节点
10：回复节点
11：选项卡节点
12：循环节点
13：意图识别节点
14：工作流节点
15：插件节点
16：结束节点
17: 变量聚合节点数据
18: 批处理节点
19: 消息队列节点
                     */
                    uint64_t m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * 运行状态。0: 初始状态；1: 运行中；2: 运行成功； 3: 运行失败； 4: 已取消
                     */
                    uint64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 错误码
                     */
                    std::string m_failCode;
                    bool m_failCodeHasBeenSet;

                    /**
                     * 错误信息
                     */
                    std::string m_failMessage;
                    bool m_failMessageHasBeenSet;

                    /**
                     * 消耗时间（毫秒）
                     */
                    uint64_t m_costMilliseconds;
                    bool m_costMillisecondsHasBeenSet;

                    /**
                     * 消耗的token总数
                     */
                    uint64_t m_totalTokens;
                    bool m_totalTokensHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_NODERUNBASE_H_
