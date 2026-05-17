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

#include <tencentcloud/csip/v20221121/model/CosAlarmInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CosAlarmInfo::CosAlarmInfo() :
    m_appIdHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_policyAbnormalTypeHasBeenSet(false),
    m_policyRiskLevelHasBeenSet(false),
    m_policyDescriptionHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_bucketRegionHasBeenSet(false),
    m_bucketMarkerHasBeenSet(false),
    m_bucketTagInfoHasBeenSet(false),
    m_bucketAccessWayHasBeenSet(false),
    m_accountUinHasBeenSet(false),
    m_accountNickNameHasBeenSet(false),
    m_accountIdentifyHasBeenSet(false),
    m_accountMainNickNameHasBeenSet(false),
    m_alarmTimestampHasBeenSet(false),
    m_handleStatusHasBeenSet(false),
    m_alarmIdHasBeenSet(false),
    m_bucketRegionCodeHasBeenSet(false),
    m_categoryDetailsHasBeenSet(false)
{
}

CoreInternalOutcome CosAlarmInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAlarmInfo.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("PolicyId") && !value["PolicyId"].IsNull())
    {
        if (!value["PolicyId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAlarmInfo.PolicyId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = value["PolicyId"].GetInt64();
        m_policyIdHasBeenSet = true;
    }

    if (value.HasMember("PolicyName") && !value["PolicyName"].IsNull())
    {
        if (!value["PolicyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosAlarmInfo.PolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyName = string(value["PolicyName"].GetString());
        m_policyNameHasBeenSet = true;
    }

    if (value.HasMember("PolicyAbnormalType") && !value["PolicyAbnormalType"].IsNull())
    {
        if (!value["PolicyAbnormalType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAlarmInfo.PolicyAbnormalType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyAbnormalType = value["PolicyAbnormalType"].GetInt64();
        m_policyAbnormalTypeHasBeenSet = true;
    }

    if (value.HasMember("PolicyRiskLevel") && !value["PolicyRiskLevel"].IsNull())
    {
        if (!value["PolicyRiskLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAlarmInfo.PolicyRiskLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyRiskLevel = value["PolicyRiskLevel"].GetInt64();
        m_policyRiskLevelHasBeenSet = true;
    }

    if (value.HasMember("PolicyDescription") && !value["PolicyDescription"].IsNull())
    {
        if (!value["PolicyDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosAlarmInfo.PolicyDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyDescription = string(value["PolicyDescription"].GetString());
        m_policyDescriptionHasBeenSet = true;
    }

    if (value.HasMember("BucketName") && !value["BucketName"].IsNull())
    {
        if (!value["BucketName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosAlarmInfo.BucketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketName = string(value["BucketName"].GetString());
        m_bucketNameHasBeenSet = true;
    }

    if (value.HasMember("BucketRegion") && !value["BucketRegion"].IsNull())
    {
        if (!value["BucketRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosAlarmInfo.BucketRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketRegion = string(value["BucketRegion"].GetString());
        m_bucketRegionHasBeenSet = true;
    }

    if (value.HasMember("BucketMarker") && !value["BucketMarker"].IsNull())
    {
        if (!value["BucketMarker"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosAlarmInfo.BucketMarker` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketMarker = string(value["BucketMarker"].GetString());
        m_bucketMarkerHasBeenSet = true;
    }

    if (value.HasMember("BucketTagInfo") && !value["BucketTagInfo"].IsNull())
    {
        if (!value["BucketTagInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosAlarmInfo.BucketTagInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketTagInfo = string(value["BucketTagInfo"].GetString());
        m_bucketTagInfoHasBeenSet = true;
    }

    if (value.HasMember("BucketAccessWay") && !value["BucketAccessWay"].IsNull())
    {
        if (!value["BucketAccessWay"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosAlarmInfo.BucketAccessWay` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketAccessWay = string(value["BucketAccessWay"].GetString());
        m_bucketAccessWayHasBeenSet = true;
    }

    if (value.HasMember("AccountUin") && !value["AccountUin"].IsNull())
    {
        if (!value["AccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosAlarmInfo.AccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountUin = string(value["AccountUin"].GetString());
        m_accountUinHasBeenSet = true;
    }

    if (value.HasMember("AccountNickName") && !value["AccountNickName"].IsNull())
    {
        if (!value["AccountNickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosAlarmInfo.AccountNickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountNickName = string(value["AccountNickName"].GetString());
        m_accountNickNameHasBeenSet = true;
    }

    if (value.HasMember("AccountIdentify") && !value["AccountIdentify"].IsNull())
    {
        if (!value["AccountIdentify"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAlarmInfo.AccountIdentify` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accountIdentify = value["AccountIdentify"].GetInt64();
        m_accountIdentifyHasBeenSet = true;
    }

    if (value.HasMember("AccountMainNickName") && !value["AccountMainNickName"].IsNull())
    {
        if (!value["AccountMainNickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosAlarmInfo.AccountMainNickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountMainNickName = string(value["AccountMainNickName"].GetString());
        m_accountMainNickNameHasBeenSet = true;
    }

    if (value.HasMember("AlarmTimestamp") && !value["AlarmTimestamp"].IsNull())
    {
        if (!value["AlarmTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAlarmInfo.AlarmTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmTimestamp = value["AlarmTimestamp"].GetInt64();
        m_alarmTimestampHasBeenSet = true;
    }

    if (value.HasMember("HandleStatus") && !value["HandleStatus"].IsNull())
    {
        if (!value["HandleStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAlarmInfo.HandleStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_handleStatus = value["HandleStatus"].GetInt64();
        m_handleStatusHasBeenSet = true;
    }

    if (value.HasMember("AlarmId") && !value["AlarmId"].IsNull())
    {
        if (!value["AlarmId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAlarmInfo.AlarmId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmId = value["AlarmId"].GetInt64();
        m_alarmIdHasBeenSet = true;
    }

    if (value.HasMember("BucketRegionCode") && !value["BucketRegionCode"].IsNull())
    {
        if (!value["BucketRegionCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosAlarmInfo.BucketRegionCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketRegionCode = string(value["BucketRegionCode"].GetString());
        m_bucketRegionCodeHasBeenSet = true;
    }

    if (value.HasMember("CategoryDetails") && !value["CategoryDetails"].IsNull())
    {
        if (!value["CategoryDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CosAlarmInfo.CategoryDetails` is not array type"));

        const rapidjson::Value &tmpValue = value["CategoryDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CosIdentifyCategoryDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_categoryDetails.push_back(item);
        }
        m_categoryDetailsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosAlarmInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyId, allocator);
    }

    if (m_policyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyName.c_str(), allocator).Move(), allocator);
    }

    if (m_policyAbnormalTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyAbnormalType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyAbnormalType, allocator);
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

    if (m_bucketTagInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketTagInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketTagInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketAccessWayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketAccessWay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketAccessWay.c_str(), allocator).Move(), allocator);
    }

    if (m_accountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountUin.c_str(), allocator).Move(), allocator);
    }

    if (m_accountNickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountNickName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountNickName.c_str(), allocator).Move(), allocator);
    }

    if (m_accountIdentifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountIdentify";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accountIdentify, allocator);
    }

    if (m_accountMainNickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountMainNickName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountMainNickName.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmTimestamp, allocator);
    }

    if (m_handleStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandleStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_handleStatus, allocator);
    }

    if (m_alarmIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmId, allocator);
    }

    if (m_bucketRegionCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketRegionCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketRegionCode.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_categoryDetails.begin(); itr != m_categoryDetails.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t CosAlarmInfo::GetAppId() const
{
    return m_appId;
}

void CosAlarmInfo::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool CosAlarmInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

int64_t CosAlarmInfo::GetPolicyId() const
{
    return m_policyId;
}

void CosAlarmInfo::SetPolicyId(const int64_t& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool CosAlarmInfo::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string CosAlarmInfo::GetPolicyName() const
{
    return m_policyName;
}

void CosAlarmInfo::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool CosAlarmInfo::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

int64_t CosAlarmInfo::GetPolicyAbnormalType() const
{
    return m_policyAbnormalType;
}

void CosAlarmInfo::SetPolicyAbnormalType(const int64_t& _policyAbnormalType)
{
    m_policyAbnormalType = _policyAbnormalType;
    m_policyAbnormalTypeHasBeenSet = true;
}

bool CosAlarmInfo::PolicyAbnormalTypeHasBeenSet() const
{
    return m_policyAbnormalTypeHasBeenSet;
}

int64_t CosAlarmInfo::GetPolicyRiskLevel() const
{
    return m_policyRiskLevel;
}

void CosAlarmInfo::SetPolicyRiskLevel(const int64_t& _policyRiskLevel)
{
    m_policyRiskLevel = _policyRiskLevel;
    m_policyRiskLevelHasBeenSet = true;
}

bool CosAlarmInfo::PolicyRiskLevelHasBeenSet() const
{
    return m_policyRiskLevelHasBeenSet;
}

string CosAlarmInfo::GetPolicyDescription() const
{
    return m_policyDescription;
}

void CosAlarmInfo::SetPolicyDescription(const string& _policyDescription)
{
    m_policyDescription = _policyDescription;
    m_policyDescriptionHasBeenSet = true;
}

bool CosAlarmInfo::PolicyDescriptionHasBeenSet() const
{
    return m_policyDescriptionHasBeenSet;
}

string CosAlarmInfo::GetBucketName() const
{
    return m_bucketName;
}

void CosAlarmInfo::SetBucketName(const string& _bucketName)
{
    m_bucketName = _bucketName;
    m_bucketNameHasBeenSet = true;
}

bool CosAlarmInfo::BucketNameHasBeenSet() const
{
    return m_bucketNameHasBeenSet;
}

string CosAlarmInfo::GetBucketRegion() const
{
    return m_bucketRegion;
}

void CosAlarmInfo::SetBucketRegion(const string& _bucketRegion)
{
    m_bucketRegion = _bucketRegion;
    m_bucketRegionHasBeenSet = true;
}

bool CosAlarmInfo::BucketRegionHasBeenSet() const
{
    return m_bucketRegionHasBeenSet;
}

string CosAlarmInfo::GetBucketMarker() const
{
    return m_bucketMarker;
}

void CosAlarmInfo::SetBucketMarker(const string& _bucketMarker)
{
    m_bucketMarker = _bucketMarker;
    m_bucketMarkerHasBeenSet = true;
}

bool CosAlarmInfo::BucketMarkerHasBeenSet() const
{
    return m_bucketMarkerHasBeenSet;
}

string CosAlarmInfo::GetBucketTagInfo() const
{
    return m_bucketTagInfo;
}

void CosAlarmInfo::SetBucketTagInfo(const string& _bucketTagInfo)
{
    m_bucketTagInfo = _bucketTagInfo;
    m_bucketTagInfoHasBeenSet = true;
}

bool CosAlarmInfo::BucketTagInfoHasBeenSet() const
{
    return m_bucketTagInfoHasBeenSet;
}

string CosAlarmInfo::GetBucketAccessWay() const
{
    return m_bucketAccessWay;
}

void CosAlarmInfo::SetBucketAccessWay(const string& _bucketAccessWay)
{
    m_bucketAccessWay = _bucketAccessWay;
    m_bucketAccessWayHasBeenSet = true;
}

bool CosAlarmInfo::BucketAccessWayHasBeenSet() const
{
    return m_bucketAccessWayHasBeenSet;
}

string CosAlarmInfo::GetAccountUin() const
{
    return m_accountUin;
}

void CosAlarmInfo::SetAccountUin(const string& _accountUin)
{
    m_accountUin = _accountUin;
    m_accountUinHasBeenSet = true;
}

bool CosAlarmInfo::AccountUinHasBeenSet() const
{
    return m_accountUinHasBeenSet;
}

string CosAlarmInfo::GetAccountNickName() const
{
    return m_accountNickName;
}

void CosAlarmInfo::SetAccountNickName(const string& _accountNickName)
{
    m_accountNickName = _accountNickName;
    m_accountNickNameHasBeenSet = true;
}

bool CosAlarmInfo::AccountNickNameHasBeenSet() const
{
    return m_accountNickNameHasBeenSet;
}

int64_t CosAlarmInfo::GetAccountIdentify() const
{
    return m_accountIdentify;
}

void CosAlarmInfo::SetAccountIdentify(const int64_t& _accountIdentify)
{
    m_accountIdentify = _accountIdentify;
    m_accountIdentifyHasBeenSet = true;
}

bool CosAlarmInfo::AccountIdentifyHasBeenSet() const
{
    return m_accountIdentifyHasBeenSet;
}

string CosAlarmInfo::GetAccountMainNickName() const
{
    return m_accountMainNickName;
}

void CosAlarmInfo::SetAccountMainNickName(const string& _accountMainNickName)
{
    m_accountMainNickName = _accountMainNickName;
    m_accountMainNickNameHasBeenSet = true;
}

bool CosAlarmInfo::AccountMainNickNameHasBeenSet() const
{
    return m_accountMainNickNameHasBeenSet;
}

int64_t CosAlarmInfo::GetAlarmTimestamp() const
{
    return m_alarmTimestamp;
}

void CosAlarmInfo::SetAlarmTimestamp(const int64_t& _alarmTimestamp)
{
    m_alarmTimestamp = _alarmTimestamp;
    m_alarmTimestampHasBeenSet = true;
}

bool CosAlarmInfo::AlarmTimestampHasBeenSet() const
{
    return m_alarmTimestampHasBeenSet;
}

int64_t CosAlarmInfo::GetHandleStatus() const
{
    return m_handleStatus;
}

void CosAlarmInfo::SetHandleStatus(const int64_t& _handleStatus)
{
    m_handleStatus = _handleStatus;
    m_handleStatusHasBeenSet = true;
}

bool CosAlarmInfo::HandleStatusHasBeenSet() const
{
    return m_handleStatusHasBeenSet;
}

int64_t CosAlarmInfo::GetAlarmId() const
{
    return m_alarmId;
}

void CosAlarmInfo::SetAlarmId(const int64_t& _alarmId)
{
    m_alarmId = _alarmId;
    m_alarmIdHasBeenSet = true;
}

bool CosAlarmInfo::AlarmIdHasBeenSet() const
{
    return m_alarmIdHasBeenSet;
}

string CosAlarmInfo::GetBucketRegionCode() const
{
    return m_bucketRegionCode;
}

void CosAlarmInfo::SetBucketRegionCode(const string& _bucketRegionCode)
{
    m_bucketRegionCode = _bucketRegionCode;
    m_bucketRegionCodeHasBeenSet = true;
}

bool CosAlarmInfo::BucketRegionCodeHasBeenSet() const
{
    return m_bucketRegionCodeHasBeenSet;
}

vector<CosIdentifyCategoryDetail> CosAlarmInfo::GetCategoryDetails() const
{
    return m_categoryDetails;
}

void CosAlarmInfo::SetCategoryDetails(const vector<CosIdentifyCategoryDetail>& _categoryDetails)
{
    m_categoryDetails = _categoryDetails;
    m_categoryDetailsHasBeenSet = true;
}

bool CosAlarmInfo::CategoryDetailsHasBeenSet() const
{
    return m_categoryDetailsHasBeenSet;
}

