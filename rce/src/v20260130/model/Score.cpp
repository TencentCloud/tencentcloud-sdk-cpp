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

#include <tencentcloud/rce/v20260130/model/Score.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

Score::Score() :
    m_riskScoreHasBeenSet(false),
    m_riskLabelsHasBeenSet(false)
{
}

CoreInternalOutcome Score::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RiskScore") && !value["RiskScore"].IsNull())
    {
        if (!value["RiskScore"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Score.RiskScore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskScore = value["RiskScore"].GetInt64();
        m_riskScoreHasBeenSet = true;
    }

    if (value.HasMember("RiskLabels") && !value["RiskLabels"].IsNull())
    {
        if (!value["RiskLabels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Score.RiskLabels` is not array type"));

        const rapidjson::Value &tmpValue = value["RiskLabels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RiskLabel item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_riskLabels.push_back(item);
        }
        m_riskLabelsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Score::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_riskScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskScore, allocator);
    }

    if (m_riskLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLabels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_riskLabels.begin(); itr != m_riskLabels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t Score::GetRiskScore() const
{
    return m_riskScore;
}

void Score::SetRiskScore(const int64_t& _riskScore)
{
    m_riskScore = _riskScore;
    m_riskScoreHasBeenSet = true;
}

bool Score::RiskScoreHasBeenSet() const
{
    return m_riskScoreHasBeenSet;
}

vector<RiskLabel> Score::GetRiskLabels() const
{
    return m_riskLabels;
}

void Score::SetRiskLabels(const vector<RiskLabel>& _riskLabels)
{
    m_riskLabels = _riskLabels;
    m_riskLabelsHasBeenSet = true;
}

bool Score::RiskLabelsHasBeenSet() const
{
    return m_riskLabelsHasBeenSet;
}

