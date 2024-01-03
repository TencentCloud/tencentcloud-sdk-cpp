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

#include <tencentcloud/cdc/v20201214/model/HostDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdc::V20201214::Model;
using namespace std;

HostDetailInfo::HostDetailInfo() :
    m_hostTypeFamilyHasBeenSet(false),
    m_cpuTotalHasBeenSet(false),
    m_cpuAvailableHasBeenSet(false),
    m_memTotalHasBeenSet(false),
    m_memAvailableHasBeenSet(false)
{
}

CoreInternalOutcome HostDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HostTypeFamily") && !value["HostTypeFamily"].IsNull())
    {
        if (!value["HostTypeFamily"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostDetailInfo.HostTypeFamily` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostTypeFamily = string(value["HostTypeFamily"].GetString());
        m_hostTypeFamilyHasBeenSet = true;
    }

    if (value.HasMember("CpuTotal") && !value["CpuTotal"].IsNull())
    {
        if (!value["CpuTotal"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `HostDetailInfo.CpuTotal` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cpuTotal = value["CpuTotal"].GetDouble();
        m_cpuTotalHasBeenSet = true;
    }

    if (value.HasMember("CpuAvailable") && !value["CpuAvailable"].IsNull())
    {
        if (!value["CpuAvailable"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `HostDetailInfo.CpuAvailable` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cpuAvailable = value["CpuAvailable"].GetDouble();
        m_cpuAvailableHasBeenSet = true;
    }

    if (value.HasMember("MemTotal") && !value["MemTotal"].IsNull())
    {
        if (!value["MemTotal"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `HostDetailInfo.MemTotal` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_memTotal = value["MemTotal"].GetDouble();
        m_memTotalHasBeenSet = true;
    }

    if (value.HasMember("MemAvailable") && !value["MemAvailable"].IsNull())
    {
        if (!value["MemAvailable"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `HostDetailInfo.MemAvailable` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_memAvailable = value["MemAvailable"].GetDouble();
        m_memAvailableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HostDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hostTypeFamilyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostTypeFamily";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostTypeFamily.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuTotal, allocator);
    }

    if (m_cpuAvailableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuAvailable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuAvailable, allocator);
    }

    if (m_memTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memTotal, allocator);
    }

    if (m_memAvailableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemAvailable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memAvailable, allocator);
    }

}


string HostDetailInfo::GetHostTypeFamily() const
{
    return m_hostTypeFamily;
}

void HostDetailInfo::SetHostTypeFamily(const string& _hostTypeFamily)
{
    m_hostTypeFamily = _hostTypeFamily;
    m_hostTypeFamilyHasBeenSet = true;
}

bool HostDetailInfo::HostTypeFamilyHasBeenSet() const
{
    return m_hostTypeFamilyHasBeenSet;
}

double HostDetailInfo::GetCpuTotal() const
{
    return m_cpuTotal;
}

void HostDetailInfo::SetCpuTotal(const double& _cpuTotal)
{
    m_cpuTotal = _cpuTotal;
    m_cpuTotalHasBeenSet = true;
}

bool HostDetailInfo::CpuTotalHasBeenSet() const
{
    return m_cpuTotalHasBeenSet;
}

double HostDetailInfo::GetCpuAvailable() const
{
    return m_cpuAvailable;
}

void HostDetailInfo::SetCpuAvailable(const double& _cpuAvailable)
{
    m_cpuAvailable = _cpuAvailable;
    m_cpuAvailableHasBeenSet = true;
}

bool HostDetailInfo::CpuAvailableHasBeenSet() const
{
    return m_cpuAvailableHasBeenSet;
}

double HostDetailInfo::GetMemTotal() const
{
    return m_memTotal;
}

void HostDetailInfo::SetMemTotal(const double& _memTotal)
{
    m_memTotal = _memTotal;
    m_memTotalHasBeenSet = true;
}

bool HostDetailInfo::MemTotalHasBeenSet() const
{
    return m_memTotalHasBeenSet;
}

double HostDetailInfo::GetMemAvailable() const
{
    return m_memAvailable;
}

void HostDetailInfo::SetMemAvailable(const double& _memAvailable)
{
    m_memAvailable = _memAvailable;
    m_memAvailableHasBeenSet = true;
}

bool HostDetailInfo::MemAvailableHasBeenSet() const
{
    return m_memAvailableHasBeenSet;
}

