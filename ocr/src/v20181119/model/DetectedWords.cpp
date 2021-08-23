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

#include <tencentcloud/ocr/v20181119/model/DetectedWords.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

DetectedWords::DetectedWords() :
    m_confidenceHasBeenSet(false),
    m_characterHasBeenSet(false)
{
}

CoreInternalOutcome DetectedWords::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DetectedWords.Confidence` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetInt64();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("Character") && !value["Character"].IsNull())
    {
        if (!value["Character"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectedWords.Character` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_character = string(value["Character"].GetString());
        m_characterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DetectedWords::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_characterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Character";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_character.c_str(), allocator).Move(), allocator);
    }

}


int64_t DetectedWords::GetConfidence() const
{
    return m_confidence;
}

void DetectedWords::SetConfidence(const int64_t& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool DetectedWords::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

string DetectedWords::GetCharacter() const
{
    return m_character;
}

void DetectedWords::SetCharacter(const string& _character)
{
    m_character = _character;
    m_characterHasBeenSet = true;
}

bool DetectedWords::CharacterHasBeenSet() const
{
    return m_characterHasBeenSet;
}

