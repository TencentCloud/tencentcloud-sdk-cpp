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

#include <tencentcloud/bmvpc/v20180625/model/NatSubnetInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bmvpc::V20180625::Model;
using namespace std;

NatSubnetInfo::NatSubnetInfo() :
    m_nameHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_subnetNatTypeHasBeenSet(false),
    m_cidrBlockHasBeenSet(false)
{
}

CoreInternalOutcome NatSubnetInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatSubnetInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatSubnetInfo.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetNatType") && !value["SubnetNatType"].IsNull())
    {
        if (!value["SubnetNatType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NatSubnetInfo.SubnetNatType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_subnetNatType = value["SubnetNatType"].GetUint64();
        m_subnetNatTypeHasBeenSet = true;
    }

    if (value.HasMember("CidrBlock") && !value["CidrBlock"].IsNull())
    {
        if (!value["CidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatSubnetInfo.CidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cidrBlock = string(value["CidrBlock"].GetString());
        m_cidrBlockHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NatSubnetInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetNatTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetNatType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subnetNatType, allocator);
    }

    if (m_cidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cidrBlock.c_str(), allocator).Move(), allocator);
    }

}


string NatSubnetInfo::GetName() const
{
    return m_name;
}

void NatSubnetInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool NatSubnetInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string NatSubnetInfo::GetSubnetId() const
{
    return m_subnetId;
}

void NatSubnetInfo::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool NatSubnetInfo::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

uint64_t NatSubnetInfo::GetSubnetNatType() const
{
    return m_subnetNatType;
}

void NatSubnetInfo::SetSubnetNatType(const uint64_t& _subnetNatType)
{
    m_subnetNatType = _subnetNatType;
    m_subnetNatTypeHasBeenSet = true;
}

bool NatSubnetInfo::SubnetNatTypeHasBeenSet() const
{
    return m_subnetNatTypeHasBeenSet;
}

string NatSubnetInfo::GetCidrBlock() const
{
    return m_cidrBlock;
}

void NatSubnetInfo::SetCidrBlock(const string& _cidrBlock)
{
    m_cidrBlock = _cidrBlock;
    m_cidrBlockHasBeenSet = true;
}

bool NatSubnetInfo::CidrBlockHasBeenSet() const
{
    return m_cidrBlockHasBeenSet;
}

