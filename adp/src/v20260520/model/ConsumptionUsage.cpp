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

#include <tencentcloud/adp/v20260520/model/ConsumptionUsage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ConsumptionUsage::ConsumptionUsage() :
    m_consumptionPUHasBeenSet(false),
    m_usageHasBeenSet(false),
    m_usageUnitHasBeenSet(false)
{
}

CoreInternalOutcome ConsumptionUsage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConsumptionPU") && !value["ConsumptionPU"].IsNull())
    {
        if (!value["ConsumptionPU"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionUsage.ConsumptionPU` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_consumptionPU = value["ConsumptionPU"].GetDouble();
        m_consumptionPUHasBeenSet = true;
    }

    if (value.HasMember("Usage") && !value["Usage"].IsNull())
    {
        if (!value["Usage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionUsage.Usage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_usage = value["Usage"].GetDouble();
        m_usageHasBeenSet = true;
    }

    if (value.HasMember("UsageUnit") && !value["UsageUnit"].IsNull())
    {
        if (!value["UsageUnit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionUsage.UsageUnit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usageUnit = value["UsageUnit"].GetInt64();
        m_usageUnitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConsumptionUsage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_consumptionPUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumptionPU";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consumptionPU, allocator);
    }

    if (m_usageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Usage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usage, allocator);
    }

    if (m_usageUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsageUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usageUnit, allocator);
    }

}


double ConsumptionUsage::GetConsumptionPU() const
{
    return m_consumptionPU;
}

void ConsumptionUsage::SetConsumptionPU(const double& _consumptionPU)
{
    m_consumptionPU = _consumptionPU;
    m_consumptionPUHasBeenSet = true;
}

bool ConsumptionUsage::ConsumptionPUHasBeenSet() const
{
    return m_consumptionPUHasBeenSet;
}

double ConsumptionUsage::GetUsage() const
{
    return m_usage;
}

void ConsumptionUsage::SetUsage(const double& _usage)
{
    m_usage = _usage;
    m_usageHasBeenSet = true;
}

bool ConsumptionUsage::UsageHasBeenSet() const
{
    return m_usageHasBeenSet;
}

int64_t ConsumptionUsage::GetUsageUnit() const
{
    return m_usageUnit;
}

void ConsumptionUsage::SetUsageUnit(const int64_t& _usageUnit)
{
    m_usageUnit = _usageUnit;
    m_usageUnitHasBeenSet = true;
}

bool ConsumptionUsage::UsageUnitHasBeenSet() const
{
    return m_usageUnitHasBeenSet;
}

