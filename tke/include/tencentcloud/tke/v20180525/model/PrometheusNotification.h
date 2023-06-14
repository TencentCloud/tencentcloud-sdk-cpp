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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_PROMETHEUSNOTIFICATION_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_PROMETHEUSNOTIFICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * amp告警渠道配置
                */
                class PrometheusNotification : public AbstractModel
                {
                public:
                    PrometheusNotification();
                    ~PrometheusNotification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否启用
                     * @return Enabled 是否启用
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置是否启用
                     * @param _enabled 是否启用
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
                     * 获取收敛时间
                     * @return RepeatInterval 收敛时间
                     * 
                     */
                    std::string GetRepeatInterval() const;

                    /**
                     * 设置收敛时间
                     * @param _repeatInterval 收敛时间
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
                     * 获取生效起始时间
                     * @return TimeRangeStart 生效起始时间
                     * 
                     */
                    std::string GetTimeRangeStart() const;

                    /**
                     * 设置生效起始时间
                     * @param _timeRangeStart 生效起始时间
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
                     * 获取生效结束时间
                     * @return TimeRangeEnd 生效结束时间
                     * 
                     */
                    std::string GetTimeRangeEnd() const;

                    /**
                     * 设置生效结束时间
                     * @param _timeRangeEnd 生效结束时间
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
                     * 获取告警通知方式。目前有SMS、EMAIL、CALL、WECHAT方式。
分别代表：短信、邮件、电话、微信
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NotifyWay 告警通知方式。目前有SMS、EMAIL、CALL、WECHAT方式。
分别代表：短信、邮件、电话、微信
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetNotifyWay() const;

                    /**
                     * 设置告警通知方式。目前有SMS、EMAIL、CALL、WECHAT方式。
分别代表：短信、邮件、电话、微信
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _notifyWay 告警通知方式。目前有SMS、EMAIL、CALL、WECHAT方式。
分别代表：短信、邮件、电话、微信
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
                     * 获取告警接收组（用户组）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReceiverGroups 告警接收组（用户组）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<uint64_t> GetReceiverGroups() const;

                    /**
                     * 设置告警接收组（用户组）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _receiverGroups 告警接收组（用户组）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReceiverGroups(const std::vector<uint64_t>& _receiverGroups);

                    /**
                     * 判断参数 ReceiverGroups 是否已赋值
                     * @return ReceiverGroups 是否已赋值
                     * 
                     */
                    bool ReceiverGroupsHasBeenSet() const;

                    /**
                     * 获取电话告警顺序。
注：NotifyWay选择CALL，采用该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PhoneNotifyOrder 电话告警顺序。
注：NotifyWay选择CALL，采用该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<uint64_t> GetPhoneNotifyOrder() const;

                    /**
                     * 设置电话告警顺序。
注：NotifyWay选择CALL，采用该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _phoneNotifyOrder 电话告警顺序。
注：NotifyWay选择CALL，采用该参数。
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
                     * 获取电话告警次数。
注：NotifyWay选择CALL，采用该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PhoneCircleTimes 电话告警次数。
注：NotifyWay选择CALL，采用该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPhoneCircleTimes() const;

                    /**
                     * 设置电话告警次数。
注：NotifyWay选择CALL，采用该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _phoneCircleTimes 电话告警次数。
注：NotifyWay选择CALL，采用该参数。
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
                     * 获取电话告警轮内间隔。单位：秒
注：NotifyWay选择CALL，采用该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PhoneInnerInterval 电话告警轮内间隔。单位：秒
注：NotifyWay选择CALL，采用该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPhoneInnerInterval() const;

                    /**
                     * 设置电话告警轮内间隔。单位：秒
注：NotifyWay选择CALL，采用该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _phoneInnerInterval 电话告警轮内间隔。单位：秒
注：NotifyWay选择CALL，采用该参数。
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
                     * 获取电话告警轮外间隔。单位：秒
注：NotifyWay选择CALL，采用该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PhoneCircleInterval 电话告警轮外间隔。单位：秒
注：NotifyWay选择CALL，采用该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPhoneCircleInterval() const;

                    /**
                     * 设置电话告警轮外间隔。单位：秒
注：NotifyWay选择CALL，采用该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _phoneCircleInterval 电话告警轮外间隔。单位：秒
注：NotifyWay选择CALL，采用该参数。
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
                     * 获取电话告警触达通知
注：NotifyWay选择CALL，采用该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PhoneArriveNotice 电话告警触达通知
注：NotifyWay选择CALL，采用该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetPhoneArriveNotice() const;

                    /**
                     * 设置电话告警触达通知
注：NotifyWay选择CALL，采用该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _phoneArriveNotice 电话告警触达通知
注：NotifyWay选择CALL，采用该参数。
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

                    /**
                     * 获取通道类型，默认为amp，支持以下
amp
webhook
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 通道类型，默认为amp，支持以下
amp
webhook
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置通道类型，默认为amp，支持以下
amp
webhook
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 通道类型，默认为amp，支持以下
amp
webhook
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取如果Type为webhook, 则该字段为必填项
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WebHook 如果Type为webhook, 则该字段为必填项
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWebHook() const;

                    /**
                     * 设置如果Type为webhook, 则该字段为必填项
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _webHook 如果Type为webhook, 则该字段为必填项
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

                private:

                    /**
                     * 是否启用
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 收敛时间
                     */
                    std::string m_repeatInterval;
                    bool m_repeatIntervalHasBeenSet;

                    /**
                     * 生效起始时间
                     */
                    std::string m_timeRangeStart;
                    bool m_timeRangeStartHasBeenSet;

                    /**
                     * 生效结束时间
                     */
                    std::string m_timeRangeEnd;
                    bool m_timeRangeEndHasBeenSet;

                    /**
                     * 告警通知方式。目前有SMS、EMAIL、CALL、WECHAT方式。
分别代表：短信、邮件、电话、微信
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_notifyWay;
                    bool m_notifyWayHasBeenSet;

                    /**
                     * 告警接收组（用户组）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<uint64_t> m_receiverGroups;
                    bool m_receiverGroupsHasBeenSet;

                    /**
                     * 电话告警顺序。
注：NotifyWay选择CALL，采用该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<uint64_t> m_phoneNotifyOrder;
                    bool m_phoneNotifyOrderHasBeenSet;

                    /**
                     * 电话告警次数。
注：NotifyWay选择CALL，采用该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_phoneCircleTimes;
                    bool m_phoneCircleTimesHasBeenSet;

                    /**
                     * 电话告警轮内间隔。单位：秒
注：NotifyWay选择CALL，采用该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_phoneInnerInterval;
                    bool m_phoneInnerIntervalHasBeenSet;

                    /**
                     * 电话告警轮外间隔。单位：秒
注：NotifyWay选择CALL，采用该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_phoneCircleInterval;
                    bool m_phoneCircleIntervalHasBeenSet;

                    /**
                     * 电话告警触达通知
注：NotifyWay选择CALL，采用该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_phoneArriveNotice;
                    bool m_phoneArriveNoticeHasBeenSet;

                    /**
                     * 通道类型，默认为amp，支持以下
amp
webhook
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 如果Type为webhook, 则该字段为必填项
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_webHook;
                    bool m_webHookHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_PROMETHEUSNOTIFICATION_H_
