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

#include <tencentcloud/adp/v20260520/model/Space.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

Space::Space() :
    m_spaceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_permissionIdListHasBeenSet(false)
{
}

CoreInternalOutcome Space::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SpaceId") && !value["SpaceId"].IsNull())
    {
        if (!value["SpaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Space.SpaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spaceId = string(value["SpaceId"].GetString());
        m_spaceIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Space.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Space.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("PermissionIdList") && !value["PermissionIdList"].IsNull())
    {
        if (!value["PermissionIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Space.PermissionIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["PermissionIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_permissionIdList.push_back((*itr).GetString());
        }
        m_permissionIdListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Space::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_spaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spaceId.c_str(), allocator).Move(), allocator);
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

    if (m_permissionIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PermissionIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_permissionIdList.begin(); itr != m_permissionIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string Space::GetSpaceId() const
{
    return m_spaceId;
}

void Space::SetSpaceId(const string& _spaceId)
{
    m_spaceId = _spaceId;
    m_spaceIdHasBeenSet = true;
}

bool Space::SpaceIdHasBeenSet() const
{
    return m_spaceIdHasBeenSet;
}

string Space::GetName() const
{
    return m_name;
}

void Space::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Space::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Space::GetDescription() const
{
    return m_description;
}

void Space::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool Space::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<string> Space::GetPermissionIdList() const
{
    return m_permissionIdList;
}

void Space::SetPermissionIdList(const vector<string>& _permissionIdList)
{
    m_permissionIdList = _permissionIdList;
    m_permissionIdListHasBeenSet = true;
}

bool Space::PermissionIdListHasBeenSet() const
{
    return m_permissionIdListHasBeenSet;
}

