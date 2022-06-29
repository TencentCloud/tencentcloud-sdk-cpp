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

#include <tencentcloud/dbdc/v20201029/model/InstanceDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbdc::V20201029::Model;
using namespace std;

InstanceDetail::InstanceDetail() :
    m_statusHasBeenSet(false),
    m_readWriteTotalLeaveMemoryHasBeenSet(false),
    m_readWriteTotalLeaveDiskHasBeenSet(false),
    m_readWriteTotalMemoryHasBeenSet(false),
    m_readWriteTotalDiskHasBeenSet(false),
    m_readOnlyTotalLeaveMemoryHasBeenSet(false),
    m_readOnlyTotalLeaveDiskHasBeenSet(false),
    m_readOnlyTotalMemoryHasBeenSet(false),
    m_readOnlyTotalDiskHasBeenSet(false),
    m_instanceDeviceInfosHasBeenSet(false)
{
}

CoreInternalOutcome InstanceDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ReadWriteTotalLeaveMemory") && !value["ReadWriteTotalLeaveMemory"].IsNull())
    {
        if (!value["ReadWriteTotalLeaveMemory"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.ReadWriteTotalLeaveMemory` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_readWriteTotalLeaveMemory = value["ReadWriteTotalLeaveMemory"].GetDouble();
        m_readWriteTotalLeaveMemoryHasBeenSet = true;
    }

    if (value.HasMember("ReadWriteTotalLeaveDisk") && !value["ReadWriteTotalLeaveDisk"].IsNull())
    {
        if (!value["ReadWriteTotalLeaveDisk"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.ReadWriteTotalLeaveDisk` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_readWriteTotalLeaveDisk = value["ReadWriteTotalLeaveDisk"].GetDouble();
        m_readWriteTotalLeaveDiskHasBeenSet = true;
    }

    if (value.HasMember("ReadWriteTotalMemory") && !value["ReadWriteTotalMemory"].IsNull())
    {
        if (!value["ReadWriteTotalMemory"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.ReadWriteTotalMemory` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_readWriteTotalMemory = value["ReadWriteTotalMemory"].GetDouble();
        m_readWriteTotalMemoryHasBeenSet = true;
    }

    if (value.HasMember("ReadWriteTotalDisk") && !value["ReadWriteTotalDisk"].IsNull())
    {
        if (!value["ReadWriteTotalDisk"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.ReadWriteTotalDisk` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_readWriteTotalDisk = value["ReadWriteTotalDisk"].GetDouble();
        m_readWriteTotalDiskHasBeenSet = true;
    }

    if (value.HasMember("ReadOnlyTotalLeaveMemory") && !value["ReadOnlyTotalLeaveMemory"].IsNull())
    {
        if (!value["ReadOnlyTotalLeaveMemory"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.ReadOnlyTotalLeaveMemory` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_readOnlyTotalLeaveMemory = value["ReadOnlyTotalLeaveMemory"].GetDouble();
        m_readOnlyTotalLeaveMemoryHasBeenSet = true;
    }

    if (value.HasMember("ReadOnlyTotalLeaveDisk") && !value["ReadOnlyTotalLeaveDisk"].IsNull())
    {
        if (!value["ReadOnlyTotalLeaveDisk"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.ReadOnlyTotalLeaveDisk` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_readOnlyTotalLeaveDisk = value["ReadOnlyTotalLeaveDisk"].GetDouble();
        m_readOnlyTotalLeaveDiskHasBeenSet = true;
    }

    if (value.HasMember("ReadOnlyTotalMemory") && !value["ReadOnlyTotalMemory"].IsNull())
    {
        if (!value["ReadOnlyTotalMemory"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.ReadOnlyTotalMemory` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_readOnlyTotalMemory = value["ReadOnlyTotalMemory"].GetDouble();
        m_readOnlyTotalMemoryHasBeenSet = true;
    }

    if (value.HasMember("ReadOnlyTotalDisk") && !value["ReadOnlyTotalDisk"].IsNull())
    {
        if (!value["ReadOnlyTotalDisk"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.ReadOnlyTotalDisk` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_readOnlyTotalDisk = value["ReadOnlyTotalDisk"].GetDouble();
        m_readOnlyTotalDiskHasBeenSet = true;
    }

    if (value.HasMember("InstanceDeviceInfos") && !value["InstanceDeviceInfos"].IsNull())
    {
        if (!value["InstanceDeviceInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.InstanceDeviceInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceDeviceInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceDeviceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceDeviceInfos.push_back(item);
        }
        m_instanceDeviceInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_readWriteTotalLeaveMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadWriteTotalLeaveMemory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readWriteTotalLeaveMemory, allocator);
    }

    if (m_readWriteTotalLeaveDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadWriteTotalLeaveDisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readWriteTotalLeaveDisk, allocator);
    }

    if (m_readWriteTotalMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadWriteTotalMemory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readWriteTotalMemory, allocator);
    }

    if (m_readWriteTotalDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadWriteTotalDisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readWriteTotalDisk, allocator);
    }

    if (m_readOnlyTotalLeaveMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnlyTotalLeaveMemory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readOnlyTotalLeaveMemory, allocator);
    }

    if (m_readOnlyTotalLeaveDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnlyTotalLeaveDisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readOnlyTotalLeaveDisk, allocator);
    }

    if (m_readOnlyTotalMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnlyTotalMemory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readOnlyTotalMemory, allocator);
    }

    if (m_readOnlyTotalDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnlyTotalDisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readOnlyTotalDisk, allocator);
    }

    if (m_instanceDeviceInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceDeviceInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceDeviceInfos.begin(); itr != m_instanceDeviceInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t InstanceDetail::GetStatus() const
{
    return m_status;
}

void InstanceDetail::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool InstanceDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

double InstanceDetail::GetReadWriteTotalLeaveMemory() const
{
    return m_readWriteTotalLeaveMemory;
}

void InstanceDetail::SetReadWriteTotalLeaveMemory(const double& _readWriteTotalLeaveMemory)
{
    m_readWriteTotalLeaveMemory = _readWriteTotalLeaveMemory;
    m_readWriteTotalLeaveMemoryHasBeenSet = true;
}

bool InstanceDetail::ReadWriteTotalLeaveMemoryHasBeenSet() const
{
    return m_readWriteTotalLeaveMemoryHasBeenSet;
}

double InstanceDetail::GetReadWriteTotalLeaveDisk() const
{
    return m_readWriteTotalLeaveDisk;
}

void InstanceDetail::SetReadWriteTotalLeaveDisk(const double& _readWriteTotalLeaveDisk)
{
    m_readWriteTotalLeaveDisk = _readWriteTotalLeaveDisk;
    m_readWriteTotalLeaveDiskHasBeenSet = true;
}

bool InstanceDetail::ReadWriteTotalLeaveDiskHasBeenSet() const
{
    return m_readWriteTotalLeaveDiskHasBeenSet;
}

double InstanceDetail::GetReadWriteTotalMemory() const
{
    return m_readWriteTotalMemory;
}

void InstanceDetail::SetReadWriteTotalMemory(const double& _readWriteTotalMemory)
{
    m_readWriteTotalMemory = _readWriteTotalMemory;
    m_readWriteTotalMemoryHasBeenSet = true;
}

bool InstanceDetail::ReadWriteTotalMemoryHasBeenSet() const
{
    return m_readWriteTotalMemoryHasBeenSet;
}

double InstanceDetail::GetReadWriteTotalDisk() const
{
    return m_readWriteTotalDisk;
}

void InstanceDetail::SetReadWriteTotalDisk(const double& _readWriteTotalDisk)
{
    m_readWriteTotalDisk = _readWriteTotalDisk;
    m_readWriteTotalDiskHasBeenSet = true;
}

bool InstanceDetail::ReadWriteTotalDiskHasBeenSet() const
{
    return m_readWriteTotalDiskHasBeenSet;
}

double InstanceDetail::GetReadOnlyTotalLeaveMemory() const
{
    return m_readOnlyTotalLeaveMemory;
}

void InstanceDetail::SetReadOnlyTotalLeaveMemory(const double& _readOnlyTotalLeaveMemory)
{
    m_readOnlyTotalLeaveMemory = _readOnlyTotalLeaveMemory;
    m_readOnlyTotalLeaveMemoryHasBeenSet = true;
}

bool InstanceDetail::ReadOnlyTotalLeaveMemoryHasBeenSet() const
{
    return m_readOnlyTotalLeaveMemoryHasBeenSet;
}

double InstanceDetail::GetReadOnlyTotalLeaveDisk() const
{
    return m_readOnlyTotalLeaveDisk;
}

void InstanceDetail::SetReadOnlyTotalLeaveDisk(const double& _readOnlyTotalLeaveDisk)
{
    m_readOnlyTotalLeaveDisk = _readOnlyTotalLeaveDisk;
    m_readOnlyTotalLeaveDiskHasBeenSet = true;
}

bool InstanceDetail::ReadOnlyTotalLeaveDiskHasBeenSet() const
{
    return m_readOnlyTotalLeaveDiskHasBeenSet;
}

double InstanceDetail::GetReadOnlyTotalMemory() const
{
    return m_readOnlyTotalMemory;
}

void InstanceDetail::SetReadOnlyTotalMemory(const double& _readOnlyTotalMemory)
{
    m_readOnlyTotalMemory = _readOnlyTotalMemory;
    m_readOnlyTotalMemoryHasBeenSet = true;
}

bool InstanceDetail::ReadOnlyTotalMemoryHasBeenSet() const
{
    return m_readOnlyTotalMemoryHasBeenSet;
}

double InstanceDetail::GetReadOnlyTotalDisk() const
{
    return m_readOnlyTotalDisk;
}

void InstanceDetail::SetReadOnlyTotalDisk(const double& _readOnlyTotalDisk)
{
    m_readOnlyTotalDisk = _readOnlyTotalDisk;
    m_readOnlyTotalDiskHasBeenSet = true;
}

bool InstanceDetail::ReadOnlyTotalDiskHasBeenSet() const
{
    return m_readOnlyTotalDiskHasBeenSet;
}

vector<InstanceDeviceInfo> InstanceDetail::GetInstanceDeviceInfos() const
{
    return m_instanceDeviceInfos;
}

void InstanceDetail::SetInstanceDeviceInfos(const vector<InstanceDeviceInfo>& _instanceDeviceInfos)
{
    m_instanceDeviceInfos = _instanceDeviceInfos;
    m_instanceDeviceInfosHasBeenSet = true;
}

bool InstanceDetail::InstanceDeviceInfosHasBeenSet() const
{
    return m_instanceDeviceInfosHasBeenSet;
}

