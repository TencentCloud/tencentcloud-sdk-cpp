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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_CREATEAUTOCALLOUTTASKREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_CREATEAUTOCALLOUTTASKREQUEST_H_

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
                * CreateAutoCalloutTask请求参数结构体
                */
                class CreateAutoCalloutTaskRequest : public AbstractModel
                {
                public:
                    CreateAutoCalloutTaskRequest();
                    ~CreateAutoCalloutTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * @return SdkAppId 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * @param _sdkAppId 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取任务起始时间戳，Unix 秒级时间戳
                     * @return NotBefore 任务起始时间戳，Unix 秒级时间戳
                     * 
                     */
                    int64_t GetNotBefore() const;

                    /**
                     * 设置任务起始时间戳，Unix 秒级时间戳
                     * @param _notBefore 任务起始时间戳，Unix 秒级时间戳
                     * 
                     */
                    void SetNotBefore(const int64_t& _notBefore);

                    /**
                     * 判断参数 NotBefore 是否已赋值
                     * @return NotBefore 是否已赋值
                     * 
                     */
                    bool NotBeforeHasBeenSet() const;

                    /**
                     * 获取被叫号码列表
                     * @return Callees 被叫号码列表
                     * 
                     */
                    std::vector<std::string> GetCallees() const;

                    /**
                     * 设置被叫号码列表
                     * @param _callees 被叫号码列表
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
                     * 获取主叫号码列表
                     * @return Callers 主叫号码列表
                     * 
                     */
                    std::vector<std::string> GetCallers() const;

                    /**
                     * 设置主叫号码列表
                     * @param _callers 主叫号码列表
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
                     * 获取呼叫使用的 IVR Id，不填时需要填写 AIAgentId
                     * @return IvrId 呼叫使用的 IVR Id，不填时需要填写 AIAgentId
                     * 
                     */
                    uint64_t GetIvrId() const;

                    /**
                     * 设置呼叫使用的 IVR Id，不填时需要填写 AIAgentId
                     * @param _ivrId 呼叫使用的 IVR Id，不填时需要填写 AIAgentId
                     * 
                     */
                    void SetIvrId(const uint64_t& _ivrId);

                    /**
                     * 判断参数 IvrId 是否已赋值
                     * @return IvrId 是否已赋值
                     * 
                     */
                    bool IvrIdHasBeenSet() const;

                    /**
                     * 获取任务名
                     * @return Name 任务名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置任务名
                     * @param _name 任务名
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
                     * 获取任务描述
                     * @return Description 任务描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置任务描述
                     * @param _description 任务描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取任务停止时间戳，Unix 秒级时间戳
                     * @return NotAfter 任务停止时间戳，Unix 秒级时间戳
                     * 
                     */
                    int64_t GetNotAfter() const;

                    /**
                     * 设置任务停止时间戳，Unix 秒级时间戳
                     * @param _notAfter 任务停止时间戳，Unix 秒级时间戳
                     * 
                     */
                    void SetNotAfter(const int64_t& _notAfter);

                    /**
                     * 判断参数 NotAfter 是否已赋值
                     * @return NotAfter 是否已赋值
                     * 
                     */
                    bool NotAfterHasBeenSet() const;

                    /**
                     * 获取最大尝试次数，1-3 次
                     * @return Tries 最大尝试次数，1-3 次
                     * 
                     */
                    uint64_t GetTries() const;

                    /**
                     * 设置最大尝试次数，1-3 次
                     * @param _tries 最大尝试次数，1-3 次
                     * 
                     */
                    void SetTries(const uint64_t& _tries);

                    /**
                     * 判断参数 Tries 是否已赋值
                     * @return Tries 是否已赋值
                     * 
                     */
                    bool TriesHasBeenSet() const;

                    /**
                     * 获取自定义变量（仅高级版支持）
                     * @return Variables 自定义变量（仅高级版支持）
                     * 
                     */
                    std::vector<Variable> GetVariables() const;

                    /**
                     * 设置自定义变量（仅高级版支持）
                     * @param _variables 自定义变量（仅高级版支持）
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

                    /**
                     * 获取智能体 ID，不填写时需要填写 IvrId
                     * @return AIAgentId 智能体 ID，不填写时需要填写 IvrId
                     * 
                     */
                    int64_t GetAIAgentId() const;

                    /**
                     * 设置智能体 ID，不填写时需要填写 IvrId
                     * @param _aIAgentId 智能体 ID，不填写时需要填写 IvrId
                     * 
                     */
                    void SetAIAgentId(const int64_t& _aIAgentId);

                    /**
                     * 判断参数 AIAgentId 是否已赋值
                     * @return AIAgentId 是否已赋值
                     * 
                     */
                    bool AIAgentIdHasBeenSet() const;

                private:

                    /**
                     * 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 任务起始时间戳，Unix 秒级时间戳
                     */
                    int64_t m_notBefore;
                    bool m_notBeforeHasBeenSet;

                    /**
                     * 被叫号码列表
                     */
                    std::vector<std::string> m_callees;
                    bool m_calleesHasBeenSet;

                    /**
                     * 主叫号码列表
                     */
                    std::vector<std::string> m_callers;
                    bool m_callersHasBeenSet;

                    /**
                     * 呼叫使用的 IVR Id，不填时需要填写 AIAgentId
                     */
                    uint64_t m_ivrId;
                    bool m_ivrIdHasBeenSet;

                    /**
                     * 任务名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 任务描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 任务停止时间戳，Unix 秒级时间戳
                     */
                    int64_t m_notAfter;
                    bool m_notAfterHasBeenSet;

                    /**
                     * 最大尝试次数，1-3 次
                     */
                    uint64_t m_tries;
                    bool m_triesHasBeenSet;

                    /**
                     * 自定义变量（仅高级版支持）
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

                    /**
                     * 智能体 ID，不填写时需要填写 IvrId
                     */
                    int64_t m_aIAgentId;
                    bool m_aIAgentIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_CREATEAUTOCALLOUTTASKREQUEST_H_
