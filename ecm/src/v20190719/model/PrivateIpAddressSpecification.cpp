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

#include <tencentcloud/ecm/v20190719/model/PrivateIpAddressSpecification.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

PrivateIpAddressSpecification::PrivateIpAddressSpecification() :
    m_privateIpAddressHasBeenSet(false),
    m_primaryHasBeenSet(false),
    m_publicIpAddressHasBeenSet(false),
    m_addressIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_isWanIpBlockedHasBeenSet(false),
    m_stateHasBeenSet(false)
{
}

CoreInternalOutcome PrivateIpAddressSpecification::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PrivateIpAddress") && !value["PrivateIpAddress"].IsNull())
    {
        if (!value["PrivateIpAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateIpAddressSpecification.PrivateIpAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIpAddress = string(value["PrivateIpAddress"].GetString());
        m_privateIpAddressHasBeenSet = true;
    }

    if (value.HasMember("Primary") && !value["Primary"].IsNull())
    {
        if (!value["Primary"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateIpAddressSpecification.Primary` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_primary = value["Primary"].GetBool();
        m_primaryHasBeenSet = true;
    }

    if (value.HasMember("PublicIpAddress") && !value["PublicIpAddress"].IsNull())
    {
        if (!value["PublicIpAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateIpAddressSpecification.PublicIpAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIpAddress = string(value["PublicIpAddress"].GetString());
        m_publicIpAddressHasBeenSet = true;
    }

    if (value.HasMember("AddressId") && !value["AddressId"].IsNull())
    {
        if (!value["AddressId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateIpAddressSpecification.AddressId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressId = string(value["AddressId"].GetString());
        m_addressIdHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateIpAddressSpecification.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("IsWanIpBlocked") && !value["IsWanIpBlocked"].IsNull())
    {
        if (!value["IsWanIpBlocked"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateIpAddressSpecification.IsWanIpBlocked` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isWanIpBlocked = value["IsWanIpBlocked"].GetBool();
        m_isWanIpBlockedHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateIpAddressSpecification.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrivateIpAddressSpecification::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_privateIpAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIpAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateIpAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_primaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Primary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_primary, allocator);
    }

    if (m_publicIpAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIpAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIpAddress.c_str(), allocator).Move(), allocator);
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

}


string PrivateIpAddressSpecification::GetPrivateIpAddress() const
{
    return m_privateIpAddress;
}

void PrivateIpAddressSpecification::SetPrivateIpAddress(const string& _privateIpAddress)
{
    m_privateIpAddress = _privateIpAddress;
    m_privateIpAddressHasBeenSet = true;
}

bool PrivateIpAddressSpecification::PrivateIpAddressHasBeenSet() const
{
    return m_privateIpAddressHasBeenSet;
}

bool PrivateIpAddressSpecification::GetPrimary() const
{
    return m_primary;
}

void PrivateIpAddressSpecification::SetPrimary(const bool& _primary)
{
    m_primary = _primary;
    m_primaryHasBeenSet = true;
}

bool PrivateIpAddressSpecification::PrimaryHasBeenSet() const
{
    return m_primaryHasBeenSet;
}

string PrivateIpAddressSpecification::GetPublicIpAddress() const
{
    return m_publicIpAddress;
}

void PrivateIpAddressSpecification::SetPublicIpAddress(const string& _publicIpAddress)
{
    m_publicIpAddress = _publicIpAddress;
    m_publicIpAddressHasBeenSet = true;
}

bool PrivateIpAddressSpecification::PublicIpAddressHasBeenSet() const
{
    return m_publicIpAddressHasBeenSet;
}

string PrivateIpAddressSpecification::GetAddressId() const
{
    return m_addressId;
}

void PrivateIpAddressSpecification::SetAddressId(const string& _addressId)
{
    m_addressId = _addressId;
    m_addressIdHasBeenSet = true;
}

bool PrivateIpAddressSpecification::AddressIdHasBeenSet() const
{
    return m_addressIdHasBeenSet;
}

string PrivateIpAddressSpecification::GetDescription() const
{
    return m_description;
}

void PrivateIpAddressSpecification::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool PrivateIpAddressSpecification::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

bool PrivateIpAddressSpecification::GetIsWanIpBlocked() const
{
    return m_isWanIpBlocked;
}

void PrivateIpAddressSpecification::SetIsWanIpBlocked(const bool& _isWanIpBlocked)
{
    m_isWanIpBlocked = _isWanIpBlocked;
    m_isWanIpBlockedHasBeenSet = true;
}

bool PrivateIpAddressSpecification::IsWanIpBlockedHasBeenSet() const
{
    return m_isWanIpBlockedHasBeenSet;
}

string PrivateIpAddressSpecification::GetState() const
{
    return m_state;
}

void PrivateIpAddressSpecification::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool PrivateIpAddressSpecification::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

