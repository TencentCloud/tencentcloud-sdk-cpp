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

#include <tencentcloud/ess/v20201111/model/CreateBatchQuickSignUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreateBatchQuickSignUrlRequest::CreateBatchQuickSignUrlRequest() :
    m_flowApproverInfoHasBeenSet(false),
    m_agentHasBeenSet(false),
    m_operatorHasBeenSet(false),
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

string CreateBatchQuickSignUrlRequest::ToJsonString() const
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

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
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


FlowCreateApprover CreateBatchQuickSignUrlRequest::GetFlowApproverInfo() const
{
    return m_flowApproverInfo;
}

void CreateBatchQuickSignUrlRequest::SetFlowApproverInfo(const FlowCreateApprover& _flowApproverInfo)
{
    m_flowApproverInfo = _flowApproverInfo;
    m_flowApproverInfoHasBeenSet = true;
}

bool CreateBatchQuickSignUrlRequest::FlowApproverInfoHasBeenSet() const
{
    return m_flowApproverInfoHasBeenSet;
}

Agent CreateBatchQuickSignUrlRequest::GetAgent() const
{
    return m_agent;
}

void CreateBatchQuickSignUrlRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CreateBatchQuickSignUrlRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

UserInfo CreateBatchQuickSignUrlRequest::GetOperator() const
{
    return m_operator;
}

void CreateBatchQuickSignUrlRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateBatchQuickSignUrlRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

vector<string> CreateBatchQuickSignUrlRequest::GetFlowIds() const
{
    return m_flowIds;
}

void CreateBatchQuickSignUrlRequest::SetFlowIds(const vector<string>& _flowIds)
{
    m_flowIds = _flowIds;
    m_flowIdsHasBeenSet = true;
}

bool CreateBatchQuickSignUrlRequest::FlowIdsHasBeenSet() const
{
    return m_flowIdsHasBeenSet;
}

string CreateBatchQuickSignUrlRequest::GetFlowGroupId() const
{
    return m_flowGroupId;
}

void CreateBatchQuickSignUrlRequest::SetFlowGroupId(const string& _flowGroupId)
{
    m_flowGroupId = _flowGroupId;
    m_flowGroupIdHasBeenSet = true;
}

bool CreateBatchQuickSignUrlRequest::FlowGroupIdHasBeenSet() const
{
    return m_flowGroupIdHasBeenSet;
}

string CreateBatchQuickSignUrlRequest::GetJumpUrl() const
{
    return m_jumpUrl;
}

void CreateBatchQuickSignUrlRequest::SetJumpUrl(const string& _jumpUrl)
{
    m_jumpUrl = _jumpUrl;
    m_jumpUrlHasBeenSet = true;
}

bool CreateBatchQuickSignUrlRequest::JumpUrlHasBeenSet() const
{
    return m_jumpUrlHasBeenSet;
}

vector<int64_t> CreateBatchQuickSignUrlRequest::GetSignatureTypes() const
{
    return m_signatureTypes;
}

void CreateBatchQuickSignUrlRequest::SetSignatureTypes(const vector<int64_t>& _signatureTypes)
{
    m_signatureTypes = _signatureTypes;
    m_signatureTypesHasBeenSet = true;
}

bool CreateBatchQuickSignUrlRequest::SignatureTypesHasBeenSet() const
{
    return m_signatureTypesHasBeenSet;
}

vector<int64_t> CreateBatchQuickSignUrlRequest::GetApproverSignTypes() const
{
    return m_approverSignTypes;
}

void CreateBatchQuickSignUrlRequest::SetApproverSignTypes(const vector<int64_t>& _approverSignTypes)
{
    m_approverSignTypes = _approverSignTypes;
    m_approverSignTypesHasBeenSet = true;
}

bool CreateBatchQuickSignUrlRequest::ApproverSignTypesHasBeenSet() const
{
    return m_approverSignTypesHasBeenSet;
}

uint64_t CreateBatchQuickSignUrlRequest::GetSignTypeSelector() const
{
    return m_signTypeSelector;
}

void CreateBatchQuickSignUrlRequest::SetSignTypeSelector(const uint64_t& _signTypeSelector)
{
    m_signTypeSelector = _signTypeSelector;
    m_signTypeSelectorHasBeenSet = true;
}

bool CreateBatchQuickSignUrlRequest::SignTypeSelectorHasBeenSet() const
{
    return m_signTypeSelectorHasBeenSet;
}

FlowBatchUrlInfo CreateBatchQuickSignUrlRequest::GetFlowBatchUrlInfo() const
{
    return m_flowBatchUrlInfo;
}

void CreateBatchQuickSignUrlRequest::SetFlowBatchUrlInfo(const FlowBatchUrlInfo& _flowBatchUrlInfo)
{
    m_flowBatchUrlInfo = _flowBatchUrlInfo;
    m_flowBatchUrlInfoHasBeenSet = true;
}

bool CreateBatchQuickSignUrlRequest::FlowBatchUrlInfoHasBeenSet() const
{
    return m_flowBatchUrlInfoHasBeenSet;
}

Intention CreateBatchQuickSignUrlRequest::GetIntention() const
{
    return m_intention;
}

void CreateBatchQuickSignUrlRequest::SetIntention(const Intention& _intention)
{
    m_intention = _intention;
    m_intentionHasBeenSet = true;
}

bool CreateBatchQuickSignUrlRequest::IntentionHasBeenSet() const
{
    return m_intentionHasBeenSet;
}

bool CreateBatchQuickSignUrlRequest::GetCacheApproverInfo() const
{
    return m_cacheApproverInfo;
}

void CreateBatchQuickSignUrlRequest::SetCacheApproverInfo(const bool& _cacheApproverInfo)
{
    m_cacheApproverInfo = _cacheApproverInfo;
    m_cacheApproverInfoHasBeenSet = true;
}

bool CreateBatchQuickSignUrlRequest::CacheApproverInfoHasBeenSet() const
{
    return m_cacheApproverInfoHasBeenSet;
}

bool CreateBatchQuickSignUrlRequest::GetCanBatchReject() const
{
    return m_canBatchReject;
}

void CreateBatchQuickSignUrlRequest::SetCanBatchReject(const bool& _canBatchReject)
{
    m_canBatchReject = _canBatchReject;
    m_canBatchRejectHasBeenSet = true;
}

bool CreateBatchQuickSignUrlRequest::CanBatchRejectHasBeenSet() const
{
    return m_canBatchRejectHasBeenSet;
}

PresetApproverInfo CreateBatchQuickSignUrlRequest::GetPresetApproverInfo() const
{
    return m_presetApproverInfo;
}

void CreateBatchQuickSignUrlRequest::SetPresetApproverInfo(const PresetApproverInfo& _presetApproverInfo)
{
    m_presetApproverInfo = _presetApproverInfo;
    m_presetApproverInfoHasBeenSet = true;
}

bool CreateBatchQuickSignUrlRequest::PresetApproverInfoHasBeenSet() const
{
    return m_presetApproverInfoHasBeenSet;
}


