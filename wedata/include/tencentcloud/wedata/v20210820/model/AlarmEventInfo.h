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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_ALARMEVENTINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_ALARMEVENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 告警事件详情
                */
                class AlarmEventInfo : public AbstractModel
                {
                public:
                    AlarmEventInfo();
                    ~AlarmEventInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警ID
                     * @return AlarmId 告警ID
                     * 
                     */
                    std::string GetAlarmId() const;

                    /**
                     * 设置告警ID
                     * @param _alarmId 告警ID
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
                     * 获取告警时间
                     * @return AlarmTime 告警时间
                     * 
                     */
                    std::string GetAlarmTime() const;

                    /**
                     * 设置告警时间
                     * @param _alarmTime 告警时间
                     * 
                     */
                    void SetAlarmTime(const std::string& _alarmTime);

                    /**
                     * 判断参数 AlarmTime 是否已赋值
                     * @return AlarmTime 是否已赋值
                     * 
                     */
                    bool AlarmTimeHasBeenSet() const;

                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param _taskId 任务ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取规则名称
                     * @return RegularName 规则名称
                     * 
                     */
                    std::string GetRegularName() const;

                    /**
                     * 设置规则名称
                     * @param _regularName 规则名称
                     * 
                     */
                    void SetRegularName(const std::string& _regularName);

                    /**
                     * 判断参数 RegularName 是否已赋值
                     * @return RegularName 是否已赋值
                     * 
                     */
                    bool RegularNameHasBeenSet() const;

                    /**
                     * 获取告警级别,0表示普通，1表示重要，2表示紧急
                     * @return AlarmLevel 告警级别,0表示普通，1表示重要，2表示紧急
                     * 
                     */
                    uint64_t GetAlarmLevel() const;

                    /**
                     * 设置告警级别,0表示普通，1表示重要，2表示紧急
                     * @param _alarmLevel 告警级别,0表示普通，1表示重要，2表示紧急
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
                     * 获取告警方式,多个用逗号隔开（1:邮件，2:短信，3:微信，4:语音，5:代表企业微信，6:http）
                     * @return AlarmWay 告警方式,多个用逗号隔开（1:邮件，2:短信，3:微信，4:语音，5:代表企业微信，6:http）
                     * 
                     */
                    uint64_t GetAlarmWay() const;

                    /**
                     * 设置告警方式,多个用逗号隔开（1:邮件，2:短信，3:微信，4:语音，5:代表企业微信，6:http）
                     * @param _alarmWay 告警方式,多个用逗号隔开（1:邮件，2:短信，3:微信，4:语音，5:代表企业微信，6:http）
                     * 
                     */
                    void SetAlarmWay(const uint64_t& _alarmWay);

                    /**
                     * 判断参数 AlarmWay 是否已赋值
                     * @return AlarmWay 是否已赋值
                     * 
                     */
                    bool AlarmWayHasBeenSet() const;

                    /**
                     * 获取告警接收人Id，多个用逗号隔开
                     * @return AlarmRecipientId 告警接收人Id，多个用逗号隔开
                     * 
                     */
                    std::string GetAlarmRecipientId() const;

                    /**
                     * 设置告警接收人Id，多个用逗号隔开
                     * @param _alarmRecipientId 告警接收人Id，多个用逗号隔开
                     * 
                     */
                    void SetAlarmRecipientId(const std::string& _alarmRecipientId);

                    /**
                     * 判断参数 AlarmRecipientId 是否已赋值
                     * @return AlarmRecipientId 是否已赋值
                     * 
                     */
                    bool AlarmRecipientIdHasBeenSet() const;

                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取告警指标,0表示任务失败，1表示任务运行超时，2表示任务停止，3表示任务暂停
                     * @return AlarmIndicator 告警指标,0表示任务失败，1表示任务运行超时，2表示任务停止，3表示任务暂停
                     * 
                     */
                    uint64_t GetAlarmIndicator() const;

                    /**
                     * 设置告警指标,0表示任务失败，1表示任务运行超时，2表示任务停止，3表示任务暂停
                     * @param _alarmIndicator 告警指标,0表示任务失败，1表示任务运行超时，2表示任务停止，3表示任务暂停
                     * 
                     */
                    void SetAlarmIndicator(const uint64_t& _alarmIndicator);

                    /**
                     * 判断参数 AlarmIndicator 是否已赋值
                     * @return AlarmIndicator 是否已赋值
                     * 
                     */
                    bool AlarmIndicatorHasBeenSet() const;

                    /**
                     * 获取告警指标描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmIndicatorDesc 告警指标描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlarmIndicatorDesc() const;

                    /**
                     * 设置告警指标描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarmIndicatorDesc 告警指标描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlarmIndicatorDesc(const std::string& _alarmIndicatorDesc);

                    /**
                     * 判断参数 AlarmIndicatorDesc 是否已赋值
                     * @return AlarmIndicatorDesc 是否已赋值
                     * 
                     */
                    bool AlarmIndicatorDescHasBeenSet() const;

                    /**
                     * 获取指标阈值，1表示离线任务第一次运行失败，2表示离线任务所有重试完成后失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerType 指标阈值，1表示离线任务第一次运行失败，2表示离线任务所有重试完成后失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTriggerType() const;

                    /**
                     * 设置指标阈值，1表示离线任务第一次运行失败，2表示离线任务所有重试完成后失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerType 指标阈值，1表示离线任务第一次运行失败，2表示离线任务所有重试完成后失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTriggerType(const uint64_t& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                    /**
                     * 获取预计的超时时间，分钟级别
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EstimatedTime 预计的超时时间，分钟级别
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetEstimatedTime() const;

                    /**
                     * 设置预计的超时时间，分钟级别
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _estimatedTime 预计的超时时间，分钟级别
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEstimatedTime(const uint64_t& _estimatedTime);

                    /**
                     * 判断参数 EstimatedTime 是否已赋值
                     * @return EstimatedTime 是否已赋值
                     * 
                     */
                    bool EstimatedTimeHasBeenSet() const;

                    /**
                     * 获取实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskName 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskName 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取0：部分成功，1：全部成功，2：全部失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsSendSuccess 0：部分成功，1：全部成功，2：全部失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetIsSendSuccess() const;

                    /**
                     * 设置0：部分成功，1：全部成功，2：全部失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isSendSuccess 0：部分成功，1：全部成功，2：全部失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsSendSuccess(const uint64_t& _isSendSuccess);

                    /**
                     * 判断参数 IsSendSuccess 是否已赋值
                     * @return IsSendSuccess 是否已赋值
                     * 
                     */
                    bool IsSendSuccessHasBeenSet() const;

                    /**
                     * 获取是否在免打扰时间内，0:否, 1:是
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InQuitePeriods 是否在免打扰时间内，0:否, 1:是
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetInQuitePeriods() const;

                    /**
                     * 设置是否在免打扰时间内，0:否, 1:是
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inQuitePeriods 是否在免打扰时间内，0:否, 1:是
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInQuitePeriods(const uint64_t& _inQuitePeriods);

                    /**
                     * 判断参数 InQuitePeriods 是否已赋值
                     * @return InQuitePeriods 是否已赋值
                     * 
                     */
                    bool InQuitePeriodsHasBeenSet() const;

                    /**
                     * 获取告警记录id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecordId 告警记录id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRecordId() const;

                    /**
                     * 设置告警记录id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recordId 告警记录id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRecordId(const uint64_t& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取消息ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MessageId 消息ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMessageId() const;

                    /**
                     * 设置消息ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _messageId 消息ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMessageId(const std::string& _messageId);

                    /**
                     * 判断参数 MessageId 是否已赋值
                     * @return MessageId 是否已赋值
                     * 
                     */
                    bool MessageIdHasBeenSet() const;

                    /**
                     * 获取阈值计算算子，1 : 大于 2 ：小于
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Operator 阈值计算算子，1 : 大于 2 ：小于
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOperator() const;

                    /**
                     * 设置阈值计算算子，1 : 大于 2 ：小于
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operator 阈值计算算子，1 : 大于 2 ：小于
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperator(const int64_t& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取告警规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegularId 告警规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegularId() const;

                    /**
                     * 设置告警规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _regularId 告警规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegularId(const std::string& _regularId);

                    /**
                     * 判断参数 RegularId 是否已赋值
                     * @return RegularId 是否已赋值
                     * 
                     */
                    bool RegularIdHasBeenSet() const;

                    /**
                     * 获取告警接收人昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmRecipientName 告警接收人昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlarmRecipientName() const;

                    /**
                     * 设置告警接收人昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarmRecipientName 告警接收人昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlarmRecipientName(const std::string& _alarmRecipientName);

                    /**
                     * 判断参数 AlarmRecipientName 是否已赋值
                     * @return AlarmRecipientName 是否已赋值
                     * 
                     */
                    bool AlarmRecipientNameHasBeenSet() const;

                    /**
                     * 获取告警任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskType 告警任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置告警任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskType 告警任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取发送结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SendResult 发送结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSendResult() const;

                    /**
                     * 设置发送结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sendResult 发送结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSendResult(const std::string& _sendResult);

                    /**
                     * 判断参数 SendResult 是否已赋值
                     * @return SendResult 是否已赋值
                     * 
                     */
                    bool SendResultHasBeenSet() const;

                    /**
                     * 获取监控对象id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MonitorObjectId 监控对象id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMonitorObjectId() const;

                    /**
                     * 设置监控对象id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _monitorObjectId 监控对象id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMonitorObjectId(const std::string& _monitorObjectId);

                    /**
                     * 判断参数 MonitorObjectId 是否已赋值
                     * @return MonitorObjectId 是否已赋值
                     * 
                     */
                    bool MonitorObjectIdHasBeenSet() const;

                    /**
                     * 获取监控对象名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MonitorObjectName 监控对象名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMonitorObjectName() const;

                    /**
                     * 设置监控对象名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _monitorObjectName 监控对象名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMonitorObjectName(const std::string& _monitorObjectName);

                    /**
                     * 判断参数 MonitorObjectName 是否已赋值
                     * @return MonitorObjectName 是否已赋值
                     * 
                     */
                    bool MonitorObjectNameHasBeenSet() const;

                    /**
                     * 获取指标阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Threshold 指标阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetThreshold() const;

                    /**
                     * 设置指标阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _threshold 指标阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetThreshold(const double& _threshold);

                    /**
                     * 判断参数 Threshold 是否已赋值
                     * @return Threshold 是否已赋值
                     * 
                     */
                    bool ThresholdHasBeenSet() const;

                    /**
                     * 获取告警原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmReason 告警原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlarmReason() const;

                    /**
                     * 设置告警原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarmReason 告警原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlarmReason(const std::string& _alarmReason);

                    /**
                     * 判断参数 AlarmReason 是否已赋值
                     * @return AlarmReason 是否已赋值
                     * 
                     */
                    bool AlarmReasonHasBeenSet() const;

                    /**
                     * 获取近范围值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndicatorTimeRangeValue 近范围值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIndicatorTimeRangeValue() const;

                    /**
                     * 设置近范围值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indicatorTimeRangeValue 近范围值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndicatorTimeRangeValue(const int64_t& _indicatorTimeRangeValue);

                    /**
                     * 判断参数 IndicatorTimeRangeValue 是否已赋值
                     * @return IndicatorTimeRangeValue 是否已赋值
                     * 
                     */
                    bool IndicatorTimeRangeValueHasBeenSet() const;

                    /**
                     * 获取近范围单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndicatorTimeRangeUnit 近范围单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndicatorTimeRangeUnit() const;

                    /**
                     * 设置近范围单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indicatorTimeRangeUnit 近范围单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndicatorTimeRangeUnit(const std::string& _indicatorTimeRangeUnit);

                    /**
                     * 判断参数 IndicatorTimeRangeUnit 是否已赋值
                     * @return IndicatorTimeRangeUnit 是否已赋值
                     * 
                     */
                    bool IndicatorTimeRangeUnitHasBeenSet() const;

                    /**
                     * 获取同步类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SyncType 同步类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSyncType() const;

                    /**
                     * 设置同步类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _syncType 同步类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSyncType(const int64_t& _syncType);

                    /**
                     * 判断参数 SyncType 是否已赋值
                     * @return SyncType 是否已赋值
                     * 
                     */
                    bool SyncTypeHasBeenSet() const;

                private:

                    /**
                     * 告警ID
                     */
                    std::string m_alarmId;
                    bool m_alarmIdHasBeenSet;

                    /**
                     * 告警时间
                     */
                    std::string m_alarmTime;
                    bool m_alarmTimeHasBeenSet;

                    /**
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_regularName;
                    bool m_regularNameHasBeenSet;

                    /**
                     * 告警级别,0表示普通，1表示重要，2表示紧急
                     */
                    uint64_t m_alarmLevel;
                    bool m_alarmLevelHasBeenSet;

                    /**
                     * 告警方式,多个用逗号隔开（1:邮件，2:短信，3:微信，4:语音，5:代表企业微信，6:http）
                     */
                    uint64_t m_alarmWay;
                    bool m_alarmWayHasBeenSet;

                    /**
                     * 告警接收人Id，多个用逗号隔开
                     */
                    std::string m_alarmRecipientId;
                    bool m_alarmRecipientIdHasBeenSet;

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 告警指标,0表示任务失败，1表示任务运行超时，2表示任务停止，3表示任务暂停
                     */
                    uint64_t m_alarmIndicator;
                    bool m_alarmIndicatorHasBeenSet;

                    /**
                     * 告警指标描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alarmIndicatorDesc;
                    bool m_alarmIndicatorDescHasBeenSet;

                    /**
                     * 指标阈值，1表示离线任务第一次运行失败，2表示离线任务所有重试完成后失败
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * 预计的超时时间，分钟级别
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_estimatedTime;
                    bool m_estimatedTimeHasBeenSet;

                    /**
                     * 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 0：部分成功，1：全部成功，2：全部失败
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_isSendSuccess;
                    bool m_isSendSuccessHasBeenSet;

                    /**
                     * 是否在免打扰时间内，0:否, 1:是
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_inQuitePeriods;
                    bool m_inQuitePeriodsHasBeenSet;

                    /**
                     * 告警记录id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * 消息ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_messageId;
                    bool m_messageIdHasBeenSet;

                    /**
                     * 阈值计算算子，1 : 大于 2 ：小于
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 告警规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_regularId;
                    bool m_regularIdHasBeenSet;

                    /**
                     * 告警接收人昵称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alarmRecipientName;
                    bool m_alarmRecipientNameHasBeenSet;

                    /**
                     * 告警任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 发送结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sendResult;
                    bool m_sendResultHasBeenSet;

                    /**
                     * 监控对象id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_monitorObjectId;
                    bool m_monitorObjectIdHasBeenSet;

                    /**
                     * 监控对象名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_monitorObjectName;
                    bool m_monitorObjectNameHasBeenSet;

                    /**
                     * 指标阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_threshold;
                    bool m_thresholdHasBeenSet;

                    /**
                     * 告警原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alarmReason;
                    bool m_alarmReasonHasBeenSet;

                    /**
                     * 近范围值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_indicatorTimeRangeValue;
                    bool m_indicatorTimeRangeValueHasBeenSet;

                    /**
                     * 近范围单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indicatorTimeRangeUnit;
                    bool m_indicatorTimeRangeUnitHasBeenSet;

                    /**
                     * 同步类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_syncType;
                    bool m_syncTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_ALARMEVENTINFO_H_
