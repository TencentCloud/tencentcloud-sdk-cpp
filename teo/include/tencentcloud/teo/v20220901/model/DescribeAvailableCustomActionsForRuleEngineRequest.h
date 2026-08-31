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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEAVAILABLECUSTOMACTIONSFORRULEENGINEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEAVAILABLECUSTOMACTIONSFORRULEENGINEREQUEST_H_

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
                * DescribeAvailableCustomActionsForRuleEngine请求参数结构体
                */
                class DescribeAvailableCustomActionsForRuleEngineRequest : public AbstractModel
                {
                public:
                    DescribeAvailableCustomActionsForRuleEngineRequest();
                    ~DescribeAvailableCustomActionsForRuleEngineRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>站点 ID。</p>
                     * @return ZoneId <p>站点 ID。</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>站点 ID。</p>
                     * @param _zoneId <p>站点 ID。</p>
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
                     * 获取<p>过滤条件，多个条件为且关系，Filters.Values 的上限为 20。该参数不填写时，返回当前站点下所有可用的规则引擎定制配置。详细的过滤条件如下：</p><li>action-id：按照定制配置唯一标识 ID 进行过滤；</li><li>name：按照定制配置名称进行过滤。</li>模糊查询时仅支持过滤字段名为 <code>name</code>。<p></p>
                     * @return Filters <p>过滤条件，多个条件为且关系，Filters.Values 的上限为 20。该参数不填写时，返回当前站点下所有可用的规则引擎定制配置。详细的过滤条件如下：</p><li>action-id：按照定制配置唯一标识 ID 进行过滤；</li><li>name：按照定制配置名称进行过滤。</li>模糊查询时仅支持过滤字段名为 <code>name</code>。<p></p>
                     * 
                     */
                    std::vector<AdvancedFilter> GetFilters() const;

                    /**
                     * 设置<p>过滤条件，多个条件为且关系，Filters.Values 的上限为 20。该参数不填写时，返回当前站点下所有可用的规则引擎定制配置。详细的过滤条件如下：</p><li>action-id：按照定制配置唯一标识 ID 进行过滤；</li><li>name：按照定制配置名称进行过滤。</li>模糊查询时仅支持过滤字段名为 <code>name</code>。<p></p>
                     * @param _filters <p>过滤条件，多个条件为且关系，Filters.Values 的上限为 20。该参数不填写时，返回当前站点下所有可用的规则引擎定制配置。详细的过滤条件如下：</p><li>action-id：按照定制配置唯一标识 ID 进行过滤；</li><li>name：按照定制配置名称进行过滤。</li>模糊查询时仅支持过滤字段名为 <code>name</code>。<p></p>
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
                     * 获取<p>分页查询限制数目。</p><p>取值范围：[0, 1000]</p><p>默认值：20</p>
                     * @return Limit <p>分页查询限制数目。</p><p>取值范围：[0, 1000]</p><p>默认值：20</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>分页查询限制数目。</p><p>取值范围：[0, 1000]</p><p>默认值：20</p>
                     * @param _limit <p>分页查询限制数目。</p><p>取值范围：[0, 1000]</p><p>默认值：20</p>
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
                     * 获取<p>分页偏移量。</p><p>默认值：0</p>
                     * @return Offset <p>分页偏移量。</p><p>默认值：0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移量。</p><p>默认值：0</p>
                     * @param _offset <p>分页偏移量。</p><p>默认值：0</p>
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
                     * 获取<p>排序字段，取值有：</p><li>action-id：按照定制配置唯一标识 ID 排序；</li><li>create-time：按照定制配置创建时间排序。</li>默认值：<code>action-id</code>。<p></p>
                     * @return SortBy <p>排序字段，取值有：</p><li>action-id：按照定制配置唯一标识 ID 排序；</li><li>create-time：按照定制配置创建时间排序。</li>默认值：<code>action-id</code>。<p></p>
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置<p>排序字段，取值有：</p><li>action-id：按照定制配置唯一标识 ID 排序；</li><li>create-time：按照定制配置创建时间排序。</li>默认值：<code>action-id</code>。<p></p>
                     * @param _sortBy <p>排序字段，取值有：</p><li>action-id：按照定制配置唯一标识 ID 排序；</li><li>create-time：按照定制配置创建时间排序。</li>默认值：<code>action-id</code>。<p></p>
                     * 
                     */
                    void SetSortBy(const std::string& _sortBy);

                    /**
                     * 判断参数 SortBy 是否已赋值
                     * @return SortBy 是否已赋值
                     * 
                     */
                    bool SortByHasBeenSet() const;

                    /**
                     * 获取<p>排序方式，取值有：</p><li>asc：升序排序；</li><li>desc：降序排序。</li>默认值：desc。<p></p>
                     * @return SortOrder <p>排序方式，取值有：</p><li>asc：升序排序；</li><li>desc：降序排序。</li>默认值：desc。<p></p>
                     * 
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置<p>排序方式，取值有：</p><li>asc：升序排序；</li><li>desc：降序排序。</li>默认值：desc。<p></p>
                     * @param _sortOrder <p>排序方式，取值有：</p><li>asc：升序排序；</li><li>desc：降序排序。</li>默认值：desc。<p></p>
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
                     * <p>站点 ID。</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>过滤条件，多个条件为且关系，Filters.Values 的上限为 20。该参数不填写时，返回当前站点下所有可用的规则引擎定制配置。详细的过滤条件如下：</p><li>action-id：按照定制配置唯一标识 ID 进行过滤；</li><li>name：按照定制配置名称进行过滤。</li>模糊查询时仅支持过滤字段名为 <code>name</code>。<p></p>
                     */
                    std::vector<AdvancedFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>分页查询限制数目。</p><p>取值范围：[0, 1000]</p><p>默认值：20</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页偏移量。</p><p>默认值：0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>排序字段，取值有：</p><li>action-id：按照定制配置唯一标识 ID 排序；</li><li>create-time：按照定制配置创建时间排序。</li>默认值：<code>action-id</code>。<p></p>
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * <p>排序方式，取值有：</p><li>asc：升序排序；</li><li>desc：降序排序。</li>默认值：desc。<p></p>
                     */
                    std::string m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEAVAILABLECUSTOMACTIONSFORRULEENGINEREQUEST_H_
