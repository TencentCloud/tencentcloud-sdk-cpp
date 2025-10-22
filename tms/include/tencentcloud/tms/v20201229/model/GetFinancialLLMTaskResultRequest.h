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

#ifndef TENCENTCLOUD_TMS_V20201229_MODEL_GETFINANCIALLLMTASKRESULTREQUEST_H_
#define TENCENTCLOUD_TMS_V20201229_MODEL_GETFINANCIALLLMTASKRESULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tms
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * GetFinancialLLMTaskResult请求参数结构体
                */
                class GetFinancialLLMTaskResultRequest : public AbstractModel
                {
                public:
                    GetFinancialLLMTaskResultRequest();
                    ~GetFinancialLLMTaskResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取金融大模型审校任务ID
                     * @return TaskId 金融大模型审校任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置金融大模型审校任务ID
                     * @param _taskId 金融大模型审校任务ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * 金融大模型审校任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMS_V20201229_MODEL_GETFINANCIALLLMTASKRESULTREQUEST_H_
