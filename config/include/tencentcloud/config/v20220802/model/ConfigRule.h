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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_CONFIGRULE_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_CONFIGRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/config/v20220802/model/InputParameter.h>
#include <tencentcloud/config/v20220802/model/SourceConditionForManage.h>
#include <tencentcloud/config/v20220802/model/Annotation.h>
#include <tencentcloud/config/v20220802/model/TriggerType.h>
#include <tencentcloud/config/v20220802/model/InputParameterForManage.h>
#include <tencentcloud/config/v20220802/model/Tag.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * 规则详情
                */
                class ConfigRule : public AbstractModel
                {
                public:
                    ConfigRule();
                    ~ConfigRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则标识
                     * @return Identifier 规则标识
                     * 
                     */
                    std::string GetIdentifier() const;

                    /**
                     * 设置规则标识
                     * @param _identifier 规则标识
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
                     * @return RuleName 规则名
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名
                     * @param _ruleName 规则名
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
                     * @return InputParameter 规则参数
                     * 
                     */
                    std::vector<InputParameter> GetInputParameter() const;

                    /**
                     * 设置规则参数
                     * @param _inputParameter 规则参数
                     * 
                     */
                    void SetInputParameter(const std::vector<InputParameter>& _inputParameter);

                    /**
                     * 判断参数 InputParameter 是否已赋值
                     * @return InputParameter 是否已赋值
                     * 
                     */
                    bool InputParameterHasBeenSet() const;

                    /**
                     * 获取规则触发条件
                     * @return SourceCondition 规则触发条件
                     * 
                     */
                    std::vector<SourceConditionForManage> GetSourceCondition() const;

                    /**
                     * 设置规则触发条件
                     * @param _sourceCondition 规则触发条件
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
                     * 获取规则支持的资源类型，规则仅对指定资源类型的资源生效。
                     * @return ResourceType 规则支持的资源类型，规则仅对指定资源类型的资源生效。
                     * 
                     */
                    std::vector<std::string> GetResourceType() const;

                    /**
                     * 设置规则支持的资源类型，规则仅对指定资源类型的资源生效。
                     * @param _resourceType 规则支持的资源类型，规则仅对指定资源类型的资源生效。
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
                     * 获取规则所属标签
                     * @return Labels 规则所属标签
                     * 
                     */
                    std::vector<std::string> GetLabels() const;

                    /**
                     * 设置规则所属标签
                     * @param _labels 规则所属标签
                     * 
                     */
                    void SetLabels(const std::vector<std::string>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取规则风险等级
1:低风险
2:中风险
3:高风险
                     * @return RiskLevel 规则风险等级
1:低风险
2:中风险
3:高风险
                     * 
                     */
                    int64_t GetRiskLevel() const;

                    /**
                     * 设置规则风险等级
1:低风险
2:中风险
3:高风险
                     * @param _riskLevel 规则风险等级
1:低风险
2:中风险
3:高风险
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
                     * 获取规则对应的函数
                     * @return ServiceFunction 规则对应的函数
                     * 
                     */
                    std::string GetServiceFunction() const;

                    /**
                     * 设置规则对应的函数
                     * @param _serviceFunction 规则对应的函数
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
格式：YYYY-MM-DD h:i:s
                     * @return CreateTime 创建时间
格式：YYYY-MM-DD h:i:s
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
格式：YYYY-MM-DD h:i:s
                     * @param _createTime 创建时间
格式：YYYY-MM-DD h:i:s
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
                     * 获取规则描述
                     * @return Description 规则描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置规则描述
                     * @param _description 规则描述
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
                     * 获取ACTIVE：启用
NO_ACTIVE：停止
                     * @return Status ACTIVE：启用
NO_ACTIVE：停止
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置ACTIVE：启用
NO_ACTIVE：停止
                     * @param _status ACTIVE：启用
NO_ACTIVE：停止
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
                     * 获取合规： 'COMPLIANT'
不合规： 'NON_COMPLIANT'
无法应用规则： 'NOT_APPLICABLE'
                     * @return ComplianceResult 合规： 'COMPLIANT'
不合规： 'NON_COMPLIANT'
无法应用规则： 'NOT_APPLICABLE'
                     * 
                     */
                    std::string GetComplianceResult() const;

                    /**
                     * 设置合规： 'COMPLIANT'
不合规： 'NON_COMPLIANT'
无法应用规则： 'NOT_APPLICABLE'
                     * @param _complianceResult 合规： 'COMPLIANT'
不合规： 'NON_COMPLIANT'
无法应用规则： 'NOT_APPLICABLE'
                     * 
                     */
                    void SetComplianceResult(const std::string& _complianceResult);

                    /**
                     * 判断参数 ComplianceResult 是否已赋值
                     * @return ComplianceResult 是否已赋值
                     * 
                     */
                    bool ComplianceResultHasBeenSet() const;

                    /**
                     * 获取["",""]
                     * @return Annotation ["",""]
                     * 
                     */
                    Annotation GetAnnotation() const;

                    /**
                     * 设置["",""]
                     * @param _annotation ["",""]
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
                     * 获取规则评估时间
格式：YYYY-MM-DD h:i:s

                     * @return ConfigRuleInvokedTime 规则评估时间
格式：YYYY-MM-DD h:i:s

                     * 
                     */
                    std::string GetConfigRuleInvokedTime() const;

                    /**
                     * 设置规则评估时间
格式：YYYY-MM-DD h:i:s

                     * @param _configRuleInvokedTime 规则评估时间
格式：YYYY-MM-DD h:i:s

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
                     * 获取规则ID
                     * @return ConfigRuleId 规则ID
                     * 
                     */
                    std::string GetConfigRuleId() const;

                    /**
                     * 设置规则ID
                     * @param _configRuleId 规则ID
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
                     * 获取CUSTOMIZE：自定义规则、
SYSTEM：托管规则
                     * @return IdentifierType CUSTOMIZE：自定义规则、
SYSTEM：托管规则
                     * 
                     */
                    std::string GetIdentifierType() const;

                    /**
                     * 设置CUSTOMIZE：自定义规则、
SYSTEM：托管规则
                     * @param _identifierType CUSTOMIZE：自定义规则、
SYSTEM：托管规则
                     * 
                     */
                    void SetIdentifierType(const std::string& _identifierType);

                    /**
                     * 判断参数 IdentifierType 是否已赋值
                     * @return IdentifierType 是否已赋值
                     * 
                     */
                    bool IdentifierTypeHasBeenSet() const;

                    /**
                     * 获取合规包ID
                     * @return CompliancePackId 合规包ID
                     * 
                     */
                    std::string GetCompliancePackId() const;

                    /**
                     * 设置合规包ID
                     * @param _compliancePackId 合规包ID
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
                     * 获取触发类型
ScheduledNotification：周期触发、
ConfigurationItemChangeNotification：变更触发
                     * @return TriggerType 触发类型
ScheduledNotification：周期触发、
ConfigurationItemChangeNotification：变更触发
                     * 
                     */
                    std::vector<TriggerType> GetTriggerType() const;

                    /**
                     * 设置触发类型
ScheduledNotification：周期触发、
ConfigurationItemChangeNotification：变更触发
                     * @param _triggerType 触发类型
ScheduledNotification：周期触发、
ConfigurationItemChangeNotification：变更触发
                     * 
                     */
                    void SetTriggerType(const std::vector<TriggerType>& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                    /**
                     * 获取参数详情
                     * @return ManageInputParameter 参数详情
                     * 
                     */
                    std::vector<InputParameterForManage> GetManageInputParameter() const;

                    /**
                     * 设置参数详情
                     * @param _manageInputParameter 参数详情
                     * 
                     */
                    void SetManageInputParameter(const std::vector<InputParameterForManage>& _manageInputParameter);

                    /**
                     * 判断参数 ManageInputParameter 是否已赋值
                     * @return ManageInputParameter 是否已赋值
                     * 
                     */
                    bool ManageInputParameterHasBeenSet() const;

                    /**
                     * 获取合规包名称
                     * @return CompliancePackName 合规包名称
                     * 
                     */
                    std::string GetCompliancePackName() const;

                    /**
                     * 设置合规包名称
                     * @param _compliancePackName 合规包名称
                     * 
                     */
                    void SetCompliancePackName(const std::string& _compliancePackName);

                    /**
                     * 判断参数 CompliancePackName 是否已赋值
                     * @return CompliancePackName 是否已赋值
                     * 
                     */
                    bool CompliancePackNameHasBeenSet() const;

                    /**
                     * 获取关联地域
                     * @return RegionsScope 关联地域
                     * 
                     */
                    std::vector<std::string> GetRegionsScope() const;

                    /**
                     * 设置关联地域
                     * @param _regionsScope 关联地域
                     * 
                     */
                    void SetRegionsScope(const std::vector<std::string>& _regionsScope);

                    /**
                     * 判断参数 RegionsScope 是否已赋值
                     * @return RegionsScope 是否已赋值
                     * 
                     */
                    bool RegionsScopeHasBeenSet() const;

                    /**
                     * 获取关联标签
                     * @return TagsScope 关联标签
                     * 
                     */
                    std::vector<Tag> GetTagsScope() const;

                    /**
                     * 设置关联标签
                     * @param _tagsScope 关联标签
                     * 
                     */
                    void SetTagsScope(const std::vector<Tag>& _tagsScope);

                    /**
                     * 判断参数 TagsScope 是否已赋值
                     * @return TagsScope 是否已赋值
                     * 
                     */
                    bool TagsScopeHasBeenSet() const;

                    /**
                     * 获取 规则对指定资源ID无效，即不对该资源执行评估。
                     * @return ExcludeResourceIdsScope  规则对指定资源ID无效，即不对该资源执行评估。
                     * 
                     */
                    std::vector<std::string> GetExcludeResourceIdsScope() const;

                    /**
                     * 设置 规则对指定资源ID无效，即不对该资源执行评估。
                     * @param _excludeResourceIdsScope  规则对指定资源ID无效，即不对该资源执行评估。
                     * 
                     */
                    void SetExcludeResourceIdsScope(const std::vector<std::string>& _excludeResourceIdsScope);

                    /**
                     * 判断参数 ExcludeResourceIdsScope 是否已赋值
                     * @return ExcludeResourceIdsScope 是否已赋值
                     * 
                     */
                    bool ExcludeResourceIdsScopeHasBeenSet() const;

                    /**
                     * 获取账号组ID
                     * @return AccountGroupId 账号组ID
                     * 
                     */
                    std::string GetAccountGroupId() const;

                    /**
                     * 设置账号组ID
                     * @param _accountGroupId 账号组ID
                     * 
                     */
                    void SetAccountGroupId(const std::string& _accountGroupId);

                    /**
                     * 判断参数 AccountGroupId 是否已赋值
                     * @return AccountGroupId 是否已赋值
                     * 
                     */
                    bool AccountGroupIdHasBeenSet() const;

                    /**
                     * 获取账号组名称
                     * @return AccountGroupName 账号组名称
                     * 
                     */
                    std::string GetAccountGroupName() const;

                    /**
                     * 设置账号组名称
                     * @param _accountGroupName 账号组名称
                     * 
                     */
                    void SetAccountGroupName(const std::string& _accountGroupName);

                    /**
                     * 判断参数 AccountGroupName 是否已赋值
                     * @return AccountGroupName 是否已赋值
                     * 
                     */
                    bool AccountGroupNameHasBeenSet() const;

                    /**
                     * 获取规则所属用户ID
                     * @return RuleOwnerId 规则所属用户ID
                     * 
                     */
                    uint64_t GetRuleOwnerId() const;

                    /**
                     * 设置规则所属用户ID
                     * @param _ruleOwnerId 规则所属用户ID
                     * 
                     */
                    void SetRuleOwnerId(const uint64_t& _ruleOwnerId);

                    /**
                     * 判断参数 RuleOwnerId 是否已赋值
                     * @return RuleOwnerId 是否已赋值
                     * 
                     */
                    bool RuleOwnerIdHasBeenSet() const;

                    /**
                     * 获取预设规则支持的触发方式
ScheduledNotification：周期触发
ConfigurationItemChangeNotification：变更触发
                     * @return ManageTriggerType 预设规则支持的触发方式
ScheduledNotification：周期触发
ConfigurationItemChangeNotification：变更触发
                     * 
                     */
                    std::vector<std::string> GetManageTriggerType() const;

                    /**
                     * 设置预设规则支持的触发方式
ScheduledNotification：周期触发
ConfigurationItemChangeNotification：变更触发
                     * @param _manageTriggerType 预设规则支持的触发方式
ScheduledNotification：周期触发
ConfigurationItemChangeNotification：变更触发
                     * 
                     */
                    void SetManageTriggerType(const std::vector<std::string>& _manageTriggerType);

                    /**
                     * 判断参数 ManageTriggerType 是否已赋值
                     * @return ManageTriggerType 是否已赋值
                     * 
                     */
                    bool ManageTriggerTypeHasBeenSet() const;

                private:

                    /**
                     * 规则标识
                     */
                    std::string m_identifier;
                    bool m_identifierHasBeenSet;

                    /**
                     * 规则名
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 规则参数
                     */
                    std::vector<InputParameter> m_inputParameter;
                    bool m_inputParameterHasBeenSet;

                    /**
                     * 规则触发条件
                     */
                    std::vector<SourceConditionForManage> m_sourceCondition;
                    bool m_sourceConditionHasBeenSet;

                    /**
                     * 规则支持的资源类型，规则仅对指定资源类型的资源生效。
                     */
                    std::vector<std::string> m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 规则所属标签
                     */
                    std::vector<std::string> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * 规则风险等级
1:低风险
2:中风险
3:高风险
                     */
                    int64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 规则对应的函数
                     */
                    std::string m_serviceFunction;
                    bool m_serviceFunctionHasBeenSet;

                    /**
                     * 创建时间
格式：YYYY-MM-DD h:i:s
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 规则描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * ACTIVE：启用
NO_ACTIVE：停止
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 合规： 'COMPLIANT'
不合规： 'NON_COMPLIANT'
无法应用规则： 'NOT_APPLICABLE'
                     */
                    std::string m_complianceResult;
                    bool m_complianceResultHasBeenSet;

                    /**
                     * ["",""]
                     */
                    Annotation m_annotation;
                    bool m_annotationHasBeenSet;

                    /**
                     * 规则评估时间
格式：YYYY-MM-DD h:i:s

                     */
                    std::string m_configRuleInvokedTime;
                    bool m_configRuleInvokedTimeHasBeenSet;

                    /**
                     * 规则ID
                     */
                    std::string m_configRuleId;
                    bool m_configRuleIdHasBeenSet;

                    /**
                     * CUSTOMIZE：自定义规则、
SYSTEM：托管规则
                     */
                    std::string m_identifierType;
                    bool m_identifierTypeHasBeenSet;

                    /**
                     * 合规包ID
                     */
                    std::string m_compliancePackId;
                    bool m_compliancePackIdHasBeenSet;

                    /**
                     * 触发类型
ScheduledNotification：周期触发、
ConfigurationItemChangeNotification：变更触发
                     */
                    std::vector<TriggerType> m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * 参数详情
                     */
                    std::vector<InputParameterForManage> m_manageInputParameter;
                    bool m_manageInputParameterHasBeenSet;

                    /**
                     * 合规包名称
                     */
                    std::string m_compliancePackName;
                    bool m_compliancePackNameHasBeenSet;

                    /**
                     * 关联地域
                     */
                    std::vector<std::string> m_regionsScope;
                    bool m_regionsScopeHasBeenSet;

                    /**
                     * 关联标签
                     */
                    std::vector<Tag> m_tagsScope;
                    bool m_tagsScopeHasBeenSet;

                    /**
                     *  规则对指定资源ID无效，即不对该资源执行评估。
                     */
                    std::vector<std::string> m_excludeResourceIdsScope;
                    bool m_excludeResourceIdsScopeHasBeenSet;

                    /**
                     * 账号组ID
                     */
                    std::string m_accountGroupId;
                    bool m_accountGroupIdHasBeenSet;

                    /**
                     * 账号组名称
                     */
                    std::string m_accountGroupName;
                    bool m_accountGroupNameHasBeenSet;

                    /**
                     * 规则所属用户ID
                     */
                    uint64_t m_ruleOwnerId;
                    bool m_ruleOwnerIdHasBeenSet;

                    /**
                     * 预设规则支持的触发方式
ScheduledNotification：周期触发
ConfigurationItemChangeNotification：变更触发
                     */
                    std::vector<std::string> m_manageTriggerType;
                    bool m_manageTriggerTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_CONFIGRULE_H_
