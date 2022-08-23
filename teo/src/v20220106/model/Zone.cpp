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

#include <tencentcloud/teo/v20220106/model/Zone.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

Zone::Zone() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
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
    m_areaHasBeenSet(false)
{
}

CoreInternalOutcome Zone::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Zone.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Zone.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
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


    return CoreInternalOutcome(true);
}

void Zone::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string Zone::GetId() const
{
    return m_id;
}

void Zone::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool Zone::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string Zone::GetName() const
{
    return m_name;
}

void Zone::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Zone::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
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

