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

#include <tencentcloud/emr/v20190103/model/EnableSparkAppMonitorInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

EnableSparkAppMonitorInfo::EnableSparkAppMonitorInfo() :
    m_prometheusInstanceIdHasBeenSet(false),
    m_grafanaInstanceIdHasBeenSet(false),
    m_enableMonitorHasBeenSet(false),
    m_grafanaURLHasBeenSet(false)
{
}

CoreInternalOutcome EnableSparkAppMonitorInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PrometheusInstanceId") && !value["PrometheusInstanceId"].IsNull())
    {
        if (!value["PrometheusInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnableSparkAppMonitorInfo.PrometheusInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prometheusInstanceId = string(value["PrometheusInstanceId"].GetString());
        m_prometheusInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("GrafanaInstanceId") && !value["GrafanaInstanceId"].IsNull())
    {
        if (!value["GrafanaInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnableSparkAppMonitorInfo.GrafanaInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_grafanaInstanceId = string(value["GrafanaInstanceId"].GetString());
        m_grafanaInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("EnableMonitor") && !value["EnableMonitor"].IsNull())
    {
        if (!value["EnableMonitor"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EnableSparkAppMonitorInfo.EnableMonitor` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableMonitor = value["EnableMonitor"].GetBool();
        m_enableMonitorHasBeenSet = true;
    }

    if (value.HasMember("GrafanaURL") && !value["GrafanaURL"].IsNull())
    {
        if (!value["GrafanaURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnableSparkAppMonitorInfo.GrafanaURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_grafanaURL = string(value["GrafanaURL"].GetString());
        m_grafanaURLHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EnableSparkAppMonitorInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_prometheusInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrometheusInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prometheusInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_grafanaInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GrafanaInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_grafanaInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_enableMonitorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableMonitor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableMonitor, allocator);
    }

    if (m_grafanaURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GrafanaURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_grafanaURL.c_str(), allocator).Move(), allocator);
    }

}


string EnableSparkAppMonitorInfo::GetPrometheusInstanceId() const
{
    return m_prometheusInstanceId;
}

void EnableSparkAppMonitorInfo::SetPrometheusInstanceId(const string& _prometheusInstanceId)
{
    m_prometheusInstanceId = _prometheusInstanceId;
    m_prometheusInstanceIdHasBeenSet = true;
}

bool EnableSparkAppMonitorInfo::PrometheusInstanceIdHasBeenSet() const
{
    return m_prometheusInstanceIdHasBeenSet;
}

string EnableSparkAppMonitorInfo::GetGrafanaInstanceId() const
{
    return m_grafanaInstanceId;
}

void EnableSparkAppMonitorInfo::SetGrafanaInstanceId(const string& _grafanaInstanceId)
{
    m_grafanaInstanceId = _grafanaInstanceId;
    m_grafanaInstanceIdHasBeenSet = true;
}

bool EnableSparkAppMonitorInfo::GrafanaInstanceIdHasBeenSet() const
{
    return m_grafanaInstanceIdHasBeenSet;
}

bool EnableSparkAppMonitorInfo::GetEnableMonitor() const
{
    return m_enableMonitor;
}

void EnableSparkAppMonitorInfo::SetEnableMonitor(const bool& _enableMonitor)
{
    m_enableMonitor = _enableMonitor;
    m_enableMonitorHasBeenSet = true;
}

bool EnableSparkAppMonitorInfo::EnableMonitorHasBeenSet() const
{
    return m_enableMonitorHasBeenSet;
}

string EnableSparkAppMonitorInfo::GetGrafanaURL() const
{
    return m_grafanaURL;
}

void EnableSparkAppMonitorInfo::SetGrafanaURL(const string& _grafanaURL)
{
    m_grafanaURL = _grafanaURL;
    m_grafanaURLHasBeenSet = true;
}

bool EnableSparkAppMonitorInfo::GrafanaURLHasBeenSet() const
{
    return m_grafanaURLHasBeenSet;
}

