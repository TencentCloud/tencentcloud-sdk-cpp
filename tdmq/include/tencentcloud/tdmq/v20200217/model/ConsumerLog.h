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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CONSUMERLOG_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CONSUMERLOG_H_

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
                * 消费日志
                */
                class ConsumerLog : public AbstractModel
                {
                public:
                    ConsumerLog();
                    ~ConsumerLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取消息ID。
                     * @return MsgId 消息ID。
                     * 
                     */
                    std::string GetMsgId() const;

                    /**
                     * 设置消息ID。
                     * @param _msgId 消息ID。
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
                     * 获取消费组。
                     * @return ConsumerGroup 消费组。
                     * 
                     */
                    std::string GetConsumerGroup() const;

                    /**
                     * 设置消费组。
                     * @param _consumerGroup 消费组。
                     * 
                     */
                    void SetConsumerGroup(const std::string& _consumerGroup);

                    /**
                     * 判断参数 ConsumerGroup 是否已赋值
                     * @return ConsumerGroup 是否已赋值
                     * 
                     */
                    bool ConsumerGroupHasBeenSet() const;

                    /**
                     * 获取消费者名称。
                     * @return ConsumerName 消费者名称。
                     * 
                     */
                    std::string GetConsumerName() const;

                    /**
                     * 设置消费者名称。
                     * @param _consumerName 消费者名称。
                     * 
                     */
                    void SetConsumerName(const std::string& _consumerName);

                    /**
                     * 判断参数 ConsumerName 是否已赋值
                     * @return ConsumerName 是否已赋值
                     * 
                     */
                    bool ConsumerNameHasBeenSet() const;

                    /**
                     * 获取消费时间。
                     * @return ConsumeTime 消费时间。
                     * 
                     */
                    std::string GetConsumeTime() const;

                    /**
                     * 设置消费时间。
                     * @param _consumeTime 消费时间。
                     * 
                     */
                    void SetConsumeTime(const std::string& _consumeTime);

                    /**
                     * 判断参数 ConsumeTime 是否已赋值
                     * @return ConsumeTime 是否已赋值
                     * 
                     */
                    bool ConsumeTimeHasBeenSet() const;

                    /**
                     * 获取消费者客户端地址。
                     * @return ConsumerAddr 消费者客户端地址。
                     * 
                     */
                    std::string GetConsumerAddr() const;

                    /**
                     * 设置消费者客户端地址。
                     * @param _consumerAddr 消费者客户端地址。
                     * 
                     */
                    void SetConsumerAddr(const std::string& _consumerAddr);

                    /**
                     * 判断参数 ConsumerAddr 是否已赋值
                     * @return ConsumerAddr 是否已赋值
                     * 
                     */
                    bool ConsumerAddrHasBeenSet() const;

                    /**
                     * 获取消费耗时（毫秒）。
                     * @return ConsumeUseTime 消费耗时（毫秒）。
                     * 
                     */
                    uint64_t GetConsumeUseTime() const;

                    /**
                     * 设置消费耗时（毫秒）。
                     * @param _consumeUseTime 消费耗时（毫秒）。
                     * 
                     */
                    void SetConsumeUseTime(const uint64_t& _consumeUseTime);

                    /**
                     * 判断参数 ConsumeUseTime 是否已赋值
                     * @return ConsumeUseTime 是否已赋值
                     * 
                     */
                    bool ConsumeUseTimeHasBeenSet() const;

                    /**
                     * 获取消费状态。
                     * @return Status 消费状态。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置消费状态。
                     * @param _status 消费状态。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 消息ID。
                     */
                    std::string m_msgId;
                    bool m_msgIdHasBeenSet;

                    /**
                     * 消费组。
                     */
                    std::string m_consumerGroup;
                    bool m_consumerGroupHasBeenSet;

                    /**
                     * 消费者名称。
                     */
                    std::string m_consumerName;
                    bool m_consumerNameHasBeenSet;

                    /**
                     * 消费时间。
                     */
                    std::string m_consumeTime;
                    bool m_consumeTimeHasBeenSet;

                    /**
                     * 消费者客户端地址。
                     */
                    std::string m_consumerAddr;
                    bool m_consumerAddrHasBeenSet;

                    /**
                     * 消费耗时（毫秒）。
                     */
                    uint64_t m_consumeUseTime;
                    bool m_consumeUseTimeHasBeenSet;

                    /**
                     * 消费状态。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CONSUMERLOG_H_
