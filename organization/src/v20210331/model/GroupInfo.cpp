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

#include <tencentcloud/organization/v20210331/model/GroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

GroupInfo::GroupInfo() :
    m_groupNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_groupTypeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_memberCountHasBeenSet(false),
    m_isSelectedHasBeenSet(false)
{
}

CoreInternalOutcome GroupInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfo.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("GroupType") && !value["GroupType"].IsNull())
    {
        if (!value["GroupType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfo.GroupType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupType = string(value["GroupType"].GetString());
        m_groupTypeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfo.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("MemberCount") && !value["MemberCount"].IsNull())
    {
        if (!value["MemberCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfo.MemberCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memberCount = value["MemberCount"].GetInt64();
        m_memberCountHasBeenSet = true;
    }

    if (value.HasMember("IsSelected") && !value["IsSelected"].IsNull())
    {
        if (!value["IsSelected"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfo.IsSelected` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSelected = value["IsSelected"].GetBool();
        m_isSelectedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GroupInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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
        value.AddMember(iKey, rapidjson::Value(m_groupType.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_memberCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memberCount, allocator);
    }

    if (m_isSelectedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSelected";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSelected, allocator);
    }

}


string GroupInfo::GetGroupName() const
{
    return m_groupName;
}

void GroupInfo::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool GroupInfo::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string GroupInfo::GetDescription() const
{
    return m_description;
}

void GroupInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool GroupInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string GroupInfo::GetCreateTime() const
{
    return m_createTime;
}

void GroupInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool GroupInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string GroupInfo::GetGroupType() const
{
    return m_groupType;
}

void GroupInfo::SetGroupType(const string& _groupType)
{
    m_groupType = _groupType;
    m_groupTypeHasBeenSet = true;
}

bool GroupInfo::GroupTypeHasBeenSet() const
{
    return m_groupTypeHasBeenSet;
}

string GroupInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void GroupInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool GroupInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string GroupInfo::GetGroupId() const
{
    return m_groupId;
}

void GroupInfo::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool GroupInfo::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

int64_t GroupInfo::GetMemberCount() const
{
    return m_memberCount;
}

void GroupInfo::SetMemberCount(const int64_t& _memberCount)
{
    m_memberCount = _memberCount;
    m_memberCountHasBeenSet = true;
}

bool GroupInfo::MemberCountHasBeenSet() const
{
    return m_memberCountHasBeenSet;
}

bool GroupInfo::GetIsSelected() const
{
    return m_isSelected;
}

void GroupInfo::SetIsSelected(const bool& _isSelected)
{
    m_isSelected = _isSelected;
    m_isSelectedHasBeenSet = true;
}

bool GroupInfo::IsSelectedHasBeenSet() const
{
    return m_isSelectedHasBeenSet;
}

