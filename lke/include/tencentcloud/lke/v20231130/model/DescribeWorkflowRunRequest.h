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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEWORKFLOWRUNREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEWORKFLOWRUNREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeWorkflowRun请求参数结构体
                */
                class DescribeWorkflowRunRequest : public AbstractModel
                {
                public:
                    DescribeWorkflowRunRequest();
                    ~DescribeWorkflowRunRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID
                     * @return AppBizId 应用ID
                     * 
                     */
                    std::string GetAppBizId() const;

                    /**
                     * 设置应用ID
                     * @param _appBizId 应用ID
                     * 
                     */
                    void SetAppBizId(const std::string& _appBizId);

                    /**
                     * 判断参数 AppBizId 是否已赋值
                     * @return AppBizId 是否已赋值
                     * 
                     */
                    bool AppBizIdHasBeenSet() const;

                    /**
                     * 获取工作流运行实例ID
                     * @return WorkflowRunId 工作流运行实例ID
                     * 
                     */
                    std::string GetWorkflowRunId() const;

                    /**
                     * 设置工作流运行实例ID
                     * @param _workflowRunId 工作流运行实例ID
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
                     * 获取指定的子工作流对应的NodePath。
格式：`[<node_id>[<index>].]*<node_id>[<index>]`
- 此路径用于定位一个具体的工作流实例（Workflow Run），可以是主工作流实例或某个子工作流节点产生的子实例。
- 路径由点号（.）分隔的节点标识符组成，每个节点标识符格式为 `节点ID[实例索引]`。
- **节点ID (node_id)**：子工作流所属的节点的ID。
- **实例索引 (index)**：“实例索引” 在工作流节点的时候为空，循环、批处理节点非空，从1开始。
示例：
- "" 或 不设置 -> 查询主工作流实例 (父工作流)
- "node_id_a" -> 查询由主工作流中工作流节点`node_id_a`对应的子工作流实例
- "node_id_a.node_id_b[1]" -> 查询工作流节点`node_id_a`对应的子工作流的循环节点node_id_b的第1轮循环的子工作流运行状态
                     * @return SubWorkflowNodePath 指定的子工作流对应的NodePath。
格式：`[<node_id>[<index>].]*<node_id>[<index>]`
- 此路径用于定位一个具体的工作流实例（Workflow Run），可以是主工作流实例或某个子工作流节点产生的子实例。
- 路径由点号（.）分隔的节点标识符组成，每个节点标识符格式为 `节点ID[实例索引]`。
- **节点ID (node_id)**：子工作流所属的节点的ID。
- **实例索引 (index)**：“实例索引” 在工作流节点的时候为空，循环、批处理节点非空，从1开始。
示例：
- "" 或 不设置 -> 查询主工作流实例 (父工作流)
- "node_id_a" -> 查询由主工作流中工作流节点`node_id_a`对应的子工作流实例
- "node_id_a.node_id_b[1]" -> 查询工作流节点`node_id_a`对应的子工作流的循环节点node_id_b的第1轮循环的子工作流运行状态
                     * 
                     */
                    std::string GetSubWorkflowNodePath() const;

                    /**
                     * 设置指定的子工作流对应的NodePath。
格式：`[<node_id>[<index>].]*<node_id>[<index>]`
- 此路径用于定位一个具体的工作流实例（Workflow Run），可以是主工作流实例或某个子工作流节点产生的子实例。
- 路径由点号（.）分隔的节点标识符组成，每个节点标识符格式为 `节点ID[实例索引]`。
- **节点ID (node_id)**：子工作流所属的节点的ID。
- **实例索引 (index)**：“实例索引” 在工作流节点的时候为空，循环、批处理节点非空，从1开始。
示例：
- "" 或 不设置 -> 查询主工作流实例 (父工作流)
- "node_id_a" -> 查询由主工作流中工作流节点`node_id_a`对应的子工作流实例
- "node_id_a.node_id_b[1]" -> 查询工作流节点`node_id_a`对应的子工作流的循环节点node_id_b的第1轮循环的子工作流运行状态
                     * @param _subWorkflowNodePath 指定的子工作流对应的NodePath。
格式：`[<node_id>[<index>].]*<node_id>[<index>]`
- 此路径用于定位一个具体的工作流实例（Workflow Run），可以是主工作流实例或某个子工作流节点产生的子实例。
- 路径由点号（.）分隔的节点标识符组成，每个节点标识符格式为 `节点ID[实例索引]`。
- **节点ID (node_id)**：子工作流所属的节点的ID。
- **实例索引 (index)**：“实例索引” 在工作流节点的时候为空，循环、批处理节点非空，从1开始。
示例：
- "" 或 不设置 -> 查询主工作流实例 (父工作流)
- "node_id_a" -> 查询由主工作流中工作流节点`node_id_a`对应的子工作流实例
- "node_id_a.node_id_b[1]" -> 查询工作流节点`node_id_a`对应的子工作流的循环节点node_id_b的第1轮循环的子工作流运行状态
                     * 
                     */
                    void SetSubWorkflowNodePath(const std::string& _subWorkflowNodePath);

                    /**
                     * 判断参数 SubWorkflowNodePath 是否已赋值
                     * @return SubWorkflowNodePath 是否已赋值
                     * 
                     */
                    bool SubWorkflowNodePathHasBeenSet() const;

                    /**
                     * 获取是否需要返回工作流的流程图配置
                     * @return IncludeWorkflowGraph 是否需要返回工作流的流程图配置
                     * 
                     */
                    bool GetIncludeWorkflowGraph() const;

                    /**
                     * 设置是否需要返回工作流的流程图配置
                     * @param _includeWorkflowGraph 是否需要返回工作流的流程图配置
                     * 
                     */
                    void SetIncludeWorkflowGraph(const bool& _includeWorkflowGraph);

                    /**
                     * 判断参数 IncludeWorkflowGraph 是否已赋值
                     * @return IncludeWorkflowGraph 是否已赋值
                     * 
                     */
                    bool IncludeWorkflowGraphHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    std::string m_appBizId;
                    bool m_appBizIdHasBeenSet;

                    /**
                     * 工作流运行实例ID
                     */
                    std::string m_workflowRunId;
                    bool m_workflowRunIdHasBeenSet;

                    /**
                     * 指定的子工作流对应的NodePath。
格式：`[<node_id>[<index>].]*<node_id>[<index>]`
- 此路径用于定位一个具体的工作流实例（Workflow Run），可以是主工作流实例或某个子工作流节点产生的子实例。
- 路径由点号（.）分隔的节点标识符组成，每个节点标识符格式为 `节点ID[实例索引]`。
- **节点ID (node_id)**：子工作流所属的节点的ID。
- **实例索引 (index)**：“实例索引” 在工作流节点的时候为空，循环、批处理节点非空，从1开始。
示例：
- "" 或 不设置 -> 查询主工作流实例 (父工作流)
- "node_id_a" -> 查询由主工作流中工作流节点`node_id_a`对应的子工作流实例
- "node_id_a.node_id_b[1]" -> 查询工作流节点`node_id_a`对应的子工作流的循环节点node_id_b的第1轮循环的子工作流运行状态
                     */
                    std::string m_subWorkflowNodePath;
                    bool m_subWorkflowNodePathHasBeenSet;

                    /**
                     * 是否需要返回工作流的流程图配置
                     */
                    bool m_includeWorkflowGraph;
                    bool m_includeWorkflowGraphHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEWORKFLOWRUNREQUEST_H_
