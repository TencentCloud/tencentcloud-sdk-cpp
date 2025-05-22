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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATEALARMREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATEALARMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/AlarmTarget.h>
#include <tencentcloud/cls/v20201016/model/MonitorTime.h>
#include <tencentcloud/cls/v20201016/model/MultiCondition.h>
#include <tencentcloud/cls/v20201016/model/CallBackInfo.h>
#include <tencentcloud/cls/v20201016/model/AnalysisDimensional.h>
#include <tencentcloud/cls/v20201016/model/Tag.h>
#include <tencentcloud/cls/v20201016/model/AlarmClassification.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CreateAlarm请求参数结构体
                */
                class CreateAlarmRequest : public AbstractModel
                {
                public:
                    CreateAlarmRequest();
                    ~CreateAlarmRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取告警策略名称
                     * @return Name 告警策略名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置告警策略名称
                     * @param _name 告警策略名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取监控对象列表。
                     * @return AlarmTargets 监控对象列表。
                     * 
                     */
                    std::vector<AlarmTarget> GetAlarmTargets() const;

                    /**
                     * 设置监控对象列表。
                     * @param _alarmTargets 监控对象列表。
                     * 
                     */
                    void SetAlarmTargets(const std::vector<AlarmTarget>& _alarmTargets);

                    /**
                     * 判断参数 AlarmTargets 是否已赋值
                     * @return AlarmTargets 是否已赋值
                     * 
                     */
                    bool AlarmTargetsHasBeenSet() const;

                    /**
                     * 获取监控任务运行时间点。
                     * @return MonitorTime 监控任务运行时间点。
                     * 
                     */
                    MonitorTime GetMonitorTime() const;

                    /**
                     * 设置监控任务运行时间点。
                     * @param _monitorTime 监控任务运行时间点。
                     * 
                     */
                    void SetMonitorTime(const MonitorTime& _monitorTime);

                    /**
                     * 判断参数 MonitorTime 是否已赋值
                     * @return MonitorTime 是否已赋值
                     * 
                     */
                    bool MonitorTimeHasBeenSet() const;

                    /**
                     * 获取持续周期。持续满足触发条件TriggerCount个周期后，再进行告警；最小值为1，最大值为2000。
                     * @return TriggerCount 持续周期。持续满足触发条件TriggerCount个周期后，再进行告警；最小值为1，最大值为2000。
                     * 
                     */
                    int64_t GetTriggerCount() const;

                    /**
                     * 设置持续周期。持续满足触发条件TriggerCount个周期后，再进行告警；最小值为1，最大值为2000。
                     * @param _triggerCount 持续周期。持续满足触发条件TriggerCount个周期后，再进行告警；最小值为1，最大值为2000。
                     * 
                     */
                    void SetTriggerCount(const int64_t& _triggerCount);

                    /**
                     * 判断参数 TriggerCount 是否已赋值
                     * @return TriggerCount 是否已赋值
                     * 
                     */
                    bool TriggerCountHasBeenSet() const;

                    /**
                     * 获取告警重复的周期，单位是分钟。取值范围是0~1440。
                     * @return AlarmPeriod 告警重复的周期，单位是分钟。取值范围是0~1440。
                     * 
                     */
                    int64_t GetAlarmPeriod() const;

                    /**
                     * 设置告警重复的周期，单位是分钟。取值范围是0~1440。
                     * @param _alarmPeriod 告警重复的周期，单位是分钟。取值范围是0~1440。
                     * 
                     */
                    void SetAlarmPeriod(const int64_t& _alarmPeriod);

                    /**
                     * 判断参数 AlarmPeriod 是否已赋值
                     * @return AlarmPeriod 是否已赋值
                     * 
                     */
                    bool AlarmPeriodHasBeenSet() const;

                    /**
                     * 获取关联的告警通知模板列表。
                     * @return AlarmNoticeIds 关联的告警通知模板列表。
                     * 
                     */
                    std::vector<std::string> GetAlarmNoticeIds() const;

                    /**
                     * 设置关联的告警通知模板列表。
                     * @param _alarmNoticeIds 关联的告警通知模板列表。
                     * 
                     */
                    void SetAlarmNoticeIds(const std::vector<std::string>& _alarmNoticeIds);

                    /**
                     * 判断参数 AlarmNoticeIds 是否已赋值
                     * @return AlarmNoticeIds 是否已赋值
                     * 
                     */
                    bool AlarmNoticeIdsHasBeenSet() const;

                    /**
                     * 获取触发条件
 注意:  
- Condition和AlarmLevel是一组配置，MultiConditions是另一组配置，2组配置互斥。

                     * @return Condition 触发条件
 注意:  
- Condition和AlarmLevel是一组配置，MultiConditions是另一组配置，2组配置互斥。

                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置触发条件
 注意:  
- Condition和AlarmLevel是一组配置，MultiConditions是另一组配置，2组配置互斥。

                     * @param _condition 触发条件
 注意:  
- Condition和AlarmLevel是一组配置，MultiConditions是另一组配置，2组配置互斥。

                     * 
                     */
                    void SetCondition(const std::string& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     * 
                     */
                    bool ConditionHasBeenSet() const;

                    /**
                     * 获取告警级别
0:警告(Warn); 1:提醒(Info); 2:紧急 (Critical)。
注意:  
- 不填则默认为0。
- Condition和AlarmLevel是一组配置，MultiConditions是另一组配置，2组配置互斥。
                     * @return AlarmLevel 告警级别
0:警告(Warn); 1:提醒(Info); 2:紧急 (Critical)。
注意:  
- 不填则默认为0。
- Condition和AlarmLevel是一组配置，MultiConditions是另一组配置，2组配置互斥。
                     * 
                     */
                    uint64_t GetAlarmLevel() const;

                    /**
                     * 设置告警级别
0:警告(Warn); 1:提醒(Info); 2:紧急 (Critical)。
注意:  
- 不填则默认为0。
- Condition和AlarmLevel是一组配置，MultiConditions是另一组配置，2组配置互斥。
                     * @param _alarmLevel 告警级别
0:警告(Warn); 1:提醒(Info); 2:紧急 (Critical)。
注意:  
- 不填则默认为0。
- Condition和AlarmLevel是一组配置，MultiConditions是另一组配置，2组配置互斥。
                     * 
                     */
                    void SetAlarmLevel(const uint64_t& _alarmLevel);

                    /**
                     * 判断参数 AlarmLevel 是否已赋值
                     * @return AlarmLevel 是否已赋值
                     * 
                     */
                    bool AlarmLevelHasBeenSet() const;

                    /**
                     * 获取多触发条件
 注意:  
- Condition和AlarmLevel是一组配置，MultiConditions是另一组配置，2组配置互斥。



                     * @return MultiConditions 多触发条件
 注意:  
- Condition和AlarmLevel是一组配置，MultiConditions是另一组配置，2组配置互斥。



                     * 
                     */
                    std::vector<MultiCondition> GetMultiConditions() const;

                    /**
                     * 设置多触发条件
 注意:  
- Condition和AlarmLevel是一组配置，MultiConditions是另一组配置，2组配置互斥。



                     * @param _multiConditions 多触发条件
 注意:  
- Condition和AlarmLevel是一组配置，MultiConditions是另一组配置，2组配置互斥。



                     * 
                     */
                    void SetMultiConditions(const std::vector<MultiCondition>& _multiConditions);

                    /**
                     * 判断参数 MultiConditions 是否已赋值
                     * @return MultiConditions 是否已赋值
                     * 
                     */
                    bool MultiConditionsHasBeenSet() const;

                    /**
                     * 获取是否开启告警策略。
默认值为true
                     * @return Status 是否开启告警策略。
默认值为true
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置是否开启告警策略。
默认值为true
                     * @param _status 是否开启告警策略。
默认值为true
                     * 
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取请使用Status参数控制是否开启告警策略。
                     * @return Enable 请使用Status参数控制是否开启告警策略。
                     * @deprecated
                     */
                    bool GetEnable() const;

                    /**
                     * 设置请使用Status参数控制是否开启告警策略。
                     * @param _enable 请使用Status参数控制是否开启告警策略。
                     * @deprecated
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * @deprecated
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取用户自定义告警内容
                     * @return MessageTemplate 用户自定义告警内容
                     * 
                     */
                    std::string GetMessageTemplate() const;

                    /**
                     * 设置用户自定义告警内容
                     * @param _messageTemplate 用户自定义告警内容
                     * 
                     */
                    void SetMessageTemplate(const std::string& _messageTemplate);

                    /**
                     * 判断参数 MessageTemplate 是否已赋值
                     * @return MessageTemplate 是否已赋值
                     * 
                     */
                    bool MessageTemplateHasBeenSet() const;

                    /**
                     * 获取用户自定义回调
                     * @return CallBack 用户自定义回调
                     * 
                     */
                    CallBackInfo GetCallBack() const;

                    /**
                     * 设置用户自定义回调
                     * @param _callBack 用户自定义回调
                     * 
                     */
                    void SetCallBack(const CallBackInfo& _callBack);

                    /**
                     * 判断参数 CallBack 是否已赋值
                     * @return CallBack 是否已赋值
                     * 
                     */
                    bool CallBackHasBeenSet() const;

                    /**
                     * 获取多维分析
                     * @return Analysis 多维分析
                     * 
                     */
                    std::vector<AnalysisDimensional> GetAnalysis() const;

                    /**
                     * 设置多维分析
                     * @param _analysis 多维分析
                     * 
                     */
                    void SetAnalysis(const std::vector<AnalysisDimensional>& _analysis);

                    /**
                     * 判断参数 Analysis 是否已赋值
                     * @return Analysis 是否已赋值
                     * 
                     */
                    bool AnalysisHasBeenSet() const;

                    /**
                     * 获取分组触发状态。
默认值false
                     * @return GroupTriggerStatus 分组触发状态。
默认值false
                     * 
                     */
                    bool GetGroupTriggerStatus() const;

                    /**
                     * 设置分组触发状态。
默认值false
                     * @param _groupTriggerStatus 分组触发状态。
默认值false
                     * 
                     */
                    void SetGroupTriggerStatus(const bool& _groupTriggerStatus);

                    /**
                     * 判断参数 GroupTriggerStatus 是否已赋值
                     * @return GroupTriggerStatus 是否已赋值
                     * 
                     */
                    bool GroupTriggerStatusHasBeenSet() const;

                    /**
                     * 获取分组触发条件。
                     * @return GroupTriggerCondition 分组触发条件。
                     * 
                     */
                    std::vector<std::string> GetGroupTriggerCondition() const;

                    /**
                     * 设置分组触发条件。
                     * @param _groupTriggerCondition 分组触发条件。
                     * 
                     */
                    void SetGroupTriggerCondition(const std::vector<std::string>& _groupTriggerCondition);

                    /**
                     * 判断参数 GroupTriggerCondition 是否已赋值
                     * @return GroupTriggerCondition 是否已赋值
                     * 
                     */
                    bool GroupTriggerConditionHasBeenSet() const;

                    /**
                     * 获取标签描述列表，通过指定该参数可以同时绑定标签到相应的告警策略。

最大支持10个标签键值对，并且不能有重复的键值对。
                     * @return Tags 标签描述列表，通过指定该参数可以同时绑定标签到相应的告警策略。

最大支持10个标签键值对，并且不能有重复的键值对。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签描述列表，通过指定该参数可以同时绑定标签到相应的告警策略。

最大支持10个标签键值对，并且不能有重复的键值对。
                     * @param _tags 标签描述列表，通过指定该参数可以同时绑定标签到相应的告警策略。

最大支持10个标签键值对，并且不能有重复的键值对。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取监控对象类型。0:执行语句共用监控对象; 1:每个执行语句单独选择监控对象。 
不填则默认为0。
当值为1时，AlarmTargets元素个数不能超过10个，AlarmTargets中的Number必须是从1开始的连续正整数，不能重复。

                     * @return MonitorObjectType 监控对象类型。0:执行语句共用监控对象; 1:每个执行语句单独选择监控对象。 
不填则默认为0。
当值为1时，AlarmTargets元素个数不能超过10个，AlarmTargets中的Number必须是从1开始的连续正整数，不能重复。

                     * 
                     */
                    uint64_t GetMonitorObjectType() const;

                    /**
                     * 设置监控对象类型。0:执行语句共用监控对象; 1:每个执行语句单独选择监控对象。 
不填则默认为0。
当值为1时，AlarmTargets元素个数不能超过10个，AlarmTargets中的Number必须是从1开始的连续正整数，不能重复。

                     * @param _monitorObjectType 监控对象类型。0:执行语句共用监控对象; 1:每个执行语句单独选择监控对象。 
不填则默认为0。
当值为1时，AlarmTargets元素个数不能超过10个，AlarmTargets中的Number必须是从1开始的连续正整数，不能重复。

                     * 
                     */
                    void SetMonitorObjectType(const uint64_t& _monitorObjectType);

                    /**
                     * 判断参数 MonitorObjectType 是否已赋值
                     * @return MonitorObjectType 是否已赋值
                     * 
                     */
                    bool MonitorObjectTypeHasBeenSet() const;

                    /**
                     * 获取告警附加分类信息列表。
Classifications元素个数不能超过20个。
Classifications元素的Key不能为空，不能重复，长度不能超过50个字符，符合正则 `^[a-z]([a-z0-9_]{0,49})$`。
Classifications元素的Value长度不能超过200个字符。
                     * @return Classifications 告警附加分类信息列表。
Classifications元素个数不能超过20个。
Classifications元素的Key不能为空，不能重复，长度不能超过50个字符，符合正则 `^[a-z]([a-z0-9_]{0,49})$`。
Classifications元素的Value长度不能超过200个字符。
                     * 
                     */
                    std::vector<AlarmClassification> GetClassifications() const;

                    /**
                     * 设置告警附加分类信息列表。
Classifications元素个数不能超过20个。
Classifications元素的Key不能为空，不能重复，长度不能超过50个字符，符合正则 `^[a-z]([a-z0-9_]{0,49})$`。
Classifications元素的Value长度不能超过200个字符。
                     * @param _classifications 告警附加分类信息列表。
Classifications元素个数不能超过20个。
Classifications元素的Key不能为空，不能重复，长度不能超过50个字符，符合正则 `^[a-z]([a-z0-9_]{0,49})$`。
Classifications元素的Value长度不能超过200个字符。
                     * 
                     */
                    void SetClassifications(const std::vector<AlarmClassification>& _classifications);

                    /**
                     * 判断参数 Classifications 是否已赋值
                     * @return Classifications 是否已赋值
                     * 
                     */
                    bool ClassificationsHasBeenSet() const;

                private:

                    /**
                     * 告警策略名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 监控对象列表。
                     */
                    std::vector<AlarmTarget> m_alarmTargets;
                    bool m_alarmTargetsHasBeenSet;

                    /**
                     * 监控任务运行时间点。
                     */
                    MonitorTime m_monitorTime;
                    bool m_monitorTimeHasBeenSet;

                    /**
                     * 持续周期。持续满足触发条件TriggerCount个周期后，再进行告警；最小值为1，最大值为2000。
                     */
                    int64_t m_triggerCount;
                    bool m_triggerCountHasBeenSet;

                    /**
                     * 告警重复的周期，单位是分钟。取值范围是0~1440。
                     */
                    int64_t m_alarmPeriod;
                    bool m_alarmPeriodHasBeenSet;

                    /**
                     * 关联的告警通知模板列表。
                     */
                    std::vector<std::string> m_alarmNoticeIds;
                    bool m_alarmNoticeIdsHasBeenSet;

                    /**
                     * 触发条件
 注意:  
- Condition和AlarmLevel是一组配置，MultiConditions是另一组配置，2组配置互斥。

                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * 告警级别
0:警告(Warn); 1:提醒(Info); 2:紧急 (Critical)。
注意:  
- 不填则默认为0。
- Condition和AlarmLevel是一组配置，MultiConditions是另一组配置，2组配置互斥。
                     */
                    uint64_t m_alarmLevel;
                    bool m_alarmLevelHasBeenSet;

                    /**
                     * 多触发条件
 注意:  
- Condition和AlarmLevel是一组配置，MultiConditions是另一组配置，2组配置互斥。



                     */
                    std::vector<MultiCondition> m_multiConditions;
                    bool m_multiConditionsHasBeenSet;

                    /**
                     * 是否开启告警策略。
默认值为true
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 请使用Status参数控制是否开启告警策略。
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 用户自定义告警内容
                     */
                    std::string m_messageTemplate;
                    bool m_messageTemplateHasBeenSet;

                    /**
                     * 用户自定义回调
                     */
                    CallBackInfo m_callBack;
                    bool m_callBackHasBeenSet;

                    /**
                     * 多维分析
                     */
                    std::vector<AnalysisDimensional> m_analysis;
                    bool m_analysisHasBeenSet;

                    /**
                     * 分组触发状态。
默认值false
                     */
                    bool m_groupTriggerStatus;
                    bool m_groupTriggerStatusHasBeenSet;

                    /**
                     * 分组触发条件。
                     */
                    std::vector<std::string> m_groupTriggerCondition;
                    bool m_groupTriggerConditionHasBeenSet;

                    /**
                     * 标签描述列表，通过指定该参数可以同时绑定标签到相应的告警策略。

最大支持10个标签键值对，并且不能有重复的键值对。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 监控对象类型。0:执行语句共用监控对象; 1:每个执行语句单独选择监控对象。 
不填则默认为0。
当值为1时，AlarmTargets元素个数不能超过10个，AlarmTargets中的Number必须是从1开始的连续正整数，不能重复。

                     */
                    uint64_t m_monitorObjectType;
                    bool m_monitorObjectTypeHasBeenSet;

                    /**
                     * 告警附加分类信息列表。
Classifications元素个数不能超过20个。
Classifications元素的Key不能为空，不能重复，长度不能超过50个字符，符合正则 `^[a-z]([a-z0-9_]{0,49})$`。
Classifications元素的Value长度不能超过200个字符。
                     */
                    std::vector<AlarmClassification> m_classifications;
                    bool m_classificationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATEALARMREQUEST_H_
