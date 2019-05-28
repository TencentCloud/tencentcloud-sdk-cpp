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

#include <tencentcloud/vod/v20180717/model/AiReviewPoliticalTaskOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

AiReviewPoliticalTaskOutput::AiReviewPoliticalTaskOutput() :
    m_confidenceHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_segmentSetHasBeenSet(false)
{
}

CoreInternalOutcome AiReviewPoliticalTaskOutput::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `AiReviewPoliticalTaskOutput.Confidence` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Error("response `AiReviewPoliticalTaskOutput.Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(value["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Error("response `AiReviewPoliticalTaskOutput.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("SegmentSet") && !value["SegmentSet"].IsNull())
    {
        if (!value["SegmentSet"].IsArray())
            return CoreInternalOutcome(Error("response `AiReviewPoliticalTaskOutput.SegmentSet` is not array type"));

        const Value &tmpValue = value["SegmentSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MediaContentReviewPoliticalSegmentItem item;
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

void AiReviewPoliticalTaskOutput::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_confidenceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_suggestionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Suggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_suggestion.c_str(), allocator).Move(), allocator);
    }

    if (m_labelHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_label.c_str(), allocator).Move(), allocator);
    }

    if (m_segmentSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SegmentSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_segmentSet.begin(); itr != m_segmentSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


double AiReviewPoliticalTaskOutput::GetConfidence() const
{
    return m_confidence;
}

void AiReviewPoliticalTaskOutput::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool AiReviewPoliticalTaskOutput::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

string AiReviewPoliticalTaskOutput::GetSuggestion() const
{
    return m_suggestion;
}

void AiReviewPoliticalTaskOutput::SetSuggestion(const string& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool AiReviewPoliticalTaskOutput::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

string AiReviewPoliticalTaskOutput::GetLabel() const
{
    return m_label;
}

void AiReviewPoliticalTaskOutput::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool AiReviewPoliticalTaskOutput::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

vector<MediaContentReviewPoliticalSegmentItem> AiReviewPoliticalTaskOutput::GetSegmentSet() const
{
    return m_segmentSet;
}

void AiReviewPoliticalTaskOutput::SetSegmentSet(const vector<MediaContentReviewPoliticalSegmentItem>& _segmentSet)
{
    m_segmentSet = _segmentSet;
    m_segmentSetHasBeenSet = true;
}

bool AiReviewPoliticalTaskOutput::SegmentSetHasBeenSet() const
{
    return m_segmentSetHasBeenSet;
}

