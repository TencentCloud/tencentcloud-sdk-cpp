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

#include <tencentcloud/wedata/v20250806/model/ExploreFilePrivilegeItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

ExploreFilePrivilegeItem::ExploreFilePrivilegeItem() :
    m_privilegesHasBeenSet(false),
    m_roleTypeHasBeenSet(false),
    m_roleIdHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_deleteAbleHasBeenSet(false)
{
}

CoreInternalOutcome ExploreFilePrivilegeItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Privileges") && !value["Privileges"].IsNull())
    {
        if (!value["Privileges"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExploreFilePrivilegeItem.Privileges` is not array type"));

        const rapidjson::Value &tmpValue = value["Privileges"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_privileges.push_back((*itr).GetString());
        }
        m_privilegesHasBeenSet = true;
    }

    if (value.HasMember("RoleType") && !value["RoleType"].IsNull())
    {
        if (!value["RoleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExploreFilePrivilegeItem.RoleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleType = string(value["RoleType"].GetString());
        m_roleTypeHasBeenSet = true;
    }

    if (value.HasMember("RoleId") && !value["RoleId"].IsNull())
    {
        if (!value["RoleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExploreFilePrivilegeItem.RoleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleId = string(value["RoleId"].GetString());
        m_roleIdHasBeenSet = true;
    }

    if (value.HasMember("Resource") && !value["Resource"].IsNull())
    {
        if (!value["Resource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ExploreFilePrivilegeItem.Resource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resource.Deserialize(value["Resource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourceHasBeenSet = true;
    }

    if (value.HasMember("DeleteAble") && !value["DeleteAble"].IsNull())
    {
        if (!value["DeleteAble"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ExploreFilePrivilegeItem.DeleteAble` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deleteAble = value["DeleteAble"].GetBool();
        m_deleteAbleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExploreFilePrivilegeItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_privilegesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Privileges";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_privileges.begin(); itr != m_privileges.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_roleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleType.c_str(), allocator).Move(), allocator);
    }

    if (m_roleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resource.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_deleteAbleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteAble";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deleteAble, allocator);
    }

}


vector<string> ExploreFilePrivilegeItem::GetPrivileges() const
{
    return m_privileges;
}

void ExploreFilePrivilegeItem::SetPrivileges(const vector<string>& _privileges)
{
    m_privileges = _privileges;
    m_privilegesHasBeenSet = true;
}

bool ExploreFilePrivilegeItem::PrivilegesHasBeenSet() const
{
    return m_privilegesHasBeenSet;
}

string ExploreFilePrivilegeItem::GetRoleType() const
{
    return m_roleType;
}

void ExploreFilePrivilegeItem::SetRoleType(const string& _roleType)
{
    m_roleType = _roleType;
    m_roleTypeHasBeenSet = true;
}

bool ExploreFilePrivilegeItem::RoleTypeHasBeenSet() const
{
    return m_roleTypeHasBeenSet;
}

string ExploreFilePrivilegeItem::GetRoleId() const
{
    return m_roleId;
}

void ExploreFilePrivilegeItem::SetRoleId(const string& _roleId)
{
    m_roleId = _roleId;
    m_roleIdHasBeenSet = true;
}

bool ExploreFilePrivilegeItem::RoleIdHasBeenSet() const
{
    return m_roleIdHasBeenSet;
}

ExploreFileResource ExploreFilePrivilegeItem::GetResource() const
{
    return m_resource;
}

void ExploreFilePrivilegeItem::SetResource(const ExploreFileResource& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool ExploreFilePrivilegeItem::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

bool ExploreFilePrivilegeItem::GetDeleteAble() const
{
    return m_deleteAble;
}

void ExploreFilePrivilegeItem::SetDeleteAble(const bool& _deleteAble)
{
    m_deleteAble = _deleteAble;
    m_deleteAbleHasBeenSet = true;
}

bool ExploreFilePrivilegeItem::DeleteAbleHasBeenSet() const
{
    return m_deleteAbleHasBeenSet;
}

