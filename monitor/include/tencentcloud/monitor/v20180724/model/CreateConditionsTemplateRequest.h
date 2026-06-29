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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATECONDITIONSTEMPLATEREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATECONDITIONSTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/ModifyConditionsTemplateRequestCondition.h>
#include <tencentcloud/monitor/v20180724/model/ModifyConditionsTemplateRequestEventCondition.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * CreateConditionsTemplate请求参数结构体
                */
                class CreateConditionsTemplateRequest : public AbstractModel
                {
                public:
                    CreateConditionsTemplateRequest();
                    ~CreateConditionsTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>固定值，monitor</p>
                     * @return Module <p>固定值，monitor</p>
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置<p>固定值，monitor</p>
                     * @param _module <p>固定值，monitor</p>
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
                     * 获取<p>视图名</p>
                     * @return ViewName <p>视图名</p>
                     * 
                     */
                    std::string GetViewName() const;

                    /**
                     * 设置<p>视图名</p>
                     * @param _viewName <p>视图名</p>
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
                     * 获取<p>组名</p>
                     * @return GroupName <p>组名</p>
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置<p>组名</p>
                     * @param _groupName <p>组名</p>
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
                     * 获取<p>是否为与关系</p>
                     * @return IsUnionRule <p>是否为与关系</p>
                     * 
                     */
                    int64_t GetIsUnionRule() const;

                    /**
                     * 设置<p>是否为与关系</p>
                     * @param _isUnionRule <p>是否为与关系</p>
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
                     * 获取<p>父ID</p>
                     * @return ParentGroupID <p>父ID</p>
                     * 
                     */
                    int64_t GetParentGroupID() const;

                    /**
                     * 设置<p>父ID</p>
                     * @param _parentGroupID <p>父ID</p>
                     * 
                     */
                    void SetParentGroupID(const int64_t& _parentGroupID);

                    /**
                     * 判断参数 ParentGroupID 是否已赋值
                     * @return ParentGroupID 是否已赋值
                     * 
                     */
                    bool ParentGroupIDHasBeenSet() const;

                    /**
                     * 获取<p>是否屏蔽</p>
                     * @return IsShielded <p>是否屏蔽</p>
                     * 
                     */
                    int64_t GetIsShielded() const;

                    /**
                     * 设置<p>是否屏蔽</p>
                     * @param _isShielded <p>是否屏蔽</p>
                     * 
                     */
                    void SetIsShielded(const int64_t& _isShielded);

                    /**
                     * 判断参数 IsShielded 是否已赋值
                     * @return IsShielded 是否已赋值
                     * 
                     */
                    bool IsShieldedHasBeenSet() const;

                    /**
                     * 获取<p>复合告警表达式</p>
                     * @return ComplexExpression <p>复合告警表达式</p>
                     * 
                     */
                    std::string GetComplexExpression() const;

                    /**
                     * 设置<p>复合告警表达式</p>
                     * @param _complexExpression <p>复合告警表达式</p>
                     * 
                     */
                    void SetComplexExpression(const std::string& _complexExpression);

                    /**
                     * 判断参数 ComplexExpression 是否已赋值
                     * @return ComplexExpression 是否已赋值
                     * 
                     */
                    bool ComplexExpressionHasBeenSet() const;

                    /**
                     * 获取<p>指标告警条件</p>
                     * @return Conditions <p>指标告警条件</p>
                     * 
                     */
                    std::vector<ModifyConditionsTemplateRequestCondition> GetConditions() const;

                    /**
                     * 设置<p>指标告警条件</p>
                     * @param _conditions <p>指标告警条件</p>
                     * 
                     */
                    void SetConditions(const std::vector<ModifyConditionsTemplateRequestCondition>& _conditions);

                    /**
                     * 判断参数 Conditions 是否已赋值
                     * @return Conditions 是否已赋值
                     * 
                     */
                    bool ConditionsHasBeenSet() const;

                    /**
                     * 获取<p>事件告警条件</p>
                     * @return EventConditions <p>事件告警条件</p>
                     * 
                     */
                    std::vector<ModifyConditionsTemplateRequestEventCondition> GetEventConditions() const;

                    /**
                     * 设置<p>事件告警条件</p>
                     * @param _eventConditions <p>事件告警条件</p>
                     * 
                     */
                    void SetEventConditions(const std::vector<ModifyConditionsTemplateRequestEventCondition>& _eventConditions);

                    /**
                     * 判断参数 EventConditions 是否已赋值
                     * @return EventConditions 是否已赋值
                     * 
                     */
                    bool EventConditionsHasBeenSet() const;

                private:

                    /**
                     * <p>固定值，monitor</p>
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * <p>视图名</p>
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                    /**
                     * <p>组名</p>
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>是否为与关系</p>
                     */
                    int64_t m_isUnionRule;
                    bool m_isUnionRuleHasBeenSet;

                    /**
                     * <p>备注</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>父ID</p>
                     */
                    int64_t m_parentGroupID;
                    bool m_parentGroupIDHasBeenSet;

                    /**
                     * <p>是否屏蔽</p>
                     */
                    int64_t m_isShielded;
                    bool m_isShieldedHasBeenSet;

                    /**
                     * <p>复合告警表达式</p>
                     */
                    std::string m_complexExpression;
                    bool m_complexExpressionHasBeenSet;

                    /**
                     * <p>指标告警条件</p>
                     */
                    std::vector<ModifyConditionsTemplateRequestCondition> m_conditions;
                    bool m_conditionsHasBeenSet;

                    /**
                     * <p>事件告警条件</p>
                     */
                    std::vector<ModifyConditionsTemplateRequestEventCondition> m_eventConditions;
                    bool m_eventConditionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATECONDITIONSTEMPLATEREQUEST_H_
