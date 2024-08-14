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

#include <tencentcloud/organization/v20210331/model/ListUserSyncProvisioningsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

ListUserSyncProvisioningsRequest::ListUserSyncProvisioningsRequest() :
    m_zoneIdHasBeenSet(false),
    m_principalIdHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResultsHasBeenSet(false),
    m_principalTypeHasBeenSet(false),
    m_targetUinHasBeenSet(false),
    m_targetTypeHasBeenSet(false),
    m_filterHasBeenSet(false)
{
}

string ListUserSyncProvisioningsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_principalIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrincipalId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_principalId.c_str(), allocator).Move(), allocator);
    }

    if (m_nextTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nextToken.c_str(), allocator).Move(), allocator);
    }

    if (m_maxResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxResults";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxResults, allocator);
    }

    if (m_principalTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrincipalType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_principalType.c_str(), allocator).Move(), allocator);
    }

    if (m_targetUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_targetUin, allocator);
    }

    if (m_targetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetType.c_str(), allocator).Move(), allocator);
    }

    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filter.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListUserSyncProvisioningsRequest::GetZoneId() const
{
    return m_zoneId;
}

void ListUserSyncProvisioningsRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ListUserSyncProvisioningsRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string ListUserSyncProvisioningsRequest::GetPrincipalId() const
{
    return m_principalId;
}

void ListUserSyncProvisioningsRequest::SetPrincipalId(const string& _principalId)
{
    m_principalId = _principalId;
    m_principalIdHasBeenSet = true;
}

bool ListUserSyncProvisioningsRequest::PrincipalIdHasBeenSet() const
{
    return m_principalIdHasBeenSet;
}

string ListUserSyncProvisioningsRequest::GetNextToken() const
{
    return m_nextToken;
}

void ListUserSyncProvisioningsRequest::SetNextToken(const string& _nextToken)
{
    m_nextToken = _nextToken;
    m_nextTokenHasBeenSet = true;
}

bool ListUserSyncProvisioningsRequest::NextTokenHasBeenSet() const
{
    return m_nextTokenHasBeenSet;
}

int64_t ListUserSyncProvisioningsRequest::GetMaxResults() const
{
    return m_maxResults;
}

void ListUserSyncProvisioningsRequest::SetMaxResults(const int64_t& _maxResults)
{
    m_maxResults = _maxResults;
    m_maxResultsHasBeenSet = true;
}

bool ListUserSyncProvisioningsRequest::MaxResultsHasBeenSet() const
{
    return m_maxResultsHasBeenSet;
}

string ListUserSyncProvisioningsRequest::GetPrincipalType() const
{
    return m_principalType;
}

void ListUserSyncProvisioningsRequest::SetPrincipalType(const string& _principalType)
{
    m_principalType = _principalType;
    m_principalTypeHasBeenSet = true;
}

bool ListUserSyncProvisioningsRequest::PrincipalTypeHasBeenSet() const
{
    return m_principalTypeHasBeenSet;
}

int64_t ListUserSyncProvisioningsRequest::GetTargetUin() const
{
    return m_targetUin;
}

void ListUserSyncProvisioningsRequest::SetTargetUin(const int64_t& _targetUin)
{
    m_targetUin = _targetUin;
    m_targetUinHasBeenSet = true;
}

bool ListUserSyncProvisioningsRequest::TargetUinHasBeenSet() const
{
    return m_targetUinHasBeenSet;
}

string ListUserSyncProvisioningsRequest::GetTargetType() const
{
    return m_targetType;
}

void ListUserSyncProvisioningsRequest::SetTargetType(const string& _targetType)
{
    m_targetType = _targetType;
    m_targetTypeHasBeenSet = true;
}

bool ListUserSyncProvisioningsRequest::TargetTypeHasBeenSet() const
{
    return m_targetTypeHasBeenSet;
}

string ListUserSyncProvisioningsRequest::GetFilter() const
{
    return m_filter;
}

void ListUserSyncProvisioningsRequest::SetFilter(const string& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool ListUserSyncProvisioningsRequest::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}


