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

#include <tencentcloud/ckafka/v20190819/model/BrokerTopicFlowData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

BrokerTopicFlowData::BrokerTopicFlowData() :
    m_topicNameHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_topicTrafficHasBeenSet(false)
{
}

CoreInternalOutcome BrokerTopicFlowData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrokerTopicFlowData.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrokerTopicFlowData.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("TopicTraffic") && !value["TopicTraffic"].IsNull())
    {
        if (!value["TopicTraffic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrokerTopicFlowData.TopicTraffic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicTraffic = string(value["TopicTraffic"].GetString());
        m_topicTrafficHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BrokerTopicFlowData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicTrafficHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicTraffic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicTraffic.c_str(), allocator).Move(), allocator);
    }

}


string BrokerTopicFlowData::GetTopicName() const
{
    return m_topicName;
}

void BrokerTopicFlowData::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool BrokerTopicFlowData::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string BrokerTopicFlowData::GetTopicId() const
{
    return m_topicId;
}

void BrokerTopicFlowData::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool BrokerTopicFlowData::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string BrokerTopicFlowData::GetTopicTraffic() const
{
    return m_topicTraffic;
}

void BrokerTopicFlowData::SetTopicTraffic(const string& _topicTraffic)
{
    m_topicTraffic = _topicTraffic;
    m_topicTrafficHasBeenSet = true;
}

bool BrokerTopicFlowData::TopicTrafficHasBeenSet() const
{
    return m_topicTrafficHasBeenSet;
}

