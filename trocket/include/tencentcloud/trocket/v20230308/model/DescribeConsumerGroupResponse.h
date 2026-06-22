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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBECONSUMERGROUPRESPONSE_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBECONSUMERGROUPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trocket/v20230308/model/RetryPolicy.h>


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
                     * 获取<p>在线消费者数量</p>
                     * @return ConsumerNum <p>在线消费者数量</p>
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
                     * 获取<p>TPS</p>
                     * @return Tps <p>TPS</p>
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
                     * 获取<p>消息堆积数量</p>
                     * @return ConsumerLag <p>消息堆积数量</p>
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
                     * 获取<p>消费类型，枚举值如下：</p><ul><li>PULL：PULL 消费类型</li><li>PUSH：PUSH 消费类型</li><li>POP：POP 消费类型</li></ul>
                     * @return ConsumeType <p>消费类型，枚举值如下：</p><ul><li>PULL：PULL 消费类型</li><li>PUSH：PUSH 消费类型</li><li>POP：POP 消费类型</li></ul>
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
                     * 获取<p>创建时间，<strong>Unix时间戳（毫秒）</strong></p>
                     * @return CreatedTime <p>创建时间，<strong>Unix时间戳（毫秒）</strong></p>
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
                     * 获取<p>顺序投递：true<br>并发投递：false</p>
                     * @return ConsumeMessageOrderly <p>顺序投递：true<br>并发投递：false</p>
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
                     * 获取<p>是否开启消费</p>
                     * @return ConsumeEnable <p>是否开启消费</p>
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
                     * 获取<p>最大重试次数</p>
                     * @return MaxRetryTimes <p>最大重试次数</p>
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
                     * 获取<p>备注</p>
                     * @return Remark <p>备注</p>
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
                     * 获取<p>消费模式：<br>BROADCASTING 广播模式<br>CLUSTERING 集群模式</p>
                     * @return MessageModel <p>消费模式：<br>BROADCASTING 广播模式<br>CLUSTERING 集群模式</p>
                     * 
                     */
                    std::string GetMessageModel() const;

                    /**
                     * 判断参数 MessageModel 是否已赋值
                     * @return MessageModel 是否已赋值
                     * 
                     */
                    bool MessageModelHasBeenSet() const;

                    /**
                     * 获取<p>重试策略</p>
                     * @return RetryPolicy <p>重试策略</p>
                     * 
                     */
                    RetryPolicy GetRetryPolicy() const;

                    /**
                     * 判断参数 RetryPolicy 是否已赋值
                     * @return RetryPolicy 是否已赋值
                     * 
                     */
                    bool RetryPolicyHasBeenSet() const;

                    /**
                     * 获取<p>消费模式</p><p>枚举值：</p><ul><li>CLUSTERING： 集群/广播消费</li><li>LITE： LiteTopic消费</li></ul><p>默认值：CLUSTERING</p>
                     * @return ConsumeModel <p>消费模式</p><p>枚举值：</p><ul><li>CLUSTERING： 集群/广播消费</li><li>LITE： LiteTopic消费</li></ul><p>默认值：CLUSTERING</p>
                     * 
                     */
                    std::string GetConsumeModel() const;

                    /**
                     * 判断参数 ConsumeModel 是否已赋值
                     * @return ConsumeModel 是否已赋值
                     * 
                     */
                    bool ConsumeModelHasBeenSet() const;

                    /**
                     * 获取<p>订阅的轻量主题（仅适用于轻量消费模式）</p>
                     * @return LiteTopic <p>订阅的轻量主题（仅适用于轻量消费模式）</p>
                     * 
                     */
                    std::string GetLiteTopic() const;

                    /**
                     * 判断参数 LiteTopic 是否已赋值
                     * @return LiteTopic 是否已赋值
                     * 
                     */
                    bool LiteTopicHasBeenSet() const;

                private:

                    /**
                     * <p>在线消费者数量</p>
                     */
                    int64_t m_consumerNum;
                    bool m_consumerNumHasBeenSet;

                    /**
                     * <p>TPS</p>
                     */
                    int64_t m_tps;
                    bool m_tpsHasBeenSet;

                    /**
                     * <p>消息堆积数量</p>
                     */
                    int64_t m_consumerLag;
                    bool m_consumerLagHasBeenSet;

                    /**
                     * <p>消费类型，枚举值如下：</p><ul><li>PULL：PULL 消费类型</li><li>PUSH：PUSH 消费类型</li><li>POP：POP 消费类型</li></ul>
                     */
                    std::string m_consumeType;
                    bool m_consumeTypeHasBeenSet;

                    /**
                     * <p>创建时间，<strong>Unix时间戳（毫秒）</strong></p>
                     */
                    int64_t m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>顺序投递：true<br>并发投递：false</p>
                     */
                    bool m_consumeMessageOrderly;
                    bool m_consumeMessageOrderlyHasBeenSet;

                    /**
                     * <p>是否开启消费</p>
                     */
                    bool m_consumeEnable;
                    bool m_consumeEnableHasBeenSet;

                    /**
                     * <p>最大重试次数</p>
                     */
                    int64_t m_maxRetryTimes;
                    bool m_maxRetryTimesHasBeenSet;

                    /**
                     * <p>备注</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>消费模式：<br>BROADCASTING 广播模式<br>CLUSTERING 集群模式</p>
                     */
                    std::string m_messageModel;
                    bool m_messageModelHasBeenSet;

                    /**
                     * <p>重试策略</p>
                     */
                    RetryPolicy m_retryPolicy;
                    bool m_retryPolicyHasBeenSet;

                    /**
                     * <p>消费模式</p><p>枚举值：</p><ul><li>CLUSTERING： 集群/广播消费</li><li>LITE： LiteTopic消费</li></ul><p>默认值：CLUSTERING</p>
                     */
                    std::string m_consumeModel;
                    bool m_consumeModelHasBeenSet;

                    /**
                     * <p>订阅的轻量主题（仅适用于轻量消费模式）</p>
                     */
                    std::string m_liteTopic;
                    bool m_liteTopicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBECONSUMERGROUPRESPONSE_H_
