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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_CONTROLAICONVERSATIONREQUEST_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_CONTROLAICONVERSATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gme/v20180711/model/ServerPushText.h>
#include <tencentcloud/gme/v20180711/model/InvokeLLM.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * ControlAIConversation请求参数结构体
                */
                class ControlAIConversationRequest : public AbstractModel
                {
                public:
                    ControlAIConversationRequest();
                    ~ControlAIConversationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务唯一标识
                     * @return TaskId 任务唯一标识
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务唯一标识
                     * @param _taskId 任务唯一标识
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
                     * 获取控制命令，目前支持命令如下：- ServerPushText，服务端发送文本给AI机器人，AI机器人会播报该文本. - InvokeLLM，服务端发送文本给大模型，触发对话
                     * @return Command 控制命令，目前支持命令如下：- ServerPushText，服务端发送文本给AI机器人，AI机器人会播报该文本. - InvokeLLM，服务端发送文本给大模型，触发对话
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置控制命令，目前支持命令如下：- ServerPushText，服务端发送文本给AI机器人，AI机器人会播报该文本. - InvokeLLM，服务端发送文本给大模型，触发对话
                     * @param _command 控制命令，目前支持命令如下：- ServerPushText，服务端发送文本给AI机器人，AI机器人会播报该文本. - InvokeLLM，服务端发送文本给大模型，触发对话
                     * 
                     */
                    void SetCommand(const std::string& _command);

                    /**
                     * 判断参数 Command 是否已赋值
                     * @return Command 是否已赋值
                     * 
                     */
                    bool CommandHasBeenSet() const;

                    /**
                     * 获取服务端发送播报文本命令，当Command为ServerPushText时必填
                     * @return ServerPushText 服务端发送播报文本命令，当Command为ServerPushText时必填
                     * 
                     */
                    ServerPushText GetServerPushText() const;

                    /**
                     * 设置服务端发送播报文本命令，当Command为ServerPushText时必填
                     * @param _serverPushText 服务端发送播报文本命令，当Command为ServerPushText时必填
                     * 
                     */
                    void SetServerPushText(const ServerPushText& _serverPushText);

                    /**
                     * 判断参数 ServerPushText 是否已赋值
                     * @return ServerPushText 是否已赋值
                     * 
                     */
                    bool ServerPushTextHasBeenSet() const;

                    /**
                     * 获取服务端发送命令主动请求大模型,当Command为InvokeLLM时会把content请求到大模型,头部增加X-Invoke-LLM="1"
                     * @return InvokeLLM 服务端发送命令主动请求大模型,当Command为InvokeLLM时会把content请求到大模型,头部增加X-Invoke-LLM="1"
                     * 
                     */
                    InvokeLLM GetInvokeLLM() const;

                    /**
                     * 设置服务端发送命令主动请求大模型,当Command为InvokeLLM时会把content请求到大模型,头部增加X-Invoke-LLM="1"
                     * @param _invokeLLM 服务端发送命令主动请求大模型,当Command为InvokeLLM时会把content请求到大模型,头部增加X-Invoke-LLM="1"
                     * 
                     */
                    void SetInvokeLLM(const InvokeLLM& _invokeLLM);

                    /**
                     * 判断参数 InvokeLLM 是否已赋值
                     * @return InvokeLLM 是否已赋值
                     * 
                     */
                    bool InvokeLLMHasBeenSet() const;

                private:

                    /**
                     * 任务唯一标识
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 控制命令，目前支持命令如下：- ServerPushText，服务端发送文本给AI机器人，AI机器人会播报该文本. - InvokeLLM，服务端发送文本给大模型，触发对话
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * 服务端发送播报文本命令，当Command为ServerPushText时必填
                     */
                    ServerPushText m_serverPushText;
                    bool m_serverPushTextHasBeenSet;

                    /**
                     * 服务端发送命令主动请求大模型,当Command为InvokeLLM时会把content请求到大模型,头部增加X-Invoke-LLM="1"
                     */
                    InvokeLLM m_invokeLLM;
                    bool m_invokeLLMHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_CONTROLAICONVERSATIONREQUEST_H_
