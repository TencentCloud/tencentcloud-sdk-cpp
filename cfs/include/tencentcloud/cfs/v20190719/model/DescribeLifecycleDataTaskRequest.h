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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBELIFECYCLEDATATASKREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBELIFECYCLEDATATASKREQUEST_H_

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
                * DescribeLifecycleDataTask请求参数结构体
                */
                class DescribeLifecycleDataTaskRequest : public AbstractModel
                {
                public:
                    DescribeLifecycleDataTaskRequest();
                    ~DescribeLifecycleDataTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开始时间。须早于 EndTime ，仅支持查询最近3个月内的任务数据。
                     * @return StartTime 开始时间。须早于 EndTime ，仅支持查询最近3个月内的任务数据。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间。须早于 EndTime ，仅支持查询最近3个月内的任务数据。
                     * @param _startTime 开始时间。须早于 EndTime ，仅支持查询最近3个月内的任务数据。
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
                     * 获取结束时间。须晚于 StartTime ，仅支持查询最近3个月内的任务数据。
                     * @return EndTime 结束时间。须晚于 StartTime ，仅支持查询最近3个月内的任务数据。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间。须晚于 StartTime ，仅支持查询最近3个月内的任务数据。
                     * @param _endTime 结束时间。须晚于 StartTime ，仅支持查询最近3个月内的任务数据。
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
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param _taskId 任务ID
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
                     * 获取Offset 分页码	
                     * @return Offset Offset 分页码	
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset 分页码	
                     * @param _offset Offset 分页码	
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
                     * 获取Limit 页面大小	
                     * @return Limit Limit 页面大小	
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Limit 页面大小	
                     * @param _limit Limit 页面大小	
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
                     * 获取过滤条件，TaskName，FileSystemId，Type
                     * @return Filters 过滤条件，TaskName，FileSystemId，Type
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件，TaskName，FileSystemId，Type
                     * @param _filters 过滤条件，TaskName，FileSystemId，Type
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
                     * 获取文件系统版本；v3.1: pcfs/hifs v4.0:Turbo
                     * @return CfsVersion 文件系统版本；v3.1: pcfs/hifs v4.0:Turbo
                     * 
                     */
                    std::string GetCfsVersion() const;

                    /**
                     * 设置文件系统版本；v3.1: pcfs/hifs v4.0:Turbo
                     * @param _cfsVersion 文件系统版本；v3.1: pcfs/hifs v4.0:Turbo
                     * 
                     */
                    void SetCfsVersion(const std::string& _cfsVersion);

                    /**
                     * 判断参数 CfsVersion 是否已赋值
                     * @return CfsVersion 是否已赋值
                     * 
                     */
                    bool CfsVersionHasBeenSet() const;

                private:

                    /**
                     * 开始时间。须早于 EndTime ，仅支持查询最近3个月内的任务数据。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间。须晚于 StartTime ，仅支持查询最近3个月内的任务数据。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Offset 分页码	
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Limit 页面大小	
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 过滤条件，TaskName，FileSystemId，Type
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 文件系统版本；v3.1: pcfs/hifs v4.0:Turbo
                     */
                    std::string m_cfsVersion;
                    bool m_cfsVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBELIFECYCLEDATATASKREQUEST_H_
