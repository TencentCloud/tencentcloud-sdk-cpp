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

#include <tencentcloud/mps/v20190612/model/SmartSubtitleTaskTransTextSegmentItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

SmartSubtitleTaskTransTextSegmentItem::SmartSubtitleTaskTransTextSegmentItem() :
    m_confidenceHasBeenSet(false),
    m_startTimeOffsetHasBeenSet(false),
    m_endTimeOffsetHasBeenSet(false),
    m_textHasBeenSet(false),
    m_transHasBeenSet(false),
    m_wordlistHasBeenSet(false)
{
}

CoreInternalOutcome SmartSubtitleTaskTransTextSegmentItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SmartSubtitleTaskTransTextSegmentItem.Confidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("StartTimeOffset") && !value["StartTimeOffset"].IsNull())
    {
        if (!value["StartTimeOffset"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SmartSubtitleTaskTransTextSegmentItem.StartTimeOffset` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_startTimeOffset = value["StartTimeOffset"].GetDouble();
        m_startTimeOffsetHasBeenSet = true;
    }

    if (value.HasMember("EndTimeOffset") && !value["EndTimeOffset"].IsNull())
    {
        if (!value["EndTimeOffset"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SmartSubtitleTaskTransTextSegmentItem.EndTimeOffset` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_endTimeOffset = value["EndTimeOffset"].GetDouble();
        m_endTimeOffsetHasBeenSet = true;
    }

    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartSubtitleTaskTransTextSegmentItem.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("Trans") && !value["Trans"].IsNull())
    {
        if (!value["Trans"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartSubtitleTaskTransTextSegmentItem.Trans` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trans = string(value["Trans"].GetString());
        m_transHasBeenSet = true;
    }

    if (value.HasMember("Wordlist") && !value["Wordlist"].IsNull())
    {
        if (!value["Wordlist"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SmartSubtitleTaskTransTextSegmentItem.Wordlist` is not array type"));

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

void SmartSubtitleTaskTransTextSegmentItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_transHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Trans";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trans.c_str(), allocator).Move(), allocator);
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


double SmartSubtitleTaskTransTextSegmentItem::GetConfidence() const
{
    return m_confidence;
}

void SmartSubtitleTaskTransTextSegmentItem::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool SmartSubtitleTaskTransTextSegmentItem::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

double SmartSubtitleTaskTransTextSegmentItem::GetStartTimeOffset() const
{
    return m_startTimeOffset;
}

void SmartSubtitleTaskTransTextSegmentItem::SetStartTimeOffset(const double& _startTimeOffset)
{
    m_startTimeOffset = _startTimeOffset;
    m_startTimeOffsetHasBeenSet = true;
}

bool SmartSubtitleTaskTransTextSegmentItem::StartTimeOffsetHasBeenSet() const
{
    return m_startTimeOffsetHasBeenSet;
}

double SmartSubtitleTaskTransTextSegmentItem::GetEndTimeOffset() const
{
    return m_endTimeOffset;
}

void SmartSubtitleTaskTransTextSegmentItem::SetEndTimeOffset(const double& _endTimeOffset)
{
    m_endTimeOffset = _endTimeOffset;
    m_endTimeOffsetHasBeenSet = true;
}

bool SmartSubtitleTaskTransTextSegmentItem::EndTimeOffsetHasBeenSet() const
{
    return m_endTimeOffsetHasBeenSet;
}

string SmartSubtitleTaskTransTextSegmentItem::GetText() const
{
    return m_text;
}

void SmartSubtitleTaskTransTextSegmentItem::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool SmartSubtitleTaskTransTextSegmentItem::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

string SmartSubtitleTaskTransTextSegmentItem::GetTrans() const
{
    return m_trans;
}

void SmartSubtitleTaskTransTextSegmentItem::SetTrans(const string& _trans)
{
    m_trans = _trans;
    m_transHasBeenSet = true;
}

bool SmartSubtitleTaskTransTextSegmentItem::TransHasBeenSet() const
{
    return m_transHasBeenSet;
}

vector<WordResult> SmartSubtitleTaskTransTextSegmentItem::GetWordlist() const
{
    return m_wordlist;
}

void SmartSubtitleTaskTransTextSegmentItem::SetWordlist(const vector<WordResult>& _wordlist)
{
    m_wordlist = _wordlist;
    m_wordlistHasBeenSet = true;
}

bool SmartSubtitleTaskTransTextSegmentItem::WordlistHasBeenSet() const
{
    return m_wordlistHasBeenSet;
}

