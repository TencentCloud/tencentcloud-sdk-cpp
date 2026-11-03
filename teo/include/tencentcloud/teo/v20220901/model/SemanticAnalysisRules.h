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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SEMANTICANALYSISRULES_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SEMANTICANALYSISRULES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/ManagedRuleAction.h>
#include <tencentcloud/teo/v20220901/model/ManagedRuleGroupMeta.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 深度分析配置选项。
                */
                class SemanticAnalysisRules : public AbstractModel
                {
                public:
                    SemanticAnalysisRules();
                    ~SemanticAnalysisRules() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>深度分析规则是否开启。取值有：<li>on：开启，深度分析规则生效；</li><li>off：关闭，深度分析规则不生效。</li></p>
                     * @return Enabled <p>深度分析规则是否开启。取值有：<li>on：开启，深度分析规则生效；</li><li>off：关闭，深度分析规则不生效。</li></p>
                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置<p>深度分析规则是否开启。取值有：<li>on：开启，深度分析规则生效；</li><li>off：关闭，深度分析规则不生效。</li></p>
                     * @param _enabled <p>深度分析规则是否开启。取值有：<li>on：开启，深度分析规则生效；</li><li>off：关闭，深度分析规则不生效。</li></p>
                     * 
                     */
                    void SetEnabled(const std::string& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取<p>深度分析下规则项的具体配置。</p>
                     * @return RuleActions <p>深度分析下规则项的具体配置。</p>
                     * 
                     */
                    std::vector<ManagedRuleAction> GetRuleActions() const;

                    /**
                     * 设置<p>深度分析下规则项的具体配置。</p>
                     * @param _ruleActions <p>深度分析下规则项的具体配置。</p>
                     * 
                     */
                    void SetRuleActions(const std::vector<ManagedRuleAction>& _ruleActions);

                    /**
                     * 判断参数 RuleActions 是否已赋值
                     * @return RuleActions 是否已赋值
                     * 
                     */
                    bool RuleActionsHasBeenSet() const;

                    /**
                     * 获取<p>深度分析配置信息，仅出参使用。</p>
                     * @return MetaData <p>深度分析配置信息，仅出参使用。</p>
                     * 
                     */
                    ManagedRuleGroupMeta GetMetaData() const;

                    /**
                     * 设置<p>深度分析配置信息，仅出参使用。</p>
                     * @param _metaData <p>深度分析配置信息，仅出参使用。</p>
                     * 
                     */
                    void SetMetaData(const ManagedRuleGroupMeta& _metaData);

                    /**
                     * 判断参数 MetaData 是否已赋值
                     * @return MetaData 是否已赋值
                     * 
                     */
                    bool MetaDataHasBeenSet() const;

                private:

                    /**
                     * <p>深度分析规则是否开启。取值有：<li>on：开启，深度分析规则生效；</li><li>off：关闭，深度分析规则不生效。</li></p>
                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>深度分析下规则项的具体配置。</p>
                     */
                    std::vector<ManagedRuleAction> m_ruleActions;
                    bool m_ruleActionsHasBeenSet;

                    /**
                     * <p>深度分析配置信息，仅出参使用。</p>
                     */
                    ManagedRuleGroupMeta m_metaData;
                    bool m_metaDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SEMANTICANALYSISRULES_H_
