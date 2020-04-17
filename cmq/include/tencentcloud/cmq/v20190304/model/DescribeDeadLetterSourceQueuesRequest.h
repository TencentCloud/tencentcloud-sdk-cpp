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

#ifndef TENCENTCLOUD_CMQ_V20190304_MODEL_DESCRIBEDEADLETTERSOURCEQUEUESREQUEST_H_
#define TENCENTCLOUD_CMQ_V20190304_MODEL_DESCRIBEDEADLETTERSOURCEQUEUESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cmq/v20190304/model/Filter.h>


namespace TencentCloud
{
    namespace Cmq
    {
        namespace V20190304
        {
            namespace Model
            {
                /**
                * DescribeDeadLetterSourceQueues请求参数结构体
                */
                class DescribeDeadLetterSourceQueuesRequest : public AbstractModel
                {
                public:
                    DescribeDeadLetterSourceQueuesRequest();
                    ~DescribeDeadLetterSourceQueuesRequest() = default;
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
                     * 获取过滤死信队列源队列名称，目前仅支持SourceQueueName过滤
                     * @return Filters 过滤死信队列源队列名称，目前仅支持SourceQueueName过滤
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤死信队列源队列名称，目前仅支持SourceQueueName过滤
                     * @param Filters 过滤死信队列源队列名称，目前仅支持SourceQueueName过滤
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

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
                     * 过滤死信队列源队列名称，目前仅支持SourceQueueName过滤
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMQ_V20190304_MODEL_DESCRIBEDEADLETTERSOURCEQUEUESREQUEST_H_
