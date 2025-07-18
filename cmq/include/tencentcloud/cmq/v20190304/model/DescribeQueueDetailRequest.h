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

#ifndef TENCENTCLOUD_CMQ_V20190304_MODEL_DESCRIBEQUEUEDETAILREQUEST_H_
#define TENCENTCLOUD_CMQ_V20190304_MODEL_DESCRIBEQUEUEDETAILREQUEST_H_

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
                * DescribeQueueDetail请求参数结构体
                */
                class DescribeQueueDetailRequest : public AbstractModel
                {
                public:
                    DescribeQueueDetailRequest();
                    ~DescribeQueueDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取标签搜索
                     * @return TagKey 标签搜索
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置标签搜索
                     * @param _tagKey 标签搜索
                     * 
                     */
                    void SetTagKey(const std::string& _tagKey);

                    /**
                     * 判断参数 TagKey 是否已赋值
                     * @return TagKey 是否已赋值
                     * 
                     */
                    bool TagKeyHasBeenSet() const;

                    /**
                     * 获取分页时本页获取队列的个数，如果不传递该参数，则该参数默认为20，最大值为50。
                     * @return Limit 分页时本页获取队列的个数，如果不传递该参数，则该参数默认为20，最大值为50。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页时本页获取队列的个数，如果不传递该参数，则该参数默认为20，最大值为50。
                     * @param _limit 分页时本页获取队列的个数，如果不传递该参数，则该参数默认为20，最大值为50。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取精确匹配QueueName
                     * @return QueueName 精确匹配QueueName
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置精确匹配QueueName
                     * @param _queueName 精确匹配QueueName
                     * 
                     */
                    void SetQueueName(const std::string& _queueName);

                    /**
                     * 判断参数 QueueName 是否已赋值
                     * @return QueueName 是否已赋值
                     * 
                     */
                    bool QueueNameHasBeenSet() const;

                    /**
                     * 获取筛选参数，目前支持QueueName筛选，且仅支持一个关键字
                     * @return Filters 筛选参数，目前支持QueueName筛选，且仅支持一个关键字
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置筛选参数，目前支持QueueName筛选，且仅支持一个关键字
                     * @param _filters 筛选参数，目前支持QueueName筛选，且仅支持一个关键字
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取分页时本页获取队列列表的起始位置。如果填写了该值，必须也要填写 limit 。该值缺省时，后台取默认值 0
                     * @return Offset 分页时本页获取队列列表的起始位置。如果填写了该值，必须也要填写 limit 。该值缺省时，后台取默认值 0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页时本页获取队列列表的起始位置。如果填写了该值，必须也要填写 limit 。该值缺省时，后台取默认值 0
                     * @param _offset 分页时本页获取队列列表的起始位置。如果填写了该值，必须也要填写 limit 。该值缺省时，后台取默认值 0
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 标签搜索
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * 分页时本页获取队列的个数，如果不传递该参数，则该参数默认为20，最大值为50。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 精确匹配QueueName
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * 筛选参数，目前支持QueueName筛选，且仅支持一个关键字
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 分页时本页获取队列列表的起始位置。如果填写了该值，必须也要填写 limit 。该值缺省时，后台取默认值 0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMQ_V20190304_MODEL_DESCRIBEQUEUEDETAILREQUEST_H_
