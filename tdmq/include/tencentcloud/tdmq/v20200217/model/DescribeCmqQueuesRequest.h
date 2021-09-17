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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBECMQQUEUESREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBECMQQUEUESREQUEST_H_

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
                * DescribeCmqQueues请求参数结构体
                */
                class DescribeCmqQueuesRequest : public AbstractModel
                {
                public:
                    DescribeCmqQueuesRequest();
                    ~DescribeCmqQueuesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页时本页获取队列列表的起始位置。如果填写了该值，必须也要填写 limit 。该值缺省时，后台取默认值 0
                     * @return Offset 分页时本页获取队列列表的起始位置。如果填写了该值，必须也要填写 limit 。该值缺省时，后台取默认值 0
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页时本页获取队列列表的起始位置。如果填写了该值，必须也要填写 limit 。该值缺省时，后台取默认值 0
                     * @param Offset 分页时本页获取队列列表的起始位置。如果填写了该值，必须也要填写 limit 。该值缺省时，后台取默认值 0
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页时本页获取队列的个数，如果不传递该参数，则该参数默认为20，最大值为50。
                     * @return Limit 分页时本页获取队列的个数，如果不传递该参数，则该参数默认为20，最大值为50。
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页时本页获取队列的个数，如果不传递该参数，则该参数默认为20，最大值为50。
                     * @param Limit 分页时本页获取队列的个数，如果不传递该参数，则该参数默认为20，最大值为50。
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取根据QueueName进行过滤
                     * @return QueueName 根据QueueName进行过滤
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置根据QueueName进行过滤
                     * @param QueueName 根据QueueName进行过滤
                     */
                    void SetQueueName(const std::string& _queueName);

                    /**
                     * 判断参数 QueueName 是否已赋值
                     * @return QueueName 是否已赋值
                     */
                    bool QueueNameHasBeenSet() const;

                    /**
                     * 获取CMQ 队列名称列表过滤
                     * @return QueueNameList CMQ 队列名称列表过滤
                     */
                    std::vector<std::string> GetQueueNameList() const;

                    /**
                     * 设置CMQ 队列名称列表过滤
                     * @param QueueNameList CMQ 队列名称列表过滤
                     */
                    void SetQueueNameList(const std::vector<std::string>& _queueNameList);

                    /**
                     * 判断参数 QueueNameList 是否已赋值
                     * @return QueueNameList 是否已赋值
                     */
                    bool QueueNameListHasBeenSet() const;

                    /**
                     * 获取标签过滤查找时，需要设置为 true
                     * @return IsTagFilter 标签过滤查找时，需要设置为 true
                     */
                    bool GetIsTagFilter() const;

                    /**
                     * 设置标签过滤查找时，需要设置为 true
                     * @param IsTagFilter 标签过滤查找时，需要设置为 true
                     */
                    void SetIsTagFilter(const bool& _isTagFilter);

                    /**
                     * 判断参数 IsTagFilter 是否已赋值
                     * @return IsTagFilter 是否已赋值
                     */
                    bool IsTagFilterHasBeenSet() const;

                private:

                    /**
                     * 分页时本页获取队列列表的起始位置。如果填写了该值，必须也要填写 limit 。该值缺省时，后台取默认值 0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页时本页获取队列的个数，如果不传递该参数，则该参数默认为20，最大值为50。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 根据QueueName进行过滤
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * CMQ 队列名称列表过滤
                     */
                    std::vector<std::string> m_queueNameList;
                    bool m_queueNameListHasBeenSet;

                    /**
                     * 标签过滤查找时，需要设置为 true
                     */
                    bool m_isTagFilter;
                    bool m_isTagFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBECMQQUEUESREQUEST_H_
