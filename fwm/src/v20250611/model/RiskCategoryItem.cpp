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

#include <tencentcloud/fwm/v20250611/model/RiskCategoryItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Fwm::V20250611::Model;
using namespace std;

RiskCategoryItem::RiskCategoryItem() :
    m_categoryIdHasBeenSet(false),
    m_categoryNameHasBeenSet(false),
    m_subcategoryIdHasBeenSet(false),
    m_subcategoryNameHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_riskLevelNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_ruleCountHasBeenSet(false),
    m_treatedCountHasBeenSet(false),
    m_ignoredCountHasBeenSet(false),
    m_untreatedCountHasBeenSet(false),
    m_disposalRateHasBeenSet(false),
    m_hasRiskHasBeenSet(false),
    m_remediationStatusHasBeenSet(false)
{
}

CoreInternalOutcome RiskCategoryItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CategoryId") && !value["CategoryId"].IsNull())
    {
        if (!value["CategoryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCategoryItem.CategoryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryId = string(value["CategoryId"].GetString());
        m_categoryIdHasBeenSet = true;
    }

    if (value.HasMember("CategoryName") && !value["CategoryName"].IsNull())
    {
        if (!value["CategoryName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCategoryItem.CategoryName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryName = string(value["CategoryName"].GetString());
        m_categoryNameHasBeenSet = true;
    }

    if (value.HasMember("SubcategoryId") && !value["SubcategoryId"].IsNull())
    {
        if (!value["SubcategoryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCategoryItem.SubcategoryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subcategoryId = string(value["SubcategoryId"].GetString());
        m_subcategoryIdHasBeenSet = true;
    }

    if (value.HasMember("SubcategoryName") && !value["SubcategoryName"].IsNull())
    {
        if (!value["SubcategoryName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCategoryItem.SubcategoryName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subcategoryName = string(value["SubcategoryName"].GetString());
        m_subcategoryNameHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCategoryItem.RiskLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = value["RiskLevel"].GetInt64();
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("RiskLevelName") && !value["RiskLevelName"].IsNull())
    {
        if (!value["RiskLevelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCategoryItem.RiskLevelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevelName = string(value["RiskLevelName"].GetString());
        m_riskLevelNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCategoryItem.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCategoryItem.Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(value["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (value.HasMember("RuleCount") && !value["RuleCount"].IsNull())
    {
        if (!value["RuleCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCategoryItem.RuleCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleCount = value["RuleCount"].GetInt64();
        m_ruleCountHasBeenSet = true;
    }

    if (value.HasMember("TreatedCount") && !value["TreatedCount"].IsNull())
    {
        if (!value["TreatedCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCategoryItem.TreatedCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_treatedCount = value["TreatedCount"].GetInt64();
        m_treatedCountHasBeenSet = true;
    }

    if (value.HasMember("IgnoredCount") && !value["IgnoredCount"].IsNull())
    {
        if (!value["IgnoredCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCategoryItem.IgnoredCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ignoredCount = value["IgnoredCount"].GetInt64();
        m_ignoredCountHasBeenSet = true;
    }

    if (value.HasMember("UntreatedCount") && !value["UntreatedCount"].IsNull())
    {
        if (!value["UntreatedCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCategoryItem.UntreatedCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_untreatedCount = value["UntreatedCount"].GetInt64();
        m_untreatedCountHasBeenSet = true;
    }

    if (value.HasMember("DisposalRate") && !value["DisposalRate"].IsNull())
    {
        if (!value["DisposalRate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCategoryItem.DisposalRate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_disposalRate = value["DisposalRate"].GetUint64();
        m_disposalRateHasBeenSet = true;
    }

    if (value.HasMember("HasRisk") && !value["HasRisk"].IsNull())
    {
        if (!value["HasRisk"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCategoryItem.HasRisk` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hasRisk = value["HasRisk"].GetInt64();
        m_hasRiskHasBeenSet = true;
    }

    if (value.HasMember("RemediationStatus") && !value["RemediationStatus"].IsNull())
    {
        if (!value["RemediationStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCategoryItem.RemediationStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remediationStatus = string(value["RemediationStatus"].GetString());
        m_remediationStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RiskCategoryItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_categoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_categoryId.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_categoryName.c_str(), allocator).Move(), allocator);
    }

    if (m_subcategoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubcategoryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subcategoryId.c_str(), allocator).Move(), allocator);
    }

    if (m_subcategoryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubcategoryName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subcategoryName.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskLevel, allocator);
    }

    if (m_riskLevelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskLevelName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_suggestionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Suggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_suggestion.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleCount, allocator);
    }

    if (m_treatedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TreatedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_treatedCount, allocator);
    }

    if (m_ignoredCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IgnoredCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ignoredCount, allocator);
    }

    if (m_untreatedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UntreatedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_untreatedCount, allocator);
    }

    if (m_disposalRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisposalRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disposalRate, allocator);
    }

    if (m_hasRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasRisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasRisk, allocator);
    }

    if (m_remediationStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemediationStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remediationStatus.c_str(), allocator).Move(), allocator);
    }

}


string RiskCategoryItem::GetCategoryId() const
{
    return m_categoryId;
}

void RiskCategoryItem::SetCategoryId(const string& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool RiskCategoryItem::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

string RiskCategoryItem::GetCategoryName() const
{
    return m_categoryName;
}

void RiskCategoryItem::SetCategoryName(const string& _categoryName)
{
    m_categoryName = _categoryName;
    m_categoryNameHasBeenSet = true;
}

bool RiskCategoryItem::CategoryNameHasBeenSet() const
{
    return m_categoryNameHasBeenSet;
}

string RiskCategoryItem::GetSubcategoryId() const
{
    return m_subcategoryId;
}

void RiskCategoryItem::SetSubcategoryId(const string& _subcategoryId)
{
    m_subcategoryId = _subcategoryId;
    m_subcategoryIdHasBeenSet = true;
}

bool RiskCategoryItem::SubcategoryIdHasBeenSet() const
{
    return m_subcategoryIdHasBeenSet;
}

string RiskCategoryItem::GetSubcategoryName() const
{
    return m_subcategoryName;
}

void RiskCategoryItem::SetSubcategoryName(const string& _subcategoryName)
{
    m_subcategoryName = _subcategoryName;
    m_subcategoryNameHasBeenSet = true;
}

bool RiskCategoryItem::SubcategoryNameHasBeenSet() const
{
    return m_subcategoryNameHasBeenSet;
}

int64_t RiskCategoryItem::GetRiskLevel() const
{
    return m_riskLevel;
}

void RiskCategoryItem::SetRiskLevel(const int64_t& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool RiskCategoryItem::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string RiskCategoryItem::GetRiskLevelName() const
{
    return m_riskLevelName;
}

void RiskCategoryItem::SetRiskLevelName(const string& _riskLevelName)
{
    m_riskLevelName = _riskLevelName;
    m_riskLevelNameHasBeenSet = true;
}

bool RiskCategoryItem::RiskLevelNameHasBeenSet() const
{
    return m_riskLevelNameHasBeenSet;
}

string RiskCategoryItem::GetDescription() const
{
    return m_description;
}

void RiskCategoryItem::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool RiskCategoryItem::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string RiskCategoryItem::GetSuggestion() const
{
    return m_suggestion;
}

void RiskCategoryItem::SetSuggestion(const string& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool RiskCategoryItem::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

int64_t RiskCategoryItem::GetRuleCount() const
{
    return m_ruleCount;
}

void RiskCategoryItem::SetRuleCount(const int64_t& _ruleCount)
{
    m_ruleCount = _ruleCount;
    m_ruleCountHasBeenSet = true;
}

bool RiskCategoryItem::RuleCountHasBeenSet() const
{
    return m_ruleCountHasBeenSet;
}

int64_t RiskCategoryItem::GetTreatedCount() const
{
    return m_treatedCount;
}

void RiskCategoryItem::SetTreatedCount(const int64_t& _treatedCount)
{
    m_treatedCount = _treatedCount;
    m_treatedCountHasBeenSet = true;
}

bool RiskCategoryItem::TreatedCountHasBeenSet() const
{
    return m_treatedCountHasBeenSet;
}

int64_t RiskCategoryItem::GetIgnoredCount() const
{
    return m_ignoredCount;
}

void RiskCategoryItem::SetIgnoredCount(const int64_t& _ignoredCount)
{
    m_ignoredCount = _ignoredCount;
    m_ignoredCountHasBeenSet = true;
}

bool RiskCategoryItem::IgnoredCountHasBeenSet() const
{
    return m_ignoredCountHasBeenSet;
}

int64_t RiskCategoryItem::GetUntreatedCount() const
{
    return m_untreatedCount;
}

void RiskCategoryItem::SetUntreatedCount(const int64_t& _untreatedCount)
{
    m_untreatedCount = _untreatedCount;
    m_untreatedCountHasBeenSet = true;
}

bool RiskCategoryItem::UntreatedCountHasBeenSet() const
{
    return m_untreatedCountHasBeenSet;
}

uint64_t RiskCategoryItem::GetDisposalRate() const
{
    return m_disposalRate;
}

void RiskCategoryItem::SetDisposalRate(const uint64_t& _disposalRate)
{
    m_disposalRate = _disposalRate;
    m_disposalRateHasBeenSet = true;
}

bool RiskCategoryItem::DisposalRateHasBeenSet() const
{
    return m_disposalRateHasBeenSet;
}

int64_t RiskCategoryItem::GetHasRisk() const
{
    return m_hasRisk;
}

void RiskCategoryItem::SetHasRisk(const int64_t& _hasRisk)
{
    m_hasRisk = _hasRisk;
    m_hasRiskHasBeenSet = true;
}

bool RiskCategoryItem::HasRiskHasBeenSet() const
{
    return m_hasRiskHasBeenSet;
}

string RiskCategoryItem::GetRemediationStatus() const
{
    return m_remediationStatus;
}

void RiskCategoryItem::SetRemediationStatus(const string& _remediationStatus)
{
    m_remediationStatus = _remediationStatus;
    m_remediationStatusHasBeenSet = true;
}

bool RiskCategoryItem::RemediationStatusHasBeenSet() const
{
    return m_remediationStatusHasBeenSet;
}

