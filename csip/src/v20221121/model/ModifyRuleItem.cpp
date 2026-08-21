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

#include <tencentcloud/csip/v20221121/model/ModifyRuleItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyRuleItem::ModifyRuleItem() :
    m_ruleTypeHasBeenSet(false),
    m_dimensionIdHasBeenSet(false),
    m_categoryIdHasBeenSet(false),
    m_severityHasBeenSet(false),
    m_maxDeductScoreHasBeenSet(false),
    m_deductPerItemHasBeenSet(false)
{
}

CoreInternalOutcome ModifyRuleItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyRuleItem.RuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = string(value["RuleType"].GetString());
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("DimensionId") && !value["DimensionId"].IsNull())
    {
        if (!value["DimensionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyRuleItem.DimensionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dimensionId = string(value["DimensionId"].GetString());
        m_dimensionIdHasBeenSet = true;
    }

    if (value.HasMember("CategoryId") && !value["CategoryId"].IsNull())
    {
        if (!value["CategoryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyRuleItem.CategoryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryId = string(value["CategoryId"].GetString());
        m_categoryIdHasBeenSet = true;
    }

    if (value.HasMember("Severity") && !value["Severity"].IsNull())
    {
        if (!value["Severity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyRuleItem.Severity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_severity = string(value["Severity"].GetString());
        m_severityHasBeenSet = true;
    }

    if (value.HasMember("MaxDeductScore") && !value["MaxDeductScore"].IsNull())
    {
        if (!value["MaxDeductScore"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyRuleItem.MaxDeductScore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxDeductScore = value["MaxDeductScore"].GetInt64();
        m_maxDeductScoreHasBeenSet = true;
    }

    if (value.HasMember("DeductPerItem") && !value["DeductPerItem"].IsNull())
    {
        if (!value["DeductPerItem"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyRuleItem.DeductPerItem` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deductPerItem = value["DeductPerItem"].GetInt64();
        m_deductPerItemHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModifyRuleItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_categoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_categoryId.c_str(), allocator).Move(), allocator);
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

}


string ModifyRuleItem::GetRuleType() const
{
    return m_ruleType;
}

void ModifyRuleItem::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool ModifyRuleItem::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

string ModifyRuleItem::GetDimensionId() const
{
    return m_dimensionId;
}

void ModifyRuleItem::SetDimensionId(const string& _dimensionId)
{
    m_dimensionId = _dimensionId;
    m_dimensionIdHasBeenSet = true;
}

bool ModifyRuleItem::DimensionIdHasBeenSet() const
{
    return m_dimensionIdHasBeenSet;
}

string ModifyRuleItem::GetCategoryId() const
{
    return m_categoryId;
}

void ModifyRuleItem::SetCategoryId(const string& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool ModifyRuleItem::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

string ModifyRuleItem::GetSeverity() const
{
    return m_severity;
}

void ModifyRuleItem::SetSeverity(const string& _severity)
{
    m_severity = _severity;
    m_severityHasBeenSet = true;
}

bool ModifyRuleItem::SeverityHasBeenSet() const
{
    return m_severityHasBeenSet;
}

int64_t ModifyRuleItem::GetMaxDeductScore() const
{
    return m_maxDeductScore;
}

void ModifyRuleItem::SetMaxDeductScore(const int64_t& _maxDeductScore)
{
    m_maxDeductScore = _maxDeductScore;
    m_maxDeductScoreHasBeenSet = true;
}

bool ModifyRuleItem::MaxDeductScoreHasBeenSet() const
{
    return m_maxDeductScoreHasBeenSet;
}

int64_t ModifyRuleItem::GetDeductPerItem() const
{
    return m_deductPerItem;
}

void ModifyRuleItem::SetDeductPerItem(const int64_t& _deductPerItem)
{
    m_deductPerItem = _deductPerItem;
    m_deductPerItemHasBeenSet = true;
}

bool ModifyRuleItem::DeductPerItemHasBeenSet() const
{
    return m_deductPerItemHasBeenSet;
}

