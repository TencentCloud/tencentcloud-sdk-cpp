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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_RECEIVERINFO_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_RECEIVERINFO_H_

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
                * 接收人信息
                */
                class ReceiverInfo : public AbstractModel
                {
                public:
                    ReceiverInfo();
                    ~ReceiverInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警时间段开始时间。范围[0,86400)，作为 UNIX 时间戳转成北京时间后去掉日期，例如7200表示"10:0:0"
                     * @return StartTime 告警时间段开始时间。范围[0,86400)，作为 UNIX 时间戳转成北京时间后去掉日期，例如7200表示"10:0:0"
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置告警时间段开始时间。范围[0,86400)，作为 UNIX 时间戳转成北京时间后去掉日期，例如7200表示"10:0:0"
                     * @param _startTime 告警时间段开始时间。范围[0,86400)，作为 UNIX 时间戳转成北京时间后去掉日期，例如7200表示"10:0:0"
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
                     * 获取告警时间段结束时间。含义同StartTime
                     * @return EndTime 告警时间段结束时间。含义同StartTime
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置告警时间段结束时间。含义同StartTime
                     * @param _endTime 告警时间段结束时间。含义同StartTime
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
                     * 获取告警通知方式。可选 "SMS","SITE","EMAIL","CALL","WECHAT"
                     * @return NotifyWay 告警通知方式。可选 "SMS","SITE","EMAIL","CALL","WECHAT"
                     * 
                     */
                    std::vector<std::string> GetNotifyWay() const;

                    /**
                     * 设置告警通知方式。可选 "SMS","SITE","EMAIL","CALL","WECHAT"
                     * @param _notifyWay 告警通知方式。可选 "SMS","SITE","EMAIL","CALL","WECHAT"
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
                     * 获取接收人类型。“group” 或 “user”
                     * @return ReceiverType 接收人类型。“group” 或 “user”
                     * 
                     */
                    std::string GetReceiverType() const;

                    /**
                     * 设置接收人类型。“group” 或 “user”
                     * @param _receiverType 接收人类型。“group” 或 “user”
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
                     * 获取ReceiverId
                     * @return Id ReceiverId
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置ReceiverId
                     * @param _id ReceiverId
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取电话告警通知时机。可选"OCCUR"(告警时通知),"RECOVER"(恢复时通知)
                     * @return SendFor 电话告警通知时机。可选"OCCUR"(告警时通知),"RECOVER"(恢复时通知)
                     * 
                     */
                    std::vector<std::string> GetSendFor() const;

                    /**
                     * 设置电话告警通知时机。可选"OCCUR"(告警时通知),"RECOVER"(恢复时通知)
                     * @param _sendFor 电话告警通知时机。可选"OCCUR"(告警时通知),"RECOVER"(恢复时通知)
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
                     * 获取电话告警接收者 UID
                     * @return UidList 电话告警接收者 UID
                     * 
                     */
                    std::vector<int64_t> GetUidList() const;

                    /**
                     * 设置电话告警接收者 UID
                     * @param _uidList 电话告警接收者 UID
                     * 
                     */
                    void SetUidList(const std::vector<int64_t>& _uidList);

                    /**
                     * 判断参数 UidList 是否已赋值
                     * @return UidList 是否已赋值
                     * 
                     */
                    bool UidListHasBeenSet() const;

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
                     * 获取恢复通知方式。可选"SMS"
                     * @return RecoverNotify 恢复通知方式。可选"SMS"
                     * 
                     */
                    std::vector<std::string> GetRecoverNotify() const;

                    /**
                     * 设置恢复通知方式。可选"SMS"
                     * @param _recoverNotify 恢复通知方式。可选"SMS"
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
                     * 获取是否需要电话告警触达提示。0不需要，1需要
                     * @return NeedSendNotice 是否需要电话告警触达提示。0不需要，1需要
                     * 
                     */
                    int64_t GetNeedSendNotice() const;

                    /**
                     * 设置是否需要电话告警触达提示。0不需要，1需要
                     * @param _needSendNotice 是否需要电话告警触达提示。0不需要，1需要
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
                     * 获取接收组列表。通过平台接口查询到的接收组 ID 列表
                     * @return ReceiverGroupList 接收组列表。通过平台接口查询到的接收组 ID 列表
                     * 
                     */
                    std::vector<int64_t> GetReceiverGroupList() const;

                    /**
                     * 设置接收组列表。通过平台接口查询到的接收组 ID 列表
                     * @param _receiverGroupList 接收组列表。通过平台接口查询到的接收组 ID 列表
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
                     * 获取接收人列表。通过平台接口查询到的接收人 ID 列表
                     * @return ReceiverUserList 接收人列表。通过平台接口查询到的接收人 ID 列表
                     * 
                     */
                    std::vector<int64_t> GetReceiverUserList() const;

                    /**
                     * 设置接收人列表。通过平台接口查询到的接收人 ID 列表
                     * @param _receiverUserList 接收人列表。通过平台接口查询到的接收人 ID 列表
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
                     * 获取告警接收语言，枚举值（zh-CN，en-US）
                     * @return ReceiveLanguage 告警接收语言，枚举值（zh-CN，en-US）
                     * 
                     */
                    std::string GetReceiveLanguage() const;

                    /**
                     * 设置告警接收语言，枚举值（zh-CN，en-US）
                     * @param _receiveLanguage 告警接收语言，枚举值（zh-CN，en-US）
                     * 
                     */
                    void SetReceiveLanguage(const std::string& _receiveLanguage);

                    /**
                     * 判断参数 ReceiveLanguage 是否已赋值
                     * @return ReceiveLanguage 是否已赋值
                     * 
                     */
                    bool ReceiveLanguageHasBeenSet() const;

                private:

                    /**
                     * 告警时间段开始时间。范围[0,86400)，作为 UNIX 时间戳转成北京时间后去掉日期，例如7200表示"10:0:0"
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 告警时间段结束时间。含义同StartTime
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 告警通知方式。可选 "SMS","SITE","EMAIL","CALL","WECHAT"
                     */
                    std::vector<std::string> m_notifyWay;
                    bool m_notifyWayHasBeenSet;

                    /**
                     * 接收人类型。“group” 或 “user”
                     */
                    std::string m_receiverType;
                    bool m_receiverTypeHasBeenSet;

                    /**
                     * ReceiverId
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 电话告警通知时机。可选"OCCUR"(告警时通知),"RECOVER"(恢复时通知)
                     */
                    std::vector<std::string> m_sendFor;
                    bool m_sendForHasBeenSet;

                    /**
                     * 电话告警接收者 UID
                     */
                    std::vector<int64_t> m_uidList;
                    bool m_uidListHasBeenSet;

                    /**
                     * 电话告警轮数
                     */
                    int64_t m_roundNumber;
                    bool m_roundNumberHasBeenSet;

                    /**
                     * 电话告警对个人间隔（秒）
                     */
                    int64_t m_personInterval;
                    bool m_personIntervalHasBeenSet;

                    /**
                     * 电话告警每轮间隔（秒）
                     */
                    int64_t m_roundInterval;
                    bool m_roundIntervalHasBeenSet;

                    /**
                     * 恢复通知方式。可选"SMS"
                     */
                    std::vector<std::string> m_recoverNotify;
                    bool m_recoverNotifyHasBeenSet;

                    /**
                     * 是否需要电话告警触达提示。0不需要，1需要
                     */
                    int64_t m_needSendNotice;
                    bool m_needSendNoticeHasBeenSet;

                    /**
                     * 接收组列表。通过平台接口查询到的接收组 ID 列表
                     */
                    std::vector<int64_t> m_receiverGroupList;
                    bool m_receiverGroupListHasBeenSet;

                    /**
                     * 接收人列表。通过平台接口查询到的接收人 ID 列表
                     */
                    std::vector<int64_t> m_receiverUserList;
                    bool m_receiverUserListHasBeenSet;

                    /**
                     * 告警接收语言，枚举值（zh-CN，en-US）
                     */
                    std::string m_receiveLanguage;
                    bool m_receiveLanguageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_RECEIVERINFO_H_
