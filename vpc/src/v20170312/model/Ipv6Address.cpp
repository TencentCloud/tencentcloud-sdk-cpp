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

#include <tencentcloud/vpc/v20170312/model/Ipv6Address.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

Ipv6Address::Ipv6Address() :
    m_addressHasBeenSet(false),
    m_primaryHasBeenSet(false),
    m_addressIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_isWanIpBlockedHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_publicIpAddressHasBeenSet(false),
    m_addressTypeHasBeenSet(false)
{
}

CoreInternalOutcome Ipv6Address::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ipv6Address.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("Primary") && !value["Primary"].IsNull())
    {
        if (!value["Primary"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Ipv6Address.Primary` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_primary = value["Primary"].GetBool();
        m_primaryHasBeenSet = true;
    }

    if (value.HasMember("AddressId") && !value["AddressId"].IsNull())
    {
        if (!value["AddressId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ipv6Address.AddressId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressId = string(value["AddressId"].GetString());
        m_addressIdHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ipv6Address.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("IsWanIpBlocked") && !value["IsWanIpBlocked"].IsNull())
    {
        if (!value["IsWanIpBlocked"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Ipv6Address.IsWanIpBlocked` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isWanIpBlocked = value["IsWanIpBlocked"].GetBool();
        m_isWanIpBlockedHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ipv6Address.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("PublicIpAddress") && !value["PublicIpAddress"].IsNull())
    {
        if (!value["PublicIpAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ipv6Address.PublicIpAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIpAddress = string(value["PublicIpAddress"].GetString());
        m_publicIpAddressHasBeenSet = true;
    }

    if (value.HasMember("AddressType") && !value["AddressType"].IsNull())
    {
        if (!value["AddressType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ipv6Address.AddressType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressType = string(value["AddressType"].GetString());
        m_addressTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Ipv6Address::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_primaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Primary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_primary, allocator);
    }

    if (m_addressIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addressId.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_isWanIpBlockedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsWanIpBlocked";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isWanIpBlocked, allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIpAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIpAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_addressTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addressType.c_str(), allocator).Move(), allocator);
    }

}


string Ipv6Address::GetAddress() const
{
    return m_address;
}

void Ipv6Address::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool Ipv6Address::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

bool Ipv6Address::GetPrimary() const
{
    return m_primary;
}

void Ipv6Address::SetPrimary(const bool& _primary)
{
    m_primary = _primary;
    m_primaryHasBeenSet = true;
}

bool Ipv6Address::PrimaryHasBeenSet() const
{
    return m_primaryHasBeenSet;
}

string Ipv6Address::GetAddressId() const
{
    return m_addressId;
}

void Ipv6Address::SetAddressId(const string& _addressId)
{
    m_addressId = _addressId;
    m_addressIdHasBeenSet = true;
}

bool Ipv6Address::AddressIdHasBeenSet() const
{
    return m_addressIdHasBeenSet;
}

string Ipv6Address::GetDescription() const
{
    return m_description;
}

void Ipv6Address::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool Ipv6Address::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

bool Ipv6Address::GetIsWanIpBlocked() const
{
    return m_isWanIpBlocked;
}

void Ipv6Address::SetIsWanIpBlocked(const bool& _isWanIpBlocked)
{
    m_isWanIpBlocked = _isWanIpBlocked;
    m_isWanIpBlockedHasBeenSet = true;
}

bool Ipv6Address::IsWanIpBlockedHasBeenSet() const
{
    return m_isWanIpBlockedHasBeenSet;
}

string Ipv6Address::GetState() const
{
    return m_state;
}

void Ipv6Address::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool Ipv6Address::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string Ipv6Address::GetPublicIpAddress() const
{
    return m_publicIpAddress;
}

void Ipv6Address::SetPublicIpAddress(const string& _publicIpAddress)
{
    m_publicIpAddress = _publicIpAddress;
    m_publicIpAddressHasBeenSet = true;
}

bool Ipv6Address::PublicIpAddressHasBeenSet() const
{
    return m_publicIpAddressHasBeenSet;
}

string Ipv6Address::GetAddressType() const
{
    return m_addressType;
}

void Ipv6Address::SetAddressType(const string& _addressType)
{
    m_addressType = _addressType;
    m_addressTypeHasBeenSet = true;
}

bool Ipv6Address::AddressTypeHasBeenSet() const
{
    return m_addressTypeHasBeenSet;
}

