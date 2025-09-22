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

#include <tencentcloud/wedata/v20250806/model/ProjectInstanceStatisticsAlarmInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

ProjectInstanceStatisticsAlarmInfo::ProjectInstanceStatisticsAlarmInfo() :
    m_alarmTypeHasBeenSet(false),
    m_instanceThresholdCountPercentHasBeenSet(false),
    m_instanceThresholdCountHasBeenSet(false),
    m_stabilizeThresholdHasBeenSet(false),
    m_stabilizeStatisticsCycleHasBeenSet(false),
    m_isCumulantHasBeenSet(false),
    m_instanceCountHasBeenSet(false)
{
}

CoreInternalOutcome ProjectInstanceStatisticsAlarmInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AlarmType") && !value["AlarmType"].IsNull())
    {
        if (!value["AlarmType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectInstanceStatisticsAlarmInfo.AlarmType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmType = string(value["AlarmType"].GetString());
        m_alarmTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceThresholdCountPercent") && !value["InstanceThresholdCountPercent"].IsNull())
    {
        if (!value["InstanceThresholdCountPercent"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectInstanceStatisticsAlarmInfo.InstanceThresholdCountPercent` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceThresholdCountPercent = value["InstanceThresholdCountPercent"].GetUint64();
        m_instanceThresholdCountPercentHasBeenSet = true;
    }

    if (value.HasMember("InstanceThresholdCount") && !value["InstanceThresholdCount"].IsNull())
    {
        if (!value["InstanceThresholdCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectInstanceStatisticsAlarmInfo.InstanceThresholdCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceThresholdCount = value["InstanceThresholdCount"].GetUint64();
        m_instanceThresholdCountHasBeenSet = true;
    }

    if (value.HasMember("StabilizeThreshold") && !value["StabilizeThreshold"].IsNull())
    {
        if (!value["StabilizeThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectInstanceStatisticsAlarmInfo.StabilizeThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_stabilizeThreshold = value["StabilizeThreshold"].GetUint64();
        m_stabilizeThresholdHasBeenSet = true;
    }

    if (value.HasMember("StabilizeStatisticsCycle") && !value["StabilizeStatisticsCycle"].IsNull())
    {
        if (!value["StabilizeStatisticsCycle"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectInstanceStatisticsAlarmInfo.StabilizeStatisticsCycle` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_stabilizeStatisticsCycle = value["StabilizeStatisticsCycle"].GetUint64();
        m_stabilizeStatisticsCycleHasBeenSet = true;
    }

    if (value.HasMember("IsCumulant") && !value["IsCumulant"].IsNull())
    {
        if (!value["IsCumulant"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectInstanceStatisticsAlarmInfo.IsCumulant` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isCumulant = value["IsCumulant"].GetBool();
        m_isCumulantHasBeenSet = true;
    }

    if (value.HasMember("InstanceCount") && !value["InstanceCount"].IsNull())
    {
        if (!value["InstanceCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectInstanceStatisticsAlarmInfo.InstanceCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceCount = value["InstanceCount"].GetUint64();
        m_instanceCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProjectInstanceStatisticsAlarmInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_alarmTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceThresholdCountPercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceThresholdCountPercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceThresholdCountPercent, allocator);
    }

    if (m_instanceThresholdCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceThresholdCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceThresholdCount, allocator);
    }

    if (m_stabilizeThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StabilizeThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stabilizeThreshold, allocator);
    }

    if (m_stabilizeStatisticsCycleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StabilizeStatisticsCycle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stabilizeStatisticsCycle, allocator);
    }

    if (m_isCumulantHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCumulant";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCumulant, allocator);
    }

    if (m_instanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceCount, allocator);
    }

}


string ProjectInstanceStatisticsAlarmInfo::GetAlarmType() const
{
    return m_alarmType;
}

void ProjectInstanceStatisticsAlarmInfo::SetAlarmType(const string& _alarmType)
{
    m_alarmType = _alarmType;
    m_alarmTypeHasBeenSet = true;
}

bool ProjectInstanceStatisticsAlarmInfo::AlarmTypeHasBeenSet() const
{
    return m_alarmTypeHasBeenSet;
}

uint64_t ProjectInstanceStatisticsAlarmInfo::GetInstanceThresholdCountPercent() const
{
    return m_instanceThresholdCountPercent;
}

void ProjectInstanceStatisticsAlarmInfo::SetInstanceThresholdCountPercent(const uint64_t& _instanceThresholdCountPercent)
{
    m_instanceThresholdCountPercent = _instanceThresholdCountPercent;
    m_instanceThresholdCountPercentHasBeenSet = true;
}

bool ProjectInstanceStatisticsAlarmInfo::InstanceThresholdCountPercentHasBeenSet() const
{
    return m_instanceThresholdCountPercentHasBeenSet;
}

uint64_t ProjectInstanceStatisticsAlarmInfo::GetInstanceThresholdCount() const
{
    return m_instanceThresholdCount;
}

void ProjectInstanceStatisticsAlarmInfo::SetInstanceThresholdCount(const uint64_t& _instanceThresholdCount)
{
    m_instanceThresholdCount = _instanceThresholdCount;
    m_instanceThresholdCountHasBeenSet = true;
}

bool ProjectInstanceStatisticsAlarmInfo::InstanceThresholdCountHasBeenSet() const
{
    return m_instanceThresholdCountHasBeenSet;
}

uint64_t ProjectInstanceStatisticsAlarmInfo::GetStabilizeThreshold() const
{
    return m_stabilizeThreshold;
}

void ProjectInstanceStatisticsAlarmInfo::SetStabilizeThreshold(const uint64_t& _stabilizeThreshold)
{
    m_stabilizeThreshold = _stabilizeThreshold;
    m_stabilizeThresholdHasBeenSet = true;
}

bool ProjectInstanceStatisticsAlarmInfo::StabilizeThresholdHasBeenSet() const
{
    return m_stabilizeThresholdHasBeenSet;
}

uint64_t ProjectInstanceStatisticsAlarmInfo::GetStabilizeStatisticsCycle() const
{
    return m_stabilizeStatisticsCycle;
}

void ProjectInstanceStatisticsAlarmInfo::SetStabilizeStatisticsCycle(const uint64_t& _stabilizeStatisticsCycle)
{
    m_stabilizeStatisticsCycle = _stabilizeStatisticsCycle;
    m_stabilizeStatisticsCycleHasBeenSet = true;
}

bool ProjectInstanceStatisticsAlarmInfo::StabilizeStatisticsCycleHasBeenSet() const
{
    return m_stabilizeStatisticsCycleHasBeenSet;
}

bool ProjectInstanceStatisticsAlarmInfo::GetIsCumulant() const
{
    return m_isCumulant;
}

void ProjectInstanceStatisticsAlarmInfo::SetIsCumulant(const bool& _isCumulant)
{
    m_isCumulant = _isCumulant;
    m_isCumulantHasBeenSet = true;
}

bool ProjectInstanceStatisticsAlarmInfo::IsCumulantHasBeenSet() const
{
    return m_isCumulantHasBeenSet;
}

uint64_t ProjectInstanceStatisticsAlarmInfo::GetInstanceCount() const
{
    return m_instanceCount;
}

void ProjectInstanceStatisticsAlarmInfo::SetInstanceCount(const uint64_t& _instanceCount)
{
    m_instanceCount = _instanceCount;
    m_instanceCountHasBeenSet = true;
}

bool ProjectInstanceStatisticsAlarmInfo::InstanceCountHasBeenSet() const
{
    return m_instanceCountHasBeenSet;
}

