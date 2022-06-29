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

#include <tencentcloud/ess/v20201111/model/CreateFlowByFilesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreateFlowByFilesRequest::CreateFlowByFilesRequest() :
    m_operatorHasBeenSet(false),
    m_flowNameHasBeenSet(false),
    m_fileIdsHasBeenSet(false),
    m_approversHasBeenSet(false),
    m_flowDescriptionHasBeenSet(false),
    m_unorderedHasBeenSet(false),
    m_flowTypeHasBeenSet(false),
    m_deadlineHasBeenSet(false),
    m_agentHasBeenSet(false),
    m_componentsHasBeenSet(false),
    m_ccInfosHasBeenSet(false),
    m_needPreviewHasBeenSet(false)
{
}

string CreateFlowByFilesRequest::ToJsonString() const
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

    if (m_flowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fileIds.begin(); itr != m_fileIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_flowDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_unorderedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unordered";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_unordered, allocator);
    }

    if (m_flowTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowType.c_str(), allocator).Move(), allocator);
    }

    if (m_deadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deadline";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deadline, allocator);
    }

    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_componentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Components";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_components.begin(); itr != m_components.end(); ++itr, ++i)
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

    if (m_needPreviewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedPreview";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needPreview, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


UserInfo CreateFlowByFilesRequest::GetOperator() const
{
    return m_operator;
}

void CreateFlowByFilesRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateFlowByFilesRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string CreateFlowByFilesRequest::GetFlowName() const
{
    return m_flowName;
}

void CreateFlowByFilesRequest::SetFlowName(const string& _flowName)
{
    m_flowName = _flowName;
    m_flowNameHasBeenSet = true;
}

bool CreateFlowByFilesRequest::FlowNameHasBeenSet() const
{
    return m_flowNameHasBeenSet;
}

vector<string> CreateFlowByFilesRequest::GetFileIds() const
{
    return m_fileIds;
}

void CreateFlowByFilesRequest::SetFileIds(const vector<string>& _fileIds)
{
    m_fileIds = _fileIds;
    m_fileIdsHasBeenSet = true;
}

bool CreateFlowByFilesRequest::FileIdsHasBeenSet() const
{
    return m_fileIdsHasBeenSet;
}

vector<ApproverInfo> CreateFlowByFilesRequest::GetApprovers() const
{
    return m_approvers;
}

void CreateFlowByFilesRequest::SetApprovers(const vector<ApproverInfo>& _approvers)
{
    m_approvers = _approvers;
    m_approversHasBeenSet = true;
}

bool CreateFlowByFilesRequest::ApproversHasBeenSet() const
{
    return m_approversHasBeenSet;
}

string CreateFlowByFilesRequest::GetFlowDescription() const
{
    return m_flowDescription;
}

void CreateFlowByFilesRequest::SetFlowDescription(const string& _flowDescription)
{
    m_flowDescription = _flowDescription;
    m_flowDescriptionHasBeenSet = true;
}

bool CreateFlowByFilesRequest::FlowDescriptionHasBeenSet() const
{
    return m_flowDescriptionHasBeenSet;
}

bool CreateFlowByFilesRequest::GetUnordered() const
{
    return m_unordered;
}

void CreateFlowByFilesRequest::SetUnordered(const bool& _unordered)
{
    m_unordered = _unordered;
    m_unorderedHasBeenSet = true;
}

bool CreateFlowByFilesRequest::UnorderedHasBeenSet() const
{
    return m_unorderedHasBeenSet;
}

string CreateFlowByFilesRequest::GetFlowType() const
{
    return m_flowType;
}

void CreateFlowByFilesRequest::SetFlowType(const string& _flowType)
{
    m_flowType = _flowType;
    m_flowTypeHasBeenSet = true;
}

bool CreateFlowByFilesRequest::FlowTypeHasBeenSet() const
{
    return m_flowTypeHasBeenSet;
}

int64_t CreateFlowByFilesRequest::GetDeadline() const
{
    return m_deadline;
}

void CreateFlowByFilesRequest::SetDeadline(const int64_t& _deadline)
{
    m_deadline = _deadline;
    m_deadlineHasBeenSet = true;
}

bool CreateFlowByFilesRequest::DeadlineHasBeenSet() const
{
    return m_deadlineHasBeenSet;
}

Agent CreateFlowByFilesRequest::GetAgent() const
{
    return m_agent;
}

void CreateFlowByFilesRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CreateFlowByFilesRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

vector<Component> CreateFlowByFilesRequest::GetComponents() const
{
    return m_components;
}

void CreateFlowByFilesRequest::SetComponents(const vector<Component>& _components)
{
    m_components = _components;
    m_componentsHasBeenSet = true;
}

bool CreateFlowByFilesRequest::ComponentsHasBeenSet() const
{
    return m_componentsHasBeenSet;
}

vector<CcInfo> CreateFlowByFilesRequest::GetCcInfos() const
{
    return m_ccInfos;
}

void CreateFlowByFilesRequest::SetCcInfos(const vector<CcInfo>& _ccInfos)
{
    m_ccInfos = _ccInfos;
    m_ccInfosHasBeenSet = true;
}

bool CreateFlowByFilesRequest::CcInfosHasBeenSet() const
{
    return m_ccInfosHasBeenSet;
}

bool CreateFlowByFilesRequest::GetNeedPreview() const
{
    return m_needPreview;
}

void CreateFlowByFilesRequest::SetNeedPreview(const bool& _needPreview)
{
    m_needPreview = _needPreview;
    m_needPreviewHasBeenSet = true;
}

bool CreateFlowByFilesRequest::NeedPreviewHasBeenSet() const
{
    return m_needPreviewHasBeenSet;
}


