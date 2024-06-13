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

#include <tencentcloud/essbasic/v20210526/model/ChannelDescribeOrganizationSealsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

ChannelDescribeOrganizationSealsRequest::ChannelDescribeOrganizationSealsRequest() :
    m_agentHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_infoTypeHasBeenSet(false),
    m_sealIdHasBeenSet(false),
    m_sealTypesHasBeenSet(false),
    m_sealStatusesHasBeenSet(false)
{
}

string ChannelDescribeOrganizationSealsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
    }

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

    if (m_infoTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InfoType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_infoType, allocator);
    }

    if (m_sealIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sealId.c_str(), allocator).Move(), allocator);
    }

    if (m_sealTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sealTypes.begin(); itr != m_sealTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sealStatusesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealStatuses";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sealStatuses.begin(); itr != m_sealStatuses.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Agent ChannelDescribeOrganizationSealsRequest::GetAgent() const
{
    return m_agent;
}

void ChannelDescribeOrganizationSealsRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool ChannelDescribeOrganizationSealsRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

int64_t ChannelDescribeOrganizationSealsRequest::GetLimit() const
{
    return m_limit;
}

void ChannelDescribeOrganizationSealsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool ChannelDescribeOrganizationSealsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t ChannelDescribeOrganizationSealsRequest::GetOffset() const
{
    return m_offset;
}

void ChannelDescribeOrganizationSealsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool ChannelDescribeOrganizationSealsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t ChannelDescribeOrganizationSealsRequest::GetInfoType() const
{
    return m_infoType;
}

void ChannelDescribeOrganizationSealsRequest::SetInfoType(const int64_t& _infoType)
{
    m_infoType = _infoType;
    m_infoTypeHasBeenSet = true;
}

bool ChannelDescribeOrganizationSealsRequest::InfoTypeHasBeenSet() const
{
    return m_infoTypeHasBeenSet;
}

string ChannelDescribeOrganizationSealsRequest::GetSealId() const
{
    return m_sealId;
}

void ChannelDescribeOrganizationSealsRequest::SetSealId(const string& _sealId)
{
    m_sealId = _sealId;
    m_sealIdHasBeenSet = true;
}

bool ChannelDescribeOrganizationSealsRequest::SealIdHasBeenSet() const
{
    return m_sealIdHasBeenSet;
}

vector<string> ChannelDescribeOrganizationSealsRequest::GetSealTypes() const
{
    return m_sealTypes;
}

void ChannelDescribeOrganizationSealsRequest::SetSealTypes(const vector<string>& _sealTypes)
{
    m_sealTypes = _sealTypes;
    m_sealTypesHasBeenSet = true;
}

bool ChannelDescribeOrganizationSealsRequest::SealTypesHasBeenSet() const
{
    return m_sealTypesHasBeenSet;
}

vector<string> ChannelDescribeOrganizationSealsRequest::GetSealStatuses() const
{
    return m_sealStatuses;
}

void ChannelDescribeOrganizationSealsRequest::SetSealStatuses(const vector<string>& _sealStatuses)
{
    m_sealStatuses = _sealStatuses;
    m_sealStatusesHasBeenSet = true;
}

bool ChannelDescribeOrganizationSealsRequest::SealStatusesHasBeenSet() const
{
    return m_sealStatusesHasBeenSet;
}


