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

#include <tencentcloud/dnspod/v20210323/model/RecordGroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

RecordGroupInfo::RecordGroupInfo() :
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_groupTypeHasBeenSet(false)
{
}

CoreInternalOutcome RecordGroupInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordGroupInfo.GroupId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = value["GroupId"].GetUint64();
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordGroupInfo.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("GroupType") && !value["GroupType"].IsNull())
    {
        if (!value["GroupType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordGroupInfo.GroupType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupType = string(value["GroupType"].GetString());
        m_groupTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RecordGroupInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupId, allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_groupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupType.c_str(), allocator).Move(), allocator);
    }

}


uint64_t RecordGroupInfo::GetGroupId() const
{
    return m_groupId;
}

void RecordGroupInfo::SetGroupId(const uint64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool RecordGroupInfo::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string RecordGroupInfo::GetGroupName() const
{
    return m_groupName;
}

void RecordGroupInfo::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool RecordGroupInfo::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string RecordGroupInfo::GetGroupType() const
{
    return m_groupType;
}

void RecordGroupInfo::SetGroupType(const string& _groupType)
{
    m_groupType = _groupType;
    m_groupTypeHasBeenSet = true;
}

bool RecordGroupInfo::GroupTypeHasBeenSet() const
{
    return m_groupTypeHasBeenSet;
}

