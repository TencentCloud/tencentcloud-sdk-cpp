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

#include <tencentcloud/bda/v20200324/model/GroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bda::V20200324::Model;
using namespace rapidjson;
using namespace std;

GroupInfo::GroupInfo() :
    m_groupNameHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_bodyModelVersionHasBeenSet(false),
    m_creationTimestampHasBeenSet(false)
{
}

CoreInternalOutcome GroupInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Error("response `GroupInfo.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Error("response `GroupInfo.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsString())
        {
            return CoreInternalOutcome(Error("response `GroupInfo.Tag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tag = string(value["Tag"].GetString());
        m_tagHasBeenSet = true;
    }

    if (value.HasMember("BodyModelVersion") && !value["BodyModelVersion"].IsNull())
    {
        if (!value["BodyModelVersion"].IsString())
        {
            return CoreInternalOutcome(Error("response `GroupInfo.BodyModelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bodyModelVersion = string(value["BodyModelVersion"].GetString());
        m_bodyModelVersionHasBeenSet = true;
    }

    if (value.HasMember("CreationTimestamp") && !value["CreationTimestamp"].IsNull())
    {
        if (!value["CreationTimestamp"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `GroupInfo.CreationTimestamp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_creationTimestamp = value["CreationTimestamp"].GetUint64();
        m_creationTimestampHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GroupInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_groupNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_tagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_tag.c_str(), allocator).Move(), allocator);
    }

    if (m_bodyModelVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BodyModelVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_bodyModelVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_creationTimestampHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreationTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_creationTimestamp, allocator);
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

string GroupInfo::GetTag() const
{
    return m_tag;
}

void GroupInfo::SetTag(const string& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool GroupInfo::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

string GroupInfo::GetBodyModelVersion() const
{
    return m_bodyModelVersion;
}

void GroupInfo::SetBodyModelVersion(const string& _bodyModelVersion)
{
    m_bodyModelVersion = _bodyModelVersion;
    m_bodyModelVersionHasBeenSet = true;
}

bool GroupInfo::BodyModelVersionHasBeenSet() const
{
    return m_bodyModelVersionHasBeenSet;
}

uint64_t GroupInfo::GetCreationTimestamp() const
{
    return m_creationTimestamp;
}

void GroupInfo::SetCreationTimestamp(const uint64_t& _creationTimestamp)
{
    m_creationTimestamp = _creationTimestamp;
    m_creationTimestampHasBeenSet = true;
}

bool GroupInfo::CreationTimestampHasBeenSet() const
{
    return m_creationTimestampHasBeenSet;
}

