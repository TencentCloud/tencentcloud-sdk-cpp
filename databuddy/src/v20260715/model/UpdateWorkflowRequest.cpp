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

#include <tencentcloud/databuddy/v20260715/model/UpdateWorkflowRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

UpdateWorkflowRequest::UpdateWorkflowRequest() :
    m_workspaceIdHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_fieldToRemoveListHasBeenSet(false),
    m_newSettingHasBeenSet(false)
{
}

string UpdateWorkflowRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workspaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_fieldToRemoveListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldToRemoveList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fieldToRemoveList.begin(); itr != m_fieldToRemoveList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_newSettingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewSetting";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_newSetting.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateWorkflowRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void UpdateWorkflowRequest::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool UpdateWorkflowRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string UpdateWorkflowRequest::GetWorkflowId() const
{
    return m_workflowId;
}

void UpdateWorkflowRequest::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool UpdateWorkflowRequest::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

vector<string> UpdateWorkflowRequest::GetFieldToRemoveList() const
{
    return m_fieldToRemoveList;
}

void UpdateWorkflowRequest::SetFieldToRemoveList(const vector<string>& _fieldToRemoveList)
{
    m_fieldToRemoveList = _fieldToRemoveList;
    m_fieldToRemoveListHasBeenSet = true;
}

bool UpdateWorkflowRequest::FieldToRemoveListHasBeenSet() const
{
    return m_fieldToRemoveListHasBeenSet;
}

Workflow UpdateWorkflowRequest::GetNewSetting() const
{
    return m_newSetting;
}

void UpdateWorkflowRequest::SetNewSetting(const Workflow& _newSetting)
{
    m_newSetting = _newSetting;
    m_newSettingHasBeenSet = true;
}

bool UpdateWorkflowRequest::NewSettingHasBeenSet() const
{
    return m_newSettingHasBeenSet;
}


