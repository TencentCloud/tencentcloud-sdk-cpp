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

#include <tencentcloud/cfg/v20210820/model/TemplateMonitor.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfg::V20210820::Model;
using namespace std;

TemplateMonitor::TemplateMonitor() :
    m_monitorIdHasBeenSet(false),
    m_metricIdHasBeenSet(false),
    m_objectTypeIdHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_metricChineseNameHasBeenSet(false)
{
}

CoreInternalOutcome TemplateMonitor::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MonitorId") && !value["MonitorId"].IsNull())
    {
        if (!value["MonitorId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateMonitor.MonitorId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_monitorId = value["MonitorId"].GetInt64();
        m_monitorIdHasBeenSet = true;
    }

    if (value.HasMember("MetricId") && !value["MetricId"].IsNull())
    {
        if (!value["MetricId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateMonitor.MetricId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_metricId = value["MetricId"].GetInt64();
        m_metricIdHasBeenSet = true;
    }

    if (value.HasMember("ObjectTypeId") && !value["ObjectTypeId"].IsNull())
    {
        if (!value["ObjectTypeId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateMonitor.ObjectTypeId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_objectTypeId = value["ObjectTypeId"].GetInt64();
        m_objectTypeIdHasBeenSet = true;
    }

    if (value.HasMember("MetricName") && !value["MetricName"].IsNull())
    {
        if (!value["MetricName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateMonitor.MetricName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricName = string(value["MetricName"].GetString());
        m_metricNameHasBeenSet = true;
    }

    if (value.HasMember("MetricChineseName") && !value["MetricChineseName"].IsNull())
    {
        if (!value["MetricChineseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateMonitor.MetricChineseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricChineseName = string(value["MetricChineseName"].GetString());
        m_metricChineseNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TemplateMonitor::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_monitorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monitorId, allocator);
    }

    if (m_metricIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_metricId, allocator);
    }

    if (m_objectTypeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectTypeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_objectTypeId, allocator);
    }

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

    if (m_metricChineseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricChineseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricChineseName.c_str(), allocator).Move(), allocator);
    }

}


int64_t TemplateMonitor::GetMonitorId() const
{
    return m_monitorId;
}

void TemplateMonitor::SetMonitorId(const int64_t& _monitorId)
{
    m_monitorId = _monitorId;
    m_monitorIdHasBeenSet = true;
}

bool TemplateMonitor::MonitorIdHasBeenSet() const
{
    return m_monitorIdHasBeenSet;
}

int64_t TemplateMonitor::GetMetricId() const
{
    return m_metricId;
}

void TemplateMonitor::SetMetricId(const int64_t& _metricId)
{
    m_metricId = _metricId;
    m_metricIdHasBeenSet = true;
}

bool TemplateMonitor::MetricIdHasBeenSet() const
{
    return m_metricIdHasBeenSet;
}

int64_t TemplateMonitor::GetObjectTypeId() const
{
    return m_objectTypeId;
}

void TemplateMonitor::SetObjectTypeId(const int64_t& _objectTypeId)
{
    m_objectTypeId = _objectTypeId;
    m_objectTypeIdHasBeenSet = true;
}

bool TemplateMonitor::ObjectTypeIdHasBeenSet() const
{
    return m_objectTypeIdHasBeenSet;
}

string TemplateMonitor::GetMetricName() const
{
    return m_metricName;
}

void TemplateMonitor::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool TemplateMonitor::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

string TemplateMonitor::GetMetricChineseName() const
{
    return m_metricChineseName;
}

void TemplateMonitor::SetMetricChineseName(const string& _metricChineseName)
{
    m_metricChineseName = _metricChineseName;
    m_metricChineseNameHasBeenSet = true;
}

bool TemplateMonitor::MetricChineseNameHasBeenSet() const
{
    return m_metricChineseNameHasBeenSet;
}

