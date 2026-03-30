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

#include <tencentcloud/vm/v20210922/model/VideoLLMDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vm::V20210922::Model;
using namespace std;

VideoLLMDetail::VideoLLMDetail() :
    m_labelNameHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_targetTextHasBeenSet(false),
    m_suggestionHasBeenSet(false)
{
}

CoreInternalOutcome VideoLLMDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LabelName") && !value["LabelName"].IsNull())
    {
        if (!value["LabelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoLLMDetail.LabelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelName = string(value["LabelName"].GetString());
        m_labelNameHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoLLMDetail.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }

    if (value.HasMember("TargetText") && !value["TargetText"].IsNull())
    {
        if (!value["TargetText"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VideoLLMDetail.TargetText` is not array type"));

        const rapidjson::Value &tmpValue = value["TargetText"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_targetText.push_back((*itr).GetString());
        }
        m_targetTextHasBeenSet = true;
    }

    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoLLMDetail.Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(value["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoLLMDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_labelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labelName.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

    if (m_targetTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_targetText.begin(); itr != m_targetText.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_suggestionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Suggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_suggestion.c_str(), allocator).Move(), allocator);
    }

}


string VideoLLMDetail::GetLabelName() const
{
    return m_labelName;
}

void VideoLLMDetail::SetLabelName(const string& _labelName)
{
    m_labelName = _labelName;
    m_labelNameHasBeenSet = true;
}

bool VideoLLMDetail::LabelNameHasBeenSet() const
{
    return m_labelNameHasBeenSet;
}

string VideoLLMDetail::GetReason() const
{
    return m_reason;
}

void VideoLLMDetail::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool VideoLLMDetail::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

vector<string> VideoLLMDetail::GetTargetText() const
{
    return m_targetText;
}

void VideoLLMDetail::SetTargetText(const vector<string>& _targetText)
{
    m_targetText = _targetText;
    m_targetTextHasBeenSet = true;
}

bool VideoLLMDetail::TargetTextHasBeenSet() const
{
    return m_targetTextHasBeenSet;
}

string VideoLLMDetail::GetSuggestion() const
{
    return m_suggestion;
}

void VideoLLMDetail::SetSuggestion(const string& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool VideoLLMDetail::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

