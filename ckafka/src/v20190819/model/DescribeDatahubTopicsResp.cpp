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

#include <tencentcloud/ckafka/v20190819/model/DescribeDatahubTopicsResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

DescribeDatahubTopicsResp::DescribeDatahubTopicsResp() :
    m_totalCountHasBeenSet(false),
    m_topicListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDatahubTopicsResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDatahubTopicsResp.TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("TopicList") && !value["TopicList"].IsNull())
    {
        if (!value["TopicList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeDatahubTopicsResp.TopicList` is not array type"));

        const rapidjson::Value &tmpValue = value["TopicList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DatahubTopicDTO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_topicList.push_back(item);
        }
        m_topicListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeDatahubTopicsResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_topicListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_topicList.begin(); itr != m_topicList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t DescribeDatahubTopicsResp::GetTotalCount() const
{
    return m_totalCount;
}

void DescribeDatahubTopicsResp::SetTotalCount(const uint64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool DescribeDatahubTopicsResp::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<DatahubTopicDTO> DescribeDatahubTopicsResp::GetTopicList() const
{
    return m_topicList;
}

void DescribeDatahubTopicsResp::SetTopicList(const vector<DatahubTopicDTO>& _topicList)
{
    m_topicList = _topicList;
    m_topicListHasBeenSet = true;
}

bool DescribeDatahubTopicsResp::TopicListHasBeenSet() const
{
    return m_topicListHasBeenSet;
}

