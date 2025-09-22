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

#include <tencentcloud/wedata/v20250806/model/CreateWorkflowRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

CreateWorkflowRequest::CreateWorkflowRequest() :
    m_projectIdHasBeenSet(false),
    m_workflowNameHasBeenSet(false),
    m_parentFolderPathHasBeenSet(false),
    m_workflowTypeHasBeenSet(false),
    m_workflowDescHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_workflowParamsHasBeenSet(false),
    m_workflowSchedulerConfigurationHasBeenSet(false),
    m_bundleIdHasBeenSet(false),
    m_bundleInfoHasBeenSet(false)
{
}

string CreateWorkflowRequest::ToJsonString() const
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

    if (m_workflowTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workflowType.c_str(), allocator).Move(), allocator);
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

    if (m_workflowSchedulerConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowSchedulerConfiguration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_workflowSchedulerConfiguration.ToJsonObject(d[key.c_str()], allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateWorkflowRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateWorkflowRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateWorkflowRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateWorkflowRequest::GetWorkflowName() const
{
    return m_workflowName;
}

void CreateWorkflowRequest::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool CreateWorkflowRequest::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

string CreateWorkflowRequest::GetParentFolderPath() const
{
    return m_parentFolderPath;
}

void CreateWorkflowRequest::SetParentFolderPath(const string& _parentFolderPath)
{
    m_parentFolderPath = _parentFolderPath;
    m_parentFolderPathHasBeenSet = true;
}

bool CreateWorkflowRequest::ParentFolderPathHasBeenSet() const
{
    return m_parentFolderPathHasBeenSet;
}

string CreateWorkflowRequest::GetWorkflowType() const
{
    return m_workflowType;
}

void CreateWorkflowRequest::SetWorkflowType(const string& _workflowType)
{
    m_workflowType = _workflowType;
    m_workflowTypeHasBeenSet = true;
}

bool CreateWorkflowRequest::WorkflowTypeHasBeenSet() const
{
    return m_workflowTypeHasBeenSet;
}

string CreateWorkflowRequest::GetWorkflowDesc() const
{
    return m_workflowDesc;
}

void CreateWorkflowRequest::SetWorkflowDesc(const string& _workflowDesc)
{
    m_workflowDesc = _workflowDesc;
    m_workflowDescHasBeenSet = true;
}

bool CreateWorkflowRequest::WorkflowDescHasBeenSet() const
{
    return m_workflowDescHasBeenSet;
}

string CreateWorkflowRequest::GetOwnerUin() const
{
    return m_ownerUin;
}

void CreateWorkflowRequest::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool CreateWorkflowRequest::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

vector<ParamInfo> CreateWorkflowRequest::GetWorkflowParams() const
{
    return m_workflowParams;
}

void CreateWorkflowRequest::SetWorkflowParams(const vector<ParamInfo>& _workflowParams)
{
    m_workflowParams = _workflowParams;
    m_workflowParamsHasBeenSet = true;
}

bool CreateWorkflowRequest::WorkflowParamsHasBeenSet() const
{
    return m_workflowParamsHasBeenSet;
}

WorkflowSchedulerConfigurationInfo CreateWorkflowRequest::GetWorkflowSchedulerConfiguration() const
{
    return m_workflowSchedulerConfiguration;
}

void CreateWorkflowRequest::SetWorkflowSchedulerConfiguration(const WorkflowSchedulerConfigurationInfo& _workflowSchedulerConfiguration)
{
    m_workflowSchedulerConfiguration = _workflowSchedulerConfiguration;
    m_workflowSchedulerConfigurationHasBeenSet = true;
}

bool CreateWorkflowRequest::WorkflowSchedulerConfigurationHasBeenSet() const
{
    return m_workflowSchedulerConfigurationHasBeenSet;
}

string CreateWorkflowRequest::GetBundleId() const
{
    return m_bundleId;
}

void CreateWorkflowRequest::SetBundleId(const string& _bundleId)
{
    m_bundleId = _bundleId;
    m_bundleIdHasBeenSet = true;
}

bool CreateWorkflowRequest::BundleIdHasBeenSet() const
{
    return m_bundleIdHasBeenSet;
}

string CreateWorkflowRequest::GetBundleInfo() const
{
    return m_bundleInfo;
}

void CreateWorkflowRequest::SetBundleInfo(const string& _bundleInfo)
{
    m_bundleInfo = _bundleInfo;
    m_bundleInfoHasBeenSet = true;
}

bool CreateWorkflowRequest::BundleInfoHasBeenSet() const
{
    return m_bundleInfoHasBeenSet;
}


