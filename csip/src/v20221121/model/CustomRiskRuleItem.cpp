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

#include <tencentcloud/csip/v20221121/model/CustomRiskRuleItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CustomRiskRuleItem::CustomRiskRuleItem() :
    m_ruleIDHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_riskTitleHasBeenSet(false),
    m_classifyHasBeenSet(false),
    m_severityHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_relatedUinCountHasBeenSet(false),
    m_policyEnableCountHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_isFreeHasBeenSet(false),
    m_checkTypeHasBeenSet(false),
    m_standardTermsHasBeenSet(false),
    m_assetTypeIconURLHasBeenSet(false)
{
}

CoreInternalOutcome CustomRiskRuleItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleID") && !value["RuleID"].IsNull())
    {
        if (!value["RuleID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomRiskRuleItem.RuleID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleID = string(value["RuleID"].GetString());
        m_ruleIDHasBeenSet = true;
    }

    if (value.HasMember("Provider") && !value["Provider"].IsNull())
    {
        if (!value["Provider"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomRiskRuleItem.Provider` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_provider = string(value["Provider"].GetString());
        m_providerHasBeenSet = true;
    }

    if (value.HasMember("RiskTitle") && !value["RiskTitle"].IsNull())
    {
        if (!value["RiskTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomRiskRuleItem.RiskTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskTitle = string(value["RiskTitle"].GetString());
        m_riskTitleHasBeenSet = true;
    }

    if (value.HasMember("Classify") && !value["Classify"].IsNull())
    {
        if (!value["Classify"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomRiskRuleItem.Classify` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_classify = string(value["Classify"].GetString());
        m_classifyHasBeenSet = true;
    }

    if (value.HasMember("Severity") && !value["Severity"].IsNull())
    {
        if (!value["Severity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomRiskRuleItem.Severity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_severity = string(value["Severity"].GetString());
        m_severityHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomRiskRuleItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("RelatedUinCount") && !value["RelatedUinCount"].IsNull())
    {
        if (!value["RelatedUinCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomRiskRuleItem.RelatedUinCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_relatedUinCount = value["RelatedUinCount"].GetUint64();
        m_relatedUinCountHasBeenSet = true;
    }

    if (value.HasMember("PolicyEnableCount") && !value["PolicyEnableCount"].IsNull())
    {
        if (!value["PolicyEnableCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomRiskRuleItem.PolicyEnableCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_policyEnableCount = value["PolicyEnableCount"].GetUint64();
        m_policyEnableCountHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomRiskRuleItem.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("IsFree") && !value["IsFree"].IsNull())
    {
        if (!value["IsFree"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomRiskRuleItem.IsFree` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isFree = value["IsFree"].GetUint64();
        m_isFreeHasBeenSet = true;
    }

    if (value.HasMember("CheckType") && !value["CheckType"].IsNull())
    {
        if (!value["CheckType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomRiskRuleItem.CheckType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkType = string(value["CheckType"].GetString());
        m_checkTypeHasBeenSet = true;
    }

    if (value.HasMember("StandardTerms") && !value["StandardTerms"].IsNull())
    {
        if (!value["StandardTerms"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CustomRiskRuleItem.StandardTerms` is not array type"));

        const rapidjson::Value &tmpValue = value["StandardTerms"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StandardTerm item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_standardTerms.push_back(item);
        }
        m_standardTermsHasBeenSet = true;
    }

    if (value.HasMember("AssetTypeIconURL") && !value["AssetTypeIconURL"].IsNull())
    {
        if (!value["AssetTypeIconURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomRiskRuleItem.AssetTypeIconURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetTypeIconURL = string(value["AssetTypeIconURL"].GetString());
        m_assetTypeIconURLHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomRiskRuleItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleID.c_str(), allocator).Move(), allocator);
    }

    if (m_providerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Provider";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_provider.c_str(), allocator).Move(), allocator);
    }

    if (m_riskTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_classifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Classify";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_classify.c_str(), allocator).Move(), allocator);
    }

    if (m_severityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Severity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_severity.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_relatedUinCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelatedUinCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_relatedUinCount, allocator);
    }

    if (m_policyEnableCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyEnableCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyEnableCount, allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_isFreeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFree";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isFree, allocator);
    }

    if (m_checkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkType.c_str(), allocator).Move(), allocator);
    }

    if (m_standardTermsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StandardTerms";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_standardTerms.begin(); itr != m_standardTerms.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_assetTypeIconURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetTypeIconURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetTypeIconURL.c_str(), allocator).Move(), allocator);
    }

}


string CustomRiskRuleItem::GetRuleID() const
{
    return m_ruleID;
}

void CustomRiskRuleItem::SetRuleID(const string& _ruleID)
{
    m_ruleID = _ruleID;
    m_ruleIDHasBeenSet = true;
}

bool CustomRiskRuleItem::RuleIDHasBeenSet() const
{
    return m_ruleIDHasBeenSet;
}

string CustomRiskRuleItem::GetProvider() const
{
    return m_provider;
}

void CustomRiskRuleItem::SetProvider(const string& _provider)
{
    m_provider = _provider;
    m_providerHasBeenSet = true;
}

bool CustomRiskRuleItem::ProviderHasBeenSet() const
{
    return m_providerHasBeenSet;
}

string CustomRiskRuleItem::GetRiskTitle() const
{
    return m_riskTitle;
}

void CustomRiskRuleItem::SetRiskTitle(const string& _riskTitle)
{
    m_riskTitle = _riskTitle;
    m_riskTitleHasBeenSet = true;
}

bool CustomRiskRuleItem::RiskTitleHasBeenSet() const
{
    return m_riskTitleHasBeenSet;
}

string CustomRiskRuleItem::GetClassify() const
{
    return m_classify;
}

void CustomRiskRuleItem::SetClassify(const string& _classify)
{
    m_classify = _classify;
    m_classifyHasBeenSet = true;
}

bool CustomRiskRuleItem::ClassifyHasBeenSet() const
{
    return m_classifyHasBeenSet;
}

string CustomRiskRuleItem::GetSeverity() const
{
    return m_severity;
}

void CustomRiskRuleItem::SetSeverity(const string& _severity)
{
    m_severity = _severity;
    m_severityHasBeenSet = true;
}

bool CustomRiskRuleItem::SeverityHasBeenSet() const
{
    return m_severityHasBeenSet;
}

string CustomRiskRuleItem::GetStatus() const
{
    return m_status;
}

void CustomRiskRuleItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CustomRiskRuleItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t CustomRiskRuleItem::GetRelatedUinCount() const
{
    return m_relatedUinCount;
}

void CustomRiskRuleItem::SetRelatedUinCount(const uint64_t& _relatedUinCount)
{
    m_relatedUinCount = _relatedUinCount;
    m_relatedUinCountHasBeenSet = true;
}

bool CustomRiskRuleItem::RelatedUinCountHasBeenSet() const
{
    return m_relatedUinCountHasBeenSet;
}

uint64_t CustomRiskRuleItem::GetPolicyEnableCount() const
{
    return m_policyEnableCount;
}

void CustomRiskRuleItem::SetPolicyEnableCount(const uint64_t& _policyEnableCount)
{
    m_policyEnableCount = _policyEnableCount;
    m_policyEnableCountHasBeenSet = true;
}

bool CustomRiskRuleItem::PolicyEnableCountHasBeenSet() const
{
    return m_policyEnableCountHasBeenSet;
}

string CustomRiskRuleItem::GetAssetType() const
{
    return m_assetType;
}

void CustomRiskRuleItem::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool CustomRiskRuleItem::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

uint64_t CustomRiskRuleItem::GetIsFree() const
{
    return m_isFree;
}

void CustomRiskRuleItem::SetIsFree(const uint64_t& _isFree)
{
    m_isFree = _isFree;
    m_isFreeHasBeenSet = true;
}

bool CustomRiskRuleItem::IsFreeHasBeenSet() const
{
    return m_isFreeHasBeenSet;
}

string CustomRiskRuleItem::GetCheckType() const
{
    return m_checkType;
}

void CustomRiskRuleItem::SetCheckType(const string& _checkType)
{
    m_checkType = _checkType;
    m_checkTypeHasBeenSet = true;
}

bool CustomRiskRuleItem::CheckTypeHasBeenSet() const
{
    return m_checkTypeHasBeenSet;
}

vector<StandardTerm> CustomRiskRuleItem::GetStandardTerms() const
{
    return m_standardTerms;
}

void CustomRiskRuleItem::SetStandardTerms(const vector<StandardTerm>& _standardTerms)
{
    m_standardTerms = _standardTerms;
    m_standardTermsHasBeenSet = true;
}

bool CustomRiskRuleItem::StandardTermsHasBeenSet() const
{
    return m_standardTermsHasBeenSet;
}

string CustomRiskRuleItem::GetAssetTypeIconURL() const
{
    return m_assetTypeIconURL;
}

void CustomRiskRuleItem::SetAssetTypeIconURL(const string& _assetTypeIconURL)
{
    m_assetTypeIconURL = _assetTypeIconURL;
    m_assetTypeIconURLHasBeenSet = true;
}

bool CustomRiskRuleItem::AssetTypeIconURLHasBeenSet() const
{
    return m_assetTypeIconURLHasBeenSet;
}

