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

#include <tencentcloud/cwp/v20180228/model/OpenPortStatistics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

OpenPortStatistics::OpenPortStatistics() :
    m_portHasBeenSet(false),
    m_machineNumHasBeenSet(false)
{
}

CoreInternalOutcome OpenPortStatistics::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OpenPortStatistics.Port` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetUint64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("MachineNum") && !value["MachineNum"].IsNull())
    {
        if (!value["MachineNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OpenPortStatistics.MachineNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_machineNum = value["MachineNum"].GetUint64();
        m_machineNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OpenPortStatistics::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_machineNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_machineNum, allocator);
    }

}


uint64_t OpenPortStatistics::GetPort() const
{
    return m_port;
}

void OpenPortStatistics::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool OpenPortStatistics::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

uint64_t OpenPortStatistics::GetMachineNum() const
{
    return m_machineNum;
}

void OpenPortStatistics::SetMachineNum(const uint64_t& _machineNum)
{
    m_machineNum = _machineNum;
    m_machineNumHasBeenSet = true;
}

bool OpenPortStatistics::MachineNumHasBeenSet() const
{
    return m_machineNumHasBeenSet;
}

