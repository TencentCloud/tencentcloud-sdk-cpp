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

#include <tencentcloud/ess/v20201111/model/DescribeOrganizationSealsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

DescribeOrganizationSealsRequest::DescribeOrganizationSealsRequest() :
    m_operatorHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_infoTypeHasBeenSet(false),
    m_sealIdHasBeenSet(false),
    m_sealTypesHasBeenSet(false),
    m_agentHasBeenSet(false),
    m_sealStatusesHasBeenSet(false)
{
}

string DescribeOrganizationSealsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
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

    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
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


UserInfo DescribeOrganizationSealsRequest::GetOperator() const
{
    return m_operator;
}

void DescribeOrganizationSealsRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool DescribeOrganizationSealsRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

int64_t DescribeOrganizationSealsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeOrganizationSealsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeOrganizationSealsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeOrganizationSealsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeOrganizationSealsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeOrganizationSealsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeOrganizationSealsRequest::GetInfoType() const
{
    return m_infoType;
}

void DescribeOrganizationSealsRequest::SetInfoType(const int64_t& _infoType)
{
    m_infoType = _infoType;
    m_infoTypeHasBeenSet = true;
}

bool DescribeOrganizationSealsRequest::InfoTypeHasBeenSet() const
{
    return m_infoTypeHasBeenSet;
}

string DescribeOrganizationSealsRequest::GetSealId() const
{
    return m_sealId;
}

void DescribeOrganizationSealsRequest::SetSealId(const string& _sealId)
{
    m_sealId = _sealId;
    m_sealIdHasBeenSet = true;
}

bool DescribeOrganizationSealsRequest::SealIdHasBeenSet() const
{
    return m_sealIdHasBeenSet;
}

vector<string> DescribeOrganizationSealsRequest::GetSealTypes() const
{
    return m_sealTypes;
}

void DescribeOrganizationSealsRequest::SetSealTypes(const vector<string>& _sealTypes)
{
    m_sealTypes = _sealTypes;
    m_sealTypesHasBeenSet = true;
}

bool DescribeOrganizationSealsRequest::SealTypesHasBeenSet() const
{
    return m_sealTypesHasBeenSet;
}

Agent DescribeOrganizationSealsRequest::GetAgent() const
{
    return m_agent;
}

void DescribeOrganizationSealsRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool DescribeOrganizationSealsRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

vector<string> DescribeOrganizationSealsRequest::GetSealStatuses() const
{
    return m_sealStatuses;
}

void DescribeOrganizationSealsRequest::SetSealStatuses(const vector<string>& _sealStatuses)
{
    m_sealStatuses = _sealStatuses;
    m_sealStatusesHasBeenSet = true;
}

bool DescribeOrganizationSealsRequest::SealStatusesHasBeenSet() const
{
    return m_sealStatusesHasBeenSet;
}


