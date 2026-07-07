/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/alb/v20251030/model/TargetToRemove.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

TargetToRemove::TargetToRemove() :
    m_portHasBeenSet(false),
    m_targetIpHasBeenSet(false)
{
}

CoreInternalOutcome TargetToRemove::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TargetToRemove.Port` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetUint64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("TargetIp") && !value["TargetIp"].IsNull())
    {
        if (!value["TargetIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetToRemove.TargetIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetIp = string(value["TargetIp"].GetString());
        m_targetIpHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TargetToRemove::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_targetIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetIp.c_str(), allocator).Move(), allocator);
    }

}


uint64_t TargetToRemove::GetPort() const
{
    return m_port;
}

void TargetToRemove::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool TargetToRemove::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string TargetToRemove::GetTargetIp() const
{
    return m_targetIp;
}

void TargetToRemove::SetTargetIp(const string& _targetIp)
{
    m_targetIp = _targetIp;
    m_targetIpHasBeenSet = true;
}

bool TargetToRemove::TargetIpHasBeenSet() const
{
    return m_targetIpHasBeenSet;
}

