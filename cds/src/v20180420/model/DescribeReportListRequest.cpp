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

#include <tencentcloud/cds/v20180420/model/DescribeReportListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cds::V20180420::Model;
using namespace std;

DescribeReportListRequest::DescribeReportListRequest() :
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_reportTypeHasBeenSet(false),
    m_reportStatusHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_fieldHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_cntDayHasBeenSet(false)
{
}

string DescribeReportListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_reportTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_reportType, allocator);
    }

    if (m_reportStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_reportStatus, allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_templateId, allocator);
    }

    if (m_fieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Field";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_field.c_str(), allocator).Move(), allocator);
    }

    if (m_sortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sort.c_str(), allocator).Move(), allocator);
    }

    if (m_cntDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CntDay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cntDay, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeReportListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeReportListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeReportListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeReportListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeReportListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeReportListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeReportListRequest::GetName() const
{
    return m_name;
}

void DescribeReportListRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeReportListRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t DescribeReportListRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeReportListRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeReportListRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeReportListRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeReportListRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeReportListRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeReportListRequest::GetReportType() const
{
    return m_reportType;
}

void DescribeReportListRequest::SetReportType(const int64_t& _reportType)
{
    m_reportType = _reportType;
    m_reportTypeHasBeenSet = true;
}

bool DescribeReportListRequest::ReportTypeHasBeenSet() const
{
    return m_reportTypeHasBeenSet;
}

int64_t DescribeReportListRequest::GetReportStatus() const
{
    return m_reportStatus;
}

void DescribeReportListRequest::SetReportStatus(const int64_t& _reportStatus)
{
    m_reportStatus = _reportStatus;
    m_reportStatusHasBeenSet = true;
}

bool DescribeReportListRequest::ReportStatusHasBeenSet() const
{
    return m_reportStatusHasBeenSet;
}

int64_t DescribeReportListRequest::GetTemplateId() const
{
    return m_templateId;
}

void DescribeReportListRequest::SetTemplateId(const int64_t& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool DescribeReportListRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string DescribeReportListRequest::GetField() const
{
    return m_field;
}

void DescribeReportListRequest::SetField(const string& _field)
{
    m_field = _field;
    m_fieldHasBeenSet = true;
}

bool DescribeReportListRequest::FieldHasBeenSet() const
{
    return m_fieldHasBeenSet;
}

string DescribeReportListRequest::GetSort() const
{
    return m_sort;
}

void DescribeReportListRequest::SetSort(const string& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool DescribeReportListRequest::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

int64_t DescribeReportListRequest::GetCntDay() const
{
    return m_cntDay;
}

void DescribeReportListRequest::SetCntDay(const int64_t& _cntDay)
{
    m_cntDay = _cntDay;
    m_cntDayHasBeenSet = true;
}

bool DescribeReportListRequest::CntDayHasBeenSet() const
{
    return m_cntDayHasBeenSet;
}


