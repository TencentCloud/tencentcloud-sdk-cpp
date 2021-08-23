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

#include <tencentcloud/mps/v20190612/model/LiveStreamAiReviewImagePornResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

LiveStreamAiReviewImagePornResult::LiveStreamAiReviewImagePornResult() :
    m_startPtsTimeHasBeenSet(false),
    m_endPtsTimeHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_picUrlExpireTimeHasBeenSet(false)
{
}

CoreInternalOutcome LiveStreamAiReviewImagePornResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StartPtsTime") && !value["StartPtsTime"].IsNull())
    {
        if (!value["StartPtsTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamAiReviewImagePornResult.StartPtsTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_startPtsTime = value["StartPtsTime"].GetDouble();
        m_startPtsTimeHasBeenSet = true;
    }

    if (value.HasMember("EndPtsTime") && !value["EndPtsTime"].IsNull())
    {
        if (!value["EndPtsTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamAiReviewImagePornResult.EndPtsTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_endPtsTime = value["EndPtsTime"].GetDouble();
        m_endPtsTimeHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamAiReviewImagePornResult.Confidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamAiReviewImagePornResult.Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(value["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamAiReviewImagePornResult.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamAiReviewImagePornResult.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("PicUrlExpireTime") && !value["PicUrlExpireTime"].IsNull())
    {
        if (!value["PicUrlExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamAiReviewImagePornResult.PicUrlExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_picUrlExpireTime = string(value["PicUrlExpireTime"].GetString());
        m_picUrlExpireTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LiveStreamAiReviewImagePornResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


double LiveStreamAiReviewImagePornResult::GetStartPtsTime() const
{
    return m_startPtsTime;
}

void LiveStreamAiReviewImagePornResult::SetStartPtsTime(const double& _startPtsTime)
{
    m_startPtsTime = _startPtsTime;
    m_startPtsTimeHasBeenSet = true;
}

bool LiveStreamAiReviewImagePornResult::StartPtsTimeHasBeenSet() const
{
    return m_startPtsTimeHasBeenSet;
}

double LiveStreamAiReviewImagePornResult::GetEndPtsTime() const
{
    return m_endPtsTime;
}

void LiveStreamAiReviewImagePornResult::SetEndPtsTime(const double& _endPtsTime)
{
    m_endPtsTime = _endPtsTime;
    m_endPtsTimeHasBeenSet = true;
}

bool LiveStreamAiReviewImagePornResult::EndPtsTimeHasBeenSet() const
{
    return m_endPtsTimeHasBeenSet;
}

double LiveStreamAiReviewImagePornResult::GetConfidence() const
{
    return m_confidence;
}

void LiveStreamAiReviewImagePornResult::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool LiveStreamAiReviewImagePornResult::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

string LiveStreamAiReviewImagePornResult::GetSuggestion() const
{
    return m_suggestion;
}

void LiveStreamAiReviewImagePornResult::SetSuggestion(const string& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool LiveStreamAiReviewImagePornResult::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

string LiveStreamAiReviewImagePornResult::GetLabel() const
{
    return m_label;
}

void LiveStreamAiReviewImagePornResult::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool LiveStreamAiReviewImagePornResult::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

string LiveStreamAiReviewImagePornResult::GetUrl() const
{
    return m_url;
}

void LiveStreamAiReviewImagePornResult::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool LiveStreamAiReviewImagePornResult::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string LiveStreamAiReviewImagePornResult::GetPicUrlExpireTime() const
{
    return m_picUrlExpireTime;
}

void LiveStreamAiReviewImagePornResult::SetPicUrlExpireTime(const string& _picUrlExpireTime)
{
    m_picUrlExpireTime = _picUrlExpireTime;
    m_picUrlExpireTimeHasBeenSet = true;
}

bool LiveStreamAiReviewImagePornResult::PicUrlExpireTimeHasBeenSet() const
{
    return m_picUrlExpireTimeHasBeenSet;
}

