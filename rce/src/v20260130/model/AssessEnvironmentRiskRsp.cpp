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

#include <tencentcloud/rce/v20260130/model/AssessEnvironmentRiskRsp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

AssessEnvironmentRiskRsp::AssessEnvironmentRiskRsp() :
    m_scoreHasBeenSet(false),
    m_environmentHasBeenSet(false)
{
}

CoreInternalOutcome AssessEnvironmentRiskRsp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AssessEnvironmentRiskRsp.Score` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_score.Deserialize(value["Score"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("Environment") && !value["Environment"].IsNull())
    {
        if (!value["Environment"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AssessEnvironmentRiskRsp.Environment` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_environment.Deserialize(value["Environment"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_environmentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssessEnvironmentRiskRsp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_score.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_environmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Environment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_environment.ToJsonObject(value[key.c_str()], allocator);
    }

}


DataScore AssessEnvironmentRiskRsp::GetScore() const
{
    return m_score;
}

void AssessEnvironmentRiskRsp::SetScore(const DataScore& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool AssessEnvironmentRiskRsp::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

Environment AssessEnvironmentRiskRsp::GetEnvironment() const
{
    return m_environment;
}

void AssessEnvironmentRiskRsp::SetEnvironment(const Environment& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool AssessEnvironmentRiskRsp::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}

