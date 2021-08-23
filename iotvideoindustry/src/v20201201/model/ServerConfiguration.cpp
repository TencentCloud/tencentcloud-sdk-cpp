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

#include <tencentcloud/iotvideoindustry/v20201201/model/ServerConfiguration.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

ServerConfiguration::ServerConfiguration() :
    m_hostHasBeenSet(false),
    m_portHasBeenSet(false),
    m_serialHasBeenSet(false),
    m_realmHasBeenSet(false)
{
}

CoreInternalOutcome ServerConfiguration::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerConfiguration.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ServerConfiguration.Port` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetUint64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Serial") && !value["Serial"].IsNull())
    {
        if (!value["Serial"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerConfiguration.Serial` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serial = string(value["Serial"].GetString());
        m_serialHasBeenSet = true;
    }

    if (value.HasMember("Realm") && !value["Realm"].IsNull())
    {
        if (!value["Realm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerConfiguration.Realm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realm = string(value["Realm"].GetString());
        m_realmHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServerConfiguration::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_serialHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Serial";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serial.c_str(), allocator).Move(), allocator);
    }

    if (m_realmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Realm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realm.c_str(), allocator).Move(), allocator);
    }

}


string ServerConfiguration::GetHost() const
{
    return m_host;
}

void ServerConfiguration::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool ServerConfiguration::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

uint64_t ServerConfiguration::GetPort() const
{
    return m_port;
}

void ServerConfiguration::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool ServerConfiguration::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string ServerConfiguration::GetSerial() const
{
    return m_serial;
}

void ServerConfiguration::SetSerial(const string& _serial)
{
    m_serial = _serial;
    m_serialHasBeenSet = true;
}

bool ServerConfiguration::SerialHasBeenSet() const
{
    return m_serialHasBeenSet;
}

string ServerConfiguration::GetRealm() const
{
    return m_realm;
}

void ServerConfiguration::SetRealm(const string& _realm)
{
    m_realm = _realm;
    m_realmHasBeenSet = true;
}

bool ServerConfiguration::RealmHasBeenSet() const
{
    return m_realmHasBeenSet;
}

