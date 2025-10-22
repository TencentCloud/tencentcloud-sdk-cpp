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

#include <tencentcloud/ctsdb/v20230202/model/Cluster.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ctsdb::V20230202::Model;
using namespace std;

Cluster::Cluster() :
    m_appIDHasBeenSet(false),
    m_clusterIDHasBeenSet(false),
    m_accountIDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_zonesHasBeenSet(false),
    m_networksHasBeenSet(false),
    m_specHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_tenantHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_securityHasBeenSet(false)
{
}

CoreInternalOutcome Cluster::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.AppID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = value["AppID"].GetUint64();
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("ClusterID") && !value["ClusterID"].IsNull())
    {
        if (!value["ClusterID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.ClusterID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterID = string(value["ClusterID"].GetString());
        m_clusterIDHasBeenSet = true;
    }

    if (value.HasMember("AccountID") && !value["AccountID"].IsNull())
    {
        if (!value["AccountID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.AccountID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountID = string(value["AccountID"].GetString());
        m_accountIDHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
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

    if (value.HasMember("Zones") && !value["Zones"].IsNull())
    {
        if (!value["Zones"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.Zones` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zones = string(value["Zones"].GetString());
        m_zonesHasBeenSet = true;
    }

    if (value.HasMember("Networks") && !value["Networks"].IsNull())
    {
        if (!value["Networks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Cluster.Networks` is not array type"));

        const rapidjson::Value &tmpValue = value["Networks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Network item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_networks.push_back(item);
        }
        m_networksHasBeenSet = true;
    }

    if (value.HasMember("Spec") && !value["Spec"].IsNull())
    {
        if (!value["Spec"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.Spec` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_spec.Deserialize(value["Spec"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_specHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Period") && !value["Period"].IsNull())
    {
        if (!value["Period"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.Period` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_period.Deserialize(value["Period"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_periodHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }

    if (value.HasMember("Tenant") && !value["Tenant"].IsNull())
    {
        if (!value["Tenant"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.Tenant` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tenant.Deserialize(value["Tenant"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tenantHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Cluster.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("Security") && !value["Security"].IsNull())
    {
        if (!value["Security"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Cluster.Security` is not array type"));

        const rapidjson::Value &tmpValue = value["Security"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_security.push_back((*itr).GetString());
        }
        m_securityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Cluster::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appID, allocator);
    }

    if (m_clusterIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterID.c_str(), allocator).Move(), allocator);
    }

    if (m_accountIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountID.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_zonesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zones";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zones.c_str(), allocator).Move(), allocator);
    }

    if (m_networksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Networks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_networks.begin(); itr != m_networks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_specHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Spec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_spec.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_period.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_tenantHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tenant";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tenant.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_securityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Security";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_security.begin(); itr != m_security.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


uint64_t Cluster::GetAppID() const
{
    return m_appID;
}

void Cluster::SetAppID(const uint64_t& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool Cluster::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

string Cluster::GetClusterID() const
{
    return m_clusterID;
}

void Cluster::SetClusterID(const string& _clusterID)
{
    m_clusterID = _clusterID;
    m_clusterIDHasBeenSet = true;
}

bool Cluster::ClusterIDHasBeenSet() const
{
    return m_clusterIDHasBeenSet;
}

string Cluster::GetAccountID() const
{
    return m_accountID;
}

void Cluster::SetAccountID(const string& _accountID)
{
    m_accountID = _accountID;
    m_accountIDHasBeenSet = true;
}

bool Cluster::AccountIDHasBeenSet() const
{
    return m_accountIDHasBeenSet;
}

string Cluster::GetName() const
{
    return m_name;
}

void Cluster::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Cluster::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
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

string Cluster::GetZones() const
{
    return m_zones;
}

void Cluster::SetZones(const string& _zones)
{
    m_zones = _zones;
    m_zonesHasBeenSet = true;
}

bool Cluster::ZonesHasBeenSet() const
{
    return m_zonesHasBeenSet;
}

vector<Network> Cluster::GetNetworks() const
{
    return m_networks;
}

void Cluster::SetNetworks(const vector<Network>& _networks)
{
    m_networks = _networks;
    m_networksHasBeenSet = true;
}

bool Cluster::NetworksHasBeenSet() const
{
    return m_networksHasBeenSet;
}

Spec Cluster::GetSpec() const
{
    return m_spec;
}

void Cluster::SetSpec(const Spec& _spec)
{
    m_spec = _spec;
    m_specHasBeenSet = true;
}

bool Cluster::SpecHasBeenSet() const
{
    return m_specHasBeenSet;
}

uint64_t Cluster::GetStatus() const
{
    return m_status;
}

void Cluster::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Cluster::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

Period Cluster::GetPeriod() const
{
    return m_period;
}

void Cluster::SetPeriod(const Period& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool Cluster::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

string Cluster::GetCreatedAt() const
{
    return m_createdAt;
}

void Cluster::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool Cluster::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string Cluster::GetUpdatedAt() const
{
    return m_updatedAt;
}

void Cluster::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool Cluster::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

Tenant Cluster::GetTenant() const
{
    return m_tenant;
}

void Cluster::SetTenant(const Tenant& _tenant)
{
    m_tenant = _tenant;
    m_tenantHasBeenSet = true;
}

bool Cluster::TenantHasBeenSet() const
{
    return m_tenantHasBeenSet;
}

vector<Tag> Cluster::GetTags() const
{
    return m_tags;
}

void Cluster::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool Cluster::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<string> Cluster::GetSecurity() const
{
    return m_security;
}

void Cluster::SetSecurity(const vector<string>& _security)
{
    m_security = _security;
    m_securityHasBeenSet = true;
}

bool Cluster::SecurityHasBeenSet() const
{
    return m_securityHasBeenSet;
}

