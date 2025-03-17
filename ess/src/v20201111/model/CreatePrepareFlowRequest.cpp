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

#include <tencentcloud/ess/v20201111/model/CreatePrepareFlowRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreatePrepareFlowRequest::CreatePrepareFlowRequest() :
    m_operatorHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_flowNameHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_unorderedHasBeenSet(false),
    m_deadlineHasBeenSet(false),
    m_userFlowTypeIdHasBeenSet(false),
    m_flowTypeHasBeenSet(false),
    m_approversHasBeenSet(false),
    m_intelligentStatusHasBeenSet(false),
    m_componentsHasBeenSet(false),
    m_flowOptionHasBeenSet(false),
    m_needSignReviewHasBeenSet(false),
    m_needCreateReviewHasBeenSet(false),
    m_userDataHasBeenSet(false),
    m_ccInfosHasBeenSet(false),
    m_flowIdHasBeenSet(false),
    m_agentHasBeenSet(false),
    m_initiatorComponentsHasBeenSet(false),
    m_flowDisplayTypeHasBeenSet(false),
    m_signComponentConfigHasBeenSet(false)
{
}

string CreatePrepareFlowRequest::ToJsonString() const
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

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_flowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_resourceType, allocator);
    }

    if (m_unorderedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unordered";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_unordered, allocator);
    }

    if (m_deadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deadline";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deadline, allocator);
    }

    if (m_userFlowTypeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserFlowTypeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userFlowTypeId.c_str(), allocator).Move(), allocator);
    }

    if (m_flowTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowType.c_str(), allocator).Move(), allocator);
    }

    if (m_approversHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Approvers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_approvers.begin(); itr != m_approvers.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_intelligentStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntelligentStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_intelligentStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_componentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Components";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_components.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_flowOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowOption";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_flowOption.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_needSignReviewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedSignReview";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needSignReview, allocator);
    }

    if (m_needCreateReviewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedCreateReview";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needCreateReview, allocator);
    }

    if (m_userDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userData.c_str(), allocator).Move(), allocator);
    }

    if (m_ccInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ccInfos.begin(); itr != m_ccInfos.end(); ++itr, ++i)
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

    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_initiatorComponentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitiatorComponents";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_initiatorComponents.begin(); itr != m_initiatorComponents.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_flowDisplayTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowDisplayType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_flowDisplayType, allocator);
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


UserInfo CreatePrepareFlowRequest::GetOperator() const
{
    return m_operator;
}

void CreatePrepareFlowRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreatePrepareFlowRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string CreatePrepareFlowRequest::GetResourceId() const
{
    return m_resourceId;
}

void CreatePrepareFlowRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool CreatePrepareFlowRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string CreatePrepareFlowRequest::GetFlowName() const
{
    return m_flowName;
}

void CreatePrepareFlowRequest::SetFlowName(const string& _flowName)
{
    m_flowName = _flowName;
    m_flowNameHasBeenSet = true;
}

bool CreatePrepareFlowRequest::FlowNameHasBeenSet() const
{
    return m_flowNameHasBeenSet;
}

int64_t CreatePrepareFlowRequest::GetResourceType() const
{
    return m_resourceType;
}

void CreatePrepareFlowRequest::SetResourceType(const int64_t& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool CreatePrepareFlowRequest::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

bool CreatePrepareFlowRequest::GetUnordered() const
{
    return m_unordered;
}

void CreatePrepareFlowRequest::SetUnordered(const bool& _unordered)
{
    m_unordered = _unordered;
    m_unorderedHasBeenSet = true;
}

bool CreatePrepareFlowRequest::UnorderedHasBeenSet() const
{
    return m_unorderedHasBeenSet;
}

int64_t CreatePrepareFlowRequest::GetDeadline() const
{
    return m_deadline;
}

void CreatePrepareFlowRequest::SetDeadline(const int64_t& _deadline)
{
    m_deadline = _deadline;
    m_deadlineHasBeenSet = true;
}

bool CreatePrepareFlowRequest::DeadlineHasBeenSet() const
{
    return m_deadlineHasBeenSet;
}

string CreatePrepareFlowRequest::GetUserFlowTypeId() const
{
    return m_userFlowTypeId;
}

void CreatePrepareFlowRequest::SetUserFlowTypeId(const string& _userFlowTypeId)
{
    m_userFlowTypeId = _userFlowTypeId;
    m_userFlowTypeIdHasBeenSet = true;
}

bool CreatePrepareFlowRequest::UserFlowTypeIdHasBeenSet() const
{
    return m_userFlowTypeIdHasBeenSet;
}

string CreatePrepareFlowRequest::GetFlowType() const
{
    return m_flowType;
}

void CreatePrepareFlowRequest::SetFlowType(const string& _flowType)
{
    m_flowType = _flowType;
    m_flowTypeHasBeenSet = true;
}

bool CreatePrepareFlowRequest::FlowTypeHasBeenSet() const
{
    return m_flowTypeHasBeenSet;
}

vector<FlowCreateApprover> CreatePrepareFlowRequest::GetApprovers() const
{
    return m_approvers;
}

void CreatePrepareFlowRequest::SetApprovers(const vector<FlowCreateApprover>& _approvers)
{
    m_approvers = _approvers;
    m_approversHasBeenSet = true;
}

bool CreatePrepareFlowRequest::ApproversHasBeenSet() const
{
    return m_approversHasBeenSet;
}

string CreatePrepareFlowRequest::GetIntelligentStatus() const
{
    return m_intelligentStatus;
}

void CreatePrepareFlowRequest::SetIntelligentStatus(const string& _intelligentStatus)
{
    m_intelligentStatus = _intelligentStatus;
    m_intelligentStatusHasBeenSet = true;
}

bool CreatePrepareFlowRequest::IntelligentStatusHasBeenSet() const
{
    return m_intelligentStatusHasBeenSet;
}

Component CreatePrepareFlowRequest::GetComponents() const
{
    return m_components;
}

void CreatePrepareFlowRequest::SetComponents(const Component& _components)
{
    m_components = _components;
    m_componentsHasBeenSet = true;
}

bool CreatePrepareFlowRequest::ComponentsHasBeenSet() const
{
    return m_componentsHasBeenSet;
}

CreateFlowOption CreatePrepareFlowRequest::GetFlowOption() const
{
    return m_flowOption;
}

void CreatePrepareFlowRequest::SetFlowOption(const CreateFlowOption& _flowOption)
{
    m_flowOption = _flowOption;
    m_flowOptionHasBeenSet = true;
}

bool CreatePrepareFlowRequest::FlowOptionHasBeenSet() const
{
    return m_flowOptionHasBeenSet;
}

bool CreatePrepareFlowRequest::GetNeedSignReview() const
{
    return m_needSignReview;
}

void CreatePrepareFlowRequest::SetNeedSignReview(const bool& _needSignReview)
{
    m_needSignReview = _needSignReview;
    m_needSignReviewHasBeenSet = true;
}

bool CreatePrepareFlowRequest::NeedSignReviewHasBeenSet() const
{
    return m_needSignReviewHasBeenSet;
}

bool CreatePrepareFlowRequest::GetNeedCreateReview() const
{
    return m_needCreateReview;
}

void CreatePrepareFlowRequest::SetNeedCreateReview(const bool& _needCreateReview)
{
    m_needCreateReview = _needCreateReview;
    m_needCreateReviewHasBeenSet = true;
}

bool CreatePrepareFlowRequest::NeedCreateReviewHasBeenSet() const
{
    return m_needCreateReviewHasBeenSet;
}

string CreatePrepareFlowRequest::GetUserData() const
{
    return m_userData;
}

void CreatePrepareFlowRequest::SetUserData(const string& _userData)
{
    m_userData = _userData;
    m_userDataHasBeenSet = true;
}

bool CreatePrepareFlowRequest::UserDataHasBeenSet() const
{
    return m_userDataHasBeenSet;
}

vector<CcInfo> CreatePrepareFlowRequest::GetCcInfos() const
{
    return m_ccInfos;
}

void CreatePrepareFlowRequest::SetCcInfos(const vector<CcInfo>& _ccInfos)
{
    m_ccInfos = _ccInfos;
    m_ccInfosHasBeenSet = true;
}

bool CreatePrepareFlowRequest::CcInfosHasBeenSet() const
{
    return m_ccInfosHasBeenSet;
}

string CreatePrepareFlowRequest::GetFlowId() const
{
    return m_flowId;
}

void CreatePrepareFlowRequest::SetFlowId(const string& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool CreatePrepareFlowRequest::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

Agent CreatePrepareFlowRequest::GetAgent() const
{
    return m_agent;
}

void CreatePrepareFlowRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CreatePrepareFlowRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

vector<Component> CreatePrepareFlowRequest::GetInitiatorComponents() const
{
    return m_initiatorComponents;
}

void CreatePrepareFlowRequest::SetInitiatorComponents(const vector<Component>& _initiatorComponents)
{
    m_initiatorComponents = _initiatorComponents;
    m_initiatorComponentsHasBeenSet = true;
}

bool CreatePrepareFlowRequest::InitiatorComponentsHasBeenSet() const
{
    return m_initiatorComponentsHasBeenSet;
}

int64_t CreatePrepareFlowRequest::GetFlowDisplayType() const
{
    return m_flowDisplayType;
}

void CreatePrepareFlowRequest::SetFlowDisplayType(const int64_t& _flowDisplayType)
{
    m_flowDisplayType = _flowDisplayType;
    m_flowDisplayTypeHasBeenSet = true;
}

bool CreatePrepareFlowRequest::FlowDisplayTypeHasBeenSet() const
{
    return m_flowDisplayTypeHasBeenSet;
}

SignComponentConfig CreatePrepareFlowRequest::GetSignComponentConfig() const
{
    return m_signComponentConfig;
}

void CreatePrepareFlowRequest::SetSignComponentConfig(const SignComponentConfig& _signComponentConfig)
{
    m_signComponentConfig = _signComponentConfig;
    m_signComponentConfigHasBeenSet = true;
}

bool CreatePrepareFlowRequest::SignComponentConfigHasBeenSet() const
{
    return m_signComponentConfigHasBeenSet;
}


