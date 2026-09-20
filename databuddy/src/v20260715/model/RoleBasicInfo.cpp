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

#include <tencentcloud/databuddy/v20260715/model/RoleBasicInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

RoleBasicInfo::RoleBasicInfo() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_roleTypeHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_groupNamesHasBeenSet(false)
{
}

CoreInternalOutcome RoleBasicInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleBasicInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleBasicInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleBasicInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("DisplayName") && !value["DisplayName"].IsNull())
    {
        if (!value["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleBasicInfo.DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(value["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (value.HasMember("RoleType") && !value["RoleType"].IsNull())
    {
        if (!value["RoleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleBasicInfo.RoleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleType = string(value["RoleType"].GetString());
        m_roleTypeHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoleBasicInfo.Source` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_source = value["Source"].GetInt64();
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("GroupNames") && !value["GroupNames"].IsNull())
    {
        if (!value["GroupNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RoleBasicInfo.GroupNames` is not array type"));

        const rapidjson::Value &tmpValue = value["GroupNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_groupNames.push_back((*itr).GetString());
        }
        m_groupNamesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RoleBasicInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_roleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleType.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_source, allocator);
    }

    if (m_groupNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groupNames.begin(); itr != m_groupNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string RoleBasicInfo::GetId() const
{
    return m_id;
}

void RoleBasicInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool RoleBasicInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string RoleBasicInfo::GetName() const
{
    return m_name;
}

void RoleBasicInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RoleBasicInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string RoleBasicInfo::GetDescription() const
{
    return m_description;
}

void RoleBasicInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool RoleBasicInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string RoleBasicInfo::GetDisplayName() const
{
    return m_displayName;
}

void RoleBasicInfo::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool RoleBasicInfo::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string RoleBasicInfo::GetRoleType() const
{
    return m_roleType;
}

void RoleBasicInfo::SetRoleType(const string& _roleType)
{
    m_roleType = _roleType;
    m_roleTypeHasBeenSet = true;
}

bool RoleBasicInfo::RoleTypeHasBeenSet() const
{
    return m_roleTypeHasBeenSet;
}

int64_t RoleBasicInfo::GetSource() const
{
    return m_source;
}

void RoleBasicInfo::SetSource(const int64_t& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool RoleBasicInfo::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

vector<string> RoleBasicInfo::GetGroupNames() const
{
    return m_groupNames;
}

void RoleBasicInfo::SetGroupNames(const vector<string>& _groupNames)
{
    m_groupNames = _groupNames;
    m_groupNamesHasBeenSet = true;
}

bool RoleBasicInfo::GroupNamesHasBeenSet() const
{
    return m_groupNamesHasBeenSet;
}

