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

#include <tencentcloud/mariadb/v20170312/model/UpgradeDedicatedDBInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace std;

UpgradeDedicatedDBInstanceRequest::UpgradeDedicatedDBInstanceRequest() :
    m_instanceIdHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_switchAutoRetryHasBeenSet(false),
    m_switchStartTimeHasBeenSet(false),
    m_switchEndTimeHasBeenSet(false)
{
}

string UpgradeDedicatedDBInstanceRequest::ToJsonString() const
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

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_memory, allocator);
    }

    if (m_storageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Storage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_storage, allocator);
    }

    if (m_switchAutoRetryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchAutoRetry";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_switchAutoRetry, allocator);
    }

    if (m_switchStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchStartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_switchStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_switchEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchEndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_switchEndTime.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpgradeDedicatedDBInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void UpgradeDedicatedDBInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool UpgradeDedicatedDBInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t UpgradeDedicatedDBInstanceRequest::GetMemory() const
{
    return m_memory;
}

void UpgradeDedicatedDBInstanceRequest::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool UpgradeDedicatedDBInstanceRequest::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t UpgradeDedicatedDBInstanceRequest::GetStorage() const
{
    return m_storage;
}

void UpgradeDedicatedDBInstanceRequest::SetStorage(const int64_t& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool UpgradeDedicatedDBInstanceRequest::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

int64_t UpgradeDedicatedDBInstanceRequest::GetSwitchAutoRetry() const
{
    return m_switchAutoRetry;
}

void UpgradeDedicatedDBInstanceRequest::SetSwitchAutoRetry(const int64_t& _switchAutoRetry)
{
    m_switchAutoRetry = _switchAutoRetry;
    m_switchAutoRetryHasBeenSet = true;
}

bool UpgradeDedicatedDBInstanceRequest::SwitchAutoRetryHasBeenSet() const
{
    return m_switchAutoRetryHasBeenSet;
}

string UpgradeDedicatedDBInstanceRequest::GetSwitchStartTime() const
{
    return m_switchStartTime;
}

void UpgradeDedicatedDBInstanceRequest::SetSwitchStartTime(const string& _switchStartTime)
{
    m_switchStartTime = _switchStartTime;
    m_switchStartTimeHasBeenSet = true;
}

bool UpgradeDedicatedDBInstanceRequest::SwitchStartTimeHasBeenSet() const
{
    return m_switchStartTimeHasBeenSet;
}

string UpgradeDedicatedDBInstanceRequest::GetSwitchEndTime() const
{
    return m_switchEndTime;
}

void UpgradeDedicatedDBInstanceRequest::SetSwitchEndTime(const string& _switchEndTime)
{
    m_switchEndTime = _switchEndTime;
    m_switchEndTimeHasBeenSet = true;
}

bool UpgradeDedicatedDBInstanceRequest::SwitchEndTimeHasBeenSet() const
{
    return m_switchEndTimeHasBeenSet;
}


