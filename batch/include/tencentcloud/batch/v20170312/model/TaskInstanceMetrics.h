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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_TASKINSTANCEMETRICS_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_TASKINSTANCEMETRICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 任务实例统计指标
                */
                class TaskInstanceMetrics : public AbstractModel
                {
                public:
                    TaskInstanceMetrics();
                    ~TaskInstanceMetrics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Submitted个数
                     * @return SubmittedCount Submitted个数
                     * 
                     */
                    int64_t GetSubmittedCount() const;

                    /**
                     * 设置Submitted个数
                     * @param _submittedCount Submitted个数
                     * 
                     */
                    void SetSubmittedCount(const int64_t& _submittedCount);

                    /**
                     * 判断参数 SubmittedCount 是否已赋值
                     * @return SubmittedCount 是否已赋值
                     * 
                     */
                    bool SubmittedCountHasBeenSet() const;

                    /**
                     * 获取Pending个数
                     * @return PendingCount Pending个数
                     * 
                     */
                    int64_t GetPendingCount() const;

                    /**
                     * 设置Pending个数
                     * @param _pendingCount Pending个数
                     * 
                     */
                    void SetPendingCount(const int64_t& _pendingCount);

                    /**
                     * 判断参数 PendingCount 是否已赋值
                     * @return PendingCount 是否已赋值
                     * 
                     */
                    bool PendingCountHasBeenSet() const;

                    /**
                     * 获取Runnable个数
                     * @return RunnableCount Runnable个数
                     * 
                     */
                    int64_t GetRunnableCount() const;

                    /**
                     * 设置Runnable个数
                     * @param _runnableCount Runnable个数
                     * 
                     */
                    void SetRunnableCount(const int64_t& _runnableCount);

                    /**
                     * 判断参数 RunnableCount 是否已赋值
                     * @return RunnableCount 是否已赋值
                     * 
                     */
                    bool RunnableCountHasBeenSet() const;

                    /**
                     * 获取Starting个数
                     * @return StartingCount Starting个数
                     * 
                     */
                    int64_t GetStartingCount() const;

                    /**
                     * 设置Starting个数
                     * @param _startingCount Starting个数
                     * 
                     */
                    void SetStartingCount(const int64_t& _startingCount);

                    /**
                     * 判断参数 StartingCount 是否已赋值
                     * @return StartingCount 是否已赋值
                     * 
                     */
                    bool StartingCountHasBeenSet() const;

                    /**
                     * 获取Running个数
                     * @return RunningCount Running个数
                     * 
                     */
                    int64_t GetRunningCount() const;

                    /**
                     * 设置Running个数
                     * @param _runningCount Running个数
                     * 
                     */
                    void SetRunningCount(const int64_t& _runningCount);

                    /**
                     * 判断参数 RunningCount 是否已赋值
                     * @return RunningCount 是否已赋值
                     * 
                     */
                    bool RunningCountHasBeenSet() const;

                    /**
                     * 获取Succeed个数
                     * @return SucceedCount Succeed个数
                     * 
                     */
                    int64_t GetSucceedCount() const;

                    /**
                     * 设置Succeed个数
                     * @param _succeedCount Succeed个数
                     * 
                     */
                    void SetSucceedCount(const int64_t& _succeedCount);

                    /**
                     * 判断参数 SucceedCount 是否已赋值
                     * @return SucceedCount 是否已赋值
                     * 
                     */
                    bool SucceedCountHasBeenSet() const;

                    /**
                     * 获取FailedInterrupted个数
                     * @return FailedInterruptedCount FailedInterrupted个数
                     * 
                     */
                    int64_t GetFailedInterruptedCount() const;

                    /**
                     * 设置FailedInterrupted个数
                     * @param _failedInterruptedCount FailedInterrupted个数
                     * 
                     */
                    void SetFailedInterruptedCount(const int64_t& _failedInterruptedCount);

                    /**
                     * 判断参数 FailedInterruptedCount 是否已赋值
                     * @return FailedInterruptedCount 是否已赋值
                     * 
                     */
                    bool FailedInterruptedCountHasBeenSet() const;

                    /**
                     * 获取Failed个数
                     * @return FailedCount Failed个数
                     * 
                     */
                    int64_t GetFailedCount() const;

                    /**
                     * 设置Failed个数
                     * @param _failedCount Failed个数
                     * 
                     */
                    void SetFailedCount(const int64_t& _failedCount);

                    /**
                     * 判断参数 FailedCount 是否已赋值
                     * @return FailedCount 是否已赋值
                     * 
                     */
                    bool FailedCountHasBeenSet() const;

                private:

                    /**
                     * Submitted个数
                     */
                    int64_t m_submittedCount;
                    bool m_submittedCountHasBeenSet;

                    /**
                     * Pending个数
                     */
                    int64_t m_pendingCount;
                    bool m_pendingCountHasBeenSet;

                    /**
                     * Runnable个数
                     */
                    int64_t m_runnableCount;
                    bool m_runnableCountHasBeenSet;

                    /**
                     * Starting个数
                     */
                    int64_t m_startingCount;
                    bool m_startingCountHasBeenSet;

                    /**
                     * Running个数
                     */
                    int64_t m_runningCount;
                    bool m_runningCountHasBeenSet;

                    /**
                     * Succeed个数
                     */
                    int64_t m_succeedCount;
                    bool m_succeedCountHasBeenSet;

                    /**
                     * FailedInterrupted个数
                     */
                    int64_t m_failedInterruptedCount;
                    bool m_failedInterruptedCountHasBeenSet;

                    /**
                     * Failed个数
                     */
                    int64_t m_failedCount;
                    bool m_failedCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_TASKINSTANCEMETRICS_H_
