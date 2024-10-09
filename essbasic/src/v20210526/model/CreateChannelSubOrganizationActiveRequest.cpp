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

#include <tencentcloud/essbasic/v20210526/model/CreateChannelSubOrganizationActiveRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

CreateChannelSubOrganizationActiveRequest::CreateChannelSubOrganizationActiveRequest() :
    m_agentHasBeenSet(false),
    m_subOrganizationOpenIdsHasBeenSet(false),
    m_renewHasBeenSet(false)
{
}

string CreateChannelSubOrganizationActiveRequest::ToJsonString() const
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

    if (m_subOrganizationOpenIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubOrganizationOpenIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subOrganizationOpenIds.begin(); itr != m_subOrganizationOpenIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_renewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Renew";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_renew, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Agent CreateChannelSubOrganizationActiveRequest::GetAgent() const
{
    return m_agent;
}

void CreateChannelSubOrganizationActiveRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CreateChannelSubOrganizationActiveRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

vector<string> CreateChannelSubOrganizationActiveRequest::GetSubOrganizationOpenIds() const
{
    return m_subOrganizationOpenIds;
}

void CreateChannelSubOrganizationActiveRequest::SetSubOrganizationOpenIds(const vector<string>& _subOrganizationOpenIds)
{
    m_subOrganizationOpenIds = _subOrganizationOpenIds;
    m_subOrganizationOpenIdsHasBeenSet = true;
}

bool CreateChannelSubOrganizationActiveRequest::SubOrganizationOpenIdsHasBeenSet() const
{
    return m_subOrganizationOpenIdsHasBeenSet;
}

bool CreateChannelSubOrganizationActiveRequest::GetRenew() const
{
    return m_renew;
}

void CreateChannelSubOrganizationActiveRequest::SetRenew(const bool& _renew)
{
    m_renew = _renew;
    m_renewHasBeenSet = true;
}

bool CreateChannelSubOrganizationActiveRequest::RenewHasBeenSet() const
{
    return m_renewHasBeenSet;
}


