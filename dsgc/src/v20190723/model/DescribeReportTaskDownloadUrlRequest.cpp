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

#include <tencentcloud/dsgc/v20190723/model/DescribeReportTaskDownloadUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DescribeReportTaskDownloadUrlRequest::DescribeReportTaskDownloadUrlRequest() :
    m_reportTaskIdHasBeenSet(false),
    m_dspaIdHasBeenSet(false),
    m_isWithSensitiveDetailReportHasBeenSet(false)
{
}

string DescribeReportTaskDownloadUrlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_reportTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportTaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_reportTaskId, allocator);
    }

    if (m_dspaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DspaId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dspaId.c_str(), allocator).Move(), allocator);
    }

    if (m_isWithSensitiveDetailReportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsWithSensitiveDetailReport";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isWithSensitiveDetailReport, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeReportTaskDownloadUrlRequest::GetReportTaskId() const
{
    return m_reportTaskId;
}

void DescribeReportTaskDownloadUrlRequest::SetReportTaskId(const uint64_t& _reportTaskId)
{
    m_reportTaskId = _reportTaskId;
    m_reportTaskIdHasBeenSet = true;
}

bool DescribeReportTaskDownloadUrlRequest::ReportTaskIdHasBeenSet() const
{
    return m_reportTaskIdHasBeenSet;
}

string DescribeReportTaskDownloadUrlRequest::GetDspaId() const
{
    return m_dspaId;
}

void DescribeReportTaskDownloadUrlRequest::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool DescribeReportTaskDownloadUrlRequest::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

bool DescribeReportTaskDownloadUrlRequest::GetIsWithSensitiveDetailReport() const
{
    return m_isWithSensitiveDetailReport;
}

void DescribeReportTaskDownloadUrlRequest::SetIsWithSensitiveDetailReport(const bool& _isWithSensitiveDetailReport)
{
    m_isWithSensitiveDetailReport = _isWithSensitiveDetailReport;
    m_isWithSensitiveDetailReportHasBeenSet = true;
}

bool DescribeReportTaskDownloadUrlRequest::IsWithSensitiveDetailReportHasBeenSet() const
{
    return m_isWithSensitiveDetailReportHasBeenSet;
}


