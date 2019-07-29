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

#include <tencentcloud/vpc/v20170312/model/NatGatewayAddress.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace rapidjson;
using namespace std;

NatGatewayAddress::NatGatewayAddress() :
    m_addressIdHasBeenSet(false),
    m_publicIpAddressHasBeenSet(false),
    m_isBlockedHasBeenSet(false)
{
}

CoreInternalOutcome NatGatewayAddress::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("AddressId") && !value["AddressId"].IsNull())
    {
        if (!value["AddressId"].IsString())
        {
            return CoreInternalOutcome(Error("response `NatGatewayAddress.AddressId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressId = string(value["AddressId"].GetString());
        m_addressIdHasBeenSet = true;
    }

    if (value.HasMember("PublicIpAddress") && !value["PublicIpAddress"].IsNull())
    {
        if (!value["PublicIpAddress"].IsString())
        {
            return CoreInternalOutcome(Error("response `NatGatewayAddress.PublicIpAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIpAddress = string(value["PublicIpAddress"].GetString());
        m_publicIpAddressHasBeenSet = true;
    }

    if (value.HasMember("IsBlocked") && !value["IsBlocked"].IsNull())
    {
        if (!value["IsBlocked"].IsBool())
        {
            return CoreInternalOutcome(Error("response `NatGatewayAddress.IsBlocked` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isBlocked = value["IsBlocked"].GetBool();
        m_isBlockedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NatGatewayAddress::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_addressIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AddressId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_addressId.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpAddressHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PublicIpAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_publicIpAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_isBlockedHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsBlocked";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isBlocked, allocator);
    }

}


string NatGatewayAddress::GetAddressId() const
{
    return m_addressId;
}

void NatGatewayAddress::SetAddressId(const string& _addressId)
{
    m_addressId = _addressId;
    m_addressIdHasBeenSet = true;
}

bool NatGatewayAddress::AddressIdHasBeenSet() const
{
    return m_addressIdHasBeenSet;
}

string NatGatewayAddress::GetPublicIpAddress() const
{
    return m_publicIpAddress;
}

void NatGatewayAddress::SetPublicIpAddress(const string& _publicIpAddress)
{
    m_publicIpAddress = _publicIpAddress;
    m_publicIpAddressHasBeenSet = true;
}

bool NatGatewayAddress::PublicIpAddressHasBeenSet() const
{
    return m_publicIpAddressHasBeenSet;
}

bool NatGatewayAddress::GetIsBlocked() const
{
    return m_isBlocked;
}

void NatGatewayAddress::SetIsBlocked(const bool& _isBlocked)
{
    m_isBlocked = _isBlocked;
    m_isBlockedHasBeenSet = true;
}

bool NatGatewayAddress::IsBlockedHasBeenSet() const
{
    return m_isBlockedHasBeenSet;
}

