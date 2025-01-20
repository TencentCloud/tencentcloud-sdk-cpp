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

#include <tencentcloud/vpc/v20170312/model/VpcPrivateIpAddress.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

VpcPrivateIpAddress::VpcPrivateIpAddress() :
    m_privateIpAddressHasBeenSet(false),
    m_cidrBlockHasBeenSet(false),
    m_privateIpAddressTypeHasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
}

CoreInternalOutcome VpcPrivateIpAddress::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PrivateIpAddress") && !value["PrivateIpAddress"].IsNull())
    {
        if (!value["PrivateIpAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcPrivateIpAddress.PrivateIpAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIpAddress = string(value["PrivateIpAddress"].GetString());
        m_privateIpAddressHasBeenSet = true;
    }

    if (value.HasMember("CidrBlock") && !value["CidrBlock"].IsNull())
    {
        if (!value["CidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcPrivateIpAddress.CidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cidrBlock = string(value["CidrBlock"].GetString());
        m_cidrBlockHasBeenSet = true;
    }

    if (value.HasMember("PrivateIpAddressType") && !value["PrivateIpAddressType"].IsNull())
    {
        if (!value["PrivateIpAddressType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcPrivateIpAddress.PrivateIpAddressType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIpAddressType = string(value["PrivateIpAddressType"].GetString());
        m_privateIpAddressTypeHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcPrivateIpAddress.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VpcPrivateIpAddress::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_privateIpAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIpAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateIpAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_cidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIpAddressTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIpAddressType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateIpAddressType.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

}


string VpcPrivateIpAddress::GetPrivateIpAddress() const
{
    return m_privateIpAddress;
}

void VpcPrivateIpAddress::SetPrivateIpAddress(const string& _privateIpAddress)
{
    m_privateIpAddress = _privateIpAddress;
    m_privateIpAddressHasBeenSet = true;
}

bool VpcPrivateIpAddress::PrivateIpAddressHasBeenSet() const
{
    return m_privateIpAddressHasBeenSet;
}

string VpcPrivateIpAddress::GetCidrBlock() const
{
    return m_cidrBlock;
}

void VpcPrivateIpAddress::SetCidrBlock(const string& _cidrBlock)
{
    m_cidrBlock = _cidrBlock;
    m_cidrBlockHasBeenSet = true;
}

bool VpcPrivateIpAddress::CidrBlockHasBeenSet() const
{
    return m_cidrBlockHasBeenSet;
}

string VpcPrivateIpAddress::GetPrivateIpAddressType() const
{
    return m_privateIpAddressType;
}

void VpcPrivateIpAddress::SetPrivateIpAddressType(const string& _privateIpAddressType)
{
    m_privateIpAddressType = _privateIpAddressType;
    m_privateIpAddressTypeHasBeenSet = true;
}

bool VpcPrivateIpAddress::PrivateIpAddressTypeHasBeenSet() const
{
    return m_privateIpAddressTypeHasBeenSet;
}

string VpcPrivateIpAddress::GetCreatedTime() const
{
    return m_createdTime;
}

void VpcPrivateIpAddress::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool VpcPrivateIpAddress::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

