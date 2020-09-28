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

#include <tencentcloud/cwp/v20180228/model/CreateBaselineStrategyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace rapidjson;
using namespace std;

CreateBaselineStrategyRequest::CreateBaselineStrategyRequest() :
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

string CreateBaselineStrategyRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_strategyNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StrategyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_strategyName.c_str(), allocator).Move(), allocator);
    }

    if (m_scanCycleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ScanCycle";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scanCycle, allocator);
    }

    if (m_scanAtHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ScanAt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_scanAt.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CategoryIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_categoryIds.begin(); itr != m_categoryIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetUint64(*itr), allocator);
        }
    }

    if (m_isGlobalHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsGlobal";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isGlobal, allocator);
    }

    if (m_machineTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MachineType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_machineType.c_str(), allocator).Move(), allocator);
    }

    if (m_regionCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RegionCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_regionCode.c_str(), allocator).Move(), allocator);
    }

    if (m_quuidsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Quuids";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_quuids.begin(); itr != m_quuids.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateBaselineStrategyRequest::GetStrategyName() const
{
    return m_strategyName;
}

void CreateBaselineStrategyRequest::SetStrategyName(const string& _strategyName)
{
    m_strategyName = _strategyName;
    m_strategyNameHasBeenSet = true;
}

bool CreateBaselineStrategyRequest::StrategyNameHasBeenSet() const
{
    return m_strategyNameHasBeenSet;
}

uint64_t CreateBaselineStrategyRequest::GetScanCycle() const
{
    return m_scanCycle;
}

void CreateBaselineStrategyRequest::SetScanCycle(const uint64_t& _scanCycle)
{
    m_scanCycle = _scanCycle;
    m_scanCycleHasBeenSet = true;
}

bool CreateBaselineStrategyRequest::ScanCycleHasBeenSet() const
{
    return m_scanCycleHasBeenSet;
}

string CreateBaselineStrategyRequest::GetScanAt() const
{
    return m_scanAt;
}

void CreateBaselineStrategyRequest::SetScanAt(const string& _scanAt)
{
    m_scanAt = _scanAt;
    m_scanAtHasBeenSet = true;
}

bool CreateBaselineStrategyRequest::ScanAtHasBeenSet() const
{
    return m_scanAtHasBeenSet;
}

vector<uint64_t> CreateBaselineStrategyRequest::GetCategoryIds() const
{
    return m_categoryIds;
}

void CreateBaselineStrategyRequest::SetCategoryIds(const vector<uint64_t>& _categoryIds)
{
    m_categoryIds = _categoryIds;
    m_categoryIdsHasBeenSet = true;
}

bool CreateBaselineStrategyRequest::CategoryIdsHasBeenSet() const
{
    return m_categoryIdsHasBeenSet;
}

uint64_t CreateBaselineStrategyRequest::GetIsGlobal() const
{
    return m_isGlobal;
}

void CreateBaselineStrategyRequest::SetIsGlobal(const uint64_t& _isGlobal)
{
    m_isGlobal = _isGlobal;
    m_isGlobalHasBeenSet = true;
}

bool CreateBaselineStrategyRequest::IsGlobalHasBeenSet() const
{
    return m_isGlobalHasBeenSet;
}

string CreateBaselineStrategyRequest::GetMachineType() const
{
    return m_machineType;
}

void CreateBaselineStrategyRequest::SetMachineType(const string& _machineType)
{
    m_machineType = _machineType;
    m_machineTypeHasBeenSet = true;
}

bool CreateBaselineStrategyRequest::MachineTypeHasBeenSet() const
{
    return m_machineTypeHasBeenSet;
}

string CreateBaselineStrategyRequest::GetRegionCode() const
{
    return m_regionCode;
}

void CreateBaselineStrategyRequest::SetRegionCode(const string& _regionCode)
{
    m_regionCode = _regionCode;
    m_regionCodeHasBeenSet = true;
}

bool CreateBaselineStrategyRequest::RegionCodeHasBeenSet() const
{
    return m_regionCodeHasBeenSet;
}

vector<string> CreateBaselineStrategyRequest::GetQuuids() const
{
    return m_quuids;
}

void CreateBaselineStrategyRequest::SetQuuids(const vector<string>& _quuids)
{
    m_quuids = _quuids;
    m_quuidsHasBeenSet = true;
}

bool CreateBaselineStrategyRequest::QuuidsHasBeenSet() const
{
    return m_quuidsHasBeenSet;
}


