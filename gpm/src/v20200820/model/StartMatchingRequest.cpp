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

#include <tencentcloud/gpm/v20200820/model/StartMatchingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gpm::V20200820::Model;
using namespace std;

StartMatchingRequest::StartMatchingRequest() :
    m_matchCodeHasBeenSet(false),
    m_playersHasBeenSet(false),
    m_matchTicketIdHasBeenSet(false)
{
}

string StartMatchingRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_matchCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_matchCode.c_str(), allocator).Move(), allocator);
    }

    if (m_playersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Players";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_players.begin(); itr != m_players.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_matchTicketIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchTicketId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_matchTicketId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string StartMatchingRequest::GetMatchCode() const
{
    return m_matchCode;
}

void StartMatchingRequest::SetMatchCode(const string& _matchCode)
{
    m_matchCode = _matchCode;
    m_matchCodeHasBeenSet = true;
}

bool StartMatchingRequest::MatchCodeHasBeenSet() const
{
    return m_matchCodeHasBeenSet;
}

vector<Player> StartMatchingRequest::GetPlayers() const
{
    return m_players;
}

void StartMatchingRequest::SetPlayers(const vector<Player>& _players)
{
    m_players = _players;
    m_playersHasBeenSet = true;
}

bool StartMatchingRequest::PlayersHasBeenSet() const
{
    return m_playersHasBeenSet;
}

string StartMatchingRequest::GetMatchTicketId() const
{
    return m_matchTicketId;
}

void StartMatchingRequest::SetMatchTicketId(const string& _matchTicketId)
{
    m_matchTicketId = _matchTicketId;
    m_matchTicketIdHasBeenSet = true;
}

bool StartMatchingRequest::MatchTicketIdHasBeenSet() const
{
    return m_matchTicketIdHasBeenSet;
}


