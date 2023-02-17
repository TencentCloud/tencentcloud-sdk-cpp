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

#include <tencentcloud/lcic/v20220817/model/GroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

GroupInfo::GroupInfo() :
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_teacherIdHasBeenSet(false),
    m_groupTypeHasBeenSet(false),
    m_subGroupIdsHasBeenSet(false)
{
}

CoreInternalOutcome GroupInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfo.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfo.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("TeacherId") && !value["TeacherId"].IsNull())
    {
        if (!value["TeacherId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfo.TeacherId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_teacherId = string(value["TeacherId"].GetString());
        m_teacherIdHasBeenSet = true;
    }

    if (value.HasMember("GroupType") && !value["GroupType"].IsNull())
    {
        if (!value["GroupType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfo.GroupType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_groupType = value["GroupType"].GetUint64();
        m_groupTypeHasBeenSet = true;
    }

    if (value.HasMember("SubGroupIds") && !value["SubGroupIds"].IsNull())
    {
        if (!value["SubGroupIds"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfo.SubGroupIds` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subGroupIds = string(value["SubGroupIds"].GetString());
        m_subGroupIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GroupInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_teacherIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeacherId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_teacherId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupType, allocator);
    }

    if (m_subGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubGroupIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subGroupIds.c_str(), allocator).Move(), allocator);
    }

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

string GroupInfo::GetTeacherId() const
{
    return m_teacherId;
}

void GroupInfo::SetTeacherId(const string& _teacherId)
{
    m_teacherId = _teacherId;
    m_teacherIdHasBeenSet = true;
}

bool GroupInfo::TeacherIdHasBeenSet() const
{
    return m_teacherIdHasBeenSet;
}

uint64_t GroupInfo::GetGroupType() const
{
    return m_groupType;
}

void GroupInfo::SetGroupType(const uint64_t& _groupType)
{
    m_groupType = _groupType;
    m_groupTypeHasBeenSet = true;
}

bool GroupInfo::GroupTypeHasBeenSet() const
{
    return m_groupTypeHasBeenSet;
}

string GroupInfo::GetSubGroupIds() const
{
    return m_subGroupIds;
}

void GroupInfo::SetSubGroupIds(const string& _subGroupIds)
{
    m_subGroupIds = _subGroupIds;
    m_subGroupIdsHasBeenSet = true;
}

bool GroupInfo::SubGroupIdsHasBeenSet() const
{
    return m_subGroupIdsHasBeenSet;
}

