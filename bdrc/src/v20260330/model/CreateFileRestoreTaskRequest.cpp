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

#include <tencentcloud/bdrc/v20260330/model/CreateFileRestoreTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

CreateFileRestoreTaskRequest::CreateFileRestoreTaskRequest() :
    m_backupIdHasBeenSet(false),
    m_targetResourceIdHasBeenSet(false),
    m_restorePathsHasBeenSet(false),
    m_targetLocationHasBeenSet(false),
    m_conflictStrategyHasBeenSet(false)
{
}

string CreateFileRestoreTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_backupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetResourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetResourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_restorePathsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestorePaths";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_restorePaths.begin(); itr != m_restorePaths.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_targetLocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetLocation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetLocation.c_str(), allocator).Move(), allocator);
    }

    if (m_conflictStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConflictStrategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_conflictStrategy.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateFileRestoreTaskRequest::GetBackupId() const
{
    return m_backupId;
}

void CreateFileRestoreTaskRequest::SetBackupId(const string& _backupId)
{
    m_backupId = _backupId;
    m_backupIdHasBeenSet = true;
}

bool CreateFileRestoreTaskRequest::BackupIdHasBeenSet() const
{
    return m_backupIdHasBeenSet;
}

string CreateFileRestoreTaskRequest::GetTargetResourceId() const
{
    return m_targetResourceId;
}

void CreateFileRestoreTaskRequest::SetTargetResourceId(const string& _targetResourceId)
{
    m_targetResourceId = _targetResourceId;
    m_targetResourceIdHasBeenSet = true;
}

bool CreateFileRestoreTaskRequest::TargetResourceIdHasBeenSet() const
{
    return m_targetResourceIdHasBeenSet;
}

vector<string> CreateFileRestoreTaskRequest::GetRestorePaths() const
{
    return m_restorePaths;
}

void CreateFileRestoreTaskRequest::SetRestorePaths(const vector<string>& _restorePaths)
{
    m_restorePaths = _restorePaths;
    m_restorePathsHasBeenSet = true;
}

bool CreateFileRestoreTaskRequest::RestorePathsHasBeenSet() const
{
    return m_restorePathsHasBeenSet;
}

string CreateFileRestoreTaskRequest::GetTargetLocation() const
{
    return m_targetLocation;
}

void CreateFileRestoreTaskRequest::SetTargetLocation(const string& _targetLocation)
{
    m_targetLocation = _targetLocation;
    m_targetLocationHasBeenSet = true;
}

bool CreateFileRestoreTaskRequest::TargetLocationHasBeenSet() const
{
    return m_targetLocationHasBeenSet;
}

string CreateFileRestoreTaskRequest::GetConflictStrategy() const
{
    return m_conflictStrategy;
}

void CreateFileRestoreTaskRequest::SetConflictStrategy(const string& _conflictStrategy)
{
    m_conflictStrategy = _conflictStrategy;
    m_conflictStrategyHasBeenSet = true;
}

bool CreateFileRestoreTaskRequest::ConflictStrategyHasBeenSet() const
{
    return m_conflictStrategyHasBeenSet;
}


