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

#include <tencentcloud/es/v20180416/model/DiskCountRange.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

DiskCountRange::DiskCountRange() :
    m_minHasBeenSet(false),
    m_maxHasBeenSet(false)
{
}

CoreInternalOutcome DiskCountRange::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Min") && !value["Min"].IsNull())
    {
        if (!value["Min"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DiskCountRange.Min` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_min = value["Min"].GetUint64();
        m_minHasBeenSet = true;
    }

    if (value.HasMember("Max") && !value["Max"].IsNull())
    {
        if (!value["Max"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DiskCountRange.Max` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_max = value["Max"].GetUint64();
        m_maxHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DiskCountRange::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


uint64_t DiskCountRange::GetMin() const
{
    return m_min;
}

void DiskCountRange::SetMin(const uint64_t& _min)
{
    m_min = _min;
    m_minHasBeenSet = true;
}

bool DiskCountRange::MinHasBeenSet() const
{
    return m_minHasBeenSet;
}

uint64_t DiskCountRange::GetMax() const
{
    return m_max;
}

void DiskCountRange::SetMax(const uint64_t& _max)
{
    m_max = _max;
    m_maxHasBeenSet = true;
}

bool DiskCountRange::MaxHasBeenSet() const
{
    return m_maxHasBeenSet;
}

