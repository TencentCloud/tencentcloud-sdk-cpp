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

#include <tencentcloud/tcss/v20201101/model/ComplianceAssetSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ComplianceAssetSummary::ComplianceAssetSummary() :
    m_assetTypeHasBeenSet(false),
    m_isCustomerFirstCheckHasBeenSet(false),
    m_checkStatusHasBeenSet(false),
    m_checkProgressHasBeenSet(false),
    m_passedPolicyItemCountHasBeenSet(false),
    m_failedPolicyItemCountHasBeenSet(false),
    m_failedCriticalPolicyItemCountHasBeenSet(false),
    m_failedHighRiskPolicyItemCountHasBeenSet(false),
    m_failedMediumRiskPolicyItemCountHasBeenSet(false),
    m_failedLowRiskPolicyItemCountHasBeenSet(false),
    m_noticePolicyItemCountHasBeenSet(false),
    m_passedAssetCountHasBeenSet(false),
    m_failedAssetCountHasBeenSet(false),
    m_assetPassedRateHasBeenSet(false),
    m_scanFailedAssetCountHasBeenSet(false),
    m_checkCostTimeHasBeenSet(false),
    m_lastCheckTimeHasBeenSet(false),
    m_periodRuleHasBeenSet(false),
    m_openPolicyItemCountHasBeenSet(false),
    m_ignoredPolicyItemCountHasBeenSet(false),
    m_totalPolicyItemCountHasBeenSet(false),
    m_detectHostCountHasBeenSet(false),
    m_leftTimeHasBeenSet(false)
{
}

CoreInternalOutcome ComplianceAssetSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetSummary.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("IsCustomerFirstCheck") && !value["IsCustomerFirstCheck"].IsNull())
    {
        if (!value["IsCustomerFirstCheck"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetSummary.IsCustomerFirstCheck` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isCustomerFirstCheck = value["IsCustomerFirstCheck"].GetBool();
        m_isCustomerFirstCheckHasBeenSet = true;
    }

    if (value.HasMember("CheckStatus") && !value["CheckStatus"].IsNull())
    {
        if (!value["CheckStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetSummary.CheckStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkStatus = string(value["CheckStatus"].GetString());
        m_checkStatusHasBeenSet = true;
    }

    if (value.HasMember("CheckProgress") && !value["CheckProgress"].IsNull())
    {
        if (!value["CheckProgress"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetSummary.CheckProgress` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_checkProgress = value["CheckProgress"].GetDouble();
        m_checkProgressHasBeenSet = true;
    }

    if (value.HasMember("PassedPolicyItemCount") && !value["PassedPolicyItemCount"].IsNull())
    {
        if (!value["PassedPolicyItemCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetSummary.PassedPolicyItemCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_passedPolicyItemCount = value["PassedPolicyItemCount"].GetUint64();
        m_passedPolicyItemCountHasBeenSet = true;
    }

    if (value.HasMember("FailedPolicyItemCount") && !value["FailedPolicyItemCount"].IsNull())
    {
        if (!value["FailedPolicyItemCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetSummary.FailedPolicyItemCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_failedPolicyItemCount = value["FailedPolicyItemCount"].GetUint64();
        m_failedPolicyItemCountHasBeenSet = true;
    }

    if (value.HasMember("FailedCriticalPolicyItemCount") && !value["FailedCriticalPolicyItemCount"].IsNull())
    {
        if (!value["FailedCriticalPolicyItemCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetSummary.FailedCriticalPolicyItemCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_failedCriticalPolicyItemCount = value["FailedCriticalPolicyItemCount"].GetUint64();
        m_failedCriticalPolicyItemCountHasBeenSet = true;
    }

    if (value.HasMember("FailedHighRiskPolicyItemCount") && !value["FailedHighRiskPolicyItemCount"].IsNull())
    {
        if (!value["FailedHighRiskPolicyItemCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetSummary.FailedHighRiskPolicyItemCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_failedHighRiskPolicyItemCount = value["FailedHighRiskPolicyItemCount"].GetUint64();
        m_failedHighRiskPolicyItemCountHasBeenSet = true;
    }

    if (value.HasMember("FailedMediumRiskPolicyItemCount") && !value["FailedMediumRiskPolicyItemCount"].IsNull())
    {
        if (!value["FailedMediumRiskPolicyItemCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetSummary.FailedMediumRiskPolicyItemCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_failedMediumRiskPolicyItemCount = value["FailedMediumRiskPolicyItemCount"].GetUint64();
        m_failedMediumRiskPolicyItemCountHasBeenSet = true;
    }

    if (value.HasMember("FailedLowRiskPolicyItemCount") && !value["FailedLowRiskPolicyItemCount"].IsNull())
    {
        if (!value["FailedLowRiskPolicyItemCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetSummary.FailedLowRiskPolicyItemCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_failedLowRiskPolicyItemCount = value["FailedLowRiskPolicyItemCount"].GetUint64();
        m_failedLowRiskPolicyItemCountHasBeenSet = true;
    }

    if (value.HasMember("NoticePolicyItemCount") && !value["NoticePolicyItemCount"].IsNull())
    {
        if (!value["NoticePolicyItemCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetSummary.NoticePolicyItemCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_noticePolicyItemCount = value["NoticePolicyItemCount"].GetUint64();
        m_noticePolicyItemCountHasBeenSet = true;
    }

    if (value.HasMember("PassedAssetCount") && !value["PassedAssetCount"].IsNull())
    {
        if (!value["PassedAssetCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetSummary.PassedAssetCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_passedAssetCount = value["PassedAssetCount"].GetUint64();
        m_passedAssetCountHasBeenSet = true;
    }

    if (value.HasMember("FailedAssetCount") && !value["FailedAssetCount"].IsNull())
    {
        if (!value["FailedAssetCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetSummary.FailedAssetCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_failedAssetCount = value["FailedAssetCount"].GetUint64();
        m_failedAssetCountHasBeenSet = true;
    }

    if (value.HasMember("AssetPassedRate") && !value["AssetPassedRate"].IsNull())
    {
        if (!value["AssetPassedRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetSummary.AssetPassedRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_assetPassedRate = value["AssetPassedRate"].GetDouble();
        m_assetPassedRateHasBeenSet = true;
    }

    if (value.HasMember("ScanFailedAssetCount") && !value["ScanFailedAssetCount"].IsNull())
    {
        if (!value["ScanFailedAssetCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetSummary.ScanFailedAssetCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scanFailedAssetCount = value["ScanFailedAssetCount"].GetUint64();
        m_scanFailedAssetCountHasBeenSet = true;
    }

    if (value.HasMember("CheckCostTime") && !value["CheckCostTime"].IsNull())
    {
        if (!value["CheckCostTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetSummary.CheckCostTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_checkCostTime = value["CheckCostTime"].GetDouble();
        m_checkCostTimeHasBeenSet = true;
    }

    if (value.HasMember("LastCheckTime") && !value["LastCheckTime"].IsNull())
    {
        if (!value["LastCheckTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetSummary.LastCheckTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastCheckTime = string(value["LastCheckTime"].GetString());
        m_lastCheckTimeHasBeenSet = true;
    }

    if (value.HasMember("PeriodRule") && !value["PeriodRule"].IsNull())
    {
        if (!value["PeriodRule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetSummary.PeriodRule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_periodRule.Deserialize(value["PeriodRule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_periodRuleHasBeenSet = true;
    }

    if (value.HasMember("OpenPolicyItemCount") && !value["OpenPolicyItemCount"].IsNull())
    {
        if (!value["OpenPolicyItemCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetSummary.OpenPolicyItemCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_openPolicyItemCount = value["OpenPolicyItemCount"].GetUint64();
        m_openPolicyItemCountHasBeenSet = true;
    }

    if (value.HasMember("IgnoredPolicyItemCount") && !value["IgnoredPolicyItemCount"].IsNull())
    {
        if (!value["IgnoredPolicyItemCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetSummary.IgnoredPolicyItemCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ignoredPolicyItemCount = value["IgnoredPolicyItemCount"].GetUint64();
        m_ignoredPolicyItemCountHasBeenSet = true;
    }

    if (value.HasMember("TotalPolicyItemCount") && !value["TotalPolicyItemCount"].IsNull())
    {
        if (!value["TotalPolicyItemCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetSummary.TotalPolicyItemCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalPolicyItemCount = value["TotalPolicyItemCount"].GetUint64();
        m_totalPolicyItemCountHasBeenSet = true;
    }

    if (value.HasMember("DetectHostCount") && !value["DetectHostCount"].IsNull())
    {
        if (!value["DetectHostCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetSummary.DetectHostCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_detectHostCount = value["DetectHostCount"].GetUint64();
        m_detectHostCountHasBeenSet = true;
    }

    if (value.HasMember("LeftTime") && !value["LeftTime"].IsNull())
    {
        if (!value["LeftTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetSummary.LeftTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_leftTime = value["LeftTime"].GetUint64();
        m_leftTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComplianceAssetSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_isCustomerFirstCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCustomerFirstCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCustomerFirstCheck, allocator);
    }

    if (m_checkStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_checkProgressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckProgress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkProgress, allocator);
    }

    if (m_passedPolicyItemCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassedPolicyItemCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_passedPolicyItemCount, allocator);
    }

    if (m_failedPolicyItemCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedPolicyItemCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failedPolicyItemCount, allocator);
    }

    if (m_failedCriticalPolicyItemCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedCriticalPolicyItemCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failedCriticalPolicyItemCount, allocator);
    }

    if (m_failedHighRiskPolicyItemCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedHighRiskPolicyItemCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failedHighRiskPolicyItemCount, allocator);
    }

    if (m_failedMediumRiskPolicyItemCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedMediumRiskPolicyItemCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failedMediumRiskPolicyItemCount, allocator);
    }

    if (m_failedLowRiskPolicyItemCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedLowRiskPolicyItemCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failedLowRiskPolicyItemCount, allocator);
    }

    if (m_noticePolicyItemCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticePolicyItemCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_noticePolicyItemCount, allocator);
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

    if (m_assetPassedRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetPassedRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetPassedRate, allocator);
    }

    if (m_scanFailedAssetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanFailedAssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanFailedAssetCount, allocator);
    }

    if (m_checkCostTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckCostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkCostTime, allocator);
    }

    if (m_lastCheckTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastCheckTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastCheckTime.c_str(), allocator).Move(), allocator);
    }

    if (m_periodRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_periodRule.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_openPolicyItemCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenPolicyItemCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_openPolicyItemCount, allocator);
    }

    if (m_ignoredPolicyItemCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IgnoredPolicyItemCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ignoredPolicyItemCount, allocator);
    }

    if (m_totalPolicyItemCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalPolicyItemCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalPolicyItemCount, allocator);
    }

    if (m_detectHostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectHostCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_detectHostCount, allocator);
    }

    if (m_leftTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeftTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_leftTime, allocator);
    }

}


string ComplianceAssetSummary::GetAssetType() const
{
    return m_assetType;
}

void ComplianceAssetSummary::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool ComplianceAssetSummary::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

bool ComplianceAssetSummary::GetIsCustomerFirstCheck() const
{
    return m_isCustomerFirstCheck;
}

void ComplianceAssetSummary::SetIsCustomerFirstCheck(const bool& _isCustomerFirstCheck)
{
    m_isCustomerFirstCheck = _isCustomerFirstCheck;
    m_isCustomerFirstCheckHasBeenSet = true;
}

bool ComplianceAssetSummary::IsCustomerFirstCheckHasBeenSet() const
{
    return m_isCustomerFirstCheckHasBeenSet;
}

string ComplianceAssetSummary::GetCheckStatus() const
{
    return m_checkStatus;
}

void ComplianceAssetSummary::SetCheckStatus(const string& _checkStatus)
{
    m_checkStatus = _checkStatus;
    m_checkStatusHasBeenSet = true;
}

bool ComplianceAssetSummary::CheckStatusHasBeenSet() const
{
    return m_checkStatusHasBeenSet;
}

double ComplianceAssetSummary::GetCheckProgress() const
{
    return m_checkProgress;
}

void ComplianceAssetSummary::SetCheckProgress(const double& _checkProgress)
{
    m_checkProgress = _checkProgress;
    m_checkProgressHasBeenSet = true;
}

bool ComplianceAssetSummary::CheckProgressHasBeenSet() const
{
    return m_checkProgressHasBeenSet;
}

uint64_t ComplianceAssetSummary::GetPassedPolicyItemCount() const
{
    return m_passedPolicyItemCount;
}

void ComplianceAssetSummary::SetPassedPolicyItemCount(const uint64_t& _passedPolicyItemCount)
{
    m_passedPolicyItemCount = _passedPolicyItemCount;
    m_passedPolicyItemCountHasBeenSet = true;
}

bool ComplianceAssetSummary::PassedPolicyItemCountHasBeenSet() const
{
    return m_passedPolicyItemCountHasBeenSet;
}

uint64_t ComplianceAssetSummary::GetFailedPolicyItemCount() const
{
    return m_failedPolicyItemCount;
}

void ComplianceAssetSummary::SetFailedPolicyItemCount(const uint64_t& _failedPolicyItemCount)
{
    m_failedPolicyItemCount = _failedPolicyItemCount;
    m_failedPolicyItemCountHasBeenSet = true;
}

bool ComplianceAssetSummary::FailedPolicyItemCountHasBeenSet() const
{
    return m_failedPolicyItemCountHasBeenSet;
}

uint64_t ComplianceAssetSummary::GetFailedCriticalPolicyItemCount() const
{
    return m_failedCriticalPolicyItemCount;
}

void ComplianceAssetSummary::SetFailedCriticalPolicyItemCount(const uint64_t& _failedCriticalPolicyItemCount)
{
    m_failedCriticalPolicyItemCount = _failedCriticalPolicyItemCount;
    m_failedCriticalPolicyItemCountHasBeenSet = true;
}

bool ComplianceAssetSummary::FailedCriticalPolicyItemCountHasBeenSet() const
{
    return m_failedCriticalPolicyItemCountHasBeenSet;
}

uint64_t ComplianceAssetSummary::GetFailedHighRiskPolicyItemCount() const
{
    return m_failedHighRiskPolicyItemCount;
}

void ComplianceAssetSummary::SetFailedHighRiskPolicyItemCount(const uint64_t& _failedHighRiskPolicyItemCount)
{
    m_failedHighRiskPolicyItemCount = _failedHighRiskPolicyItemCount;
    m_failedHighRiskPolicyItemCountHasBeenSet = true;
}

bool ComplianceAssetSummary::FailedHighRiskPolicyItemCountHasBeenSet() const
{
    return m_failedHighRiskPolicyItemCountHasBeenSet;
}

uint64_t ComplianceAssetSummary::GetFailedMediumRiskPolicyItemCount() const
{
    return m_failedMediumRiskPolicyItemCount;
}

void ComplianceAssetSummary::SetFailedMediumRiskPolicyItemCount(const uint64_t& _failedMediumRiskPolicyItemCount)
{
    m_failedMediumRiskPolicyItemCount = _failedMediumRiskPolicyItemCount;
    m_failedMediumRiskPolicyItemCountHasBeenSet = true;
}

bool ComplianceAssetSummary::FailedMediumRiskPolicyItemCountHasBeenSet() const
{
    return m_failedMediumRiskPolicyItemCountHasBeenSet;
}

uint64_t ComplianceAssetSummary::GetFailedLowRiskPolicyItemCount() const
{
    return m_failedLowRiskPolicyItemCount;
}

void ComplianceAssetSummary::SetFailedLowRiskPolicyItemCount(const uint64_t& _failedLowRiskPolicyItemCount)
{
    m_failedLowRiskPolicyItemCount = _failedLowRiskPolicyItemCount;
    m_failedLowRiskPolicyItemCountHasBeenSet = true;
}

bool ComplianceAssetSummary::FailedLowRiskPolicyItemCountHasBeenSet() const
{
    return m_failedLowRiskPolicyItemCountHasBeenSet;
}

uint64_t ComplianceAssetSummary::GetNoticePolicyItemCount() const
{
    return m_noticePolicyItemCount;
}

void ComplianceAssetSummary::SetNoticePolicyItemCount(const uint64_t& _noticePolicyItemCount)
{
    m_noticePolicyItemCount = _noticePolicyItemCount;
    m_noticePolicyItemCountHasBeenSet = true;
}

bool ComplianceAssetSummary::NoticePolicyItemCountHasBeenSet() const
{
    return m_noticePolicyItemCountHasBeenSet;
}

uint64_t ComplianceAssetSummary::GetPassedAssetCount() const
{
    return m_passedAssetCount;
}

void ComplianceAssetSummary::SetPassedAssetCount(const uint64_t& _passedAssetCount)
{
    m_passedAssetCount = _passedAssetCount;
    m_passedAssetCountHasBeenSet = true;
}

bool ComplianceAssetSummary::PassedAssetCountHasBeenSet() const
{
    return m_passedAssetCountHasBeenSet;
}

uint64_t ComplianceAssetSummary::GetFailedAssetCount() const
{
    return m_failedAssetCount;
}

void ComplianceAssetSummary::SetFailedAssetCount(const uint64_t& _failedAssetCount)
{
    m_failedAssetCount = _failedAssetCount;
    m_failedAssetCountHasBeenSet = true;
}

bool ComplianceAssetSummary::FailedAssetCountHasBeenSet() const
{
    return m_failedAssetCountHasBeenSet;
}

double ComplianceAssetSummary::GetAssetPassedRate() const
{
    return m_assetPassedRate;
}

void ComplianceAssetSummary::SetAssetPassedRate(const double& _assetPassedRate)
{
    m_assetPassedRate = _assetPassedRate;
    m_assetPassedRateHasBeenSet = true;
}

bool ComplianceAssetSummary::AssetPassedRateHasBeenSet() const
{
    return m_assetPassedRateHasBeenSet;
}

uint64_t ComplianceAssetSummary::GetScanFailedAssetCount() const
{
    return m_scanFailedAssetCount;
}

void ComplianceAssetSummary::SetScanFailedAssetCount(const uint64_t& _scanFailedAssetCount)
{
    m_scanFailedAssetCount = _scanFailedAssetCount;
    m_scanFailedAssetCountHasBeenSet = true;
}

bool ComplianceAssetSummary::ScanFailedAssetCountHasBeenSet() const
{
    return m_scanFailedAssetCountHasBeenSet;
}

double ComplianceAssetSummary::GetCheckCostTime() const
{
    return m_checkCostTime;
}

void ComplianceAssetSummary::SetCheckCostTime(const double& _checkCostTime)
{
    m_checkCostTime = _checkCostTime;
    m_checkCostTimeHasBeenSet = true;
}

bool ComplianceAssetSummary::CheckCostTimeHasBeenSet() const
{
    return m_checkCostTimeHasBeenSet;
}

string ComplianceAssetSummary::GetLastCheckTime() const
{
    return m_lastCheckTime;
}

void ComplianceAssetSummary::SetLastCheckTime(const string& _lastCheckTime)
{
    m_lastCheckTime = _lastCheckTime;
    m_lastCheckTimeHasBeenSet = true;
}

bool ComplianceAssetSummary::LastCheckTimeHasBeenSet() const
{
    return m_lastCheckTimeHasBeenSet;
}

CompliancePeriodTaskRule ComplianceAssetSummary::GetPeriodRule() const
{
    return m_periodRule;
}

void ComplianceAssetSummary::SetPeriodRule(const CompliancePeriodTaskRule& _periodRule)
{
    m_periodRule = _periodRule;
    m_periodRuleHasBeenSet = true;
}

bool ComplianceAssetSummary::PeriodRuleHasBeenSet() const
{
    return m_periodRuleHasBeenSet;
}

uint64_t ComplianceAssetSummary::GetOpenPolicyItemCount() const
{
    return m_openPolicyItemCount;
}

void ComplianceAssetSummary::SetOpenPolicyItemCount(const uint64_t& _openPolicyItemCount)
{
    m_openPolicyItemCount = _openPolicyItemCount;
    m_openPolicyItemCountHasBeenSet = true;
}

bool ComplianceAssetSummary::OpenPolicyItemCountHasBeenSet() const
{
    return m_openPolicyItemCountHasBeenSet;
}

uint64_t ComplianceAssetSummary::GetIgnoredPolicyItemCount() const
{
    return m_ignoredPolicyItemCount;
}

void ComplianceAssetSummary::SetIgnoredPolicyItemCount(const uint64_t& _ignoredPolicyItemCount)
{
    m_ignoredPolicyItemCount = _ignoredPolicyItemCount;
    m_ignoredPolicyItemCountHasBeenSet = true;
}

bool ComplianceAssetSummary::IgnoredPolicyItemCountHasBeenSet() const
{
    return m_ignoredPolicyItemCountHasBeenSet;
}

uint64_t ComplianceAssetSummary::GetTotalPolicyItemCount() const
{
    return m_totalPolicyItemCount;
}

void ComplianceAssetSummary::SetTotalPolicyItemCount(const uint64_t& _totalPolicyItemCount)
{
    m_totalPolicyItemCount = _totalPolicyItemCount;
    m_totalPolicyItemCountHasBeenSet = true;
}

bool ComplianceAssetSummary::TotalPolicyItemCountHasBeenSet() const
{
    return m_totalPolicyItemCountHasBeenSet;
}

uint64_t ComplianceAssetSummary::GetDetectHostCount() const
{
    return m_detectHostCount;
}

void ComplianceAssetSummary::SetDetectHostCount(const uint64_t& _detectHostCount)
{
    m_detectHostCount = _detectHostCount;
    m_detectHostCountHasBeenSet = true;
}

bool ComplianceAssetSummary::DetectHostCountHasBeenSet() const
{
    return m_detectHostCountHasBeenSet;
}

uint64_t ComplianceAssetSummary::GetLeftTime() const
{
    return m_leftTime;
}

void ComplianceAssetSummary::SetLeftTime(const uint64_t& _leftTime)
{
    m_leftTime = _leftTime;
    m_leftTimeHasBeenSet = true;
}

bool ComplianceAssetSummary::LeftTimeHasBeenSet() const
{
    return m_leftTimeHasBeenSet;
}

