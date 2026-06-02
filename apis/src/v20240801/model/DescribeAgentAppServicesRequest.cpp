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

#include <tencentcloud/apis/v20240801/model/DescribeAgentAppServicesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

DescribeAgentAppServicesRequest::DescribeAgentAppServicesRequest() :
    m_instanceIDHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_iDsHasBeenSet(false),
    m_agentAppIDsHasBeenSet(false),
    m_serviceIDsHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_agentCredentialExistHasBeenSet(false),
    m_agentCredentialIDsHasBeenSet(false)
{
}

string DescribeAgentAppServicesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
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

    if (m_agentAppIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentAppIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_agentAppIDs.begin(); itr != m_agentAppIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_serviceIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_serviceIDs.begin(); itr != m_serviceIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_agentCredentialExistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentCredentialExist";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_agentCredentialExist, allocator);
    }

    if (m_agentCredentialIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentCredentialIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_agentCredentialIDs.begin(); itr != m_agentCredentialIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeAgentAppServicesRequest::GetInstanceID() const
{
    return m_instanceID;
}

void DescribeAgentAppServicesRequest::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool DescribeAgentAppServicesRequest::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

uint64_t DescribeAgentAppServicesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAgentAppServicesRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAgentAppServicesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<string> DescribeAgentAppServicesRequest::GetIDs() const
{
    return m_iDs;
}

void DescribeAgentAppServicesRequest::SetIDs(const vector<string>& _iDs)
{
    m_iDs = _iDs;
    m_iDsHasBeenSet = true;
}

bool DescribeAgentAppServicesRequest::IDsHasBeenSet() const
{
    return m_iDsHasBeenSet;
}

vector<string> DescribeAgentAppServicesRequest::GetAgentAppIDs() const
{
    return m_agentAppIDs;
}

void DescribeAgentAppServicesRequest::SetAgentAppIDs(const vector<string>& _agentAppIDs)
{
    m_agentAppIDs = _agentAppIDs;
    m_agentAppIDsHasBeenSet = true;
}

bool DescribeAgentAppServicesRequest::AgentAppIDsHasBeenSet() const
{
    return m_agentAppIDsHasBeenSet;
}

vector<string> DescribeAgentAppServicesRequest::GetServiceIDs() const
{
    return m_serviceIDs;
}

void DescribeAgentAppServicesRequest::SetServiceIDs(const vector<string>& _serviceIDs)
{
    m_serviceIDs = _serviceIDs;
    m_serviceIDsHasBeenSet = true;
}

bool DescribeAgentAppServicesRequest::ServiceIDsHasBeenSet() const
{
    return m_serviceIDsHasBeenSet;
}

string DescribeAgentAppServicesRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribeAgentAppServicesRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeAgentAppServicesRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

uint64_t DescribeAgentAppServicesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeAgentAppServicesRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAgentAppServicesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

bool DescribeAgentAppServicesRequest::GetAgentCredentialExist() const
{
    return m_agentCredentialExist;
}

void DescribeAgentAppServicesRequest::SetAgentCredentialExist(const bool& _agentCredentialExist)
{
    m_agentCredentialExist = _agentCredentialExist;
    m_agentCredentialExistHasBeenSet = true;
}

bool DescribeAgentAppServicesRequest::AgentCredentialExistHasBeenSet() const
{
    return m_agentCredentialExistHasBeenSet;
}

vector<string> DescribeAgentAppServicesRequest::GetAgentCredentialIDs() const
{
    return m_agentCredentialIDs;
}

void DescribeAgentAppServicesRequest::SetAgentCredentialIDs(const vector<string>& _agentCredentialIDs)
{
    m_agentCredentialIDs = _agentCredentialIDs;
    m_agentCredentialIDsHasBeenSet = true;
}

bool DescribeAgentAppServicesRequest::AgentCredentialIDsHasBeenSet() const
{
    return m_agentCredentialIDsHasBeenSet;
}


