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

#include <tencentcloud/vpc/v20170312/model/NetworkInterface.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace rapidjson;
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
    m_eniTypeHasBeenSet(false)
{
}

CoreInternalOutcome NetworkInterface::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("NetworkInterfaceId") && !value["NetworkInterfaceId"].IsNull())
    {
        if (!value["NetworkInterfaceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `NetworkInterface.NetworkInterfaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkInterfaceId = string(value["NetworkInterfaceId"].GetString());
        m_networkInterfaceIdHasBeenSet = true;
    }

    if (value.HasMember("NetworkInterfaceName") && !value["NetworkInterfaceName"].IsNull())
    {
        if (!value["NetworkInterfaceName"].IsString())
        {
            return CoreInternalOutcome(Error("response `NetworkInterface.NetworkInterfaceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkInterfaceName = string(value["NetworkInterfaceName"].GetString());
        m_networkInterfaceNameHasBeenSet = true;
    }

    if (value.HasMember("NetworkInterfaceDescription") && !value["NetworkInterfaceDescription"].IsNull())
    {
        if (!value["NetworkInterfaceDescription"].IsString())
        {
            return CoreInternalOutcome(Error("response `NetworkInterface.NetworkInterfaceDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkInterfaceDescription = string(value["NetworkInterfaceDescription"].GetString());
        m_networkInterfaceDescriptionHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Error("response `NetworkInterface.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Error("response `NetworkInterface.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("GroupSet") && !value["GroupSet"].IsNull())
    {
        if (!value["GroupSet"].IsArray())
            return CoreInternalOutcome(Error("response `NetworkInterface.GroupSet` is not array type"));

        const Value &tmpValue = value["GroupSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_groupSet.push_back((*itr).GetString());
        }
        m_groupSetHasBeenSet = true;
    }

    if (value.HasMember("Primary") && !value["Primary"].IsNull())
    {
        if (!value["Primary"].IsBool())
        {
            return CoreInternalOutcome(Error("response `NetworkInterface.Primary` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_primary = value["Primary"].GetBool();
        m_primaryHasBeenSet = true;
    }

    if (value.HasMember("MacAddress") && !value["MacAddress"].IsNull())
    {
        if (!value["MacAddress"].IsString())
        {
            return CoreInternalOutcome(Error("response `NetworkInterface.MacAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_macAddress = string(value["MacAddress"].GetString());
        m_macAddressHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Error("response `NetworkInterface.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("PrivateIpAddressSet") && !value["PrivateIpAddressSet"].IsNull())
    {
        if (!value["PrivateIpAddressSet"].IsArray())
            return CoreInternalOutcome(Error("response `NetworkInterface.PrivateIpAddressSet` is not array type"));

        const Value &tmpValue = value["PrivateIpAddressSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Error("response `NetworkInterface.Attachment` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `NetworkInterface.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `NetworkInterface.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("Ipv6AddressSet") && !value["Ipv6AddressSet"].IsNull())
    {
        if (!value["Ipv6AddressSet"].IsArray())
            return CoreInternalOutcome(Error("response `NetworkInterface.Ipv6AddressSet` is not array type"));

        const Value &tmpValue = value["Ipv6AddressSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Error("response `NetworkInterface.TagSet` is not array type"));

        const Value &tmpValue = value["TagSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Error("response `NetworkInterface.EniType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eniType = value["EniType"].GetUint64();
        m_eniTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NetworkInterface::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_networkInterfaceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NetworkInterfaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_networkInterfaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_networkInterfaceNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NetworkInterfaceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_networkInterfaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_networkInterfaceDescriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NetworkInterfaceDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_networkInterfaceDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_groupSet.begin(); itr != m_groupSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_primaryHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Primary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_primary, allocator);
    }

    if (m_macAddressHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MacAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_macAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIpAddressSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PrivateIpAddressSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_privateIpAddressSet.begin(); itr != m_privateIpAddressSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_attachmentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Attachment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_attachment.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_zoneHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_ipv6AddressSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Ipv6AddressSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ipv6AddressSet.begin(); itr != m_ipv6AddressSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tagSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TagSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagSet.begin(); itr != m_tagSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_eniTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EniType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eniType, allocator);
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

