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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_IGNOREBASELINERULE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_IGNOREBASELINERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 忽略的基线检测项信息
                */
                class IgnoreBaselineRule : public AbstractModel
                {
                public:
                    IgnoreBaselineRule();
                    ~IgnoreBaselineRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取基线检测项名称
                     * @return RuleName 基线检测项名称
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置基线检测项名称
                     * @param _ruleName 基线检测项名称
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
                     * 获取基线检测项id
                     * @return RuleId 基线检测项id
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置基线检测项id
                     * @param _ruleId 基线检测项id
                     * 
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return ModifyTime 更新时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置更新时间
                     * @param _modifyTime 更新时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取修复建议
                     * @return Fix 修复建议
                     * 
                     */
                    std::string GetFix() const;

                    /**
                     * 设置修复建议
                     * @param _fix 修复建议
                     * 
                     */
                    void SetFix(const std::string& _fix);

                    /**
                     * 判断参数 Fix 是否已赋值
                     * @return Fix 是否已赋值
                     * 
                     */
                    bool FixHasBeenSet() const;

                    /**
                     * 获取影响主机数
                     * @return EffectHostCount 影响主机数
                     * 
                     */
                    uint64_t GetEffectHostCount() const;

                    /**
                     * 设置影响主机数
                     * @param _effectHostCount 影响主机数
                     * 
                     */
                    void SetEffectHostCount(const uint64_t& _effectHostCount);

                    /**
                     * 判断参数 EffectHostCount 是否已赋值
                     * @return EffectHostCount 是否已赋值
                     * 
                     */
                    bool EffectHostCountHasBeenSet() const;

                private:

                    /**
                     * 基线检测项名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 基线检测项id
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 修复建议
                     */
                    std::string m_fix;
                    bool m_fixHasBeenSet;

                    /**
                     * 影响主机数
                     */
                    uint64_t m_effectHostCount;
                    bool m_effectHostCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_IGNOREBASELINERULE_H_
