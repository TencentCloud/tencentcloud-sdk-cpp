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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_STOPWORKFLOWRUNREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_STOPWORKFLOWRUNREQUEST_H_

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
                * StopWorkflowRun请求参数结构体
                */
                class StopWorkflowRunRequest : public AbstractModel
                {
                public:
                    StopWorkflowRunRequest();
                    ~StopWorkflowRunRequest() = default;
                    std::string ToJsonString() const;


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

                private:

                    /**
                     * 工作流运行实例ID
                     */
                    std::string m_workflowRunId;
                    bool m_workflowRunIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_STOPWORKFLOWRUNREQUEST_H_
