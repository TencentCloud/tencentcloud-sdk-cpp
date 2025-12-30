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

#include <tencentcloud/essbasic/v20210526/model/ChannelCreateOrganizationBatchSignUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

ChannelCreateOrganizationBatchSignUrlRequest::ChannelCreateOrganizationBatchSignUrlRequest() :
    m_agentHasBeenSet(false),
    m_flowIdsHasBeenSet(false),
    m_openIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_mobileHasBeenSet(false),
    m_flowGroupIdHasBeenSet(false),
    m_canBatchRejectHasBeenSet(false),
    m_dynamicSignOptionHasBeenSet(false),
    m_recipientIdsHasBeenSet(false)
{
}

string ChannelCreateOrganizationBatchSignUrlRequest::ToJsonString() const
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

    if (m_flowIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_flowIds.begin(); itr != m_flowIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_openIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_openId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_mobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mobile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mobile.c_str(), allocator).Move(), allocator);
    }

    if (m_flowGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_canBatchRejectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanBatchReject";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_canBatchReject, allocator);
    }

    if (m_dynamicSignOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DynamicSignOption";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dynamicSignOption.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_recipientIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecipientIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_recipientIds.begin(); itr != m_recipientIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Agent ChannelCreateOrganizationBatchSignUrlRequest::GetAgent() const
{
    return m_agent;
}

void ChannelCreateOrganizationBatchSignUrlRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool ChannelCreateOrganizationBatchSignUrlRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

vector<string> ChannelCreateOrganizationBatchSignUrlRequest::GetFlowIds() const
{
    return m_flowIds;
}

void ChannelCreateOrganizationBatchSignUrlRequest::SetFlowIds(const vector<string>& _flowIds)
{
    m_flowIds = _flowIds;
    m_flowIdsHasBeenSet = true;
}

bool ChannelCreateOrganizationBatchSignUrlRequest::FlowIdsHasBeenSet() const
{
    return m_flowIdsHasBeenSet;
}

string ChannelCreateOrganizationBatchSignUrlRequest::GetOpenId() const
{
    return m_openId;
}

void ChannelCreateOrganizationBatchSignUrlRequest::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool ChannelCreateOrganizationBatchSignUrlRequest::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

string ChannelCreateOrganizationBatchSignUrlRequest::GetName() const
{
    return m_name;
}

void ChannelCreateOrganizationBatchSignUrlRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ChannelCreateOrganizationBatchSignUrlRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ChannelCreateOrganizationBatchSignUrlRequest::GetMobile() const
{
    return m_mobile;
}

void ChannelCreateOrganizationBatchSignUrlRequest::SetMobile(const string& _mobile)
{
    m_mobile = _mobile;
    m_mobileHasBeenSet = true;
}

bool ChannelCreateOrganizationBatchSignUrlRequest::MobileHasBeenSet() const
{
    return m_mobileHasBeenSet;
}

string ChannelCreateOrganizationBatchSignUrlRequest::GetFlowGroupId() const
{
    return m_flowGroupId;
}

void ChannelCreateOrganizationBatchSignUrlRequest::SetFlowGroupId(const string& _flowGroupId)
{
    m_flowGroupId = _flowGroupId;
    m_flowGroupIdHasBeenSet = true;
}

bool ChannelCreateOrganizationBatchSignUrlRequest::FlowGroupIdHasBeenSet() const
{
    return m_flowGroupIdHasBeenSet;
}

bool ChannelCreateOrganizationBatchSignUrlRequest::GetCanBatchReject() const
{
    return m_canBatchReject;
}

void ChannelCreateOrganizationBatchSignUrlRequest::SetCanBatchReject(const bool& _canBatchReject)
{
    m_canBatchReject = _canBatchReject;
    m_canBatchRejectHasBeenSet = true;
}

bool ChannelCreateOrganizationBatchSignUrlRequest::CanBatchRejectHasBeenSet() const
{
    return m_canBatchRejectHasBeenSet;
}

DynamicSignOption ChannelCreateOrganizationBatchSignUrlRequest::GetDynamicSignOption() const
{
    return m_dynamicSignOption;
}

void ChannelCreateOrganizationBatchSignUrlRequest::SetDynamicSignOption(const DynamicSignOption& _dynamicSignOption)
{
    m_dynamicSignOption = _dynamicSignOption;
    m_dynamicSignOptionHasBeenSet = true;
}

bool ChannelCreateOrganizationBatchSignUrlRequest::DynamicSignOptionHasBeenSet() const
{
    return m_dynamicSignOptionHasBeenSet;
}

vector<string> ChannelCreateOrganizationBatchSignUrlRequest::GetRecipientIds() const
{
    return m_recipientIds;
}

void ChannelCreateOrganizationBatchSignUrlRequest::SetRecipientIds(const vector<string>& _recipientIds)
{
    m_recipientIds = _recipientIds;
    m_recipientIdsHasBeenSet = true;
}

bool ChannelCreateOrganizationBatchSignUrlRequest::RecipientIdsHasBeenSet() const
{
    return m_recipientIdsHasBeenSet;
}


