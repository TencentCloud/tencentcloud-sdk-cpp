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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_ALERTHISTORYRECORD_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_ALERTHISTORYRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/AlertHistoryNotice.h>
#include <tencentcloud/cls/v20201016/model/GroupTriggerConditionInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 告警历史详情
                */
                class AlertHistoryRecord : public AbstractModel
                {
                public:
                    AlertHistoryRecord();
                    ~AlertHistoryRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警历史ID
                     * @return RecordId 告警历史ID
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置告警历史ID
                     * @param _recordId 告警历史ID
                     * 
                     */
                    void SetRecordId(const std::string& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取告警策略ID
                     * @return AlarmId 告警策略ID
                     * 
                     */
                    std::string GetAlarmId() const;

                    /**
                     * 设置告警策略ID
                     * @param _alarmId 告警策略ID
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
                     * 获取告警策略名称
                     * @return AlarmName 告警策略名称
                     * 
                     */
                    std::string GetAlarmName() const;

                    /**
                     * 设置告警策略名称
                     * @param _alarmName 告警策略名称
                     * 
                     */
                    void SetAlarmName(const std::string& _alarmName);

                    /**
                     * 判断参数 AlarmName 是否已赋值
                     * @return AlarmName 是否已赋值
                     * 
                     */
                    bool AlarmNameHasBeenSet() const;

                    /**
                     * 获取监控对象ID
                     * @return TopicId 监控对象ID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置监控对象ID
                     * @param _topicId 监控对象ID
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取监控对象名称
                     * @return TopicName 监控对象名称
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置监控对象名称
                     * @param _topicName 监控对象名称
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取监控对象所属地域
                     * @return Region 监控对象所属地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置监控对象所属地域
                     * @param _region 监控对象所属地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取触发条件
                     * @return Trigger 触发条件
                     * 
                     */
                    std::string GetTrigger() const;

                    /**
                     * 设置触发条件
                     * @param _trigger 触发条件
                     * 
                     */
                    void SetTrigger(const std::string& _trigger);

                    /**
                     * 判断参数 Trigger 是否已赋值
                     * @return Trigger 是否已赋值
                     * 
                     */
                    bool TriggerHasBeenSet() const;

                    /**
                     * 获取持续周期，持续满足触发条件TriggerCount个周期后，再进行告警
                     * @return TriggerCount 持续周期，持续满足触发条件TriggerCount个周期后，再进行告警
                     * 
                     */
                    int64_t GetTriggerCount() const;

                    /**
                     * 设置持续周期，持续满足触发条件TriggerCount个周期后，再进行告警
                     * @param _triggerCount 持续周期，持续满足触发条件TriggerCount个周期后，再进行告警
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
                     * 获取告警通知发送频率，单位为分钟
                     * @return AlarmPeriod 告警通知发送频率，单位为分钟
                     * 
                     */
                    int64_t GetAlarmPeriod() const;

                    /**
                     * 设置告警通知发送频率，单位为分钟
                     * @param _alarmPeriod 告警通知发送频率，单位为分钟
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
                     * 获取通知渠道组
                     * @return Notices 通知渠道组
                     * 
                     */
                    std::vector<AlertHistoryNotice> GetNotices() const;

                    /**
                     * 设置通知渠道组
                     * @param _notices 通知渠道组
                     * 
                     */
                    void SetNotices(const std::vector<AlertHistoryNotice>& _notices);

                    /**
                     * 判断参数 Notices 是否已赋值
                     * @return Notices 是否已赋值
                     * 
                     */
                    bool NoticesHasBeenSet() const;

                    /**
                     * 获取告警持续时间，单位为分钟
                     * @return Duration 告警持续时间，单位为分钟
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置告警持续时间，单位为分钟
                     * @param _duration 告警持续时间，单位为分钟
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取告警状态，0代表未恢复，1代表已恢复，2代表已失效
                     * @return Status 告警状态，0代表未恢复，1代表已恢复，2代表已失效
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置告警状态，0代表未恢复，1代表已恢复，2代表已失效
                     * @param _status 告警状态，0代表未恢复，1代表已恢复，2代表已失效
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取告警发生时间，毫秒级Unix时间戳
                     * @return CreateTime 告警发生时间，毫秒级Unix时间戳
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置告警发生时间，毫秒级Unix时间戳
                     * @param _createTime 告警发生时间，毫秒级Unix时间戳
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取告警分组触发时对应的分组信息
                     * @return GroupTriggerCondition 告警分组触发时对应的分组信息
                     * 
                     */
                    std::vector<GroupTriggerConditionInfo> GetGroupTriggerCondition() const;

                    /**
                     * 设置告警分组触发时对应的分组信息
                     * @param _groupTriggerCondition 告警分组触发时对应的分组信息
                     * 
                     */
                    void SetGroupTriggerCondition(const std::vector<GroupTriggerConditionInfo>& _groupTriggerCondition);

                    /**
                     * 判断参数 GroupTriggerCondition 是否已赋值
                     * @return GroupTriggerCondition 是否已赋值
                     * 
                     */
                    bool GroupTriggerConditionHasBeenSet() const;

                    /**
                     * 获取告警级别，0代表警告(Warn)，1代表提醒(Info)，2代表紧急 (Critical)
                     * @return AlarmLevel 告警级别，0代表警告(Warn)，1代表提醒(Info)，2代表紧急 (Critical)
                     * 
                     */
                    uint64_t GetAlarmLevel() const;

                    /**
                     * 设置告警级别，0代表警告(Warn)，1代表提醒(Info)，2代表紧急 (Critical)
                     * @param _alarmLevel 告警级别，0代表警告(Warn)，1代表提醒(Info)，2代表紧急 (Critical)
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
                     * 获取监控对象类型。
0:执行语句共用监控对象; 1:每个执行语句单独选择监控对象。 
                     * @return MonitorObjectType 监控对象类型。
0:执行语句共用监控对象; 1:每个执行语句单独选择监控对象。 
                     * 
                     */
                    uint64_t GetMonitorObjectType() const;

                    /**
                     * 设置监控对象类型。
0:执行语句共用监控对象; 1:每个执行语句单独选择监控对象。 
                     * @param _monitorObjectType 监控对象类型。
0:执行语句共用监控对象; 1:每个执行语句单独选择监控对象。 
                     * 
                     */
                    void SetMonitorObjectType(const uint64_t& _monitorObjectType);

                    /**
                     * 判断参数 MonitorObjectType 是否已赋值
                     * @return MonitorObjectType 是否已赋值
                     * 
                     */
                    bool MonitorObjectTypeHasBeenSet() const;

                private:

                    /**
                     * 告警历史ID
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * 告警策略ID
                     */
                    std::string m_alarmId;
                    bool m_alarmIdHasBeenSet;

                    /**
                     * 告警策略名称
                     */
                    std::string m_alarmName;
                    bool m_alarmNameHasBeenSet;

                    /**
                     * 监控对象ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 监控对象名称
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 监控对象所属地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 触发条件
                     */
                    std::string m_trigger;
                    bool m_triggerHasBeenSet;

                    /**
                     * 持续周期，持续满足触发条件TriggerCount个周期后，再进行告警
                     */
                    int64_t m_triggerCount;
                    bool m_triggerCountHasBeenSet;

                    /**
                     * 告警通知发送频率，单位为分钟
                     */
                    int64_t m_alarmPeriod;
                    bool m_alarmPeriodHasBeenSet;

                    /**
                     * 通知渠道组
                     */
                    std::vector<AlertHistoryNotice> m_notices;
                    bool m_noticesHasBeenSet;

                    /**
                     * 告警持续时间，单位为分钟
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 告警状态，0代表未恢复，1代表已恢复，2代表已失效
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 告警发生时间，毫秒级Unix时间戳
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 告警分组触发时对应的分组信息
                     */
                    std::vector<GroupTriggerConditionInfo> m_groupTriggerCondition;
                    bool m_groupTriggerConditionHasBeenSet;

                    /**
                     * 告警级别，0代表警告(Warn)，1代表提醒(Info)，2代表紧急 (Critical)
                     */
                    uint64_t m_alarmLevel;
                    bool m_alarmLevelHasBeenSet;

                    /**
                     * 监控对象类型。
0:执行语句共用监控对象; 1:每个执行语句单独选择监控对象。 
                     */
                    uint64_t m_monitorObjectType;
                    bool m_monitorObjectTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ALERTHISTORYRECORD_H_
