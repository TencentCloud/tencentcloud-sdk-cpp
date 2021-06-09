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

#include <tencentcloud/gse/v20191112/model/DescribeGameServerSessionDetailsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

DescribeGameServerSessionDetailsRequest::DescribeGameServerSessionDetailsRequest() :
    m_aliasIdHasBeenSet(false),
    m_fleetIdHasBeenSet(false),
    m_gameServerSessionIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_statusFilterHasBeenSet(false)
{
}

string DescribeGameServerSessionDetailsRequest::ToJsonString() const
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


string DescribeGameServerSessionDetailsRequest::GetAliasId() const
{
    return m_aliasId;
}

void DescribeGameServerSessionDetailsRequest::SetAliasId(const string& _aliasId)
{
    m_aliasId = _aliasId;
    m_aliasIdHasBeenSet = true;
}

bool DescribeGameServerSessionDetailsRequest::AliasIdHasBeenSet() const
{
    return m_aliasIdHasBeenSet;
}

string DescribeGameServerSessionDetailsRequest::GetFleetId() const
{
    return m_fleetId;
}

void DescribeGameServerSessionDetailsRequest::SetFleetId(const string& _fleetId)
{
    m_fleetId = _fleetId;
    m_fleetIdHasBeenSet = true;
}

bool DescribeGameServerSessionDetailsRequest::FleetIdHasBeenSet() const
{
    return m_fleetIdHasBeenSet;
}

string DescribeGameServerSessionDetailsRequest::GetGameServerSessionId() const
{
    return m_gameServerSessionId;
}

void DescribeGameServerSessionDetailsRequest::SetGameServerSessionId(const string& _gameServerSessionId)
{
    m_gameServerSessionId = _gameServerSessionId;
    m_gameServerSessionIdHasBeenSet = true;
}

bool DescribeGameServerSessionDetailsRequest::GameServerSessionIdHasBeenSet() const
{
    return m_gameServerSessionIdHasBeenSet;
}

uint64_t DescribeGameServerSessionDetailsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeGameServerSessionDetailsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeGameServerSessionDetailsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeGameServerSessionDetailsRequest::GetNextToken() const
{
    return m_nextToken;
}

void DescribeGameServerSessionDetailsRequest::SetNextToken(const string& _nextToken)
{
    m_nextToken = _nextToken;
    m_nextTokenHasBeenSet = true;
}

bool DescribeGameServerSessionDetailsRequest::NextTokenHasBeenSet() const
{
    return m_nextTokenHasBeenSet;
}

string DescribeGameServerSessionDetailsRequest::GetStatusFilter() const
{
    return m_statusFilter;
}

void DescribeGameServerSessionDetailsRequest::SetStatusFilter(const string& _statusFilter)
{
    m_statusFilter = _statusFilter;
    m_statusFilterHasBeenSet = true;
}

bool DescribeGameServerSessionDetailsRequest::StatusFilterHasBeenSet() const
{
    return m_statusFilterHasBeenSet;
}


