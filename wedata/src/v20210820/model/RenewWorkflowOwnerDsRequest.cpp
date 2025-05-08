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

#include <tencentcloud/wedata/v20210820/model/RenewWorkflowOwnerDsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

RenewWorkflowOwnerDsRequest::RenewWorkflowOwnerDsRequest() :
    m_projectIdHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_workflowIdsHasBeenSet(false)
{
}

string RenewWorkflowOwnerDsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_owner.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ownerId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_workflowIds.begin(); itr != m_workflowIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RenewWorkflowOwnerDsRequest::GetProjectId() const
{
    return m_projectId;
}

void RenewWorkflowOwnerDsRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool RenewWorkflowOwnerDsRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string RenewWorkflowOwnerDsRequest::GetOwner() const
{
    return m_owner;
}

void RenewWorkflowOwnerDsRequest::SetOwner(const string& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool RenewWorkflowOwnerDsRequest::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

string RenewWorkflowOwnerDsRequest::GetOwnerId() const
{
    return m_ownerId;
}

void RenewWorkflowOwnerDsRequest::SetOwnerId(const string& _ownerId)
{
    m_ownerId = _ownerId;
    m_ownerIdHasBeenSet = true;
}

bool RenewWorkflowOwnerDsRequest::OwnerIdHasBeenSet() const
{
    return m_ownerIdHasBeenSet;
}

vector<string> RenewWorkflowOwnerDsRequest::GetWorkflowIds() const
{
    return m_workflowIds;
}

void RenewWorkflowOwnerDsRequest::SetWorkflowIds(const vector<string>& _workflowIds)
{
    m_workflowIds = _workflowIds;
    m_workflowIdsHasBeenSet = true;
}

bool RenewWorkflowOwnerDsRequest::WorkflowIdsHasBeenSet() const
{
    return m_workflowIdsHasBeenSet;
}


