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

#include <tencentcloud/tokenhub/v20260322/model/TokenPlanPackageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tokenhub::V20260322::Model;
using namespace std;

TokenPlanPackageInfo::TokenPlanPackageInfo() :
    m_totalQuotaHasBeenSet(false),
    m_totalUsedHasBeenSet(false),
    m_totalCyclesHasBeenSet(false),
    m_cycleUnitHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_exclusiveAllocatedHasBeenSet(false),
    m_exclusiveUsedHasBeenSet(false),
    m_sharedPoolHasBeenSet(false),
    m_sharedUsedHasBeenSet(false),
    m_cycleQuotaHasBeenSet(false),
    m_currentCycleHasBeenSet(false),
    m_remainCyclesHasBeenSet(false)
{
}

CoreInternalOutcome TokenPlanPackageInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalQuota") && !value["TotalQuota"].IsNull())
    {
        if (!value["TotalQuota"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenPlanPackageInfo.TotalQuota` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalQuota = string(value["TotalQuota"].GetString());
        m_totalQuotaHasBeenSet = true;
    }

    if (value.HasMember("TotalUsed") && !value["TotalUsed"].IsNull())
    {
        if (!value["TotalUsed"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenPlanPackageInfo.TotalUsed` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalUsed = string(value["TotalUsed"].GetString());
        m_totalUsedHasBeenSet = true;
    }

    if (value.HasMember("TotalCycles") && !value["TotalCycles"].IsNull())
    {
        if (!value["TotalCycles"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TokenPlanPackageInfo.TotalCycles` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCycles = value["TotalCycles"].GetInt64();
        m_totalCyclesHasBeenSet = true;
    }

    if (value.HasMember("CycleUnit") && !value["CycleUnit"].IsNull())
    {
        if (!value["CycleUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenPlanPackageInfo.CycleUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycleUnit = string(value["CycleUnit"].GetString());
        m_cycleUnitHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenPlanPackageInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenPlanPackageInfo.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("ExclusiveAllocated") && !value["ExclusiveAllocated"].IsNull())
    {
        if (!value["ExclusiveAllocated"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenPlanPackageInfo.ExclusiveAllocated` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exclusiveAllocated = string(value["ExclusiveAllocated"].GetString());
        m_exclusiveAllocatedHasBeenSet = true;
    }

    if (value.HasMember("ExclusiveUsed") && !value["ExclusiveUsed"].IsNull())
    {
        if (!value["ExclusiveUsed"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenPlanPackageInfo.ExclusiveUsed` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exclusiveUsed = string(value["ExclusiveUsed"].GetString());
        m_exclusiveUsedHasBeenSet = true;
    }

    if (value.HasMember("SharedPool") && !value["SharedPool"].IsNull())
    {
        if (!value["SharedPool"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenPlanPackageInfo.SharedPool` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sharedPool = string(value["SharedPool"].GetString());
        m_sharedPoolHasBeenSet = true;
    }

    if (value.HasMember("SharedUsed") && !value["SharedUsed"].IsNull())
    {
        if (!value["SharedUsed"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenPlanPackageInfo.SharedUsed` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sharedUsed = string(value["SharedUsed"].GetString());
        m_sharedUsedHasBeenSet = true;
    }

    if (value.HasMember("CycleQuota") && !value["CycleQuota"].IsNull())
    {
        if (!value["CycleQuota"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenPlanPackageInfo.CycleQuota` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycleQuota = string(value["CycleQuota"].GetString());
        m_cycleQuotaHasBeenSet = true;
    }

    if (value.HasMember("CurrentCycle") && !value["CurrentCycle"].IsNull())
    {
        if (!value["CurrentCycle"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TokenPlanPackageInfo.CurrentCycle` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentCycle = value["CurrentCycle"].GetInt64();
        m_currentCycleHasBeenSet = true;
    }

    if (value.HasMember("RemainCycles") && !value["RemainCycles"].IsNull())
    {
        if (!value["RemainCycles"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TokenPlanPackageInfo.RemainCycles` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_remainCycles = value["RemainCycles"].GetInt64();
        m_remainCyclesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TokenPlanPackageInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalQuota.c_str(), allocator).Move(), allocator);
    }

    if (m_totalUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalUsed.c_str(), allocator).Move(), allocator);
    }

    if (m_totalCyclesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCycles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCycles, allocator);
    }

    if (m_cycleUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cycleUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_exclusiveAllocatedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExclusiveAllocated";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exclusiveAllocated.c_str(), allocator).Move(), allocator);
    }

    if (m_exclusiveUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExclusiveUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exclusiveUsed.c_str(), allocator).Move(), allocator);
    }

    if (m_sharedPoolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SharedPool";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sharedPool.c_str(), allocator).Move(), allocator);
    }

    if (m_sharedUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SharedUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sharedUsed.c_str(), allocator).Move(), allocator);
    }

    if (m_cycleQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cycleQuota.c_str(), allocator).Move(), allocator);
    }

    if (m_currentCycleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentCycle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentCycle, allocator);
    }

    if (m_remainCyclesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainCycles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainCycles, allocator);
    }

}


string TokenPlanPackageInfo::GetTotalQuota() const
{
    return m_totalQuota;
}

void TokenPlanPackageInfo::SetTotalQuota(const string& _totalQuota)
{
    m_totalQuota = _totalQuota;
    m_totalQuotaHasBeenSet = true;
}

bool TokenPlanPackageInfo::TotalQuotaHasBeenSet() const
{
    return m_totalQuotaHasBeenSet;
}

string TokenPlanPackageInfo::GetTotalUsed() const
{
    return m_totalUsed;
}

void TokenPlanPackageInfo::SetTotalUsed(const string& _totalUsed)
{
    m_totalUsed = _totalUsed;
    m_totalUsedHasBeenSet = true;
}

bool TokenPlanPackageInfo::TotalUsedHasBeenSet() const
{
    return m_totalUsedHasBeenSet;
}

int64_t TokenPlanPackageInfo::GetTotalCycles() const
{
    return m_totalCycles;
}

void TokenPlanPackageInfo::SetTotalCycles(const int64_t& _totalCycles)
{
    m_totalCycles = _totalCycles;
    m_totalCyclesHasBeenSet = true;
}

bool TokenPlanPackageInfo::TotalCyclesHasBeenSet() const
{
    return m_totalCyclesHasBeenSet;
}

string TokenPlanPackageInfo::GetCycleUnit() const
{
    return m_cycleUnit;
}

void TokenPlanPackageInfo::SetCycleUnit(const string& _cycleUnit)
{
    m_cycleUnit = _cycleUnit;
    m_cycleUnitHasBeenSet = true;
}

bool TokenPlanPackageInfo::CycleUnitHasBeenSet() const
{
    return m_cycleUnitHasBeenSet;
}

string TokenPlanPackageInfo::GetStartTime() const
{
    return m_startTime;
}

void TokenPlanPackageInfo::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool TokenPlanPackageInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string TokenPlanPackageInfo::GetExpireTime() const
{
    return m_expireTime;
}

void TokenPlanPackageInfo::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool TokenPlanPackageInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string TokenPlanPackageInfo::GetExclusiveAllocated() const
{
    return m_exclusiveAllocated;
}

void TokenPlanPackageInfo::SetExclusiveAllocated(const string& _exclusiveAllocated)
{
    m_exclusiveAllocated = _exclusiveAllocated;
    m_exclusiveAllocatedHasBeenSet = true;
}

bool TokenPlanPackageInfo::ExclusiveAllocatedHasBeenSet() const
{
    return m_exclusiveAllocatedHasBeenSet;
}

string TokenPlanPackageInfo::GetExclusiveUsed() const
{
    return m_exclusiveUsed;
}

void TokenPlanPackageInfo::SetExclusiveUsed(const string& _exclusiveUsed)
{
    m_exclusiveUsed = _exclusiveUsed;
    m_exclusiveUsedHasBeenSet = true;
}

bool TokenPlanPackageInfo::ExclusiveUsedHasBeenSet() const
{
    return m_exclusiveUsedHasBeenSet;
}

string TokenPlanPackageInfo::GetSharedPool() const
{
    return m_sharedPool;
}

void TokenPlanPackageInfo::SetSharedPool(const string& _sharedPool)
{
    m_sharedPool = _sharedPool;
    m_sharedPoolHasBeenSet = true;
}

bool TokenPlanPackageInfo::SharedPoolHasBeenSet() const
{
    return m_sharedPoolHasBeenSet;
}

string TokenPlanPackageInfo::GetSharedUsed() const
{
    return m_sharedUsed;
}

void TokenPlanPackageInfo::SetSharedUsed(const string& _sharedUsed)
{
    m_sharedUsed = _sharedUsed;
    m_sharedUsedHasBeenSet = true;
}

bool TokenPlanPackageInfo::SharedUsedHasBeenSet() const
{
    return m_sharedUsedHasBeenSet;
}

string TokenPlanPackageInfo::GetCycleQuota() const
{
    return m_cycleQuota;
}

void TokenPlanPackageInfo::SetCycleQuota(const string& _cycleQuota)
{
    m_cycleQuota = _cycleQuota;
    m_cycleQuotaHasBeenSet = true;
}

bool TokenPlanPackageInfo::CycleQuotaHasBeenSet() const
{
    return m_cycleQuotaHasBeenSet;
}

int64_t TokenPlanPackageInfo::GetCurrentCycle() const
{
    return m_currentCycle;
}

void TokenPlanPackageInfo::SetCurrentCycle(const int64_t& _currentCycle)
{
    m_currentCycle = _currentCycle;
    m_currentCycleHasBeenSet = true;
}

bool TokenPlanPackageInfo::CurrentCycleHasBeenSet() const
{
    return m_currentCycleHasBeenSet;
}

int64_t TokenPlanPackageInfo::GetRemainCycles() const
{
    return m_remainCycles;
}

void TokenPlanPackageInfo::SetRemainCycles(const int64_t& _remainCycles)
{
    m_remainCycles = _remainCycles;
    m_remainCyclesHasBeenSet = true;
}

bool TokenPlanPackageInfo::RemainCyclesHasBeenSet() const
{
    return m_remainCyclesHasBeenSet;
}

