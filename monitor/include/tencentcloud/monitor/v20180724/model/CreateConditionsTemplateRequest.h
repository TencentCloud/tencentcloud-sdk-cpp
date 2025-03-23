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
                     * 获取固定值，monitor
                     * @return Module 固定值，monitor
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置固定值，monitor
                     * @param _module 固定值，monitor
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
                     * 获取视图名
                     * @return ViewName 视图名
                     * 
                     */
                    std::string GetViewName() const;

                    /**
                     * 设置视图名
                     * @param _viewName 视图名
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
                     * 获取组名
                     * @return GroupName 组名
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置组名
                     * @param _groupName 组名
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
                     * 获取是否为与关系
                     * @return IsUnionRule 是否为与关系
                     * 
                     */
                    int64_t GetIsUnionRule() const;

                    /**
                     * 设置是否为与关系
                     * @param _isUnionRule 是否为与关系
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
                     * 获取父ID
                     * @return ParentGroupID 父ID
                     * 
                     */
                    int64_t GetParentGroupID() const;

                    /**
                     * 设置父ID
                     * @param _parentGroupID 父ID
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
                     * 获取是否屏蔽
                     * @return IsShielded 是否屏蔽
                     * 
                     */
                    int64_t GetIsShielded() const;

                    /**
                     * 设置是否屏蔽
                     * @param _isShielded 是否屏蔽
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
                     * 获取复合告警表达式
                     * @return ComplexExpression 复合告警表达式
                     * 
                     */
                    std::string GetComplexExpression() const;

                    /**
                     * 设置复合告警表达式
                     * @param _complexExpression 复合告警表达式
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
                     * 获取指标告警条件
                     * @return Conditions 指标告警条件
                     * 
                     */
                    std::vector<ModifyConditionsTemplateRequestCondition> GetConditions() const;

                    /**
                     * 设置指标告警条件
                     * @param _conditions 指标告警条件
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
                     * 获取事件告警条件
                     * @return EventConditions 事件告警条件
                     * 
                     */
                    std::vector<ModifyConditionsTemplateRequestEventCondition> GetEventConditions() const;

                    /**
                     * 设置事件告警条件
                     * @param _eventConditions 事件告警条件
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
                     * 固定值，monitor
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 视图名
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                    /**
                     * 组名
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 是否为与关系
                     */
                    int64_t m_isUnionRule;
                    bool m_isUnionRuleHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 父ID
                     */
                    int64_t m_parentGroupID;
                    bool m_parentGroupIDHasBeenSet;

                    /**
                     * 是否屏蔽
                     */
                    int64_t m_isShielded;
                    bool m_isShieldedHasBeenSet;

                    /**
                     * 复合告警表达式
                     */
                    std::string m_complexExpression;
                    bool m_complexExpressionHasBeenSet;

                    /**
                     * 指标告警条件
                     */
                    std::vector<ModifyConditionsTemplateRequestCondition> m_conditions;
                    bool m_conditionsHasBeenSet;

                    /**
                     * 事件告警条件
                     */
                    std::vector<ModifyConditionsTemplateRequestEventCondition> m_eventConditions;
                    bool m_eventConditionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATECONDITIONSTEMPLATEREQUEST_H_
