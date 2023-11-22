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

#include <tencentcloud/cfg/v20210820/model/DescribeTaskPolicyTriggerLogRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfg::V20210820::Model;
using namespace std;

DescribeTaskPolicyTriggerLogRequest::DescribeTaskPolicyTriggerLogRequest() :
    m_taskIdHasBeenSet(false),
    m_pageHasBeenSet(false),
    m_pageSizeHasBeenSet(false)
{
}

string DescribeTaskPolicyTriggerLogRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskId, allocator);
    }

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_page, allocator);
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


int64_t DescribeTaskPolicyTriggerLogRequest::GetTaskId() const
{
    return m_taskId;
}

void DescribeTaskPolicyTriggerLogRequest::SetTaskId(const int64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DescribeTaskPolicyTriggerLogRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

int64_t DescribeTaskPolicyTriggerLogRequest::GetPage() const
{
    return m_page;
}

void DescribeTaskPolicyTriggerLogRequest::SetPage(const int64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool DescribeTaskPolicyTriggerLogRequest::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

int64_t DescribeTaskPolicyTriggerLogRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeTaskPolicyTriggerLogRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeTaskPolicyTriggerLogRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}


