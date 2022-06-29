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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESPARKAPPJOBSREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESPARKAPPJOBSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
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
                * DescribeSparkAppJobs请求参数结构体
                */
                class DescribeSparkAppJobsRequest : public AbstractModel
                {
                public:
                    DescribeSparkAppJobsRequest();
                    ~DescribeSparkAppJobsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取返回结果按照该字段排序
                     * @return SortBy 返回结果按照该字段排序
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置返回结果按照该字段排序
                     * @param SortBy 返回结果按照该字段排序
                     */
                    void SetSortBy(const std::string& _sortBy);

                    /**
                     * 判断参数 SortBy 是否已赋值
                     * @return SortBy 是否已赋值
                     */
                    bool SortByHasBeenSet() const;

                    /**
                     * 获取正序或者倒序，例如：desc
                     * @return Sorting 正序或者倒序，例如：desc
                     */
                    std::string GetSorting() const;

                    /**
                     * 设置正序或者倒序，例如：desc
                     * @param Sorting 正序或者倒序，例如：desc
                     */
                    void SetSorting(const std::string& _sorting);

                    /**
                     * 判断参数 Sorting 是否已赋值
                     * @return Sorting 是否已赋值
                     */
                    bool SortingHasBeenSet() const;

                    /**
                     * 获取按照该参数过滤
                     * @return Filters 按照该参数过滤
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置按照该参数过滤
                     * @param Filters 按照该参数过滤
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取更新时间起始点
                     * @return StartTime 更新时间起始点
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置更新时间起始点
                     * @param StartTime 更新时间起始点
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取更新时间截止点
                     * @return EndTime 更新时间截止点
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置更新时间截止点
                     * @param EndTime 更新时间截止点
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取查询列表偏移量
                     * @return Offset 查询列表偏移量
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置查询列表偏移量
                     * @param Offset 查询列表偏移量
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取查询列表限制数量
                     * @return Limit 查询列表限制数量
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置查询列表限制数量
                     * @param Limit 查询列表限制数量
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 返回结果按照该字段排序
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * 正序或者倒序，例如：desc
                     */
                    std::string m_sorting;
                    bool m_sortingHasBeenSet;

                    /**
                     * 按照该参数过滤
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 更新时间起始点
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 更新时间截止点
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 查询列表偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 查询列表限制数量
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESPARKAPPJOBSREQUEST_H_
