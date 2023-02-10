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

#include <tencentcloud/antiddos/v20200309/model/SourceServer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

SourceServer::SourceServer() :
    m_realServerHasBeenSet(false),
    m_rsTypeHasBeenSet(false),
    m_weightHasBeenSet(false),
    m_portHasBeenSet(false)
{
}

CoreInternalOutcome SourceServer::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RealServer") && !value["RealServer"].IsNull())
    {
        if (!value["RealServer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceServer.RealServer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realServer = string(value["RealServer"].GetString());
        m_realServerHasBeenSet = true;
    }

    if (value.HasMember("RsType") && !value["RsType"].IsNull())
    {
        if (!value["RsType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SourceServer.RsType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rsType = value["RsType"].GetInt64();
        m_rsTypeHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SourceServer.Weight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetInt64();
        m_weightHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SourceServer.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SourceServer::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_realServerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealServer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realServer.c_str(), allocator).Move(), allocator);
    }

    if (m_rsTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RsType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rsType, allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

}


string SourceServer::GetRealServer() const
{
    return m_realServer;
}

void SourceServer::SetRealServer(const string& _realServer)
{
    m_realServer = _realServer;
    m_realServerHasBeenSet = true;
}

bool SourceServer::RealServerHasBeenSet() const
{
    return m_realServerHasBeenSet;
}

int64_t SourceServer::GetRsType() const
{
    return m_rsType;
}

void SourceServer::SetRsType(const int64_t& _rsType)
{
    m_rsType = _rsType;
    m_rsTypeHasBeenSet = true;
}

bool SourceServer::RsTypeHasBeenSet() const
{
    return m_rsTypeHasBeenSet;
}

int64_t SourceServer::GetWeight() const
{
    return m_weight;
}

void SourceServer::SetWeight(const int64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool SourceServer::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

int64_t SourceServer::GetPort() const
{
    return m_port;
}

void SourceServer::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool SourceServer::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

