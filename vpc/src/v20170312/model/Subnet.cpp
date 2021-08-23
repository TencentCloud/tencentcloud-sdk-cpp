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

#include <tencentcloud/vpc/v20170312/model/Subnet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

Subnet::Subnet() :
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_subnetNameHasBeenSet(false),
    m_cidrBlockHasBeenSet(false),
    m_isDefaultHasBeenSet(false),
    m_enableBroadcastHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_routeTableIdHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_availableIpAddressCountHasBeenSet(false),
    m_ipv6CidrBlockHasBeenSet(false),
    m_networkAclIdHasBeenSet(false),
    m_isRemoteVpcSnatHasBeenSet(false),
    m_totalIpAddressCountHasBeenSet(false),
    m_tagSetHasBeenSet(false),
    m_cdcIdHasBeenSet(false),
    m_isCdcSubnetHasBeenSet(false)
{
}

CoreInternalOutcome Subnet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Subnet.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Subnet.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetName") && !value["SubnetName"].IsNull())
    {
        if (!value["SubnetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Subnet.SubnetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetName = string(value["SubnetName"].GetString());
        m_subnetNameHasBeenSet = true;
    }

    if (value.HasMember("CidrBlock") && !value["CidrBlock"].IsNull())
    {
        if (!value["CidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Subnet.CidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cidrBlock = string(value["CidrBlock"].GetString());
        m_cidrBlockHasBeenSet = true;
    }

    if (value.HasMember("IsDefault") && !value["IsDefault"].IsNull())
    {
        if (!value["IsDefault"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Subnet.IsDefault` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDefault = value["IsDefault"].GetBool();
        m_isDefaultHasBeenSet = true;
    }

    if (value.HasMember("EnableBroadcast") && !value["EnableBroadcast"].IsNull())
    {
        if (!value["EnableBroadcast"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Subnet.EnableBroadcast` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableBroadcast = value["EnableBroadcast"].GetBool();
        m_enableBroadcastHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Subnet.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("RouteTableId") && !value["RouteTableId"].IsNull())
    {
        if (!value["RouteTableId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Subnet.RouteTableId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeTableId = string(value["RouteTableId"].GetString());
        m_routeTableIdHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Subnet.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("AvailableIpAddressCount") && !value["AvailableIpAddressCount"].IsNull())
    {
        if (!value["AvailableIpAddressCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Subnet.AvailableIpAddressCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_availableIpAddressCount = value["AvailableIpAddressCount"].GetUint64();
        m_availableIpAddressCountHasBeenSet = true;
    }

    if (value.HasMember("Ipv6CidrBlock") && !value["Ipv6CidrBlock"].IsNull())
    {
        if (!value["Ipv6CidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Subnet.Ipv6CidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipv6CidrBlock = string(value["Ipv6CidrBlock"].GetString());
        m_ipv6CidrBlockHasBeenSet = true;
    }

    if (value.HasMember("NetworkAclId") && !value["NetworkAclId"].IsNull())
    {
        if (!value["NetworkAclId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Subnet.NetworkAclId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkAclId = string(value["NetworkAclId"].GetString());
        m_networkAclIdHasBeenSet = true;
    }

    if (value.HasMember("IsRemoteVpcSnat") && !value["IsRemoteVpcSnat"].IsNull())
    {
        if (!value["IsRemoteVpcSnat"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Subnet.IsRemoteVpcSnat` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isRemoteVpcSnat = value["IsRemoteVpcSnat"].GetBool();
        m_isRemoteVpcSnatHasBeenSet = true;
    }

    if (value.HasMember("TotalIpAddressCount") && !value["TotalIpAddressCount"].IsNull())
    {
        if (!value["TotalIpAddressCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Subnet.TotalIpAddressCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalIpAddressCount = value["TotalIpAddressCount"].GetUint64();
        m_totalIpAddressCountHasBeenSet = true;
    }

    if (value.HasMember("TagSet") && !value["TagSet"].IsNull())
    {
        if (!value["TagSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Subnet.TagSet` is not array type"));

        const rapidjson::Value &tmpValue = value["TagSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagSet.push_back(item);
        }
        m_tagSetHasBeenSet = true;
    }

    if (value.HasMember("CdcId") && !value["CdcId"].IsNull())
    {
        if (!value["CdcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Subnet.CdcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cdcId = string(value["CdcId"].GetString());
        m_cdcIdHasBeenSet = true;
    }

    if (value.HasMember("IsCdcSubnet") && !value["IsCdcSubnet"].IsNull())
    {
        if (!value["IsCdcSubnet"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Subnet.IsCdcSubnet` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isCdcSubnet = value["IsCdcSubnet"].GetInt64();
        m_isCdcSubnetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Subnet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_isDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefault, allocator);
    }

    if (m_enableBroadcastHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableBroadcast";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableBroadcast, allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_routeTableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteTableId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routeTableId.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_availableIpAddressCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableIpAddressCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_availableIpAddressCount, allocator);
    }

    if (m_ipv6CidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6CidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipv6CidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_networkAclIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkAclId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkAclId.c_str(), allocator).Move(), allocator);
    }

    if (m_isRemoteVpcSnatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRemoteVpcSnat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRemoteVpcSnat, allocator);
    }

    if (m_totalIpAddressCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalIpAddressCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalIpAddressCount, allocator);
    }

    if (m_tagSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagSet.begin(); itr != m_tagSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cdcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cdcId.c_str(), allocator).Move(), allocator);
    }

    if (m_isCdcSubnetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCdcSubnet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCdcSubnet, allocator);
    }

}


string Subnet::GetVpcId() const
{
    return m_vpcId;
}

void Subnet::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool Subnet::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string Subnet::GetSubnetId() const
{
    return m_subnetId;
}

void Subnet::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool Subnet::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string Subnet::GetSubnetName() const
{
    return m_subnetName;
}

void Subnet::SetSubnetName(const string& _subnetName)
{
    m_subnetName = _subnetName;
    m_subnetNameHasBeenSet = true;
}

bool Subnet::SubnetNameHasBeenSet() const
{
    return m_subnetNameHasBeenSet;
}

string Subnet::GetCidrBlock() const
{
    return m_cidrBlock;
}

void Subnet::SetCidrBlock(const string& _cidrBlock)
{
    m_cidrBlock = _cidrBlock;
    m_cidrBlockHasBeenSet = true;
}

bool Subnet::CidrBlockHasBeenSet() const
{
    return m_cidrBlockHasBeenSet;
}

bool Subnet::GetIsDefault() const
{
    return m_isDefault;
}

void Subnet::SetIsDefault(const bool& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool Subnet::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

bool Subnet::GetEnableBroadcast() const
{
    return m_enableBroadcast;
}

void Subnet::SetEnableBroadcast(const bool& _enableBroadcast)
{
    m_enableBroadcast = _enableBroadcast;
    m_enableBroadcastHasBeenSet = true;
}

bool Subnet::EnableBroadcastHasBeenSet() const
{
    return m_enableBroadcastHasBeenSet;
}

string Subnet::GetZone() const
{
    return m_zone;
}

void Subnet::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool Subnet::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string Subnet::GetRouteTableId() const
{
    return m_routeTableId;
}

void Subnet::SetRouteTableId(const string& _routeTableId)
{
    m_routeTableId = _routeTableId;
    m_routeTableIdHasBeenSet = true;
}

bool Subnet::RouteTableIdHasBeenSet() const
{
    return m_routeTableIdHasBeenSet;
}

string Subnet::GetCreatedTime() const
{
    return m_createdTime;
}

void Subnet::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool Subnet::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

uint64_t Subnet::GetAvailableIpAddressCount() const
{
    return m_availableIpAddressCount;
}

void Subnet::SetAvailableIpAddressCount(const uint64_t& _availableIpAddressCount)
{
    m_availableIpAddressCount = _availableIpAddressCount;
    m_availableIpAddressCountHasBeenSet = true;
}

bool Subnet::AvailableIpAddressCountHasBeenSet() const
{
    return m_availableIpAddressCountHasBeenSet;
}

string Subnet::GetIpv6CidrBlock() const
{
    return m_ipv6CidrBlock;
}

void Subnet::SetIpv6CidrBlock(const string& _ipv6CidrBlock)
{
    m_ipv6CidrBlock = _ipv6CidrBlock;
    m_ipv6CidrBlockHasBeenSet = true;
}

bool Subnet::Ipv6CidrBlockHasBeenSet() const
{
    return m_ipv6CidrBlockHasBeenSet;
}

string Subnet::GetNetworkAclId() const
{
    return m_networkAclId;
}

void Subnet::SetNetworkAclId(const string& _networkAclId)
{
    m_networkAclId = _networkAclId;
    m_networkAclIdHasBeenSet = true;
}

bool Subnet::NetworkAclIdHasBeenSet() const
{
    return m_networkAclIdHasBeenSet;
}

bool Subnet::GetIsRemoteVpcSnat() const
{
    return m_isRemoteVpcSnat;
}

void Subnet::SetIsRemoteVpcSnat(const bool& _isRemoteVpcSnat)
{
    m_isRemoteVpcSnat = _isRemoteVpcSnat;
    m_isRemoteVpcSnatHasBeenSet = true;
}

bool Subnet::IsRemoteVpcSnatHasBeenSet() const
{
    return m_isRemoteVpcSnatHasBeenSet;
}

uint64_t Subnet::GetTotalIpAddressCount() const
{
    return m_totalIpAddressCount;
}

void Subnet::SetTotalIpAddressCount(const uint64_t& _totalIpAddressCount)
{
    m_totalIpAddressCount = _totalIpAddressCount;
    m_totalIpAddressCountHasBeenSet = true;
}

bool Subnet::TotalIpAddressCountHasBeenSet() const
{
    return m_totalIpAddressCountHasBeenSet;
}

vector<Tag> Subnet::GetTagSet() const
{
    return m_tagSet;
}

void Subnet::SetTagSet(const vector<Tag>& _tagSet)
{
    m_tagSet = _tagSet;
    m_tagSetHasBeenSet = true;
}

bool Subnet::TagSetHasBeenSet() const
{
    return m_tagSetHasBeenSet;
}

string Subnet::GetCdcId() const
{
    return m_cdcId;
}

void Subnet::SetCdcId(const string& _cdcId)
{
    m_cdcId = _cdcId;
    m_cdcIdHasBeenSet = true;
}

bool Subnet::CdcIdHasBeenSet() const
{
    return m_cdcIdHasBeenSet;
}

int64_t Subnet::GetIsCdcSubnet() const
{
    return m_isCdcSubnet;
}

void Subnet::SetIsCdcSubnet(const int64_t& _isCdcSubnet)
{
    m_isCdcSubnet = _isCdcSubnet;
    m_isCdcSubnetHasBeenSet = true;
}

bool Subnet::IsCdcSubnetHasBeenSet() const
{
    return m_isCdcSubnetHasBeenSet;
}

