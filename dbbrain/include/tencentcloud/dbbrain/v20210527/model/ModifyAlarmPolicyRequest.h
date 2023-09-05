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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MODIFYALARMPOLICYREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MODIFYALARMPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/InstanceID.h>
#include <tencentcloud/dbbrain/v20210527/model/TemplateInfo.h>
#include <tencentcloud/dbbrain/v20210527/model/AlarmsRules.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * ModifyAlarmPolicy请求参数结构体
                */
                class ModifyAlarmPolicyRequest : public AbstractModel
                {
                public:
                    ModifyAlarmPolicyRequest();
                    ~ModifyAlarmPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取类型
                     * @return ApplyType 类型
                     * 
                     */
                    std::string GetApplyType() const;

                    /**
                     * 设置类型
                     * @param _applyType 类型
                     * 
                     */
                    void SetApplyType(const std::string& _applyType);

                    /**
                     * 判断参数 ApplyType 是否已赋值
                     * @return ApplyType 是否已赋值
                     * 
                     */
                    bool ApplyTypeHasBeenSet() const;

                    /**
                     * 获取开启策略
                     * @return Enable 开启策略
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置开启策略
                     * @param _enable 开启策略
                     * 
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取列表
                     * @return InstanceIds 列表
                     * 
                     */
                    std::vector<InstanceID> GetInstanceIds() const;

                    /**
                     * 设置列表
                     * @param _instanceIds 列表
                     * 
                     */
                    void SetInstanceIds(const std::vector<InstanceID>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取User-动态关联该用户所有实例
Instance-关联实例列表的实例
                     * @return NewProfileLevel User-动态关联该用户所有实例
Instance-关联实例列表的实例
                     * 
                     */
                    std::string GetNewProfileLevel() const;

                    /**
                     * 设置User-动态关联该用户所有实例
Instance-关联实例列表的实例
                     * @param _newProfileLevel User-动态关联该用户所有实例
Instance-关联实例列表的实例
                     * 
                     */
                    void SetNewProfileLevel(const std::string& _newProfileLevel);

                    /**
                     * 判断参数 NewProfileLevel 是否已赋值
                     * @return NewProfileLevel 是否已赋值
                     * 
                     */
                    bool NewProfileLevelHasBeenSet() const;

                    /**
                     * 获取新策略名
                     * @return NewProfileName 新策略名
                     * 
                     */
                    std::string GetNewProfileName() const;

                    /**
                     * 设置新策略名
                     * @param _newProfileName 新策略名
                     * 
                     */
                    void SetNewProfileName(const std::string& _newProfileName);

                    /**
                     * 判断参数 NewProfileName 是否已赋值
                     * @return NewProfileName 是否已赋值
                     * 
                     */
                    bool NewProfileNameHasBeenSet() const;

                    /**
                     * 获取旧策略名
                     * @return ProfileName 旧策略名
                     * 
                     */
                    std::string GetProfileName() const;

                    /**
                     * 设置旧策略名
                     * @param _profileName 旧策略名
                     * 
                     */
                    void SetProfileName(const std::string& _profileName);

                    /**
                     * 判断参数 ProfileName 是否已赋值
                     * @return ProfileName 是否已赋值
                     * 
                     */
                    bool ProfileNameHasBeenSet() const;

                    /**
                     * 获取策略类型
                     * @return ProfileType 策略类型
                     * 
                     */
                    std::string GetProfileType() const;

                    /**
                     * 设置策略类型
                     * @param _profileType 策略类型
                     * 
                     */
                    void SetProfileType(const std::string& _profileType);

                    /**
                     * 判断参数 ProfileType 是否已赋值
                     * @return ProfileType 是否已赋值
                     * 
                     */
                    bool ProfileTypeHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
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
                     * 获取规则类型 0-快速，1-自定义 若值为0，则QuickRule不能为空，若值为1，则Rules 不能为空
                     * @return RuleType 规则类型 0-快速，1-自定义 若值为0，则QuickRule不能为空，若值为1，则Rules 不能为空
                     * 
                     */
                    int64_t GetRuleType() const;

                    /**
                     * 设置规则类型 0-快速，1-自定义 若值为0，则QuickRule不能为空，若值为1，则Rules 不能为空
                     * @param _ruleType 规则类型 0-快速，1-自定义 若值为0，则QuickRule不能为空，若值为1，则Rules 不能为空
                     * 
                     */
                    void SetRuleType(const int64_t& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取接受模板
                     * @return TemplateInfo 接受模板
                     * 
                     */
                    std::vector<TemplateInfo> GetTemplateInfo() const;

                    /**
                     * 设置接受模板
                     * @param _templateInfo 接受模板
                     * 
                     */
                    void SetTemplateInfo(const std::vector<TemplateInfo>& _templateInfo);

                    /**
                     * 判断参数 TemplateInfo 是否已赋值
                     * @return TemplateInfo 是否已赋值
                     * 
                     */
                    bool TemplateInfoHasBeenSet() const;

                    /**
                     * 获取快速规则  支持包括fatal-致命, critical-严重,
warning-告警,
information-通知
                     * @return QuickRule 快速规则  支持包括fatal-致命, critical-严重,
warning-告警,
information-通知
                     * 
                     */
                    std::string GetQuickRule() const;

                    /**
                     * 设置快速规则  支持包括fatal-致命, critical-严重,
warning-告警,
information-通知
                     * @param _quickRule 快速规则  支持包括fatal-致命, critical-严重,
warning-告警,
information-通知
                     * 
                     */
                    void SetQuickRule(const std::string& _quickRule);

                    /**
                     * 判断参数 QuickRule 是否已赋值
                     * @return QuickRule 是否已赋值
                     * 
                     */
                    bool QuickRuleHasBeenSet() const;

                    /**
                     * 获取自定义规则
                     * @return Rules 自定义规则
                     * 
                     */
                    std::vector<AlarmsRules> GetRules() const;

                    /**
                     * 设置自定义规则
                     * @param _rules 自定义规则
                     * 
                     */
                    void SetRules(const std::vector<AlarmsRules>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                private:

                    /**
                     * 类型
                     */
                    std::string m_applyType;
                    bool m_applyTypeHasBeenSet;

                    /**
                     * 开启策略
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 列表
                     */
                    std::vector<InstanceID> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * User-动态关联该用户所有实例
Instance-关联实例列表的实例
                     */
                    std::string m_newProfileLevel;
                    bool m_newProfileLevelHasBeenSet;

                    /**
                     * 新策略名
                     */
                    std::string m_newProfileName;
                    bool m_newProfileNameHasBeenSet;

                    /**
                     * 旧策略名
                     */
                    std::string m_profileName;
                    bool m_profileNameHasBeenSet;

                    /**
                     * 策略类型
                     */
                    std::string m_profileType;
                    bool m_profileTypeHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 规则类型 0-快速，1-自定义 若值为0，则QuickRule不能为空，若值为1，则Rules 不能为空
                     */
                    int64_t m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 接受模板
                     */
                    std::vector<TemplateInfo> m_templateInfo;
                    bool m_templateInfoHasBeenSet;

                    /**
                     * 快速规则  支持包括fatal-致命, critical-严重,
warning-告警,
information-通知
                     */
                    std::string m_quickRule;
                    bool m_quickRuleHasBeenSet;

                    /**
                     * 自定义规则
                     */
                    std::vector<AlarmsRules> m_rules;
                    bool m_rulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MODIFYALARMPOLICYREQUEST_H_
