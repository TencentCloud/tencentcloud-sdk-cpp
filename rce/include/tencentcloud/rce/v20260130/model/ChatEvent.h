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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_CHATEVENT_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_CHATEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/Chat.h>
#include <tencentcloud/rce/v20260130/model/Sender.h>
#include <tencentcloud/rce/v20260130/model/Receiver.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * 聊天消息事件详情
                */
                class ChatEvent : public AbstractModel
                {
                public:
                    ChatEvent();
                    ~ChatEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>聊天信息</p>
                     * @return ChatInfo <p>聊天信息</p>
                     * 
                     */
                    Chat GetChatInfo() const;

                    /**
                     * 设置<p>聊天信息</p>
                     * @param _chatInfo <p>聊天信息</p>
                     * 
                     */
                    void SetChatInfo(const Chat& _chatInfo);

                    /**
                     * 判断参数 ChatInfo 是否已赋值
                     * @return ChatInfo 是否已赋值
                     * 
                     */
                    bool ChatInfoHasBeenSet() const;

                    /**
                     * 获取<p>所属服务器ID，允许空串</p>
                     * @return ServerId <p>所属服务器ID，允许空串</p>
                     * 
                     */
                    std::string GetServerId() const;

                    /**
                     * 设置<p>所属服务器ID，允许空串</p>
                     * @param _serverId <p>所属服务器ID，允许空串</p>
                     * 
                     */
                    void SetServerId(const std::string& _serverId);

                    /**
                     * 判断参数 ServerId 是否已赋值
                     * @return ServerId 是否已赋值
                     * 
                     */
                    bool ServerIdHasBeenSet() const;

                    /**
                     * 获取<p>发送者信息</p>
                     * @return Sender <p>发送者信息</p>
                     * 
                     */
                    Sender GetSender() const;

                    /**
                     * 设置<p>发送者信息</p>
                     * @param _sender <p>发送者信息</p>
                     * 
                     */
                    void SetSender(const Sender& _sender);

                    /**
                     * 判断参数 Sender 是否已赋值
                     * @return Sender 是否已赋值
                     * 
                     */
                    bool SenderHasBeenSet() const;

                    /**
                     * 获取<p>接收者信息</p>
                     * @return Receiver <p>接收者信息</p>
                     * 
                     */
                    Receiver GetReceiver() const;

                    /**
                     * 设置<p>接收者信息</p>
                     * @param _receiver <p>接收者信息</p>
                     * 
                     */
                    void SetReceiver(const Receiver& _receiver);

                    /**
                     * 判断参数 Receiver 是否已赋值
                     * @return Receiver 是否已赋值
                     * 
                     */
                    bool ReceiverHasBeenSet() const;

                private:

                    /**
                     * <p>聊天信息</p>
                     */
                    Chat m_chatInfo;
                    bool m_chatInfoHasBeenSet;

                    /**
                     * <p>所属服务器ID，允许空串</p>
                     */
                    std::string m_serverId;
                    bool m_serverIdHasBeenSet;

                    /**
                     * <p>发送者信息</p>
                     */
                    Sender m_sender;
                    bool m_senderHasBeenSet;

                    /**
                     * <p>接收者信息</p>
                     */
                    Receiver m_receiver;
                    bool m_receiverHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_CHATEVENT_H_
