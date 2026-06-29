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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSNOTIFICATIONITEM_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSNOTIFICATIONITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusAlertManagerConfig.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 告警通知渠道配置
                */
                class PrometheusNotificationItem : public AbstractModel
                {
                public:
                    PrometheusNotificationItem();
                    ~PrometheusNotificationItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否启用</p>
                     * @return Enabled <p>是否启用</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>是否启用</p>
                     * @param _enabled <p>是否启用</p>
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取<p>通道类型，默认为amp，支持以下<br>amp<br>webhook<br>alertmanager</p>
                     * @return Type <p>通道类型，默认为amp，支持以下<br>amp<br>webhook<br>alertmanager</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>通道类型，默认为amp，支持以下<br>amp<br>webhook<br>alertmanager</p>
                     * @param _type <p>通道类型，默认为amp，支持以下<br>amp<br>webhook<br>alertmanager</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>如果Type为webhook, 则该字段为必填项</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WebHook <p>如果Type为webhook, 则该字段为必填项</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWebHook() const;

                    /**
                     * 设置<p>如果Type为webhook, 则该字段为必填项</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _webHook <p>如果Type为webhook, 则该字段为必填项</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWebHook(const std::string& _webHook);

                    /**
                     * 判断参数 WebHook 是否已赋值
                     * @return WebHook 是否已赋值
                     * 
                     */
                    bool WebHookHasBeenSet() const;

                    /**
                     * 获取<p>如果Type为alertmanager, 则该字段为必填项</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlertManager <p>如果Type为alertmanager, 则该字段为必填项</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PrometheusAlertManagerConfig GetAlertManager() const;

                    /**
                     * 设置<p>如果Type为alertmanager, 则该字段为必填项</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alertManager <p>如果Type为alertmanager, 则该字段为必填项</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlertManager(const PrometheusAlertManagerConfig& _alertManager);

                    /**
                     * 判断参数 AlertManager 是否已赋值
                     * @return AlertManager 是否已赋值
                     * 
                     */
                    bool AlertManagerHasBeenSet() const;

                    /**
                     * 获取<p>收敛时间</p>
                     * @return RepeatInterval <p>收敛时间</p>
                     * 
                     */
                    std::string GetRepeatInterval() const;

                    /**
                     * 设置<p>收敛时间</p>
                     * @param _repeatInterval <p>收敛时间</p>
                     * 
                     */
                    void SetRepeatInterval(const std::string& _repeatInterval);

                    /**
                     * 判断参数 RepeatInterval 是否已赋值
                     * @return RepeatInterval 是否已赋值
                     * 
                     */
                    bool RepeatIntervalHasBeenSet() const;

                    /**
                     * 获取<p>生效起始时间</p>
                     * @return TimeRangeStart <p>生效起始时间</p>
                     * 
                     */
                    std::string GetTimeRangeStart() const;

                    /**
                     * 设置<p>生效起始时间</p>
                     * @param _timeRangeStart <p>生效起始时间</p>
                     * 
                     */
                    void SetTimeRangeStart(const std::string& _timeRangeStart);

                    /**
                     * 判断参数 TimeRangeStart 是否已赋值
                     * @return TimeRangeStart 是否已赋值
                     * 
                     */
                    bool TimeRangeStartHasBeenSet() const;

                    /**
                     * 获取<p>生效结束时间</p>
                     * @return TimeRangeEnd <p>生效结束时间</p>
                     * 
                     */
                    std::string GetTimeRangeEnd() const;

                    /**
                     * 设置<p>生效结束时间</p>
                     * @param _timeRangeEnd <p>生效结束时间</p>
                     * 
                     */
                    void SetTimeRangeEnd(const std::string& _timeRangeEnd);

                    /**
                     * 判断参数 TimeRangeEnd 是否已赋值
                     * @return TimeRangeEnd 是否已赋值
                     * 
                     */
                    bool TimeRangeEndHasBeenSet() const;

                    /**
                     * 获取<p>告警通知方式。目前有SMS、EMAIL、CALL、WECHAT方式。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NotifyWay <p>告警通知方式。目前有SMS、EMAIL、CALL、WECHAT方式。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetNotifyWay() const;

                    /**
                     * 设置<p>告警通知方式。目前有SMS、EMAIL、CALL、WECHAT方式。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _notifyWay <p>告警通知方式。目前有SMS、EMAIL、CALL、WECHAT方式。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNotifyWay(const std::vector<std::string>& _notifyWay);

                    /**
                     * 判断参数 NotifyWay 是否已赋值
                     * @return NotifyWay 是否已赋值
                     * 
                     */
                    bool NotifyWayHasBeenSet() const;

                    /**
                     * 获取<p>告警接收组（用户组）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReceiverGroups <p>告警接收组（用户组）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetReceiverGroups() const;

                    /**
                     * 设置<p>告警接收组（用户组）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _receiverGroups <p>告警接收组（用户组）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReceiverGroups(const std::vector<std::string>& _receiverGroups);

                    /**
                     * 判断参数 ReceiverGroups 是否已赋值
                     * @return ReceiverGroups 是否已赋值
                     * 
                     */
                    bool ReceiverGroupsHasBeenSet() const;

                    /**
                     * 获取<p>电话告警顺序。<br>注：NotifyWay选择CALL，采用该参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PhoneNotifyOrder <p>电话告警顺序。<br>注：NotifyWay选择CALL，采用该参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<uint64_t> GetPhoneNotifyOrder() const;

                    /**
                     * 设置<p>电话告警顺序。<br>注：NotifyWay选择CALL，采用该参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _phoneNotifyOrder <p>电话告警顺序。<br>注：NotifyWay选择CALL，采用该参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPhoneNotifyOrder(const std::vector<uint64_t>& _phoneNotifyOrder);

                    /**
                     * 判断参数 PhoneNotifyOrder 是否已赋值
                     * @return PhoneNotifyOrder 是否已赋值
                     * 
                     */
                    bool PhoneNotifyOrderHasBeenSet() const;

                    /**
                     * 获取<p>电话告警次数。<br>注：NotifyWay选择CALL，采用该参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PhoneCircleTimes <p>电话告警次数。<br>注：NotifyWay选择CALL，采用该参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPhoneCircleTimes() const;

                    /**
                     * 设置<p>电话告警次数。<br>注：NotifyWay选择CALL，采用该参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _phoneCircleTimes <p>电话告警次数。<br>注：NotifyWay选择CALL，采用该参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPhoneCircleTimes(const int64_t& _phoneCircleTimes);

                    /**
                     * 判断参数 PhoneCircleTimes 是否已赋值
                     * @return PhoneCircleTimes 是否已赋值
                     * 
                     */
                    bool PhoneCircleTimesHasBeenSet() const;

                    /**
                     * 获取<p>电话告警轮内间隔。单位：秒<br>注：NotifyWay选择CALL，采用该参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PhoneInnerInterval <p>电话告警轮内间隔。单位：秒<br>注：NotifyWay选择CALL，采用该参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPhoneInnerInterval() const;

                    /**
                     * 设置<p>电话告警轮内间隔。单位：秒<br>注：NotifyWay选择CALL，采用该参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _phoneInnerInterval <p>电话告警轮内间隔。单位：秒<br>注：NotifyWay选择CALL，采用该参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPhoneInnerInterval(const int64_t& _phoneInnerInterval);

                    /**
                     * 判断参数 PhoneInnerInterval 是否已赋值
                     * @return PhoneInnerInterval 是否已赋值
                     * 
                     */
                    bool PhoneInnerIntervalHasBeenSet() const;

                    /**
                     * 获取<p>电话告警轮外间隔。单位：秒<br>注：NotifyWay选择CALL，采用该参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PhoneCircleInterval <p>电话告警轮外间隔。单位：秒<br>注：NotifyWay选择CALL，采用该参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPhoneCircleInterval() const;

                    /**
                     * 设置<p>电话告警轮外间隔。单位：秒<br>注：NotifyWay选择CALL，采用该参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _phoneCircleInterval <p>电话告警轮外间隔。单位：秒<br>注：NotifyWay选择CALL，采用该参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPhoneCircleInterval(const int64_t& _phoneCircleInterval);

                    /**
                     * 判断参数 PhoneCircleInterval 是否已赋值
                     * @return PhoneCircleInterval 是否已赋值
                     * 
                     */
                    bool PhoneCircleIntervalHasBeenSet() const;

                    /**
                     * 获取<p>电话告警触达通知<br>注：NotifyWay选择CALL，采用该参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PhoneArriveNotice <p>电话告警触达通知<br>注：NotifyWay选择CALL，采用该参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetPhoneArriveNotice() const;

                    /**
                     * 设置<p>电话告警触达通知<br>注：NotifyWay选择CALL，采用该参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _phoneArriveNotice <p>电话告警触达通知<br>注：NotifyWay选择CALL，采用该参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPhoneArriveNotice(const bool& _phoneArriveNotice);

                    /**
                     * 判断参数 PhoneArriveNotice 是否已赋值
                     * @return PhoneArriveNotice 是否已赋值
                     * 
                     */
                    bool PhoneArriveNoticeHasBeenSet() const;

                private:

                    /**
                     * <p>是否启用</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>通道类型，默认为amp，支持以下<br>amp<br>webhook<br>alertmanager</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>如果Type为webhook, 则该字段为必填项</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_webHook;
                    bool m_webHookHasBeenSet;

                    /**
                     * <p>如果Type为alertmanager, 则该字段为必填项</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PrometheusAlertManagerConfig m_alertManager;
                    bool m_alertManagerHasBeenSet;

                    /**
                     * <p>收敛时间</p>
                     */
                    std::string m_repeatInterval;
                    bool m_repeatIntervalHasBeenSet;

                    /**
                     * <p>生效起始时间</p>
                     */
                    std::string m_timeRangeStart;
                    bool m_timeRangeStartHasBeenSet;

                    /**
                     * <p>生效结束时间</p>
                     */
                    std::string m_timeRangeEnd;
                    bool m_timeRangeEndHasBeenSet;

                    /**
                     * <p>告警通知方式。目前有SMS、EMAIL、CALL、WECHAT方式。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_notifyWay;
                    bool m_notifyWayHasBeenSet;

                    /**
                     * <p>告警接收组（用户组）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_receiverGroups;
                    bool m_receiverGroupsHasBeenSet;

                    /**
                     * <p>电话告警顺序。<br>注：NotifyWay选择CALL，采用该参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<uint64_t> m_phoneNotifyOrder;
                    bool m_phoneNotifyOrderHasBeenSet;

                    /**
                     * <p>电话告警次数。<br>注：NotifyWay选择CALL，采用该参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_phoneCircleTimes;
                    bool m_phoneCircleTimesHasBeenSet;

                    /**
                     * <p>电话告警轮内间隔。单位：秒<br>注：NotifyWay选择CALL，采用该参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_phoneInnerInterval;
                    bool m_phoneInnerIntervalHasBeenSet;

                    /**
                     * <p>电话告警轮外间隔。单位：秒<br>注：NotifyWay选择CALL，采用该参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_phoneCircleInterval;
                    bool m_phoneCircleIntervalHasBeenSet;

                    /**
                     * <p>电话告警触达通知<br>注：NotifyWay选择CALL，采用该参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_phoneArriveNotice;
                    bool m_phoneArriveNoticeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSNOTIFICATIONITEM_H_
