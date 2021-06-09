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

#include <tencentcloud/cwp/v20180228/model/UpdateBaselineStrategyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

UpdateBaselineStrategyRequest::UpdateBaselineStrategyRequest() :
    m_strategyIdHasBeenSet(false),
    m_strategyNameHasBeenSet(false),
    m_scanCycleHasBeenSet(false),
    m_scanAtHasBeenSet(false),
    m_categoryIdsHasBeenSet(false),
    m_isGlobalHasBeenSet(false),
    m_machineTypeHasBeenSet(false),
    m_regionCodeHasBeenSet(false),
    m_quuidsHasBeenSet(false)
{
}

string UpdateBaselineStrategyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_strategyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_strategyId, allocator);
    }

    if (m_strategyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_strategyName.c_str(), allocator).Move(), allocator);
    }

    if (m_scanCycleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanCycle";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scanCycle, allocator);
    }

    if (m_scanAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanAt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scanAt.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_categoryIds.begin(); itr != m_categoryIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isGlobalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsGlobal";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isGlobal, allocator);
    }

    if (m_machineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_machineType.c_str(), allocator).Move(), allocator);
    }

    if (m_regionCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_regionCode.c_str(), allocator).Move(), allocator);
    }

    if (m_quuidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuids";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_quuids.begin(); itr != m_quuids.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t UpdateBaselineStrategyRequest::GetStrategyId() const
{
    return m_strategyId;
}

void UpdateBaselineStrategyRequest::SetStrategyId(const uint64_t& _strategyId)
{
    m_strategyId = _strategyId;
    m_strategyIdHasBeenSet = true;
}

bool UpdateBaselineStrategyRequest::StrategyIdHasBeenSet() const
{
    return m_strategyIdHasBeenSet;
}

string UpdateBaselineStrategyRequest::GetStrategyName() const
{
    return m_strategyName;
}

void UpdateBaselineStrategyRequest::SetStrategyName(const string& _strategyName)
{
    m_strategyName = _strategyName;
    m_strategyNameHasBeenSet = true;
}

bool UpdateBaselineStrategyRequest::StrategyNameHasBeenSet() const
{
    return m_strategyNameHasBeenSet;
}

uint64_t UpdateBaselineStrategyRequest::GetScanCycle() const
{
    return m_scanCycle;
}

void UpdateBaselineStrategyRequest::SetScanCycle(const uint64_t& _scanCycle)
{
    m_scanCycle = _scanCycle;
    m_scanCycleHasBeenSet = true;
}

bool UpdateBaselineStrategyRequest::ScanCycleHasBeenSet() const
{
    return m_scanCycleHasBeenSet;
}

string UpdateBaselineStrategyRequest::GetScanAt() const
{
    return m_scanAt;
}

void UpdateBaselineStrategyRequest::SetScanAt(const string& _scanAt)
{
    m_scanAt = _scanAt;
    m_scanAtHasBeenSet = true;
}

bool UpdateBaselineStrategyRequest::ScanAtHasBeenSet() const
{
    return m_scanAtHasBeenSet;
}

vector<string> UpdateBaselineStrategyRequest::GetCategoryIds() const
{
    return m_categoryIds;
}

void UpdateBaselineStrategyRequest::SetCategoryIds(const vector<string>& _categoryIds)
{
    m_categoryIds = _categoryIds;
    m_categoryIdsHasBeenSet = true;
}

bool UpdateBaselineStrategyRequest::CategoryIdsHasBeenSet() const
{
    return m_categoryIdsHasBeenSet;
}

uint64_t UpdateBaselineStrategyRequest::GetIsGlobal() const
{
    return m_isGlobal;
}

void UpdateBaselineStrategyRequest::SetIsGlobal(const uint64_t& _isGlobal)
{
    m_isGlobal = _isGlobal;
    m_isGlobalHasBeenSet = true;
}

bool UpdateBaselineStrategyRequest::IsGlobalHasBeenSet() const
{
    return m_isGlobalHasBeenSet;
}

string UpdateBaselineStrategyRequest::GetMachineType() const
{
    return m_machineType;
}

void UpdateBaselineStrategyRequest::SetMachineType(const string& _machineType)
{
    m_machineType = _machineType;
    m_machineTypeHasBeenSet = true;
}

bool UpdateBaselineStrategyRequest::MachineTypeHasBeenSet() const
{
    return m_machineTypeHasBeenSet;
}

string UpdateBaselineStrategyRequest::GetRegionCode() const
{
    return m_regionCode;
}

void UpdateBaselineStrategyRequest::SetRegionCode(const string& _regionCode)
{
    m_regionCode = _regionCode;
    m_regionCodeHasBeenSet = true;
}

bool UpdateBaselineStrategyRequest::RegionCodeHasBeenSet() const
{
    return m_regionCodeHasBeenSet;
}

vector<string> UpdateBaselineStrategyRequest::GetQuuids() const
{
    return m_quuids;
}

void UpdateBaselineStrategyRequest::SetQuuids(const vector<string>& _quuids)
{
    m_quuids = _quuids;
    m_quuidsHasBeenSet = true;
}

bool UpdateBaselineStrategyRequest::QuuidsHasBeenSet() const
{
    return m_quuidsHasBeenSet;
}


