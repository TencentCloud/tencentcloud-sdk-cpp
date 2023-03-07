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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYCUSTOMERSCREDITREQUEST_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYCUSTOMERSCREDITREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * QueryCustomersCredit请求参数结构体
                */
                class QueryCustomersCreditRequest : public AbstractModel
                {
                public:
                    QueryCustomersCreditRequest();
                    ~QueryCustomersCreditRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取搜索条件类型，只能是：ClientUin|Name|Remark|Email四选一
                     * @return FilterType 搜索条件类型，只能是：ClientUin|Name|Remark|Email四选一
                     */
                    std::string GetFilterType() const;

                    /**
                     * 设置搜索条件类型，只能是：ClientUin|Name|Remark|Email四选一
                     * @param FilterType 搜索条件类型，只能是：ClientUin|Name|Remark|Email四选一
                     */
                    void SetFilterType(const std::string& _filterType);

                    /**
                     * 判断参数 FilterType 是否已赋值
                     * @return FilterType 是否已赋值
                     */
                    bool FilterTypeHasBeenSet() const;

                    /**
                     * 获取查询条件值
                     * @return Filter 查询条件值
                     */
                    std::string GetFilter() const;

                    /**
                     * 设置查询条件值
                     * @param Filter 查询条件值
                     */
                    void SetFilter(const std::string& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取分页参数：当前页数，从1开始
                     * @return Page 分页参数：当前页数，从1开始
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置分页参数：当前页数，从1开始
                     * @param Page 分页参数：当前页数，从1开始
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取分页参数：每页条数
                     * @return PageSize 分页参数：每页条数
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置分页参数：每页条数
                     * @param PageSize 分页参数：每页条数
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取排序参数，根据AssociationTime按照空或者desc：逆序，asc：顺序的方式进行排序
                     * @return Order 排序参数，根据AssociationTime按照空或者desc：逆序，asc：顺序的方式进行排序
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序参数，根据AssociationTime按照空或者desc：逆序，asc：顺序的方式进行排序
                     * @param Order 排序参数，根据AssociationTime按照空或者desc：逆序，asc：顺序的方式进行排序
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * 搜索条件类型，只能是：ClientUin|Name|Remark|Email四选一
                     */
                    std::string m_filterType;
                    bool m_filterTypeHasBeenSet;

                    /**
                     * 查询条件值
                     */
                    std::string m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * 分页参数：当前页数，从1开始
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 分页参数：每页条数
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 排序参数，根据AssociationTime按照空或者desc：逆序，asc：顺序的方式进行排序
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYCUSTOMERSCREDITREQUEST_H_
