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

#include <tencentcloud/wedata/v20210820/model/DescribeReportTaskDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeReportTaskDetailRequest::DescribeReportTaskDetailRequest() :
    m_pageNumHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_tenantIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_engineTaskIdHasBeenSet(false),
    m_productSourceHasBeenSet(false),
    m_onwerUidHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

string DescribeReportTaskDetailRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_pageNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNum, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_tenantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TenantId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tenantId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_engineTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineTaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_engineTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_productSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productSource.c_str(), allocator).Move(), allocator);
    }

    if (m_onwerUidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnwerUid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_onwerUid.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeReportTaskDetailRequest::GetPageNum() const
{
    return m_pageNum;
}

void DescribeReportTaskDetailRequest::SetPageNum(const uint64_t& _pageNum)
{
    m_pageNum = _pageNum;
    m_pageNumHasBeenSet = true;
}

bool DescribeReportTaskDetailRequest::PageNumHasBeenSet() const
{
    return m_pageNumHasBeenSet;
}

uint64_t DescribeReportTaskDetailRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeReportTaskDetailRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeReportTaskDetailRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string DescribeReportTaskDetailRequest::GetTenantId() const
{
    return m_tenantId;
}

void DescribeReportTaskDetailRequest::SetTenantId(const string& _tenantId)
{
    m_tenantId = _tenantId;
    m_tenantIdHasBeenSet = true;
}

bool DescribeReportTaskDetailRequest::TenantIdHasBeenSet() const
{
    return m_tenantIdHasBeenSet;
}

string DescribeReportTaskDetailRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeReportTaskDetailRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeReportTaskDetailRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeReportTaskDetailRequest::GetTaskId() const
{
    return m_taskId;
}

void DescribeReportTaskDetailRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DescribeReportTaskDetailRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DescribeReportTaskDetailRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeReportTaskDetailRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeReportTaskDetailRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeReportTaskDetailRequest::GetJobId() const
{
    return m_jobId;
}

void DescribeReportTaskDetailRequest::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool DescribeReportTaskDetailRequest::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string DescribeReportTaskDetailRequest::GetEngineTaskId() const
{
    return m_engineTaskId;
}

void DescribeReportTaskDetailRequest::SetEngineTaskId(const string& _engineTaskId)
{
    m_engineTaskId = _engineTaskId;
    m_engineTaskIdHasBeenSet = true;
}

bool DescribeReportTaskDetailRequest::EngineTaskIdHasBeenSet() const
{
    return m_engineTaskIdHasBeenSet;
}

string DescribeReportTaskDetailRequest::GetProductSource() const
{
    return m_productSource;
}

void DescribeReportTaskDetailRequest::SetProductSource(const string& _productSource)
{
    m_productSource = _productSource;
    m_productSourceHasBeenSet = true;
}

bool DescribeReportTaskDetailRequest::ProductSourceHasBeenSet() const
{
    return m_productSourceHasBeenSet;
}

string DescribeReportTaskDetailRequest::GetOnwerUid() const
{
    return m_onwerUid;
}

void DescribeReportTaskDetailRequest::SetOnwerUid(const string& _onwerUid)
{
    m_onwerUid = _onwerUid;
    m_onwerUidHasBeenSet = true;
}

bool DescribeReportTaskDetailRequest::OnwerUidHasBeenSet() const
{
    return m_onwerUidHasBeenSet;
}

string DescribeReportTaskDetailRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeReportTaskDetailRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeReportTaskDetailRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeReportTaskDetailRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeReportTaskDetailRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeReportTaskDetailRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}


