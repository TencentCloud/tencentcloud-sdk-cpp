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
                     * 获取<p>告警时间段开始时间。范围[0,86400)，作为 UNIX 时间戳转成北京时间后去掉日期，例如7200表示&quot;10:0:0&quot;</p>
                     * @return StartTime <p>告警时间段开始时间。范围[0,86400)，作为 UNIX 时间戳转成北京时间后去掉日期，例如7200表示&quot;10:0:0&quot;</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>告警时间段开始时间。范围[0,86400)，作为 UNIX 时间戳转成北京时间后去掉日期，例如7200表示&quot;10:0:0&quot;</p>
                     * @param _startTime <p>告警时间段开始时间。范围[0,86400)，作为 UNIX 时间戳转成北京时间后去掉日期，例如7200表示&quot;10:0:0&quot;</p>
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
                     * 获取<p>告警时间段结束时间。含义同StartTime</p>
                     * @return EndTime <p>告警时间段结束时间。含义同StartTime</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>告警时间段结束时间。含义同StartTime</p>
                     * @param _endTime <p>告警时间段结束时间。含义同StartTime</p>
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
                     * 获取<p>告警通知方式。可选 &quot;SMS&quot;,&quot;SITE&quot;,&quot;EMAIL&quot;,&quot;CALL&quot;,&quot;WECHAT&quot;</p>
                     * @return NotifyWay <p>告警通知方式。可选 &quot;SMS&quot;,&quot;SITE&quot;,&quot;EMAIL&quot;,&quot;CALL&quot;,&quot;WECHAT&quot;</p>
                     * 
                     */
                    std::vector<std::string> GetNotifyWay() const;

                    /**
                     * 设置<p>告警通知方式。可选 &quot;SMS&quot;,&quot;SITE&quot;,&quot;EMAIL&quot;,&quot;CALL&quot;,&quot;WECHAT&quot;</p>
                     * @param _notifyWay <p>告警通知方式。可选 &quot;SMS&quot;,&quot;SITE&quot;,&quot;EMAIL&quot;,&quot;CALL&quot;,&quot;WECHAT&quot;</p>
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
                     * 获取<p>接收人类型。“group” 或 “user”</p>
                     * @return ReceiverType <p>接收人类型。“group” 或 “user”</p>
                     * 
                     */
                    std::string GetReceiverType() const;

                    /**
                     * 设置<p>接收人类型。“group” 或 “user”</p>
                     * @param _receiverType <p>接收人类型。“group” 或 “user”</p>
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
                     * 获取<p>ReceiverId</p>
                     * @return Id <p>ReceiverId</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>ReceiverId</p>
                     * @param _id <p>ReceiverId</p>
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
                     * 获取<p>电话告警通知时机。可选&quot;OCCUR&quot;(告警时通知),&quot;RECOVER&quot;(恢复时通知)</p>
                     * @return SendFor <p>电话告警通知时机。可选&quot;OCCUR&quot;(告警时通知),&quot;RECOVER&quot;(恢复时通知)</p>
                     * 
                     */
                    std::vector<std::string> GetSendFor() const;

                    /**
                     * 设置<p>电话告警通知时机。可选&quot;OCCUR&quot;(告警时通知),&quot;RECOVER&quot;(恢复时通知)</p>
                     * @param _sendFor <p>电话告警通知时机。可选&quot;OCCUR&quot;(告警时通知),&quot;RECOVER&quot;(恢复时通知)</p>
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
                     * 获取<p>电话告警接收者 UID</p>
                     * @return UidList <p>电话告警接收者 UID</p>
                     * 
                     */
                    std::vector<int64_t> GetUidList() const;

                    /**
                     * 设置<p>电话告警接收者 UID</p>
                     * @param _uidList <p>电话告警接收者 UID</p>
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
                     * 获取<p>恢复通知方式。可选&quot;SMS&quot;</p>
                     * @return RecoverNotify <p>恢复通知方式。可选&quot;SMS&quot;</p>
                     * 
                     */
                    std::vector<std::string> GetRecoverNotify() const;

                    /**
                     * 设置<p>恢复通知方式。可选&quot;SMS&quot;</p>
                     * @param _recoverNotify <p>恢复通知方式。可选&quot;SMS&quot;</p>
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
                     * 获取<p>是否需要电话告警触达提示。0不需要，1需要</p>
                     * @return NeedSendNotice <p>是否需要电话告警触达提示。0不需要，1需要</p>
                     * 
                     */
                    int64_t GetNeedSendNotice() const;

                    /**
                     * 设置<p>是否需要电话告警触达提示。0不需要，1需要</p>
                     * @param _needSendNotice <p>是否需要电话告警触达提示。0不需要，1需要</p>
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
                     * 获取<p>接收组列表。通过平台接口查询到的接收组 ID 列表</p>
                     * @return ReceiverGroupList <p>接收组列表。通过平台接口查询到的接收组 ID 列表</p>
                     * 
                     */
                    std::vector<int64_t> GetReceiverGroupList() const;

                    /**
                     * 设置<p>接收组列表。通过平台接口查询到的接收组 ID 列表</p>
                     * @param _receiverGroupList <p>接收组列表。通过平台接口查询到的接收组 ID 列表</p>
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
                     * 获取<p>接收人列表。通过平台接口查询到的接收人 ID 列表</p>
                     * @return ReceiverUserList <p>接收人列表。通过平台接口查询到的接收人 ID 列表</p>
                     * 
                     */
                    std::vector<int64_t> GetReceiverUserList() const;

                    /**
                     * 设置<p>接收人列表。通过平台接口查询到的接收人 ID 列表</p>
                     * @param _receiverUserList <p>接收人列表。通过平台接口查询到的接收人 ID 列表</p>
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
                     * 获取<p>告警接收语言，枚举值（zh-CN，en-US）</p>
                     * @return ReceiveLanguage <p>告警接收语言，枚举值（zh-CN，en-US）</p>
                     * 
                     */
                    std::string GetReceiveLanguage() const;

                    /**
                     * 设置<p>告警接收语言，枚举值（zh-CN，en-US）</p>
                     * @param _receiveLanguage <p>告警接收语言，枚举值（zh-CN，en-US）</p>
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
                     * <p>告警时间段开始时间。范围[0,86400)，作为 UNIX 时间戳转成北京时间后去掉日期，例如7200表示&quot;10:0:0&quot;</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>告警时间段结束时间。含义同StartTime</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>告警通知方式。可选 &quot;SMS&quot;,&quot;SITE&quot;,&quot;EMAIL&quot;,&quot;CALL&quot;,&quot;WECHAT&quot;</p>
                     */
                    std::vector<std::string> m_notifyWay;
                    bool m_notifyWayHasBeenSet;

                    /**
                     * <p>接收人类型。“group” 或 “user”</p>
                     */
                    std::string m_receiverType;
                    bool m_receiverTypeHasBeenSet;

                    /**
                     * <p>ReceiverId</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>电话告警通知时机。可选&quot;OCCUR&quot;(告警时通知),&quot;RECOVER&quot;(恢复时通知)</p>
                     */
                    std::vector<std::string> m_sendFor;
                    bool m_sendForHasBeenSet;

                    /**
                     * <p>电话告警接收者 UID</p>
                     */
                    std::vector<int64_t> m_uidList;
                    bool m_uidListHasBeenSet;

                    /**
                     * <p>电话告警轮数</p>
                     */
                    int64_t m_roundNumber;
                    bool m_roundNumberHasBeenSet;

                    /**
                     * <p>电话告警对个人间隔（秒）</p>
                     */
                    int64_t m_personInterval;
                    bool m_personIntervalHasBeenSet;

                    /**
                     * <p>电话告警每轮间隔（秒）</p>
                     */
                    int64_t m_roundInterval;
                    bool m_roundIntervalHasBeenSet;

                    /**
                     * <p>恢复通知方式。可选&quot;SMS&quot;</p>
                     */
                    std::vector<std::string> m_recoverNotify;
                    bool m_recoverNotifyHasBeenSet;

                    /**
                     * <p>是否需要电话告警触达提示。0不需要，1需要</p>
                     */
                    int64_t m_needSendNotice;
                    bool m_needSendNoticeHasBeenSet;

                    /**
                     * <p>接收组列表。通过平台接口查询到的接收组 ID 列表</p>
                     */
                    std::vector<int64_t> m_receiverGroupList;
                    bool m_receiverGroupListHasBeenSet;

                    /**
                     * <p>接收人列表。通过平台接口查询到的接收人 ID 列表</p>
                     */
                    std::vector<int64_t> m_receiverUserList;
                    bool m_receiverUserListHasBeenSet;

                    /**
                     * <p>告警接收语言，枚举值（zh-CN，en-US）</p>
                     */
                    std::string m_receiveLanguage;
                    bool m_receiveLanguageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_RECEIVERINFO_H_
