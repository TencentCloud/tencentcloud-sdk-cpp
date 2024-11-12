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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEPOLICYDETECT_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEPOLICYDETECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 基线检测策略
                */
                class BaselinePolicyDetect : public AbstractModel
                {
                public:
                    BaselinePolicyDetect();
                    ~BaselinePolicyDetect() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略Id
                     * @return PolicyId 策略Id
                     * 
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 设置策略Id
                     * @param _policyId 策略Id
                     * 
                     */
                    void SetPolicyId(const int64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取检测任务Id
                     * @return TaskId 检测任务Id
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置检测任务Id
                     * @param _taskId 检测任务Id
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
                     * 获取关联主机数
                     * @return HostCount 关联主机数
                     * 
                     */
                    int64_t GetHostCount() const;

                    /**
                     * 设置关联主机数
                     * @param _hostCount 关联主机数
                     * 
                     */
                    void SetHostCount(const int64_t& _hostCount);

                    /**
                     * 判断参数 HostCount 是否已赋值
                     * @return HostCount 是否已赋值
                     * 
                     */
                    bool HostCountHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
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
                     * 获取结束时间
                     * @return FinishTime 结束时间
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置结束时间
                     * @param _finishTime 结束时间
                     * 
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取策略名称
                     * @return PolicyName 策略名称
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置策略名称
                     * @param _policyName 策略名称
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取成功主机数
                     * @return SuccessCount 成功主机数
                     * 
                     */
                    int64_t GetSuccessCount() const;

                    /**
                     * 设置成功主机数
                     * @param _successCount 成功主机数
                     * 
                     */
                    void SetSuccessCount(const int64_t& _successCount);

                    /**
                     * 判断参数 SuccessCount 是否已赋值
                     * @return SuccessCount 是否已赋值
                     * 
                     */
                    bool SuccessCountHasBeenSet() const;

                    /**
                     * 获取失败主技数
                     * @return FailedCount 失败主技数
                     * 
                     */
                    int64_t GetFailedCount() const;

                    /**
                     * 设置失败主技数
                     * @param _failedCount 失败主技数
                     * 
                     */
                    void SetFailedCount(const int64_t& _failedCount);

                    /**
                     * 判断参数 FailedCount 是否已赋值
                     * @return FailedCount 是否已赋值
                     * 
                     */
                    bool FailedCountHasBeenSet() const;

                    /**
                     * 获取失败主机数
                     * @return TimeoutCount 失败主机数
                     * 
                     */
                    int64_t GetTimeoutCount() const;

                    /**
                     * 设置失败主机数
                     * @param _timeoutCount 失败主机数
                     * 
                     */
                    void SetTimeoutCount(const int64_t& _timeoutCount);

                    /**
                     * 判断参数 TimeoutCount 是否已赋值
                     * @return TimeoutCount 是否已赋值
                     * 
                     */
                    bool TimeoutCountHasBeenSet() const;

                    /**
                     * 获取1:检测中 2:检测完成
                     * @return PolicyDetectStatus 1:检测中 2:检测完成
                     * 
                     */
                    int64_t GetPolicyDetectStatus() const;

                    /**
                     * 设置1:检测中 2:检测完成
                     * @param _policyDetectStatus 1:检测中 2:检测完成
                     * 
                     */
                    void SetPolicyDetectStatus(const int64_t& _policyDetectStatus);

                    /**
                     * 判断参数 PolicyDetectStatus 是否已赋值
                     * @return PolicyDetectStatus 是否已赋值
                     * 
                     */
                    bool PolicyDetectStatusHasBeenSet() const;

                private:

                    /**
                     * 策略Id
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 检测任务Id
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 关联主机数
                     */
                    int64_t m_hostCount;
                    bool m_hostCountHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * 策略名称
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 成功主机数
                     */
                    int64_t m_successCount;
                    bool m_successCountHasBeenSet;

                    /**
                     * 失败主技数
                     */
                    int64_t m_failedCount;
                    bool m_failedCountHasBeenSet;

                    /**
                     * 失败主机数
                     */
                    int64_t m_timeoutCount;
                    bool m_timeoutCountHasBeenSet;

                    /**
                     * 1:检测中 2:检测完成
                     */
                    int64_t m_policyDetectStatus;
                    bool m_policyDetectStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEPOLICYDETECT_H_
