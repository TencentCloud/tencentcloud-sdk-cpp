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
                     * 获取<p>消息体</p>
                     * @return Body <p>消息体</p>
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
                     * 获取<p>用户自定义属性</p>
                     * @return UserProperties <p>用户自定义属性</p>
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
                     * 获取<p>消息存储时间，毫秒级时间戳。</p>
                     * @return StoreTimestamp <p>消息存储时间，毫秒级时间戳。</p>
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
                     * 获取<p>消息ID</p>
                     * @return MessageId <p>消息ID</p>
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
                     * 获取<p>生产者地址</p>
                     * @return ClientId <p>生产者地址</p>
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
                     * 获取<p>Topic</p>
                     * @return Qos <p>Topic</p>
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
                     * 获取<p>源topic</p>
                     * @return OriginTopic <p>源topic</p>
                     * 
                     */
                    std::string GetOriginTopic() const;

                    /**
                     * 判断参数 OriginTopic 是否已赋值
                     * @return OriginTopic 是否已赋值
                     * 
                     */
                    bool OriginTopicHasBeenSet() const;

                    /**
                     * 获取<p>内容类型（MQTT5）<br>含义：指示消息载荷的内容类型，使用标准的 MIME 类型格式。这帮助接收方正确解析和处理消息内容。<br>示例：<br>application/json：表示载荷是 JSON 格式的数据。<br>text/plain：表示载荷是纯文本。<br>application/octet-stream：表示载荷是二进制数据。</p>
                     * @return ContentType <p>内容类型（MQTT5）<br>含义：指示消息载荷的内容类型，使用标准的 MIME 类型格式。这帮助接收方正确解析和处理消息内容。<br>示例：<br>application/json：表示载荷是 JSON 格式的数据。<br>text/plain：表示载荷是纯文本。<br>application/octet-stream：表示载荷是二进制数据。</p>
                     * 
                     */
                    std::string GetContentType() const;

                    /**
                     * 判断参数 ContentType 是否已赋值
                     * @return ContentType 是否已赋值
                     * 
                     */
                    bool ContentTypeHasBeenSet() const;

                    /**
                     * 获取<p>载荷格式指示符（MQTT5）<br>含义：指示载荷的格式，是一个布尔值。0表示未指定格式（二进制），1表示 UTF-8 编码的字符串。<br>示例：<br>值为0：当载荷是二进制数据，如图片、音频等。<br>值为1：当载荷是 UTF-8 编码的文本，如 JSON 字符串、XML 等。</p>
                     * @return PayloadFormatIndicator <p>载荷格式指示符（MQTT5）<br>含义：指示载荷的格式，是一个布尔值。0表示未指定格式（二进制），1表示 UTF-8 编码的字符串。<br>示例：<br>值为0：当载荷是二进制数据，如图片、音频等。<br>值为1：当载荷是 UTF-8 编码的文本，如 JSON 字符串、XML 等。</p>
                     * 
                     */
                    int64_t GetPayloadFormatIndicator() const;

                    /**
                     * 判断参数 PayloadFormatIndicator 是否已赋值
                     * @return PayloadFormatIndicator 是否已赋值
                     * 
                     */
                    bool PayloadFormatIndicatorHasBeenSet() const;

                    /**
                     * 获取<p>消息过期间隔（MQTT5）<br>含义：指定消息在被丢弃前的有效时间（秒）。如果消息在过期前未能送达，则会被 MQTT 服务器丢弃。<br>示例：<br>值为60：表示消息在发布后的 60 秒内有效，过期后未送达则被丢弃。<br>值为0：表示消息不过期，永久有效（直到被接收或会话结束）。</p>
                     * @return MessageExpiryInterval <p>消息过期间隔（MQTT5）<br>含义：指定消息在被丢弃前的有效时间（秒）。如果消息在过期前未能送达，则会被 MQTT 服务器丢弃。<br>示例：<br>值为60：表示消息在发布后的 60 秒内有效，过期后未送达则被丢弃。<br>值为0：表示消息不过期，永久有效（直到被接收或会话结束）。</p>
                     * 
                     */
                    int64_t GetMessageExpiryInterval() const;

                    /**
                     * 判断参数 MessageExpiryInterval 是否已赋值
                     * @return MessageExpiryInterval 是否已赋值
                     * 
                     */
                    bool MessageExpiryIntervalHasBeenSet() const;

                    /**
                     * 获取<p>响应主题（MQTT5）<br>含义：指定一个主题，用于请求 - 响应模式中的响应消息。发送方可以指定接收方应该将响应发送到哪个主题。<br>示例：<br>发送方发布请求到主题devices/device1/commands，并设置ResponseTopic为devices/device1/responses。<br>接收方处理请求后，将响应发布到devices/device1/responses主题。</p>
                     * @return ResponseTopic <p>响应主题（MQTT5）<br>含义：指定一个主题，用于请求 - 响应模式中的响应消息。发送方可以指定接收方应该将响应发送到哪个主题。<br>示例：<br>发送方发布请求到主题devices/device1/commands，并设置ResponseTopic为devices/device1/responses。<br>接收方处理请求后，将响应发布到devices/device1/responses主题。</p>
                     * 
                     */
                    std::string GetResponseTopic() const;

                    /**
                     * 判断参数 ResponseTopic 是否已赋值
                     * @return ResponseTopic 是否已赋值
                     * 
                     */
                    bool ResponseTopicHasBeenSet() const;

                    /**
                     * 获取<p>关联数据（MQTT5）<br>含义：用于关联请求和响应的标识符，通常是一个字节数组。在请求 - 响应模式中，发送方设置此值，接收方在响应中包含相同的值，以便发送方识别响应对应的请求。<br>示例：<br>发送方生成一个唯一 ID（如 UUID 的字节数组）作为CorrelationData，附加到请求消息中。<br>接收方在响应消息中包含相同的CorrelationData，发送方通过比较此值来匹配响应和请求。</p>
                     * @return CorrelationData <p>关联数据（MQTT5）<br>含义：用于关联请求和响应的标识符，通常是一个字节数组。在请求 - 响应模式中，发送方设置此值，接收方在响应中包含相同的值，以便发送方识别响应对应的请求。<br>示例：<br>发送方生成一个唯一 ID（如 UUID 的字节数组）作为CorrelationData，附加到请求消息中。<br>接收方在响应消息中包含相同的CorrelationData，发送方通过比较此值来匹配响应和请求。</p>
                     * 
                     */
                    std::string GetCorrelationData() const;

                    /**
                     * 判断参数 CorrelationData 是否已赋值
                     * @return CorrelationData 是否已赋值
                     * 
                     */
                    bool CorrelationDataHasBeenSet() const;

                    /**
                     * 获取<p>订阅标识符（MQTT5）<br>含义：为订阅分配的唯一标识符，用于标识客户端的特定订阅。当服务器向客户端发送消息时，可以包含此标识符，帮助客户端识别消息对应的订阅。<br>示例：<br>客户端订阅主题devices/+/temperature，并设置SubscriptionIdentifier为123。<br>当服务器向客户端发送此主题的消息时，会在消息中包含SubscriptionIdentifier: 123，客户端可以根据此值知道消息是通过哪个订阅接收的。</p>
                     * @return SubscriptionIdentifier <p>订阅标识符（MQTT5）<br>含义：为订阅分配的唯一标识符，用于标识客户端的特定订阅。当服务器向客户端发送消息时，可以包含此标识符，帮助客户端识别消息对应的订阅。<br>示例：<br>客户端订阅主题devices/+/temperature，并设置SubscriptionIdentifier为123。<br>当服务器向客户端发送此主题的消息时，会在消息中包含SubscriptionIdentifier: 123，客户端可以根据此值知道消息是通过哪个订阅接收的。</p>
                     * 
                     */
                    std::string GetSubscriptionIdentifier() const;

                    /**
                     * 判断参数 SubscriptionIdentifier 是否已赋值
                     * @return SubscriptionIdentifier 是否已赋值
                     * 
                     */
                    bool SubscriptionIdentifierHasBeenSet() const;

                    /**
                     * 获取<p>是否保留消息</p>
                     * @return Retain <p>是否保留消息</p>
                     * 
                     */
                    bool GetRetain() const;

                    /**
                     * 判断参数 Retain 是否已赋值
                     * @return Retain 是否已赋值
                     * 
                     */
                    bool RetainHasBeenSet() const;

                private:

                    /**
                     * <p>消息体</p>
                     */
                    std::string m_body;
                    bool m_bodyHasBeenSet;

                    /**
                     * <p>用户自定义属性</p>
                     */
                    std::vector<UserProperty> m_userProperties;
                    bool m_userPropertiesHasBeenSet;

                    /**
                     * <p>消息存储时间，毫秒级时间戳。</p>
                     */
                    int64_t m_storeTimestamp;
                    bool m_storeTimestampHasBeenSet;

                    /**
                     * <p>消息ID</p>
                     */
                    std::string m_messageId;
                    bool m_messageIdHasBeenSet;

                    /**
                     * <p>生产者地址</p>
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * <p>Topic</p>
                     */
                    std::string m_qos;
                    bool m_qosHasBeenSet;

                    /**
                     * <p>源topic</p>
                     */
                    std::string m_originTopic;
                    bool m_originTopicHasBeenSet;

                    /**
                     * <p>内容类型（MQTT5）<br>含义：指示消息载荷的内容类型，使用标准的 MIME 类型格式。这帮助接收方正确解析和处理消息内容。<br>示例：<br>application/json：表示载荷是 JSON 格式的数据。<br>text/plain：表示载荷是纯文本。<br>application/octet-stream：表示载荷是二进制数据。</p>
                     */
                    std::string m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * <p>载荷格式指示符（MQTT5）<br>含义：指示载荷的格式，是一个布尔值。0表示未指定格式（二进制），1表示 UTF-8 编码的字符串。<br>示例：<br>值为0：当载荷是二进制数据，如图片、音频等。<br>值为1：当载荷是 UTF-8 编码的文本，如 JSON 字符串、XML 等。</p>
                     */
                    int64_t m_payloadFormatIndicator;
                    bool m_payloadFormatIndicatorHasBeenSet;

                    /**
                     * <p>消息过期间隔（MQTT5）<br>含义：指定消息在被丢弃前的有效时间（秒）。如果消息在过期前未能送达，则会被 MQTT 服务器丢弃。<br>示例：<br>值为60：表示消息在发布后的 60 秒内有效，过期后未送达则被丢弃。<br>值为0：表示消息不过期，永久有效（直到被接收或会话结束）。</p>
                     */
                    int64_t m_messageExpiryInterval;
                    bool m_messageExpiryIntervalHasBeenSet;

                    /**
                     * <p>响应主题（MQTT5）<br>含义：指定一个主题，用于请求 - 响应模式中的响应消息。发送方可以指定接收方应该将响应发送到哪个主题。<br>示例：<br>发送方发布请求到主题devices/device1/commands，并设置ResponseTopic为devices/device1/responses。<br>接收方处理请求后，将响应发布到devices/device1/responses主题。</p>
                     */
                    std::string m_responseTopic;
                    bool m_responseTopicHasBeenSet;

                    /**
                     * <p>关联数据（MQTT5）<br>含义：用于关联请求和响应的标识符，通常是一个字节数组。在请求 - 响应模式中，发送方设置此值，接收方在响应中包含相同的值，以便发送方识别响应对应的请求。<br>示例：<br>发送方生成一个唯一 ID（如 UUID 的字节数组）作为CorrelationData，附加到请求消息中。<br>接收方在响应消息中包含相同的CorrelationData，发送方通过比较此值来匹配响应和请求。</p>
                     */
                    std::string m_correlationData;
                    bool m_correlationDataHasBeenSet;

                    /**
                     * <p>订阅标识符（MQTT5）<br>含义：为订阅分配的唯一标识符，用于标识客户端的特定订阅。当服务器向客户端发送消息时，可以包含此标识符，帮助客户端识别消息对应的订阅。<br>示例：<br>客户端订阅主题devices/+/temperature，并设置SubscriptionIdentifier为123。<br>当服务器向客户端发送此主题的消息时，会在消息中包含SubscriptionIdentifier: 123，客户端可以根据此值知道消息是通过哪个订阅接收的。</p>
                     */
                    std::string m_subscriptionIdentifier;
                    bool m_subscriptionIdentifierHasBeenSet;

                    /**
                     * <p>是否保留消息</p>
                     */
                    bool m_retain;
                    bool m_retainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEMESSAGEDETAILSRESPONSE_H_
