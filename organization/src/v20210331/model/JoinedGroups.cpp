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

#include <tencentcloud/organization/v20210331/model/JoinedGroups.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

JoinedGroups::JoinedGroups() :
    m_groupNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_groupTypeHasBeenSet(false),
    m_joinTimeHasBeenSet(false)
{
}

CoreInternalOutcome JoinedGroups::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JoinedGroups.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JoinedGroups.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JoinedGroups.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupType") && !value["GroupType"].IsNull())
    {
        if (!value["GroupType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JoinedGroups.GroupType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupType = string(value["GroupType"].GetString());
        m_groupTypeHasBeenSet = true;
    }

    if (value.HasMember("JoinTime") && !value["JoinTime"].IsNull())
    {
        if (!value["JoinTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JoinedGroups.JoinTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_joinTime = string(value["JoinTime"].GetString());
        m_joinTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void JoinedGroups::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupType.c_str(), allocator).Move(), allocator);
    }

    if (m_joinTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JoinTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_joinTime.c_str(), allocator).Move(), allocator);
    }

}


string JoinedGroups::GetGroupName() const
{
    return m_groupName;
}

void JoinedGroups::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool JoinedGroups::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string JoinedGroups::GetDescription() const
{
    return m_description;
}

void JoinedGroups::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool JoinedGroups::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string JoinedGroups::GetGroupId() const
{
    return m_groupId;
}

void JoinedGroups::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool JoinedGroups::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string JoinedGroups::GetGroupType() const
{
    return m_groupType;
}

void JoinedGroups::SetGroupType(const string& _groupType)
{
    m_groupType = _groupType;
    m_groupTypeHasBeenSet = true;
}

bool JoinedGroups::GroupTypeHasBeenSet() const
{
    return m_groupTypeHasBeenSet;
}

string JoinedGroups::GetJoinTime() const
{
    return m_joinTime;
}

void JoinedGroups::SetJoinTime(const string& _joinTime)
{
    m_joinTime = _joinTime;
    m_joinTimeHasBeenSet = true;
}

bool JoinedGroups::JoinTimeHasBeenSet() const
{
    return m_joinTimeHasBeenSet;
}

