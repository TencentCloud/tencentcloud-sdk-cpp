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

#include <tencentcloud/iss/v20230517/model/UpdateOrgData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

UpdateOrgData::UpdateOrgData() :
    m_organizationIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_parentIdHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_parentIdsHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_onlineHasBeenSet(false)
{
}

CoreInternalOutcome UpdateOrgData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OrganizationId") && !value["OrganizationId"].IsNull())
    {
        if (!value["OrganizationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateOrgData.OrganizationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationId = string(value["OrganizationId"].GetString());
        m_organizationIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateOrgData.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ParentId") && !value["ParentId"].IsNull())
    {
        if (!value["ParentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateOrgData.ParentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentId = string(value["ParentId"].GetString());
        m_parentIdHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateOrgData.Level` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetInt64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateOrgData.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("ParentIds") && !value["ParentIds"].IsNull())
    {
        if (!value["ParentIds"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateOrgData.ParentIds` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentIds = string(value["ParentIds"].GetString());
        m_parentIdsHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateOrgData.Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("Online") && !value["Online"].IsNull())
    {
        if (!value["Online"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateOrgData.Online` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_online = value["Online"].GetInt64();
        m_onlineHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UpdateOrgData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_organizationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationId.c_str(), allocator).Move(), allocator);
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
        value.AddMember(iKey, rapidjson::Value(m_parentId.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_parentIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentIds.c_str(), allocator).Move(), allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_onlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Online";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_online, allocator);
    }

}


string UpdateOrgData::GetOrganizationId() const
{
    return m_organizationId;
}

void UpdateOrgData::SetOrganizationId(const string& _organizationId)
{
    m_organizationId = _organizationId;
    m_organizationIdHasBeenSet = true;
}

bool UpdateOrgData::OrganizationIdHasBeenSet() const
{
    return m_organizationIdHasBeenSet;
}

string UpdateOrgData::GetName() const
{
    return m_name;
}

void UpdateOrgData::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool UpdateOrgData::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string UpdateOrgData::GetParentId() const
{
    return m_parentId;
}

void UpdateOrgData::SetParentId(const string& _parentId)
{
    m_parentId = _parentId;
    m_parentIdHasBeenSet = true;
}

bool UpdateOrgData::ParentIdHasBeenSet() const
{
    return m_parentIdHasBeenSet;
}

int64_t UpdateOrgData::GetLevel() const
{
    return m_level;
}

void UpdateOrgData::SetLevel(const int64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool UpdateOrgData::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

int64_t UpdateOrgData::GetAppId() const
{
    return m_appId;
}

void UpdateOrgData::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool UpdateOrgData::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string UpdateOrgData::GetParentIds() const
{
    return m_parentIds;
}

void UpdateOrgData::SetParentIds(const string& _parentIds)
{
    m_parentIds = _parentIds;
    m_parentIdsHasBeenSet = true;
}

bool UpdateOrgData::ParentIdsHasBeenSet() const
{
    return m_parentIdsHasBeenSet;
}

int64_t UpdateOrgData::GetTotal() const
{
    return m_total;
}

void UpdateOrgData::SetTotal(const int64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool UpdateOrgData::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

int64_t UpdateOrgData::GetOnline() const
{
    return m_online;
}

void UpdateOrgData::SetOnline(const int64_t& _online)
{
    m_online = _online;
    m_onlineHasBeenSet = true;
}

bool UpdateOrgData::OnlineHasBeenSet() const
{
    return m_onlineHasBeenSet;
}

