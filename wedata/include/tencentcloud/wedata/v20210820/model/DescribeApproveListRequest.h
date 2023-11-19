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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEAPPROVELISTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEAPPROVELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/FilterOptional.h>
#include <tencentcloud/wedata/v20210820/model/OrderFieldOptional.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeApproveList请求参数结构体
                */
                class DescribeApproveListRequest : public AbstractModel
                {
                public:
                    DescribeApproveListRequest();
                    ~DescribeApproveListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取审批分类key
                     * @return ApproveClassification 审批分类key
                     * 
                     */
                    std::string GetApproveClassification() const;

                    /**
                     * 设置审批分类key
                     * @param _approveClassification 审批分类key
                     * 
                     */
                    void SetApproveClassification(const std::string& _approveClassification);

                    /**
                     * 判断参数 ApproveClassification 是否已赋值
                     * @return ApproveClassification 是否已赋值
                     * 
                     */
                    bool ApproveClassificationHasBeenSet() const;

                    /**
                     * 获取分页大小
                     * @return PageSize 分页大小
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置分页大小
                     * @param _pageSize 分页大小
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
                     * 获取分页数
                     * @return PageNumber 分页数
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置分页数
                     * @param _pageNumber 分页数
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
                     * 获取自定义条件查询
                     * @return Filters 自定义条件查询
                     * 
                     */
                    std::vector<FilterOptional> GetFilters() const;

                    /**
                     * 设置自定义条件查询
                     * @param _filters 自定义条件查询
                     * 
                     */
                    void SetFilters(const std::vector<FilterOptional>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取排序字段
                     * @return OrderFields 排序字段
                     * 
                     */
                    std::vector<OrderFieldOptional> GetOrderFields() const;

                    /**
                     * 设置排序字段
                     * @param _orderFields 排序字段
                     * 
                     */
                    void SetOrderFields(const std::vector<OrderFieldOptional>& _orderFields);

                    /**
                     * 判断参数 OrderFields 是否已赋值
                     * @return OrderFields 是否已赋值
                     * 
                     */
                    bool OrderFieldsHasBeenSet() const;

                private:

                    /**
                     * 审批分类key
                     */
                    std::string m_approveClassification;
                    bool m_approveClassificationHasBeenSet;

                    /**
                     * 分页大小
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 分页数
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 自定义条件查询
                     */
                    std::vector<FilterOptional> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序字段
                     */
                    std::vector<OrderFieldOptional> m_orderFields;
                    bool m_orderFieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEAPPROVELISTREQUEST_H_
