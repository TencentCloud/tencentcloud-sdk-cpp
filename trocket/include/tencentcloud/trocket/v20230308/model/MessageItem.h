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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_MESSAGEITEM_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_MESSAGEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * 消息记录
                */
                class MessageItem : public AbstractModel
                {
                public:
                    MessageItem();
                    ~MessageItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取消息ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MsgId 消息ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMsgId() const;

                    /**
                     * 设置消息ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _msgId 消息ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * @return Tags 消息tag
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTags() const;

                    /**
                     * 设置消息tag
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 消息tag
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Keys 消息key
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKeys() const;

                    /**
                     * 设置消息key
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keys 消息key
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProducerAddr 客户端地址	
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProducerAddr() const;

                    /**
                     * 设置客户端地址	
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _producerAddr 客户端地址	
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProduceTime 消息发送时间	
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProduceTime() const;

                    /**
                     * 设置消息发送时间	
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _produceTime 消息发送时间	
注意：此字段可能返回 null，表示取不到有效值。
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
                     * @return DeadLetterResendSuccessTimes 死信重发成功次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDeadLetterResendSuccessTimes() const;

                    /**
                     * 设置死信重发成功次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deadLetterResendSuccessTimes 死信重发成功次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeadLetterResendSuccessTimes(const int64_t& _deadLetterResendSuccessTimes);

                    /**
                     * 判断参数 DeadLetterResendSuccessTimes 是否已赋值
                     * @return DeadLetterResendSuccessTimes 是否已赋值
                     * 
                     */
                    bool DeadLetterResendSuccessTimesHasBeenSet() const;

                private:

                    /**
                     * 消息ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_msgId;
                    bool m_msgIdHasBeenSet;

                    /**
                     * 消息tag
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 消息key
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_keys;
                    bool m_keysHasBeenSet;

                    /**
                     * 客户端地址	
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_producerAddr;
                    bool m_producerAddrHasBeenSet;

                    /**
                     * 消息发送时间	
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_produceTime;
                    bool m_produceTimeHasBeenSet;

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
                    int64_t m_deadLetterResendSuccessTimes;
                    bool m_deadLetterResendSuccessTimesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_MESSAGEITEM_H_
