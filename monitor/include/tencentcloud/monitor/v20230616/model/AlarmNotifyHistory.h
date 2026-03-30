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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_ALARMNOTIFYHISTORY_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_ALARMNOTIFYHISTORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20230616/model/ChannelsReceivers.h>
#include <tencentcloud/monitor/v20230616/model/NotifyRelatedNotice.h>
#include <tencentcloud/monitor/v20230616/model/AlarmLable.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * 单个告警通知历史
                */
                class AlarmNotifyHistory : public AbstractModel
                {
                public:
                    AlarmNotifyHistory();
                    ~AlarmNotifyHistory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取通知的唯一ID
                     * @return NotifyId 通知的唯一ID
                     * 
                     */
                    std::string GetNotifyId() const;

                    /**
                     * 设置通知的唯一ID
                     * @param _notifyId 通知的唯一ID
                     * 
                     */
                    void SetNotifyId(const std::string& _notifyId);

                    /**
                     * 判断参数 NotifyId 是否已赋值
                     * @return NotifyId 是否已赋值
                     * 
                     */
                    bool NotifyIdHasBeenSet() const;

                    /**
                     * 获取告警策略ID
                     * @return PolicyId 告警策略ID
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置告警策略ID
                     * @param _policyId 告警策略ID
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
                     * 获取告警周期iD
                     * @return SessionId 告警周期iD
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置告警周期iD
                     * @param _sessionId 告警周期iD
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取通知时间 unix秒级时间戳
                     * @return NotifyTime 通知时间 unix秒级时间戳
                     * 
                     */
                    int64_t GetNotifyTime() const;

                    /**
                     * 设置通知时间 unix秒级时间戳
                     * @param _notifyTime 通知时间 unix秒级时间戳
                     * 
                     */
                    void SetNotifyTime(const int64_t& _notifyTime);

                    /**
                     * 判断参数 NotifyTime 是否已赋值
                     * @return NotifyTime 是否已赋值
                     * 
                     */
                    bool NotifyTimeHasBeenSet() const;

                    /**
                     * 获取触发时间 unix秒级时间戳
                     * @return TriggerTime 触发时间 unix秒级时间戳
                     * 
                     */
                    int64_t GetTriggerTime() const;

                    /**
                     * 设置触发时间 unix秒级时间戳
                     * @param _triggerTime 触发时间 unix秒级时间戳
                     * 
                     */
                    void SetTriggerTime(const int64_t& _triggerTime);

                    /**
                     * 判断参数 TriggerTime 是否已赋值
                     * @return TriggerTime 是否已赋值
                     * 
                     */
                    bool TriggerTimeHasBeenSet() const;

                    /**
                     * 获取告警级别 None 非分级告警级别; Note 提示级别; Warn 严重级别; Serious 紧急级别
                     * @return TriggerLevel 告警级别 None 非分级告警级别; Note 提示级别; Warn 严重级别; Serious 紧急级别
                     * 
                     */
                    std::string GetTriggerLevel() const;

                    /**
                     * 设置告警级别 None 非分级告警级别; Note 提示级别; Warn 严重级别; Serious 紧急级别
                     * @param _triggerLevel 告警级别 None 非分级告警级别; Note 提示级别; Warn 严重级别; Serious 紧急级别
                     * 
                     */
                    void SetTriggerLevel(const std::string& _triggerLevel);

                    /**
                     * 判断参数 TriggerLevel 是否已赋值
                     * @return TriggerLevel 是否已赋值
                     * 
                     */
                    bool TriggerLevelHasBeenSet() const;

                    /**
                     * 获取告警内容
                     * @return AlarmContent 告警内容
                     * 
                     */
                    std::string GetAlarmContent() const;

                    /**
                     * 设置告警内容
                     * @param _alarmContent 告警内容
                     * 
                     */
                    void SetAlarmContent(const std::string& _alarmContent);

                    /**
                     * 判断参数 AlarmContent 是否已赋值
                     * @return AlarmContent 是否已赋值
                     * 
                     */
                    bool AlarmContentHasBeenSet() const;

                    /**
                     * 获取告警对象
                     * @return AlarmObject 告警对象
                     * 
                     */
                    std::string GetAlarmObject() const;

                    /**
                     * 设置告警对象
                     * @param _alarmObject 告警对象
                     * 
                     */
                    void SetAlarmObject(const std::string& _alarmObject);

                    /**
                     * 判断参数 AlarmObject 是否已赋值
                     * @return AlarmObject 是否已赋值
                     * 
                     */
                    bool AlarmObjectHasBeenSet() const;

                    /**
                     * 获取本次告警通知涉及到的渠道合集
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelSet 本次告警通知涉及到的渠道合集
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetChannelSet() const;

                    /**
                     * 设置本次告警通知涉及到的渠道合集
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channelSet 本次告警通知涉及到的渠道合集
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChannelSet(const std::vector<std::string>& _channelSet);

                    /**
                     * 判断参数 ChannelSet 是否已赋值
                     * @return ChannelSet 是否已赋值
                     * 
                     */
                    bool ChannelSetHasBeenSet() const;

                    /**
                     * 获取渠道的接收人信息
                     * @return ChannelsReceivers 渠道的接收人信息
                     * 
                     */
                    std::vector<ChannelsReceivers> GetChannelsReceivers() const;

                    /**
                     * 设置渠道的接收人信息
                     * @param _channelsReceivers 渠道的接收人信息
                     * 
                     */
                    void SetChannelsReceivers(const std::vector<ChannelsReceivers>& _channelsReceivers);

                    /**
                     * 判断参数 ChannelsReceivers 是否已赋值
                     * @return ChannelsReceivers 是否已赋值
                     * 
                     */
                    bool ChannelsReceiversHasBeenSet() const;

                    /**
                     * 获取告警策略名称
                     * @return PolicyName 告警策略名称
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置告警策略名称
                     * @param _policyName 告警策略名称
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
                     * 获取Prometheus实例ID, 仅当 MT_PROME 时有效
                     * @return PromeInstanceID Prometheus实例ID, 仅当 MT_PROME 时有效
                     * 
                     */
                    std::string GetPromeInstanceID() const;

                    /**
                     * 设置Prometheus实例ID, 仅当 MT_PROME 时有效
                     * @param _promeInstanceID Prometheus实例ID, 仅当 MT_PROME 时有效
                     * 
                     */
                    void SetPromeInstanceID(const std::string& _promeInstanceID);

                    /**
                     * 判断参数 PromeInstanceID 是否已赋值
                     * @return PromeInstanceID 是否已赋值
                     * 
                     */
                    bool PromeInstanceIDHasBeenSet() const;

                    /**
                     * 获取Prometheus实例所在的地域, 仅当 MT_PROME 时有效
                     * @return PromeInstanceRegion Prometheus实例所在的地域, 仅当 MT_PROME 时有效
                     * 
                     */
                    std::string GetPromeInstanceRegion() const;

                    /**
                     * 设置Prometheus实例所在的地域, 仅当 MT_PROME 时有效
                     * @param _promeInstanceRegion Prometheus实例所在的地域, 仅当 MT_PROME 时有效
                     * 
                     */
                    void SetPromeInstanceRegion(const std::string& _promeInstanceRegion);

                    /**
                     * 判断参数 PromeInstanceRegion 是否已赋值
                     * @return PromeInstanceRegion 是否已赋值
                     * 
                     */
                    bool PromeInstanceRegionHasBeenSet() const;

                    /**
                     * 获取通知模板相关的配置信息
                     * @return Notices 通知模板相关的配置信息
                     * 
                     */
                    std::vector<NotifyRelatedNotice> GetNotices() const;

                    /**
                     * 设置通知模板相关的配置信息
                     * @param _notices 通知模板相关的配置信息
                     * 
                     */
                    void SetNotices(const std::vector<NotifyRelatedNotice>& _notices);

                    /**
                     * 判断参数 Notices 是否已赋值
                     * @return Notices 是否已赋值
                     * 
                     */
                    bool NoticesHasBeenSet() const;

                    /**
                     * 获取告警触发状态  Trigger 告警状态触发; Recovery 告警状态恢复
                     * @return TriggerStatus 告警触发状态  Trigger 告警状态触发; Recovery 告警状态恢复
                     * 
                     */
                    std::string GetTriggerStatus() const;

                    /**
                     * 设置告警触发状态  Trigger 告警状态触发; Recovery 告警状态恢复
                     * @param _triggerStatus 告警触发状态  Trigger 告警状态触发; Recovery 告警状态恢复
                     * 
                     */
                    void SetTriggerStatus(const std::string& _triggerStatus);

                    /**
                     * 判断参数 TriggerStatus 是否已赋值
                     * @return TriggerStatus 是否已赋值
                     * 
                     */
                    bool TriggerStatusHasBeenSet() const;

                    /**
                     * 获取与当前Prometheus通知历史相关控制台页面地址，仅当 MR_PROME 时有效
                     * @return PromeConsoleURL 与当前Prometheus通知历史相关控制台页面地址，仅当 MR_PROME 时有效
                     * 
                     */
                    std::string GetPromeConsoleURL() const;

                    /**
                     * 设置与当前Prometheus通知历史相关控制台页面地址，仅当 MR_PROME 时有效
                     * @param _promeConsoleURL 与当前Prometheus通知历史相关控制台页面地址，仅当 MR_PROME 时有效
                     * 
                     */
                    void SetPromeConsoleURL(const std::string& _promeConsoleURL);

                    /**
                     * 判断参数 PromeConsoleURL 是否已赋值
                     * @return PromeConsoleURL 是否已赋值
                     * 
                     */
                    bool PromeConsoleURLHasBeenSet() const;

                    /**
                     * 获取告警的lable
                     * @return Labels 告警的lable
                     * 
                     */
                    std::vector<AlarmLable> GetLabels() const;

                    /**
                     * 设置告警的lable
                     * @param _labels 告警的lable
                     * 
                     */
                    void SetLabels(const std::vector<AlarmLable>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                private:

                    /**
                     * 通知的唯一ID
                     */
                    std::string m_notifyId;
                    bool m_notifyIdHasBeenSet;

                    /**
                     * 告警策略ID
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 告警周期iD
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 通知时间 unix秒级时间戳
                     */
                    int64_t m_notifyTime;
                    bool m_notifyTimeHasBeenSet;

                    /**
                     * 触发时间 unix秒级时间戳
                     */
                    int64_t m_triggerTime;
                    bool m_triggerTimeHasBeenSet;

                    /**
                     * 告警级别 None 非分级告警级别; Note 提示级别; Warn 严重级别; Serious 紧急级别
                     */
                    std::string m_triggerLevel;
                    bool m_triggerLevelHasBeenSet;

                    /**
                     * 告警内容
                     */
                    std::string m_alarmContent;
                    bool m_alarmContentHasBeenSet;

                    /**
                     * 告警对象
                     */
                    std::string m_alarmObject;
                    bool m_alarmObjectHasBeenSet;

                    /**
                     * 本次告警通知涉及到的渠道合集
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_channelSet;
                    bool m_channelSetHasBeenSet;

                    /**
                     * 渠道的接收人信息
                     */
                    std::vector<ChannelsReceivers> m_channelsReceivers;
                    bool m_channelsReceiversHasBeenSet;

                    /**
                     * 告警策略名称
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * Prometheus实例ID, 仅当 MT_PROME 时有效
                     */
                    std::string m_promeInstanceID;
                    bool m_promeInstanceIDHasBeenSet;

                    /**
                     * Prometheus实例所在的地域, 仅当 MT_PROME 时有效
                     */
                    std::string m_promeInstanceRegion;
                    bool m_promeInstanceRegionHasBeenSet;

                    /**
                     * 通知模板相关的配置信息
                     */
                    std::vector<NotifyRelatedNotice> m_notices;
                    bool m_noticesHasBeenSet;

                    /**
                     * 告警触发状态  Trigger 告警状态触发; Recovery 告警状态恢复
                     */
                    std::string m_triggerStatus;
                    bool m_triggerStatusHasBeenSet;

                    /**
                     * 与当前Prometheus通知历史相关控制台页面地址，仅当 MR_PROME 时有效
                     */
                    std::string m_promeConsoleURL;
                    bool m_promeConsoleURLHasBeenSet;

                    /**
                     * 告警的lable
                     */
                    std::vector<AlarmLable> m_labels;
                    bool m_labelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_ALARMNOTIFYHISTORY_H_
