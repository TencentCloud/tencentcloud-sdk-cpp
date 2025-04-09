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

#include <tencentcloud/essbasic/v20210526/model/ChannelCreateBatchQuickSignUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

ChannelCreateBatchQuickSignUrlRequest::ChannelCreateBatchQuickSignUrlRequest() :
    m_flowApproverInfoHasBeenSet(false),
    m_agentHasBeenSet(false),
    m_flowIdsHasBeenSet(false),
    m_flowGroupIdHasBeenSet(false),
    m_jumpUrlHasBeenSet(false),
    m_signatureTypesHasBeenSet(false),
    m_approverSignTypesHasBeenSet(false),
    m_signTypeSelectorHasBeenSet(false),
    m_flowBatchUrlInfoHasBeenSet(false),
    m_intentionHasBeenSet(false),
    m_cacheApproverInfoHasBeenSet(false),
    m_canBatchRejectHasBeenSet(false),
    m_presetApproverInfoHasBeenSet(false)
{
}

string ChannelCreateBatchQuickSignUrlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_flowApproverInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowApproverInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_flowApproverInfo.ToJsonObject(d[key.c_str()], allocator);
    }

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

    if (m_flowGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_jumpUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JumpUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jumpUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_signatureTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignatureTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_signatureTypes.begin(); itr != m_signatureTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_approverSignTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverSignTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_approverSignTypes.begin(); itr != m_approverSignTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_signTypeSelectorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignTypeSelector";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_signTypeSelector, allocator);
    }

    if (m_flowBatchUrlInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowBatchUrlInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_flowBatchUrlInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_intentionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Intention";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_intention.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_cacheApproverInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheApproverInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cacheApproverInfo, allocator);
    }

    if (m_canBatchRejectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanBatchReject";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_canBatchReject, allocator);
    }

    if (m_presetApproverInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PresetApproverInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_presetApproverInfo.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


FlowApproverInfo ChannelCreateBatchQuickSignUrlRequest::GetFlowApproverInfo() const
{
    return m_flowApproverInfo;
}

void ChannelCreateBatchQuickSignUrlRequest::SetFlowApproverInfo(const FlowApproverInfo& _flowApproverInfo)
{
    m_flowApproverInfo = _flowApproverInfo;
    m_flowApproverInfoHasBeenSet = true;
}

bool ChannelCreateBatchQuickSignUrlRequest::FlowApproverInfoHasBeenSet() const
{
    return m_flowApproverInfoHasBeenSet;
}

Agent ChannelCreateBatchQuickSignUrlRequest::GetAgent() const
{
    return m_agent;
}

void ChannelCreateBatchQuickSignUrlRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool ChannelCreateBatchQuickSignUrlRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

vector<string> ChannelCreateBatchQuickSignUrlRequest::GetFlowIds() const
{
    return m_flowIds;
}

void ChannelCreateBatchQuickSignUrlRequest::SetFlowIds(const vector<string>& _flowIds)
{
    m_flowIds = _flowIds;
    m_flowIdsHasBeenSet = true;
}

bool ChannelCreateBatchQuickSignUrlRequest::FlowIdsHasBeenSet() const
{
    return m_flowIdsHasBeenSet;
}

string ChannelCreateBatchQuickSignUrlRequest::GetFlowGroupId() const
{
    return m_flowGroupId;
}

void ChannelCreateBatchQuickSignUrlRequest::SetFlowGroupId(const string& _flowGroupId)
{
    m_flowGroupId = _flowGroupId;
    m_flowGroupIdHasBeenSet = true;
}

bool ChannelCreateBatchQuickSignUrlRequest::FlowGroupIdHasBeenSet() const
{
    return m_flowGroupIdHasBeenSet;
}

string ChannelCreateBatchQuickSignUrlRequest::GetJumpUrl() const
{
    return m_jumpUrl;
}

void ChannelCreateBatchQuickSignUrlRequest::SetJumpUrl(const string& _jumpUrl)
{
    m_jumpUrl = _jumpUrl;
    m_jumpUrlHasBeenSet = true;
}

bool ChannelCreateBatchQuickSignUrlRequest::JumpUrlHasBeenSet() const
{
    return m_jumpUrlHasBeenSet;
}

vector<int64_t> ChannelCreateBatchQuickSignUrlRequest::GetSignatureTypes() const
{
    return m_signatureTypes;
}

void ChannelCreateBatchQuickSignUrlRequest::SetSignatureTypes(const vector<int64_t>& _signatureTypes)
{
    m_signatureTypes = _signatureTypes;
    m_signatureTypesHasBeenSet = true;
}

bool ChannelCreateBatchQuickSignUrlRequest::SignatureTypesHasBeenSet() const
{
    return m_signatureTypesHasBeenSet;
}

vector<int64_t> ChannelCreateBatchQuickSignUrlRequest::GetApproverSignTypes() const
{
    return m_approverSignTypes;
}

void ChannelCreateBatchQuickSignUrlRequest::SetApproverSignTypes(const vector<int64_t>& _approverSignTypes)
{
    m_approverSignTypes = _approverSignTypes;
    m_approverSignTypesHasBeenSet = true;
}

bool ChannelCreateBatchQuickSignUrlRequest::ApproverSignTypesHasBeenSet() const
{
    return m_approverSignTypesHasBeenSet;
}

uint64_t ChannelCreateBatchQuickSignUrlRequest::GetSignTypeSelector() const
{
    return m_signTypeSelector;
}

void ChannelCreateBatchQuickSignUrlRequest::SetSignTypeSelector(const uint64_t& _signTypeSelector)
{
    m_signTypeSelector = _signTypeSelector;
    m_signTypeSelectorHasBeenSet = true;
}

bool ChannelCreateBatchQuickSignUrlRequest::SignTypeSelectorHasBeenSet() const
{
    return m_signTypeSelectorHasBeenSet;
}

FlowBatchUrlInfo ChannelCreateBatchQuickSignUrlRequest::GetFlowBatchUrlInfo() const
{
    return m_flowBatchUrlInfo;
}

void ChannelCreateBatchQuickSignUrlRequest::SetFlowBatchUrlInfo(const FlowBatchUrlInfo& _flowBatchUrlInfo)
{
    m_flowBatchUrlInfo = _flowBatchUrlInfo;
    m_flowBatchUrlInfoHasBeenSet = true;
}

bool ChannelCreateBatchQuickSignUrlRequest::FlowBatchUrlInfoHasBeenSet() const
{
    return m_flowBatchUrlInfoHasBeenSet;
}

Intention ChannelCreateBatchQuickSignUrlRequest::GetIntention() const
{
    return m_intention;
}

void ChannelCreateBatchQuickSignUrlRequest::SetIntention(const Intention& _intention)
{
    m_intention = _intention;
    m_intentionHasBeenSet = true;
}

bool ChannelCreateBatchQuickSignUrlRequest::IntentionHasBeenSet() const
{
    return m_intentionHasBeenSet;
}

bool ChannelCreateBatchQuickSignUrlRequest::GetCacheApproverInfo() const
{
    return m_cacheApproverInfo;
}

void ChannelCreateBatchQuickSignUrlRequest::SetCacheApproverInfo(const bool& _cacheApproverInfo)
{
    m_cacheApproverInfo = _cacheApproverInfo;
    m_cacheApproverInfoHasBeenSet = true;
}

bool ChannelCreateBatchQuickSignUrlRequest::CacheApproverInfoHasBeenSet() const
{
    return m_cacheApproverInfoHasBeenSet;
}

bool ChannelCreateBatchQuickSignUrlRequest::GetCanBatchReject() const
{
    return m_canBatchReject;
}

void ChannelCreateBatchQuickSignUrlRequest::SetCanBatchReject(const bool& _canBatchReject)
{
    m_canBatchReject = _canBatchReject;
    m_canBatchRejectHasBeenSet = true;
}

bool ChannelCreateBatchQuickSignUrlRequest::CanBatchRejectHasBeenSet() const
{
    return m_canBatchRejectHasBeenSet;
}

PresetApproverInfo ChannelCreateBatchQuickSignUrlRequest::GetPresetApproverInfo() const
{
    return m_presetApproverInfo;
}

void ChannelCreateBatchQuickSignUrlRequest::SetPresetApproverInfo(const PresetApproverInfo& _presetApproverInfo)
{
    m_presetApproverInfo = _presetApproverInfo;
    m_presetApproverInfoHasBeenSet = true;
}

bool ChannelCreateBatchQuickSignUrlRequest::PresetApproverInfoHasBeenSet() const
{
    return m_presetApproverInfoHasBeenSet;
}


