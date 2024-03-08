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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQMSGRESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQMSGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/RocketMQMessageTrack.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeRocketMQMsg返回参数结构体
                */
                class DescribeRocketMQMsgResponse : public AbstractModel
                {
                public:
                    DescribeRocketMQMsgResponse();
                    ~DescribeRocketMQMsgResponse() = default;
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
                     * 获取详情参数
                     * @return Properties 详情参数
                     * 
                     */
                    std::string GetProperties() const;

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     * 
                     */
                    bool PropertiesHasBeenSet() const;

                    /**
                     * 获取生产时间
                     * @return ProduceTime 生产时间
                     * 
                     */
                    std::string GetProduceTime() const;

                    /**
                     * 判断参数 ProduceTime 是否已赋值
                     * @return ProduceTime 是否已赋值
                     * 
                     */
                    bool ProduceTimeHasBeenSet() const;

                    /**
                     * 获取消息id
                     * @return MsgId 消息id
                     * 
                     */
                    std::string GetMsgId() const;

                    /**
                     * 判断参数 MsgId 是否已赋值
                     * @return MsgId 是否已赋值
                     * 
                     */
                    bool MsgIdHasBeenSet() const;

                    /**
                     * 获取生产者地址
                     * @return ProducerAddr 生产者地址
                     * 
                     */
                    std::string GetProducerAddr() const;

                    /**
                     * 判断参数 ProducerAddr 是否已赋值
                     * @return ProducerAddr 是否已赋值
                     * 
                     */
                    bool ProducerAddrHasBeenSet() const;

                    /**
                     * 获取消费组消费情况列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MessageTracks 消费组消费情况列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RocketMQMessageTrack> GetMessageTracks() const;

                    /**
                     * 判断参数 MessageTracks 是否已赋值
                     * @return MessageTracks 是否已赋值
                     * 
                     */
                    bool MessageTracksHasBeenSet() const;

                    /**
                     * 获取详情页展示的topic名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShowTopicName 详情页展示的topic名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetShowTopicName() const;

                    /**
                     * 判断参数 ShowTopicName 是否已赋值
                     * @return ShowTopicName 是否已赋值
                     * 
                     */
                    bool ShowTopicNameHasBeenSet() const;

                    /**
                     * 获取消费组消费情况列表总数
                     * @return MessageTracksCount 消费组消费情况列表总数
                     * 
                     */
                    int64_t GetMessageTracksCount() const;

                    /**
                     * 判断参数 MessageTracksCount 是否已赋值
                     * @return MessageTracksCount 是否已赋值
                     * 
                     */
                    bool MessageTracksCountHasBeenSet() const;

                private:

                    /**
                     * 消息体
                     */
                    std::string m_body;
                    bool m_bodyHasBeenSet;

                    /**
                     * 详情参数
                     */
                    std::string m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * 生产时间
                     */
                    std::string m_produceTime;
                    bool m_produceTimeHasBeenSet;

                    /**
                     * 消息id
                     */
                    std::string m_msgId;
                    bool m_msgIdHasBeenSet;

                    /**
                     * 生产者地址
                     */
                    std::string m_producerAddr;
                    bool m_producerAddrHasBeenSet;

                    /**
                     * 消费组消费情况列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RocketMQMessageTrack> m_messageTracks;
                    bool m_messageTracksHasBeenSet;

                    /**
                     * 详情页展示的topic名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_showTopicName;
                    bool m_showTopicNameHasBeenSet;

                    /**
                     * 消费组消费情况列表总数
                     */
                    int64_t m_messageTracksCount;
                    bool m_messageTracksCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQMSGRESPONSE_H_
