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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBECMQDEADLETTERSOURCEQUEUESREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBECMQDEADLETTERSOURCEQUEUESREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeCmqDeadLetterSourceQueues请求参数结构体
                */
                class DescribeCmqDeadLetterSourceQueuesRequest : public AbstractModel
                {
                public:
                    DescribeCmqDeadLetterSourceQueuesRequest();
                    ~DescribeCmqDeadLetterSourceQueuesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取死信队列名称
                     * @return DeadLetterQueueName 死信队列名称
                     */
                    std::string GetDeadLetterQueueName() const;

                    /**
                     * 设置死信队列名称
                     * @param DeadLetterQueueName 死信队列名称
                     */
                    void SetDeadLetterQueueName(const std::string& _deadLetterQueueName);

                    /**
                     * 判断参数 DeadLetterQueueName 是否已赋值
                     * @return DeadLetterQueueName 是否已赋值
                     */
                    bool DeadLetterQueueNameHasBeenSet() const;

                    /**
                     * 获取分页时本页获取主题列表的起始位置。如果填写了该值，必须也要填写 limit 。该值缺省时，后台取默认值 0。
                     * @return Limit 分页时本页获取主题列表的起始位置。如果填写了该值，必须也要填写 limit 。该值缺省时，后台取默认值 0。
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页时本页获取主题列表的起始位置。如果填写了该值，必须也要填写 limit 。该值缺省时，后台取默认值 0。
                     * @param Limit 分页时本页获取主题列表的起始位置。如果填写了该值，必须也要填写 limit 。该值缺省时，后台取默认值 0。
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页时本页获取主题的个数，如果不传递该参数，则该参数默认为20，最大值为50。
                     * @return Offset 分页时本页获取主题的个数，如果不传递该参数，则该参数默认为20，最大值为50。
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页时本页获取主题的个数，如果不传递该参数，则该参数默认为20，最大值为50。
                     * @param Offset 分页时本页获取主题的个数，如果不传递该参数，则该参数默认为20，最大值为50。
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取根据SourceQueueName过滤
                     * @return SourceQueueName 根据SourceQueueName过滤
                     */
                    std::string GetSourceQueueName() const;

                    /**
                     * 设置根据SourceQueueName过滤
                     * @param SourceQueueName 根据SourceQueueName过滤
                     */
                    void SetSourceQueueName(const std::string& _sourceQueueName);

                    /**
                     * 判断参数 SourceQueueName 是否已赋值
                     * @return SourceQueueName 是否已赋值
                     */
                    bool SourceQueueNameHasBeenSet() const;

                private:

                    /**
                     * 死信队列名称
                     */
                    std::string m_deadLetterQueueName;
                    bool m_deadLetterQueueNameHasBeenSet;

                    /**
                     * 分页时本页获取主题列表的起始位置。如果填写了该值，必须也要填写 limit 。该值缺省时，后台取默认值 0。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页时本页获取主题的个数，如果不传递该参数，则该参数默认为20，最大值为50。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 根据SourceQueueName过滤
                     */
                    std::string m_sourceQueueName;
                    bool m_sourceQueueNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBECMQDEADLETTERSOURCEQUEUESREQUEST_H_
