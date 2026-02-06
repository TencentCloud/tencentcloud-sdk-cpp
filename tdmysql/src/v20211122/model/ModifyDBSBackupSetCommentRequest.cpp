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

#include <tencentcloud/tdmysql/v20211122/model/ModifyDBSBackupSetCommentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmysql::V20211122::Model;
using namespace std;

ModifyDBSBackupSetCommentRequest::ModifyDBSBackupSetCommentRequest() :
    m_instanceIdHasBeenSet(false),
    m_backupSetIdHasBeenSet(false),
    m_newBackupNameHasBeenSet(false)
{
}

string ModifyDBSBackupSetCommentRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_backupSetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupSetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_backupSetId, allocator);
    }

    if (m_newBackupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewBackupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newBackupName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDBSBackupSetCommentRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyDBSBackupSetCommentRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyDBSBackupSetCommentRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t ModifyDBSBackupSetCommentRequest::GetBackupSetId() const
{
    return m_backupSetId;
}

void ModifyDBSBackupSetCommentRequest::SetBackupSetId(const int64_t& _backupSetId)
{
    m_backupSetId = _backupSetId;
    m_backupSetIdHasBeenSet = true;
}

bool ModifyDBSBackupSetCommentRequest::BackupSetIdHasBeenSet() const
{
    return m_backupSetIdHasBeenSet;
}

string ModifyDBSBackupSetCommentRequest::GetNewBackupName() const
{
    return m_newBackupName;
}

void ModifyDBSBackupSetCommentRequest::SetNewBackupName(const string& _newBackupName)
{
    m_newBackupName = _newBackupName;
    m_newBackupNameHasBeenSet = true;
}

bool ModifyDBSBackupSetCommentRequest::NewBackupNameHasBeenSet() const
{
    return m_newBackupNameHasBeenSet;
}


