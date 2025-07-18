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

#include <tencentcloud/acp/v20220105/model/DescribeChannelTaskReportUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Acp::V20220105::Model;
using namespace std;

DescribeChannelTaskReportUrlRequest::DescribeChannelTaskReportUrlRequest() :
    m_sourceHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_taskIDHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_reportTypeHasBeenSet(false),
    m_appMD5HasBeenSet(false)
{
}

string DescribeChannelTaskReportUrlRequest::ToJsonString() const
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

    if (m_appMD5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppMD5";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appMD5.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeChannelTaskReportUrlRequest::GetSource() const
{
    return m_source;
}

void DescribeChannelTaskReportUrlRequest::SetSource(const int64_t& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool DescribeChannelTaskReportUrlRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

int64_t DescribeChannelTaskReportUrlRequest::GetPlatform() const
{
    return m_platform;
}

void DescribeChannelTaskReportUrlRequest::SetPlatform(const int64_t& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool DescribeChannelTaskReportUrlRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string DescribeChannelTaskReportUrlRequest::GetTaskID() const
{
    return m_taskID;
}

void DescribeChannelTaskReportUrlRequest::SetTaskID(const string& _taskID)
{
    m_taskID = _taskID;
    m_taskIDHasBeenSet = true;
}

bool DescribeChannelTaskReportUrlRequest::TaskIDHasBeenSet() const
{
    return m_taskIDHasBeenSet;
}

int64_t DescribeChannelTaskReportUrlRequest::GetTaskType() const
{
    return m_taskType;
}

void DescribeChannelTaskReportUrlRequest::SetTaskType(const int64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool DescribeChannelTaskReportUrlRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

int64_t DescribeChannelTaskReportUrlRequest::GetReportType() const
{
    return m_reportType;
}

void DescribeChannelTaskReportUrlRequest::SetReportType(const int64_t& _reportType)
{
    m_reportType = _reportType;
    m_reportTypeHasBeenSet = true;
}

bool DescribeChannelTaskReportUrlRequest::ReportTypeHasBeenSet() const
{
    return m_reportTypeHasBeenSet;
}

string DescribeChannelTaskReportUrlRequest::GetAppMD5() const
{
    return m_appMD5;
}

void DescribeChannelTaskReportUrlRequest::SetAppMD5(const string& _appMD5)
{
    m_appMD5 = _appMD5;
    m_appMD5HasBeenSet = true;
}

bool DescribeChannelTaskReportUrlRequest::AppMD5HasBeenSet() const
{
    return m_appMD5HasBeenSet;
}


