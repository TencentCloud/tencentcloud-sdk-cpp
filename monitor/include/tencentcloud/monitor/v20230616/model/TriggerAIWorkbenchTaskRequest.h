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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_TRIGGERAIWORKBENCHTASKREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_TRIGGERAIWORKBENCHTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * TriggerAIWorkbenchTask请求参数结构体
                */
                class TriggerAIWorkbenchTaskRequest : public AbstractModel
                {
                public:
                    TriggerAIWorkbenchTaskRequest();
                    ~TriggerAIWorkbenchTaskRequest() = default;
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
                     * 获取<p>session会话ID</p>
                     * @return SessionId <p>session会话ID</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>session会话ID</p>
                     * @param _sessionId <p>session会话ID</p>
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取<p>输入内容</p>
                     * @return Content <p>输入内容</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>输入内容</p>
                     * @param _content <p>输入内容</p>
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取<p>幂等键，调用方保证同一事件重试时携带同一 key</p>
                     * @return IdempotencyKey <p>幂等键，调用方保证同一事件重试时携带同一 key</p>
                     * 
                     */
                    std::string GetIdempotencyKey() const;

                    /**
                     * 设置<p>幂等键，调用方保证同一事件重试时携带同一 key</p>
                     * @param _idempotencyKey <p>幂等键，调用方保证同一事件重试时携带同一 key</p>
                     * 
                     */
                    void SetIdempotencyKey(const std::string& _idempotencyKey);

                    /**
                     * 判断参数 IdempotencyKey 是否已赋值
                     * @return IdempotencyKey 是否已赋值
                     * 
                     */
                    bool IdempotencyKeyHasBeenSet() const;

                private:

                    /**
                     * <p>任务 ID</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>session会话ID</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>输入内容</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>幂等键，调用方保证同一事件重试时携带同一 key</p>
                     */
                    std::string m_idempotencyKey;
                    bool m_idempotencyKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_TRIGGERAIWORKBENCHTASKREQUEST_H_
