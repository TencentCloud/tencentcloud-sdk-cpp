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

#include <tencentcloud/cvm/v20170312/model/NetworkInterfaces.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

NetworkInterfaces::NetworkInterfaces() :
    m_interfaceTypeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_privateIpv4AddressCountHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_deleteWithInstanceHasBeenSet(false)
{
}

CoreInternalOutcome NetworkInterfaces::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InterfaceType") && !value["InterfaceType"].IsNull())
    {
        if (!value["InterfaceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkInterfaces.InterfaceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_interfaceType = string(value["InterfaceType"].GetString());
        m_interfaceTypeHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkInterfaces.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkInterfaces.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("PrivateIpv4AddressCount") && !value["PrivateIpv4AddressCount"].IsNull())
    {
        if (!value["PrivateIpv4AddressCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkInterfaces.PrivateIpv4AddressCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_privateIpv4AddressCount = value["PrivateIpv4AddressCount"].GetInt64();
        m_privateIpv4AddressCountHasBeenSet = true;
    }

    if (value.HasMember("NetworkInterfaceId") && !value["NetworkInterfaceId"].IsNull())
    {
        if (!value["NetworkInterfaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkInterfaces.NetworkInterfaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkInterfaceId = string(value["NetworkInterfaceId"].GetString());
        m_networkInterfaceIdHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroupIds") && !value["SecurityGroupIds"].IsNull())
    {
        if (!value["SecurityGroupIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NetworkInterfaces.SecurityGroupIds` is not array type"));

        const rapidjson::Value &tmpValue = value["SecurityGroupIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_securityGroupIds.push_back((*itr).GetString());
        }
        m_securityGroupIdsHasBeenSet = true;
    }

    if (value.HasMember("DeleteWithInstance") && !value["DeleteWithInstance"].IsNull())
    {
        if (!value["DeleteWithInstance"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkInterfaces.DeleteWithInstance` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deleteWithInstance = value["DeleteWithInstance"].GetBool();
        m_deleteWithInstanceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NetworkInterfaces::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_interfaceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InterfaceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_interfaceType.c_str(), allocator).Move(), allocator);
    }

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

    if (m_privateIpv4AddressCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIpv4AddressCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_privateIpv4AddressCount, allocator);
    }

    if (m_networkInterfaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkInterfaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkInterfaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroupIds.begin(); itr != m_securityGroupIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_deleteWithInstanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteWithInstance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deleteWithInstance, allocator);
    }

}


string NetworkInterfaces::GetInterfaceType() const
{
    return m_interfaceType;
}

void NetworkInterfaces::SetInterfaceType(const string& _interfaceType)
{
    m_interfaceType = _interfaceType;
    m_interfaceTypeHasBeenSet = true;
}

bool NetworkInterfaces::InterfaceTypeHasBeenSet() const
{
    return m_interfaceTypeHasBeenSet;
}

string NetworkInterfaces::GetVpcId() const
{
    return m_vpcId;
}

void NetworkInterfaces::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool NetworkInterfaces::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string NetworkInterfaces::GetSubnetId() const
{
    return m_subnetId;
}

void NetworkInterfaces::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool NetworkInterfaces::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

int64_t NetworkInterfaces::GetPrivateIpv4AddressCount() const
{
    return m_privateIpv4AddressCount;
}

void NetworkInterfaces::SetPrivateIpv4AddressCount(const int64_t& _privateIpv4AddressCount)
{
    m_privateIpv4AddressCount = _privateIpv4AddressCount;
    m_privateIpv4AddressCountHasBeenSet = true;
}

bool NetworkInterfaces::PrivateIpv4AddressCountHasBeenSet() const
{
    return m_privateIpv4AddressCountHasBeenSet;
}

string NetworkInterfaces::GetNetworkInterfaceId() const
{
    return m_networkInterfaceId;
}

void NetworkInterfaces::SetNetworkInterfaceId(const string& _networkInterfaceId)
{
    m_networkInterfaceId = _networkInterfaceId;
    m_networkInterfaceIdHasBeenSet = true;
}

bool NetworkInterfaces::NetworkInterfaceIdHasBeenSet() const
{
    return m_networkInterfaceIdHasBeenSet;
}

vector<string> NetworkInterfaces::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void NetworkInterfaces::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool NetworkInterfaces::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

bool NetworkInterfaces::GetDeleteWithInstance() const
{
    return m_deleteWithInstance;
}

void NetworkInterfaces::SetDeleteWithInstance(const bool& _deleteWithInstance)
{
    m_deleteWithInstance = _deleteWithInstance;
    m_deleteWithInstanceHasBeenSet = true;
}

bool NetworkInterfaces::DeleteWithInstanceHasBeenSet() const
{
    return m_deleteWithInstanceHasBeenSet;
}

