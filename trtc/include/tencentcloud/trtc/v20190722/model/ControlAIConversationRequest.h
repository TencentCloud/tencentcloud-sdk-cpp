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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_CONTROLAICONVERSATIONREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_CONTROLAICONVERSATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/ServerPushText.h>
#include <tencentcloud/trtc/v20190722/model/InvokeLLM.h>
#include <tencentcloud/trtc/v20190722/model/TransparentData.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
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
                     * 获取<p>任务唯一标识</p>
                     * @return TaskId <p>任务唯一标识</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务唯一标识</p>
                     * @param _taskId <p>任务唯一标识</p>
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
                     * 获取<p>控制命令，目前支持命令如下：- ServerPushText，服务端发送文本给AI机器人，AI机器人会播报该文本. - InvokeLLM，服务端发送文本给大模型，触发对话。- TransparentData，透传信息给客户端。</p>
                     * @return Command <p>控制命令，目前支持命令如下：- ServerPushText，服务端发送文本给AI机器人，AI机器人会播报该文本. - InvokeLLM，服务端发送文本给大模型，触发对话。- TransparentData，透传信息给客户端。</p>
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置<p>控制命令，目前支持命令如下：- ServerPushText，服务端发送文本给AI机器人，AI机器人会播报该文本. - InvokeLLM，服务端发送文本给大模型，触发对话。- TransparentData，透传信息给客户端。</p>
                     * @param _command <p>控制命令，目前支持命令如下：- ServerPushText，服务端发送文本给AI机器人，AI机器人会播报该文本. - InvokeLLM，服务端发送文本给大模型，触发对话。- TransparentData，透传信息给客户端。</p>
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
                     * 获取<p>服务端发送播报文本命令，当Command为ServerPushText时必填</p>
                     * @return ServerPushText <p>服务端发送播报文本命令，当Command为ServerPushText时必填</p>
                     * 
                     */
                    ServerPushText GetServerPushText() const;

                    /**
                     * 设置<p>服务端发送播报文本命令，当Command为ServerPushText时必填</p>
                     * @param _serverPushText <p>服务端发送播报文本命令，当Command为ServerPushText时必填</p>
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
                     * 获取<p>服务端发送命令主动请求大模型,当Command为InvokeLLM时会把content请求到大模型,头部增加X-Invoke-LLM=&quot;1&quot;</p>
                     * @return InvokeLLM <p>服务端发送命令主动请求大模型,当Command为InvokeLLM时会把content请求到大模型,头部增加X-Invoke-LLM=&quot;1&quot;</p>
                     * 
                     */
                    InvokeLLM GetInvokeLLM() const;

                    /**
                     * 设置<p>服务端发送命令主动请求大模型,当Command为InvokeLLM时会把content请求到大模型,头部增加X-Invoke-LLM=&quot;1&quot;</p>
                     * @param _invokeLLM <p>服务端发送命令主动请求大模型,当Command为InvokeLLM时会把content请求到大模型,头部增加X-Invoke-LLM=&quot;1&quot;</p>
                     * 
                     */
                    void SetInvokeLLM(const InvokeLLM& _invokeLLM);

                    /**
                     * 判断参数 InvokeLLM 是否已赋值
                     * @return InvokeLLM 是否已赋值
                     * 
                     */
                    bool InvokeLLMHasBeenSet() const;

                    /**
                     * 获取<p>ai对话需要透传给客户端的信息</p>
                     * @return TransparentData <p>ai对话需要透传给客户端的信息</p>
                     * 
                     */
                    TransparentData GetTransparentData() const;

                    /**
                     * 设置<p>ai对话需要透传给客户端的信息</p>
                     * @param _transparentData <p>ai对话需要透传给客户端的信息</p>
                     * 
                     */
                    void SetTransparentData(const TransparentData& _transparentData);

                    /**
                     * 判断参数 TransparentData 是否已赋值
                     * @return TransparentData 是否已赋值
                     * 
                     */
                    bool TransparentDataHasBeenSet() const;

                private:

                    /**
                     * <p>任务唯一标识</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>控制命令，目前支持命令如下：- ServerPushText，服务端发送文本给AI机器人，AI机器人会播报该文本. - InvokeLLM，服务端发送文本给大模型，触发对话。- TransparentData，透传信息给客户端。</p>
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * <p>服务端发送播报文本命令，当Command为ServerPushText时必填</p>
                     */
                    ServerPushText m_serverPushText;
                    bool m_serverPushTextHasBeenSet;

                    /**
                     * <p>服务端发送命令主动请求大模型,当Command为InvokeLLM时会把content请求到大模型,头部增加X-Invoke-LLM=&quot;1&quot;</p>
                     */
                    InvokeLLM m_invokeLLM;
                    bool m_invokeLLMHasBeenSet;

                    /**
                     * <p>ai对话需要透传给客户端的信息</p>
                     */
                    TransparentData m_transparentData;
                    bool m_transparentDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_CONTROLAICONVERSATIONREQUEST_H_
