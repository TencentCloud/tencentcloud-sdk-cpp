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

#include <tencentcloud/bmlb/v20180625/model/BindL4Backend.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bmlb::V20180625::Model;
using namespace std;

BindL4Backend::BindL4Backend() :
    m_portHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_weightHasBeenSet(false),
    m_probePortHasBeenSet(false)
{
}

CoreInternalOutcome BindL4Backend::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BindL4Backend.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindL4Backend.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BindL4Backend.Weight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetInt64();
        m_weightHasBeenSet = true;
    }

    if (value.HasMember("ProbePort") && !value["ProbePort"].IsNull())
    {
        if (!value["ProbePort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BindL4Backend.ProbePort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_probePort = value["ProbePort"].GetInt64();
        m_probePortHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BindL4Backend::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

    if (m_probePortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProbePort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_probePort, allocator);
    }

}


int64_t BindL4Backend::GetPort() const
{
    return m_port;
}

void BindL4Backend::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool BindL4Backend::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string BindL4Backend::GetInstanceId() const
{
    return m_instanceId;
}

void BindL4Backend::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool BindL4Backend::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t BindL4Backend::GetWeight() const
{
    return m_weight;
}

void BindL4Backend::SetWeight(const int64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool BindL4Backend::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

int64_t BindL4Backend::GetProbePort() const
{
    return m_probePort;
}

void BindL4Backend::SetProbePort(const int64_t& _probePort)
{
    m_probePort = _probePort;
    m_probePortHasBeenSet = true;
}

bool BindL4Backend::ProbePortHasBeenSet() const
{
    return m_probePortHasBeenSet;
}

