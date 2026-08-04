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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEPARTITIONQUEUESREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEPARTITIONQUEUESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/SortField.h>
#include <tencentcloud/dlc/v20210125/model/Filter.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribePartitionQueues请求参数结构体
                */
                class DescribePartitionQueuesRequest : public AbstractModel
                {
                public:
                    DescribePartitionQueuesRequest();
                    ~DescribePartitionQueuesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分区编码
                     * @return PartitionCode 分区编码
                     * 
                     */
                    std::string GetPartitionCode() const;

                    /**
                     * 设置分区编码
                     * @param _partitionCode 分区编码
                     * 
                     */
                    void SetPartitionCode(const std::string& _partitionCode);

                    /**
                     * 判断参数 PartitionCode 是否已赋值
                     * @return PartitionCode 是否已赋值
                     * 
                     */
                    bool PartitionCodeHasBeenSet() const;

                    /**
                     * 获取排序字段列表
                     * @return SortFields 排序字段列表
                     * 
                     */
                    std::vector<SortField> GetSortFields() const;

                    /**
                     * 设置排序字段列表
                     * @param _sortFields 排序字段列表
                     * 
                     */
                    void SetSortFields(const std::vector<SortField>& _sortFields);

                    /**
                     * 判断参数 SortFields 是否已赋值
                     * @return SortFields 是否已赋值
                     * 
                     */
                    bool SortFieldsHasBeenSet() const;

                    /**
                     * 获取筛选条件列表
                     * @return Filters 筛选条件列表
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置筛选条件列表
                     * @param _filters 筛选条件列表
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
                     * 获取页码
                     * @return Page 页码
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置页码
                     * @param _page 页码
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
                     * 获取每页返回数量
                     * @return PageSize 每页返回数量
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置每页返回数量
                     * @param _pageSize 每页返回数量
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * 分区编码
                     */
                    std::string m_partitionCode;
                    bool m_partitionCodeHasBeenSet;

                    /**
                     * 排序字段列表
                     */
                    std::vector<SortField> m_sortFields;
                    bool m_sortFieldsHasBeenSet;

                    /**
                     * 筛选条件列表
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 页码
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 每页返回数量
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEPARTITIONQUEUESREQUEST_H_
