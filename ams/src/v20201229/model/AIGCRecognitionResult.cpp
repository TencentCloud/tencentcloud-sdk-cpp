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

#include <tencentcloud/ams/v20201229/model/AIGCRecognitionResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ams::V20201229::Model;
using namespace std;

AIGCRecognitionResult::AIGCRecognitionResult() :
    m_labelHasBeenSet(false),
    m_labelCodeHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_subLabelHasBeenSet(false),
    m_subLabelCodeHasBeenSet(false),
    m_subTagHasBeenSet(false),
    m_subTagCodeHasBeenSet(false)
{
}

CoreInternalOutcome AIGCRecognitionResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGCRecognitionResult.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("LabelCode") && !value["LabelCode"].IsNull())
    {
        if (!value["LabelCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGCRecognitionResult.LabelCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelCode = string(value["LabelCode"].GetString());
        m_labelCodeHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGCRecognitionResult.Score` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetInt64();
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AIGCRecognitionResult.StartTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetDouble();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AIGCRecognitionResult.EndTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetDouble();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGCRecognitionResult.Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(value["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (value.HasMember("SubLabel") && !value["SubLabel"].IsNull())
    {
        if (!value["SubLabel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGCRecognitionResult.SubLabel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subLabel = string(value["SubLabel"].GetString());
        m_subLabelHasBeenSet = true;
    }

    if (value.HasMember("SubLabelCode") && !value["SubLabelCode"].IsNull())
    {
        if (!value["SubLabelCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGCRecognitionResult.SubLabelCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subLabelCode = string(value["SubLabelCode"].GetString());
        m_subLabelCodeHasBeenSet = true;
    }

    if (value.HasMember("SubTag") && !value["SubTag"].IsNull())
    {
        if (!value["SubTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGCRecognitionResult.SubTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subTag = string(value["SubTag"].GetString());
        m_subTagHasBeenSet = true;
    }

    if (value.HasMember("SubTagCode") && !value["SubTagCode"].IsNull())
    {
        if (!value["SubTagCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGCRecognitionResult.SubTagCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subTagCode = string(value["SubTagCode"].GetString());
        m_subTagCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGCRecognitionResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
    }

    if (m_labelCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labelCode.c_str(), allocator).Move(), allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

    if (m_suggestionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Suggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_suggestion.c_str(), allocator).Move(), allocator);
    }

    if (m_subLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subLabel.c_str(), allocator).Move(), allocator);
    }

    if (m_subLabelCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubLabelCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subLabelCode.c_str(), allocator).Move(), allocator);
    }

    if (m_subTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subTag.c_str(), allocator).Move(), allocator);
    }

    if (m_subTagCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubTagCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subTagCode.c_str(), allocator).Move(), allocator);
    }

}


string AIGCRecognitionResult::GetLabel() const
{
    return m_label;
}

void AIGCRecognitionResult::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool AIGCRecognitionResult::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

string AIGCRecognitionResult::GetLabelCode() const
{
    return m_labelCode;
}

void AIGCRecognitionResult::SetLabelCode(const string& _labelCode)
{
    m_labelCode = _labelCode;
    m_labelCodeHasBeenSet = true;
}

bool AIGCRecognitionResult::LabelCodeHasBeenSet() const
{
    return m_labelCodeHasBeenSet;
}

int64_t AIGCRecognitionResult::GetScore() const
{
    return m_score;
}

void AIGCRecognitionResult::SetScore(const int64_t& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool AIGCRecognitionResult::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

double AIGCRecognitionResult::GetStartTime() const
{
    return m_startTime;
}

void AIGCRecognitionResult::SetStartTime(const double& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool AIGCRecognitionResult::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

double AIGCRecognitionResult::GetEndTime() const
{
    return m_endTime;
}

void AIGCRecognitionResult::SetEndTime(const double& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool AIGCRecognitionResult::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string AIGCRecognitionResult::GetSuggestion() const
{
    return m_suggestion;
}

void AIGCRecognitionResult::SetSuggestion(const string& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool AIGCRecognitionResult::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

string AIGCRecognitionResult::GetSubLabel() const
{
    return m_subLabel;
}

void AIGCRecognitionResult::SetSubLabel(const string& _subLabel)
{
    m_subLabel = _subLabel;
    m_subLabelHasBeenSet = true;
}

bool AIGCRecognitionResult::SubLabelHasBeenSet() const
{
    return m_subLabelHasBeenSet;
}

string AIGCRecognitionResult::GetSubLabelCode() const
{
    return m_subLabelCode;
}

void AIGCRecognitionResult::SetSubLabelCode(const string& _subLabelCode)
{
    m_subLabelCode = _subLabelCode;
    m_subLabelCodeHasBeenSet = true;
}

bool AIGCRecognitionResult::SubLabelCodeHasBeenSet() const
{
    return m_subLabelCodeHasBeenSet;
}

string AIGCRecognitionResult::GetSubTag() const
{
    return m_subTag;
}

void AIGCRecognitionResult::SetSubTag(const string& _subTag)
{
    m_subTag = _subTag;
    m_subTagHasBeenSet = true;
}

bool AIGCRecognitionResult::SubTagHasBeenSet() const
{
    return m_subTagHasBeenSet;
}

string AIGCRecognitionResult::GetSubTagCode() const
{
    return m_subTagCode;
}

void AIGCRecognitionResult::SetSubTagCode(const string& _subTagCode)
{
    m_subTagCode = _subTagCode;
    m_subTagCodeHasBeenSet = true;
}

bool AIGCRecognitionResult::SubTagCodeHasBeenSet() const
{
    return m_subTagCodeHasBeenSet;
}

