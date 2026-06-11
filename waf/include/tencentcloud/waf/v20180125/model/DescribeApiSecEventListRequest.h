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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEAPISECEVENTLISTREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEAPISECEVENTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/ApiDataFilter.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeApiSecEventList请求参数结构体
                */
                class DescribeApiSecEventListRequest : public AbstractModel
                {
                public:
                    DescribeApiSecEventListRequest();
                    ~DescribeApiSecEventListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取是否查询数量，默认不查询，为true则进行查询
                     * @return NeedTotalCount 是否查询数量，默认不查询，为true则进行查询
                     * 
                     */
                    bool GetNeedTotalCount() const;

                    /**
                     * 设置是否查询数量，默认不查询，为true则进行查询
                     * @param _needTotalCount 是否查询数量，默认不查询，为true则进行查询
                     * 
                     */
                    void SetNeedTotalCount(const bool& _needTotalCount);

                    /**
                     * 判断参数 NeedTotalCount 是否已赋值
                     * @return NeedTotalCount 是否已赋值
                     * 
                     */
                    bool NeedTotalCountHasBeenSet() const;

                    /**
                     * 获取过滤条件
                     * @return Filters 过滤条件
                     * 
                     */
                    std::vector<ApiDataFilter> GetFilters() const;

                    /**
                     * 设置过滤条件
                     * @param _filters 过滤条件
                     * 
                     */
                    void SetFilters(const std::vector<ApiDataFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取查询当前的页
                     * @return PageIndex 查询当前的页
                     * 
                     */
                    uint64_t GetPageIndex() const;

                    /**
                     * 设置查询当前的页
                     * @param _pageIndex 查询当前的页
                     * 
                     */
                    void SetPageIndex(const uint64_t& _pageIndex);

                    /**
                     * 判断参数 PageIndex 是否已赋值
                     * @return PageIndex 是否已赋值
                     * 
                     */
                    bool PageIndexHasBeenSet() const;

                    /**
                     * 获取每一页显示多少条数据
                     * @return PageSize 每一页显示多少条数据
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每一页显示多少条数据
                     * @param _pageSize 每一页显示多少条数据
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取排序，第一个元素为排序的key，第二个元素为排序规则，其中1 为升序排列，而-1 是用于降序排列
                     * @return Sort 排序，第一个元素为排序的key，第二个元素为排序规则，其中1 为升序排列，而-1 是用于降序排列
                     * 
                     */
                    std::vector<std::string> GetSort() const;

                    /**
                     * 设置排序，第一个元素为排序的key，第二个元素为排序规则，其中1 为升序排列，而-1 是用于降序排列
                     * @param _sort 排序，第一个元素为排序的key，第二个元素为排序规则，其中1 为升序排列，而-1 是用于降序排列
                     * 
                     */
                    void SetSort(const std::vector<std::string>& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取查询开始时间
                     * @return StartTs 查询开始时间
                     * 
                     */
                    uint64_t GetStartTs() const;

                    /**
                     * 设置查询开始时间
                     * @param _startTs 查询开始时间
                     * 
                     */
                    void SetStartTs(const uint64_t& _startTs);

                    /**
                     * 判断参数 StartTs 是否已赋值
                     * @return StartTs 是否已赋值
                     * 
                     */
                    bool StartTsHasBeenSet() const;

                    /**
                     * 获取查询结束时间
                     * @return EndTs 查询结束时间
                     * 
                     */
                    uint64_t GetEndTs() const;

                    /**
                     * 设置查询结束时间
                     * @param _endTs 查询结束时间
                     * 
                     */
                    void SetEndTs(const uint64_t& _endTs);

                    /**
                     * 判断参数 EndTs 是否已赋值
                     * @return EndTs 是否已赋值
                     * 
                     */
                    bool EndTsHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 是否查询数量，默认不查询，为true则进行查询
                     */
                    bool m_needTotalCount;
                    bool m_needTotalCountHasBeenSet;

                    /**
                     * 过滤条件
                     */
                    std::vector<ApiDataFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 查询当前的页
                     */
                    uint64_t m_pageIndex;
                    bool m_pageIndexHasBeenSet;

                    /**
                     * 每一页显示多少条数据
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 排序，第一个元素为排序的key，第二个元素为排序规则，其中1 为升序排列，而-1 是用于降序排列
                     */
                    std::vector<std::string> m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * 查询开始时间
                     */
                    uint64_t m_startTs;
                    bool m_startTsHasBeenSet;

                    /**
                     * 查询结束时间
                     */
                    uint64_t m_endTs;
                    bool m_endTsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEAPISECEVENTLISTREQUEST_H_
