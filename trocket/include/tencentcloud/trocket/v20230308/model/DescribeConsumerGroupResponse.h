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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBECONSUMERGROUPRESPONSE_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBECONSUMERGROUPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeConsumerGroup返回参数结构体
                */
                class DescribeConsumerGroupResponse : public AbstractModel
                {
                public:
                    DescribeConsumerGroupResponse();
                    ~DescribeConsumerGroupResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取在线消费者数量
                     * @return ConsumerNum 在线消费者数量
                     * 
                     */
                    int64_t GetConsumerNum() const;

                    /**
                     * 判断参数 ConsumerNum 是否已赋值
                     * @return ConsumerNum 是否已赋值
                     * 
                     */
                    bool ConsumerNumHasBeenSet() const;

                    /**
                     * 获取TPS
                     * @return Tps TPS
                     * 
                     */
                    int64_t GetTps() const;

                    /**
                     * 判断参数 Tps 是否已赋值
                     * @return Tps 是否已赋值
                     * 
                     */
                    bool TpsHasBeenSet() const;

                    /**
                     * 获取消息堆积数量
                     * @return ConsumerLag 消息堆积数量
                     * 
                     */
                    int64_t GetConsumerLag() const;

                    /**
                     * 判断参数 ConsumerLag 是否已赋值
                     * @return ConsumerLag 是否已赋值
                     * 
                     */
                    bool ConsumerLagHasBeenSet() const;

                    /**
                     * 获取消费者类型
                     * @return ConsumeType 消费者类型
                     * 
                     */
                    std::string GetConsumeType() const;

                    /**
                     * 判断参数 ConsumeType 是否已赋值
                     * @return ConsumeType 是否已赋值
                     * 
                     */
                    bool ConsumeTypeHasBeenSet() const;

                    /**
                     * 获取创建时间，秒为单位
                     * @return CreatedTime 创建时间，秒为单位
                     * 
                     */
                    int64_t GetCreatedTime() const;

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取顺序投递：true
并发投递：false
                     * @return ConsumeMessageOrderly 顺序投递：true
并发投递：false
                     * 
                     */
                    bool GetConsumeMessageOrderly() const;

                    /**
                     * 判断参数 ConsumeMessageOrderly 是否已赋值
                     * @return ConsumeMessageOrderly 是否已赋值
                     * 
                     */
                    bool ConsumeMessageOrderlyHasBeenSet() const;

                    /**
                     * 获取是否开启消费
                     * @return ConsumeEnable 是否开启消费
                     * 
                     */
                    bool GetConsumeEnable() const;

                    /**
                     * 判断参数 ConsumeEnable 是否已赋值
                     * @return ConsumeEnable 是否已赋值
                     * 
                     */
                    bool ConsumeEnableHasBeenSet() const;

                    /**
                     * 获取最大重试次数
                     * @return MaxRetryTimes 最大重试次数
                     * 
                     */
                    int64_t GetMaxRetryTimes() const;

                    /**
                     * 判断参数 MaxRetryTimes 是否已赋值
                     * @return MaxRetryTimes 是否已赋值
                     * 
                     */
                    bool MaxRetryTimesHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取消费模式：
BROADCASTING 广播模式
CLUSTERING 集群模式
                     * @return MessageModel 消费模式：
BROADCASTING 广播模式
CLUSTERING 集群模式
                     * 
                     */
                    std::string GetMessageModel() const;

                    /**
                     * 判断参数 MessageModel 是否已赋值
                     * @return MessageModel 是否已赋值
                     * 
                     */
                    bool MessageModelHasBeenSet() const;

                private:

                    /**
                     * 在线消费者数量
                     */
                    int64_t m_consumerNum;
                    bool m_consumerNumHasBeenSet;

                    /**
                     * TPS
                     */
                    int64_t m_tps;
                    bool m_tpsHasBeenSet;

                    /**
                     * 消息堆积数量
                     */
                    int64_t m_consumerLag;
                    bool m_consumerLagHasBeenSet;

                    /**
                     * 消费者类型
                     */
                    std::string m_consumeType;
                    bool m_consumeTypeHasBeenSet;

                    /**
                     * 创建时间，秒为单位
                     */
                    int64_t m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 顺序投递：true
并发投递：false
                     */
                    bool m_consumeMessageOrderly;
                    bool m_consumeMessageOrderlyHasBeenSet;

                    /**
                     * 是否开启消费
                     */
                    bool m_consumeEnable;
                    bool m_consumeEnableHasBeenSet;

                    /**
                     * 最大重试次数
                     */
                    int64_t m_maxRetryTimes;
                    bool m_maxRetryTimesHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 消费模式：
BROADCASTING 广播模式
CLUSTERING 集群模式
                     */
                    std::string m_messageModel;
                    bool m_messageModelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBECONSUMERGROUPRESPONSE_H_
