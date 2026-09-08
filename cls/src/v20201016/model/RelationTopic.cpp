/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/cls/v20201016/model/RelationTopic.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

RelationTopic::RelationTopic() :
    m_topicIdHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome RelationTopic::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RelationTopic.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RelationTopic.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RelationTopic.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RelationTopic::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

}


string RelationTopic::GetTopicId() const
{
    return m_topicId;
}

void RelationTopic::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool RelationTopic::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string RelationTopic::GetTopicName() const
{
    return m_topicName;
}

void RelationTopic::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool RelationTopic::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string RelationTopic::GetType() const
{
    return m_type;
}

void RelationTopic::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool RelationTopic::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

