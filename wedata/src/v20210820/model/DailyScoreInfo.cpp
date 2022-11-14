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

#include <tencentcloud/wedata/v20210820/model/DailyScoreInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DailyScoreInfo::DailyScoreInfo() :
    m_statisticsDateHasBeenSet(false),
    m_scoreHasBeenSet(false)
{
}

CoreInternalOutcome DailyScoreInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StatisticsDate") && !value["StatisticsDate"].IsNull())
    {
        if (!value["StatisticsDate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DailyScoreInfo.StatisticsDate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_statisticsDate = value["StatisticsDate"].GetInt64();
        m_statisticsDateHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DailyScoreInfo.Score` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetDouble();
        m_scoreHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DailyScoreInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statisticsDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatisticsDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_statisticsDate, allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

}


int64_t DailyScoreInfo::GetStatisticsDate() const
{
    return m_statisticsDate;
}

void DailyScoreInfo::SetStatisticsDate(const int64_t& _statisticsDate)
{
    m_statisticsDate = _statisticsDate;
    m_statisticsDateHasBeenSet = true;
}

bool DailyScoreInfo::StatisticsDateHasBeenSet() const
{
    return m_statisticsDateHasBeenSet;
}

double DailyScoreInfo::GetScore() const
{
    return m_score;
}

void DailyScoreInfo::SetScore(const double& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool DailyScoreInfo::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

