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

#include <tencentcloud/vpc/v20170312/model/DhcpIp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace rapidjson;
using namespace std;

DhcpIp::DhcpIp() :
    m_dhcpIpIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_dhcpIpNameHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false),
    m_addressIpHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
}

CoreInternalOutcome DhcpIp::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("DhcpIpId") && !value["DhcpIpId"].IsNull())
    {
        if (!value["DhcpIpId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DhcpIp.DhcpIpId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dhcpIpId = string(value["DhcpIpId"].GetString());
        m_dhcpIpIdHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DhcpIp.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DhcpIp.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("DhcpIpName") && !value["DhcpIpName"].IsNull())
    {
        if (!value["DhcpIpName"].IsString())
        {
            return CoreInternalOutcome(Error("response `DhcpIp.DhcpIpName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dhcpIpName = string(value["DhcpIpName"].GetString());
        m_dhcpIpNameHasBeenSet = true;
    }

    if (value.HasMember("PrivateIpAddress") && !value["PrivateIpAddress"].IsNull())
    {
        if (!value["PrivateIpAddress"].IsString())
        {
            return CoreInternalOutcome(Error("response `DhcpIp.PrivateIpAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIpAddress = string(value["PrivateIpAddress"].GetString());
        m_privateIpAddressHasBeenSet = true;
    }

    if (value.HasMember("AddressIp") && !value["AddressIp"].IsNull())
    {
        if (!value["AddressIp"].IsString())
        {
            return CoreInternalOutcome(Error("response `DhcpIp.AddressIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressIp = string(value["AddressIp"].GetString());
        m_addressIpHasBeenSet = true;
    }

    if (value.HasMember("NetworkInterfaceId") && !value["NetworkInterfaceId"].IsNull())
    {
        if (!value["NetworkInterfaceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DhcpIp.NetworkInterfaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkInterfaceId = string(value["NetworkInterfaceId"].GetString());
        m_networkInterfaceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DhcpIp.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Error("response `DhcpIp.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `DhcpIp.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DhcpIp::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_dhcpIpIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DhcpIpId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_dhcpIpId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_dhcpIpNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DhcpIpName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_dhcpIpName.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIpAddressHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PrivateIpAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_privateIpAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_addressIpHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AddressIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_addressIp.c_str(), allocator).Move(), allocator);
    }

    if (m_networkInterfaceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NetworkInterfaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_networkInterfaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

}


string DhcpIp::GetDhcpIpId() const
{
    return m_dhcpIpId;
}

void DhcpIp::SetDhcpIpId(const string& _dhcpIpId)
{
    m_dhcpIpId = _dhcpIpId;
    m_dhcpIpIdHasBeenSet = true;
}

bool DhcpIp::DhcpIpIdHasBeenSet() const
{
    return m_dhcpIpIdHasBeenSet;
}

string DhcpIp::GetVpcId() const
{
    return m_vpcId;
}

void DhcpIp::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool DhcpIp::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string DhcpIp::GetSubnetId() const
{
    return m_subnetId;
}

void DhcpIp::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool DhcpIp::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string DhcpIp::GetDhcpIpName() const
{
    return m_dhcpIpName;
}

void DhcpIp::SetDhcpIpName(const string& _dhcpIpName)
{
    m_dhcpIpName = _dhcpIpName;
    m_dhcpIpNameHasBeenSet = true;
}

bool DhcpIp::DhcpIpNameHasBeenSet() const
{
    return m_dhcpIpNameHasBeenSet;
}

string DhcpIp::GetPrivateIpAddress() const
{
    return m_privateIpAddress;
}

void DhcpIp::SetPrivateIpAddress(const string& _privateIpAddress)
{
    m_privateIpAddress = _privateIpAddress;
    m_privateIpAddressHasBeenSet = true;
}

bool DhcpIp::PrivateIpAddressHasBeenSet() const
{
    return m_privateIpAddressHasBeenSet;
}

string DhcpIp::GetAddressIp() const
{
    return m_addressIp;
}

void DhcpIp::SetAddressIp(const string& _addressIp)
{
    m_addressIp = _addressIp;
    m_addressIpHasBeenSet = true;
}

bool DhcpIp::AddressIpHasBeenSet() const
{
    return m_addressIpHasBeenSet;
}

string DhcpIp::GetNetworkInterfaceId() const
{
    return m_networkInterfaceId;
}

void DhcpIp::SetNetworkInterfaceId(const string& _networkInterfaceId)
{
    m_networkInterfaceId = _networkInterfaceId;
    m_networkInterfaceIdHasBeenSet = true;
}

bool DhcpIp::NetworkInterfaceIdHasBeenSet() const
{
    return m_networkInterfaceIdHasBeenSet;
}

string DhcpIp::GetInstanceId() const
{
    return m_instanceId;
}

void DhcpIp::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DhcpIp::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DhcpIp::GetState() const
{
    return m_state;
}

void DhcpIp::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool DhcpIp::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string DhcpIp::GetCreatedTime() const
{
    return m_createdTime;
}

void DhcpIp::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool DhcpIp::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

