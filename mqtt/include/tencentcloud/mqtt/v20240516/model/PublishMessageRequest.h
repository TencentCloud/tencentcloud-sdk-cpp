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
                     * 获取腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     * @return InstanceId 腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     * @param _instanceId 腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
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
                     * 获取消息负载 Payload，是消息的实际内容，需要按 encoding 指定的编码方式进行编码
                     * @return Payload 消息负载 Payload，是消息的实际内容，需要按 encoding 指定的编码方式进行编码
                     * 
                     */
                    std::string GetPayload() const;

                    /**
                     * 设置消息负载 Payload，是消息的实际内容，需要按 encoding 指定的编码方式进行编码
                     * @param _payload 消息负载 Payload，是消息的实际内容，需要按 encoding 指定的编码方式进行编码
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
                     * 获取消息目的主题，该参数与 TargetClientId 二选一
                     * @return TargetTopic 消息目的主题，该参数与 TargetClientId 二选一
                     * 
                     */
                    std::string GetTargetTopic() const;

                    /**
                     * 设置消息目的主题，该参数与 TargetClientId 二选一
                     * @param _targetTopic 消息目的主题，该参数与 TargetClientId 二选一
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
                     * 获取消息目的客户端 ID，该参数与 TargetTopic 二选一
                     * @return TargetClientId 消息目的客户端 ID，该参数与 TargetTopic 二选一
                     * 
                     */
                    std::string GetTargetClientId() const;

                    /**
                     * 设置消息目的客户端 ID，该参数与 TargetTopic 二选一
                     * @param _targetClientId 消息目的客户端 ID，该参数与 TargetTopic 二选一
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
                     * 获取消息 payload 编码，可选 plain 或 base64，默认为 plain（即不编码）
                     * @return Encoding 消息 payload 编码，可选 plain 或 base64，默认为 plain（即不编码）
                     * 
                     */
                    std::string GetEncoding() const;

                    /**
                     * 设置消息 payload 编码，可选 plain 或 base64，默认为 plain（即不编码）
                     * @param _encoding 消息 payload 编码，可选 plain 或 base64，默认为 plain（即不编码）
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
                     * 获取消息的服务质量等级，默认为 1
QoS 0（至多一次）消息发送后，不保证接收方一定收到，也不要求接收方确认。
QoS 1（至少一次）消息至少被接收方成功接收一次，但可能重复。
QoS 2（恰好一次）消息确保被接收方接收且仅接收一次，无重复。
                     * @return Qos 消息的服务质量等级，默认为 1
QoS 0（至多一次）消息发送后，不保证接收方一定收到，也不要求接收方确认。
QoS 1（至少一次）消息至少被接收方成功接收一次，但可能重复。
QoS 2（恰好一次）消息确保被接收方接收且仅接收一次，无重复。
                     * 
                     */
                    int64_t GetQos() const;

                    /**
                     * 设置消息的服务质量等级，默认为 1
QoS 0（至多一次）消息发送后，不保证接收方一定收到，也不要求接收方确认。
QoS 1（至少一次）消息至少被接收方成功接收一次，但可能重复。
QoS 2（恰好一次）消息确保被接收方接收且仅接收一次，无重复。
                     * @param _qos 消息的服务质量等级，默认为 1
QoS 0（至多一次）消息发送后，不保证接收方一定收到，也不要求接收方确认。
QoS 1（至少一次）消息至少被接收方成功接收一次，但可能重复。
QoS 2（恰好一次）消息确保被接收方接收且仅接收一次，无重复。
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
                     * 获取是否为保留消息，默认为 false，且仅支持发布到主题的消息设置为 true
                     * @return Retain 是否为保留消息，默认为 false，且仅支持发布到主题的消息设置为 true
                     * 
                     */
                    bool GetRetain() const;

                    /**
                     * 设置是否为保留消息，默认为 false，且仅支持发布到主题的消息设置为 true
                     * @param _retain 是否为保留消息，默认为 false，且仅支持发布到主题的消息设置为 true
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
                     * 腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 消息负载 Payload，是消息的实际内容，需要按 encoding 指定的编码方式进行编码
                     */
                    std::string m_payload;
                    bool m_payloadHasBeenSet;

                    /**
                     * 消息目的主题，该参数与 TargetClientId 二选一
                     */
                    std::string m_targetTopic;
                    bool m_targetTopicHasBeenSet;

                    /**
                     * 消息目的客户端 ID，该参数与 TargetTopic 二选一
                     */
                    std::string m_targetClientId;
                    bool m_targetClientIdHasBeenSet;

                    /**
                     * 消息 payload 编码，可选 plain 或 base64，默认为 plain（即不编码）
                     */
                    std::string m_encoding;
                    bool m_encodingHasBeenSet;

                    /**
                     * 消息的服务质量等级，默认为 1
QoS 0（至多一次）消息发送后，不保证接收方一定收到，也不要求接收方确认。
QoS 1（至少一次）消息至少被接收方成功接收一次，但可能重复。
QoS 2（恰好一次）消息确保被接收方接收且仅接收一次，无重复。
                     */
                    int64_t m_qos;
                    bool m_qosHasBeenSet;

                    /**
                     * 是否为保留消息，默认为 false，且仅支持发布到主题的消息设置为 true
                     */
                    bool m_retain;
                    bool m_retainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_PUBLISHMESSAGEREQUEST_H_
