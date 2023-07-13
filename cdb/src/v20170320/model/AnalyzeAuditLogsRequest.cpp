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

#include <tencentcloud/cdb/v20170320/model/AnalyzeAuditLogsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

AnalyzeAuditLogsRequest::AnalyzeAuditLogsRequest() :
    m_instanceIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_aggregationConditionsHasBeenSet(false),
    m_auditLogFilterHasBeenSet(false),
    m_logFilterHasBeenSet(false)
{
}

string AnalyzeAuditLogsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_aggregationConditionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AggregationConditions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_aggregationConditions.begin(); itr != m_aggregationConditions.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_auditLogFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditLogFilter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_auditLogFilter.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_logFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogFilter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_logFilter.begin(); itr != m_logFilter.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AnalyzeAuditLogsRequest::GetInstanceId() const
{
    return m_instanceId;
}

void AnalyzeAuditLogsRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool AnalyzeAuditLogsRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string AnalyzeAuditLogsRequest::GetStartTime() const
{
    return m_startTime;
}

void AnalyzeAuditLogsRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool AnalyzeAuditLogsRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string AnalyzeAuditLogsRequest::GetEndTime() const
{
    return m_endTime;
}

void AnalyzeAuditLogsRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool AnalyzeAuditLogsRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<AggregationCondition> AnalyzeAuditLogsRequest::GetAggregationConditions() const
{
    return m_aggregationConditions;
}

void AnalyzeAuditLogsRequest::SetAggregationConditions(const vector<AggregationCondition>& _aggregationConditions)
{
    m_aggregationConditions = _aggregationConditions;
    m_aggregationConditionsHasBeenSet = true;
}

bool AnalyzeAuditLogsRequest::AggregationConditionsHasBeenSet() const
{
    return m_aggregationConditionsHasBeenSet;
}

AuditLogFilter AnalyzeAuditLogsRequest::GetAuditLogFilter() const
{
    return m_auditLogFilter;
}

void AnalyzeAuditLogsRequest::SetAuditLogFilter(const AuditLogFilter& _auditLogFilter)
{
    m_auditLogFilter = _auditLogFilter;
    m_auditLogFilterHasBeenSet = true;
}

bool AnalyzeAuditLogsRequest::AuditLogFilterHasBeenSet() const
{
    return m_auditLogFilterHasBeenSet;
}

vector<InstanceAuditLogFilters> AnalyzeAuditLogsRequest::GetLogFilter() const
{
    return m_logFilter;
}

void AnalyzeAuditLogsRequest::SetLogFilter(const vector<InstanceAuditLogFilters>& _logFilter)
{
    m_logFilter = _logFilter;
    m_logFilterHasBeenSet = true;
}

bool AnalyzeAuditLogsRequest::LogFilterHasBeenSet() const
{
    return m_logFilterHasBeenSet;
}


