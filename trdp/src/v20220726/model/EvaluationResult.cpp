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

#include <tencentcloud/trdp/v20220726/model/EvaluationResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trdp::V20220726::Model;
using namespace std;

EvaluationResult::EvaluationResult() :
    m_sSIDHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_riskLabelsHasBeenSet(false)
{
}

CoreInternalOutcome EvaluationResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SSID") && !value["SSID"].IsNull())
    {
        if (!value["SSID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EvaluationResult.SSID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sSID = string(value["SSID"].GetString());
        m_sSIDHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `EvaluationResult.Score` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetDouble();
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("RiskLabels") && !value["RiskLabels"].IsNull())
    {
        if (!value["RiskLabels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EvaluationResult.RiskLabels` is not array type"));

        const rapidjson::Value &tmpValue = value["RiskLabels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_riskLabels.push_back((*itr).GetInt64());
        }
        m_riskLabelsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EvaluationResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sSIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sSID.c_str(), allocator).Move(), allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    if (m_riskLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLabels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_riskLabels.begin(); itr != m_riskLabels.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


string EvaluationResult::GetSSID() const
{
    return m_sSID;
}

void EvaluationResult::SetSSID(const string& _sSID)
{
    m_sSID = _sSID;
    m_sSIDHasBeenSet = true;
}

bool EvaluationResult::SSIDHasBeenSet() const
{
    return m_sSIDHasBeenSet;
}

double EvaluationResult::GetScore() const
{
    return m_score;
}

void EvaluationResult::SetScore(const double& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool EvaluationResult::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

vector<int64_t> EvaluationResult::GetRiskLabels() const
{
    return m_riskLabels;
}

void EvaluationResult::SetRiskLabels(const vector<int64_t>& _riskLabels)
{
    m_riskLabels = _riskLabels;
    m_riskLabelsHasBeenSet = true;
}

bool EvaluationResult::RiskLabelsHasBeenSet() const
{
    return m_riskLabelsHasBeenSet;
}

