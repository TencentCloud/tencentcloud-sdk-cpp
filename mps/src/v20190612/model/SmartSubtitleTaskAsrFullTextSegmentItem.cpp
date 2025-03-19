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

#include <tencentcloud/mps/v20190612/model/SmartSubtitleTaskAsrFullTextSegmentItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

SmartSubtitleTaskAsrFullTextSegmentItem::SmartSubtitleTaskAsrFullTextSegmentItem() :
    m_confidenceHasBeenSet(false),
    m_startTimeOffsetHasBeenSet(false),
    m_endTimeOffsetHasBeenSet(false),
    m_textHasBeenSet(false),
    m_wordlistHasBeenSet(false)
{
}

CoreInternalOutcome SmartSubtitleTaskAsrFullTextSegmentItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SmartSubtitleTaskAsrFullTextSegmentItem.Confidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("StartTimeOffset") && !value["StartTimeOffset"].IsNull())
    {
        if (!value["StartTimeOffset"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SmartSubtitleTaskAsrFullTextSegmentItem.StartTimeOffset` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_startTimeOffset = value["StartTimeOffset"].GetDouble();
        m_startTimeOffsetHasBeenSet = true;
    }

    if (value.HasMember("EndTimeOffset") && !value["EndTimeOffset"].IsNull())
    {
        if (!value["EndTimeOffset"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SmartSubtitleTaskAsrFullTextSegmentItem.EndTimeOffset` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_endTimeOffset = value["EndTimeOffset"].GetDouble();
        m_endTimeOffsetHasBeenSet = true;
    }

    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartSubtitleTaskAsrFullTextSegmentItem.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("Wordlist") && !value["Wordlist"].IsNull())
    {
        if (!value["Wordlist"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SmartSubtitleTaskAsrFullTextSegmentItem.Wordlist` is not array type"));

        const rapidjson::Value &tmpValue = value["Wordlist"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WordResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_wordlist.push_back(item);
        }
        m_wordlistHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SmartSubtitleTaskAsrFullTextSegmentItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_wordlistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Wordlist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_wordlist.begin(); itr != m_wordlist.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


double SmartSubtitleTaskAsrFullTextSegmentItem::GetConfidence() const
{
    return m_confidence;
}

void SmartSubtitleTaskAsrFullTextSegmentItem::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool SmartSubtitleTaskAsrFullTextSegmentItem::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

double SmartSubtitleTaskAsrFullTextSegmentItem::GetStartTimeOffset() const
{
    return m_startTimeOffset;
}

void SmartSubtitleTaskAsrFullTextSegmentItem::SetStartTimeOffset(const double& _startTimeOffset)
{
    m_startTimeOffset = _startTimeOffset;
    m_startTimeOffsetHasBeenSet = true;
}

bool SmartSubtitleTaskAsrFullTextSegmentItem::StartTimeOffsetHasBeenSet() const
{
    return m_startTimeOffsetHasBeenSet;
}

double SmartSubtitleTaskAsrFullTextSegmentItem::GetEndTimeOffset() const
{
    return m_endTimeOffset;
}

void SmartSubtitleTaskAsrFullTextSegmentItem::SetEndTimeOffset(const double& _endTimeOffset)
{
    m_endTimeOffset = _endTimeOffset;
    m_endTimeOffsetHasBeenSet = true;
}

bool SmartSubtitleTaskAsrFullTextSegmentItem::EndTimeOffsetHasBeenSet() const
{
    return m_endTimeOffsetHasBeenSet;
}

string SmartSubtitleTaskAsrFullTextSegmentItem::GetText() const
{
    return m_text;
}

void SmartSubtitleTaskAsrFullTextSegmentItem::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool SmartSubtitleTaskAsrFullTextSegmentItem::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

vector<WordResult> SmartSubtitleTaskAsrFullTextSegmentItem::GetWordlist() const
{
    return m_wordlist;
}

void SmartSubtitleTaskAsrFullTextSegmentItem::SetWordlist(const vector<WordResult>& _wordlist)
{
    m_wordlist = _wordlist;
    m_wordlistHasBeenSet = true;
}

bool SmartSubtitleTaskAsrFullTextSegmentItem::WordlistHasBeenSet() const
{
    return m_wordlistHasBeenSet;
}

