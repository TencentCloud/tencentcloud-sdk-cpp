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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYFUNCTIONRULEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYFUNCTIONRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/FunctionRuleCondition.h>
#include <tencentcloud/teo/v20220901/model/FunctionRegionSelection.h>
#include <tencentcloud/teo/v20220901/model/FunctionWeightedSelection.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyFunctionRule请求参数结构体
                */
                class ModifyFunctionRuleRequest : public AbstractModel
                {
                public:
                    ModifyFunctionRuleRequest();
                    ~ModifyFunctionRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>站点 ID。</p>
                     * @return ZoneId <p>站点 ID。</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>站点 ID。</p>
                     * @param _zoneId <p>站点 ID。</p>
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>规则 ID。您可以先通过 DescribeFunctionRules 接口来获取需要修改的规则的 RuleId，然后传入修改后的规则内容，原规则内容会被覆盖式更新。</p>
                     * @return RuleId <p>规则 ID。您可以先通过 DescribeFunctionRules 接口来获取需要修改的规则的 RuleId，然后传入修改后的规则内容，原规则内容会被覆盖式更新。</p>
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置<p>规则 ID。您可以先通过 DescribeFunctionRules 接口来获取需要修改的规则的 RuleId，然后传入修改后的规则内容，原规则内容会被覆盖式更新。</p>
                     * @param _ruleId <p>规则 ID。您可以先通过 DescribeFunctionRules 接口来获取需要修改的规则的 RuleId，然后传入修改后的规则内容，原规则内容会被覆盖式更新。</p>
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
                     * 获取<p>规则条件列表，相同触发规则的不同条件匹配项之间为或关系，不填写保持原有配置。</p>
                     * @return FunctionRuleConditions <p>规则条件列表，相同触发规则的不同条件匹配项之间为或关系，不填写保持原有配置。</p>
                     * 
                     */
                    std::vector<FunctionRuleCondition> GetFunctionRuleConditions() const;

                    /**
                     * 设置<p>规则条件列表，相同触发规则的不同条件匹配项之间为或关系，不填写保持原有配置。</p>
                     * @param _functionRuleConditions <p>规则条件列表，相同触发规则的不同条件匹配项之间为或关系，不填写保持原有配置。</p>
                     * 
                     */
                    void SetFunctionRuleConditions(const std::vector<FunctionRuleCondition>& _functionRuleConditions);

                    /**
                     * 判断参数 FunctionRuleConditions 是否已赋值
                     * @return FunctionRuleConditions 是否已赋值
                     * 
                     */
                    bool FunctionRuleConditionsHasBeenSet() const;

                    /**
                     * 获取<p>函数选择配置类型：</p><li> direct：直接指定执行函数；</li><li> weight：基于权重比选择函数；</li><li> region：基于客户端 IP 的国家/地区选择函数。</li>不填时默认为 direct 。
                     * @return TriggerType <p>函数选择配置类型：</p><li> direct：直接指定执行函数；</li><li> weight：基于权重比选择函数；</li><li> region：基于客户端 IP 的国家/地区选择函数。</li>不填时默认为 direct 。
                     * 
                     */
                    std::string GetTriggerType() const;

                    /**
                     * 设置<p>函数选择配置类型：</p><li> direct：直接指定执行函数；</li><li> weight：基于权重比选择函数；</li><li> region：基于客户端 IP 的国家/地区选择函数。</li>不填时默认为 direct 。
                     * @param _triggerType <p>函数选择配置类型：</p><li> direct：直接指定执行函数；</li><li> weight：基于权重比选择函数；</li><li> region：基于客户端 IP 的国家/地区选择函数。</li>不填时默认为 direct 。
                     * 
                     */
                    void SetTriggerType(const std::string& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                    /**
                     * 获取<p>指定执行的函数 ID。当 TriggerType 为 direct 或 TriggerType 不填时生效。</p>
                     * @return FunctionId <p>指定执行的函数 ID。当 TriggerType 为 direct 或 TriggerType 不填时生效。</p>
                     * 
                     */
                    std::string GetFunctionId() const;

                    /**
                     * 设置<p>指定执行的函数 ID。当 TriggerType 为 direct 或 TriggerType 不填时生效。</p>
                     * @param _functionId <p>指定执行的函数 ID。当 TriggerType 为 direct 或 TriggerType 不填时生效。</p>
                     * 
                     */
                    void SetFunctionId(const std::string& _functionId);

                    /**
                     * 判断参数 FunctionId 是否已赋值
                     * @return FunctionId 是否已赋值
                     * 
                     */
                    bool FunctionIdHasBeenSet() const;

                    /**
                     * 获取<p>基于客户端 IP 国家/地区的函数选择配置，当 TriggerType 为 region 时生效且 RegionMappingSelections 必填。RegionMappingSelections 中必须包含一项 Regions 为 Default 的配置，同时还需至少配置一项其他具体的 Region。</p>
                     * @return RegionMappingSelections <p>基于客户端 IP 国家/地区的函数选择配置，当 TriggerType 为 region 时生效且 RegionMappingSelections 必填。RegionMappingSelections 中必须包含一项 Regions 为 Default 的配置，同时还需至少配置一项其他具体的 Region。</p>
                     * 
                     */
                    std::vector<FunctionRegionSelection> GetRegionMappingSelections() const;

                    /**
                     * 设置<p>基于客户端 IP 国家/地区的函数选择配置，当 TriggerType 为 region 时生效且 RegionMappingSelections 必填。RegionMappingSelections 中必须包含一项 Regions 为 Default 的配置，同时还需至少配置一项其他具体的 Region。</p>
                     * @param _regionMappingSelections <p>基于客户端 IP 国家/地区的函数选择配置，当 TriggerType 为 region 时生效且 RegionMappingSelections 必填。RegionMappingSelections 中必须包含一项 Regions 为 Default 的配置，同时还需至少配置一项其他具体的 Region。</p>
                     * 
                     */
                    void SetRegionMappingSelections(const std::vector<FunctionRegionSelection>& _regionMappingSelections);

                    /**
                     * 判断参数 RegionMappingSelections 是否已赋值
                     * @return RegionMappingSelections 是否已赋值
                     * 
                     */
                    bool RegionMappingSelectionsHasBeenSet() const;

                    /**
                     * 获取<p>基于权重的函数选择配置，当 TriggerType 为 weight 时生效且 WeightedSelections 必填。WeightedSelections 中的所有权重之和需要为100。</p>
                     * @return WeightedSelections <p>基于权重的函数选择配置，当 TriggerType 为 weight 时生效且 WeightedSelections 必填。WeightedSelections 中的所有权重之和需要为100。</p>
                     * 
                     */
                    std::vector<FunctionWeightedSelection> GetWeightedSelections() const;

                    /**
                     * 设置<p>基于权重的函数选择配置，当 TriggerType 为 weight 时生效且 WeightedSelections 必填。WeightedSelections 中的所有权重之和需要为100。</p>
                     * @param _weightedSelections <p>基于权重的函数选择配置，当 TriggerType 为 weight 时生效且 WeightedSelections 必填。WeightedSelections 中的所有权重之和需要为100。</p>
                     * 
                     */
                    void SetWeightedSelections(const std::vector<FunctionWeightedSelection>& _weightedSelections);

                    /**
                     * 判断参数 WeightedSelections 是否已赋值
                     * @return WeightedSelections 是否已赋值
                     * 
                     */
                    bool WeightedSelectionsHasBeenSet() const;

                    /**
                     * 获取<p>规则描述，最大支持 60 个字符，不填写保持原有配置。</p>
                     * @return Remark <p>规则描述，最大支持 60 个字符，不填写保持原有配置。</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>规则描述，最大支持 60 个字符，不填写保持原有配置。</p>
                     * @param _remark <p>规则描述，最大支持 60 个字符，不填写保持原有配置。</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * <p>站点 ID。</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>规则 ID。您可以先通过 DescribeFunctionRules 接口来获取需要修改的规则的 RuleId，然后传入修改后的规则内容，原规则内容会被覆盖式更新。</p>
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>规则条件列表，相同触发规则的不同条件匹配项之间为或关系，不填写保持原有配置。</p>
                     */
                    std::vector<FunctionRuleCondition> m_functionRuleConditions;
                    bool m_functionRuleConditionsHasBeenSet;

                    /**
                     * <p>函数选择配置类型：</p><li> direct：直接指定执行函数；</li><li> weight：基于权重比选择函数；</li><li> region：基于客户端 IP 的国家/地区选择函数。</li>不填时默认为 direct 。
                     */
                    std::string m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * <p>指定执行的函数 ID。当 TriggerType 为 direct 或 TriggerType 不填时生效。</p>
                     */
                    std::string m_functionId;
                    bool m_functionIdHasBeenSet;

                    /**
                     * <p>基于客户端 IP 国家/地区的函数选择配置，当 TriggerType 为 region 时生效且 RegionMappingSelections 必填。RegionMappingSelections 中必须包含一项 Regions 为 Default 的配置，同时还需至少配置一项其他具体的 Region。</p>
                     */
                    std::vector<FunctionRegionSelection> m_regionMappingSelections;
                    bool m_regionMappingSelectionsHasBeenSet;

                    /**
                     * <p>基于权重的函数选择配置，当 TriggerType 为 weight 时生效且 WeightedSelections 必填。WeightedSelections 中的所有权重之和需要为100。</p>
                     */
                    std::vector<FunctionWeightedSelection> m_weightedSelections;
                    bool m_weightedSelectionsHasBeenSet;

                    /**
                     * <p>规则描述，最大支持 60 个字符，不填写保持原有配置。</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYFUNCTIONRULEREQUEST_H_
