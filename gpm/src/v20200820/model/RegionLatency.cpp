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

#include <tencentcloud/gpm/v20200820/model/RegionLatency.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gpm::V20200820::Model;
using namespace std;

RegionLatency::RegionLatency() :
    m_regionHasBeenSet(false),
    m_latencyHasBeenSet(false)
{
}

CoreInternalOutcome RegionLatency::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionLatency.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Latency") && !value["Latency"].IsNull())
    {
        if (!value["Latency"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RegionLatency.Latency` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_latency = value["Latency"].GetUint64();
        m_latencyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RegionLatency::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_latencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Latency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_latency, allocator);
    }

}


string RegionLatency::GetRegion() const
{
    return m_region;
}

void RegionLatency::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool RegionLatency::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

uint64_t RegionLatency::GetLatency() const
{
    return m_latency;
}

void RegionLatency::SetLatency(const uint64_t& _latency)
{
    m_latency = _latency;
    m_latencyHasBeenSet = true;
}

bool RegionLatency::LatencyHasBeenSet() const
{
    return m_latencyHasBeenSet;
}

