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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_RULEDETAIL_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_RULEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * aiguard规则详情
                */
                class RuleDetail : public AbstractModel
                {
                public:
                    RuleDetail();
                    ~RuleDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>规则ID</p>
                     * @return RuleId <p>规则ID</p>
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置<p>规则ID</p>
                     * @param _ruleId <p>规则ID</p>
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
                     * 获取<p>规则名称</p>
                     * @return RuleName <p>规则名称</p>
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置<p>规则名称</p>
                     * @param _ruleName <p>规则名称</p>
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
                     * 获取<p>描述</p>
                     * @return Description <p>描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述</p>
                     * @param _description <p>描述</p>
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
                     * 获取<p>严重度</p>
                     * @return Severity <p>严重度</p>
                     * 
                     */
                    std::string GetSeverity() const;

                    /**
                     * 设置<p>严重度</p>
                     * @param _severity <p>严重度</p>
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
                     * 获取<p>动作</p>
                     * @return Action <p>动作</p>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置<p>动作</p>
                     * @param _action <p>动作</p>
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
                     * 获取<p>开关</p>
                     * @return Status <p>开关</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>开关</p>
                     * @param _status <p>开关</p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>脱敏样例</p>
                     * @return DesensitizeSample <p>脱敏样例</p>
                     * 
                     */
                    std::string GetDesensitizeSample() const;

                    /**
                     * 设置<p>脱敏样例</p>
                     * @param _desensitizeSample <p>脱敏样例</p>
                     * 
                     */
                    void SetDesensitizeSample(const std::string& _desensitizeSample);

                    /**
                     * 判断参数 DesensitizeSample 是否已赋值
                     * @return DesensitizeSample 是否已赋值
                     * 
                     */
                    bool DesensitizeSampleHasBeenSet() const;

                    /**
                     * 获取<p>检测方向</p><p>取值范围：[0, 3]</p>
                     * @return Direction <p>检测方向</p><p>取值范围：[0, 3]</p>
                     * 
                     */
                    uint64_t GetDirection() const;

                    /**
                     * 设置<p>检测方向</p><p>取值范围：[0, 3]</p>
                     * @param _direction <p>检测方向</p><p>取值范围：[0, 3]</p>
                     * 
                     */
                    void SetDirection(const uint64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                private:

                    /**
                     * <p>规则ID</p>
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>规则名称</p>
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>严重度</p>
                     */
                    std::string m_severity;
                    bool m_severityHasBeenSet;

                    /**
                     * <p>动作</p>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * <p>开关</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>脱敏样例</p>
                     */
                    std::string m_desensitizeSample;
                    bool m_desensitizeSampleHasBeenSet;

                    /**
                     * <p>检测方向</p><p>取值范围：[0, 3]</p>
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_RULEDETAIL_H_
