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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBEJOBSREQUEST_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBEJOBSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * DescribeJobs请求参数结构体
                */
                class DescribeJobsRequest : public AbstractModel
                {
                public:
                    DescribeJobsRequest();
                    ~DescribeJobsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取场景ID数组
                     * @return ScenarioIds 场景ID数组
                     * 
                     */
                    std::vector<std::string> GetScenarioIds() const;

                    /**
                     * 设置场景ID数组
                     * @param _scenarioIds 场景ID数组
                     * 
                     */
                    void SetScenarioIds(const std::vector<std::string>& _scenarioIds);

                    /**
                     * 判断参数 ScenarioIds 是否已赋值
                     * @return ScenarioIds 是否已赋值
                     * 
                     */
                    bool ScenarioIdsHasBeenSet() const;

                    /**
                     * 获取项目ID数组
                     * @return ProjectIds 项目ID数组
                     * 
                     */
                    std::vector<std::string> GetProjectIds() const;

                    /**
                     * 设置项目ID数组
                     * @param _projectIds 项目ID数组
                     * 
                     */
                    void SetProjectIds(const std::vector<std::string>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     * 
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取分页起始位置
                     * @return Offset 分页起始位置
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页起始位置
                     * @param _offset 分页起始位置
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
                     * 获取每页最大数目
                     * @return Limit 每页最大数目
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页最大数目
                     * @param _limit 每页最大数目
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
                     * 获取任务ID数组
                     * @return JobIds 任务ID数组
                     * 
                     */
                    std::vector<std::string> GetJobIds() const;

                    /**
                     * 设置任务ID数组
                     * @param _jobIds 任务ID数组
                     * 
                     */
                    void SetJobIds(const std::vector<std::string>& _jobIds);

                    /**
                     * 判断参数 JobIds 是否已赋值
                     * @return JobIds 是否已赋值
                     * 
                     */
                    bool JobIdsHasBeenSet() const;

                    /**
                     * 获取按字段排序
                     * @return OrderBy 按字段排序
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置按字段排序
                     * @param _orderBy 按字段排序
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取升序/降序
                     * @return Ascend 升序/降序
                     * 
                     */
                    bool GetAscend() const;

                    /**
                     * 设置升序/降序
                     * @param _ascend 升序/降序
                     * 
                     */
                    void SetAscend(const bool& _ascend);

                    /**
                     * 判断参数 Ascend 是否已赋值
                     * @return Ascend 是否已赋值
                     * 
                     */
                    bool AscendHasBeenSet() const;

                    /**
                     * 获取任务开始时间
                     * @return StartTime 任务开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置任务开始时间
                     * @param _startTime 任务开始时间
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
                     * 获取任务结束时间
                     * @return EndTime 任务结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置任务结束时间
                     * @param _endTime 任务结束时间
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
                     * 获取调试任务标记
                     * @return Debug 调试任务标记
                     * 
                     */
                    bool GetDebug() const;

                    /**
                     * 设置调试任务标记
                     * @param _debug 调试任务标记
                     * 
                     */
                    void SetDebug(const bool& _debug);

                    /**
                     * 判断参数 Debug 是否已赋值
                     * @return Debug 是否已赋值
                     * 
                     */
                    bool DebugHasBeenSet() const;

                    /**
                     * 获取任务的状态
                     * @return Status 任务的状态
                     * 
                     */
                    std::vector<int64_t> GetStatus() const;

                    /**
                     * 设置任务的状态
                     * @param _status 任务的状态
                     * 
                     */
                    void SetStatus(const std::vector<int64_t>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 场景ID数组
                     */
                    std::vector<std::string> m_scenarioIds;
                    bool m_scenarioIdsHasBeenSet;

                    /**
                     * 项目ID数组
                     */
                    std::vector<std::string> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * 分页起始位置
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页最大数目
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 任务ID数组
                     */
                    std::vector<std::string> m_jobIds;
                    bool m_jobIdsHasBeenSet;

                    /**
                     * 按字段排序
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 升序/降序
                     */
                    bool m_ascend;
                    bool m_ascendHasBeenSet;

                    /**
                     * 任务开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 任务结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 调试任务标记
                     */
                    bool m_debug;
                    bool m_debugHasBeenSet;

                    /**
                     * 任务的状态
                     */
                    std::vector<int64_t> m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBEJOBSREQUEST_H_
