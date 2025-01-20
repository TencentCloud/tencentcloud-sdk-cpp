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

#include <tencentcloud/vpc/v20170312/model/NetworkAcl.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

NetworkAcl::NetworkAcl() :
    m_vpcIdHasBeenSet(false),
    m_networkAclIdHasBeenSet(false),
    m_networkAclNameHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_subnetSetHasBeenSet(false),
    m_ingressEntriesHasBeenSet(false),
    m_egressEntriesHasBeenSet(false),
    m_networkAclTypeHasBeenSet(false),
    m_tagSetHasBeenSet(false)
{
}

CoreInternalOutcome NetworkAcl::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkAcl.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("NetworkAclId") && !value["NetworkAclId"].IsNull())
    {
        if (!value["NetworkAclId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkAcl.NetworkAclId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkAclId = string(value["NetworkAclId"].GetString());
        m_networkAclIdHasBeenSet = true;
    }

    if (value.HasMember("NetworkAclName") && !value["NetworkAclName"].IsNull())
    {
        if (!value["NetworkAclName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkAcl.NetworkAclName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkAclName = string(value["NetworkAclName"].GetString());
        m_networkAclNameHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkAcl.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("SubnetSet") && !value["SubnetSet"].IsNull())
    {
        if (!value["SubnetSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NetworkAcl.SubnetSet` is not array type"));

        const rapidjson::Value &tmpValue = value["SubnetSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Subnet item;
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

    if (value.HasMember("IngressEntries") && !value["IngressEntries"].IsNull())
    {
        if (!value["IngressEntries"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NetworkAcl.IngressEntries` is not array type"));

        const rapidjson::Value &tmpValue = value["IngressEntries"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NetworkAclEntry item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ingressEntries.push_back(item);
        }
        m_ingressEntriesHasBeenSet = true;
    }

    if (value.HasMember("EgressEntries") && !value["EgressEntries"].IsNull())
    {
        if (!value["EgressEntries"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NetworkAcl.EgressEntries` is not array type"));

        const rapidjson::Value &tmpValue = value["EgressEntries"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NetworkAclEntry item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_egressEntries.push_back(item);
        }
        m_egressEntriesHasBeenSet = true;
    }

    if (value.HasMember("NetworkAclType") && !value["NetworkAclType"].IsNull())
    {
        if (!value["NetworkAclType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkAcl.NetworkAclType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkAclType = string(value["NetworkAclType"].GetString());
        m_networkAclTypeHasBeenSet = true;
    }

    if (value.HasMember("TagSet") && !value["TagSet"].IsNull())
    {
        if (!value["TagSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NetworkAcl.TagSet` is not array type"));

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


    return CoreInternalOutcome(true);
}

void NetworkAcl::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_networkAclIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkAclId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkAclId.c_str(), allocator).Move(), allocator);
    }

    if (m_networkAclNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkAclName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkAclName.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
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

    if (m_ingressEntriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IngressEntries";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ingressEntries.begin(); itr != m_ingressEntries.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_egressEntriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EgressEntries";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_egressEntries.begin(); itr != m_egressEntries.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_networkAclTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkAclType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkAclType.c_str(), allocator).Move(), allocator);
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

}


string NetworkAcl::GetVpcId() const
{
    return m_vpcId;
}

void NetworkAcl::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool NetworkAcl::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string NetworkAcl::GetNetworkAclId() const
{
    return m_networkAclId;
}

void NetworkAcl::SetNetworkAclId(const string& _networkAclId)
{
    m_networkAclId = _networkAclId;
    m_networkAclIdHasBeenSet = true;
}

bool NetworkAcl::NetworkAclIdHasBeenSet() const
{
    return m_networkAclIdHasBeenSet;
}

string NetworkAcl::GetNetworkAclName() const
{
    return m_networkAclName;
}

void NetworkAcl::SetNetworkAclName(const string& _networkAclName)
{
    m_networkAclName = _networkAclName;
    m_networkAclNameHasBeenSet = true;
}

bool NetworkAcl::NetworkAclNameHasBeenSet() const
{
    return m_networkAclNameHasBeenSet;
}

string NetworkAcl::GetCreatedTime() const
{
    return m_createdTime;
}

void NetworkAcl::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool NetworkAcl::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

vector<Subnet> NetworkAcl::GetSubnetSet() const
{
    return m_subnetSet;
}

void NetworkAcl::SetSubnetSet(const vector<Subnet>& _subnetSet)
{
    m_subnetSet = _subnetSet;
    m_subnetSetHasBeenSet = true;
}

bool NetworkAcl::SubnetSetHasBeenSet() const
{
    return m_subnetSetHasBeenSet;
}

vector<NetworkAclEntry> NetworkAcl::GetIngressEntries() const
{
    return m_ingressEntries;
}

void NetworkAcl::SetIngressEntries(const vector<NetworkAclEntry>& _ingressEntries)
{
    m_ingressEntries = _ingressEntries;
    m_ingressEntriesHasBeenSet = true;
}

bool NetworkAcl::IngressEntriesHasBeenSet() const
{
    return m_ingressEntriesHasBeenSet;
}

vector<NetworkAclEntry> NetworkAcl::GetEgressEntries() const
{
    return m_egressEntries;
}

void NetworkAcl::SetEgressEntries(const vector<NetworkAclEntry>& _egressEntries)
{
    m_egressEntries = _egressEntries;
    m_egressEntriesHasBeenSet = true;
}

bool NetworkAcl::EgressEntriesHasBeenSet() const
{
    return m_egressEntriesHasBeenSet;
}

string NetworkAcl::GetNetworkAclType() const
{
    return m_networkAclType;
}

void NetworkAcl::SetNetworkAclType(const string& _networkAclType)
{
    m_networkAclType = _networkAclType;
    m_networkAclTypeHasBeenSet = true;
}

bool NetworkAcl::NetworkAclTypeHasBeenSet() const
{
    return m_networkAclTypeHasBeenSet;
}

vector<Tag> NetworkAcl::GetTagSet() const
{
    return m_tagSet;
}

void NetworkAcl::SetTagSet(const vector<Tag>& _tagSet)
{
    m_tagSet = _tagSet;
    m_tagSetHasBeenSet = true;
}

bool NetworkAcl::TagSetHasBeenSet() const
{
    return m_tagSetHasBeenSet;
}

