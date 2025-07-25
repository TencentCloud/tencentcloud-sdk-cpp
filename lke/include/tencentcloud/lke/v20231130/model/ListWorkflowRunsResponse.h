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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_LISTWORKFLOWRUNSRESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_LISTWORKFLOWRUNSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/WorkflowRunBase.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * ListWorkflowRuns返回参数结构体
                */
                class ListWorkflowRunsResponse : public AbstractModel
                {
                public:
                    ListWorkflowRunsResponse();
                    ~ListWorkflowRunsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总数
                     * @return Total 总数
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取工作流运行列表
                     * @return WorkflowRuns 工作流运行列表
                     * 
                     */
                    std::vector<WorkflowRunBase> GetWorkflowRuns() const;

                    /**
                     * 判断参数 WorkflowRuns 是否已赋值
                     * @return WorkflowRuns 是否已赋值
                     * 
                     */
                    bool WorkflowRunsHasBeenSet() const;

                private:

                    /**
                     * 总数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 工作流运行列表
                     */
                    std::vector<WorkflowRunBase> m_workflowRuns;
                    bool m_workflowRunsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_LISTWORKFLOWRUNSRESPONSE_H_
