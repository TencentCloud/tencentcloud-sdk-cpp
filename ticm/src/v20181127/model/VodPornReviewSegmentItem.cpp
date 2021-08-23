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

#include <tencentcloud/ticm/v20181127/model/VodPornReviewSegmentItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ticm::V20181127::Model;
using namespace std;

VodPornReviewSegmentItem::VodPornReviewSegmentItem() :
    m_startTimeOffsetHasBeenSet(false),
    m_endTimeOffsetHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_picUrlExpireTimeStampHasBeenSet(false)
{
}

CoreInternalOutcome VodPornReviewSegmentItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StartTimeOffset") && !value["StartTimeOffset"].IsNull())
    {
        if (!value["StartTimeOffset"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `VodPornReviewSegmentItem.StartTimeOffset` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_startTimeOffset = value["StartTimeOffset"].GetDouble();
        m_startTimeOffsetHasBeenSet = true;
    }

    if (value.HasMember("EndTimeOffset") && !value["EndTimeOffset"].IsNull())
    {
        if (!value["EndTimeOffset"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `VodPornReviewSegmentItem.EndTimeOffset` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_endTimeOffset = value["EndTimeOffset"].GetDouble();
        m_endTimeOffsetHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `VodPornReviewSegmentItem.Confidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VodPornReviewSegmentItem.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VodPornReviewSegmentItem.Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(value["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VodPornReviewSegmentItem.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("PicUrlExpireTimeStamp") && !value["PicUrlExpireTimeStamp"].IsNull())
    {
        if (!value["PicUrlExpireTimeStamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VodPornReviewSegmentItem.PicUrlExpireTimeStamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_picUrlExpireTimeStamp = value["PicUrlExpireTimeStamp"].GetInt64();
        m_picUrlExpireTimeStampHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VodPornReviewSegmentItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
    }

    if (m_suggestionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Suggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_suggestion.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_picUrlExpireTimeStampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PicUrlExpireTimeStamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_picUrlExpireTimeStamp, allocator);
    }

}


double VodPornReviewSegmentItem::GetStartTimeOffset() const
{
    return m_startTimeOffset;
}

void VodPornReviewSegmentItem::SetStartTimeOffset(const double& _startTimeOffset)
{
    m_startTimeOffset = _startTimeOffset;
    m_startTimeOffsetHasBeenSet = true;
}

bool VodPornReviewSegmentItem::StartTimeOffsetHasBeenSet() const
{
    return m_startTimeOffsetHasBeenSet;
}

double VodPornReviewSegmentItem::GetEndTimeOffset() const
{
    return m_endTimeOffset;
}

void VodPornReviewSegmentItem::SetEndTimeOffset(const double& _endTimeOffset)
{
    m_endTimeOffset = _endTimeOffset;
    m_endTimeOffsetHasBeenSet = true;
}

bool VodPornReviewSegmentItem::EndTimeOffsetHasBeenSet() const
{
    return m_endTimeOffsetHasBeenSet;
}

double VodPornReviewSegmentItem::GetConfidence() const
{
    return m_confidence;
}

void VodPornReviewSegmentItem::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool VodPornReviewSegmentItem::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

string VodPornReviewSegmentItem::GetLabel() const
{
    return m_label;
}

void VodPornReviewSegmentItem::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool VodPornReviewSegmentItem::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

string VodPornReviewSegmentItem::GetSuggestion() const
{
    return m_suggestion;
}

void VodPornReviewSegmentItem::SetSuggestion(const string& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool VodPornReviewSegmentItem::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

string VodPornReviewSegmentItem::GetUrl() const
{
    return m_url;
}

void VodPornReviewSegmentItem::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool VodPornReviewSegmentItem::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

int64_t VodPornReviewSegmentItem::GetPicUrlExpireTimeStamp() const
{
    return m_picUrlExpireTimeStamp;
}

void VodPornReviewSegmentItem::SetPicUrlExpireTimeStamp(const int64_t& _picUrlExpireTimeStamp)
{
    m_picUrlExpireTimeStamp = _picUrlExpireTimeStamp;
    m_picUrlExpireTimeStampHasBeenSet = true;
}

bool VodPornReviewSegmentItem::PicUrlExpireTimeStampHasBeenSet() const
{
    return m_picUrlExpireTimeStampHasBeenSet;
}

