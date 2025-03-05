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

#include <tencentcloud/cdwpg/v20201230/model/SlowLogDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwpg::V20201230::Model;
using namespace std;

SlowLogDetail::SlowLogDetail() :
    m_totalTimeHasBeenSet(false),
    m_totalCallTimesHasBeenSet(false),
    m_normalQuerysHasBeenSet(false)
{
}

CoreInternalOutcome SlowLogDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalTime") && !value["TotalTime"].IsNull())
    {
        if (!value["TotalTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogDetail.TotalTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalTime = value["TotalTime"].GetDouble();
        m_totalTimeHasBeenSet = true;
    }

    if (value.HasMember("TotalCallTimes") && !value["TotalCallTimes"].IsNull())
    {
        if (!value["TotalCallTimes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogDetail.TotalCallTimes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCallTimes = value["TotalCallTimes"].GetInt64();
        m_totalCallTimesHasBeenSet = true;
    }

    if (value.HasMember("NormalQuerys") && !value["NormalQuerys"].IsNull())
    {
        if (!value["NormalQuerys"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SlowLogDetail.NormalQuerys` is not array type"));

        const rapidjson::Value &tmpValue = value["NormalQuerys"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NormQueryItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_normalQuerys.push_back(item);
        }
        m_normalQuerysHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SlowLogDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalTime, allocator);
    }

    if (m_totalCallTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCallTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCallTimes, allocator);
    }

    if (m_normalQuerysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NormalQuerys";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_normalQuerys.begin(); itr != m_normalQuerys.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


double SlowLogDetail::GetTotalTime() const
{
    return m_totalTime;
}

void SlowLogDetail::SetTotalTime(const double& _totalTime)
{
    m_totalTime = _totalTime;
    m_totalTimeHasBeenSet = true;
}

bool SlowLogDetail::TotalTimeHasBeenSet() const
{
    return m_totalTimeHasBeenSet;
}

int64_t SlowLogDetail::GetTotalCallTimes() const
{
    return m_totalCallTimes;
}

void SlowLogDetail::SetTotalCallTimes(const int64_t& _totalCallTimes)
{
    m_totalCallTimes = _totalCallTimes;
    m_totalCallTimesHasBeenSet = true;
}

bool SlowLogDetail::TotalCallTimesHasBeenSet() const
{
    return m_totalCallTimesHasBeenSet;
}

vector<NormQueryItem> SlowLogDetail::GetNormalQuerys() const
{
    return m_normalQuerys;
}

void SlowLogDetail::SetNormalQuerys(const vector<NormQueryItem>& _normalQuerys)
{
    m_normalQuerys = _normalQuerys;
    m_normalQuerysHasBeenSet = true;
}

bool SlowLogDetail::NormalQuerysHasBeenSet() const
{
    return m_normalQuerysHasBeenSet;
}

