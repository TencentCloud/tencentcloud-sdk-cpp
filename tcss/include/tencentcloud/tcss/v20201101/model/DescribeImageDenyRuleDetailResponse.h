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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGEDENYRULEDETAILRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGEDENYRULEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeImageDenyRuleDetail返回参数结构体
                */
                class DescribeImageDenyRuleDetailResponse : public AbstractModel
                {
                public:
                    DescribeImageDenyRuleDetailResponse();
                    ~DescribeImageDenyRuleDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取规则ID
                     * @return ID 规则ID
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取规则名称
                     * @return RuleName 规则名称
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取规则类型 RULE_RISK：风险， RULE_PRIVILEGE：特权
                     * @return RuleType 规则类型 RULE_RISK：风险， RULE_PRIVILEGE：特权
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取生效的镜像数量
                     * @return EffectImageCount 生效的镜像数量
                     * 
                     */
                    int64_t GetEffectImageCount() const;

                    /**
                     * 判断参数 EffectImageCount 是否已赋值
                     * @return EffectImageCount 是否已赋值
                     * 
                     */
                    bool EffectImageCountHasBeenSet() const;

                    /**
                     * 获取是否对全部扫描镜像生效。0:全选镜像，1:自选镜像
                     * @return IsEffectAllImage 是否对全部扫描镜像生效。0:全选镜像，1:自选镜像
                     * 
                     */
                    int64_t GetIsEffectAllImage() const;

                    /**
                     * 判断参数 IsEffectAllImage 是否已赋值
                     * @return IsEffectAllImage 是否已赋值
                     * 
                     */
                    bool IsEffectAllImageHasBeenSet() const;

                    /**
                     * 获取规则开始生效时间
                     * @return EffectTime 规则开始生效时间
                     * 
                     */
                    std::string GetEffectTime() const;

                    /**
                     * 判断参数 EffectTime 是否已赋值
                     * @return EffectTime 是否已赋值
                     * 
                     */
                    bool EffectTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取操作用户
                     * @return OperationUin 操作用户
                     * 
                     */
                    std::string GetOperationUin() const;

                    /**
                     * 判断参数 OperationUin 是否已赋值
                     * @return OperationUin 是否已赋值
                     * 
                     */
                    bool OperationUinHasBeenSet() const;

                    /**
                     * 获取生效状态 IN_THE_TEST ：观察中，IN_EFFECT：生效中
                     * @return EffectStatus 生效状态 IN_THE_TEST ：观察中，IN_EFFECT：生效中
                     * 
                     */
                    std::string GetEffectStatus() const;

                    /**
                     * 判断参数 EffectStatus 是否已赋值
                     * @return EffectStatus 是否已赋值
                     * 
                     */
                    bool EffectStatusHasBeenSet() const;

                    /**
                     * 获取规则描述
                     * @return RuleDescription 规则描述
                     * 
                     */
                    std::string GetRuleDescription() const;

                    /**
                     * 判断参数 RuleDescription 是否已赋值
                     * @return RuleDescription 是否已赋值
                     * 
                     */
                    bool RuleDescriptionHasBeenSet() const;

                    /**
                     * 获取启用状态 0:开启，1:关闭
                     * @return Status 启用状态 0:开启，1:关闭
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取漏洞，0:未选中，1:选中
                     * @return Vul 漏洞，0:未选中，1:选中
                     * 
                     */
                    int64_t GetVul() const;

                    /**
                     * 判断参数 Vul 是否已赋值
                     * @return Vul 是否已赋值
                     * 
                     */
                    bool VulHasBeenSet() const;

                    /**
                     * 获取cve编号
                     * @return CVEIDSet cve编号
                     * 
                     */
                    std::vector<std::string> GetCVEIDSet() const;

                    /**
                     * 判断参数 CVEIDSet 是否已赋值
                     * @return CVEIDSet 是否已赋值
                     * 
                     */
                    bool CVEIDSetHasBeenSet() const;

                    /**
                     * 获取组件编号
                     * @return ComponentSet 组件编号
                     * 
                     */
                    std::vector<std::string> GetComponentSet() const;

                    /**
                     * 判断参数 ComponentSet 是否已赋值
                     * @return ComponentSet 是否已赋值
                     * 
                     */
                    bool ComponentSetHasBeenSet() const;

                    /**
                     * 获取漏洞分类
                     * @return VulClassSet 漏洞分类
                     * 
                     */
                    std::vector<std::string> GetVulClassSet() const;

                    /**
                     * 判断参数 VulClassSet 是否已赋值
                     * @return VulClassSet 是否已赋值
                     * 
                     */
                    bool VulClassSetHasBeenSet() const;

                    /**
                     * 获取漏洞等级
                     * @return VulLevelSet 漏洞等级
                     * 
                     */
                    std::vector<std::string> GetVulLevelSet() const;

                    /**
                     * 判断参数 VulLevelSet 是否已赋值
                     * @return VulLevelSet 是否已赋值
                     * 
                     */
                    bool VulLevelSetHasBeenSet() const;

                    /**
                     * 获取漏洞标签
                     * @return VulLabelSet 漏洞标签
                     * 
                     */
                    std::vector<std::string> GetVulLabelSet() const;

                    /**
                     * 判断参数 VulLabelSet 是否已赋值
                     * @return VulLabelSet 是否已赋值
                     * 
                     */
                    bool VulLabelSetHasBeenSet() const;

                    /**
                     * 获取木马，0:未选中，1:选中
                     * @return Virus 木马，0:未选中，1:选中
                     * 
                     */
                    int64_t GetVirus() const;

                    /**
                     * 判断参数 Virus 是否已赋值
                     * @return Virus 是否已赋值
                     * 
                     */
                    bool VirusHasBeenSet() const;

                    /**
                     * 获取木马md5列表
                     * @return VirusMD5Set 木马md5列表
                     * 
                     */
                    std::vector<std::string> GetVirusMD5Set() const;

                    /**
                     * 判断参数 VirusMD5Set 是否已赋值
                     * @return VirusMD5Set 是否已赋值
                     * 
                     */
                    bool VirusMD5SetHasBeenSet() const;

                    /**
                     * 获取木马等级
                     * @return VirusLevelSet 木马等级
                     * 
                     */
                    std::vector<std::string> GetVirusLevelSet() const;

                    /**
                     * 判断参数 VirusLevelSet 是否已赋值
                     * @return VirusLevelSet 是否已赋值
                     * 
                     */
                    bool VirusLevelSetHasBeenSet() const;

                    /**
                     * 获取病毒名
                     * @return VirusName 病毒名
                     * 
                     */
                    std::vector<std::string> GetVirusName() const;

                    /**
                     * 判断参数 VirusName 是否已赋值
                     * @return VirusName 是否已赋值
                     * 
                     */
                    bool VirusNameHasBeenSet() const;

                    /**
                     * 获取敏感信息，0:未选中，1:选中
                     * @return Risk 敏感信息，0:未选中，1:选中
                     * 
                     */
                    int64_t GetRisk() const;

                    /**
                     * 判断参数 Risk 是否已赋值
                     * @return Risk 是否已赋值
                     * 
                     */
                    bool RiskHasBeenSet() const;

                    /**
                     * 获取敏感等级
                     * @return RiskLevelSet 敏感等级
                     * 
                     */
                    std::vector<std::string> GetRiskLevelSet() const;

                    /**
                     * 判断参数 RiskLevelSet 是否已赋值
                     * @return RiskLevelSet 是否已赋值
                     * 
                     */
                    bool RiskLevelSetHasBeenSet() const;

                    /**
                     * 获取敏感信息分类
                     * @return RiskType 敏感信息分类
                     * 
                     */
                    std::vector<std::string> GetRiskType() const;

                    /**
                     * 判断参数 RiskType 是否已赋值
                     * @return RiskType 是否已赋值
                     * 
                     */
                    bool RiskTypeHasBeenSet() const;

                    /**
                     * 获取特权启动 0:不允许，1:允许
                     * @return PrivilegeRun 特权启动 0:不允许，1:允许
                     * 
                     */
                    int64_t GetPrivilegeRun() const;

                    /**
                     * 判断参数 PrivilegeRun 是否已赋值
                     * @return PrivilegeRun 是否已赋值
                     * 
                     */
                    bool PrivilegeRunHasBeenSet() const;

                    /**
                     * 获取特权类型,
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrivilegeDetail 特权类型,
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetPrivilegeDetail() const;

                    /**
                     * 判断参数 PrivilegeDetail 是否已赋值
                     * @return PrivilegeDetail 是否已赋值
                     * 
                     */
                    bool PrivilegeDetailHasBeenSet() const;

                    /**
                     * 获取镜像ID列表
                     * @return EffectImageSet 镜像ID列表
                     * 
                     */
                    std::vector<std::string> GetEffectImageSet() const;

                    /**
                     * 判断参数 EffectImageSet 是否已赋值
                     * @return EffectImageSet 是否已赋值
                     * 
                     */
                    bool EffectImageSetHasBeenSet() const;

                    /**
                     * 获取多少天后生效
                     * @return EffectDay 多少天后生效
                     * 
                     */
                    uint64_t GetEffectDay() const;

                    /**
                     * 判断参数 EffectDay 是否已赋值
                     * @return EffectDay 是否已赋值
                     * 
                     */
                    bool EffectDayHasBeenSet() const;

                    /**
                     * 获取规则RuelD
                     * @return RuleID 规则RuelD
                     * 
                     */
                    std::string GetRuleID() const;

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                private:

                    /**
                     * 规则ID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 规则类型 RULE_RISK：风险， RULE_PRIVILEGE：特权
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 生效的镜像数量
                     */
                    int64_t m_effectImageCount;
                    bool m_effectImageCountHasBeenSet;

                    /**
                     * 是否对全部扫描镜像生效。0:全选镜像，1:自选镜像
                     */
                    int64_t m_isEffectAllImage;
                    bool m_isEffectAllImageHasBeenSet;

                    /**
                     * 规则开始生效时间
                     */
                    std::string m_effectTime;
                    bool m_effectTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 操作用户
                     */
                    std::string m_operationUin;
                    bool m_operationUinHasBeenSet;

                    /**
                     * 生效状态 IN_THE_TEST ：观察中，IN_EFFECT：生效中
                     */
                    std::string m_effectStatus;
                    bool m_effectStatusHasBeenSet;

                    /**
                     * 规则描述
                     */
                    std::string m_ruleDescription;
                    bool m_ruleDescriptionHasBeenSet;

                    /**
                     * 启用状态 0:开启，1:关闭
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 漏洞，0:未选中，1:选中
                     */
                    int64_t m_vul;
                    bool m_vulHasBeenSet;

                    /**
                     * cve编号
                     */
                    std::vector<std::string> m_cVEIDSet;
                    bool m_cVEIDSetHasBeenSet;

                    /**
                     * 组件编号
                     */
                    std::vector<std::string> m_componentSet;
                    bool m_componentSetHasBeenSet;

                    /**
                     * 漏洞分类
                     */
                    std::vector<std::string> m_vulClassSet;
                    bool m_vulClassSetHasBeenSet;

                    /**
                     * 漏洞等级
                     */
                    std::vector<std::string> m_vulLevelSet;
                    bool m_vulLevelSetHasBeenSet;

                    /**
                     * 漏洞标签
                     */
                    std::vector<std::string> m_vulLabelSet;
                    bool m_vulLabelSetHasBeenSet;

                    /**
                     * 木马，0:未选中，1:选中
                     */
                    int64_t m_virus;
                    bool m_virusHasBeenSet;

                    /**
                     * 木马md5列表
                     */
                    std::vector<std::string> m_virusMD5Set;
                    bool m_virusMD5SetHasBeenSet;

                    /**
                     * 木马等级
                     */
                    std::vector<std::string> m_virusLevelSet;
                    bool m_virusLevelSetHasBeenSet;

                    /**
                     * 病毒名
                     */
                    std::vector<std::string> m_virusName;
                    bool m_virusNameHasBeenSet;

                    /**
                     * 敏感信息，0:未选中，1:选中
                     */
                    int64_t m_risk;
                    bool m_riskHasBeenSet;

                    /**
                     * 敏感等级
                     */
                    std::vector<std::string> m_riskLevelSet;
                    bool m_riskLevelSetHasBeenSet;

                    /**
                     * 敏感信息分类
                     */
                    std::vector<std::string> m_riskType;
                    bool m_riskTypeHasBeenSet;

                    /**
                     * 特权启动 0:不允许，1:允许
                     */
                    int64_t m_privilegeRun;
                    bool m_privilegeRunHasBeenSet;

                    /**
                     * 特权类型,
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_privilegeDetail;
                    bool m_privilegeDetailHasBeenSet;

                    /**
                     * 镜像ID列表
                     */
                    std::vector<std::string> m_effectImageSet;
                    bool m_effectImageSetHasBeenSet;

                    /**
                     * 多少天后生效
                     */
                    uint64_t m_effectDay;
                    bool m_effectDayHasBeenSet;

                    /**
                     * 规则RuelD
                     */
                    std::string m_ruleID;
                    bool m_ruleIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGEDENYRULEDETAILRESPONSE_H_
