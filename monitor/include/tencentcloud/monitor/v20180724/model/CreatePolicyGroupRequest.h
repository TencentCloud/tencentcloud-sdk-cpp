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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEPOLICYGROUPREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEPOLICYGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/CreatePolicyGroupCondition.h>
#include <tencentcloud/monitor/v20180724/model/CreatePolicyGroupEventCondition.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * CreatePolicyGroup请求参数结构体
                */
                class CreatePolicyGroupRequest : public AbstractModel
                {
                public:
                    CreatePolicyGroupRequest();
                    ~CreatePolicyGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取组策略名称
                     * @return GroupName 组策略名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置组策略名称
                     * @param _groupName 组策略名称
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
                     * 获取策略组所属视图的名称，若通过模板创建，可不传入
                     * @return ViewName 策略组所属视图的名称，若通过模板创建，可不传入
                     * 
                     */
                    std::string GetViewName() const;

                    /**
                     * 设置策略组所属视图的名称，若通过模板创建，可不传入
                     * @param _viewName 策略组所属视图的名称，若通过模板创建，可不传入
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
                     * 获取策略组所属项目Id，会进行鉴权操作
                     * @return ProjectId 策略组所属项目Id，会进行鉴权操作
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置策略组所属项目Id，会进行鉴权操作
                     * @param _projectId 策略组所属项目Id，会进行鉴权操作
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取模板策略组Id, 通过模板创建时才需要传
                     * @return ConditionTempGroupId 模板策略组Id, 通过模板创建时才需要传
                     * 
                     */
                    int64_t GetConditionTempGroupId() const;

                    /**
                     * 设置模板策略组Id, 通过模板创建时才需要传
                     * @param _conditionTempGroupId 模板策略组Id, 通过模板创建时才需要传
                     * 
                     */
                    void SetConditionTempGroupId(const int64_t& _conditionTempGroupId);

                    /**
                     * 判断参数 ConditionTempGroupId 是否已赋值
                     * @return ConditionTempGroupId 是否已赋值
                     * 
                     */
                    bool ConditionTempGroupIdHasBeenSet() const;

                    /**
                     * 获取是否屏蔽策略组，0表示不屏蔽，1表示屏蔽。不填默认为0
                     * @return IsShielded 是否屏蔽策略组，0表示不屏蔽，1表示屏蔽。不填默认为0
                     * 
                     */
                    int64_t GetIsShielded() const;

                    /**
                     * 设置是否屏蔽策略组，0表示不屏蔽，1表示屏蔽。不填默认为0
                     * @param _isShielded 是否屏蔽策略组，0表示不屏蔽，1表示屏蔽。不填默认为0
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
                     * 获取策略组的备注信息
                     * @return Remark 策略组的备注信息
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置策略组的备注信息
                     * @param _remark 策略组的备注信息
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
                     * 获取插入时间，戳格式为Unix时间戳，不填则按后台处理时间填充
                     * @return InsertTime 插入时间，戳格式为Unix时间戳，不填则按后台处理时间填充
                     * 
                     */
                    int64_t GetInsertTime() const;

                    /**
                     * 设置插入时间，戳格式为Unix时间戳，不填则按后台处理时间填充
                     * @param _insertTime 插入时间，戳格式为Unix时间戳，不填则按后台处理时间填充
                     * 
                     */
                    void SetInsertTime(const int64_t& _insertTime);

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     * 
                     */
                    bool InsertTimeHasBeenSet() const;

                    /**
                     * 获取策略组中的阈值告警规则
                     * @return Conditions 策略组中的阈值告警规则
                     * 
                     */
                    std::vector<CreatePolicyGroupCondition> GetConditions() const;

                    /**
                     * 设置策略组中的阈值告警规则
                     * @param _conditions 策略组中的阈值告警规则
                     * 
                     */
                    void SetConditions(const std::vector<CreatePolicyGroupCondition>& _conditions);

                    /**
                     * 判断参数 Conditions 是否已赋值
                     * @return Conditions 是否已赋值
                     * 
                     */
                    bool ConditionsHasBeenSet() const;

                    /**
                     * 获取策略组中的事件告警规则
                     * @return EventConditions 策略组中的事件告警规则
                     * 
                     */
                    std::vector<CreatePolicyGroupEventCondition> GetEventConditions() const;

                    /**
                     * 设置策略组中的事件告警规则
                     * @param _eventConditions 策略组中的事件告警规则
                     * 
                     */
                    void SetEventConditions(const std::vector<CreatePolicyGroupEventCondition>& _eventConditions);

                    /**
                     * 判断参数 EventConditions 是否已赋值
                     * @return EventConditions 是否已赋值
                     * 
                     */
                    bool EventConditionsHasBeenSet() const;

                    /**
                     * 获取是否为后端调用。当且仅当值为1时，后台拉取策略模板中的规则填充入Conditions以及EventConditions字段
                     * @return BackEndCall 是否为后端调用。当且仅当值为1时，后台拉取策略模板中的规则填充入Conditions以及EventConditions字段
                     * 
                     */
                    int64_t GetBackEndCall() const;

                    /**
                     * 设置是否为后端调用。当且仅当值为1时，后台拉取策略模板中的规则填充入Conditions以及EventConditions字段
                     * @param _backEndCall 是否为后端调用。当且仅当值为1时，后台拉取策略模板中的规则填充入Conditions以及EventConditions字段
                     * 
                     */
                    void SetBackEndCall(const int64_t& _backEndCall);

                    /**
                     * 判断参数 BackEndCall 是否已赋值
                     * @return BackEndCall 是否已赋值
                     * 
                     */
                    bool BackEndCallHasBeenSet() const;

                    /**
                     * 获取指标告警规则的且或关系，0表示或规则(满足任意规则就告警)，1表示且规则(满足所有规则才告警)
                     * @return IsUnionRule 指标告警规则的且或关系，0表示或规则(满足任意规则就告警)，1表示且规则(满足所有规则才告警)
                     * 
                     */
                    int64_t GetIsUnionRule() const;

                    /**
                     * 设置指标告警规则的且或关系，0表示或规则(满足任意规则就告警)，1表示且规则(满足所有规则才告警)
                     * @param _isUnionRule 指标告警规则的且或关系，0表示或规则(满足任意规则就告警)，1表示且规则(满足所有规则才告警)
                     * 
                     */
                    void SetIsUnionRule(const int64_t& _isUnionRule);

                    /**
                     * 判断参数 IsUnionRule 是否已赋值
                     * @return IsUnionRule 是否已赋值
                     * 
                     */
                    bool IsUnionRuleHasBeenSet() const;

                private:

                    /**
                     * 组策略名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 固定值，为"monitor"
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 策略组所属视图的名称，若通过模板创建，可不传入
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                    /**
                     * 策略组所属项目Id，会进行鉴权操作
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 模板策略组Id, 通过模板创建时才需要传
                     */
                    int64_t m_conditionTempGroupId;
                    bool m_conditionTempGroupIdHasBeenSet;

                    /**
                     * 是否屏蔽策略组，0表示不屏蔽，1表示屏蔽。不填默认为0
                     */
                    int64_t m_isShielded;
                    bool m_isShieldedHasBeenSet;

                    /**
                     * 策略组的备注信息
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 插入时间，戳格式为Unix时间戳，不填则按后台处理时间填充
                     */
                    int64_t m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * 策略组中的阈值告警规则
                     */
                    std::vector<CreatePolicyGroupCondition> m_conditions;
                    bool m_conditionsHasBeenSet;

                    /**
                     * 策略组中的事件告警规则
                     */
                    std::vector<CreatePolicyGroupEventCondition> m_eventConditions;
                    bool m_eventConditionsHasBeenSet;

                    /**
                     * 是否为后端调用。当且仅当值为1时，后台拉取策略模板中的规则填充入Conditions以及EventConditions字段
                     */
                    int64_t m_backEndCall;
                    bool m_backEndCallHasBeenSet;

                    /**
                     * 指标告警规则的且或关系，0表示或规则(满足任意规则就告警)，1表示且规则(满足所有规则才告警)
                     */
                    int64_t m_isUnionRule;
                    bool m_isUnionRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEPOLICYGROUPREQUEST_H_
