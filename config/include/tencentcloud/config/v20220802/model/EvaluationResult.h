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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_EVALUATIONRESULT_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_EVALUATIONRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/config/v20220802/model/Annotation.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * 评估结果
                */
                class EvaluationResult : public AbstractModel
                {
                public:
                    EvaluationResult();
                    ~EvaluationResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceId 资源id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceId 资源id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceType 资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceType 资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取资源地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceRegion 资源地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 设置资源地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceRegion 资源地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceRegion(const std::string& _resourceRegion);

                    /**
                     * 判断参数 ResourceRegion 是否已赋值
                     * @return ResourceRegion 是否已赋值
                     * 
                     */
                    bool ResourceRegionHasBeenSet() const;

                    /**
                     * 获取资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceName 资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceName 资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取规则id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigRuleId 规则id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigRuleId() const;

                    /**
                     * 设置规则id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configRuleId 规则id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigRuleId(const std::string& _configRuleId);

                    /**
                     * 判断参数 ConfigRuleId 是否已赋值
                     * @return ConfigRuleId 是否已赋值
                     * 
                     */
                    bool ConfigRuleIdHasBeenSet() const;

                    /**
                     * 获取规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigRuleName 规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigRuleName() const;

                    /**
                     * 设置规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configRuleName 规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigRuleName(const std::string& _configRuleName);

                    /**
                     * 判断参数 ConfigRuleName 是否已赋值
                     * @return ConfigRuleName 是否已赋值
                     * 
                     */
                    bool ConfigRuleNameHasBeenSet() const;

                    /**
                     * 获取合规包id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CompliancePackId 合规包id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCompliancePackId() const;

                    /**
                     * 设置合规包id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _compliancePackId 合规包id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCompliancePackId(const std::string& _compliancePackId);

                    /**
                     * 判断参数 CompliancePackId 是否已赋值
                     * @return CompliancePackId 是否已赋值
                     * 
                     */
                    bool CompliancePackIdHasBeenSet() const;

                    /**
                     * 获取风险等级
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskLevel 风险等级
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRiskLevel() const;

                    /**
                     * 设置风险等级
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _riskLevel 风险等级
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取评估结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Annotation 评估结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Annotation GetAnnotation() const;

                    /**
                     * 设置评估结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _annotation 评估结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAnnotation(const Annotation& _annotation);

                    /**
                     * 判断参数 Annotation 是否已赋值
                     * @return Annotation 是否已赋值
                     * 
                     */
                    bool AnnotationHasBeenSet() const;

                    /**
                     * 获取合规类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ComplianceType 合规类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetComplianceType() const;

                    /**
                     * 设置合规类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _complianceType 合规类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComplianceType(const std::string& _complianceType);

                    /**
                     * 判断参数 ComplianceType 是否已赋值
                     * @return ComplianceType 是否已赋值
                     * 
                     */
                    bool ComplianceTypeHasBeenSet() const;

                    /**
                     * 获取规则发起类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InvokingEventMessageType 规则发起类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInvokingEventMessageType() const;

                    /**
                     * 设置规则发起类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _invokingEventMessageType 规则发起类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInvokingEventMessageType(const std::string& _invokingEventMessageType);

                    /**
                     * 判断参数 InvokingEventMessageType 是否已赋值
                     * @return InvokingEventMessageType 是否已赋值
                     * 
                     */
                    bool InvokingEventMessageTypeHasBeenSet() const;

                    /**
                     * 获取评估发起时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigRuleInvokedTime 评估发起时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigRuleInvokedTime() const;

                    /**
                     * 设置评估发起时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configRuleInvokedTime 评估发起时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigRuleInvokedTime(const std::string& _configRuleInvokedTime);

                    /**
                     * 判断参数 ConfigRuleInvokedTime 是否已赋值
                     * @return ConfigRuleInvokedTime 是否已赋值
                     * 
                     */
                    bool ConfigRuleInvokedTimeHasBeenSet() const;

                    /**
                     * 获取评估实际时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultRecordedTime 评估实际时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResultRecordedTime() const;

                    /**
                     * 设置评估实际时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resultRecordedTime 评估实际时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResultRecordedTime(const std::string& _resultRecordedTime);

                    /**
                     * 判断参数 ResultRecordedTime 是否已赋值
                     * @return ResultRecordedTime 是否已赋值
                     * 
                     */
                    bool ResultRecordedTimeHasBeenSet() const;

                private:

                    /**
                     * 资源id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 资源地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                    /**
                     * 资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * 规则id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configRuleId;
                    bool m_configRuleIdHasBeenSet;

                    /**
                     * 规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configRuleName;
                    bool m_configRuleNameHasBeenSet;

                    /**
                     * 合规包id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_compliancePackId;
                    bool m_compliancePackIdHasBeenSet;

                    /**
                     * 风险等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 评估结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Annotation m_annotation;
                    bool m_annotationHasBeenSet;

                    /**
                     * 合规类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_complianceType;
                    bool m_complianceTypeHasBeenSet;

                    /**
                     * 规则发起类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_invokingEventMessageType;
                    bool m_invokingEventMessageTypeHasBeenSet;

                    /**
                     * 评估发起时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configRuleInvokedTime;
                    bool m_configRuleInvokedTimeHasBeenSet;

                    /**
                     * 评估实际时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resultRecordedTime;
                    bool m_resultRecordedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_EVALUATIONRESULT_H_
