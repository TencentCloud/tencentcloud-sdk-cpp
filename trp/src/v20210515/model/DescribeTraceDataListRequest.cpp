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

#include <tencentcloud/trp/v20210515/model/DescribeTraceDataListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

DescribeTraceDataListRequest::DescribeTraceDataListRequest() :
    m_corpIdHasBeenSet(false),
    m_batchIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_phaseHasBeenSet(false),
    m_pageSizeHasBeenSet(false)
{
}

string DescribeTraceDataListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_corpIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorpId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_corpId, allocator);
    }

    if (m_batchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_batchId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNumber, allocator);
    }

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
    }

    if (m_phaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phase";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_phase, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeTraceDataListRequest::GetCorpId() const
{
    return m_corpId;
}

void DescribeTraceDataListRequest::SetCorpId(const uint64_t& _corpId)
{
    m_corpId = _corpId;
    m_corpIdHasBeenSet = true;
}

bool DescribeTraceDataListRequest::CorpIdHasBeenSet() const
{
    return m_corpIdHasBeenSet;
}

string DescribeTraceDataListRequest::GetBatchId() const
{
    return m_batchId;
}

void DescribeTraceDataListRequest::SetBatchId(const string& _batchId)
{
    m_batchId = _batchId;
    m_batchIdHasBeenSet = true;
}

bool DescribeTraceDataListRequest::BatchIdHasBeenSet() const
{
    return m_batchIdHasBeenSet;
}

string DescribeTraceDataListRequest::GetTaskId() const
{
    return m_taskId;
}

void DescribeTraceDataListRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DescribeTraceDataListRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

uint64_t DescribeTraceDataListRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeTraceDataListRequest::SetPageNumber(const uint64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeTraceDataListRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

string DescribeTraceDataListRequest::GetCode() const
{
    return m_code;
}

void DescribeTraceDataListRequest::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool DescribeTraceDataListRequest::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

uint64_t DescribeTraceDataListRequest::GetPhase() const
{
    return m_phase;
}

void DescribeTraceDataListRequest::SetPhase(const uint64_t& _phase)
{
    m_phase = _phase;
    m_phaseHasBeenSet = true;
}

bool DescribeTraceDataListRequest::PhaseHasBeenSet() const
{
    return m_phaseHasBeenSet;
}

uint64_t DescribeTraceDataListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeTraceDataListRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeTraceDataListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}


