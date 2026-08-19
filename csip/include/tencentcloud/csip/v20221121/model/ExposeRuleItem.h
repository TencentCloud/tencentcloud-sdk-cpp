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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_EXPOSERULEITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_EXPOSERULEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 云边界规则信息
                */
                class ExposeRuleItem : public AbstractModel
                {
                public:
                    ExposeRuleItem();
                    ~ExposeRuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则类型
                     * @return RuleType 规则类型
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置规则类型
                     * @param _ruleType 规则类型
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取风险等级
                     * @return Severity 风险等级
                     * 
                     */
                    std::string GetSeverity() const;

                    /**
                     * 设置风险等级
                     * @param _severity 风险等级
                     * 
                     */
                    void SetSeverity(const std::string& _severity);

                    /**
                     * 判断参数 Severity 是否已赋值
                     * @return Severity 是否已赋值
                     * 
                     */
                    bool SeverityHasBeenSet() const;

                    /**
                     * 获取规则名称
                     * @return Title 规则名称
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置规则名称
                     * @param _title 规则名称
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取修复建议
                     * @return FixAdvice 修复建议
                     * 
                     */
                    std::string GetFixAdvice() const;

                    /**
                     * 设置修复建议
                     * @param _fixAdvice 修复建议
                     * 
                     */
                    void SetFixAdvice(const std::string& _fixAdvice);

                    /**
                     * 判断参数 FixAdvice 是否已赋值
                     * @return FixAdvice 是否已赋值
                     * 
                     */
                    bool FixAdviceHasBeenSet() const;

                private:

                    /**
                     * 规则类型
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 风险等级
                     */
                    std::string m_severity;
                    bool m_severityHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 修复建议
                     */
                    std::string m_fixAdvice;
                    bool m_fixAdviceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_EXPOSERULEITEM_H_
