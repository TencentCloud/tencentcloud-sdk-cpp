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

#include <tencentcloud/adp/v20260520/model/AddOnPackageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AddOnPackageInfo::AddOnPackageInfo() :
    m_addOnTotalHasBeenSet(false),
    m_addOnUsageHasBeenSet(false),
    m_exclusiveConcurrencyHasBeenSet(false),
    m_resourceStatusHasBeenSet(false),
    m_concurrencyStatusHasBeenSet(false),
    m_exclusiveTpmHasBeenSet(false),
    m_exclusiveTpmStatusHasBeenSet(false),
    m_exclusiveComputeUnitHasBeenSet(false),
    m_exclusiveComputeUnitStatusHasBeenSet(false)
{
}

CoreInternalOutcome AddOnPackageInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AddOnTotal") && !value["AddOnTotal"].IsNull())
    {
        if (!value["AddOnTotal"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AddOnPackageInfo.AddOnTotal` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_addOnTotal = value["AddOnTotal"].GetDouble();
        m_addOnTotalHasBeenSet = true;
    }

    if (value.HasMember("AddOnUsage") && !value["AddOnUsage"].IsNull())
    {
        if (!value["AddOnUsage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AddOnPackageInfo.AddOnUsage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_addOnUsage = value["AddOnUsage"].GetDouble();
        m_addOnUsageHasBeenSet = true;
    }

    if (value.HasMember("ExclusiveConcurrency") && !value["ExclusiveConcurrency"].IsNull())
    {
        if (!value["ExclusiveConcurrency"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AddOnPackageInfo.ExclusiveConcurrency` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_exclusiveConcurrency = value["ExclusiveConcurrency"].GetUint64();
        m_exclusiveConcurrencyHasBeenSet = true;
    }

    if (value.HasMember("ResourceStatus") && !value["ResourceStatus"].IsNull())
    {
        if (!value["ResourceStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AddOnPackageInfo.ResourceStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceStatus = value["ResourceStatus"].GetUint64();
        m_resourceStatusHasBeenSet = true;
    }

    if (value.HasMember("ConcurrencyStatus") && !value["ConcurrencyStatus"].IsNull())
    {
        if (!value["ConcurrencyStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AddOnPackageInfo.ConcurrencyStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_concurrencyStatus = value["ConcurrencyStatus"].GetUint64();
        m_concurrencyStatusHasBeenSet = true;
    }

    if (value.HasMember("ExclusiveTpm") && !value["ExclusiveTpm"].IsNull())
    {
        if (!value["ExclusiveTpm"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AddOnPackageInfo.ExclusiveTpm` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_exclusiveTpm = value["ExclusiveTpm"].GetUint64();
        m_exclusiveTpmHasBeenSet = true;
    }

    if (value.HasMember("ExclusiveTpmStatus") && !value["ExclusiveTpmStatus"].IsNull())
    {
        if (!value["ExclusiveTpmStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AddOnPackageInfo.ExclusiveTpmStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_exclusiveTpmStatus = value["ExclusiveTpmStatus"].GetUint64();
        m_exclusiveTpmStatusHasBeenSet = true;
    }

    if (value.HasMember("ExclusiveComputeUnit") && !value["ExclusiveComputeUnit"].IsNull())
    {
        if (!value["ExclusiveComputeUnit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AddOnPackageInfo.ExclusiveComputeUnit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_exclusiveComputeUnit = value["ExclusiveComputeUnit"].GetUint64();
        m_exclusiveComputeUnitHasBeenSet = true;
    }

    if (value.HasMember("ExclusiveComputeUnitStatus") && !value["ExclusiveComputeUnitStatus"].IsNull())
    {
        if (!value["ExclusiveComputeUnitStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AddOnPackageInfo.ExclusiveComputeUnitStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_exclusiveComputeUnitStatus = value["ExclusiveComputeUnitStatus"].GetUint64();
        m_exclusiveComputeUnitStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AddOnPackageInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_addOnTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddOnTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_addOnTotal, allocator);
    }

    if (m_addOnUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddOnUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_addOnUsage, allocator);
    }

    if (m_exclusiveConcurrencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExclusiveConcurrency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exclusiveConcurrency, allocator);
    }

    if (m_resourceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceStatus, allocator);
    }

    if (m_concurrencyStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConcurrencyStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_concurrencyStatus, allocator);
    }

    if (m_exclusiveTpmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExclusiveTpm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exclusiveTpm, allocator);
    }

    if (m_exclusiveTpmStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExclusiveTpmStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exclusiveTpmStatus, allocator);
    }

    if (m_exclusiveComputeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExclusiveComputeUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exclusiveComputeUnit, allocator);
    }

    if (m_exclusiveComputeUnitStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExclusiveComputeUnitStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exclusiveComputeUnitStatus, allocator);
    }

}


double AddOnPackageInfo::GetAddOnTotal() const
{
    return m_addOnTotal;
}

void AddOnPackageInfo::SetAddOnTotal(const double& _addOnTotal)
{
    m_addOnTotal = _addOnTotal;
    m_addOnTotalHasBeenSet = true;
}

bool AddOnPackageInfo::AddOnTotalHasBeenSet() const
{
    return m_addOnTotalHasBeenSet;
}

double AddOnPackageInfo::GetAddOnUsage() const
{
    return m_addOnUsage;
}

void AddOnPackageInfo::SetAddOnUsage(const double& _addOnUsage)
{
    m_addOnUsage = _addOnUsage;
    m_addOnUsageHasBeenSet = true;
}

bool AddOnPackageInfo::AddOnUsageHasBeenSet() const
{
    return m_addOnUsageHasBeenSet;
}

uint64_t AddOnPackageInfo::GetExclusiveConcurrency() const
{
    return m_exclusiveConcurrency;
}

void AddOnPackageInfo::SetExclusiveConcurrency(const uint64_t& _exclusiveConcurrency)
{
    m_exclusiveConcurrency = _exclusiveConcurrency;
    m_exclusiveConcurrencyHasBeenSet = true;
}

bool AddOnPackageInfo::ExclusiveConcurrencyHasBeenSet() const
{
    return m_exclusiveConcurrencyHasBeenSet;
}

uint64_t AddOnPackageInfo::GetResourceStatus() const
{
    return m_resourceStatus;
}

void AddOnPackageInfo::SetResourceStatus(const uint64_t& _resourceStatus)
{
    m_resourceStatus = _resourceStatus;
    m_resourceStatusHasBeenSet = true;
}

bool AddOnPackageInfo::ResourceStatusHasBeenSet() const
{
    return m_resourceStatusHasBeenSet;
}

uint64_t AddOnPackageInfo::GetConcurrencyStatus() const
{
    return m_concurrencyStatus;
}

void AddOnPackageInfo::SetConcurrencyStatus(const uint64_t& _concurrencyStatus)
{
    m_concurrencyStatus = _concurrencyStatus;
    m_concurrencyStatusHasBeenSet = true;
}

bool AddOnPackageInfo::ConcurrencyStatusHasBeenSet() const
{
    return m_concurrencyStatusHasBeenSet;
}

uint64_t AddOnPackageInfo::GetExclusiveTpm() const
{
    return m_exclusiveTpm;
}

void AddOnPackageInfo::SetExclusiveTpm(const uint64_t& _exclusiveTpm)
{
    m_exclusiveTpm = _exclusiveTpm;
    m_exclusiveTpmHasBeenSet = true;
}

bool AddOnPackageInfo::ExclusiveTpmHasBeenSet() const
{
    return m_exclusiveTpmHasBeenSet;
}

uint64_t AddOnPackageInfo::GetExclusiveTpmStatus() const
{
    return m_exclusiveTpmStatus;
}

void AddOnPackageInfo::SetExclusiveTpmStatus(const uint64_t& _exclusiveTpmStatus)
{
    m_exclusiveTpmStatus = _exclusiveTpmStatus;
    m_exclusiveTpmStatusHasBeenSet = true;
}

bool AddOnPackageInfo::ExclusiveTpmStatusHasBeenSet() const
{
    return m_exclusiveTpmStatusHasBeenSet;
}

uint64_t AddOnPackageInfo::GetExclusiveComputeUnit() const
{
    return m_exclusiveComputeUnit;
}

void AddOnPackageInfo::SetExclusiveComputeUnit(const uint64_t& _exclusiveComputeUnit)
{
    m_exclusiveComputeUnit = _exclusiveComputeUnit;
    m_exclusiveComputeUnitHasBeenSet = true;
}

bool AddOnPackageInfo::ExclusiveComputeUnitHasBeenSet() const
{
    return m_exclusiveComputeUnitHasBeenSet;
}

uint64_t AddOnPackageInfo::GetExclusiveComputeUnitStatus() const
{
    return m_exclusiveComputeUnitStatus;
}

void AddOnPackageInfo::SetExclusiveComputeUnitStatus(const uint64_t& _exclusiveComputeUnitStatus)
{
    m_exclusiveComputeUnitStatus = _exclusiveComputeUnitStatus;
    m_exclusiveComputeUnitStatusHasBeenSet = true;
}

bool AddOnPackageInfo::ExclusiveComputeUnitStatusHasBeenSet() const
{
    return m_exclusiveComputeUnitStatusHasBeenSet;
}

