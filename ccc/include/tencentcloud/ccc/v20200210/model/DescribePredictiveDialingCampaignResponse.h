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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEPREDICTIVEDIALINGCAMPAIGNRESPONSE_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEPREDICTIVEDIALINGCAMPAIGNRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribePredictiveDialingCampaign返回参数结构体
                */
                class DescribePredictiveDialingCampaignResponse : public AbstractModel
                {
                public:
                    DescribePredictiveDialingCampaignResponse();
                    ~DescribePredictiveDialingCampaignResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务 ID
                     * @return CampaignId 任务 ID
                     * 
                     */
                    int64_t GetCampaignId() const;

                    /**
                     * 判断参数 CampaignId 是否已赋值
                     * @return CampaignId 是否已赋值
                     * 
                     */
                    bool CampaignIdHasBeenSet() const;

                    /**
                     * 获取任务名称
                     * @return Name 任务名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取被叫呼叫顺序 0 随机 1 顺序
                     * @return CallOrder 被叫呼叫顺序 0 随机 1 顺序
                     * 
                     */
                    int64_t GetCallOrder() const;

                    /**
                     * 判断参数 CallOrder 是否已赋值
                     * @return CallOrder 是否已赋值
                     * 
                     */
                    bool CallOrderHasBeenSet() const;

                    /**
                     * 获取使用的座席技能组 ID
                     * @return SkillGroupId 使用的座席技能组 ID
                     * 
                     */
                    int64_t GetSkillGroupId() const;

                    /**
                     * 判断参数 SkillGroupId 是否已赋值
                     * @return SkillGroupId 是否已赋值
                     * 
                     */
                    bool SkillGroupIdHasBeenSet() const;

                    /**
                     * 获取指定的 IVR ID
                     * @return IVRId 指定的 IVR ID
                     * 
                     */
                    int64_t GetIVRId() const;

                    /**
                     * 判断参数 IVRId 是否已赋值
                     * @return IVRId 是否已赋值
                     * 
                     */
                    bool IVRIdHasBeenSet() const;

                    /**
                     * 获取相同应用内多个任务运行优先级，从高到底 1 - 5
                     * @return Priority 相同应用内多个任务运行优先级，从高到底 1 - 5
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取预期呼损率，百分比，5 - 50
                     * @return ExpectedAbandonRate 预期呼损率，百分比，5 - 50
                     * 
                     */
                    int64_t GetExpectedAbandonRate() const;

                    /**
                     * 判断参数 ExpectedAbandonRate 是否已赋值
                     * @return ExpectedAbandonRate 是否已赋值
                     * 
                     */
                    bool ExpectedAbandonRateHasBeenSet() const;

                    /**
                     * 获取呼叫重试次数，0 - 2
                     * @return RetryTimes 呼叫重试次数，0 - 2
                     * 
                     */
                    int64_t GetRetryTimes() const;

                    /**
                     * 判断参数 RetryTimes 是否已赋值
                     * @return RetryTimes 是否已赋值
                     * 
                     */
                    bool RetryTimesHasBeenSet() const;

                    /**
                     * 获取呼叫重试间隔时间，单位秒，60 - 86400
                     * @return RetryInterval 呼叫重试间隔时间，单位秒，60 - 86400
                     * 
                     */
                    int64_t GetRetryInterval() const;

                    /**
                     * 判断参数 RetryInterval 是否已赋值
                     * @return RetryInterval 是否已赋值
                     * 
                     */
                    bool RetryIntervalHasBeenSet() const;

                    /**
                     * 获取任务启动时间，Unix 时间戳，到此时间后会自动启动任务
                     * @return StartTime 任务启动时间，Unix 时间戳，到此时间后会自动启动任务
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取任务结束时间，Unix 时间戳，到此时间后会自动终止任务
                     * @return EndTime 任务结束时间，Unix 时间戳，到此时间后会自动终止任务
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 任务 ID
                     */
                    int64_t m_campaignId;
                    bool m_campaignIdHasBeenSet;

                    /**
                     * 任务名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 被叫呼叫顺序 0 随机 1 顺序
                     */
                    int64_t m_callOrder;
                    bool m_callOrderHasBeenSet;

                    /**
                     * 使用的座席技能组 ID
                     */
                    int64_t m_skillGroupId;
                    bool m_skillGroupIdHasBeenSet;

                    /**
                     * 指定的 IVR ID
                     */
                    int64_t m_iVRId;
                    bool m_iVRIdHasBeenSet;

                    /**
                     * 相同应用内多个任务运行优先级，从高到底 1 - 5
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 预期呼损率，百分比，5 - 50
                     */
                    int64_t m_expectedAbandonRate;
                    bool m_expectedAbandonRateHasBeenSet;

                    /**
                     * 呼叫重试次数，0 - 2
                     */
                    int64_t m_retryTimes;
                    bool m_retryTimesHasBeenSet;

                    /**
                     * 呼叫重试间隔时间，单位秒，60 - 86400
                     */
                    int64_t m_retryInterval;
                    bool m_retryIntervalHasBeenSet;

                    /**
                     * 任务启动时间，Unix 时间戳，到此时间后会自动启动任务
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 任务结束时间，Unix 时间戳，到此时间后会自动终止任务
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEPREDICTIVEDIALINGCAMPAIGNRESPONSE_H_
