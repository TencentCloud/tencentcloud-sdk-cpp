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

#include <tencentcloud/teo/v20220901/model/L4ProxyRemoteAuth.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

L4ProxyRemoteAuth::L4ProxyRemoteAuth() :
    m_switchHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_serverFaultyBehaviorHasBeenSet(false)
{
}

CoreInternalOutcome L4ProxyRemoteAuth::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L4ProxyRemoteAuth.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L4ProxyRemoteAuth.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("ServerFaultyBehavior") && !value["ServerFaultyBehavior"].IsNull())
    {
        if (!value["ServerFaultyBehavior"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L4ProxyRemoteAuth.ServerFaultyBehavior` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverFaultyBehavior = string(value["ServerFaultyBehavior"].GetString());
        m_serverFaultyBehaviorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void L4ProxyRemoteAuth::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_serverFaultyBehaviorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerFaultyBehavior";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverFaultyBehavior.c_str(), allocator).Move(), allocator);
    }

}


string L4ProxyRemoteAuth::GetSwitch() const
{
    return m_switch;
}

void L4ProxyRemoteAuth::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool L4ProxyRemoteAuth::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

string L4ProxyRemoteAuth::GetAddress() const
{
    return m_address;
}

void L4ProxyRemoteAuth::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool L4ProxyRemoteAuth::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string L4ProxyRemoteAuth::GetServerFaultyBehavior() const
{
    return m_serverFaultyBehavior;
}

void L4ProxyRemoteAuth::SetServerFaultyBehavior(const string& _serverFaultyBehavior)
{
    m_serverFaultyBehavior = _serverFaultyBehavior;
    m_serverFaultyBehaviorHasBeenSet = true;
}

bool L4ProxyRemoteAuth::ServerFaultyBehaviorHasBeenSet() const
{
    return m_serverFaultyBehaviorHasBeenSet;
}

