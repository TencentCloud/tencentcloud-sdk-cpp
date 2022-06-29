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

#include <tencentcloud/ecm/v20190719/model/NetworkInterface.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

NetworkInterface::NetworkInterface() :
    m_networkInterfaceIdHasBeenSet(false),
    m_networkInterfaceNameHasBeenSet(false),
    m_networkInterfaceDescriptionHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_groupSetHasBeenSet(false),
    m_primaryHasBeenSet(false),
    m_macAddressHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_privateIpAddressSetHasBeenSet(false),
    m_attachmentHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_ipv6AddressSetHasBeenSet(false),
    m_tagSetHasBeenSet(false),
    m_eniTypeHasBeenSet(false),
    m_ecmRegionHasBeenSet(false),
    m_businessHasBeenSet(false)
{
}

CoreInternalOutcome NetworkInterface::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NetworkInterfaceId") && !value["NetworkInterfaceId"].IsNull())
    {
        if (!value["NetworkInterfaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkInterface.NetworkInterfaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkInterfaceId = string(value["NetworkInterfaceId"].GetString());
        m_networkInterfaceIdHasBeenSet = true;
    }

    if (value.HasMember("NetworkInterfaceName") && !value["NetworkInterfaceName"].IsNull())
    {
        if (!value["NetworkInterfaceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkInterface.NetworkInterfaceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkInterfaceName = string(value["NetworkInterfaceName"].GetString());
        m_networkInterfaceNameHasBeenSet = true;
    }

    if (value.HasMember("NetworkInterfaceDescription") && !value["NetworkInterfaceDescription"].IsNull())
    {
        if (!value["NetworkInterfaceDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkInterface.NetworkInterfaceDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkInterfaceDescription = string(value["NetworkInterfaceDescription"].GetString());
        m_networkInterfaceDescriptionHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkInterface.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkInterface.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("GroupSet") && !value["GroupSet"].IsNull())
    {
        if (!value["GroupSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NetworkInterface.GroupSet` is not array type"));

        const rapidjson::Value &tmpValue = value["GroupSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_groupSet.push_back((*itr).GetString());
        }
        m_groupSetHasBeenSet = true;
    }

    if (value.HasMember("Primary") && !value["Primary"].IsNull())
    {
        if (!value["Primary"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkInterface.Primary` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_primary = value["Primary"].GetBool();
        m_primaryHasBeenSet = true;
    }

    if (value.HasMember("MacAddress") && !value["MacAddress"].IsNull())
    {
        if (!value["MacAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkInterface.MacAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_macAddress = string(value["MacAddress"].GetString());
        m_macAddressHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkInterface.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("PrivateIpAddressSet") && !value["PrivateIpAddressSet"].IsNull())
    {
        if (!value["PrivateIpAddressSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NetworkInterface.PrivateIpAddressSet` is not array type"));

        const rapidjson::Value &tmpValue = value["PrivateIpAddressSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PrivateIpAddressSpecification item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_privateIpAddressSet.push_back(item);
        }
        m_privateIpAddressSetHasBeenSet = true;
    }

    if (value.HasMember("Attachment") && !value["Attachment"].IsNull())
    {
        if (!value["Attachment"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkInterface.Attachment` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_attachment.Deserialize(value["Attachment"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_attachmentHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkInterface.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkInterface.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("Ipv6AddressSet") && !value["Ipv6AddressSet"].IsNull())
    {
        if (!value["Ipv6AddressSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NetworkInterface.Ipv6AddressSet` is not array type"));

        const rapidjson::Value &tmpValue = value["Ipv6AddressSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Ipv6Address item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ipv6AddressSet.push_back(item);
        }
        m_ipv6AddressSetHasBeenSet = true;
    }

    if (value.HasMember("TagSet") && !value["TagSet"].IsNull())
    {
        if (!value["TagSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NetworkInterface.TagSet` is not array type"));

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

    if (value.HasMember("EniType") && !value["EniType"].IsNull())
    {
        if (!value["EniType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkInterface.EniType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eniType = value["EniType"].GetUint64();
        m_eniTypeHasBeenSet = true;
    }

    if (value.HasMember("EcmRegion") && !value["EcmRegion"].IsNull())
    {
        if (!value["EcmRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkInterface.EcmRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ecmRegion = string(value["EcmRegion"].GetString());
        m_ecmRegionHasBeenSet = true;
    }

    if (value.HasMember("Business") && !value["Business"].IsNull())
    {
        if (!value["Business"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkInterface.Business` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_business = string(value["Business"].GetString());
        m_businessHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NetworkInterface::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_networkInterfaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkInterfaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkInterfaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_networkInterfaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkInterfaceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkInterfaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_networkInterfaceDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkInterfaceDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkInterfaceDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groupSet.begin(); itr != m_groupSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_primaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Primary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_primary, allocator);
    }

    if (m_macAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MacAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_macAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIpAddressSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIpAddressSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_privateIpAddressSet.begin(); itr != m_privateIpAddressSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_attachmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Attachment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_attachment.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_ipv6AddressSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6AddressSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ipv6AddressSet.begin(); itr != m_ipv6AddressSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

    if (m_eniTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EniType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eniType, allocator);
    }

    if (m_ecmRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EcmRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ecmRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_businessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Business";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_business.c_str(), allocator).Move(), allocator);
    }

}


string NetworkInterface::GetNetworkInterfaceId() const
{
    return m_networkInterfaceId;
}

void NetworkInterface::SetNetworkInterfaceId(const string& _networkInterfaceId)
{
    m_networkInterfaceId = _networkInterfaceId;
    m_networkInterfaceIdHasBeenSet = true;
}

bool NetworkInterface::NetworkInterfaceIdHasBeenSet() const
{
    return m_networkInterfaceIdHasBeenSet;
}

string NetworkInterface::GetNetworkInterfaceName() const
{
    return m_networkInterfaceName;
}

void NetworkInterface::SetNetworkInterfaceName(const string& _networkInterfaceName)
{
    m_networkInterfaceName = _networkInterfaceName;
    m_networkInterfaceNameHasBeenSet = true;
}

bool NetworkInterface::NetworkInterfaceNameHasBeenSet() const
{
    return m_networkInterfaceNameHasBeenSet;
}

string NetworkInterface::GetNetworkInterfaceDescription() const
{
    return m_networkInterfaceDescription;
}

void NetworkInterface::SetNetworkInterfaceDescription(const string& _networkInterfaceDescription)
{
    m_networkInterfaceDescription = _networkInterfaceDescription;
    m_networkInterfaceDescriptionHasBeenSet = true;
}

bool NetworkInterface::NetworkInterfaceDescriptionHasBeenSet() const
{
    return m_networkInterfaceDescriptionHasBeenSet;
}

string NetworkInterface::GetSubnetId() const
{
    return m_subnetId;
}

void NetworkInterface::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool NetworkInterface::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string NetworkInterface::GetVpcId() const
{
    return m_vpcId;
}

void NetworkInterface::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool NetworkInterface::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

vector<string> NetworkInterface::GetGroupSet() const
{
    return m_groupSet;
}

void NetworkInterface::SetGroupSet(const vector<string>& _groupSet)
{
    m_groupSet = _groupSet;
    m_groupSetHasBeenSet = true;
}

bool NetworkInterface::GroupSetHasBeenSet() const
{
    return m_groupSetHasBeenSet;
}

bool NetworkInterface::GetPrimary() const
{
    return m_primary;
}

void NetworkInterface::SetPrimary(const bool& _primary)
{
    m_primary = _primary;
    m_primaryHasBeenSet = true;
}

bool NetworkInterface::PrimaryHasBeenSet() const
{
    return m_primaryHasBeenSet;
}

string NetworkInterface::GetMacAddress() const
{
    return m_macAddress;
}

void NetworkInterface::SetMacAddress(const string& _macAddress)
{
    m_macAddress = _macAddress;
    m_macAddressHasBeenSet = true;
}

bool NetworkInterface::MacAddressHasBeenSet() const
{
    return m_macAddressHasBeenSet;
}

string NetworkInterface::GetState() const
{
    return m_state;
}

void NetworkInterface::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool NetworkInterface::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

vector<PrivateIpAddressSpecification> NetworkInterface::GetPrivateIpAddressSet() const
{
    return m_privateIpAddressSet;
}

void NetworkInterface::SetPrivateIpAddressSet(const vector<PrivateIpAddressSpecification>& _privateIpAddressSet)
{
    m_privateIpAddressSet = _privateIpAddressSet;
    m_privateIpAddressSetHasBeenSet = true;
}

bool NetworkInterface::PrivateIpAddressSetHasBeenSet() const
{
    return m_privateIpAddressSetHasBeenSet;
}

NetworkInterfaceAttachment NetworkInterface::GetAttachment() const
{
    return m_attachment;
}

void NetworkInterface::SetAttachment(const NetworkInterfaceAttachment& _attachment)
{
    m_attachment = _attachment;
    m_attachmentHasBeenSet = true;
}

bool NetworkInterface::AttachmentHasBeenSet() const
{
    return m_attachmentHasBeenSet;
}

string NetworkInterface::GetZone() const
{
    return m_zone;
}

void NetworkInterface::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool NetworkInterface::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string NetworkInterface::GetCreatedTime() const
{
    return m_createdTime;
}

void NetworkInterface::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool NetworkInterface::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

vector<Ipv6Address> NetworkInterface::GetIpv6AddressSet() const
{
    return m_ipv6AddressSet;
}

void NetworkInterface::SetIpv6AddressSet(const vector<Ipv6Address>& _ipv6AddressSet)
{
    m_ipv6AddressSet = _ipv6AddressSet;
    m_ipv6AddressSetHasBeenSet = true;
}

bool NetworkInterface::Ipv6AddressSetHasBeenSet() const
{
    return m_ipv6AddressSetHasBeenSet;
}

vector<Tag> NetworkInterface::GetTagSet() const
{
    return m_tagSet;
}

void NetworkInterface::SetTagSet(const vector<Tag>& _tagSet)
{
    m_tagSet = _tagSet;
    m_tagSetHasBeenSet = true;
}

bool NetworkInterface::TagSetHasBeenSet() const
{
    return m_tagSetHasBeenSet;
}

uint64_t NetworkInterface::GetEniType() const
{
    return m_eniType;
}

void NetworkInterface::SetEniType(const uint64_t& _eniType)
{
    m_eniType = _eniType;
    m_eniTypeHasBeenSet = true;
}

bool NetworkInterface::EniTypeHasBeenSet() const
{
    return m_eniTypeHasBeenSet;
}

string NetworkInterface::GetEcmRegion() const
{
    return m_ecmRegion;
}

void NetworkInterface::SetEcmRegion(const string& _ecmRegion)
{
    m_ecmRegion = _ecmRegion;
    m_ecmRegionHasBeenSet = true;
}

bool NetworkInterface::EcmRegionHasBeenSet() const
{
    return m_ecmRegionHasBeenSet;
}

string NetworkInterface::GetBusiness() const
{
    return m_business;
}

void NetworkInterface::SetBusiness(const string& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool NetworkInterface::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

