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

#include <tencentcloud/vpc/v20170312/model/VpcIpv6Address.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

VpcIpv6Address::VpcIpv6Address() :
    m_ipv6AddressHasBeenSet(false),
    m_cidrBlockHasBeenSet(false),
    m_ipv6AddressTypeHasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
}

CoreInternalOutcome VpcIpv6Address::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Ipv6Address") && !value["Ipv6Address"].IsNull())
    {
        if (!value["Ipv6Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcIpv6Address.Ipv6Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipv6Address = string(value["Ipv6Address"].GetString());
        m_ipv6AddressHasBeenSet = true;
    }

    if (value.HasMember("CidrBlock") && !value["CidrBlock"].IsNull())
    {
        if (!value["CidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcIpv6Address.CidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cidrBlock = string(value["CidrBlock"].GetString());
        m_cidrBlockHasBeenSet = true;
    }

    if (value.HasMember("Ipv6AddressType") && !value["Ipv6AddressType"].IsNull())
    {
        if (!value["Ipv6AddressType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcIpv6Address.Ipv6AddressType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipv6AddressType = string(value["Ipv6AddressType"].GetString());
        m_ipv6AddressTypeHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcIpv6Address.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VpcIpv6Address::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ipv6AddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipv6Address.c_str(), allocator).Move(), allocator);
    }

    if (m_cidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_ipv6AddressTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6AddressType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipv6AddressType.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

}


string VpcIpv6Address::GetIpv6Address() const
{
    return m_ipv6Address;
}

void VpcIpv6Address::SetIpv6Address(const string& _ipv6Address)
{
    m_ipv6Address = _ipv6Address;
    m_ipv6AddressHasBeenSet = true;
}

bool VpcIpv6Address::Ipv6AddressHasBeenSet() const
{
    return m_ipv6AddressHasBeenSet;
}

string VpcIpv6Address::GetCidrBlock() const
{
    return m_cidrBlock;
}

void VpcIpv6Address::SetCidrBlock(const string& _cidrBlock)
{
    m_cidrBlock = _cidrBlock;
    m_cidrBlockHasBeenSet = true;
}

bool VpcIpv6Address::CidrBlockHasBeenSet() const
{
    return m_cidrBlockHasBeenSet;
}

string VpcIpv6Address::GetIpv6AddressType() const
{
    return m_ipv6AddressType;
}

void VpcIpv6Address::SetIpv6AddressType(const string& _ipv6AddressType)
{
    m_ipv6AddressType = _ipv6AddressType;
    m_ipv6AddressTypeHasBeenSet = true;
}

bool VpcIpv6Address::Ipv6AddressTypeHasBeenSet() const
{
    return m_ipv6AddressTypeHasBeenSet;
}

string VpcIpv6Address::GetCreatedTime() const
{
    return m_createdTime;
}

void VpcIpv6Address::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool VpcIpv6Address::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

