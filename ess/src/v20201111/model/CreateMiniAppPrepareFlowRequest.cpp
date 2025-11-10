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

#include <tencentcloud/ess/v20201111/model/CreateMiniAppPrepareFlowRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreateMiniAppPrepareFlowRequest::CreateMiniAppPrepareFlowRequest() :
    m_operatorHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_flowNameHasBeenSet(false),
    m_agentHasBeenSet(false),
    m_approversHasBeenSet(false),
    m_ccInfosHasBeenSet(false),
    m_unorderedHasBeenSet(false),
    m_deadlineAfterStartDaysHasBeenSet(false),
    m_userFlowTypeIdHasBeenSet(false),
    m_flowOptionHasBeenSet(false),
    m_pageOptionHasBeenSet(false),
    m_userDataHasBeenSet(false),
    m_hidesHasBeenSet(false)
{
}

string CreateMiniAppPrepareFlowRequest::ToJsonString() const
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

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_resourceType, allocator);
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

    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
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

    if (m_unorderedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unordered";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_unordered, allocator);
    }

    if (m_deadlineAfterStartDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeadlineAfterStartDays";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deadlineAfterStartDays, allocator);
    }

    if (m_userFlowTypeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserFlowTypeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userFlowTypeId.c_str(), allocator).Move(), allocator);
    }

    if (m_flowOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowOption";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_flowOption.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_pageOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageOption";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pageOption.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_userDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userData.c_str(), allocator).Move(), allocator);
    }

    if (m_hidesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hides";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_hides.begin(); itr != m_hides.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


UserInfo CreateMiniAppPrepareFlowRequest::GetOperator() const
{
    return m_operator;
}

void CreateMiniAppPrepareFlowRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateMiniAppPrepareFlowRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

int64_t CreateMiniAppPrepareFlowRequest::GetResourceType() const
{
    return m_resourceType;
}

void CreateMiniAppPrepareFlowRequest::SetResourceType(const int64_t& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool CreateMiniAppPrepareFlowRequest::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string CreateMiniAppPrepareFlowRequest::GetResourceId() const
{
    return m_resourceId;
}

void CreateMiniAppPrepareFlowRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool CreateMiniAppPrepareFlowRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string CreateMiniAppPrepareFlowRequest::GetFlowName() const
{
    return m_flowName;
}

void CreateMiniAppPrepareFlowRequest::SetFlowName(const string& _flowName)
{
    m_flowName = _flowName;
    m_flowNameHasBeenSet = true;
}

bool CreateMiniAppPrepareFlowRequest::FlowNameHasBeenSet() const
{
    return m_flowNameHasBeenSet;
}

Agent CreateMiniAppPrepareFlowRequest::GetAgent() const
{
    return m_agent;
}

void CreateMiniAppPrepareFlowRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CreateMiniAppPrepareFlowRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

vector<MiniAppCreateApproverInfo> CreateMiniAppPrepareFlowRequest::GetApprovers() const
{
    return m_approvers;
}

void CreateMiniAppPrepareFlowRequest::SetApprovers(const vector<MiniAppCreateApproverInfo>& _approvers)
{
    m_approvers = _approvers;
    m_approversHasBeenSet = true;
}

bool CreateMiniAppPrepareFlowRequest::ApproversHasBeenSet() const
{
    return m_approversHasBeenSet;
}

vector<CcInfo> CreateMiniAppPrepareFlowRequest::GetCcInfos() const
{
    return m_ccInfos;
}

void CreateMiniAppPrepareFlowRequest::SetCcInfos(const vector<CcInfo>& _ccInfos)
{
    m_ccInfos = _ccInfos;
    m_ccInfosHasBeenSet = true;
}

bool CreateMiniAppPrepareFlowRequest::CcInfosHasBeenSet() const
{
    return m_ccInfosHasBeenSet;
}

bool CreateMiniAppPrepareFlowRequest::GetUnordered() const
{
    return m_unordered;
}

void CreateMiniAppPrepareFlowRequest::SetUnordered(const bool& _unordered)
{
    m_unordered = _unordered;
    m_unorderedHasBeenSet = true;
}

bool CreateMiniAppPrepareFlowRequest::UnorderedHasBeenSet() const
{
    return m_unorderedHasBeenSet;
}

int64_t CreateMiniAppPrepareFlowRequest::GetDeadlineAfterStartDays() const
{
    return m_deadlineAfterStartDays;
}

void CreateMiniAppPrepareFlowRequest::SetDeadlineAfterStartDays(const int64_t& _deadlineAfterStartDays)
{
    m_deadlineAfterStartDays = _deadlineAfterStartDays;
    m_deadlineAfterStartDaysHasBeenSet = true;
}

bool CreateMiniAppPrepareFlowRequest::DeadlineAfterStartDaysHasBeenSet() const
{
    return m_deadlineAfterStartDaysHasBeenSet;
}

string CreateMiniAppPrepareFlowRequest::GetUserFlowTypeId() const
{
    return m_userFlowTypeId;
}

void CreateMiniAppPrepareFlowRequest::SetUserFlowTypeId(const string& _userFlowTypeId)
{
    m_userFlowTypeId = _userFlowTypeId;
    m_userFlowTypeIdHasBeenSet = true;
}

bool CreateMiniAppPrepareFlowRequest::UserFlowTypeIdHasBeenSet() const
{
    return m_userFlowTypeIdHasBeenSet;
}

MiniAppCreateFlowOption CreateMiniAppPrepareFlowRequest::GetFlowOption() const
{
    return m_flowOption;
}

void CreateMiniAppPrepareFlowRequest::SetFlowOption(const MiniAppCreateFlowOption& _flowOption)
{
    m_flowOption = _flowOption;
    m_flowOptionHasBeenSet = true;
}

bool CreateMiniAppPrepareFlowRequest::FlowOptionHasBeenSet() const
{
    return m_flowOptionHasBeenSet;
}

MiniAppCreateFlowPageOption CreateMiniAppPrepareFlowRequest::GetPageOption() const
{
    return m_pageOption;
}

void CreateMiniAppPrepareFlowRequest::SetPageOption(const MiniAppCreateFlowPageOption& _pageOption)
{
    m_pageOption = _pageOption;
    m_pageOptionHasBeenSet = true;
}

bool CreateMiniAppPrepareFlowRequest::PageOptionHasBeenSet() const
{
    return m_pageOptionHasBeenSet;
}

string CreateMiniAppPrepareFlowRequest::GetUserData() const
{
    return m_userData;
}

void CreateMiniAppPrepareFlowRequest::SetUserData(const string& _userData)
{
    m_userData = _userData;
    m_userDataHasBeenSet = true;
}

bool CreateMiniAppPrepareFlowRequest::UserDataHasBeenSet() const
{
    return m_userDataHasBeenSet;
}

vector<int64_t> CreateMiniAppPrepareFlowRequest::GetHides() const
{
    return m_hides;
}

void CreateMiniAppPrepareFlowRequest::SetHides(const vector<int64_t>& _hides)
{
    m_hides = _hides;
    m_hidesHasBeenSet = true;
}

bool CreateMiniAppPrepareFlowRequest::HidesHasBeenSet() const
{
    return m_hidesHasBeenSet;
}


