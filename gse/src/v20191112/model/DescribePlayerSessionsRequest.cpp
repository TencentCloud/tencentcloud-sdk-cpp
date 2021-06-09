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

#include <tencentcloud/gse/v20191112/model/DescribePlayerSessionsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

DescribePlayerSessionsRequest::DescribePlayerSessionsRequest() :
    m_gameServerSessionIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_playerIdHasBeenSet(false),
    m_playerSessionIdHasBeenSet(false),
    m_playerSessionStatusFilterHasBeenSet(false)
{
}

string DescribePlayerSessionsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_gameServerSessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GameServerSessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gameServerSessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_nextTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nextToken.c_str(), allocator).Move(), allocator);
    }

    if (m_playerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_playerId.c_str(), allocator).Move(), allocator);
    }

    if (m_playerSessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayerSessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_playerSessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_playerSessionStatusFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayerSessionStatusFilter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_playerSessionStatusFilter.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribePlayerSessionsRequest::GetGameServerSessionId() const
{
    return m_gameServerSessionId;
}

void DescribePlayerSessionsRequest::SetGameServerSessionId(const string& _gameServerSessionId)
{
    m_gameServerSessionId = _gameServerSessionId;
    m_gameServerSessionIdHasBeenSet = true;
}

bool DescribePlayerSessionsRequest::GameServerSessionIdHasBeenSet() const
{
    return m_gameServerSessionIdHasBeenSet;
}

uint64_t DescribePlayerSessionsRequest::GetLimit() const
{
    return m_limit;
}

void DescribePlayerSessionsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribePlayerSessionsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribePlayerSessionsRequest::GetNextToken() const
{
    return m_nextToken;
}

void DescribePlayerSessionsRequest::SetNextToken(const string& _nextToken)
{
    m_nextToken = _nextToken;
    m_nextTokenHasBeenSet = true;
}

bool DescribePlayerSessionsRequest::NextTokenHasBeenSet() const
{
    return m_nextTokenHasBeenSet;
}

string DescribePlayerSessionsRequest::GetPlayerId() const
{
    return m_playerId;
}

void DescribePlayerSessionsRequest::SetPlayerId(const string& _playerId)
{
    m_playerId = _playerId;
    m_playerIdHasBeenSet = true;
}

bool DescribePlayerSessionsRequest::PlayerIdHasBeenSet() const
{
    return m_playerIdHasBeenSet;
}

string DescribePlayerSessionsRequest::GetPlayerSessionId() const
{
    return m_playerSessionId;
}

void DescribePlayerSessionsRequest::SetPlayerSessionId(const string& _playerSessionId)
{
    m_playerSessionId = _playerSessionId;
    m_playerSessionIdHasBeenSet = true;
}

bool DescribePlayerSessionsRequest::PlayerSessionIdHasBeenSet() const
{
    return m_playerSessionIdHasBeenSet;
}

string DescribePlayerSessionsRequest::GetPlayerSessionStatusFilter() const
{
    return m_playerSessionStatusFilter;
}

void DescribePlayerSessionsRequest::SetPlayerSessionStatusFilter(const string& _playerSessionStatusFilter)
{
    m_playerSessionStatusFilter = _playerSessionStatusFilter;
    m_playerSessionStatusFilterHasBeenSet = true;
}

bool DescribePlayerSessionsRequest::PlayerSessionStatusFilterHasBeenSet() const
{
    return m_playerSessionStatusFilterHasBeenSet;
}


