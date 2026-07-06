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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_POLICYRISK_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_POLICYRISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Fwm
    {
        namespace V20250611
        {
            namespace Model
            {
                /**
                * 策略风险
                */
                class PolicyRisk : public AbstractModel
                {
                public:
                    PolicyRisk();
                    ~PolicyRisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取问题对应的唯一uuid
                     * @return Id 问题对应的唯一uuid
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置问题对应的唯一uuid
                     * @param _id 问题对应的唯一uuid
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取风险大类
                     * @return RiskCategory 风险大类
                     * 
                     */
                    std::string GetRiskCategory() const;

                    /**
                     * 设置风险大类
                     * @param _riskCategory 风险大类
                     * 
                     */
                    void SetRiskCategory(const std::string& _riskCategory);

                    /**
                     * 判断参数 RiskCategory 是否已赋值
                     * @return RiskCategory 是否已赋值
                     * 
                     */
                    bool RiskCategoryHasBeenSet() const;

                    /**
                     * 获取风险子类
                     * @return RiskSubCategory 风险子类
                     * 
                     */
                    std::string GetRiskSubCategory() const;

                    /**
                     * 设置风险子类
                     * @param _riskSubCategory 风险子类
                     * 
                     */
                    void SetRiskSubCategory(const std::string& _riskSubCategory);

                    /**
                     * 判断参数 RiskSubCategory 是否已赋值
                     * @return RiskSubCategory 是否已赋值
                     * 
                     */
                    bool RiskSubCategoryHasBeenSet() const;

                    /**
                     * 获取规则分类
                     * @return RuleType 规则分类
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置规则分类
                     * @param _ruleType 规则分类
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
                     * 获取风险等级，0：低风险
1：中风险
2：高风险
                     * @return RiskLevel 风险等级，0：低风险
1：中风险
2：高风险
                     * 
                     */
                    int64_t GetRiskLevel() const;

                    /**
                     * 设置风险等级，0：低风险
1：中风险
2：高风险
                     * @param _riskLevel 风险等级，0：低风险
1：中风险
2：高风险
                     * 
                     */
                    void SetRiskLevel(const int64_t& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取安全组
                     * @return Product 安全组
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置安全组
                     * @param _product 安全组
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取风险包含的企业安全组规则ID
                     * @return SgRuleId 风险包含的企业安全组规则ID
                     * 
                     */
                    std::vector<std::string> GetSgRuleId() const;

                    /**
                     * 设置风险包含的企业安全组规则ID
                     * @param _sgRuleId 风险包含的企业安全组规则ID
                     * 
                     */
                    void SetSgRuleId(const std::vector<std::string>& _sgRuleId);

                    /**
                     * 判断参数 SgRuleId 是否已赋值
                     * @return SgRuleId 是否已赋值
                     * 
                     */
                    bool SgRuleIdHasBeenSet() const;

                    /**
                     * 获取风险包含安全组ID内的问题规则数
                     * @return RuleCount 风险包含安全组ID内的问题规则数
                     * 
                     */
                    int64_t GetRuleCount() const;

                    /**
                     * 设置风险包含安全组ID内的问题规则数
                     * @param _ruleCount 风险包含安全组ID内的问题规则数
                     * 
                     */
                    void SetRuleCount(const int64_t& _ruleCount);

                    /**
                     * 判断参数 RuleCount 是否已赋值
                     * @return RuleCount 是否已赋值
                     * 
                     */
                    bool RuleCountHasBeenSet() const;

                    /**
                     * 获取风险包含的安全组ID
                     * @return SgId 风险包含的安全组ID
                     * 
                     */
                    std::vector<std::string> GetSgId() const;

                    /**
                     * 设置风险包含的安全组ID
                     * @param _sgId 风险包含的安全组ID
                     * 
                     */
                    void SetSgId(const std::vector<std::string>& _sgId);

                    /**
                     * 判断参数 SgId 是否已赋值
                     * @return SgId 是否已赋值
                     * 
                     */
                    bool SgIdHasBeenSet() const;

                    /**
                     * 获取风险特征
                     * @return RiskFeature 风险特征
                     * 
                     */
                    std::string GetRiskFeature() const;

                    /**
                     * 设置风险特征
                     * @param _riskFeature 风险特征
                     * 
                     */
                    void SetRiskFeature(const std::string& _riskFeature);

                    /**
                     * 判断参数 RiskFeature 是否已赋值
                     * @return RiskFeature 是否已赋值
                     * 
                     */
                    bool RiskFeatureHasBeenSet() const;

                    /**
                     * 获取处置建议
                     * @return Suggestion 处置建议
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置处置建议
                     * @param _suggestion 处置建议
                     * 
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取处置状态，0：未处理，1：已处理，2：忽略
                     * @return Status 处置状态，0：未处理，1：已处理，2：忽略
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置处置状态，0：未处理，1：已处理，2：忽略
                     * @param _status 处置状态，0：未处理，1：已处理，2：忽略
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
                     * 获取发现时间
                     * @return FoundTime 发现时间
                     * 
                     */
                    std::string GetFoundTime() const;

                    /**
                     * 设置发现时间
                     * @param _foundTime 发现时间
                     * 
                     */
                    void SetFoundTime(const std::string& _foundTime);

                    /**
                     * 判断参数 FoundTime 是否已赋值
                     * @return FoundTime 是否已赋值
                     * 
                     */
                    bool FoundTimeHasBeenSet() const;

                    /**
                     * 获取处置时间
                     * @return DisposalTime 处置时间
                     * 
                     */
                    std::string GetDisposalTime() const;

                    /**
                     * 设置处置时间
                     * @param _disposalTime 处置时间
                     * 
                     */
                    void SetDisposalTime(const std::string& _disposalTime);

                    /**
                     * 判断参数 DisposalTime 是否已赋值
                     * @return DisposalTime 是否已赋值
                     * 
                     */
                    bool DisposalTimeHasBeenSet() const;

                    /**
                     * 获取安全组地域
                     * @return Region 安全组地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置安全组地域
                     * @param _region 安全组地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Ingress入站，Egress出站
                     * @return Direction Ingress入站，Egress出站
                     * 
                     */
                    std::string GetDirection() const;

                    /**
                     * 设置Ingress入站，Egress出站
                     * @param _direction Ingress入站，Egress出站
                     * 
                     */
                    void SetDirection(const std::string& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取风险原因
                     * @return RiskReason 风险原因
                     * 
                     */
                    std::string GetRiskReason() const;

                    /**
                     * 设置风险原因
                     * @param _riskReason 风险原因
                     * 
                     */
                    void SetRiskReason(const std::string& _riskReason);

                    /**
                     * 判断参数 RiskReason 是否已赋值
                     * @return RiskReason 是否已赋值
                     * 
                     */
                    bool RiskReasonHasBeenSet() const;

                private:

                    /**
                     * 问题对应的唯一uuid
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 风险大类
                     */
                    std::string m_riskCategory;
                    bool m_riskCategoryHasBeenSet;

                    /**
                     * 风险子类
                     */
                    std::string m_riskSubCategory;
                    bool m_riskSubCategoryHasBeenSet;

                    /**
                     * 规则分类
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 风险等级，0：低风险
1：中风险
2：高风险
                     */
                    int64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 安全组
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 风险包含的企业安全组规则ID
                     */
                    std::vector<std::string> m_sgRuleId;
                    bool m_sgRuleIdHasBeenSet;

                    /**
                     * 风险包含安全组ID内的问题规则数
                     */
                    int64_t m_ruleCount;
                    bool m_ruleCountHasBeenSet;

                    /**
                     * 风险包含的安全组ID
                     */
                    std::vector<std::string> m_sgId;
                    bool m_sgIdHasBeenSet;

                    /**
                     * 风险特征
                     */
                    std::string m_riskFeature;
                    bool m_riskFeatureHasBeenSet;

                    /**
                     * 处置建议
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 处置状态，0：未处理，1：已处理，2：忽略
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 发现时间
                     */
                    std::string m_foundTime;
                    bool m_foundTimeHasBeenSet;

                    /**
                     * 处置时间
                     */
                    std::string m_disposalTime;
                    bool m_disposalTimeHasBeenSet;

                    /**
                     * 安全组地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Ingress入站，Egress出站
                     */
                    std::string m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * 风险原因
                     */
                    std::string m_riskReason;
                    bool m_riskReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_POLICYRISK_H_
