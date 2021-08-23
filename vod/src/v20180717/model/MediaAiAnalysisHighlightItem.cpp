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

#include <tencentcloud/vod/v20180717/model/MediaAiAnalysisHighlightItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

MediaAiAnalysisHighlightItem::MediaAiAnalysisHighlightItem() :
    m_highlightUrlHasBeenSet(false),
    m_covImgUrlHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_segmentSetHasBeenSet(false)
{
}

CoreInternalOutcome MediaAiAnalysisHighlightItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HighlightUrl") && !value["HighlightUrl"].IsNull())
    {
        if (!value["HighlightUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaAiAnalysisHighlightItem.HighlightUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_highlightUrl = string(value["HighlightUrl"].GetString());
        m_highlightUrlHasBeenSet = true;
    }

    if (value.HasMember("CovImgUrl") && !value["CovImgUrl"].IsNull())
    {
        if (!value["CovImgUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaAiAnalysisHighlightItem.CovImgUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_covImgUrl = string(value["CovImgUrl"].GetString());
        m_covImgUrlHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MediaAiAnalysisHighlightItem.Confidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MediaAiAnalysisHighlightItem.Duration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetDouble();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("SegmentSet") && !value["SegmentSet"].IsNull())
    {
        if (!value["SegmentSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MediaAiAnalysisHighlightItem.SegmentSet` is not array type"));

        const rapidjson::Value &tmpValue = value["SegmentSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HighlightSegmentItem item;
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


    return CoreInternalOutcome(true);
}

void MediaAiAnalysisHighlightItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_highlightUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighlightUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_highlightUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_covImgUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CovImgUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_covImgUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
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

}


string MediaAiAnalysisHighlightItem::GetHighlightUrl() const
{
    return m_highlightUrl;
}

void MediaAiAnalysisHighlightItem::SetHighlightUrl(const string& _highlightUrl)
{
    m_highlightUrl = _highlightUrl;
    m_highlightUrlHasBeenSet = true;
}

bool MediaAiAnalysisHighlightItem::HighlightUrlHasBeenSet() const
{
    return m_highlightUrlHasBeenSet;
}

string MediaAiAnalysisHighlightItem::GetCovImgUrl() const
{
    return m_covImgUrl;
}

void MediaAiAnalysisHighlightItem::SetCovImgUrl(const string& _covImgUrl)
{
    m_covImgUrl = _covImgUrl;
    m_covImgUrlHasBeenSet = true;
}

bool MediaAiAnalysisHighlightItem::CovImgUrlHasBeenSet() const
{
    return m_covImgUrlHasBeenSet;
}

double MediaAiAnalysisHighlightItem::GetConfidence() const
{
    return m_confidence;
}

void MediaAiAnalysisHighlightItem::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool MediaAiAnalysisHighlightItem::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

double MediaAiAnalysisHighlightItem::GetDuration() const
{
    return m_duration;
}

void MediaAiAnalysisHighlightItem::SetDuration(const double& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool MediaAiAnalysisHighlightItem::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

vector<HighlightSegmentItem> MediaAiAnalysisHighlightItem::GetSegmentSet() const
{
    return m_segmentSet;
}

void MediaAiAnalysisHighlightItem::SetSegmentSet(const vector<HighlightSegmentItem>& _segmentSet)
{
    m_segmentSet = _segmentSet;
    m_segmentSetHasBeenSet = true;
}

bool MediaAiAnalysisHighlightItem::SegmentSetHasBeenSet() const
{
    return m_segmentSetHasBeenSet;
}

