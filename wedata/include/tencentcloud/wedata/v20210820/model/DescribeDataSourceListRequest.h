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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATASOURCELISTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATASOURCELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/OrderField.h>
#include <tencentcloud/wedata/v20210820/model/Filter.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeDataSourceList请求参数结构体
                */
                class DescribeDataSourceListRequest : public AbstractModel
                {
                public:
                    DescribeDataSourceListRequest();
                    ~DescribeDataSourceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>页码</p>
                     * @return PageNumber <p>页码</p>
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置<p>页码</p>
                     * @param _pageNumber <p>页码</p>
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取<p>返回数量</p>
                     * @return PageSize <p>返回数量</p>
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置<p>返回数量</p>
                     * @param _pageSize <p>返回数量</p>
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
                     * 获取<p>排序配置</p>
                     * @return OrderFields <p>排序配置</p>
                     * 
                     */
                    std::vector<OrderField> GetOrderFields() const;

                    /**
                     * 设置<p>排序配置</p>
                     * @param _orderFields <p>排序配置</p>
                     * 
                     */
                    void SetOrderFields(const std::vector<OrderField>& _orderFields);

                    /**
                     * 判断参数 OrderFields 是否已赋值
                     * @return OrderFields 是否已赋值
                     * 
                     */
                    bool OrderFieldsHasBeenSet() const;

                    /**
                     * 获取<p>可选过滤条件，Filter可选配置(参考): &quot;Name&quot;: { &quot;type&quot;: &quot;string&quot;, &quot;description&quot;: &quot;数据源名称&quot; }, &quot;Type&quot;: { &quot;type&quot;: &quot;string&quot;, &quot;description&quot;: &quot;类型&quot; }, &quot;ClusterId&quot;: { &quot;type&quot;: &quot;string&quot;, &quot;description&quot;: &quot;集群id&quot; }, &quot;CategoryId&quot;: { &quot;type&quot;: &quot;string&quot;, &quot;description&quot;: &quot;分类，项目或空间id&quot; }</p>
                     * @return Filters <p>可选过滤条件，Filter可选配置(参考): &quot;Name&quot;: { &quot;type&quot;: &quot;string&quot;, &quot;description&quot;: &quot;数据源名称&quot; }, &quot;Type&quot;: { &quot;type&quot;: &quot;string&quot;, &quot;description&quot;: &quot;类型&quot; }, &quot;ClusterId&quot;: { &quot;type&quot;: &quot;string&quot;, &quot;description&quot;: &quot;集群id&quot; }, &quot;CategoryId&quot;: { &quot;type&quot;: &quot;string&quot;, &quot;description&quot;: &quot;分类，项目或空间id&quot; }</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>可选过滤条件，Filter可选配置(参考): &quot;Name&quot;: { &quot;type&quot;: &quot;string&quot;, &quot;description&quot;: &quot;数据源名称&quot; }, &quot;Type&quot;: { &quot;type&quot;: &quot;string&quot;, &quot;description&quot;: &quot;类型&quot; }, &quot;ClusterId&quot;: { &quot;type&quot;: &quot;string&quot;, &quot;description&quot;: &quot;集群id&quot; }, &quot;CategoryId&quot;: { &quot;type&quot;: &quot;string&quot;, &quot;description&quot;: &quot;分类，项目或空间id&quot; }</p>
                     * @param _filters <p>可选过滤条件，Filter可选配置(参考): &quot;Name&quot;: { &quot;type&quot;: &quot;string&quot;, &quot;description&quot;: &quot;数据源名称&quot; }, &quot;Type&quot;: { &quot;type&quot;: &quot;string&quot;, &quot;description&quot;: &quot;类型&quot; }, &quot;ClusterId&quot;: { &quot;type&quot;: &quot;string&quot;, &quot;description&quot;: &quot;集群id&quot; }, &quot;CategoryId&quot;: { &quot;type&quot;: &quot;string&quot;, &quot;description&quot;: &quot;分类，项目或空间id&quot; }</p>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <p>页码</p>
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>返回数量</p>
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>排序配置</p>
                     */
                    std::vector<OrderField> m_orderFields;
                    bool m_orderFieldsHasBeenSet;

                    /**
                     * <p>可选过滤条件，Filter可选配置(参考): &quot;Name&quot;: { &quot;type&quot;: &quot;string&quot;, &quot;description&quot;: &quot;数据源名称&quot; }, &quot;Type&quot;: { &quot;type&quot;: &quot;string&quot;, &quot;description&quot;: &quot;类型&quot; }, &quot;ClusterId&quot;: { &quot;type&quot;: &quot;string&quot;, &quot;description&quot;: &quot;集群id&quot; }, &quot;CategoryId&quot;: { &quot;type&quot;: &quot;string&quot;, &quot;description&quot;: &quot;分类，项目或空间id&quot; }</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATASOURCELISTREQUEST_H_
