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

#include <tencentcloud/waf/v20180125/model/PostAttackDownloadTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

PostAttackDownloadTaskRequest::PostAttackDownloadTaskRequest() :
    m_domainHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_queryStringHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

string PostAttackDownloadTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
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

    if (m_queryStringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryString";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queryString.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_sortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sort.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_count, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string PostAttackDownloadTaskRequest::GetDomain() const
{
    return m_domain;
}

void PostAttackDownloadTaskRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool PostAttackDownloadTaskRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string PostAttackDownloadTaskRequest::GetStartTime() const
{
    return m_startTime;
}

void PostAttackDownloadTaskRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool PostAttackDownloadTaskRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string PostAttackDownloadTaskRequest::GetEndTime() const
{
    return m_endTime;
}

void PostAttackDownloadTaskRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool PostAttackDownloadTaskRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string PostAttackDownloadTaskRequest::GetQueryString() const
{
    return m_queryString;
}

void PostAttackDownloadTaskRequest::SetQueryString(const string& _queryString)
{
    m_queryString = _queryString;
    m_queryStringHasBeenSet = true;
}

bool PostAttackDownloadTaskRequest::QueryStringHasBeenSet() const
{
    return m_queryStringHasBeenSet;
}

string PostAttackDownloadTaskRequest::GetTaskName() const
{
    return m_taskName;
}

void PostAttackDownloadTaskRequest::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool PostAttackDownloadTaskRequest::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string PostAttackDownloadTaskRequest::GetSort() const
{
    return m_sort;
}

void PostAttackDownloadTaskRequest::SetSort(const string& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool PostAttackDownloadTaskRequest::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

int64_t PostAttackDownloadTaskRequest::GetCount() const
{
    return m_count;
}

void PostAttackDownloadTaskRequest::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool PostAttackDownloadTaskRequest::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}


