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

#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupUploadSizeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace rapidjson;
using namespace std;

DescribeBackupUploadSizeRequest::DescribeBackupUploadSizeRequest() :
    m_instanceIdHasBeenSet(false),
    m_backupMigrationIdHasBeenSet(false),
    m_incrementalMigrationIdHasBeenSet(false)
{
}

string DescribeBackupUploadSizeRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_backupMigrationIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BackupMigrationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_backupMigrationId.c_str(), allocator).Move(), allocator);
    }

    if (m_incrementalMigrationIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IncrementalMigrationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_incrementalMigrationId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeBackupUploadSizeRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeBackupUploadSizeRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeBackupUploadSizeRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeBackupUploadSizeRequest::GetBackupMigrationId() const
{
    return m_backupMigrationId;
}

void DescribeBackupUploadSizeRequest::SetBackupMigrationId(const string& _backupMigrationId)
{
    m_backupMigrationId = _backupMigrationId;
    m_backupMigrationIdHasBeenSet = true;
}

bool DescribeBackupUploadSizeRequest::BackupMigrationIdHasBeenSet() const
{
    return m_backupMigrationIdHasBeenSet;
}

string DescribeBackupUploadSizeRequest::GetIncrementalMigrationId() const
{
    return m_incrementalMigrationId;
}

void DescribeBackupUploadSizeRequest::SetIncrementalMigrationId(const string& _incrementalMigrationId)
{
    m_incrementalMigrationId = _incrementalMigrationId;
    m_incrementalMigrationIdHasBeenSet = true;
}

bool DescribeBackupUploadSizeRequest::IncrementalMigrationIdHasBeenSet() const
{
    return m_incrementalMigrationIdHasBeenSet;
}


