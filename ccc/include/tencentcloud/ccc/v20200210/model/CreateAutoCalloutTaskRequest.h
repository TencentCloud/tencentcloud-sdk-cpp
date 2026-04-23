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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_CREATEAUTOCALLOUTTASKREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_CREATEAUTOCALLOUTTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/Variable.h>
#include <tencentcloud/ccc/v20200210/model/CalleeAttribute.h>
#include <tencentcloud/ccc/v20200210/model/TimeRange.h>
#include <tencentcloud/ccc/v20200210/model/RetryTagItem.h>
#include <tencentcloud/ccc/v20200210/model/AvailableTimeConfig.h>
#include <tencentcloud/ccc/v20200210/model/TriggerStrategyItem.h>


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
                     * 获取<p>应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc</p>
                     * @return SdkAppId <p>应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc</p>
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置<p>应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc</p>
                     * @param _sdkAppId <p>应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc</p>
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
                     * 获取<p>任务起始时间戳，Unix 秒级时间戳</p>
                     * @return NotBefore <p>任务起始时间戳，Unix 秒级时间戳</p>
                     * 
                     */
                    int64_t GetNotBefore() const;

                    /**
                     * 设置<p>任务起始时间戳，Unix 秒级时间戳</p>
                     * @param _notBefore <p>任务起始时间戳，Unix 秒级时间戳</p>
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
                     * 获取<p>被叫号码列表</p>
                     * @return Callees <p>被叫号码列表</p>
                     * 
                     */
                    std::vector<std::string> GetCallees() const;

                    /**
                     * 设置<p>被叫号码列表</p>
                     * @param _callees <p>被叫号码列表</p>
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
                     * 获取<p>主叫号码列表</p>
                     * @return Callers <p>主叫号码列表</p>
                     * 
                     */
                    std::vector<std::string> GetCallers() const;

                    /**
                     * 设置<p>主叫号码列表</p>
                     * @param _callers <p>主叫号码列表</p>
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
                     * 获取<p>呼叫使用的 IVR Id，不填时需要填写 AIAgentId</p>
                     * @return IvrId <p>呼叫使用的 IVR Id，不填时需要填写 AIAgentId</p>
                     * 
                     */
                    uint64_t GetIvrId() const;

                    /**
                     * 设置<p>呼叫使用的 IVR Id，不填时需要填写 AIAgentId</p>
                     * @param _ivrId <p>呼叫使用的 IVR Id，不填时需要填写 AIAgentId</p>
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
                     * 获取<p>任务名</p>
                     * @return Name <p>任务名</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>任务名</p>
                     * @param _name <p>任务名</p>
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
                     * 获取<p>任务描述</p>
                     * @return Description <p>任务描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>任务描述</p>
                     * @param _description <p>任务描述</p>
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
                     * 获取<p>任务停止时间戳，Unix 秒级时间戳</p>
                     * @return NotAfter <p>任务停止时间戳，Unix 秒级时间戳</p>
                     * 
                     */
                    int64_t GetNotAfter() const;

                    /**
                     * 设置<p>任务停止时间戳，Unix 秒级时间戳</p>
                     * @param _notAfter <p>任务停止时间戳，Unix 秒级时间戳</p>
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
                     * 获取<p>最大尝试次数，1-3 次</p>
                     * @return Tries <p>最大尝试次数，1-3 次</p>
                     * 
                     */
                    uint64_t GetTries() const;

                    /**
                     * 设置<p>最大尝试次数，1-3 次</p>
                     * @param _tries <p>最大尝试次数，1-3 次</p>
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
                     * 获取<p>自定义变量（仅高级版支持），CalleeAttributes 字段中使用相同变量会覆盖此处</p>
                     * @return Variables <p>自定义变量（仅高级版支持），CalleeAttributes 字段中使用相同变量会覆盖此处</p>
                     * 
                     */
                    std::vector<Variable> GetVariables() const;

                    /**
                     * 设置<p>自定义变量（仅高级版支持），CalleeAttributes 字段中使用相同变量会覆盖此处</p>
                     * @param _variables <p>自定义变量（仅高级版支持），CalleeAttributes 字段中使用相同变量会覆盖此处</p>
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
                     * 获取<p>用户自定义数据，CalleeAttributes 字段中使用 UUI 会覆盖此处</p>
                     * @return UUI <p>用户自定义数据，CalleeAttributes 字段中使用 UUI 会覆盖此处</p>
                     * 
                     */
                    std::string GetUUI() const;

                    /**
                     * 设置<p>用户自定义数据，CalleeAttributes 字段中使用 UUI 会覆盖此处</p>
                     * @param _uUI <p>用户自定义数据，CalleeAttributes 字段中使用 UUI 会覆盖此处</p>
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
                     * 获取<p>被叫属性</p>
                     * @return CalleeAttributes <p>被叫属性</p>
                     * 
                     */
                    std::vector<CalleeAttribute> GetCalleeAttributes() const;

                    /**
                     * 设置<p>被叫属性</p>
                     * @param _calleeAttributes <p>被叫属性</p>
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
                     * 获取<p>IANA 时区名称，参考 https://datatracker.ietf.org/doc/html/draft-ietf-netmod-iana-timezones</p>
                     * @return TimeZone <p>IANA 时区名称，参考 https://datatracker.ietf.org/doc/html/draft-ietf-netmod-iana-timezones</p>
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置<p>IANA 时区名称，参考 https://datatracker.ietf.org/doc/html/draft-ietf-netmod-iana-timezones</p>
                     * @param _timeZone <p>IANA 时区名称，参考 https://datatracker.ietf.org/doc/html/draft-ietf-netmod-iana-timezones</p>
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
                     * 获取<p>可用时间段</p>
                     * @return AvailableTime <p>可用时间段</p>
                     * 
                     */
                    std::vector<TimeRange> GetAvailableTime() const;

                    /**
                     * 设置<p>可用时间段</p>
                     * @param _availableTime <p>可用时间段</p>
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
                     * 获取<p>智能体 ID，不填写时需要填写 IvrId</p>
                     * @return AIAgentId <p>智能体 ID，不填写时需要填写 IvrId</p>
                     * 
                     */
                    int64_t GetAIAgentId() const;

                    /**
                     * 设置<p>智能体 ID，不填写时需要填写 IvrId</p>
                     * @param _aIAgentId <p>智能体 ID，不填写时需要填写 IvrId</p>
                     * 
                     */
                    void SetAIAgentId(const int64_t& _aIAgentId);

                    /**
                     * 判断参数 AIAgentId 是否已赋值
                     * @return AIAgentId 是否已赋值
                     * 
                     */
                    bool AIAgentIdHasBeenSet() const;

                    /**
                     * 获取<p>任务失败重试时间间隔，重试间隔 600秒～86400 秒</p>
                     * @return RetryInterval <p>任务失败重试时间间隔，重试间隔 600秒～86400 秒</p>
                     * 
                     */
                    int64_t GetRetryInterval() const;

                    /**
                     * 设置<p>任务失败重试时间间隔，重试间隔 600秒～86400 秒</p>
                     * @param _retryInterval <p>任务失败重试时间间隔，重试间隔 600秒～86400 秒</p>
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
                     * 获取<p>最大振铃时长，达到时长阈值自动挂断。 仅自携号码支持当前参数</p>
                     * @return MaxRingTimeoutSecond <p>最大振铃时长，达到时长阈值自动挂断。 仅自携号码支持当前参数</p>
                     * 
                     */
                    int64_t GetMaxRingTimeoutSecond() const;

                    /**
                     * 设置<p>最大振铃时长，达到时长阈值自动挂断。 仅自携号码支持当前参数</p>
                     * @param _maxRingTimeoutSecond <p>最大振铃时长，达到时长阈值自动挂断。 仅自携号码支持当前参数</p>
                     * 
                     */
                    void SetMaxRingTimeoutSecond(const int64_t& _maxRingTimeoutSecond);

                    /**
                     * 判断参数 MaxRingTimeoutSecond 是否已赋值
                     * @return MaxRingTimeoutSecond 是否已赋值
                     * 
                     */
                    bool MaxRingTimeoutSecondHasBeenSet() const;

                    /**
                     * 获取<p>根据限定的挂断原因(可选挂断状态码:202,203,204,205,206,207,208,210,212,213,215,216,217,218,219,221,222,234)进行重试，只对使用AIAgentID的任务有效，挂断状态码说明</p><p><a href="https://cloud.tencent.com/document/product/679/123938">详见</a></p>
                     * @return RetryHangupTypes <p>根据限定的挂断原因(可选挂断状态码:202,203,204,205,206,207,208,210,212,213,215,216,217,218,219,221,222,234)进行重试，只对使用AIAgentID的任务有效，挂断状态码说明</p><p><a href="https://cloud.tencent.com/document/product/679/123938">详见</a></p>
                     * 
                     */
                    std::vector<std::string> GetRetryHangupTypes() const;

                    /**
                     * 设置<p>根据限定的挂断原因(可选挂断状态码:202,203,204,205,206,207,208,210,212,213,215,216,217,218,219,221,222,234)进行重试，只对使用AIAgentID的任务有效，挂断状态码说明</p><p><a href="https://cloud.tencent.com/document/product/679/123938">详见</a></p>
                     * @param _retryHangupTypes <p>根据限定的挂断原因(可选挂断状态码:202,203,204,205,206,207,208,210,212,213,215,216,217,218,219,221,222,234)进行重试，只对使用AIAgentID的任务有效，挂断状态码说明</p><p><a href="https://cloud.tencent.com/document/product/679/123938">详见</a></p>
                     * 
                     */
                    void SetRetryHangupTypes(const std::vector<std::string>& _retryHangupTypes);

                    /**
                     * 判断参数 RetryHangupTypes 是否已赋值
                     * @return RetryHangupTypes 是否已赋值
                     * 
                     */
                    bool RetryHangupTypesHasBeenSet() const;

                    /**
                     * 获取<p>根据限定的话后标签进行重试，只对使用对话模型的AIAgentID任务有效，标签信息可在智能体配置中查询</p>
                     * @return RetryTags <p>根据限定的话后标签进行重试，只对使用对话模型的AIAgentID任务有效，标签信息可在智能体配置中查询</p>
                     * 
                     */
                    std::vector<RetryTagItem> GetRetryTags() const;

                    /**
                     * 设置<p>根据限定的话后标签进行重试，只对使用对话模型的AIAgentID任务有效，标签信息可在智能体配置中查询</p>
                     * @param _retryTags <p>根据限定的话后标签进行重试，只对使用对话模型的AIAgentID任务有效，标签信息可在智能体配置中查询</p>
                     * 
                     */
                    void SetRetryTags(const std::vector<RetryTagItem>& _retryTags);

                    /**
                     * 判断参数 RetryTags 是否已赋值
                     * @return RetryTags 是否已赋值
                     * 
                     */
                    bool RetryTagsHasBeenSet() const;

                    /**
                     * 获取<p>生效的工作时间配置。建议使用此字段代替AvailableTime 字段，当同时使用时，优先生效AvailableTime。</p>
                     * @return AvailableWorkTimeConfig <p>生效的工作时间配置。建议使用此字段代替AvailableTime 字段，当同时使用时，优先生效AvailableTime。</p>
                     * 
                     */
                    std::vector<AvailableTimeConfig> GetAvailableWorkTimeConfig() const;

                    /**
                     * 设置<p>生效的工作时间配置。建议使用此字段代替AvailableTime 字段，当同时使用时，优先生效AvailableTime。</p>
                     * @param _availableWorkTimeConfig <p>生效的工作时间配置。建议使用此字段代替AvailableTime 字段，当同时使用时，优先生效AvailableTime。</p>
                     * 
                     */
                    void SetAvailableWorkTimeConfig(const std::vector<AvailableTimeConfig>& _availableWorkTimeConfig);

                    /**
                     * 判断参数 AvailableWorkTimeConfig 是否已赋值
                     * @return AvailableWorkTimeConfig 是否已赋值
                     * 
                     */
                    bool AvailableWorkTimeConfigHasBeenSet() const;

                    /**
                     * 获取<p>触发策略</p>
                     * @return TriggerStrategy <p>触发策略</p>
                     * 
                     */
                    std::vector<TriggerStrategyItem> GetTriggerStrategy() const;

                    /**
                     * 设置<p>触发策略</p>
                     * @param _triggerStrategy <p>触发策略</p>
                     * 
                     */
                    void SetTriggerStrategy(const std::vector<TriggerStrategyItem>& _triggerStrategy);

                    /**
                     * 判断参数 TriggerStrategy 是否已赋值
                     * @return TriggerStrategy 是否已赋值
                     * 
                     */
                    bool TriggerStrategyHasBeenSet() const;

                private:

                    /**
                     * <p>应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc</p>
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * <p>任务起始时间戳，Unix 秒级时间戳</p>
                     */
                    int64_t m_notBefore;
                    bool m_notBeforeHasBeenSet;

                    /**
                     * <p>被叫号码列表</p>
                     */
                    std::vector<std::string> m_callees;
                    bool m_calleesHasBeenSet;

                    /**
                     * <p>主叫号码列表</p>
                     */
                    std::vector<std::string> m_callers;
                    bool m_callersHasBeenSet;

                    /**
                     * <p>呼叫使用的 IVR Id，不填时需要填写 AIAgentId</p>
                     */
                    uint64_t m_ivrId;
                    bool m_ivrIdHasBeenSet;

                    /**
                     * <p>任务名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>任务描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>任务停止时间戳，Unix 秒级时间戳</p>
                     */
                    int64_t m_notAfter;
                    bool m_notAfterHasBeenSet;

                    /**
                     * <p>最大尝试次数，1-3 次</p>
                     */
                    uint64_t m_tries;
                    bool m_triesHasBeenSet;

                    /**
                     * <p>自定义变量（仅高级版支持），CalleeAttributes 字段中使用相同变量会覆盖此处</p>
                     */
                    std::vector<Variable> m_variables;
                    bool m_variablesHasBeenSet;

                    /**
                     * <p>用户自定义数据，CalleeAttributes 字段中使用 UUI 会覆盖此处</p>
                     */
                    std::string m_uUI;
                    bool m_uUIHasBeenSet;

                    /**
                     * <p>被叫属性</p>
                     */
                    std::vector<CalleeAttribute> m_calleeAttributes;
                    bool m_calleeAttributesHasBeenSet;

                    /**
                     * <p>IANA 时区名称，参考 https://datatracker.ietf.org/doc/html/draft-ietf-netmod-iana-timezones</p>
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                    /**
                     * <p>可用时间段</p>
                     */
                    std::vector<TimeRange> m_availableTime;
                    bool m_availableTimeHasBeenSet;

                    /**
                     * <p>智能体 ID，不填写时需要填写 IvrId</p>
                     */
                    int64_t m_aIAgentId;
                    bool m_aIAgentIdHasBeenSet;

                    /**
                     * <p>任务失败重试时间间隔，重试间隔 600秒～86400 秒</p>
                     */
                    int64_t m_retryInterval;
                    bool m_retryIntervalHasBeenSet;

                    /**
                     * <p>最大振铃时长，达到时长阈值自动挂断。 仅自携号码支持当前参数</p>
                     */
                    int64_t m_maxRingTimeoutSecond;
                    bool m_maxRingTimeoutSecondHasBeenSet;

                    /**
                     * <p>根据限定的挂断原因(可选挂断状态码:202,203,204,205,206,207,208,210,212,213,215,216,217,218,219,221,222,234)进行重试，只对使用AIAgentID的任务有效，挂断状态码说明</p><p><a href="https://cloud.tencent.com/document/product/679/123938">详见</a></p>
                     */
                    std::vector<std::string> m_retryHangupTypes;
                    bool m_retryHangupTypesHasBeenSet;

                    /**
                     * <p>根据限定的话后标签进行重试，只对使用对话模型的AIAgentID任务有效，标签信息可在智能体配置中查询</p>
                     */
                    std::vector<RetryTagItem> m_retryTags;
                    bool m_retryTagsHasBeenSet;

                    /**
                     * <p>生效的工作时间配置。建议使用此字段代替AvailableTime 字段，当同时使用时，优先生效AvailableTime。</p>
                     */
                    std::vector<AvailableTimeConfig> m_availableWorkTimeConfig;
                    bool m_availableWorkTimeConfigHasBeenSet;

                    /**
                     * <p>触发策略</p>
                     */
                    std::vector<TriggerStrategyItem> m_triggerStrategy;
                    bool m_triggerStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_CREATEAUTOCALLOUTTASKREQUEST_H_
