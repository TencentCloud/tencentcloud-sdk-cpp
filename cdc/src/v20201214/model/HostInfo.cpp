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

#include <tencentcloud/cdc/v20201214/model/HostInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdc::V20201214::Model;
using namespace std;

HostInfo::HostInfo() :
    m_hostIpHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_hostStatusHasBeenSet(false),
    m_hostTypeHasBeenSet(false),
    m_cpuAvailableHasBeenSet(false),
    m_cpuTotalHasBeenSet(false),
    m_memAvailableHasBeenSet(false),
    m_memTotalHasBeenSet(false),
    m_runTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_hostIdHasBeenSet(false)
{
}

CoreInternalOutcome HostInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HostIp") && !value["HostIp"].IsNull())
    {
        if (!value["HostIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostInfo.HostIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIp = string(value["HostIp"].GetString());
        m_hostIpHasBeenSet = true;
    }

    if (value.HasMember("ServiceType") && !value["ServiceType"].IsNull())
    {
        if (!value["ServiceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostInfo.ServiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceType = string(value["ServiceType"].GetString());
        m_serviceTypeHasBeenSet = true;
    }

    if (value.HasMember("HostStatus") && !value["HostStatus"].IsNull())
    {
        if (!value["HostStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostInfo.HostStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostStatus = string(value["HostStatus"].GetString());
        m_hostStatusHasBeenSet = true;
    }

    if (value.HasMember("HostType") && !value["HostType"].IsNull())
    {
        if (!value["HostType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostInfo.HostType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostType = string(value["HostType"].GetString());
        m_hostTypeHasBeenSet = true;
    }

    if (value.HasMember("CpuAvailable") && !value["CpuAvailable"].IsNull())
    {
        if (!value["CpuAvailable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostInfo.CpuAvailable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuAvailable = value["CpuAvailable"].GetUint64();
        m_cpuAvailableHasBeenSet = true;
    }

    if (value.HasMember("CpuTotal") && !value["CpuTotal"].IsNull())
    {
        if (!value["CpuTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostInfo.CpuTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuTotal = value["CpuTotal"].GetUint64();
        m_cpuTotalHasBeenSet = true;
    }

    if (value.HasMember("MemAvailable") && !value["MemAvailable"].IsNull())
    {
        if (!value["MemAvailable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostInfo.MemAvailable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memAvailable = value["MemAvailable"].GetUint64();
        m_memAvailableHasBeenSet = true;
    }

    if (value.HasMember("MemTotal") && !value["MemTotal"].IsNull())
    {
        if (!value["MemTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostInfo.MemTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memTotal = value["MemTotal"].GetUint64();
        m_memTotalHasBeenSet = true;
    }

    if (value.HasMember("RunTime") && !value["RunTime"].IsNull())
    {
        if (!value["RunTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostInfo.RunTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runTime = string(value["RunTime"].GetString());
        m_runTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostInfo.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("HostId") && !value["HostId"].IsNull())
    {
        if (!value["HostId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostInfo.HostId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostId = string(value["HostId"].GetString());
        m_hostIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HostInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hostIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostIp.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_hostStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_hostTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostType.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuAvailableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuAvailable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuAvailable, allocator);
    }

    if (m_cpuTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuTotal, allocator);
    }

    if (m_memAvailableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemAvailable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memAvailable, allocator);
    }

    if (m_memTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memTotal, allocator);
    }

    if (m_runTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_hostIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostId.c_str(), allocator).Move(), allocator);
    }

}


string HostInfo::GetHostIp() const
{
    return m_hostIp;
}

void HostInfo::SetHostIp(const string& _hostIp)
{
    m_hostIp = _hostIp;
    m_hostIpHasBeenSet = true;
}

bool HostInfo::HostIpHasBeenSet() const
{
    return m_hostIpHasBeenSet;
}

string HostInfo::GetServiceType() const
{
    return m_serviceType;
}

void HostInfo::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool HostInfo::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

string HostInfo::GetHostStatus() const
{
    return m_hostStatus;
}

void HostInfo::SetHostStatus(const string& _hostStatus)
{
    m_hostStatus = _hostStatus;
    m_hostStatusHasBeenSet = true;
}

bool HostInfo::HostStatusHasBeenSet() const
{
    return m_hostStatusHasBeenSet;
}

string HostInfo::GetHostType() const
{
    return m_hostType;
}

void HostInfo::SetHostType(const string& _hostType)
{
    m_hostType = _hostType;
    m_hostTypeHasBeenSet = true;
}

bool HostInfo::HostTypeHasBeenSet() const
{
    return m_hostTypeHasBeenSet;
}

uint64_t HostInfo::GetCpuAvailable() const
{
    return m_cpuAvailable;
}

void HostInfo::SetCpuAvailable(const uint64_t& _cpuAvailable)
{
    m_cpuAvailable = _cpuAvailable;
    m_cpuAvailableHasBeenSet = true;
}

bool HostInfo::CpuAvailableHasBeenSet() const
{
    return m_cpuAvailableHasBeenSet;
}

uint64_t HostInfo::GetCpuTotal() const
{
    return m_cpuTotal;
}

void HostInfo::SetCpuTotal(const uint64_t& _cpuTotal)
{
    m_cpuTotal = _cpuTotal;
    m_cpuTotalHasBeenSet = true;
}

bool HostInfo::CpuTotalHasBeenSet() const
{
    return m_cpuTotalHasBeenSet;
}

uint64_t HostInfo::GetMemAvailable() const
{
    return m_memAvailable;
}

void HostInfo::SetMemAvailable(const uint64_t& _memAvailable)
{
    m_memAvailable = _memAvailable;
    m_memAvailableHasBeenSet = true;
}

bool HostInfo::MemAvailableHasBeenSet() const
{
    return m_memAvailableHasBeenSet;
}

uint64_t HostInfo::GetMemTotal() const
{
    return m_memTotal;
}

void HostInfo::SetMemTotal(const uint64_t& _memTotal)
{
    m_memTotal = _memTotal;
    m_memTotalHasBeenSet = true;
}

bool HostInfo::MemTotalHasBeenSet() const
{
    return m_memTotalHasBeenSet;
}

string HostInfo::GetRunTime() const
{
    return m_runTime;
}

void HostInfo::SetRunTime(const string& _runTime)
{
    m_runTime = _runTime;
    m_runTimeHasBeenSet = true;
}

bool HostInfo::RunTimeHasBeenSet() const
{
    return m_runTimeHasBeenSet;
}

string HostInfo::GetExpireTime() const
{
    return m_expireTime;
}

void HostInfo::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool HostInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string HostInfo::GetHostId() const
{
    return m_hostId;
}

void HostInfo::SetHostId(const string& _hostId)
{
    m_hostId = _hostId;
    m_hostIdHasBeenSet = true;
}

bool HostInfo::HostIdHasBeenSet() const
{
    return m_hostIdHasBeenSet;
}

