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

#include <tencentcloud/trtc/v20190722/model/PronunciationDict.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

PronunciationDict::PronunciationDict() :
    m_wordHasBeenSet(false),
    m_pronunciationHasBeenSet(false)
{
}

CoreInternalOutcome PronunciationDict::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Word") && !value["Word"].IsNull())
    {
        if (!value["Word"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PronunciationDict.Word` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_word = string(value["Word"].GetString());
        m_wordHasBeenSet = true;
    }

    if (value.HasMember("Pronunciation") && !value["Pronunciation"].IsNull())
    {
        if (!value["Pronunciation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PronunciationDict.Pronunciation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pronunciation = string(value["Pronunciation"].GetString());
        m_pronunciationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PronunciationDict::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_wordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Word";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_word.c_str(), allocator).Move(), allocator);
    }

    if (m_pronunciationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pronunciation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pronunciation.c_str(), allocator).Move(), allocator);
    }

}


string PronunciationDict::GetWord() const
{
    return m_word;
}

void PronunciationDict::SetWord(const string& _word)
{
    m_word = _word;
    m_wordHasBeenSet = true;
}

bool PronunciationDict::WordHasBeenSet() const
{
    return m_wordHasBeenSet;
}

string PronunciationDict::GetPronunciation() const
{
    return m_pronunciation;
}

void PronunciationDict::SetPronunciation(const string& _pronunciation)
{
    m_pronunciation = _pronunciation;
    m_pronunciationHasBeenSet = true;
}

bool PronunciationDict::PronunciationHasBeenSet() const
{
    return m_pronunciationHasBeenSet;
}

