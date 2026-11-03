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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_TRIGGERSCHEDULEDTASKREQUEST_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_TRIGGERSCHEDULEDTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            namespace Model
            {
                /**
                * TriggerScheduledTask请求参数结构体
                */
                class TriggerScheduledTaskRequest : public AbstractModel
                {
                public:
                    TriggerScheduledTaskRequest();
                    ~TriggerScheduledTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务 ID</p>
                     * @return TaskId <p>任务 ID</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务 ID</p>
                     * @param _taskId <p>任务 ID</p>
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>覆盖 Prompt，为空则使用任务原 Prompt</p>
                     * @return OverridePrompt <p>覆盖 Prompt，为空则使用任务原 Prompt</p>
                     * 
                     */
                    std::string GetOverridePrompt() const;

                    /**
                     * 设置<p>覆盖 Prompt，为空则使用任务原 Prompt</p>
                     * @param _overridePrompt <p>覆盖 Prompt，为空则使用任务原 Prompt</p>
                     * 
                     */
                    void SetOverridePrompt(const std::string& _overridePrompt);

                    /**
                     * 判断参数 OverridePrompt 是否已赋值
                     * @return OverridePrompt 是否已赋值
                     * 
                     */
                    bool OverridePromptHasBeenSet() const;

                private:

                    /**
                     * <p>任务 ID</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>覆盖 Prompt，为空则使用任务原 Prompt</p>
                     */
                    std::string m_overridePrompt;
                    bool m_overridePromptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_TRIGGERSCHEDULEDTASKREQUEST_H_
