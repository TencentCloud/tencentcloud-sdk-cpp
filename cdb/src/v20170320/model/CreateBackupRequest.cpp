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

#include <tencentcloud/cdb/v20170320/model/CreateBackupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

CreateBackupRequest::CreateBackupRequest() :
    m_instanceIdHasBeenSet(false),
    m_backupMethodHasBeenSet(false),
    m_backupDBTableListHasBeenSet(false),
    m_manualBackupNameHasBeenSet(false),
    m_encryptionFlagHasBeenSet(false)
{
}

string CreateBackupRequest::ToJsonString() const
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

    if (m_backupMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupMethod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_backupDBTableListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupDBTableList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_backupDBTableList.begin(); itr != m_backupDBTableList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_manualBackupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManualBackupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_manualBackupName.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptionFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptionFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_encryptionFlag.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateBackupRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateBackupRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateBackupRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateBackupRequest::GetBackupMethod() const
{
    return m_backupMethod;
}

void CreateBackupRequest::SetBackupMethod(const string& _backupMethod)
{
    m_backupMethod = _backupMethod;
    m_backupMethodHasBeenSet = true;
}

bool CreateBackupRequest::BackupMethodHasBeenSet() const
{
    return m_backupMethodHasBeenSet;
}

vector<BackupItem> CreateBackupRequest::GetBackupDBTableList() const
{
    return m_backupDBTableList;
}

void CreateBackupRequest::SetBackupDBTableList(const vector<BackupItem>& _backupDBTableList)
{
    m_backupDBTableList = _backupDBTableList;
    m_backupDBTableListHasBeenSet = true;
}

bool CreateBackupRequest::BackupDBTableListHasBeenSet() const
{
    return m_backupDBTableListHasBeenSet;
}

string CreateBackupRequest::GetManualBackupName() const
{
    return m_manualBackupName;
}

void CreateBackupRequest::SetManualBackupName(const string& _manualBackupName)
{
    m_manualBackupName = _manualBackupName;
    m_manualBackupNameHasBeenSet = true;
}

bool CreateBackupRequest::ManualBackupNameHasBeenSet() const
{
    return m_manualBackupNameHasBeenSet;
}

string CreateBackupRequest::GetEncryptionFlag() const
{
    return m_encryptionFlag;
}

void CreateBackupRequest::SetEncryptionFlag(const string& _encryptionFlag)
{
    m_encryptionFlag = _encryptionFlag;
    m_encryptionFlagHasBeenSet = true;
}

bool CreateBackupRequest::EncryptionFlagHasBeenSet() const
{
    return m_encryptionFlagHasBeenSet;
}


