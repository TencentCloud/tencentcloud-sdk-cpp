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

#include <tencentcloud/monitor/v20180724/model/UserNotice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

UserNotice::UserNotice() :
    m_receiverTypeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_noticeWayHasBeenSet(false),
    m_userIdsHasBeenSet(false),
    m_groupIdsHasBeenSet(false),
    m_phoneOrderHasBeenSet(false),
    m_phoneCircleTimesHasBeenSet(false),
    m_phoneInnerIntervalHasBeenSet(false),
    m_phoneCircleIntervalHasBeenSet(false),
    m_needPhoneArriveNoticeHasBeenSet(false),
    m_phoneCallTypeHasBeenSet(false),
    m_weekdayHasBeenSet(false),
    m_onCallFormIDsHasBeenSet(false),
    m_voiceConfirmKeyHasBeenSet(false)
{
}

CoreInternalOutcome UserNotice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReceiverType") && !value["ReceiverType"].IsNull())
    {
        if (!value["ReceiverType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserNotice.ReceiverType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_receiverType = string(value["ReceiverType"].GetString());
        m_receiverTypeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserNotice.StartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetInt64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserNotice.EndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetInt64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("NoticeWay") && !value["NoticeWay"].IsNull())
    {
        if (!value["NoticeWay"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UserNotice.NoticeWay` is not array type"));

        const rapidjson::Value &tmpValue = value["NoticeWay"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_noticeWay.push_back((*itr).GetString());
        }
        m_noticeWayHasBeenSet = true;
    }

    if (value.HasMember("UserIds") && !value["UserIds"].IsNull())
    {
        if (!value["UserIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UserNotice.UserIds` is not array type"));

        const rapidjson::Value &tmpValue = value["UserIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_userIds.push_back((*itr).GetInt64());
        }
        m_userIdsHasBeenSet = true;
    }

    if (value.HasMember("GroupIds") && !value["GroupIds"].IsNull())
    {
        if (!value["GroupIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UserNotice.GroupIds` is not array type"));

        const rapidjson::Value &tmpValue = value["GroupIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_groupIds.push_back((*itr).GetInt64());
        }
        m_groupIdsHasBeenSet = true;
    }

    if (value.HasMember("PhoneOrder") && !value["PhoneOrder"].IsNull())
    {
        if (!value["PhoneOrder"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UserNotice.PhoneOrder` is not array type"));

        const rapidjson::Value &tmpValue = value["PhoneOrder"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_phoneOrder.push_back((*itr).GetInt64());
        }
        m_phoneOrderHasBeenSet = true;
    }

    if (value.HasMember("PhoneCircleTimes") && !value["PhoneCircleTimes"].IsNull())
    {
        if (!value["PhoneCircleTimes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserNotice.PhoneCircleTimes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_phoneCircleTimes = value["PhoneCircleTimes"].GetInt64();
        m_phoneCircleTimesHasBeenSet = true;
    }

    if (value.HasMember("PhoneInnerInterval") && !value["PhoneInnerInterval"].IsNull())
    {
        if (!value["PhoneInnerInterval"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserNotice.PhoneInnerInterval` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_phoneInnerInterval = value["PhoneInnerInterval"].GetInt64();
        m_phoneInnerIntervalHasBeenSet = true;
    }

    if (value.HasMember("PhoneCircleInterval") && !value["PhoneCircleInterval"].IsNull())
    {
        if (!value["PhoneCircleInterval"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserNotice.PhoneCircleInterval` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_phoneCircleInterval = value["PhoneCircleInterval"].GetInt64();
        m_phoneCircleIntervalHasBeenSet = true;
    }

    if (value.HasMember("NeedPhoneArriveNotice") && !value["NeedPhoneArriveNotice"].IsNull())
    {
        if (!value["NeedPhoneArriveNotice"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserNotice.NeedPhoneArriveNotice` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_needPhoneArriveNotice = value["NeedPhoneArriveNotice"].GetInt64();
        m_needPhoneArriveNoticeHasBeenSet = true;
    }

    if (value.HasMember("PhoneCallType") && !value["PhoneCallType"].IsNull())
    {
        if (!value["PhoneCallType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserNotice.PhoneCallType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phoneCallType = string(value["PhoneCallType"].GetString());
        m_phoneCallTypeHasBeenSet = true;
    }

    if (value.HasMember("Weekday") && !value["Weekday"].IsNull())
    {
        if (!value["Weekday"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UserNotice.Weekday` is not array type"));

        const rapidjson::Value &tmpValue = value["Weekday"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_weekday.push_back((*itr).GetInt64());
        }
        m_weekdayHasBeenSet = true;
    }

    if (value.HasMember("OnCallFormIDs") && !value["OnCallFormIDs"].IsNull())
    {
        if (!value["OnCallFormIDs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UserNotice.OnCallFormIDs` is not array type"));

        const rapidjson::Value &tmpValue = value["OnCallFormIDs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_onCallFormIDs.push_back((*itr).GetString());
        }
        m_onCallFormIDsHasBeenSet = true;
    }

    if (value.HasMember("VoiceConfirmKey") && !value["VoiceConfirmKey"].IsNull())
    {
        if (!value["VoiceConfirmKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserNotice.VoiceConfirmKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voiceConfirmKey = string(value["VoiceConfirmKey"].GetString());
        m_voiceConfirmKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserNotice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_receiverTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiverType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_receiverType.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

    if (m_noticeWayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticeWay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_noticeWay.begin(); itr != m_noticeWay.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_userIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_userIds.begin(); itr != m_userIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_groupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groupIds.begin(); itr != m_groupIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_phoneOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneOrder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_phoneOrder.begin(); itr != m_phoneOrder.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_phoneCircleTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneCircleTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_phoneCircleTimes, allocator);
    }

    if (m_phoneInnerIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneInnerInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_phoneInnerInterval, allocator);
    }

    if (m_phoneCircleIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneCircleInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_phoneCircleInterval, allocator);
    }

    if (m_needPhoneArriveNoticeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedPhoneArriveNotice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needPhoneArriveNotice, allocator);
    }

    if (m_phoneCallTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneCallType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phoneCallType.c_str(), allocator).Move(), allocator);
    }

    if (m_weekdayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weekday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_weekday.begin(); itr != m_weekday.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_onCallFormIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnCallFormIDs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_onCallFormIDs.begin(); itr != m_onCallFormIDs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_voiceConfirmKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceConfirmKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_voiceConfirmKey.c_str(), allocator).Move(), allocator);
    }

}


string UserNotice::GetReceiverType() const
{
    return m_receiverType;
}

void UserNotice::SetReceiverType(const string& _receiverType)
{
    m_receiverType = _receiverType;
    m_receiverTypeHasBeenSet = true;
}

bool UserNotice::ReceiverTypeHasBeenSet() const
{
    return m_receiverTypeHasBeenSet;
}

int64_t UserNotice::GetStartTime() const
{
    return m_startTime;
}

void UserNotice::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool UserNotice::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t UserNotice::GetEndTime() const
{
    return m_endTime;
}

void UserNotice::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool UserNotice::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<string> UserNotice::GetNoticeWay() const
{
    return m_noticeWay;
}

void UserNotice::SetNoticeWay(const vector<string>& _noticeWay)
{
    m_noticeWay = _noticeWay;
    m_noticeWayHasBeenSet = true;
}

bool UserNotice::NoticeWayHasBeenSet() const
{
    return m_noticeWayHasBeenSet;
}

vector<int64_t> UserNotice::GetUserIds() const
{
    return m_userIds;
}

void UserNotice::SetUserIds(const vector<int64_t>& _userIds)
{
    m_userIds = _userIds;
    m_userIdsHasBeenSet = true;
}

bool UserNotice::UserIdsHasBeenSet() const
{
    return m_userIdsHasBeenSet;
}

vector<int64_t> UserNotice::GetGroupIds() const
{
    return m_groupIds;
}

void UserNotice::SetGroupIds(const vector<int64_t>& _groupIds)
{
    m_groupIds = _groupIds;
    m_groupIdsHasBeenSet = true;
}

bool UserNotice::GroupIdsHasBeenSet() const
{
    return m_groupIdsHasBeenSet;
}

vector<int64_t> UserNotice::GetPhoneOrder() const
{
    return m_phoneOrder;
}

void UserNotice::SetPhoneOrder(const vector<int64_t>& _phoneOrder)
{
    m_phoneOrder = _phoneOrder;
    m_phoneOrderHasBeenSet = true;
}

bool UserNotice::PhoneOrderHasBeenSet() const
{
    return m_phoneOrderHasBeenSet;
}

int64_t UserNotice::GetPhoneCircleTimes() const
{
    return m_phoneCircleTimes;
}

void UserNotice::SetPhoneCircleTimes(const int64_t& _phoneCircleTimes)
{
    m_phoneCircleTimes = _phoneCircleTimes;
    m_phoneCircleTimesHasBeenSet = true;
}

bool UserNotice::PhoneCircleTimesHasBeenSet() const
{
    return m_phoneCircleTimesHasBeenSet;
}

int64_t UserNotice::GetPhoneInnerInterval() const
{
    return m_phoneInnerInterval;
}

void UserNotice::SetPhoneInnerInterval(const int64_t& _phoneInnerInterval)
{
    m_phoneInnerInterval = _phoneInnerInterval;
    m_phoneInnerIntervalHasBeenSet = true;
}

bool UserNotice::PhoneInnerIntervalHasBeenSet() const
{
    return m_phoneInnerIntervalHasBeenSet;
}

int64_t UserNotice::GetPhoneCircleInterval() const
{
    return m_phoneCircleInterval;
}

void UserNotice::SetPhoneCircleInterval(const int64_t& _phoneCircleInterval)
{
    m_phoneCircleInterval = _phoneCircleInterval;
    m_phoneCircleIntervalHasBeenSet = true;
}

bool UserNotice::PhoneCircleIntervalHasBeenSet() const
{
    return m_phoneCircleIntervalHasBeenSet;
}

int64_t UserNotice::GetNeedPhoneArriveNotice() const
{
    return m_needPhoneArriveNotice;
}

void UserNotice::SetNeedPhoneArriveNotice(const int64_t& _needPhoneArriveNotice)
{
    m_needPhoneArriveNotice = _needPhoneArriveNotice;
    m_needPhoneArriveNoticeHasBeenSet = true;
}

bool UserNotice::NeedPhoneArriveNoticeHasBeenSet() const
{
    return m_needPhoneArriveNoticeHasBeenSet;
}

string UserNotice::GetPhoneCallType() const
{
    return m_phoneCallType;
}

void UserNotice::SetPhoneCallType(const string& _phoneCallType)
{
    m_phoneCallType = _phoneCallType;
    m_phoneCallTypeHasBeenSet = true;
}

bool UserNotice::PhoneCallTypeHasBeenSet() const
{
    return m_phoneCallTypeHasBeenSet;
}

vector<int64_t> UserNotice::GetWeekday() const
{
    return m_weekday;
}

void UserNotice::SetWeekday(const vector<int64_t>& _weekday)
{
    m_weekday = _weekday;
    m_weekdayHasBeenSet = true;
}

bool UserNotice::WeekdayHasBeenSet() const
{
    return m_weekdayHasBeenSet;
}

vector<string> UserNotice::GetOnCallFormIDs() const
{
    return m_onCallFormIDs;
}

void UserNotice::SetOnCallFormIDs(const vector<string>& _onCallFormIDs)
{
    m_onCallFormIDs = _onCallFormIDs;
    m_onCallFormIDsHasBeenSet = true;
}

bool UserNotice::OnCallFormIDsHasBeenSet() const
{
    return m_onCallFormIDsHasBeenSet;
}

string UserNotice::GetVoiceConfirmKey() const
{
    return m_voiceConfirmKey;
}

void UserNotice::SetVoiceConfirmKey(const string& _voiceConfirmKey)
{
    m_voiceConfirmKey = _voiceConfirmKey;
    m_voiceConfirmKeyHasBeenSet = true;
}

bool UserNotice::VoiceConfirmKeyHasBeenSet() const
{
    return m_voiceConfirmKeyHasBeenSet;
}

