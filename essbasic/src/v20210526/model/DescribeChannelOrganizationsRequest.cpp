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

#include <tencentcloud/essbasic/v20210526/model/DescribeChannelOrganizationsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

DescribeChannelOrganizationsRequest::DescribeChannelOrganizationsRequest() :
    m_agentHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_organizationOpenIdHasBeenSet(false),
    m_authorizationStatusListHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string DescribeChannelOrganizationsRequest::ToJsonString() const
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

    if (m_organizationOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationOpenId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_organizationOpenId.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizationStatusListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizationStatusList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_authorizationStatusList.begin(); itr != m_authorizationStatusList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Agent DescribeChannelOrganizationsRequest::GetAgent() const
{
    return m_agent;
}

void DescribeChannelOrganizationsRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool DescribeChannelOrganizationsRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

int64_t DescribeChannelOrganizationsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeChannelOrganizationsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeChannelOrganizationsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeChannelOrganizationsRequest::GetOrganizationOpenId() const
{
    return m_organizationOpenId;
}

void DescribeChannelOrganizationsRequest::SetOrganizationOpenId(const string& _organizationOpenId)
{
    m_organizationOpenId = _organizationOpenId;
    m_organizationOpenIdHasBeenSet = true;
}

bool DescribeChannelOrganizationsRequest::OrganizationOpenIdHasBeenSet() const
{
    return m_organizationOpenIdHasBeenSet;
}

vector<string> DescribeChannelOrganizationsRequest::GetAuthorizationStatusList() const
{
    return m_authorizationStatusList;
}

void DescribeChannelOrganizationsRequest::SetAuthorizationStatusList(const vector<string>& _authorizationStatusList)
{
    m_authorizationStatusList = _authorizationStatusList;
    m_authorizationStatusListHasBeenSet = true;
}

bool DescribeChannelOrganizationsRequest::AuthorizationStatusListHasBeenSet() const
{
    return m_authorizationStatusListHasBeenSet;
}

int64_t DescribeChannelOrganizationsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeChannelOrganizationsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeChannelOrganizationsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


