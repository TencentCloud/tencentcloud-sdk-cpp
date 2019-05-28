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
using namespace rapidjson;
using namespace std;

RestoreInstanceRequest::RestoreInstanceRequest() :
    m_instanceIdHasBeenSet(false),
    m_backupIdHasBeenSet(false)
{
}

string RestoreInstanceRequest::ToJsonString() const
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
        d.AddMember(iKey, m_backupId, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
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


