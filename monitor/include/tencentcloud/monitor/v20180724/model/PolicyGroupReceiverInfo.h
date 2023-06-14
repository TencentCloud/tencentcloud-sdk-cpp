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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_POLICYGROUPRECEIVERINFO_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_POLICYGROUPRECEIVERINFO_H_

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
                * 2018版策略模板列表接收人信息
                */
                class PolicyGroupReceiverInfo : public AbstractModel
                {
                public:
                    PolicyGroupReceiverInfo();
                    ~PolicyGroupReceiverInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取有效时段结束时间
                     * @return EndTime 有效时段结束时间
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置有效时段结束时间
                     * @param _endTime 有效时段结束时间
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
                     * 获取是否需要发送通知
                     * @return NeedSendNotice 是否需要发送通知
                     * 
                     */
                    int64_t GetNeedSendNotice() const;

                    /**
                     * 设置是否需要发送通知
                     * @param _needSendNotice 是否需要发送通知
                     * 
                     */
                    void SetNeedSendNotice(const int64_t& _needSendNotice);

                    /**
                     * 判断参数 NeedSendNotice 是否已赋值
                     * @return NeedSendNotice 是否已赋值
                     * 
                     */
                    bool NeedSendNoticeHasBeenSet() const;

                    /**
                     * 获取告警接收渠道
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NotifyWay 告警接收渠道
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetNotifyWay() const;

                    /**
                     * 设置告警接收渠道
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _notifyWay 告警接收渠道
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
                     * 获取电话告警对个人间隔（秒）
                     * @return PersonInterval 电话告警对个人间隔（秒）
                     * 
                     */
                    int64_t GetPersonInterval() const;

                    /**
                     * 设置电话告警对个人间隔（秒）
                     * @param _personInterval 电话告警对个人间隔（秒）
                     * 
                     */
                    void SetPersonInterval(const int64_t& _personInterval);

                    /**
                     * 判断参数 PersonInterval 是否已赋值
                     * @return PersonInterval 是否已赋值
                     * 
                     */
                    bool PersonIntervalHasBeenSet() const;

                    /**
                     * 获取消息接收组列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReceiverGroupList 消息接收组列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetReceiverGroupList() const;

                    /**
                     * 设置消息接收组列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _receiverGroupList 消息接收组列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReceiverGroupList(const std::vector<int64_t>& _receiverGroupList);

                    /**
                     * 判断参数 ReceiverGroupList 是否已赋值
                     * @return ReceiverGroupList 是否已赋值
                     * 
                     */
                    bool ReceiverGroupListHasBeenSet() const;

                    /**
                     * 获取接受者类型
                     * @return ReceiverType 接受者类型
                     * 
                     */
                    std::string GetReceiverType() const;

                    /**
                     * 设置接受者类型
                     * @param _receiverType 接受者类型
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
                     * 获取接收人列表。通过平台接口查询到的接收人id列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReceiverUserList 接收人列表。通过平台接口查询到的接收人id列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetReceiverUserList() const;

                    /**
                     * 设置接收人列表。通过平台接口查询到的接收人id列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _receiverUserList 接收人列表。通过平台接口查询到的接收人id列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReceiverUserList(const std::vector<int64_t>& _receiverUserList);

                    /**
                     * 判断参数 ReceiverUserList 是否已赋值
                     * @return ReceiverUserList 是否已赋值
                     * 
                     */
                    bool ReceiverUserListHasBeenSet() const;

                    /**
                     * 获取告警恢复通知方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecoverNotify 告警恢复通知方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetRecoverNotify() const;

                    /**
                     * 设置告警恢复通知方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recoverNotify 告警恢复通知方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRecoverNotify(const std::vector<std::string>& _recoverNotify);

                    /**
                     * 判断参数 RecoverNotify 是否已赋值
                     * @return RecoverNotify 是否已赋值
                     * 
                     */
                    bool RecoverNotifyHasBeenSet() const;

                    /**
                     * 获取电话告警每轮间隔（秒）
                     * @return RoundInterval 电话告警每轮间隔（秒）
                     * 
                     */
                    int64_t GetRoundInterval() const;

                    /**
                     * 设置电话告警每轮间隔（秒）
                     * @param _roundInterval 电话告警每轮间隔（秒）
                     * 
                     */
                    void SetRoundInterval(const int64_t& _roundInterval);

                    /**
                     * 判断参数 RoundInterval 是否已赋值
                     * @return RoundInterval 是否已赋值
                     * 
                     */
                    bool RoundIntervalHasBeenSet() const;

                    /**
                     * 获取电话告警轮数
                     * @return RoundNumber 电话告警轮数
                     * 
                     */
                    int64_t GetRoundNumber() const;

                    /**
                     * 设置电话告警轮数
                     * @param _roundNumber 电话告警轮数
                     * 
                     */
                    void SetRoundNumber(const int64_t& _roundNumber);

                    /**
                     * 判断参数 RoundNumber 是否已赋值
                     * @return RoundNumber 是否已赋值
                     * 
                     */
                    bool RoundNumberHasBeenSet() const;

                    /**
                     * 获取电话告警通知时机。可选"OCCUR"(告警时通知),"RECOVER"(恢复时通知)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SendFor 电话告警通知时机。可选"OCCUR"(告警时通知),"RECOVER"(恢复时通知)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSendFor() const;

                    /**
                     * 设置电话告警通知时机。可选"OCCUR"(告警时通知),"RECOVER"(恢复时通知)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sendFor 电话告警通知时机。可选"OCCUR"(告警时通知),"RECOVER"(恢复时通知)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSendFor(const std::vector<std::string>& _sendFor);

                    /**
                     * 判断参数 SendFor 是否已赋值
                     * @return SendFor 是否已赋值
                     * 
                     */
                    bool SendForHasBeenSet() const;

                    /**
                     * 获取有效时段开始时间
                     * @return StartTime 有效时段开始时间
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置有效时段开始时间
                     * @param _startTime 有效时段开始时间
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
                     * 获取电话告警接收者uid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UIDList 电话告警接收者uid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetUIDList() const;

                    /**
                     * 设置电话告警接收者uid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uIDList 电话告警接收者uid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUIDList(const std::vector<int64_t>& _uIDList);

                    /**
                     * 判断参数 UIDList 是否已赋值
                     * @return UIDList 是否已赋值
                     * 
                     */
                    bool UIDListHasBeenSet() const;

                private:

                    /**
                     * 有效时段结束时间
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 是否需要发送通知
                     */
                    int64_t m_needSendNotice;
                    bool m_needSendNoticeHasBeenSet;

                    /**
                     * 告警接收渠道
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_notifyWay;
                    bool m_notifyWayHasBeenSet;

                    /**
                     * 电话告警对个人间隔（秒）
                     */
                    int64_t m_personInterval;
                    bool m_personIntervalHasBeenSet;

                    /**
                     * 消息接收组列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_receiverGroupList;
                    bool m_receiverGroupListHasBeenSet;

                    /**
                     * 接受者类型
                     */
                    std::string m_receiverType;
                    bool m_receiverTypeHasBeenSet;

                    /**
                     * 接收人列表。通过平台接口查询到的接收人id列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_receiverUserList;
                    bool m_receiverUserListHasBeenSet;

                    /**
                     * 告警恢复通知方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_recoverNotify;
                    bool m_recoverNotifyHasBeenSet;

                    /**
                     * 电话告警每轮间隔（秒）
                     */
                    int64_t m_roundInterval;
                    bool m_roundIntervalHasBeenSet;

                    /**
                     * 电话告警轮数
                     */
                    int64_t m_roundNumber;
                    bool m_roundNumberHasBeenSet;

                    /**
                     * 电话告警通知时机。可选"OCCUR"(告警时通知),"RECOVER"(恢复时通知)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_sendFor;
                    bool m_sendForHasBeenSet;

                    /**
                     * 有效时段开始时间
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 电话告警接收者uid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_uIDList;
                    bool m_uIDListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_POLICYGROUPRECEIVERINFO_H_
