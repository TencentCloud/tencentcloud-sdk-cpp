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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBETOPICSREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBETOPICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/FilterCls.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeTopics请求参数结构体
                */
                class DescribeTopicsRequest : public AbstractModel
                {
                public:
                    DescribeTopicsRequest();
                    ~DescribeTopicsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<ul><li>topicName 按照【日志主题名称】进行过滤，默认为模糊匹配，Filter.Values 当要查询访问日志时为access，查询攻击日志时为attack</li></ul>注意：每次请求的 Filters 的上限为10，Filter.Values 的上限为100。
                     * @return Filters <ul><li>topicName 按照【日志主题名称】进行过滤，默认为模糊匹配，Filter.Values 当要查询访问日志时为access，查询攻击日志时为attack</li></ul>注意：每次请求的 Filters 的上限为10，Filter.Values 的上限为100。
                     * 
                     */
                    std::vector<FilterCls> GetFilters() const;

                    /**
                     * 设置<ul><li>topicName 按照【日志主题名称】进行过滤，默认为模糊匹配，Filter.Values 当要查询访问日志时为access，查询攻击日志时为attack</li></ul>注意：每次请求的 Filters 的上限为10，Filter.Values 的上限为100。
                     * @param _filters <ul><li>topicName 按照【日志主题名称】进行过滤，默认为模糊匹配，Filter.Values 当要查询访问日志时为access，查询攻击日志时为attack</li></ul>注意：每次请求的 Filters 的上限为10，Filter.Values 的上限为100。
                     * 
                     */
                    void SetFilters(const std::vector<FilterCls>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取分页的偏移量，默认值为0。
                     * @return Offset 分页的偏移量，默认值为0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页的偏移量，默认值为0。
                     * @param _offset 分页的偏移量，默认值为0。
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
                     * 获取分页单页限制数目，默认值为20，最大值100。
                     * @return Limit 分页单页限制数目，默认值为20，最大值100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页单页限制数目，默认值为20，最大值100。
                     * @param _limit 分页单页限制数目，默认值为20，最大值100。
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
                     * 获取控制Filters相关字段是否为精确匹配。
<ul><li>0: 默认值，topicName 和 logsetName 模糊匹配</li>
<li>1: topicName   精确匹配</li>
<li>2: logsetName精确匹配</li>
<li>3: topicName 和logsetName 都精确匹配</li></ul>
                     * @return PreciseSearch 控制Filters相关字段是否为精确匹配。
<ul><li>0: 默认值，topicName 和 logsetName 模糊匹配</li>
<li>1: topicName   精确匹配</li>
<li>2: logsetName精确匹配</li>
<li>3: topicName 和logsetName 都精确匹配</li></ul>
                     * 
                     */
                    uint64_t GetPreciseSearch() const;

                    /**
                     * 设置控制Filters相关字段是否为精确匹配。
<ul><li>0: 默认值，topicName 和 logsetName 模糊匹配</li>
<li>1: topicName   精确匹配</li>
<li>2: logsetName精确匹配</li>
<li>3: topicName 和logsetName 都精确匹配</li></ul>
                     * @param _preciseSearch 控制Filters相关字段是否为精确匹配。
<ul><li>0: 默认值，topicName 和 logsetName 模糊匹配</li>
<li>1: topicName   精确匹配</li>
<li>2: logsetName精确匹配</li>
<li>3: topicName 和logsetName 都精确匹配</li></ul>
                     * 
                     */
                    void SetPreciseSearch(const uint64_t& _preciseSearch);

                    /**
                     * 判断参数 PreciseSearch 是否已赋值
                     * @return PreciseSearch 是否已赋值
                     * 
                     */
                    bool PreciseSearchHasBeenSet() const;

                    /**
                     * 获取主题类型
<ul><li>0:日志主题，默认值</li>
<li>1:指标主题</li></ul>
                     * @return BizType 主题类型
<ul><li>0:日志主题，默认值</li>
<li>1:指标主题</li></ul>
                     * 
                     */
                    uint64_t GetBizType() const;

                    /**
                     * 设置主题类型
<ul><li>0:日志主题，默认值</li>
<li>1:指标主题</li></ul>
                     * @param _bizType 主题类型
<ul><li>0:日志主题，默认值</li>
<li>1:指标主题</li></ul>
                     * 
                     */
                    void SetBizType(const uint64_t& _bizType);

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     * 
                     */
                    bool BizTypeHasBeenSet() const;

                private:

                    /**
                     * <ul><li>topicName 按照【日志主题名称】进行过滤，默认为模糊匹配，Filter.Values 当要查询访问日志时为access，查询攻击日志时为attack</li></ul>注意：每次请求的 Filters 的上限为10，Filter.Values 的上限为100。
                     */
                    std::vector<FilterCls> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 分页的偏移量，默认值为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页单页限制数目，默认值为20，最大值100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 控制Filters相关字段是否为精确匹配。
<ul><li>0: 默认值，topicName 和 logsetName 模糊匹配</li>
<li>1: topicName   精确匹配</li>
<li>2: logsetName精确匹配</li>
<li>3: topicName 和logsetName 都精确匹配</li></ul>
                     */
                    uint64_t m_preciseSearch;
                    bool m_preciseSearchHasBeenSet;

                    /**
                     * 主题类型
<ul><li>0:日志主题，默认值</li>
<li>1:指标主题</li></ul>
                     */
                    uint64_t m_bizType;
                    bool m_bizTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBETOPICSREQUEST_H_
