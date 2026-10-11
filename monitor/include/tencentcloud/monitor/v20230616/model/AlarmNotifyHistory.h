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
#include <tencentcloud/monitor/v20230616/model/ReceiverGroup.h>


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
                     * 获取<p>通知的唯一ID</p>
                     * @return NotifyId <p>通知的唯一ID</p>
                     * 
                     */
                    std::string GetNotifyId() const;

                    /**
                     * 设置<p>通知的唯一ID</p>
                     * @param _notifyId <p>通知的唯一ID</p>
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
                     * 获取<p>告警策略ID</p>
                     * @return PolicyId <p>告警策略ID</p>
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置<p>告警策略ID</p>
                     * @param _policyId <p>告警策略ID</p>
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
                     * 获取<p>告警周期iD</p>
                     * @return SessionId <p>告警周期iD</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>告警周期iD</p>
                     * @param _sessionId <p>告警周期iD</p>
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
                     * 获取<p>通知时间 unix秒级时间戳</p>
                     * @return NotifyTime <p>通知时间 unix秒级时间戳</p>
                     * 
                     */
                    int64_t GetNotifyTime() const;

                    /**
                     * 设置<p>通知时间 unix秒级时间戳</p>
                     * @param _notifyTime <p>通知时间 unix秒级时间戳</p>
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
                     * 获取<p>触发时间 unix秒级时间戳</p>
                     * @return TriggerTime <p>触发时间 unix秒级时间戳</p>
                     * 
                     */
                    int64_t GetTriggerTime() const;

                    /**
                     * 设置<p>触发时间 unix秒级时间戳</p>
                     * @param _triggerTime <p>触发时间 unix秒级时间戳</p>
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
                     * 获取<p>告警级别 None 非分级告警级别; Note 提示级别; Warn 严重级别; Serious 紧急级别</p>
                     * @return TriggerLevel <p>告警级别 None 非分级告警级别; Note 提示级别; Warn 严重级别; Serious 紧急级别</p>
                     * 
                     */
                    std::string GetTriggerLevel() const;

                    /**
                     * 设置<p>告警级别 None 非分级告警级别; Note 提示级别; Warn 严重级别; Serious 紧急级别</p>
                     * @param _triggerLevel <p>告警级别 None 非分级告警级别; Note 提示级别; Warn 严重级别; Serious 紧急级别</p>
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
                     * 获取<p>告警内容</p>
                     * @return AlarmContent <p>告警内容</p>
                     * 
                     */
                    std::string GetAlarmContent() const;

                    /**
                     * 设置<p>告警内容</p>
                     * @param _alarmContent <p>告警内容</p>
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
                     * 获取<p>告警对象</p>
                     * @return AlarmObject <p>告警对象</p>
                     * 
                     */
                    std::string GetAlarmObject() const;

                    /**
                     * 设置<p>告警对象</p>
                     * @param _alarmObject <p>告警对象</p>
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
                     * 获取<p>本次告警通知涉及到的渠道合集</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelSet <p>本次告警通知涉及到的渠道合集</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetChannelSet() const;

                    /**
                     * 设置<p>本次告警通知涉及到的渠道合集</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channelSet <p>本次告警通知涉及到的渠道合集</p>
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
                     * 获取<p>渠道的接收人信息</p>
                     * @return ChannelsReceivers <p>渠道的接收人信息</p>
                     * 
                     */
                    std::vector<ChannelsReceivers> GetChannelsReceivers() const;

                    /**
                     * 设置<p>渠道的接收人信息</p>
                     * @param _channelsReceivers <p>渠道的接收人信息</p>
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
                     * 获取<p>告警策略名称</p>
                     * @return PolicyName <p>告警策略名称</p>
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置<p>告警策略名称</p>
                     * @param _policyName <p>告警策略名称</p>
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
                     * 获取<p>Prometheus实例ID, 仅当 MT_PROME 时有效</p>
                     * @return PromeInstanceID <p>Prometheus实例ID, 仅当 MT_PROME 时有效</p>
                     * 
                     */
                    std::string GetPromeInstanceID() const;

                    /**
                     * 设置<p>Prometheus实例ID, 仅当 MT_PROME 时有效</p>
                     * @param _promeInstanceID <p>Prometheus实例ID, 仅当 MT_PROME 时有效</p>
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
                     * 获取<p>Prometheus实例所在的地域, 仅当 MT_PROME 时有效</p>
                     * @return PromeInstanceRegion <p>Prometheus实例所在的地域, 仅当 MT_PROME 时有效</p>
                     * 
                     */
                    std::string GetPromeInstanceRegion() const;

                    /**
                     * 设置<p>Prometheus实例所在的地域, 仅当 MT_PROME 时有效</p>
                     * @param _promeInstanceRegion <p>Prometheus实例所在的地域, 仅当 MT_PROME 时有效</p>
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
                     * 获取<p>通知模板相关的配置信息</p>
                     * @return Notices <p>通知模板相关的配置信息</p>
                     * 
                     */
                    std::vector<NotifyRelatedNotice> GetNotices() const;

                    /**
                     * 设置<p>通知模板相关的配置信息</p>
                     * @param _notices <p>通知模板相关的配置信息</p>
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
                     * 获取<p>告警触发状态  Trigger 告警状态触发; Recovery 告警状态恢复</p>
                     * @return TriggerStatus <p>告警触发状态  Trigger 告警状态触发; Recovery 告警状态恢复</p>
                     * 
                     */
                    std::string GetTriggerStatus() const;

                    /**
                     * 设置<p>告警触发状态  Trigger 告警状态触发; Recovery 告警状态恢复</p>
                     * @param _triggerStatus <p>告警触发状态  Trigger 告警状态触发; Recovery 告警状态恢复</p>
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
                     * 获取<p>与当前Prometheus通知历史相关控制台页面地址，仅当 MR_PROME 时有效</p>
                     * @return PromeConsoleURL <p>与当前Prometheus通知历史相关控制台页面地址，仅当 MR_PROME 时有效</p>
                     * 
                     */
                    std::string GetPromeConsoleURL() const;

                    /**
                     * 设置<p>与当前Prometheus通知历史相关控制台页面地址，仅当 MR_PROME 时有效</p>
                     * @param _promeConsoleURL <p>与当前Prometheus通知历史相关控制台页面地址，仅当 MR_PROME 时有效</p>
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
                     * 获取<p>告警的lable</p>
                     * @return Labels <p>告警的lable</p>
                     * 
                     */
                    std::vector<AlarmLable> GetLabels() const;

                    /**
                     * 设置<p>告警的lable</p>
                     * @param _labels <p>告警的lable</p>
                     * 
                     */
                    void SetLabels(const std::vector<AlarmLable>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取<p>该条通知实际执行的接收人/组明细。一条元素对应通知模板里的一条渠道发送规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReceiverGroups <p>该条通知实际执行的接收人/组明细。一条元素对应通知模板里的一条渠道发送规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ReceiverGroup> GetReceiverGroups() const;

                    /**
                     * 设置<p>该条通知实际执行的接收人/组明细。一条元素对应通知模板里的一条渠道发送规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _receiverGroups <p>该条通知实际执行的接收人/组明细。一条元素对应通知模板里的一条渠道发送规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReceiverGroups(const std::vector<ReceiverGroup>& _receiverGroups);

                    /**
                     * 判断参数 ReceiverGroups 是否已赋值
                     * @return ReceiverGroups 是否已赋值
                     * 
                     */
                    bool ReceiverGroupsHasBeenSet() const;

                private:

                    /**
                     * <p>通知的唯一ID</p>
                     */
                    std::string m_notifyId;
                    bool m_notifyIdHasBeenSet;

                    /**
                     * <p>告警策略ID</p>
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * <p>告警周期iD</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>通知时间 unix秒级时间戳</p>
                     */
                    int64_t m_notifyTime;
                    bool m_notifyTimeHasBeenSet;

                    /**
                     * <p>触发时间 unix秒级时间戳</p>
                     */
                    int64_t m_triggerTime;
                    bool m_triggerTimeHasBeenSet;

                    /**
                     * <p>告警级别 None 非分级告警级别; Note 提示级别; Warn 严重级别; Serious 紧急级别</p>
                     */
                    std::string m_triggerLevel;
                    bool m_triggerLevelHasBeenSet;

                    /**
                     * <p>告警内容</p>
                     */
                    std::string m_alarmContent;
                    bool m_alarmContentHasBeenSet;

                    /**
                     * <p>告警对象</p>
                     */
                    std::string m_alarmObject;
                    bool m_alarmObjectHasBeenSet;

                    /**
                     * <p>本次告警通知涉及到的渠道合集</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_channelSet;
                    bool m_channelSetHasBeenSet;

                    /**
                     * <p>渠道的接收人信息</p>
                     */
                    std::vector<ChannelsReceivers> m_channelsReceivers;
                    bool m_channelsReceiversHasBeenSet;

                    /**
                     * <p>告警策略名称</p>
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * <p>Prometheus实例ID, 仅当 MT_PROME 时有效</p>
                     */
                    std::string m_promeInstanceID;
                    bool m_promeInstanceIDHasBeenSet;

                    /**
                     * <p>Prometheus实例所在的地域, 仅当 MT_PROME 时有效</p>
                     */
                    std::string m_promeInstanceRegion;
                    bool m_promeInstanceRegionHasBeenSet;

                    /**
                     * <p>通知模板相关的配置信息</p>
                     */
                    std::vector<NotifyRelatedNotice> m_notices;
                    bool m_noticesHasBeenSet;

                    /**
                     * <p>告警触发状态  Trigger 告警状态触发; Recovery 告警状态恢复</p>
                     */
                    std::string m_triggerStatus;
                    bool m_triggerStatusHasBeenSet;

                    /**
                     * <p>与当前Prometheus通知历史相关控制台页面地址，仅当 MR_PROME 时有效</p>
                     */
                    std::string m_promeConsoleURL;
                    bool m_promeConsoleURLHasBeenSet;

                    /**
                     * <p>告警的lable</p>
                     */
                    std::vector<AlarmLable> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * <p>该条通知实际执行的接收人/组明细。一条元素对应通知模板里的一条渠道发送规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ReceiverGroup> m_receiverGroups;
                    bool m_receiverGroupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_ALARMNOTIFYHISTORY_H_
