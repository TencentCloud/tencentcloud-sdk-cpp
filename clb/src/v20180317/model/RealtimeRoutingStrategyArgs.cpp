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

#include <tencentcloud/clb/v20180317/model/RealtimeRoutingStrategyArgs.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

RealtimeRoutingStrategyArgs::RealtimeRoutingStrategyArgs() :
    m_leastBusyBufferHasBeenSet(false),
    m_lowestCostBufferHasBeenSet(false)
{
}

CoreInternalOutcome RealtimeRoutingStrategyArgs::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LeastBusyBuffer") && !value["LeastBusyBuffer"].IsNull())
    {
        if (!value["LeastBusyBuffer"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RealtimeRoutingStrategyArgs.LeastBusyBuffer` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_leastBusyBuffer = value["LeastBusyBuffer"].GetDouble();
        m_leastBusyBufferHasBeenSet = true;
    }

    if (value.HasMember("LowestCostBuffer") && !value["LowestCostBuffer"].IsNull())
    {
        if (!value["LowestCostBuffer"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RealtimeRoutingStrategyArgs.LowestCostBuffer` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_lowestCostBuffer = value["LowestCostBuffer"].GetDouble();
        m_lowestCostBufferHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RealtimeRoutingStrategyArgs::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_leastBusyBufferHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeastBusyBuffer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_leastBusyBuffer, allocator);
    }

    if (m_lowestCostBufferHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LowestCostBuffer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lowestCostBuffer, allocator);
    }

}


double RealtimeRoutingStrategyArgs::GetLeastBusyBuffer() const
{
    return m_leastBusyBuffer;
}

void RealtimeRoutingStrategyArgs::SetLeastBusyBuffer(const double& _leastBusyBuffer)
{
    m_leastBusyBuffer = _leastBusyBuffer;
    m_leastBusyBufferHasBeenSet = true;
}

bool RealtimeRoutingStrategyArgs::LeastBusyBufferHasBeenSet() const
{
    return m_leastBusyBufferHasBeenSet;
}

double RealtimeRoutingStrategyArgs::GetLowestCostBuffer() const
{
    return m_lowestCostBuffer;
}

void RealtimeRoutingStrategyArgs::SetLowestCostBuffer(const double& _lowestCostBuffer)
{
    m_lowestCostBuffer = _lowestCostBuffer;
    m_lowestCostBufferHasBeenSet = true;
}

bool RealtimeRoutingStrategyArgs::LowestCostBufferHasBeenSet() const
{
    return m_lowestCostBufferHasBeenSet;
}

