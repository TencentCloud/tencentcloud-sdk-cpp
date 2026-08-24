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

#include <tencentcloud/bdrc/v20260330/model/ModifyFileBackupAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

ModifyFileBackupAttributeRequest::ModifyFileBackupAttributeRequest() :
    m_backupIdHasBeenSet(false),
    m_backupNameHasBeenSet(false),
    m_isPermanentHasBeenSet(false),
    m_deadlineHasBeenSet(false)
{
}

string ModifyFileBackupAttributeRequest::ToJsonString() const
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

    if (m_backupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupName.c_str(), allocator).Move(), allocator);
    }

    if (m_isPermanentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPermanent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isPermanent, allocator);
    }

    if (m_deadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deadline";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deadline.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyFileBackupAttributeRequest::GetBackupId() const
{
    return m_backupId;
}

void ModifyFileBackupAttributeRequest::SetBackupId(const string& _backupId)
{
    m_backupId = _backupId;
    m_backupIdHasBeenSet = true;
}

bool ModifyFileBackupAttributeRequest::BackupIdHasBeenSet() const
{
    return m_backupIdHasBeenSet;
}

string ModifyFileBackupAttributeRequest::GetBackupName() const
{
    return m_backupName;
}

void ModifyFileBackupAttributeRequest::SetBackupName(const string& _backupName)
{
    m_backupName = _backupName;
    m_backupNameHasBeenSet = true;
}

bool ModifyFileBackupAttributeRequest::BackupNameHasBeenSet() const
{
    return m_backupNameHasBeenSet;
}

bool ModifyFileBackupAttributeRequest::GetIsPermanent() const
{
    return m_isPermanent;
}

void ModifyFileBackupAttributeRequest::SetIsPermanent(const bool& _isPermanent)
{
    m_isPermanent = _isPermanent;
    m_isPermanentHasBeenSet = true;
}

bool ModifyFileBackupAttributeRequest::IsPermanentHasBeenSet() const
{
    return m_isPermanentHasBeenSet;
}

string ModifyFileBackupAttributeRequest::GetDeadline() const
{
    return m_deadline;
}

void ModifyFileBackupAttributeRequest::SetDeadline(const string& _deadline)
{
    m_deadline = _deadline;
    m_deadlineHasBeenSet = true;
}

bool ModifyFileBackupAttributeRequest::DeadlineHasBeenSet() const
{
    return m_deadlineHasBeenSet;
}


