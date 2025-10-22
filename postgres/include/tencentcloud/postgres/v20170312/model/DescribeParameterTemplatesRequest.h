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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEPARAMETERTEMPLATESREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEPARAMETERTEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeParameterTemplates请求参数结构体
                */
                class DescribeParameterTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeParameterTemplatesRequest();
                    ~DescribeParameterTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤条件，目前支持的过滤条件有：TemplateName, TemplateId，DBMajorVersion，DBEngine。TemplateName不支持模糊匹配。
                     * @return Filters 过滤条件，目前支持的过滤条件有：TemplateName, TemplateId，DBMajorVersion，DBEngine。TemplateName不支持模糊匹配。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件，目前支持的过滤条件有：TemplateName, TemplateId，DBMajorVersion，DBEngine。TemplateName不支持模糊匹配。
                     * @param _filters 过滤条件，目前支持的过滤条件有：TemplateName, TemplateId，DBMajorVersion，DBEngine。TemplateName不支持模糊匹配。
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
                     * 获取每页显示数量，[0，100]，默认 20
                     * @return Limit 每页显示数量，[0，100]，默认 20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页显示数量，[0，100]，默认 20
                     * @param _limit 每页显示数量，[0，100]，默认 20
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
                     * 获取数据偏移量
                     * @return Offset 数据偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置数据偏移量
                     * @param _offset 数据偏移量
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
                     * 获取排序指标，枚举值，支持：CreateTime，TemplateName，DBMajorVersion。如果不指定该参数，默认将按照参数模板的编号倒序排列，也就是说最新添加的参数模板会排在最前面。
                     * @return OrderBy 排序指标，枚举值，支持：CreateTime，TemplateName，DBMajorVersion。如果不指定该参数，默认将按照参数模板的编号倒序排列，也就是说最新添加的参数模板会排在最前面。
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序指标，枚举值，支持：CreateTime，TemplateName，DBMajorVersion。如果不指定该参数，默认将按照参数模板的编号倒序排列，也就是说最新添加的参数模板会排在最前面。
                     * @param _orderBy 排序指标，枚举值，支持：CreateTime，TemplateName，DBMajorVersion。如果不指定该参数，默认将按照参数模板的编号倒序排列，也就是说最新添加的参数模板会排在最前面。
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取排序方式，枚举值，支持：asc（升序） ，desc（降序）。默认值为asc。当未指定OrderBy时，该参数失效，此时排序方式为OrderBy参数描述中给出的默认排序方式。
                     * @return OrderByType 排序方式，枚举值，支持：asc（升序） ，desc（降序）。默认值为asc。当未指定OrderBy时，该参数失效，此时排序方式为OrderBy参数描述中给出的默认排序方式。
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置排序方式，枚举值，支持：asc（升序） ，desc（降序）。默认值为asc。当未指定OrderBy时，该参数失效，此时排序方式为OrderBy参数描述中给出的默认排序方式。
                     * @param _orderByType 排序方式，枚举值，支持：asc（升序） ，desc（降序）。默认值为asc。当未指定OrderBy时，该参数失效，此时排序方式为OrderBy参数描述中给出的默认排序方式。
                     * 
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                private:

                    /**
                     * 过滤条件，目前支持的过滤条件有：TemplateName, TemplateId，DBMajorVersion，DBEngine。TemplateName不支持模糊匹配。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 每页显示数量，[0，100]，默认 20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 数据偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 排序指标，枚举值，支持：CreateTime，TemplateName，DBMajorVersion。如果不指定该参数，默认将按照参数模板的编号倒序排列，也就是说最新添加的参数模板会排在最前面。
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序方式，枚举值，支持：asc（升序） ，desc（降序）。默认值为asc。当未指定OrderBy时，该参数失效，此时排序方式为OrderBy参数描述中给出的默认排序方式。
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEPARAMETERTEMPLATESREQUEST_H_
