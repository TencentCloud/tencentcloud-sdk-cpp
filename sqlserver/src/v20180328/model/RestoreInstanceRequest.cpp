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

#include <tencentcloud/sqlserver/v20180328/model/RestoreInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

RestoreInstanceRequest::RestoreInstanceRequest() :
    m_instanceIdHasBeenSet(false),
    m_backupIdHasBeenSet(false),
    m_targetInstanceIdHasBeenSet(false),
    m_renameRestoreHasBeenSet(false),
    m_groupIdHasBeenSet(false)
{
}

string RestoreInstanceRequest::ToJsonString() const
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

    if (m_backupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_backupId, allocator);
    }

    if (m_targetInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_renameRestoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenameRestore";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_renameRestore.begin(); itr != m_renameRestore.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
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


string RestoreInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void RestoreInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RestoreInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t RestoreInstanceRequest::GetBackupId() const
{
    return m_backupId;
}

void RestoreInstanceRequest::SetBackupId(const int64_t& _backupId)
{
    m_backupId = _backupId;
    m_backupIdHasBeenSet = true;
}

bool RestoreInstanceRequest::BackupIdHasBeenSet() const
{
    return m_backupIdHasBeenSet;
}

string RestoreInstanceRequest::GetTargetInstanceId() const
{
    return m_targetInstanceId;
}

void RestoreInstanceRequest::SetTargetInstanceId(const string& _targetInstanceId)
{
    m_targetInstanceId = _targetInstanceId;
    m_targetInstanceIdHasBeenSet = true;
}

bool RestoreInstanceRequest::TargetInstanceIdHasBeenSet() const
{
    return m_targetInstanceIdHasBeenSet;
}

vector<RenameRestoreDatabase> RestoreInstanceRequest::GetRenameRestore() const
{
    return m_renameRestore;
}

void RestoreInstanceRequest::SetRenameRestore(const vector<RenameRestoreDatabase>& _renameRestore)
{
    m_renameRestore = _renameRestore;
    m_renameRestoreHasBeenSet = true;
}

bool RestoreInstanceRequest::RenameRestoreHasBeenSet() const
{
    return m_renameRestoreHasBeenSet;
}

string RestoreInstanceRequest::GetGroupId() const
{
    return m_groupId;
}

void RestoreInstanceRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool RestoreInstanceRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}


