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

#include <tencentcloud/asr/v20190614/model/VoicePrintVerifyData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Asr::V20190614::Model;
using namespace std;

VoicePrintVerifyData::VoicePrintVerifyData() :
    m_voicePrintIdHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_decisionHasBeenSet(false)
{
}

CoreInternalOutcome VoicePrintVerifyData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VoicePrintId") && !value["VoicePrintId"].IsNull())
    {
        if (!value["VoicePrintId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoicePrintVerifyData.VoicePrintId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voicePrintId = string(value["VoicePrintId"].GetString());
        m_voicePrintIdHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoicePrintVerifyData.Score` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_score = string(value["Score"].GetString());
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("Decision") && !value["Decision"].IsNull())
    {
        if (!value["Decision"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VoicePrintVerifyData.Decision` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_decision = value["Decision"].GetInt64();
        m_decisionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VoicePrintVerifyData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_voicePrintIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoicePrintId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_voicePrintId.c_str(), allocator).Move(), allocator);
    }

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


string VoicePrintVerifyData::GetVoicePrintId() const
{
    return m_voicePrintId;
}

void VoicePrintVerifyData::SetVoicePrintId(const string& _voicePrintId)
{
    m_voicePrintId = _voicePrintId;
    m_voicePrintIdHasBeenSet = true;
}

bool VoicePrintVerifyData::VoicePrintIdHasBeenSet() const
{
    return m_voicePrintIdHasBeenSet;
}

string VoicePrintVerifyData::GetScore() const
{
    return m_score;
}

void VoicePrintVerifyData::SetScore(const string& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool VoicePrintVerifyData::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

int64_t VoicePrintVerifyData::GetDecision() const
{
    return m_decision;
}

void VoicePrintVerifyData::SetDecision(const int64_t& _decision)
{
    m_decision = _decision;
    m_decisionHasBeenSet = true;
}

bool VoicePrintVerifyData::DecisionHasBeenSet() const
{
    return m_decisionHasBeenSet;
}

