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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_ALARMINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_ALARMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/AlarmTargetInfo.h>
#include <tencentcloud/cls/v20201016/model/MonitorTime.h>
#include <tencentcloud/cls/v20201016/model/CallBackInfo.h>
#include <tencentcloud/cls/v20201016/model/AnalysisDimensional.h>
#include <tencentcloud/cls/v20201016/model/Tag.h>
#include <tencentcloud/cls/v20201016/model/AlarmClassification.h>
#include <tencentcloud/cls/v20201016/model/MultiCondition.h>
#include <tencentcloud/cls/v20201016/model/MonitorNotice.h>
#include <tencentcloud/cls/v20201016/model/AIAnalysis.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 告警策略描述
                */
                class AlarmInfo : public AbstractModel
                {
                public:
                    AlarmInfo();
                    ~AlarmInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>告警策略名称。</p>
                     * @return Name <p>告警策略名称。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>告警策略名称。</p>
                     * @param _name <p>告警策略名称。</p>
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
                     * 获取<p>监控对象列表。</p>
                     * @return AlarmTargets <p>监控对象列表。</p>
                     * 
                     */
                    std::vector<AlarmTargetInfo> GetAlarmTargets() const;

                    /**
                     * 设置<p>监控对象列表。</p>
                     * @param _alarmTargets <p>监控对象列表。</p>
                     * 
                     */
                    void SetAlarmTargets(const std::vector<AlarmTargetInfo>& _alarmTargets);

                    /**
                     * 判断参数 AlarmTargets 是否已赋值
                     * @return AlarmTargets 是否已赋值
                     * 
                     */
                    bool AlarmTargetsHasBeenSet() const;

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
                     * 获取<p>是否触发告警的单触发条件。与MultiConditions参数互斥。</p>
                     * @return Condition <p>是否触发告警的单触发条件。与MultiConditions参数互斥。</p>
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置<p>是否触发告警的单触发条件。与MultiConditions参数互斥。</p>
                     * @param _condition <p>是否触发告警的单触发条件。与MultiConditions参数互斥。</p>
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
                     * 获取<p>持续周期。持续满足触发条件TriggerCount个周期后，再进行告警；最小值为1，最大值为10。</p>
                     * @return TriggerCount <p>持续周期。持续满足触发条件TriggerCount个周期后，再进行告警；最小值为1，最大值为10。</p>
                     * 
                     */
                    int64_t GetTriggerCount() const;

                    /**
                     * 设置<p>持续周期。持续满足触发条件TriggerCount个周期后，再进行告警；最小值为1，最大值为10。</p>
                     * @param _triggerCount <p>持续周期。持续满足触发条件TriggerCount个周期后，再进行告警；最小值为1，最大值为10。</p>
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
                     * 获取<p>告警重复的周期。单位是min。取值范围是0~1440。</p>
                     * @return AlarmPeriod <p>告警重复的周期。单位是min。取值范围是0~1440。</p>
                     * 
                     */
                    int64_t GetAlarmPeriod() const;

                    /**
                     * 设置<p>告警重复的周期。单位是min。取值范围是0~1440。</p>
                     * @param _alarmPeriod <p>告警重复的周期。单位是min。取值范围是0~1440。</p>
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
                     * 获取<p>关联的告警通知渠道组列表。-通过<a href="https://cloud.tencent.com/document/product/614/56462">获取通知渠道组列表</a>获取关联的告警通知渠道组列表，和MonitorNotice互斥</p>
                     * @return AlarmNoticeIds <p>关联的告警通知渠道组列表。-通过<a href="https://cloud.tencent.com/document/product/614/56462">获取通知渠道组列表</a>获取关联的告警通知渠道组列表，和MonitorNotice互斥</p>
                     * 
                     */
                    std::vector<std::string> GetAlarmNoticeIds() const;

                    /**
                     * 设置<p>关联的告警通知渠道组列表。-通过<a href="https://cloud.tencent.com/document/product/614/56462">获取通知渠道组列表</a>获取关联的告警通知渠道组列表，和MonitorNotice互斥</p>
                     * @param _alarmNoticeIds <p>关联的告警通知渠道组列表。-通过<a href="https://cloud.tencent.com/document/product/614/56462">获取通知渠道组列表</a>获取关联的告警通知渠道组列表，和MonitorNotice互斥</p>
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
                     * 获取<p>开启状态。</p>
                     * @return Status <p>开启状态。</p>
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置<p>开启状态。</p>
                     * @param _status <p>开启状态。</p>
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
                     * 获取<p>告警策略ID。</p>
                     * @return AlarmId <p>告警策略ID。</p>
                     * 
                     */
                    std::string GetAlarmId() const;

                    /**
                     * 设置<p>告警策略ID。</p>
                     * @param _alarmId <p>告警策略ID。</p>
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
                     * 获取<p>创建时间。格式： YYYY-MM-DD HH:MM:SS</p>
                     * @return CreateTime <p>创建时间。格式： YYYY-MM-DD HH:MM:SS</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间。格式： YYYY-MM-DD HH:MM:SS</p>
                     * @param _createTime <p>创建时间。格式： YYYY-MM-DD HH:MM:SS</p>
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
                     * 获取<p>最近更新时间。格式： YYYY-MM-DD HH:MM:SS</p>
                     * @return UpdateTime <p>最近更新时间。格式： YYYY-MM-DD HH:MM:SS</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>最近更新时间。格式： YYYY-MM-DD HH:MM:SS</p>
                     * @param _updateTime <p>最近更新时间。格式： YYYY-MM-DD HH:MM:SS</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>自定义通知模板</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MessageTemplate <p>自定义通知模板</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMessageTemplate() const;

                    /**
                     * 设置<p>自定义通知模板</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _messageTemplate <p>自定义通知模板</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>自定义回调模板</p>
                     * @return CallBack <p>自定义回调模板</p>
                     * 
                     */
                    CallBackInfo GetCallBack() const;

                    /**
                     * 设置<p>自定义回调模板</p>
                     * @param _callBack <p>自定义回调模板</p>
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
                     * 获取<p>多维分析设置</p>
                     * @return Analysis <p>多维分析设置</p>
                     * 
                     */
                    std::vector<AnalysisDimensional> GetAnalysis() const;

                    /**
                     * 设置<p>多维分析设置</p>
                     * @param _analysis <p>多维分析设置</p>
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
                     * 获取<p>告警策略绑定的标签信息。</p>
                     * @return Tags <p>告警策略绑定的标签信息。</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>告警策略绑定的标签信息。</p>
                     * @param _tags <p>告警策略绑定的标签信息。</p>
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
                     * 获取<p>监控对象类型。0:执行语句共用监控对象;1:每个执行语句单独选择监控对象。</p>
                     * @return MonitorObjectType <p>监控对象类型。0:执行语句共用监控对象;1:每个执行语句单独选择监控对象。</p>
                     * 
                     */
                    uint64_t GetMonitorObjectType() const;

                    /**
                     * 设置<p>监控对象类型。0:执行语句共用监控对象;1:每个执行语句单独选择监控对象。</p>
                     * @param _monitorObjectType <p>监控对象类型。0:执行语句共用监控对象;1:每个执行语句单独选择监控对象。</p>
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
                     * 获取<p>告警级别。0:警告(Warn);1:提醒(Info);2:紧急 (Critical)。</p>
                     * @return AlarmLevel <p>告警级别。0:警告(Warn);1:提醒(Info);2:紧急 (Critical)。</p>
                     * 
                     */
                    uint64_t GetAlarmLevel() const;

                    /**
                     * 设置<p>告警级别。0:警告(Warn);1:提醒(Info);2:紧急 (Critical)。</p>
                     * @param _alarmLevel <p>告警级别。0:警告(Warn);1:提醒(Info);2:紧急 (Critical)。</p>
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
                     * 获取<p>告警附加分类字段。</p>
                     * @return Classifications <p>告警附加分类字段。</p>
                     * 
                     */
                    std::vector<AlarmClassification> GetClassifications() const;

                    /**
                     * 设置<p>告警附加分类字段。</p>
                     * @param _classifications <p>告警附加分类字段。</p>
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
                     * 获取<p>多触发条件。与<br>Condition互斥。</p>
                     * @return MultiConditions <p>多触发条件。与<br>Condition互斥。</p>
                     * 
                     */
                    std::vector<MultiCondition> GetMultiConditions() const;

                    /**
                     * 设置<p>多触发条件。与<br>Condition互斥。</p>
                     * @param _multiConditions <p>多触发条件。与<br>Condition互斥。</p>
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
                     * 获取<p>腾讯云可观测平台通知渠道相关信息，和AlarmNoticeIds互斥</p>
                     * @return MonitorNotice <p>腾讯云可观测平台通知渠道相关信息，和AlarmNoticeIds互斥</p>
                     * 
                     */
                    MonitorNotice GetMonitorNotice() const;

                    /**
                     * 设置<p>腾讯云可观测平台通知渠道相关信息，和AlarmNoticeIds互斥</p>
                     * @param _monitorNotice <p>腾讯云可观测平台通知渠道相关信息，和AlarmNoticeIds互斥</p>
                     * 
                     */
                    void SetMonitorNotice(const MonitorNotice& _monitorNotice);

                    /**
                     * 判断参数 MonitorNotice 是否已赋值
                     * @return MonitorNotice 是否已赋值
                     * 
                     */
                    bool MonitorNoticeHasBeenSet() const;

                    /**
                     * 获取<p>AI分析内容</p>
                     * @return AIAnalysis <p>AI分析内容</p>
                     * 
                     */
                    AIAnalysis GetAIAnalysis() const;

                    /**
                     * 设置<p>AI分析内容</p>
                     * @param _aIAnalysis <p>AI分析内容</p>
                     * 
                     */
                    void SetAIAnalysis(const AIAnalysis& _aIAnalysis);

                    /**
                     * 判断参数 AIAnalysis 是否已赋值
                     * @return AIAnalysis 是否已赋值
                     * 
                     */
                    bool AIAnalysisHasBeenSet() const;

                    /**
                     * 获取<p>最后修改人的uin信息</p>
                     * @return SubUin <p>最后修改人的uin信息</p>
                     * 
                     */
                    uint64_t GetSubUin() const;

                    /**
                     * 设置<p>最后修改人的uin信息</p>
                     * @param _subUin <p>最后修改人的uin信息</p>
                     * 
                     */
                    void SetSubUin(const uint64_t& _subUin);

                    /**
                     * 判断参数 SubUin 是否已赋值
                     * @return SubUin 是否已赋值
                     * 
                     */
                    bool SubUinHasBeenSet() const;

                private:

                    /**
                     * <p>告警策略名称。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>监控对象列表。</p>
                     */
                    std::vector<AlarmTargetInfo> m_alarmTargets;
                    bool m_alarmTargetsHasBeenSet;

                    /**
                     * <p>监控任务运行时间点。</p>
                     */
                    MonitorTime m_monitorTime;
                    bool m_monitorTimeHasBeenSet;

                    /**
                     * <p>是否触发告警的单触发条件。与MultiConditions参数互斥。</p>
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * <p>持续周期。持续满足触发条件TriggerCount个周期后，再进行告警；最小值为1，最大值为10。</p>
                     */
                    int64_t m_triggerCount;
                    bool m_triggerCountHasBeenSet;

                    /**
                     * <p>告警重复的周期。单位是min。取值范围是0~1440。</p>
                     */
                    int64_t m_alarmPeriod;
                    bool m_alarmPeriodHasBeenSet;

                    /**
                     * <p>关联的告警通知渠道组列表。-通过<a href="https://cloud.tencent.com/document/product/614/56462">获取通知渠道组列表</a>获取关联的告警通知渠道组列表，和MonitorNotice互斥</p>
                     */
                    std::vector<std::string> m_alarmNoticeIds;
                    bool m_alarmNoticeIdsHasBeenSet;

                    /**
                     * <p>开启状态。</p>
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>告警策略ID。</p>
                     */
                    std::string m_alarmId;
                    bool m_alarmIdHasBeenSet;

                    /**
                     * <p>创建时间。格式： YYYY-MM-DD HH:MM:SS</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>最近更新时间。格式： YYYY-MM-DD HH:MM:SS</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>自定义通知模板</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_messageTemplate;
                    bool m_messageTemplateHasBeenSet;

                    /**
                     * <p>自定义回调模板</p>
                     */
                    CallBackInfo m_callBack;
                    bool m_callBackHasBeenSet;

                    /**
                     * <p>多维分析设置</p>
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
                     * <p>告警策略绑定的标签信息。</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>监控对象类型。0:执行语句共用监控对象;1:每个执行语句单独选择监控对象。</p>
                     */
                    uint64_t m_monitorObjectType;
                    bool m_monitorObjectTypeHasBeenSet;

                    /**
                     * <p>告警级别。0:警告(Warn);1:提醒(Info);2:紧急 (Critical)。</p>
                     */
                    uint64_t m_alarmLevel;
                    bool m_alarmLevelHasBeenSet;

                    /**
                     * <p>告警附加分类字段。</p>
                     */
                    std::vector<AlarmClassification> m_classifications;
                    bool m_classificationsHasBeenSet;

                    /**
                     * <p>多触发条件。与<br>Condition互斥。</p>
                     */
                    std::vector<MultiCondition> m_multiConditions;
                    bool m_multiConditionsHasBeenSet;

                    /**
                     * <p>腾讯云可观测平台通知渠道相关信息，和AlarmNoticeIds互斥</p>
                     */
                    MonitorNotice m_monitorNotice;
                    bool m_monitorNoticeHasBeenSet;

                    /**
                     * <p>AI分析内容</p>
                     */
                    AIAnalysis m_aIAnalysis;
                    bool m_aIAnalysisHasBeenSet;

                    /**
                     * <p>最后修改人的uin信息</p>
                     */
                    uint64_t m_subUin;
                    bool m_subUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ALARMINFO_H_
