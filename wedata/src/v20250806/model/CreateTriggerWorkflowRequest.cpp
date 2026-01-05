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

#include <tencentcloud/wedata/v20250806/model/CreateTriggerWorkflowRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

CreateTriggerWorkflowRequest::CreateTriggerWorkflowRequest() :
    m_projectIdHasBeenSet(false),
    m_workflowNameHasBeenSet(false),
    m_parentFolderPathHasBeenSet(false),
    m_workflowDescHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_workflowParamsHasBeenSet(false),
    m_triggerWorkflowSchedulerConfigurationsHasBeenSet(false),
    m_bundleIdHasBeenSet(false),
    m_bundleInfoHasBeenSet(false),
    m_generalTaskParamsHasBeenSet(false)
{
}

string CreateTriggerWorkflowRequest::ToJsonString() const
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

    if (m_workflowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workflowName.c_str(), allocator).Move(), allocator);
    }

    if (m_parentFolderPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentFolderPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_parentFolderPath.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workflowDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_workflowParams.begin(); itr != m_workflowParams.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_triggerWorkflowSchedulerConfigurationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerWorkflowSchedulerConfigurations";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_triggerWorkflowSchedulerConfigurations.begin(); itr != m_triggerWorkflowSchedulerConfigurations.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_bundleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BundleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bundleId.c_str(), allocator).Move(), allocator);
    }

    if (m_bundleInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BundleInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bundleInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_generalTaskParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GeneralTaskParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_generalTaskParams.begin(); itr != m_generalTaskParams.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateTriggerWorkflowRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateTriggerWorkflowRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateTriggerWorkflowRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateTriggerWorkflowRequest::GetWorkflowName() const
{
    return m_workflowName;
}

void CreateTriggerWorkflowRequest::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool CreateTriggerWorkflowRequest::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

string CreateTriggerWorkflowRequest::GetParentFolderPath() const
{
    return m_parentFolderPath;
}

void CreateTriggerWorkflowRequest::SetParentFolderPath(const string& _parentFolderPath)
{
    m_parentFolderPath = _parentFolderPath;
    m_parentFolderPathHasBeenSet = true;
}

bool CreateTriggerWorkflowRequest::ParentFolderPathHasBeenSet() const
{
    return m_parentFolderPathHasBeenSet;
}

string CreateTriggerWorkflowRequest::GetWorkflowDesc() const
{
    return m_workflowDesc;
}

void CreateTriggerWorkflowRequest::SetWorkflowDesc(const string& _workflowDesc)
{
    m_workflowDesc = _workflowDesc;
    m_workflowDescHasBeenSet = true;
}

bool CreateTriggerWorkflowRequest::WorkflowDescHasBeenSet() const
{
    return m_workflowDescHasBeenSet;
}

string CreateTriggerWorkflowRequest::GetOwnerUin() const
{
    return m_ownerUin;
}

void CreateTriggerWorkflowRequest::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool CreateTriggerWorkflowRequest::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

vector<ParamInfo> CreateTriggerWorkflowRequest::GetWorkflowParams() const
{
    return m_workflowParams;
}

void CreateTriggerWorkflowRequest::SetWorkflowParams(const vector<ParamInfo>& _workflowParams)
{
    m_workflowParams = _workflowParams;
    m_workflowParamsHasBeenSet = true;
}

bool CreateTriggerWorkflowRequest::WorkflowParamsHasBeenSet() const
{
    return m_workflowParamsHasBeenSet;
}

vector<WorkflowTriggerConfig> CreateTriggerWorkflowRequest::GetTriggerWorkflowSchedulerConfigurations() const
{
    return m_triggerWorkflowSchedulerConfigurations;
}

void CreateTriggerWorkflowRequest::SetTriggerWorkflowSchedulerConfigurations(const vector<WorkflowTriggerConfig>& _triggerWorkflowSchedulerConfigurations)
{
    m_triggerWorkflowSchedulerConfigurations = _triggerWorkflowSchedulerConfigurations;
    m_triggerWorkflowSchedulerConfigurationsHasBeenSet = true;
}

bool CreateTriggerWorkflowRequest::TriggerWorkflowSchedulerConfigurationsHasBeenSet() const
{
    return m_triggerWorkflowSchedulerConfigurationsHasBeenSet;
}

string CreateTriggerWorkflowRequest::GetBundleId() const
{
    return m_bundleId;
}

void CreateTriggerWorkflowRequest::SetBundleId(const string& _bundleId)
{
    m_bundleId = _bundleId;
    m_bundleIdHasBeenSet = true;
}

bool CreateTriggerWorkflowRequest::BundleIdHasBeenSet() const
{
    return m_bundleIdHasBeenSet;
}

string CreateTriggerWorkflowRequest::GetBundleInfo() const
{
    return m_bundleInfo;
}

void CreateTriggerWorkflowRequest::SetBundleInfo(const string& _bundleInfo)
{
    m_bundleInfo = _bundleInfo;
    m_bundleInfoHasBeenSet = true;
}

bool CreateTriggerWorkflowRequest::BundleInfoHasBeenSet() const
{
    return m_bundleInfoHasBeenSet;
}

vector<WorkflowGeneralTaskParam> CreateTriggerWorkflowRequest::GetGeneralTaskParams() const
{
    return m_generalTaskParams;
}

void CreateTriggerWorkflowRequest::SetGeneralTaskParams(const vector<WorkflowGeneralTaskParam>& _generalTaskParams)
{
    m_generalTaskParams = _generalTaskParams;
    m_generalTaskParamsHasBeenSet = true;
}

bool CreateTriggerWorkflowRequest::GeneralTaskParamsHasBeenSet() const
{
    return m_generalTaskParamsHasBeenSet;
}


