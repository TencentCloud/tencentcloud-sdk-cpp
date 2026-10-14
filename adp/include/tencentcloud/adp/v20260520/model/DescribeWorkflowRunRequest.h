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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEWORKFLOWRUNREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEWORKFLOWRUNREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
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
                     * 获取<p>应用ID, 获取方法参看如何获取 <a href="https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa">AppId</a></p>
                     * @return AppId <p>应用ID, 获取方法参看如何获取 <a href="https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa">AppId</a></p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用ID, 获取方法参看如何获取 <a href="https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa">AppId</a></p>
                     * @param _appId <p>应用ID, 获取方法参看如何获取 <a href="https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa">AppId</a></p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>工作流运行实例ID</p>
                     * @return WorkflowRunId <p>工作流运行实例ID</p>
                     * 
                     */
                    std::string GetWorkflowRunId() const;

                    /**
                     * 设置<p>工作流运行实例ID</p>
                     * @param _workflowRunId <p>工作流运行实例ID</p>
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
                     * 获取<p>指定的子工作流对应的NodePath。 格式：[&lt;node_id&gt;[&lt;index&gt;].]*&lt;node_id&gt;[&lt;index&gt;]  此路径用于定位一个具体的工作流实例（Workflow Run），可以是主工作流实例或某个子工作流节点产生的子实例。 路径由点号（.）分隔的节点标识符组成，每个节点标识符格式为 节点ID[实例索引]。 节点ID (node_id)：子工作流所属的节点的ID。 实例索引 (index)：“实例索引” 在工作流节点的时候为空，循环、批处理节点非空，从1开始。 示例： &quot;&quot; 或 不设置 -&gt; 查询主工作流实例 (父工作流) &quot;node_id_a&quot; -&gt; 查询由主工作流中工作流节点node_id_a对应的子工作流实例 &quot;node_id_a.node_id_b[1]&quot; -&gt; 查询工作流节点node_id_a对应的子工作流的循环节点node_id_b的第1轮循环的子工作流运行状态</p>
                     * @return SubWorkflowNodePath <p>指定的子工作流对应的NodePath。 格式：[&lt;node_id&gt;[&lt;index&gt;].]*&lt;node_id&gt;[&lt;index&gt;]  此路径用于定位一个具体的工作流实例（Workflow Run），可以是主工作流实例或某个子工作流节点产生的子实例。 路径由点号（.）分隔的节点标识符组成，每个节点标识符格式为 节点ID[实例索引]。 节点ID (node_id)：子工作流所属的节点的ID。 实例索引 (index)：“实例索引” 在工作流节点的时候为空，循环、批处理节点非空，从1开始。 示例： &quot;&quot; 或 不设置 -&gt; 查询主工作流实例 (父工作流) &quot;node_id_a&quot; -&gt; 查询由主工作流中工作流节点node_id_a对应的子工作流实例 &quot;node_id_a.node_id_b[1]&quot; -&gt; 查询工作流节点node_id_a对应的子工作流的循环节点node_id_b的第1轮循环的子工作流运行状态</p>
                     * 
                     */
                    std::string GetSubWorkflowNodePath() const;

                    /**
                     * 设置<p>指定的子工作流对应的NodePath。 格式：[&lt;node_id&gt;[&lt;index&gt;].]*&lt;node_id&gt;[&lt;index&gt;]  此路径用于定位一个具体的工作流实例（Workflow Run），可以是主工作流实例或某个子工作流节点产生的子实例。 路径由点号（.）分隔的节点标识符组成，每个节点标识符格式为 节点ID[实例索引]。 节点ID (node_id)：子工作流所属的节点的ID。 实例索引 (index)：“实例索引” 在工作流节点的时候为空，循环、批处理节点非空，从1开始。 示例： &quot;&quot; 或 不设置 -&gt; 查询主工作流实例 (父工作流) &quot;node_id_a&quot; -&gt; 查询由主工作流中工作流节点node_id_a对应的子工作流实例 &quot;node_id_a.node_id_b[1]&quot; -&gt; 查询工作流节点node_id_a对应的子工作流的循环节点node_id_b的第1轮循环的子工作流运行状态</p>
                     * @param _subWorkflowNodePath <p>指定的子工作流对应的NodePath。 格式：[&lt;node_id&gt;[&lt;index&gt;].]*&lt;node_id&gt;[&lt;index&gt;]  此路径用于定位一个具体的工作流实例（Workflow Run），可以是主工作流实例或某个子工作流节点产生的子实例。 路径由点号（.）分隔的节点标识符组成，每个节点标识符格式为 节点ID[实例索引]。 节点ID (node_id)：子工作流所属的节点的ID。 实例索引 (index)：“实例索引” 在工作流节点的时候为空，循环、批处理节点非空，从1开始。 示例： &quot;&quot; 或 不设置 -&gt; 查询主工作流实例 (父工作流) &quot;node_id_a&quot; -&gt; 查询由主工作流中工作流节点node_id_a对应的子工作流实例 &quot;node_id_a.node_id_b[1]&quot; -&gt; 查询工作流节点node_id_a对应的子工作流的循环节点node_id_b的第1轮循环的子工作流运行状态</p>
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
                     * 获取<p>是否需要返回工作流的流程图配置</p>
                     * @return IncludeWorkflowGraph <p>是否需要返回工作流的流程图配置</p>
                     * 
                     */
                    bool GetIncludeWorkflowGraph() const;

                    /**
                     * 设置<p>是否需要返回工作流的流程图配置</p>
                     * @param _includeWorkflowGraph <p>是否需要返回工作流的流程图配置</p>
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
                     * <p>应用ID, 获取方法参看如何获取 <a href="https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa">AppId</a></p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>工作流运行实例ID</p>
                     */
                    std::string m_workflowRunId;
                    bool m_workflowRunIdHasBeenSet;

                    /**
                     * <p>指定的子工作流对应的NodePath。 格式：[&lt;node_id&gt;[&lt;index&gt;].]*&lt;node_id&gt;[&lt;index&gt;]  此路径用于定位一个具体的工作流实例（Workflow Run），可以是主工作流实例或某个子工作流节点产生的子实例。 路径由点号（.）分隔的节点标识符组成，每个节点标识符格式为 节点ID[实例索引]。 节点ID (node_id)：子工作流所属的节点的ID。 实例索引 (index)：“实例索引” 在工作流节点的时候为空，循环、批处理节点非空，从1开始。 示例： &quot;&quot; 或 不设置 -&gt; 查询主工作流实例 (父工作流) &quot;node_id_a&quot; -&gt; 查询由主工作流中工作流节点node_id_a对应的子工作流实例 &quot;node_id_a.node_id_b[1]&quot; -&gt; 查询工作流节点node_id_a对应的子工作流的循环节点node_id_b的第1轮循环的子工作流运行状态</p>
                     */
                    std::string m_subWorkflowNodePath;
                    bool m_subWorkflowNodePathHasBeenSet;

                    /**
                     * <p>是否需要返回工作流的流程图配置</p>
                     */
                    bool m_includeWorkflowGraph;
                    bool m_includeWorkflowGraphHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEWORKFLOWRUNREQUEST_H_
