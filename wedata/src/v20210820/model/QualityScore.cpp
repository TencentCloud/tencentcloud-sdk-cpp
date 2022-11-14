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

#include <tencentcloud/wedata/v20210820/model/QualityScore.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

QualityScore::QualityScore() :
    m_compositeScoreHasBeenSet(false),
    m_scoringDistributionHasBeenSet(false),
    m_totalTableNumberHasBeenSet(false)
{
}

CoreInternalOutcome QualityScore::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CompositeScore") && !value["CompositeScore"].IsNull())
    {
        if (!value["CompositeScore"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `QualityScore.CompositeScore` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_compositeScore = value["CompositeScore"].GetDouble();
        m_compositeScoreHasBeenSet = true;
    }

    if (value.HasMember("ScoringDistribution") && !value["ScoringDistribution"].IsNull())
    {
        if (!value["ScoringDistribution"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QualityScore.ScoringDistribution` is not array type"));

        const rapidjson::Value &tmpValue = value["ScoringDistribution"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TableScoreStatisticsInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_scoringDistribution.push_back(item);
        }
        m_scoringDistributionHasBeenSet = true;
    }

    if (value.HasMember("TotalTableNumber") && !value["TotalTableNumber"].IsNull())
    {
        if (!value["TotalTableNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityScore.TotalTableNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalTableNumber = value["TotalTableNumber"].GetInt64();
        m_totalTableNumberHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QualityScore::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_compositeScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompositeScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_compositeScore, allocator);
    }

    if (m_scoringDistributionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScoringDistribution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_scoringDistribution.begin(); itr != m_scoringDistribution.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalTableNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalTableNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalTableNumber, allocator);
    }

}


double QualityScore::GetCompositeScore() const
{
    return m_compositeScore;
}

void QualityScore::SetCompositeScore(const double& _compositeScore)
{
    m_compositeScore = _compositeScore;
    m_compositeScoreHasBeenSet = true;
}

bool QualityScore::CompositeScoreHasBeenSet() const
{
    return m_compositeScoreHasBeenSet;
}

vector<TableScoreStatisticsInfo> QualityScore::GetScoringDistribution() const
{
    return m_scoringDistribution;
}

void QualityScore::SetScoringDistribution(const vector<TableScoreStatisticsInfo>& _scoringDistribution)
{
    m_scoringDistribution = _scoringDistribution;
    m_scoringDistributionHasBeenSet = true;
}

bool QualityScore::ScoringDistributionHasBeenSet() const
{
    return m_scoringDistributionHasBeenSet;
}

int64_t QualityScore::GetTotalTableNumber() const
{
    return m_totalTableNumber;
}

void QualityScore::SetTotalTableNumber(const int64_t& _totalTableNumber)
{
    m_totalTableNumber = _totalTableNumber;
    m_totalTableNumberHasBeenSet = true;
}

bool QualityScore::TotalTableNumberHasBeenSet() const
{
    return m_totalTableNumberHasBeenSet;
}

