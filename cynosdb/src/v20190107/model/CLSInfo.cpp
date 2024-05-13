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

#include <tencentcloud/cynosdb/v20190107/model/CLSInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

CLSInfo::CLSInfo() :
    m_topicOperationHasBeenSet(false),
    m_groupOperationHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false)
{
}

CoreInternalOutcome CLSInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TopicOperation") && !value["TopicOperation"].IsNull())
    {
        if (!value["TopicOperation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CLSInfo.TopicOperation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicOperation = string(value["TopicOperation"].GetString());
        m_topicOperationHasBeenSet = true;
    }

    if (value.HasMember("GroupOperation") && !value["GroupOperation"].IsNull())
    {
        if (!value["GroupOperation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CLSInfo.GroupOperation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupOperation = string(value["GroupOperation"].GetString());
        m_groupOperationHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CLSInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CLSInfo.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CLSInfo.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CLSInfo.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CLSInfo.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CLSInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_topicOperationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicOperation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicOperation.c_str(), allocator).Move(), allocator);
    }

    if (m_groupOperationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupOperation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupOperation.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

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

}


string CLSInfo::GetTopicOperation() const
{
    return m_topicOperation;
}

void CLSInfo::SetTopicOperation(const string& _topicOperation)
{
    m_topicOperation = _topicOperation;
    m_topicOperationHasBeenSet = true;
}

bool CLSInfo::TopicOperationHasBeenSet() const
{
    return m_topicOperationHasBeenSet;
}

string CLSInfo::GetGroupOperation() const
{
    return m_groupOperation;
}

void CLSInfo::SetGroupOperation(const string& _groupOperation)
{
    m_groupOperation = _groupOperation;
    m_groupOperationHasBeenSet = true;
}

bool CLSInfo::GroupOperationHasBeenSet() const
{
    return m_groupOperationHasBeenSet;
}

string CLSInfo::GetRegion() const
{
    return m_region;
}

void CLSInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool CLSInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string CLSInfo::GetTopicId() const
{
    return m_topicId;
}

void CLSInfo::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool CLSInfo::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string CLSInfo::GetTopicName() const
{
    return m_topicName;
}

void CLSInfo::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool CLSInfo::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string CLSInfo::GetGroupId() const
{
    return m_groupId;
}

void CLSInfo::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool CLSInfo::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string CLSInfo::GetGroupName() const
{
    return m_groupName;
}

void CLSInfo::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool CLSInfo::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

