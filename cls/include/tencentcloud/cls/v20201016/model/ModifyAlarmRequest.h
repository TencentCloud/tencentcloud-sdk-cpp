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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYALARMREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYALARMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/MonitorTime.h>
#include <tencentcloud/cls/v20201016/model/MultiCondition.h>
#include <tencentcloud/cls/v20201016/model/AlarmTarget.h>
#include <tencentcloud/cls/v20201016/model/CallBackInfo.h>
#include <tencentcloud/cls/v20201016/model/AnalysisDimensional.h>
#include <tencentcloud/cls/v20201016/model/Tag.h>
#include <tencentcloud/cls/v20201016/model/AlarmClassification.h>
#include <tencentcloud/cls/v20201016/model/MonitorNotice.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * ModifyAlarm请求参数结构体
                */
                class ModifyAlarmRequest : public AbstractModel
                {
                public:
                    ModifyAlarmRequest();
                    ~ModifyAlarmRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>告警策略ID。-通过<a href="https://cloud.tencent.com/document/product/614/56461">获取告警策略列表</a>获取告警策略ID</p>
                     * @return AlarmId <p>告警策略ID。-通过<a href="https://cloud.tencent.com/document/product/614/56461">获取告警策略列表</a>获取告警策略ID</p>
                     * 
                     */
                    std::string GetAlarmId() const;

                    /**
                     * 设置<p>告警策略ID。-通过<a href="https://cloud.tencent.com/document/product/614/56461">获取告警策略列表</a>获取告警策略ID</p>
                     * @param _alarmId <p>告警策略ID。-通过<a href="https://cloud.tencent.com/document/product/614/56461">获取告警策略列表</a>获取告警策略ID</p>
                     * 
                     */
                    void SetAlarmId(const std::string& _alarmId);

                    /**
                     * 判断参数 AlarmId 是否已赋值
                     * @return AlarmId 是否已赋值
                     * 
                     */
                    bool AlarmIdHasBeenSet() const;

                    /**
                     * 获取<p>告警策略名称。最大支持255个字节，不支持 &#39;|&#39;。</p>
                     * @return Name <p>告警策略名称。最大支持255个字节，不支持 &#39;|&#39;。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>告警策略名称。最大支持255个字节，不支持 &#39;|&#39;。</p>
                     * @param _name <p>告警策略名称。最大支持255个字节，不支持 &#39;|&#39;。</p>
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
                     * 获取<p>监控任务运行时间点。</p>
                     * @return MonitorTime <p>监控任务运行时间点。</p>
                     * 
                     */
                    MonitorTime GetMonitorTime() const;

                    /**
                     * 设置<p>监控任务运行时间点。</p>
                     * @param _monitorTime <p>监控任务运行时间点。</p>
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
                     * 获取<p>告警信息发送的触发条件。</p><p>注意:  </p><ul><li>Condition和AlarmLevel是一组配置，MultiConditions是另一组配置，2组配置互斥。</li></ul>
                     * @return Condition <p>告警信息发送的触发条件。</p><p>注意:  </p><ul><li>Condition和AlarmLevel是一组配置，MultiConditions是另一组配置，2组配置互斥。</li></ul>
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置<p>告警信息发送的触发条件。</p><p>注意:  </p><ul><li>Condition和AlarmLevel是一组配置，MultiConditions是另一组配置，2组配置互斥。</li></ul>
                     * @param _condition <p>告警信息发送的触发条件。</p><p>注意:  </p><ul><li>Condition和AlarmLevel是一组配置，MultiConditions是另一组配置，2组配置互斥。</li></ul>
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
                     * 获取<p>告警级别。</p><p>0:警告(Warn);1:提醒(Info);2:紧急 (Critical)</p><p>注意:  </p><ul><li>Condition和AlarmLevel是一组配置，MultiConditions是另一组配置，2组配置互斥。</li></ul>
                     * @return AlarmLevel <p>告警级别。</p><p>0:警告(Warn);1:提醒(Info);2:紧急 (Critical)</p><p>注意:  </p><ul><li>Condition和AlarmLevel是一组配置，MultiConditions是另一组配置，2组配置互斥。</li></ul>
                     * 
                     */
                    uint64_t GetAlarmLevel() const;

                    /**
                     * 设置<p>告警级别。</p><p>0:警告(Warn);1:提醒(Info);2:紧急 (Critical)</p><p>注意:  </p><ul><li>Condition和AlarmLevel是一组配置，MultiConditions是另一组配置，2组配置互斥。</li></ul>
                     * @param _alarmLevel <p>告警级别。</p><p>0:警告(Warn);1:提醒(Info);2:紧急 (Critical)</p><p>注意:  </p><ul><li>Condition和AlarmLevel是一组配置，MultiConditions是另一组配置，2组配置互斥。</li></ul>
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
                     * 获取<p>多触发条件。 </p><p>注意:  </p><ul><li>Condition和AlarmLevel是一组配置，MultiConditions是另一组配置，2组配置互斥。</li></ul>
                     * @return MultiConditions <p>多触发条件。 </p><p>注意:  </p><ul><li>Condition和AlarmLevel是一组配置，MultiConditions是另一组配置，2组配置互斥。</li></ul>
                     * 
                     */
                    std::vector<MultiCondition> GetMultiConditions() const;

                    /**
                     * 设置<p>多触发条件。 </p><p>注意:  </p><ul><li>Condition和AlarmLevel是一组配置，MultiConditions是另一组配置，2组配置互斥。</li></ul>
                     * @param _multiConditions <p>多触发条件。 </p><p>注意:  </p><ul><li>Condition和AlarmLevel是一组配置，MultiConditions是另一组配置，2组配置互斥。</li></ul>
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
                     * 获取<p>持续周期。持续满足触发条件TriggerCount个周期后，再进行告警；最小值为1，最大值为2000。</p>
                     * @return TriggerCount <p>持续周期。持续满足触发条件TriggerCount个周期后，再进行告警；最小值为1，最大值为2000。</p>
                     * 
                     */
                    int64_t GetTriggerCount() const;

                    /**
                     * 设置<p>持续周期。持续满足触发条件TriggerCount个周期后，再进行告警；最小值为1，最大值为2000。</p>
                     * @param _triggerCount <p>持续周期。持续满足触发条件TriggerCount个周期后，再进行告警；最小值为1，最大值为2000。</p>
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
                     * 获取<p>告警重复的周期。单位是分钟。取值范围是0~1440。</p>
                     * @return AlarmPeriod <p>告警重复的周期。单位是分钟。取值范围是0~1440。</p>
                     * 
                     */
                    int64_t GetAlarmPeriod() const;

                    /**
                     * 设置<p>告警重复的周期。单位是分钟。取值范围是0~1440。</p>
                     * @param _alarmPeriod <p>告警重复的周期。单位是分钟。取值范围是0~1440。</p>
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
                     * 获取<p>监控对象列表。</p>
                     * @return AlarmTargets <p>监控对象列表。</p>
                     * 
                     */
                    std::vector<AlarmTarget> GetAlarmTargets() const;

                    /**
                     * 设置<p>监控对象列表。</p>
                     * @param _alarmTargets <p>监控对象列表。</p>
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
                     * 获取<p>是否开启告警策略。</p>
                     * @return Status <p>是否开启告警策略。</p>
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置<p>是否开启告警策略。</p>
                     * @param _status <p>是否开启告警策略。</p>
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
                     * 获取<p>该参数已废弃，请使用Status参数控制是否开启告警策略。</p>
                     * @return Enable <p>该参数已废弃，请使用Status参数控制是否开启告警策略。</p>
                     * @deprecated
                     */
                    bool GetEnable() const;

                    /**
                     * 设置<p>该参数已废弃，请使用Status参数控制是否开启告警策略。</p>
                     * @param _enable <p>该参数已废弃，请使用Status参数控制是否开启告警策略。</p>
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
                     * 获取<p>用户自定义告警内容</p>
                     * @return MessageTemplate <p>用户自定义告警内容</p>
                     * 
                     */
                    std::string GetMessageTemplate() const;

                    /**
                     * 设置<p>用户自定义告警内容</p>
                     * @param _messageTemplate <p>用户自定义告警内容</p>
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
                     * 获取<p>用户自定义回调</p>
                     * @return CallBack <p>用户自定义回调</p>
                     * 
                     */
                    CallBackInfo GetCallBack() const;

                    /**
                     * 设置<p>用户自定义回调</p>
                     * @param _callBack <p>用户自定义回调</p>
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
                     * 获取<p>多维分析</p>
                     * @return Analysis <p>多维分析</p>
                     * 
                     */
                    std::vector<AnalysisDimensional> GetAnalysis() const;

                    /**
                     * 设置<p>多维分析</p>
                     * @param _analysis <p>多维分析</p>
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
                     * 获取<p>分组触发状态。true：开启，false：关闭（默认）</p>
                     * @return GroupTriggerStatus <p>分组触发状态。true：开启，false：关闭（默认）</p>
                     * 
                     */
                    bool GetGroupTriggerStatus() const;

                    /**
                     * 设置<p>分组触发状态。true：开启，false：关闭（默认）</p>
                     * @param _groupTriggerStatus <p>分组触发状态。true：开启，false：关闭（默认）</p>
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
                     * 获取<p>分组触发条件。</p>
                     * @return GroupTriggerCondition <p>分组触发条件。</p>
                     * 
                     */
                    std::vector<std::string> GetGroupTriggerCondition() const;

                    /**
                     * 设置<p>分组触发条件。</p>
                     * @param _groupTriggerCondition <p>分组触发条件。</p>
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
                     * 获取<p>标签描述列表，通过指定该参数可以同时绑定标签到相应的告警策略。最大支持10个标签键值对，并且不能有重复的键值对。</p>
                     * @return Tags <p>标签描述列表，通过指定该参数可以同时绑定标签到相应的告警策略。最大支持10个标签键值对，并且不能有重复的键值对。</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签描述列表，通过指定该参数可以同时绑定标签到相应的告警策略。最大支持10个标签键值对，并且不能有重复的键值对。</p>
                     * @param _tags <p>标签描述列表，通过指定该参数可以同时绑定标签到相应的告警策略。最大支持10个标签键值对，并且不能有重复的键值对。</p>
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
                     * 获取<p>监控对象类型。0:执行语句共用监控对象; 1:每个执行语句单独选择监控对象。<br>当值为1时，AlarmTargets元素个数不能超过10个，AlarmTargets中的Number必须是从1开始的连续正整数，不能重复。</p>
                     * @return MonitorObjectType <p>监控对象类型。0:执行语句共用监控对象; 1:每个执行语句单独选择监控对象。<br>当值为1时，AlarmTargets元素个数不能超过10个，AlarmTargets中的Number必须是从1开始的连续正整数，不能重复。</p>
                     * 
                     */
                    uint64_t GetMonitorObjectType() const;

                    /**
                     * 设置<p>监控对象类型。0:执行语句共用监控对象; 1:每个执行语句单独选择监控对象。<br>当值为1时，AlarmTargets元素个数不能超过10个，AlarmTargets中的Number必须是从1开始的连续正整数，不能重复。</p>
                     * @param _monitorObjectType <p>监控对象类型。0:执行语句共用监控对象; 1:每个执行语句单独选择监控对象。<br>当值为1时，AlarmTargets元素个数不能超过10个，AlarmTargets中的Number必须是从1开始的连续正整数，不能重复。</p>
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
                     * 获取<p>告警附加分类信息列表。<br>Classifications元素个数不能超过20个。<br>Classifications元素的Key不能为空，不能重复，长度不能超过50个字符，符合正则 <code>^[a-z]([a-z0-9_]{0,49})$</code>。<br>Classifications元素的Value长度不能超过200个字符。</p>
                     * @return Classifications <p>告警附加分类信息列表。<br>Classifications元素个数不能超过20个。<br>Classifications元素的Key不能为空，不能重复，长度不能超过50个字符，符合正则 <code>^[a-z]([a-z0-9_]{0,49})$</code>。<br>Classifications元素的Value长度不能超过200个字符。</p>
                     * 
                     */
                    std::vector<AlarmClassification> GetClassifications() const;

                    /**
                     * 设置<p>告警附加分类信息列表。<br>Classifications元素个数不能超过20个。<br>Classifications元素的Key不能为空，不能重复，长度不能超过50个字符，符合正则 <code>^[a-z]([a-z0-9_]{0,49})$</code>。<br>Classifications元素的Value长度不能超过200个字符。</p>
                     * @param _classifications <p>告警附加分类信息列表。<br>Classifications元素个数不能超过20个。<br>Classifications元素的Key不能为空，不能重复，长度不能超过50个字符，符合正则 <code>^[a-z]([a-z0-9_]{0,49})$</code>。<br>Classifications元素的Value长度不能超过200个字符。</p>
                     * 
                     */
                    void SetClassifications(const std::vector<AlarmClassification>& _classifications);

                    /**
                     * 判断参数 Classifications 是否已赋值
                     * @return Classifications 是否已赋值
                     * 
                     */
                    bool ClassificationsHasBeenSet() const;

                    /**
                     * 获取<p>关联的日志服务告警通知渠道组列表。-通过<a href="https://cloud.tencent.com/document/product/614/56462">获取通知渠道组列表</a>获取关联的告警通知渠道组列表，和MonitorNotice互斥</p>
                     * @return AlarmNoticeIds <p>关联的日志服务告警通知渠道组列表。-通过<a href="https://cloud.tencent.com/document/product/614/56462">获取通知渠道组列表</a>获取关联的告警通知渠道组列表，和MonitorNotice互斥</p>
                     * 
                     */
                    std::vector<std::string> GetAlarmNoticeIds() const;

                    /**
                     * 设置<p>关联的日志服务告警通知渠道组列表。-通过<a href="https://cloud.tencent.com/document/product/614/56462">获取通知渠道组列表</a>获取关联的告警通知渠道组列表，和MonitorNotice互斥</p>
                     * @param _alarmNoticeIds <p>关联的日志服务告警通知渠道组列表。-通过<a href="https://cloud.tencent.com/document/product/614/56462">获取通知渠道组列表</a>获取关联的告警通知渠道组列表，和MonitorNotice互斥</p>
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
                     * 获取<p>关联的可观测平台通知模板，与 AlarmNoticeIds 参数互斥，不能同时使用</p>
                     * @return MonitorNotice <p>关联的可观测平台通知模板，与 AlarmNoticeIds 参数互斥，不能同时使用</p>
                     * 
                     */
                    MonitorNotice GetMonitorNotice() const;

                    /**
                     * 设置<p>关联的可观测平台通知模板，与 AlarmNoticeIds 参数互斥，不能同时使用</p>
                     * @param _monitorNotice <p>关联的可观测平台通知模板，与 AlarmNoticeIds 参数互斥，不能同时使用</p>
                     * 
                     */
                    void SetMonitorNotice(const MonitorNotice& _monitorNotice);

                    /**
                     * 判断参数 MonitorNotice 是否已赋值
                     * @return MonitorNotice 是否已赋值
                     * 
                     */
                    bool MonitorNoticeHasBeenSet() const;

                private:

                    /**
                     * <p>告警策略ID。-通过<a href="https://cloud.tencent.com/document/product/614/56461">获取告警策略列表</a>获取告警策略ID</p>
                     */
                    std::string m_alarmId;
                    bool m_alarmIdHasBeenSet;

                    /**
                     * <p>告警策略名称。最大支持255个字节，不支持 &#39;|&#39;。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>监控任务运行时间点。</p>
                     */
                    MonitorTime m_monitorTime;
                    bool m_monitorTimeHasBeenSet;

                    /**
                     * <p>告警信息发送的触发条件。</p><p>注意:  </p><ul><li>Condition和AlarmLevel是一组配置，MultiConditions是另一组配置，2组配置互斥。</li></ul>
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * <p>告警级别。</p><p>0:警告(Warn);1:提醒(Info);2:紧急 (Critical)</p><p>注意:  </p><ul><li>Condition和AlarmLevel是一组配置，MultiConditions是另一组配置，2组配置互斥。</li></ul>
                     */
                    uint64_t m_alarmLevel;
                    bool m_alarmLevelHasBeenSet;

                    /**
                     * <p>多触发条件。 </p><p>注意:  </p><ul><li>Condition和AlarmLevel是一组配置，MultiConditions是另一组配置，2组配置互斥。</li></ul>
                     */
                    std::vector<MultiCondition> m_multiConditions;
                    bool m_multiConditionsHasBeenSet;

                    /**
                     * <p>持续周期。持续满足触发条件TriggerCount个周期后，再进行告警；最小值为1，最大值为2000。</p>
                     */
                    int64_t m_triggerCount;
                    bool m_triggerCountHasBeenSet;

                    /**
                     * <p>告警重复的周期。单位是分钟。取值范围是0~1440。</p>
                     */
                    int64_t m_alarmPeriod;
                    bool m_alarmPeriodHasBeenSet;

                    /**
                     * <p>监控对象列表。</p>
                     */
                    std::vector<AlarmTarget> m_alarmTargets;
                    bool m_alarmTargetsHasBeenSet;

                    /**
                     * <p>是否开启告警策略。</p>
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>该参数已废弃，请使用Status参数控制是否开启告警策略。</p>
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>用户自定义告警内容</p>
                     */
                    std::string m_messageTemplate;
                    bool m_messageTemplateHasBeenSet;

                    /**
                     * <p>用户自定义回调</p>
                     */
                    CallBackInfo m_callBack;
                    bool m_callBackHasBeenSet;

                    /**
                     * <p>多维分析</p>
                     */
                    std::vector<AnalysisDimensional> m_analysis;
                    bool m_analysisHasBeenSet;

                    /**
                     * <p>分组触发状态。true：开启，false：关闭（默认）</p>
                     */
                    bool m_groupTriggerStatus;
                    bool m_groupTriggerStatusHasBeenSet;

                    /**
                     * <p>分组触发条件。</p>
                     */
                    std::vector<std::string> m_groupTriggerCondition;
                    bool m_groupTriggerConditionHasBeenSet;

                    /**
                     * <p>标签描述列表，通过指定该参数可以同时绑定标签到相应的告警策略。最大支持10个标签键值对，并且不能有重复的键值对。</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>监控对象类型。0:执行语句共用监控对象; 1:每个执行语句单独选择监控对象。<br>当值为1时，AlarmTargets元素个数不能超过10个，AlarmTargets中的Number必须是从1开始的连续正整数，不能重复。</p>
                     */
                    uint64_t m_monitorObjectType;
                    bool m_monitorObjectTypeHasBeenSet;

                    /**
                     * <p>告警附加分类信息列表。<br>Classifications元素个数不能超过20个。<br>Classifications元素的Key不能为空，不能重复，长度不能超过50个字符，符合正则 <code>^[a-z]([a-z0-9_]{0,49})$</code>。<br>Classifications元素的Value长度不能超过200个字符。</p>
                     */
                    std::vector<AlarmClassification> m_classifications;
                    bool m_classificationsHasBeenSet;

                    /**
                     * <p>关联的日志服务告警通知渠道组列表。-通过<a href="https://cloud.tencent.com/document/product/614/56462">获取通知渠道组列表</a>获取关联的告警通知渠道组列表，和MonitorNotice互斥</p>
                     */
                    std::vector<std::string> m_alarmNoticeIds;
                    bool m_alarmNoticeIdsHasBeenSet;

                    /**
                     * <p>关联的可观测平台通知模板，与 AlarmNoticeIds 参数互斥，不能同时使用</p>
                     */
                    MonitorNotice m_monitorNotice;
                    bool m_monitorNoticeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYALARMREQUEST_H_
