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

#include <tencentcloud/cds/v20180420/model/DescribeReportMissionListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cds::V20180420::Model;
using namespace std;

DescribeReportMissionListRequest::DescribeReportMissionListRequest() :
    m_tplNameHasBeenSet(false),
    m_reportTypeHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_missionStatusHasBeenSet(false),
    m_fieldHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string DescribeReportMissionListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_tplNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TplName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tplName.c_str(), allocator).Move(), allocator);
    }

    if (m_reportTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_reportType, allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_templateId, allocator);
    }

    if (m_missionStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MissionStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_missionStatus, allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeReportMissionListRequest::GetTplName() const
{
    return m_tplName;
}

void DescribeReportMissionListRequest::SetTplName(const string& _tplName)
{
    m_tplName = _tplName;
    m_tplNameHasBeenSet = true;
}

bool DescribeReportMissionListRequest::TplNameHasBeenSet() const
{
    return m_tplNameHasBeenSet;
}

int64_t DescribeReportMissionListRequest::GetReportType() const
{
    return m_reportType;
}

void DescribeReportMissionListRequest::SetReportType(const int64_t& _reportType)
{
    m_reportType = _reportType;
    m_reportTypeHasBeenSet = true;
}

bool DescribeReportMissionListRequest::ReportTypeHasBeenSet() const
{
    return m_reportTypeHasBeenSet;
}

int64_t DescribeReportMissionListRequest::GetTemplateId() const
{
    return m_templateId;
}

void DescribeReportMissionListRequest::SetTemplateId(const int64_t& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool DescribeReportMissionListRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

int64_t DescribeReportMissionListRequest::GetMissionStatus() const
{
    return m_missionStatus;
}

void DescribeReportMissionListRequest::SetMissionStatus(const int64_t& _missionStatus)
{
    m_missionStatus = _missionStatus;
    m_missionStatusHasBeenSet = true;
}

bool DescribeReportMissionListRequest::MissionStatusHasBeenSet() const
{
    return m_missionStatusHasBeenSet;
}

string DescribeReportMissionListRequest::GetField() const
{
    return m_field;
}

void DescribeReportMissionListRequest::SetField(const string& _field)
{
    m_field = _field;
    m_fieldHasBeenSet = true;
}

bool DescribeReportMissionListRequest::FieldHasBeenSet() const
{
    return m_fieldHasBeenSet;
}

string DescribeReportMissionListRequest::GetSort() const
{
    return m_sort;
}

void DescribeReportMissionListRequest::SetSort(const string& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool DescribeReportMissionListRequest::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

int64_t DescribeReportMissionListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeReportMissionListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeReportMissionListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeReportMissionListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeReportMissionListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeReportMissionListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


