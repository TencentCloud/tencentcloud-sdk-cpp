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

#include <tencentcloud/bizlive/v20190313/model/WorkerRegionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bizlive::V20190313::Model;
using namespace std;

WorkerRegionInfo::WorkerRegionInfo() :
    m_idleHasBeenSet(false),
    m_regionHasBeenSet(false)
{
}

CoreInternalOutcome WorkerRegionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Idle") && !value["Idle"].IsNull())
    {
        if (!value["Idle"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkerRegionInfo.Idle` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_idle = value["Idle"].GetUint64();
        m_idleHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkerRegionInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkerRegionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Idle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_idle, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

}


uint64_t WorkerRegionInfo::GetIdle() const
{
    return m_idle;
}

void WorkerRegionInfo::SetIdle(const uint64_t& _idle)
{
    m_idle = _idle;
    m_idleHasBeenSet = true;
}

bool WorkerRegionInfo::IdleHasBeenSet() const
{
    return m_idleHasBeenSet;
}

string WorkerRegionInfo::GetRegion() const
{
    return m_region;
}

void WorkerRegionInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool WorkerRegionInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

