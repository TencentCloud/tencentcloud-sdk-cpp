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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQMSGLOG_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQMSGLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * rocketmq消息日志
                */
                class RocketMQMsgLog : public AbstractModel
                {
                public:
                    RocketMQMsgLog();
                    ~RocketMQMsgLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取消息id
                     * @return MsgId 消息id
                     * 
                     */
                    std::string GetMsgId() const;

                    /**
                     * 设置消息id
                     * @param _msgId 消息id
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MsgTag 消息tag
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMsgTag() const;

                    /**
                     * 设置消息tag
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _msgTag 消息tag
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMsgTag(const std::string& _msgTag);

                    /**
                     * 判断参数 MsgTag 是否已赋值
                     * @return MsgTag 是否已赋值
                     * 
                     */
                    bool MsgTagHasBeenSet() const;

                    /**
                     * 获取消息key
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MsgKey 消息key
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMsgKey() const;

                    /**
                     * 设置消息key
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _msgKey 消息key
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMsgKey(const std::string& _msgKey);

                    /**
                     * 判断参数 MsgKey 是否已赋值
                     * @return MsgKey 是否已赋值
                     * 
                     */
                    bool MsgKeyHasBeenSet() const;

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
                     * 获取消息发送时间
                     * @return ProduceTime 消息发送时间
                     * 
                     */
                    std::string GetProduceTime() const;

                    /**
                     * 设置消息发送时间
                     * @param _produceTime 消息发送时间
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
                     * 获取pulsar消息id
                     * @return PulsarMsgId pulsar消息id
                     * 
                     */
                    std::string GetPulsarMsgId() const;

                    /**
                     * 设置pulsar消息id
                     * @param _pulsarMsgId pulsar消息id
                     * 
                     */
                    void SetPulsarMsgId(const std::string& _pulsarMsgId);

                    /**
                     * 判断参数 PulsarMsgId 是否已赋值
                     * @return PulsarMsgId 是否已赋值
                     * 
                     */
                    bool PulsarMsgIdHasBeenSet() const;

                    /**
                     * 获取死信重发次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeadLetterResendTimes 死信重发次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDeadLetterResendTimes() const;

                    /**
                     * 设置死信重发次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deadLetterResendTimes 死信重发次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeadLetterResendTimes(const int64_t& _deadLetterResendTimes);

                    /**
                     * 判断参数 DeadLetterResendTimes 是否已赋值
                     * @return DeadLetterResendTimes 是否已赋值
                     * 
                     */
                    bool DeadLetterResendTimesHasBeenSet() const;

                    /**
                     * 获取死信重发成功次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResendSuccessCount 死信重发成功次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetResendSuccessCount() const;

                    /**
                     * 设置死信重发成功次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resendSuccessCount 死信重发成功次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResendSuccessCount(const int64_t& _resendSuccessCount);

                    /**
                     * 判断参数 ResendSuccessCount 是否已赋值
                     * @return ResendSuccessCount 是否已赋值
                     * 
                     */
                    bool ResendSuccessCountHasBeenSet() const;

                private:

                    /**
                     * 消息id
                     */
                    std::string m_msgId;
                    bool m_msgIdHasBeenSet;

                    /**
                     * 消息tag
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_msgTag;
                    bool m_msgTagHasBeenSet;

                    /**
                     * 消息key
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_msgKey;
                    bool m_msgKeyHasBeenSet;

                    /**
                     * 客户端地址
                     */
                    std::string m_producerAddr;
                    bool m_producerAddrHasBeenSet;

                    /**
                     * 消息发送时间
                     */
                    std::string m_produceTime;
                    bool m_produceTimeHasBeenSet;

                    /**
                     * pulsar消息id
                     */
                    std::string m_pulsarMsgId;
                    bool m_pulsarMsgIdHasBeenSet;

                    /**
                     * 死信重发次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_deadLetterResendTimes;
                    bool m_deadLetterResendTimesHasBeenSet;

                    /**
                     * 死信重发成功次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_resendSuccessCount;
                    bool m_resendSuccessCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQMSGLOG_H_
