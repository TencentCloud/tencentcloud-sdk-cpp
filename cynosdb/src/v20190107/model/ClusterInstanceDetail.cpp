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

#include <tencentcloud/cynosdb/v20190107/model/ClusterInstanceDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ClusterInstanceDetail::ClusterInstanceDetail() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_instanceStatusDescHasBeenSet(false),
    m_instanceCpuHasBeenSet(false),
    m_instanceMemoryHasBeenSet(false),
    m_instanceStorageHasBeenSet(false),
    m_instanceRoleHasBeenSet(false)
{
}

CoreInternalOutcome ClusterInstanceDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatus") && !value["InstanceStatus"].IsNull())
    {
        if (!value["InstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.InstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = string(value["InstanceStatus"].GetString());
        m_instanceStatusHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatusDesc") && !value["InstanceStatusDesc"].IsNull())
    {
        if (!value["InstanceStatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.InstanceStatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatusDesc = string(value["InstanceStatusDesc"].GetString());
        m_instanceStatusDescHasBeenSet = true;
    }

    if (value.HasMember("InstanceCpu") && !value["InstanceCpu"].IsNull())
    {
        if (!value["InstanceCpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.InstanceCpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceCpu = value["InstanceCpu"].GetInt64();
        m_instanceCpuHasBeenSet = true;
    }

    if (value.HasMember("InstanceMemory") && !value["InstanceMemory"].IsNull())
    {
        if (!value["InstanceMemory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.InstanceMemory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceMemory = value["InstanceMemory"].GetInt64();
        m_instanceMemoryHasBeenSet = true;
    }

    if (value.HasMember("InstanceStorage") && !value["InstanceStorage"].IsNull())
    {
        if (!value["InstanceStorage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.InstanceStorage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStorage = value["InstanceStorage"].GetInt64();
        m_instanceStorageHasBeenSet = true;
    }

    if (value.HasMember("InstanceRole") && !value["InstanceRole"].IsNull())
    {
        if (!value["InstanceRole"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.InstanceRole` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceRole = string(value["InstanceRole"].GetString());
        m_instanceRoleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterInstanceDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStatusDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceStatusDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceCpu, allocator);
    }

    if (m_instanceMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceMemory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceMemory, allocator);
    }

    if (m_instanceStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceStorage, allocator);
    }

    if (m_instanceRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceRole";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceRole.c_str(), allocator).Move(), allocator);
    }

}


string ClusterInstanceDetail::GetInstanceId() const
{
    return m_instanceId;
}

void ClusterInstanceDetail::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ClusterInstanceDetail::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ClusterInstanceDetail::GetInstanceName() const
{
    return m_instanceName;
}

void ClusterInstanceDetail::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool ClusterInstanceDetail::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string ClusterInstanceDetail::GetInstanceType() const
{
    return m_instanceType;
}

void ClusterInstanceDetail::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool ClusterInstanceDetail::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string ClusterInstanceDetail::GetInstanceStatus() const
{
    return m_instanceStatus;
}

void ClusterInstanceDetail::SetInstanceStatus(const string& _instanceStatus)
{
    m_instanceStatus = _instanceStatus;
    m_instanceStatusHasBeenSet = true;
}

bool ClusterInstanceDetail::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

string ClusterInstanceDetail::GetInstanceStatusDesc() const
{
    return m_instanceStatusDesc;
}

void ClusterInstanceDetail::SetInstanceStatusDesc(const string& _instanceStatusDesc)
{
    m_instanceStatusDesc = _instanceStatusDesc;
    m_instanceStatusDescHasBeenSet = true;
}

bool ClusterInstanceDetail::InstanceStatusDescHasBeenSet() const
{
    return m_instanceStatusDescHasBeenSet;
}

int64_t ClusterInstanceDetail::GetInstanceCpu() const
{
    return m_instanceCpu;
}

void ClusterInstanceDetail::SetInstanceCpu(const int64_t& _instanceCpu)
{
    m_instanceCpu = _instanceCpu;
    m_instanceCpuHasBeenSet = true;
}

bool ClusterInstanceDetail::InstanceCpuHasBeenSet() const
{
    return m_instanceCpuHasBeenSet;
}

int64_t ClusterInstanceDetail::GetInstanceMemory() const
{
    return m_instanceMemory;
}

void ClusterInstanceDetail::SetInstanceMemory(const int64_t& _instanceMemory)
{
    m_instanceMemory = _instanceMemory;
    m_instanceMemoryHasBeenSet = true;
}

bool ClusterInstanceDetail::InstanceMemoryHasBeenSet() const
{
    return m_instanceMemoryHasBeenSet;
}

int64_t ClusterInstanceDetail::GetInstanceStorage() const
{
    return m_instanceStorage;
}

void ClusterInstanceDetail::SetInstanceStorage(const int64_t& _instanceStorage)
{
    m_instanceStorage = _instanceStorage;
    m_instanceStorageHasBeenSet = true;
}

bool ClusterInstanceDetail::InstanceStorageHasBeenSet() const
{
    return m_instanceStorageHasBeenSet;
}

string ClusterInstanceDetail::GetInstanceRole() const
{
    return m_instanceRole;
}

void ClusterInstanceDetail::SetInstanceRole(const string& _instanceRole)
{
    m_instanceRole = _instanceRole;
    m_instanceRoleHasBeenSet = true;
}

bool ClusterInstanceDetail::InstanceRoleHasBeenSet() const
{
    return m_instanceRoleHasBeenSet;
}

