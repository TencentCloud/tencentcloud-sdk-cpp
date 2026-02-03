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

#include <tencentcloud/ctsdb/v20230202/model/ClusterDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ctsdb::V20230202::Model;
using namespace std;

ClusterDetail::ClusterDetail() :
    m_appIDHasBeenSet(false),
    m_clusterIDHasBeenSet(false),
    m_accountIDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_networksHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_securityHasBeenSet(false),
    m_componentsHasBeenSet(false),
    m_expiredAtHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_shutdownAtHasBeenSet(false),
    m_isolatedAtHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome ClusterDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterDetail.AppID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = value["AppID"].GetUint64();
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("ClusterID") && !value["ClusterID"].IsNull())
    {
        if (!value["ClusterID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterDetail.ClusterID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterID = string(value["ClusterID"].GetString());
        m_clusterIDHasBeenSet = true;
    }

    if (value.HasMember("AccountID") && !value["AccountID"].IsNull())
    {
        if (!value["AccountID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterDetail.AccountID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountID = string(value["AccountID"].GetString());
        m_accountIDHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterDetail.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Networks") && !value["Networks"].IsNull())
    {
        if (!value["Networks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterDetail.Networks` is not array type"));

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

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterDetail.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterDetail.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterDetail.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterDetail.Tags` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `ClusterDetail.Security` is not array type"));

        const rapidjson::Value &tmpValue = value["Security"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_security.push_back((*itr).GetString());
        }
        m_securityHasBeenSet = true;
    }

    if (value.HasMember("Components") && !value["Components"].IsNull())
    {
        if (!value["Components"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterDetail.Components` is not array type"));

        const rapidjson::Value &tmpValue = value["Components"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Component item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_components.push_back(item);
        }
        m_componentsHasBeenSet = true;
    }

    if (value.HasMember("ExpiredAt") && !value["ExpiredAt"].IsNull())
    {
        if (!value["ExpiredAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterDetail.ExpiredAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expiredAt = string(value["ExpiredAt"].GetString());
        m_expiredAtHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterDetail.RenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = value["RenewFlag"].GetInt64();
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("ShutdownAt") && !value["ShutdownAt"].IsNull())
    {
        if (!value["ShutdownAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterDetail.ShutdownAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shutdownAt = string(value["ShutdownAt"].GetString());
        m_shutdownAtHasBeenSet = true;
    }

    if (value.HasMember("IsolatedAt") && !value["IsolatedAt"].IsNull())
    {
        if (!value["IsolatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterDetail.IsolatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isolatedAt = string(value["IsolatedAt"].GetString());
        m_isolatedAtHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterDetail.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
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

    if (m_componentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Components";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_components.begin(); itr != m_components.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_expiredAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expiredAt.c_str(), allocator).Move(), allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renewFlag, allocator);
    }

    if (m_shutdownAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShutdownAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shutdownAt.c_str(), allocator).Move(), allocator);
    }

    if (m_isolatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isolatedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

}


uint64_t ClusterDetail::GetAppID() const
{
    return m_appID;
}

void ClusterDetail::SetAppID(const uint64_t& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool ClusterDetail::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

string ClusterDetail::GetClusterID() const
{
    return m_clusterID;
}

void ClusterDetail::SetClusterID(const string& _clusterID)
{
    m_clusterID = _clusterID;
    m_clusterIDHasBeenSet = true;
}

bool ClusterDetail::ClusterIDHasBeenSet() const
{
    return m_clusterIDHasBeenSet;
}

string ClusterDetail::GetAccountID() const
{
    return m_accountID;
}

void ClusterDetail::SetAccountID(const string& _accountID)
{
    m_accountID = _accountID;
    m_accountIDHasBeenSet = true;
}

bool ClusterDetail::AccountIDHasBeenSet() const
{
    return m_accountIDHasBeenSet;
}

string ClusterDetail::GetName() const
{
    return m_name;
}

void ClusterDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ClusterDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ClusterDetail::GetRegion() const
{
    return m_region;
}

void ClusterDetail::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ClusterDetail::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

vector<Network> ClusterDetail::GetNetworks() const
{
    return m_networks;
}

void ClusterDetail::SetNetworks(const vector<Network>& _networks)
{
    m_networks = _networks;
    m_networksHasBeenSet = true;
}

bool ClusterDetail::NetworksHasBeenSet() const
{
    return m_networksHasBeenSet;
}

uint64_t ClusterDetail::GetStatus() const
{
    return m_status;
}

void ClusterDetail::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ClusterDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ClusterDetail::GetCreatedAt() const
{
    return m_createdAt;
}

void ClusterDetail::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool ClusterDetail::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string ClusterDetail::GetUpdatedAt() const
{
    return m_updatedAt;
}

void ClusterDetail::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool ClusterDetail::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

vector<Tag> ClusterDetail::GetTags() const
{
    return m_tags;
}

void ClusterDetail::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ClusterDetail::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<string> ClusterDetail::GetSecurity() const
{
    return m_security;
}

void ClusterDetail::SetSecurity(const vector<string>& _security)
{
    m_security = _security;
    m_securityHasBeenSet = true;
}

bool ClusterDetail::SecurityHasBeenSet() const
{
    return m_securityHasBeenSet;
}

vector<Component> ClusterDetail::GetComponents() const
{
    return m_components;
}

void ClusterDetail::SetComponents(const vector<Component>& _components)
{
    m_components = _components;
    m_componentsHasBeenSet = true;
}

bool ClusterDetail::ComponentsHasBeenSet() const
{
    return m_componentsHasBeenSet;
}

string ClusterDetail::GetExpiredAt() const
{
    return m_expiredAt;
}

void ClusterDetail::SetExpiredAt(const string& _expiredAt)
{
    m_expiredAt = _expiredAt;
    m_expiredAtHasBeenSet = true;
}

bool ClusterDetail::ExpiredAtHasBeenSet() const
{
    return m_expiredAtHasBeenSet;
}

int64_t ClusterDetail::GetRenewFlag() const
{
    return m_renewFlag;
}

void ClusterDetail::SetRenewFlag(const int64_t& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool ClusterDetail::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

string ClusterDetail::GetShutdownAt() const
{
    return m_shutdownAt;
}

void ClusterDetail::SetShutdownAt(const string& _shutdownAt)
{
    m_shutdownAt = _shutdownAt;
    m_shutdownAtHasBeenSet = true;
}

bool ClusterDetail::ShutdownAtHasBeenSet() const
{
    return m_shutdownAtHasBeenSet;
}

string ClusterDetail::GetIsolatedAt() const
{
    return m_isolatedAt;
}

void ClusterDetail::SetIsolatedAt(const string& _isolatedAt)
{
    m_isolatedAt = _isolatedAt;
    m_isolatedAtHasBeenSet = true;
}

bool ClusterDetail::IsolatedAtHasBeenSet() const
{
    return m_isolatedAtHasBeenSet;
}

uint64_t ClusterDetail::GetType() const
{
    return m_type;
}

void ClusterDetail::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ClusterDetail::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

