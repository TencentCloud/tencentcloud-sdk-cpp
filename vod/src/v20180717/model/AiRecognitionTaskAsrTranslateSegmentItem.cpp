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

#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskAsrTranslateSegmentItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AiRecognitionTaskAsrTranslateSegmentItem::AiRecognitionTaskAsrTranslateSegmentItem() :
    m_confidenceHasBeenSet(false),
    m_startTimeOffsetHasBeenSet(false),
    m_endTimeOffsetHasBeenSet(false),
    m_textHasBeenSet(false),
    m_translationHasBeenSet(false)
{
}

CoreInternalOutcome AiRecognitionTaskAsrTranslateSegmentItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskAsrTranslateSegmentItem.Confidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("StartTimeOffset") && !value["StartTimeOffset"].IsNull())
    {
        if (!value["StartTimeOffset"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskAsrTranslateSegmentItem.StartTimeOffset` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_startTimeOffset = value["StartTimeOffset"].GetDouble();
        m_startTimeOffsetHasBeenSet = true;
    }

    if (value.HasMember("EndTimeOffset") && !value["EndTimeOffset"].IsNull())
    {
        if (!value["EndTimeOffset"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskAsrTranslateSegmentItem.EndTimeOffset` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_endTimeOffset = value["EndTimeOffset"].GetDouble();
        m_endTimeOffsetHasBeenSet = true;
    }

    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskAsrTranslateSegmentItem.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("Translation") && !value["Translation"].IsNull())
    {
        if (!value["Translation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskAsrTranslateSegmentItem.Translation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_translation = string(value["Translation"].GetString());
        m_translationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiRecognitionTaskAsrTranslateSegmentItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_translationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Translation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_translation.c_str(), allocator).Move(), allocator);
    }

}


double AiRecognitionTaskAsrTranslateSegmentItem::GetConfidence() const
{
    return m_confidence;
}

void AiRecognitionTaskAsrTranslateSegmentItem::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool AiRecognitionTaskAsrTranslateSegmentItem::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

double AiRecognitionTaskAsrTranslateSegmentItem::GetStartTimeOffset() const
{
    return m_startTimeOffset;
}

void AiRecognitionTaskAsrTranslateSegmentItem::SetStartTimeOffset(const double& _startTimeOffset)
{
    m_startTimeOffset = _startTimeOffset;
    m_startTimeOffsetHasBeenSet = true;
}

bool AiRecognitionTaskAsrTranslateSegmentItem::StartTimeOffsetHasBeenSet() const
{
    return m_startTimeOffsetHasBeenSet;
}

double AiRecognitionTaskAsrTranslateSegmentItem::GetEndTimeOffset() const
{
    return m_endTimeOffset;
}

void AiRecognitionTaskAsrTranslateSegmentItem::SetEndTimeOffset(const double& _endTimeOffset)
{
    m_endTimeOffset = _endTimeOffset;
    m_endTimeOffsetHasBeenSet = true;
}

bool AiRecognitionTaskAsrTranslateSegmentItem::EndTimeOffsetHasBeenSet() const
{
    return m_endTimeOffsetHasBeenSet;
}

string AiRecognitionTaskAsrTranslateSegmentItem::GetText() const
{
    return m_text;
}

void AiRecognitionTaskAsrTranslateSegmentItem::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool AiRecognitionTaskAsrTranslateSegmentItem::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

string AiRecognitionTaskAsrTranslateSegmentItem::GetTranslation() const
{
    return m_translation;
}

void AiRecognitionTaskAsrTranslateSegmentItem::SetTranslation(const string& _translation)
{
    m_translation = _translation;
    m_translationHasBeenSet = true;
}

bool AiRecognitionTaskAsrTranslateSegmentItem::TranslationHasBeenSet() const
{
    return m_translationHasBeenSet;
}

