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

#include <tencentcloud/vod/v20180717/model/QualityInspectLLMDetectionIssue.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

QualityInspectLLMDetectionIssue::QualityInspectLLMDetectionIssue() :
    m_tagHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_startTimeMsHasBeenSet(false),
    m_endTimeMsHasBeenSet(false),
    m_extraDataHasBeenSet(false)
{
}

CoreInternalOutcome QualityInspectLLMDetectionIssue::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityInspectLLMDetectionIssue.Tag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tag = string(value["Tag"].GetString());
        m_tagHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityInspectLLMDetectionIssue.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `QualityInspectLLMDetectionIssue.Score` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetDouble();
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `QualityInspectLLMDetectionIssue.Confidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("StartTimeMs") && !value["StartTimeMs"].IsNull())
    {
        if (!value["StartTimeMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityInspectLLMDetectionIssue.StartTimeMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTimeMs = value["StartTimeMs"].GetInt64();
        m_startTimeMsHasBeenSet = true;
    }

    if (value.HasMember("EndTimeMs") && !value["EndTimeMs"].IsNull())
    {
        if (!value["EndTimeMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityInspectLLMDetectionIssue.EndTimeMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTimeMs = value["EndTimeMs"].GetInt64();
        m_endTimeMsHasBeenSet = true;
    }

    if (value.HasMember("ExtraData") && !value["ExtraData"].IsNull())
    {
        if (!value["ExtraData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityInspectLLMDetectionIssue.ExtraData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extraData = string(value["ExtraData"].GetString());
        m_extraDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QualityInspectLLMDetectionIssue::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tag.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_startTimeMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTimeMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTimeMs, allocator);
    }

    if (m_endTimeMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTimeMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTimeMs, allocator);
    }

    if (m_extraDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extraData.c_str(), allocator).Move(), allocator);
    }

}


string QualityInspectLLMDetectionIssue::GetTag() const
{
    return m_tag;
}

void QualityInspectLLMDetectionIssue::SetTag(const string& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool QualityInspectLLMDetectionIssue::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

string QualityInspectLLMDetectionIssue::GetDescription() const
{
    return m_description;
}

void QualityInspectLLMDetectionIssue::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool QualityInspectLLMDetectionIssue::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

double QualityInspectLLMDetectionIssue::GetScore() const
{
    return m_score;
}

void QualityInspectLLMDetectionIssue::SetScore(const double& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool QualityInspectLLMDetectionIssue::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

double QualityInspectLLMDetectionIssue::GetConfidence() const
{
    return m_confidence;
}

void QualityInspectLLMDetectionIssue::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool QualityInspectLLMDetectionIssue::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

int64_t QualityInspectLLMDetectionIssue::GetStartTimeMs() const
{
    return m_startTimeMs;
}

void QualityInspectLLMDetectionIssue::SetStartTimeMs(const int64_t& _startTimeMs)
{
    m_startTimeMs = _startTimeMs;
    m_startTimeMsHasBeenSet = true;
}

bool QualityInspectLLMDetectionIssue::StartTimeMsHasBeenSet() const
{
    return m_startTimeMsHasBeenSet;
}

int64_t QualityInspectLLMDetectionIssue::GetEndTimeMs() const
{
    return m_endTimeMs;
}

void QualityInspectLLMDetectionIssue::SetEndTimeMs(const int64_t& _endTimeMs)
{
    m_endTimeMs = _endTimeMs;
    m_endTimeMsHasBeenSet = true;
}

bool QualityInspectLLMDetectionIssue::EndTimeMsHasBeenSet() const
{
    return m_endTimeMsHasBeenSet;
}

string QualityInspectLLMDetectionIssue::GetExtraData() const
{
    return m_extraData;
}

void QualityInspectLLMDetectionIssue::SetExtraData(const string& _extraData)
{
    m_extraData = _extraData;
    m_extraDataHasBeenSet = true;
}

bool QualityInspectLLMDetectionIssue::ExtraDataHasBeenSet() const
{
    return m_extraDataHasBeenSet;
}

