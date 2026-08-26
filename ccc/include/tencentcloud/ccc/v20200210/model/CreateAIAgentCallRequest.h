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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_CREATEAIAGENTCALLREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_CREATEAIAGENTCALLREQUEST_H_

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
                * CreateAIAgentCall请求参数结构体
                */
                class CreateAIAgentCallRequest : public AbstractModel
                {
                public:
                    CreateAIAgentCallRequest();
                    ~CreateAIAgentCallRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc</p>
                     * @return SdkAppId <p>应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc</p>
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置<p>应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc</p>
                     * @param _sdkAppId <p>应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc</p>
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
                     * 获取<p>AI智能体ID</p>
                     * @return AIAgentId <p>AI智能体ID</p>
                     * 
                     */
                    uint64_t GetAIAgentId() const;

                    /**
                     * 设置<p>AI智能体ID</p>
                     * @param _aIAgentId <p>AI智能体ID</p>
                     * 
                     */
                    void SetAIAgentId(const uint64_t& _aIAgentId);

                    /**
                     * 判断参数 AIAgentId 是否已赋值
                     * @return AIAgentId 是否已赋值
                     * 
                     */
                    bool AIAgentIdHasBeenSet() const;

                    /**
                     * 获取<p>被叫号码</p>
                     * @return Callee <p>被叫号码</p>
                     * 
                     */
                    std::string GetCallee() const;

                    /**
                     * 设置<p>被叫号码</p>
                     * @param _callee <p>被叫号码</p>
                     * 
                     */
                    void SetCallee(const std::string& _callee);

                    /**
                     * 判断参数 Callee 是否已赋值
                     * @return Callee 是否已赋值
                     * 
                     */
                    bool CalleeHasBeenSet() const;

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
                     * 获取<p>提示词变量</p>
                     * @return PromptVariables <p>提示词变量</p>
                     * @deprecated
                     */
                    std::vector<Variable> GetPromptVariables() const;

                    /**
                     * 设置<p>提示词变量</p>
                     * @param _promptVariables <p>提示词变量</p>
                     * @deprecated
                     */
                    void SetPromptVariables(const std::vector<Variable>& _promptVariables);

                    /**
                     * 判断参数 PromptVariables 是否已赋值
                     * @return PromptVariables 是否已赋值
                     * @deprecated
                     */
                    bool PromptVariablesHasBeenSet() const;

                    /**
                     * 获取<p>通用变量： <p>提示词变量</p> <p>欢迎语变量</p> <p> 欢迎语延迟播放(秒级)：welcome-message-delay</p>  <p> dify变量</p>  </p><ol><li>dify-inputs-xxx 为dify的inputs变量</li><li>dify-inputs-user 为dify的user值</li><li>dify-inputs-conversation_id 为dify的conversation_id值</li></ol>
                     * @return Variables <p>通用变量： <p>提示词变量</p> <p>欢迎语变量</p> <p> 欢迎语延迟播放(秒级)：welcome-message-delay</p>  <p> dify变量</p>  </p><ol><li>dify-inputs-xxx 为dify的inputs变量</li><li>dify-inputs-user 为dify的user值</li><li>dify-inputs-conversation_id 为dify的conversation_id值</li></ol>
                     * 
                     */
                    std::vector<Variable> GetVariables() const;

                    /**
                     * 设置<p>通用变量： <p>提示词变量</p> <p>欢迎语变量</p> <p> 欢迎语延迟播放(秒级)：welcome-message-delay</p>  <p> dify变量</p>  </p><ol><li>dify-inputs-xxx 为dify的inputs变量</li><li>dify-inputs-user 为dify的user值</li><li>dify-inputs-conversation_id 为dify的conversation_id值</li></ol>
                     * @param _variables <p>通用变量： <p>提示词变量</p> <p>欢迎语变量</p> <p> 欢迎语延迟播放(秒级)：welcome-message-delay</p>  <p> dify变量</p>  </p><ol><li>dify-inputs-xxx 为dify的inputs变量</li><li>dify-inputs-user 为dify的user值</li><li>dify-inputs-conversation_id 为dify的conversation_id值</li></ol>
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
                     * 获取<p>智能体并发不足时，排队等待超时时间，单位秒</p><p>取值范围：[0, 5]</p><p>默认值：5</p>
                     * @return AcquireTimeoutSecond <p>智能体并发不足时，排队等待超时时间，单位秒</p><p>取值范围：[0, 5]</p><p>默认值：5</p>
                     * 
                     */
                    uint64_t GetAcquireTimeoutSecond() const;

                    /**
                     * 设置<p>智能体并发不足时，排队等待超时时间，单位秒</p><p>取值范围：[0, 5]</p><p>默认值：5</p>
                     * @param _acquireTimeoutSecond <p>智能体并发不足时，排队等待超时时间，单位秒</p><p>取值范围：[0, 5]</p><p>默认值：5</p>
                     * 
                     */
                    void SetAcquireTimeoutSecond(const uint64_t& _acquireTimeoutSecond);

                    /**
                     * 判断参数 AcquireTimeoutSecond 是否已赋值
                     * @return AcquireTimeoutSecond 是否已赋值
                     * 
                     */
                    bool AcquireTimeoutSecondHasBeenSet() const;

                private:

                    /**
                     * <p>应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc</p>
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * <p>AI智能体ID</p>
                     */
                    uint64_t m_aIAgentId;
                    bool m_aIAgentIdHasBeenSet;

                    /**
                     * <p>被叫号码</p>
                     */
                    std::string m_callee;
                    bool m_calleeHasBeenSet;

                    /**
                     * <p>主叫号码列表</p>
                     */
                    std::vector<std::string> m_callers;
                    bool m_callersHasBeenSet;

                    /**
                     * <p>提示词变量</p>
                     */
                    std::vector<Variable> m_promptVariables;
                    bool m_promptVariablesHasBeenSet;

                    /**
                     * <p>通用变量： <p>提示词变量</p> <p>欢迎语变量</p> <p> 欢迎语延迟播放(秒级)：welcome-message-delay</p>  <p> dify变量</p>  </p><ol><li>dify-inputs-xxx 为dify的inputs变量</li><li>dify-inputs-user 为dify的user值</li><li>dify-inputs-conversation_id 为dify的conversation_id值</li></ol>
                     */
                    std::vector<Variable> m_variables;
                    bool m_variablesHasBeenSet;

                    /**
                     * <p>最大振铃时长，达到时长阈值自动挂断。 仅自携号码支持当前参数</p>
                     */
                    int64_t m_maxRingTimeoutSecond;
                    bool m_maxRingTimeoutSecondHasBeenSet;

                    /**
                     * <p>智能体并发不足时，排队等待超时时间，单位秒</p><p>取值范围：[0, 5]</p><p>默认值：5</p>
                     */
                    uint64_t m_acquireTimeoutSecond;
                    bool m_acquireTimeoutSecondHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_CREATEAIAGENTCALLREQUEST_H_
