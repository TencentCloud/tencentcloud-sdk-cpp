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

#include <tencentcloud/teo/v20220901/model/CreateLogAnalysisDownloadTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

CreateLogAnalysisDownloadTaskRequest::CreateLogAnalysisDownloadTaskRequest() :
    m_zoneIdHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_logTypeHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_sortHasBeenSet(false)
{
}

string CreateLogAnalysisDownloadTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
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

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logType.c_str(), allocator).Move(), allocator);
    }

    if (m_conditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Condition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_condition.c_str(), allocator).Move(), allocator);
    }

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_format.c_str(), allocator).Move(), allocator);
    }

    if (m_sortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sort.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateLogAnalysisDownloadTaskRequest::GetZoneId() const
{
    return m_zoneId;
}

void CreateLogAnalysisDownloadTaskRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool CreateLogAnalysisDownloadTaskRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string CreateLogAnalysisDownloadTaskRequest::GetArea() const
{
    return m_area;
}

void CreateLogAnalysisDownloadTaskRequest::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool CreateLogAnalysisDownloadTaskRequest::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

string CreateLogAnalysisDownloadTaskRequest::GetStartTime() const
{
    return m_startTime;
}

void CreateLogAnalysisDownloadTaskRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool CreateLogAnalysisDownloadTaskRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string CreateLogAnalysisDownloadTaskRequest::GetEndTime() const
{
    return m_endTime;
}

void CreateLogAnalysisDownloadTaskRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool CreateLogAnalysisDownloadTaskRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string CreateLogAnalysisDownloadTaskRequest::GetLogType() const
{
    return m_logType;
}

void CreateLogAnalysisDownloadTaskRequest::SetLogType(const string& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool CreateLogAnalysisDownloadTaskRequest::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

string CreateLogAnalysisDownloadTaskRequest::GetCondition() const
{
    return m_condition;
}

void CreateLogAnalysisDownloadTaskRequest::SetCondition(const string& _condition)
{
    m_condition = _condition;
    m_conditionHasBeenSet = true;
}

bool CreateLogAnalysisDownloadTaskRequest::ConditionHasBeenSet() const
{
    return m_conditionHasBeenSet;
}

string CreateLogAnalysisDownloadTaskRequest::GetFormat() const
{
    return m_format;
}

void CreateLogAnalysisDownloadTaskRequest::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool CreateLogAnalysisDownloadTaskRequest::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

string CreateLogAnalysisDownloadTaskRequest::GetSort() const
{
    return m_sort;
}

void CreateLogAnalysisDownloadTaskRequest::SetSort(const string& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool CreateLogAnalysisDownloadTaskRequest::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}


