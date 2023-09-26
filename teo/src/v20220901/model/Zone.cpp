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

#include <tencentcloud/teo/v20220901/model/Zone.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

Zone::Zone() :
    m_zoneIdHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_originalNameServersHasBeenSet(false),
    m_nameServersHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_pausedHasBeenSet(false),
    m_cnameSpeedUpHasBeenSet(false),
    m_cnameStatusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_modifiedOnHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_vanityNameServersHasBeenSet(false),
    m_vanityNameServersIpsHasBeenSet(false),
    m_activeStatusHasBeenSet(false),
    m_aliasZoneNameHasBeenSet(false),
    m_isFakeHasBeenSet(false),
    m_lockStatusHasBeenSet(false),
    m_ownershipVerificationHasBeenSet(false)
{
}

CoreInternalOutcome Zone::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Zone.ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(value["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneName") && !value["ZoneName"].IsNull())
    {
        if (!value["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Zone.ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(value["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }

    if (value.HasMember("OriginalNameServers") && !value["OriginalNameServers"].IsNull())
    {
        if (!value["OriginalNameServers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Zone.OriginalNameServers` is not array type"));

        const rapidjson::Value &tmpValue = value["OriginalNameServers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_originalNameServers.push_back((*itr).GetString());
        }
        m_originalNameServersHasBeenSet = true;
    }

    if (value.HasMember("NameServers") && !value["NameServers"].IsNull())
    {
        if (!value["NameServers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Zone.NameServers` is not array type"));

        const rapidjson::Value &tmpValue = value["NameServers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_nameServers.push_back((*itr).GetString());
        }
        m_nameServersHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Zone.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Zone.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Paused") && !value["Paused"].IsNull())
    {
        if (!value["Paused"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Zone.Paused` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_paused = value["Paused"].GetBool();
        m_pausedHasBeenSet = true;
    }

    if (value.HasMember("CnameSpeedUp") && !value["CnameSpeedUp"].IsNull())
    {
        if (!value["CnameSpeedUp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Zone.CnameSpeedUp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cnameSpeedUp = string(value["CnameSpeedUp"].GetString());
        m_cnameSpeedUpHasBeenSet = true;
    }

    if (value.HasMember("CnameStatus") && !value["CnameStatus"].IsNull())
    {
        if (!value["CnameStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Zone.CnameStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cnameStatus = string(value["CnameStatus"].GetString());
        m_cnameStatusHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Zone.Tags` is not array type"));

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

    if (value.HasMember("Resources") && !value["Resources"].IsNull())
    {
        if (!value["Resources"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Zone.Resources` is not array type"));

        const rapidjson::Value &tmpValue = value["Resources"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Resource item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resources.push_back(item);
        }
        m_resourcesHasBeenSet = true;
    }

    if (value.HasMember("CreatedOn") && !value["CreatedOn"].IsNull())
    {
        if (!value["CreatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Zone.CreatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdOn = string(value["CreatedOn"].GetString());
        m_createdOnHasBeenSet = true;
    }

    if (value.HasMember("ModifiedOn") && !value["ModifiedOn"].IsNull())
    {
        if (!value["ModifiedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Zone.ModifiedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedOn = string(value["ModifiedOn"].GetString());
        m_modifiedOnHasBeenSet = true;
    }

    if (value.HasMember("Area") && !value["Area"].IsNull())
    {
        if (!value["Area"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Zone.Area` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_area = string(value["Area"].GetString());
        m_areaHasBeenSet = true;
    }

    if (value.HasMember("VanityNameServers") && !value["VanityNameServers"].IsNull())
    {
        if (!value["VanityNameServers"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Zone.VanityNameServers` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vanityNameServers.Deserialize(value["VanityNameServers"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vanityNameServersHasBeenSet = true;
    }

    if (value.HasMember("VanityNameServersIps") && !value["VanityNameServersIps"].IsNull())
    {
        if (!value["VanityNameServersIps"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Zone.VanityNameServersIps` is not array type"));

        const rapidjson::Value &tmpValue = value["VanityNameServersIps"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VanityNameServersIps item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vanityNameServersIps.push_back(item);
        }
        m_vanityNameServersIpsHasBeenSet = true;
    }

    if (value.HasMember("ActiveStatus") && !value["ActiveStatus"].IsNull())
    {
        if (!value["ActiveStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Zone.ActiveStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activeStatus = string(value["ActiveStatus"].GetString());
        m_activeStatusHasBeenSet = true;
    }

    if (value.HasMember("AliasZoneName") && !value["AliasZoneName"].IsNull())
    {
        if (!value["AliasZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Zone.AliasZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aliasZoneName = string(value["AliasZoneName"].GetString());
        m_aliasZoneNameHasBeenSet = true;
    }

    if (value.HasMember("IsFake") && !value["IsFake"].IsNull())
    {
        if (!value["IsFake"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Zone.IsFake` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isFake = value["IsFake"].GetInt64();
        m_isFakeHasBeenSet = true;
    }

    if (value.HasMember("LockStatus") && !value["LockStatus"].IsNull())
    {
        if (!value["LockStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Zone.LockStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lockStatus = string(value["LockStatus"].GetString());
        m_lockStatusHasBeenSet = true;
    }

    if (value.HasMember("OwnershipVerification") && !value["OwnershipVerification"].IsNull())
    {
        if (!value["OwnershipVerification"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Zone.OwnershipVerification` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ownershipVerification.Deserialize(value["OwnershipVerification"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ownershipVerificationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Zone::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_originalNameServersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalNameServers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_originalNameServers.begin(); itr != m_originalNameServers.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_nameServersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameServers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_nameServers.begin(); itr != m_nameServers.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_pausedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Paused";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_paused, allocator);
    }

    if (m_cnameSpeedUpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CnameSpeedUp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cnameSpeedUp.c_str(), allocator).Move(), allocator);
    }

    if (m_cnameStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CnameStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cnameStatus.c_str(), allocator).Move(), allocator);
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

    if (m_resourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resources";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resources.begin(); itr != m_resources.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createdOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdOn.c_str(), allocator).Move(), allocator);
    }

    if (m_modifiedOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifiedOn.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_vanityNameServersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VanityNameServers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vanityNameServers.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_vanityNameServersIpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VanityNameServersIps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vanityNameServersIps.begin(); itr != m_vanityNameServersIps.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_activeStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_activeStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasZoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliasZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aliasZoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_isFakeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFake";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isFake, allocator);
    }

    if (m_lockStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lockStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_ownershipVerificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnershipVerification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ownershipVerification.ToJsonObject(value[key.c_str()], allocator);
    }

}


string Zone::GetZoneId() const
{
    return m_zoneId;
}

void Zone::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool Zone::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string Zone::GetZoneName() const
{
    return m_zoneName;
}

void Zone::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool Zone::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

vector<string> Zone::GetOriginalNameServers() const
{
    return m_originalNameServers;
}

void Zone::SetOriginalNameServers(const vector<string>& _originalNameServers)
{
    m_originalNameServers = _originalNameServers;
    m_originalNameServersHasBeenSet = true;
}

bool Zone::OriginalNameServersHasBeenSet() const
{
    return m_originalNameServersHasBeenSet;
}

vector<string> Zone::GetNameServers() const
{
    return m_nameServers;
}

void Zone::SetNameServers(const vector<string>& _nameServers)
{
    m_nameServers = _nameServers;
    m_nameServersHasBeenSet = true;
}

bool Zone::NameServersHasBeenSet() const
{
    return m_nameServersHasBeenSet;
}

string Zone::GetStatus() const
{
    return m_status;
}

void Zone::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Zone::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string Zone::GetType() const
{
    return m_type;
}

void Zone::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Zone::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

bool Zone::GetPaused() const
{
    return m_paused;
}

void Zone::SetPaused(const bool& _paused)
{
    m_paused = _paused;
    m_pausedHasBeenSet = true;
}

bool Zone::PausedHasBeenSet() const
{
    return m_pausedHasBeenSet;
}

string Zone::GetCnameSpeedUp() const
{
    return m_cnameSpeedUp;
}

void Zone::SetCnameSpeedUp(const string& _cnameSpeedUp)
{
    m_cnameSpeedUp = _cnameSpeedUp;
    m_cnameSpeedUpHasBeenSet = true;
}

bool Zone::CnameSpeedUpHasBeenSet() const
{
    return m_cnameSpeedUpHasBeenSet;
}

string Zone::GetCnameStatus() const
{
    return m_cnameStatus;
}

void Zone::SetCnameStatus(const string& _cnameStatus)
{
    m_cnameStatus = _cnameStatus;
    m_cnameStatusHasBeenSet = true;
}

bool Zone::CnameStatusHasBeenSet() const
{
    return m_cnameStatusHasBeenSet;
}

vector<Tag> Zone::GetTags() const
{
    return m_tags;
}

void Zone::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool Zone::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<Resource> Zone::GetResources() const
{
    return m_resources;
}

void Zone::SetResources(const vector<Resource>& _resources)
{
    m_resources = _resources;
    m_resourcesHasBeenSet = true;
}

bool Zone::ResourcesHasBeenSet() const
{
    return m_resourcesHasBeenSet;
}

string Zone::GetCreatedOn() const
{
    return m_createdOn;
}

void Zone::SetCreatedOn(const string& _createdOn)
{
    m_createdOn = _createdOn;
    m_createdOnHasBeenSet = true;
}

bool Zone::CreatedOnHasBeenSet() const
{
    return m_createdOnHasBeenSet;
}

string Zone::GetModifiedOn() const
{
    return m_modifiedOn;
}

void Zone::SetModifiedOn(const string& _modifiedOn)
{
    m_modifiedOn = _modifiedOn;
    m_modifiedOnHasBeenSet = true;
}

bool Zone::ModifiedOnHasBeenSet() const
{
    return m_modifiedOnHasBeenSet;
}

string Zone::GetArea() const
{
    return m_area;
}

void Zone::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool Zone::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

VanityNameServers Zone::GetVanityNameServers() const
{
    return m_vanityNameServers;
}

void Zone::SetVanityNameServers(const VanityNameServers& _vanityNameServers)
{
    m_vanityNameServers = _vanityNameServers;
    m_vanityNameServersHasBeenSet = true;
}

bool Zone::VanityNameServersHasBeenSet() const
{
    return m_vanityNameServersHasBeenSet;
}

vector<VanityNameServersIps> Zone::GetVanityNameServersIps() const
{
    return m_vanityNameServersIps;
}

void Zone::SetVanityNameServersIps(const vector<VanityNameServersIps>& _vanityNameServersIps)
{
    m_vanityNameServersIps = _vanityNameServersIps;
    m_vanityNameServersIpsHasBeenSet = true;
}

bool Zone::VanityNameServersIpsHasBeenSet() const
{
    return m_vanityNameServersIpsHasBeenSet;
}

string Zone::GetActiveStatus() const
{
    return m_activeStatus;
}

void Zone::SetActiveStatus(const string& _activeStatus)
{
    m_activeStatus = _activeStatus;
    m_activeStatusHasBeenSet = true;
}

bool Zone::ActiveStatusHasBeenSet() const
{
    return m_activeStatusHasBeenSet;
}

string Zone::GetAliasZoneName() const
{
    return m_aliasZoneName;
}

void Zone::SetAliasZoneName(const string& _aliasZoneName)
{
    m_aliasZoneName = _aliasZoneName;
    m_aliasZoneNameHasBeenSet = true;
}

bool Zone::AliasZoneNameHasBeenSet() const
{
    return m_aliasZoneNameHasBeenSet;
}

int64_t Zone::GetIsFake() const
{
    return m_isFake;
}

void Zone::SetIsFake(const int64_t& _isFake)
{
    m_isFake = _isFake;
    m_isFakeHasBeenSet = true;
}

bool Zone::IsFakeHasBeenSet() const
{
    return m_isFakeHasBeenSet;
}

string Zone::GetLockStatus() const
{
    return m_lockStatus;
}

void Zone::SetLockStatus(const string& _lockStatus)
{
    m_lockStatus = _lockStatus;
    m_lockStatusHasBeenSet = true;
}

bool Zone::LockStatusHasBeenSet() const
{
    return m_lockStatusHasBeenSet;
}

OwnershipVerification Zone::GetOwnershipVerification() const
{
    return m_ownershipVerification;
}

void Zone::SetOwnershipVerification(const OwnershipVerification& _ownershipVerification)
{
    m_ownershipVerification = _ownershipVerification;
    m_ownershipVerificationHasBeenSet = true;
}

bool Zone::OwnershipVerificationHasBeenSet() const
{
    return m_ownershipVerificationHasBeenSet;
}

