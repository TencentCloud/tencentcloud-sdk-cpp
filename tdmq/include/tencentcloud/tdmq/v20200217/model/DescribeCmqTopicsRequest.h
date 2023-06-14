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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBECMQTOPICSREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBECMQTOPICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/Filter.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeCmqTopics请求参数结构体
                */
                class DescribeCmqTopicsRequest : public AbstractModel
                {
                public:
                    DescribeCmqTopicsRequest();
                    ~DescribeCmqTopicsRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取根据TopicName进行模糊搜索
                     * @return TopicName 根据TopicName进行模糊搜索
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置根据TopicName进行模糊搜索
                     * @param _topicName 根据TopicName进行模糊搜索
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取CMQ 主题名称列表过滤
                     * @return TopicNameList CMQ 主题名称列表过滤
                     * 
                     */
                    std::vector<std::string> GetTopicNameList() const;

                    /**
                     * 设置CMQ 主题名称列表过滤
                     * @param _topicNameList CMQ 主题名称列表过滤
                     * 
                     */
                    void SetTopicNameList(const std::vector<std::string>& _topicNameList);

                    /**
                     * 判断参数 TopicNameList 是否已赋值
                     * @return TopicNameList 是否已赋值
                     * 
                     */
                    bool TopicNameListHasBeenSet() const;

                    /**
                     * 获取标签过滤查找时，需要设置为 true
                     * @return IsTagFilter 标签过滤查找时，需要设置为 true
                     * 
                     */
                    bool GetIsTagFilter() const;

                    /**
                     * 设置标签过滤查找时，需要设置为 true
                     * @param _isTagFilter 标签过滤查找时，需要设置为 true
                     * 
                     */
                    void SetIsTagFilter(const bool& _isTagFilter);

                    /**
                     * 判断参数 IsTagFilter 是否已赋值
                     * @return IsTagFilter 是否已赋值
                     * 
                     */
                    bool IsTagFilterHasBeenSet() const;

                    /**
                     * 获取过滤器。目前支持按标签过滤，标签的Name需要加前缀“tag:”，例如：tag:负责人、tag:环境、tag:业务
                     * @return Filters 过滤器。目前支持按标签过滤，标签的Name需要加前缀“tag:”，例如：tag:负责人、tag:环境、tag:业务
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤器。目前支持按标签过滤，标签的Name需要加前缀“tag:”，例如：tag:负责人、tag:环境、tag:业务
                     * @param _filters 过滤器。目前支持按标签过滤，标签的Name需要加前缀“tag:”，例如：tag:负责人、tag:环境、tag:业务
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

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
                     * 根据TopicName进行模糊搜索
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * CMQ 主题名称列表过滤
                     */
                    std::vector<std::string> m_topicNameList;
                    bool m_topicNameListHasBeenSet;

                    /**
                     * 标签过滤查找时，需要设置为 true
                     */
                    bool m_isTagFilter;
                    bool m_isTagFilterHasBeenSet;

                    /**
                     * 过滤器。目前支持按标签过滤，标签的Name需要加前缀“tag:”，例如：tag:负责人、tag:环境、tag:业务
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBECMQTOPICSREQUEST_H_
