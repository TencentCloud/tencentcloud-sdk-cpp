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

#include <tencentcloud/csip/v20221121/model/TrafficSandboxDLPFileSizeRange.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

TrafficSandboxDLPFileSizeRange::TrafficSandboxDLPFileSizeRange() :
    m_minHasBeenSet(false),
    m_maxHasBeenSet(false)
{
}

CoreInternalOutcome TrafficSandboxDLPFileSizeRange::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Min") && !value["Min"].IsNull())
    {
        if (!value["Min"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxDLPFileSizeRange.Min` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_min = value["Min"].GetUint64();
        m_minHasBeenSet = true;
    }

    if (value.HasMember("Max") && !value["Max"].IsNull())
    {
        if (!value["Max"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxDLPFileSizeRange.Max` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_max = value["Max"].GetUint64();
        m_maxHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrafficSandboxDLPFileSizeRange::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_minHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Min";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_min, allocator);
    }

    if (m_maxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Max";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_max, allocator);
    }

}


uint64_t TrafficSandboxDLPFileSizeRange::GetMin() const
{
    return m_min;
}

void TrafficSandboxDLPFileSizeRange::SetMin(const uint64_t& _min)
{
    m_min = _min;
    m_minHasBeenSet = true;
}

bool TrafficSandboxDLPFileSizeRange::MinHasBeenSet() const
{
    return m_minHasBeenSet;
}

uint64_t TrafficSandboxDLPFileSizeRange::GetMax() const
{
    return m_max;
}

void TrafficSandboxDLPFileSizeRange::SetMax(const uint64_t& _max)
{
    m_max = _max;
    m_maxHasBeenSet = true;
}

bool TrafficSandboxDLPFileSizeRange::MaxHasBeenSet() const
{
    return m_maxHasBeenSet;
}

