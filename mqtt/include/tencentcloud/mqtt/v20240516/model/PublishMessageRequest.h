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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_PUBLISHMESSAGEREQUEST_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_PUBLISHMESSAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * PublishMessage请求参数结构体
                */
                class PublishMessageRequest : public AbstractModel
                {
                public:
                    PublishMessageRequest();
                    ~PublishMessageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>腾讯云MQTT实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
                     * @return InstanceId <p>腾讯云MQTT实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>腾讯云MQTT实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
                     * @param _instanceId <p>腾讯云MQTT实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>消息负载 Payload，是消息的实际内容，需要按 encoding 指定的编码方式进行编码</p>
                     * @return Payload <p>消息负载 Payload，是消息的实际内容，需要按 encoding 指定的编码方式进行编码</p>
                     * 
                     */
                    std::string GetPayload() const;

                    /**
                     * 设置<p>消息负载 Payload，是消息的实际内容，需要按 encoding 指定的编码方式进行编码</p>
                     * @param _payload <p>消息负载 Payload，是消息的实际内容，需要按 encoding 指定的编码方式进行编码</p>
                     * 
                     */
                    void SetPayload(const std::string& _payload);

                    /**
                     * 判断参数 Payload 是否已赋值
                     * @return Payload 是否已赋值
                     * 
                     */
                    bool PayloadHasBeenSet() const;

                    /**
                     * 获取<p>消息目的主题，该参数与 TargetClientId 二选一</p>
                     * @return TargetTopic <p>消息目的主题，该参数与 TargetClientId 二选一</p>
                     * 
                     */
                    std::string GetTargetTopic() const;

                    /**
                     * 设置<p>消息目的主题，该参数与 TargetClientId 二选一</p>
                     * @param _targetTopic <p>消息目的主题，该参数与 TargetClientId 二选一</p>
                     * 
                     */
                    void SetTargetTopic(const std::string& _targetTopic);

                    /**
                     * 判断参数 TargetTopic 是否已赋值
                     * @return TargetTopic 是否已赋值
                     * 
                     */
                    bool TargetTopicHasBeenSet() const;

                    /**
                     * 获取<p>消息目的客户端 ID，该参数与 TargetTopic 二选一</p>
                     * @return TargetClientId <p>消息目的客户端 ID，该参数与 TargetTopic 二选一</p>
                     * 
                     */
                    std::string GetTargetClientId() const;

                    /**
                     * 设置<p>消息目的客户端 ID，该参数与 TargetTopic 二选一</p>
                     * @param _targetClientId <p>消息目的客户端 ID，该参数与 TargetTopic 二选一</p>
                     * 
                     */
                    void SetTargetClientId(const std::string& _targetClientId);

                    /**
                     * 判断参数 TargetClientId 是否已赋值
                     * @return TargetClientId 是否已赋值
                     * 
                     */
                    bool TargetClientIdHasBeenSet() const;

                    /**
                     * 获取<p>消息 payload 编码，可选 plain 或 base64，默认为 plain（即不编码）</p>
                     * @return Encoding <p>消息 payload 编码，可选 plain 或 base64，默认为 plain（即不编码）</p>
                     * 
                     */
                    std::string GetEncoding() const;

                    /**
                     * 设置<p>消息 payload 编码，可选 plain 或 base64，默认为 plain（即不编码）</p>
                     * @param _encoding <p>消息 payload 编码，可选 plain 或 base64，默认为 plain（即不编码）</p>
                     * 
                     */
                    void SetEncoding(const std::string& _encoding);

                    /**
                     * 判断参数 Encoding 是否已赋值
                     * @return Encoding 是否已赋值
                     * 
                     */
                    bool EncodingHasBeenSet() const;

                    /**
                     * 获取<p>消息的服务质量等级，默认为 1<br>QoS 0（至多一次）消息发送后，不保证接收方一定收到，也不要求接收方确认。<br>QoS 1（至少一次）消息至少被接收方成功接收一次，但可能重复。<br>QoS 2（恰好一次）消息确保被接收方接收且仅接收一次，无重复。</p>
                     * @return Qos <p>消息的服务质量等级，默认为 1<br>QoS 0（至多一次）消息发送后，不保证接收方一定收到，也不要求接收方确认。<br>QoS 1（至少一次）消息至少被接收方成功接收一次，但可能重复。<br>QoS 2（恰好一次）消息确保被接收方接收且仅接收一次，无重复。</p>
                     * 
                     */
                    int64_t GetQos() const;

                    /**
                     * 设置<p>消息的服务质量等级，默认为 1<br>QoS 0（至多一次）消息发送后，不保证接收方一定收到，也不要求接收方确认。<br>QoS 1（至少一次）消息至少被接收方成功接收一次，但可能重复。<br>QoS 2（恰好一次）消息确保被接收方接收且仅接收一次，无重复。</p>
                     * @param _qos <p>消息的服务质量等级，默认为 1<br>QoS 0（至多一次）消息发送后，不保证接收方一定收到，也不要求接收方确认。<br>QoS 1（至少一次）消息至少被接收方成功接收一次，但可能重复。<br>QoS 2（恰好一次）消息确保被接收方接收且仅接收一次，无重复。</p>
                     * 
                     */
                    void SetQos(const int64_t& _qos);

                    /**
                     * 判断参数 Qos 是否已赋值
                     * @return Qos 是否已赋值
                     * 
                     */
                    bool QosHasBeenSet() const;

                    /**
                     * 获取<p>是否为保留消息，默认为 false，且仅支持发布到主题的消息设置为 true</p>
                     * @return Retain <p>是否为保留消息，默认为 false，且仅支持发布到主题的消息设置为 true</p>
                     * 
                     */
                    bool GetRetain() const;

                    /**
                     * 设置<p>是否为保留消息，默认为 false，且仅支持发布到主题的消息设置为 true</p>
                     * @param _retain <p>是否为保留消息，默认为 false，且仅支持发布到主题的消息设置为 true</p>
                     * 
                     */
                    void SetRetain(const bool& _retain);

                    /**
                     * 判断参数 Retain 是否已赋值
                     * @return Retain 是否已赋值
                     * 
                     */
                    bool RetainHasBeenSet() const;

                private:

                    /**
                     * <p>腾讯云MQTT实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>消息负载 Payload，是消息的实际内容，需要按 encoding 指定的编码方式进行编码</p>
                     */
                    std::string m_payload;
                    bool m_payloadHasBeenSet;

                    /**
                     * <p>消息目的主题，该参数与 TargetClientId 二选一</p>
                     */
                    std::string m_targetTopic;
                    bool m_targetTopicHasBeenSet;

                    /**
                     * <p>消息目的客户端 ID，该参数与 TargetTopic 二选一</p>
                     */
                    std::string m_targetClientId;
                    bool m_targetClientIdHasBeenSet;

                    /**
                     * <p>消息 payload 编码，可选 plain 或 base64，默认为 plain（即不编码）</p>
                     */
                    std::string m_encoding;
                    bool m_encodingHasBeenSet;

                    /**
                     * <p>消息的服务质量等级，默认为 1<br>QoS 0（至多一次）消息发送后，不保证接收方一定收到，也不要求接收方确认。<br>QoS 1（至少一次）消息至少被接收方成功接收一次，但可能重复。<br>QoS 2（恰好一次）消息确保被接收方接收且仅接收一次，无重复。</p>
                     */
                    int64_t m_qos;
                    bool m_qosHasBeenSet;

                    /**
                     * <p>是否为保留消息，默认为 false，且仅支持发布到主题的消息设置为 true</p>
                     */
                    bool m_retain;
                    bool m_retainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_PUBLISHMESSAGEREQUEST_H_
