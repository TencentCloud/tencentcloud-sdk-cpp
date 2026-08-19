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

#include <tencentcloud/csip/v20221121/model/BaselineAggregatedPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

BaselineAggregatedPolicy::BaselineAggregatedPolicy() :
    m_parentCategoryIDHasBeenSet(false),
    m_policyIDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_confItemCountHasBeenSet(false),
    m_passItemCountHasBeenSet(false),
    m_notPassItemCountHasBeenSet(false),
    m_notPassItemRiskLevelStatisticHasBeenSet(false),
    m_passRateHasBeenSet(false),
    m_categoryStatisticHasBeenSet(false),
    m_policyTypeHasBeenSet(false),
    m_checkAssetTypeHasBeenSet(false),
    m_scannedHasBeenSet(false)
{
}

CoreInternalOutcome BaselineAggregatedPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ParentCategoryID") && !value["ParentCategoryID"].IsNull())
    {
        if (!value["ParentCategoryID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineAggregatedPolicy.ParentCategoryID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_parentCategoryID = value["ParentCategoryID"].GetUint64();
        m_parentCategoryIDHasBeenSet = true;
    }

    if (value.HasMember("PolicyID") && !value["PolicyID"].IsNull())
    {
        if (!value["PolicyID"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaselineAggregatedPolicy.PolicyID` is not array type"));

        const rapidjson::Value &tmpValue = value["PolicyID"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_policyID.push_back((*itr).GetUint64());
        }
        m_policyIDHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineAggregatedPolicy.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineAggregatedPolicy.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ConfItemCount") && !value["ConfItemCount"].IsNull())
    {
        if (!value["ConfItemCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineAggregatedPolicy.ConfItemCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_confItemCount = value["ConfItemCount"].GetUint64();
        m_confItemCountHasBeenSet = true;
    }

    if (value.HasMember("PassItemCount") && !value["PassItemCount"].IsNull())
    {
        if (!value["PassItemCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineAggregatedPolicy.PassItemCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_passItemCount = value["PassItemCount"].GetUint64();
        m_passItemCountHasBeenSet = true;
    }

    if (value.HasMember("NotPassItemCount") && !value["NotPassItemCount"].IsNull())
    {
        if (!value["NotPassItemCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineAggregatedPolicy.NotPassItemCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_notPassItemCount = value["NotPassItemCount"].GetUint64();
        m_notPassItemCountHasBeenSet = true;
    }

    if (value.HasMember("NotPassItemRiskLevelStatistic") && !value["NotPassItemRiskLevelStatistic"].IsNull())
    {
        if (!value["NotPassItemRiskLevelStatistic"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaselineAggregatedPolicy.NotPassItemRiskLevelStatistic` is not array type"));

        const rapidjson::Value &tmpValue = value["NotPassItemRiskLevelStatistic"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BaselineRiskLevelStatistic item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_notPassItemRiskLevelStatistic.push_back(item);
        }
        m_notPassItemRiskLevelStatisticHasBeenSet = true;
    }

    if (value.HasMember("PassRate") && !value["PassRate"].IsNull())
    {
        if (!value["PassRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineAggregatedPolicy.PassRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_passRate = value["PassRate"].GetDouble();
        m_passRateHasBeenSet = true;
    }

    if (value.HasMember("CategoryStatistic") && !value["CategoryStatistic"].IsNull())
    {
        if (!value["CategoryStatistic"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaselineAggregatedPolicy.CategoryStatistic` is not array type"));

        const rapidjson::Value &tmpValue = value["CategoryStatistic"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BaselineAggregatedCategory item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_categoryStatistic.push_back(item);
        }
        m_categoryStatisticHasBeenSet = true;
    }

    if (value.HasMember("PolicyType") && !value["PolicyType"].IsNull())
    {
        if (!value["PolicyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineAggregatedPolicy.PolicyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyType = string(value["PolicyType"].GetString());
        m_policyTypeHasBeenSet = true;
    }

    if (value.HasMember("CheckAssetType") && !value["CheckAssetType"].IsNull())
    {
        if (!value["CheckAssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineAggregatedPolicy.CheckAssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkAssetType = string(value["CheckAssetType"].GetString());
        m_checkAssetTypeHasBeenSet = true;
    }

    if (value.HasMember("Scanned") && !value["Scanned"].IsNull())
    {
        if (!value["Scanned"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineAggregatedPolicy.Scanned` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_scanned = value["Scanned"].GetBool();
        m_scannedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselineAggregatedPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_parentCategoryIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentCategoryID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_parentCategoryID, allocator);
    }

    if (m_policyIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_policyID.begin(); itr != m_policyID.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_confItemCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfItemCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confItemCount, allocator);
    }

    if (m_passItemCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassItemCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_passItemCount, allocator);
    }

    if (m_notPassItemCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotPassItemCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notPassItemCount, allocator);
    }

    if (m_notPassItemRiskLevelStatisticHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotPassItemRiskLevelStatistic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_notPassItemRiskLevelStatistic.begin(); itr != m_notPassItemRiskLevelStatistic.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_passRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_passRate, allocator);
    }

    if (m_categoryStatisticHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryStatistic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_categoryStatistic.begin(); itr != m_categoryStatistic.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_policyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyType.c_str(), allocator).Move(), allocator);
    }

    if (m_checkAssetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckAssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkAssetType.c_str(), allocator).Move(), allocator);
    }

    if (m_scannedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scanned";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanned, allocator);
    }

}


uint64_t BaselineAggregatedPolicy::GetParentCategoryID() const
{
    return m_parentCategoryID;
}

void BaselineAggregatedPolicy::SetParentCategoryID(const uint64_t& _parentCategoryID)
{
    m_parentCategoryID = _parentCategoryID;
    m_parentCategoryIDHasBeenSet = true;
}

bool BaselineAggregatedPolicy::ParentCategoryIDHasBeenSet() const
{
    return m_parentCategoryIDHasBeenSet;
}

vector<uint64_t> BaselineAggregatedPolicy::GetPolicyID() const
{
    return m_policyID;
}

void BaselineAggregatedPolicy::SetPolicyID(const vector<uint64_t>& _policyID)
{
    m_policyID = _policyID;
    m_policyIDHasBeenSet = true;
}

bool BaselineAggregatedPolicy::PolicyIDHasBeenSet() const
{
    return m_policyIDHasBeenSet;
}

string BaselineAggregatedPolicy::GetName() const
{
    return m_name;
}

void BaselineAggregatedPolicy::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool BaselineAggregatedPolicy::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string BaselineAggregatedPolicy::GetDescription() const
{
    return m_description;
}

void BaselineAggregatedPolicy::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool BaselineAggregatedPolicy::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t BaselineAggregatedPolicy::GetConfItemCount() const
{
    return m_confItemCount;
}

void BaselineAggregatedPolicy::SetConfItemCount(const uint64_t& _confItemCount)
{
    m_confItemCount = _confItemCount;
    m_confItemCountHasBeenSet = true;
}

bool BaselineAggregatedPolicy::ConfItemCountHasBeenSet() const
{
    return m_confItemCountHasBeenSet;
}

uint64_t BaselineAggregatedPolicy::GetPassItemCount() const
{
    return m_passItemCount;
}

void BaselineAggregatedPolicy::SetPassItemCount(const uint64_t& _passItemCount)
{
    m_passItemCount = _passItemCount;
    m_passItemCountHasBeenSet = true;
}

bool BaselineAggregatedPolicy::PassItemCountHasBeenSet() const
{
    return m_passItemCountHasBeenSet;
}

uint64_t BaselineAggregatedPolicy::GetNotPassItemCount() const
{
    return m_notPassItemCount;
}

void BaselineAggregatedPolicy::SetNotPassItemCount(const uint64_t& _notPassItemCount)
{
    m_notPassItemCount = _notPassItemCount;
    m_notPassItemCountHasBeenSet = true;
}

bool BaselineAggregatedPolicy::NotPassItemCountHasBeenSet() const
{
    return m_notPassItemCountHasBeenSet;
}

vector<BaselineRiskLevelStatistic> BaselineAggregatedPolicy::GetNotPassItemRiskLevelStatistic() const
{
    return m_notPassItemRiskLevelStatistic;
}

void BaselineAggregatedPolicy::SetNotPassItemRiskLevelStatistic(const vector<BaselineRiskLevelStatistic>& _notPassItemRiskLevelStatistic)
{
    m_notPassItemRiskLevelStatistic = _notPassItemRiskLevelStatistic;
    m_notPassItemRiskLevelStatisticHasBeenSet = true;
}

bool BaselineAggregatedPolicy::NotPassItemRiskLevelStatisticHasBeenSet() const
{
    return m_notPassItemRiskLevelStatisticHasBeenSet;
}

double BaselineAggregatedPolicy::GetPassRate() const
{
    return m_passRate;
}

void BaselineAggregatedPolicy::SetPassRate(const double& _passRate)
{
    m_passRate = _passRate;
    m_passRateHasBeenSet = true;
}

bool BaselineAggregatedPolicy::PassRateHasBeenSet() const
{
    return m_passRateHasBeenSet;
}

vector<BaselineAggregatedCategory> BaselineAggregatedPolicy::GetCategoryStatistic() const
{
    return m_categoryStatistic;
}

void BaselineAggregatedPolicy::SetCategoryStatistic(const vector<BaselineAggregatedCategory>& _categoryStatistic)
{
    m_categoryStatistic = _categoryStatistic;
    m_categoryStatisticHasBeenSet = true;
}

bool BaselineAggregatedPolicy::CategoryStatisticHasBeenSet() const
{
    return m_categoryStatisticHasBeenSet;
}

string BaselineAggregatedPolicy::GetPolicyType() const
{
    return m_policyType;
}

void BaselineAggregatedPolicy::SetPolicyType(const string& _policyType)
{
    m_policyType = _policyType;
    m_policyTypeHasBeenSet = true;
}

bool BaselineAggregatedPolicy::PolicyTypeHasBeenSet() const
{
    return m_policyTypeHasBeenSet;
}

string BaselineAggregatedPolicy::GetCheckAssetType() const
{
    return m_checkAssetType;
}

void BaselineAggregatedPolicy::SetCheckAssetType(const string& _checkAssetType)
{
    m_checkAssetType = _checkAssetType;
    m_checkAssetTypeHasBeenSet = true;
}

bool BaselineAggregatedPolicy::CheckAssetTypeHasBeenSet() const
{
    return m_checkAssetTypeHasBeenSet;
}

bool BaselineAggregatedPolicy::GetScanned() const
{
    return m_scanned;
}

void BaselineAggregatedPolicy::SetScanned(const bool& _scanned)
{
    m_scanned = _scanned;
    m_scannedHasBeenSet = true;
}

bool BaselineAggregatedPolicy::ScannedHasBeenSet() const
{
    return m_scannedHasBeenSet;
}

