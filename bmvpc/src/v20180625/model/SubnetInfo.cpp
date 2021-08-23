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

#include <tencentcloud/bmvpc/v20180625/model/SubnetInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bmvpc::V20180625::Model;
using namespace std;

SubnetInfo::SubnetInfo() :
    m_vpcIdHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_vpcCidrBlockHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_subnetNameHasBeenSet(false),
    m_cidrBlockHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_cpmNumHasBeenSet(false),
    m_vlanIdHasBeenSet(false),
    m_distributedFlagHasBeenSet(false),
    m_dhcpEnableHasBeenSet(false),
    m_dhcpServerIpHasBeenSet(false),
    m_ipReserveHasBeenSet(false),
    m_availableIpNumHasBeenSet(false),
    m_totalIpNumHasBeenSet(false),
    m_subnetCreateTimeHasBeenSet(false),
    m_isSmartNicHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_vpcZoneIdHasBeenSet(false),
    m_vpcZoneHasBeenSet(false),
    m_broadcastFlagHasBeenSet(false)
{
}

CoreInternalOutcome SubnetInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetInfo.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("VpcCidrBlock") && !value["VpcCidrBlock"].IsNull())
    {
        if (!value["VpcCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetInfo.VpcCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcCidrBlock = string(value["VpcCidrBlock"].GetString());
        m_vpcCidrBlockHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetInfo.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetName") && !value["SubnetName"].IsNull())
    {
        if (!value["SubnetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetInfo.SubnetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetName = string(value["SubnetName"].GetString());
        m_subnetNameHasBeenSet = true;
    }

    if (value.HasMember("CidrBlock") && !value["CidrBlock"].IsNull())
    {
        if (!value["CidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetInfo.CidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cidrBlock = string(value["CidrBlock"].GetString());
        m_cidrBlockHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetInfo.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetInfo.ZoneId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetUint64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("CpmNum") && !value["CpmNum"].IsNull())
    {
        if (!value["CpmNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetInfo.CpmNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpmNum = value["CpmNum"].GetUint64();
        m_cpmNumHasBeenSet = true;
    }

    if (value.HasMember("VlanId") && !value["VlanId"].IsNull())
    {
        if (!value["VlanId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetInfo.VlanId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vlanId = value["VlanId"].GetUint64();
        m_vlanIdHasBeenSet = true;
    }

    if (value.HasMember("DistributedFlag") && !value["DistributedFlag"].IsNull())
    {
        if (!value["DistributedFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetInfo.DistributedFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_distributedFlag = value["DistributedFlag"].GetUint64();
        m_distributedFlagHasBeenSet = true;
    }

    if (value.HasMember("DhcpEnable") && !value["DhcpEnable"].IsNull())
    {
        if (!value["DhcpEnable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetInfo.DhcpEnable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dhcpEnable = value["DhcpEnable"].GetUint64();
        m_dhcpEnableHasBeenSet = true;
    }

    if (value.HasMember("DhcpServerIp") && !value["DhcpServerIp"].IsNull())
    {
        if (!value["DhcpServerIp"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SubnetInfo.DhcpServerIp` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `SubnetInfo.IpReserve` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ipReserve = value["IpReserve"].GetUint64();
        m_ipReserveHasBeenSet = true;
    }

    if (value.HasMember("AvailableIpNum") && !value["AvailableIpNum"].IsNull())
    {
        if (!value["AvailableIpNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetInfo.AvailableIpNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_availableIpNum = value["AvailableIpNum"].GetUint64();
        m_availableIpNumHasBeenSet = true;
    }

    if (value.HasMember("TotalIpNum") && !value["TotalIpNum"].IsNull())
    {
        if (!value["TotalIpNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetInfo.TotalIpNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalIpNum = value["TotalIpNum"].GetUint64();
        m_totalIpNumHasBeenSet = true;
    }

    if (value.HasMember("SubnetCreateTime") && !value["SubnetCreateTime"].IsNull())
    {
        if (!value["SubnetCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetInfo.SubnetCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetCreateTime = string(value["SubnetCreateTime"].GetString());
        m_subnetCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("IsSmartNic") && !value["IsSmartNic"].IsNull())
    {
        if (!value["IsSmartNic"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetInfo.IsSmartNic` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isSmartNic = value["IsSmartNic"].GetUint64();
        m_isSmartNicHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("VpcZoneId") && !value["VpcZoneId"].IsNull())
    {
        if (!value["VpcZoneId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetInfo.VpcZoneId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vpcZoneId = value["VpcZoneId"].GetUint64();
        m_vpcZoneIdHasBeenSet = true;
    }

    if (value.HasMember("VpcZone") && !value["VpcZone"].IsNull())
    {
        if (!value["VpcZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetInfo.VpcZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcZone = string(value["VpcZone"].GetString());
        m_vpcZoneHasBeenSet = true;
    }

    if (value.HasMember("BroadcastFlag") && !value["BroadcastFlag"].IsNull())
    {
        if (!value["BroadcastFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetInfo.BroadcastFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_broadcastFlag = value["BroadcastFlag"].GetUint64();
        m_broadcastFlagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubnetInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_cidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_cpmNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpmNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpmNum, allocator);
    }

    if (m_vlanIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VlanId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vlanId, allocator);
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

    if (m_availableIpNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableIpNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_availableIpNum, allocator);
    }

    if (m_totalIpNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalIpNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalIpNum, allocator);
    }

    if (m_subnetCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isSmartNicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSmartNic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSmartNic, allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcZoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vpcZoneId, allocator);
    }

    if (m_vpcZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcZone.c_str(), allocator).Move(), allocator);
    }

    if (m_broadcastFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BroadcastFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_broadcastFlag, allocator);
    }

}


string SubnetInfo::GetVpcId() const
{
    return m_vpcId;
}

void SubnetInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool SubnetInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string SubnetInfo::GetVpcName() const
{
    return m_vpcName;
}

void SubnetInfo::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool SubnetInfo::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

string SubnetInfo::GetVpcCidrBlock() const
{
    return m_vpcCidrBlock;
}

void SubnetInfo::SetVpcCidrBlock(const string& _vpcCidrBlock)
{
    m_vpcCidrBlock = _vpcCidrBlock;
    m_vpcCidrBlockHasBeenSet = true;
}

bool SubnetInfo::VpcCidrBlockHasBeenSet() const
{
    return m_vpcCidrBlockHasBeenSet;
}

string SubnetInfo::GetSubnetId() const
{
    return m_subnetId;
}

void SubnetInfo::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool SubnetInfo::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string SubnetInfo::GetSubnetName() const
{
    return m_subnetName;
}

void SubnetInfo::SetSubnetName(const string& _subnetName)
{
    m_subnetName = _subnetName;
    m_subnetNameHasBeenSet = true;
}

bool SubnetInfo::SubnetNameHasBeenSet() const
{
    return m_subnetNameHasBeenSet;
}

string SubnetInfo::GetCidrBlock() const
{
    return m_cidrBlock;
}

void SubnetInfo::SetCidrBlock(const string& _cidrBlock)
{
    m_cidrBlock = _cidrBlock;
    m_cidrBlockHasBeenSet = true;
}

bool SubnetInfo::CidrBlockHasBeenSet() const
{
    return m_cidrBlockHasBeenSet;
}

uint64_t SubnetInfo::GetType() const
{
    return m_type;
}

void SubnetInfo::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool SubnetInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t SubnetInfo::GetZoneId() const
{
    return m_zoneId;
}

void SubnetInfo::SetZoneId(const uint64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool SubnetInfo::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

uint64_t SubnetInfo::GetCpmNum() const
{
    return m_cpmNum;
}

void SubnetInfo::SetCpmNum(const uint64_t& _cpmNum)
{
    m_cpmNum = _cpmNum;
    m_cpmNumHasBeenSet = true;
}

bool SubnetInfo::CpmNumHasBeenSet() const
{
    return m_cpmNumHasBeenSet;
}

uint64_t SubnetInfo::GetVlanId() const
{
    return m_vlanId;
}

void SubnetInfo::SetVlanId(const uint64_t& _vlanId)
{
    m_vlanId = _vlanId;
    m_vlanIdHasBeenSet = true;
}

bool SubnetInfo::VlanIdHasBeenSet() const
{
    return m_vlanIdHasBeenSet;
}

uint64_t SubnetInfo::GetDistributedFlag() const
{
    return m_distributedFlag;
}

void SubnetInfo::SetDistributedFlag(const uint64_t& _distributedFlag)
{
    m_distributedFlag = _distributedFlag;
    m_distributedFlagHasBeenSet = true;
}

bool SubnetInfo::DistributedFlagHasBeenSet() const
{
    return m_distributedFlagHasBeenSet;
}

uint64_t SubnetInfo::GetDhcpEnable() const
{
    return m_dhcpEnable;
}

void SubnetInfo::SetDhcpEnable(const uint64_t& _dhcpEnable)
{
    m_dhcpEnable = _dhcpEnable;
    m_dhcpEnableHasBeenSet = true;
}

bool SubnetInfo::DhcpEnableHasBeenSet() const
{
    return m_dhcpEnableHasBeenSet;
}

vector<string> SubnetInfo::GetDhcpServerIp() const
{
    return m_dhcpServerIp;
}

void SubnetInfo::SetDhcpServerIp(const vector<string>& _dhcpServerIp)
{
    m_dhcpServerIp = _dhcpServerIp;
    m_dhcpServerIpHasBeenSet = true;
}

bool SubnetInfo::DhcpServerIpHasBeenSet() const
{
    return m_dhcpServerIpHasBeenSet;
}

uint64_t SubnetInfo::GetIpReserve() const
{
    return m_ipReserve;
}

void SubnetInfo::SetIpReserve(const uint64_t& _ipReserve)
{
    m_ipReserve = _ipReserve;
    m_ipReserveHasBeenSet = true;
}

bool SubnetInfo::IpReserveHasBeenSet() const
{
    return m_ipReserveHasBeenSet;
}

uint64_t SubnetInfo::GetAvailableIpNum() const
{
    return m_availableIpNum;
}

void SubnetInfo::SetAvailableIpNum(const uint64_t& _availableIpNum)
{
    m_availableIpNum = _availableIpNum;
    m_availableIpNumHasBeenSet = true;
}

bool SubnetInfo::AvailableIpNumHasBeenSet() const
{
    return m_availableIpNumHasBeenSet;
}

uint64_t SubnetInfo::GetTotalIpNum() const
{
    return m_totalIpNum;
}

void SubnetInfo::SetTotalIpNum(const uint64_t& _totalIpNum)
{
    m_totalIpNum = _totalIpNum;
    m_totalIpNumHasBeenSet = true;
}

bool SubnetInfo::TotalIpNumHasBeenSet() const
{
    return m_totalIpNumHasBeenSet;
}

string SubnetInfo::GetSubnetCreateTime() const
{
    return m_subnetCreateTime;
}

void SubnetInfo::SetSubnetCreateTime(const string& _subnetCreateTime)
{
    m_subnetCreateTime = _subnetCreateTime;
    m_subnetCreateTimeHasBeenSet = true;
}

bool SubnetInfo::SubnetCreateTimeHasBeenSet() const
{
    return m_subnetCreateTimeHasBeenSet;
}

uint64_t SubnetInfo::GetIsSmartNic() const
{
    return m_isSmartNic;
}

void SubnetInfo::SetIsSmartNic(const uint64_t& _isSmartNic)
{
    m_isSmartNic = _isSmartNic;
    m_isSmartNicHasBeenSet = true;
}

bool SubnetInfo::IsSmartNicHasBeenSet() const
{
    return m_isSmartNicHasBeenSet;
}

string SubnetInfo::GetZone() const
{
    return m_zone;
}

void SubnetInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool SubnetInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

uint64_t SubnetInfo::GetVpcZoneId() const
{
    return m_vpcZoneId;
}

void SubnetInfo::SetVpcZoneId(const uint64_t& _vpcZoneId)
{
    m_vpcZoneId = _vpcZoneId;
    m_vpcZoneIdHasBeenSet = true;
}

bool SubnetInfo::VpcZoneIdHasBeenSet() const
{
    return m_vpcZoneIdHasBeenSet;
}

string SubnetInfo::GetVpcZone() const
{
    return m_vpcZone;
}

void SubnetInfo::SetVpcZone(const string& _vpcZone)
{
    m_vpcZone = _vpcZone;
    m_vpcZoneHasBeenSet = true;
}

bool SubnetInfo::VpcZoneHasBeenSet() const
{
    return m_vpcZoneHasBeenSet;
}

uint64_t SubnetInfo::GetBroadcastFlag() const
{
    return m_broadcastFlag;
}

void SubnetInfo::SetBroadcastFlag(const uint64_t& _broadcastFlag)
{
    m_broadcastFlag = _broadcastFlag;
    m_broadcastFlagHasBeenSet = true;
}

bool SubnetInfo::BroadcastFlagHasBeenSet() const
{
    return m_broadcastFlagHasBeenSet;
}

