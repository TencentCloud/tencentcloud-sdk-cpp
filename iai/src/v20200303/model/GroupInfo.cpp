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

#include <tencentcloud/iai/v20200303/model/GroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iai::V20200303::Model;
using namespace std;

GroupInfo::GroupInfo() :
    m_groupNameHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_groupExDescriptionsHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_faceModelVersionHasBeenSet(false),
    m_creationTimestampHasBeenSet(false)
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

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfo.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupExDescriptions") && !value["GroupExDescriptions"].IsNull())
    {
        if (!value["GroupExDescriptions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GroupInfo.GroupExDescriptions` is not array type"));

        const rapidjson::Value &tmpValue = value["GroupExDescriptions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_groupExDescriptions.push_back((*itr).GetString());
        }
        m_groupExDescriptionsHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfo.Tag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tag = string(value["Tag"].GetString());
        m_tagHasBeenSet = true;
    }

    if (value.HasMember("FaceModelVersion") && !value["FaceModelVersion"].IsNull())
    {
        if (!value["FaceModelVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfo.FaceModelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_faceModelVersion = string(value["FaceModelVersion"].GetString());
        m_faceModelVersionHasBeenSet = true;
    }

    if (value.HasMember("CreationTimestamp") && !value["CreationTimestamp"].IsNull())
    {
        if (!value["CreationTimestamp"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfo.CreationTimestamp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_creationTimestamp = value["CreationTimestamp"].GetUint64();
        m_creationTimestampHasBeenSet = true;
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

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupExDescriptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupExDescriptions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groupExDescriptions.begin(); itr != m_groupExDescriptions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tag.c_str(), allocator).Move(), allocator);
    }

    if (m_faceModelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceModelVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_faceModelVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_creationTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
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

vector<string> GroupInfo::GetGroupExDescriptions() const
{
    return m_groupExDescriptions;
}

void GroupInfo::SetGroupExDescriptions(const vector<string>& _groupExDescriptions)
{
    m_groupExDescriptions = _groupExDescriptions;
    m_groupExDescriptionsHasBeenSet = true;
}

bool GroupInfo::GroupExDescriptionsHasBeenSet() const
{
    return m_groupExDescriptionsHasBeenSet;
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

string GroupInfo::GetFaceModelVersion() const
{
    return m_faceModelVersion;
}

void GroupInfo::SetFaceModelVersion(const string& _faceModelVersion)
{
    m_faceModelVersion = _faceModelVersion;
    m_faceModelVersionHasBeenSet = true;
}

bool GroupInfo::FaceModelVersionHasBeenSet() const
{
    return m_faceModelVersionHasBeenSet;
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

