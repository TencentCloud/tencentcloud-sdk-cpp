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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEACCELERATIONDOMAINSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEACCELERATIONDOMAINSREQUEST_H_

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
                * DescribeAccelerationDomains请求参数结构体
                */
                class DescribeAccelerationDomainsRequest : public AbstractModel
                {
                public:
                    DescribeAccelerationDomainsRequest();
                    ~DescribeAccelerationDomainsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取加速域名所属站点 ID。
                     * @return ZoneId 加速域名所属站点 ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置加速域名所属站点 ID。
                     * @param _zoneId 加速域名所属站点 ID。
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

                    /**
                     * 获取过滤条件，Filters.Values 的上限为 20。该参数不填写时，返回当前 zone-id 下所有域名信息。详细的过滤条件如下：
<li>domain-name：按照加速域名进行过滤；</li>
<li>origin-type：按照源站类型进行过滤；</li>
<li>origin：按照主源站地址进行过滤；</li>
<li>backup-origin： 按照备用源站地址进行过滤；</li>
<li>domain-cname：按照 CNAME 进行过滤；</li>
<li>share-cname：按照共享 CNAME 进行过滤；</li>
                     * @return Filters 过滤条件，Filters.Values 的上限为 20。该参数不填写时，返回当前 zone-id 下所有域名信息。详细的过滤条件如下：
<li>domain-name：按照加速域名进行过滤；</li>
<li>origin-type：按照源站类型进行过滤；</li>
<li>origin：按照主源站地址进行过滤；</li>
<li>backup-origin： 按照备用源站地址进行过滤；</li>
<li>domain-cname：按照 CNAME 进行过滤；</li>
<li>share-cname：按照共享 CNAME 进行过滤；</li>
                     * 
                     */
                    std::vector<AdvancedFilter> GetFilters() const;

                    /**
                     * 设置过滤条件，Filters.Values 的上限为 20。该参数不填写时，返回当前 zone-id 下所有域名信息。详细的过滤条件如下：
<li>domain-name：按照加速域名进行过滤；</li>
<li>origin-type：按照源站类型进行过滤；</li>
<li>origin：按照主源站地址进行过滤；</li>
<li>backup-origin： 按照备用源站地址进行过滤；</li>
<li>domain-cname：按照 CNAME 进行过滤；</li>
<li>share-cname：按照共享 CNAME 进行过滤；</li>
                     * @param _filters 过滤条件，Filters.Values 的上限为 20。该参数不填写时，返回当前 zone-id 下所有域名信息。详细的过滤条件如下：
<li>domain-name：按照加速域名进行过滤；</li>
<li>origin-type：按照源站类型进行过滤；</li>
<li>origin：按照主源站地址进行过滤；</li>
<li>backup-origin： 按照备用源站地址进行过滤；</li>
<li>domain-cname：按照 CNAME 进行过滤；</li>
<li>share-cname：按照共享 CNAME 进行过滤；</li>
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
                     * 获取可根据该字段对返回结果进行排序，取值有：
<li>created_on：加速域名创建时间；</li>
<li>domain-name：加速域名。</li>不填写时，默认对返回结果按照 domain-name 排序。
                     * @return Order 可根据该字段对返回结果进行排序，取值有：
<li>created_on：加速域名创建时间；</li>
<li>domain-name：加速域名。</li>不填写时，默认对返回结果按照 domain-name 排序。
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置可根据该字段对返回结果进行排序，取值有：
<li>created_on：加速域名创建时间；</li>
<li>domain-name：加速域名。</li>不填写时，默认对返回结果按照 domain-name 排序。
                     * @param _order 可根据该字段对返回结果进行排序，取值有：
<li>created_on：加速域名创建时间；</li>
<li>domain-name：加速域名。</li>不填写时，默认对返回结果按照 domain-name 排序。
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
                     * 获取排序方向，如果是字段值为数字，则根据数字大小排序；如果字段值为文本，则根据 ascill 码的大小排序。取值有：
<li>asc：升序排列；</li>
<li>desc：降序排列。</li>不填写使用默认值 asc。
                     * @return Direction 排序方向，如果是字段值为数字，则根据数字大小排序；如果字段值为文本，则根据 ascill 码的大小排序。取值有：
<li>asc：升序排列；</li>
<li>desc：降序排列。</li>不填写使用默认值 asc。
                     * 
                     */
                    std::string GetDirection() const;

                    /**
                     * 设置排序方向，如果是字段值为数字，则根据数字大小排序；如果字段值为文本，则根据 ascill 码的大小排序。取值有：
<li>asc：升序排列；</li>
<li>desc：降序排列。</li>不填写使用默认值 asc。
                     * @param _direction 排序方向，如果是字段值为数字，则根据数字大小排序；如果字段值为文本，则根据 ascill 码的大小排序。取值有：
<li>asc：升序排列；</li>
<li>desc：降序排列。</li>不填写使用默认值 asc。
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
<li>all：返回匹配所有查询条件的加速域名；</li>
<li>any：返回匹配任意一个查询条件的加速域名。</li>不填写时默认值为 all。
                     * @return Match 匹配方式，取值有：
<li>all：返回匹配所有查询条件的加速域名；</li>
<li>any：返回匹配任意一个查询条件的加速域名。</li>不填写时默认值为 all。
                     * 
                     */
                    std::string GetMatch() const;

                    /**
                     * 设置匹配方式，取值有：
<li>all：返回匹配所有查询条件的加速域名；</li>
<li>any：返回匹配任意一个查询条件的加速域名。</li>不填写时默认值为 all。
                     * @param _match 匹配方式，取值有：
<li>all：返回匹配所有查询条件的加速域名；</li>
<li>any：返回匹配任意一个查询条件的加速域名。</li>不填写时默认值为 all。
                     * 
                     */
                    void SetMatch(const std::string& _match);

                    /**
                     * 判断参数 Match 是否已赋值
                     * @return Match 是否已赋值
                     * 
                     */
                    bool MatchHasBeenSet() const;

                private:

                    /**
                     * 加速域名所属站点 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

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

                    /**
                     * 过滤条件，Filters.Values 的上限为 20。该参数不填写时，返回当前 zone-id 下所有域名信息。详细的过滤条件如下：
<li>domain-name：按照加速域名进行过滤；</li>
<li>origin-type：按照源站类型进行过滤；</li>
<li>origin：按照主源站地址进行过滤；</li>
<li>backup-origin： 按照备用源站地址进行过滤；</li>
<li>domain-cname：按照 CNAME 进行过滤；</li>
<li>share-cname：按照共享 CNAME 进行过滤；</li>
                     */
                    std::vector<AdvancedFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 可根据该字段对返回结果进行排序，取值有：
<li>created_on：加速域名创建时间；</li>
<li>domain-name：加速域名。</li>不填写时，默认对返回结果按照 domain-name 排序。
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 排序方向，如果是字段值为数字，则根据数字大小排序；如果字段值为文本，则根据 ascill 码的大小排序。取值有：
<li>asc：升序排列；</li>
<li>desc：降序排列。</li>不填写使用默认值 asc。
                     */
                    std::string m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * 匹配方式，取值有：
<li>all：返回匹配所有查询条件的加速域名；</li>
<li>any：返回匹配任意一个查询条件的加速域名。</li>不填写时默认值为 all。
                     */
                    std::string m_match;
                    bool m_matchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEACCELERATIONDOMAINSREQUEST_H_
