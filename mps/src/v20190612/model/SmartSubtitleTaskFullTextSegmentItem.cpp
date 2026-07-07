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

#include <tencentcloud/mps/v20190612/model/SmartSubtitleTaskFullTextSegmentItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

SmartSubtitleTaskFullTextSegmentItem::SmartSubtitleTaskFullTextSegmentItem() :
    m_confidenceHasBeenSet(false),
    m_startTimeOffsetHasBeenSet(false),
    m_endTimeOffsetHasBeenSet(false),
    m_textHasBeenSet(false),
    m_transHasBeenSet(false),
    m_speakerIdHasBeenSet(false)
{
}

CoreInternalOutcome SmartSubtitleTaskFullTextSegmentItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SmartSubtitleTaskFullTextSegmentItem.Confidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("StartTimeOffset") && !value["StartTimeOffset"].IsNull())
    {
        if (!value["StartTimeOffset"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SmartSubtitleTaskFullTextSegmentItem.StartTimeOffset` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_startTimeOffset = value["StartTimeOffset"].GetDouble();
        m_startTimeOffsetHasBeenSet = true;
    }

    if (value.HasMember("EndTimeOffset") && !value["EndTimeOffset"].IsNull())
    {
        if (!value["EndTimeOffset"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SmartSubtitleTaskFullTextSegmentItem.EndTimeOffset` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_endTimeOffset = value["EndTimeOffset"].GetDouble();
        m_endTimeOffsetHasBeenSet = true;
    }

    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartSubtitleTaskFullTextSegmentItem.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("Trans") && !value["Trans"].IsNull())
    {
        if (!value["Trans"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartSubtitleTaskFullTextSegmentItem.Trans` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trans = string(value["Trans"].GetString());
        m_transHasBeenSet = true;
    }

    if (value.HasMember("SpeakerId") && !value["SpeakerId"].IsNull())
    {
        if (!value["SpeakerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartSubtitleTaskFullTextSegmentItem.SpeakerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_speakerId = string(value["SpeakerId"].GetString());
        m_speakerIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SmartSubtitleTaskFullTextSegmentItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_startTimeOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTimeOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTimeOffset, allocator);
    }

    if (m_endTimeOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTimeOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTimeOffset, allocator);
    }

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_transHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Trans";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trans.c_str(), allocator).Move(), allocator);
    }

    if (m_speakerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpeakerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_speakerId.c_str(), allocator).Move(), allocator);
    }

}


double SmartSubtitleTaskFullTextSegmentItem::GetConfidence() const
{
    return m_confidence;
}

void SmartSubtitleTaskFullTextSegmentItem::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool SmartSubtitleTaskFullTextSegmentItem::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

double SmartSubtitleTaskFullTextSegmentItem::GetStartTimeOffset() const
{
    return m_startTimeOffset;
}

void SmartSubtitleTaskFullTextSegmentItem::SetStartTimeOffset(const double& _startTimeOffset)
{
    m_startTimeOffset = _startTimeOffset;
    m_startTimeOffsetHasBeenSet = true;
}

bool SmartSubtitleTaskFullTextSegmentItem::StartTimeOffsetHasBeenSet() const
{
    return m_startTimeOffsetHasBeenSet;
}

double SmartSubtitleTaskFullTextSegmentItem::GetEndTimeOffset() const
{
    return m_endTimeOffset;
}

void SmartSubtitleTaskFullTextSegmentItem::SetEndTimeOffset(const double& _endTimeOffset)
{
    m_endTimeOffset = _endTimeOffset;
    m_endTimeOffsetHasBeenSet = true;
}

bool SmartSubtitleTaskFullTextSegmentItem::EndTimeOffsetHasBeenSet() const
{
    return m_endTimeOffsetHasBeenSet;
}

string SmartSubtitleTaskFullTextSegmentItem::GetText() const
{
    return m_text;
}

void SmartSubtitleTaskFullTextSegmentItem::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool SmartSubtitleTaskFullTextSegmentItem::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

string SmartSubtitleTaskFullTextSegmentItem::GetTrans() const
{
    return m_trans;
}

void SmartSubtitleTaskFullTextSegmentItem::SetTrans(const string& _trans)
{
    m_trans = _trans;
    m_transHasBeenSet = true;
}

bool SmartSubtitleTaskFullTextSegmentItem::TransHasBeenSet() const
{
    return m_transHasBeenSet;
}

string SmartSubtitleTaskFullTextSegmentItem::GetSpeakerId() const
{
    return m_speakerId;
}

void SmartSubtitleTaskFullTextSegmentItem::SetSpeakerId(const string& _speakerId)
{
    m_speakerId = _speakerId;
    m_speakerIdHasBeenSet = true;
}

bool SmartSubtitleTaskFullTextSegmentItem::SpeakerIdHasBeenSet() const
{
    return m_speakerIdHasBeenSet;
}

