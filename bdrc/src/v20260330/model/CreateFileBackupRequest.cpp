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

#include <tencentcloud/bdrc/v20260330/model/CreateFileBackupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

CreateFileBackupRequest::CreateFileBackupRequest() :
    m_resourceIdHasBeenSet(false),
    m_planIdHasBeenSet(false),
    m_backupPathsHasBeenSet(false),
    m_includeFileTypesHasBeenSet(false),
    m_excludePatternsHasBeenSet(false),
    m_excludeSystemDirectoriesHasBeenSet(false),
    m_backupStorageIdHasBeenSet(false),
    m_deadlineHasBeenSet(false),
    m_backupNameHasBeenSet(false)
{
}

string CreateFileBackupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_planIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_planId.c_str(), allocator).Move(), allocator);
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

    if (m_deadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deadline";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deadline.c_str(), allocator).Move(), allocator);
    }

    if (m_backupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateFileBackupRequest::GetResourceId() const
{
    return m_resourceId;
}

void CreateFileBackupRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool CreateFileBackupRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string CreateFileBackupRequest::GetPlanId() const
{
    return m_planId;
}

void CreateFileBackupRequest::SetPlanId(const string& _planId)
{
    m_planId = _planId;
    m_planIdHasBeenSet = true;
}

bool CreateFileBackupRequest::PlanIdHasBeenSet() const
{
    return m_planIdHasBeenSet;
}

vector<string> CreateFileBackupRequest::GetBackupPaths() const
{
    return m_backupPaths;
}

void CreateFileBackupRequest::SetBackupPaths(const vector<string>& _backupPaths)
{
    m_backupPaths = _backupPaths;
    m_backupPathsHasBeenSet = true;
}

bool CreateFileBackupRequest::BackupPathsHasBeenSet() const
{
    return m_backupPathsHasBeenSet;
}

vector<string> CreateFileBackupRequest::GetIncludeFileTypes() const
{
    return m_includeFileTypes;
}

void CreateFileBackupRequest::SetIncludeFileTypes(const vector<string>& _includeFileTypes)
{
    m_includeFileTypes = _includeFileTypes;
    m_includeFileTypesHasBeenSet = true;
}

bool CreateFileBackupRequest::IncludeFileTypesHasBeenSet() const
{
    return m_includeFileTypesHasBeenSet;
}

vector<string> CreateFileBackupRequest::GetExcludePatterns() const
{
    return m_excludePatterns;
}

void CreateFileBackupRequest::SetExcludePatterns(const vector<string>& _excludePatterns)
{
    m_excludePatterns = _excludePatterns;
    m_excludePatternsHasBeenSet = true;
}

bool CreateFileBackupRequest::ExcludePatternsHasBeenSet() const
{
    return m_excludePatternsHasBeenSet;
}

bool CreateFileBackupRequest::GetExcludeSystemDirectories() const
{
    return m_excludeSystemDirectories;
}

void CreateFileBackupRequest::SetExcludeSystemDirectories(const bool& _excludeSystemDirectories)
{
    m_excludeSystemDirectories = _excludeSystemDirectories;
    m_excludeSystemDirectoriesHasBeenSet = true;
}

bool CreateFileBackupRequest::ExcludeSystemDirectoriesHasBeenSet() const
{
    return m_excludeSystemDirectoriesHasBeenSet;
}

string CreateFileBackupRequest::GetBackupStorageId() const
{
    return m_backupStorageId;
}

void CreateFileBackupRequest::SetBackupStorageId(const string& _backupStorageId)
{
    m_backupStorageId = _backupStorageId;
    m_backupStorageIdHasBeenSet = true;
}

bool CreateFileBackupRequest::BackupStorageIdHasBeenSet() const
{
    return m_backupStorageIdHasBeenSet;
}

string CreateFileBackupRequest::GetDeadline() const
{
    return m_deadline;
}

void CreateFileBackupRequest::SetDeadline(const string& _deadline)
{
    m_deadline = _deadline;
    m_deadlineHasBeenSet = true;
}

bool CreateFileBackupRequest::DeadlineHasBeenSet() const
{
    return m_deadlineHasBeenSet;
}

string CreateFileBackupRequest::GetBackupName() const
{
    return m_backupName;
}

void CreateFileBackupRequest::SetBackupName(const string& _backupName)
{
    m_backupName = _backupName;
    m_backupNameHasBeenSet = true;
}

bool CreateFileBackupRequest::BackupNameHasBeenSet() const
{
    return m_backupNameHasBeenSet;
}


