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

#include <tencentcloud/mps/v20190612/model/FlowStatisticsArray.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

FlowStatisticsArray::FlowStatisticsArray() :
    m_timestampHasBeenSet(false),
    m_flowStatisticsHasBeenSet(false)
{
}

CoreInternalOutcome FlowStatisticsArray::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowStatisticsArray.Timestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = value["Timestamp"].GetInt64();
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("FlowStatistics") && !value["FlowStatistics"].IsNull())
    {
        if (!value["FlowStatistics"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlowStatisticsArray.FlowStatistics` is not array type"));

        const rapidjson::Value &tmpValue = value["FlowStatistics"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FlowStatistics item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_flowStatistics.push_back(item);
        }
        m_flowStatisticsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlowStatisticsArray::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
    }

    if (m_flowStatisticsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowStatistics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_flowStatistics.begin(); itr != m_flowStatistics.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t FlowStatisticsArray::GetTimestamp() const
{
    return m_timestamp;
}

void FlowStatisticsArray::SetTimestamp(const int64_t& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool FlowStatisticsArray::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

vector<FlowStatistics> FlowStatisticsArray::GetFlowStatistics() const
{
    return m_flowStatistics;
}

void FlowStatisticsArray::SetFlowStatistics(const vector<FlowStatistics>& _flowStatistics)
{
    m_flowStatistics = _flowStatistics;
    m_flowStatisticsHasBeenSet = true;
}

bool FlowStatisticsArray::FlowStatisticsHasBeenSet() const
{
    return m_flowStatisticsHasBeenSet;
}

