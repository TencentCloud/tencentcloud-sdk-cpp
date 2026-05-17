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

#include <tencentcloud/csip/v20221121/model/CosPolicyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CosPolicyInfo::CosPolicyInfo() :
    m_policyNameHasBeenSet(false),
    m_policyTypeHasBeenSet(false),
    m_policySourceHasBeenSet(false),
    m_policyContentHasBeenSet(false),
    m_policyStatusHasBeenSet(false),
    m_policyAbnormalTypeHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_policyCreateTimeHasBeenSet(false),
    m_policyUpdateTimeHasBeenSet(false),
    m_policyHitCountHasBeenSet(false),
    m_policyContentHashHasBeenSet(false),
    m_relAccountCountHasBeenSet(false),
    m_relAccountUinHasBeenSet(false),
    m_relAccountNameHasBeenSet(false),
    m_policyDescriptionHasBeenSet(false),
    m_policyMarkerHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_policyIdSetHasBeenSet(false),
    m_policyHistoryHandleStatusHasBeenSet(false),
    m_systemPolicyEditStatusHasBeenSet(false)
{
}

CoreInternalOutcome CosPolicyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PolicyName") && !value["PolicyName"].IsNull())
    {
        if (!value["PolicyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosPolicyInfo.PolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyName = string(value["PolicyName"].GetString());
        m_policyNameHasBeenSet = true;
    }

    if (value.HasMember("PolicyType") && !value["PolicyType"].IsNull())
    {
        if (!value["PolicyType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosPolicyInfo.PolicyType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyType = value["PolicyType"].GetInt64();
        m_policyTypeHasBeenSet = true;
    }

    if (value.HasMember("PolicySource") && !value["PolicySource"].IsNull())
    {
        if (!value["PolicySource"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosPolicyInfo.PolicySource` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policySource = value["PolicySource"].GetInt64();
        m_policySourceHasBeenSet = true;
    }

    if (value.HasMember("PolicyContent") && !value["PolicyContent"].IsNull())
    {
        if (!value["PolicyContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosPolicyInfo.PolicyContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyContent = string(value["PolicyContent"].GetString());
        m_policyContentHasBeenSet = true;
    }

    if (value.HasMember("PolicyStatus") && !value["PolicyStatus"].IsNull())
    {
        if (!value["PolicyStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosPolicyInfo.PolicyStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyStatus = value["PolicyStatus"].GetInt64();
        m_policyStatusHasBeenSet = true;
    }

    if (value.HasMember("PolicyAbnormalType") && !value["PolicyAbnormalType"].IsNull())
    {
        if (!value["PolicyAbnormalType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosPolicyInfo.PolicyAbnormalType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyAbnormalType = value["PolicyAbnormalType"].GetInt64();
        m_policyAbnormalTypeHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosPolicyInfo.RiskLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = value["RiskLevel"].GetInt64();
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("PolicyId") && !value["PolicyId"].IsNull())
    {
        if (!value["PolicyId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosPolicyInfo.PolicyId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = value["PolicyId"].GetInt64();
        m_policyIdHasBeenSet = true;
    }

    if (value.HasMember("PolicyCreateTime") && !value["PolicyCreateTime"].IsNull())
    {
        if (!value["PolicyCreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosPolicyInfo.PolicyCreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyCreateTime = value["PolicyCreateTime"].GetInt64();
        m_policyCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("PolicyUpdateTime") && !value["PolicyUpdateTime"].IsNull())
    {
        if (!value["PolicyUpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosPolicyInfo.PolicyUpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyUpdateTime = value["PolicyUpdateTime"].GetInt64();
        m_policyUpdateTimeHasBeenSet = true;
    }

    if (value.HasMember("PolicyHitCount") && !value["PolicyHitCount"].IsNull())
    {
        if (!value["PolicyHitCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosPolicyInfo.PolicyHitCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyHitCount = value["PolicyHitCount"].GetInt64();
        m_policyHitCountHasBeenSet = true;
    }

    if (value.HasMember("PolicyContentHash") && !value["PolicyContentHash"].IsNull())
    {
        if (!value["PolicyContentHash"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosPolicyInfo.PolicyContentHash` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyContentHash = string(value["PolicyContentHash"].GetString());
        m_policyContentHashHasBeenSet = true;
    }

    if (value.HasMember("RelAccountCount") && !value["RelAccountCount"].IsNull())
    {
        if (!value["RelAccountCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosPolicyInfo.RelAccountCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_relAccountCount = value["RelAccountCount"].GetInt64();
        m_relAccountCountHasBeenSet = true;
    }

    if (value.HasMember("RelAccountUin") && !value["RelAccountUin"].IsNull())
    {
        if (!value["RelAccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosPolicyInfo.RelAccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relAccountUin = string(value["RelAccountUin"].GetString());
        m_relAccountUinHasBeenSet = true;
    }

    if (value.HasMember("RelAccountName") && !value["RelAccountName"].IsNull())
    {
        if (!value["RelAccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosPolicyInfo.RelAccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relAccountName = string(value["RelAccountName"].GetString());
        m_relAccountNameHasBeenSet = true;
    }

    if (value.HasMember("PolicyDescription") && !value["PolicyDescription"].IsNull())
    {
        if (!value["PolicyDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosPolicyInfo.PolicyDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyDescription = string(value["PolicyDescription"].GetString());
        m_policyDescriptionHasBeenSet = true;
    }

    if (value.HasMember("PolicyMarker") && !value["PolicyMarker"].IsNull())
    {
        if (!value["PolicyMarker"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosPolicyInfo.PolicyMarker` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyMarker = string(value["PolicyMarker"].GetString());
        m_policyMarkerHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosPolicyInfo.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("PolicyIdSet") && !value["PolicyIdSet"].IsNull())
    {
        if (!value["PolicyIdSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CosPolicyInfo.PolicyIdSet` is not array type"));

        const rapidjson::Value &tmpValue = value["PolicyIdSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_policyIdSet.push_back((*itr).GetInt64());
        }
        m_policyIdSetHasBeenSet = true;
    }

    if (value.HasMember("PolicyHistoryHandleStatus") && !value["PolicyHistoryHandleStatus"].IsNull())
    {
        if (!value["PolicyHistoryHandleStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CosPolicyInfo.PolicyHistoryHandleStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_policyHistoryHandleStatus = value["PolicyHistoryHandleStatus"].GetUint64();
        m_policyHistoryHandleStatusHasBeenSet = true;
    }

    if (value.HasMember("SystemPolicyEditStatus") && !value["SystemPolicyEditStatus"].IsNull())
    {
        if (!value["SystemPolicyEditStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosPolicyInfo.SystemPolicyEditStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_systemPolicyEditStatus = value["SystemPolicyEditStatus"].GetInt64();
        m_systemPolicyEditStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosPolicyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_policySourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicySource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policySource, allocator);
    }

    if (m_policyContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyContent.c_str(), allocator).Move(), allocator);
    }

    if (m_policyStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyStatus, allocator);
    }

    if (m_policyAbnormalTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyAbnormalType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyAbnormalType, allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskLevel, allocator);
    }

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyId, allocator);
    }

    if (m_policyCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyCreateTime, allocator);
    }

    if (m_policyUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyUpdateTime, allocator);
    }

    if (m_policyHitCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyHitCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyHitCount, allocator);
    }

    if (m_policyContentHashHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyContentHash";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyContentHash.c_str(), allocator).Move(), allocator);
    }

    if (m_relAccountCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelAccountCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_relAccountCount, allocator);
    }

    if (m_relAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelAccountUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relAccountUin.c_str(), allocator).Move(), allocator);
    }

    if (m_relAccountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelAccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relAccountName.c_str(), allocator).Move(), allocator);
    }

    if (m_policyDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_policyMarkerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyMarker";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyMarker.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_policyIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyIdSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_policyIdSet.begin(); itr != m_policyIdSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_policyHistoryHandleStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyHistoryHandleStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyHistoryHandleStatus, allocator);
    }

    if (m_systemPolicyEditStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemPolicyEditStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_systemPolicyEditStatus, allocator);
    }

}


string CosPolicyInfo::GetPolicyName() const
{
    return m_policyName;
}

void CosPolicyInfo::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool CosPolicyInfo::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

int64_t CosPolicyInfo::GetPolicyType() const
{
    return m_policyType;
}

void CosPolicyInfo::SetPolicyType(const int64_t& _policyType)
{
    m_policyType = _policyType;
    m_policyTypeHasBeenSet = true;
}

bool CosPolicyInfo::PolicyTypeHasBeenSet() const
{
    return m_policyTypeHasBeenSet;
}

int64_t CosPolicyInfo::GetPolicySource() const
{
    return m_policySource;
}

void CosPolicyInfo::SetPolicySource(const int64_t& _policySource)
{
    m_policySource = _policySource;
    m_policySourceHasBeenSet = true;
}

bool CosPolicyInfo::PolicySourceHasBeenSet() const
{
    return m_policySourceHasBeenSet;
}

string CosPolicyInfo::GetPolicyContent() const
{
    return m_policyContent;
}

void CosPolicyInfo::SetPolicyContent(const string& _policyContent)
{
    m_policyContent = _policyContent;
    m_policyContentHasBeenSet = true;
}

bool CosPolicyInfo::PolicyContentHasBeenSet() const
{
    return m_policyContentHasBeenSet;
}

int64_t CosPolicyInfo::GetPolicyStatus() const
{
    return m_policyStatus;
}

void CosPolicyInfo::SetPolicyStatus(const int64_t& _policyStatus)
{
    m_policyStatus = _policyStatus;
    m_policyStatusHasBeenSet = true;
}

bool CosPolicyInfo::PolicyStatusHasBeenSet() const
{
    return m_policyStatusHasBeenSet;
}

int64_t CosPolicyInfo::GetPolicyAbnormalType() const
{
    return m_policyAbnormalType;
}

void CosPolicyInfo::SetPolicyAbnormalType(const int64_t& _policyAbnormalType)
{
    m_policyAbnormalType = _policyAbnormalType;
    m_policyAbnormalTypeHasBeenSet = true;
}

bool CosPolicyInfo::PolicyAbnormalTypeHasBeenSet() const
{
    return m_policyAbnormalTypeHasBeenSet;
}

int64_t CosPolicyInfo::GetRiskLevel() const
{
    return m_riskLevel;
}

void CosPolicyInfo::SetRiskLevel(const int64_t& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool CosPolicyInfo::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

int64_t CosPolicyInfo::GetPolicyId() const
{
    return m_policyId;
}

void CosPolicyInfo::SetPolicyId(const int64_t& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool CosPolicyInfo::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

int64_t CosPolicyInfo::GetPolicyCreateTime() const
{
    return m_policyCreateTime;
}

void CosPolicyInfo::SetPolicyCreateTime(const int64_t& _policyCreateTime)
{
    m_policyCreateTime = _policyCreateTime;
    m_policyCreateTimeHasBeenSet = true;
}

bool CosPolicyInfo::PolicyCreateTimeHasBeenSet() const
{
    return m_policyCreateTimeHasBeenSet;
}

int64_t CosPolicyInfo::GetPolicyUpdateTime() const
{
    return m_policyUpdateTime;
}

void CosPolicyInfo::SetPolicyUpdateTime(const int64_t& _policyUpdateTime)
{
    m_policyUpdateTime = _policyUpdateTime;
    m_policyUpdateTimeHasBeenSet = true;
}

bool CosPolicyInfo::PolicyUpdateTimeHasBeenSet() const
{
    return m_policyUpdateTimeHasBeenSet;
}

int64_t CosPolicyInfo::GetPolicyHitCount() const
{
    return m_policyHitCount;
}

void CosPolicyInfo::SetPolicyHitCount(const int64_t& _policyHitCount)
{
    m_policyHitCount = _policyHitCount;
    m_policyHitCountHasBeenSet = true;
}

bool CosPolicyInfo::PolicyHitCountHasBeenSet() const
{
    return m_policyHitCountHasBeenSet;
}

string CosPolicyInfo::GetPolicyContentHash() const
{
    return m_policyContentHash;
}

void CosPolicyInfo::SetPolicyContentHash(const string& _policyContentHash)
{
    m_policyContentHash = _policyContentHash;
    m_policyContentHashHasBeenSet = true;
}

bool CosPolicyInfo::PolicyContentHashHasBeenSet() const
{
    return m_policyContentHashHasBeenSet;
}

int64_t CosPolicyInfo::GetRelAccountCount() const
{
    return m_relAccountCount;
}

void CosPolicyInfo::SetRelAccountCount(const int64_t& _relAccountCount)
{
    m_relAccountCount = _relAccountCount;
    m_relAccountCountHasBeenSet = true;
}

bool CosPolicyInfo::RelAccountCountHasBeenSet() const
{
    return m_relAccountCountHasBeenSet;
}

string CosPolicyInfo::GetRelAccountUin() const
{
    return m_relAccountUin;
}

void CosPolicyInfo::SetRelAccountUin(const string& _relAccountUin)
{
    m_relAccountUin = _relAccountUin;
    m_relAccountUinHasBeenSet = true;
}

bool CosPolicyInfo::RelAccountUinHasBeenSet() const
{
    return m_relAccountUinHasBeenSet;
}

string CosPolicyInfo::GetRelAccountName() const
{
    return m_relAccountName;
}

void CosPolicyInfo::SetRelAccountName(const string& _relAccountName)
{
    m_relAccountName = _relAccountName;
    m_relAccountNameHasBeenSet = true;
}

bool CosPolicyInfo::RelAccountNameHasBeenSet() const
{
    return m_relAccountNameHasBeenSet;
}

string CosPolicyInfo::GetPolicyDescription() const
{
    return m_policyDescription;
}

void CosPolicyInfo::SetPolicyDescription(const string& _policyDescription)
{
    m_policyDescription = _policyDescription;
    m_policyDescriptionHasBeenSet = true;
}

bool CosPolicyInfo::PolicyDescriptionHasBeenSet() const
{
    return m_policyDescriptionHasBeenSet;
}

string CosPolicyInfo::GetPolicyMarker() const
{
    return m_policyMarker;
}

void CosPolicyInfo::SetPolicyMarker(const string& _policyMarker)
{
    m_policyMarker = _policyMarker;
    m_policyMarkerHasBeenSet = true;
}

bool CosPolicyInfo::PolicyMarkerHasBeenSet() const
{
    return m_policyMarkerHasBeenSet;
}

int64_t CosPolicyInfo::GetAppId() const
{
    return m_appId;
}

void CosPolicyInfo::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool CosPolicyInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

vector<int64_t> CosPolicyInfo::GetPolicyIdSet() const
{
    return m_policyIdSet;
}

void CosPolicyInfo::SetPolicyIdSet(const vector<int64_t>& _policyIdSet)
{
    m_policyIdSet = _policyIdSet;
    m_policyIdSetHasBeenSet = true;
}

bool CosPolicyInfo::PolicyIdSetHasBeenSet() const
{
    return m_policyIdSetHasBeenSet;
}

uint64_t CosPolicyInfo::GetPolicyHistoryHandleStatus() const
{
    return m_policyHistoryHandleStatus;
}

void CosPolicyInfo::SetPolicyHistoryHandleStatus(const uint64_t& _policyHistoryHandleStatus)
{
    m_policyHistoryHandleStatus = _policyHistoryHandleStatus;
    m_policyHistoryHandleStatusHasBeenSet = true;
}

bool CosPolicyInfo::PolicyHistoryHandleStatusHasBeenSet() const
{
    return m_policyHistoryHandleStatusHasBeenSet;
}

int64_t CosPolicyInfo::GetSystemPolicyEditStatus() const
{
    return m_systemPolicyEditStatus;
}

void CosPolicyInfo::SetSystemPolicyEditStatus(const int64_t& _systemPolicyEditStatus)
{
    m_systemPolicyEditStatus = _systemPolicyEditStatus;
    m_systemPolicyEditStatusHasBeenSet = true;
}

bool CosPolicyInfo::SystemPolicyEditStatusHasBeenSet() const
{
    return m_systemPolicyEditStatusHasBeenSet;
}

