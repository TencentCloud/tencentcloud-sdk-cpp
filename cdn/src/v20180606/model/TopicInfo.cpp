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

#include <tencentcloud/cdn/v20180606/model/TopicInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace rapidjson;
using namespace std;

TopicInfo::TopicInfo() :
    m_topicIdHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome TopicInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Error("response `TopicInfo.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Error("response `TopicInfo.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TopicInfo.Enabled` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetInt64();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `TopicInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TopicInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_topicIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


string TopicInfo::GetTopicId() const
{
    return m_topicId;
}

void TopicInfo::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool TopicInfo::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string TopicInfo::GetTopicName() const
{
    return m_topicName;
}

void TopicInfo::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool TopicInfo::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

int64_t TopicInfo::GetEnabled() const
{
    return m_enabled;
}

void TopicInfo::SetEnabled(const int64_t& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool TopicInfo::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

string TopicInfo::GetCreateTime() const
{
    return m_createTime;
}

void TopicInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TopicInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

