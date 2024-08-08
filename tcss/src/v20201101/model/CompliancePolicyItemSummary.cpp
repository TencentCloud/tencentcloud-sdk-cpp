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

#include <tencentcloud/tcss/v20201101/model/CompliancePolicyItemSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

CompliancePolicyItemSummary::CompliancePolicyItemSummary() :
    m_customerPolicyItemIdHasBeenSet(false),
    m_basePolicyItemIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_benchmarkStandardNameHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_lastCheckTimeHasBeenSet(false),
    m_checkStatusHasBeenSet(false),
    m_checkResultHasBeenSet(false),
    m_passedAssetCountHasBeenSet(false),
    m_failedAssetCountHasBeenSet(false),
    m_whitelistIdHasBeenSet(false),
    m_fixSuggestionHasBeenSet(false),
    m_benchmarkStandardIdHasBeenSet(false),
    m_applicableVersionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_auditProcedureHasBeenSet(false),
    m_isEnableHasBeenSet(false)
{
}

CoreInternalOutcome CompliancePolicyItemSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CustomerPolicyItemId") && !value["CustomerPolicyItemId"].IsNull())
    {
        if (!value["CustomerPolicyItemId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CompliancePolicyItemSummary.CustomerPolicyItemId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_customerPolicyItemId = value["CustomerPolicyItemId"].GetUint64();
        m_customerPolicyItemIdHasBeenSet = true;
    }

    if (value.HasMember("BasePolicyItemId") && !value["BasePolicyItemId"].IsNull())
    {
        if (!value["BasePolicyItemId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CompliancePolicyItemSummary.BasePolicyItemId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_basePolicyItemId = value["BasePolicyItemId"].GetUint64();
        m_basePolicyItemIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompliancePolicyItemSummary.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompliancePolicyItemSummary.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("BenchmarkStandardName") && !value["BenchmarkStandardName"].IsNull())
    {
        if (!value["BenchmarkStandardName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompliancePolicyItemSummary.BenchmarkStandardName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_benchmarkStandardName = string(value["BenchmarkStandardName"].GetString());
        m_benchmarkStandardNameHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompliancePolicyItemSummary.RiskLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = string(value["RiskLevel"].GetString());
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompliancePolicyItemSummary.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("LastCheckTime") && !value["LastCheckTime"].IsNull())
    {
        if (!value["LastCheckTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompliancePolicyItemSummary.LastCheckTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastCheckTime = string(value["LastCheckTime"].GetString());
        m_lastCheckTimeHasBeenSet = true;
    }

    if (value.HasMember("CheckStatus") && !value["CheckStatus"].IsNull())
    {
        if (!value["CheckStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompliancePolicyItemSummary.CheckStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkStatus = string(value["CheckStatus"].GetString());
        m_checkStatusHasBeenSet = true;
    }

    if (value.HasMember("CheckResult") && !value["CheckResult"].IsNull())
    {
        if (!value["CheckResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompliancePolicyItemSummary.CheckResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkResult = string(value["CheckResult"].GetString());
        m_checkResultHasBeenSet = true;
    }

    if (value.HasMember("PassedAssetCount") && !value["PassedAssetCount"].IsNull())
    {
        if (!value["PassedAssetCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CompliancePolicyItemSummary.PassedAssetCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_passedAssetCount = value["PassedAssetCount"].GetUint64();
        m_passedAssetCountHasBeenSet = true;
    }

    if (value.HasMember("FailedAssetCount") && !value["FailedAssetCount"].IsNull())
    {
        if (!value["FailedAssetCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CompliancePolicyItemSummary.FailedAssetCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_failedAssetCount = value["FailedAssetCount"].GetUint64();
        m_failedAssetCountHasBeenSet = true;
    }

    if (value.HasMember("WhitelistId") && !value["WhitelistId"].IsNull())
    {
        if (!value["WhitelistId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CompliancePolicyItemSummary.WhitelistId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_whitelistId = value["WhitelistId"].GetUint64();
        m_whitelistIdHasBeenSet = true;
    }

    if (value.HasMember("FixSuggestion") && !value["FixSuggestion"].IsNull())
    {
        if (!value["FixSuggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompliancePolicyItemSummary.FixSuggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fixSuggestion = string(value["FixSuggestion"].GetString());
        m_fixSuggestionHasBeenSet = true;
    }

    if (value.HasMember("BenchmarkStandardId") && !value["BenchmarkStandardId"].IsNull())
    {
        if (!value["BenchmarkStandardId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CompliancePolicyItemSummary.BenchmarkStandardId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_benchmarkStandardId = value["BenchmarkStandardId"].GetUint64();
        m_benchmarkStandardIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicableVersion") && !value["ApplicableVersion"].IsNull())
    {
        if (!value["ApplicableVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompliancePolicyItemSummary.ApplicableVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicableVersion = string(value["ApplicableVersion"].GetString());
        m_applicableVersionHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompliancePolicyItemSummary.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("AuditProcedure") && !value["AuditProcedure"].IsNull())
    {
        if (!value["AuditProcedure"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompliancePolicyItemSummary.AuditProcedure` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auditProcedure = string(value["AuditProcedure"].GetString());
        m_auditProcedureHasBeenSet = true;
    }

    if (value.HasMember("IsEnable") && !value["IsEnable"].IsNull())
    {
        if (!value["IsEnable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CompliancePolicyItemSummary.IsEnable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isEnable = value["IsEnable"].GetUint64();
        m_isEnableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CompliancePolicyItemSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_lastCheckTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastCheckTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastCheckTime.c_str(), allocator).Move(), allocator);
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

    if (m_passedAssetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassedAssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_passedAssetCount, allocator);
    }

    if (m_failedAssetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedAssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failedAssetCount, allocator);
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

    if (m_benchmarkStandardIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BenchmarkStandardId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_benchmarkStandardId, allocator);
    }

    if (m_applicableVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicableVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicableVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_auditProcedureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditProcedure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_auditProcedure.c_str(), allocator).Move(), allocator);
    }

    if (m_isEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isEnable, allocator);
    }

}


uint64_t CompliancePolicyItemSummary::GetCustomerPolicyItemId() const
{
    return m_customerPolicyItemId;
}

void CompliancePolicyItemSummary::SetCustomerPolicyItemId(const uint64_t& _customerPolicyItemId)
{
    m_customerPolicyItemId = _customerPolicyItemId;
    m_customerPolicyItemIdHasBeenSet = true;
}

bool CompliancePolicyItemSummary::CustomerPolicyItemIdHasBeenSet() const
{
    return m_customerPolicyItemIdHasBeenSet;
}

uint64_t CompliancePolicyItemSummary::GetBasePolicyItemId() const
{
    return m_basePolicyItemId;
}

void CompliancePolicyItemSummary::SetBasePolicyItemId(const uint64_t& _basePolicyItemId)
{
    m_basePolicyItemId = _basePolicyItemId;
    m_basePolicyItemIdHasBeenSet = true;
}

bool CompliancePolicyItemSummary::BasePolicyItemIdHasBeenSet() const
{
    return m_basePolicyItemIdHasBeenSet;
}

string CompliancePolicyItemSummary::GetName() const
{
    return m_name;
}

void CompliancePolicyItemSummary::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CompliancePolicyItemSummary::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CompliancePolicyItemSummary::GetCategory() const
{
    return m_category;
}

void CompliancePolicyItemSummary::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool CompliancePolicyItemSummary::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string CompliancePolicyItemSummary::GetBenchmarkStandardName() const
{
    return m_benchmarkStandardName;
}

void CompliancePolicyItemSummary::SetBenchmarkStandardName(const string& _benchmarkStandardName)
{
    m_benchmarkStandardName = _benchmarkStandardName;
    m_benchmarkStandardNameHasBeenSet = true;
}

bool CompliancePolicyItemSummary::BenchmarkStandardNameHasBeenSet() const
{
    return m_benchmarkStandardNameHasBeenSet;
}

string CompliancePolicyItemSummary::GetRiskLevel() const
{
    return m_riskLevel;
}

void CompliancePolicyItemSummary::SetRiskLevel(const string& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool CompliancePolicyItemSummary::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string CompliancePolicyItemSummary::GetAssetType() const
{
    return m_assetType;
}

void CompliancePolicyItemSummary::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool CompliancePolicyItemSummary::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

string CompliancePolicyItemSummary::GetLastCheckTime() const
{
    return m_lastCheckTime;
}

void CompliancePolicyItemSummary::SetLastCheckTime(const string& _lastCheckTime)
{
    m_lastCheckTime = _lastCheckTime;
    m_lastCheckTimeHasBeenSet = true;
}

bool CompliancePolicyItemSummary::LastCheckTimeHasBeenSet() const
{
    return m_lastCheckTimeHasBeenSet;
}

string CompliancePolicyItemSummary::GetCheckStatus() const
{
    return m_checkStatus;
}

void CompliancePolicyItemSummary::SetCheckStatus(const string& _checkStatus)
{
    m_checkStatus = _checkStatus;
    m_checkStatusHasBeenSet = true;
}

bool CompliancePolicyItemSummary::CheckStatusHasBeenSet() const
{
    return m_checkStatusHasBeenSet;
}

string CompliancePolicyItemSummary::GetCheckResult() const
{
    return m_checkResult;
}

void CompliancePolicyItemSummary::SetCheckResult(const string& _checkResult)
{
    m_checkResult = _checkResult;
    m_checkResultHasBeenSet = true;
}

bool CompliancePolicyItemSummary::CheckResultHasBeenSet() const
{
    return m_checkResultHasBeenSet;
}

uint64_t CompliancePolicyItemSummary::GetPassedAssetCount() const
{
    return m_passedAssetCount;
}

void CompliancePolicyItemSummary::SetPassedAssetCount(const uint64_t& _passedAssetCount)
{
    m_passedAssetCount = _passedAssetCount;
    m_passedAssetCountHasBeenSet = true;
}

bool CompliancePolicyItemSummary::PassedAssetCountHasBeenSet() const
{
    return m_passedAssetCountHasBeenSet;
}

uint64_t CompliancePolicyItemSummary::GetFailedAssetCount() const
{
    return m_failedAssetCount;
}

void CompliancePolicyItemSummary::SetFailedAssetCount(const uint64_t& _failedAssetCount)
{
    m_failedAssetCount = _failedAssetCount;
    m_failedAssetCountHasBeenSet = true;
}

bool CompliancePolicyItemSummary::FailedAssetCountHasBeenSet() const
{
    return m_failedAssetCountHasBeenSet;
}

uint64_t CompliancePolicyItemSummary::GetWhitelistId() const
{
    return m_whitelistId;
}

void CompliancePolicyItemSummary::SetWhitelistId(const uint64_t& _whitelistId)
{
    m_whitelistId = _whitelistId;
    m_whitelistIdHasBeenSet = true;
}

bool CompliancePolicyItemSummary::WhitelistIdHasBeenSet() const
{
    return m_whitelistIdHasBeenSet;
}

string CompliancePolicyItemSummary::GetFixSuggestion() const
{
    return m_fixSuggestion;
}

void CompliancePolicyItemSummary::SetFixSuggestion(const string& _fixSuggestion)
{
    m_fixSuggestion = _fixSuggestion;
    m_fixSuggestionHasBeenSet = true;
}

bool CompliancePolicyItemSummary::FixSuggestionHasBeenSet() const
{
    return m_fixSuggestionHasBeenSet;
}

uint64_t CompliancePolicyItemSummary::GetBenchmarkStandardId() const
{
    return m_benchmarkStandardId;
}

void CompliancePolicyItemSummary::SetBenchmarkStandardId(const uint64_t& _benchmarkStandardId)
{
    m_benchmarkStandardId = _benchmarkStandardId;
    m_benchmarkStandardIdHasBeenSet = true;
}

bool CompliancePolicyItemSummary::BenchmarkStandardIdHasBeenSet() const
{
    return m_benchmarkStandardIdHasBeenSet;
}

string CompliancePolicyItemSummary::GetApplicableVersion() const
{
    return m_applicableVersion;
}

void CompliancePolicyItemSummary::SetApplicableVersion(const string& _applicableVersion)
{
    m_applicableVersion = _applicableVersion;
    m_applicableVersionHasBeenSet = true;
}

bool CompliancePolicyItemSummary::ApplicableVersionHasBeenSet() const
{
    return m_applicableVersionHasBeenSet;
}

string CompliancePolicyItemSummary::GetDescription() const
{
    return m_description;
}

void CompliancePolicyItemSummary::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CompliancePolicyItemSummary::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CompliancePolicyItemSummary::GetAuditProcedure() const
{
    return m_auditProcedure;
}

void CompliancePolicyItemSummary::SetAuditProcedure(const string& _auditProcedure)
{
    m_auditProcedure = _auditProcedure;
    m_auditProcedureHasBeenSet = true;
}

bool CompliancePolicyItemSummary::AuditProcedureHasBeenSet() const
{
    return m_auditProcedureHasBeenSet;
}

uint64_t CompliancePolicyItemSummary::GetIsEnable() const
{
    return m_isEnable;
}

void CompliancePolicyItemSummary::SetIsEnable(const uint64_t& _isEnable)
{
    m_isEnable = _isEnable;
    m_isEnableHasBeenSet = true;
}

bool CompliancePolicyItemSummary::IsEnableHasBeenSet() const
{
    return m_isEnableHasBeenSet;
}

