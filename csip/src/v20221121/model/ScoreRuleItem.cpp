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

#include <tencentcloud/csip/v20221121/model/ScoreRuleItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ScoreRuleItem::ScoreRuleItem() :
    m_ruleTypeHasBeenSet(false),
    m_dimensionIdHasBeenSet(false),
    m_dimensionNameHasBeenSet(false),
    m_categoryIdHasBeenSet(false),
    m_categoryDescHasBeenSet(false),
    m_categoryNameHasBeenSet(false),
    m_severityHasBeenSet(false),
    m_maxDeductScoreHasBeenSet(false),
    m_deductPerItemHasBeenSet(false),
    m_deductPerItemDisabledHasBeenSet(false),
    m_sortOrderHasBeenSet(false)
{
}

CoreInternalOutcome ScoreRuleItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreRuleItem.RuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = string(value["RuleType"].GetString());
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("DimensionId") && !value["DimensionId"].IsNull())
    {
        if (!value["DimensionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreRuleItem.DimensionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dimensionId = string(value["DimensionId"].GetString());
        m_dimensionIdHasBeenSet = true;
    }

    if (value.HasMember("DimensionName") && !value["DimensionName"].IsNull())
    {
        if (!value["DimensionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreRuleItem.DimensionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dimensionName = string(value["DimensionName"].GetString());
        m_dimensionNameHasBeenSet = true;
    }

    if (value.HasMember("CategoryId") && !value["CategoryId"].IsNull())
    {
        if (!value["CategoryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreRuleItem.CategoryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryId = string(value["CategoryId"].GetString());
        m_categoryIdHasBeenSet = true;
    }

    if (value.HasMember("CategoryDesc") && !value["CategoryDesc"].IsNull())
    {
        if (!value["CategoryDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreRuleItem.CategoryDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryDesc = string(value["CategoryDesc"].GetString());
        m_categoryDescHasBeenSet = true;
    }

    if (value.HasMember("CategoryName") && !value["CategoryName"].IsNull())
    {
        if (!value["CategoryName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreRuleItem.CategoryName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryName = string(value["CategoryName"].GetString());
        m_categoryNameHasBeenSet = true;
    }

    if (value.HasMember("Severity") && !value["Severity"].IsNull())
    {
        if (!value["Severity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreRuleItem.Severity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_severity = string(value["Severity"].GetString());
        m_severityHasBeenSet = true;
    }

    if (value.HasMember("MaxDeductScore") && !value["MaxDeductScore"].IsNull())
    {
        if (!value["MaxDeductScore"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreRuleItem.MaxDeductScore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxDeductScore = value["MaxDeductScore"].GetInt64();
        m_maxDeductScoreHasBeenSet = true;
    }

    if (value.HasMember("DeductPerItem") && !value["DeductPerItem"].IsNull())
    {
        if (!value["DeductPerItem"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreRuleItem.DeductPerItem` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deductPerItem = value["DeductPerItem"].GetInt64();
        m_deductPerItemHasBeenSet = true;
    }

    if (value.HasMember("DeductPerItemDisabled") && !value["DeductPerItemDisabled"].IsNull())
    {
        if (!value["DeductPerItemDisabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreRuleItem.DeductPerItemDisabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deductPerItemDisabled = value["DeductPerItemDisabled"].GetBool();
        m_deductPerItemDisabledHasBeenSet = true;
    }

    if (value.HasMember("SortOrder") && !value["SortOrder"].IsNull())
    {
        if (!value["SortOrder"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreRuleItem.SortOrder` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sortOrder = value["SortOrder"].GetInt64();
        m_sortOrderHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScoreRuleItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleType.c_str(), allocator).Move(), allocator);
    }

    if (m_dimensionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DimensionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dimensionId.c_str(), allocator).Move(), allocator);
    }

    if (m_dimensionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DimensionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dimensionName.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_categoryId.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_categoryDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_categoryName.c_str(), allocator).Move(), allocator);
    }

    if (m_severityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Severity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_severity.c_str(), allocator).Move(), allocator);
    }

    if (m_maxDeductScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDeductScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxDeductScore, allocator);
    }

    if (m_deductPerItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeductPerItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deductPerItem, allocator);
    }

    if (m_deductPerItemDisabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeductPerItemDisabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deductPerItemDisabled, allocator);
    }

    if (m_sortOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortOrder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sortOrder, allocator);
    }

}


string ScoreRuleItem::GetRuleType() const
{
    return m_ruleType;
}

void ScoreRuleItem::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool ScoreRuleItem::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

string ScoreRuleItem::GetDimensionId() const
{
    return m_dimensionId;
}

void ScoreRuleItem::SetDimensionId(const string& _dimensionId)
{
    m_dimensionId = _dimensionId;
    m_dimensionIdHasBeenSet = true;
}

bool ScoreRuleItem::DimensionIdHasBeenSet() const
{
    return m_dimensionIdHasBeenSet;
}

string ScoreRuleItem::GetDimensionName() const
{
    return m_dimensionName;
}

void ScoreRuleItem::SetDimensionName(const string& _dimensionName)
{
    m_dimensionName = _dimensionName;
    m_dimensionNameHasBeenSet = true;
}

bool ScoreRuleItem::DimensionNameHasBeenSet() const
{
    return m_dimensionNameHasBeenSet;
}

string ScoreRuleItem::GetCategoryId() const
{
    return m_categoryId;
}

void ScoreRuleItem::SetCategoryId(const string& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool ScoreRuleItem::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

string ScoreRuleItem::GetCategoryDesc() const
{
    return m_categoryDesc;
}

void ScoreRuleItem::SetCategoryDesc(const string& _categoryDesc)
{
    m_categoryDesc = _categoryDesc;
    m_categoryDescHasBeenSet = true;
}

bool ScoreRuleItem::CategoryDescHasBeenSet() const
{
    return m_categoryDescHasBeenSet;
}

string ScoreRuleItem::GetCategoryName() const
{
    return m_categoryName;
}

void ScoreRuleItem::SetCategoryName(const string& _categoryName)
{
    m_categoryName = _categoryName;
    m_categoryNameHasBeenSet = true;
}

bool ScoreRuleItem::CategoryNameHasBeenSet() const
{
    return m_categoryNameHasBeenSet;
}

string ScoreRuleItem::GetSeverity() const
{
    return m_severity;
}

void ScoreRuleItem::SetSeverity(const string& _severity)
{
    m_severity = _severity;
    m_severityHasBeenSet = true;
}

bool ScoreRuleItem::SeverityHasBeenSet() const
{
    return m_severityHasBeenSet;
}

int64_t ScoreRuleItem::GetMaxDeductScore() const
{
    return m_maxDeductScore;
}

void ScoreRuleItem::SetMaxDeductScore(const int64_t& _maxDeductScore)
{
    m_maxDeductScore = _maxDeductScore;
    m_maxDeductScoreHasBeenSet = true;
}

bool ScoreRuleItem::MaxDeductScoreHasBeenSet() const
{
    return m_maxDeductScoreHasBeenSet;
}

int64_t ScoreRuleItem::GetDeductPerItem() const
{
    return m_deductPerItem;
}

void ScoreRuleItem::SetDeductPerItem(const int64_t& _deductPerItem)
{
    m_deductPerItem = _deductPerItem;
    m_deductPerItemHasBeenSet = true;
}

bool ScoreRuleItem::DeductPerItemHasBeenSet() const
{
    return m_deductPerItemHasBeenSet;
}

bool ScoreRuleItem::GetDeductPerItemDisabled() const
{
    return m_deductPerItemDisabled;
}

void ScoreRuleItem::SetDeductPerItemDisabled(const bool& _deductPerItemDisabled)
{
    m_deductPerItemDisabled = _deductPerItemDisabled;
    m_deductPerItemDisabledHasBeenSet = true;
}

bool ScoreRuleItem::DeductPerItemDisabledHasBeenSet() const
{
    return m_deductPerItemDisabledHasBeenSet;
}

int64_t ScoreRuleItem::GetSortOrder() const
{
    return m_sortOrder;
}

void ScoreRuleItem::SetSortOrder(const int64_t& _sortOrder)
{
    m_sortOrder = _sortOrder;
    m_sortOrderHasBeenSet = true;
}

bool ScoreRuleItem::SortOrderHasBeenSet() const
{
    return m_sortOrderHasBeenSet;
}

