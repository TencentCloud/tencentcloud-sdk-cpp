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

#include <tencentcloud/clb/v20180317/model/RoutingStrategyArgs.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

RoutingStrategyArgs::RoutingStrategyArgs() :
    m_leastBusyBufferHasBeenSet(false),
    m_usageBasedBufferHasBeenSet(false),
    m_lowestLatencyBufferHasBeenSet(false),
    m_lowestCostBufferHasBeenSet(false)
{
}

CoreInternalOutcome RoutingStrategyArgs::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LeastBusyBuffer") && !value["LeastBusyBuffer"].IsNull())
    {
        if (!value["LeastBusyBuffer"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RoutingStrategyArgs.LeastBusyBuffer` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_leastBusyBuffer = value["LeastBusyBuffer"].GetDouble();
        m_leastBusyBufferHasBeenSet = true;
    }

    if (value.HasMember("UsageBasedBuffer") && !value["UsageBasedBuffer"].IsNull())
    {
        if (!value["UsageBasedBuffer"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RoutingStrategyArgs.UsageBasedBuffer` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_usageBasedBuffer = value["UsageBasedBuffer"].GetDouble();
        m_usageBasedBufferHasBeenSet = true;
    }

    if (value.HasMember("LowestLatencyBuffer") && !value["LowestLatencyBuffer"].IsNull())
    {
        if (!value["LowestLatencyBuffer"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RoutingStrategyArgs.LowestLatencyBuffer` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_lowestLatencyBuffer = value["LowestLatencyBuffer"].GetDouble();
        m_lowestLatencyBufferHasBeenSet = true;
    }

    if (value.HasMember("LowestCostBuffer") && !value["LowestCostBuffer"].IsNull())
    {
        if (!value["LowestCostBuffer"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RoutingStrategyArgs.LowestCostBuffer` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_lowestCostBuffer = value["LowestCostBuffer"].GetDouble();
        m_lowestCostBufferHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RoutingStrategyArgs::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_leastBusyBufferHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeastBusyBuffer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_leastBusyBuffer, allocator);
    }

    if (m_usageBasedBufferHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsageBasedBuffer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usageBasedBuffer, allocator);
    }

    if (m_lowestLatencyBufferHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LowestLatencyBuffer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lowestLatencyBuffer, allocator);
    }

    if (m_lowestCostBufferHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LowestCostBuffer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lowestCostBuffer, allocator);
    }

}


double RoutingStrategyArgs::GetLeastBusyBuffer() const
{
    return m_leastBusyBuffer;
}

void RoutingStrategyArgs::SetLeastBusyBuffer(const double& _leastBusyBuffer)
{
    m_leastBusyBuffer = _leastBusyBuffer;
    m_leastBusyBufferHasBeenSet = true;
}

bool RoutingStrategyArgs::LeastBusyBufferHasBeenSet() const
{
    return m_leastBusyBufferHasBeenSet;
}

double RoutingStrategyArgs::GetUsageBasedBuffer() const
{
    return m_usageBasedBuffer;
}

void RoutingStrategyArgs::SetUsageBasedBuffer(const double& _usageBasedBuffer)
{
    m_usageBasedBuffer = _usageBasedBuffer;
    m_usageBasedBufferHasBeenSet = true;
}

bool RoutingStrategyArgs::UsageBasedBufferHasBeenSet() const
{
    return m_usageBasedBufferHasBeenSet;
}

double RoutingStrategyArgs::GetLowestLatencyBuffer() const
{
    return m_lowestLatencyBuffer;
}

void RoutingStrategyArgs::SetLowestLatencyBuffer(const double& _lowestLatencyBuffer)
{
    m_lowestLatencyBuffer = _lowestLatencyBuffer;
    m_lowestLatencyBufferHasBeenSet = true;
}

bool RoutingStrategyArgs::LowestLatencyBufferHasBeenSet() const
{
    return m_lowestLatencyBufferHasBeenSet;
}

double RoutingStrategyArgs::GetLowestCostBuffer() const
{
    return m_lowestCostBuffer;
}

void RoutingStrategyArgs::SetLowestCostBuffer(const double& _lowestCostBuffer)
{
    m_lowestCostBuffer = _lowestCostBuffer;
    m_lowestCostBufferHasBeenSet = true;
}

bool RoutingStrategyArgs::LowestCostBufferHasBeenSet() const
{
    return m_lowestCostBufferHasBeenSet;
}

