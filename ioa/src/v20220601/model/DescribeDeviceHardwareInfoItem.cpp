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

#include <tencentcloud/ioa/v20220601/model/DescribeDeviceHardwareInfoItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DescribeDeviceHardwareInfoItem::DescribeDeviceHardwareInfoItem() :
    m_idHasBeenSet(false),
    m_midHasBeenSet(false),
    m_osTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_groupNamePathHasBeenSet(false),
    m_accountNameHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_macAddrHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_hardDiskSizeHasBeenSet(false),
    m_monitorHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDeviceHardwareInfoItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceHardwareInfoItem.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Mid") && !value["Mid"].IsNull())
    {
        if (!value["Mid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceHardwareInfoItem.Mid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mid = string(value["Mid"].GetString());
        m_midHasBeenSet = true;
    }

    if (value.HasMember("OsType") && !value["OsType"].IsNull())
    {
        if (!value["OsType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceHardwareInfoItem.OsType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_osType = value["OsType"].GetInt64();
        m_osTypeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceHardwareInfoItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceHardwareInfoItem.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceHardwareInfoItem.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceHardwareInfoItem.GroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = value["GroupId"].GetInt64();
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceHardwareInfoItem.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("GroupNamePath") && !value["GroupNamePath"].IsNull())
    {
        if (!value["GroupNamePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceHardwareInfoItem.GroupNamePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupNamePath = string(value["GroupNamePath"].GetString());
        m_groupNamePathHasBeenSet = true;
    }

    if (value.HasMember("AccountName") && !value["AccountName"].IsNull())
    {
        if (!value["AccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceHardwareInfoItem.AccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountName = string(value["AccountName"].GetString());
        m_accountNameHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceHardwareInfoItem.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("MacAddr") && !value["MacAddr"].IsNull())
    {
        if (!value["MacAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceHardwareInfoItem.MacAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_macAddr = string(value["MacAddr"].GetString());
        m_macAddrHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceHardwareInfoItem.Cpu` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = string(value["Cpu"].GetString());
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceHardwareInfoItem.Memory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memory = string(value["Memory"].GetString());
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("HardDiskSize") && !value["HardDiskSize"].IsNull())
    {
        if (!value["HardDiskSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceHardwareInfoItem.HardDiskSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hardDiskSize = string(value["HardDiskSize"].GetString());
        m_hardDiskSizeHasBeenSet = true;
    }

    if (value.HasMember("Monitor") && !value["Monitor"].IsNull())
    {
        if (!value["Monitor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceHardwareInfoItem.Monitor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_monitor = string(value["Monitor"].GetString());
        m_monitorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeDeviceHardwareInfoItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_midHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mid.c_str(), allocator).Move(), allocator);
    }

    if (m_osTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_osType, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupId, allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNamePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupNamePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupNamePath.c_str(), allocator).Move(), allocator);
    }

    if (m_accountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountName.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_macAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MacAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_macAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cpu.c_str(), allocator).Move(), allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memory.c_str(), allocator).Move(), allocator);
    }

    if (m_hardDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HardDiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hardDiskSize.c_str(), allocator).Move(), allocator);
    }

    if (m_monitorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Monitor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_monitor.c_str(), allocator).Move(), allocator);
    }

}


int64_t DescribeDeviceHardwareInfoItem::GetId() const
{
    return m_id;
}

void DescribeDeviceHardwareInfoItem::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DescribeDeviceHardwareInfoItem::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DescribeDeviceHardwareInfoItem::GetMid() const
{
    return m_mid;
}

void DescribeDeviceHardwareInfoItem::SetMid(const string& _mid)
{
    m_mid = _mid;
    m_midHasBeenSet = true;
}

bool DescribeDeviceHardwareInfoItem::MidHasBeenSet() const
{
    return m_midHasBeenSet;
}

int64_t DescribeDeviceHardwareInfoItem::GetOsType() const
{
    return m_osType;
}

void DescribeDeviceHardwareInfoItem::SetOsType(const int64_t& _osType)
{
    m_osType = _osType;
    m_osTypeHasBeenSet = true;
}

bool DescribeDeviceHardwareInfoItem::OsTypeHasBeenSet() const
{
    return m_osTypeHasBeenSet;
}

string DescribeDeviceHardwareInfoItem::GetName() const
{
    return m_name;
}

void DescribeDeviceHardwareInfoItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeDeviceHardwareInfoItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeDeviceHardwareInfoItem::GetUserName() const
{
    return m_userName;
}

void DescribeDeviceHardwareInfoItem::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool DescribeDeviceHardwareInfoItem::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

int64_t DescribeDeviceHardwareInfoItem::GetStatus() const
{
    return m_status;
}

void DescribeDeviceHardwareInfoItem::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeDeviceHardwareInfoItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DescribeDeviceHardwareInfoItem::GetGroupId() const
{
    return m_groupId;
}

void DescribeDeviceHardwareInfoItem::SetGroupId(const int64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool DescribeDeviceHardwareInfoItem::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string DescribeDeviceHardwareInfoItem::GetGroupName() const
{
    return m_groupName;
}

void DescribeDeviceHardwareInfoItem::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool DescribeDeviceHardwareInfoItem::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string DescribeDeviceHardwareInfoItem::GetGroupNamePath() const
{
    return m_groupNamePath;
}

void DescribeDeviceHardwareInfoItem::SetGroupNamePath(const string& _groupNamePath)
{
    m_groupNamePath = _groupNamePath;
    m_groupNamePathHasBeenSet = true;
}

bool DescribeDeviceHardwareInfoItem::GroupNamePathHasBeenSet() const
{
    return m_groupNamePathHasBeenSet;
}

string DescribeDeviceHardwareInfoItem::GetAccountName() const
{
    return m_accountName;
}

void DescribeDeviceHardwareInfoItem::SetAccountName(const string& _accountName)
{
    m_accountName = _accountName;
    m_accountNameHasBeenSet = true;
}

bool DescribeDeviceHardwareInfoItem::AccountNameHasBeenSet() const
{
    return m_accountNameHasBeenSet;
}

string DescribeDeviceHardwareInfoItem::GetIp() const
{
    return m_ip;
}

void DescribeDeviceHardwareInfoItem::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool DescribeDeviceHardwareInfoItem::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string DescribeDeviceHardwareInfoItem::GetMacAddr() const
{
    return m_macAddr;
}

void DescribeDeviceHardwareInfoItem::SetMacAddr(const string& _macAddr)
{
    m_macAddr = _macAddr;
    m_macAddrHasBeenSet = true;
}

bool DescribeDeviceHardwareInfoItem::MacAddrHasBeenSet() const
{
    return m_macAddrHasBeenSet;
}

string DescribeDeviceHardwareInfoItem::GetCpu() const
{
    return m_cpu;
}

void DescribeDeviceHardwareInfoItem::SetCpu(const string& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool DescribeDeviceHardwareInfoItem::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

string DescribeDeviceHardwareInfoItem::GetMemory() const
{
    return m_memory;
}

void DescribeDeviceHardwareInfoItem::SetMemory(const string& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool DescribeDeviceHardwareInfoItem::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

string DescribeDeviceHardwareInfoItem::GetHardDiskSize() const
{
    return m_hardDiskSize;
}

void DescribeDeviceHardwareInfoItem::SetHardDiskSize(const string& _hardDiskSize)
{
    m_hardDiskSize = _hardDiskSize;
    m_hardDiskSizeHasBeenSet = true;
}

bool DescribeDeviceHardwareInfoItem::HardDiskSizeHasBeenSet() const
{
    return m_hardDiskSizeHasBeenSet;
}

string DescribeDeviceHardwareInfoItem::GetMonitor() const
{
    return m_monitor;
}

void DescribeDeviceHardwareInfoItem::SetMonitor(const string& _monitor)
{
    m_monitor = _monitor;
    m_monitorHasBeenSet = true;
}

bool DescribeDeviceHardwareInfoItem::MonitorHasBeenSet() const
{
    return m_monitorHasBeenSet;
}

