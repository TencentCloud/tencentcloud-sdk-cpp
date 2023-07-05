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

#include <tencentcloud/wedata/v20210820/model/DlcRemoveOrphanFilesInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DlcRemoveOrphanFilesInfo::DlcRemoveOrphanFilesInfo() :
    m_removeOrphanFilesEnableHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_beforeDaysHasBeenSet(false),
    m_maxConcurrentDeletesHasBeenSet(false),
    m_intervalMinHasBeenSet(false)
{
}

CoreInternalOutcome DlcRemoveOrphanFilesInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RemoveOrphanFilesEnable") && !value["RemoveOrphanFilesEnable"].IsNull())
    {
        if (!value["RemoveOrphanFilesEnable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DlcRemoveOrphanFilesInfo.RemoveOrphanFilesEnable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_removeOrphanFilesEnable = string(value["RemoveOrphanFilesEnable"].GetString());
        m_removeOrphanFilesEnableHasBeenSet = true;
    }

    if (value.HasMember("Engine") && !value["Engine"].IsNull())
    {
        if (!value["Engine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DlcRemoveOrphanFilesInfo.Engine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engine = string(value["Engine"].GetString());
        m_engineHasBeenSet = true;
    }

    if (value.HasMember("BeforeDays") && !value["BeforeDays"].IsNull())
    {
        if (!value["BeforeDays"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DlcRemoveOrphanFilesInfo.BeforeDays` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_beforeDays = value["BeforeDays"].GetUint64();
        m_beforeDaysHasBeenSet = true;
    }

    if (value.HasMember("MaxConcurrentDeletes") && !value["MaxConcurrentDeletes"].IsNull())
    {
        if (!value["MaxConcurrentDeletes"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DlcRemoveOrphanFilesInfo.MaxConcurrentDeletes` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxConcurrentDeletes = value["MaxConcurrentDeletes"].GetUint64();
        m_maxConcurrentDeletesHasBeenSet = true;
    }

    if (value.HasMember("IntervalMin") && !value["IntervalMin"].IsNull())
    {
        if (!value["IntervalMin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DlcRemoveOrphanFilesInfo.IntervalMin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_intervalMin = value["IntervalMin"].GetUint64();
        m_intervalMinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DlcRemoveOrphanFilesInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_removeOrphanFilesEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoveOrphanFilesEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_removeOrphanFilesEnable.c_str(), allocator).Move(), allocator);
    }

    if (m_engineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Engine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engine.c_str(), allocator).Move(), allocator);
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


string DlcRemoveOrphanFilesInfo::GetRemoveOrphanFilesEnable() const
{
    return m_removeOrphanFilesEnable;
}

void DlcRemoveOrphanFilesInfo::SetRemoveOrphanFilesEnable(const string& _removeOrphanFilesEnable)
{
    m_removeOrphanFilesEnable = _removeOrphanFilesEnable;
    m_removeOrphanFilesEnableHasBeenSet = true;
}

bool DlcRemoveOrphanFilesInfo::RemoveOrphanFilesEnableHasBeenSet() const
{
    return m_removeOrphanFilesEnableHasBeenSet;
}

string DlcRemoveOrphanFilesInfo::GetEngine() const
{
    return m_engine;
}

void DlcRemoveOrphanFilesInfo::SetEngine(const string& _engine)
{
    m_engine = _engine;
    m_engineHasBeenSet = true;
}

bool DlcRemoveOrphanFilesInfo::EngineHasBeenSet() const
{
    return m_engineHasBeenSet;
}

uint64_t DlcRemoveOrphanFilesInfo::GetBeforeDays() const
{
    return m_beforeDays;
}

void DlcRemoveOrphanFilesInfo::SetBeforeDays(const uint64_t& _beforeDays)
{
    m_beforeDays = _beforeDays;
    m_beforeDaysHasBeenSet = true;
}

bool DlcRemoveOrphanFilesInfo::BeforeDaysHasBeenSet() const
{
    return m_beforeDaysHasBeenSet;
}

uint64_t DlcRemoveOrphanFilesInfo::GetMaxConcurrentDeletes() const
{
    return m_maxConcurrentDeletes;
}

void DlcRemoveOrphanFilesInfo::SetMaxConcurrentDeletes(const uint64_t& _maxConcurrentDeletes)
{
    m_maxConcurrentDeletes = _maxConcurrentDeletes;
    m_maxConcurrentDeletesHasBeenSet = true;
}

bool DlcRemoveOrphanFilesInfo::MaxConcurrentDeletesHasBeenSet() const
{
    return m_maxConcurrentDeletesHasBeenSet;
}

uint64_t DlcRemoveOrphanFilesInfo::GetIntervalMin() const
{
    return m_intervalMin;
}

void DlcRemoveOrphanFilesInfo::SetIntervalMin(const uint64_t& _intervalMin)
{
    m_intervalMin = _intervalMin;
    m_intervalMinHasBeenSet = true;
}

bool DlcRemoveOrphanFilesInfo::IntervalMinHasBeenSet() const
{
    return m_intervalMinHasBeenSet;
}

