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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBENODEBATCHRUNREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBENODEBATCHRUNREQUEST_H_

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
                * DescribeNodeBatchRun请求参数结构体
                */
                class DescribeNodeBatchRunRequest : public AbstractModel
                {
                public:
                    DescribeNodeBatchRunRequest();
                    ~DescribeNodeBatchRunRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用ID</p>
                     * @return AppId <p>应用ID</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用ID</p>
                     * @param _appId <p>应用ID</p>
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
                     * 获取<p>索引号</p>
                     * @return Index <p>索引号</p>
                     * 
                     */
                    int64_t GetIndex() const;

                    /**
                     * 设置<p>索引号</p>
                     * @param _index <p>索引号</p>
                     * 
                     */
                    void SetIndex(const int64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取<p>工作流节点ID</p>
                     * @return NodeId <p>工作流节点ID</p>
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置<p>工作流节点ID</p>
                     * @param _nodeId <p>工作流节点ID</p>
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
                     * 获取<p>子工作流所属节点</p><p>node_id_a.node_id_b[1]</p>
                     * @return SubWorkflowNodePath <p>子工作流所属节点</p><p>node_id_a.node_id_b[1]</p>
                     * 
                     */
                    std::string GetSubWorkflowNodePath() const;

                    /**
                     * 设置<p>子工作流所属节点</p><p>node_id_a.node_id_b[1]</p>
                     * @param _subWorkflowNodePath <p>子工作流所属节点</p><p>node_id_a.node_id_b[1]</p>
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
                     * 获取<p>工作流运行ID</p>
                     * @return WorkflowRunId <p>工作流运行ID</p>
                     * 
                     */
                    std::string GetWorkflowRunId() const;

                    /**
                     * 设置<p>工作流运行ID</p>
                     * @param _workflowRunId <p>工作流运行ID</p>
                     * 
                     */
                    void SetWorkflowRunId(const std::string& _workflowRunId);

                    /**
                     * 判断参数 WorkflowRunId 是否已赋值
                     * @return WorkflowRunId 是否已赋值
                     * 
                     */
                    bool WorkflowRunIdHasBeenSet() const;

                private:

                    /**
                     * <p>应用ID</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>索引号</p>
                     */
                    int64_t m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * <p>工作流节点ID</p>
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * <p>子工作流所属节点</p><p>node_id_a.node_id_b[1]</p>
                     */
                    std::string m_subWorkflowNodePath;
                    bool m_subWorkflowNodePathHasBeenSet;

                    /**
                     * <p>工作流运行ID</p>
                     */
                    std::string m_workflowRunId;
                    bool m_workflowRunIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBENODEBATCHRUNREQUEST_H_
