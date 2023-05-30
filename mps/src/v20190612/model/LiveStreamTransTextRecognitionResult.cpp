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

#include <tencentcloud/mps/v20190612/model/LiveStreamTransTextRecognitionResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

LiveStreamTransTextRecognitionResult::LiveStreamTransTextRecognitionResult() :
    m_textHasBeenSet(false),
    m_startPtsTimeHasBeenSet(false),
    m_endPtsTimeHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_transHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_steadyStateHasBeenSet(false)
{
}

CoreInternalOutcome LiveStreamTransTextRecognitionResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamTransTextRecognitionResult.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("StartPtsTime") && !value["StartPtsTime"].IsNull())
    {
        if (!value["StartPtsTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamTransTextRecognitionResult.StartPtsTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_startPtsTime = value["StartPtsTime"].GetDouble();
        m_startPtsTimeHasBeenSet = true;
    }

    if (value.HasMember("EndPtsTime") && !value["EndPtsTime"].IsNull())
    {
        if (!value["EndPtsTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamTransTextRecognitionResult.EndPtsTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_endPtsTime = value["EndPtsTime"].GetDouble();
        m_endPtsTimeHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamTransTextRecognitionResult.Confidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("Trans") && !value["Trans"].IsNull())
    {
        if (!value["Trans"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamTransTextRecognitionResult.Trans` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trans = string(value["Trans"].GetString());
        m_transHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamTransTextRecognitionResult.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamTransTextRecognitionResult.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("SteadyState") && !value["SteadyState"].IsNull())
    {
        if (!value["SteadyState"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamTransTextRecognitionResult.SteadyState` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_steadyState = value["SteadyState"].GetBool();
        m_steadyStateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LiveStreamTransTextRecognitionResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
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

    if (m_transHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Trans";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trans.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_steadyStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SteadyState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_steadyState, allocator);
    }

}


string LiveStreamTransTextRecognitionResult::GetText() const
{
    return m_text;
}

void LiveStreamTransTextRecognitionResult::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool LiveStreamTransTextRecognitionResult::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

double LiveStreamTransTextRecognitionResult::GetStartPtsTime() const
{
    return m_startPtsTime;
}

void LiveStreamTransTextRecognitionResult::SetStartPtsTime(const double& _startPtsTime)
{
    m_startPtsTime = _startPtsTime;
    m_startPtsTimeHasBeenSet = true;
}

bool LiveStreamTransTextRecognitionResult::StartPtsTimeHasBeenSet() const
{
    return m_startPtsTimeHasBeenSet;
}

double LiveStreamTransTextRecognitionResult::GetEndPtsTime() const
{
    return m_endPtsTime;
}

void LiveStreamTransTextRecognitionResult::SetEndPtsTime(const double& _endPtsTime)
{
    m_endPtsTime = _endPtsTime;
    m_endPtsTimeHasBeenSet = true;
}

bool LiveStreamTransTextRecognitionResult::EndPtsTimeHasBeenSet() const
{
    return m_endPtsTimeHasBeenSet;
}

double LiveStreamTransTextRecognitionResult::GetConfidence() const
{
    return m_confidence;
}

void LiveStreamTransTextRecognitionResult::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool LiveStreamTransTextRecognitionResult::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

string LiveStreamTransTextRecognitionResult::GetTrans() const
{
    return m_trans;
}

void LiveStreamTransTextRecognitionResult::SetTrans(const string& _trans)
{
    m_trans = _trans;
    m_transHasBeenSet = true;
}

bool LiveStreamTransTextRecognitionResult::TransHasBeenSet() const
{
    return m_transHasBeenSet;
}

string LiveStreamTransTextRecognitionResult::GetStartTime() const
{
    return m_startTime;
}

void LiveStreamTransTextRecognitionResult::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool LiveStreamTransTextRecognitionResult::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string LiveStreamTransTextRecognitionResult::GetEndTime() const
{
    return m_endTime;
}

void LiveStreamTransTextRecognitionResult::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool LiveStreamTransTextRecognitionResult::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

bool LiveStreamTransTextRecognitionResult::GetSteadyState() const
{
    return m_steadyState;
}

void LiveStreamTransTextRecognitionResult::SetSteadyState(const bool& _steadyState)
{
    m_steadyState = _steadyState;
    m_steadyStateHasBeenSet = true;
}

bool LiveStreamTransTextRecognitionResult::SteadyStateHasBeenSet() const
{
    return m_steadyStateHasBeenSet;
}

