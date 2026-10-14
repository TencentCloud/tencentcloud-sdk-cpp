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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEWORKFLOWRUNRESPONSE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEWORKFLOWRUNRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/WorkflowRun.h>
#include <tencentcloud/adp/v20260520/model/NodeRun.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeWorkflowRun返回参数结构体
                */
                class DescribeWorkflowRunResponse : public AbstractModel
                {
                public:
                    DescribeWorkflowRunResponse();
                    ~DescribeWorkflowRunResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>工作流运行实例详情</p>
                     * @return WorkflowRun <p>工作流运行实例详情</p>
                     * 
                     */
                    WorkflowRun GetWorkflowRun() const;

                    /**
                     * 判断参数 WorkflowRun 是否已赋值
                     * @return WorkflowRun 是否已赋值
                     * 
                     */
                    bool WorkflowRunHasBeenSet() const;

                    /**
                     * 获取<p>节点列表</p>
                     * @return NodeRunList <p>节点列表</p>
                     * 
                     */
                    std::vector<NodeRun> GetNodeRunList() const;

                    /**
                     * 判断参数 NodeRunList 是否已赋值
                     * @return NodeRunList 是否已赋值
                     * 
                     */
                    bool NodeRunListHasBeenSet() const;

                    /**
                     * 获取<p>子工作流对应的NodePath</p>
                     * @return SubWorkflowNodePath <p>子工作流对应的NodePath</p>
                     * 
                     */
                    std::string GetSubWorkflowNodePath() const;

                    /**
                     * 判断参数 SubWorkflowNodePath 是否已赋值
                     * @return SubWorkflowNodePath 是否已赋值
                     * 
                     */
                    bool SubWorkflowNodePathHasBeenSet() const;

                private:

                    /**
                     * <p>工作流运行实例详情</p>
                     */
                    WorkflowRun m_workflowRun;
                    bool m_workflowRunHasBeenSet;

                    /**
                     * <p>节点列表</p>
                     */
                    std::vector<NodeRun> m_nodeRunList;
                    bool m_nodeRunListHasBeenSet;

                    /**
                     * <p>子工作流对应的NodePath</p>
                     */
                    std::string m_subWorkflowNodePath;
                    bool m_subWorkflowNodePathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEWORKFLOWRUNRESPONSE_H_
