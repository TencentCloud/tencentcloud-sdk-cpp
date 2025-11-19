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

#include <tencentcloud/mps/v20190612/model/LiveAiParagraphInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

LiveAiParagraphInfo::LiveAiParagraphInfo() :
    m_summaryHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_keywordsHasBeenSet(false),
    m_startTimeOffsetHasBeenSet(false),
    m_endTimeOffsetHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

CoreInternalOutcome LiveAiParagraphInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Summary") && !value["Summary"].IsNull())
    {
        if (!value["Summary"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveAiParagraphInfo.Summary` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_summary = string(value["Summary"].GetString());
        m_summaryHasBeenSet = true;
    }

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveAiParagraphInfo.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Keywords") && !value["Keywords"].IsNull())
    {
        if (!value["Keywords"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LiveAiParagraphInfo.Keywords` is not array type"));

        const rapidjson::Value &tmpValue = value["Keywords"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keywords.push_back((*itr).GetString());
        }
        m_keywordsHasBeenSet = true;
    }

    if (value.HasMember("StartTimeOffset") && !value["StartTimeOffset"].IsNull())
    {
        if (!value["StartTimeOffset"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `LiveAiParagraphInfo.StartTimeOffset` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_startTimeOffset = value["StartTimeOffset"].GetDouble();
        m_startTimeOffsetHasBeenSet = true;
    }

    if (value.HasMember("EndTimeOffset") && !value["EndTimeOffset"].IsNull())
    {
        if (!value["EndTimeOffset"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `LiveAiParagraphInfo.EndTimeOffset` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_endTimeOffset = value["EndTimeOffset"].GetDouble();
        m_endTimeOffsetHasBeenSet = true;
    }

    if (value.HasMember("BeginTime") && !value["BeginTime"].IsNull())
    {
        if (!value["BeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveAiParagraphInfo.BeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginTime = string(value["BeginTime"].GetString());
        m_beginTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveAiParagraphInfo.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LiveAiParagraphInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_summaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Summary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_summary.c_str(), allocator).Move(), allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
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

}


string LiveAiParagraphInfo::GetSummary() const
{
    return m_summary;
}

void LiveAiParagraphInfo::SetSummary(const string& _summary)
{
    m_summary = _summary;
    m_summaryHasBeenSet = true;
}

bool LiveAiParagraphInfo::SummaryHasBeenSet() const
{
    return m_summaryHasBeenSet;
}

string LiveAiParagraphInfo::GetTitle() const
{
    return m_title;
}

void LiveAiParagraphInfo::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool LiveAiParagraphInfo::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

vector<string> LiveAiParagraphInfo::GetKeywords() const
{
    return m_keywords;
}

void LiveAiParagraphInfo::SetKeywords(const vector<string>& _keywords)
{
    m_keywords = _keywords;
    m_keywordsHasBeenSet = true;
}

bool LiveAiParagraphInfo::KeywordsHasBeenSet() const
{
    return m_keywordsHasBeenSet;
}

double LiveAiParagraphInfo::GetStartTimeOffset() const
{
    return m_startTimeOffset;
}

void LiveAiParagraphInfo::SetStartTimeOffset(const double& _startTimeOffset)
{
    m_startTimeOffset = _startTimeOffset;
    m_startTimeOffsetHasBeenSet = true;
}

bool LiveAiParagraphInfo::StartTimeOffsetHasBeenSet() const
{
    return m_startTimeOffsetHasBeenSet;
}

double LiveAiParagraphInfo::GetEndTimeOffset() const
{
    return m_endTimeOffset;
}

void LiveAiParagraphInfo::SetEndTimeOffset(const double& _endTimeOffset)
{
    m_endTimeOffset = _endTimeOffset;
    m_endTimeOffsetHasBeenSet = true;
}

bool LiveAiParagraphInfo::EndTimeOffsetHasBeenSet() const
{
    return m_endTimeOffsetHasBeenSet;
}

string LiveAiParagraphInfo::GetBeginTime() const
{
    return m_beginTime;
}

void LiveAiParagraphInfo::SetBeginTime(const string& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool LiveAiParagraphInfo::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

string LiveAiParagraphInfo::GetEndTime() const
{
    return m_endTime;
}

void LiveAiParagraphInfo::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool LiveAiParagraphInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

