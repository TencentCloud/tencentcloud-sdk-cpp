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

#include <tencentcloud/vm/v20201229/model/TaskLabel.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vm::V20201229::Model;
using namespace std;

TaskLabel::TaskLabel() :
    m_labelHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_subLabelHasBeenSet(false)
{
}

CoreInternalOutcome TaskLabel::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskLabel.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskLabel.Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(value["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskLabel.Score` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetInt64();
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("SubLabel") && !value["SubLabel"].IsNull())
    {
        if (!value["SubLabel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskLabel.SubLabel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subLabel = string(value["SubLabel"].GetString());
        m_subLabelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskLabel::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    if (m_subLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subLabel.c_str(), allocator).Move(), allocator);
    }

}


string TaskLabel::GetLabel() const
{
    return m_label;
}

void TaskLabel::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool TaskLabel::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

string TaskLabel::GetSuggestion() const
{
    return m_suggestion;
}

void TaskLabel::SetSuggestion(const string& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool TaskLabel::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

int64_t TaskLabel::GetScore() const
{
    return m_score;
}

void TaskLabel::SetScore(const int64_t& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool TaskLabel::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

string TaskLabel::GetSubLabel() const
{
    return m_subLabel;
}

void TaskLabel::SetSubLabel(const string& _subLabel)
{
    m_subLabel = _subLabel;
    m_subLabelHasBeenSet = true;
}

bool TaskLabel::SubLabelHasBeenSet() const
{
    return m_subLabelHasBeenSet;
}

