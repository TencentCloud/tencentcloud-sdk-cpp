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

#include <tencentcloud/bmvpc/v20180625/model/SubnetCreateInputInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bmvpc::V20180625::Model;
using namespace std;

SubnetCreateInputInfo::SubnetCreateInputInfo() :
    m_subnetNameHasBeenSet(false),
    m_cidrBlockHasBeenSet(false),
    m_distributedFlagHasBeenSet(false),
    m_dhcpEnableHasBeenSet(false),
    m_dhcpServerIpHasBeenSet(false),
    m_ipReserveHasBeenSet(false),
    m_vlanIdHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_isSmartNicHasBeenSet(false)
{
}

CoreInternalOutcome SubnetCreateInputInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubnetName") && !value["SubnetName"].IsNull())
    {
        if (!value["SubnetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetCreateInputInfo.SubnetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetName = string(value["SubnetName"].GetString());
        m_subnetNameHasBeenSet = true;
    }

    if (value.HasMember("CidrBlock") && !value["CidrBlock"].IsNull())
    {
        if (!value["CidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetCreateInputInfo.CidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cidrBlock = string(value["CidrBlock"].GetString());
        m_cidrBlockHasBeenSet = true;
    }

    if (value.HasMember("DistributedFlag") && !value["DistributedFlag"].IsNull())
    {
        if (!value["DistributedFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetCreateInputInfo.DistributedFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_distributedFlag = value["DistributedFlag"].GetUint64();
        m_distributedFlagHasBeenSet = true;
    }

    if (value.HasMember("DhcpEnable") && !value["DhcpEnable"].IsNull())
    {
        if (!value["DhcpEnable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetCreateInputInfo.DhcpEnable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dhcpEnable = value["DhcpEnable"].GetUint64();
        m_dhcpEnableHasBeenSet = true;
    }

    if (value.HasMember("DhcpServerIp") && !value["DhcpServerIp"].IsNull())
    {
        if (!value["DhcpServerIp"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SubnetCreateInputInfo.DhcpServerIp` is not array type"));

        const rapidjson::Value &tmpValue = value["DhcpServerIp"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dhcpServerIp.push_back((*itr).GetString());
        }
        m_dhcpServerIpHasBeenSet = true;
    }

    if (value.HasMember("IpReserve") && !value["IpReserve"].IsNull())
    {
        if (!value["IpReserve"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetCreateInputInfo.IpReserve` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ipReserve = value["IpReserve"].GetUint64();
        m_ipReserveHasBeenSet = true;
    }

    if (value.HasMember("VlanId") && !value["VlanId"].IsNull())
    {
        if (!value["VlanId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetCreateInputInfo.VlanId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vlanId = value["VlanId"].GetUint64();
        m_vlanIdHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetCreateInputInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("IsSmartNic") && !value["IsSmartNic"].IsNull())
    {
        if (!value["IsSmartNic"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetCreateInputInfo.IsSmartNic` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isSmartNic = value["IsSmartNic"].GetUint64();
        m_isSmartNicHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubnetCreateInputInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_distributedFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DistributedFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_distributedFlag, allocator);
    }

    if (m_dhcpEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DhcpEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dhcpEnable, allocator);
    }

    if (m_dhcpServerIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DhcpServerIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dhcpServerIp.begin(); itr != m_dhcpServerIp.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ipReserveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpReserve";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ipReserve, allocator);
    }

    if (m_vlanIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VlanId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vlanId, allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_isSmartNicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSmartNic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSmartNic, allocator);
    }

}


string SubnetCreateInputInfo::GetSubnetName() const
{
    return m_subnetName;
}

void SubnetCreateInputInfo::SetSubnetName(const string& _subnetName)
{
    m_subnetName = _subnetName;
    m_subnetNameHasBeenSet = true;
}

bool SubnetCreateInputInfo::SubnetNameHasBeenSet() const
{
    return m_subnetNameHasBeenSet;
}

string SubnetCreateInputInfo::GetCidrBlock() const
{
    return m_cidrBlock;
}

void SubnetCreateInputInfo::SetCidrBlock(const string& _cidrBlock)
{
    m_cidrBlock = _cidrBlock;
    m_cidrBlockHasBeenSet = true;
}

bool SubnetCreateInputInfo::CidrBlockHasBeenSet() const
{
    return m_cidrBlockHasBeenSet;
}

uint64_t SubnetCreateInputInfo::GetDistributedFlag() const
{
    return m_distributedFlag;
}

void SubnetCreateInputInfo::SetDistributedFlag(const uint64_t& _distributedFlag)
{
    m_distributedFlag = _distributedFlag;
    m_distributedFlagHasBeenSet = true;
}

bool SubnetCreateInputInfo::DistributedFlagHasBeenSet() const
{
    return m_distributedFlagHasBeenSet;
}

uint64_t SubnetCreateInputInfo::GetDhcpEnable() const
{
    return m_dhcpEnable;
}

void SubnetCreateInputInfo::SetDhcpEnable(const uint64_t& _dhcpEnable)
{
    m_dhcpEnable = _dhcpEnable;
    m_dhcpEnableHasBeenSet = true;
}

bool SubnetCreateInputInfo::DhcpEnableHasBeenSet() const
{
    return m_dhcpEnableHasBeenSet;
}

vector<string> SubnetCreateInputInfo::GetDhcpServerIp() const
{
    return m_dhcpServerIp;
}

void SubnetCreateInputInfo::SetDhcpServerIp(const vector<string>& _dhcpServerIp)
{
    m_dhcpServerIp = _dhcpServerIp;
    m_dhcpServerIpHasBeenSet = true;
}

bool SubnetCreateInputInfo::DhcpServerIpHasBeenSet() const
{
    return m_dhcpServerIpHasBeenSet;
}

uint64_t SubnetCreateInputInfo::GetIpReserve() const
{
    return m_ipReserve;
}

void SubnetCreateInputInfo::SetIpReserve(const uint64_t& _ipReserve)
{
    m_ipReserve = _ipReserve;
    m_ipReserveHasBeenSet = true;
}

bool SubnetCreateInputInfo::IpReserveHasBeenSet() const
{
    return m_ipReserveHasBeenSet;
}

uint64_t SubnetCreateInputInfo::GetVlanId() const
{
    return m_vlanId;
}

void SubnetCreateInputInfo::SetVlanId(const uint64_t& _vlanId)
{
    m_vlanId = _vlanId;
    m_vlanIdHasBeenSet = true;
}

bool SubnetCreateInputInfo::VlanIdHasBeenSet() const
{
    return m_vlanIdHasBeenSet;
}

string SubnetCreateInputInfo::GetZone() const
{
    return m_zone;
}

void SubnetCreateInputInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool SubnetCreateInputInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

uint64_t SubnetCreateInputInfo::GetIsSmartNic() const
{
    return m_isSmartNic;
}

void SubnetCreateInputInfo::SetIsSmartNic(const uint64_t& _isSmartNic)
{
    m_isSmartNic = _isSmartNic;
    m_isSmartNicHasBeenSet = true;
}

bool SubnetCreateInputInfo::IsSmartNicHasBeenSet() const
{
    return m_isSmartNicHasBeenSet;
}

