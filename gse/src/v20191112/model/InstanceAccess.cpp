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

#include <tencentcloud/gse/v20191112/model/InstanceAccess.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

InstanceAccess::InstanceAccess() :
    m_credentialsHasBeenSet(false),
    m_fleetIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_operatingSystemHasBeenSet(false)
{
}

CoreInternalOutcome InstanceAccess::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Credentials") && !value["Credentials"].IsNull())
    {
        if (!value["Credentials"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAccess.Credentials` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_credentials.Deserialize(value["Credentials"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_credentialsHasBeenSet = true;
    }

    if (value.HasMember("FleetId") && !value["FleetId"].IsNull())
    {
        if (!value["FleetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAccess.FleetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fleetId = string(value["FleetId"].GetString());
        m_fleetIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAccess.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("IpAddress") && !value["IpAddress"].IsNull())
    {
        if (!value["IpAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAccess.IpAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipAddress = string(value["IpAddress"].GetString());
        m_ipAddressHasBeenSet = true;
    }

    if (value.HasMember("OperatingSystem") && !value["OperatingSystem"].IsNull())
    {
        if (!value["OperatingSystem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAccess.OperatingSystem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operatingSystem = string(value["OperatingSystem"].GetString());
        m_operatingSystemHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceAccess::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_credentialsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Credentials";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_credentials.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_fleetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FleetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fleetId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_ipAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_operatingSystemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatingSystem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operatingSystem.c_str(), allocator).Move(), allocator);
    }

}


Credentials InstanceAccess::GetCredentials() const
{
    return m_credentials;
}

void InstanceAccess::SetCredentials(const Credentials& _credentials)
{
    m_credentials = _credentials;
    m_credentialsHasBeenSet = true;
}

bool InstanceAccess::CredentialsHasBeenSet() const
{
    return m_credentialsHasBeenSet;
}

string InstanceAccess::GetFleetId() const
{
    return m_fleetId;
}

void InstanceAccess::SetFleetId(const string& _fleetId)
{
    m_fleetId = _fleetId;
    m_fleetIdHasBeenSet = true;
}

bool InstanceAccess::FleetIdHasBeenSet() const
{
    return m_fleetIdHasBeenSet;
}

string InstanceAccess::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceAccess::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceAccess::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string InstanceAccess::GetIpAddress() const
{
    return m_ipAddress;
}

void InstanceAccess::SetIpAddress(const string& _ipAddress)
{
    m_ipAddress = _ipAddress;
    m_ipAddressHasBeenSet = true;
}

bool InstanceAccess::IpAddressHasBeenSet() const
{
    return m_ipAddressHasBeenSet;
}

string InstanceAccess::GetOperatingSystem() const
{
    return m_operatingSystem;
}

void InstanceAccess::SetOperatingSystem(const string& _operatingSystem)
{
    m_operatingSystem = _operatingSystem;
    m_operatingSystemHasBeenSet = true;
}

bool InstanceAccess::OperatingSystemHasBeenSet() const
{
    return m_operatingSystemHasBeenSet;
}

