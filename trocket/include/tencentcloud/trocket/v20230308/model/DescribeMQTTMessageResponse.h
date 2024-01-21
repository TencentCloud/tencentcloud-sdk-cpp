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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEMQTTMESSAGERESPONSE_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEMQTTMESSAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trocket/v20230308/model/CustomMapEntry.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * DescribeMQTTMessage返回参数结构体
                */
                class DescribeMQTTMessageResponse : public AbstractModel
                {
                public:
                    DescribeMQTTMessageResponse();
                    ~DescribeMQTTMessageResponse() = default;
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
                    std::vector<CustomMapEntry> GetProperties() const;

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
                     * 获取消息ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MessageId 消息ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取Topic
                     * @return ShowTopicName Topic
                     * 
                     */
                    std::string GetShowTopicName() const;

                    /**
                     * 判断参数 ShowTopicName 是否已赋值
                     * @return ShowTopicName 是否已赋值
                     * 
                     */
                    bool ShowTopicNameHasBeenSet() const;

                private:

                    /**
                     * 消息体
                     */
                    std::string m_body;
                    bool m_bodyHasBeenSet;

                    /**
                     * 详情参数
                     */
                    std::vector<CustomMapEntry> m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * 生产时间
                     */
                    std::string m_produceTime;
                    bool m_produceTimeHasBeenSet;

                    /**
                     * 消息ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_messageId;
                    bool m_messageIdHasBeenSet;

                    /**
                     * 生产者地址
                     */
                    std::string m_producerAddr;
                    bool m_producerAddrHasBeenSet;

                    /**
                     * Topic
                     */
                    std::string m_showTopicName;
                    bool m_showTopicNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEMQTTMESSAGERESPONSE_H_
