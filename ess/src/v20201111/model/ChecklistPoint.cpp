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

#include <tencentcloud/ess/v20201111/model/ChecklistPoint.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

ChecklistPoint::ChecklistPoint() :
    m_summaryHasBeenSet(false),
    m_explanationHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_idHasBeenSet(false),
    m_isIndispensableHasBeenSet(false),
    m_isConsistentWithReferenceItemHasBeenSet(false),
    m_referenceItemHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_aiSuggestionHasBeenSet(false),
    m_riskPresentationHasBeenSet(false)
{
}

CoreInternalOutcome ChecklistPoint::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Summary") && !value["Summary"].IsNull())
    {
        if (!value["Summary"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChecklistPoint.Summary` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_summary = string(value["Summary"].GetString());
        m_summaryHasBeenSet = true;
    }

    if (value.HasMember("Explanation") && !value["Explanation"].IsNull())
    {
        if (!value["Explanation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChecklistPoint.Explanation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_explanation = string(value["Explanation"].GetString());
        m_explanationHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChecklistPoint.RiskLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = string(value["RiskLevel"].GetString());
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChecklistPoint.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("IsIndispensable") && !value["IsIndispensable"].IsNull())
    {
        if (!value["IsIndispensable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ChecklistPoint.IsIndispensable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isIndispensable = value["IsIndispensable"].GetBool();
        m_isIndispensableHasBeenSet = true;
    }

    if (value.HasMember("IsConsistentWithReferenceItem") && !value["IsConsistentWithReferenceItem"].IsNull())
    {
        if (!value["IsConsistentWithReferenceItem"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ChecklistPoint.IsConsistentWithReferenceItem` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isConsistentWithReferenceItem = value["IsConsistentWithReferenceItem"].GetBool();
        m_isConsistentWithReferenceItemHasBeenSet = true;
    }

    if (value.HasMember("ReferenceItem") && !value["ReferenceItem"].IsNull())
    {
        if (!value["ReferenceItem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChecklistPoint.ReferenceItem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_referenceItem = string(value["ReferenceItem"].GetString());
        m_referenceItemHasBeenSet = true;
    }

    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChecklistPoint.Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(value["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (value.HasMember("AiSuggestion") && !value["AiSuggestion"].IsNull())
    {
        if (!value["AiSuggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChecklistPoint.AiSuggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aiSuggestion = string(value["AiSuggestion"].GetString());
        m_aiSuggestionHasBeenSet = true;
    }

    if (value.HasMember("RiskPresentation") && !value["RiskPresentation"].IsNull())
    {
        if (!value["RiskPresentation"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ChecklistPoint.RiskPresentation` is not array type"));

        const rapidjson::Value &tmpValue = value["RiskPresentation"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_riskPresentation.push_back((*itr).GetString());
        }
        m_riskPresentationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChecklistPoint::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_summaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Summary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_summary.c_str(), allocator).Move(), allocator);
    }

    if (m_explanationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Explanation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_explanation.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_isIndispensableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsIndispensable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isIndispensable, allocator);
    }

    if (m_isConsistentWithReferenceItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsConsistentWithReferenceItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isConsistentWithReferenceItem, allocator);
    }

    if (m_referenceItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferenceItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_referenceItem.c_str(), allocator).Move(), allocator);
    }

    if (m_suggestionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Suggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_suggestion.c_str(), allocator).Move(), allocator);
    }

    if (m_aiSuggestionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiSuggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aiSuggestion.c_str(), allocator).Move(), allocator);
    }

    if (m_riskPresentationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskPresentation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_riskPresentation.begin(); itr != m_riskPresentation.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ChecklistPoint::GetSummary() const
{
    return m_summary;
}

void ChecklistPoint::SetSummary(const string& _summary)
{
    m_summary = _summary;
    m_summaryHasBeenSet = true;
}

bool ChecklistPoint::SummaryHasBeenSet() const
{
    return m_summaryHasBeenSet;
}

string ChecklistPoint::GetExplanation() const
{
    return m_explanation;
}

void ChecklistPoint::SetExplanation(const string& _explanation)
{
    m_explanation = _explanation;
    m_explanationHasBeenSet = true;
}

bool ChecklistPoint::ExplanationHasBeenSet() const
{
    return m_explanationHasBeenSet;
}

string ChecklistPoint::GetRiskLevel() const
{
    return m_riskLevel;
}

void ChecklistPoint::SetRiskLevel(const string& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool ChecklistPoint::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string ChecklistPoint::GetId() const
{
    return m_id;
}

void ChecklistPoint::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ChecklistPoint::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

bool ChecklistPoint::GetIsIndispensable() const
{
    return m_isIndispensable;
}

void ChecklistPoint::SetIsIndispensable(const bool& _isIndispensable)
{
    m_isIndispensable = _isIndispensable;
    m_isIndispensableHasBeenSet = true;
}

bool ChecklistPoint::IsIndispensableHasBeenSet() const
{
    return m_isIndispensableHasBeenSet;
}

bool ChecklistPoint::GetIsConsistentWithReferenceItem() const
{
    return m_isConsistentWithReferenceItem;
}

void ChecklistPoint::SetIsConsistentWithReferenceItem(const bool& _isConsistentWithReferenceItem)
{
    m_isConsistentWithReferenceItem = _isConsistentWithReferenceItem;
    m_isConsistentWithReferenceItemHasBeenSet = true;
}

bool ChecklistPoint::IsConsistentWithReferenceItemHasBeenSet() const
{
    return m_isConsistentWithReferenceItemHasBeenSet;
}

string ChecklistPoint::GetReferenceItem() const
{
    return m_referenceItem;
}

void ChecklistPoint::SetReferenceItem(const string& _referenceItem)
{
    m_referenceItem = _referenceItem;
    m_referenceItemHasBeenSet = true;
}

bool ChecklistPoint::ReferenceItemHasBeenSet() const
{
    return m_referenceItemHasBeenSet;
}

string ChecklistPoint::GetSuggestion() const
{
    return m_suggestion;
}

void ChecklistPoint::SetSuggestion(const string& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool ChecklistPoint::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

string ChecklistPoint::GetAiSuggestion() const
{
    return m_aiSuggestion;
}

void ChecklistPoint::SetAiSuggestion(const string& _aiSuggestion)
{
    m_aiSuggestion = _aiSuggestion;
    m_aiSuggestionHasBeenSet = true;
}

bool ChecklistPoint::AiSuggestionHasBeenSet() const
{
    return m_aiSuggestionHasBeenSet;
}

vector<string> ChecklistPoint::GetRiskPresentation() const
{
    return m_riskPresentation;
}

void ChecklistPoint::SetRiskPresentation(const vector<string>& _riskPresentation)
{
    m_riskPresentation = _riskPresentation;
    m_riskPresentationHasBeenSet = true;
}

bool ChecklistPoint::RiskPresentationHasBeenSet() const
{
    return m_riskPresentationHasBeenSet;
}

