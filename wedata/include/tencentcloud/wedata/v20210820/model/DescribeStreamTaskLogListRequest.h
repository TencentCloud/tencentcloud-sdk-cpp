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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBESTREAMTASKLOGLISTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBESTREAMTASKLOGLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeStreamTaskLogList请求参数结构体
                */
                class DescribeStreamTaskLogListRequest : public AbstractModel
                {
                public:
                    DescribeStreamTaskLogListRequest();
                    ~DescribeStreamTaskLogListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>项目ID</p>
                     * @return ProjectId <p>项目ID</p>
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>项目ID</p>
                     * @param _projectId <p>项目ID</p>
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>任务ID</p>
                     * @return TaskId <p>任务ID</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务ID</p>
                     * @param _taskId <p>任务ID</p>
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
                     * 获取<p>作业ID</p>
                     * @return JobId <p>作业ID</p>
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置<p>作业ID</p>
                     * @param _jobId <p>作业ID</p>
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
                     * 获取<p>结束时间</p>
                     * @return EndTime <p>结束时间</p>
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置<p>结束时间</p>
                     * @param _endTime <p>结束时间</p>
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
                     * 获取<p>开始时间</p>
                     * @return StartTime <p>开始时间</p>
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置<p>开始时间</p>
                     * @param _startTime <p>开始时间</p>
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
                     * 获取<p>container名字</p>
                     * @return Container <p>container名字</p>
                     * 
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置<p>container名字</p>
                     * @param _container <p>container名字</p>
                     * 
                     */
                    void SetContainer(const std::string& _container);

                    /**
                     * 判断参数 Container 是否已赋值
                     * @return Container 是否已赋值
                     * 
                     */
                    bool ContainerHasBeenSet() const;

                    /**
                     * 获取<p>条数</p>
                     * @return Limit <p>条数</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>条数</p>
                     * @param _limit <p>条数</p>
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
                     * 获取<p>排序类型 desc asc</p>
                     * @return OrderType <p>排序类型 desc asc</p>
                     * 
                     */
                    std::string GetOrderType() const;

                    /**
                     * 设置<p>排序类型 desc asc</p>
                     * @param _orderType <p>排序类型 desc asc</p>
                     * 
                     */
                    void SetOrderType(const std::string& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取<p>作业运行的实例ID</p>
                     * @return RunningOrderId <p>作业运行的实例ID</p>
                     * 
                     */
                    uint64_t GetRunningOrderId() const;

                    /**
                     * 设置<p>作业运行的实例ID</p>
                     * @param _runningOrderId <p>作业运行的实例ID</p>
                     * 
                     */
                    void SetRunningOrderId(const uint64_t& _runningOrderId);

                    /**
                     * 判断参数 RunningOrderId 是否已赋值
                     * @return RunningOrderId 是否已赋值
                     * 
                     */
                    bool RunningOrderIdHasBeenSet() const;

                    /**
                     * 获取<p>关键字</p>
                     * @return Keyword <p>关键字</p>
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置<p>关键字</p>
                     * @param _keyword <p>关键字</p>
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取<p>任务类型，不传时按 <code>INTEGRATION</code> 处理 </p><p>枚举值：</p><ul><li>INTEGRATION： 集成任务</li><li>VALIDATE： 对账任务</li></ul>
                     * @return JobType <p>任务类型，不传时按 <code>INTEGRATION</code> 处理 </p><p>枚举值：</p><ul><li>INTEGRATION： 集成任务</li><li>VALIDATE： 对账任务</li></ul>
                     * 
                     */
                    std::string GetJobType() const;

                    /**
                     * 设置<p>任务类型，不传时按 <code>INTEGRATION</code> 处理 </p><p>枚举值：</p><ul><li>INTEGRATION： 集成任务</li><li>VALIDATE： 对账任务</li></ul>
                     * @param _jobType <p>任务类型，不传时按 <code>INTEGRATION</code> 处理 </p><p>枚举值：</p><ul><li>INTEGRATION： 集成任务</li><li>VALIDATE： 对账任务</li></ul>
                     * 
                     */
                    void SetJobType(const std::string& _jobType);

                    /**
                     * 判断参数 JobType 是否已赋值
                     * @return JobType 是否已赋值
                     * 
                     */
                    bool JobTypeHasBeenSet() const;

                private:

                    /**
                     * <p>项目ID</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>任务ID</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>作业ID</p>
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * <p>结束时间</p>
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>开始时间</p>
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>container名字</p>
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * <p>条数</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>排序类型 desc asc</p>
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * <p>作业运行的实例ID</p>
                     */
                    uint64_t m_runningOrderId;
                    bool m_runningOrderIdHasBeenSet;

                    /**
                     * <p>关键字</p>
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * <p>任务类型，不传时按 <code>INTEGRATION</code> 处理 </p><p>枚举值：</p><ul><li>INTEGRATION： 集成任务</li><li>VALIDATE： 对账任务</li></ul>
                     */
                    std::string m_jobType;
                    bool m_jobTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBESTREAMTASKLOGLISTREQUEST_H_
