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

#include <tencentcloud/essbasic/v20210526/model/ChannelCreateReleaseFlowRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

ChannelCreateReleaseFlowRequest::ChannelCreateReleaseFlowRequest() :
    m_agentHasBeenSet(false),
    m_needRelievedFlowIdHasBeenSet(false),
    m_reliveInfoHasBeenSet(false),
    m_releasedApproversHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_organizationHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_deadlineHasBeenSet(false),
    m_userDataHasBeenSet(false)
{
}

string ChannelCreateReleaseFlowRequest::ToJsonString() const
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

    if (m_needRelievedFlowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedRelievedFlowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_needRelievedFlowId.c_str(), allocator).Move(), allocator);
    }

    if (m_reliveInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReliveInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_reliveInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_releasedApproversHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleasedApprovers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_releasedApprovers.begin(); itr != m_releasedApprovers.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Organization";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_organization.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_deadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deadline";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deadline, allocator);
    }

    if (m_userDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userData.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Agent ChannelCreateReleaseFlowRequest::GetAgent() const
{
    return m_agent;
}

void ChannelCreateReleaseFlowRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool ChannelCreateReleaseFlowRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string ChannelCreateReleaseFlowRequest::GetNeedRelievedFlowId() const
{
    return m_needRelievedFlowId;
}

void ChannelCreateReleaseFlowRequest::SetNeedRelievedFlowId(const string& _needRelievedFlowId)
{
    m_needRelievedFlowId = _needRelievedFlowId;
    m_needRelievedFlowIdHasBeenSet = true;
}

bool ChannelCreateReleaseFlowRequest::NeedRelievedFlowIdHasBeenSet() const
{
    return m_needRelievedFlowIdHasBeenSet;
}

RelieveInfo ChannelCreateReleaseFlowRequest::GetReliveInfo() const
{
    return m_reliveInfo;
}

void ChannelCreateReleaseFlowRequest::SetReliveInfo(const RelieveInfo& _reliveInfo)
{
    m_reliveInfo = _reliveInfo;
    m_reliveInfoHasBeenSet = true;
}

bool ChannelCreateReleaseFlowRequest::ReliveInfoHasBeenSet() const
{
    return m_reliveInfoHasBeenSet;
}

vector<ReleasedApprover> ChannelCreateReleaseFlowRequest::GetReleasedApprovers() const
{
    return m_releasedApprovers;
}

void ChannelCreateReleaseFlowRequest::SetReleasedApprovers(const vector<ReleasedApprover>& _releasedApprovers)
{
    m_releasedApprovers = _releasedApprovers;
    m_releasedApproversHasBeenSet = true;
}

bool ChannelCreateReleaseFlowRequest::ReleasedApproversHasBeenSet() const
{
    return m_releasedApproversHasBeenSet;
}

string ChannelCreateReleaseFlowRequest::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void ChannelCreateReleaseFlowRequest::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool ChannelCreateReleaseFlowRequest::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

OrganizationInfo ChannelCreateReleaseFlowRequest::GetOrganization() const
{
    return m_organization;
}

void ChannelCreateReleaseFlowRequest::SetOrganization(const OrganizationInfo& _organization)
{
    m_organization = _organization;
    m_organizationHasBeenSet = true;
}

bool ChannelCreateReleaseFlowRequest::OrganizationHasBeenSet() const
{
    return m_organizationHasBeenSet;
}

UserInfo ChannelCreateReleaseFlowRequest::GetOperator() const
{
    return m_operator;
}

void ChannelCreateReleaseFlowRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool ChannelCreateReleaseFlowRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

int64_t ChannelCreateReleaseFlowRequest::GetDeadline() const
{
    return m_deadline;
}

void ChannelCreateReleaseFlowRequest::SetDeadline(const int64_t& _deadline)
{
    m_deadline = _deadline;
    m_deadlineHasBeenSet = true;
}

bool ChannelCreateReleaseFlowRequest::DeadlineHasBeenSet() const
{
    return m_deadlineHasBeenSet;
}

string ChannelCreateReleaseFlowRequest::GetUserData() const
{
    return m_userData;
}

void ChannelCreateReleaseFlowRequest::SetUserData(const string& _userData)
{
    m_userData = _userData;
    m_userDataHasBeenSet = true;
}

bool ChannelCreateReleaseFlowRequest::UserDataHasBeenSet() const
{
    return m_userDataHasBeenSet;
}


