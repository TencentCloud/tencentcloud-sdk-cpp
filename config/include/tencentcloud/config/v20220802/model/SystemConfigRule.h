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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_SYSTEMCONFIGRULE_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_SYSTEMCONFIGRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/config/v20220802/model/InputParameterForManage.h>
#include <tencentcloud/config/v20220802/model/SourceConditionForManage.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * 管理端规则详情
                */
                class SystemConfigRule : public AbstractModel
                {
                public:
                    SystemConfigRule();
                    ~SystemConfigRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Identifier 规则标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIdentifier() const;

                    /**
                     * 设置规则标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _identifier 规则标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIdentifier(const std::string& _identifier);

                    /**
                     * 判断参数 Identifier 是否已赋值
                     * @return Identifier 是否已赋值
                     * 
                     */
                    bool IdentifierHasBeenSet() const;

                    /**
                     * 获取规则名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleName 规则名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleName 规则名
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取规则参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputParameter 规则参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<InputParameterForManage> GetInputParameter() const;

                    /**
                     * 设置规则参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inputParameter 规则参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInputParameter(const std::vector<InputParameterForManage>& _inputParameter);

                    /**
                     * 判断参数 InputParameter 是否已赋值
                     * @return InputParameter 是否已赋值
                     * 
                     */
                    bool InputParameterHasBeenSet() const;

                    /**
                     * 获取规则触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceCondition 规则触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SourceConditionForManage> GetSourceCondition() const;

                    /**
                     * 设置规则触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceCondition 规则触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceCondition(const std::vector<SourceConditionForManage>& _sourceCondition);

                    /**
                     * 判断参数 SourceCondition 是否已赋值
                     * @return SourceCondition 是否已赋值
                     * 
                     */
                    bool SourceConditionHasBeenSet() const;

                    /**
                     * 获取支持的资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceType 支持的资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetResourceType() const;

                    /**
                     * 设置支持的资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceType 支持的资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceType(const std::vector<std::string>& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Label 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetLabel() const;

                    /**
                     * 设置标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _label 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabel(const std::vector<std::string>& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取风险等级，1，2，3
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskLevel 风险等级，1，2，3
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRiskLevel() const;

                    /**
                     * 设置风险等级，1，2，3
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _riskLevel 风险等级，1，2，3
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
                     * 获取对应的函数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceFunction 对应的函数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceFunction() const;

                    /**
                     * 设置对应的函数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceFunction 对应的函数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceFunction(const std::string& _serviceFunction);

                    /**
                     * 判断参数 ServiceFunction 是否已赋值
                     * @return ServiceFunction 是否已赋值
                     * 
                     */
                    bool ServiceFunctionHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取触发类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerType 触发类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetTriggerType() const;

                    /**
                     * 设置触发类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerType 触发类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTriggerType(const std::vector<std::string>& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                    /**
                     * 获取描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 描述
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取使用次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReferenceCount 使用次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetReferenceCount() const;

                    /**
                     * 设置使用次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _referenceCount 使用次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReferenceCount(const uint64_t& _referenceCount);

                    /**
                     * 判断参数 ReferenceCount 是否已赋值
                     * @return ReferenceCount 是否已赋值
                     * 
                     */
                    bool ReferenceCountHasBeenSet() const;

                    /**
                     * 获取规则类型
                     * @return IdentifierType 规则类型
                     * 
                     */
                    std::string GetIdentifierType() const;

                    /**
                     * 设置规则类型
                     * @param _identifierType 规则类型
                     * 
                     */
                    void SetIdentifierType(const std::string& _identifierType);

                    /**
                     * 判断参数 IdentifierType 是否已赋值
                     * @return IdentifierType 是否已赋值
                     * 
                     */
                    bool IdentifierTypeHasBeenSet() const;

                private:

                    /**
                     * 规则标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_identifier;
                    bool m_identifierHasBeenSet;

                    /**
                     * 规则名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 规则参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<InputParameterForManage> m_inputParameter;
                    bool m_inputParameterHasBeenSet;

                    /**
                     * 规则触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SourceConditionForManage> m_sourceCondition;
                    bool m_sourceConditionHasBeenSet;

                    /**
                     * 支持的资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 风险等级，1，2，3
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 对应的函数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceFunction;
                    bool m_serviceFunctionHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 触发类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 使用次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_referenceCount;
                    bool m_referenceCountHasBeenSet;

                    /**
                     * 规则类型
                     */
                    std::string m_identifierType;
                    bool m_identifierTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_SYSTEMCONFIGRULE_H_
