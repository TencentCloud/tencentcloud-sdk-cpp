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

#include <tencentcloud/rce/v20260130/model/AssessRiskRsp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

AssessRiskRsp::AssessRiskRsp() :
    m_decisionHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_extraInfoHasBeenSet(false)
{
}

CoreInternalOutcome AssessRiskRsp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Decision") && !value["Decision"].IsNull())
    {
        if (!value["Decision"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AssessRiskRsp.Decision` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_decision.Deserialize(value["Decision"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_decisionHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AssessRiskRsp.Score` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_score.Deserialize(value["Score"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("ExtraInfo") && !value["ExtraInfo"].IsNull())
    {
        if (!value["ExtraInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssessRiskRsp.ExtraInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["ExtraInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Cust item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_extraInfo.push_back(item);
        }
        m_extraInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssessRiskRsp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_decisionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Decision";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_decision.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_score.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_extraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_extraInfo.begin(); itr != m_extraInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


Decision AssessRiskRsp::GetDecision() const
{
    return m_decision;
}

void AssessRiskRsp::SetDecision(const Decision& _decision)
{
    m_decision = _decision;
    m_decisionHasBeenSet = true;
}

bool AssessRiskRsp::DecisionHasBeenSet() const
{
    return m_decisionHasBeenSet;
}

Score AssessRiskRsp::GetScore() const
{
    return m_score;
}

void AssessRiskRsp::SetScore(const Score& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool AssessRiskRsp::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

vector<Cust> AssessRiskRsp::GetExtraInfo() const
{
    return m_extraInfo;
}

void AssessRiskRsp::SetExtraInfo(const vector<Cust>& _extraInfo)
{
    m_extraInfo = _extraInfo;
    m_extraInfoHasBeenSet = true;
}

bool AssessRiskRsp::ExtraInfoHasBeenSet() const
{
    return m_extraInfoHasBeenSet;
}

