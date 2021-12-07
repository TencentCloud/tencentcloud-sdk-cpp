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

#include <tencentcloud/tcss/v20201101/model/ComplianceScanFailedAsset.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ComplianceScanFailedAsset::ComplianceScanFailedAsset() :
    m_customerAssetIdHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_checkStatusHasBeenSet(false),
    m_assetNameHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_checkTimeHasBeenSet(false)
{
}

CoreInternalOutcome ComplianceScanFailedAsset::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CustomerAssetId") && !value["CustomerAssetId"].IsNull())
    {
        if (!value["CustomerAssetId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceScanFailedAsset.CustomerAssetId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_customerAssetId = value["CustomerAssetId"].GetUint64();
        m_customerAssetIdHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceScanFailedAsset.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("CheckStatus") && !value["CheckStatus"].IsNull())
    {
        if (!value["CheckStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceScanFailedAsset.CheckStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkStatus = string(value["CheckStatus"].GetString());
        m_checkStatusHasBeenSet = true;
    }

    if (value.HasMember("AssetName") && !value["AssetName"].IsNull())
    {
        if (!value["AssetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceScanFailedAsset.AssetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetName = string(value["AssetName"].GetString());
        m_assetNameHasBeenSet = true;
    }

    if (value.HasMember("FailureReason") && !value["FailureReason"].IsNull())
    {
        if (!value["FailureReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceScanFailedAsset.FailureReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failureReason = string(value["FailureReason"].GetString());
        m_failureReasonHasBeenSet = true;
    }

    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceScanFailedAsset.Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(value["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (value.HasMember("CheckTime") && !value["CheckTime"].IsNull())
    {
        if (!value["CheckTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceScanFailedAsset.CheckTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkTime = string(value["CheckTime"].GetString());
        m_checkTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComplianceScanFailedAsset::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_customerAssetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerAssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_customerAssetId, allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_checkStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_assetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetName.c_str(), allocator).Move(), allocator);
    }

    if (m_failureReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailureReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failureReason.c_str(), allocator).Move(), allocator);
    }

    if (m_suggestionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Suggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_suggestion.c_str(), allocator).Move(), allocator);
    }

    if (m_checkTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkTime.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ComplianceScanFailedAsset::GetCustomerAssetId() const
{
    return m_customerAssetId;
}

void ComplianceScanFailedAsset::SetCustomerAssetId(const uint64_t& _customerAssetId)
{
    m_customerAssetId = _customerAssetId;
    m_customerAssetIdHasBeenSet = true;
}

bool ComplianceScanFailedAsset::CustomerAssetIdHasBeenSet() const
{
    return m_customerAssetIdHasBeenSet;
}

string ComplianceScanFailedAsset::GetAssetType() const
{
    return m_assetType;
}

void ComplianceScanFailedAsset::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool ComplianceScanFailedAsset::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

string ComplianceScanFailedAsset::GetCheckStatus() const
{
    return m_checkStatus;
}

void ComplianceScanFailedAsset::SetCheckStatus(const string& _checkStatus)
{
    m_checkStatus = _checkStatus;
    m_checkStatusHasBeenSet = true;
}

bool ComplianceScanFailedAsset::CheckStatusHasBeenSet() const
{
    return m_checkStatusHasBeenSet;
}

string ComplianceScanFailedAsset::GetAssetName() const
{
    return m_assetName;
}

void ComplianceScanFailedAsset::SetAssetName(const string& _assetName)
{
    m_assetName = _assetName;
    m_assetNameHasBeenSet = true;
}

bool ComplianceScanFailedAsset::AssetNameHasBeenSet() const
{
    return m_assetNameHasBeenSet;
}

string ComplianceScanFailedAsset::GetFailureReason() const
{
    return m_failureReason;
}

void ComplianceScanFailedAsset::SetFailureReason(const string& _failureReason)
{
    m_failureReason = _failureReason;
    m_failureReasonHasBeenSet = true;
}

bool ComplianceScanFailedAsset::FailureReasonHasBeenSet() const
{
    return m_failureReasonHasBeenSet;
}

string ComplianceScanFailedAsset::GetSuggestion() const
{
    return m_suggestion;
}

void ComplianceScanFailedAsset::SetSuggestion(const string& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool ComplianceScanFailedAsset::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

string ComplianceScanFailedAsset::GetCheckTime() const
{
    return m_checkTime;
}

void ComplianceScanFailedAsset::SetCheckTime(const string& _checkTime)
{
    m_checkTime = _checkTime;
    m_checkTimeHasBeenSet = true;
}

bool ComplianceScanFailedAsset::CheckTimeHasBeenSet() const
{
    return m_checkTimeHasBeenSet;
}

