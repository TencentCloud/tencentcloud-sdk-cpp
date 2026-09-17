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

#include <tencentcloud/dlc/v20210125/model/QueueResourceQuota.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

QueueResourceQuota::QueueResourceQuota() :
    m_resourceTypeHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_usedHasBeenSet(false),
    m_availableHasBeenSet(false)
{
}

CoreInternalOutcome QueueResourceQuota::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueueResourceQuota.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueueResourceQuota.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `QueueResourceQuota.Total` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetDouble();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("Used") && !value["Used"].IsNull())
    {
        if (!value["Used"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `QueueResourceQuota.Used` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_used = value["Used"].GetDouble();
        m_usedHasBeenSet = true;
    }

    if (value.HasMember("Available") && !value["Available"].IsNull())
    {
        if (!value["Available"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `QueueResourceQuota.Available` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_available = value["Available"].GetDouble();
        m_availableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueueResourceQuota::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unit.c_str(), allocator).Move(), allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_usedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Used";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_used, allocator);
    }

    if (m_availableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Available";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_available, allocator);
    }

}


string QueueResourceQuota::GetResourceType() const
{
    return m_resourceType;
}

void QueueResourceQuota::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool QueueResourceQuota::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string QueueResourceQuota::GetUnit() const
{
    return m_unit;
}

void QueueResourceQuota::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool QueueResourceQuota::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

double QueueResourceQuota::GetTotal() const
{
    return m_total;
}

void QueueResourceQuota::SetTotal(const double& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool QueueResourceQuota::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

double QueueResourceQuota::GetUsed() const
{
    return m_used;
}

void QueueResourceQuota::SetUsed(const double& _used)
{
    m_used = _used;
    m_usedHasBeenSet = true;
}

bool QueueResourceQuota::UsedHasBeenSet() const
{
    return m_usedHasBeenSet;
}

double QueueResourceQuota::GetAvailable() const
{
    return m_available;
}

void QueueResourceQuota::SetAvailable(const double& _available)
{
    m_available = _available;
    m_availableHasBeenSet = true;
}

bool QueueResourceQuota::AvailableHasBeenSet() const
{
    return m_availableHasBeenSet;
}

