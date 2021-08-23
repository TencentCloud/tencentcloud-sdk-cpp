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

#include <tencentcloud/bm/v20180423/model/DeviceClassPartitionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bm::V20180423::Model;
using namespace std;

DeviceClassPartitionInfo::DeviceClassPartitionInfo() :
    m_raidIdHasBeenSet(false),
    m_raidHasBeenSet(false),
    m_raidDisplayHasBeenSet(false),
    m_systemDiskSizeHasBeenSet(false),
    m_sysRootSpaceHasBeenSet(false),
    m_sysSwaporuefiSpaceHasBeenSet(false),
    m_sysUsrlocalSpaceHasBeenSet(false),
    m_sysDataSpaceHasBeenSet(false),
    m_sysIsUefiTypeHasBeenSet(false),
    m_dataDiskSizeHasBeenSet(false),
    m_deviceDiskSizeInfoSetHasBeenSet(false)
{
}

CoreInternalOutcome DeviceClassPartitionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RaidId") && !value["RaidId"].IsNull())
    {
        if (!value["RaidId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceClassPartitionInfo.RaidId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_raidId = value["RaidId"].GetUint64();
        m_raidIdHasBeenSet = true;
    }

    if (value.HasMember("Raid") && !value["Raid"].IsNull())
    {
        if (!value["Raid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceClassPartitionInfo.Raid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_raid = string(value["Raid"].GetString());
        m_raidHasBeenSet = true;
    }

    if (value.HasMember("RaidDisplay") && !value["RaidDisplay"].IsNull())
    {
        if (!value["RaidDisplay"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceClassPartitionInfo.RaidDisplay` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_raidDisplay = string(value["RaidDisplay"].GetString());
        m_raidDisplayHasBeenSet = true;
    }

    if (value.HasMember("SystemDiskSize") && !value["SystemDiskSize"].IsNull())
    {
        if (!value["SystemDiskSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceClassPartitionInfo.SystemDiskSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_systemDiskSize = value["SystemDiskSize"].GetUint64();
        m_systemDiskSizeHasBeenSet = true;
    }

    if (value.HasMember("SysRootSpace") && !value["SysRootSpace"].IsNull())
    {
        if (!value["SysRootSpace"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceClassPartitionInfo.SysRootSpace` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sysRootSpace = value["SysRootSpace"].GetUint64();
        m_sysRootSpaceHasBeenSet = true;
    }

    if (value.HasMember("SysSwaporuefiSpace") && !value["SysSwaporuefiSpace"].IsNull())
    {
        if (!value["SysSwaporuefiSpace"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceClassPartitionInfo.SysSwaporuefiSpace` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sysSwaporuefiSpace = value["SysSwaporuefiSpace"].GetUint64();
        m_sysSwaporuefiSpaceHasBeenSet = true;
    }

    if (value.HasMember("SysUsrlocalSpace") && !value["SysUsrlocalSpace"].IsNull())
    {
        if (!value["SysUsrlocalSpace"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceClassPartitionInfo.SysUsrlocalSpace` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sysUsrlocalSpace = value["SysUsrlocalSpace"].GetUint64();
        m_sysUsrlocalSpaceHasBeenSet = true;
    }

    if (value.HasMember("SysDataSpace") && !value["SysDataSpace"].IsNull())
    {
        if (!value["SysDataSpace"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceClassPartitionInfo.SysDataSpace` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sysDataSpace = value["SysDataSpace"].GetUint64();
        m_sysDataSpaceHasBeenSet = true;
    }

    if (value.HasMember("SysIsUefiType") && !value["SysIsUefiType"].IsNull())
    {
        if (!value["SysIsUefiType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceClassPartitionInfo.SysIsUefiType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sysIsUefiType = value["SysIsUefiType"].GetUint64();
        m_sysIsUefiTypeHasBeenSet = true;
    }

    if (value.HasMember("DataDiskSize") && !value["DataDiskSize"].IsNull())
    {
        if (!value["DataDiskSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceClassPartitionInfo.DataDiskSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dataDiskSize = value["DataDiskSize"].GetUint64();
        m_dataDiskSizeHasBeenSet = true;
    }

    if (value.HasMember("DeviceDiskSizeInfoSet") && !value["DeviceDiskSizeInfoSet"].IsNull())
    {
        if (!value["DeviceDiskSizeInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeviceClassPartitionInfo.DeviceDiskSizeInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = value["DeviceDiskSizeInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeviceDiskSizeInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_deviceDiskSizeInfoSet.push_back(item);
        }
        m_deviceDiskSizeInfoSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceClassPartitionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_raidIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RaidId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_raidId, allocator);
    }

    if (m_raidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Raid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_raid.c_str(), allocator).Move(), allocator);
    }

    if (m_raidDisplayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RaidDisplay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_raidDisplay.c_str(), allocator).Move(), allocator);
    }

    if (m_systemDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemDiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_systemDiskSize, allocator);
    }

    if (m_sysRootSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SysRootSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sysRootSpace, allocator);
    }

    if (m_sysSwaporuefiSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SysSwaporuefiSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sysSwaporuefiSpace, allocator);
    }

    if (m_sysUsrlocalSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SysUsrlocalSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sysUsrlocalSpace, allocator);
    }

    if (m_sysDataSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SysDataSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sysDataSpace, allocator);
    }

    if (m_sysIsUefiTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SysIsUefiType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sysIsUefiType, allocator);
    }

    if (m_dataDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataDiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataDiskSize, allocator);
    }

    if (m_deviceDiskSizeInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceDiskSizeInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_deviceDiskSizeInfoSet.begin(); itr != m_deviceDiskSizeInfoSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t DeviceClassPartitionInfo::GetRaidId() const
{
    return m_raidId;
}

void DeviceClassPartitionInfo::SetRaidId(const uint64_t& _raidId)
{
    m_raidId = _raidId;
    m_raidIdHasBeenSet = true;
}

bool DeviceClassPartitionInfo::RaidIdHasBeenSet() const
{
    return m_raidIdHasBeenSet;
}

string DeviceClassPartitionInfo::GetRaid() const
{
    return m_raid;
}

void DeviceClassPartitionInfo::SetRaid(const string& _raid)
{
    m_raid = _raid;
    m_raidHasBeenSet = true;
}

bool DeviceClassPartitionInfo::RaidHasBeenSet() const
{
    return m_raidHasBeenSet;
}

string DeviceClassPartitionInfo::GetRaidDisplay() const
{
    return m_raidDisplay;
}

void DeviceClassPartitionInfo::SetRaidDisplay(const string& _raidDisplay)
{
    m_raidDisplay = _raidDisplay;
    m_raidDisplayHasBeenSet = true;
}

bool DeviceClassPartitionInfo::RaidDisplayHasBeenSet() const
{
    return m_raidDisplayHasBeenSet;
}

uint64_t DeviceClassPartitionInfo::GetSystemDiskSize() const
{
    return m_systemDiskSize;
}

void DeviceClassPartitionInfo::SetSystemDiskSize(const uint64_t& _systemDiskSize)
{
    m_systemDiskSize = _systemDiskSize;
    m_systemDiskSizeHasBeenSet = true;
}

bool DeviceClassPartitionInfo::SystemDiskSizeHasBeenSet() const
{
    return m_systemDiskSizeHasBeenSet;
}

uint64_t DeviceClassPartitionInfo::GetSysRootSpace() const
{
    return m_sysRootSpace;
}

void DeviceClassPartitionInfo::SetSysRootSpace(const uint64_t& _sysRootSpace)
{
    m_sysRootSpace = _sysRootSpace;
    m_sysRootSpaceHasBeenSet = true;
}

bool DeviceClassPartitionInfo::SysRootSpaceHasBeenSet() const
{
    return m_sysRootSpaceHasBeenSet;
}

uint64_t DeviceClassPartitionInfo::GetSysSwaporuefiSpace() const
{
    return m_sysSwaporuefiSpace;
}

void DeviceClassPartitionInfo::SetSysSwaporuefiSpace(const uint64_t& _sysSwaporuefiSpace)
{
    m_sysSwaporuefiSpace = _sysSwaporuefiSpace;
    m_sysSwaporuefiSpaceHasBeenSet = true;
}

bool DeviceClassPartitionInfo::SysSwaporuefiSpaceHasBeenSet() const
{
    return m_sysSwaporuefiSpaceHasBeenSet;
}

uint64_t DeviceClassPartitionInfo::GetSysUsrlocalSpace() const
{
    return m_sysUsrlocalSpace;
}

void DeviceClassPartitionInfo::SetSysUsrlocalSpace(const uint64_t& _sysUsrlocalSpace)
{
    m_sysUsrlocalSpace = _sysUsrlocalSpace;
    m_sysUsrlocalSpaceHasBeenSet = true;
}

bool DeviceClassPartitionInfo::SysUsrlocalSpaceHasBeenSet() const
{
    return m_sysUsrlocalSpaceHasBeenSet;
}

uint64_t DeviceClassPartitionInfo::GetSysDataSpace() const
{
    return m_sysDataSpace;
}

void DeviceClassPartitionInfo::SetSysDataSpace(const uint64_t& _sysDataSpace)
{
    m_sysDataSpace = _sysDataSpace;
    m_sysDataSpaceHasBeenSet = true;
}

bool DeviceClassPartitionInfo::SysDataSpaceHasBeenSet() const
{
    return m_sysDataSpaceHasBeenSet;
}

uint64_t DeviceClassPartitionInfo::GetSysIsUefiType() const
{
    return m_sysIsUefiType;
}

void DeviceClassPartitionInfo::SetSysIsUefiType(const uint64_t& _sysIsUefiType)
{
    m_sysIsUefiType = _sysIsUefiType;
    m_sysIsUefiTypeHasBeenSet = true;
}

bool DeviceClassPartitionInfo::SysIsUefiTypeHasBeenSet() const
{
    return m_sysIsUefiTypeHasBeenSet;
}

uint64_t DeviceClassPartitionInfo::GetDataDiskSize() const
{
    return m_dataDiskSize;
}

void DeviceClassPartitionInfo::SetDataDiskSize(const uint64_t& _dataDiskSize)
{
    m_dataDiskSize = _dataDiskSize;
    m_dataDiskSizeHasBeenSet = true;
}

bool DeviceClassPartitionInfo::DataDiskSizeHasBeenSet() const
{
    return m_dataDiskSizeHasBeenSet;
}

vector<DeviceDiskSizeInfo> DeviceClassPartitionInfo::GetDeviceDiskSizeInfoSet() const
{
    return m_deviceDiskSizeInfoSet;
}

void DeviceClassPartitionInfo::SetDeviceDiskSizeInfoSet(const vector<DeviceDiskSizeInfo>& _deviceDiskSizeInfoSet)
{
    m_deviceDiskSizeInfoSet = _deviceDiskSizeInfoSet;
    m_deviceDiskSizeInfoSetHasBeenSet = true;
}

bool DeviceClassPartitionInfo::DeviceDiskSizeInfoSetHasBeenSet() const
{
    return m_deviceDiskSizeInfoSetHasBeenSet;
}

