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

#include <tencentcloud/ess/v20201111/model/Checklist.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

Checklist::Checklist() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_countHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_updaterHasBeenSet(false),
    m_modifiedOnHasBeenSet(false),
    m_officialHasBeenSet(false),
    m_configStatusHasBeenSet(false)
{
}

CoreInternalOutcome Checklist::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Checklist.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Checklist.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Checklist.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Checklist.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("Updater") && !value["Updater"].IsNull())
    {
        if (!value["Updater"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Checklist.Updater` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updater = string(value["Updater"].GetString());
        m_updaterHasBeenSet = true;
    }

    if (value.HasMember("ModifiedOn") && !value["ModifiedOn"].IsNull())
    {
        if (!value["ModifiedOn"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Checklist.ModifiedOn` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedOn = value["ModifiedOn"].GetInt64();
        m_modifiedOnHasBeenSet = true;
    }

    if (value.HasMember("Official") && !value["Official"].IsNull())
    {
        if (!value["Official"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Checklist.Official` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_official = value["Official"].GetBool();
        m_officialHasBeenSet = true;
    }

    if (value.HasMember("ConfigStatus") && !value["ConfigStatus"].IsNull())
    {
        if (!value["ConfigStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Checklist.ConfigStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_configStatus = value["ConfigStatus"].GetInt64();
        m_configStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Checklist::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_updaterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Updater";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updater.c_str(), allocator).Move(), allocator);
    }

    if (m_modifiedOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_modifiedOn, allocator);
    }

    if (m_officialHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Official";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_official, allocator);
    }

    if (m_configStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_configStatus, allocator);
    }

}


string Checklist::GetId() const
{
    return m_id;
}

void Checklist::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool Checklist::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string Checklist::GetName() const
{
    return m_name;
}

void Checklist::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Checklist::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t Checklist::GetCount() const
{
    return m_count;
}

void Checklist::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool Checklist::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

bool Checklist::GetEnabled() const
{
    return m_enabled;
}

void Checklist::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool Checklist::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

string Checklist::GetUpdater() const
{
    return m_updater;
}

void Checklist::SetUpdater(const string& _updater)
{
    m_updater = _updater;
    m_updaterHasBeenSet = true;
}

bool Checklist::UpdaterHasBeenSet() const
{
    return m_updaterHasBeenSet;
}

int64_t Checklist::GetModifiedOn() const
{
    return m_modifiedOn;
}

void Checklist::SetModifiedOn(const int64_t& _modifiedOn)
{
    m_modifiedOn = _modifiedOn;
    m_modifiedOnHasBeenSet = true;
}

bool Checklist::ModifiedOnHasBeenSet() const
{
    return m_modifiedOnHasBeenSet;
}

bool Checklist::GetOfficial() const
{
    return m_official;
}

void Checklist::SetOfficial(const bool& _official)
{
    m_official = _official;
    m_officialHasBeenSet = true;
}

bool Checklist::OfficialHasBeenSet() const
{
    return m_officialHasBeenSet;
}

int64_t Checklist::GetConfigStatus() const
{
    return m_configStatus;
}

void Checklist::SetConfigStatus(const int64_t& _configStatus)
{
    m_configStatus = _configStatus;
    m_configStatusHasBeenSet = true;
}

bool Checklist::ConfigStatusHasBeenSet() const
{
    return m_configStatusHasBeenSet;
}

