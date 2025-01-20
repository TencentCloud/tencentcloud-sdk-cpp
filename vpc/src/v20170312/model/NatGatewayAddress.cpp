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
using namespace std;

NatGatewayAddress::NatGatewayAddress() :
    m_addressIdHasBeenSet(false),
    m_publicIpAddressHasBeenSet(false),
    m_isBlockedHasBeenSet(false),
    m_blockTypeHasBeenSet(false)
{
}

CoreInternalOutcome NatGatewayAddress::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AddressId") && !value["AddressId"].IsNull())
    {
        if (!value["AddressId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatGatewayAddress.AddressId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressId = string(value["AddressId"].GetString());
        m_addressIdHasBeenSet = true;
    }

    if (value.HasMember("PublicIpAddress") && !value["PublicIpAddress"].IsNull())
    {
        if (!value["PublicIpAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatGatewayAddress.PublicIpAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIpAddress = string(value["PublicIpAddress"].GetString());
        m_publicIpAddressHasBeenSet = true;
    }

    if (value.HasMember("IsBlocked") && !value["IsBlocked"].IsNull())
    {
        if (!value["IsBlocked"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NatGatewayAddress.IsBlocked` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isBlocked = value["IsBlocked"].GetBool();
        m_isBlockedHasBeenSet = true;
    }

    if (value.HasMember("BlockType") && !value["BlockType"].IsNull())
    {
        if (!value["BlockType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatGatewayAddress.BlockType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockType = string(value["BlockType"].GetString());
        m_blockTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NatGatewayAddress::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_addressIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addressId.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIpAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIpAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_isBlockedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsBlocked";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isBlocked, allocator);
    }

    if (m_blockTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blockType.c_str(), allocator).Move(), allocator);
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

string NatGatewayAddress::GetBlockType() const
{
    return m_blockType;
}

void NatGatewayAddress::SetBlockType(const string& _blockType)
{
    m_blockType = _blockType;
    m_blockTypeHasBeenSet = true;
}

bool NatGatewayAddress::BlockTypeHasBeenSet() const
{
    return m_blockTypeHasBeenSet;
}

