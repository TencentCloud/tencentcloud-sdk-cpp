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

#include <tencentcloud/cwp/v20180228/model/BaselineDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

BaselineDetail::BaselineDetail() :
    m_descriptionHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_packageNameHasBeenSet(false),
    m_parentIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

CoreInternalOutcome BaselineDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineDetail.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineDetail.Level` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetUint64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("PackageName") && !value["PackageName"].IsNull())
    {
        if (!value["PackageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineDetail.PackageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageName = string(value["PackageName"].GetString());
        m_packageNameHasBeenSet = true;
    }

    if (value.HasMember("ParentId") && !value["ParentId"].IsNull())
    {
        if (!value["ParentId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineDetail.ParentId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_parentId = value["ParentId"].GetUint64();
        m_parentIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselineDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_packageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageName.c_str(), allocator).Move(), allocator);
    }

    if (m_parentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_parentId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

}


string BaselineDetail::GetDescription() const
{
    return m_description;
}

void BaselineDetail::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool BaselineDetail::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t BaselineDetail::GetLevel() const
{
    return m_level;
}

void BaselineDetail::SetLevel(const uint64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool BaselineDetail::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string BaselineDetail::GetPackageName() const
{
    return m_packageName;
}

void BaselineDetail::SetPackageName(const string& _packageName)
{
    m_packageName = _packageName;
    m_packageNameHasBeenSet = true;
}

bool BaselineDetail::PackageNameHasBeenSet() const
{
    return m_packageNameHasBeenSet;
}

uint64_t BaselineDetail::GetParentId() const
{
    return m_parentId;
}

void BaselineDetail::SetParentId(const uint64_t& _parentId)
{
    m_parentId = _parentId;
    m_parentIdHasBeenSet = true;
}

bool BaselineDetail::ParentIdHasBeenSet() const
{
    return m_parentIdHasBeenSet;
}

string BaselineDetail::GetName() const
{
    return m_name;
}

void BaselineDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool BaselineDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

