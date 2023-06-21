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

#include <tencentcloud/ckafka/v20190819/model/BrokerTopicData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

BrokerTopicData::BrokerTopicData() :
    m_topicNameHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_dataSizeHasBeenSet(false)
{
}

CoreInternalOutcome BrokerTopicData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrokerTopicData.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrokerTopicData.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("DataSize") && !value["DataSize"].IsNull())
    {
        if (!value["DataSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BrokerTopicData.DataSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dataSize = value["DataSize"].GetUint64();
        m_dataSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BrokerTopicData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_dataSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataSize, allocator);
    }

}


string BrokerTopicData::GetTopicName() const
{
    return m_topicName;
}

void BrokerTopicData::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool BrokerTopicData::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string BrokerTopicData::GetTopicId() const
{
    return m_topicId;
}

void BrokerTopicData::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool BrokerTopicData::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

uint64_t BrokerTopicData::GetDataSize() const
{
    return m_dataSize;
}

void BrokerTopicData::SetDataSize(const uint64_t& _dataSize)
{
    m_dataSize = _dataSize;
    m_dataSizeHasBeenSet = true;
}

bool BrokerTopicData::DataSizeHasBeenSet() const
{
    return m_dataSizeHasBeenSet;
}

