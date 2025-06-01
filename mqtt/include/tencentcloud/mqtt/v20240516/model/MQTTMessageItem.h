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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_MQTTMESSAGEITEM_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_MQTTMESSAGEITEM_H_

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
                * 消息记录
                */
                class MQTTMessageItem : public AbstractModel
                {
                public:
                    MQTTMessageItem();
                    ~MQTTMessageItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取消息ID
                     * @return MsgId 消息ID
                     * 
                     */
                    std::string GetMsgId() const;

                    /**
                     * 设置消息ID
                     * @param _msgId 消息ID
                     * 
                     */
                    void SetMsgId(const std::string& _msgId);

                    /**
                     * 判断参数 MsgId 是否已赋值
                     * @return MsgId 是否已赋值
                     * 
                     */
                    bool MsgIdHasBeenSet() const;

                    /**
                     * 获取消息tag
                     * @return Tags 消息tag
                     * 
                     */
                    std::string GetTags() const;

                    /**
                     * 设置消息tag
                     * @param _tags 消息tag
                     * 
                     */
                    void SetTags(const std::string& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取消息key
                     * @return Keys 消息key
                     * 
                     */
                    std::string GetKeys() const;

                    /**
                     * 设置消息key
                     * @param _keys 消息key
                     * 
                     */
                    void SetKeys(const std::string& _keys);

                    /**
                     * 判断参数 Keys 是否已赋值
                     * @return Keys 是否已赋值
                     * 
                     */
                    bool KeysHasBeenSet() const;

                    /**
                     * 获取客户端地址	
                     * @return ProducerAddr 客户端地址	
                     * 
                     */
                    std::string GetProducerAddr() const;

                    /**
                     * 设置客户端地址	
                     * @param _producerAddr 客户端地址	
                     * 
                     */
                    void SetProducerAddr(const std::string& _producerAddr);

                    /**
                     * 判断参数 ProducerAddr 是否已赋值
                     * @return ProducerAddr 是否已赋值
                     * 
                     */
                    bool ProducerAddrHasBeenSet() const;

                    /**
                     * 获取消息发送时间，格式 日期时间：YYYY-MM-DD hh:mm:ss
                     * @return ProduceTime 消息发送时间，格式 日期时间：YYYY-MM-DD hh:mm:ss
                     * 
                     */
                    std::string GetProduceTime() const;

                    /**
                     * 设置消息发送时间，格式 日期时间：YYYY-MM-DD hh:mm:ss
                     * @param _produceTime 消息发送时间，格式 日期时间：YYYY-MM-DD hh:mm:ss
                     * 
                     */
                    void SetProduceTime(const std::string& _produceTime);

                    /**
                     * 判断参数 ProduceTime 是否已赋值
                     * @return ProduceTime 是否已赋值
                     * 
                     */
                    bool ProduceTimeHasBeenSet() const;

                    /**
                     * 获取死信重发次数	
                     * @return DeadLetterResendTimes 死信重发次数	
                     * @deprecated
                     */
                    int64_t GetDeadLetterResendTimes() const;

                    /**
                     * 设置死信重发次数	
                     * @param _deadLetterResendTimes 死信重发次数	
                     * @deprecated
                     */
                    void SetDeadLetterResendTimes(const int64_t& _deadLetterResendTimes);

                    /**
                     * 判断参数 DeadLetterResendTimes 是否已赋值
                     * @return DeadLetterResendTimes 是否已赋值
                     * @deprecated
                     */
                    bool DeadLetterResendTimesHasBeenSet() const;

                    /**
                     * 获取死信重发成功次数
                     * @return DeadLetterResendSuccessTimes 死信重发成功次数
                     * @deprecated
                     */
                    int64_t GetDeadLetterResendSuccessTimes() const;

                    /**
                     * 设置死信重发成功次数
                     * @param _deadLetterResendSuccessTimes 死信重发成功次数
                     * @deprecated
                     */
                    void SetDeadLetterResendSuccessTimes(const int64_t& _deadLetterResendSuccessTimes);

                    /**
                     * 判断参数 DeadLetterResendSuccessTimes 是否已赋值
                     * @return DeadLetterResendSuccessTimes 是否已赋值
                     * @deprecated
                     */
                    bool DeadLetterResendSuccessTimesHasBeenSet() const;

                    /**
                     * 获取子topic
                     * @return SubTopic 子topic
                     * @deprecated
                     */
                    std::string GetSubTopic() const;

                    /**
                     * 设置子topic
                     * @param _subTopic 子topic
                     * @deprecated
                     */
                    void SetSubTopic(const std::string& _subTopic);

                    /**
                     * 判断参数 SubTopic 是否已赋值
                     * @return SubTopic 是否已赋值
                     * @deprecated
                     */
                    bool SubTopicHasBeenSet() const;

                    /**
                     * 获取消息质量等级
0：至多一次
1：至少一次
2：精确一次
                     * @return Qos 消息质量等级
0：至多一次
1：至少一次
2：精确一次
                     * 
                     */
                    std::string GetQos() const;

                    /**
                     * 设置消息质量等级
0：至多一次
1：至少一次
2：精确一次
                     * @param _qos 消息质量等级
0：至多一次
1：至少一次
2：精确一次
                     * 
                     */
                    void SetQos(const std::string& _qos);

                    /**
                     * 判断参数 Qos 是否已赋值
                     * @return Qos 是否已赋值
                     * 
                     */
                    bool QosHasBeenSet() const;

                private:

                    /**
                     * 消息ID
                     */
                    std::string m_msgId;
                    bool m_msgIdHasBeenSet;

                    /**
                     * 消息tag
                     */
                    std::string m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 消息key
                     */
                    std::string m_keys;
                    bool m_keysHasBeenSet;

                    /**
                     * 客户端地址	
                     */
                    std::string m_producerAddr;
                    bool m_producerAddrHasBeenSet;

                    /**
                     * 消息发送时间，格式 日期时间：YYYY-MM-DD hh:mm:ss
                     */
                    std::string m_produceTime;
                    bool m_produceTimeHasBeenSet;

                    /**
                     * 死信重发次数	
                     */
                    int64_t m_deadLetterResendTimes;
                    bool m_deadLetterResendTimesHasBeenSet;

                    /**
                     * 死信重发成功次数
                     */
                    int64_t m_deadLetterResendSuccessTimes;
                    bool m_deadLetterResendSuccessTimesHasBeenSet;

                    /**
                     * 子topic
                     */
                    std::string m_subTopic;
                    bool m_subTopicHasBeenSet;

                    /**
                     * 消息质量等级
0：至多一次
1：至少一次
2：精确一次
                     */
                    std::string m_qos;
                    bool m_qosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_MQTTMESSAGEITEM_H_
