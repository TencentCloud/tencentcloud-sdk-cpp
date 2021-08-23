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

#include <tencentcloud/dayu/v20180709/model/L4HealthConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dayu::V20180709::Model;
using namespace std;

L4HealthConfig::L4HealthConfig() :
    m_protocolHasBeenSet(false),
    m_virtualPortHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_timeOutHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_kickNumHasBeenSet(false),
    m_aliveNumHasBeenSet(false),
    m_keepTimeHasBeenSet(false)
{
}

CoreInternalOutcome L4HealthConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L4HealthConfig.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("VirtualPort") && !value["VirtualPort"].IsNull())
    {
        if (!value["VirtualPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `L4HealthConfig.VirtualPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_virtualPort = value["VirtualPort"].GetUint64();
        m_virtualPortHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `L4HealthConfig.Enable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetUint64();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("TimeOut") && !value["TimeOut"].IsNull())
    {
        if (!value["TimeOut"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `L4HealthConfig.TimeOut` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeOut = value["TimeOut"].GetUint64();
        m_timeOutHasBeenSet = true;
    }

    if (value.HasMember("Interval") && !value["Interval"].IsNull())
    {
        if (!value["Interval"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `L4HealthConfig.Interval` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_interval = value["Interval"].GetUint64();
        m_intervalHasBeenSet = true;
    }

    if (value.HasMember("KickNum") && !value["KickNum"].IsNull())
    {
        if (!value["KickNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `L4HealthConfig.KickNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_kickNum = value["KickNum"].GetUint64();
        m_kickNumHasBeenSet = true;
    }

    if (value.HasMember("AliveNum") && !value["AliveNum"].IsNull())
    {
        if (!value["AliveNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `L4HealthConfig.AliveNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_aliveNum = value["AliveNum"].GetUint64();
        m_aliveNumHasBeenSet = true;
    }

    if (value.HasMember("KeepTime") && !value["KeepTime"].IsNull())
    {
        if (!value["KeepTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `L4HealthConfig.KeepTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_keepTime = value["KeepTime"].GetUint64();
        m_keepTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void L4HealthConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_virtualPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_virtualPort, allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_timeOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeOut, allocator);
    }

    if (m_intervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_interval, allocator);
    }

    if (m_kickNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KickNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_kickNum, allocator);
    }

    if (m_aliveNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliveNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aliveNum, allocator);
    }

    if (m_keepTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeepTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_keepTime, allocator);
    }

}


string L4HealthConfig::GetProtocol() const
{
    return m_protocol;
}

void L4HealthConfig::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool L4HealthConfig::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

uint64_t L4HealthConfig::GetVirtualPort() const
{
    return m_virtualPort;
}

void L4HealthConfig::SetVirtualPort(const uint64_t& _virtualPort)
{
    m_virtualPort = _virtualPort;
    m_virtualPortHasBeenSet = true;
}

bool L4HealthConfig::VirtualPortHasBeenSet() const
{
    return m_virtualPortHasBeenSet;
}

uint64_t L4HealthConfig::GetEnable() const
{
    return m_enable;
}

void L4HealthConfig::SetEnable(const uint64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool L4HealthConfig::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

uint64_t L4HealthConfig::GetTimeOut() const
{
    return m_timeOut;
}

void L4HealthConfig::SetTimeOut(const uint64_t& _timeOut)
{
    m_timeOut = _timeOut;
    m_timeOutHasBeenSet = true;
}

bool L4HealthConfig::TimeOutHasBeenSet() const
{
    return m_timeOutHasBeenSet;
}

uint64_t L4HealthConfig::GetInterval() const
{
    return m_interval;
}

void L4HealthConfig::SetInterval(const uint64_t& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool L4HealthConfig::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

uint64_t L4HealthConfig::GetKickNum() const
{
    return m_kickNum;
}

void L4HealthConfig::SetKickNum(const uint64_t& _kickNum)
{
    m_kickNum = _kickNum;
    m_kickNumHasBeenSet = true;
}

bool L4HealthConfig::KickNumHasBeenSet() const
{
    return m_kickNumHasBeenSet;
}

uint64_t L4HealthConfig::GetAliveNum() const
{
    return m_aliveNum;
}

void L4HealthConfig::SetAliveNum(const uint64_t& _aliveNum)
{
    m_aliveNum = _aliveNum;
    m_aliveNumHasBeenSet = true;
}

bool L4HealthConfig::AliveNumHasBeenSet() const
{
    return m_aliveNumHasBeenSet;
}

uint64_t L4HealthConfig::GetKeepTime() const
{
    return m_keepTime;
}

void L4HealthConfig::SetKeepTime(const uint64_t& _keepTime)
{
    m_keepTime = _keepTime;
    m_keepTimeHasBeenSet = true;
}

bool L4HealthConfig::KeepTimeHasBeenSet() const
{
    return m_keepTimeHasBeenSet;
}

