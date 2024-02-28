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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBECOLUMNSMETAREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBECOLUMNSMETAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/Filter.h>
#include <tencentcloud/wedata/v20210820/model/OrderField.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeColumnsMeta请求参数结构体
                */
                class DescribeColumnsMetaRequest : public AbstractModel
                {
                public:
                    DescribeColumnsMetaRequest();
                    ~DescribeColumnsMetaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取表ID
                     * @return TableId 表ID
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置表ID
                     * @param _tableId 表ID
                     * 
                     */
                    void SetTableId(const std::string& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     * 
                     */
                    bool TableIdHasBeenSet() const;

                    /**
                     * 获取页码
                     * @return PageNumber 页码
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置页码
                     * @param _pageNumber 页码
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取每页大小
                     * @return PageSize 每页大小
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置每页大小
                     * @param _pageSize 每页大小
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
                     * 获取过滤器
                     * @return FilterSet 过滤器
                     * 
                     */
                    std::vector<Filter> GetFilterSet() const;

                    /**
                     * 设置过滤器
                     * @param _filterSet 过滤器
                     * 
                     */
                    void SetFilterSet(const std::vector<Filter>& _filterSet);

                    /**
                     * 判断参数 FilterSet 是否已赋值
                     * @return FilterSet 是否已赋值
                     * 
                     */
                    bool FilterSetHasBeenSet() const;

                    /**
                     * 获取排序字段
                     * @return OrderFieldSet 排序字段
                     * 
                     */
                    std::vector<OrderField> GetOrderFieldSet() const;

                    /**
                     * 设置排序字段
                     * @param _orderFieldSet 排序字段
                     * 
                     */
                    void SetOrderFieldSet(const std::vector<OrderField>& _orderFieldSet);

                    /**
                     * 判断参数 OrderFieldSet 是否已赋值
                     * @return OrderFieldSet 是否已赋值
                     * 
                     */
                    bool OrderFieldSetHasBeenSet() const;

                    /**
                     * 获取是否查询分区字段，默认false
                     * @return IsPartitionQuery 是否查询分区字段，默认false
                     * 
                     */
                    bool GetIsPartitionQuery() const;

                    /**
                     * 设置是否查询分区字段，默认false
                     * @param _isPartitionQuery 是否查询分区字段，默认false
                     * 
                     */
                    void SetIsPartitionQuery(const bool& _isPartitionQuery);

                    /**
                     * 判断参数 IsPartitionQuery 是否已赋值
                     * @return IsPartitionQuery 是否已赋值
                     * 
                     */
                    bool IsPartitionQueryHasBeenSet() const;

                    /**
                     * 获取合规组ID
                     * @return ComplianceId 合规组ID
                     * 
                     */
                    int64_t GetComplianceId() const;

                    /**
                     * 设置合规组ID
                     * @param _complianceId 合规组ID
                     * 
                     */
                    void SetComplianceId(const int64_t& _complianceId);

                    /**
                     * 判断参数 ComplianceId 是否已赋值
                     * @return ComplianceId 是否已赋值
                     * 
                     */
                    bool ComplianceIdHasBeenSet() const;

                private:

                    /**
                     * 表ID
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * 页码
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页大小
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 过滤器
                     */
                    std::vector<Filter> m_filterSet;
                    bool m_filterSetHasBeenSet;

                    /**
                     * 排序字段
                     */
                    std::vector<OrderField> m_orderFieldSet;
                    bool m_orderFieldSetHasBeenSet;

                    /**
                     * 是否查询分区字段，默认false
                     */
                    bool m_isPartitionQuery;
                    bool m_isPartitionQueryHasBeenSet;

                    /**
                     * 合规组ID
                     */
                    int64_t m_complianceId;
                    bool m_complianceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBECOLUMNSMETAREQUEST_H_
