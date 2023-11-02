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

#include <tencentcloud/tione/v20211111/model/CrossTenantENIInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

CrossTenantENIInfo::CrossTenantENIInfo() :
    m_primaryIPHasBeenSet(false),
    m_portHasBeenSet(false)
{
}

CoreInternalOutcome CrossTenantENIInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PrimaryIP") && !value["PrimaryIP"].IsNull())
    {
        if (!value["PrimaryIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossTenantENIInfo.PrimaryIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_primaryIP = string(value["PrimaryIP"].GetString());
        m_primaryIPHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossTenantENIInfo.Port` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_port = string(value["Port"].GetString());
        m_portHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CrossTenantENIInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_primaryIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrimaryIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_primaryIP.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_port.c_str(), allocator).Move(), allocator);
    }

}


string CrossTenantENIInfo::GetPrimaryIP() const
{
    return m_primaryIP;
}

void CrossTenantENIInfo::SetPrimaryIP(const string& _primaryIP)
{
    m_primaryIP = _primaryIP;
    m_primaryIPHasBeenSet = true;
}

bool CrossTenantENIInfo::PrimaryIPHasBeenSet() const
{
    return m_primaryIPHasBeenSet;
}

string CrossTenantENIInfo::GetPort() const
{
    return m_port;
}

void CrossTenantENIInfo::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool CrossTenantENIInfo::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

