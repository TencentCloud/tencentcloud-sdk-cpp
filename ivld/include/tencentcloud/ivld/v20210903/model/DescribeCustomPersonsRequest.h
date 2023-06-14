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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_DESCRIBECUSTOMPERSONSREQUEST_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_DESCRIBECUSTOMPERSONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ivld/v20210903/model/SortBy.h>
#include <tencentcloud/ivld/v20210903/model/CustomPersonFilter.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * DescribeCustomPersons请求参数结构体
                */
                class DescribeCustomPersonsRequest : public AbstractModel
                {
                public:
                    DescribeCustomPersonsRequest();
                    ~DescribeCustomPersonsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页序号，从1开始
                     * @return PageNumber 分页序号，从1开始
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置分页序号，从1开始
                     * @param _pageNumber 分页序号，从1开始
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
                     * 获取分页数据行数，最多50
                     * @return PageSize 分页数据行数，最多50
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置分页数据行数，最多50
                     * @param _pageSize 分页数据行数，最多50
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
                     * 获取排序信息，默认倒序
                     * @return SortBy 排序信息，默认倒序
                     * 
                     */
                    SortBy GetSortBy() const;

                    /**
                     * 设置排序信息，默认倒序
                     * @param _sortBy 排序信息，默认倒序
                     * 
                     */
                    void SetSortBy(const SortBy& _sortBy);

                    /**
                     * 判断参数 SortBy 是否已赋值
                     * @return SortBy 是否已赋值
                     * 
                     */
                    bool SortByHasBeenSet() const;

                    /**
                     * 获取自定义人物过滤条件
                     * @return Filter 自定义人物过滤条件
                     * 
                     */
                    CustomPersonFilter GetFilter() const;

                    /**
                     * 设置自定义人物过滤条件
                     * @param _filter 自定义人物过滤条件
                     * 
                     */
                    void SetFilter(const CustomPersonFilter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                private:

                    /**
                     * 分页序号，从1开始
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 分页数据行数，最多50
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 排序信息，默认倒序
                     */
                    SortBy m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * 自定义人物过滤条件
                     */
                    CustomPersonFilter m_filter;
                    bool m_filterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_DESCRIBECUSTOMPERSONSREQUEST_H_
