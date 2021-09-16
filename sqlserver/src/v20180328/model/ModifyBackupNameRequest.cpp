/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/sqlserver/v20180328/model/ModifyBackupNameRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

ModifyBackupNameRequest::ModifyBackupNameRequest() :
    m_instanceIdHasBeenSet(false),
    m_backupNameHasBeenSet(false),
    m_backupIdHasBeenSet(false),
    m_groupIdHasBeenSet(false)
{
}

string ModifyBackupNameRequest::ToJsonString() const
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

    if (m_backupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupName.c_str(), allocator).Move(), allocator);
    }

    if (m_backupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_backupId, allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyBackupNameRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyBackupNameRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyBackupNameRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyBackupNameRequest::GetBackupName() const
{
    return m_backupName;
}

void ModifyBackupNameRequest::SetBackupName(const string& _backupName)
{
    m_backupName = _backupName;
    m_backupNameHasBeenSet = true;
}

bool ModifyBackupNameRequest::BackupNameHasBeenSet() const
{
    return m_backupNameHasBeenSet;
}

uint64_t ModifyBackupNameRequest::GetBackupId() const
{
    return m_backupId;
}

void ModifyBackupNameRequest::SetBackupId(const uint64_t& _backupId)
{
    m_backupId = _backupId;
    m_backupIdHasBeenSet = true;
}

bool ModifyBackupNameRequest::BackupIdHasBeenSet() const
{
    return m_backupIdHasBeenSet;
}

string ModifyBackupNameRequest::GetGroupId() const
{
    return m_groupId;
}

void ModifyBackupNameRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool ModifyBackupNameRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}


