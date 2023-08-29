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

#include <tencentcloud/ess/v20201111/model/PermissionGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

PermissionGroup::PermissionGroup() :
    m_groupNameHasBeenSet(false),
    m_groupKeyHasBeenSet(false),
    m_hideHasBeenSet(false),
    m_permissionsHasBeenSet(false)
{
}

CoreInternalOutcome PermissionGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PermissionGroup.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("GroupKey") && !value["GroupKey"].IsNull())
    {
        if (!value["GroupKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PermissionGroup.GroupKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupKey = string(value["GroupKey"].GetString());
        m_groupKeyHasBeenSet = true;
    }

    if (value.HasMember("Hide") && !value["Hide"].IsNull())
    {
        if (!value["Hide"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PermissionGroup.Hide` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hide = value["Hide"].GetInt64();
        m_hideHasBeenSet = true;
    }

    if (value.HasMember("Permissions") && !value["Permissions"].IsNull())
    {
        if (!value["Permissions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PermissionGroup.Permissions` is not array type"));

        const rapidjson::Value &tmpValue = value["Permissions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Permission item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_permissions.push_back(item);
        }
        m_permissionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PermissionGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_groupKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupKey.c_str(), allocator).Move(), allocator);
    }

    if (m_hideHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hide";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hide, allocator);
    }

    if (m_permissionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Permissions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_permissions.begin(); itr != m_permissions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string PermissionGroup::GetGroupName() const
{
    return m_groupName;
}

void PermissionGroup::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool PermissionGroup::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string PermissionGroup::GetGroupKey() const
{
    return m_groupKey;
}

void PermissionGroup::SetGroupKey(const string& _groupKey)
{
    m_groupKey = _groupKey;
    m_groupKeyHasBeenSet = true;
}

bool PermissionGroup::GroupKeyHasBeenSet() const
{
    return m_groupKeyHasBeenSet;
}

int64_t PermissionGroup::GetHide() const
{
    return m_hide;
}

void PermissionGroup::SetHide(const int64_t& _hide)
{
    m_hide = _hide;
    m_hideHasBeenSet = true;
}

bool PermissionGroup::HideHasBeenSet() const
{
    return m_hideHasBeenSet;
}

vector<Permission> PermissionGroup::GetPermissions() const
{
    return m_permissions;
}

void PermissionGroup::SetPermissions(const vector<Permission>& _permissions)
{
    m_permissions = _permissions;
    m_permissionsHasBeenSet = true;
}

bool PermissionGroup::PermissionsHasBeenSet() const
{
    return m_permissionsHasBeenSet;
}

