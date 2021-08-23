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

#include <tencentcloud/bmvpc/v20180625/model/VpcViewInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bmvpc::V20180625::Model;
using namespace std;

VpcViewInfo::VpcViewInfo() :
    m_vpcIdHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_cidrBlockHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_lbNumHasBeenSet(false),
    m_eipNumHasBeenSet(false),
    m_natNumHasBeenSet(false),
    m_subnetSetHasBeenSet(false)
{
}

CoreInternalOutcome VpcViewInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcViewInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcViewInfo.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("CidrBlock") && !value["CidrBlock"].IsNull())
    {
        if (!value["CidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcViewInfo.CidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cidrBlock = string(value["CidrBlock"].GetString());
        m_cidrBlockHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcViewInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("LbNum") && !value["LbNum"].IsNull())
    {
        if (!value["LbNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcViewInfo.LbNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lbNum = value["LbNum"].GetUint64();
        m_lbNumHasBeenSet = true;
    }

    if (value.HasMember("EipNum") && !value["EipNum"].IsNull())
    {
        if (!value["EipNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcViewInfo.EipNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eipNum = value["EipNum"].GetUint64();
        m_eipNumHasBeenSet = true;
    }

    if (value.HasMember("NatNum") && !value["NatNum"].IsNull())
    {
        if (!value["NatNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcViewInfo.NatNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_natNum = value["NatNum"].GetUint64();
        m_natNumHasBeenSet = true;
    }

    if (value.HasMember("SubnetSet") && !value["SubnetSet"].IsNull())
    {
        if (!value["SubnetSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VpcViewInfo.SubnetSet` is not array type"));

        const rapidjson::Value &tmpValue = value["SubnetSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VpcSubnetViewInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_subnetSet.push_back(item);
        }
        m_subnetSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VpcViewInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_cidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_lbNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LbNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lbNum, allocator);
    }

    if (m_eipNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EipNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eipNum, allocator);
    }

    if (m_natNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_natNum, allocator);
    }

    if (m_subnetSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subnetSet.begin(); itr != m_subnetSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string VpcViewInfo::GetVpcId() const
{
    return m_vpcId;
}

void VpcViewInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool VpcViewInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string VpcViewInfo::GetVpcName() const
{
    return m_vpcName;
}

void VpcViewInfo::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool VpcViewInfo::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

string VpcViewInfo::GetCidrBlock() const
{
    return m_cidrBlock;
}

void VpcViewInfo::SetCidrBlock(const string& _cidrBlock)
{
    m_cidrBlock = _cidrBlock;
    m_cidrBlockHasBeenSet = true;
}

bool VpcViewInfo::CidrBlockHasBeenSet() const
{
    return m_cidrBlockHasBeenSet;
}

string VpcViewInfo::GetZone() const
{
    return m_zone;
}

void VpcViewInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool VpcViewInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

uint64_t VpcViewInfo::GetLbNum() const
{
    return m_lbNum;
}

void VpcViewInfo::SetLbNum(const uint64_t& _lbNum)
{
    m_lbNum = _lbNum;
    m_lbNumHasBeenSet = true;
}

bool VpcViewInfo::LbNumHasBeenSet() const
{
    return m_lbNumHasBeenSet;
}

uint64_t VpcViewInfo::GetEipNum() const
{
    return m_eipNum;
}

void VpcViewInfo::SetEipNum(const uint64_t& _eipNum)
{
    m_eipNum = _eipNum;
    m_eipNumHasBeenSet = true;
}

bool VpcViewInfo::EipNumHasBeenSet() const
{
    return m_eipNumHasBeenSet;
}

uint64_t VpcViewInfo::GetNatNum() const
{
    return m_natNum;
}

void VpcViewInfo::SetNatNum(const uint64_t& _natNum)
{
    m_natNum = _natNum;
    m_natNumHasBeenSet = true;
}

bool VpcViewInfo::NatNumHasBeenSet() const
{
    return m_natNumHasBeenSet;
}

vector<VpcSubnetViewInfo> VpcViewInfo::GetSubnetSet() const
{
    return m_subnetSet;
}

void VpcViewInfo::SetSubnetSet(const vector<VpcSubnetViewInfo>& _subnetSet)
{
    m_subnetSet = _subnetSet;
    m_subnetSetHasBeenSet = true;
}

bool VpcViewInfo::SubnetSetHasBeenSet() const
{
    return m_subnetSetHasBeenSet;
}

