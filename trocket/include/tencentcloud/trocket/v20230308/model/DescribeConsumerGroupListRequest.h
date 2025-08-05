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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBECONSUMERGROUPLISTREQUEST_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBECONSUMERGROUPLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trocket/v20230308/model/Filter.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * DescribeConsumerGroupList请求参数结构体
                */
                class DescribeConsumerGroupListRequest : public AbstractModel
                {
                public:
                    DescribeConsumerGroupListRequest();
                    ~DescribeConsumerGroupListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取腾讯云 RocketMQ 实例 ID，从 [DescribeFusionInstanceList](https://cloud.tencent.com/document/api/1493/106745) 接口或控制台获得。
                     * @return InstanceId 腾讯云 RocketMQ 实例 ID，从 [DescribeFusionInstanceList](https://cloud.tencent.com/document/api/1493/106745) 接口或控制台获得。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置腾讯云 RocketMQ 实例 ID，从 [DescribeFusionInstanceList](https://cloud.tencent.com/document/api/1493/106745) 接口或控制台获得。
                     * @param _instanceId 腾讯云 RocketMQ 实例 ID，从 [DescribeFusionInstanceList](https://cloud.tencent.com/document/api/1493/106745) 接口或控制台获得。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取过滤查询条件列表，请在引用此参数的API说明中了解使用方法。
                     * @return Filters 过滤查询条件列表，请在引用此参数的API说明中了解使用方法。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤查询条件列表，请在引用此参数的API说明中了解使用方法。
                     * @param _filters 过滤查询条件列表，请在引用此参数的API说明中了解使用方法。
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
                     * 获取查询起始位置，默认为0。
                     * @return Offset 查询起始位置，默认为0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置查询起始位置，默认为0。
                     * @param _offset 查询起始位置，默认为0。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取查询结果限制数量，默认20。
                     * @return Limit 查询结果限制数量，默认20。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置查询结果限制数量，默认20。
                     * @param _limit 查询结果限制数量，默认20。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取查询指定主题下的消费组
                     * @return FromTopic 查询指定主题下的消费组
                     * 
                     */
                    std::string GetFromTopic() const;

                    /**
                     * 设置查询指定主题下的消费组
                     * @param _fromTopic 查询指定主题下的消费组
                     * 
                     */
                    void SetFromTopic(const std::string& _fromTopic);

                    /**
                     * 判断参数 FromTopic 是否已赋值
                     * @return FromTopic 是否已赋值
                     * 
                     */
                    bool FromTopicHasBeenSet() const;

                    /**
                     * 获取按照指定字段排序，枚举值如下：
- subscribeNum：订阅 Topic 个数
                     * @return SortedBy 按照指定字段排序，枚举值如下：
- subscribeNum：订阅 Topic 个数
                     * 
                     */
                    std::string GetSortedBy() const;

                    /**
                     * 设置按照指定字段排序，枚举值如下：
- subscribeNum：订阅 Topic 个数
                     * @param _sortedBy 按照指定字段排序，枚举值如下：
- subscribeNum：订阅 Topic 个数
                     * 
                     */
                    void SetSortedBy(const std::string& _sortedBy);

                    /**
                     * 判断参数 SortedBy 是否已赋值
                     * @return SortedBy 是否已赋值
                     * 
                     */
                    bool SortedByHasBeenSet() const;

                    /**
                     * 获取按升序或降序排列，枚举值如下：

- asc：升序
- desc：降序
                     * @return SortOrder 按升序或降序排列，枚举值如下：

- asc：升序
- desc：降序
                     * 
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置按升序或降序排列，枚举值如下：

- asc：升序
- desc：降序
                     * @param _sortOrder 按升序或降序排列，枚举值如下：

- asc：升序
- desc：降序
                     * 
                     */
                    void SetSortOrder(const std::string& _sortOrder);

                    /**
                     * 判断参数 SortOrder 是否已赋值
                     * @return SortOrder 是否已赋值
                     * 
                     */
                    bool SortOrderHasBeenSet() const;

                private:

                    /**
                     * 腾讯云 RocketMQ 实例 ID，从 [DescribeFusionInstanceList](https://cloud.tencent.com/document/api/1493/106745) 接口或控制台获得。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 过滤查询条件列表，请在引用此参数的API说明中了解使用方法。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 查询起始位置，默认为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 查询结果限制数量，默认20。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 查询指定主题下的消费组
                     */
                    std::string m_fromTopic;
                    bool m_fromTopicHasBeenSet;

                    /**
                     * 按照指定字段排序，枚举值如下：
- subscribeNum：订阅 Topic 个数
                     */
                    std::string m_sortedBy;
                    bool m_sortedByHasBeenSet;

                    /**
                     * 按升序或降序排列，枚举值如下：

- asc：升序
- desc：降序
                     */
                    std::string m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBECONSUMERGROUPLISTREQUEST_H_
