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

#include <tencentcloud/monitor/v20180724/model/DescribeAlarmHistoryShieldRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

DescribeAlarmHistoryShieldRequest::DescribeAlarmHistoryShieldRequest() :
    m_moduleHasBeenSet(false),
    m_shieldPolicyIdHasBeenSet(false),
    m_shieldObjectHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_shieldIdHasBeenSet(false),
    m_shieldAlarmLevelHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_monitorTypeHasBeenSet(false)
{
}

string DescribeAlarmHistoryShieldRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_moduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_shieldPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShieldPolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_shieldPolicyId.c_str(), allocator).Move(), allocator);
    }

    if (m_shieldObjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShieldObject";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_shieldObject.begin(); itr != m_shieldObject.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

    if (m_shieldIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShieldId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_shieldId.c_str(), allocator).Move(), allocator);
    }

    if (m_shieldAlarmLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShieldAlarmLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_shieldAlarmLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_monitorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_monitorType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeAlarmHistoryShieldRequest::GetModule() const
{
    return m_module;
}

void DescribeAlarmHistoryShieldRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool DescribeAlarmHistoryShieldRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string DescribeAlarmHistoryShieldRequest::GetShieldPolicyId() const
{
    return m_shieldPolicyId;
}

void DescribeAlarmHistoryShieldRequest::SetShieldPolicyId(const string& _shieldPolicyId)
{
    m_shieldPolicyId = _shieldPolicyId;
    m_shieldPolicyIdHasBeenSet = true;
}

bool DescribeAlarmHistoryShieldRequest::ShieldPolicyIdHasBeenSet() const
{
    return m_shieldPolicyIdHasBeenSet;
}

vector<string> DescribeAlarmHistoryShieldRequest::GetShieldObject() const
{
    return m_shieldObject;
}

void DescribeAlarmHistoryShieldRequest::SetShieldObject(const vector<string>& _shieldObject)
{
    m_shieldObject = _shieldObject;
    m_shieldObjectHasBeenSet = true;
}

bool DescribeAlarmHistoryShieldRequest::ShieldObjectHasBeenSet() const
{
    return m_shieldObjectHasBeenSet;
}

string DescribeAlarmHistoryShieldRequest::GetMetricName() const
{
    return m_metricName;
}

void DescribeAlarmHistoryShieldRequest::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool DescribeAlarmHistoryShieldRequest::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

string DescribeAlarmHistoryShieldRequest::GetShieldId() const
{
    return m_shieldId;
}

void DescribeAlarmHistoryShieldRequest::SetShieldId(const string& _shieldId)
{
    m_shieldId = _shieldId;
    m_shieldIdHasBeenSet = true;
}

bool DescribeAlarmHistoryShieldRequest::ShieldIdHasBeenSet() const
{
    return m_shieldIdHasBeenSet;
}

string DescribeAlarmHistoryShieldRequest::GetShieldAlarmLevel() const
{
    return m_shieldAlarmLevel;
}

void DescribeAlarmHistoryShieldRequest::SetShieldAlarmLevel(const string& _shieldAlarmLevel)
{
    m_shieldAlarmLevel = _shieldAlarmLevel;
    m_shieldAlarmLevelHasBeenSet = true;
}

bool DescribeAlarmHistoryShieldRequest::ShieldAlarmLevelHasBeenSet() const
{
    return m_shieldAlarmLevelHasBeenSet;
}

string DescribeAlarmHistoryShieldRequest::GetSessionId() const
{
    return m_sessionId;
}

void DescribeAlarmHistoryShieldRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool DescribeAlarmHistoryShieldRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string DescribeAlarmHistoryShieldRequest::GetMonitorType() const
{
    return m_monitorType;
}

void DescribeAlarmHistoryShieldRequest::SetMonitorType(const string& _monitorType)
{
    m_monitorType = _monitorType;
    m_monitorTypeHasBeenSet = true;
}

bool DescribeAlarmHistoryShieldRequest::MonitorTypeHasBeenSet() const
{
    return m_monitorTypeHasBeenSet;
}


