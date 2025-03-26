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

#include <tencentcloud/mps/v20190612/model/SegmentRecognitionItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

SegmentRecognitionItem::SegmentRecognitionItem() :
    m_confidenceHasBeenSet(false),
    m_startTimeOffsetHasBeenSet(false),
    m_endTimeOffsetHasBeenSet(false),
    m_segmentUrlHasBeenSet(false),
    m_covImgUrlHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_summaryHasBeenSet(false),
    m_keywordsHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_audioUrlHasBeenSet(false),
    m_audioBeginTimeHasBeenSet(false),
    m_audioEndTimeHasBeenSet(false),
    m_personPositionUrlHasBeenSet(false),
    m_personIdHasBeenSet(false)
{
}

CoreInternalOutcome SegmentRecognitionItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentRecognitionItem.Confidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("StartTimeOffset") && !value["StartTimeOffset"].IsNull())
    {
        if (!value["StartTimeOffset"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentRecognitionItem.StartTimeOffset` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_startTimeOffset = value["StartTimeOffset"].GetDouble();
        m_startTimeOffsetHasBeenSet = true;
    }

    if (value.HasMember("EndTimeOffset") && !value["EndTimeOffset"].IsNull())
    {
        if (!value["EndTimeOffset"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentRecognitionItem.EndTimeOffset` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_endTimeOffset = value["EndTimeOffset"].GetDouble();
        m_endTimeOffsetHasBeenSet = true;
    }

    if (value.HasMember("SegmentUrl") && !value["SegmentUrl"].IsNull())
    {
        if (!value["SegmentUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentRecognitionItem.SegmentUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_segmentUrl = string(value["SegmentUrl"].GetString());
        m_segmentUrlHasBeenSet = true;
    }

    if (value.HasMember("CovImgUrl") && !value["CovImgUrl"].IsNull())
    {
        if (!value["CovImgUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentRecognitionItem.CovImgUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_covImgUrl = string(value["CovImgUrl"].GetString());
        m_covImgUrlHasBeenSet = true;
    }

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentRecognitionItem.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Summary") && !value["Summary"].IsNull())
    {
        if (!value["Summary"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentRecognitionItem.Summary` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_summary = string(value["Summary"].GetString());
        m_summaryHasBeenSet = true;
    }

    if (value.HasMember("Keywords") && !value["Keywords"].IsNull())
    {
        if (!value["Keywords"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SegmentRecognitionItem.Keywords` is not array type"));

        const rapidjson::Value &tmpValue = value["Keywords"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keywords.push_back((*itr).GetString());
        }
        m_keywordsHasBeenSet = true;
    }

    if (value.HasMember("BeginTime") && !value["BeginTime"].IsNull())
    {
        if (!value["BeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentRecognitionItem.BeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginTime = string(value["BeginTime"].GetString());
        m_beginTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentRecognitionItem.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("AudioUrl") && !value["AudioUrl"].IsNull())
    {
        if (!value["AudioUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentRecognitionItem.AudioUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_audioUrl = string(value["AudioUrl"].GetString());
        m_audioUrlHasBeenSet = true;
    }

    if (value.HasMember("AudioBeginTime") && !value["AudioBeginTime"].IsNull())
    {
        if (!value["AudioBeginTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentRecognitionItem.AudioBeginTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_audioBeginTime = value["AudioBeginTime"].GetDouble();
        m_audioBeginTimeHasBeenSet = true;
    }

    if (value.HasMember("AudioEndTime") && !value["AudioEndTime"].IsNull())
    {
        if (!value["AudioEndTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentRecognitionItem.AudioEndTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_audioEndTime = value["AudioEndTime"].GetDouble();
        m_audioEndTimeHasBeenSet = true;
    }

    if (value.HasMember("PersonPositionUrl") && !value["PersonPositionUrl"].IsNull())
    {
        if (!value["PersonPositionUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentRecognitionItem.PersonPositionUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personPositionUrl = string(value["PersonPositionUrl"].GetString());
        m_personPositionUrlHasBeenSet = true;
    }

    if (value.HasMember("PersonId") && !value["PersonId"].IsNull())
    {
        if (!value["PersonId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentRecognitionItem.PersonId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personId = string(value["PersonId"].GetString());
        m_personIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SegmentRecognitionItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_segmentUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_segmentUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_covImgUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CovImgUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_covImgUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_summaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Summary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_summary.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keywords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_keywords.begin(); itr != m_keywords.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_beginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_audioUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_audioUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_audioBeginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioBeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_audioBeginTime, allocator);
    }

    if (m_audioEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_audioEndTime, allocator);
    }

    if (m_personPositionUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonPositionUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_personPositionUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_personIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_personId.c_str(), allocator).Move(), allocator);
    }

}


double SegmentRecognitionItem::GetConfidence() const
{
    return m_confidence;
}

void SegmentRecognitionItem::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool SegmentRecognitionItem::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

double SegmentRecognitionItem::GetStartTimeOffset() const
{
    return m_startTimeOffset;
}

void SegmentRecognitionItem::SetStartTimeOffset(const double& _startTimeOffset)
{
    m_startTimeOffset = _startTimeOffset;
    m_startTimeOffsetHasBeenSet = true;
}

bool SegmentRecognitionItem::StartTimeOffsetHasBeenSet() const
{
    return m_startTimeOffsetHasBeenSet;
}

double SegmentRecognitionItem::GetEndTimeOffset() const
{
    return m_endTimeOffset;
}

void SegmentRecognitionItem::SetEndTimeOffset(const double& _endTimeOffset)
{
    m_endTimeOffset = _endTimeOffset;
    m_endTimeOffsetHasBeenSet = true;
}

bool SegmentRecognitionItem::EndTimeOffsetHasBeenSet() const
{
    return m_endTimeOffsetHasBeenSet;
}

string SegmentRecognitionItem::GetSegmentUrl() const
{
    return m_segmentUrl;
}

void SegmentRecognitionItem::SetSegmentUrl(const string& _segmentUrl)
{
    m_segmentUrl = _segmentUrl;
    m_segmentUrlHasBeenSet = true;
}

bool SegmentRecognitionItem::SegmentUrlHasBeenSet() const
{
    return m_segmentUrlHasBeenSet;
}

string SegmentRecognitionItem::GetCovImgUrl() const
{
    return m_covImgUrl;
}

void SegmentRecognitionItem::SetCovImgUrl(const string& _covImgUrl)
{
    m_covImgUrl = _covImgUrl;
    m_covImgUrlHasBeenSet = true;
}

bool SegmentRecognitionItem::CovImgUrlHasBeenSet() const
{
    return m_covImgUrlHasBeenSet;
}

string SegmentRecognitionItem::GetTitle() const
{
    return m_title;
}

void SegmentRecognitionItem::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool SegmentRecognitionItem::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string SegmentRecognitionItem::GetSummary() const
{
    return m_summary;
}

void SegmentRecognitionItem::SetSummary(const string& _summary)
{
    m_summary = _summary;
    m_summaryHasBeenSet = true;
}

bool SegmentRecognitionItem::SummaryHasBeenSet() const
{
    return m_summaryHasBeenSet;
}

vector<string> SegmentRecognitionItem::GetKeywords() const
{
    return m_keywords;
}

void SegmentRecognitionItem::SetKeywords(const vector<string>& _keywords)
{
    m_keywords = _keywords;
    m_keywordsHasBeenSet = true;
}

bool SegmentRecognitionItem::KeywordsHasBeenSet() const
{
    return m_keywordsHasBeenSet;
}

string SegmentRecognitionItem::GetBeginTime() const
{
    return m_beginTime;
}

void SegmentRecognitionItem::SetBeginTime(const string& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool SegmentRecognitionItem::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

string SegmentRecognitionItem::GetEndTime() const
{
    return m_endTime;
}

void SegmentRecognitionItem::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool SegmentRecognitionItem::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string SegmentRecognitionItem::GetAudioUrl() const
{
    return m_audioUrl;
}

void SegmentRecognitionItem::SetAudioUrl(const string& _audioUrl)
{
    m_audioUrl = _audioUrl;
    m_audioUrlHasBeenSet = true;
}

bool SegmentRecognitionItem::AudioUrlHasBeenSet() const
{
    return m_audioUrlHasBeenSet;
}

double SegmentRecognitionItem::GetAudioBeginTime() const
{
    return m_audioBeginTime;
}

void SegmentRecognitionItem::SetAudioBeginTime(const double& _audioBeginTime)
{
    m_audioBeginTime = _audioBeginTime;
    m_audioBeginTimeHasBeenSet = true;
}

bool SegmentRecognitionItem::AudioBeginTimeHasBeenSet() const
{
    return m_audioBeginTimeHasBeenSet;
}

double SegmentRecognitionItem::GetAudioEndTime() const
{
    return m_audioEndTime;
}

void SegmentRecognitionItem::SetAudioEndTime(const double& _audioEndTime)
{
    m_audioEndTime = _audioEndTime;
    m_audioEndTimeHasBeenSet = true;
}

bool SegmentRecognitionItem::AudioEndTimeHasBeenSet() const
{
    return m_audioEndTimeHasBeenSet;
}

string SegmentRecognitionItem::GetPersonPositionUrl() const
{
    return m_personPositionUrl;
}

void SegmentRecognitionItem::SetPersonPositionUrl(const string& _personPositionUrl)
{
    m_personPositionUrl = _personPositionUrl;
    m_personPositionUrlHasBeenSet = true;
}

bool SegmentRecognitionItem::PersonPositionUrlHasBeenSet() const
{
    return m_personPositionUrlHasBeenSet;
}

string SegmentRecognitionItem::GetPersonId() const
{
    return m_personId;
}

void SegmentRecognitionItem::SetPersonId(const string& _personId)
{
    m_personId = _personId;
    m_personIdHasBeenSet = true;
}

bool SegmentRecognitionItem::PersonIdHasBeenSet() const
{
    return m_personIdHasBeenSet;
}

