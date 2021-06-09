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

#include <tencentcloud/gse/v20191112/model/SearchGameServerSessionsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

SearchGameServerSessionsRequest::SearchGameServerSessionsRequest() :
    m_aliasIdHasBeenSet(false),
    m_fleetIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_filterExpressionHasBeenSet(false),
    m_sortExpressionHasBeenSet(false)
{
}

string SearchGameServerSessionsRequest::ToJsonString() const
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

    if (m_filterExpressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterExpression";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filterExpression.c_str(), allocator).Move(), allocator);
    }

    if (m_sortExpressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortExpression";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortExpression.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SearchGameServerSessionsRequest::GetAliasId() const
{
    return m_aliasId;
}

void SearchGameServerSessionsRequest::SetAliasId(const string& _aliasId)
{
    m_aliasId = _aliasId;
    m_aliasIdHasBeenSet = true;
}

bool SearchGameServerSessionsRequest::AliasIdHasBeenSet() const
{
    return m_aliasIdHasBeenSet;
}

string SearchGameServerSessionsRequest::GetFleetId() const
{
    return m_fleetId;
}

void SearchGameServerSessionsRequest::SetFleetId(const string& _fleetId)
{
    m_fleetId = _fleetId;
    m_fleetIdHasBeenSet = true;
}

bool SearchGameServerSessionsRequest::FleetIdHasBeenSet() const
{
    return m_fleetIdHasBeenSet;
}

uint64_t SearchGameServerSessionsRequest::GetLimit() const
{
    return m_limit;
}

void SearchGameServerSessionsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool SearchGameServerSessionsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string SearchGameServerSessionsRequest::GetNextToken() const
{
    return m_nextToken;
}

void SearchGameServerSessionsRequest::SetNextToken(const string& _nextToken)
{
    m_nextToken = _nextToken;
    m_nextTokenHasBeenSet = true;
}

bool SearchGameServerSessionsRequest::NextTokenHasBeenSet() const
{
    return m_nextTokenHasBeenSet;
}

string SearchGameServerSessionsRequest::GetFilterExpression() const
{
    return m_filterExpression;
}

void SearchGameServerSessionsRequest::SetFilterExpression(const string& _filterExpression)
{
    m_filterExpression = _filterExpression;
    m_filterExpressionHasBeenSet = true;
}

bool SearchGameServerSessionsRequest::FilterExpressionHasBeenSet() const
{
    return m_filterExpressionHasBeenSet;
}

string SearchGameServerSessionsRequest::GetSortExpression() const
{
    return m_sortExpression;
}

void SearchGameServerSessionsRequest::SetSortExpression(const string& _sortExpression)
{
    m_sortExpression = _sortExpression;
    m_sortExpressionHasBeenSet = true;
}

bool SearchGameServerSessionsRequest::SortExpressionHasBeenSet() const
{
    return m_sortExpressionHasBeenSet;
}


