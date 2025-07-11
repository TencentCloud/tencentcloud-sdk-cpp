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

#include <tencentcloud/emr/v20190103/model/LoadMetricsConditions.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

LoadMetricsConditions::LoadMetricsConditions() :
    m_loadMetricsHasBeenSet(false),
    m_matchHasBeenSet(false)
{
}

CoreInternalOutcome LoadMetricsConditions::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LoadMetrics") && !value["LoadMetrics"].IsNull())
    {
        if (!value["LoadMetrics"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LoadMetricsConditions.LoadMetrics` is not array type"));

        const rapidjson::Value &tmpValue = value["LoadMetrics"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LoadMetricsCondition item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_loadMetrics.push_back(item);
        }
        m_loadMetricsHasBeenSet = true;
    }

    if (value.HasMember("Match") && !value["Match"].IsNull())
    {
        if (!value["Match"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LoadMetricsConditions.Match` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_match = value["Match"].GetInt64();
        m_matchHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LoadMetricsConditions::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_loadMetricsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadMetrics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_loadMetrics.begin(); itr != m_loadMetrics.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_matchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Match";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_match, allocator);
    }

}


vector<LoadMetricsCondition> LoadMetricsConditions::GetLoadMetrics() const
{
    return m_loadMetrics;
}

void LoadMetricsConditions::SetLoadMetrics(const vector<LoadMetricsCondition>& _loadMetrics)
{
    m_loadMetrics = _loadMetrics;
    m_loadMetricsHasBeenSet = true;
}

bool LoadMetricsConditions::LoadMetricsHasBeenSet() const
{
    return m_loadMetricsHasBeenSet;
}

int64_t LoadMetricsConditions::GetMatch() const
{
    return m_match;
}

void LoadMetricsConditions::SetMatch(const int64_t& _match)
{
    m_match = _match;
    m_matchHasBeenSet = true;
}

bool LoadMetricsConditions::MatchHasBeenSet() const
{
    return m_matchHasBeenSet;
}

