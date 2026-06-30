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
                     * 获取<p>有效时段结束时间</p>
                     * @return EndTime <p>有效时段结束时间</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>有效时段结束时间</p>
                     * @param _endTime <p>有效时段结束时间</p>
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
                     * 获取<p>是否需要发送通知</p>
                     * @return NeedSendNotice <p>是否需要发送通知</p>
                     * 
                     */
                    int64_t GetNeedSendNotice() const;

                    /**
                     * 设置<p>是否需要发送通知</p>
                     * @param _needSendNotice <p>是否需要发送通知</p>
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
                     * 获取<p>告警接收渠道</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NotifyWay <p>告警接收渠道</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetNotifyWay() const;

                    /**
                     * 设置<p>告警接收渠道</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _notifyWay <p>告警接收渠道</p>
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
                     * 获取<p>电话告警对个人间隔（秒）</p>
                     * @return PersonInterval <p>电话告警对个人间隔（秒）</p>
                     * 
                     */
                    int64_t GetPersonInterval() const;

                    /**
                     * 设置<p>电话告警对个人间隔（秒）</p>
                     * @param _personInterval <p>电话告警对个人间隔（秒）</p>
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
                     * 获取<p>消息接收组列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReceiverGroupList <p>消息接收组列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetReceiverGroupList() const;

                    /**
                     * 设置<p>消息接收组列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _receiverGroupList <p>消息接收组列表</p>
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
                     * 获取<p>接受者类型</p>
                     * @return ReceiverType <p>接受者类型</p>
                     * 
                     */
                    std::string GetReceiverType() const;

                    /**
                     * 设置<p>接受者类型</p>
                     * @param _receiverType <p>接受者类型</p>
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
                     * 获取<p>接收人列表。通过平台接口查询到的接收人id列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReceiverUserList <p>接收人列表。通过平台接口查询到的接收人id列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetReceiverUserList() const;

                    /**
                     * 设置<p>接收人列表。通过平台接口查询到的接收人id列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _receiverUserList <p>接收人列表。通过平台接口查询到的接收人id列表</p>
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
                     * 获取<p>告警恢复通知方式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecoverNotify <p>告警恢复通知方式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetRecoverNotify() const;

                    /**
                     * 设置<p>告警恢复通知方式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recoverNotify <p>告警恢复通知方式</p>
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
                     * 获取<p>电话告警每轮间隔（秒）</p>
                     * @return RoundInterval <p>电话告警每轮间隔（秒）</p>
                     * 
                     */
                    int64_t GetRoundInterval() const;

                    /**
                     * 设置<p>电话告警每轮间隔（秒）</p>
                     * @param _roundInterval <p>电话告警每轮间隔（秒）</p>
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
                     * 获取<p>电话告警轮数</p>
                     * @return RoundNumber <p>电话告警轮数</p>
                     * 
                     */
                    int64_t GetRoundNumber() const;

                    /**
                     * 设置<p>电话告警轮数</p>
                     * @param _roundNumber <p>电话告警轮数</p>
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
                     * 获取<p>电话告警通知时机。可选&quot;OCCUR&quot;(告警时通知),&quot;RECOVER&quot;(恢复时通知)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SendFor <p>电话告警通知时机。可选&quot;OCCUR&quot;(告警时通知),&quot;RECOVER&quot;(恢复时通知)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSendFor() const;

                    /**
                     * 设置<p>电话告警通知时机。可选&quot;OCCUR&quot;(告警时通知),&quot;RECOVER&quot;(恢复时通知)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sendFor <p>电话告警通知时机。可选&quot;OCCUR&quot;(告警时通知),&quot;RECOVER&quot;(恢复时通知)</p>
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
                     * 获取<p>有效时段开始时间</p>
                     * @return StartTime <p>有效时段开始时间</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>有效时段开始时间</p>
                     * @param _startTime <p>有效时段开始时间</p>
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
                     * 获取<p>电话告警接收者uid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UIDList <p>电话告警接收者uid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetUIDList() const;

                    /**
                     * 设置<p>电话告警接收者uid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uIDList <p>电话告警接收者uid</p>
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
                     * <p>有效时段结束时间</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>是否需要发送通知</p>
                     */
                    int64_t m_needSendNotice;
                    bool m_needSendNoticeHasBeenSet;

                    /**
                     * <p>告警接收渠道</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_notifyWay;
                    bool m_notifyWayHasBeenSet;

                    /**
                     * <p>电话告警对个人间隔（秒）</p>
                     */
                    int64_t m_personInterval;
                    bool m_personIntervalHasBeenSet;

                    /**
                     * <p>消息接收组列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_receiverGroupList;
                    bool m_receiverGroupListHasBeenSet;

                    /**
                     * <p>接受者类型</p>
                     */
                    std::string m_receiverType;
                    bool m_receiverTypeHasBeenSet;

                    /**
                     * <p>接收人列表。通过平台接口查询到的接收人id列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_receiverUserList;
                    bool m_receiverUserListHasBeenSet;

                    /**
                     * <p>告警恢复通知方式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_recoverNotify;
                    bool m_recoverNotifyHasBeenSet;

                    /**
                     * <p>电话告警每轮间隔（秒）</p>
                     */
                    int64_t m_roundInterval;
                    bool m_roundIntervalHasBeenSet;

                    /**
                     * <p>电话告警轮数</p>
                     */
                    int64_t m_roundNumber;
                    bool m_roundNumberHasBeenSet;

                    /**
                     * <p>电话告警通知时机。可选&quot;OCCUR&quot;(告警时通知),&quot;RECOVER&quot;(恢复时通知)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_sendFor;
                    bool m_sendForHasBeenSet;

                    /**
                     * <p>有效时段开始时间</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>电话告警接收者uid</p>
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
