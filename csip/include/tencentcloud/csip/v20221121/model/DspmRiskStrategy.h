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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMRISKSTRATEGY_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMRISKSTRATEGY_H_

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
                * Dspm 风险策略
                */
                class DspmRiskStrategy : public AbstractModel
                {
                public:
                    DspmRiskStrategy();
                    ~DspmRiskStrategy() = default;
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
                     * 获取<p>风险等级。</p>
                     * @return RiskLevel <p>风险等级。</p>
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置<p>风险等级。</p>
                     * @param _riskLevel <p>风险等级。</p>
                     * 
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取<p>策略规则</p>
                     * @return Rule <p>策略规则</p>
                     * 
                     */
                    std::string GetRule() const;

                    /**
                     * 设置<p>策略规则</p>
                     * @param _rule <p>策略规则</p>
                     * 
                     */
                    void SetRule(const std::string& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取<p>备注</p>
                     * @return Remark <p>备注</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注</p>
                     * @param _remark <p>备注</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>策略内容</p>
                     * @return Description <p>策略内容</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>策略内容</p>
                     * @param _description <p>策略内容</p>
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
                     * 获取<p>资产所属账号app id</p>
                     * @return AppId <p>资产所属账号app id</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>资产所属账号app id</p>
                     * @param _appId <p>资产所属账号app id</p>
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>账号昵称</p>
                     * @return NickName <p>账号昵称</p>
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置<p>账号昵称</p>
                     * @param _nickName <p>账号昵称</p>
                     * 
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取<p>资产所属账号uin</p>
                     * @return Uin <p>资产所属账号uin</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>资产所属账号uin</p>
                     * @param _uin <p>资产所属账号uin</p>
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取<p>策略id</p>
                     * @return StrategyId <p>策略id</p>
                     * 
                     */
                    uint64_t GetStrategyId() const;

                    /**
                     * 设置<p>策略id</p>
                     * @param _strategyId <p>策略id</p>
                     * 
                     */
                    void SetStrategyId(const uint64_t& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

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

                    /**
                     * 获取<p>支持的资产类型</p>
                     * @return AssetTypes <p>支持的资产类型</p>
                     * 
                     */
                    std::vector<std::string> GetAssetTypes() const;

                    /**
                     * 设置<p>支持的资产类型</p>
                     * @param _assetTypes <p>支持的资产类型</p>
                     * 
                     */
                    void SetAssetTypes(const std::vector<std::string>& _assetTypes);

                    /**
                     * 判断参数 AssetTypes 是否已赋值
                     * @return AssetTypes 是否已赋值
                     * 
                     */
                    bool AssetTypesHasBeenSet() const;

                    /**
                     * 获取<p>风险描述</p>
                     * @return RiskDescription <p>风险描述</p>
                     * 
                     */
                    std::string GetRiskDescription() const;

                    /**
                     * 设置<p>风险描述</p>
                     * @param _riskDescription <p>风险描述</p>
                     * 
                     */
                    void SetRiskDescription(const std::string& _riskDescription);

                    /**
                     * 判断参数 RiskDescription 是否已赋值
                     * @return RiskDescription 是否已赋值
                     * 
                     */
                    bool RiskDescriptionHasBeenSet() const;

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
                     * <p>风险等级。</p>
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>策略规则</p>
                     */
                    std::string m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * <p>备注</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>策略内容</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

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
                     * <p>资产所属账号app id</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>账号昵称</p>
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * <p>资产所属账号uin</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>策略id</p>
                     */
                    uint64_t m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * <p>规则来源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleSource;
                    bool m_ruleSourceHasBeenSet;

                    /**
                     * <p>支持的资产类型</p>
                     */
                    std::vector<std::string> m_assetTypes;
                    bool m_assetTypesHasBeenSet;

                    /**
                     * <p>风险描述</p>
                     */
                    std::string m_riskDescription;
                    bool m_riskDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMRISKSTRATEGY_H_
