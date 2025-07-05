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

#include <tencentcloud/monitor/v20180724/model/ReceiverInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

ReceiverInfo::ReceiverInfo() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_notifyWayHasBeenSet(false),
    m_receiverTypeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_sendForHasBeenSet(false),
    m_uidListHasBeenSet(false),
    m_roundNumberHasBeenSet(false),
    m_personIntervalHasBeenSet(false),
    m_roundIntervalHasBeenSet(false),
    m_recoverNotifyHasBeenSet(false),
    m_needSendNoticeHasBeenSet(false),
    m_receiverGroupListHasBeenSet(false),
    m_receiverUserListHasBeenSet(false),
    m_receiveLanguageHasBeenSet(false)
{
}

CoreInternalOutcome ReceiverInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReceiverInfo.StartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetInt64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReceiverInfo.EndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetInt64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("NotifyWay") && !value["NotifyWay"].IsNull())
    {
        if (!value["NotifyWay"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReceiverInfo.NotifyWay` is not array type"));

        const rapidjson::Value &tmpValue = value["NotifyWay"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_notifyWay.push_back((*itr).GetString());
        }
        m_notifyWayHasBeenSet = true;
    }

    if (value.HasMember("ReceiverType") && !value["ReceiverType"].IsNull())
    {
        if (!value["ReceiverType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReceiverInfo.ReceiverType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_receiverType = string(value["ReceiverType"].GetString());
        m_receiverTypeHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReceiverInfo.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("SendFor") && !value["SendFor"].IsNull())
    {
        if (!value["SendFor"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReceiverInfo.SendFor` is not array type"));

        const rapidjson::Value &tmpValue = value["SendFor"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sendFor.push_back((*itr).GetString());
        }
        m_sendForHasBeenSet = true;
    }

    if (value.HasMember("UidList") && !value["UidList"].IsNull())
    {
        if (!value["UidList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReceiverInfo.UidList` is not array type"));

        const rapidjson::Value &tmpValue = value["UidList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_uidList.push_back((*itr).GetInt64());
        }
        m_uidListHasBeenSet = true;
    }

    if (value.HasMember("RoundNumber") && !value["RoundNumber"].IsNull())
    {
        if (!value["RoundNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReceiverInfo.RoundNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_roundNumber = value["RoundNumber"].GetInt64();
        m_roundNumberHasBeenSet = true;
    }

    if (value.HasMember("PersonInterval") && !value["PersonInterval"].IsNull())
    {
        if (!value["PersonInterval"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReceiverInfo.PersonInterval` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_personInterval = value["PersonInterval"].GetInt64();
        m_personIntervalHasBeenSet = true;
    }

    if (value.HasMember("RoundInterval") && !value["RoundInterval"].IsNull())
    {
        if (!value["RoundInterval"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReceiverInfo.RoundInterval` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_roundInterval = value["RoundInterval"].GetInt64();
        m_roundIntervalHasBeenSet = true;
    }

    if (value.HasMember("RecoverNotify") && !value["RecoverNotify"].IsNull())
    {
        if (!value["RecoverNotify"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReceiverInfo.RecoverNotify` is not array type"));

        const rapidjson::Value &tmpValue = value["RecoverNotify"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_recoverNotify.push_back((*itr).GetString());
        }
        m_recoverNotifyHasBeenSet = true;
    }

    if (value.HasMember("NeedSendNotice") && !value["NeedSendNotice"].IsNull())
    {
        if (!value["NeedSendNotice"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReceiverInfo.NeedSendNotice` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_needSendNotice = value["NeedSendNotice"].GetInt64();
        m_needSendNoticeHasBeenSet = true;
    }

    if (value.HasMember("ReceiverGroupList") && !value["ReceiverGroupList"].IsNull())
    {
        if (!value["ReceiverGroupList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReceiverInfo.ReceiverGroupList` is not array type"));

        const rapidjson::Value &tmpValue = value["ReceiverGroupList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_receiverGroupList.push_back((*itr).GetInt64());
        }
        m_receiverGroupListHasBeenSet = true;
    }

    if (value.HasMember("ReceiverUserList") && !value["ReceiverUserList"].IsNull())
    {
        if (!value["ReceiverUserList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReceiverInfo.ReceiverUserList` is not array type"));

        const rapidjson::Value &tmpValue = value["ReceiverUserList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_receiverUserList.push_back((*itr).GetInt64());
        }
        m_receiverUserListHasBeenSet = true;
    }

    if (value.HasMember("ReceiveLanguage") && !value["ReceiveLanguage"].IsNull())
    {
        if (!value["ReceiveLanguage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReceiverInfo.ReceiveLanguage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_receiveLanguage = string(value["ReceiveLanguage"].GetString());
        m_receiveLanguageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReceiverInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_receiverTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiverType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_receiverType.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
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

    if (m_uidListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UidList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_uidList.begin(); itr != m_uidList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_roundNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoundNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roundNumber, allocator);
    }

    if (m_personIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_personInterval, allocator);
    }

    if (m_roundIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoundInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roundInterval, allocator);
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

    if (m_needSendNoticeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedSendNotice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needSendNotice, allocator);
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

    if (m_receiveLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiveLanguage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_receiveLanguage.c_str(), allocator).Move(), allocator);
    }

}


int64_t ReceiverInfo::GetStartTime() const
{
    return m_startTime;
}

void ReceiverInfo::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ReceiverInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t ReceiverInfo::GetEndTime() const
{
    return m_endTime;
}

void ReceiverInfo::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ReceiverInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<string> ReceiverInfo::GetNotifyWay() const
{
    return m_notifyWay;
}

void ReceiverInfo::SetNotifyWay(const vector<string>& _notifyWay)
{
    m_notifyWay = _notifyWay;
    m_notifyWayHasBeenSet = true;
}

bool ReceiverInfo::NotifyWayHasBeenSet() const
{
    return m_notifyWayHasBeenSet;
}

string ReceiverInfo::GetReceiverType() const
{
    return m_receiverType;
}

void ReceiverInfo::SetReceiverType(const string& _receiverType)
{
    m_receiverType = _receiverType;
    m_receiverTypeHasBeenSet = true;
}

bool ReceiverInfo::ReceiverTypeHasBeenSet() const
{
    return m_receiverTypeHasBeenSet;
}

int64_t ReceiverInfo::GetId() const
{
    return m_id;
}

void ReceiverInfo::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ReceiverInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

vector<string> ReceiverInfo::GetSendFor() const
{
    return m_sendFor;
}

void ReceiverInfo::SetSendFor(const vector<string>& _sendFor)
{
    m_sendFor = _sendFor;
    m_sendForHasBeenSet = true;
}

bool ReceiverInfo::SendForHasBeenSet() const
{
    return m_sendForHasBeenSet;
}

vector<int64_t> ReceiverInfo::GetUidList() const
{
    return m_uidList;
}

void ReceiverInfo::SetUidList(const vector<int64_t>& _uidList)
{
    m_uidList = _uidList;
    m_uidListHasBeenSet = true;
}

bool ReceiverInfo::UidListHasBeenSet() const
{
    return m_uidListHasBeenSet;
}

int64_t ReceiverInfo::GetRoundNumber() const
{
    return m_roundNumber;
}

void ReceiverInfo::SetRoundNumber(const int64_t& _roundNumber)
{
    m_roundNumber = _roundNumber;
    m_roundNumberHasBeenSet = true;
}

bool ReceiverInfo::RoundNumberHasBeenSet() const
{
    return m_roundNumberHasBeenSet;
}

int64_t ReceiverInfo::GetPersonInterval() const
{
    return m_personInterval;
}

void ReceiverInfo::SetPersonInterval(const int64_t& _personInterval)
{
    m_personInterval = _personInterval;
    m_personIntervalHasBeenSet = true;
}

bool ReceiverInfo::PersonIntervalHasBeenSet() const
{
    return m_personIntervalHasBeenSet;
}

int64_t ReceiverInfo::GetRoundInterval() const
{
    return m_roundInterval;
}

void ReceiverInfo::SetRoundInterval(const int64_t& _roundInterval)
{
    m_roundInterval = _roundInterval;
    m_roundIntervalHasBeenSet = true;
}

bool ReceiverInfo::RoundIntervalHasBeenSet() const
{
    return m_roundIntervalHasBeenSet;
}

vector<string> ReceiverInfo::GetRecoverNotify() const
{
    return m_recoverNotify;
}

void ReceiverInfo::SetRecoverNotify(const vector<string>& _recoverNotify)
{
    m_recoverNotify = _recoverNotify;
    m_recoverNotifyHasBeenSet = true;
}

bool ReceiverInfo::RecoverNotifyHasBeenSet() const
{
    return m_recoverNotifyHasBeenSet;
}

int64_t ReceiverInfo::GetNeedSendNotice() const
{
    return m_needSendNotice;
}

void ReceiverInfo::SetNeedSendNotice(const int64_t& _needSendNotice)
{
    m_needSendNotice = _needSendNotice;
    m_needSendNoticeHasBeenSet = true;
}

bool ReceiverInfo::NeedSendNoticeHasBeenSet() const
{
    return m_needSendNoticeHasBeenSet;
}

vector<int64_t> ReceiverInfo::GetReceiverGroupList() const
{
    return m_receiverGroupList;
}

void ReceiverInfo::SetReceiverGroupList(const vector<int64_t>& _receiverGroupList)
{
    m_receiverGroupList = _receiverGroupList;
    m_receiverGroupListHasBeenSet = true;
}

bool ReceiverInfo::ReceiverGroupListHasBeenSet() const
{
    return m_receiverGroupListHasBeenSet;
}

vector<int64_t> ReceiverInfo::GetReceiverUserList() const
{
    return m_receiverUserList;
}

void ReceiverInfo::SetReceiverUserList(const vector<int64_t>& _receiverUserList)
{
    m_receiverUserList = _receiverUserList;
    m_receiverUserListHasBeenSet = true;
}

bool ReceiverInfo::ReceiverUserListHasBeenSet() const
{
    return m_receiverUserListHasBeenSet;
}

string ReceiverInfo::GetReceiveLanguage() const
{
    return m_receiveLanguage;
}

void ReceiverInfo::SetReceiveLanguage(const string& _receiveLanguage)
{
    m_receiveLanguage = _receiveLanguage;
    m_receiveLanguageHasBeenSet = true;
}

bool ReceiverInfo::ReceiveLanguageHasBeenSet() const
{
    return m_receiveLanguageHasBeenSet;
}

