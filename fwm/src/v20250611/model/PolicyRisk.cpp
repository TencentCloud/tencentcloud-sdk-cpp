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

#include <tencentcloud/fwm/v20250611/model/PolicyRisk.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Fwm::V20250611::Model;
using namespace std;

PolicyRisk::PolicyRisk() :
    m_idHasBeenSet(false),
    m_riskCategoryHasBeenSet(false),
    m_riskSubCategoryHasBeenSet(false),
    m_ruleTypeHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_productHasBeenSet(false),
    m_sgRuleIdHasBeenSet(false),
    m_ruleCountHasBeenSet(false),
    m_sgIdHasBeenSet(false),
    m_riskFeatureHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_foundTimeHasBeenSet(false),
    m_disposalTimeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_directionHasBeenSet(false),
    m_riskReasonHasBeenSet(false)
{
}

CoreInternalOutcome PolicyRisk::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyRisk.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("RiskCategory") && !value["RiskCategory"].IsNull())
    {
        if (!value["RiskCategory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyRisk.RiskCategory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskCategory = string(value["RiskCategory"].GetString());
        m_riskCategoryHasBeenSet = true;
    }

    if (value.HasMember("RiskSubCategory") && !value["RiskSubCategory"].IsNull())
    {
        if (!value["RiskSubCategory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyRisk.RiskSubCategory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskSubCategory = string(value["RiskSubCategory"].GetString());
        m_riskSubCategoryHasBeenSet = true;
    }

    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyRisk.RuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = string(value["RuleType"].GetString());
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyRisk.RiskLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = value["RiskLevel"].GetInt64();
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("Product") && !value["Product"].IsNull())
    {
        if (!value["Product"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyRisk.Product` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_product = string(value["Product"].GetString());
        m_productHasBeenSet = true;
    }

    if (value.HasMember("SgRuleId") && !value["SgRuleId"].IsNull())
    {
        if (!value["SgRuleId"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PolicyRisk.SgRuleId` is not array type"));

        const rapidjson::Value &tmpValue = value["SgRuleId"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sgRuleId.push_back((*itr).GetString());
        }
        m_sgRuleIdHasBeenSet = true;
    }

    if (value.HasMember("RuleCount") && !value["RuleCount"].IsNull())
    {
        if (!value["RuleCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyRisk.RuleCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleCount = value["RuleCount"].GetInt64();
        m_ruleCountHasBeenSet = true;
    }

    if (value.HasMember("SgId") && !value["SgId"].IsNull())
    {
        if (!value["SgId"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PolicyRisk.SgId` is not array type"));

        const rapidjson::Value &tmpValue = value["SgId"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sgId.push_back((*itr).GetString());
        }
        m_sgIdHasBeenSet = true;
    }

    if (value.HasMember("RiskFeature") && !value["RiskFeature"].IsNull())
    {
        if (!value["RiskFeature"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyRisk.RiskFeature` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskFeature = string(value["RiskFeature"].GetString());
        m_riskFeatureHasBeenSet = true;
    }

    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyRisk.Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(value["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyRisk.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("FoundTime") && !value["FoundTime"].IsNull())
    {
        if (!value["FoundTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyRisk.FoundTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_foundTime = string(value["FoundTime"].GetString());
        m_foundTimeHasBeenSet = true;
    }

    if (value.HasMember("DisposalTime") && !value["DisposalTime"].IsNull())
    {
        if (!value["DisposalTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyRisk.DisposalTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_disposalTime = string(value["DisposalTime"].GetString());
        m_disposalTimeHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyRisk.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Direction") && !value["Direction"].IsNull())
    {
        if (!value["Direction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyRisk.Direction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_direction = string(value["Direction"].GetString());
        m_directionHasBeenSet = true;
    }

    if (value.HasMember("RiskReason") && !value["RiskReason"].IsNull())
    {
        if (!value["RiskReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyRisk.RiskReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskReason = string(value["RiskReason"].GetString());
        m_riskReasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PolicyRisk::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_riskCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskCategory.c_str(), allocator).Move(), allocator);
    }

    if (m_riskSubCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskSubCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskSubCategory.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleType.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskLevel, allocator);
    }

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_sgRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SgRuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sgRuleId.begin(); itr != m_sgRuleId.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ruleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleCount, allocator);
    }

    if (m_sgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SgId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sgId.begin(); itr != m_sgId.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_riskFeatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskFeature";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskFeature.c_str(), allocator).Move(), allocator);
    }

    if (m_suggestionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Suggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_suggestion.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_foundTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FoundTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_foundTime.c_str(), allocator).Move(), allocator);
    }

    if (m_disposalTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisposalTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_disposalTime.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_directionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Direction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_direction.c_str(), allocator).Move(), allocator);
    }

    if (m_riskReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskReason.c_str(), allocator).Move(), allocator);
    }

}


string PolicyRisk::GetId() const
{
    return m_id;
}

void PolicyRisk::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool PolicyRisk::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string PolicyRisk::GetRiskCategory() const
{
    return m_riskCategory;
}

void PolicyRisk::SetRiskCategory(const string& _riskCategory)
{
    m_riskCategory = _riskCategory;
    m_riskCategoryHasBeenSet = true;
}

bool PolicyRisk::RiskCategoryHasBeenSet() const
{
    return m_riskCategoryHasBeenSet;
}

string PolicyRisk::GetRiskSubCategory() const
{
    return m_riskSubCategory;
}

void PolicyRisk::SetRiskSubCategory(const string& _riskSubCategory)
{
    m_riskSubCategory = _riskSubCategory;
    m_riskSubCategoryHasBeenSet = true;
}

bool PolicyRisk::RiskSubCategoryHasBeenSet() const
{
    return m_riskSubCategoryHasBeenSet;
}

string PolicyRisk::GetRuleType() const
{
    return m_ruleType;
}

void PolicyRisk::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool PolicyRisk::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

int64_t PolicyRisk::GetRiskLevel() const
{
    return m_riskLevel;
}

void PolicyRisk::SetRiskLevel(const int64_t& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool PolicyRisk::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string PolicyRisk::GetProduct() const
{
    return m_product;
}

void PolicyRisk::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool PolicyRisk::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

vector<string> PolicyRisk::GetSgRuleId() const
{
    return m_sgRuleId;
}

void PolicyRisk::SetSgRuleId(const vector<string>& _sgRuleId)
{
    m_sgRuleId = _sgRuleId;
    m_sgRuleIdHasBeenSet = true;
}

bool PolicyRisk::SgRuleIdHasBeenSet() const
{
    return m_sgRuleIdHasBeenSet;
}

int64_t PolicyRisk::GetRuleCount() const
{
    return m_ruleCount;
}

void PolicyRisk::SetRuleCount(const int64_t& _ruleCount)
{
    m_ruleCount = _ruleCount;
    m_ruleCountHasBeenSet = true;
}

bool PolicyRisk::RuleCountHasBeenSet() const
{
    return m_ruleCountHasBeenSet;
}

vector<string> PolicyRisk::GetSgId() const
{
    return m_sgId;
}

void PolicyRisk::SetSgId(const vector<string>& _sgId)
{
    m_sgId = _sgId;
    m_sgIdHasBeenSet = true;
}

bool PolicyRisk::SgIdHasBeenSet() const
{
    return m_sgIdHasBeenSet;
}

string PolicyRisk::GetRiskFeature() const
{
    return m_riskFeature;
}

void PolicyRisk::SetRiskFeature(const string& _riskFeature)
{
    m_riskFeature = _riskFeature;
    m_riskFeatureHasBeenSet = true;
}

bool PolicyRisk::RiskFeatureHasBeenSet() const
{
    return m_riskFeatureHasBeenSet;
}

string PolicyRisk::GetSuggestion() const
{
    return m_suggestion;
}

void PolicyRisk::SetSuggestion(const string& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool PolicyRisk::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

int64_t PolicyRisk::GetStatus() const
{
    return m_status;
}

void PolicyRisk::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool PolicyRisk::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string PolicyRisk::GetFoundTime() const
{
    return m_foundTime;
}

void PolicyRisk::SetFoundTime(const string& _foundTime)
{
    m_foundTime = _foundTime;
    m_foundTimeHasBeenSet = true;
}

bool PolicyRisk::FoundTimeHasBeenSet() const
{
    return m_foundTimeHasBeenSet;
}

string PolicyRisk::GetDisposalTime() const
{
    return m_disposalTime;
}

void PolicyRisk::SetDisposalTime(const string& _disposalTime)
{
    m_disposalTime = _disposalTime;
    m_disposalTimeHasBeenSet = true;
}

bool PolicyRisk::DisposalTimeHasBeenSet() const
{
    return m_disposalTimeHasBeenSet;
}

string PolicyRisk::GetRegion() const
{
    return m_region;
}

void PolicyRisk::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool PolicyRisk::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string PolicyRisk::GetDirection() const
{
    return m_direction;
}

void PolicyRisk::SetDirection(const string& _direction)
{
    m_direction = _direction;
    m_directionHasBeenSet = true;
}

bool PolicyRisk::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}

string PolicyRisk::GetRiskReason() const
{
    return m_riskReason;
}

void PolicyRisk::SetRiskReason(const string& _riskReason)
{
    m_riskReason = _riskReason;
    m_riskReasonHasBeenSet = true;
}

bool PolicyRisk::RiskReasonHasBeenSet() const
{
    return m_riskReasonHasBeenSet;
}

