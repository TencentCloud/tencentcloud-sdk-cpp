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

#ifndef TENCENTCLOUD_CLOUDMATE_V20251030_MODEL_CLOUDMATEAGENTREQUEST_H_
#define TENCENTCLOUD_CLOUDMATE_V20251030_MODEL_CLOUDMATEAGENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudmate
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * CloudMateAgent请求参数结构体
                */
                class CloudMateAgentRequest : public AbstractModel
                {
                public:
                    CloudMateAgentRequest();
                    ~CloudMateAgentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取空间 ID
                     * @return WorkspaceId 空间 ID
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置空间 ID
                     * @param _workspaceId 空间 ID
                     * 
                     */
                    void SetWorkspaceId(const std::string& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取用户提问内容
                     * @return Message 用户提问内容
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置用户提问内容
                     * @param _message 用户提问内容
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取场景 ID
                     * @return ScenarioId 场景 ID
                     * 
                     */
                    std::string GetScenarioId() const;

                    /**
                     * 设置场景 ID
                     * @param _scenarioId 场景 ID
                     * 
                     */
                    void SetScenarioId(const std::string& _scenarioId);

                    /**
                     * 判断参数 ScenarioId 是否已赋值
                     * @return ScenarioId 是否已赋值
                     * 
                     */
                    bool ScenarioIdHasBeenSet() const;

                    /**
                     * 获取会话 ID

- 填写上一次接口调用返回的会话 ID（SessionId），可在原有会话基础上继续对话
- 未填写会话 ID 时，创建新会话
                     * @return SessionId 会话 ID

- 填写上一次接口调用返回的会话 ID（SessionId），可在原有会话基础上继续对话
- 未填写会话 ID 时，创建新会话
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置会话 ID

- 填写上一次接口调用返回的会话 ID（SessionId），可在原有会话基础上继续对话
- 未填写会话 ID 时，创建新会话
                     * @param _sessionId 会话 ID

- 填写上一次接口调用返回的会话 ID（SessionId），可在原有会话基础上继续对话
- 未填写会话 ID 时，创建新会话
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
                     * 获取是否使用流式响应，默认为 false，不启用流式响应
                     * @return Streaming 是否使用流式响应，默认为 false，不启用流式响应
                     * 
                     */
                    bool GetStreaming() const;

                    /**
                     * 设置是否使用流式响应，默认为 false，不启用流式响应
                     * @param _streaming 是否使用流式响应，默认为 false，不启用流式响应
                     * 
                     */
                    void SetStreaming(const bool& _streaming);

                    /**
                     * 判断参数 Streaming 是否已赋值
                     * @return Streaming 是否已赋值
                     * 
                     */
                    bool StreamingHasBeenSet() const;

                private:

                    /**
                     * 空间 ID
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * 用户提问内容
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 场景 ID
                     */
                    std::string m_scenarioId;
                    bool m_scenarioIdHasBeenSet;

                    /**
                     * 会话 ID

- 填写上一次接口调用返回的会话 ID（SessionId），可在原有会话基础上继续对话
- 未填写会话 ID 时，创建新会话
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 是否使用流式响应，默认为 false，不启用流式响应
                     */
                    bool m_streaming;
                    bool m_streamingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDMATE_V20251030_MODEL_CLOUDMATEAGENTREQUEST_H_
