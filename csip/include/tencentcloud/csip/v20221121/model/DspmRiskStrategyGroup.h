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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMRISKSTRATEGYGROUP_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMRISKSTRATEGYGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmRiskStrategy.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Dspm 风险分组策略
                */
                class DspmRiskStrategyGroup : public AbstractModel
                {
                public:
                    DspmRiskStrategyGroup();
                    ~DspmRiskStrategyGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>策略类型</p>
                     * @return StrategyType <p>策略类型</p>
                     * 
                     */
                    std::string GetStrategyType() const;

                    /**
                     * 设置<p>策略类型</p>
                     * @param _strategyType <p>策略类型</p>
                     * 
                     */
                    void SetStrategyType(const std::string& _strategyType);

                    /**
                     * 判断参数 StrategyType 是否已赋值
                     * @return StrategyType 是否已赋值
                     * 
                     */
                    bool StrategyTypeHasBeenSet() const;

                    /**
                     * 获取<p>策略名</p>
                     * @return Name <p>策略名</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>策略名</p>
                     * @param _name <p>策略名</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>策略类型</p>
                     * @return StrategyCategory <p>策略类型</p>
                     * 
                     */
                    std::string GetStrategyCategory() const;

                    /**
                     * 设置<p>策略类型</p>
                     * @param _strategyCategory <p>策略类型</p>
                     * 
                     */
                    void SetStrategyCategory(const std::string& _strategyCategory);

                    /**
                     * 判断参数 StrategyCategory 是否已赋值
                     * @return StrategyCategory 是否已赋值
                     * 
                     */
                    bool StrategyCategoryHasBeenSet() const;

                    /**
                     * 获取<p>是否启用。0-禁用 1-启用</p>
                     * @return IsEnabled <p>是否启用。0-禁用 1-启用</p>
                     * 
                     */
                    int64_t GetIsEnabled() const;

                    /**
                     * 设置<p>是否启用。0-禁用 1-启用</p>
                     * @param _isEnabled <p>是否启用。0-禁用 1-启用</p>
                     * 
                     */
                    void SetIsEnabled(const int64_t& _isEnabled);

                    /**
                     * 判断参数 IsEnabled 是否已赋值
                     * @return IsEnabled 是否已赋值
                     * 
                     */
                    bool IsEnabledHasBeenSet() const;

                    /**
                     * 获取<p>命中次数</p>
                     * @return HitCount <p>命中次数</p>
                     * 
                     */
                    int64_t GetHitCount() const;

                    /**
                     * 设置<p>命中次数</p>
                     * @param _hitCount <p>命中次数</p>
                     * 
                     */
                    void SetHitCount(const int64_t& _hitCount);

                    /**
                     * 判断参数 HitCount 是否已赋值
                     * @return HitCount 是否已赋值
                     * 
                     */
                    bool HitCountHasBeenSet() const;

                    /**
                     * 获取<p>风险类型。risk-风险；alarm-告警。</p>
                     * @return RiskType <p>风险类型。risk-风险；alarm-告警。</p>
                     * 
                     */
                    std::string GetRiskType() const;

                    /**
                     * 设置<p>风险类型。risk-风险；alarm-告警。</p>
                     * @param _riskType <p>风险类型。risk-风险；alarm-告警。</p>
                     * 
                     */
                    void SetRiskType(const std::string& _riskType);

                    /**
                     * 判断参数 RiskType 是否已赋值
                     * @return RiskType 是否已赋值
                     * 
                     */
                    bool RiskTypeHasBeenSet() const;

                    /**
                     * 获取<p>策略列表</p>
                     * @return StrategyList <p>策略列表</p>
                     * 
                     */
                    std::vector<DspmRiskStrategy> GetStrategyList() const;

                    /**
                     * 设置<p>策略列表</p>
                     * @param _strategyList <p>策略列表</p>
                     * 
                     */
                    void SetStrategyList(const std::vector<DspmRiskStrategy>& _strategyList);

                    /**
                     * 判断参数 StrategyList 是否已赋值
                     * @return StrategyList 是否已赋值
                     * 
                     */
                    bool StrategyListHasBeenSet() const;

                    /**
                     * 获取<p>规则来源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleSource <p>规则来源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleSource() const;

                    /**
                     * 设置<p>规则来源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleSource <p>规则来源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleSource(const std::string& _ruleSource);

                    /**
                     * 判断参数 RuleSource 是否已赋值
                     * @return RuleSource 是否已赋值
                     * 
                     */
                    bool RuleSourceHasBeenSet() const;

                private:

                    /**
                     * <p>策略类型</p>
                     */
                    std::string m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * <p>策略名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>策略类型</p>
                     */
                    std::string m_strategyCategory;
                    bool m_strategyCategoryHasBeenSet;

                    /**
                     * <p>是否启用。0-禁用 1-启用</p>
                     */
                    int64_t m_isEnabled;
                    bool m_isEnabledHasBeenSet;

                    /**
                     * <p>命中次数</p>
                     */
                    int64_t m_hitCount;
                    bool m_hitCountHasBeenSet;

                    /**
                     * <p>风险类型。risk-风险；alarm-告警。</p>
                     */
                    std::string m_riskType;
                    bool m_riskTypeHasBeenSet;

                    /**
                     * <p>策略列表</p>
                     */
                    std::vector<DspmRiskStrategy> m_strategyList;
                    bool m_strategyListHasBeenSet;

                    /**
                     * <p>规则来源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleSource;
                    bool m_ruleSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMRISKSTRATEGYGROUP_H_
