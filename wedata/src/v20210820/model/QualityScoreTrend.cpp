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

#include <tencentcloud/wedata/v20210820/model/QualityScoreTrend.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

QualityScoreTrend::QualityScoreTrend() :
    m_averageScoreHasBeenSet(false),
    m_dailyScoreListHasBeenSet(false)
{
}

CoreInternalOutcome QualityScoreTrend::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AverageScore") && !value["AverageScore"].IsNull())
    {
        if (!value["AverageScore"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `QualityScoreTrend.AverageScore` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_averageScore = value["AverageScore"].GetDouble();
        m_averageScoreHasBeenSet = true;
    }

    if (value.HasMember("DailyScoreList") && !value["DailyScoreList"].IsNull())
    {
        if (!value["DailyScoreList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QualityScoreTrend.DailyScoreList` is not array type"));

        const rapidjson::Value &tmpValue = value["DailyScoreList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DailyScoreInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dailyScoreList.push_back(item);
        }
        m_dailyScoreListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QualityScoreTrend::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_averageScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AverageScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_averageScore, allocator);
    }

    if (m_dailyScoreListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DailyScoreList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dailyScoreList.begin(); itr != m_dailyScoreList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


double QualityScoreTrend::GetAverageScore() const
{
    return m_averageScore;
}

void QualityScoreTrend::SetAverageScore(const double& _averageScore)
{
    m_averageScore = _averageScore;
    m_averageScoreHasBeenSet = true;
}

bool QualityScoreTrend::AverageScoreHasBeenSet() const
{
    return m_averageScoreHasBeenSet;
}

vector<DailyScoreInfo> QualityScoreTrend::GetDailyScoreList() const
{
    return m_dailyScoreList;
}

void QualityScoreTrend::SetDailyScoreList(const vector<DailyScoreInfo>& _dailyScoreList)
{
    m_dailyScoreList = _dailyScoreList;
    m_dailyScoreListHasBeenSet = true;
}

bool QualityScoreTrend::DailyScoreListHasBeenSet() const
{
    return m_dailyScoreListHasBeenSet;
}

