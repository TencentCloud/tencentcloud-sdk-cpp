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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_MQTTMESSAGE_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_MQTTMESSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * MQTT消息
                */
                class MQTTMessage : public AbstractModel
                {
                public:
                    MQTTMessage();
                    ~MQTTMessage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取消息id
                     * @return MessageId 消息id
                     * 
                     */
                    std::string GetMessageId() const;

                    /**
                     * 设置消息id
                     * @param _messageId 消息id
                     * 
                     */
                    void SetMessageId(const std::string& _messageId);

                    /**
                     * 判断参数 MessageId 是否已赋值
                     * @return MessageId 是否已赋值
                     * 
                     */
                    bool MessageIdHasBeenSet() const;

                    /**
                     * 获取消息发送的客户端Id
                     * @return ClientId 消息发送的客户端Id
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 设置消息发送的客户端Id
                     * @param _clientId 消息发送的客户端Id
                     * 
                     */
                    void SetClientId(const std::string& _clientId);

                    /**
                     * 判断参数 ClientId 是否已赋值
                     * @return ClientId 是否已赋值
                     * 
                     */
                    bool ClientIdHasBeenSet() const;

                    /**
                     * 获取消息服务质量等级
                     * @return Qos 消息服务质量等级
                     * 
                     */
                    std::string GetQos() const;

                    /**
                     * 设置消息服务质量等级
                     * @param _qos 消息服务质量等级
                     * 
                     */
                    void SetQos(const std::string& _qos);

                    /**
                     * 判断参数 Qos 是否已赋值
                     * @return Qos 是否已赋值
                     * 
                     */
                    bool QosHasBeenSet() const;

                    /**
                     * 获取消息在服务端的存储时间，毫秒级时间戳
                     * @return StoreTimestamp 消息在服务端的存储时间，毫秒级时间戳
                     * 
                     */
                    int64_t GetStoreTimestamp() const;

                    /**
                     * 设置消息在服务端的存储时间，毫秒级时间戳
                     * @param _storeTimestamp 消息在服务端的存储时间，毫秒级时间戳
                     * 
                     */
                    void SetStoreTimestamp(const int64_t& _storeTimestamp);

                    /**
                     * 判断参数 StoreTimestamp 是否已赋值
                     * @return StoreTimestamp 是否已赋值
                     * 
                     */
                    bool StoreTimestampHasBeenSet() const;

                    /**
                     * 获取源topic
                     * @return OriginTopic 源topic
                     * 
                     */
                    std::string GetOriginTopic() const;

                    /**
                     * 设置源topic
                     * @param _originTopic 源topic
                     * 
                     */
                    void SetOriginTopic(const std::string& _originTopic);

                    /**
                     * 判断参数 OriginTopic 是否已赋值
                     * @return OriginTopic 是否已赋值
                     * 
                     */
                    bool OriginTopicHasBeenSet() const;

                private:

                    /**
                     * 消息id
                     */
                    std::string m_messageId;
                    bool m_messageIdHasBeenSet;

                    /**
                     * 消息发送的客户端Id
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * 消息服务质量等级
                     */
                    std::string m_qos;
                    bool m_qosHasBeenSet;

                    /**
                     * 消息在服务端的存储时间，毫秒级时间戳
                     */
                    int64_t m_storeTimestamp;
                    bool m_storeTimestampHasBeenSet;

                    /**
                     * 源topic
                     */
                    std::string m_originTopic;
                    bool m_originTopicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_MQTTMESSAGE_H_
