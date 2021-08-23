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

#include <tencentcloud/gpm/v20200820/model/MatchTicket.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gpm::V20200820::Model;
using namespace std;

MatchTicket::MatchTicket() :
    m_idHasBeenSet(false),
    m_matchCodeHasBeenSet(false),
    m_matchResultHasBeenSet(false),
    m_matchTypeHasBeenSet(false),
    m_playersHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

CoreInternalOutcome MatchTicket::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MatchTicket.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("MatchCode") && !value["MatchCode"].IsNull())
    {
        if (!value["MatchCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MatchTicket.MatchCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchCode = string(value["MatchCode"].GetString());
        m_matchCodeHasBeenSet = true;
    }

    if (value.HasMember("MatchResult") && !value["MatchResult"].IsNull())
    {
        if (!value["MatchResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MatchTicket.MatchResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchResult = string(value["MatchResult"].GetString());
        m_matchResultHasBeenSet = true;
    }

    if (value.HasMember("MatchType") && !value["MatchType"].IsNull())
    {
        if (!value["MatchType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MatchTicket.MatchType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchType = string(value["MatchType"].GetString());
        m_matchTypeHasBeenSet = true;
    }

    if (value.HasMember("Players") && !value["Players"].IsNull())
    {
        if (!value["Players"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MatchTicket.Players` is not array type"));

        const rapidjson::Value &tmpValue = value["Players"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Player item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_players.push_back(item);
        }
        m_playersHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MatchTicket.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusMessage") && !value["StatusMessage"].IsNull())
    {
        if (!value["StatusMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MatchTicket.StatusMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusMessage = string(value["StatusMessage"].GetString());
        m_statusMessageHasBeenSet = true;
    }

    if (value.HasMember("StatusReason") && !value["StatusReason"].IsNull())
    {
        if (!value["StatusReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MatchTicket.StatusReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusReason = string(value["StatusReason"].GetString());
        m_statusReasonHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MatchTicket.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MatchTicket.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MatchTicket::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_matchCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchCode.c_str(), allocator).Move(), allocator);
    }

    if (m_matchResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchResult.c_str(), allocator).Move(), allocator);
    }

    if (m_matchTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchType.c_str(), allocator).Move(), allocator);
    }

    if (m_playersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Players";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_players.begin(); itr != m_players.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_statusMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_statusReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusReason.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

}


string MatchTicket::GetId() const
{
    return m_id;
}

void MatchTicket::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool MatchTicket::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string MatchTicket::GetMatchCode() const
{
    return m_matchCode;
}

void MatchTicket::SetMatchCode(const string& _matchCode)
{
    m_matchCode = _matchCode;
    m_matchCodeHasBeenSet = true;
}

bool MatchTicket::MatchCodeHasBeenSet() const
{
    return m_matchCodeHasBeenSet;
}

string MatchTicket::GetMatchResult() const
{
    return m_matchResult;
}

void MatchTicket::SetMatchResult(const string& _matchResult)
{
    m_matchResult = _matchResult;
    m_matchResultHasBeenSet = true;
}

bool MatchTicket::MatchResultHasBeenSet() const
{
    return m_matchResultHasBeenSet;
}

string MatchTicket::GetMatchType() const
{
    return m_matchType;
}

void MatchTicket::SetMatchType(const string& _matchType)
{
    m_matchType = _matchType;
    m_matchTypeHasBeenSet = true;
}

bool MatchTicket::MatchTypeHasBeenSet() const
{
    return m_matchTypeHasBeenSet;
}

vector<Player> MatchTicket::GetPlayers() const
{
    return m_players;
}

void MatchTicket::SetPlayers(const vector<Player>& _players)
{
    m_players = _players;
    m_playersHasBeenSet = true;
}

bool MatchTicket::PlayersHasBeenSet() const
{
    return m_playersHasBeenSet;
}

string MatchTicket::GetStatus() const
{
    return m_status;
}

void MatchTicket::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool MatchTicket::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string MatchTicket::GetStatusMessage() const
{
    return m_statusMessage;
}

void MatchTicket::SetStatusMessage(const string& _statusMessage)
{
    m_statusMessage = _statusMessage;
    m_statusMessageHasBeenSet = true;
}

bool MatchTicket::StatusMessageHasBeenSet() const
{
    return m_statusMessageHasBeenSet;
}

string MatchTicket::GetStatusReason() const
{
    return m_statusReason;
}

void MatchTicket::SetStatusReason(const string& _statusReason)
{
    m_statusReason = _statusReason;
    m_statusReasonHasBeenSet = true;
}

bool MatchTicket::StatusReasonHasBeenSet() const
{
    return m_statusReasonHasBeenSet;
}

string MatchTicket::GetStartTime() const
{
    return m_startTime;
}

void MatchTicket::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool MatchTicket::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string MatchTicket::GetEndTime() const
{
    return m_endTime;
}

void MatchTicket::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool MatchTicket::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

