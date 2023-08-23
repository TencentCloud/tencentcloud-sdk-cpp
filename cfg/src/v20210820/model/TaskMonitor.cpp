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

#include <tencentcloud/cfg/v20210820/model/TaskMonitor.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfg::V20210820::Model;
using namespace std;

TaskMonitor::TaskMonitor() :
    m_taskMonitorIdHasBeenSet(false),
    m_metricIdHasBeenSet(false),
    m_taskMonitorObjectTypeIdHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_instancesIdsHasBeenSet(false),
    m_metricChineseNameHasBeenSet(false),
    m_unitHasBeenSet(false)
{
}

CoreInternalOutcome TaskMonitor::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskMonitorId") && !value["TaskMonitorId"].IsNull())
    {
        if (!value["TaskMonitorId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskMonitor.TaskMonitorId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskMonitorId = value["TaskMonitorId"].GetInt64();
        m_taskMonitorIdHasBeenSet = true;
    }

    if (value.HasMember("MetricId") && !value["MetricId"].IsNull())
    {
        if (!value["MetricId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskMonitor.MetricId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_metricId = value["MetricId"].GetUint64();
        m_metricIdHasBeenSet = true;
    }

    if (value.HasMember("TaskMonitorObjectTypeId") && !value["TaskMonitorObjectTypeId"].IsNull())
    {
        if (!value["TaskMonitorObjectTypeId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskMonitor.TaskMonitorObjectTypeId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskMonitorObjectTypeId = value["TaskMonitorObjectTypeId"].GetInt64();
        m_taskMonitorObjectTypeIdHasBeenSet = true;
    }

    if (value.HasMember("MetricName") && !value["MetricName"].IsNull())
    {
        if (!value["MetricName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskMonitor.MetricName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricName = string(value["MetricName"].GetString());
        m_metricNameHasBeenSet = true;
    }

    if (value.HasMember("InstancesIds") && !value["InstancesIds"].IsNull())
    {
        if (!value["InstancesIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskMonitor.InstancesIds` is not array type"));

        const rapidjson::Value &tmpValue = value["InstancesIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_instancesIds.push_back((*itr).GetString());
        }
        m_instancesIdsHasBeenSet = true;
    }

    if (value.HasMember("MetricChineseName") && !value["MetricChineseName"].IsNull())
    {
        if (!value["MetricChineseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskMonitor.MetricChineseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricChineseName = string(value["MetricChineseName"].GetString());
        m_metricChineseNameHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskMonitor.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskMonitor::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskMonitorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskMonitorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskMonitorId, allocator);
    }

    if (m_metricIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_metricId, allocator);
    }

    if (m_taskMonitorObjectTypeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskMonitorObjectTypeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskMonitorObjectTypeId, allocator);
    }

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

    if (m_instancesIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstancesIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instancesIds.begin(); itr != m_instancesIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_metricChineseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricChineseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricChineseName.c_str(), allocator).Move(), allocator);
    }

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unit.c_str(), allocator).Move(), allocator);
    }

}


int64_t TaskMonitor::GetTaskMonitorId() const
{
    return m_taskMonitorId;
}

void TaskMonitor::SetTaskMonitorId(const int64_t& _taskMonitorId)
{
    m_taskMonitorId = _taskMonitorId;
    m_taskMonitorIdHasBeenSet = true;
}

bool TaskMonitor::TaskMonitorIdHasBeenSet() const
{
    return m_taskMonitorIdHasBeenSet;
}

uint64_t TaskMonitor::GetMetricId() const
{
    return m_metricId;
}

void TaskMonitor::SetMetricId(const uint64_t& _metricId)
{
    m_metricId = _metricId;
    m_metricIdHasBeenSet = true;
}

bool TaskMonitor::MetricIdHasBeenSet() const
{
    return m_metricIdHasBeenSet;
}

int64_t TaskMonitor::GetTaskMonitorObjectTypeId() const
{
    return m_taskMonitorObjectTypeId;
}

void TaskMonitor::SetTaskMonitorObjectTypeId(const int64_t& _taskMonitorObjectTypeId)
{
    m_taskMonitorObjectTypeId = _taskMonitorObjectTypeId;
    m_taskMonitorObjectTypeIdHasBeenSet = true;
}

bool TaskMonitor::TaskMonitorObjectTypeIdHasBeenSet() const
{
    return m_taskMonitorObjectTypeIdHasBeenSet;
}

string TaskMonitor::GetMetricName() const
{
    return m_metricName;
}

void TaskMonitor::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool TaskMonitor::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

vector<string> TaskMonitor::GetInstancesIds() const
{
    return m_instancesIds;
}

void TaskMonitor::SetInstancesIds(const vector<string>& _instancesIds)
{
    m_instancesIds = _instancesIds;
    m_instancesIdsHasBeenSet = true;
}

bool TaskMonitor::InstancesIdsHasBeenSet() const
{
    return m_instancesIdsHasBeenSet;
}

string TaskMonitor::GetMetricChineseName() const
{
    return m_metricChineseName;
}

void TaskMonitor::SetMetricChineseName(const string& _metricChineseName)
{
    m_metricChineseName = _metricChineseName;
    m_metricChineseNameHasBeenSet = true;
}

bool TaskMonitor::MetricChineseNameHasBeenSet() const
{
    return m_metricChineseNameHasBeenSet;
}

string TaskMonitor::GetUnit() const
{
    return m_unit;
}

void TaskMonitor::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool TaskMonitor::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

