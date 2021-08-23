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

#include <tencentcloud/mps/v20190612/model/LiveStreamAsrWordsRecognitionResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

LiveStreamAsrWordsRecognitionResult::LiveStreamAsrWordsRecognitionResult() :
    m_wordHasBeenSet(false),
    m_startPtsTimeHasBeenSet(false),
    m_endPtsTimeHasBeenSet(false),
    m_confidenceHasBeenSet(false)
{
}

CoreInternalOutcome LiveStreamAsrWordsRecognitionResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Word") && !value["Word"].IsNull())
    {
        if (!value["Word"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamAsrWordsRecognitionResult.Word` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_word = string(value["Word"].GetString());
        m_wordHasBeenSet = true;
    }

    if (value.HasMember("StartPtsTime") && !value["StartPtsTime"].IsNull())
    {
        if (!value["StartPtsTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamAsrWordsRecognitionResult.StartPtsTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_startPtsTime = value["StartPtsTime"].GetDouble();
        m_startPtsTimeHasBeenSet = true;
    }

    if (value.HasMember("EndPtsTime") && !value["EndPtsTime"].IsNull())
    {
        if (!value["EndPtsTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamAsrWordsRecognitionResult.EndPtsTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_endPtsTime = value["EndPtsTime"].GetDouble();
        m_endPtsTimeHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamAsrWordsRecognitionResult.Confidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LiveStreamAsrWordsRecognitionResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_wordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Word";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_word.c_str(), allocator).Move(), allocator);
    }

    if (m_startPtsTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartPtsTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startPtsTime, allocator);
    }

    if (m_endPtsTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPtsTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endPtsTime, allocator);
    }

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

}


string LiveStreamAsrWordsRecognitionResult::GetWord() const
{
    return m_word;
}

void LiveStreamAsrWordsRecognitionResult::SetWord(const string& _word)
{
    m_word = _word;
    m_wordHasBeenSet = true;
}

bool LiveStreamAsrWordsRecognitionResult::WordHasBeenSet() const
{
    return m_wordHasBeenSet;
}

double LiveStreamAsrWordsRecognitionResult::GetStartPtsTime() const
{
    return m_startPtsTime;
}

void LiveStreamAsrWordsRecognitionResult::SetStartPtsTime(const double& _startPtsTime)
{
    m_startPtsTime = _startPtsTime;
    m_startPtsTimeHasBeenSet = true;
}

bool LiveStreamAsrWordsRecognitionResult::StartPtsTimeHasBeenSet() const
{
    return m_startPtsTimeHasBeenSet;
}

double LiveStreamAsrWordsRecognitionResult::GetEndPtsTime() const
{
    return m_endPtsTime;
}

void LiveStreamAsrWordsRecognitionResult::SetEndPtsTime(const double& _endPtsTime)
{
    m_endPtsTime = _endPtsTime;
    m_endPtsTimeHasBeenSet = true;
}

bool LiveStreamAsrWordsRecognitionResult::EndPtsTimeHasBeenSet() const
{
    return m_endPtsTimeHasBeenSet;
}

double LiveStreamAsrWordsRecognitionResult::GetConfidence() const
{
    return m_confidence;
}

void LiveStreamAsrWordsRecognitionResult::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool LiveStreamAsrWordsRecognitionResult::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

