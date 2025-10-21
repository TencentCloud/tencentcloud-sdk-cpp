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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_UPDATEAITASKSTATUSREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_UPDATEAITASKSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * UpdateAITaskStatus请求参数结构体
                */
                class UpdateAITaskStatusRequest : public AbstractModel
                {
                public:
                    UpdateAITaskStatusRequest();
                    ~UpdateAITaskStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取AI 任务 ID
                     * @return TaskId AI 任务 ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置AI 任务 ID
                     * @param _taskId AI 任务 ID
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
                     * 获取AI 任务状态。"on"代表开启了 AI 分析任务，"off"代表停止AI分析任务
                     * @return Status AI 任务状态。"on"代表开启了 AI 分析任务，"off"代表停止AI分析任务
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置AI 任务状态。"on"代表开启了 AI 分析任务，"off"代表停止AI分析任务
                     * @param _status AI 任务状态。"on"代表开启了 AI 分析任务，"off"代表停止AI分析任务
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * AI 任务 ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * AI 任务状态。"on"代表开启了 AI 分析任务，"off"代表停止AI分析任务
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_UPDATEAITASKSTATUSREQUEST_H_
