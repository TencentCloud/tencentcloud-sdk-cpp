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

#include <tencentcloud/tcss/v20201101/model/ComplianceAssetPolicyItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ComplianceAssetPolicyItem::ComplianceAssetPolicyItem() :
    m_customerPolicyItemIdHasBeenSet(false),
    m_basePolicyItemIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_benchmarkStandardIdHasBeenSet(false),
    m_benchmarkStandardNameHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_checkStatusHasBeenSet(false),
    m_checkResultHasBeenSet(false),
    m_whitelistIdHasBeenSet(false),
    m_fixSuggestionHasBeenSet(false),
    m_lastCheckTimeHasBeenSet(false),
    m_verifyInfoHasBeenSet(false)
{
}

CoreInternalOutcome ComplianceAssetPolicyItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CustomerPolicyItemId") && !value["CustomerPolicyItemId"].IsNull())
    {
        if (!value["CustomerPolicyItemId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetPolicyItem.CustomerPolicyItemId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_customerPolicyItemId = value["CustomerPolicyItemId"].GetUint64();
        m_customerPolicyItemIdHasBeenSet = true;
    }

    if (value.HasMember("BasePolicyItemId") && !value["BasePolicyItemId"].IsNull())
    {
        if (!value["BasePolicyItemId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetPolicyItem.BasePolicyItemId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_basePolicyItemId = value["BasePolicyItemId"].GetUint64();
        m_basePolicyItemIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetPolicyItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetPolicyItem.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("BenchmarkStandardId") && !value["BenchmarkStandardId"].IsNull())
    {
        if (!value["BenchmarkStandardId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetPolicyItem.BenchmarkStandardId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_benchmarkStandardId = value["BenchmarkStandardId"].GetUint64();
        m_benchmarkStandardIdHasBeenSet = true;
    }

    if (value.HasMember("BenchmarkStandardName") && !value["BenchmarkStandardName"].IsNull())
    {
        if (!value["BenchmarkStandardName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetPolicyItem.BenchmarkStandardName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_benchmarkStandardName = string(value["BenchmarkStandardName"].GetString());
        m_benchmarkStandardNameHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetPolicyItem.RiskLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = string(value["RiskLevel"].GetString());
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("CheckStatus") && !value["CheckStatus"].IsNull())
    {
        if (!value["CheckStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetPolicyItem.CheckStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkStatus = string(value["CheckStatus"].GetString());
        m_checkStatusHasBeenSet = true;
    }

    if (value.HasMember("CheckResult") && !value["CheckResult"].IsNull())
    {
        if (!value["CheckResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetPolicyItem.CheckResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkResult = string(value["CheckResult"].GetString());
        m_checkResultHasBeenSet = true;
    }

    if (value.HasMember("WhitelistId") && !value["WhitelistId"].IsNull())
    {
        if (!value["WhitelistId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetPolicyItem.WhitelistId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_whitelistId = value["WhitelistId"].GetUint64();
        m_whitelistIdHasBeenSet = true;
    }

    if (value.HasMember("FixSuggestion") && !value["FixSuggestion"].IsNull())
    {
        if (!value["FixSuggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetPolicyItem.FixSuggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fixSuggestion = string(value["FixSuggestion"].GetString());
        m_fixSuggestionHasBeenSet = true;
    }

    if (value.HasMember("LastCheckTime") && !value["LastCheckTime"].IsNull())
    {
        if (!value["LastCheckTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetPolicyItem.LastCheckTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastCheckTime = string(value["LastCheckTime"].GetString());
        m_lastCheckTimeHasBeenSet = true;
    }

    if (value.HasMember("VerifyInfo") && !value["VerifyInfo"].IsNull())
    {
        if (!value["VerifyInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetPolicyItem.VerifyInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verifyInfo = string(value["VerifyInfo"].GetString());
        m_verifyInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComplianceAssetPolicyItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_customerPolicyItemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerPolicyItemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_customerPolicyItemId, allocator);
    }

    if (m_basePolicyItemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasePolicyItemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_basePolicyItemId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_benchmarkStandardIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BenchmarkStandardId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_benchmarkStandardId, allocator);
    }

    if (m_benchmarkStandardNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BenchmarkStandardName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_benchmarkStandardName.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_checkStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_checkResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkResult.c_str(), allocator).Move(), allocator);
    }

    if (m_whitelistIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhitelistId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_whitelistId, allocator);
    }

    if (m_fixSuggestionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixSuggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fixSuggestion.c_str(), allocator).Move(), allocator);
    }

    if (m_lastCheckTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastCheckTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastCheckTime.c_str(), allocator).Move(), allocator);
    }

    if (m_verifyInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verifyInfo.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ComplianceAssetPolicyItem::GetCustomerPolicyItemId() const
{
    return m_customerPolicyItemId;
}

void ComplianceAssetPolicyItem::SetCustomerPolicyItemId(const uint64_t& _customerPolicyItemId)
{
    m_customerPolicyItemId = _customerPolicyItemId;
    m_customerPolicyItemIdHasBeenSet = true;
}

bool ComplianceAssetPolicyItem::CustomerPolicyItemIdHasBeenSet() const
{
    return m_customerPolicyItemIdHasBeenSet;
}

uint64_t ComplianceAssetPolicyItem::GetBasePolicyItemId() const
{
    return m_basePolicyItemId;
}

void ComplianceAssetPolicyItem::SetBasePolicyItemId(const uint64_t& _basePolicyItemId)
{
    m_basePolicyItemId = _basePolicyItemId;
    m_basePolicyItemIdHasBeenSet = true;
}

bool ComplianceAssetPolicyItem::BasePolicyItemIdHasBeenSet() const
{
    return m_basePolicyItemIdHasBeenSet;
}

string ComplianceAssetPolicyItem::GetName() const
{
    return m_name;
}

void ComplianceAssetPolicyItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ComplianceAssetPolicyItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ComplianceAssetPolicyItem::GetCategory() const
{
    return m_category;
}

void ComplianceAssetPolicyItem::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool ComplianceAssetPolicyItem::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

uint64_t ComplianceAssetPolicyItem::GetBenchmarkStandardId() const
{
    return m_benchmarkStandardId;
}

void ComplianceAssetPolicyItem::SetBenchmarkStandardId(const uint64_t& _benchmarkStandardId)
{
    m_benchmarkStandardId = _benchmarkStandardId;
    m_benchmarkStandardIdHasBeenSet = true;
}

bool ComplianceAssetPolicyItem::BenchmarkStandardIdHasBeenSet() const
{
    return m_benchmarkStandardIdHasBeenSet;
}

string ComplianceAssetPolicyItem::GetBenchmarkStandardName() const
{
    return m_benchmarkStandardName;
}

void ComplianceAssetPolicyItem::SetBenchmarkStandardName(const string& _benchmarkStandardName)
{
    m_benchmarkStandardName = _benchmarkStandardName;
    m_benchmarkStandardNameHasBeenSet = true;
}

bool ComplianceAssetPolicyItem::BenchmarkStandardNameHasBeenSet() const
{
    return m_benchmarkStandardNameHasBeenSet;
}

string ComplianceAssetPolicyItem::GetRiskLevel() const
{
    return m_riskLevel;
}

void ComplianceAssetPolicyItem::SetRiskLevel(const string& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool ComplianceAssetPolicyItem::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string ComplianceAssetPolicyItem::GetCheckStatus() const
{
    return m_checkStatus;
}

void ComplianceAssetPolicyItem::SetCheckStatus(const string& _checkStatus)
{
    m_checkStatus = _checkStatus;
    m_checkStatusHasBeenSet = true;
}

bool ComplianceAssetPolicyItem::CheckStatusHasBeenSet() const
{
    return m_checkStatusHasBeenSet;
}

string ComplianceAssetPolicyItem::GetCheckResult() const
{
    return m_checkResult;
}

void ComplianceAssetPolicyItem::SetCheckResult(const string& _checkResult)
{
    m_checkResult = _checkResult;
    m_checkResultHasBeenSet = true;
}

bool ComplianceAssetPolicyItem::CheckResultHasBeenSet() const
{
    return m_checkResultHasBeenSet;
}

uint64_t ComplianceAssetPolicyItem::GetWhitelistId() const
{
    return m_whitelistId;
}

void ComplianceAssetPolicyItem::SetWhitelistId(const uint64_t& _whitelistId)
{
    m_whitelistId = _whitelistId;
    m_whitelistIdHasBeenSet = true;
}

bool ComplianceAssetPolicyItem::WhitelistIdHasBeenSet() const
{
    return m_whitelistIdHasBeenSet;
}

string ComplianceAssetPolicyItem::GetFixSuggestion() const
{
    return m_fixSuggestion;
}

void ComplianceAssetPolicyItem::SetFixSuggestion(const string& _fixSuggestion)
{
    m_fixSuggestion = _fixSuggestion;
    m_fixSuggestionHasBeenSet = true;
}

bool ComplianceAssetPolicyItem::FixSuggestionHasBeenSet() const
{
    return m_fixSuggestionHasBeenSet;
}

string ComplianceAssetPolicyItem::GetLastCheckTime() const
{
    return m_lastCheckTime;
}

void ComplianceAssetPolicyItem::SetLastCheckTime(const string& _lastCheckTime)
{
    m_lastCheckTime = _lastCheckTime;
    m_lastCheckTimeHasBeenSet = true;
}

bool ComplianceAssetPolicyItem::LastCheckTimeHasBeenSet() const
{
    return m_lastCheckTimeHasBeenSet;
}

string ComplianceAssetPolicyItem::GetVerifyInfo() const
{
    return m_verifyInfo;
}

void ComplianceAssetPolicyItem::SetVerifyInfo(const string& _verifyInfo)
{
    m_verifyInfo = _verifyInfo;
    m_verifyInfoHasBeenSet = true;
}

bool ComplianceAssetPolicyItem::VerifyInfoHasBeenSet() const
{
    return m_verifyInfoHasBeenSet;
}

