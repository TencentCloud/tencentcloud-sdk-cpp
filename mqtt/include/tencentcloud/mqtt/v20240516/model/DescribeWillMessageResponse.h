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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEWILLMESSAGERESPONSE_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEWILLMESSAGERESPONSE_H_

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
                * DescribeWillMessage返回参数结构体
                */
                class DescribeWillMessageResponse : public AbstractModel
                {
                public:
                    DescribeWillMessageResponse();
                    ~DescribeWillMessageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>保留消息Topic</p>
                     * @return Topic <p>保留消息Topic</p>
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取<p>消息服务质量</p>
                     * @return Qos <p>消息服务质量</p>
                     * 
                     */
                    int64_t GetQos() const;

                    /**
                     * 判断参数 Qos 是否已赋值
                     * @return Qos 是否已赋值
                     * 
                     */
                    bool QosHasBeenSet() const;

                    /**
                     * 获取<p>是否保留消息</p>
                     * @return Retained <p>是否保留消息</p>
                     * 
                     */
                    bool GetRetained() const;

                    /**
                     * 判断参数 Retained 是否已赋值
                     * @return Retained 是否已赋值
                     * 
                     */
                    bool RetainedHasBeenSet() const;

                    /**
                     * 获取<p>消息负载(Base64编码)</p>
                     * @return Payload <p>消息负载(Base64编码)</p>
                     * 
                     */
                    std::string GetPayload() const;

                    /**
                     * 判断参数 Payload 是否已赋值
                     * @return Payload 是否已赋值
                     * 
                     */
                    bool PayloadHasBeenSet() const;

                    /**
                     * 获取<p>创建时间，毫秒级时间戳 。</p>
                     * @return CreateTime <p>创建时间，毫秒级时间戳 。</p>
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间，毫秒级时间戳 。</p>
                     * @return UpdateTime <p>更新时间，毫秒级时间戳 。</p>
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>遗嘱消息延迟时间，单位秒</p>
                     * @return WillDelayInterval <p>遗嘱消息延迟时间，单位秒</p>
                     * 
                     */
                    int64_t GetWillDelayInterval() const;

                    /**
                     * 判断参数 WillDelayInterval 是否已赋值
                     * @return WillDelayInterval 是否已赋值
                     * 
                     */
                    bool WillDelayIntervalHasBeenSet() const;

                    /**
                     * 获取<p>响应内容类型</p>
                     * @return ContentType <p>响应内容类型</p>
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
                     * 获取<p>响应主题</p>
                     * @return ResponseTopic <p>响应主题</p>
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
                     * 获取<p>关联数据（Base64编码）</p>
                     * @return CorrelationData <p>关联数据（Base64编码）</p>
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
                     * 获取<p>消息过期时间，单位秒</p>
                     * @return MessageExpiryInterval <p>消息过期时间，单位秒</p>
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
                     * 获取<p>负载格式指示器 1:UTF-8文本</p>
                     * @return PayloadFormatIndicator <p>负载格式指示器 1:UTF-8文本</p>
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
                     * 获取<p>用户属性</p>
                     * @return UserProperties <p>用户属性</p>
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
                     * 获取<p>遗嘱消息发布时间</p>
                     * @return PublishAfter <p>遗嘱消息发布时间</p>
                     * 
                     */
                    int64_t GetPublishAfter() const;

                    /**
                     * 判断参数 PublishAfter 是否已赋值
                     * @return PublishAfter 是否已赋值
                     * 
                     */
                    bool PublishAfterHasBeenSet() const;

                private:

                    /**
                     * <p>保留消息Topic</p>
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * <p>消息服务质量</p>
                     */
                    int64_t m_qos;
                    bool m_qosHasBeenSet;

                    /**
                     * <p>是否保留消息</p>
                     */
                    bool m_retained;
                    bool m_retainedHasBeenSet;

                    /**
                     * <p>消息负载(Base64编码)</p>
                     */
                    std::string m_payload;
                    bool m_payloadHasBeenSet;

                    /**
                     * <p>创建时间，毫秒级时间戳 。</p>
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间，毫秒级时间戳 。</p>
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>遗嘱消息延迟时间，单位秒</p>
                     */
                    int64_t m_willDelayInterval;
                    bool m_willDelayIntervalHasBeenSet;

                    /**
                     * <p>响应内容类型</p>
                     */
                    std::string m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * <p>响应主题</p>
                     */
                    std::string m_responseTopic;
                    bool m_responseTopicHasBeenSet;

                    /**
                     * <p>关联数据（Base64编码）</p>
                     */
                    std::string m_correlationData;
                    bool m_correlationDataHasBeenSet;

                    /**
                     * <p>消息过期时间，单位秒</p>
                     */
                    int64_t m_messageExpiryInterval;
                    bool m_messageExpiryIntervalHasBeenSet;

                    /**
                     * <p>负载格式指示器 1:UTF-8文本</p>
                     */
                    int64_t m_payloadFormatIndicator;
                    bool m_payloadFormatIndicatorHasBeenSet;

                    /**
                     * <p>用户属性</p>
                     */
                    std::vector<UserProperty> m_userProperties;
                    bool m_userPropertiesHasBeenSet;

                    /**
                     * <p>遗嘱消息发布时间</p>
                     */
                    int64_t m_publishAfter;
                    bool m_publishAfterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEWILLMESSAGERESPONSE_H_
