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

#include <tencentcloud/monitor/v20180724/model/PolicyGroupReceiverInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

PolicyGroupReceiverInfo::PolicyGroupReceiverInfo() :
    m_endTimeHasBeenSet(false),
    m_needSendNoticeHasBeenSet(false),
    m_notifyWayHasBeenSet(false),
    m_personIntervalHasBeenSet(false),
    m_receiverGroupListHasBeenSet(false),
    m_receiverTypeHasBeenSet(false),
    m_receiverUserListHasBeenSet(false),
    m_recoverNotifyHasBeenSet(false),
    m_roundIntervalHasBeenSet(false),
    m_roundNumberHasBeenSet(false),
    m_sendForHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_uIDListHasBeenSet(false)
{
}

CoreInternalOutcome PolicyGroupReceiverInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyGroupReceiverInfo.EndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetInt64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("NeedSendNotice") && !value["NeedSendNotice"].IsNull())
    {
        if (!value["NeedSendNotice"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyGroupReceiverInfo.NeedSendNotice` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_needSendNotice = value["NeedSendNotice"].GetInt64();
        m_needSendNoticeHasBeenSet = true;
    }

    if (value.HasMember("NotifyWay") && !value["NotifyWay"].IsNull())
    {
        if (!value["NotifyWay"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PolicyGroupReceiverInfo.NotifyWay` is not array type"));

        const rapidjson::Value &tmpValue = value["NotifyWay"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_notifyWay.push_back((*itr).GetString());
        }
        m_notifyWayHasBeenSet = true;
    }

    if (value.HasMember("PersonInterval") && !value["PersonInterval"].IsNull())
    {
        if (!value["PersonInterval"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyGroupReceiverInfo.PersonInterval` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_personInterval = value["PersonInterval"].GetInt64();
        m_personIntervalHasBeenSet = true;
    }

    if (value.HasMember("ReceiverGroupList") && !value["ReceiverGroupList"].IsNull())
    {
        if (!value["ReceiverGroupList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PolicyGroupReceiverInfo.ReceiverGroupList` is not array type"));

        const rapidjson::Value &tmpValue = value["ReceiverGroupList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_receiverGroupList.push_back((*itr).GetInt64());
        }
        m_receiverGroupListHasBeenSet = true;
    }

    if (value.HasMember("ReceiverType") && !value["ReceiverType"].IsNull())
    {
        if (!value["ReceiverType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyGroupReceiverInfo.ReceiverType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_receiverType = string(value["ReceiverType"].GetString());
        m_receiverTypeHasBeenSet = true;
    }

    if (value.HasMember("ReceiverUserList") && !value["ReceiverUserList"].IsNull())
    {
        if (!value["ReceiverUserList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PolicyGroupReceiverInfo.ReceiverUserList` is not array type"));

        const rapidjson::Value &tmpValue = value["ReceiverUserList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_receiverUserList.push_back((*itr).GetInt64());
        }
        m_receiverUserListHasBeenSet = true;
    }

    if (value.HasMember("RecoverNotify") && !value["RecoverNotify"].IsNull())
    {
        if (!value["RecoverNotify"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PolicyGroupReceiverInfo.RecoverNotify` is not array type"));

        const rapidjson::Value &tmpValue = value["RecoverNotify"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_recoverNotify.push_back((*itr).GetString());
        }
        m_recoverNotifyHasBeenSet = true;
    }

    if (value.HasMember("RoundInterval") && !value["RoundInterval"].IsNull())
    {
        if (!value["RoundInterval"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyGroupReceiverInfo.RoundInterval` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_roundInterval = value["RoundInterval"].GetInt64();
        m_roundIntervalHasBeenSet = true;
    }

    if (value.HasMember("RoundNumber") && !value["RoundNumber"].IsNull())
    {
        if (!value["RoundNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyGroupReceiverInfo.RoundNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_roundNumber = value["RoundNumber"].GetInt64();
        m_roundNumberHasBeenSet = true;
    }

    if (value.HasMember("SendFor") && !value["SendFor"].IsNull())
    {
        if (!value["SendFor"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PolicyGroupReceiverInfo.SendFor` is not array type"));

        const rapidjson::Value &tmpValue = value["SendFor"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sendFor.push_back((*itr).GetString());
        }
        m_sendForHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyGroupReceiverInfo.StartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetInt64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("UIDList") && !value["UIDList"].IsNull())
    {
        if (!value["UIDList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PolicyGroupReceiverInfo.UIDList` is not array type"));

        const rapidjson::Value &tmpValue = value["UIDList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_uIDList.push_back((*itr).GetInt64());
        }
        m_uIDListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PolicyGroupReceiverInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

    if (m_needSendNoticeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedSendNotice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needSendNotice, allocator);
    }

    if (m_notifyWayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyWay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_notifyWay.begin(); itr != m_notifyWay.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_personIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_personInterval, allocator);
    }

    if (m_receiverGroupListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiverGroupList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_receiverGroupList.begin(); itr != m_receiverGroupList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_receiverTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiverType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_receiverType.c_str(), allocator).Move(), allocator);
    }

    if (m_receiverUserListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiverUserList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_receiverUserList.begin(); itr != m_receiverUserList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_recoverNotifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecoverNotify";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_recoverNotify.begin(); itr != m_recoverNotify.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_roundIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoundInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roundInterval, allocator);
    }

    if (m_roundNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoundNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roundNumber, allocator);
    }

    if (m_sendForHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendFor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sendFor.begin(); itr != m_sendFor.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_uIDListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UIDList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_uIDList.begin(); itr != m_uIDList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


int64_t PolicyGroupReceiverInfo::GetEndTime() const
{
    return m_endTime;
}

void PolicyGroupReceiverInfo::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool PolicyGroupReceiverInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t PolicyGroupReceiverInfo::GetNeedSendNotice() const
{
    return m_needSendNotice;
}

void PolicyGroupReceiverInfo::SetNeedSendNotice(const int64_t& _needSendNotice)
{
    m_needSendNotice = _needSendNotice;
    m_needSendNoticeHasBeenSet = true;
}

bool PolicyGroupReceiverInfo::NeedSendNoticeHasBeenSet() const
{
    return m_needSendNoticeHasBeenSet;
}

vector<string> PolicyGroupReceiverInfo::GetNotifyWay() const
{
    return m_notifyWay;
}

void PolicyGroupReceiverInfo::SetNotifyWay(const vector<string>& _notifyWay)
{
    m_notifyWay = _notifyWay;
    m_notifyWayHasBeenSet = true;
}

bool PolicyGroupReceiverInfo::NotifyWayHasBeenSet() const
{
    return m_notifyWayHasBeenSet;
}

int64_t PolicyGroupReceiverInfo::GetPersonInterval() const
{
    return m_personInterval;
}

void PolicyGroupReceiverInfo::SetPersonInterval(const int64_t& _personInterval)
{
    m_personInterval = _personInterval;
    m_personIntervalHasBeenSet = true;
}

bool PolicyGroupReceiverInfo::PersonIntervalHasBeenSet() const
{
    return m_personIntervalHasBeenSet;
}

vector<int64_t> PolicyGroupReceiverInfo::GetReceiverGroupList() const
{
    return m_receiverGroupList;
}

void PolicyGroupReceiverInfo::SetReceiverGroupList(const vector<int64_t>& _receiverGroupList)
{
    m_receiverGroupList = _receiverGroupList;
    m_receiverGroupListHasBeenSet = true;
}

bool PolicyGroupReceiverInfo::ReceiverGroupListHasBeenSet() const
{
    return m_receiverGroupListHasBeenSet;
}

string PolicyGroupReceiverInfo::GetReceiverType() const
{
    return m_receiverType;
}

void PolicyGroupReceiverInfo::SetReceiverType(const string& _receiverType)
{
    m_receiverType = _receiverType;
    m_receiverTypeHasBeenSet = true;
}

bool PolicyGroupReceiverInfo::ReceiverTypeHasBeenSet() const
{
    return m_receiverTypeHasBeenSet;
}

vector<int64_t> PolicyGroupReceiverInfo::GetReceiverUserList() const
{
    return m_receiverUserList;
}

void PolicyGroupReceiverInfo::SetReceiverUserList(const vector<int64_t>& _receiverUserList)
{
    m_receiverUserList = _receiverUserList;
    m_receiverUserListHasBeenSet = true;
}

bool PolicyGroupReceiverInfo::ReceiverUserListHasBeenSet() const
{
    return m_receiverUserListHasBeenSet;
}

vector<string> PolicyGroupReceiverInfo::GetRecoverNotify() const
{
    return m_recoverNotify;
}

void PolicyGroupReceiverInfo::SetRecoverNotify(const vector<string>& _recoverNotify)
{
    m_recoverNotify = _recoverNotify;
    m_recoverNotifyHasBeenSet = true;
}

bool PolicyGroupReceiverInfo::RecoverNotifyHasBeenSet() const
{
    return m_recoverNotifyHasBeenSet;
}

int64_t PolicyGroupReceiverInfo::GetRoundInterval() const
{
    return m_roundInterval;
}

void PolicyGroupReceiverInfo::SetRoundInterval(const int64_t& _roundInterval)
{
    m_roundInterval = _roundInterval;
    m_roundIntervalHasBeenSet = true;
}

bool PolicyGroupReceiverInfo::RoundIntervalHasBeenSet() const
{
    return m_roundIntervalHasBeenSet;
}

int64_t PolicyGroupReceiverInfo::GetRoundNumber() const
{
    return m_roundNumber;
}

void PolicyGroupReceiverInfo::SetRoundNumber(const int64_t& _roundNumber)
{
    m_roundNumber = _roundNumber;
    m_roundNumberHasBeenSet = true;
}

bool PolicyGroupReceiverInfo::RoundNumberHasBeenSet() const
{
    return m_roundNumberHasBeenSet;
}

vector<string> PolicyGroupReceiverInfo::GetSendFor() const
{
    return m_sendFor;
}

void PolicyGroupReceiverInfo::SetSendFor(const vector<string>& _sendFor)
{
    m_sendFor = _sendFor;
    m_sendForHasBeenSet = true;
}

bool PolicyGroupReceiverInfo::SendForHasBeenSet() const
{
    return m_sendForHasBeenSet;
}

int64_t PolicyGroupReceiverInfo::GetStartTime() const
{
    return m_startTime;
}

void PolicyGroupReceiverInfo::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool PolicyGroupReceiverInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

vector<int64_t> PolicyGroupReceiverInfo::GetUIDList() const
{
    return m_uIDList;
}

void PolicyGroupReceiverInfo::SetUIDList(const vector<int64_t>& _uIDList)
{
    m_uIDList = _uIDList;
    m_uIDListHasBeenSet = true;
}

bool PolicyGroupReceiverInfo::UIDListHasBeenSet() const
{
    return m_uIDListHasBeenSet;
}

