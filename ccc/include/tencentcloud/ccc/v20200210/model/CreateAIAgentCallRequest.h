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
                     * 获取AI智能体ID
                     * @return AIAgentId AI智能体ID
                     * 
                     */
                    uint64_t GetAIAgentId() const;

                    /**
                     * 设置AI智能体ID
                     * @param _aIAgentId AI智能体ID
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
                     * 获取被叫号码
                     * @return Callee 被叫号码
                     * 
                     */
                    std::string GetCallee() const;

                    /**
                     * 设置被叫号码
                     * @param _callee 被叫号码
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
                     * 获取提示词变量
                     * @return PromptVariables 提示词变量
                     * 
                     */
                    std::vector<Variable> GetPromptVariables() const;

                    /**
                     * 设置提示词变量
                     * @param _promptVariables 提示词变量
                     * 
                     */
                    void SetPromptVariables(const std::vector<Variable>& _promptVariables);

                    /**
                     * 判断参数 PromptVariables 是否已赋值
                     * @return PromptVariables 是否已赋值
                     * 
                     */
                    bool PromptVariablesHasBeenSet() const;

                private:

                    /**
                     * 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * AI智能体ID
                     */
                    uint64_t m_aIAgentId;
                    bool m_aIAgentIdHasBeenSet;

                    /**
                     * 被叫号码
                     */
                    std::string m_callee;
                    bool m_calleeHasBeenSet;

                    /**
                     * 主叫号码列表
                     */
                    std::vector<std::string> m_callers;
                    bool m_callersHasBeenSet;

                    /**
                     * 提示词变量
                     */
                    std::vector<Variable> m_promptVariables;
                    bool m_promptVariablesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_CREATEAIAGENTCALLREQUEST_H_
