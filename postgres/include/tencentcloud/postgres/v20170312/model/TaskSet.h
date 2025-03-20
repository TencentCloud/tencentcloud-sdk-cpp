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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_TASKSET_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_TASKSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/TaskDetail.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 任务列表信息
                */
                class TaskSet : public AbstractModel
                {
                public:
                    TaskSet();
                    ~TaskSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务ID。
                     * @return TaskId 任务ID。
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置任务ID。
                     * @param _taskId 任务ID。
                     * 
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取任务的类型。
                     * @return TaskType 任务的类型。
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置任务的类型。
                     * @param _taskType 任务的类型。
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取任务实例的实例ID。
                     * @return DBInstanceId 任务实例的实例ID。
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置任务实例的实例ID。
                     * @param _dBInstanceId 任务实例的实例ID。
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取任务的开始时间。
                     * @return StartTime 任务的开始时间。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置任务的开始时间。
                     * @param _startTime 任务的开始时间。
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
                     * 获取任务的结束时间。
                     * @return EndTime 任务的结束时间。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置任务的结束时间。
                     * @param _endTime 任务的结束时间。
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
                     * 获取任务的运行状态，包括Running,Success,WaitSwitch,Fail,Pause。
                     * @return Status 任务的运行状态，包括Running,Success,WaitSwitch,Fail,Pause。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务的运行状态，包括Running,Success,WaitSwitch,Fail,Pause。
                     * @param _status 任务的运行状态，包括Running,Success,WaitSwitch,Fail,Pause。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取任务的执行进度，取值范围0-100。
                     * @return Progress 任务的执行进度，取值范围0-100。
                     * 
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 设置任务的执行进度，取值范围0-100。
                     * @param _progress 任务的执行进度，取值范围0-100。
                     * 
                     */
                    void SetProgress(const uint64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取任务的详情信息
                     * @return TaskDetail 任务的详情信息
                     * 
                     */
                    TaskDetail GetTaskDetail() const;

                    /**
                     * 设置任务的详情信息
                     * @param _taskDetail 任务的详情信息
                     * 
                     */
                    void SetTaskDetail(const TaskDetail& _taskDetail);

                    /**
                     * 判断参数 TaskDetail 是否已赋值
                     * @return TaskDetail 是否已赋值
                     * 
                     */
                    bool TaskDetailHasBeenSet() const;

                private:

                    /**
                     * 任务ID。
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务的类型。
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 任务实例的实例ID。
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * 任务的开始时间。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 任务的结束时间。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 任务的运行状态，包括Running,Success,WaitSwitch,Fail,Pause。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务的执行进度，取值范围0-100。
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 任务的详情信息
                     */
                    TaskDetail m_taskDetail;
                    bool m_taskDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_TASKSET_H_
