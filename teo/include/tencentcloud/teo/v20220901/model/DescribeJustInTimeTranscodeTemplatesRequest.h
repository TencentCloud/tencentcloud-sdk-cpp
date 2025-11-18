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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEJUSTINTIMETRANSCODETEMPLATESREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEJUSTINTIMETRANSCODETEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/Filter.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeJustInTimeTranscodeTemplates请求参数结构体
                */
                class DescribeJustInTimeTranscodeTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeJustInTimeTranscodeTemplatesRequest();
                    ~DescribeJustInTimeTranscodeTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点ID。
                     * @return ZoneId 站点ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点ID。
                     * @param _zoneId 站点ID。
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
                     * 获取过滤条件，Filters 的上限为 20，Filters.Values 的上限为 20。该参数不填写时，默认返回当前 ZoneId 下有权限的即时转码模板。详细的过滤条件如下：<li>template-name：按照模板名批量进行过滤。例如：mytemplate；</li><li>template-type：按照模板类型批量进行过滤。例如：preset 或 custom。</li><li>template-id：按照模板 ID 批量进行过滤。例如：C1LZ7982VgTpYhJ7M。</li>默认为空。
                     * @return Filters 过滤条件，Filters 的上限为 20，Filters.Values 的上限为 20。该参数不填写时，默认返回当前 ZoneId 下有权限的即时转码模板。详细的过滤条件如下：<li>template-name：按照模板名批量进行过滤。例如：mytemplate；</li><li>template-type：按照模板类型批量进行过滤。例如：preset 或 custom。</li><li>template-id：按照模板 ID 批量进行过滤。例如：C1LZ7982VgTpYhJ7M。</li>默认为空。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件，Filters 的上限为 20，Filters.Values 的上限为 20。该参数不填写时，默认返回当前 ZoneId 下有权限的即时转码模板。详细的过滤条件如下：<li>template-name：按照模板名批量进行过滤。例如：mytemplate；</li><li>template-type：按照模板类型批量进行过滤。例如：preset 或 custom。</li><li>template-id：按照模板 ID 批量进行过滤。例如：C1LZ7982VgTpYhJ7M。</li>默认为空。
                     * @param _filters 过滤条件，Filters 的上限为 20，Filters.Values 的上限为 20。该参数不填写时，默认返回当前 ZoneId 下有权限的即时转码模板。详细的过滤条件如下：<li>template-name：按照模板名批量进行过滤。例如：mytemplate；</li><li>template-type：按照模板类型批量进行过滤。例如：preset 或 custom。</li><li>template-id：按照模板 ID 批量进行过滤。例如：C1LZ7982VgTpYhJ7M。</li>默认为空。
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
                     * 获取排序字段，取值有：<li>createTime：模板创建时间。</li>默认值为：createTime。
                     * @return SortBy 排序字段，取值有：<li>createTime：模板创建时间。</li>默认值为：createTime。
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置排序字段，取值有：<li>createTime：模板创建时间。</li>默认值为：createTime。
                     * @param _sortBy 排序字段，取值有：<li>createTime：模板创建时间。</li>默认值为：createTime。
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
                     * 获取排序方式，取值有：<li>asc：升序方式；</li><li>desc：降序方式。</li>默认值为：desc。
                     * @return SortOrder 排序方式，取值有：<li>asc：升序方式；</li><li>desc：降序方式。</li>默认值为：desc。
                     * 
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置排序方式，取值有：<li>asc：升序方式；</li><li>desc：降序方式。</li>默认值为：desc。
                     * @param _sortOrder 排序方式，取值有：<li>asc：升序方式；</li><li>desc：降序方式。</li>默认值为：desc。
                     * 
                     */
                    void SetSortOrder(const std::string& _sortOrder);

                    /**
                     * 判断参数 SortOrder 是否已赋值
                     * @return SortOrder 是否已赋值
                     * 
                     */
                    bool SortOrderHasBeenSet() const;

                    /**
                     * 获取分页偏移量，默认值：0。
                     * @return Offset 分页偏移量，默认值：0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移量，默认值：0。
                     * @param _offset 分页偏移量，默认值：0。
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
                     * 获取返回记录条数，默认值：20，最大值：1000。
                     * @return Limit 返回记录条数，默认值：20，最大值：1000。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回记录条数，默认值：20，最大值：1000。
                     * @param _limit 返回记录条数，默认值：20，最大值：1000。
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
                     * 站点ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 过滤条件，Filters 的上限为 20，Filters.Values 的上限为 20。该参数不填写时，默认返回当前 ZoneId 下有权限的即时转码模板。详细的过滤条件如下：<li>template-name：按照模板名批量进行过滤。例如：mytemplate；</li><li>template-type：按照模板类型批量进行过滤。例如：preset 或 custom。</li><li>template-id：按照模板 ID 批量进行过滤。例如：C1LZ7982VgTpYhJ7M。</li>默认为空。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序字段，取值有：<li>createTime：模板创建时间。</li>默认值为：createTime。
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * 排序方式，取值有：<li>asc：升序方式；</li><li>desc：降序方式。</li>默认值为：desc。
                     */
                    std::string m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                    /**
                     * 分页偏移量，默认值：0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回记录条数，默认值：20，最大值：1000。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEJUSTINTIMETRANSCODETEMPLATESREQUEST_H_
