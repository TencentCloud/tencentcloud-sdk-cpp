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

#include <tencentcloud/cwp/v20180228/model/BaselinePolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

BaselinePolicy::BaselinePolicy() :
    m_policyNameHasBeenSet(false),
    m_detectIntervalHasBeenSet(false),
    m_detectTimeHasBeenSet(false),
    m_isEnabledHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_ruleCountHasBeenSet(false),
    m_itemCountHasBeenSet(false),
    m_hostCountHasBeenSet(false),
    m_ruleIdsHasBeenSet(false),
    m_hostIdsHasBeenSet(false),
    m_hostIpsHasBeenSet(false),
    m_isDefaultHasBeenSet(false)
{
}

CoreInternalOutcome BaselinePolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PolicyName") && !value["PolicyName"].IsNull())
    {
        if (!value["PolicyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselinePolicy.PolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyName = string(value["PolicyName"].GetString());
        m_policyNameHasBeenSet = true;
    }

    if (value.HasMember("DetectInterval") && !value["DetectInterval"].IsNull())
    {
        if (!value["DetectInterval"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselinePolicy.DetectInterval` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_detectInterval = value["DetectInterval"].GetInt64();
        m_detectIntervalHasBeenSet = true;
    }

    if (value.HasMember("DetectTime") && !value["DetectTime"].IsNull())
    {
        if (!value["DetectTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselinePolicy.DetectTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detectTime = string(value["DetectTime"].GetString());
        m_detectTimeHasBeenSet = true;
    }

    if (value.HasMember("IsEnabled") && !value["IsEnabled"].IsNull())
    {
        if (!value["IsEnabled"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselinePolicy.IsEnabled` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isEnabled = value["IsEnabled"].GetInt64();
        m_isEnabledHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselinePolicy.AssetType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = value["AssetType"].GetInt64();
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("PolicyId") && !value["PolicyId"].IsNull())
    {
        if (!value["PolicyId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselinePolicy.PolicyId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = value["PolicyId"].GetInt64();
        m_policyIdHasBeenSet = true;
    }

    if (value.HasMember("RuleCount") && !value["RuleCount"].IsNull())
    {
        if (!value["RuleCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselinePolicy.RuleCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleCount = value["RuleCount"].GetInt64();
        m_ruleCountHasBeenSet = true;
    }

    if (value.HasMember("ItemCount") && !value["ItemCount"].IsNull())
    {
        if (!value["ItemCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselinePolicy.ItemCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_itemCount = value["ItemCount"].GetInt64();
        m_itemCountHasBeenSet = true;
    }

    if (value.HasMember("HostCount") && !value["HostCount"].IsNull())
    {
        if (!value["HostCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselinePolicy.HostCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hostCount = value["HostCount"].GetInt64();
        m_hostCountHasBeenSet = true;
    }

    if (value.HasMember("RuleIds") && !value["RuleIds"].IsNull())
    {
        if (!value["RuleIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaselinePolicy.RuleIds` is not array type"));

        const rapidjson::Value &tmpValue = value["RuleIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ruleIds.push_back((*itr).GetInt64());
        }
        m_ruleIdsHasBeenSet = true;
    }

    if (value.HasMember("HostIds") && !value["HostIds"].IsNull())
    {
        if (!value["HostIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaselinePolicy.HostIds` is not array type"));

        const rapidjson::Value &tmpValue = value["HostIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_hostIds.push_back((*itr).GetString());
        }
        m_hostIdsHasBeenSet = true;
    }

    if (value.HasMember("HostIps") && !value["HostIps"].IsNull())
    {
        if (!value["HostIps"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaselinePolicy.HostIps` is not array type"));

        const rapidjson::Value &tmpValue = value["HostIps"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_hostIps.push_back((*itr).GetString());
        }
        m_hostIpsHasBeenSet = true;
    }

    if (value.HasMember("IsDefault") && !value["IsDefault"].IsNull())
    {
        if (!value["IsDefault"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselinePolicy.IsDefault` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isDefault = value["IsDefault"].GetInt64();
        m_isDefaultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselinePolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_policyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyName.c_str(), allocator).Move(), allocator);
    }

    if (m_detectIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_detectInterval, allocator);
    }

    if (m_detectTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detectTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isEnabled, allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetType, allocator);
    }

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyId, allocator);
    }

    if (m_ruleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleCount, allocator);
    }

    if (m_itemCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_itemCount, allocator);
    }

    if (m_hostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostCount, allocator);
    }

    if (m_ruleIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ruleIds.begin(); itr != m_ruleIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_hostIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_hostIds.begin(); itr != m_hostIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_hostIpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_hostIps.begin(); itr != m_hostIps.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefault, allocator);
    }

}


string BaselinePolicy::GetPolicyName() const
{
    return m_policyName;
}

void BaselinePolicy::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool BaselinePolicy::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

int64_t BaselinePolicy::GetDetectInterval() const
{
    return m_detectInterval;
}

void BaselinePolicy::SetDetectInterval(const int64_t& _detectInterval)
{
    m_detectInterval = _detectInterval;
    m_detectIntervalHasBeenSet = true;
}

bool BaselinePolicy::DetectIntervalHasBeenSet() const
{
    return m_detectIntervalHasBeenSet;
}

string BaselinePolicy::GetDetectTime() const
{
    return m_detectTime;
}

void BaselinePolicy::SetDetectTime(const string& _detectTime)
{
    m_detectTime = _detectTime;
    m_detectTimeHasBeenSet = true;
}

bool BaselinePolicy::DetectTimeHasBeenSet() const
{
    return m_detectTimeHasBeenSet;
}

int64_t BaselinePolicy::GetIsEnabled() const
{
    return m_isEnabled;
}

void BaselinePolicy::SetIsEnabled(const int64_t& _isEnabled)
{
    m_isEnabled = _isEnabled;
    m_isEnabledHasBeenSet = true;
}

bool BaselinePolicy::IsEnabledHasBeenSet() const
{
    return m_isEnabledHasBeenSet;
}

int64_t BaselinePolicy::GetAssetType() const
{
    return m_assetType;
}

void BaselinePolicy::SetAssetType(const int64_t& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool BaselinePolicy::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

int64_t BaselinePolicy::GetPolicyId() const
{
    return m_policyId;
}

void BaselinePolicy::SetPolicyId(const int64_t& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool BaselinePolicy::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

int64_t BaselinePolicy::GetRuleCount() const
{
    return m_ruleCount;
}

void BaselinePolicy::SetRuleCount(const int64_t& _ruleCount)
{
    m_ruleCount = _ruleCount;
    m_ruleCountHasBeenSet = true;
}

bool BaselinePolicy::RuleCountHasBeenSet() const
{
    return m_ruleCountHasBeenSet;
}

int64_t BaselinePolicy::GetItemCount() const
{
    return m_itemCount;
}

void BaselinePolicy::SetItemCount(const int64_t& _itemCount)
{
    m_itemCount = _itemCount;
    m_itemCountHasBeenSet = true;
}

bool BaselinePolicy::ItemCountHasBeenSet() const
{
    return m_itemCountHasBeenSet;
}

int64_t BaselinePolicy::GetHostCount() const
{
    return m_hostCount;
}

void BaselinePolicy::SetHostCount(const int64_t& _hostCount)
{
    m_hostCount = _hostCount;
    m_hostCountHasBeenSet = true;
}

bool BaselinePolicy::HostCountHasBeenSet() const
{
    return m_hostCountHasBeenSet;
}

vector<int64_t> BaselinePolicy::GetRuleIds() const
{
    return m_ruleIds;
}

void BaselinePolicy::SetRuleIds(const vector<int64_t>& _ruleIds)
{
    m_ruleIds = _ruleIds;
    m_ruleIdsHasBeenSet = true;
}

bool BaselinePolicy::RuleIdsHasBeenSet() const
{
    return m_ruleIdsHasBeenSet;
}

vector<string> BaselinePolicy::GetHostIds() const
{
    return m_hostIds;
}

void BaselinePolicy::SetHostIds(const vector<string>& _hostIds)
{
    m_hostIds = _hostIds;
    m_hostIdsHasBeenSet = true;
}

bool BaselinePolicy::HostIdsHasBeenSet() const
{
    return m_hostIdsHasBeenSet;
}

vector<string> BaselinePolicy::GetHostIps() const
{
    return m_hostIps;
}

void BaselinePolicy::SetHostIps(const vector<string>& _hostIps)
{
    m_hostIps = _hostIps;
    m_hostIpsHasBeenSet = true;
}

bool BaselinePolicy::HostIpsHasBeenSet() const
{
    return m_hostIpsHasBeenSet;
}

int64_t BaselinePolicy::GetIsDefault() const
{
    return m_isDefault;
}

void BaselinePolicy::SetIsDefault(const int64_t& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool BaselinePolicy::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

