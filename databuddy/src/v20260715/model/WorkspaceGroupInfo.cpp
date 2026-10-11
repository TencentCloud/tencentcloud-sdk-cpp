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

#include <tencentcloud/databuddy/v20260715/model/WorkspaceGroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

WorkspaceGroupInfo::WorkspaceGroupInfo() :
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_rolesHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_userCountHasBeenSet(false),
    m_groupTypeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome WorkspaceGroupInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceGroupInfo.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceGroupInfo.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("Roles") && !value["Roles"].IsNull())
    {
        if (!value["Roles"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WorkspaceGroupInfo.Roles` is not array type"));

        const rapidjson::Value &tmpValue = value["Roles"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RoleBasicInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_roles.push_back(item);
        }
        m_rolesHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceGroupInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceGroupInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("UserCount") && !value["UserCount"].IsNull())
    {
        if (!value["UserCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceGroupInfo.UserCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_userCount = value["UserCount"].GetInt64();
        m_userCountHasBeenSet = true;
    }

    if (value.HasMember("GroupType") && !value["GroupType"].IsNull())
    {
        if (!value["GroupType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceGroupInfo.GroupType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupType = string(value["GroupType"].GetString());
        m_groupTypeHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WorkspaceGroupInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UserTagInfo item;
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


    return CoreInternalOutcome(true);
}

void WorkspaceGroupInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_rolesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Roles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_roles.begin(); itr != m_roles.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_userCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userCount, allocator);
    }

    if (m_groupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupType.c_str(), allocator).Move(), allocator);
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

}


string WorkspaceGroupInfo::GetGroupId() const
{
    return m_groupId;
}

void WorkspaceGroupInfo::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool WorkspaceGroupInfo::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string WorkspaceGroupInfo::GetGroupName() const
{
    return m_groupName;
}

void WorkspaceGroupInfo::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool WorkspaceGroupInfo::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

vector<RoleBasicInfo> WorkspaceGroupInfo::GetRoles() const
{
    return m_roles;
}

void WorkspaceGroupInfo::SetRoles(const vector<RoleBasicInfo>& _roles)
{
    m_roles = _roles;
    m_rolesHasBeenSet = true;
}

bool WorkspaceGroupInfo::RolesHasBeenSet() const
{
    return m_rolesHasBeenSet;
}

string WorkspaceGroupInfo::GetCreateTime() const
{
    return m_createTime;
}

void WorkspaceGroupInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool WorkspaceGroupInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string WorkspaceGroupInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void WorkspaceGroupInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool WorkspaceGroupInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t WorkspaceGroupInfo::GetUserCount() const
{
    return m_userCount;
}

void WorkspaceGroupInfo::SetUserCount(const int64_t& _userCount)
{
    m_userCount = _userCount;
    m_userCountHasBeenSet = true;
}

bool WorkspaceGroupInfo::UserCountHasBeenSet() const
{
    return m_userCountHasBeenSet;
}

string WorkspaceGroupInfo::GetGroupType() const
{
    return m_groupType;
}

void WorkspaceGroupInfo::SetGroupType(const string& _groupType)
{
    m_groupType = _groupType;
    m_groupTypeHasBeenSet = true;
}

bool WorkspaceGroupInfo::GroupTypeHasBeenSet() const
{
    return m_groupTypeHasBeenSet;
}

vector<UserTagInfo> WorkspaceGroupInfo::GetTags() const
{
    return m_tags;
}

void WorkspaceGroupInfo::SetTags(const vector<UserTagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool WorkspaceGroupInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

