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

#include <tencentcloud/postgres/v20170312/model/SlowlogDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

SlowlogDetail::SlowlogDetail() :
    m_totalTimeHasBeenSet(false),
    m_totalCallsHasBeenSet(false),
    m_normalQueriesHasBeenSet(false)
{
}

CoreInternalOutcome SlowlogDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalTime") && !value["TotalTime"].IsNull())
    {
        if (!value["TotalTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SlowlogDetail.TotalTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalTime = value["TotalTime"].GetDouble();
        m_totalTimeHasBeenSet = true;
    }

    if (value.HasMember("TotalCalls") && !value["TotalCalls"].IsNull())
    {
        if (!value["TotalCalls"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SlowlogDetail.TotalCalls` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCalls = value["TotalCalls"].GetInt64();
        m_totalCallsHasBeenSet = true;
    }

    if (value.HasMember("NormalQueries") && !value["NormalQueries"].IsNull())
    {
        if (!value["NormalQueries"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SlowlogDetail.NormalQueries` is not array type"));

        const rapidjson::Value &tmpValue = value["NormalQueries"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NormalQueryItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_normalQueries.push_back(item);
        }
        m_normalQueriesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SlowlogDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalTime, allocator);
    }

    if (m_totalCallsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCalls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCalls, allocator);
    }

    if (m_normalQueriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NormalQueries";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_normalQueries.begin(); itr != m_normalQueries.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


double SlowlogDetail::GetTotalTime() const
{
    return m_totalTime;
}

void SlowlogDetail::SetTotalTime(const double& _totalTime)
{
    m_totalTime = _totalTime;
    m_totalTimeHasBeenSet = true;
}

bool SlowlogDetail::TotalTimeHasBeenSet() const
{
    return m_totalTimeHasBeenSet;
}

int64_t SlowlogDetail::GetTotalCalls() const
{
    return m_totalCalls;
}

void SlowlogDetail::SetTotalCalls(const int64_t& _totalCalls)
{
    m_totalCalls = _totalCalls;
    m_totalCallsHasBeenSet = true;
}

bool SlowlogDetail::TotalCallsHasBeenSet() const
{
    return m_totalCallsHasBeenSet;
}

vector<NormalQueryItem> SlowlogDetail::GetNormalQueries() const
{
    return m_normalQueries;
}

void SlowlogDetail::SetNormalQueries(const vector<NormalQueryItem>& _normalQueries)
{
    m_normalQueries = _normalQueries;
    m_normalQueriesHasBeenSet = true;
}

bool SlowlogDetail::NormalQueriesHasBeenSet() const
{
    return m_normalQueriesHasBeenSet;
}

