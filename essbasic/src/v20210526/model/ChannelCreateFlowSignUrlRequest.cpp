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

#include <tencentcloud/essbasic/v20210526/model/ChannelCreateFlowSignUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

ChannelCreateFlowSignUrlRequest::ChannelCreateFlowSignUrlRequest() :
    m_agentHasBeenSet(false),
    m_flowIdHasBeenSet(false),
    m_flowApproverInfosHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_organizationHasBeenSet(false),
    m_jumpUrlHasBeenSet(false),
    m_urlTypeHasBeenSet(false)
{
}

string ChannelCreateFlowSignUrlRequest::ToJsonString() const
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

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowId.c_str(), allocator).Move(), allocator);
    }

    if (m_flowApproverInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowApproverInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_flowApproverInfos.begin(); itr != m_flowApproverInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_organizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Organization";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_organization.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_jumpUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JumpUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jumpUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_urlTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UrlType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_urlType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Agent ChannelCreateFlowSignUrlRequest::GetAgent() const
{
    return m_agent;
}

void ChannelCreateFlowSignUrlRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool ChannelCreateFlowSignUrlRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string ChannelCreateFlowSignUrlRequest::GetFlowId() const
{
    return m_flowId;
}

void ChannelCreateFlowSignUrlRequest::SetFlowId(const string& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool ChannelCreateFlowSignUrlRequest::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

vector<FlowApproverInfo> ChannelCreateFlowSignUrlRequest::GetFlowApproverInfos() const
{
    return m_flowApproverInfos;
}

void ChannelCreateFlowSignUrlRequest::SetFlowApproverInfos(const vector<FlowApproverInfo>& _flowApproverInfos)
{
    m_flowApproverInfos = _flowApproverInfos;
    m_flowApproverInfosHasBeenSet = true;
}

bool ChannelCreateFlowSignUrlRequest::FlowApproverInfosHasBeenSet() const
{
    return m_flowApproverInfosHasBeenSet;
}

UserInfo ChannelCreateFlowSignUrlRequest::GetOperator() const
{
    return m_operator;
}

void ChannelCreateFlowSignUrlRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool ChannelCreateFlowSignUrlRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

OrganizationInfo ChannelCreateFlowSignUrlRequest::GetOrganization() const
{
    return m_organization;
}

void ChannelCreateFlowSignUrlRequest::SetOrganization(const OrganizationInfo& _organization)
{
    m_organization = _organization;
    m_organizationHasBeenSet = true;
}

bool ChannelCreateFlowSignUrlRequest::OrganizationHasBeenSet() const
{
    return m_organizationHasBeenSet;
}

string ChannelCreateFlowSignUrlRequest::GetJumpUrl() const
{
    return m_jumpUrl;
}

void ChannelCreateFlowSignUrlRequest::SetJumpUrl(const string& _jumpUrl)
{
    m_jumpUrl = _jumpUrl;
    m_jumpUrlHasBeenSet = true;
}

bool ChannelCreateFlowSignUrlRequest::JumpUrlHasBeenSet() const
{
    return m_jumpUrlHasBeenSet;
}

int64_t ChannelCreateFlowSignUrlRequest::GetUrlType() const
{
    return m_urlType;
}

void ChannelCreateFlowSignUrlRequest::SetUrlType(const int64_t& _urlType)
{
    m_urlType = _urlType;
    m_urlTypeHasBeenSet = true;
}

bool ChannelCreateFlowSignUrlRequest::UrlTypeHasBeenSet() const
{
    return m_urlTypeHasBeenSet;
}


