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

#include <tencentcloud/es/v20180416/model/DiskSizeRange.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

DiskSizeRange::DiskSizeRange() :
    m_minHasBeenSet(false),
    m_smlHasBeenSet(false),
    m_medHasBeenSet(false),
    m_maxHasBeenSet(false),
    m_diskCountMinHasBeenSet(false),
    m_diskCountMaxHasBeenSet(false)
{
}

CoreInternalOutcome DiskSizeRange::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Min") && !value["Min"].IsNull())
    {
        if (!value["Min"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DiskSizeRange.Min` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_min = value["Min"].GetUint64();
        m_minHasBeenSet = true;
    }

    if (value.HasMember("Sml") && !value["Sml"].IsNull())
    {
        if (!value["Sml"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DiskSizeRange.Sml` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sml = value["Sml"].GetUint64();
        m_smlHasBeenSet = true;
    }

    if (value.HasMember("Med") && !value["Med"].IsNull())
    {
        if (!value["Med"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DiskSizeRange.Med` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_med = value["Med"].GetUint64();
        m_medHasBeenSet = true;
    }

    if (value.HasMember("Max") && !value["Max"].IsNull())
    {
        if (!value["Max"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DiskSizeRange.Max` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_max = value["Max"].GetUint64();
        m_maxHasBeenSet = true;
    }

    if (value.HasMember("DiskCountMin") && !value["DiskCountMin"].IsNull())
    {
        if (!value["DiskCountMin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DiskSizeRange.DiskCountMin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_diskCountMin = value["DiskCountMin"].GetUint64();
        m_diskCountMinHasBeenSet = true;
    }

    if (value.HasMember("DiskCountMax") && !value["DiskCountMax"].IsNull())
    {
        if (!value["DiskCountMax"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DiskSizeRange.DiskCountMax` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_diskCountMax = value["DiskCountMax"].GetUint64();
        m_diskCountMaxHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DiskSizeRange::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_minHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Min";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_min, allocator);
    }

    if (m_smlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sml";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sml, allocator);
    }

    if (m_medHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Med";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_med, allocator);
    }

    if (m_maxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Max";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_max, allocator);
    }

    if (m_diskCountMinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskCountMin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskCountMin, allocator);
    }

    if (m_diskCountMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskCountMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskCountMax, allocator);
    }

}


uint64_t DiskSizeRange::GetMin() const
{
    return m_min;
}

void DiskSizeRange::SetMin(const uint64_t& _min)
{
    m_min = _min;
    m_minHasBeenSet = true;
}

bool DiskSizeRange::MinHasBeenSet() const
{
    return m_minHasBeenSet;
}

uint64_t DiskSizeRange::GetSml() const
{
    return m_sml;
}

void DiskSizeRange::SetSml(const uint64_t& _sml)
{
    m_sml = _sml;
    m_smlHasBeenSet = true;
}

bool DiskSizeRange::SmlHasBeenSet() const
{
    return m_smlHasBeenSet;
}

uint64_t DiskSizeRange::GetMed() const
{
    return m_med;
}

void DiskSizeRange::SetMed(const uint64_t& _med)
{
    m_med = _med;
    m_medHasBeenSet = true;
}

bool DiskSizeRange::MedHasBeenSet() const
{
    return m_medHasBeenSet;
}

uint64_t DiskSizeRange::GetMax() const
{
    return m_max;
}

void DiskSizeRange::SetMax(const uint64_t& _max)
{
    m_max = _max;
    m_maxHasBeenSet = true;
}

bool DiskSizeRange::MaxHasBeenSet() const
{
    return m_maxHasBeenSet;
}

uint64_t DiskSizeRange::GetDiskCountMin() const
{
    return m_diskCountMin;
}

void DiskSizeRange::SetDiskCountMin(const uint64_t& _diskCountMin)
{
    m_diskCountMin = _diskCountMin;
    m_diskCountMinHasBeenSet = true;
}

bool DiskSizeRange::DiskCountMinHasBeenSet() const
{
    return m_diskCountMinHasBeenSet;
}

uint64_t DiskSizeRange::GetDiskCountMax() const
{
    return m_diskCountMax;
}

void DiskSizeRange::SetDiskCountMax(const uint64_t& _diskCountMax)
{
    m_diskCountMax = _diskCountMax;
    m_diskCountMaxHasBeenSet = true;
}

bool DiskSizeRange::DiskCountMaxHasBeenSet() const
{
    return m_diskCountMaxHasBeenSet;
}

