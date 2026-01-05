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

#include <tencentcloud/wedata/v20250806/model/UpdateTriggerWorkflowRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

UpdateTriggerWorkflowRequest::UpdateTriggerWorkflowRequest() :
    m_projectIdHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_workflowNameHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_workflowDescHasBeenSet(false),
    m_workflowParamsHasBeenSet(false),
    m_triggerWorkflowSchedulerConfigurationsHasBeenSet(false),
    m_bundleIdHasBeenSet(false),
    m_bundleInfoHasBeenSet(false),
    m_generalTaskParamsHasBeenSet(false)
{
}

string UpdateTriggerWorkflowRequest::ToJsonString() const
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

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workflowName.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workflowDesc.c_str(), allocator).Move(), allocator);
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


string UpdateTriggerWorkflowRequest::GetProjectId() const
{
    return m_projectId;
}

void UpdateTriggerWorkflowRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool UpdateTriggerWorkflowRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string UpdateTriggerWorkflowRequest::GetWorkflowId() const
{
    return m_workflowId;
}

void UpdateTriggerWorkflowRequest::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool UpdateTriggerWorkflowRequest::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string UpdateTriggerWorkflowRequest::GetWorkflowName() const
{
    return m_workflowName;
}

void UpdateTriggerWorkflowRequest::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool UpdateTriggerWorkflowRequest::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

string UpdateTriggerWorkflowRequest::GetOwnerUin() const
{
    return m_ownerUin;
}

void UpdateTriggerWorkflowRequest::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool UpdateTriggerWorkflowRequest::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string UpdateTriggerWorkflowRequest::GetWorkflowDesc() const
{
    return m_workflowDesc;
}

void UpdateTriggerWorkflowRequest::SetWorkflowDesc(const string& _workflowDesc)
{
    m_workflowDesc = _workflowDesc;
    m_workflowDescHasBeenSet = true;
}

bool UpdateTriggerWorkflowRequest::WorkflowDescHasBeenSet() const
{
    return m_workflowDescHasBeenSet;
}

vector<ParamInfo> UpdateTriggerWorkflowRequest::GetWorkflowParams() const
{
    return m_workflowParams;
}

void UpdateTriggerWorkflowRequest::SetWorkflowParams(const vector<ParamInfo>& _workflowParams)
{
    m_workflowParams = _workflowParams;
    m_workflowParamsHasBeenSet = true;
}

bool UpdateTriggerWorkflowRequest::WorkflowParamsHasBeenSet() const
{
    return m_workflowParamsHasBeenSet;
}

vector<WorkflowTriggerConfig> UpdateTriggerWorkflowRequest::GetTriggerWorkflowSchedulerConfigurations() const
{
    return m_triggerWorkflowSchedulerConfigurations;
}

void UpdateTriggerWorkflowRequest::SetTriggerWorkflowSchedulerConfigurations(const vector<WorkflowTriggerConfig>& _triggerWorkflowSchedulerConfigurations)
{
    m_triggerWorkflowSchedulerConfigurations = _triggerWorkflowSchedulerConfigurations;
    m_triggerWorkflowSchedulerConfigurationsHasBeenSet = true;
}

bool UpdateTriggerWorkflowRequest::TriggerWorkflowSchedulerConfigurationsHasBeenSet() const
{
    return m_triggerWorkflowSchedulerConfigurationsHasBeenSet;
}

string UpdateTriggerWorkflowRequest::GetBundleId() const
{
    return m_bundleId;
}

void UpdateTriggerWorkflowRequest::SetBundleId(const string& _bundleId)
{
    m_bundleId = _bundleId;
    m_bundleIdHasBeenSet = true;
}

bool UpdateTriggerWorkflowRequest::BundleIdHasBeenSet() const
{
    return m_bundleIdHasBeenSet;
}

string UpdateTriggerWorkflowRequest::GetBundleInfo() const
{
    return m_bundleInfo;
}

void UpdateTriggerWorkflowRequest::SetBundleInfo(const string& _bundleInfo)
{
    m_bundleInfo = _bundleInfo;
    m_bundleInfoHasBeenSet = true;
}

bool UpdateTriggerWorkflowRequest::BundleInfoHasBeenSet() const
{
    return m_bundleInfoHasBeenSet;
}

vector<WorkflowGeneralTaskParam> UpdateTriggerWorkflowRequest::GetGeneralTaskParams() const
{
    return m_generalTaskParams;
}

void UpdateTriggerWorkflowRequest::SetGeneralTaskParams(const vector<WorkflowGeneralTaskParam>& _generalTaskParams)
{
    m_generalTaskParams = _generalTaskParams;
    m_generalTaskParamsHasBeenSet = true;
}

bool UpdateTriggerWorkflowRequest::GeneralTaskParamsHasBeenSet() const
{
    return m_generalTaskParamsHasBeenSet;
}


