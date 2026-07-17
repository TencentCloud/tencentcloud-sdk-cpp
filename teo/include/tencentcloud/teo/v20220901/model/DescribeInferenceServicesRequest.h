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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEINFERENCESERVICESREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEINFERENCESERVICESREQUEST_H_

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
                * DescribeInferenceServices请求参数结构体
                */
                class DescribeInferenceServicesRequest : public AbstractModel
                {
                public:
                    DescribeInferenceServicesRequest();
                    ~DescribeInferenceServicesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>站点ID。</p>
                     * @return ZoneId <p>站点ID。</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>站点ID。</p>
                     * @param _zoneId <p>站点ID。</p>
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
                     * 获取<p>过滤条件，上限 20 个，多个条件为且关系，Filters.Values 的上限为 20。详细的过滤条件如下：<li>service-name：按照服务名称进行过滤；</li><li>service-id：按照服务 ID 过滤；</li><li>status：按照服务状态过滤。</li>模糊查询时仅支持过滤字段名为 service-name。</p>
                     * @return Filters <p>过滤条件，上限 20 个，多个条件为且关系，Filters.Values 的上限为 20。详细的过滤条件如下：<li>service-name：按照服务名称进行过滤；</li><li>service-id：按照服务 ID 过滤；</li><li>status：按照服务状态过滤。</li>模糊查询时仅支持过滤字段名为 service-name。</p>
                     * 
                     */
                    std::vector<AdvancedFilter> GetFilters() const;

                    /**
                     * 设置<p>过滤条件，上限 20 个，多个条件为且关系，Filters.Values 的上限为 20。详细的过滤条件如下：<li>service-name：按照服务名称进行过滤；</li><li>service-id：按照服务 ID 过滤；</li><li>status：按照服务状态过滤。</li>模糊查询时仅支持过滤字段名为 service-name。</p>
                     * @param _filters <p>过滤条件，上限 20 个，多个条件为且关系，Filters.Values 的上限为 20。详细的过滤条件如下：<li>service-name：按照服务名称进行过滤；</li><li>service-id：按照服务 ID 过滤；</li><li>status：按照服务状态过滤。</li>模糊查询时仅支持过滤字段名为 service-name。</p>
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
                     * 获取<p>分页查询偏移量。默认值：0。</p>
                     * @return Offset <p>分页查询偏移量。默认值：0。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页查询偏移量。默认值：0。</p>
                     * @param _offset <p>分页查询偏移量。默认值：0。</p>
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
                     * 获取<p>分页查询限制数目。默认值：20，最大值：200。</p>
                     * @return Limit <p>分页查询限制数目。默认值：20，最大值：200。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>分页查询限制数目。默认值：20，最大值：200。</p>
                     * @param _limit <p>分页查询限制数目。默认值：20，最大值：200。</p>
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
                     * 获取<p>可根据该字段对返回结果进行排序，取值有：<li>create-time：创建时间。</li>不填写时默认按照 create-time 排序。</p>
                     * @return Order <p>可根据该字段对返回结果进行排序，取值有：<li>create-time：创建时间。</li>不填写时默认按照 create-time 排序。</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>可根据该字段对返回结果进行排序，取值有：<li>create-time：创建时间。</li>不填写时默认按照 create-time 排序。</p>
                     * @param _order <p>可根据该字段对返回结果进行排序，取值有：<li>create-time：创建时间。</li>不填写时默认按照 create-time 排序。</p>
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
                     * 获取<p>排序方向，如果是字段值为数字，则根据数字大小排序；如果字段值为文本，则根据 ASCII 码的大小排序。取值有：<li>asc：从小到大排序；</li><li>desc：从大到小排序。</li>不填写使用默认值 desc。</p>
                     * @return Direction <p>排序方向，如果是字段值为数字，则根据数字大小排序；如果字段值为文本，则根据 ASCII 码的大小排序。取值有：<li>asc：从小到大排序；</li><li>desc：从大到小排序。</li>不填写使用默认值 desc。</p>
                     * 
                     */
                    std::string GetDirection() const;

                    /**
                     * 设置<p>排序方向，如果是字段值为数字，则根据数字大小排序；如果字段值为文本，则根据 ASCII 码的大小排序。取值有：<li>asc：从小到大排序；</li><li>desc：从大到小排序。</li>不填写使用默认值 desc。</p>
                     * @param _direction <p>排序方向，如果是字段值为数字，则根据数字大小排序；如果字段值为文本，则根据 ASCII 码的大小排序。取值有：<li>asc：从小到大排序；</li><li>desc：从大到小排序。</li>不填写使用默认值 desc。</p>
                     * 
                     */
                    void SetDirection(const std::string& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                private:

                    /**
                     * <p>站点ID。</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>过滤条件，上限 20 个，多个条件为且关系，Filters.Values 的上限为 20。详细的过滤条件如下：<li>service-name：按照服务名称进行过滤；</li><li>service-id：按照服务 ID 过滤；</li><li>status：按照服务状态过滤。</li>模糊查询时仅支持过滤字段名为 service-name。</p>
                     */
                    std::vector<AdvancedFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>分页查询偏移量。默认值：0。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>分页查询限制数目。默认值：20，最大值：200。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>可根据该字段对返回结果进行排序，取值有：<li>create-time：创建时间。</li>不填写时默认按照 create-time 排序。</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>排序方向，如果是字段值为数字，则根据数字大小排序；如果字段值为文本，则根据 ASCII 码的大小排序。取值有：<li>asc：从小到大排序；</li><li>desc：从大到小排序。</li>不填写使用默认值 desc。</p>
                     */
                    std::string m_direction;
                    bool m_directionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEINFERENCESERVICESREQUEST_H_
