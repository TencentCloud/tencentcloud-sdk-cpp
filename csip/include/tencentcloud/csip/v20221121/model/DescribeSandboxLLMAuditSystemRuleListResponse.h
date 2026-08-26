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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESANDBOXLLMAUDITSYSTEMRULELISTRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESANDBOXLLMAUDITSYSTEMRULELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/TrafficSandboxLLMAuditSystemRuleItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeSandboxLLMAuditSystemRuleList返回参数结构体
                */
                class DescribeSandboxLLMAuditSystemRuleListResponse : public AbstractModel
                {
                public:
                    DescribeSandboxLLMAuditSystemRuleListResponse();
                    ~DescribeSandboxLLMAuditSystemRuleListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取LLM 推理防护规则列表
                     * @return LLMRules LLM 推理防护规则列表
                     * 
                     */
                    std::vector<TrafficSandboxLLMAuditSystemRuleItem> GetLLMRules() const;

                    /**
                     * 判断参数 LLMRules 是否已赋值
                     * @return LLMRules 是否已赋值
                     * 
                     */
                    bool LLMRulesHasBeenSet() const;

                    /**
                     * 获取ToolCall 防护规则列表
                     * @return ToolCallRules ToolCall 防护规则列表
                     * 
                     */
                    std::vector<TrafficSandboxLLMAuditSystemRuleItem> GetToolCallRules() const;

                    /**
                     * 判断参数 ToolCallRules 是否已赋值
                     * @return ToolCallRules 是否已赋值
                     * 
                     */
                    bool ToolCallRulesHasBeenSet() const;

                private:

                    /**
                     * LLM 推理防护规则列表
                     */
                    std::vector<TrafficSandboxLLMAuditSystemRuleItem> m_lLMRules;
                    bool m_lLMRulesHasBeenSet;

                    /**
                     * ToolCall 防护规则列表
                     */
                    std::vector<TrafficSandboxLLMAuditSystemRuleItem> m_toolCallRules;
                    bool m_toolCallRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESANDBOXLLMAUDITSYSTEMRULELISTRESPONSE_H_
