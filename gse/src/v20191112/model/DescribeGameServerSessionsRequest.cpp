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

#include <tencentcloud/gse/v20191112/model/DescribeGameServerSessionsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

DescribeGameServerSessionsRequest::DescribeGameServerSessionsRequest() :
    m_aliasIdHasBeenSet(false),
    m_fleetIdHasBeenSet(false),
    m_gameServerSessionIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_statusFilterHasBeenSet(false)
{
}

string DescribeGameServerSessionsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_aliasIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliasId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_aliasId.c_str(), allocator).Move(), allocator);
    }

    if (m_fleetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FleetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fleetId.c_str(), allocator).Move(), allocator);
    }

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

    if (m_statusFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusFilter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_statusFilter.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeGameServerSessionsRequest::GetAliasId() const
{
    return m_aliasId;
}

void DescribeGameServerSessionsRequest::SetAliasId(const string& _aliasId)
{
    m_aliasId = _aliasId;
    m_aliasIdHasBeenSet = true;
}

bool DescribeGameServerSessionsRequest::AliasIdHasBeenSet() const
{
    return m_aliasIdHasBeenSet;
}

string DescribeGameServerSessionsRequest::GetFleetId() const
{
    return m_fleetId;
}

void DescribeGameServerSessionsRequest::SetFleetId(const string& _fleetId)
{
    m_fleetId = _fleetId;
    m_fleetIdHasBeenSet = true;
}

bool DescribeGameServerSessionsRequest::FleetIdHasBeenSet() const
{
    return m_fleetIdHasBeenSet;
}

string DescribeGameServerSessionsRequest::GetGameServerSessionId() const
{
    return m_gameServerSessionId;
}

void DescribeGameServerSessionsRequest::SetGameServerSessionId(const string& _gameServerSessionId)
{
    m_gameServerSessionId = _gameServerSessionId;
    m_gameServerSessionIdHasBeenSet = true;
}

bool DescribeGameServerSessionsRequest::GameServerSessionIdHasBeenSet() const
{
    return m_gameServerSessionIdHasBeenSet;
}

uint64_t DescribeGameServerSessionsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeGameServerSessionsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeGameServerSessionsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeGameServerSessionsRequest::GetNextToken() const
{
    return m_nextToken;
}

void DescribeGameServerSessionsRequest::SetNextToken(const string& _nextToken)
{
    m_nextToken = _nextToken;
    m_nextTokenHasBeenSet = true;
}

bool DescribeGameServerSessionsRequest::NextTokenHasBeenSet() const
{
    return m_nextTokenHasBeenSet;
}

string DescribeGameServerSessionsRequest::GetStatusFilter() const
{
    return m_statusFilter;
}

void DescribeGameServerSessionsRequest::SetStatusFilter(const string& _statusFilter)
{
    m_statusFilter = _statusFilter;
    m_statusFilterHasBeenSet = true;
}

bool DescribeGameServerSessionsRequest::StatusFilterHasBeenSet() const
{
    return m_statusFilterHasBeenSet;
}


