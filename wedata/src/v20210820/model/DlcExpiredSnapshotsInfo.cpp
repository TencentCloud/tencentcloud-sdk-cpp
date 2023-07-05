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

#include <tencentcloud/wedata/v20210820/model/DlcExpiredSnapshotsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DlcExpiredSnapshotsInfo::DlcExpiredSnapshotsInfo() :
    m_expiredSnapshotsEnableHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_retainLastHasBeenSet(false),
    m_beforeDaysHasBeenSet(false),
    m_maxConcurrentDeletesHasBeenSet(false),
    m_intervalMinHasBeenSet(false)
{
}

CoreInternalOutcome DlcExpiredSnapshotsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExpiredSnapshotsEnable") && !value["ExpiredSnapshotsEnable"].IsNull())
    {
        if (!value["ExpiredSnapshotsEnable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DlcExpiredSnapshotsInfo.ExpiredSnapshotsEnable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expiredSnapshotsEnable = string(value["ExpiredSnapshotsEnable"].GetString());
        m_expiredSnapshotsEnableHasBeenSet = true;
    }

    if (value.HasMember("Engine") && !value["Engine"].IsNull())
    {
        if (!value["Engine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DlcExpiredSnapshotsInfo.Engine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engine = string(value["Engine"].GetString());
        m_engineHasBeenSet = true;
    }

    if (value.HasMember("RetainLast") && !value["RetainLast"].IsNull())
    {
        if (!value["RetainLast"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DlcExpiredSnapshotsInfo.RetainLast` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_retainLast = value["RetainLast"].GetUint64();
        m_retainLastHasBeenSet = true;
    }

    if (value.HasMember("BeforeDays") && !value["BeforeDays"].IsNull())
    {
        if (!value["BeforeDays"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DlcExpiredSnapshotsInfo.BeforeDays` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_beforeDays = value["BeforeDays"].GetUint64();
        m_beforeDaysHasBeenSet = true;
    }

    if (value.HasMember("MaxConcurrentDeletes") && !value["MaxConcurrentDeletes"].IsNull())
    {
        if (!value["MaxConcurrentDeletes"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DlcExpiredSnapshotsInfo.MaxConcurrentDeletes` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxConcurrentDeletes = value["MaxConcurrentDeletes"].GetUint64();
        m_maxConcurrentDeletesHasBeenSet = true;
    }

    if (value.HasMember("IntervalMin") && !value["IntervalMin"].IsNull())
    {
        if (!value["IntervalMin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DlcExpiredSnapshotsInfo.IntervalMin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_intervalMin = value["IntervalMin"].GetUint64();
        m_intervalMinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DlcExpiredSnapshotsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_expiredSnapshotsEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredSnapshotsEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expiredSnapshotsEnable.c_str(), allocator).Move(), allocator);
    }

    if (m_engineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Engine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engine.c_str(), allocator).Move(), allocator);
    }

    if (m_retainLastHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetainLast";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retainLast, allocator);
    }

    if (m_beforeDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeforeDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_beforeDays, allocator);
    }

    if (m_maxConcurrentDeletesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxConcurrentDeletes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxConcurrentDeletes, allocator);
    }

    if (m_intervalMinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntervalMin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_intervalMin, allocator);
    }

}


string DlcExpiredSnapshotsInfo::GetExpiredSnapshotsEnable() const
{
    return m_expiredSnapshotsEnable;
}

void DlcExpiredSnapshotsInfo::SetExpiredSnapshotsEnable(const string& _expiredSnapshotsEnable)
{
    m_expiredSnapshotsEnable = _expiredSnapshotsEnable;
    m_expiredSnapshotsEnableHasBeenSet = true;
}

bool DlcExpiredSnapshotsInfo::ExpiredSnapshotsEnableHasBeenSet() const
{
    return m_expiredSnapshotsEnableHasBeenSet;
}

string DlcExpiredSnapshotsInfo::GetEngine() const
{
    return m_engine;
}

void DlcExpiredSnapshotsInfo::SetEngine(const string& _engine)
{
    m_engine = _engine;
    m_engineHasBeenSet = true;
}

bool DlcExpiredSnapshotsInfo::EngineHasBeenSet() const
{
    return m_engineHasBeenSet;
}

uint64_t DlcExpiredSnapshotsInfo::GetRetainLast() const
{
    return m_retainLast;
}

void DlcExpiredSnapshotsInfo::SetRetainLast(const uint64_t& _retainLast)
{
    m_retainLast = _retainLast;
    m_retainLastHasBeenSet = true;
}

bool DlcExpiredSnapshotsInfo::RetainLastHasBeenSet() const
{
    return m_retainLastHasBeenSet;
}

uint64_t DlcExpiredSnapshotsInfo::GetBeforeDays() const
{
    return m_beforeDays;
}

void DlcExpiredSnapshotsInfo::SetBeforeDays(const uint64_t& _beforeDays)
{
    m_beforeDays = _beforeDays;
    m_beforeDaysHasBeenSet = true;
}

bool DlcExpiredSnapshotsInfo::BeforeDaysHasBeenSet() const
{
    return m_beforeDaysHasBeenSet;
}

uint64_t DlcExpiredSnapshotsInfo::GetMaxConcurrentDeletes() const
{
    return m_maxConcurrentDeletes;
}

void DlcExpiredSnapshotsInfo::SetMaxConcurrentDeletes(const uint64_t& _maxConcurrentDeletes)
{
    m_maxConcurrentDeletes = _maxConcurrentDeletes;
    m_maxConcurrentDeletesHasBeenSet = true;
}

bool DlcExpiredSnapshotsInfo::MaxConcurrentDeletesHasBeenSet() const
{
    return m_maxConcurrentDeletesHasBeenSet;
}

uint64_t DlcExpiredSnapshotsInfo::GetIntervalMin() const
{
    return m_intervalMin;
}

void DlcExpiredSnapshotsInfo::SetIntervalMin(const uint64_t& _intervalMin)
{
    m_intervalMin = _intervalMin;
    m_intervalMinHasBeenSet = true;
}

bool DlcExpiredSnapshotsInfo::IntervalMinHasBeenSet() const
{
    return m_intervalMinHasBeenSet;
}

