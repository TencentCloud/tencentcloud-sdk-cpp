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

#include <tencentcloud/clb/v20180317/model/TargetHealth.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace rapidjson;
using namespace std;

TargetHealth::TargetHealth() :
    m_iPHasBeenSet(false),
    m_portHasBeenSet(false),
    m_healthStatusHasBeenSet(false),
    m_targetIdHasBeenSet(false),
    m_healthStatusDetialHasBeenSet(false)
{
}

CoreInternalOutcome TargetHealth::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("IP") && !value["IP"].IsNull())
    {
        if (!value["IP"].IsString())
        {
            return CoreInternalOutcome(Error("response `TargetHealth.IP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iP = string(value["IP"].GetString());
        m_iPHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TargetHealth.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("HealthStatus") && !value["HealthStatus"].IsNull())
    {
        if (!value["HealthStatus"].IsBool())
        {
            return CoreInternalOutcome(Error("response `TargetHealth.HealthStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_healthStatus = value["HealthStatus"].GetBool();
        m_healthStatusHasBeenSet = true;
    }

    if (value.HasMember("TargetId") && !value["TargetId"].IsNull())
    {
        if (!value["TargetId"].IsString())
        {
            return CoreInternalOutcome(Error("response `TargetHealth.TargetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetId = string(value["TargetId"].GetString());
        m_targetIdHasBeenSet = true;
    }

    if (value.HasMember("HealthStatusDetial") && !value["HealthStatusDetial"].IsNull())
    {
        if (!value["HealthStatusDetial"].IsString())
        {
            return CoreInternalOutcome(Error("response `TargetHealth.HealthStatusDetial` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthStatusDetial = string(value["HealthStatusDetial"].GetString());
        m_healthStatusDetialHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TargetHealth::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_iPHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_iP.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_healthStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HealthStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthStatus, allocator);
    }

    if (m_targetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TargetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_targetId.c_str(), allocator).Move(), allocator);
    }

    if (m_healthStatusDetialHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HealthStatusDetial";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_healthStatusDetial.c_str(), allocator).Move(), allocator);
    }

}


string TargetHealth::GetIP() const
{
    return m_iP;
}

void TargetHealth::SetIP(const string& _iP)
{
    m_iP = _iP;
    m_iPHasBeenSet = true;
}

bool TargetHealth::IPHasBeenSet() const
{
    return m_iPHasBeenSet;
}

int64_t TargetHealth::GetPort() const
{
    return m_port;
}

void TargetHealth::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool TargetHealth::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

bool TargetHealth::GetHealthStatus() const
{
    return m_healthStatus;
}

void TargetHealth::SetHealthStatus(const bool& _healthStatus)
{
    m_healthStatus = _healthStatus;
    m_healthStatusHasBeenSet = true;
}

bool TargetHealth::HealthStatusHasBeenSet() const
{
    return m_healthStatusHasBeenSet;
}

string TargetHealth::GetTargetId() const
{
    return m_targetId;
}

void TargetHealth::SetTargetId(const string& _targetId)
{
    m_targetId = _targetId;
    m_targetIdHasBeenSet = true;
}

bool TargetHealth::TargetIdHasBeenSet() const
{
    return m_targetIdHasBeenSet;
}

string TargetHealth::GetHealthStatusDetial() const
{
    return m_healthStatusDetial;
}

void TargetHealth::SetHealthStatusDetial(const string& _healthStatusDetial)
{
    m_healthStatusDetial = _healthStatusDetial;
    m_healthStatusDetialHasBeenSet = true;
}

bool TargetHealth::HealthStatusDetialHasBeenSet() const
{
    return m_healthStatusDetialHasBeenSet;
}

