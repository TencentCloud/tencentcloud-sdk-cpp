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

#include <tencentcloud/wedata/v20210820/model/BizCatalogsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

BizCatalogsInfo::BizCatalogsInfo() :
    m_appIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_parentIdHasBeenSet(false),
    m_positionHasBeenSet(false)
{
}

CoreInternalOutcome BizCatalogsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BizCatalogsInfo.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BizCatalogsInfo.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BizCatalogsInfo.Level` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetInt64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BizCatalogsInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ParentId") && !value["ParentId"].IsNull())
    {
        if (!value["ParentId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BizCatalogsInfo.ParentId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_parentId = value["ParentId"].GetInt64();
        m_parentIdHasBeenSet = true;
    }

    if (value.HasMember("Position") && !value["Position"].IsNull())
    {
        if (!value["Position"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BizCatalogsInfo.Position` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_position = value["Position"].GetInt64();
        m_positionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BizCatalogsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_parentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_parentId, allocator);
    }

    if (m_positionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Position";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_position, allocator);
    }

}


string BizCatalogsInfo::GetAppId() const
{
    return m_appId;
}

void BizCatalogsInfo::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool BizCatalogsInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

int64_t BizCatalogsInfo::GetId() const
{
    return m_id;
}

void BizCatalogsInfo::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool BizCatalogsInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t BizCatalogsInfo::GetLevel() const
{
    return m_level;
}

void BizCatalogsInfo::SetLevel(const int64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool BizCatalogsInfo::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string BizCatalogsInfo::GetName() const
{
    return m_name;
}

void BizCatalogsInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool BizCatalogsInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t BizCatalogsInfo::GetParentId() const
{
    return m_parentId;
}

void BizCatalogsInfo::SetParentId(const int64_t& _parentId)
{
    m_parentId = _parentId;
    m_parentIdHasBeenSet = true;
}

bool BizCatalogsInfo::ParentIdHasBeenSet() const
{
    return m_parentIdHasBeenSet;
}

int64_t BizCatalogsInfo::GetPosition() const
{
    return m_position;
}

void BizCatalogsInfo::SetPosition(const int64_t& _position)
{
    m_position = _position;
    m_positionHasBeenSet = true;
}

bool BizCatalogsInfo::PositionHasBeenSet() const
{
    return m_positionHasBeenSet;
}

