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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEWAREHOUSESREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEWAREHOUSESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Filter.h>
#include <tencentcloud/dlc/v20210125/model/SortField.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeWarehouses请求参数结构体
                */
                class DescribeWarehousesRequest : public AbstractModel
                {
                public:
                    DescribeWarehousesRequest();
                    ~DescribeWarehousesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>页码，从1开始，默认为1.</p>
                     * @return Page <p>页码，从1开始，默认为1.</p>
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置<p>页码，从1开始，默认为1.</p>
                     * @param _page <p>页码，从1开始，默认为1.</p>
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取<p>每页返回数量，默认为10.</p>
                     * @return PageSize <p>每页返回数量，默认为10.</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>每页返回数量，默认为10.</p>
                     * @param _pageSize <p>每页返回数量，默认为10.</p>
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取<p>高级过滤条件列表，元素 Name 为过滤字段名（PascalCase，可用字段与操作符约束见各接口 Filters 说明），Values 为过滤值列表；未列入白名单或非 PascalCase 的 Name 报 InvalidParameter。</p>
                     * @return Filters <p>高级过滤条件列表，元素 Name 为过滤字段名（PascalCase，可用字段与操作符约束见各接口 Filters 说明），Values 为过滤值列表；未列入白名单或非 PascalCase 的 Name 报 InvalidParameter。</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>高级过滤条件列表，元素 Name 为过滤字段名（PascalCase，可用字段与操作符约束见各接口 Filters 说明），Values 为过滤值列表；未列入白名单或非 PascalCase 的 Name 报 InvalidParameter。</p>
                     * @param _filters <p>高级过滤条件列表，元素 Name 为过滤字段名（PascalCase，可用字段与操作符约束见各接口 Filters 说明），Values 为过滤值列表；未列入白名单或非 PascalCase 的 Name 报 InvalidParameter。</p>
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
                     * 获取<p>排序字段列表，元素 Field 为排序字段名（PascalCase，与响应字段命名对齐，可用字段见各接口 SortFields 说明），Order 为排序方向（ASC/DESC，不传默认 DESC）；未列入白名单或非 PascalCase 的 Field 报 InvalidParameter。</p>
                     * @return SortFields <p>排序字段列表，元素 Field 为排序字段名（PascalCase，与响应字段命名对齐，可用字段见各接口 SortFields 说明），Order 为排序方向（ASC/DESC，不传默认 DESC）；未列入白名单或非 PascalCase 的 Field 报 InvalidParameter。</p>
                     * 
                     */
                    std::vector<SortField> GetSortFields() const;

                    /**
                     * 设置<p>排序字段列表，元素 Field 为排序字段名（PascalCase，与响应字段命名对齐，可用字段见各接口 SortFields 说明），Order 为排序方向（ASC/DESC，不传默认 DESC）；未列入白名单或非 PascalCase 的 Field 报 InvalidParameter。</p>
                     * @param _sortFields <p>排序字段列表，元素 Field 为排序字段名（PascalCase，与响应字段命名对齐，可用字段见各接口 SortFields 说明），Order 为排序方向（ASC/DESC，不传默认 DESC）；未列入白名单或非 PascalCase 的 Field 报 InvalidParameter。</p>
                     * 
                     */
                    void SetSortFields(const std::vector<SortField>& _sortFields);

                    /**
                     * 判断参数 SortFields 是否已赋值
                     * @return SortFields 是否已赋值
                     * 
                     */
                    bool SortFieldsHasBeenSet() const;

                private:

                    /**
                     * <p>页码，从1开始，默认为1.</p>
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * <p>每页返回数量，默认为10.</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>高级过滤条件列表，元素 Name 为过滤字段名（PascalCase，可用字段与操作符约束见各接口 Filters 说明），Values 为过滤值列表；未列入白名单或非 PascalCase 的 Name 报 InvalidParameter。</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>排序字段列表，元素 Field 为排序字段名（PascalCase，与响应字段命名对齐，可用字段见各接口 SortFields 说明），Order 为排序方向（ASC/DESC，不传默认 DESC）；未列入白名单或非 PascalCase 的 Field 报 InvalidParameter。</p>
                     */
                    std::vector<SortField> m_sortFields;
                    bool m_sortFieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEWAREHOUSESREQUEST_H_
