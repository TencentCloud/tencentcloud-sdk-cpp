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

#include <tencentcloud/cetcd/v20220325/model/Etcd.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cetcd::V20220325::Model;
using namespace std;

Etcd::Etcd() :
    m_instanceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_membersHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_deletionProtectionHasBeenSet(false)
{
}

CoreInternalOutcome Etcd::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Etcd.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Etcd.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Etcd.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Etcd.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Etcd.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Etcd.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Members") && !value["Members"].IsNull())
    {
        if (!value["Members"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Etcd.Members` is not array type"));

        const rapidjson::Value &tmpValue = value["Members"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EtcdMember item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_members.push_back(item);
        }
        m_membersHasBeenSet = true;
    }

    if (value.HasMember("Endpoint") && !value["Endpoint"].IsNull())
    {
        if (!value["Endpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Etcd.Endpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpoint = string(value["Endpoint"].GetString());
        m_endpointHasBeenSet = true;
    }

    if (value.HasMember("DeletionProtection") && !value["DeletionProtection"].IsNull())
    {
        if (!value["DeletionProtection"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Etcd.DeletionProtection` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deletionProtection = value["DeletionProtection"].GetBool();
        m_deletionProtectionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Etcd::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_membersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Members";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_members.begin(); itr != m_members.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_endpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Endpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_deletionProtectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeletionProtection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deletionProtection, allocator);
    }

}


string Etcd::GetInstanceId() const
{
    return m_instanceId;
}

void Etcd::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool Etcd::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string Etcd::GetName() const
{
    return m_name;
}

void Etcd::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Etcd::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Etcd::GetDescription() const
{
    return m_description;
}

void Etcd::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool Etcd::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string Etcd::GetVpcId() const
{
    return m_vpcId;
}

void Etcd::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool Etcd::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string Etcd::GetVersion() const
{
    return m_version;
}

void Etcd::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool Etcd::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string Etcd::GetStatus() const
{
    return m_status;
}

void Etcd::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Etcd::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<EtcdMember> Etcd::GetMembers() const
{
    return m_members;
}

void Etcd::SetMembers(const vector<EtcdMember>& _members)
{
    m_members = _members;
    m_membersHasBeenSet = true;
}

bool Etcd::MembersHasBeenSet() const
{
    return m_membersHasBeenSet;
}

string Etcd::GetEndpoint() const
{
    return m_endpoint;
}

void Etcd::SetEndpoint(const string& _endpoint)
{
    m_endpoint = _endpoint;
    m_endpointHasBeenSet = true;
}

bool Etcd::EndpointHasBeenSet() const
{
    return m_endpointHasBeenSet;
}

bool Etcd::GetDeletionProtection() const
{
    return m_deletionProtection;
}

void Etcd::SetDeletionProtection(const bool& _deletionProtection)
{
    m_deletionProtection = _deletionProtection;
    m_deletionProtectionHasBeenSet = true;
}

bool Etcd::DeletionProtectionHasBeenSet() const
{
    return m_deletionProtectionHasBeenSet;
}

