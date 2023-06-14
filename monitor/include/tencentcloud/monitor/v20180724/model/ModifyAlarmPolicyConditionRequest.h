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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYALARMPOLICYCONDITIONREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYALARMPOLICYCONDITIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/AlarmPolicyCondition.h>
#include <tencentcloud/monitor/v20180724/model/AlarmPolicyEventCondition.h>
#include <tencentcloud/monitor/v20180724/model/AlarmPolicyFilter.h>
#include <tencentcloud/monitor/v20180724/model/LogAlarmReq.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * ModifyAlarmPolicyCondition请求参数结构体
                */
                class ModifyAlarmPolicyConditionRequest : public AbstractModel
                {
                public:
                    ModifyAlarmPolicyConditionRequest();
                    ~ModifyAlarmPolicyConditionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模块名，固定值 monitor
                     * @return Module 模块名，固定值 monitor
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置模块名，固定值 monitor
                     * @param _module 模块名，固定值 monitor
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
                     * 获取告警策略 ID
                     * @return PolicyId 告警策略 ID
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置告警策略 ID
                     * @param _policyId 告警策略 ID
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取触发条件模板 Id，可不传
                     * @return ConditionTemplateId 触发条件模板 Id，可不传
                     * 
                     */
                    int64_t GetConditionTemplateId() const;

                    /**
                     * 设置触发条件模板 Id，可不传
                     * @param _conditionTemplateId 触发条件模板 Id，可不传
                     * 
                     */
                    void SetConditionTemplateId(const int64_t& _conditionTemplateId);

                    /**
                     * 判断参数 ConditionTemplateId 是否已赋值
                     * @return ConditionTemplateId 是否已赋值
                     * 
                     */
                    bool ConditionTemplateIdHasBeenSet() const;

                    /**
                     * 获取指标触发条件
                     * @return Condition 指标触发条件
                     * 
                     */
                    AlarmPolicyCondition GetCondition() const;

                    /**
                     * 设置指标触发条件
                     * @param _condition 指标触发条件
                     * 
                     */
                    void SetCondition(const AlarmPolicyCondition& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     * 
                     */
                    bool ConditionHasBeenSet() const;

                    /**
                     * 获取事件触发条件
                     * @return EventCondition 事件触发条件
                     * 
                     */
                    AlarmPolicyEventCondition GetEventCondition() const;

                    /**
                     * 设置事件触发条件
                     * @param _eventCondition 事件触发条件
                     * 
                     */
                    void SetEventCondition(const AlarmPolicyEventCondition& _eventCondition);

                    /**
                     * 判断参数 EventCondition 是否已赋值
                     * @return EventCondition 是否已赋值
                     * 
                     */
                    bool EventConditionHasBeenSet() const;

                    /**
                     * 获取全局过滤条件
                     * @return Filter 全局过滤条件
                     * 
                     */
                    AlarmPolicyFilter GetFilter() const;

                    /**
                     * 设置全局过滤条件
                     * @param _filter 全局过滤条件
                     * 
                     */
                    void SetFilter(const AlarmPolicyFilter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取聚合维度列表，指定按哪些维度 key 来做 group by
                     * @return GroupBy 聚合维度列表，指定按哪些维度 key 来做 group by
                     * 
                     */
                    std::vector<std::string> GetGroupBy() const;

                    /**
                     * 设置聚合维度列表，指定按哪些维度 key 来做 group by
                     * @param _groupBy 聚合维度列表，指定按哪些维度 key 来做 group by
                     * 
                     */
                    void SetGroupBy(const std::vector<std::string>& _groupBy);

                    /**
                     * 判断参数 GroupBy 是否已赋值
                     * @return GroupBy 是否已赋值
                     * 
                     */
                    bool GroupByHasBeenSet() const;

                    /**
                     * 获取日志告警创建请求参数信息
                     * @return LogAlarmReqInfo 日志告警创建请求参数信息
                     * 
                     */
                    LogAlarmReq GetLogAlarmReqInfo() const;

                    /**
                     * 设置日志告警创建请求参数信息
                     * @param _logAlarmReqInfo 日志告警创建请求参数信息
                     * 
                     */
                    void SetLogAlarmReqInfo(const LogAlarmReq& _logAlarmReqInfo);

                    /**
                     * 判断参数 LogAlarmReqInfo 是否已赋值
                     * @return LogAlarmReqInfo 是否已赋值
                     * 
                     */
                    bool LogAlarmReqInfoHasBeenSet() const;

                    /**
                     * 获取模板id，专供prom使用
                     * @return NoticeIds 模板id，专供prom使用
                     * 
                     */
                    std::vector<std::string> GetNoticeIds() const;

                    /**
                     * 设置模板id，专供prom使用
                     * @param _noticeIds 模板id，专供prom使用
                     * 
                     */
                    void SetNoticeIds(const std::vector<std::string>& _noticeIds);

                    /**
                     * 判断参数 NoticeIds 是否已赋值
                     * @return NoticeIds 是否已赋值
                     * 
                     */
                    bool NoticeIdsHasBeenSet() const;

                    /**
                     * 获取启停状态，0=停用，1=启用
                     * @return Enable 启停状态，0=停用，1=启用
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置启停状态，0=停用，1=启用
                     * @param _enable 启停状态，0=停用，1=启用
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
                     * 获取专供prom策略名称
                     * @return PolicyName 专供prom策略名称
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置专供prom策略名称
                     * @param _policyName 专供prom策略名称
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取事件配置的告警
                     * @return EbSubject 事件配置的告警
                     * 
                     */
                    std::string GetEbSubject() const;

                    /**
                     * 设置事件配置的告警
                     * @param _ebSubject 事件配置的告警
                     * 
                     */
                    void SetEbSubject(const std::string& _ebSubject);

                    /**
                     * 判断参数 EbSubject 是否已赋值
                     * @return EbSubject 是否已赋值
                     * 
                     */
                    bool EbSubjectHasBeenSet() const;

                private:

                    /**
                     * 模块名，固定值 monitor
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 告警策略 ID
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 触发条件模板 Id，可不传
                     */
                    int64_t m_conditionTemplateId;
                    bool m_conditionTemplateIdHasBeenSet;

                    /**
                     * 指标触发条件
                     */
                    AlarmPolicyCondition m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * 事件触发条件
                     */
                    AlarmPolicyEventCondition m_eventCondition;
                    bool m_eventConditionHasBeenSet;

                    /**
                     * 全局过滤条件
                     */
                    AlarmPolicyFilter m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * 聚合维度列表，指定按哪些维度 key 来做 group by
                     */
                    std::vector<std::string> m_groupBy;
                    bool m_groupByHasBeenSet;

                    /**
                     * 日志告警创建请求参数信息
                     */
                    LogAlarmReq m_logAlarmReqInfo;
                    bool m_logAlarmReqInfoHasBeenSet;

                    /**
                     * 模板id，专供prom使用
                     */
                    std::vector<std::string> m_noticeIds;
                    bool m_noticeIdsHasBeenSet;

                    /**
                     * 启停状态，0=停用，1=启用
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 专供prom策略名称
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 事件配置的告警
                     */
                    std::string m_ebSubject;
                    bool m_ebSubjectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYALARMPOLICYCONDITIONREQUEST_H_
