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

#include <tencentcloud/wedata/v20210820/model/ModifyProjectRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ModifyProjectRequest::ModifyProjectRequest() :
    m_projectIdHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_taskSubmitApprovalHasBeenSet(false),
    m_resourcePoolInfoHasBeenSet(false),
    m_projectManagersHasBeenSet(false),
    m_taskStrictModeHasBeenSet(false),
    m_extraOptionsHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_projectOwnerHasBeenSet(false),
    m_modifyTypeHasBeenSet(false)
{
}

string ModifyProjectRequest::ToJsonString() const
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

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_taskSubmitApprovalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskSubmitApproval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskSubmitApproval, allocator);
    }

    if (m_resourcePoolInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourcePoolInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resourcePoolInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_projectManagersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectManagers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_projectManagers.begin(); itr != m_projectManagers.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_taskStrictModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStrictMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskStrictMode, allocator);
    }

    if (m_extraOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraOptions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extraOptions.c_str(), allocator).Move(), allocator);
    }

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_projectOwnerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectOwner";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_projectOwner.begin(); itr != m_projectOwner.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_modifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modifyType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyProjectRequest::GetProjectId() const
{
    return m_projectId;
}

void ModifyProjectRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ModifyProjectRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ModifyProjectRequest::GetDisplayName() const
{
    return m_displayName;
}

void ModifyProjectRequest::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool ModifyProjectRequest::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string ModifyProjectRequest::GetDescription() const
{
    return m_description;
}

void ModifyProjectRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyProjectRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

bool ModifyProjectRequest::GetTaskSubmitApproval() const
{
    return m_taskSubmitApproval;
}

void ModifyProjectRequest::SetTaskSubmitApproval(const bool& _taskSubmitApproval)
{
    m_taskSubmitApproval = _taskSubmitApproval;
    m_taskSubmitApprovalHasBeenSet = true;
}

bool ModifyProjectRequest::TaskSubmitApprovalHasBeenSet() const
{
    return m_taskSubmitApprovalHasBeenSet;
}

ResourcePoolInfo ModifyProjectRequest::GetResourcePoolInfo() const
{
    return m_resourcePoolInfo;
}

void ModifyProjectRequest::SetResourcePoolInfo(const ResourcePoolInfo& _resourcePoolInfo)
{
    m_resourcePoolInfo = _resourcePoolInfo;
    m_resourcePoolInfoHasBeenSet = true;
}

bool ModifyProjectRequest::ResourcePoolInfoHasBeenSet() const
{
    return m_resourcePoolInfoHasBeenSet;
}

vector<string> ModifyProjectRequest::GetProjectManagers() const
{
    return m_projectManagers;
}

void ModifyProjectRequest::SetProjectManagers(const vector<string>& _projectManagers)
{
    m_projectManagers = _projectManagers;
    m_projectManagersHasBeenSet = true;
}

bool ModifyProjectRequest::ProjectManagersHasBeenSet() const
{
    return m_projectManagersHasBeenSet;
}

bool ModifyProjectRequest::GetTaskStrictMode() const
{
    return m_taskStrictMode;
}

void ModifyProjectRequest::SetTaskStrictMode(const bool& _taskStrictMode)
{
    m_taskStrictMode = _taskStrictMode;
    m_taskStrictModeHasBeenSet = true;
}

bool ModifyProjectRequest::TaskStrictModeHasBeenSet() const
{
    return m_taskStrictModeHasBeenSet;
}

string ModifyProjectRequest::GetExtraOptions() const
{
    return m_extraOptions;
}

void ModifyProjectRequest::SetExtraOptions(const string& _extraOptions)
{
    m_extraOptions = _extraOptions;
    m_extraOptionsHasBeenSet = true;
}

bool ModifyProjectRequest::ExtraOptionsHasBeenSet() const
{
    return m_extraOptionsHasBeenSet;
}

string ModifyProjectRequest::GetModel() const
{
    return m_model;
}

void ModifyProjectRequest::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool ModifyProjectRequest::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

vector<string> ModifyProjectRequest::GetProjectOwner() const
{
    return m_projectOwner;
}

void ModifyProjectRequest::SetProjectOwner(const vector<string>& _projectOwner)
{
    m_projectOwner = _projectOwner;
    m_projectOwnerHasBeenSet = true;
}

bool ModifyProjectRequest::ProjectOwnerHasBeenSet() const
{
    return m_projectOwnerHasBeenSet;
}

string ModifyProjectRequest::GetModifyType() const
{
    return m_modifyType;
}

void ModifyProjectRequest::SetModifyType(const string& _modifyType)
{
    m_modifyType = _modifyType;
    m_modifyTypeHasBeenSet = true;
}

bool ModifyProjectRequest::ModifyTypeHasBeenSet() const
{
    return m_modifyTypeHasBeenSet;
}


