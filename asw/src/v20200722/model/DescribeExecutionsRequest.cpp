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

#include <tencentcloud/asw/v20200722/model/DescribeExecutionsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Asw::V20200722::Model;
using namespace std;

DescribeExecutionsRequest::DescribeExecutionsRequest() :
    m_stateMachineResourceNameHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_pageIndexHasBeenSet(false),
    m_filterExecutionStatusHasBeenSet(false),
    m_filterExecutionResourceNameHasBeenSet(false)
{
}

string DescribeExecutionsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_stateMachineResourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StateMachineResourceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_stateMachineResourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_pageIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageIndex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageIndex, allocator);
    }

    if (m_filterExecutionStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterExecutionStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filterExecutionStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_filterExecutionResourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterExecutionResourceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filterExecutionResourceName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeExecutionsRequest::GetStateMachineResourceName() const
{
    return m_stateMachineResourceName;
}

void DescribeExecutionsRequest::SetStateMachineResourceName(const string& _stateMachineResourceName)
{
    m_stateMachineResourceName = _stateMachineResourceName;
    m_stateMachineResourceNameHasBeenSet = true;
}

bool DescribeExecutionsRequest::StateMachineResourceNameHasBeenSet() const
{
    return m_stateMachineResourceNameHasBeenSet;
}

int64_t DescribeExecutionsRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeExecutionsRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeExecutionsRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t DescribeExecutionsRequest::GetPageIndex() const
{
    return m_pageIndex;
}

void DescribeExecutionsRequest::SetPageIndex(const int64_t& _pageIndex)
{
    m_pageIndex = _pageIndex;
    m_pageIndexHasBeenSet = true;
}

bool DescribeExecutionsRequest::PageIndexHasBeenSet() const
{
    return m_pageIndexHasBeenSet;
}

string DescribeExecutionsRequest::GetFilterExecutionStatus() const
{
    return m_filterExecutionStatus;
}

void DescribeExecutionsRequest::SetFilterExecutionStatus(const string& _filterExecutionStatus)
{
    m_filterExecutionStatus = _filterExecutionStatus;
    m_filterExecutionStatusHasBeenSet = true;
}

bool DescribeExecutionsRequest::FilterExecutionStatusHasBeenSet() const
{
    return m_filterExecutionStatusHasBeenSet;
}

string DescribeExecutionsRequest::GetFilterExecutionResourceName() const
{
    return m_filterExecutionResourceName;
}

void DescribeExecutionsRequest::SetFilterExecutionResourceName(const string& _filterExecutionResourceName)
{
    m_filterExecutionResourceName = _filterExecutionResourceName;
    m_filterExecutionResourceNameHasBeenSet = true;
}

bool DescribeExecutionsRequest::FilterExecutionResourceNameHasBeenSet() const
{
    return m_filterExecutionResourceNameHasBeenSet;
}


