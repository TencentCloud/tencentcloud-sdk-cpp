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

#include <tencentcloud/apis/v20240801/model/DescribeAgentAppsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

DescribeAgentAppsRequest::DescribeAgentAppsRequest() :
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_iDsHasBeenSet(false),
    m_instanceIDHasBeenSet(false),
    m_notIDsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_authTypeHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_agentCredentialIDHasBeenSet(false)
{
}

string DescribeAgentAppsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_iDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_iDs.begin(); itr != m_iDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_notIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_notIDs.begin(); itr != m_notIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_authTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_authType.c_str(), allocator).Move(), allocator);
    }

    if (m_sortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sort.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_agentCredentialIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentCredentialID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_agentCredentialID.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeAgentAppsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAgentAppsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAgentAppsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeAgentAppsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeAgentAppsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAgentAppsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

vector<string> DescribeAgentAppsRequest::GetIDs() const
{
    return m_iDs;
}

void DescribeAgentAppsRequest::SetIDs(const vector<string>& _iDs)
{
    m_iDs = _iDs;
    m_iDsHasBeenSet = true;
}

bool DescribeAgentAppsRequest::IDsHasBeenSet() const
{
    return m_iDsHasBeenSet;
}

string DescribeAgentAppsRequest::GetInstanceID() const
{
    return m_instanceID;
}

void DescribeAgentAppsRequest::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool DescribeAgentAppsRequest::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

vector<string> DescribeAgentAppsRequest::GetNotIDs() const
{
    return m_notIDs;
}

void DescribeAgentAppsRequest::SetNotIDs(const vector<string>& _notIDs)
{
    m_notIDs = _notIDs;
    m_notIDsHasBeenSet = true;
}

bool DescribeAgentAppsRequest::NotIDsHasBeenSet() const
{
    return m_notIDsHasBeenSet;
}

string DescribeAgentAppsRequest::GetStatus() const
{
    return m_status;
}

void DescribeAgentAppsRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeAgentAppsRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeAgentAppsRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribeAgentAppsRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeAgentAppsRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

string DescribeAgentAppsRequest::GetAuthType() const
{
    return m_authType;
}

void DescribeAgentAppsRequest::SetAuthType(const string& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool DescribeAgentAppsRequest::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

DescribeAgentAppsSortDTO DescribeAgentAppsRequest::GetSort() const
{
    return m_sort;
}

void DescribeAgentAppsRequest::SetSort(const DescribeAgentAppsSortDTO& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool DescribeAgentAppsRequest::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

string DescribeAgentAppsRequest::GetAgentCredentialID() const
{
    return m_agentCredentialID;
}

void DescribeAgentAppsRequest::SetAgentCredentialID(const string& _agentCredentialID)
{
    m_agentCredentialID = _agentCredentialID;
    m_agentCredentialIDHasBeenSet = true;
}

bool DescribeAgentAppsRequest::AgentCredentialIDHasBeenSet() const
{
    return m_agentCredentialIDHasBeenSet;
}


