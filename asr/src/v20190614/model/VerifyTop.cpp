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

#include <tencentcloud/asr/v20190614/model/VerifyTop.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Asr::V20190614::Model;
using namespace std;

VerifyTop::VerifyTop() :
    m_scoreHasBeenSet(false),
    m_voicePrintIdHasBeenSet(false),
    m_speakerIdHasBeenSet(false)
{
}

CoreInternalOutcome VerifyTop::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VerifyTop.Score` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_score = string(value["Score"].GetString());
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("VoicePrintId") && !value["VoicePrintId"].IsNull())
    {
        if (!value["VoicePrintId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VerifyTop.VoicePrintId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voicePrintId = string(value["VoicePrintId"].GetString());
        m_voicePrintIdHasBeenSet = true;
    }

    if (value.HasMember("SpeakerId") && !value["SpeakerId"].IsNull())
    {
        if (!value["SpeakerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VerifyTop.SpeakerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_speakerId = string(value["SpeakerId"].GetString());
        m_speakerIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VerifyTop::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_score.c_str(), allocator).Move(), allocator);
    }

    if (m_voicePrintIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoicePrintId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_voicePrintId.c_str(), allocator).Move(), allocator);
    }

    if (m_speakerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpeakerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_speakerId.c_str(), allocator).Move(), allocator);
    }

}


string VerifyTop::GetScore() const
{
    return m_score;
}

void VerifyTop::SetScore(const string& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool VerifyTop::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

string VerifyTop::GetVoicePrintId() const
{
    return m_voicePrintId;
}

void VerifyTop::SetVoicePrintId(const string& _voicePrintId)
{
    m_voicePrintId = _voicePrintId;
    m_voicePrintIdHasBeenSet = true;
}

bool VerifyTop::VoicePrintIdHasBeenSet() const
{
    return m_voicePrintIdHasBeenSet;
}

string VerifyTop::GetSpeakerId() const
{
    return m_speakerId;
}

void VerifyTop::SetSpeakerId(const string& _speakerId)
{
    m_speakerId = _speakerId;
    m_speakerIdHasBeenSet = true;
}

bool VerifyTop::SpeakerIdHasBeenSet() const
{
    return m_speakerIdHasBeenSet;
}

