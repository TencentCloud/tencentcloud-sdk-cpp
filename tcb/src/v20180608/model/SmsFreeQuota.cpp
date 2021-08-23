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

#include <tencentcloud/tcb/v20180608/model/SmsFreeQuota.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

SmsFreeQuota::SmsFreeQuota() :
    m_freeQuotaHasBeenSet(false),
    m_totalUsedQuotaHasBeenSet(false),
    m_cycleStartHasBeenSet(false),
    m_cycleEndHasBeenSet(false),
    m_todayUsedQuotaHasBeenSet(false)
{
}

CoreInternalOutcome SmsFreeQuota::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FreeQuota") && !value["FreeQuota"].IsNull())
    {
        if (!value["FreeQuota"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SmsFreeQuota.FreeQuota` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_freeQuota = value["FreeQuota"].GetUint64();
        m_freeQuotaHasBeenSet = true;
    }

    if (value.HasMember("TotalUsedQuota") && !value["TotalUsedQuota"].IsNull())
    {
        if (!value["TotalUsedQuota"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SmsFreeQuota.TotalUsedQuota` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalUsedQuota = value["TotalUsedQuota"].GetUint64();
        m_totalUsedQuotaHasBeenSet = true;
    }

    if (value.HasMember("CycleStart") && !value["CycleStart"].IsNull())
    {
        if (!value["CycleStart"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmsFreeQuota.CycleStart` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycleStart = string(value["CycleStart"].GetString());
        m_cycleStartHasBeenSet = true;
    }

    if (value.HasMember("CycleEnd") && !value["CycleEnd"].IsNull())
    {
        if (!value["CycleEnd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmsFreeQuota.CycleEnd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycleEnd = string(value["CycleEnd"].GetString());
        m_cycleEndHasBeenSet = true;
    }

    if (value.HasMember("TodayUsedQuota") && !value["TodayUsedQuota"].IsNull())
    {
        if (!value["TodayUsedQuota"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SmsFreeQuota.TodayUsedQuota` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_todayUsedQuota = value["TodayUsedQuota"].GetUint64();
        m_todayUsedQuotaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SmsFreeQuota::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_freeQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FreeQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_freeQuota, allocator);
    }

    if (m_totalUsedQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalUsedQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalUsedQuota, allocator);
    }

    if (m_cycleStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleStart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cycleStart.c_str(), allocator).Move(), allocator);
    }

    if (m_cycleEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleEnd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cycleEnd.c_str(), allocator).Move(), allocator);
    }

    if (m_todayUsedQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TodayUsedQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_todayUsedQuota, allocator);
    }

}


uint64_t SmsFreeQuota::GetFreeQuota() const
{
    return m_freeQuota;
}

void SmsFreeQuota::SetFreeQuota(const uint64_t& _freeQuota)
{
    m_freeQuota = _freeQuota;
    m_freeQuotaHasBeenSet = true;
}

bool SmsFreeQuota::FreeQuotaHasBeenSet() const
{
    return m_freeQuotaHasBeenSet;
}

uint64_t SmsFreeQuota::GetTotalUsedQuota() const
{
    return m_totalUsedQuota;
}

void SmsFreeQuota::SetTotalUsedQuota(const uint64_t& _totalUsedQuota)
{
    m_totalUsedQuota = _totalUsedQuota;
    m_totalUsedQuotaHasBeenSet = true;
}

bool SmsFreeQuota::TotalUsedQuotaHasBeenSet() const
{
    return m_totalUsedQuotaHasBeenSet;
}

string SmsFreeQuota::GetCycleStart() const
{
    return m_cycleStart;
}

void SmsFreeQuota::SetCycleStart(const string& _cycleStart)
{
    m_cycleStart = _cycleStart;
    m_cycleStartHasBeenSet = true;
}

bool SmsFreeQuota::CycleStartHasBeenSet() const
{
    return m_cycleStartHasBeenSet;
}

string SmsFreeQuota::GetCycleEnd() const
{
    return m_cycleEnd;
}

void SmsFreeQuota::SetCycleEnd(const string& _cycleEnd)
{
    m_cycleEnd = _cycleEnd;
    m_cycleEndHasBeenSet = true;
}

bool SmsFreeQuota::CycleEndHasBeenSet() const
{
    return m_cycleEndHasBeenSet;
}

uint64_t SmsFreeQuota::GetTodayUsedQuota() const
{
    return m_todayUsedQuota;
}

void SmsFreeQuota::SetTodayUsedQuota(const uint64_t& _todayUsedQuota)
{
    m_todayUsedQuota = _todayUsedQuota;
    m_todayUsedQuotaHasBeenSet = true;
}

bool SmsFreeQuota::TodayUsedQuotaHasBeenSet() const
{
    return m_todayUsedQuotaHasBeenSet;
}

