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

#include <tencentcloud/csip/v20221121/model/DspmRiskStrategyGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmRiskStrategyGroup::DspmRiskStrategyGroup() :
    m_strategyTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_strategyCategoryHasBeenSet(false),
    m_isEnabledHasBeenSet(false),
    m_hitCountHasBeenSet(false),
    m_riskTypeHasBeenSet(false),
    m_strategyListHasBeenSet(false)
{
}

CoreInternalOutcome DspmRiskStrategyGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StrategyType") && !value["StrategyType"].IsNull())
    {
        if (!value["StrategyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRiskStrategyGroup.StrategyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyType = string(value["StrategyType"].GetString());
        m_strategyTypeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRiskStrategyGroup.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("StrategyCategory") && !value["StrategyCategory"].IsNull())
    {
        if (!value["StrategyCategory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRiskStrategyGroup.StrategyCategory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyCategory = string(value["StrategyCategory"].GetString());
        m_strategyCategoryHasBeenSet = true;
    }

    if (value.HasMember("IsEnabled") && !value["IsEnabled"].IsNull())
    {
        if (!value["IsEnabled"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRiskStrategyGroup.IsEnabled` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isEnabled = value["IsEnabled"].GetInt64();
        m_isEnabledHasBeenSet = true;
    }

    if (value.HasMember("HitCount") && !value["HitCount"].IsNull())
    {
        if (!value["HitCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRiskStrategyGroup.HitCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hitCount = value["HitCount"].GetInt64();
        m_hitCountHasBeenSet = true;
    }

    if (value.HasMember("RiskType") && !value["RiskType"].IsNull())
    {
        if (!value["RiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRiskStrategyGroup.RiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskType = string(value["RiskType"].GetString());
        m_riskTypeHasBeenSet = true;
    }

    if (value.HasMember("StrategyList") && !value["StrategyList"].IsNull())
    {
        if (!value["StrategyList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DspmRiskStrategyGroup.StrategyList` is not array type"));

        const rapidjson::Value &tmpValue = value["StrategyList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DspmRiskStrategy item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_strategyList.push_back(item);
        }
        m_strategyListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspmRiskStrategyGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_strategyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategyType.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategyCategory.c_str(), allocator).Move(), allocator);
    }

    if (m_isEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isEnabled, allocator);
    }

    if (m_hitCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HitCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hitCount, allocator);
    }

    if (m_riskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskType.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_strategyList.begin(); itr != m_strategyList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DspmRiskStrategyGroup::GetStrategyType() const
{
    return m_strategyType;
}

void DspmRiskStrategyGroup::SetStrategyType(const string& _strategyType)
{
    m_strategyType = _strategyType;
    m_strategyTypeHasBeenSet = true;
}

bool DspmRiskStrategyGroup::StrategyTypeHasBeenSet() const
{
    return m_strategyTypeHasBeenSet;
}

string DspmRiskStrategyGroup::GetName() const
{
    return m_name;
}

void DspmRiskStrategyGroup::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DspmRiskStrategyGroup::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DspmRiskStrategyGroup::GetStrategyCategory() const
{
    return m_strategyCategory;
}

void DspmRiskStrategyGroup::SetStrategyCategory(const string& _strategyCategory)
{
    m_strategyCategory = _strategyCategory;
    m_strategyCategoryHasBeenSet = true;
}

bool DspmRiskStrategyGroup::StrategyCategoryHasBeenSet() const
{
    return m_strategyCategoryHasBeenSet;
}

int64_t DspmRiskStrategyGroup::GetIsEnabled() const
{
    return m_isEnabled;
}

void DspmRiskStrategyGroup::SetIsEnabled(const int64_t& _isEnabled)
{
    m_isEnabled = _isEnabled;
    m_isEnabledHasBeenSet = true;
}

bool DspmRiskStrategyGroup::IsEnabledHasBeenSet() const
{
    return m_isEnabledHasBeenSet;
}

int64_t DspmRiskStrategyGroup::GetHitCount() const
{
    return m_hitCount;
}

void DspmRiskStrategyGroup::SetHitCount(const int64_t& _hitCount)
{
    m_hitCount = _hitCount;
    m_hitCountHasBeenSet = true;
}

bool DspmRiskStrategyGroup::HitCountHasBeenSet() const
{
    return m_hitCountHasBeenSet;
}

string DspmRiskStrategyGroup::GetRiskType() const
{
    return m_riskType;
}

void DspmRiskStrategyGroup::SetRiskType(const string& _riskType)
{
    m_riskType = _riskType;
    m_riskTypeHasBeenSet = true;
}

bool DspmRiskStrategyGroup::RiskTypeHasBeenSet() const
{
    return m_riskTypeHasBeenSet;
}

vector<DspmRiskStrategy> DspmRiskStrategyGroup::GetStrategyList() const
{
    return m_strategyList;
}

void DspmRiskStrategyGroup::SetStrategyList(const vector<DspmRiskStrategy>& _strategyList)
{
    m_strategyList = _strategyList;
    m_strategyListHasBeenSet = true;
}

bool DspmRiskStrategyGroup::StrategyListHasBeenSet() const
{
    return m_strategyListHasBeenSet;
}

