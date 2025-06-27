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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEMESSAGEDETAILSRESPONSE_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEMESSAGEDETAILSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mqtt/v20240516/model/UserProperty.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * DescribeMessageDetails返回参数结构体
                */
                class DescribeMessageDetailsResponse : public AbstractModel
                {
                public:
                    DescribeMessageDetailsResponse();
                    ~DescribeMessageDetailsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取消息体
                     * @return Body 消息体
                     * 
                     */
                    std::string GetBody() const;

                    /**
                     * 判断参数 Body 是否已赋值
                     * @return Body 是否已赋值
                     * 
                     */
                    bool BodyHasBeenSet() const;

                    /**
                     * 获取用户自定义属性
                     * @return UserProperties 用户自定义属性
                     * 
                     */
                    std::vector<UserProperty> GetUserProperties() const;

                    /**
                     * 判断参数 UserProperties 是否已赋值
                     * @return UserProperties 是否已赋值
                     * 
                     */
                    bool UserPropertiesHasBeenSet() const;

                    /**
                     * 获取消息存储时间，毫秒级时间戳。
                     * @return StoreTimestamp 消息存储时间，毫秒级时间戳。
                     * 
                     */
                    int64_t GetStoreTimestamp() const;

                    /**
                     * 判断参数 StoreTimestamp 是否已赋值
                     * @return StoreTimestamp 是否已赋值
                     * 
                     */
                    bool StoreTimestampHasBeenSet() const;

                    /**
                     * 获取消息ID
                     * @return MessageId 消息ID
                     * 
                     */
                    std::string GetMessageId() const;

                    /**
                     * 判断参数 MessageId 是否已赋值
                     * @return MessageId 是否已赋值
                     * 
                     */
                    bool MessageIdHasBeenSet() const;

                    /**
                     * 获取生产者地址
                     * @return ClientId 生产者地址
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 判断参数 ClientId 是否已赋值
                     * @return ClientId 是否已赋值
                     * 
                     */
                    bool ClientIdHasBeenSet() const;

                    /**
                     * 获取Topic
                     * @return Qos Topic
                     * 
                     */
                    std::string GetQos() const;

                    /**
                     * 判断参数 Qos 是否已赋值
                     * @return Qos 是否已赋值
                     * 
                     */
                    bool QosHasBeenSet() const;

                    /**
                     * 获取源topic
                     * @return OriginTopic 源topic
                     * 
                     */
                    std::string GetOriginTopic() const;

                    /**
                     * 判断参数 OriginTopic 是否已赋值
                     * @return OriginTopic 是否已赋值
                     * 
                     */
                    bool OriginTopicHasBeenSet() const;

                private:

                    /**
                     * 消息体
                     */
                    std::string m_body;
                    bool m_bodyHasBeenSet;

                    /**
                     * 用户自定义属性
                     */
                    std::vector<UserProperty> m_userProperties;
                    bool m_userPropertiesHasBeenSet;

                    /**
                     * 消息存储时间，毫秒级时间戳。
                     */
                    int64_t m_storeTimestamp;
                    bool m_storeTimestampHasBeenSet;

                    /**
                     * 消息ID
                     */
                    std::string m_messageId;
                    bool m_messageIdHasBeenSet;

                    /**
                     * 生产者地址
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * Topic
                     */
                    std::string m_qos;
                    bool m_qosHasBeenSet;

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

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEMESSAGEDETAILSRESPONSE_H_
