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

#include <tencentcloud/mps/v20190612/model/LiveStreamOcrWordsRecognitionResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

LiveStreamOcrWordsRecognitionResult::LiveStreamOcrWordsRecognitionResult() :
    m_wordHasBeenSet(false),
    m_startPtsTimeHasBeenSet(false),
    m_endPtsTimeHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_areaCoordsHasBeenSet(false)
{
}

CoreInternalOutcome LiveStreamOcrWordsRecognitionResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Word") && !value["Word"].IsNull())
    {
        if (!value["Word"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamOcrWordsRecognitionResult.Word` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_word = string(value["Word"].GetString());
        m_wordHasBeenSet = true;
    }

    if (value.HasMember("StartPtsTime") && !value["StartPtsTime"].IsNull())
    {
        if (!value["StartPtsTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamOcrWordsRecognitionResult.StartPtsTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_startPtsTime = value["StartPtsTime"].GetDouble();
        m_startPtsTimeHasBeenSet = true;
    }

    if (value.HasMember("EndPtsTime") && !value["EndPtsTime"].IsNull())
    {
        if (!value["EndPtsTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamOcrWordsRecognitionResult.EndPtsTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_endPtsTime = value["EndPtsTime"].GetDouble();
        m_endPtsTimeHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamOcrWordsRecognitionResult.Confidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("AreaCoords") && !value["AreaCoords"].IsNull())
    {
        if (!value["AreaCoords"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LiveStreamOcrWordsRecognitionResult.AreaCoords` is not array type"));

        const rapidjson::Value &tmpValue = value["AreaCoords"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_areaCoords.push_back((*itr).GetInt64());
        }
        m_areaCoordsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LiveStreamOcrWordsRecognitionResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_areaCoordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AreaCoords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_areaCoords.begin(); itr != m_areaCoords.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


string LiveStreamOcrWordsRecognitionResult::GetWord() const
{
    return m_word;
}

void LiveStreamOcrWordsRecognitionResult::SetWord(const string& _word)
{
    m_word = _word;
    m_wordHasBeenSet = true;
}

bool LiveStreamOcrWordsRecognitionResult::WordHasBeenSet() const
{
    return m_wordHasBeenSet;
}

double LiveStreamOcrWordsRecognitionResult::GetStartPtsTime() const
{
    return m_startPtsTime;
}

void LiveStreamOcrWordsRecognitionResult::SetStartPtsTime(const double& _startPtsTime)
{
    m_startPtsTime = _startPtsTime;
    m_startPtsTimeHasBeenSet = true;
}

bool LiveStreamOcrWordsRecognitionResult::StartPtsTimeHasBeenSet() const
{
    return m_startPtsTimeHasBeenSet;
}

double LiveStreamOcrWordsRecognitionResult::GetEndPtsTime() const
{
    return m_endPtsTime;
}

void LiveStreamOcrWordsRecognitionResult::SetEndPtsTime(const double& _endPtsTime)
{
    m_endPtsTime = _endPtsTime;
    m_endPtsTimeHasBeenSet = true;
}

bool LiveStreamOcrWordsRecognitionResult::EndPtsTimeHasBeenSet() const
{
    return m_endPtsTimeHasBeenSet;
}

double LiveStreamOcrWordsRecognitionResult::GetConfidence() const
{
    return m_confidence;
}

void LiveStreamOcrWordsRecognitionResult::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool LiveStreamOcrWordsRecognitionResult::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

vector<int64_t> LiveStreamOcrWordsRecognitionResult::GetAreaCoords() const
{
    return m_areaCoords;
}

void LiveStreamOcrWordsRecognitionResult::SetAreaCoords(const vector<int64_t>& _areaCoords)
{
    m_areaCoords = _areaCoords;
    m_areaCoordsHasBeenSet = true;
}

bool LiveStreamOcrWordsRecognitionResult::AreaCoordsHasBeenSet() const
{
    return m_areaCoordsHasBeenSet;
}

