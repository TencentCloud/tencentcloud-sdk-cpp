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

#include <tencentcloud/redis/v20180412/model/DescribeBackupUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Redis::V20180412::Model;
using namespace rapidjson;
using namespace std;

DescribeBackupUrlRequest::DescribeBackupUrlRequest() :
    m_instanceIdHasBeenSet(false),
    m_backupIdHasBeenSet(false)
{
}

string DescribeBackupUrlRequest::ToJsonString() const
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

    if (m_backupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BackupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_backupId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeBackupUrlRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeBackupUrlRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeBackupUrlRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeBackupUrlRequest::GetBackupId() const
{
    return m_backupId;
}

void DescribeBackupUrlRequest::SetBackupId(const string& _backupId)
{
    m_backupId = _backupId;
    m_backupIdHasBeenSet = true;
}

bool DescribeBackupUrlRequest::BackupIdHasBeenSet() const
{
    return m_backupIdHasBeenSet;
}


