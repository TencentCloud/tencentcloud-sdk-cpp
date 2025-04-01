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

#include <tencentcloud/dbbrain/v20210527/model/HealthStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

HealthStatus::HealthStatus() :
    m_healthScoreHasBeenSet(false),
    m_healthLevelHasBeenSet(false),
    m_scoreLostHasBeenSet(false),
    m_scoreDetailsHasBeenSet(false),
    m_healthLevelVersionHasBeenSet(false)
{
}

CoreInternalOutcome HealthStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HealthScore") && !value["HealthScore"].IsNull())
    {
        if (!value["HealthScore"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HealthStatus.HealthScore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_healthScore = value["HealthScore"].GetInt64();
        m_healthScoreHasBeenSet = true;
    }

    if (value.HasMember("HealthLevel") && !value["HealthLevel"].IsNull())
    {
        if (!value["HealthLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthStatus.HealthLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthLevel = string(value["HealthLevel"].GetString());
        m_healthLevelHasBeenSet = true;
    }

    if (value.HasMember("ScoreLost") && !value["ScoreLost"].IsNull())
    {
        if (!value["ScoreLost"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HealthStatus.ScoreLost` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scoreLost = value["ScoreLost"].GetInt64();
        m_scoreLostHasBeenSet = true;
    }

    if (value.HasMember("ScoreDetails") && !value["ScoreDetails"].IsNull())
    {
        if (!value["ScoreDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HealthStatus.ScoreDetails` is not array type"));

        const rapidjson::Value &tmpValue = value["ScoreDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ScoreDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_scoreDetails.push_back(item);
        }
        m_scoreDetailsHasBeenSet = true;
    }

    if (value.HasMember("HealthLevelVersion") && !value["HealthLevelVersion"].IsNull())
    {
        if (!value["HealthLevelVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthStatus.HealthLevelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthLevelVersion = string(value["HealthLevelVersion"].GetString());
        m_healthLevelVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HealthStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_healthScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthScore, allocator);
    }

    if (m_healthLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_healthLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_scoreLostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScoreLost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scoreLost, allocator);
    }

    if (m_scoreDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScoreDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_scoreDetails.begin(); itr != m_scoreDetails.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_healthLevelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthLevelVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_healthLevelVersion.c_str(), allocator).Move(), allocator);
    }

}


int64_t HealthStatus::GetHealthScore() const
{
    return m_healthScore;
}

void HealthStatus::SetHealthScore(const int64_t& _healthScore)
{
    m_healthScore = _healthScore;
    m_healthScoreHasBeenSet = true;
}

bool HealthStatus::HealthScoreHasBeenSet() const
{
    return m_healthScoreHasBeenSet;
}

string HealthStatus::GetHealthLevel() const
{
    return m_healthLevel;
}

void HealthStatus::SetHealthLevel(const string& _healthLevel)
{
    m_healthLevel = _healthLevel;
    m_healthLevelHasBeenSet = true;
}

bool HealthStatus::HealthLevelHasBeenSet() const
{
    return m_healthLevelHasBeenSet;
}

int64_t HealthStatus::GetScoreLost() const
{
    return m_scoreLost;
}

void HealthStatus::SetScoreLost(const int64_t& _scoreLost)
{
    m_scoreLost = _scoreLost;
    m_scoreLostHasBeenSet = true;
}

bool HealthStatus::ScoreLostHasBeenSet() const
{
    return m_scoreLostHasBeenSet;
}

vector<ScoreDetail> HealthStatus::GetScoreDetails() const
{
    return m_scoreDetails;
}

void HealthStatus::SetScoreDetails(const vector<ScoreDetail>& _scoreDetails)
{
    m_scoreDetails = _scoreDetails;
    m_scoreDetailsHasBeenSet = true;
}

bool HealthStatus::ScoreDetailsHasBeenSet() const
{
    return m_scoreDetailsHasBeenSet;
}

string HealthStatus::GetHealthLevelVersion() const
{
    return m_healthLevelVersion;
}

void HealthStatus::SetHealthLevelVersion(const string& _healthLevelVersion)
{
    m_healthLevelVersion = _healthLevelVersion;
    m_healthLevelVersionHasBeenSet = true;
}

bool HealthStatus::HealthLevelVersionHasBeenSet() const
{
    return m_healthLevelVersionHasBeenSet;
}

