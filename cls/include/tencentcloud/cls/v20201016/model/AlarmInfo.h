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
                     * 获取告警策略名称。
                     * @return Name 告警策略名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置告警策略名称。
                     * @param _name 告警策略名称。
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
                    std::vector<AlarmTargetInfo> GetAlarmTargets() const;

                    /**
                     * 设置监控对象列表。
                     * @param _alarmTargets 监控对象列表。
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
                     * 获取单触发条件。与MultiConditions参数互斥。
                     * @return Condition 单触发条件。与MultiConditions参数互斥。
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置单触发条件。与MultiConditions参数互斥。
                     * @param _condition 单触发条件。与MultiConditions参数互斥。
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
                     * 获取持续周期。持续满足触发条件TriggerCount个周期后，再进行告警；最小值为1，最大值为10。
                     * @return TriggerCount 持续周期。持续满足触发条件TriggerCount个周期后，再进行告警；最小值为1，最大值为10。
                     * 
                     */
                    int64_t GetTriggerCount() const;

                    /**
                     * 设置持续周期。持续满足触发条件TriggerCount个周期后，再进行告警；最小值为1，最大值为10。
                     * @param _triggerCount 持续周期。持续满足触发条件TriggerCount个周期后，再进行告警；最小值为1，最大值为10。
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
                     * 获取告警重复的周期。单位是min。取值范围是0~1440。
                     * @return AlarmPeriod 告警重复的周期。单位是min。取值范围是0~1440。
                     * 
                     */
                    int64_t GetAlarmPeriod() const;

                    /**
                     * 设置告警重复的周期。单位是min。取值范围是0~1440。
                     * @param _alarmPeriod 告警重复的周期。单位是min。取值范围是0~1440。
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
                     * 获取开启状态。
                     * @return Status 开启状态。
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置开启状态。
                     * @param _status 开启状态。
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
                     * 获取告警策略ID。
                     * @return AlarmId 告警策略ID。
                     * 
                     */
                    std::string GetAlarmId() const;

                    /**
                     * 设置告警策略ID。
                     * @param _alarmId 告警策略ID。
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
                     * 获取创建时间。
                     * @return CreateTime 创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createTime 创建时间。
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
                     * 获取最近更新时间。
                     * @return UpdateTime 最近更新时间。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置最近更新时间。
                     * @param _updateTime 最近更新时间。
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
                     * 获取自定义通知模板
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MessageTemplate 自定义通知模板
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMessageTemplate() const;

                    /**
                     * 设置自定义通知模板
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _messageTemplate 自定义通知模板
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
                     * 获取自定义回调模板
                     * @return CallBack 自定义回调模板
                     * 
                     */
                    CallBackInfo GetCallBack() const;

                    /**
                     * 设置自定义回调模板
                     * @param _callBack 自定义回调模板
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
                     * 获取多维分析设置
                     * @return Analysis 多维分析设置
                     * 
                     */
                    std::vector<AnalysisDimensional> GetAnalysis() const;

                    /**
                     * 设置多维分析设置
                     * @param _analysis 多维分析设置
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
                     * 获取分组触发状态。true：开启，false：关闭（默认）
                     * @return GroupTriggerStatus 分组触发状态。true：开启，false：关闭（默认）
                     * 
                     */
                    bool GetGroupTriggerStatus() const;

                    /**
                     * 设置分组触发状态。true：开启，false：关闭（默认）
                     * @param _groupTriggerStatus 分组触发状态。true：开启，false：关闭（默认）
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
                     * 获取告警策略绑定的标签信息。
                     * @return Tags 告警策略绑定的标签信息。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置告警策略绑定的标签信息。
                     * @param _tags 告警策略绑定的标签信息。
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
                     * 获取监控对象类型。0:执行语句共用监控对象;1:每个执行语句单独选择监控对象。 
                     * @return MonitorObjectType 监控对象类型。0:执行语句共用监控对象;1:每个执行语句单独选择监控对象。 
                     * 
                     */
                    uint64_t GetMonitorObjectType() const;

                    /**
                     * 设置监控对象类型。0:执行语句共用监控对象;1:每个执行语句单独选择监控对象。 
                     * @param _monitorObjectType 监控对象类型。0:执行语句共用监控对象;1:每个执行语句单独选择监控对象。 
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
                     * 获取告警级别。0:警告(Warn);1:提醒(Info);2:紧急 (Critical)。
                     * @return AlarmLevel 告警级别。0:警告(Warn);1:提醒(Info);2:紧急 (Critical)。
                     * 
                     */
                    uint64_t GetAlarmLevel() const;

                    /**
                     * 设置告警级别。0:警告(Warn);1:提醒(Info);2:紧急 (Critical)。
                     * @param _alarmLevel 告警级别。0:警告(Warn);1:提醒(Info);2:紧急 (Critical)。
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
                     * 获取告警附加分类字段。
                     * @return Classifications 告警附加分类字段。
                     * 
                     */
                    std::vector<AlarmClassification> GetClassifications() const;

                    /**
                     * 设置告警附加分类字段。
                     * @param _classifications 告警附加分类字段。
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
                     * 获取多触发条件。与
Condition互斥。
                     * @return MultiConditions 多触发条件。与
Condition互斥。
                     * 
                     */
                    std::vector<MultiCondition> GetMultiConditions() const;

                    /**
                     * 设置多触发条件。与
Condition互斥。
                     * @param _multiConditions 多触发条件。与
Condition互斥。
                     * 
                     */
                    void SetMultiConditions(const std::vector<MultiCondition>& _multiConditions);

                    /**
                     * 判断参数 MultiConditions 是否已赋值
                     * @return MultiConditions 是否已赋值
                     * 
                     */
                    bool MultiConditionsHasBeenSet() const;

                private:

                    /**
                     * 告警策略名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 监控对象列表。
                     */
                    std::vector<AlarmTargetInfo> m_alarmTargets;
                    bool m_alarmTargetsHasBeenSet;

                    /**
                     * 监控任务运行时间点。
                     */
                    MonitorTime m_monitorTime;
                    bool m_monitorTimeHasBeenSet;

                    /**
                     * 单触发条件。与MultiConditions参数互斥。
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * 持续周期。持续满足触发条件TriggerCount个周期后，再进行告警；最小值为1，最大值为10。
                     */
                    int64_t m_triggerCount;
                    bool m_triggerCountHasBeenSet;

                    /**
                     * 告警重复的周期。单位是min。取值范围是0~1440。
                     */
                    int64_t m_alarmPeriod;
                    bool m_alarmPeriodHasBeenSet;

                    /**
                     * 关联的告警通知模板列表。
                     */
                    std::vector<std::string> m_alarmNoticeIds;
                    bool m_alarmNoticeIdsHasBeenSet;

                    /**
                     * 开启状态。
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 告警策略ID。
                     */
                    std::string m_alarmId;
                    bool m_alarmIdHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 最近更新时间。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 自定义通知模板
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_messageTemplate;
                    bool m_messageTemplateHasBeenSet;

                    /**
                     * 自定义回调模板
                     */
                    CallBackInfo m_callBack;
                    bool m_callBackHasBeenSet;

                    /**
                     * 多维分析设置
                     */
                    std::vector<AnalysisDimensional> m_analysis;
                    bool m_analysisHasBeenSet;

                    /**
                     * 分组触发状态。true：开启，false：关闭（默认）
                     */
                    bool m_groupTriggerStatus;
                    bool m_groupTriggerStatusHasBeenSet;

                    /**
                     * 分组触发条件。
                     */
                    std::vector<std::string> m_groupTriggerCondition;
                    bool m_groupTriggerConditionHasBeenSet;

                    /**
                     * 告警策略绑定的标签信息。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 监控对象类型。0:执行语句共用监控对象;1:每个执行语句单独选择监控对象。 
                     */
                    uint64_t m_monitorObjectType;
                    bool m_monitorObjectTypeHasBeenSet;

                    /**
                     * 告警级别。0:警告(Warn);1:提醒(Info);2:紧急 (Critical)。
                     */
                    uint64_t m_alarmLevel;
                    bool m_alarmLevelHasBeenSet;

                    /**
                     * 告警附加分类字段。
                     */
                    std::vector<AlarmClassification> m_classifications;
                    bool m_classificationsHasBeenSet;

                    /**
                     * 多触发条件。与
Condition互斥。
                     */
                    std::vector<MultiCondition> m_multiConditions;
                    bool m_multiConditionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ALARMINFO_H_
