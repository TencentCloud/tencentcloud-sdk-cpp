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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEDNSRECORDSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEDNSRECORDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/DnsRecordFilter.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DescribeDnsRecords请求参数结构体
                */
                class DescribeDnsRecordsRequest : public AbstractModel
                {
                public:
                    DescribeDnsRecordsRequest();
                    ~DescribeDnsRecordsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询条件过滤器
                     * @return Filters 查询条件过滤器
                     */
                    std::vector<DnsRecordFilter> GetFilters() const;

                    /**
                     * 设置查询条件过滤器
                     * @param Filters 查询条件过滤器
                     */
                    void SetFilters(const std::vector<DnsRecordFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取排序
                     * @return Order 排序
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序
                     * @param Order 排序
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取可选值 asc, desc
                     * @return Direction 可选值 asc, desc
                     */
                    std::string GetDirection() const;

                    /**
                     * 设置可选值 asc, desc
                     * @param Direction 可选值 asc, desc
                     */
                    void SetDirection(const std::string& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取可选值 all, any
                     * @return Match 可选值 all, any
                     */
                    std::string GetMatch() const;

                    /**
                     * 设置可选值 all, any
                     * @param Match 可选值 all, any
                     */
                    void SetMatch(const std::string& _match);

                    /**
                     * 判断参数 Match 是否已赋值
                     * @return Match 是否已赋值
                     */
                    bool MatchHasBeenSet() const;

                    /**
                     * 获取分页查询限制数目，默认为 100，最大可设置为 1000
                     * @return Limit 分页查询限制数目，默认为 100，最大可设置为 1000
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页查询限制数目，默认为 100，最大可设置为 1000
                     * @param Limit 分页查询限制数目，默认为 100，最大可设置为 1000
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页查询偏移量，默认为 0
                     * @return Offset 分页查询偏移量，默认为 0
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页查询偏移量，默认为 0
                     * @param Offset 分页查询偏移量，默认为 0
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取站点 ID
                     * @return ZoneId 站点 ID
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点 ID
                     * @param ZoneId 站点 ID
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                private:

                    /**
                     * 查询条件过滤器
                     */
                    std::vector<DnsRecordFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 可选值 asc, desc
                     */
                    std::string m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * 可选值 all, any
                     */
                    std::string m_match;
                    bool m_matchHasBeenSet;

                    /**
                     * 分页查询限制数目，默认为 100，最大可设置为 1000
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页查询偏移量，默认为 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 站点 ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEDNSRECORDSREQUEST_H_
