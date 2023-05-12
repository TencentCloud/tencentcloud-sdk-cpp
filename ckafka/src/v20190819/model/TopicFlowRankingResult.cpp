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

#include <tencentcloud/ckafka/v20190819/model/TopicFlowRankingResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

TopicFlowRankingResult::TopicFlowRankingResult() :
    m_topicFlowHasBeenSet(false),
    m_consumeSpeedHasBeenSet(false),
    m_topicMessageHeapHasBeenSet(false)
{
}

CoreInternalOutcome TopicFlowRankingResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TopicFlow") && !value["TopicFlow"].IsNull())
    {
        if (!value["TopicFlow"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TopicFlowRankingResult.TopicFlow` is not array type"));

        const rapidjson::Value &tmpValue = value["TopicFlow"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TopicFlowRanking item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_topicFlow.push_back(item);
        }
        m_topicFlowHasBeenSet = true;
    }

    if (value.HasMember("ConsumeSpeed") && !value["ConsumeSpeed"].IsNull())
    {
        if (!value["ConsumeSpeed"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TopicFlowRankingResult.ConsumeSpeed` is not array type"));

        const rapidjson::Value &tmpValue = value["ConsumeSpeed"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConsumerGroupSpeed item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_consumeSpeed.push_back(item);
        }
        m_consumeSpeedHasBeenSet = true;
    }

    if (value.HasMember("TopicMessageHeap") && !value["TopicMessageHeap"].IsNull())
    {
        if (!value["TopicMessageHeap"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TopicFlowRankingResult.TopicMessageHeap` is not array type"));

        const rapidjson::Value &tmpValue = value["TopicMessageHeap"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TopicMessageHeapRanking item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_topicMessageHeap.push_back(item);
        }
        m_topicMessageHeapHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TopicFlowRankingResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_topicFlowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicFlow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_topicFlow.begin(); itr != m_topicFlow.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_consumeSpeedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumeSpeed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_consumeSpeed.begin(); itr != m_consumeSpeed.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_topicMessageHeapHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicMessageHeap";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_topicMessageHeap.begin(); itr != m_topicMessageHeap.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<TopicFlowRanking> TopicFlowRankingResult::GetTopicFlow() const
{
    return m_topicFlow;
}

void TopicFlowRankingResult::SetTopicFlow(const vector<TopicFlowRanking>& _topicFlow)
{
    m_topicFlow = _topicFlow;
    m_topicFlowHasBeenSet = true;
}

bool TopicFlowRankingResult::TopicFlowHasBeenSet() const
{
    return m_topicFlowHasBeenSet;
}

vector<ConsumerGroupSpeed> TopicFlowRankingResult::GetConsumeSpeed() const
{
    return m_consumeSpeed;
}

void TopicFlowRankingResult::SetConsumeSpeed(const vector<ConsumerGroupSpeed>& _consumeSpeed)
{
    m_consumeSpeed = _consumeSpeed;
    m_consumeSpeedHasBeenSet = true;
}

bool TopicFlowRankingResult::ConsumeSpeedHasBeenSet() const
{
    return m_consumeSpeedHasBeenSet;
}

vector<TopicMessageHeapRanking> TopicFlowRankingResult::GetTopicMessageHeap() const
{
    return m_topicMessageHeap;
}

void TopicFlowRankingResult::SetTopicMessageHeap(const vector<TopicMessageHeapRanking>& _topicMessageHeap)
{
    m_topicMessageHeap = _topicMessageHeap;
    m_topicMessageHeapHasBeenSet = true;
}

bool TopicFlowRankingResult::TopicMessageHeapHasBeenSet() const
{
    return m_topicMessageHeapHasBeenSet;
}

