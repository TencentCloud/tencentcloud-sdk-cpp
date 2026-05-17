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

#include <tencentcloud/csip/v20221121/model/CosRiskViewInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CosRiskViewInfo::CosRiskViewInfo() :
    m_appIdHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_policyTypeHasBeenSet(false),
    m_policyRiskLevelHasBeenSet(false),
    m_policyDescriptionHasBeenSet(false),
    m_handleBucketCountHasBeenSet(false),
    m_lastScanTimestampHasBeenSet(false)
{
}

CoreInternalOutcome CosRiskViewInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosRiskViewInfo.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("PolicyName") && !value["PolicyName"].IsNull())
    {
        if (!value["PolicyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosRiskViewInfo.PolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyName = string(value["PolicyName"].GetString());
        m_policyNameHasBeenSet = true;
    }

    if (value.HasMember("PolicyId") && !value["PolicyId"].IsNull())
    {
        if (!value["PolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosRiskViewInfo.PolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = string(value["PolicyId"].GetString());
        m_policyIdHasBeenSet = true;
    }

    if (value.HasMember("PolicyType") && !value["PolicyType"].IsNull())
    {
        if (!value["PolicyType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosRiskViewInfo.PolicyType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyType = value["PolicyType"].GetInt64();
        m_policyTypeHasBeenSet = true;
    }

    if (value.HasMember("PolicyRiskLevel") && !value["PolicyRiskLevel"].IsNull())
    {
        if (!value["PolicyRiskLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosRiskViewInfo.PolicyRiskLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyRiskLevel = value["PolicyRiskLevel"].GetInt64();
        m_policyRiskLevelHasBeenSet = true;
    }

    if (value.HasMember("PolicyDescription") && !value["PolicyDescription"].IsNull())
    {
        if (!value["PolicyDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosRiskViewInfo.PolicyDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyDescription = string(value["PolicyDescription"].GetString());
        m_policyDescriptionHasBeenSet = true;
    }

    if (value.HasMember("HandleBucketCount") && !value["HandleBucketCount"].IsNull())
    {
        if (!value["HandleBucketCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosRiskViewInfo.HandleBucketCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_handleBucketCount = value["HandleBucketCount"].GetInt64();
        m_handleBucketCountHasBeenSet = true;
    }

    if (value.HasMember("LastScanTimestamp") && !value["LastScanTimestamp"].IsNull())
    {
        if (!value["LastScanTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosRiskViewInfo.LastScanTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastScanTimestamp = value["LastScanTimestamp"].GetInt64();
        m_lastScanTimestampHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosRiskViewInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_policyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyName.c_str(), allocator).Move(), allocator);
    }

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyId.c_str(), allocator).Move(), allocator);
    }

    if (m_policyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyType, allocator);
    }

    if (m_policyRiskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyRiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyRiskLevel, allocator);
    }

    if (m_policyDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_handleBucketCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandleBucketCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_handleBucketCount, allocator);
    }

    if (m_lastScanTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastScanTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastScanTimestamp, allocator);
    }

}


int64_t CosRiskViewInfo::GetAppId() const
{
    return m_appId;
}

void CosRiskViewInfo::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool CosRiskViewInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string CosRiskViewInfo::GetPolicyName() const
{
    return m_policyName;
}

void CosRiskViewInfo::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool CosRiskViewInfo::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

string CosRiskViewInfo::GetPolicyId() const
{
    return m_policyId;
}

void CosRiskViewInfo::SetPolicyId(const string& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool CosRiskViewInfo::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

int64_t CosRiskViewInfo::GetPolicyType() const
{
    return m_policyType;
}

void CosRiskViewInfo::SetPolicyType(const int64_t& _policyType)
{
    m_policyType = _policyType;
    m_policyTypeHasBeenSet = true;
}

bool CosRiskViewInfo::PolicyTypeHasBeenSet() const
{
    return m_policyTypeHasBeenSet;
}

int64_t CosRiskViewInfo::GetPolicyRiskLevel() const
{
    return m_policyRiskLevel;
}

void CosRiskViewInfo::SetPolicyRiskLevel(const int64_t& _policyRiskLevel)
{
    m_policyRiskLevel = _policyRiskLevel;
    m_policyRiskLevelHasBeenSet = true;
}

bool CosRiskViewInfo::PolicyRiskLevelHasBeenSet() const
{
    return m_policyRiskLevelHasBeenSet;
}

string CosRiskViewInfo::GetPolicyDescription() const
{
    return m_policyDescription;
}

void CosRiskViewInfo::SetPolicyDescription(const string& _policyDescription)
{
    m_policyDescription = _policyDescription;
    m_policyDescriptionHasBeenSet = true;
}

bool CosRiskViewInfo::PolicyDescriptionHasBeenSet() const
{
    return m_policyDescriptionHasBeenSet;
}

int64_t CosRiskViewInfo::GetHandleBucketCount() const
{
    return m_handleBucketCount;
}

void CosRiskViewInfo::SetHandleBucketCount(const int64_t& _handleBucketCount)
{
    m_handleBucketCount = _handleBucketCount;
    m_handleBucketCountHasBeenSet = true;
}

bool CosRiskViewInfo::HandleBucketCountHasBeenSet() const
{
    return m_handleBucketCountHasBeenSet;
}

int64_t CosRiskViewInfo::GetLastScanTimestamp() const
{
    return m_lastScanTimestamp;
}

void CosRiskViewInfo::SetLastScanTimestamp(const int64_t& _lastScanTimestamp)
{
    m_lastScanTimestamp = _lastScanTimestamp;
    m_lastScanTimestampHasBeenSet = true;
}

bool CosRiskViewInfo::LastScanTimestampHasBeenSet() const
{
    return m_lastScanTimestampHasBeenSet;
}

