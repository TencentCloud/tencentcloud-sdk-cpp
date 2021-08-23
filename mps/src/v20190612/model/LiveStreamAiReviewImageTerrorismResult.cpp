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

#include <tencentcloud/mps/v20190612/model/LiveStreamAiReviewImageTerrorismResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

LiveStreamAiReviewImageTerrorismResult::LiveStreamAiReviewImageTerrorismResult() :
    m_startPtsTimeHasBeenSet(false),
    m_endPtsTimeHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_picUrlExpireTimeHasBeenSet(false)
{
}

CoreInternalOutcome LiveStreamAiReviewImageTerrorismResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StartPtsTime") && !value["StartPtsTime"].IsNull())
    {
        if (!value["StartPtsTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamAiReviewImageTerrorismResult.StartPtsTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_startPtsTime = value["StartPtsTime"].GetDouble();
        m_startPtsTimeHasBeenSet = true;
    }

    if (value.HasMember("EndPtsTime") && !value["EndPtsTime"].IsNull())
    {
        if (!value["EndPtsTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamAiReviewImageTerrorismResult.EndPtsTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_endPtsTime = value["EndPtsTime"].GetDouble();
        m_endPtsTimeHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamAiReviewImageTerrorismResult.Confidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamAiReviewImageTerrorismResult.Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(value["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamAiReviewImageTerrorismResult.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamAiReviewImageTerrorismResult.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("PicUrlExpireTime") && !value["PicUrlExpireTime"].IsNull())
    {
        if (!value["PicUrlExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamAiReviewImageTerrorismResult.PicUrlExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_picUrlExpireTime = string(value["PicUrlExpireTime"].GetString());
        m_picUrlExpireTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LiveStreamAiReviewImageTerrorismResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_suggestionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Suggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_suggestion.c_str(), allocator).Move(), allocator);
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_picUrlExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PicUrlExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_picUrlExpireTime.c_str(), allocator).Move(), allocator);
    }

}


double LiveStreamAiReviewImageTerrorismResult::GetStartPtsTime() const
{
    return m_startPtsTime;
}

void LiveStreamAiReviewImageTerrorismResult::SetStartPtsTime(const double& _startPtsTime)
{
    m_startPtsTime = _startPtsTime;
    m_startPtsTimeHasBeenSet = true;
}

bool LiveStreamAiReviewImageTerrorismResult::StartPtsTimeHasBeenSet() const
{
    return m_startPtsTimeHasBeenSet;
}

double LiveStreamAiReviewImageTerrorismResult::GetEndPtsTime() const
{
    return m_endPtsTime;
}

void LiveStreamAiReviewImageTerrorismResult::SetEndPtsTime(const double& _endPtsTime)
{
    m_endPtsTime = _endPtsTime;
    m_endPtsTimeHasBeenSet = true;
}

bool LiveStreamAiReviewImageTerrorismResult::EndPtsTimeHasBeenSet() const
{
    return m_endPtsTimeHasBeenSet;
}

double LiveStreamAiReviewImageTerrorismResult::GetConfidence() const
{
    return m_confidence;
}

void LiveStreamAiReviewImageTerrorismResult::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool LiveStreamAiReviewImageTerrorismResult::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

string LiveStreamAiReviewImageTerrorismResult::GetSuggestion() const
{
    return m_suggestion;
}

void LiveStreamAiReviewImageTerrorismResult::SetSuggestion(const string& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool LiveStreamAiReviewImageTerrorismResult::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

string LiveStreamAiReviewImageTerrorismResult::GetLabel() const
{
    return m_label;
}

void LiveStreamAiReviewImageTerrorismResult::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool LiveStreamAiReviewImageTerrorismResult::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

string LiveStreamAiReviewImageTerrorismResult::GetUrl() const
{
    return m_url;
}

void LiveStreamAiReviewImageTerrorismResult::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool LiveStreamAiReviewImageTerrorismResult::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string LiveStreamAiReviewImageTerrorismResult::GetPicUrlExpireTime() const
{
    return m_picUrlExpireTime;
}

void LiveStreamAiReviewImageTerrorismResult::SetPicUrlExpireTime(const string& _picUrlExpireTime)
{
    m_picUrlExpireTime = _picUrlExpireTime;
    m_picUrlExpireTimeHasBeenSet = true;
}

bool LiveStreamAiReviewImageTerrorismResult::PicUrlExpireTimeHasBeenSet() const
{
    return m_picUrlExpireTimeHasBeenSet;
}

