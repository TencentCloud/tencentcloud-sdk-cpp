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

#include <tencentcloud/vod/v20180717/model/AiReviewTerrorismTaskOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AiReviewTerrorismTaskOutput::AiReviewTerrorismTaskOutput() :
    m_confidenceHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_segmentSetHasBeenSet(false),
    m_segmentSetFileUrlHasBeenSet(false),
    m_segmentSetFileUrlExpireTimeHasBeenSet(false)
{
}

CoreInternalOutcome AiReviewTerrorismTaskOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AiReviewTerrorismTaskOutput.Confidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiReviewTerrorismTaskOutput.Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(value["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiReviewTerrorismTaskOutput.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("SegmentSet") && !value["SegmentSet"].IsNull())
    {
        if (!value["SegmentSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AiReviewTerrorismTaskOutput.SegmentSet` is not array type"));

        const rapidjson::Value &tmpValue = value["SegmentSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MediaContentReviewSegmentItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_segmentSet.push_back(item);
        }
        m_segmentSetHasBeenSet = true;
    }

    if (value.HasMember("SegmentSetFileUrl") && !value["SegmentSetFileUrl"].IsNull())
    {
        if (!value["SegmentSetFileUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiReviewTerrorismTaskOutput.SegmentSetFileUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_segmentSetFileUrl = string(value["SegmentSetFileUrl"].GetString());
        m_segmentSetFileUrlHasBeenSet = true;
    }

    if (value.HasMember("SegmentSetFileUrlExpireTime") && !value["SegmentSetFileUrlExpireTime"].IsNull())
    {
        if (!value["SegmentSetFileUrlExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiReviewTerrorismTaskOutput.SegmentSetFileUrlExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_segmentSetFileUrlExpireTime = string(value["SegmentSetFileUrlExpireTime"].GetString());
        m_segmentSetFileUrlExpireTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiReviewTerrorismTaskOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_segmentSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_segmentSet.begin(); itr != m_segmentSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_segmentSetFileUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentSetFileUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_segmentSetFileUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_segmentSetFileUrlExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentSetFileUrlExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_segmentSetFileUrlExpireTime.c_str(), allocator).Move(), allocator);
    }

}


double AiReviewTerrorismTaskOutput::GetConfidence() const
{
    return m_confidence;
}

void AiReviewTerrorismTaskOutput::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool AiReviewTerrorismTaskOutput::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

string AiReviewTerrorismTaskOutput::GetSuggestion() const
{
    return m_suggestion;
}

void AiReviewTerrorismTaskOutput::SetSuggestion(const string& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool AiReviewTerrorismTaskOutput::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

string AiReviewTerrorismTaskOutput::GetLabel() const
{
    return m_label;
}

void AiReviewTerrorismTaskOutput::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool AiReviewTerrorismTaskOutput::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

vector<MediaContentReviewSegmentItem> AiReviewTerrorismTaskOutput::GetSegmentSet() const
{
    return m_segmentSet;
}

void AiReviewTerrorismTaskOutput::SetSegmentSet(const vector<MediaContentReviewSegmentItem>& _segmentSet)
{
    m_segmentSet = _segmentSet;
    m_segmentSetHasBeenSet = true;
}

bool AiReviewTerrorismTaskOutput::SegmentSetHasBeenSet() const
{
    return m_segmentSetHasBeenSet;
}

string AiReviewTerrorismTaskOutput::GetSegmentSetFileUrl() const
{
    return m_segmentSetFileUrl;
}

void AiReviewTerrorismTaskOutput::SetSegmentSetFileUrl(const string& _segmentSetFileUrl)
{
    m_segmentSetFileUrl = _segmentSetFileUrl;
    m_segmentSetFileUrlHasBeenSet = true;
}

bool AiReviewTerrorismTaskOutput::SegmentSetFileUrlHasBeenSet() const
{
    return m_segmentSetFileUrlHasBeenSet;
}

string AiReviewTerrorismTaskOutput::GetSegmentSetFileUrlExpireTime() const
{
    return m_segmentSetFileUrlExpireTime;
}

void AiReviewTerrorismTaskOutput::SetSegmentSetFileUrlExpireTime(const string& _segmentSetFileUrlExpireTime)
{
    m_segmentSetFileUrlExpireTime = _segmentSetFileUrlExpireTime;
    m_segmentSetFileUrlExpireTimeHasBeenSet = true;
}

bool AiReviewTerrorismTaskOutput::SegmentSetFileUrlExpireTimeHasBeenSet() const
{
    return m_segmentSetFileUrlExpireTimeHasBeenSet;
}

