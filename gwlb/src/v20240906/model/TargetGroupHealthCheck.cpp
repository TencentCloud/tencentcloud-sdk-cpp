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

#include <tencentcloud/gwlb/v20240906/model/TargetGroupHealthCheck.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gwlb::V20240906::Model;
using namespace std;

TargetGroupHealthCheck::TargetGroupHealthCheck() :
    m_healthSwitchHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_portHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_intervalTimeHasBeenSet(false),
    m_healthNumHasBeenSet(false),
    m_unHealthNumHasBeenSet(false)
{
}

CoreInternalOutcome TargetGroupHealthCheck::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HealthSwitch") && !value["HealthSwitch"].IsNull())
    {
        if (!value["HealthSwitch"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupHealthCheck.HealthSwitch` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_healthSwitch = value["HealthSwitch"].GetBool();
        m_healthSwitchHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupHealthCheck.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupHealthCheck.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Timeout") && !value["Timeout"].IsNull())
    {
        if (!value["Timeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupHealthCheck.Timeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = value["Timeout"].GetInt64();
        m_timeoutHasBeenSet = true;
    }

    if (value.HasMember("IntervalTime") && !value["IntervalTime"].IsNull())
    {
        if (!value["IntervalTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupHealthCheck.IntervalTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_intervalTime = value["IntervalTime"].GetInt64();
        m_intervalTimeHasBeenSet = true;
    }

    if (value.HasMember("HealthNum") && !value["HealthNum"].IsNull())
    {
        if (!value["HealthNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupHealthCheck.HealthNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_healthNum = value["HealthNum"].GetInt64();
        m_healthNumHasBeenSet = true;
    }

    if (value.HasMember("UnHealthNum") && !value["UnHealthNum"].IsNull())
    {
        if (!value["UnHealthNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupHealthCheck.UnHealthNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_unHealthNum = value["UnHealthNum"].GetInt64();
        m_unHealthNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TargetGroupHealthCheck::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_healthSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthSwitch, allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeout, allocator);
    }

    if (m_intervalTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntervalTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_intervalTime, allocator);
    }

    if (m_healthNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthNum, allocator);
    }

    if (m_unHealthNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnHealthNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unHealthNum, allocator);
    }

}


bool TargetGroupHealthCheck::GetHealthSwitch() const
{
    return m_healthSwitch;
}

void TargetGroupHealthCheck::SetHealthSwitch(const bool& _healthSwitch)
{
    m_healthSwitch = _healthSwitch;
    m_healthSwitchHasBeenSet = true;
}

bool TargetGroupHealthCheck::HealthSwitchHasBeenSet() const
{
    return m_healthSwitchHasBeenSet;
}

string TargetGroupHealthCheck::GetProtocol() const
{
    return m_protocol;
}

void TargetGroupHealthCheck::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool TargetGroupHealthCheck::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

int64_t TargetGroupHealthCheck::GetPort() const
{
    return m_port;
}

void TargetGroupHealthCheck::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool TargetGroupHealthCheck::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

int64_t TargetGroupHealthCheck::GetTimeout() const
{
    return m_timeout;
}

void TargetGroupHealthCheck::SetTimeout(const int64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool TargetGroupHealthCheck::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

int64_t TargetGroupHealthCheck::GetIntervalTime() const
{
    return m_intervalTime;
}

void TargetGroupHealthCheck::SetIntervalTime(const int64_t& _intervalTime)
{
    m_intervalTime = _intervalTime;
    m_intervalTimeHasBeenSet = true;
}

bool TargetGroupHealthCheck::IntervalTimeHasBeenSet() const
{
    return m_intervalTimeHasBeenSet;
}

int64_t TargetGroupHealthCheck::GetHealthNum() const
{
    return m_healthNum;
}

void TargetGroupHealthCheck::SetHealthNum(const int64_t& _healthNum)
{
    m_healthNum = _healthNum;
    m_healthNumHasBeenSet = true;
}

bool TargetGroupHealthCheck::HealthNumHasBeenSet() const
{
    return m_healthNumHasBeenSet;
}

int64_t TargetGroupHealthCheck::GetUnHealthNum() const
{
    return m_unHealthNum;
}

void TargetGroupHealthCheck::SetUnHealthNum(const int64_t& _unHealthNum)
{
    m_unHealthNum = _unHealthNum;
    m_unHealthNumHasBeenSet = true;
}

bool TargetGroupHealthCheck::UnHealthNumHasBeenSet() const
{
    return m_unHealthNumHasBeenSet;
}

