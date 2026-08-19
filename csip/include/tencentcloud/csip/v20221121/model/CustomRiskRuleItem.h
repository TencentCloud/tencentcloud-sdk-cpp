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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CUSTOMRISKRULEITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CUSTOMRISKRULEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/StandardTerm.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 自定义策略详情
                */
                class CustomRiskRuleItem : public AbstractModel
                {
                public:
                    CustomRiskRuleItem();
                    ~CustomRiskRuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>风险规则ID</p>
                     * @return RuleID <p>风险规则ID</p>
                     * 
                     */
                    std::string GetRuleID() const;

                    /**
                     * 设置<p>风险规则ID</p>
                     * @param _ruleID <p>风险规则ID</p>
                     * 
                     */
                    void SetRuleID(const std::string& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取<p>腾讯云</p>
                     * @return Provider <p>腾讯云</p>
                     * 
                     */
                    std::string GetProvider() const;

                    /**
                     * 设置<p>腾讯云</p>
                     * @param _provider <p>腾讯云</p>
                     * 
                     */
                    void SetProvider(const std::string& _provider);

                    /**
                     * 判断参数 Provider 是否已赋值
                     * @return Provider 是否已赋值
                     * 
                     */
                    bool ProviderHasBeenSet() const;

                    /**
                     * 获取<p>风险标题</p>
                     * @return RiskTitle <p>风险标题</p>
                     * 
                     */
                    std::string GetRiskTitle() const;

                    /**
                     * 设置<p>风险标题</p>
                     * @param _riskTitle <p>风险标题</p>
                     * 
                     */
                    void SetRiskTitle(const std::string& _riskTitle);

                    /**
                     * 判断参数 RiskTitle 是否已赋值
                     * @return RiskTitle 是否已赋值
                     * 
                     */
                    bool RiskTitleHasBeenSet() const;

                    /**
                     * 获取<p>风险分类</p>
                     * @return Classify <p>风险分类</p>
                     * 
                     */
                    std::string GetClassify() const;

                    /**
                     * 设置<p>风险分类</p>
                     * @param _classify <p>风险分类</p>
                     * 
                     */
                    void SetClassify(const std::string& _classify);

                    /**
                     * 判断参数 Classify 是否已赋值
                     * @return Classify 是否已赋值
                     * 
                     */
                    bool ClassifyHasBeenSet() const;

                    /**
                     * 获取<p>风险等级</p>
                     * @return Severity <p>风险等级</p>
                     * 
                     */
                    std::string GetSeverity() const;

                    /**
                     * 设置<p>风险等级</p>
                     * @param _severity <p>风险等级</p>
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
                     * 获取<p>风险规则开启状态</p>
                     * @return Status <p>风险规则开启状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>风险规则开启状态</p>
                     * @param _status <p>风险规则开启状态</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>关联的账号数量</p>
                     * @return RelatedUinCount <p>关联的账号数量</p>
                     * 
                     */
                    uint64_t GetRelatedUinCount() const;

                    /**
                     * 设置<p>关联的账号数量</p>
                     * @param _relatedUinCount <p>关联的账号数量</p>
                     * 
                     */
                    void SetRelatedUinCount(const uint64_t& _relatedUinCount);

                    /**
                     * 判断参数 RelatedUinCount 是否已赋值
                     * @return RelatedUinCount 是否已赋值
                     * 
                     */
                    bool RelatedUinCountHasBeenSet() const;

                    /**
                     * 获取<p>策略启用的账号数量</p>
                     * @return PolicyEnableCount <p>策略启用的账号数量</p>
                     * 
                     */
                    uint64_t GetPolicyEnableCount() const;

                    /**
                     * 设置<p>策略启用的账号数量</p>
                     * @param _policyEnableCount <p>策略启用的账号数量</p>
                     * 
                     */
                    void SetPolicyEnableCount(const uint64_t& _policyEnableCount);

                    /**
                     * 判断参数 PolicyEnableCount 是否已赋值
                     * @return PolicyEnableCount 是否已赋值
                     * 
                     */
                    bool PolicyEnableCountHasBeenSet() const;

                    /**
                     * 获取<p>资产类型</p>
                     * @return AssetType <p>资产类型</p>
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置<p>资产类型</p>
                     * @param _assetType <p>资产类型</p>
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取<p>规则是否免费</p>
                     * @return IsFree <p>规则是否免费</p>
                     * 
                     */
                    uint64_t GetIsFree() const;

                    /**
                     * 设置<p>规则是否免费</p>
                     * @param _isFree <p>规则是否免费</p>
                     * 
                     */
                    void SetIsFree(const uint64_t& _isFree);

                    /**
                     * 判断参数 IsFree 是否已赋值
                     * @return IsFree 是否已赋值
                     * 
                     */
                    bool IsFreeHasBeenSet() const;

                    /**
                     * 获取<p>检查类型</p>
                     * @return CheckType <p>检查类型</p>
                     * 
                     */
                    std::string GetCheckType() const;

                    /**
                     * 设置<p>检查类型</p>
                     * @param _checkType <p>检查类型</p>
                     * 
                     */
                    void SetCheckType(const std::string& _checkType);

                    /**
                     * 判断参数 CheckType 是否已赋值
                     * @return CheckType 是否已赋值
                     * 
                     */
                    bool CheckTypeHasBeenSet() const;

                    /**
                     * 获取<p>安全条款规范</p>
                     * @return StandardTerms <p>安全条款规范</p>
                     * 
                     */
                    std::vector<StandardTerm> GetStandardTerms() const;

                    /**
                     * 设置<p>安全条款规范</p>
                     * @param _standardTerms <p>安全条款规范</p>
                     * 
                     */
                    void SetStandardTerms(const std::vector<StandardTerm>& _standardTerms);

                    /**
                     * 判断参数 StandardTerms 是否已赋值
                     * @return StandardTerms 是否已赋值
                     * 
                     */
                    bool StandardTermsHasBeenSet() const;

                    /**
                     * 获取<p>资产类型图标</p>
                     * @return AssetTypeIconURL <p>资产类型图标</p>
                     * 
                     */
                    std::string GetAssetTypeIconURL() const;

                    /**
                     * 设置<p>资产类型图标</p>
                     * @param _assetTypeIconURL <p>资产类型图标</p>
                     * 
                     */
                    void SetAssetTypeIconURL(const std::string& _assetTypeIconURL);

                    /**
                     * 判断参数 AssetTypeIconURL 是否已赋值
                     * @return AssetTypeIconURL 是否已赋值
                     * 
                     */
                    bool AssetTypeIconURLHasBeenSet() const;

                private:

                    /**
                     * <p>风险规则ID</p>
                     */
                    std::string m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * <p>腾讯云</p>
                     */
                    std::string m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * <p>风险标题</p>
                     */
                    std::string m_riskTitle;
                    bool m_riskTitleHasBeenSet;

                    /**
                     * <p>风险分类</p>
                     */
                    std::string m_classify;
                    bool m_classifyHasBeenSet;

                    /**
                     * <p>风险等级</p>
                     */
                    std::string m_severity;
                    bool m_severityHasBeenSet;

                    /**
                     * <p>风险规则开启状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>关联的账号数量</p>
                     */
                    uint64_t m_relatedUinCount;
                    bool m_relatedUinCountHasBeenSet;

                    /**
                     * <p>策略启用的账号数量</p>
                     */
                    uint64_t m_policyEnableCount;
                    bool m_policyEnableCountHasBeenSet;

                    /**
                     * <p>资产类型</p>
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * <p>规则是否免费</p>
                     */
                    uint64_t m_isFree;
                    bool m_isFreeHasBeenSet;

                    /**
                     * <p>检查类型</p>
                     */
                    std::string m_checkType;
                    bool m_checkTypeHasBeenSet;

                    /**
                     * <p>安全条款规范</p>
                     */
                    std::vector<StandardTerm> m_standardTerms;
                    bool m_standardTermsHasBeenSet;

                    /**
                     * <p>资产类型图标</p>
                     */
                    std::string m_assetTypeIconURL;
                    bool m_assetTypeIconURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CUSTOMRISKRULEITEM_H_
