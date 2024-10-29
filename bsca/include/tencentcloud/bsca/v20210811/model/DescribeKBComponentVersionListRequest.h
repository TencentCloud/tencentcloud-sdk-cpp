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

#ifndef TENCENTCLOUD_BSCA_V20210811_MODEL_DESCRIBEKBCOMPONENTVERSIONLISTREQUEST_H_
#define TENCENTCLOUD_BSCA_V20210811_MODEL_DESCRIBEKBCOMPONENTVERSIONLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bsca/v20210811/model/PURL.h>
#include <tencentcloud/bsca/v20210811/model/ComponentTagFilter.h>


namespace TencentCloud
{
    namespace Bsca
    {
        namespace V20210811
        {
            namespace Model
            {
                /**
                * DescribeKBComponentVersionList请求参数结构体
                */
                class DescribeKBComponentVersionListRequest : public AbstractModel
                {
                public:
                    DescribeKBComponentVersionListRequest();
                    ~DescribeKBComponentVersionListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要查询的组件 PURL
                     * @return PURL 要查询的组件 PURL
                     * 
                     */
                    PURL GetPURL() const;

                    /**
                     * 设置要查询的组件 PURL
                     * @param _pURL 要查询的组件 PURL
                     * 
                     */
                    void SetPURL(const PURL& _pURL);

                    /**
                     * 判断参数 PURL 是否已赋值
                     * @return PURL 是否已赋值
                     * 
                     */
                    bool PURLHasBeenSet() const;

                    /**
                     * 获取页号
                     * @return PageNumber 页号
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置页号
                     * @param _pageNumber 页号
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
                     * 获取页大小
                     * @return PageSize 页大小
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置页大小
                     * @param _pageSize 页大小
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
                     * 获取排序方式，可以是"ASC"或"DESC"，默认"DESC"
                     * @return Order 排序方式，可以是"ASC"或"DESC"，默认"DESC"
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序方式，可以是"ASC"或"DESC"，默认"DESC"
                     * @param _order 排序方式，可以是"ASC"或"DESC"，默认"DESC"
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
                     * 获取排序字段，可能的字段包括“Version”、"PublishTime"
                     * @return OrderBy 排序字段，可能的字段包括“Version”、"PublishTime"
                     * 
                     */
                    std::vector<std::string> GetOrderBy() const;

                    /**
                     * 设置排序字段，可能的字段包括“Version”、"PublishTime"
                     * @param _orderBy 排序字段，可能的字段包括“Version”、"PublishTime"
                     * 
                     */
                    void SetOrderBy(const std::vector<std::string>& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取Tag筛选
                     * @return Filter Tag筛选
                     * 
                     */
                    ComponentTagFilter GetFilter() const;

                    /**
                     * 设置Tag筛选
                     * @param _filter Tag筛选
                     * 
                     */
                    void SetFilter(const ComponentTagFilter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                private:

                    /**
                     * 要查询的组件 PURL
                     */
                    PURL m_pURL;
                    bool m_pURLHasBeenSet;

                    /**
                     * 页号
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 页大小
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 排序方式，可以是"ASC"或"DESC"，默认"DESC"
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 排序字段，可能的字段包括“Version”、"PublishTime"
                     */
                    std::vector<std::string> m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Tag筛选
                     */
                    ComponentTagFilter m_filter;
                    bool m_filterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BSCA_V20210811_MODEL_DESCRIBEKBCOMPONENTVERSIONLISTREQUEST_H_
