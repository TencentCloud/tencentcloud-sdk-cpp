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

#include <tencentcloud/vpc/v20170312/model/DefaultVpcSubnet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

DefaultVpcSubnet::DefaultVpcSubnet() :
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_subnetNameHasBeenSet(false),
    m_cidrBlockHasBeenSet(false)
{
}

CoreInternalOutcome DefaultVpcSubnet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DefaultVpcSubnet.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DefaultVpcSubnet.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DefaultVpcSubnet.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("SubnetName") && !value["SubnetName"].IsNull())
    {
        if (!value["SubnetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DefaultVpcSubnet.SubnetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetName = string(value["SubnetName"].GetString());
        m_subnetNameHasBeenSet = true;
    }

    if (value.HasMember("CidrBlock") && !value["CidrBlock"].IsNull())
    {
        if (!value["CidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DefaultVpcSubnet.CidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cidrBlock = string(value["CidrBlock"].GetString());
        m_cidrBlockHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DefaultVpcSubnet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcName.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetName.c_str(), allocator).Move(), allocator);
    }

    if (m_cidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cidrBlock.c_str(), allocator).Move(), allocator);
    }

}


string DefaultVpcSubnet::GetVpcId() const
{
    return m_vpcId;
}

void DefaultVpcSubnet::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool DefaultVpcSubnet::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string DefaultVpcSubnet::GetSubnetId() const
{
    return m_subnetId;
}

void DefaultVpcSubnet::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool DefaultVpcSubnet::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string DefaultVpcSubnet::GetVpcName() const
{
    return m_vpcName;
}

void DefaultVpcSubnet::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool DefaultVpcSubnet::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

string DefaultVpcSubnet::GetSubnetName() const
{
    return m_subnetName;
}

void DefaultVpcSubnet::SetSubnetName(const string& _subnetName)
{
    m_subnetName = _subnetName;
    m_subnetNameHasBeenSet = true;
}

bool DefaultVpcSubnet::SubnetNameHasBeenSet() const
{
    return m_subnetNameHasBeenSet;
}

string DefaultVpcSubnet::GetCidrBlock() const
{
    return m_cidrBlock;
}

void DefaultVpcSubnet::SetCidrBlock(const string& _cidrBlock)
{
    m_cidrBlock = _cidrBlock;
    m_cidrBlockHasBeenSet = true;
}

bool DefaultVpcSubnet::CidrBlockHasBeenSet() const
{
    return m_cidrBlockHasBeenSet;
}

