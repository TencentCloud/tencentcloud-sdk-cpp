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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DELETEWORKFLOWREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DELETEWORKFLOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DeleteWorkflow请求参数结构体
                */
                class DeleteWorkflowRequest : public AbstractModel
                {
                public:
                    DeleteWorkflowRequest();
                    ~DeleteWorkflowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取工作流 ID。
                     * @return WorkflowId 工作流 ID。
                     * 
                     */
                    int64_t GetWorkflowId() const;

                    /**
                     * 设置工作流 ID。
                     * @param _workflowId 工作流 ID。
                     * 
                     */
                    void SetWorkflowId(const int64_t& _workflowId);

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     * 
                     */
                    bool WorkflowIdHasBeenSet() const;

                private:

                    /**
                     * 工作流 ID。
                     */
                    int64_t m_workflowId;
                    bool m_workflowIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DELETEWORKFLOWREQUEST_H_
