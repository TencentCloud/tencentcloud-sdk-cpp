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

#include <tencentcloud/sqlserver/v20180328/model/CreateExportTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

CreateExportTaskRequest::CreateExportTaskRequest() :
    m_instanceIdHasBeenSet(false),
    m_logTypeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_logFilterHasBeenSet(false),
    m_columnFilterHasBeenSet(false)
{
}

string CreateExportTaskRequest::ToJsonString() const
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

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logType.c_str(), allocator).Move(), allocator);
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

    if (m_columnFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnFilter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_columnFilter.begin(); itr != m_columnFilter.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateExportTaskRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateExportTaskRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateExportTaskRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateExportTaskRequest::GetLogType() const
{
    return m_logType;
}

void CreateExportTaskRequest::SetLogType(const string& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool CreateExportTaskRequest::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

string CreateExportTaskRequest::GetStartTime() const
{
    return m_startTime;
}

void CreateExportTaskRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool CreateExportTaskRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string CreateExportTaskRequest::GetEndTime() const
{
    return m_endTime;
}

void CreateExportTaskRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool CreateExportTaskRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<LogFilter> CreateExportTaskRequest::GetLogFilter() const
{
    return m_logFilter;
}

void CreateExportTaskRequest::SetLogFilter(const vector<LogFilter>& _logFilter)
{
    m_logFilter = _logFilter;
    m_logFilterHasBeenSet = true;
}

bool CreateExportTaskRequest::LogFilterHasBeenSet() const
{
    return m_logFilterHasBeenSet;
}

vector<string> CreateExportTaskRequest::GetColumnFilter() const
{
    return m_columnFilter;
}

void CreateExportTaskRequest::SetColumnFilter(const vector<string>& _columnFilter)
{
    m_columnFilter = _columnFilter;
    m_columnFilterHasBeenSet = true;
}

bool CreateExportTaskRequest::ColumnFilterHasBeenSet() const
{
    return m_columnFilterHasBeenSet;
}


