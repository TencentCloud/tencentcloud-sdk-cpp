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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_TASKRETRYSTRATEGY_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_TASKRETRYSTRATEGY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 任务重试策略
                */
                class TaskRetryStrategy : public AbstractModel
                {
                public:
                    TaskRetryStrategy();
                    ~TaskRetryStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取最多重试次数，默认3
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxRetryTimes 最多重试次数，默认3
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxRetryTimes() const;

                    /**
                     * 设置最多重试次数，默认3
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxRetryTimes 最多重试次数，默认3
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxRetryTimes(const int64_t& _maxRetryTimes);

                    /**
                     * 判断参数 MaxRetryTimes 是否已赋值
                     * @return MaxRetryTimes 是否已赋值
                     * 
                     */
                    bool MaxRetryTimesHasBeenSet() const;

                    /**
                     * 获取重试之间等待时间，默认5
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RetryBetweenWaitTime 重试之间等待时间，默认5
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRetryBetweenWaitTime() const;

                    /**
                     * 设置重试之间等待时间，默认5
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _retryBetweenWaitTime 重试之间等待时间，默认5
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRetryBetweenWaitTime(const int64_t& _retryBetweenWaitTime);

                    /**
                     * 判断参数 RetryBetweenWaitTime 是否已赋值
                     * @return RetryBetweenWaitTime 是否已赋值
                     * 
                     */
                    bool RetryBetweenWaitTimeHasBeenSet() const;

                    /**
                     * 获取重试之间等待时间单位
毫秒：MILLISECOND秒：SECOND分钟（默认）：MINUTE小时：HOUR
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RetryBetweenWaitTimeUnit 重试之间等待时间单位
毫秒：MILLISECOND秒：SECOND分钟（默认）：MINUTE小时：HOUR
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRetryBetweenWaitTimeUnit() const;

                    /**
                     * 设置重试之间等待时间单位
毫秒：MILLISECOND秒：SECOND分钟（默认）：MINUTE小时：HOUR
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _retryBetweenWaitTimeUnit 重试之间等待时间单位
毫秒：MILLISECOND秒：SECOND分钟（默认）：MINUTE小时：HOUR
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRetryBetweenWaitTimeUnit(const std::string& _retryBetweenWaitTimeUnit);

                    /**
                     * 判断参数 RetryBetweenWaitTimeUnit 是否已赋值
                     * @return RetryBetweenWaitTimeUnit 是否已赋值
                     * 
                     */
                    bool RetryBetweenWaitTimeUnitHasBeenSet() const;

                    /**
                     * 获取任务运行失败时重试开关，默认为true
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskRunFailureRetrySwitch 任务运行失败时重试开关，默认为true
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetTaskRunFailureRetrySwitch() const;

                    /**
                     * 设置任务运行失败时重试开关，默认为true
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskRunFailureRetrySwitch 任务运行失败时重试开关，默认为true
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskRunFailureRetrySwitch(const bool& _taskRunFailureRetrySwitch);

                    /**
                     * 判断参数 TaskRunFailureRetrySwitch 是否已赋值
                     * @return TaskRunFailureRetrySwitch 是否已赋值
                     * 
                     */
                    bool TaskRunFailureRetrySwitchHasBeenSet() const;

                    /**
                     * 获取任务运行超时时重试开关，默认为false
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskRunTimeoutRetrySwitch 任务运行超时时重试开关，默认为false
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetTaskRunTimeoutRetrySwitch() const;

                    /**
                     * 设置任务运行超时时重试开关，默认为false
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskRunTimeoutRetrySwitch 任务运行超时时重试开关，默认为false
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskRunTimeoutRetrySwitch(const bool& _taskRunTimeoutRetrySwitch);

                    /**
                     * 判断参数 TaskRunTimeoutRetrySwitch 是否已赋值
                     * @return TaskRunTimeoutRetrySwitch 是否已赋值
                     * 
                     */
                    bool TaskRunTimeoutRetrySwitchHasBeenSet() const;

                private:

                    /**
                     * 最多重试次数，默认3
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxRetryTimes;
                    bool m_maxRetryTimesHasBeenSet;

                    /**
                     * 重试之间等待时间，默认5
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_retryBetweenWaitTime;
                    bool m_retryBetweenWaitTimeHasBeenSet;

                    /**
                     * 重试之间等待时间单位
毫秒：MILLISECOND秒：SECOND分钟（默认）：MINUTE小时：HOUR
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_retryBetweenWaitTimeUnit;
                    bool m_retryBetweenWaitTimeUnitHasBeenSet;

                    /**
                     * 任务运行失败时重试开关，默认为true
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_taskRunFailureRetrySwitch;
                    bool m_taskRunFailureRetrySwitchHasBeenSet;

                    /**
                     * 任务运行超时时重试开关，默认为false
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_taskRunTimeoutRetrySwitch;
                    bool m_taskRunTimeoutRetrySwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_TASKRETRYSTRATEGY_H_
