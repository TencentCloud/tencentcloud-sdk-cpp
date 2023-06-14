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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYPOLICYGROUPREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYPOLICYGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/ModifyPolicyGroupCondition.h>
#include <tencentcloud/monitor/v20180724/model/ModifyPolicyGroupEventCondition.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * ModifyPolicyGroup请求参数结构体
                */
                class ModifyPolicyGroupRequest : public AbstractModel
                {
                public:
                    ModifyPolicyGroupRequest();
                    ~ModifyPolicyGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取固定值，为"monitor"
                     * @return Module 固定值，为"monitor"
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置固定值，为"monitor"
                     * @param _module 固定值，为"monitor"
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取策略组id
                     * @return GroupId 策略组id
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置策略组id
                     * @param _groupId 策略组id
                     * 
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取告警类型
                     * @return ViewName 告警类型
                     * 
                     */
                    std::string GetViewName() const;

                    /**
                     * 设置告警类型
                     * @param _viewName 告警类型
                     * 
                     */
                    void SetViewName(const std::string& _viewName);

                    /**
                     * 判断参数 ViewName 是否已赋值
                     * @return ViewName 是否已赋值
                     * 
                     */
                    bool ViewNameHasBeenSet() const;

                    /**
                     * 获取策略组名称
                     * @return GroupName 策略组名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置策略组名称
                     * @param _groupName 策略组名称
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取指标告警条件的且或关系，1表示且告警，所有指标告警条件都达到才告警，0表示或告警，任意指标告警条件达到都告警
                     * @return IsUnionRule 指标告警条件的且或关系，1表示且告警，所有指标告警条件都达到才告警，0表示或告警，任意指标告警条件达到都告警
                     * 
                     */
                    int64_t GetIsUnionRule() const;

                    /**
                     * 设置指标告警条件的且或关系，1表示且告警，所有指标告警条件都达到才告警，0表示或告警，任意指标告警条件达到都告警
                     * @param _isUnionRule 指标告警条件的且或关系，1表示且告警，所有指标告警条件都达到才告警，0表示或告警，任意指标告警条件达到都告警
                     * 
                     */
                    void SetIsUnionRule(const int64_t& _isUnionRule);

                    /**
                     * 判断参数 IsUnionRule 是否已赋值
                     * @return IsUnionRule 是否已赋值
                     * 
                     */
                    bool IsUnionRuleHasBeenSet() const;

                    /**
                     * 获取指标告警条件规则，不填表示删除已有的所有指标告警条件规则
                     * @return Conditions 指标告警条件规则，不填表示删除已有的所有指标告警条件规则
                     * 
                     */
                    std::vector<ModifyPolicyGroupCondition> GetConditions() const;

                    /**
                     * 设置指标告警条件规则，不填表示删除已有的所有指标告警条件规则
                     * @param _conditions 指标告警条件规则，不填表示删除已有的所有指标告警条件规则
                     * 
                     */
                    void SetConditions(const std::vector<ModifyPolicyGroupCondition>& _conditions);

                    /**
                     * 判断参数 Conditions 是否已赋值
                     * @return Conditions 是否已赋值
                     * 
                     */
                    bool ConditionsHasBeenSet() const;

                    /**
                     * 获取事件告警条件，不填表示删除已有的事件告警条件
                     * @return EventConditions 事件告警条件，不填表示删除已有的事件告警条件
                     * 
                     */
                    std::vector<ModifyPolicyGroupEventCondition> GetEventConditions() const;

                    /**
                     * 设置事件告警条件，不填表示删除已有的事件告警条件
                     * @param _eventConditions 事件告警条件，不填表示删除已有的事件告警条件
                     * 
                     */
                    void SetEventConditions(const std::vector<ModifyPolicyGroupEventCondition>& _eventConditions);

                    /**
                     * 判断参数 EventConditions 是否已赋值
                     * @return EventConditions 是否已赋值
                     * 
                     */
                    bool EventConditionsHasBeenSet() const;

                    /**
                     * 获取模板策略组id
                     * @return ConditionTempGroupId 模板策略组id
                     * 
                     */
                    int64_t GetConditionTempGroupId() const;

                    /**
                     * 设置模板策略组id
                     * @param _conditionTempGroupId 模板策略组id
                     * 
                     */
                    void SetConditionTempGroupId(const int64_t& _conditionTempGroupId);

                    /**
                     * 判断参数 ConditionTempGroupId 是否已赋值
                     * @return ConditionTempGroupId 是否已赋值
                     * 
                     */
                    bool ConditionTempGroupIdHasBeenSet() const;

                private:

                    /**
                     * 固定值，为"monitor"
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 策略组id
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 告警类型
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                    /**
                     * 策略组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 指标告警条件的且或关系，1表示且告警，所有指标告警条件都达到才告警，0表示或告警，任意指标告警条件达到都告警
                     */
                    int64_t m_isUnionRule;
                    bool m_isUnionRuleHasBeenSet;

                    /**
                     * 指标告警条件规则，不填表示删除已有的所有指标告警条件规则
                     */
                    std::vector<ModifyPolicyGroupCondition> m_conditions;
                    bool m_conditionsHasBeenSet;

                    /**
                     * 事件告警条件，不填表示删除已有的事件告警条件
                     */
                    std::vector<ModifyPolicyGroupEventCondition> m_eventConditions;
                    bool m_eventConditionsHasBeenSet;

                    /**
                     * 模板策略组id
                     */
                    int64_t m_conditionTempGroupId;
                    bool m_conditionTempGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYPOLICYGROUPREQUEST_H_
