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

#include <tencentcloud/bdrc/v20260330/model/CreateFileBackupPlanRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

CreateFileBackupPlanRequest::CreateFileBackupPlanRequest() :
    m_policyIdHasBeenSet(false),
    m_backupStorageIdHasBeenSet(false),
    m_planNameHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_resourceTypeHasBeenSet(false)
{
}

string CreateFileBackupPlanRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyId.c_str(), allocator).Move(), allocator);
    }

    if (m_backupStorageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupStorageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupStorageId.c_str(), allocator).Move(), allocator);
    }

    if (m_planNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_planName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resources";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resources.begin(); itr != m_resources.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateFileBackupPlanRequest::GetPolicyId() const
{
    return m_policyId;
}

void CreateFileBackupPlanRequest::SetPolicyId(const string& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool CreateFileBackupPlanRequest::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string CreateFileBackupPlanRequest::GetBackupStorageId() const
{
    return m_backupStorageId;
}

void CreateFileBackupPlanRequest::SetBackupStorageId(const string& _backupStorageId)
{
    m_backupStorageId = _backupStorageId;
    m_backupStorageIdHasBeenSet = true;
}

bool CreateFileBackupPlanRequest::BackupStorageIdHasBeenSet() const
{
    return m_backupStorageIdHasBeenSet;
}

string CreateFileBackupPlanRequest::GetPlanName() const
{
    return m_planName;
}

void CreateFileBackupPlanRequest::SetPlanName(const string& _planName)
{
    m_planName = _planName;
    m_planNameHasBeenSet = true;
}

bool CreateFileBackupPlanRequest::PlanNameHasBeenSet() const
{
    return m_planNameHasBeenSet;
}

vector<ResourcePlan> CreateFileBackupPlanRequest::GetResources() const
{
    return m_resources;
}

void CreateFileBackupPlanRequest::SetResources(const vector<ResourcePlan>& _resources)
{
    m_resources = _resources;
    m_resourcesHasBeenSet = true;
}

bool CreateFileBackupPlanRequest::ResourcesHasBeenSet() const
{
    return m_resourcesHasBeenSet;
}

string CreateFileBackupPlanRequest::GetResourceType() const
{
    return m_resourceType;
}

void CreateFileBackupPlanRequest::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool CreateFileBackupPlanRequest::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}


