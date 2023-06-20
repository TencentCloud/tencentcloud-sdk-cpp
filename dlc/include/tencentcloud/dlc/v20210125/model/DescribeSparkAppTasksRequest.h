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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESPARKAPPTASKSREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESPARKAPPTASKSREQUEST_H_

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
                * DescribeSparkAppTasks请求参数结构体
                */
                class DescribeSparkAppTasksRequest : public AbstractModel
                {
                public:
                    DescribeSparkAppTasksRequest();
                    ~DescribeSparkAppTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取spark作业Id
                     * @return JobId spark作业Id
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置spark作业Id
                     * @param _jobId spark作业Id
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取分页查询偏移量
                     * @return Offset 分页查询偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页查询偏移量
                     * @param _offset 分页查询偏移量
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页查询Limit
                     * @return Limit 分页查询Limit
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页查询Limit
                     * @param _limit 分页查询Limit
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取执行实例id
                     * @return TaskId 执行实例id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置执行实例id
                     * @param _taskId 执行实例id
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取更新时间起始点，支持格式：yyyy-MM-dd HH:mm:ss
                     * @return StartTime 更新时间起始点，支持格式：yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置更新时间起始点，支持格式：yyyy-MM-dd HH:mm:ss
                     * @param _startTime 更新时间起始点，支持格式：yyyy-MM-dd HH:mm:ss
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
                     * 获取更新时间截止点，支持格式：yyyy-MM-dd HH:mm:ss
                     * @return EndTime 更新时间截止点，支持格式：yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置更新时间截止点，支持格式：yyyy-MM-dd HH:mm:ss
                     * @param _endTime 更新时间截止点，支持格式：yyyy-MM-dd HH:mm:ss
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
                     * 获取按照该参数过滤,支持task-state
                     * @return Filters 按照该参数过滤,支持task-state
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置按照该参数过滤,支持task-state
                     * @param _filters 按照该参数过滤,支持task-state
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
                     * spark作业Id
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 分页查询偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页查询Limit
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 执行实例id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 更新时间起始点，支持格式：yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 更新时间截止点，支持格式：yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 按照该参数过滤,支持task-state
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESPARKAPPTASKSREQUEST_H_
