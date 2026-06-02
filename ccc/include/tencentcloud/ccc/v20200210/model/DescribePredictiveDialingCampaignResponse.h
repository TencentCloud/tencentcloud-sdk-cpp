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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEPREDICTIVEDIALINGCAMPAIGNRESPONSE_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEPREDICTIVEDIALINGCAMPAIGNRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/Variable.h>


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
                     * 获取<p>任务 ID</p>
                     * @return CampaignId <p>任务 ID</p>
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
                     * 获取<p>任务名称</p>
                     * @return Name <p>任务名称</p>
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
                     * 获取<p>被叫呼叫顺序 0 随机 1 顺序</p>
                     * @return CallOrder <p>被叫呼叫顺序 0 随机 1 顺序</p>
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
                     * 获取<p>使用的座席技能组 ID</p>
                     * @return SkillGroupId <p>使用的座席技能组 ID</p>
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
                     * 获取<p>指定的 IVR ID</p>
                     * @return IVRId <p>指定的 IVR ID</p>
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
                     * 获取<p>相同应用内多个任务运行优先级，从高到底 1 - 5</p>
                     * @return Priority <p>相同应用内多个任务运行优先级，从高到底 1 - 5</p>
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
                     * 获取<p>预期呼损率，百分比，5 - 50</p>
                     * @return ExpectedAbandonRate <p>预期呼损率，百分比，5 - 50</p>
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
                     * 获取<p>呼叫重试次数，0 - 2</p>
                     * @return RetryTimes <p>呼叫重试次数，0 - 2</p>
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
                     * 获取<p>呼叫重试间隔时间，单位秒，60 - 86400</p>
                     * @return RetryInterval <p>呼叫重试间隔时间，单位秒，60 - 86400</p>
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
                     * 获取<p>任务启动时间，Unix 时间戳，到此时间后会自动启动任务</p>
                     * @return StartTime <p>任务启动时间，Unix 时间戳，到此时间后会自动启动任务</p>
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
                     * 获取<p>任务结束时间，Unix 时间戳，到此时间后会自动终止任务</p>
                     * @return EndTime <p>任务结束时间，Unix 时间戳，到此时间后会自动终止任务</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>自定义变量</p>
                     * @return Variables <p>自定义变量</p>
                     * 
                     */
                    std::vector<Variable> GetVariables() const;

                    /**
                     * 判断参数 Variables 是否已赋值
                     * @return Variables 是否已赋值
                     * 
                     */
                    bool VariablesHasBeenSet() const;

                    /**
                     * 获取<p>UUI</p>
                     * @return UUI <p>UUI</p>
                     * 
                     */
                    std::string GetUUI() const;

                    /**
                     * 判断参数 UUI 是否已赋值
                     * @return UUI 是否已赋值
                     * 
                     */
                    bool UUIHasBeenSet() const;

                    /**
                     * 获取<p>任务状态</p><p>枚举值：</p><ul><li>0： 待开始 </li><li>1： 进行中</li><li>2： 已暂停</li><li>3： 已终止</li><li>4： 已完成</li></ul>
                     * @return Status <p>任务状态</p><p>枚举值：</p><ul><li>0： 待开始 </li><li>1： 进行中</li><li>2： 已暂停</li><li>3： 已终止</li><li>4： 已完成</li></ul>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>任务状态原因 0 正常 1 手动结束 2 超时结束</p>
                     * @return StatusReason <p>任务状态原因 0 正常 1 手动结束 2 超时结束</p>
                     * 
                     */
                    int64_t GetStatusReason() const;

                    /**
                     * 判断参数 StatusReason 是否已赋值
                     * @return StatusReason 是否已赋值
                     * 
                     */
                    bool StatusReasonHasBeenSet() const;

                private:

                    /**
                     * <p>任务 ID</p>
                     */
                    int64_t m_campaignId;
                    bool m_campaignIdHasBeenSet;

                    /**
                     * <p>任务名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>被叫呼叫顺序 0 随机 1 顺序</p>
                     */
                    int64_t m_callOrder;
                    bool m_callOrderHasBeenSet;

                    /**
                     * <p>使用的座席技能组 ID</p>
                     */
                    int64_t m_skillGroupId;
                    bool m_skillGroupIdHasBeenSet;

                    /**
                     * <p>指定的 IVR ID</p>
                     */
                    int64_t m_iVRId;
                    bool m_iVRIdHasBeenSet;

                    /**
                     * <p>相同应用内多个任务运行优先级，从高到底 1 - 5</p>
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * <p>预期呼损率，百分比，5 - 50</p>
                     */
                    int64_t m_expectedAbandonRate;
                    bool m_expectedAbandonRateHasBeenSet;

                    /**
                     * <p>呼叫重试次数，0 - 2</p>
                     */
                    int64_t m_retryTimes;
                    bool m_retryTimesHasBeenSet;

                    /**
                     * <p>呼叫重试间隔时间，单位秒，60 - 86400</p>
                     */
                    int64_t m_retryInterval;
                    bool m_retryIntervalHasBeenSet;

                    /**
                     * <p>任务启动时间，Unix 时间戳，到此时间后会自动启动任务</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>任务结束时间，Unix 时间戳，到此时间后会自动终止任务</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>自定义变量</p>
                     */
                    std::vector<Variable> m_variables;
                    bool m_variablesHasBeenSet;

                    /**
                     * <p>UUI</p>
                     */
                    std::string m_uUI;
                    bool m_uUIHasBeenSet;

                    /**
                     * <p>任务状态</p><p>枚举值：</p><ul><li>0： 待开始 </li><li>1： 进行中</li><li>2： 已暂停</li><li>3： 已终止</li><li>4： 已完成</li></ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>任务状态原因 0 正常 1 手动结束 2 超时结束</p>
                     */
                    int64_t m_statusReason;
                    bool m_statusReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEPREDICTIVEDIALINGCAMPAIGNRESPONSE_H_
