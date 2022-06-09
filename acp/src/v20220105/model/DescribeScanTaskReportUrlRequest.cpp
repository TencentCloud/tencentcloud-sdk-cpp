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

#include <tencentcloud/acp/v20220105/model/DescribeScanTaskReportUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Acp::V20220105::Model;
using namespace std;

DescribeScanTaskReportUrlRequest::DescribeScanTaskReportUrlRequest() :
    m_sourceHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_taskIDHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_reportTypeHasBeenSet(false)
{
}

string DescribeScanTaskReportUrlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_source, allocator);
    }

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_platform, allocator);
    }

    if (m_taskIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskID.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskType, allocator);
    }

    if (m_reportTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_reportType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeScanTaskReportUrlRequest::GetSource() const
{
    return m_source;
}

void DescribeScanTaskReportUrlRequest::SetSource(const int64_t& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool DescribeScanTaskReportUrlRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

int64_t DescribeScanTaskReportUrlRequest::GetPlatform() const
{
    return m_platform;
}

void DescribeScanTaskReportUrlRequest::SetPlatform(const int64_t& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool DescribeScanTaskReportUrlRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string DescribeScanTaskReportUrlRequest::GetTaskID() const
{
    return m_taskID;
}

void DescribeScanTaskReportUrlRequest::SetTaskID(const string& _taskID)
{
    m_taskID = _taskID;
    m_taskIDHasBeenSet = true;
}

bool DescribeScanTaskReportUrlRequest::TaskIDHasBeenSet() const
{
    return m_taskIDHasBeenSet;
}

int64_t DescribeScanTaskReportUrlRequest::GetTaskType() const
{
    return m_taskType;
}

void DescribeScanTaskReportUrlRequest::SetTaskType(const int64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool DescribeScanTaskReportUrlRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

int64_t DescribeScanTaskReportUrlRequest::GetReportType() const
{
    return m_reportType;
}

void DescribeScanTaskReportUrlRequest::SetReportType(const int64_t& _reportType)
{
    m_reportType = _reportType;
    m_reportTypeHasBeenSet = true;
}

bool DescribeScanTaskReportUrlRequest::ReportTypeHasBeenSet() const
{
    return m_reportTypeHasBeenSet;
}


