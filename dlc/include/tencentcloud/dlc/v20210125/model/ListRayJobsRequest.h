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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_LISTRAYJOBSREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_LISTRAYJOBSREQUEST_H_

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
                * ListRayJobs请求参数结构体
                */
                class ListRayJobsRequest : public AbstractModel
                {
                public:
                    ListRayJobsRequest();
                    ~ListRayJobsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取当前页码（从1开始）
                     * @return Page 当前页码（从1开始）
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置当前页码（从1开始）
                     * @param _page 当前页码（从1开始）
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
                     * 获取页数
                     * @return PageSize 页数
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置页数
                     * @param _pageSize 页数
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
                     * 获取过滤条件列表（列表的字段名称）
                     * @return Filters 过滤条件列表（列表的字段名称）
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件列表（列表的字段名称）
                     * @param _filters 过滤条件列表（列表的字段名称）
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
                     * 获取提交时间起始过滤-时间戳（毫秒，可选）
                     * @return StartTime 提交时间起始过滤-时间戳（毫秒，可选）
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置提交时间起始过滤-时间戳（毫秒，可选）
                     * @param _startTime 提交时间起始过滤-时间戳（毫秒，可选）
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取提交时间截止过滤-时间戳（毫秒，可选）
                     * @return EndTime 提交时间截止过滤-时间戳（毫秒，可选）
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置提交时间截止过滤-时间戳（毫秒，可选）
                     * @param _endTime 提交时间截止过滤-时间戳（毫秒，可选）
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取排序字段列表（列表字段）
                     * @return SortFields 排序字段列表（列表字段）
                     * 
                     */
                    std::vector<SortField> GetSortFields() const;

                    /**
                     * 设置排序字段列表（列表字段）
                     * @param _sortFields 排序字段列表（列表字段）
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
                     * 当前页码（从1开始）
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 页数
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 过滤条件列表（列表的字段名称）
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 提交时间起始过滤-时间戳（毫秒，可选）
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 提交时间截止过滤-时间戳（毫秒，可选）
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 排序字段列表（列表字段）
                     */
                    std::vector<SortField> m_sortFields;
                    bool m_sortFieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_LISTRAYJOBSREQUEST_H_
