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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBEDATARETRIEVALTASKREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBEDATARETRIEVALTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/Filter.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeDataRetrievalTask请求参数结构体
                */
                class DescribeDataRetrievalTaskRequest : public AbstractModel
                {
                public:
                    DescribeDataRetrievalTaskRequest();
                    ~DescribeDataRetrievalTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>开始时间。须早于 EndTime ，仅支持查询最近3个月内的任务数据</p><p>参数格式：2024-11-19 10:15:37</p>
                     * @return StartTime <p>开始时间。须早于 EndTime ，仅支持查询最近3个月内的任务数据</p><p>参数格式：2024-11-19 10:15:37</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>开始时间。须早于 EndTime ，仅支持查询最近3个月内的任务数据</p><p>参数格式：2024-11-19 10:15:37</p>
                     * @param _startTime <p>开始时间。须早于 EndTime ，仅支持查询最近3个月内的任务数据</p><p>参数格式：2024-11-19 10:15:37</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>结束时间。须晚于 StartTime ，仅支持查询最近3个月内的任务数据。</p><p>参数格式：2024-10-  19 10:15:37</p>
                     * @return EndTime <p>结束时间。须晚于 StartTime ，仅支持查询最近3个月内的任务数据。</p><p>参数格式：2024-10-  19 10:15:37</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间。须晚于 StartTime ，仅支持查询最近3个月内的任务数据。</p><p>参数格式：2024-10-  19 10:15:37</p>
                     * @param _endTime <p>结束时间。须晚于 StartTime ，仅支持查询最近3个月内的任务数据。</p><p>参数格式：2024-10-  19 10:15:37</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>数据检索ID示例值：dataretrieval-123456</p>
                     * @return DataRetrievalId <p>数据检索ID示例值：dataretrieval-123456</p>
                     * 
                     */
                    std::string GetDataRetrievalId() const;

                    /**
                     * 设置<p>数据检索ID示例值：dataretrieval-123456</p>
                     * @param _dataRetrievalId <p>数据检索ID示例值：dataretrieval-123456</p>
                     * 
                     */
                    void SetDataRetrievalId(const std::string& _dataRetrievalId);

                    /**
                     * 判断参数 DataRetrievalId 是否已赋值
                     * @return DataRetrievalId 是否已赋值
                     * 
                     */
                    bool DataRetrievalIdHasBeenSet() const;

                    /**
                     * 获取<p>分页的偏移量，默认值为0。 示例值：0</p>
                     * @return Offset <p>分页的偏移量，默认值为0。 示例值：0</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>分页的偏移量，默认值为0。 示例值：0</p>
                     * @param _offset <p>分页的偏移量，默认值为0。 示例值：0</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>分页单页限制数目，默认值为20，最大值100。 示例值：20</p>
                     * @return Limit <p>分页单页限制数目，默认值为20，最大值100。 示例值：20</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>分页单页限制数目，默认值为20，最大值100。 示例值：20</p>
                     * @param _limit <p>分页单页限制数目，默认值为20，最大值100。 示例值：20</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>DataRetrievalTaskID按照【数据检索任务id】进行过滤。类型：String</p>
                     * @return Filters <p>DataRetrievalTaskID按照【数据检索任务id】进行过滤。类型：String</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>DataRetrievalTaskID按照【数据检索任务id】进行过滤。类型：String</p>
                     * @param _filters <p>DataRetrievalTaskID按照【数据检索任务id】进行过滤。类型：String</p>
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
                     * <p>开始时间。须早于 EndTime ，仅支持查询最近3个月内的任务数据</p><p>参数格式：2024-11-19 10:15:37</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间。须晚于 StartTime ，仅支持查询最近3个月内的任务数据。</p><p>参数格式：2024-10-  19 10:15:37</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>数据检索ID示例值：dataretrieval-123456</p>
                     */
                    std::string m_dataRetrievalId;
                    bool m_dataRetrievalIdHasBeenSet;

                    /**
                     * <p>分页的偏移量，默认值为0。 示例值：0</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>分页单页限制数目，默认值为20，最大值100。 示例值：20</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>DataRetrievalTaskID按照【数据检索任务id】进行过滤。类型：String</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBEDATARETRIEVALTASKREQUEST_H_
