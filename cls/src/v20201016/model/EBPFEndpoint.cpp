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

#include <tencentcloud/cls/v20201016/model/EBPFEndpoint.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

EBPFEndpoint::EBPFEndpoint() :
    m_iPHasBeenSet(false),
    m_portHasBeenSet(false)
{
}

CoreInternalOutcome EBPFEndpoint::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IP") && !value["IP"].IsNull())
    {
        if (!value["IP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EBPFEndpoint.IP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iP = string(value["IP"].GetString());
        m_iPHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EBPFEndpoint.Port` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetUint64();
        m_portHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EBPFEndpoint::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iP.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

}


string EBPFEndpoint::GetIP() const
{
    return m_iP;
}

void EBPFEndpoint::SetIP(const string& _iP)
{
    m_iP = _iP;
    m_iPHasBeenSet = true;
}

bool EBPFEndpoint::IPHasBeenSet() const
{
    return m_iPHasBeenSet;
}

uint64_t EBPFEndpoint::GetPort() const
{
    return m_port;
}

void EBPFEndpoint::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool EBPFEndpoint::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

