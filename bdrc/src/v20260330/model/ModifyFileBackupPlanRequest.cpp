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

#include <tencentcloud/bdrc/v20260330/model/ModifyFileBackupPlanRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

ModifyFileBackupPlanRequest::ModifyFileBackupPlanRequest() :
    m_planIdHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_planNameHasBeenSet(false),
    m_backupPathsHasBeenSet(false),
    m_includeFileTypesHasBeenSet(false),
    m_excludePatternsHasBeenSet(false),
    m_excludeSystemDirectoriesHasBeenSet(false),
    m_backupStorageIdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

string ModifyFileBackupPlanRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_planIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_planId.c_str(), allocator).Move(), allocator);
    }

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyId.c_str(), allocator).Move(), allocator);
    }

    if (m_planNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_planName.c_str(), allocator).Move(), allocator);
    }

    if (m_backupPathsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupPaths";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_backupPaths.begin(); itr != m_backupPaths.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_includeFileTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludeFileTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_includeFileTypes.begin(); itr != m_includeFileTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_excludePatternsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludePatterns";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludePatterns.begin(); itr != m_excludePatterns.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_excludeSystemDirectoriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeSystemDirectories";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_excludeSystemDirectories, allocator);
    }

    if (m_backupStorageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupStorageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupStorageId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyFileBackupPlanRequest::GetPlanId() const
{
    return m_planId;
}

void ModifyFileBackupPlanRequest::SetPlanId(const string& _planId)
{
    m_planId = _planId;
    m_planIdHasBeenSet = true;
}

bool ModifyFileBackupPlanRequest::PlanIdHasBeenSet() const
{
    return m_planIdHasBeenSet;
}

string ModifyFileBackupPlanRequest::GetPolicyId() const
{
    return m_policyId;
}

void ModifyFileBackupPlanRequest::SetPolicyId(const string& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool ModifyFileBackupPlanRequest::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string ModifyFileBackupPlanRequest::GetPlanName() const
{
    return m_planName;
}

void ModifyFileBackupPlanRequest::SetPlanName(const string& _planName)
{
    m_planName = _planName;
    m_planNameHasBeenSet = true;
}

bool ModifyFileBackupPlanRequest::PlanNameHasBeenSet() const
{
    return m_planNameHasBeenSet;
}

vector<string> ModifyFileBackupPlanRequest::GetBackupPaths() const
{
    return m_backupPaths;
}

void ModifyFileBackupPlanRequest::SetBackupPaths(const vector<string>& _backupPaths)
{
    m_backupPaths = _backupPaths;
    m_backupPathsHasBeenSet = true;
}

bool ModifyFileBackupPlanRequest::BackupPathsHasBeenSet() const
{
    return m_backupPathsHasBeenSet;
}

vector<string> ModifyFileBackupPlanRequest::GetIncludeFileTypes() const
{
    return m_includeFileTypes;
}

void ModifyFileBackupPlanRequest::SetIncludeFileTypes(const vector<string>& _includeFileTypes)
{
    m_includeFileTypes = _includeFileTypes;
    m_includeFileTypesHasBeenSet = true;
}

bool ModifyFileBackupPlanRequest::IncludeFileTypesHasBeenSet() const
{
    return m_includeFileTypesHasBeenSet;
}

vector<string> ModifyFileBackupPlanRequest::GetExcludePatterns() const
{
    return m_excludePatterns;
}

void ModifyFileBackupPlanRequest::SetExcludePatterns(const vector<string>& _excludePatterns)
{
    m_excludePatterns = _excludePatterns;
    m_excludePatternsHasBeenSet = true;
}

bool ModifyFileBackupPlanRequest::ExcludePatternsHasBeenSet() const
{
    return m_excludePatternsHasBeenSet;
}

bool ModifyFileBackupPlanRequest::GetExcludeSystemDirectories() const
{
    return m_excludeSystemDirectories;
}

void ModifyFileBackupPlanRequest::SetExcludeSystemDirectories(const bool& _excludeSystemDirectories)
{
    m_excludeSystemDirectories = _excludeSystemDirectories;
    m_excludeSystemDirectoriesHasBeenSet = true;
}

bool ModifyFileBackupPlanRequest::ExcludeSystemDirectoriesHasBeenSet() const
{
    return m_excludeSystemDirectoriesHasBeenSet;
}

string ModifyFileBackupPlanRequest::GetBackupStorageId() const
{
    return m_backupStorageId;
}

void ModifyFileBackupPlanRequest::SetBackupStorageId(const string& _backupStorageId)
{
    m_backupStorageId = _backupStorageId;
    m_backupStorageIdHasBeenSet = true;
}

bool ModifyFileBackupPlanRequest::BackupStorageIdHasBeenSet() const
{
    return m_backupStorageIdHasBeenSet;
}

string ModifyFileBackupPlanRequest::GetStatus() const
{
    return m_status;
}

void ModifyFileBackupPlanRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyFileBackupPlanRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


