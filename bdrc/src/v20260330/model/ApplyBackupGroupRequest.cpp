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

#include <tencentcloud/bdrc/v20260330/model/ApplyBackupGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

ApplyBackupGroupRequest::ApplyBackupGroupRequest() :
    m_backupGroupIdHasBeenSet(false),
    m_applyDisksHasBeenSet(false),
    m_autoStopInstanceHasBeenSet(false),
    m_autoStartInstanceHasBeenSet(false)
{
}

string ApplyBackupGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_backupGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_applyDisksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyDisks";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_applyDisks.begin(); itr != m_applyDisks.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_autoStopInstanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoStopInstance";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoStopInstance, allocator);
    }

    if (m_autoStartInstanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoStartInstance";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoStartInstance, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ApplyBackupGroupRequest::GetBackupGroupId() const
{
    return m_backupGroupId;
}

void ApplyBackupGroupRequest::SetBackupGroupId(const string& _backupGroupId)
{
    m_backupGroupId = _backupGroupId;
    m_backupGroupIdHasBeenSet = true;
}

bool ApplyBackupGroupRequest::BackupGroupIdHasBeenSet() const
{
    return m_backupGroupIdHasBeenSet;
}

vector<ApplyDisk> ApplyBackupGroupRequest::GetApplyDisks() const
{
    return m_applyDisks;
}

void ApplyBackupGroupRequest::SetApplyDisks(const vector<ApplyDisk>& _applyDisks)
{
    m_applyDisks = _applyDisks;
    m_applyDisksHasBeenSet = true;
}

bool ApplyBackupGroupRequest::ApplyDisksHasBeenSet() const
{
    return m_applyDisksHasBeenSet;
}

bool ApplyBackupGroupRequest::GetAutoStopInstance() const
{
    return m_autoStopInstance;
}

void ApplyBackupGroupRequest::SetAutoStopInstance(const bool& _autoStopInstance)
{
    m_autoStopInstance = _autoStopInstance;
    m_autoStopInstanceHasBeenSet = true;
}

bool ApplyBackupGroupRequest::AutoStopInstanceHasBeenSet() const
{
    return m_autoStopInstanceHasBeenSet;
}

bool ApplyBackupGroupRequest::GetAutoStartInstance() const
{
    return m_autoStartInstance;
}

void ApplyBackupGroupRequest::SetAutoStartInstance(const bool& _autoStartInstance)
{
    m_autoStartInstance = _autoStartInstance;
    m_autoStartInstanceHasBeenSet = true;
}

bool ApplyBackupGroupRequest::AutoStartInstanceHasBeenSet() const
{
    return m_autoStartInstanceHasBeenSet;
}


