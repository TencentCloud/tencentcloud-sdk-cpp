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

#include <tencentcloud/tcm/v20210413/model/Cluster.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcm::V20210413::Model;
using namespace std;

Cluster::Cluster() :
    m_clusterIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_linkedTimeHasBeenSet(false),
    m_configHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_hostedNamespacesHasBeenSet(false)
{
}

CoreInternalOutcome Cluster::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Role") && !value["Role"].IsNull())
    {
        if (!value["Role"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.Role` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_role = string(value["Role"].GetString());
        m_roleHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("DisplayName") && !value["DisplayName"].IsNull())
    {
        if (!value["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(value["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("LinkedTime") && !value["LinkedTime"].IsNull())
    {
        if (!value["LinkedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.LinkedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_linkedTime = string(value["LinkedTime"].GetString());
        m_linkedTimeHasBeenSet = true;
    }

    if (value.HasMember("Config") && !value["Config"].IsNull())
    {
        if (!value["Config"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.Config` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_config.Deserialize(value["Config"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_configHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.Status` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_status.Deserialize(value["Status"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("HostedNamespaces") && !value["HostedNamespaces"].IsNull())
    {
        if (!value["HostedNamespaces"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Cluster.HostedNamespaces` is not array type"));

        const rapidjson::Value &tmpValue = value["HostedNamespaces"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_hostedNamespaces.push_back((*itr).GetString());
        }
        m_hostedNamespacesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Cluster::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_roleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_role.c_str(), allocator).Move(), allocator);
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

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_linkedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LinkedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_linkedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_config.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_status.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_hostedNamespacesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostedNamespaces";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_hostedNamespaces.begin(); itr != m_hostedNamespaces.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string Cluster::GetClusterId() const
{
    return m_clusterId;
}

void Cluster::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool Cluster::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string Cluster::GetRegion() const
{
    return m_region;
}

void Cluster::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool Cluster::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string Cluster::GetRole() const
{
    return m_role;
}

void Cluster::SetRole(const string& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool Cluster::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

string Cluster::GetVpcId() const
{
    return m_vpcId;
}

void Cluster::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool Cluster::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string Cluster::GetSubnetId() const
{
    return m_subnetId;
}

void Cluster::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool Cluster::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string Cluster::GetDisplayName() const
{
    return m_displayName;
}

void Cluster::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool Cluster::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string Cluster::GetState() const
{
    return m_state;
}

void Cluster::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool Cluster::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string Cluster::GetLinkedTime() const
{
    return m_linkedTime;
}

void Cluster::SetLinkedTime(const string& _linkedTime)
{
    m_linkedTime = _linkedTime;
    m_linkedTimeHasBeenSet = true;
}

bool Cluster::LinkedTimeHasBeenSet() const
{
    return m_linkedTimeHasBeenSet;
}

ClusterConfig Cluster::GetConfig() const
{
    return m_config;
}

void Cluster::SetConfig(const ClusterConfig& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool Cluster::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

ClusterStatus Cluster::GetStatus() const
{
    return m_status;
}

void Cluster::SetStatus(const ClusterStatus& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Cluster::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string Cluster::GetType() const
{
    return m_type;
}

void Cluster::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Cluster::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<string> Cluster::GetHostedNamespaces() const
{
    return m_hostedNamespaces;
}

void Cluster::SetHostedNamespaces(const vector<string>& _hostedNamespaces)
{
    m_hostedNamespaces = _hostedNamespaces;
    m_hostedNamespacesHasBeenSet = true;
}

bool Cluster::HostedNamespacesHasBeenSet() const
{
    return m_hostedNamespacesHasBeenSet;
}

