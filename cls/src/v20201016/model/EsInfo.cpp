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

#include <tencentcloud/cls/v20201016/model/EsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

EsInfo::EsInfo() :
    m_esTypeHasBeenSet(false),
    m_accessModeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_userHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_portHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_virtualGatewayTypeHasBeenSet(false),
    m_passwordHasBeenSet(false)
{
}

CoreInternalOutcome EsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EsType") && !value["EsType"].IsNull())
    {
        if (!value["EsType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EsInfo.EsType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_esType = value["EsType"].GetUint64();
        m_esTypeHasBeenSet = true;
    }

    if (value.HasMember("AccessMode") && !value["AccessMode"].IsNull())
    {
        if (!value["AccessMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EsInfo.AccessMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_accessMode = value["AccessMode"].GetUint64();
        m_accessModeHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EsInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EsInfo.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EsInfo.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EsInfo.Port` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetUint64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EsInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("VirtualGatewayType") && !value["VirtualGatewayType"].IsNull())
    {
        if (!value["VirtualGatewayType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EsInfo.VirtualGatewayType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_virtualGatewayType = value["VirtualGatewayType"].GetUint64();
        m_virtualGatewayTypeHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EsInfo.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_esTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_esType, allocator);
    }

    if (m_accessModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accessMode, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_virtualGatewayTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualGatewayType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_virtualGatewayType, allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

}


uint64_t EsInfo::GetEsType() const
{
    return m_esType;
}

void EsInfo::SetEsType(const uint64_t& _esType)
{
    m_esType = _esType;
    m_esTypeHasBeenSet = true;
}

bool EsInfo::EsTypeHasBeenSet() const
{
    return m_esTypeHasBeenSet;
}

uint64_t EsInfo::GetAccessMode() const
{
    return m_accessMode;
}

void EsInfo::SetAccessMode(const uint64_t& _accessMode)
{
    m_accessMode = _accessMode;
    m_accessModeHasBeenSet = true;
}

bool EsInfo::AccessModeHasBeenSet() const
{
    return m_accessModeHasBeenSet;
}

string EsInfo::GetInstanceId() const
{
    return m_instanceId;
}

void EsInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool EsInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string EsInfo::GetUser() const
{
    return m_user;
}

void EsInfo::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool EsInfo::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string EsInfo::GetAddress() const
{
    return m_address;
}

void EsInfo::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool EsInfo::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

uint64_t EsInfo::GetPort() const
{
    return m_port;
}

void EsInfo::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool EsInfo::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string EsInfo::GetVpcId() const
{
    return m_vpcId;
}

void EsInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool EsInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

uint64_t EsInfo::GetVirtualGatewayType() const
{
    return m_virtualGatewayType;
}

void EsInfo::SetVirtualGatewayType(const uint64_t& _virtualGatewayType)
{
    m_virtualGatewayType = _virtualGatewayType;
    m_virtualGatewayTypeHasBeenSet = true;
}

bool EsInfo::VirtualGatewayTypeHasBeenSet() const
{
    return m_virtualGatewayTypeHasBeenSet;
}

string EsInfo::GetPassword() const
{
    return m_password;
}

void EsInfo::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool EsInfo::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

