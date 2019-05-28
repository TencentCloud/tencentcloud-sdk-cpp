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
using namespace rapidjson;
using namespace std;

SlowlogDetail::SlowlogDetail() :
    m_totalTimeHasBeenSet(false),
    m_totalCallsHasBeenSet(false),
    m_normalQueriesHasBeenSet(false)
{
}

CoreInternalOutcome SlowlogDetail::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalTime") && !value["TotalTime"].IsNull())
    {
        if (!value["TotalTime"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `SlowlogDetail.TotalTime` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalTime = value["TotalTime"].GetDouble();
        m_totalTimeHasBeenSet = true;
    }

    if (value.HasMember("TotalCalls") && !value["TotalCalls"].IsNull())
    {
        if (!value["TotalCalls"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `SlowlogDetail.TotalCalls` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCalls = value["TotalCalls"].GetInt64();
        m_totalCallsHasBeenSet = true;
    }

    if (value.HasMember("NormalQueries") && !value["NormalQueries"].IsNull())
    {
        if (!value["NormalQueries"].IsArray())
            return CoreInternalOutcome(Error("response `SlowlogDetail.NormalQueries` is not array type"));

        const Value &tmpValue = value["NormalQueries"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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

void SlowlogDetail::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_totalTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TotalTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalTime, allocator);
    }

    if (m_totalCallsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TotalCalls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCalls, allocator);
    }

    if (m_normalQueriesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NormalQueries";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_normalQueries.begin(); itr != m_normalQueries.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
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

