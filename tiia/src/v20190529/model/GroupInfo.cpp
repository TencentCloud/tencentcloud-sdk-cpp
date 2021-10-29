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

#include <tencentcloud/tiia/v20190529/model/GroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiia::V20190529::Model;
using namespace std;

GroupInfo::GroupInfo() :
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_briefHasBeenSet(false),
    m_maxCapacityHasBeenSet(false),
    m_maxQpsHasBeenSet(false),
    m_groupTypeHasBeenSet(false),
    m_picCountHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
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

    if (value.HasMember("Brief") && !value["Brief"].IsNull())
    {
        if (!value["Brief"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfo.Brief` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brief = string(value["Brief"].GetString());
        m_briefHasBeenSet = true;
    }

    if (value.HasMember("MaxCapacity") && !value["MaxCapacity"].IsNull())
    {
        if (!value["MaxCapacity"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfo.MaxCapacity` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxCapacity = value["MaxCapacity"].GetUint64();
        m_maxCapacityHasBeenSet = true;
    }

    if (value.HasMember("MaxQps") && !value["MaxQps"].IsNull())
    {
        if (!value["MaxQps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfo.MaxQps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxQps = value["MaxQps"].GetUint64();
        m_maxQpsHasBeenSet = true;
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

    if (value.HasMember("PicCount") && !value["PicCount"].IsNull())
    {
        if (!value["PicCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfo.PicCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_picCount = value["PicCount"].GetUint64();
        m_picCountHasBeenSet = true;
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

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
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

    if (m_briefHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Brief";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_brief.c_str(), allocator).Move(), allocator);
    }

    if (m_maxCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxCapacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxCapacity, allocator);
    }

    if (m_maxQpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxQps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxQps, allocator);
    }

    if (m_groupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupType, allocator);
    }

    if (m_picCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PicCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_picCount, allocator);
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

string GroupInfo::GetBrief() const
{
    return m_brief;
}

void GroupInfo::SetBrief(const string& _brief)
{
    m_brief = _brief;
    m_briefHasBeenSet = true;
}

bool GroupInfo::BriefHasBeenSet() const
{
    return m_briefHasBeenSet;
}

uint64_t GroupInfo::GetMaxCapacity() const
{
    return m_maxCapacity;
}

void GroupInfo::SetMaxCapacity(const uint64_t& _maxCapacity)
{
    m_maxCapacity = _maxCapacity;
    m_maxCapacityHasBeenSet = true;
}

bool GroupInfo::MaxCapacityHasBeenSet() const
{
    return m_maxCapacityHasBeenSet;
}

uint64_t GroupInfo::GetMaxQps() const
{
    return m_maxQps;
}

void GroupInfo::SetMaxQps(const uint64_t& _maxQps)
{
    m_maxQps = _maxQps;
    m_maxQpsHasBeenSet = true;
}

bool GroupInfo::MaxQpsHasBeenSet() const
{
    return m_maxQpsHasBeenSet;
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

uint64_t GroupInfo::GetPicCount() const
{
    return m_picCount;
}

void GroupInfo::SetPicCount(const uint64_t& _picCount)
{
    m_picCount = _picCount;
    m_picCountHasBeenSet = true;
}

bool GroupInfo::PicCountHasBeenSet() const
{
    return m_picCountHasBeenSet;
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

