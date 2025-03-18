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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MANAGEDRULEGROUP_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MANAGEDRULEGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SecurityAction.h>
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
                * 托管规则组配置。
                */
                class ManagedRuleGroup : public AbstractModel
                {
                public:
                    ManagedRuleGroup();
                    ~ManagedRuleGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取托管规则的组名称，未指定配置的规则分组将按照默认配置处理，GroupId 的具体取值参考产品文档。
                     * @return GroupId 托管规则的组名称，未指定配置的规则分组将按照默认配置处理，GroupId 的具体取值参考产品文档。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置托管规则的组名称，未指定配置的规则分组将按照默认配置处理，GroupId 的具体取值参考产品文档。
                     * @param _groupId 托管规则的组名称，未指定配置的规则分组将按照默认配置处理，GroupId 的具体取值参考产品文档。
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取托管规则组的防护级别。取值有：<li>loose：宽松，只包含超高风险规则，此时需配置Action，且RuleActions配置无效；</li><li>normal：正常，包含超高风险和高风险规则，此时需配置Action，且RuleActions配置无效；</li><li>strict：严格，包含超高风险、高风险和中风险规则，此时需配置Action，且RuleActions配置无效；</li><li>extreme：超严格，包含超高风险、高风险、中风险和低风险规则，此时需配置Action，且RuleActions配置无效；</li><li>custom：自定义，精细化策略，按单条规则配置处置方式，此时Action字段无效，使用RuleActions配置单条规则的精细化策略。</li>	
                     * @return SensitivityLevel 托管规则组的防护级别。取值有：<li>loose：宽松，只包含超高风险规则，此时需配置Action，且RuleActions配置无效；</li><li>normal：正常，包含超高风险和高风险规则，此时需配置Action，且RuleActions配置无效；</li><li>strict：严格，包含超高风险、高风险和中风险规则，此时需配置Action，且RuleActions配置无效；</li><li>extreme：超严格，包含超高风险、高风险、中风险和低风险规则，此时需配置Action，且RuleActions配置无效；</li><li>custom：自定义，精细化策略，按单条规则配置处置方式，此时Action字段无效，使用RuleActions配置单条规则的精细化策略。</li>	
                     * 
                     */
                    std::string GetSensitivityLevel() const;

                    /**
                     * 设置托管规则组的防护级别。取值有：<li>loose：宽松，只包含超高风险规则，此时需配置Action，且RuleActions配置无效；</li><li>normal：正常，包含超高风险和高风险规则，此时需配置Action，且RuleActions配置无效；</li><li>strict：严格，包含超高风险、高风险和中风险规则，此时需配置Action，且RuleActions配置无效；</li><li>extreme：超严格，包含超高风险、高风险、中风险和低风险规则，此时需配置Action，且RuleActions配置无效；</li><li>custom：自定义，精细化策略，按单条规则配置处置方式，此时Action字段无效，使用RuleActions配置单条规则的精细化策略。</li>	
                     * @param _sensitivityLevel 托管规则组的防护级别。取值有：<li>loose：宽松，只包含超高风险规则，此时需配置Action，且RuleActions配置无效；</li><li>normal：正常，包含超高风险和高风险规则，此时需配置Action，且RuleActions配置无效；</li><li>strict：严格，包含超高风险、高风险和中风险规则，此时需配置Action，且RuleActions配置无效；</li><li>extreme：超严格，包含超高风险、高风险、中风险和低风险规则，此时需配置Action，且RuleActions配置无效；</li><li>custom：自定义，精细化策略，按单条规则配置处置方式，此时Action字段无效，使用RuleActions配置单条规则的精细化策略。</li>	
                     * 
                     */
                    void SetSensitivityLevel(const std::string& _sensitivityLevel);

                    /**
                     * 判断参数 SensitivityLevel 是否已赋值
                     * @return SensitivityLevel 是否已赋值
                     * 
                     */
                    bool SensitivityLevelHasBeenSet() const;

                    /**
                     * 获取托管规则组的处置动作。SecurityAction 的 Name 取值支持：<li>Deny：拦截，响应拦截页面；</li><li>Monitor：观察，不处理请求记录安全事件到日志中；</li><li>Disabled：未启用，不扫描请求跳过该规则。</li>
                     * @return Action 托管规则组的处置动作。SecurityAction 的 Name 取值支持：<li>Deny：拦截，响应拦截页面；</li><li>Monitor：观察，不处理请求记录安全事件到日志中；</li><li>Disabled：未启用，不扫描请求跳过该规则。</li>
                     * 
                     */
                    SecurityAction GetAction() const;

                    /**
                     * 设置托管规则组的处置动作。SecurityAction 的 Name 取值支持：<li>Deny：拦截，响应拦截页面；</li><li>Monitor：观察，不处理请求记录安全事件到日志中；</li><li>Disabled：未启用，不扫描请求跳过该规则。</li>
                     * @param _action 托管规则组的处置动作。SecurityAction 的 Name 取值支持：<li>Deny：拦截，响应拦截页面；</li><li>Monitor：观察，不处理请求记录安全事件到日志中；</li><li>Disabled：未启用，不扫描请求跳过该规则。</li>
                     * 
                     */
                    void SetAction(const SecurityAction& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取托管规则组下规则项的具体配置，仅在 SensitivityLevel 为 custom 时配置生效。
                     * @return RuleActions 托管规则组下规则项的具体配置，仅在 SensitivityLevel 为 custom 时配置生效。
                     * 
                     */
                    std::vector<ManagedRuleAction> GetRuleActions() const;

                    /**
                     * 设置托管规则组下规则项的具体配置，仅在 SensitivityLevel 为 custom 时配置生效。
                     * @param _ruleActions 托管规则组下规则项的具体配置，仅在 SensitivityLevel 为 custom 时配置生效。
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
                     * 获取托管规则组信息，仅出参。	
                     * @return MetaData 托管规则组信息，仅出参。	
                     * 
                     */
                    ManagedRuleGroupMeta GetMetaData() const;

                    /**
                     * 设置托管规则组信息，仅出参。	
                     * @param _metaData 托管规则组信息，仅出参。	
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
                     * 托管规则的组名称，未指定配置的规则分组将按照默认配置处理，GroupId 的具体取值参考产品文档。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 托管规则组的防护级别。取值有：<li>loose：宽松，只包含超高风险规则，此时需配置Action，且RuleActions配置无效；</li><li>normal：正常，包含超高风险和高风险规则，此时需配置Action，且RuleActions配置无效；</li><li>strict：严格，包含超高风险、高风险和中风险规则，此时需配置Action，且RuleActions配置无效；</li><li>extreme：超严格，包含超高风险、高风险、中风险和低风险规则，此时需配置Action，且RuleActions配置无效；</li><li>custom：自定义，精细化策略，按单条规则配置处置方式，此时Action字段无效，使用RuleActions配置单条规则的精细化策略。</li>	
                     */
                    std::string m_sensitivityLevel;
                    bool m_sensitivityLevelHasBeenSet;

                    /**
                     * 托管规则组的处置动作。SecurityAction 的 Name 取值支持：<li>Deny：拦截，响应拦截页面；</li><li>Monitor：观察，不处理请求记录安全事件到日志中；</li><li>Disabled：未启用，不扫描请求跳过该规则。</li>
                     */
                    SecurityAction m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 托管规则组下规则项的具体配置，仅在 SensitivityLevel 为 custom 时配置生效。
                     */
                    std::vector<ManagedRuleAction> m_ruleActions;
                    bool m_ruleActionsHasBeenSet;

                    /**
                     * 托管规则组信息，仅出参。	
                     */
                    ManagedRuleGroupMeta m_metaData;
                    bool m_metaDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MANAGEDRULEGROUP_H_
