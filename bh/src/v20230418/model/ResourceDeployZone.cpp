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

#include <tencentcloud/bh/v20230418/model/ResourceDeployZone.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

ResourceDeployZone::ResourceDeployZone() :
    m_vpcIdHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_vpcCidrBlockHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_subnetNameHasBeenSet(false),
    m_subnetCidrBlockHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_subnetUsageTypeHasBeenSet(false)
{
}

CoreInternalOutcome ResourceDeployZone::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDeployZone.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDeployZone.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("VpcCidrBlock") && !value["VpcCidrBlock"].IsNull())
    {
        if (!value["VpcCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDeployZone.VpcCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcCidrBlock = string(value["VpcCidrBlock"].GetString());
        m_vpcCidrBlockHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDeployZone.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetName") && !value["SubnetName"].IsNull())
    {
        if (!value["SubnetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDeployZone.SubnetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetName = string(value["SubnetName"].GetString());
        m_subnetNameHasBeenSet = true;
    }

    if (value.HasMember("SubnetCidrBlock") && !value["SubnetCidrBlock"].IsNull())
    {
        if (!value["SubnetCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDeployZone.SubnetCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetCidrBlock = string(value["SubnetCidrBlock"].GetString());
        m_subnetCidrBlockHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDeployZone.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDeployZone.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("SubnetUsageType") && !value["SubnetUsageType"].IsNull())
    {
        if (!value["SubnetUsageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDeployZone.SubnetUsageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetUsageType = string(value["SubnetUsageType"].GetString());
        m_subnetUsageTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceDeployZone::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcName.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcCidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcCidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcCidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetName.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetCidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetCidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetCidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetUsageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetUsageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetUsageType.c_str(), allocator).Move(), allocator);
    }

}


string ResourceDeployZone::GetVpcId() const
{
    return m_vpcId;
}

void ResourceDeployZone::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ResourceDeployZone::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string ResourceDeployZone::GetVpcName() const
{
    return m_vpcName;
}

void ResourceDeployZone::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool ResourceDeployZone::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

string ResourceDeployZone::GetVpcCidrBlock() const
{
    return m_vpcCidrBlock;
}

void ResourceDeployZone::SetVpcCidrBlock(const string& _vpcCidrBlock)
{
    m_vpcCidrBlock = _vpcCidrBlock;
    m_vpcCidrBlockHasBeenSet = true;
}

bool ResourceDeployZone::VpcCidrBlockHasBeenSet() const
{
    return m_vpcCidrBlockHasBeenSet;
}

string ResourceDeployZone::GetSubnetId() const
{
    return m_subnetId;
}

void ResourceDeployZone::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ResourceDeployZone::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string ResourceDeployZone::GetSubnetName() const
{
    return m_subnetName;
}

void ResourceDeployZone::SetSubnetName(const string& _subnetName)
{
    m_subnetName = _subnetName;
    m_subnetNameHasBeenSet = true;
}

bool ResourceDeployZone::SubnetNameHasBeenSet() const
{
    return m_subnetNameHasBeenSet;
}

string ResourceDeployZone::GetSubnetCidrBlock() const
{
    return m_subnetCidrBlock;
}

void ResourceDeployZone::SetSubnetCidrBlock(const string& _subnetCidrBlock)
{
    m_subnetCidrBlock = _subnetCidrBlock;
    m_subnetCidrBlockHasBeenSet = true;
}

bool ResourceDeployZone::SubnetCidrBlockHasBeenSet() const
{
    return m_subnetCidrBlockHasBeenSet;
}

string ResourceDeployZone::GetRegion() const
{
    return m_region;
}

void ResourceDeployZone::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ResourceDeployZone::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string ResourceDeployZone::GetZone() const
{
    return m_zone;
}

void ResourceDeployZone::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool ResourceDeployZone::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string ResourceDeployZone::GetSubnetUsageType() const
{
    return m_subnetUsageType;
}

void ResourceDeployZone::SetSubnetUsageType(const string& _subnetUsageType)
{
    m_subnetUsageType = _subnetUsageType;
    m_subnetUsageTypeHasBeenSet = true;
}

bool ResourceDeployZone::SubnetUsageTypeHasBeenSet() const
{
    return m_subnetUsageTypeHasBeenSet;
}

