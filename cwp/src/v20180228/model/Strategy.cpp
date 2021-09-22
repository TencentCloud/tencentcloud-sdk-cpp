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

#include <tencentcloud/cwp/v20180228/model/Strategy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

Strategy::Strategy() :
    m_strategyNameHasBeenSet(false),
    m_strategyIdHasBeenSet(false),
    m_ruleCountHasBeenSet(false),
    m_hostCountHasBeenSet(false),
    m_scanCycleHasBeenSet(false),
    m_scanAtHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_passRateHasBeenSet(false),
    m_categoryIdsHasBeenSet(false),
    m_isDefaultHasBeenSet(false)
{
}

CoreInternalOutcome Strategy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StrategyName") && !value["StrategyName"].IsNull())
    {
        if (!value["StrategyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Strategy.StrategyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyName = string(value["StrategyName"].GetString());
        m_strategyNameHasBeenSet = true;
    }

    if (value.HasMember("StrategyId") && !value["StrategyId"].IsNull())
    {
        if (!value["StrategyId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Strategy.StrategyId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_strategyId = value["StrategyId"].GetUint64();
        m_strategyIdHasBeenSet = true;
    }

    if (value.HasMember("RuleCount") && !value["RuleCount"].IsNull())
    {
        if (!value["RuleCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Strategy.RuleCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleCount = value["RuleCount"].GetUint64();
        m_ruleCountHasBeenSet = true;
    }

    if (value.HasMember("HostCount") && !value["HostCount"].IsNull())
    {
        if (!value["HostCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Strategy.HostCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hostCount = value["HostCount"].GetUint64();
        m_hostCountHasBeenSet = true;
    }

    if (value.HasMember("ScanCycle") && !value["ScanCycle"].IsNull())
    {
        if (!value["ScanCycle"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Strategy.ScanCycle` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scanCycle = value["ScanCycle"].GetUint64();
        m_scanCycleHasBeenSet = true;
    }

    if (value.HasMember("ScanAt") && !value["ScanAt"].IsNull())
    {
        if (!value["ScanAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Strategy.ScanAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanAt = string(value["ScanAt"].GetString());
        m_scanAtHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Strategy.Enabled` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetUint64();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("PassRate") && !value["PassRate"].IsNull())
    {
        if (!value["PassRate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Strategy.PassRate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_passRate = value["PassRate"].GetUint64();
        m_passRateHasBeenSet = true;
    }

    if (value.HasMember("CategoryIds") && !value["CategoryIds"].IsNull())
    {
        if (!value["CategoryIds"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Strategy.CategoryIds` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryIds = string(value["CategoryIds"].GetString());
        m_categoryIdsHasBeenSet = true;
    }

    if (value.HasMember("IsDefault") && !value["IsDefault"].IsNull())
    {
        if (!value["IsDefault"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Strategy.IsDefault` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isDefault = value["IsDefault"].GetUint64();
        m_isDefaultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Strategy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_strategyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategyName.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_strategyId, allocator);
    }

    if (m_ruleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleCount, allocator);
    }

    if (m_hostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostCount, allocator);
    }

    if (m_scanCycleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanCycle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanCycle, allocator);
    }

    if (m_scanAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanAt.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_passRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_passRate, allocator);
    }

    if (m_categoryIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_categoryIds.c_str(), allocator).Move(), allocator);
    }

    if (m_isDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefault, allocator);
    }

}


string Strategy::GetStrategyName() const
{
    return m_strategyName;
}

void Strategy::SetStrategyName(const string& _strategyName)
{
    m_strategyName = _strategyName;
    m_strategyNameHasBeenSet = true;
}

bool Strategy::StrategyNameHasBeenSet() const
{
    return m_strategyNameHasBeenSet;
}

uint64_t Strategy::GetStrategyId() const
{
    return m_strategyId;
}

void Strategy::SetStrategyId(const uint64_t& _strategyId)
{
    m_strategyId = _strategyId;
    m_strategyIdHasBeenSet = true;
}

bool Strategy::StrategyIdHasBeenSet() const
{
    return m_strategyIdHasBeenSet;
}

uint64_t Strategy::GetRuleCount() const
{
    return m_ruleCount;
}

void Strategy::SetRuleCount(const uint64_t& _ruleCount)
{
    m_ruleCount = _ruleCount;
    m_ruleCountHasBeenSet = true;
}

bool Strategy::RuleCountHasBeenSet() const
{
    return m_ruleCountHasBeenSet;
}

uint64_t Strategy::GetHostCount() const
{
    return m_hostCount;
}

void Strategy::SetHostCount(const uint64_t& _hostCount)
{
    m_hostCount = _hostCount;
    m_hostCountHasBeenSet = true;
}

bool Strategy::HostCountHasBeenSet() const
{
    return m_hostCountHasBeenSet;
}

uint64_t Strategy::GetScanCycle() const
{
    return m_scanCycle;
}

void Strategy::SetScanCycle(const uint64_t& _scanCycle)
{
    m_scanCycle = _scanCycle;
    m_scanCycleHasBeenSet = true;
}

bool Strategy::ScanCycleHasBeenSet() const
{
    return m_scanCycleHasBeenSet;
}

string Strategy::GetScanAt() const
{
    return m_scanAt;
}

void Strategy::SetScanAt(const string& _scanAt)
{
    m_scanAt = _scanAt;
    m_scanAtHasBeenSet = true;
}

bool Strategy::ScanAtHasBeenSet() const
{
    return m_scanAtHasBeenSet;
}

uint64_t Strategy::GetEnabled() const
{
    return m_enabled;
}

void Strategy::SetEnabled(const uint64_t& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool Strategy::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

uint64_t Strategy::GetPassRate() const
{
    return m_passRate;
}

void Strategy::SetPassRate(const uint64_t& _passRate)
{
    m_passRate = _passRate;
    m_passRateHasBeenSet = true;
}

bool Strategy::PassRateHasBeenSet() const
{
    return m_passRateHasBeenSet;
}

string Strategy::GetCategoryIds() const
{
    return m_categoryIds;
}

void Strategy::SetCategoryIds(const string& _categoryIds)
{
    m_categoryIds = _categoryIds;
    m_categoryIdsHasBeenSet = true;
}

bool Strategy::CategoryIdsHasBeenSet() const
{
    return m_categoryIdsHasBeenSet;
}

uint64_t Strategy::GetIsDefault() const
{
    return m_isDefault;
}

void Strategy::SetIsDefault(const uint64_t& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool Strategy::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

