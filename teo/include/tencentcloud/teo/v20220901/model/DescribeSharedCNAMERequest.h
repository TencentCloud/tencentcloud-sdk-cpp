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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESHAREDCNAMEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESHAREDCNAMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/AdvancedFilter.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeSharedCNAME请求参数结构体
                */
                class DescribeSharedCNAMERequest : public AbstractModel
                {
                public:
                    DescribeSharedCNAMERequest();
                    ~DescribeSharedCNAMERequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取共享CNAME所属站点ID。
                     * @return ZoneId 共享CNAME所属站点ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置共享CNAME所属站点ID。
                     * @param _zoneId 共享CNAME所属站点ID。
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取过滤条件，Filters.Values的上限为20。详细的过滤条件如下：
<li>shared-cname<br>   按照【<strong>共享CNAME</strong>】进行过滤。<br>   类型：String<br>   必选：否</li>
<li>type<br>   按照【<strong>共享canme类型</strong>】进行过滤。<br>   类型：String<br>   必选：否</li>
<li>description<br>   按照【<strong>描述</strong>】进行过滤。<br>   类型：String<br>   必选：否</li>
                     * @return Filters 过滤条件，Filters.Values的上限为20。详细的过滤条件如下：
<li>shared-cname<br>   按照【<strong>共享CNAME</strong>】进行过滤。<br>   类型：String<br>   必选：否</li>
<li>type<br>   按照【<strong>共享canme类型</strong>】进行过滤。<br>   类型：String<br>   必选：否</li>
<li>description<br>   按照【<strong>描述</strong>】进行过滤。<br>   类型：String<br>   必选：否</li>
                     * 
                     */
                    std::vector<AdvancedFilter> GetFilters() const;

                    /**
                     * 设置过滤条件，Filters.Values的上限为20。详细的过滤条件如下：
<li>shared-cname<br>   按照【<strong>共享CNAME</strong>】进行过滤。<br>   类型：String<br>   必选：否</li>
<li>type<br>   按照【<strong>共享canme类型</strong>】进行过滤。<br>   类型：String<br>   必选：否</li>
<li>description<br>   按照【<strong>描述</strong>】进行过滤。<br>   类型：String<br>   必选：否</li>
                     * @param _filters 过滤条件，Filters.Values的上限为20。详细的过滤条件如下：
<li>shared-cname<br>   按照【<strong>共享CNAME</strong>】进行过滤。<br>   类型：String<br>   必选：否</li>
<li>type<br>   按照【<strong>共享canme类型</strong>】进行过滤。<br>   类型：String<br>   必选：否</li>
<li>description<br>   按照【<strong>描述</strong>】进行过滤。<br>   类型：String<br>   必选：否</li>
                     * 
                     */
                    void SetFilters(const std::vector<AdvancedFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取列表排序方式，取值有：
<li>asc：升序排列；</li>
<li>desc：降序排列。</li>默认值为asc。
                     * @return Direction 列表排序方式，取值有：
<li>asc：升序排列；</li>
<li>desc：降序排列。</li>默认值为asc。
                     * 
                     */
                    std::string GetDirection() const;

                    /**
                     * 设置列表排序方式，取值有：
<li>asc：升序排列；</li>
<li>desc：降序排列。</li>默认值为asc。
                     * @param _direction 列表排序方式，取值有：
<li>asc：升序排列；</li>
<li>desc：降序排列。</li>默认值为asc。
                     * 
                     */
                    void SetDirection(const std::string& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取匹配方式，取值有：
<li>all：返回匹配所有查询条件的共享CNAME；</li>
<li>any：返回匹配任意一个查询条件的共享CNAME。</li>默认值为all。
                     * @return Match 匹配方式，取值有：
<li>all：返回匹配所有查询条件的共享CNAME；</li>
<li>any：返回匹配任意一个查询条件的共享CNAME。</li>默认值为all。
                     * 
                     */
                    std::string GetMatch() const;

                    /**
                     * 设置匹配方式，取值有：
<li>all：返回匹配所有查询条件的共享CNAME；</li>
<li>any：返回匹配任意一个查询条件的共享CNAME。</li>默认值为all。
                     * @param _match 匹配方式，取值有：
<li>all：返回匹配所有查询条件的共享CNAME；</li>
<li>any：返回匹配任意一个查询条件的共享CNAME。</li>默认值为all。
                     * 
                     */
                    void SetMatch(const std::string& _match);

                    /**
                     * 判断参数 Match 是否已赋值
                     * @return Match 是否已赋值
                     * 
                     */
                    bool MatchHasBeenSet() const;

                    /**
                     * 获取排序依据，取值有：
<li>create-time：创建时间；</li>
<li>shared-cname：共享CNAME；</li>默认根据shared-cname属性排序。
                     * @return Order 排序依据，取值有：
<li>create-time：创建时间；</li>
<li>shared-cname：共享CNAME；</li>默认根据shared-cname属性排序。
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序依据，取值有：
<li>create-time：创建时间；</li>
<li>shared-cname：共享CNAME；</li>默认根据shared-cname属性排序。
                     * @param _order 排序依据，取值有：
<li>create-time：创建时间；</li>
<li>shared-cname：共享CNAME；</li>默认根据shared-cname属性排序。
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取分页查询偏移量，默认为 0。
                     * @return Offset 分页查询偏移量，默认为 0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页查询偏移量，默认为 0。
                     * @param _offset 分页查询偏移量，默认为 0。
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
                     * 获取分页查询限制数目，默认值：20，上限：200。
                     * @return Limit 分页查询限制数目，默认值：20，上限：200。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页查询限制数目，默认值：20，上限：200。
                     * @param _limit 分页查询限制数目，默认值：20，上限：200。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 共享CNAME所属站点ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 过滤条件，Filters.Values的上限为20。详细的过滤条件如下：
<li>shared-cname<br>   按照【<strong>共享CNAME</strong>】进行过滤。<br>   类型：String<br>   必选：否</li>
<li>type<br>   按照【<strong>共享canme类型</strong>】进行过滤。<br>   类型：String<br>   必选：否</li>
<li>description<br>   按照【<strong>描述</strong>】进行过滤。<br>   类型：String<br>   必选：否</li>
                     */
                    std::vector<AdvancedFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 列表排序方式，取值有：
<li>asc：升序排列；</li>
<li>desc：降序排列。</li>默认值为asc。
                     */
                    std::string m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * 匹配方式，取值有：
<li>all：返回匹配所有查询条件的共享CNAME；</li>
<li>any：返回匹配任意一个查询条件的共享CNAME。</li>默认值为all。
                     */
                    std::string m_match;
                    bool m_matchHasBeenSet;

                    /**
                     * 排序依据，取值有：
<li>create-time：创建时间；</li>
<li>shared-cname：共享CNAME；</li>默认根据shared-cname属性排序。
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 分页查询偏移量，默认为 0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页查询限制数目，默认值：20，上限：200。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESHAREDCNAMEREQUEST_H_
