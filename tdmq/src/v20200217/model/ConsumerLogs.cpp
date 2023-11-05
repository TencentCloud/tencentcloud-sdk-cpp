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

#include <tencentcloud/tdmq/v20200217/model/ConsumerLogs.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

ConsumerLogs::ConsumerLogs() :
    m_totalCountHasBeenSet(false),
    m_consumerLogSetsHasBeenSet(false)
{
}

CoreInternalOutcome ConsumerLogs::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerLogs.TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("ConsumerLogSets") && !value["ConsumerLogSets"].IsNull())
    {
        if (!value["ConsumerLogSets"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConsumerLogs.ConsumerLogSets` is not array type"));

        const rapidjson::Value &tmpValue = value["ConsumerLogSets"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConsumerLog item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_consumerLogSets.push_back(item);
        }
        m_consumerLogSetsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConsumerLogs::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_consumerLogSetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerLogSets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_consumerLogSets.begin(); itr != m_consumerLogSets.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t ConsumerLogs::GetTotalCount() const
{
    return m_totalCount;
}

void ConsumerLogs::SetTotalCount(const uint64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool ConsumerLogs::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<ConsumerLog> ConsumerLogs::GetConsumerLogSets() const
{
    return m_consumerLogSets;
}

void ConsumerLogs::SetConsumerLogSets(const vector<ConsumerLog>& _consumerLogSets)
{
    m_consumerLogSets = _consumerLogSets;
    m_consumerLogSetsHasBeenSet = true;
}

bool ConsumerLogs::ConsumerLogSetsHasBeenSet() const
{
    return m_consumerLogSetsHasBeenSet;
}

