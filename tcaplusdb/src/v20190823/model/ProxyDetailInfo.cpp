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

#include <tencentcloud/tcaplusdb/v20190823/model/ProxyDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace std;

ProxyDetailInfo::ProxyDetailInfo() :
    m_proxyUidHasBeenSet(false),
    m_machineTypeHasBeenSet(false),
    m_processSpeedHasBeenSet(false),
    m_averageProcessDelayHasBeenSet(false),
    m_slowProcessSpeedHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

CoreInternalOutcome ProxyDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProxyUid") && !value["ProxyUid"].IsNull())
    {
        if (!value["ProxyUid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyDetailInfo.ProxyUid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyUid = string(value["ProxyUid"].GetString());
        m_proxyUidHasBeenSet = true;
    }

    if (value.HasMember("MachineType") && !value["MachineType"].IsNull())
    {
        if (!value["MachineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyDetailInfo.MachineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineType = string(value["MachineType"].GetString());
        m_machineTypeHasBeenSet = true;
    }

    if (value.HasMember("ProcessSpeed") && !value["ProcessSpeed"].IsNull())
    {
        if (!value["ProcessSpeed"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyDetailInfo.ProcessSpeed` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_processSpeed = value["ProcessSpeed"].GetInt64();
        m_processSpeedHasBeenSet = true;
    }

    if (value.HasMember("AverageProcessDelay") && !value["AverageProcessDelay"].IsNull())
    {
        if (!value["AverageProcessDelay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyDetailInfo.AverageProcessDelay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_averageProcessDelay = value["AverageProcessDelay"].GetInt64();
        m_averageProcessDelayHasBeenSet = true;
    }

    if (value.HasMember("SlowProcessSpeed") && !value["SlowProcessSpeed"].IsNull())
    {
        if (!value["SlowProcessSpeed"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyDetailInfo.SlowProcessSpeed` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_slowProcessSpeed = value["SlowProcessSpeed"].GetInt64();
        m_slowProcessSpeedHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyDetailInfo.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProxyDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_proxyUidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyUid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyUid.c_str(), allocator).Move(), allocator);
    }

    if (m_machineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineType.c_str(), allocator).Move(), allocator);
    }

    if (m_processSpeedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessSpeed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_processSpeed, allocator);
    }

    if (m_averageProcessDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AverageProcessDelay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_averageProcessDelay, allocator);
    }

    if (m_slowProcessSpeedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlowProcessSpeed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_slowProcessSpeed, allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

}


string ProxyDetailInfo::GetProxyUid() const
{
    return m_proxyUid;
}

void ProxyDetailInfo::SetProxyUid(const string& _proxyUid)
{
    m_proxyUid = _proxyUid;
    m_proxyUidHasBeenSet = true;
}

bool ProxyDetailInfo::ProxyUidHasBeenSet() const
{
    return m_proxyUidHasBeenSet;
}

string ProxyDetailInfo::GetMachineType() const
{
    return m_machineType;
}

void ProxyDetailInfo::SetMachineType(const string& _machineType)
{
    m_machineType = _machineType;
    m_machineTypeHasBeenSet = true;
}

bool ProxyDetailInfo::MachineTypeHasBeenSet() const
{
    return m_machineTypeHasBeenSet;
}

int64_t ProxyDetailInfo::GetProcessSpeed() const
{
    return m_processSpeed;
}

void ProxyDetailInfo::SetProcessSpeed(const int64_t& _processSpeed)
{
    m_processSpeed = _processSpeed;
    m_processSpeedHasBeenSet = true;
}

bool ProxyDetailInfo::ProcessSpeedHasBeenSet() const
{
    return m_processSpeedHasBeenSet;
}

int64_t ProxyDetailInfo::GetAverageProcessDelay() const
{
    return m_averageProcessDelay;
}

void ProxyDetailInfo::SetAverageProcessDelay(const int64_t& _averageProcessDelay)
{
    m_averageProcessDelay = _averageProcessDelay;
    m_averageProcessDelayHasBeenSet = true;
}

bool ProxyDetailInfo::AverageProcessDelayHasBeenSet() const
{
    return m_averageProcessDelayHasBeenSet;
}

int64_t ProxyDetailInfo::GetSlowProcessSpeed() const
{
    return m_slowProcessSpeed;
}

void ProxyDetailInfo::SetSlowProcessSpeed(const int64_t& _slowProcessSpeed)
{
    m_slowProcessSpeed = _slowProcessSpeed;
    m_slowProcessSpeedHasBeenSet = true;
}

bool ProxyDetailInfo::SlowProcessSpeedHasBeenSet() const
{
    return m_slowProcessSpeedHasBeenSet;
}

string ProxyDetailInfo::GetVersion() const
{
    return m_version;
}

void ProxyDetailInfo::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool ProxyDetailInfo::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

