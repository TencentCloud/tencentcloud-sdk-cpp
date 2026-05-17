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

#include <tencentcloud/csip/v20221121/model/CosRiskBucketInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CosRiskBucketInfo::CosRiskBucketInfo() :
    m_appIdHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_bucketRegionHasBeenSet(false),
    m_bucketMarkerHasBeenSet(false),
    m_bucketUinHasBeenSet(false),
    m_bucketNickNameHasBeenSet(false),
    m_bucketMainNickNameHasBeenSet(false),
    m_bucketIdentifyHasBeenSet(false),
    m_lastScanTimestampHasBeenSet(false),
    m_handleStatusHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_policyTypeHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_policyLevelHasBeenSet(false),
    m_policyDescriptionHasBeenSet(false),
    m_bucketAccessWayHasBeenSet(false),
    m_bucketTagInfoHasBeenSet(false),
    m_riskIdHasBeenSet(false),
    m_bucketRegionCodeHasBeenSet(false),
    m_bucketMonitorStatusHasBeenSet(false)
{
}

CoreInternalOutcome CosRiskBucketInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosRiskBucketInfo.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("BucketName") && !value["BucketName"].IsNull())
    {
        if (!value["BucketName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosRiskBucketInfo.BucketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketName = string(value["BucketName"].GetString());
        m_bucketNameHasBeenSet = true;
    }

    if (value.HasMember("BucketRegion") && !value["BucketRegion"].IsNull())
    {
        if (!value["BucketRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosRiskBucketInfo.BucketRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketRegion = string(value["BucketRegion"].GetString());
        m_bucketRegionHasBeenSet = true;
    }

    if (value.HasMember("BucketMarker") && !value["BucketMarker"].IsNull())
    {
        if (!value["BucketMarker"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosRiskBucketInfo.BucketMarker` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketMarker = string(value["BucketMarker"].GetString());
        m_bucketMarkerHasBeenSet = true;
    }

    if (value.HasMember("BucketUin") && !value["BucketUin"].IsNull())
    {
        if (!value["BucketUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosRiskBucketInfo.BucketUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketUin = string(value["BucketUin"].GetString());
        m_bucketUinHasBeenSet = true;
    }

    if (value.HasMember("BucketNickName") && !value["BucketNickName"].IsNull())
    {
        if (!value["BucketNickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosRiskBucketInfo.BucketNickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketNickName = string(value["BucketNickName"].GetString());
        m_bucketNickNameHasBeenSet = true;
    }

    if (value.HasMember("BucketMainNickName") && !value["BucketMainNickName"].IsNull())
    {
        if (!value["BucketMainNickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosRiskBucketInfo.BucketMainNickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketMainNickName = string(value["BucketMainNickName"].GetString());
        m_bucketMainNickNameHasBeenSet = true;
    }

    if (value.HasMember("BucketIdentify") && !value["BucketIdentify"].IsNull())
    {
        if (!value["BucketIdentify"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosRiskBucketInfo.BucketIdentify` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bucketIdentify = value["BucketIdentify"].GetInt64();
        m_bucketIdentifyHasBeenSet = true;
    }

    if (value.HasMember("LastScanTimestamp") && !value["LastScanTimestamp"].IsNull())
    {
        if (!value["LastScanTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosRiskBucketInfo.LastScanTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastScanTimestamp = value["LastScanTimestamp"].GetInt64();
        m_lastScanTimestampHasBeenSet = true;
    }

    if (value.HasMember("HandleStatus") && !value["HandleStatus"].IsNull())
    {
        if (!value["HandleStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosRiskBucketInfo.HandleStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_handleStatus = value["HandleStatus"].GetInt64();
        m_handleStatusHasBeenSet = true;
    }

    if (value.HasMember("PolicyName") && !value["PolicyName"].IsNull())
    {
        if (!value["PolicyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosRiskBucketInfo.PolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyName = string(value["PolicyName"].GetString());
        m_policyNameHasBeenSet = true;
    }

    if (value.HasMember("PolicyType") && !value["PolicyType"].IsNull())
    {
        if (!value["PolicyType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosRiskBucketInfo.PolicyType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyType = value["PolicyType"].GetInt64();
        m_policyTypeHasBeenSet = true;
    }

    if (value.HasMember("PolicyId") && !value["PolicyId"].IsNull())
    {
        if (!value["PolicyId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosRiskBucketInfo.PolicyId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = value["PolicyId"].GetInt64();
        m_policyIdHasBeenSet = true;
    }

    if (value.HasMember("PolicyLevel") && !value["PolicyLevel"].IsNull())
    {
        if (!value["PolicyLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosRiskBucketInfo.PolicyLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyLevel = value["PolicyLevel"].GetInt64();
        m_policyLevelHasBeenSet = true;
    }

    if (value.HasMember("PolicyDescription") && !value["PolicyDescription"].IsNull())
    {
        if (!value["PolicyDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosRiskBucketInfo.PolicyDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyDescription = string(value["PolicyDescription"].GetString());
        m_policyDescriptionHasBeenSet = true;
    }

    if (value.HasMember("BucketAccessWay") && !value["BucketAccessWay"].IsNull())
    {
        if (!value["BucketAccessWay"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosRiskBucketInfo.BucketAccessWay` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketAccessWay = string(value["BucketAccessWay"].GetString());
        m_bucketAccessWayHasBeenSet = true;
    }

    if (value.HasMember("BucketTagInfo") && !value["BucketTagInfo"].IsNull())
    {
        if (!value["BucketTagInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosRiskBucketInfo.BucketTagInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketTagInfo = string(value["BucketTagInfo"].GetString());
        m_bucketTagInfoHasBeenSet = true;
    }

    if (value.HasMember("RiskId") && !value["RiskId"].IsNull())
    {
        if (!value["RiskId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosRiskBucketInfo.RiskId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskId = value["RiskId"].GetInt64();
        m_riskIdHasBeenSet = true;
    }

    if (value.HasMember("BucketRegionCode") && !value["BucketRegionCode"].IsNull())
    {
        if (!value["BucketRegionCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosRiskBucketInfo.BucketRegionCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketRegionCode = string(value["BucketRegionCode"].GetString());
        m_bucketRegionCodeHasBeenSet = true;
    }

    if (value.HasMember("BucketMonitorStatus") && !value["BucketMonitorStatus"].IsNull())
    {
        if (!value["BucketMonitorStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CosRiskBucketInfo.BucketMonitorStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bucketMonitorStatus = value["BucketMonitorStatus"].GetUint64();
        m_bucketMonitorStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosRiskBucketInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_bucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketMarkerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketMarker";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketMarker.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketUin.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketNickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketNickName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketNickName.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketMainNickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketMainNickName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketMainNickName.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketIdentifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketIdentify";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bucketIdentify, allocator);
    }

    if (m_lastScanTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastScanTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastScanTimestamp, allocator);
    }

    if (m_handleStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandleStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_handleStatus, allocator);
    }

    if (m_policyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyName.c_str(), allocator).Move(), allocator);
    }

    if (m_policyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyType, allocator);
    }

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyId, allocator);
    }

    if (m_policyLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyLevel, allocator);
    }

    if (m_policyDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketAccessWayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketAccessWay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketAccessWay.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketTagInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketTagInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketTagInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_riskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskId, allocator);
    }

    if (m_bucketRegionCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketRegionCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketRegionCode.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketMonitorStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketMonitorStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bucketMonitorStatus, allocator);
    }

}


int64_t CosRiskBucketInfo::GetAppId() const
{
    return m_appId;
}

void CosRiskBucketInfo::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool CosRiskBucketInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string CosRiskBucketInfo::GetBucketName() const
{
    return m_bucketName;
}

void CosRiskBucketInfo::SetBucketName(const string& _bucketName)
{
    m_bucketName = _bucketName;
    m_bucketNameHasBeenSet = true;
}

bool CosRiskBucketInfo::BucketNameHasBeenSet() const
{
    return m_bucketNameHasBeenSet;
}

string CosRiskBucketInfo::GetBucketRegion() const
{
    return m_bucketRegion;
}

void CosRiskBucketInfo::SetBucketRegion(const string& _bucketRegion)
{
    m_bucketRegion = _bucketRegion;
    m_bucketRegionHasBeenSet = true;
}

bool CosRiskBucketInfo::BucketRegionHasBeenSet() const
{
    return m_bucketRegionHasBeenSet;
}

string CosRiskBucketInfo::GetBucketMarker() const
{
    return m_bucketMarker;
}

void CosRiskBucketInfo::SetBucketMarker(const string& _bucketMarker)
{
    m_bucketMarker = _bucketMarker;
    m_bucketMarkerHasBeenSet = true;
}

bool CosRiskBucketInfo::BucketMarkerHasBeenSet() const
{
    return m_bucketMarkerHasBeenSet;
}

string CosRiskBucketInfo::GetBucketUin() const
{
    return m_bucketUin;
}

void CosRiskBucketInfo::SetBucketUin(const string& _bucketUin)
{
    m_bucketUin = _bucketUin;
    m_bucketUinHasBeenSet = true;
}

bool CosRiskBucketInfo::BucketUinHasBeenSet() const
{
    return m_bucketUinHasBeenSet;
}

string CosRiskBucketInfo::GetBucketNickName() const
{
    return m_bucketNickName;
}

void CosRiskBucketInfo::SetBucketNickName(const string& _bucketNickName)
{
    m_bucketNickName = _bucketNickName;
    m_bucketNickNameHasBeenSet = true;
}

bool CosRiskBucketInfo::BucketNickNameHasBeenSet() const
{
    return m_bucketNickNameHasBeenSet;
}

string CosRiskBucketInfo::GetBucketMainNickName() const
{
    return m_bucketMainNickName;
}

void CosRiskBucketInfo::SetBucketMainNickName(const string& _bucketMainNickName)
{
    m_bucketMainNickName = _bucketMainNickName;
    m_bucketMainNickNameHasBeenSet = true;
}

bool CosRiskBucketInfo::BucketMainNickNameHasBeenSet() const
{
    return m_bucketMainNickNameHasBeenSet;
}

int64_t CosRiskBucketInfo::GetBucketIdentify() const
{
    return m_bucketIdentify;
}

void CosRiskBucketInfo::SetBucketIdentify(const int64_t& _bucketIdentify)
{
    m_bucketIdentify = _bucketIdentify;
    m_bucketIdentifyHasBeenSet = true;
}

bool CosRiskBucketInfo::BucketIdentifyHasBeenSet() const
{
    return m_bucketIdentifyHasBeenSet;
}

int64_t CosRiskBucketInfo::GetLastScanTimestamp() const
{
    return m_lastScanTimestamp;
}

void CosRiskBucketInfo::SetLastScanTimestamp(const int64_t& _lastScanTimestamp)
{
    m_lastScanTimestamp = _lastScanTimestamp;
    m_lastScanTimestampHasBeenSet = true;
}

bool CosRiskBucketInfo::LastScanTimestampHasBeenSet() const
{
    return m_lastScanTimestampHasBeenSet;
}

int64_t CosRiskBucketInfo::GetHandleStatus() const
{
    return m_handleStatus;
}

void CosRiskBucketInfo::SetHandleStatus(const int64_t& _handleStatus)
{
    m_handleStatus = _handleStatus;
    m_handleStatusHasBeenSet = true;
}

bool CosRiskBucketInfo::HandleStatusHasBeenSet() const
{
    return m_handleStatusHasBeenSet;
}

string CosRiskBucketInfo::GetPolicyName() const
{
    return m_policyName;
}

void CosRiskBucketInfo::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool CosRiskBucketInfo::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

int64_t CosRiskBucketInfo::GetPolicyType() const
{
    return m_policyType;
}

void CosRiskBucketInfo::SetPolicyType(const int64_t& _policyType)
{
    m_policyType = _policyType;
    m_policyTypeHasBeenSet = true;
}

bool CosRiskBucketInfo::PolicyTypeHasBeenSet() const
{
    return m_policyTypeHasBeenSet;
}

int64_t CosRiskBucketInfo::GetPolicyId() const
{
    return m_policyId;
}

void CosRiskBucketInfo::SetPolicyId(const int64_t& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool CosRiskBucketInfo::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

int64_t CosRiskBucketInfo::GetPolicyLevel() const
{
    return m_policyLevel;
}

void CosRiskBucketInfo::SetPolicyLevel(const int64_t& _policyLevel)
{
    m_policyLevel = _policyLevel;
    m_policyLevelHasBeenSet = true;
}

bool CosRiskBucketInfo::PolicyLevelHasBeenSet() const
{
    return m_policyLevelHasBeenSet;
}

string CosRiskBucketInfo::GetPolicyDescription() const
{
    return m_policyDescription;
}

void CosRiskBucketInfo::SetPolicyDescription(const string& _policyDescription)
{
    m_policyDescription = _policyDescription;
    m_policyDescriptionHasBeenSet = true;
}

bool CosRiskBucketInfo::PolicyDescriptionHasBeenSet() const
{
    return m_policyDescriptionHasBeenSet;
}

string CosRiskBucketInfo::GetBucketAccessWay() const
{
    return m_bucketAccessWay;
}

void CosRiskBucketInfo::SetBucketAccessWay(const string& _bucketAccessWay)
{
    m_bucketAccessWay = _bucketAccessWay;
    m_bucketAccessWayHasBeenSet = true;
}

bool CosRiskBucketInfo::BucketAccessWayHasBeenSet() const
{
    return m_bucketAccessWayHasBeenSet;
}

string CosRiskBucketInfo::GetBucketTagInfo() const
{
    return m_bucketTagInfo;
}

void CosRiskBucketInfo::SetBucketTagInfo(const string& _bucketTagInfo)
{
    m_bucketTagInfo = _bucketTagInfo;
    m_bucketTagInfoHasBeenSet = true;
}

bool CosRiskBucketInfo::BucketTagInfoHasBeenSet() const
{
    return m_bucketTagInfoHasBeenSet;
}

int64_t CosRiskBucketInfo::GetRiskId() const
{
    return m_riskId;
}

void CosRiskBucketInfo::SetRiskId(const int64_t& _riskId)
{
    m_riskId = _riskId;
    m_riskIdHasBeenSet = true;
}

bool CosRiskBucketInfo::RiskIdHasBeenSet() const
{
    return m_riskIdHasBeenSet;
}

string CosRiskBucketInfo::GetBucketRegionCode() const
{
    return m_bucketRegionCode;
}

void CosRiskBucketInfo::SetBucketRegionCode(const string& _bucketRegionCode)
{
    m_bucketRegionCode = _bucketRegionCode;
    m_bucketRegionCodeHasBeenSet = true;
}

bool CosRiskBucketInfo::BucketRegionCodeHasBeenSet() const
{
    return m_bucketRegionCodeHasBeenSet;
}

uint64_t CosRiskBucketInfo::GetBucketMonitorStatus() const
{
    return m_bucketMonitorStatus;
}

void CosRiskBucketInfo::SetBucketMonitorStatus(const uint64_t& _bucketMonitorStatus)
{
    m_bucketMonitorStatus = _bucketMonitorStatus;
    m_bucketMonitorStatusHasBeenSet = true;
}

bool CosRiskBucketInfo::BucketMonitorStatusHasBeenSet() const
{
    return m_bucketMonitorStatusHasBeenSet;
}

