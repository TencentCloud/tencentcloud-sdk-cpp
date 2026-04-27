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
#include <tencentcloud/waf/v20180125/model/ImageResult.h>


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
                     * 获取<p>仅输出侧：涉敏信息</p>
                     * @return SensitiveResult <p>仅输出侧：涉敏信息</p>
                     * 
                     */
                    std::vector<LLMSensitiveValueLevel> GetSensitiveResult() const;

                    /**
                     * 设置<p>仅输出侧：涉敏信息</p>
                     * @param _sensitiveResult <p>仅输出侧：涉敏信息</p>
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
                     * 获取<p>输入输出均检测：关键词库命中信息</p>
                     * @return KeyWordsResult <p>输入输出均检测：关键词库命中信息</p>
                     * 
                     */
                    std::vector<KeyWordInfo> GetKeyWordsResult() const;

                    /**
                     * 设置<p>输入输出均检测：关键词库命中信息</p>
                     * @param _keyWordsResult <p>输入输出均检测：关键词库命中信息</p>
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
                     * 获取<p>输入输出均检测：数据分类分级结果</p>
                     * @return DataCategoryResult <p>输入输出均检测：数据分类分级结果</p>
                     * 
                     */
                    std::vector<std::string> GetDataCategoryResult() const;

                    /**
                     * 设置<p>输入输出均检测：数据分类分级结果</p>
                     * @param _dataCategoryResult <p>输入输出均检测：数据分类分级结果</p>
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
                     * 获取<p>仅输入侧检出：prompt检测的结果</p>
                     * @return PromptInjectionResult <p>仅输入侧检出：prompt检测的结果</p>
                     * 
                     */
                    PromptDetectResult GetPromptInjectionResult() const;

                    /**
                     * 设置<p>仅输入侧检出：prompt检测的结果</p>
                     * @param _promptInjectionResult <p>仅输入侧检出：prompt检测的结果</p>
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
                     * 获取<p>命中的规则ID</p>
                     * @return RuleId <p>命中的规则ID</p>
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置<p>命中的规则ID</p>
                     * @param _ruleId <p>命中的规则ID</p>
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
                     * 获取<p>命中的规则名称</p>
                     * @return RuleName <p>命中的规则名称</p>
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置<p>命中的规则名称</p>
                     * @param _ruleName <p>命中的规则名称</p>
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
                     * 获取<p>规则动作</p>
                     * @return Action <p>规则动作</p>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置<p>规则动作</p>
                     * @param _action <p>规则动作</p>
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
                     * 获取<p>攻击payload</p>
                     * @return Payload <p>攻击payload</p>
                     * 
                     */
                    std::string GetPayload() const;

                    /**
                     * 设置<p>攻击payload</p>
                     * @param _payload <p>攻击payload</p>
                     * 
                     */
                    void SetPayload(const std::string& _payload);

                    /**
                     * 判断参数 Payload 是否已赋值
                     * @return Payload 是否已赋值
                     * 
                     */
                    bool PayloadHasBeenSet() const;

                    /**
                     * 获取<p>图片检测结果</p>
                     * @return ImageResult <p>图片检测结果</p>
                     * 
                     */
                    std::vector<ImageResult> GetImageResult() const;

                    /**
                     * 设置<p>图片检测结果</p>
                     * @param _imageResult <p>图片检测结果</p>
                     * 
                     */
                    void SetImageResult(const std::vector<ImageResult>& _imageResult);

                    /**
                     * 判断参数 ImageResult 是否已赋值
                     * @return ImageResult 是否已赋值
                     * 
                     */
                    bool ImageResultHasBeenSet() const;

                private:

                    /**
                     * <p>仅输出侧：涉敏信息</p>
                     */
                    std::vector<LLMSensitiveValueLevel> m_sensitiveResult;
                    bool m_sensitiveResultHasBeenSet;

                    /**
                     * <p>输入输出均检测：关键词库命中信息</p>
                     */
                    std::vector<KeyWordInfo> m_keyWordsResult;
                    bool m_keyWordsResultHasBeenSet;

                    /**
                     * <p>输入输出均检测：数据分类分级结果</p>
                     */
                    std::vector<std::string> m_dataCategoryResult;
                    bool m_dataCategoryResultHasBeenSet;

                    /**
                     * <p>仅输入侧检出：prompt检测的结果</p>
                     */
                    PromptDetectResult m_promptInjectionResult;
                    bool m_promptInjectionResultHasBeenSet;

                    /**
                     * <p>命中的规则ID</p>
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>命中的规则名称</p>
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * <p>规则动作</p>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * <p>攻击payload</p>
                     */
                    std::string m_payload;
                    bool m_payloadHasBeenSet;

                    /**
                     * <p>图片检测结果</p>
                     */
                    std::vector<ImageResult> m_imageResult;
                    bool m_imageResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_LLMDETECTRESULT_H_
