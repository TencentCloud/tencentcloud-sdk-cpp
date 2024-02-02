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

#include <tencentcloud/asr/v20190614/model/VoicePrintCompareData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Asr::V20190614::Model;
using namespace std;

VoicePrintCompareData::VoicePrintCompareData() :
    m_scoreHasBeenSet(false),
    m_decisionHasBeenSet(false)
{
}

CoreInternalOutcome VoicePrintCompareData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoicePrintCompareData.Score` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_score = string(value["Score"].GetString());
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("Decision") && !value["Decision"].IsNull())
    {
        if (!value["Decision"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VoicePrintCompareData.Decision` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_decision = value["Decision"].GetInt64();
        m_decisionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VoicePrintCompareData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_score.c_str(), allocator).Move(), allocator);
    }

    if (m_decisionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Decision";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_decision, allocator);
    }

}


string VoicePrintCompareData::GetScore() const
{
    return m_score;
}

void VoicePrintCompareData::SetScore(const string& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool VoicePrintCompareData::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

int64_t VoicePrintCompareData::GetDecision() const
{
    return m_decision;
}

void VoicePrintCompareData::SetDecision(const int64_t& _decision)
{
    m_decision = _decision;
    m_decisionHasBeenSet = true;
}

bool VoicePrintCompareData::DecisionHasBeenSet() const
{
    return m_decisionHasBeenSet;
}

