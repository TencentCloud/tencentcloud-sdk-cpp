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

#include <tencentcloud/emr/v20190103/model/GroupInfos.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

GroupInfos::GroupInfos() :
    m_groupNameHasBeenSet(false),
    m_usersHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_groupTypeHasBeenSet(false),
    m_groupTypeDescHasBeenSet(false)
{
}

CoreInternalOutcome GroupInfos::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfos.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("Users") && !value["Users"].IsNull())
    {
        if (!value["Users"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GroupInfos.Users` is not array type"));

        const rapidjson::Value &tmpValue = value["Users"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_users.push_back((*itr).GetString());
        }
        m_usersHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfos.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfos.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("GroupType") && !value["GroupType"].IsNull())
    {
        if (!value["GroupType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfos.GroupType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_groupType = value["GroupType"].GetInt64();
        m_groupTypeHasBeenSet = true;
    }

    if (value.HasMember("GroupTypeDesc") && !value["GroupTypeDesc"].IsNull())
    {
        if (!value["GroupTypeDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfos.GroupTypeDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupTypeDesc = string(value["GroupTypeDesc"].GetString());
        m_groupTypeDescHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GroupInfos::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_usersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Users";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_users.begin(); itr != m_users.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_groupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupType, allocator);
    }

    if (m_groupTypeDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupTypeDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupTypeDesc.c_str(), allocator).Move(), allocator);
    }

}


string GroupInfos::GetGroupName() const
{
    return m_groupName;
}

void GroupInfos::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool GroupInfos::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

vector<string> GroupInfos::GetUsers() const
{
    return m_users;
}

void GroupInfos::SetUsers(const vector<string>& _users)
{
    m_users = _users;
    m_usersHasBeenSet = true;
}

bool GroupInfos::UsersHasBeenSet() const
{
    return m_usersHasBeenSet;
}

string GroupInfos::GetDescription() const
{
    return m_description;
}

void GroupInfos::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool GroupInfos::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string GroupInfos::GetCreateTime() const
{
    return m_createTime;
}

void GroupInfos::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool GroupInfos::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t GroupInfos::GetGroupType() const
{
    return m_groupType;
}

void GroupInfos::SetGroupType(const int64_t& _groupType)
{
    m_groupType = _groupType;
    m_groupTypeHasBeenSet = true;
}

bool GroupInfos::GroupTypeHasBeenSet() const
{
    return m_groupTypeHasBeenSet;
}

string GroupInfos::GetGroupTypeDesc() const
{
    return m_groupTypeDesc;
}

void GroupInfos::SetGroupTypeDesc(const string& _groupTypeDesc)
{
    m_groupTypeDesc = _groupTypeDesc;
    m_groupTypeDescHasBeenSet = true;
}

bool GroupInfos::GroupTypeDescHasBeenSet() const
{
    return m_groupTypeDescHasBeenSet;
}

