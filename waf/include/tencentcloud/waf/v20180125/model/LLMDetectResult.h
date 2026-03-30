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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_LLMDETECTRESULT_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_LLMDETECTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/LLMSensitiveValueLevel.h>
#include <tencentcloud/waf/v20180125/model/KeyWordInfo.h>
#include <tencentcloud/waf/v20180125/model/PromptDetectResult.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 大模型安全检测综合结果
                */
                class LLMDetectResult : public AbstractModel
                {
                public:
                    LLMDetectResult();
                    ~LLMDetectResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取 仅输出侧：涉敏信息
                     * @return SensitiveResult  仅输出侧：涉敏信息
                     * 
                     */
                    std::vector<LLMSensitiveValueLevel> GetSensitiveResult() const;

                    /**
                     * 设置 仅输出侧：涉敏信息
                     * @param _sensitiveResult  仅输出侧：涉敏信息
                     * 
                     */
                    void SetSensitiveResult(const std::vector<LLMSensitiveValueLevel>& _sensitiveResult);

                    /**
                     * 判断参数 SensitiveResult 是否已赋值
                     * @return SensitiveResult 是否已赋值
                     * 
                     */
                    bool SensitiveResultHasBeenSet() const;

                    /**
                     * 获取 输入输出均检测：关键词库命中信息
                     * @return KeyWordsResult  输入输出均检测：关键词库命中信息
                     * 
                     */
                    std::vector<KeyWordInfo> GetKeyWordsResult() const;

                    /**
                     * 设置 输入输出均检测：关键词库命中信息
                     * @param _keyWordsResult  输入输出均检测：关键词库命中信息
                     * 
                     */
                    void SetKeyWordsResult(const std::vector<KeyWordInfo>& _keyWordsResult);

                    /**
                     * 判断参数 KeyWordsResult 是否已赋值
                     * @return KeyWordsResult 是否已赋值
                     * 
                     */
                    bool KeyWordsResultHasBeenSet() const;

                    /**
                     * 获取输入输出均检测：数据分类分级结果
                     * @return DataCategoryResult 输入输出均检测：数据分类分级结果
                     * 
                     */
                    std::vector<std::string> GetDataCategoryResult() const;

                    /**
                     * 设置输入输出均检测：数据分类分级结果
                     * @param _dataCategoryResult 输入输出均检测：数据分类分级结果
                     * 
                     */
                    void SetDataCategoryResult(const std::vector<std::string>& _dataCategoryResult);

                    /**
                     * 判断参数 DataCategoryResult 是否已赋值
                     * @return DataCategoryResult 是否已赋值
                     * 
                     */
                    bool DataCategoryResultHasBeenSet() const;

                    /**
                     * 获取 仅输入侧检出：prompt检测的结果
                     * @return PromptInjectionResult  仅输入侧检出：prompt检测的结果
                     * 
                     */
                    PromptDetectResult GetPromptInjectionResult() const;

                    /**
                     * 设置 仅输入侧检出：prompt检测的结果
                     * @param _promptInjectionResult  仅输入侧检出：prompt检测的结果
                     * 
                     */
                    void SetPromptInjectionResult(const PromptDetectResult& _promptInjectionResult);

                    /**
                     * 判断参数 PromptInjectionResult 是否已赋值
                     * @return PromptInjectionResult 是否已赋值
                     * 
                     */
                    bool PromptInjectionResultHasBeenSet() const;

                    /**
                     * 获取命中的规则ID
                     * @return RuleId 命中的规则ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置命中的规则ID
                     * @param _ruleId 命中的规则ID
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取命中的规则名称
                     * @return RuleName 命中的规则名称
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置命中的规则名称
                     * @param _ruleName 命中的规则名称
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取规则动作
                     * @return Action 规则动作
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置规则动作
                     * @param _action 规则动作
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取攻击payload
                     * @return Payload 攻击payload
                     * 
                     */
                    std::string GetPayload() const;

                    /**
                     * 设置攻击payload
                     * @param _payload 攻击payload
                     * 
                     */
                    void SetPayload(const std::string& _payload);

                    /**
                     * 判断参数 Payload 是否已赋值
                     * @return Payload 是否已赋值
                     * 
                     */
                    bool PayloadHasBeenSet() const;

                private:

                    /**
                     *  仅输出侧：涉敏信息
                     */
                    std::vector<LLMSensitiveValueLevel> m_sensitiveResult;
                    bool m_sensitiveResultHasBeenSet;

                    /**
                     *  输入输出均检测：关键词库命中信息
                     */
                    std::vector<KeyWordInfo> m_keyWordsResult;
                    bool m_keyWordsResultHasBeenSet;

                    /**
                     * 输入输出均检测：数据分类分级结果
                     */
                    std::vector<std::string> m_dataCategoryResult;
                    bool m_dataCategoryResultHasBeenSet;

                    /**
                     *  仅输入侧检出：prompt检测的结果
                     */
                    PromptDetectResult m_promptInjectionResult;
                    bool m_promptInjectionResultHasBeenSet;

                    /**
                     * 命中的规则ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 命中的规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 规则动作
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 攻击payload
                     */
                    std::string m_payload;
                    bool m_payloadHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_LLMDETECTRESULT_H_
