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

#include <tencentcloud/iss/v20230517/model/DescribeAITaskResultRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

DescribeAITaskResultRequest::DescribeAITaskResultRequest() :
    m_taskIdHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_objectHasBeenSet(false),
    m_detectTypeHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false)
{
}

string DescribeAITaskResultRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelId.c_str(), allocator).Move(), allocator);
    }

    if (m_objectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Object";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_object.c_str(), allocator).Move(), allocator);
    }

    if (m_detectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_detectType.c_str(), allocator).Move(), allocator);
    }

    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_beginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNumber, allocator);
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


string DescribeAITaskResultRequest::GetTaskId() const
{
    return m_taskId;
}

void DescribeAITaskResultRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DescribeAITaskResultRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DescribeAITaskResultRequest::GetChannelId() const
{
    return m_channelId;
}

void DescribeAITaskResultRequest::SetChannelId(const string& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool DescribeAITaskResultRequest::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string DescribeAITaskResultRequest::GetObject() const
{
    return m_object;
}

void DescribeAITaskResultRequest::SetObject(const string& _object)
{
    m_object = _object;
    m_objectHasBeenSet = true;
}

bool DescribeAITaskResultRequest::ObjectHasBeenSet() const
{
    return m_objectHasBeenSet;
}

string DescribeAITaskResultRequest::GetDetectType() const
{
    return m_detectType;
}

void DescribeAITaskResultRequest::SetDetectType(const string& _detectType)
{
    m_detectType = _detectType;
    m_detectTypeHasBeenSet = true;
}

bool DescribeAITaskResultRequest::DetectTypeHasBeenSet() const
{
    return m_detectTypeHasBeenSet;
}

string DescribeAITaskResultRequest::GetBeginTime() const
{
    return m_beginTime;
}

void DescribeAITaskResultRequest::SetBeginTime(const string& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool DescribeAITaskResultRequest::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

string DescribeAITaskResultRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeAITaskResultRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeAITaskResultRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t DescribeAITaskResultRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeAITaskResultRequest::SetPageNumber(const uint64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeAITaskResultRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

uint64_t DescribeAITaskResultRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeAITaskResultRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeAITaskResultRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}


