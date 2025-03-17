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

#include <tencentcloud/essbasic/v20210526/model/ChannelCreatePrepareFlowRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

ChannelCreatePrepareFlowRequest::ChannelCreatePrepareFlowRequest() :
    m_resourceTypeHasBeenSet(false),
    m_flowInfoHasBeenSet(false),
    m_agentHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_flowOptionHasBeenSet(false),
    m_flowApproverListHasBeenSet(false),
    m_flowIdHasBeenSet(false),
    m_needPreviewHasBeenSet(false),
    m_organizationHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_signComponentConfigHasBeenSet(false)
{
}

string ChannelCreatePrepareFlowRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_resourceType, allocator);
    }

    if (m_flowInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_flowInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_flowOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowOption";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_flowOption.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_flowApproverListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowApproverList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_flowApproverList.begin(); itr != m_flowApproverList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowId.c_str(), allocator).Move(), allocator);
    }

    if (m_needPreviewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedPreview";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needPreview, allocator);
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

    if (m_signComponentConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignComponentConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_signComponentConfig.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ChannelCreatePrepareFlowRequest::GetResourceType() const
{
    return m_resourceType;
}

void ChannelCreatePrepareFlowRequest::SetResourceType(const int64_t& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool ChannelCreatePrepareFlowRequest::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

BaseFlowInfo ChannelCreatePrepareFlowRequest::GetFlowInfo() const
{
    return m_flowInfo;
}

void ChannelCreatePrepareFlowRequest::SetFlowInfo(const BaseFlowInfo& _flowInfo)
{
    m_flowInfo = _flowInfo;
    m_flowInfoHasBeenSet = true;
}

bool ChannelCreatePrepareFlowRequest::FlowInfoHasBeenSet() const
{
    return m_flowInfoHasBeenSet;
}

Agent ChannelCreatePrepareFlowRequest::GetAgent() const
{
    return m_agent;
}

void ChannelCreatePrepareFlowRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool ChannelCreatePrepareFlowRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string ChannelCreatePrepareFlowRequest::GetResourceId() const
{
    return m_resourceId;
}

void ChannelCreatePrepareFlowRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool ChannelCreatePrepareFlowRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

CreateFlowOption ChannelCreatePrepareFlowRequest::GetFlowOption() const
{
    return m_flowOption;
}

void ChannelCreatePrepareFlowRequest::SetFlowOption(const CreateFlowOption& _flowOption)
{
    m_flowOption = _flowOption;
    m_flowOptionHasBeenSet = true;
}

bool ChannelCreatePrepareFlowRequest::FlowOptionHasBeenSet() const
{
    return m_flowOptionHasBeenSet;
}

vector<CommonFlowApprover> ChannelCreatePrepareFlowRequest::GetFlowApproverList() const
{
    return m_flowApproverList;
}

void ChannelCreatePrepareFlowRequest::SetFlowApproverList(const vector<CommonFlowApprover>& _flowApproverList)
{
    m_flowApproverList = _flowApproverList;
    m_flowApproverListHasBeenSet = true;
}

bool ChannelCreatePrepareFlowRequest::FlowApproverListHasBeenSet() const
{
    return m_flowApproverListHasBeenSet;
}

string ChannelCreatePrepareFlowRequest::GetFlowId() const
{
    return m_flowId;
}

void ChannelCreatePrepareFlowRequest::SetFlowId(const string& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool ChannelCreatePrepareFlowRequest::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

bool ChannelCreatePrepareFlowRequest::GetNeedPreview() const
{
    return m_needPreview;
}

void ChannelCreatePrepareFlowRequest::SetNeedPreview(const bool& _needPreview)
{
    m_needPreview = _needPreview;
    m_needPreviewHasBeenSet = true;
}

bool ChannelCreatePrepareFlowRequest::NeedPreviewHasBeenSet() const
{
    return m_needPreviewHasBeenSet;
}

OrganizationInfo ChannelCreatePrepareFlowRequest::GetOrganization() const
{
    return m_organization;
}

void ChannelCreatePrepareFlowRequest::SetOrganization(const OrganizationInfo& _organization)
{
    m_organization = _organization;
    m_organizationHasBeenSet = true;
}

bool ChannelCreatePrepareFlowRequest::OrganizationHasBeenSet() const
{
    return m_organizationHasBeenSet;
}

UserInfo ChannelCreatePrepareFlowRequest::GetOperator() const
{
    return m_operator;
}

void ChannelCreatePrepareFlowRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool ChannelCreatePrepareFlowRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

SignComponentConfig ChannelCreatePrepareFlowRequest::GetSignComponentConfig() const
{
    return m_signComponentConfig;
}

void ChannelCreatePrepareFlowRequest::SetSignComponentConfig(const SignComponentConfig& _signComponentConfig)
{
    m_signComponentConfig = _signComponentConfig;
    m_signComponentConfigHasBeenSet = true;
}

bool ChannelCreatePrepareFlowRequest::SignComponentConfigHasBeenSet() const
{
    return m_signComponentConfigHasBeenSet;
}


