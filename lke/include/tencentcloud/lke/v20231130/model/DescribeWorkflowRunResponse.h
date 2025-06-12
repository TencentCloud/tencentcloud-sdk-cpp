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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEWORKFLOWRUNRESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEWORKFLOWRUNRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/WorkflowRunDetail.h>
#include <tencentcloud/lke/v20231130/model/NodeRunBase.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
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
                     * 获取总数
                     * @return WorkflowRun 总数
                     * 
                     */
                    WorkflowRunDetail GetWorkflowRun() const;

                    /**
                     * 判断参数 WorkflowRun 是否已赋值
                     * @return WorkflowRun 是否已赋值
                     * 
                     */
                    bool WorkflowRunHasBeenSet() const;

                    /**
                     * 获取节点列表
                     * @return NodeRuns 节点列表
                     * 
                     */
                    std::vector<NodeRunBase> GetNodeRuns() const;

                    /**
                     * 判断参数 NodeRuns 是否已赋值
                     * @return NodeRuns 是否已赋值
                     * 
                     */
                    bool NodeRunsHasBeenSet() const;

                private:

                    /**
                     * 总数
                     */
                    WorkflowRunDetail m_workflowRun;
                    bool m_workflowRunHasBeenSet;

                    /**
                     * 节点列表
                     */
                    std::vector<NodeRunBase> m_nodeRuns;
                    bool m_nodeRunsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEWORKFLOWRUNRESPONSE_H_
