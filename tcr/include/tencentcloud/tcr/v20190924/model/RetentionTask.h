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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_RETENTIONTASK_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_RETENTIONTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * 版本保留执行的规则
                */
                class RetentionTask : public AbstractModel
                {
                public:
                    RetentionTask();
                    ~RetentionTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务Id
                     * @return TaskId 任务Id
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置任务Id
                     * @param _taskId 任务Id
                     * 
                     */
                    void SetTaskId(const int64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取所属的规则执行Id
                     * @return ExecutionId 所属的规则执行Id
                     * 
                     */
                    int64_t GetExecutionId() const;

                    /**
                     * 设置所属的规则执行Id
                     * @param _executionId 所属的规则执行Id
                     * 
                     */
                    void SetExecutionId(const int64_t& _executionId);

                    /**
                     * 判断参数 ExecutionId 是否已赋值
                     * @return ExecutionId 是否已赋值
                     * 
                     */
                    bool ExecutionIdHasBeenSet() const;

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
                     * 获取任务的执行状态，Failed, Succeed, Stopped, InProgress
                     * @return Status 任务的执行状态，Failed, Succeed, Stopped, InProgress
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务的执行状态，Failed, Succeed, Stopped, InProgress
                     * @param _status 任务的执行状态，Failed, Succeed, Stopped, InProgress
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
                     * 获取总tag数
                     * @return Total 总tag数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置总tag数
                     * @param _total 总tag数
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取保留tag数
                     * @return Retained 保留tag数
                     * 
                     */
                    int64_t GetRetained() const;

                    /**
                     * 设置保留tag数
                     * @param _retained 保留tag数
                     * 
                     */
                    void SetRetained(const int64_t& _retained);

                    /**
                     * 判断参数 Retained 是否已赋值
                     * @return Retained 是否已赋值
                     * 
                     */
                    bool RetainedHasBeenSet() const;

                    /**
                     * 获取应用的仓库
                     * @return Repository 应用的仓库
                     * 
                     */
                    std::string GetRepository() const;

                    /**
                     * 设置应用的仓库
                     * @param _repository 应用的仓库
                     * 
                     */
                    void SetRepository(const std::string& _repository);

                    /**
                     * 判断参数 Repository 是否已赋值
                     * @return Repository 是否已赋值
                     * 
                     */
                    bool RepositoryHasBeenSet() const;

                private:

                    /**
                     * 任务Id
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 所属的规则执行Id
                     */
                    int64_t m_executionId;
                    bool m_executionIdHasBeenSet;

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
                     * 任务的执行状态，Failed, Succeed, Stopped, InProgress
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 总tag数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 保留tag数
                     */
                    int64_t m_retained;
                    bool m_retainedHasBeenSet;

                    /**
                     * 应用的仓库
                     */
                    std::string m_repository;
                    bool m_repositoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_RETENTIONTASK_H_
