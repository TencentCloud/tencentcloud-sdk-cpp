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

#include <tencentcloud/postgres/v20170312/model/RestoreDBInstanceObjectsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

RestoreDBInstanceObjectsRequest::RestoreDBInstanceObjectsRequest() :
    m_dBInstanceIdHasBeenSet(false),
    m_restoreObjectsHasBeenSet(false),
    m_backupSetIdHasBeenSet(false),
    m_restoreTargetTimeHasBeenSet(false)
{
}

string RestoreDBInstanceObjectsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dBInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dBInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_restoreObjectsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestoreObjects";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_restoreObjects.begin(); itr != m_restoreObjects.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_backupSetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupSetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupSetId.c_str(), allocator).Move(), allocator);
    }

    if (m_restoreTargetTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestoreTargetTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_restoreTargetTime.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RestoreDBInstanceObjectsRequest::GetDBInstanceId() const
{
    return m_dBInstanceId;
}

void RestoreDBInstanceObjectsRequest::SetDBInstanceId(const string& _dBInstanceId)
{
    m_dBInstanceId = _dBInstanceId;
    m_dBInstanceIdHasBeenSet = true;
}

bool RestoreDBInstanceObjectsRequest::DBInstanceIdHasBeenSet() const
{
    return m_dBInstanceIdHasBeenSet;
}

vector<string> RestoreDBInstanceObjectsRequest::GetRestoreObjects() const
{
    return m_restoreObjects;
}

void RestoreDBInstanceObjectsRequest::SetRestoreObjects(const vector<string>& _restoreObjects)
{
    m_restoreObjects = _restoreObjects;
    m_restoreObjectsHasBeenSet = true;
}

bool RestoreDBInstanceObjectsRequest::RestoreObjectsHasBeenSet() const
{
    return m_restoreObjectsHasBeenSet;
}

string RestoreDBInstanceObjectsRequest::GetBackupSetId() const
{
    return m_backupSetId;
}

void RestoreDBInstanceObjectsRequest::SetBackupSetId(const string& _backupSetId)
{
    m_backupSetId = _backupSetId;
    m_backupSetIdHasBeenSet = true;
}

bool RestoreDBInstanceObjectsRequest::BackupSetIdHasBeenSet() const
{
    return m_backupSetIdHasBeenSet;
}

string RestoreDBInstanceObjectsRequest::GetRestoreTargetTime() const
{
    return m_restoreTargetTime;
}

void RestoreDBInstanceObjectsRequest::SetRestoreTargetTime(const string& _restoreTargetTime)
{
    m_restoreTargetTime = _restoreTargetTime;
    m_restoreTargetTimeHasBeenSet = true;
}

bool RestoreDBInstanceObjectsRequest::RestoreTargetTimeHasBeenSet() const
{
    return m_restoreTargetTimeHasBeenSet;
}


