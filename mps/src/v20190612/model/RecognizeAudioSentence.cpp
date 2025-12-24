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

#include <tencentcloud/mps/v20190612/model/RecognizeAudioSentence.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

RecognizeAudioSentence::RecognizeAudioSentence() :
    m_startHasBeenSet(false),
    m_endHasBeenSet(false),
    m_textHasBeenSet(false),
    m_wordsInfoHasBeenSet(false)
{
}

CoreInternalOutcome RecognizeAudioSentence::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Start") && !value["Start"].IsNull())
    {
        if (!value["Start"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RecognizeAudioSentence.Start` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_start = value["Start"].GetDouble();
        m_startHasBeenSet = true;
    }

    if (value.HasMember("End") && !value["End"].IsNull())
    {
        if (!value["End"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RecognizeAudioSentence.End` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_end = value["End"].GetDouble();
        m_endHasBeenSet = true;
    }

    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecognizeAudioSentence.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("WordsInfo") && !value["WordsInfo"].IsNull())
    {
        if (!value["WordsInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RecognizeAudioSentence.WordsInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["WordsInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WordResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_wordsInfo.push_back(item);
        }
        m_wordsInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RecognizeAudioSentence::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_startHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Start";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_start, allocator);
    }

    if (m_endHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "End";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_end, allocator);
    }

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_wordsInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WordsInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_wordsInfo.begin(); itr != m_wordsInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


double RecognizeAudioSentence::GetStart() const
{
    return m_start;
}

void RecognizeAudioSentence::SetStart(const double& _start)
{
    m_start = _start;
    m_startHasBeenSet = true;
}

bool RecognizeAudioSentence::StartHasBeenSet() const
{
    return m_startHasBeenSet;
}

double RecognizeAudioSentence::GetEnd() const
{
    return m_end;
}

void RecognizeAudioSentence::SetEnd(const double& _end)
{
    m_end = _end;
    m_endHasBeenSet = true;
}

bool RecognizeAudioSentence::EndHasBeenSet() const
{
    return m_endHasBeenSet;
}

string RecognizeAudioSentence::GetText() const
{
    return m_text;
}

void RecognizeAudioSentence::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool RecognizeAudioSentence::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

vector<WordResult> RecognizeAudioSentence::GetWordsInfo() const
{
    return m_wordsInfo;
}

void RecognizeAudioSentence::SetWordsInfo(const vector<WordResult>& _wordsInfo)
{
    m_wordsInfo = _wordsInfo;
    m_wordsInfoHasBeenSet = true;
}

bool RecognizeAudioSentence::WordsInfoHasBeenSet() const
{
    return m_wordsInfoHasBeenSet;
}

