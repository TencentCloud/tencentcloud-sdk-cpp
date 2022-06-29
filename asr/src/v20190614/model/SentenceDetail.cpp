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

#include <tencentcloud/asr/v20190614/model/SentenceDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Asr::V20190614::Model;
using namespace std;

SentenceDetail::SentenceDetail() :
    m_finalSentenceHasBeenSet(false),
    m_sliceSentenceHasBeenSet(false),
    m_startMsHasBeenSet(false),
    m_endMsHasBeenSet(false),
    m_wordsNumHasBeenSet(false),
    m_wordsHasBeenSet(false),
    m_speechSpeedHasBeenSet(false),
    m_speakerIdHasBeenSet(false)
{
}

CoreInternalOutcome SentenceDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FinalSentence") && !value["FinalSentence"].IsNull())
    {
        if (!value["FinalSentence"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SentenceDetail.FinalSentence` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finalSentence = string(value["FinalSentence"].GetString());
        m_finalSentenceHasBeenSet = true;
    }

    if (value.HasMember("SliceSentence") && !value["SliceSentence"].IsNull())
    {
        if (!value["SliceSentence"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SentenceDetail.SliceSentence` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sliceSentence = string(value["SliceSentence"].GetString());
        m_sliceSentenceHasBeenSet = true;
    }

    if (value.HasMember("StartMs") && !value["StartMs"].IsNull())
    {
        if (!value["StartMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SentenceDetail.StartMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startMs = value["StartMs"].GetInt64();
        m_startMsHasBeenSet = true;
    }

    if (value.HasMember("EndMs") && !value["EndMs"].IsNull())
    {
        if (!value["EndMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SentenceDetail.EndMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endMs = value["EndMs"].GetInt64();
        m_endMsHasBeenSet = true;
    }

    if (value.HasMember("WordsNum") && !value["WordsNum"].IsNull())
    {
        if (!value["WordsNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SentenceDetail.WordsNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_wordsNum = value["WordsNum"].GetInt64();
        m_wordsNumHasBeenSet = true;
    }

    if (value.HasMember("Words") && !value["Words"].IsNull())
    {
        if (!value["Words"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SentenceDetail.Words` is not array type"));

        const rapidjson::Value &tmpValue = value["Words"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SentenceWords item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_words.push_back(item);
        }
        m_wordsHasBeenSet = true;
    }

    if (value.HasMember("SpeechSpeed") && !value["SpeechSpeed"].IsNull())
    {
        if (!value["SpeechSpeed"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SentenceDetail.SpeechSpeed` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_speechSpeed = value["SpeechSpeed"].GetDouble();
        m_speechSpeedHasBeenSet = true;
    }

    if (value.HasMember("SpeakerId") && !value["SpeakerId"].IsNull())
    {
        if (!value["SpeakerId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SentenceDetail.SpeakerId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_speakerId = value["SpeakerId"].GetInt64();
        m_speakerIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SentenceDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_finalSentenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinalSentence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_finalSentence.c_str(), allocator).Move(), allocator);
    }

    if (m_sliceSentenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SliceSentence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sliceSentence.c_str(), allocator).Move(), allocator);
    }

    if (m_startMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startMs, allocator);
    }

    if (m_endMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endMs, allocator);
    }

    if (m_wordsNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WordsNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_wordsNum, allocator);
    }

    if (m_wordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Words";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_words.begin(); itr != m_words.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_speechSpeedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpeechSpeed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_speechSpeed, allocator);
    }

    if (m_speakerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpeakerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_speakerId, allocator);
    }

}


string SentenceDetail::GetFinalSentence() const
{
    return m_finalSentence;
}

void SentenceDetail::SetFinalSentence(const string& _finalSentence)
{
    m_finalSentence = _finalSentence;
    m_finalSentenceHasBeenSet = true;
}

bool SentenceDetail::FinalSentenceHasBeenSet() const
{
    return m_finalSentenceHasBeenSet;
}

string SentenceDetail::GetSliceSentence() const
{
    return m_sliceSentence;
}

void SentenceDetail::SetSliceSentence(const string& _sliceSentence)
{
    m_sliceSentence = _sliceSentence;
    m_sliceSentenceHasBeenSet = true;
}

bool SentenceDetail::SliceSentenceHasBeenSet() const
{
    return m_sliceSentenceHasBeenSet;
}

int64_t SentenceDetail::GetStartMs() const
{
    return m_startMs;
}

void SentenceDetail::SetStartMs(const int64_t& _startMs)
{
    m_startMs = _startMs;
    m_startMsHasBeenSet = true;
}

bool SentenceDetail::StartMsHasBeenSet() const
{
    return m_startMsHasBeenSet;
}

int64_t SentenceDetail::GetEndMs() const
{
    return m_endMs;
}

void SentenceDetail::SetEndMs(const int64_t& _endMs)
{
    m_endMs = _endMs;
    m_endMsHasBeenSet = true;
}

bool SentenceDetail::EndMsHasBeenSet() const
{
    return m_endMsHasBeenSet;
}

int64_t SentenceDetail::GetWordsNum() const
{
    return m_wordsNum;
}

void SentenceDetail::SetWordsNum(const int64_t& _wordsNum)
{
    m_wordsNum = _wordsNum;
    m_wordsNumHasBeenSet = true;
}

bool SentenceDetail::WordsNumHasBeenSet() const
{
    return m_wordsNumHasBeenSet;
}

vector<SentenceWords> SentenceDetail::GetWords() const
{
    return m_words;
}

void SentenceDetail::SetWords(const vector<SentenceWords>& _words)
{
    m_words = _words;
    m_wordsHasBeenSet = true;
}

bool SentenceDetail::WordsHasBeenSet() const
{
    return m_wordsHasBeenSet;
}

double SentenceDetail::GetSpeechSpeed() const
{
    return m_speechSpeed;
}

void SentenceDetail::SetSpeechSpeed(const double& _speechSpeed)
{
    m_speechSpeed = _speechSpeed;
    m_speechSpeedHasBeenSet = true;
}

bool SentenceDetail::SpeechSpeedHasBeenSet() const
{
    return m_speechSpeedHasBeenSet;
}

int64_t SentenceDetail::GetSpeakerId() const
{
    return m_speakerId;
}

void SentenceDetail::SetSpeakerId(const int64_t& _speakerId)
{
    m_speakerId = _speakerId;
    m_speakerIdHasBeenSet = true;
}

bool SentenceDetail::SpeakerIdHasBeenSet() const
{
    return m_speakerIdHasBeenSet;
}

