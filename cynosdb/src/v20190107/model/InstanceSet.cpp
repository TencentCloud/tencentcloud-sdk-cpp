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

#include <tencentcloud/cynosdb/v20190107/model/InstanceSet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

InstanceSet::InstanceSet() :
    m_dbModeHasBeenSet(false),
    m_instanceCpuHasBeenSet(false),
    m_instanceDeviceTypeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceMemoryHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_instanceRoleHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_instanceStatusDescHasBeenSet(false),
    m_instanceStorageHasBeenSet(false),
    m_instanceStorageTypeHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_maintainDurationHasBeenSet(false),
    m_maintainStartTimeHasBeenSet(false),
    m_maintainWeekDaysHasBeenSet(false),
    m_nodeListHasBeenSet(false),
    m_instanceTasksHasBeenSet(false)
{
}

CoreInternalOutcome InstanceSet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DbMode") && !value["DbMode"].IsNull())
    {
        if (!value["DbMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.DbMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbMode = string(value["DbMode"].GetString());
        m_dbModeHasBeenSet = true;
    }

    if (value.HasMember("InstanceCpu") && !value["InstanceCpu"].IsNull())
    {
        if (!value["InstanceCpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.InstanceCpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceCpu = value["InstanceCpu"].GetInt64();
        m_instanceCpuHasBeenSet = true;
    }

    if (value.HasMember("InstanceDeviceType") && !value["InstanceDeviceType"].IsNull())
    {
        if (!value["InstanceDeviceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.InstanceDeviceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceDeviceType = string(value["InstanceDeviceType"].GetString());
        m_instanceDeviceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceMemory") && !value["InstanceMemory"].IsNull())
    {
        if (!value["InstanceMemory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.InstanceMemory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceMemory = value["InstanceMemory"].GetInt64();
        m_instanceMemoryHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceRole") && !value["InstanceRole"].IsNull())
    {
        if (!value["InstanceRole"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.InstanceRole` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceRole = string(value["InstanceRole"].GetString());
        m_instanceRoleHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatus") && !value["InstanceStatus"].IsNull())
    {
        if (!value["InstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.InstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = string(value["InstanceStatus"].GetString());
        m_instanceStatusHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatusDesc") && !value["InstanceStatusDesc"].IsNull())
    {
        if (!value["InstanceStatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.InstanceStatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatusDesc = string(value["InstanceStatusDesc"].GetString());
        m_instanceStatusDescHasBeenSet = true;
    }

    if (value.HasMember("InstanceStorage") && !value["InstanceStorage"].IsNull())
    {
        if (!value["InstanceStorage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.InstanceStorage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStorage = value["InstanceStorage"].GetInt64();
        m_instanceStorageHasBeenSet = true;
    }

    if (value.HasMember("InstanceStorageType") && !value["InstanceStorageType"].IsNull())
    {
        if (!value["InstanceStorageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.InstanceStorageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStorageType = string(value["InstanceStorageType"].GetString());
        m_instanceStorageTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("MaintainDuration") && !value["MaintainDuration"].IsNull())
    {
        if (!value["MaintainDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.MaintainDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maintainDuration = value["MaintainDuration"].GetInt64();
        m_maintainDurationHasBeenSet = true;
    }

    if (value.HasMember("MaintainStartTime") && !value["MaintainStartTime"].IsNull())
    {
        if (!value["MaintainStartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.MaintainStartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maintainStartTime = value["MaintainStartTime"].GetInt64();
        m_maintainStartTimeHasBeenSet = true;
    }

    if (value.HasMember("MaintainWeekDays") && !value["MaintainWeekDays"].IsNull())
    {
        if (!value["MaintainWeekDays"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceSet.MaintainWeekDays` is not array type"));

        const rapidjson::Value &tmpValue = value["MaintainWeekDays"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_maintainWeekDays.push_back((*itr).GetString());
        }
        m_maintainWeekDaysHasBeenSet = true;
    }

    if (value.HasMember("NodeList") && !value["NodeList"].IsNull())
    {
        if (!value["NodeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceSet.NodeList` is not array type"));

        const rapidjson::Value &tmpValue = value["NodeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_nodeList.push_back((*itr).GetString());
        }
        m_nodeListHasBeenSet = true;
    }

    if (value.HasMember("InstanceTasks") && !value["InstanceTasks"].IsNull())
    {
        if (!value["InstanceTasks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceSet.InstanceTasks` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceTasks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ObjectTask item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceTasks.push_back(item);
        }
        m_instanceTasksHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceSet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dbModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbMode.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceCpu, allocator);
    }

    if (m_instanceDeviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceDeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceDeviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceMemory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceMemory, allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceRole";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceRole.c_str(), allocator).Move(), allocator);
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

    if (m_instanceStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceStorage, allocator);
    }

    if (m_instanceStorageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceStorageType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_maintainDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaintainDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maintainDuration, allocator);
    }

    if (m_maintainStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaintainStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maintainStartTime, allocator);
    }

    if (m_maintainWeekDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaintainWeekDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_maintainWeekDays.begin(); itr != m_maintainWeekDays.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_nodeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_nodeList.begin(); itr != m_nodeList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceTasksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceTasks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceTasks.begin(); itr != m_instanceTasks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string InstanceSet::GetDbMode() const
{
    return m_dbMode;
}

void InstanceSet::SetDbMode(const string& _dbMode)
{
    m_dbMode = _dbMode;
    m_dbModeHasBeenSet = true;
}

bool InstanceSet::DbModeHasBeenSet() const
{
    return m_dbModeHasBeenSet;
}

int64_t InstanceSet::GetInstanceCpu() const
{
    return m_instanceCpu;
}

void InstanceSet::SetInstanceCpu(const int64_t& _instanceCpu)
{
    m_instanceCpu = _instanceCpu;
    m_instanceCpuHasBeenSet = true;
}

bool InstanceSet::InstanceCpuHasBeenSet() const
{
    return m_instanceCpuHasBeenSet;
}

string InstanceSet::GetInstanceDeviceType() const
{
    return m_instanceDeviceType;
}

void InstanceSet::SetInstanceDeviceType(const string& _instanceDeviceType)
{
    m_instanceDeviceType = _instanceDeviceType;
    m_instanceDeviceTypeHasBeenSet = true;
}

bool InstanceSet::InstanceDeviceTypeHasBeenSet() const
{
    return m_instanceDeviceTypeHasBeenSet;
}

string InstanceSet::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceSet::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceSet::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t InstanceSet::GetInstanceMemory() const
{
    return m_instanceMemory;
}

void InstanceSet::SetInstanceMemory(const int64_t& _instanceMemory)
{
    m_instanceMemory = _instanceMemory;
    m_instanceMemoryHasBeenSet = true;
}

bool InstanceSet::InstanceMemoryHasBeenSet() const
{
    return m_instanceMemoryHasBeenSet;
}

string InstanceSet::GetInstanceName() const
{
    return m_instanceName;
}

void InstanceSet::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool InstanceSet::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string InstanceSet::GetInstanceRole() const
{
    return m_instanceRole;
}

void InstanceSet::SetInstanceRole(const string& _instanceRole)
{
    m_instanceRole = _instanceRole;
    m_instanceRoleHasBeenSet = true;
}

bool InstanceSet::InstanceRoleHasBeenSet() const
{
    return m_instanceRoleHasBeenSet;
}

string InstanceSet::GetInstanceStatus() const
{
    return m_instanceStatus;
}

void InstanceSet::SetInstanceStatus(const string& _instanceStatus)
{
    m_instanceStatus = _instanceStatus;
    m_instanceStatusHasBeenSet = true;
}

bool InstanceSet::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

string InstanceSet::GetInstanceStatusDesc() const
{
    return m_instanceStatusDesc;
}

void InstanceSet::SetInstanceStatusDesc(const string& _instanceStatusDesc)
{
    m_instanceStatusDesc = _instanceStatusDesc;
    m_instanceStatusDescHasBeenSet = true;
}

bool InstanceSet::InstanceStatusDescHasBeenSet() const
{
    return m_instanceStatusDescHasBeenSet;
}

int64_t InstanceSet::GetInstanceStorage() const
{
    return m_instanceStorage;
}

void InstanceSet::SetInstanceStorage(const int64_t& _instanceStorage)
{
    m_instanceStorage = _instanceStorage;
    m_instanceStorageHasBeenSet = true;
}

bool InstanceSet::InstanceStorageHasBeenSet() const
{
    return m_instanceStorageHasBeenSet;
}

string InstanceSet::GetInstanceStorageType() const
{
    return m_instanceStorageType;
}

void InstanceSet::SetInstanceStorageType(const string& _instanceStorageType)
{
    m_instanceStorageType = _instanceStorageType;
    m_instanceStorageTypeHasBeenSet = true;
}

bool InstanceSet::InstanceStorageTypeHasBeenSet() const
{
    return m_instanceStorageTypeHasBeenSet;
}

string InstanceSet::GetInstanceType() const
{
    return m_instanceType;
}

void InstanceSet::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool InstanceSet::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

int64_t InstanceSet::GetMaintainDuration() const
{
    return m_maintainDuration;
}

void InstanceSet::SetMaintainDuration(const int64_t& _maintainDuration)
{
    m_maintainDuration = _maintainDuration;
    m_maintainDurationHasBeenSet = true;
}

bool InstanceSet::MaintainDurationHasBeenSet() const
{
    return m_maintainDurationHasBeenSet;
}

int64_t InstanceSet::GetMaintainStartTime() const
{
    return m_maintainStartTime;
}

void InstanceSet::SetMaintainStartTime(const int64_t& _maintainStartTime)
{
    m_maintainStartTime = _maintainStartTime;
    m_maintainStartTimeHasBeenSet = true;
}

bool InstanceSet::MaintainStartTimeHasBeenSet() const
{
    return m_maintainStartTimeHasBeenSet;
}

vector<string> InstanceSet::GetMaintainWeekDays() const
{
    return m_maintainWeekDays;
}

void InstanceSet::SetMaintainWeekDays(const vector<string>& _maintainWeekDays)
{
    m_maintainWeekDays = _maintainWeekDays;
    m_maintainWeekDaysHasBeenSet = true;
}

bool InstanceSet::MaintainWeekDaysHasBeenSet() const
{
    return m_maintainWeekDaysHasBeenSet;
}

vector<string> InstanceSet::GetNodeList() const
{
    return m_nodeList;
}

void InstanceSet::SetNodeList(const vector<string>& _nodeList)
{
    m_nodeList = _nodeList;
    m_nodeListHasBeenSet = true;
}

bool InstanceSet::NodeListHasBeenSet() const
{
    return m_nodeListHasBeenSet;
}

vector<ObjectTask> InstanceSet::GetInstanceTasks() const
{
    return m_instanceTasks;
}

void InstanceSet::SetInstanceTasks(const vector<ObjectTask>& _instanceTasks)
{
    m_instanceTasks = _instanceTasks;
    m_instanceTasksHasBeenSet = true;
}

bool InstanceSet::InstanceTasksHasBeenSet() const
{
    return m_instanceTasksHasBeenSet;
}

