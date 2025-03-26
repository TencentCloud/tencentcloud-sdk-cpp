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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_CREATEPREDICTIVEDIALINGCAMPAIGNREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_CREATEPREDICTIVEDIALINGCAMPAIGNREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/Variable.h>
#include <tencentcloud/ccc/v20200210/model/CalleeAttribute.h>
#include <tencentcloud/ccc/v20200210/model/TimeRange.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * CreatePredictiveDialingCampaign请求参数结构体
                */
                class CreatePredictiveDialingCampaignRequest : public AbstractModel
                {
                public:
                    CreatePredictiveDialingCampaignRequest();
                    ~CreatePredictiveDialingCampaignRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * @return SdkAppId 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * @param _sdkAppId 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取任务名称
                     * @return Name 任务名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置任务名称
                     * @param _name 任务名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取被叫列表，支持 E.164 或不带国家码形式的号码
                     * @return Callees 被叫列表，支持 E.164 或不带国家码形式的号码
                     * 
                     */
                    std::vector<std::string> GetCallees() const;

                    /**
                     * 设置被叫列表，支持 E.164 或不带国家码形式的号码
                     * @param _callees 被叫列表，支持 E.164 或不带国家码形式的号码
                     * 
                     */
                    void SetCallees(const std::vector<std::string>& _callees);

                    /**
                     * 判断参数 Callees 是否已赋值
                     * @return Callees 是否已赋值
                     * 
                     */
                    bool CalleesHasBeenSet() const;

                    /**
                     * 获取主叫列表，使用管理端展示的号码格式
                     * @return Callers 主叫列表，使用管理端展示的号码格式
                     * 
                     */
                    std::vector<std::string> GetCallers() const;

                    /**
                     * 设置主叫列表，使用管理端展示的号码格式
                     * @param _callers 主叫列表，使用管理端展示的号码格式
                     * 
                     */
                    void SetCallers(const std::vector<std::string>& _callers);

                    /**
                     * 判断参数 Callers 是否已赋值
                     * @return Callers 是否已赋值
                     * 
                     */
                    bool CallersHasBeenSet() const;

                    /**
                     * 获取被叫呼叫顺序 0 随机 1 顺序
                     * @return CallOrder 被叫呼叫顺序 0 随机 1 顺序
                     * 
                     */
                    int64_t GetCallOrder() const;

                    /**
                     * 设置被叫呼叫顺序 0 随机 1 顺序
                     * @param _callOrder 被叫呼叫顺序 0 随机 1 顺序
                     * 
                     */
                    void SetCallOrder(const int64_t& _callOrder);

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
                     * 设置使用的座席技能组 ID
                     * @param _skillGroupId 使用的座席技能组 ID
                     * 
                     */
                    void SetSkillGroupId(const int64_t& _skillGroupId);

                    /**
                     * 判断参数 SkillGroupId 是否已赋值
                     * @return SkillGroupId 是否已赋值
                     * 
                     */
                    bool SkillGroupIdHasBeenSet() const;

                    /**
                     * 获取相同应用内多个任务运行优先级，从高到底 1 - 5
                     * @return Priority 相同应用内多个任务运行优先级，从高到底 1 - 5
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置相同应用内多个任务运行优先级，从高到底 1 - 5
                     * @param _priority 相同应用内多个任务运行优先级，从高到底 1 - 5
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

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
                     * 设置预期呼损率，百分比，5 - 50
                     * @param _expectedAbandonRate 预期呼损率，百分比，5 - 50
                     * 
                     */
                    void SetExpectedAbandonRate(const int64_t& _expectedAbandonRate);

                    /**
                     * 判断参数 ExpectedAbandonRate 是否已赋值
                     * @return ExpectedAbandonRate 是否已赋值
                     * 
                     */
                    bool ExpectedAbandonRateHasBeenSet() const;

                    /**
                     * 获取呼叫重试间隔时间，单位秒，60 - 86400
                     * @return RetryInterval 呼叫重试间隔时间，单位秒，60 - 86400
                     * 
                     */
                    int64_t GetRetryInterval() const;

                    /**
                     * 设置呼叫重试间隔时间，单位秒，60 - 86400
                     * @param _retryInterval 呼叫重试间隔时间，单位秒，60 - 86400
                     * 
                     */
                    void SetRetryInterval(const int64_t& _retryInterval);

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
                     * 设置任务启动时间，Unix 时间戳，到此时间后会自动启动任务
                     * @param _startTime 任务启动时间，Unix 时间戳，到此时间后会自动启动任务
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

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
                     * 设置任务结束时间，Unix 时间戳，到此时间后会自动终止任务
                     * @param _endTime 任务结束时间，Unix 时间戳，到此时间后会自动终止任务
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取指定的 IVR Id
                     * @return IVRId 指定的 IVR Id
                     * 
                     */
                    int64_t GetIVRId() const;

                    /**
                     * 设置指定的 IVR Id
                     * @param _iVRId 指定的 IVR Id
                     * 
                     */
                    void SetIVRId(const int64_t& _iVRId);

                    /**
                     * 判断参数 IVRId 是否已赋值
                     * @return IVRId 是否已赋值
                     * 
                     */
                    bool IVRIdHasBeenSet() const;

                    /**
                     * 获取呼叫重试次数，0 - 2
                     * @return RetryTimes 呼叫重试次数，0 - 2
                     * 
                     */
                    int64_t GetRetryTimes() const;

                    /**
                     * 设置呼叫重试次数，0 - 2
                     * @param _retryTimes 呼叫重试次数，0 - 2
                     * 
                     */
                    void SetRetryTimes(const int64_t& _retryTimes);

                    /**
                     * 判断参数 RetryTimes 是否已赋值
                     * @return RetryTimes 是否已赋值
                     * 
                     */
                    bool RetryTimesHasBeenSet() const;

                    /**
                     * 获取自定义变量
                     * @return Variables 自定义变量
                     * 
                     */
                    std::vector<Variable> GetVariables() const;

                    /**
                     * 设置自定义变量
                     * @param _variables 自定义变量
                     * 
                     */
                    void SetVariables(const std::vector<Variable>& _variables);

                    /**
                     * 判断参数 Variables 是否已赋值
                     * @return Variables 是否已赋值
                     * 
                     */
                    bool VariablesHasBeenSet() const;

                    /**
                     * 获取UUI
                     * @return UUI UUI
                     * 
                     */
                    std::string GetUUI() const;

                    /**
                     * 设置UUI
                     * @param _uUI UUI
                     * 
                     */
                    void SetUUI(const std::string& _uUI);

                    /**
                     * 判断参数 UUI 是否已赋值
                     * @return UUI 是否已赋值
                     * 
                     */
                    bool UUIHasBeenSet() const;

                    /**
                     * 获取被叫属性
                     * @return CalleeAttributes 被叫属性
                     * 
                     */
                    std::vector<CalleeAttribute> GetCalleeAttributes() const;

                    /**
                     * 设置被叫属性
                     * @param _calleeAttributes 被叫属性
                     * 
                     */
                    void SetCalleeAttributes(const std::vector<CalleeAttribute>& _calleeAttributes);

                    /**
                     * 判断参数 CalleeAttributes 是否已赋值
                     * @return CalleeAttributes 是否已赋值
                     * 
                     */
                    bool CalleeAttributesHasBeenSet() const;

                    /**
                     * 获取IANA 时区名称，参考 https://datatracker.ietf.org/doc/html/draft-ietf-netmod-iana-timezones
                     * @return TimeZone IANA 时区名称，参考 https://datatracker.ietf.org/doc/html/draft-ietf-netmod-iana-timezones
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置IANA 时区名称，参考 https://datatracker.ietf.org/doc/html/draft-ietf-netmod-iana-timezones
                     * @param _timeZone IANA 时区名称，参考 https://datatracker.ietf.org/doc/html/draft-ietf-netmod-iana-timezones
                     * 
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                    /**
                     * 获取可用时间段
                     * @return AvailableTime 可用时间段
                     * 
                     */
                    std::vector<TimeRange> GetAvailableTime() const;

                    /**
                     * 设置可用时间段
                     * @param _availableTime 可用时间段
                     * 
                     */
                    void SetAvailableTime(const std::vector<TimeRange>& _availableTime);

                    /**
                     * 判断参数 AvailableTime 是否已赋值
                     * @return AvailableTime 是否已赋值
                     * 
                     */
                    bool AvailableTimeHasBeenSet() const;

                private:

                    /**
                     * 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 任务名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 被叫列表，支持 E.164 或不带国家码形式的号码
                     */
                    std::vector<std::string> m_callees;
                    bool m_calleesHasBeenSet;

                    /**
                     * 主叫列表，使用管理端展示的号码格式
                     */
                    std::vector<std::string> m_callers;
                    bool m_callersHasBeenSet;

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

                    /**
                     * 指定的 IVR Id
                     */
                    int64_t m_iVRId;
                    bool m_iVRIdHasBeenSet;

                    /**
                     * 呼叫重试次数，0 - 2
                     */
                    int64_t m_retryTimes;
                    bool m_retryTimesHasBeenSet;

                    /**
                     * 自定义变量
                     */
                    std::vector<Variable> m_variables;
                    bool m_variablesHasBeenSet;

                    /**
                     * UUI
                     */
                    std::string m_uUI;
                    bool m_uUIHasBeenSet;

                    /**
                     * 被叫属性
                     */
                    std::vector<CalleeAttribute> m_calleeAttributes;
                    bool m_calleeAttributesHasBeenSet;

                    /**
                     * IANA 时区名称，参考 https://datatracker.ietf.org/doc/html/draft-ietf-netmod-iana-timezones
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                    /**
                     * 可用时间段
                     */
                    std::vector<TimeRange> m_availableTime;
                    bool m_availableTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_CREATEPREDICTIVEDIALINGCAMPAIGNREQUEST_H_
