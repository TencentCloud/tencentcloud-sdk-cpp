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
                     * 获取<p>固定值，为&quot;monitor&quot;</p>
                     * @return Module <p>固定值，为&quot;monitor&quot;</p>
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置<p>固定值，为&quot;monitor&quot;</p>
                     * @param _module <p>固定值，为&quot;monitor&quot;</p>
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
                     * 获取<p>策略组id</p>
                     * @return GroupId <p>策略组id</p>
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置<p>策略组id</p>
                     * @param _groupId <p>策略组id</p>
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
                     * 获取<p>告警类型</p>
                     * @return ViewName <p>告警类型</p>
                     * 
                     */
                    std::string GetViewName() const;

                    /**
                     * 设置<p>告警类型</p>
                     * @param _viewName <p>告警类型</p>
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
                     * 获取<p>策略组名称</p>
                     * @return GroupName <p>策略组名称</p>
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置<p>策略组名称</p>
                     * @param _groupName <p>策略组名称</p>
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
                     * 获取<p>是否复合告警</p><p>枚举值：</p><ul><li>1： 所有指标告警条件都达到才告警</li><li>0： 任意指标告警条件达到都告警</li></ul>
                     * @return IsUnionRule <p>是否复合告警</p><p>枚举值：</p><ul><li>1： 所有指标告警条件都达到才告警</li><li>0： 任意指标告警条件达到都告警</li></ul>
                     * 
                     */
                    int64_t GetIsUnionRule() const;

                    /**
                     * 设置<p>是否复合告警</p><p>枚举值：</p><ul><li>1： 所有指标告警条件都达到才告警</li><li>0： 任意指标告警条件达到都告警</li></ul>
                     * @param _isUnionRule <p>是否复合告警</p><p>枚举值：</p><ul><li>1： 所有指标告警条件都达到才告警</li><li>0： 任意指标告警条件达到都告警</li></ul>
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
                     * 获取<p>指标告警条件规则，不填表示删除已有的所有指标告警条件规则</p>
                     * @return Conditions <p>指标告警条件规则，不填表示删除已有的所有指标告警条件规则</p>
                     * 
                     */
                    std::vector<ModifyPolicyGroupCondition> GetConditions() const;

                    /**
                     * 设置<p>指标告警条件规则，不填表示删除已有的所有指标告警条件规则</p>
                     * @param _conditions <p>指标告警条件规则，不填表示删除已有的所有指标告警条件规则</p>
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
                     * 获取<p>事件告警条件，不填表示删除已有的事件告警条件</p>
                     * @return EventConditions <p>事件告警条件，不填表示删除已有的事件告警条件</p>
                     * 
                     */
                    std::vector<ModifyPolicyGroupEventCondition> GetEventConditions() const;

                    /**
                     * 设置<p>事件告警条件，不填表示删除已有的事件告警条件</p>
                     * @param _eventConditions <p>事件告警条件，不填表示删除已有的事件告警条件</p>
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
                     * 获取<p>模板策略组id</p>
                     * @return ConditionTempGroupId <p>模板策略组id</p>
                     * 
                     */
                    int64_t GetConditionTempGroupId() const;

                    /**
                     * 设置<p>模板策略组id</p>
                     * @param _conditionTempGroupId <p>模板策略组id</p>
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
                     * <p>固定值，为&quot;monitor&quot;</p>
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * <p>策略组id</p>
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>告警类型</p>
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                    /**
                     * <p>策略组名称</p>
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>是否复合告警</p><p>枚举值：</p><ul><li>1： 所有指标告警条件都达到才告警</li><li>0： 任意指标告警条件达到都告警</li></ul>
                     */
                    int64_t m_isUnionRule;
                    bool m_isUnionRuleHasBeenSet;

                    /**
                     * <p>指标告警条件规则，不填表示删除已有的所有指标告警条件规则</p>
                     */
                    std::vector<ModifyPolicyGroupCondition> m_conditions;
                    bool m_conditionsHasBeenSet;

                    /**
                     * <p>事件告警条件，不填表示删除已有的事件告警条件</p>
                     */
                    std::vector<ModifyPolicyGroupEventCondition> m_eventConditions;
                    bool m_eventConditionsHasBeenSet;

                    /**
                     * <p>模板策略组id</p>
                     */
                    int64_t m_conditionTempGroupId;
                    bool m_conditionTempGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYPOLICYGROUPREQUEST_H_
