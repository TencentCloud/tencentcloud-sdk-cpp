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

#include <tencentcloud/cvm/v20170312/model/PurchaseResourcePoolPacksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

PurchaseResourcePoolPacksRequest::PurchaseResourcePoolPacksRequest() :
    m_zoneHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceCountHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_resourcePoolPackTypeHasBeenSet(false),
    m_autoPlacementHasBeenSet(false),
    m_dedicatedResourcePoolPackNameHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_dryRunHasBeenSet(false)
{
}

string PurchaseResourcePoolPacksRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceCount, allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_resourcePoolPackTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourcePoolPackType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourcePoolPackType.c_str(), allocator).Move(), allocator);
    }

    if (m_autoPlacementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoPlacement";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoPlacement, allocator);
    }

    if (m_dedicatedResourcePoolPackNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DedicatedResourcePoolPackName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dedicatedResourcePoolPackName.c_str(), allocator).Move(), allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_renewFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_dryRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DryRun";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dryRun, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string PurchaseResourcePoolPacksRequest::GetZone() const
{
    return m_zone;
}

void PurchaseResourcePoolPacksRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool PurchaseResourcePoolPacksRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string PurchaseResourcePoolPacksRequest::GetInstanceType() const
{
    return m_instanceType;
}

void PurchaseResourcePoolPacksRequest::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool PurchaseResourcePoolPacksRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

uint64_t PurchaseResourcePoolPacksRequest::GetInstanceCount() const
{
    return m_instanceCount;
}

void PurchaseResourcePoolPacksRequest::SetInstanceCount(const uint64_t& _instanceCount)
{
    m_instanceCount = _instanceCount;
    m_instanceCountHasBeenSet = true;
}

bool PurchaseResourcePoolPacksRequest::InstanceCountHasBeenSet() const
{
    return m_instanceCountHasBeenSet;
}

uint64_t PurchaseResourcePoolPacksRequest::GetPeriod() const
{
    return m_period;
}

void PurchaseResourcePoolPacksRequest::SetPeriod(const uint64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool PurchaseResourcePoolPacksRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

string PurchaseResourcePoolPacksRequest::GetResourcePoolPackType() const
{
    return m_resourcePoolPackType;
}

void PurchaseResourcePoolPacksRequest::SetResourcePoolPackType(const string& _resourcePoolPackType)
{
    m_resourcePoolPackType = _resourcePoolPackType;
    m_resourcePoolPackTypeHasBeenSet = true;
}

bool PurchaseResourcePoolPacksRequest::ResourcePoolPackTypeHasBeenSet() const
{
    return m_resourcePoolPackTypeHasBeenSet;
}

bool PurchaseResourcePoolPacksRequest::GetAutoPlacement() const
{
    return m_autoPlacement;
}

void PurchaseResourcePoolPacksRequest::SetAutoPlacement(const bool& _autoPlacement)
{
    m_autoPlacement = _autoPlacement;
    m_autoPlacementHasBeenSet = true;
}

bool PurchaseResourcePoolPacksRequest::AutoPlacementHasBeenSet() const
{
    return m_autoPlacementHasBeenSet;
}

string PurchaseResourcePoolPacksRequest::GetDedicatedResourcePoolPackName() const
{
    return m_dedicatedResourcePoolPackName;
}

void PurchaseResourcePoolPacksRequest::SetDedicatedResourcePoolPackName(const string& _dedicatedResourcePoolPackName)
{
    m_dedicatedResourcePoolPackName = _dedicatedResourcePoolPackName;
    m_dedicatedResourcePoolPackNameHasBeenSet = true;
}

bool PurchaseResourcePoolPacksRequest::DedicatedResourcePoolPackNameHasBeenSet() const
{
    return m_dedicatedResourcePoolPackNameHasBeenSet;
}

string PurchaseResourcePoolPacksRequest::GetRenewFlag() const
{
    return m_renewFlag;
}

void PurchaseResourcePoolPacksRequest::SetRenewFlag(const string& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool PurchaseResourcePoolPacksRequest::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

bool PurchaseResourcePoolPacksRequest::GetDryRun() const
{
    return m_dryRun;
}

void PurchaseResourcePoolPacksRequest::SetDryRun(const bool& _dryRun)
{
    m_dryRun = _dryRun;
    m_dryRunHasBeenSet = true;
}

bool PurchaseResourcePoolPacksRequest::DryRunHasBeenSet() const
{
    return m_dryRunHasBeenSet;
}


