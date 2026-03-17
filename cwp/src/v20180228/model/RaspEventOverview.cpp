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

#include <tencentcloud/cwp/v20180228/model/RaspEventOverview.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

RaspEventOverview::RaspEventOverview() :
    m_defenceVulsHasBeenSet(false),
    m_preciseDefenseVulsHasBeenSet(false),
    m_unhandledRaspEventsHasBeenSet(false),
    m_unhandledMemShellScanEventsHasBeenSet(false),
    m_unhandledMemShellInjectEventsHasBeenSet(false),
    m_unHandledEventsHasBeenSet(false),
    m_raspAttackCountsHasBeenSet(false),
    m_raspDefendCountsHasBeenSet(false),
    m_memShellAttackCountsHasBeenSet(false),
    m_memShellDefendCountsHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_protectAssetOpenCountHasBeenSet(false),
    m_protectAssetCountHasBeenSet(false),
    m_ultimateAssetCountHasBeenSet(false),
    m_raspAssetCountHasBeenSet(false),
    m_notProtectAssetCountHasBeenSet(false),
    m_recentUnhandledEventsHasBeenSet(false),
    m_raspDefendCountHasBeenSet(false)
{
}

CoreInternalOutcome RaspEventOverview::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DefenceVuls") && !value["DefenceVuls"].IsNull())
    {
        if (!value["DefenceVuls"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventOverview.DefenceVuls` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_defenceVuls = value["DefenceVuls"].GetInt64();
        m_defenceVulsHasBeenSet = true;
    }

    if (value.HasMember("PreciseDefenseVuls") && !value["PreciseDefenseVuls"].IsNull())
    {
        if (!value["PreciseDefenseVuls"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventOverview.PreciseDefenseVuls` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_preciseDefenseVuls = value["PreciseDefenseVuls"].GetInt64();
        m_preciseDefenseVulsHasBeenSet = true;
    }

    if (value.HasMember("UnhandledRaspEvents") && !value["UnhandledRaspEvents"].IsNull())
    {
        if (!value["UnhandledRaspEvents"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventOverview.UnhandledRaspEvents` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_unhandledRaspEvents = value["UnhandledRaspEvents"].GetInt64();
        m_unhandledRaspEventsHasBeenSet = true;
    }

    if (value.HasMember("UnhandledMemShellScanEvents") && !value["UnhandledMemShellScanEvents"].IsNull())
    {
        if (!value["UnhandledMemShellScanEvents"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventOverview.UnhandledMemShellScanEvents` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_unhandledMemShellScanEvents = value["UnhandledMemShellScanEvents"].GetInt64();
        m_unhandledMemShellScanEventsHasBeenSet = true;
    }

    if (value.HasMember("UnhandledMemShellInjectEvents") && !value["UnhandledMemShellInjectEvents"].IsNull())
    {
        if (!value["UnhandledMemShellInjectEvents"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventOverview.UnhandledMemShellInjectEvents` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_unhandledMemShellInjectEvents = value["UnhandledMemShellInjectEvents"].GetInt64();
        m_unhandledMemShellInjectEventsHasBeenSet = true;
    }

    if (value.HasMember("UnHandledEvents") && !value["UnHandledEvents"].IsNull())
    {
        if (!value["UnHandledEvents"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RaspEventOverview.UnHandledEvents` is not array type"));

        const rapidjson::Value &tmpValue = value["UnHandledEvents"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_unHandledEvents.push_back((*itr).GetInt64());
        }
        m_unHandledEventsHasBeenSet = true;
    }

    if (value.HasMember("RaspAttackCounts") && !value["RaspAttackCounts"].IsNull())
    {
        if (!value["RaspAttackCounts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RaspEventOverview.RaspAttackCounts` is not array type"));

        const rapidjson::Value &tmpValue = value["RaspAttackCounts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_raspAttackCounts.push_back((*itr).GetInt64());
        }
        m_raspAttackCountsHasBeenSet = true;
    }

    if (value.HasMember("RaspDefendCounts") && !value["RaspDefendCounts"].IsNull())
    {
        if (!value["RaspDefendCounts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RaspEventOverview.RaspDefendCounts` is not array type"));

        const rapidjson::Value &tmpValue = value["RaspDefendCounts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_raspDefendCounts.push_back((*itr).GetInt64());
        }
        m_raspDefendCountsHasBeenSet = true;
    }

    if (value.HasMember("MemShellAttackCounts") && !value["MemShellAttackCounts"].IsNull())
    {
        if (!value["MemShellAttackCounts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RaspEventOverview.MemShellAttackCounts` is not array type"));

        const rapidjson::Value &tmpValue = value["MemShellAttackCounts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_memShellAttackCounts.push_back((*itr).GetInt64());
        }
        m_memShellAttackCountsHasBeenSet = true;
    }

    if (value.HasMember("MemShellDefendCounts") && !value["MemShellDefendCounts"].IsNull())
    {
        if (!value["MemShellDefendCounts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RaspEventOverview.MemShellDefendCounts` is not array type"));

        const rapidjson::Value &tmpValue = value["MemShellDefendCounts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_memShellDefendCounts.push_back((*itr).GetInt64());
        }
        m_memShellDefendCountsHasBeenSet = true;
    }

    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RaspEventOverview.Date` is not array type"));

        const rapidjson::Value &tmpValue = value["Date"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_date.push_back((*itr).GetString());
        }
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("ProtectAssetOpenCount") && !value["ProtectAssetOpenCount"].IsNull())
    {
        if (!value["ProtectAssetOpenCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventOverview.ProtectAssetOpenCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_protectAssetOpenCount = value["ProtectAssetOpenCount"].GetUint64();
        m_protectAssetOpenCountHasBeenSet = true;
    }

    if (value.HasMember("ProtectAssetCount") && !value["ProtectAssetCount"].IsNull())
    {
        if (!value["ProtectAssetCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventOverview.ProtectAssetCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_protectAssetCount = value["ProtectAssetCount"].GetUint64();
        m_protectAssetCountHasBeenSet = true;
    }

    if (value.HasMember("UltimateAssetCount") && !value["UltimateAssetCount"].IsNull())
    {
        if (!value["UltimateAssetCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventOverview.UltimateAssetCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ultimateAssetCount = value["UltimateAssetCount"].GetUint64();
        m_ultimateAssetCountHasBeenSet = true;
    }

    if (value.HasMember("RaspAssetCount") && !value["RaspAssetCount"].IsNull())
    {
        if (!value["RaspAssetCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventOverview.RaspAssetCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_raspAssetCount = value["RaspAssetCount"].GetUint64();
        m_raspAssetCountHasBeenSet = true;
    }

    if (value.HasMember("NotProtectAssetCount") && !value["NotProtectAssetCount"].IsNull())
    {
        if (!value["NotProtectAssetCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventOverview.NotProtectAssetCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_notProtectAssetCount = value["NotProtectAssetCount"].GetUint64();
        m_notProtectAssetCountHasBeenSet = true;
    }

    if (value.HasMember("RecentUnhandledEvents") && !value["RecentUnhandledEvents"].IsNull())
    {
        if (!value["RecentUnhandledEvents"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventOverview.RecentUnhandledEvents` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recentUnhandledEvents = value["RecentUnhandledEvents"].GetInt64();
        m_recentUnhandledEventsHasBeenSet = true;
    }

    if (value.HasMember("RaspDefendCount") && !value["RaspDefendCount"].IsNull())
    {
        if (!value["RaspDefendCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventOverview.RaspDefendCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_raspDefendCount = value["RaspDefendCount"].GetInt64();
        m_raspDefendCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RaspEventOverview::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_defenceVulsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefenceVuls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defenceVuls, allocator);
    }

    if (m_preciseDefenseVulsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreciseDefenseVuls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_preciseDefenseVuls, allocator);
    }

    if (m_unhandledRaspEventsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnhandledRaspEvents";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unhandledRaspEvents, allocator);
    }

    if (m_unhandledMemShellScanEventsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnhandledMemShellScanEvents";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unhandledMemShellScanEvents, allocator);
    }

    if (m_unhandledMemShellInjectEventsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnhandledMemShellInjectEvents";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unhandledMemShellInjectEvents, allocator);
    }

    if (m_unHandledEventsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnHandledEvents";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_unHandledEvents.begin(); itr != m_unHandledEvents.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_raspAttackCountsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RaspAttackCounts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_raspAttackCounts.begin(); itr != m_raspAttackCounts.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_raspDefendCountsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RaspDefendCounts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_raspDefendCounts.begin(); itr != m_raspDefendCounts.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_memShellAttackCountsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemShellAttackCounts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memShellAttackCounts.begin(); itr != m_memShellAttackCounts.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_memShellDefendCountsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemShellDefendCounts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memShellDefendCounts.begin(); itr != m_memShellDefendCounts.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_date.begin(); itr != m_date.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_protectAssetOpenCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectAssetOpenCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectAssetOpenCount, allocator);
    }

    if (m_protectAssetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectAssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectAssetCount, allocator);
    }

    if (m_ultimateAssetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UltimateAssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ultimateAssetCount, allocator);
    }

    if (m_raspAssetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RaspAssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_raspAssetCount, allocator);
    }

    if (m_notProtectAssetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotProtectAssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notProtectAssetCount, allocator);
    }

    if (m_recentUnhandledEventsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecentUnhandledEvents";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recentUnhandledEvents, allocator);
    }

    if (m_raspDefendCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RaspDefendCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_raspDefendCount, allocator);
    }

}


int64_t RaspEventOverview::GetDefenceVuls() const
{
    return m_defenceVuls;
}

void RaspEventOverview::SetDefenceVuls(const int64_t& _defenceVuls)
{
    m_defenceVuls = _defenceVuls;
    m_defenceVulsHasBeenSet = true;
}

bool RaspEventOverview::DefenceVulsHasBeenSet() const
{
    return m_defenceVulsHasBeenSet;
}

int64_t RaspEventOverview::GetPreciseDefenseVuls() const
{
    return m_preciseDefenseVuls;
}

void RaspEventOverview::SetPreciseDefenseVuls(const int64_t& _preciseDefenseVuls)
{
    m_preciseDefenseVuls = _preciseDefenseVuls;
    m_preciseDefenseVulsHasBeenSet = true;
}

bool RaspEventOverview::PreciseDefenseVulsHasBeenSet() const
{
    return m_preciseDefenseVulsHasBeenSet;
}

int64_t RaspEventOverview::GetUnhandledRaspEvents() const
{
    return m_unhandledRaspEvents;
}

void RaspEventOverview::SetUnhandledRaspEvents(const int64_t& _unhandledRaspEvents)
{
    m_unhandledRaspEvents = _unhandledRaspEvents;
    m_unhandledRaspEventsHasBeenSet = true;
}

bool RaspEventOverview::UnhandledRaspEventsHasBeenSet() const
{
    return m_unhandledRaspEventsHasBeenSet;
}

int64_t RaspEventOverview::GetUnhandledMemShellScanEvents() const
{
    return m_unhandledMemShellScanEvents;
}

void RaspEventOverview::SetUnhandledMemShellScanEvents(const int64_t& _unhandledMemShellScanEvents)
{
    m_unhandledMemShellScanEvents = _unhandledMemShellScanEvents;
    m_unhandledMemShellScanEventsHasBeenSet = true;
}

bool RaspEventOverview::UnhandledMemShellScanEventsHasBeenSet() const
{
    return m_unhandledMemShellScanEventsHasBeenSet;
}

int64_t RaspEventOverview::GetUnhandledMemShellInjectEvents() const
{
    return m_unhandledMemShellInjectEvents;
}

void RaspEventOverview::SetUnhandledMemShellInjectEvents(const int64_t& _unhandledMemShellInjectEvents)
{
    m_unhandledMemShellInjectEvents = _unhandledMemShellInjectEvents;
    m_unhandledMemShellInjectEventsHasBeenSet = true;
}

bool RaspEventOverview::UnhandledMemShellInjectEventsHasBeenSet() const
{
    return m_unhandledMemShellInjectEventsHasBeenSet;
}

vector<int64_t> RaspEventOverview::GetUnHandledEvents() const
{
    return m_unHandledEvents;
}

void RaspEventOverview::SetUnHandledEvents(const vector<int64_t>& _unHandledEvents)
{
    m_unHandledEvents = _unHandledEvents;
    m_unHandledEventsHasBeenSet = true;
}

bool RaspEventOverview::UnHandledEventsHasBeenSet() const
{
    return m_unHandledEventsHasBeenSet;
}

vector<int64_t> RaspEventOverview::GetRaspAttackCounts() const
{
    return m_raspAttackCounts;
}

void RaspEventOverview::SetRaspAttackCounts(const vector<int64_t>& _raspAttackCounts)
{
    m_raspAttackCounts = _raspAttackCounts;
    m_raspAttackCountsHasBeenSet = true;
}

bool RaspEventOverview::RaspAttackCountsHasBeenSet() const
{
    return m_raspAttackCountsHasBeenSet;
}

vector<int64_t> RaspEventOverview::GetRaspDefendCounts() const
{
    return m_raspDefendCounts;
}

void RaspEventOverview::SetRaspDefendCounts(const vector<int64_t>& _raspDefendCounts)
{
    m_raspDefendCounts = _raspDefendCounts;
    m_raspDefendCountsHasBeenSet = true;
}

bool RaspEventOverview::RaspDefendCountsHasBeenSet() const
{
    return m_raspDefendCountsHasBeenSet;
}

vector<int64_t> RaspEventOverview::GetMemShellAttackCounts() const
{
    return m_memShellAttackCounts;
}

void RaspEventOverview::SetMemShellAttackCounts(const vector<int64_t>& _memShellAttackCounts)
{
    m_memShellAttackCounts = _memShellAttackCounts;
    m_memShellAttackCountsHasBeenSet = true;
}

bool RaspEventOverview::MemShellAttackCountsHasBeenSet() const
{
    return m_memShellAttackCountsHasBeenSet;
}

vector<int64_t> RaspEventOverview::GetMemShellDefendCounts() const
{
    return m_memShellDefendCounts;
}

void RaspEventOverview::SetMemShellDefendCounts(const vector<int64_t>& _memShellDefendCounts)
{
    m_memShellDefendCounts = _memShellDefendCounts;
    m_memShellDefendCountsHasBeenSet = true;
}

bool RaspEventOverview::MemShellDefendCountsHasBeenSet() const
{
    return m_memShellDefendCountsHasBeenSet;
}

vector<string> RaspEventOverview::GetDate() const
{
    return m_date;
}

void RaspEventOverview::SetDate(const vector<string>& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool RaspEventOverview::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

uint64_t RaspEventOverview::GetProtectAssetOpenCount() const
{
    return m_protectAssetOpenCount;
}

void RaspEventOverview::SetProtectAssetOpenCount(const uint64_t& _protectAssetOpenCount)
{
    m_protectAssetOpenCount = _protectAssetOpenCount;
    m_protectAssetOpenCountHasBeenSet = true;
}

bool RaspEventOverview::ProtectAssetOpenCountHasBeenSet() const
{
    return m_protectAssetOpenCountHasBeenSet;
}

uint64_t RaspEventOverview::GetProtectAssetCount() const
{
    return m_protectAssetCount;
}

void RaspEventOverview::SetProtectAssetCount(const uint64_t& _protectAssetCount)
{
    m_protectAssetCount = _protectAssetCount;
    m_protectAssetCountHasBeenSet = true;
}

bool RaspEventOverview::ProtectAssetCountHasBeenSet() const
{
    return m_protectAssetCountHasBeenSet;
}

uint64_t RaspEventOverview::GetUltimateAssetCount() const
{
    return m_ultimateAssetCount;
}

void RaspEventOverview::SetUltimateAssetCount(const uint64_t& _ultimateAssetCount)
{
    m_ultimateAssetCount = _ultimateAssetCount;
    m_ultimateAssetCountHasBeenSet = true;
}

bool RaspEventOverview::UltimateAssetCountHasBeenSet() const
{
    return m_ultimateAssetCountHasBeenSet;
}

uint64_t RaspEventOverview::GetRaspAssetCount() const
{
    return m_raspAssetCount;
}

void RaspEventOverview::SetRaspAssetCount(const uint64_t& _raspAssetCount)
{
    m_raspAssetCount = _raspAssetCount;
    m_raspAssetCountHasBeenSet = true;
}

bool RaspEventOverview::RaspAssetCountHasBeenSet() const
{
    return m_raspAssetCountHasBeenSet;
}

uint64_t RaspEventOverview::GetNotProtectAssetCount() const
{
    return m_notProtectAssetCount;
}

void RaspEventOverview::SetNotProtectAssetCount(const uint64_t& _notProtectAssetCount)
{
    m_notProtectAssetCount = _notProtectAssetCount;
    m_notProtectAssetCountHasBeenSet = true;
}

bool RaspEventOverview::NotProtectAssetCountHasBeenSet() const
{
    return m_notProtectAssetCountHasBeenSet;
}

int64_t RaspEventOverview::GetRecentUnhandledEvents() const
{
    return m_recentUnhandledEvents;
}

void RaspEventOverview::SetRecentUnhandledEvents(const int64_t& _recentUnhandledEvents)
{
    m_recentUnhandledEvents = _recentUnhandledEvents;
    m_recentUnhandledEventsHasBeenSet = true;
}

bool RaspEventOverview::RecentUnhandledEventsHasBeenSet() const
{
    return m_recentUnhandledEventsHasBeenSet;
}

int64_t RaspEventOverview::GetRaspDefendCount() const
{
    return m_raspDefendCount;
}

void RaspEventOverview::SetRaspDefendCount(const int64_t& _raspDefendCount)
{
    m_raspDefendCount = _raspDefendCount;
    m_raspDefendCountHasBeenSet = true;
}

bool RaspEventOverview::RaspDefendCountHasBeenSet() const
{
    return m_raspDefendCountHasBeenSet;
}

