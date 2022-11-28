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
    m_unorderedHasBeenSet(false),
    m_deadlineHasBeenSet(false),
    m_userFlowTypeIdHasBeenSet(false),
    m_approversHasBeenSet(false),
    m_intelligentStatusHasBeenSet(false)
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


