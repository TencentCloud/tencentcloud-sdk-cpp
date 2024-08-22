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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_USERNOTICE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_USERNOTICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 告警通知模板 - 用户通知详情
                */
                class UserNotice : public AbstractModel
                {
                public:
                    UserNotice();
                    ~UserNotice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取接收者类型 USER=用户 GROUP=用户组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReceiverType 接收者类型 USER=用户 GROUP=用户组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReceiverType() const;

                    /**
                     * 设置接收者类型 USER=用户 GROUP=用户组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _receiverType 接收者类型 USER=用户 GROUP=用户组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReceiverType(const std::string& _receiverType);

                    /**
                     * 判断参数 ReceiverType 是否已赋值
                     * @return ReceiverType 是否已赋值
                     * 
                     */
                    bool ReceiverTypeHasBeenSet() const;

                    /**
                     * 获取通知开始时间 00:00:00 开始的秒数（取值范围0-86399）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 通知开始时间 00:00:00 开始的秒数（取值范围0-86399）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置通知开始时间 00:00:00 开始的秒数（取值范围0-86399）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 通知开始时间 00:00:00 开始的秒数（取值范围0-86399）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取通知结束时间 00:00:00 开始的秒数（取值范围0-86399）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 通知结束时间 00:00:00 开始的秒数（取值范围0-86399）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置通知结束时间 00:00:00 开始的秒数（取值范围0-86399）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 通知结束时间 00:00:00 开始的秒数（取值范围0-86399）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取通知渠道列表 EMAIL=邮件 SMS=短信 CALL=电话 WECHAT=微信 RTX=企业微信
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NoticeWay 通知渠道列表 EMAIL=邮件 SMS=短信 CALL=电话 WECHAT=微信 RTX=企业微信
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetNoticeWay() const;

                    /**
                     * 设置通知渠道列表 EMAIL=邮件 SMS=短信 CALL=电话 WECHAT=微信 RTX=企业微信
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _noticeWay 通知渠道列表 EMAIL=邮件 SMS=短信 CALL=电话 WECHAT=微信 RTX=企业微信
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNoticeWay(const std::vector<std::string>& _noticeWay);

                    /**
                     * 判断参数 NoticeWay 是否已赋值
                     * @return NoticeWay 是否已赋值
                     * 
                     */
                    bool NoticeWayHasBeenSet() const;

                    /**
                     * 获取用户 uid 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserIds 用户 uid 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetUserIds() const;

                    /**
                     * 设置用户 uid 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userIds 用户 uid 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserIds(const std::vector<int64_t>& _userIds);

                    /**
                     * 判断参数 UserIds 是否已赋值
                     * @return UserIds 是否已赋值
                     * 
                     */
                    bool UserIdsHasBeenSet() const;

                    /**
                     * 获取用户组 group id 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupIds 用户组 group id 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetGroupIds() const;

                    /**
                     * 设置用户组 group id 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupIds 用户组 group id 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupIds(const std::vector<int64_t>& _groupIds);

                    /**
                     * 判断参数 GroupIds 是否已赋值
                     * @return GroupIds 是否已赋值
                     * 
                     */
                    bool GroupIdsHasBeenSet() const;

                    /**
                     * 获取电话轮询列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PhoneOrder 电话轮询列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetPhoneOrder() const;

                    /**
                     * 设置电话轮询列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _phoneOrder 电话轮询列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPhoneOrder(const std::vector<int64_t>& _phoneOrder);

                    /**
                     * 判断参数 PhoneOrder 是否已赋值
                     * @return PhoneOrder 是否已赋值
                     * 
                     */
                    bool PhoneOrderHasBeenSet() const;

                    /**
                     * 获取电话轮询次数 （取值范围1-5）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PhoneCircleTimes 电话轮询次数 （取值范围1-5）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPhoneCircleTimes() const;

                    /**
                     * 设置电话轮询次数 （取值范围1-5）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _phoneCircleTimes 电话轮询次数 （取值范围1-5）
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
                     * 获取单次轮询内拨打间隔 秒数 （取值范围60-900）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PhoneInnerInterval 单次轮询内拨打间隔 秒数 （取值范围60-900）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPhoneInnerInterval() const;

                    /**
                     * 设置单次轮询内拨打间隔 秒数 （取值范围60-900）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _phoneInnerInterval 单次轮询内拨打间隔 秒数 （取值范围60-900）
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
                     * 获取两次轮询间隔 秒数（取值范围60-900）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PhoneCircleInterval 两次轮询间隔 秒数（取值范围60-900）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPhoneCircleInterval() const;

                    /**
                     * 设置两次轮询间隔 秒数（取值范围60-900）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _phoneCircleInterval 两次轮询间隔 秒数（取值范围60-900）
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
                     * 获取是否需要触达通知 0=否 1=是
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NeedPhoneArriveNotice 是否需要触达通知 0=否 1=是
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetNeedPhoneArriveNotice() const;

                    /**
                     * 设置是否需要触达通知 0=否 1=是
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _needPhoneArriveNotice 是否需要触达通知 0=否 1=是
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNeedPhoneArriveNotice(const int64_t& _needPhoneArriveNotice);

                    /**
                     * 判断参数 NeedPhoneArriveNotice 是否已赋值
                     * @return NeedPhoneArriveNotice 是否已赋值
                     * 
                     */
                    bool NeedPhoneArriveNoticeHasBeenSet() const;

                    /**
                     * 获取电话拨打类型 SYNC=同时拨打 CIRCLE=轮询拨打 不指定时默认是轮询
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PhoneCallType 电话拨打类型 SYNC=同时拨打 CIRCLE=轮询拨打 不指定时默认是轮询
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPhoneCallType() const;

                    /**
                     * 设置电话拨打类型 SYNC=同时拨打 CIRCLE=轮询拨打 不指定时默认是轮询
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _phoneCallType 电话拨打类型 SYNC=同时拨打 CIRCLE=轮询拨打 不指定时默认是轮询
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPhoneCallType(const std::string& _phoneCallType);

                    /**
                     * 判断参数 PhoneCallType 是否已赋值
                     * @return PhoneCallType 是否已赋值
                     * 
                     */
                    bool PhoneCallTypeHasBeenSet() const;

                    /**
                     * 获取通知周期 1-7表示周一到周日
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Weekday 通知周期 1-7表示周一到周日
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetWeekday() const;

                    /**
                     * 设置通知周期 1-7表示周一到周日
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _weekday 通知周期 1-7表示周一到周日
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWeekday(const std::vector<int64_t>& _weekday);

                    /**
                     * 判断参数 Weekday 是否已赋值
                     * @return Weekday 是否已赋值
                     * 
                     */
                    bool WeekdayHasBeenSet() const;

                    /**
                     * 获取值班表id列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OnCallFormIDs 值班表id列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetOnCallFormIDs() const;

                    /**
                     * 设置值班表id列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _onCallFormIDs 值班表id列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOnCallFormIDs(const std::vector<std::string>& _onCallFormIDs);

                    /**
                     * 判断参数 OnCallFormIDs 是否已赋值
                     * @return OnCallFormIDs 是否已赋值
                     * 
                     */
                    bool OnCallFormIDsHasBeenSet() const;

                    /**
                     * 获取电话按键确认
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VoiceConfirmKey 电话按键确认
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVoiceConfirmKey() const;

                    /**
                     * 设置电话按键确认
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _voiceConfirmKey 电话按键确认
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVoiceConfirmKey(const std::string& _voiceConfirmKey);

                    /**
                     * 判断参数 VoiceConfirmKey 是否已赋值
                     * @return VoiceConfirmKey 是否已赋值
                     * 
                     */
                    bool VoiceConfirmKeyHasBeenSet() const;

                private:

                    /**
                     * 接收者类型 USER=用户 GROUP=用户组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_receiverType;
                    bool m_receiverTypeHasBeenSet;

                    /**
                     * 通知开始时间 00:00:00 开始的秒数（取值范围0-86399）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 通知结束时间 00:00:00 开始的秒数（取值范围0-86399）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 通知渠道列表 EMAIL=邮件 SMS=短信 CALL=电话 WECHAT=微信 RTX=企业微信
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_noticeWay;
                    bool m_noticeWayHasBeenSet;

                    /**
                     * 用户 uid 列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_userIds;
                    bool m_userIdsHasBeenSet;

                    /**
                     * 用户组 group id 列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                    /**
                     * 电话轮询列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_phoneOrder;
                    bool m_phoneOrderHasBeenSet;

                    /**
                     * 电话轮询次数 （取值范围1-5）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_phoneCircleTimes;
                    bool m_phoneCircleTimesHasBeenSet;

                    /**
                     * 单次轮询内拨打间隔 秒数 （取值范围60-900）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_phoneInnerInterval;
                    bool m_phoneInnerIntervalHasBeenSet;

                    /**
                     * 两次轮询间隔 秒数（取值范围60-900）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_phoneCircleInterval;
                    bool m_phoneCircleIntervalHasBeenSet;

                    /**
                     * 是否需要触达通知 0=否 1=是
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_needPhoneArriveNotice;
                    bool m_needPhoneArriveNoticeHasBeenSet;

                    /**
                     * 电话拨打类型 SYNC=同时拨打 CIRCLE=轮询拨打 不指定时默认是轮询
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_phoneCallType;
                    bool m_phoneCallTypeHasBeenSet;

                    /**
                     * 通知周期 1-7表示周一到周日
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_weekday;
                    bool m_weekdayHasBeenSet;

                    /**
                     * 值班表id列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_onCallFormIDs;
                    bool m_onCallFormIDsHasBeenSet;

                    /**
                     * 电话按键确认
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_voiceConfirmKey;
                    bool m_voiceConfirmKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_USERNOTICE_H_
