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

#include <tencentcloud/batch/v20170312/model/Notification.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Batch::V20170312::Model;
using namespace rapidjson;
using namespace std;

Notification::Notification() :
    m_topicNameHasBeenSet(false),
    m_eventConfigsHasBeenSet(false)
{
}

CoreInternalOutcome Notification::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Error("response `Notification.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("EventConfigs") && !value["EventConfigs"].IsNull())
    {
        if (!value["EventConfigs"].IsArray())
            return CoreInternalOutcome(Error("response `Notification.EventConfigs` is not array type"));

        const Value &tmpValue = value["EventConfigs"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EventConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_eventConfigs.push_back(item);
        }
        m_eventConfigsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Notification::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_topicNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_eventConfigsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EventConfigs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_eventConfigs.begin(); itr != m_eventConfigs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string Notification::GetTopicName() const
{
    return m_topicName;
}

void Notification::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool Notification::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

vector<EventConfig> Notification::GetEventConfigs() const
{
    return m_eventConfigs;
}

void Notification::SetEventConfigs(const vector<EventConfig>& _eventConfigs)
{
    m_eventConfigs = _eventConfigs;
    m_eventConfigsHasBeenSet = true;
}

bool Notification::EventConfigsHasBeenSet() const
{
    return m_eventConfigsHasBeenSet;
}

