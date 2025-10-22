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

#include <tencentcloud/tms/v20201229/model/FinancialLLMViolationDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tms::V20201229::Model;
using namespace std;

FinancialLLMViolationDetail::FinancialLLMViolationDetail() :
    m_labelHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_reasonsHasBeenSet(false)
{
}

CoreInternalOutcome FinancialLLMViolationDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinancialLLMViolationDetail.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinancialLLMViolationDetail.Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(value["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (value.HasMember("Reasons") && !value["Reasons"].IsNull())
    {
        if (!value["Reasons"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FinancialLLMViolationDetail.Reasons` is not array type"));

        const rapidjson::Value &tmpValue = value["Reasons"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FinancialLLMViolationReason item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_reasons.push_back(item);
        }
        m_reasonsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FinancialLLMViolationDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_reasonsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reasons";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_reasons.begin(); itr != m_reasons.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string FinancialLLMViolationDetail::GetLabel() const
{
    return m_label;
}

void FinancialLLMViolationDetail::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool FinancialLLMViolationDetail::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

string FinancialLLMViolationDetail::GetSuggestion() const
{
    return m_suggestion;
}

void FinancialLLMViolationDetail::SetSuggestion(const string& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool FinancialLLMViolationDetail::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

vector<FinancialLLMViolationReason> FinancialLLMViolationDetail::GetReasons() const
{
    return m_reasons;
}

void FinancialLLMViolationDetail::SetReasons(const vector<FinancialLLMViolationReason>& _reasons)
{
    m_reasons = _reasons;
    m_reasonsHasBeenSet = true;
}

bool FinancialLLMViolationDetail::ReasonsHasBeenSet() const
{
    return m_reasonsHasBeenSet;
}

