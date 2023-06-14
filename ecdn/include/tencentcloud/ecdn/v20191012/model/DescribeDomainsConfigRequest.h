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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_DESCRIBEDOMAINSCONFIGREQUEST_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_DESCRIBEDOMAINSCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecdn/v20191012/model/DomainFilter.h>
#include <tencentcloud/ecdn/v20191012/model/Sort.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
        {
            namespace Model
            {
                /**
                * DescribeDomainsConfig请求参数结构体
                */
                class DescribeDomainsConfigRequest : public AbstractModel
                {
                public:
                    DescribeDomainsConfigRequest();
                    ~DescribeDomainsConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页查询的偏移地址，默认0。
                     * @return Offset 分页查询的偏移地址，默认0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页查询的偏移地址，默认0。
                     * @param _offset 分页查询的偏移地址，默认0。
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
                     * 获取分页查询的域名个数，默认100。
                     * @return Limit 分页查询的域名个数，默认100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页查询的域名个数，默认100。
                     * @param _limit 分页查询的域名个数，默认100。
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
                     * 获取查询条件过滤器。
                     * @return Filters 查询条件过滤器。
                     * 
                     */
                    std::vector<DomainFilter> GetFilters() const;

                    /**
                     * 设置查询条件过滤器。
                     * @param _filters 查询条件过滤器。
                     * 
                     */
                    void SetFilters(const std::vector<DomainFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取查询结果排序规则。
                     * @return Sort 查询结果排序规则。
                     * 
                     */
                    Sort GetSort() const;

                    /**
                     * 设置查询结果排序规则。
                     * @param _sort 查询结果排序规则。
                     * 
                     */
                    void SetSort(const Sort& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                private:

                    /**
                     * 分页查询的偏移地址，默认0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页查询的域名个数，默认100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 查询条件过滤器。
                     */
                    std::vector<DomainFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 查询结果排序规则。
                     */
                    Sort m_sort;
                    bool m_sortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_DESCRIBEDOMAINSCONFIGREQUEST_H_
