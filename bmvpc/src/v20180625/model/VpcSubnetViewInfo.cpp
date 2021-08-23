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

#include <tencentcloud/bmvpc/v20180625/model/VpcSubnetViewInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bmvpc::V20180625::Model;
using namespace std;

VpcSubnetViewInfo::VpcSubnetViewInfo() :
    m_subnetIdHasBeenSet(false),
    m_subnetNameHasBeenSet(false),
    m_cidrBlockHasBeenSet(false),
    m_cpmNumHasBeenSet(false),
    m_lbNumHasBeenSet(false),
    m_zoneHasBeenSet(false)
{
}

CoreInternalOutcome VpcSubnetViewInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcSubnetViewInfo.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetName") && !value["SubnetName"].IsNull())
    {
        if (!value["SubnetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcSubnetViewInfo.SubnetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetName = string(value["SubnetName"].GetString());
        m_subnetNameHasBeenSet = true;
    }

    if (value.HasMember("CidrBlock") && !value["CidrBlock"].IsNull())
    {
        if (!value["CidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcSubnetViewInfo.CidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cidrBlock = string(value["CidrBlock"].GetString());
        m_cidrBlockHasBeenSet = true;
    }

    if (value.HasMember("CpmNum") && !value["CpmNum"].IsNull())
    {
        if (!value["CpmNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcSubnetViewInfo.CpmNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpmNum = value["CpmNum"].GetUint64();
        m_cpmNumHasBeenSet = true;
    }

    if (value.HasMember("LbNum") && !value["LbNum"].IsNull())
    {
        if (!value["LbNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcSubnetViewInfo.LbNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lbNum = value["LbNum"].GetUint64();
        m_lbNumHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcSubnetViewInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VpcSubnetViewInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_cidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_cpmNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpmNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpmNum, allocator);
    }

    if (m_lbNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LbNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lbNum, allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

}


string VpcSubnetViewInfo::GetSubnetId() const
{
    return m_subnetId;
}

void VpcSubnetViewInfo::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool VpcSubnetViewInfo::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string VpcSubnetViewInfo::GetSubnetName() const
{
    return m_subnetName;
}

void VpcSubnetViewInfo::SetSubnetName(const string& _subnetName)
{
    m_subnetName = _subnetName;
    m_subnetNameHasBeenSet = true;
}

bool VpcSubnetViewInfo::SubnetNameHasBeenSet() const
{
    return m_subnetNameHasBeenSet;
}

string VpcSubnetViewInfo::GetCidrBlock() const
{
    return m_cidrBlock;
}

void VpcSubnetViewInfo::SetCidrBlock(const string& _cidrBlock)
{
    m_cidrBlock = _cidrBlock;
    m_cidrBlockHasBeenSet = true;
}

bool VpcSubnetViewInfo::CidrBlockHasBeenSet() const
{
    return m_cidrBlockHasBeenSet;
}

uint64_t VpcSubnetViewInfo::GetCpmNum() const
{
    return m_cpmNum;
}

void VpcSubnetViewInfo::SetCpmNum(const uint64_t& _cpmNum)
{
    m_cpmNum = _cpmNum;
    m_cpmNumHasBeenSet = true;
}

bool VpcSubnetViewInfo::CpmNumHasBeenSet() const
{
    return m_cpmNumHasBeenSet;
}

uint64_t VpcSubnetViewInfo::GetLbNum() const
{
    return m_lbNum;
}

void VpcSubnetViewInfo::SetLbNum(const uint64_t& _lbNum)
{
    m_lbNum = _lbNum;
    m_lbNumHasBeenSet = true;
}

bool VpcSubnetViewInfo::LbNumHasBeenSet() const
{
    return m_lbNumHasBeenSet;
}

string VpcSubnetViewInfo::GetZone() const
{
    return m_zone;
}

void VpcSubnetViewInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool VpcSubnetViewInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

