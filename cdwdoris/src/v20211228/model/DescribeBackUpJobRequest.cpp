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

#include <tencentcloud/cdwdoris/v20211228/model/DescribeBackUpJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

DescribeBackUpJobRequest::DescribeBackUpJobRequest() :
    m_instanceIdHasBeenSet(false),
    m_applicationTypeHasBeenSet(false),
    m_typeFiltersHasBeenSet(false),
    m_statusFiltersHasBeenSet(false),
    m_scheduleNameFiltersHasBeenSet(false),
    m_orderTypeHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_pageNumHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_jobIdFiltersStrHasBeenSet(false),
    m_encryptionFiltersHasBeenSet(false)
{
}

string DescribeBackUpJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_applicationType, allocator);
    }

    if (m_typeFiltersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeFilters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_typeFilters.begin(); itr != m_typeFilters.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_statusFiltersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusFilters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_statusFilters.begin(); itr != m_statusFilters.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_scheduleNameFiltersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleNameFilters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scheduleNameFilters.c_str(), allocator).Move(), allocator);
    }

    if (m_orderTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderType.c_str(), allocator).Move(), allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_pageNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNum, allocator);
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

    if (m_jobIdFiltersStrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobIdFiltersStr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobIdFiltersStr.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptionFiltersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptionFilters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_encryptionFilters.begin(); itr != m_encryptionFilters.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeBackUpJobRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeBackUpJobRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeBackUpJobRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t DescribeBackUpJobRequest::GetApplicationType() const
{
    return m_applicationType;
}

void DescribeBackUpJobRequest::SetApplicationType(const int64_t& _applicationType)
{
    m_applicationType = _applicationType;
    m_applicationTypeHasBeenSet = true;
}

bool DescribeBackUpJobRequest::ApplicationTypeHasBeenSet() const
{
    return m_applicationTypeHasBeenSet;
}

vector<int64_t> DescribeBackUpJobRequest::GetTypeFilters() const
{
    return m_typeFilters;
}

void DescribeBackUpJobRequest::SetTypeFilters(const vector<int64_t>& _typeFilters)
{
    m_typeFilters = _typeFilters;
    m_typeFiltersHasBeenSet = true;
}

bool DescribeBackUpJobRequest::TypeFiltersHasBeenSet() const
{
    return m_typeFiltersHasBeenSet;
}

vector<int64_t> DescribeBackUpJobRequest::GetStatusFilters() const
{
    return m_statusFilters;
}

void DescribeBackUpJobRequest::SetStatusFilters(const vector<int64_t>& _statusFilters)
{
    m_statusFilters = _statusFilters;
    m_statusFiltersHasBeenSet = true;
}

bool DescribeBackUpJobRequest::StatusFiltersHasBeenSet() const
{
    return m_statusFiltersHasBeenSet;
}

string DescribeBackUpJobRequest::GetScheduleNameFilters() const
{
    return m_scheduleNameFilters;
}

void DescribeBackUpJobRequest::SetScheduleNameFilters(const string& _scheduleNameFilters)
{
    m_scheduleNameFilters = _scheduleNameFilters;
    m_scheduleNameFiltersHasBeenSet = true;
}

bool DescribeBackUpJobRequest::ScheduleNameFiltersHasBeenSet() const
{
    return m_scheduleNameFiltersHasBeenSet;
}

string DescribeBackUpJobRequest::GetOrderType() const
{
    return m_orderType;
}

void DescribeBackUpJobRequest::SetOrderType(const string& _orderType)
{
    m_orderType = _orderType;
    m_orderTypeHasBeenSet = true;
}

bool DescribeBackUpJobRequest::OrderTypeHasBeenSet() const
{
    return m_orderTypeHasBeenSet;
}

int64_t DescribeBackUpJobRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeBackUpJobRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeBackUpJobRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t DescribeBackUpJobRequest::GetPageNum() const
{
    return m_pageNum;
}

void DescribeBackUpJobRequest::SetPageNum(const int64_t& _pageNum)
{
    m_pageNum = _pageNum;
    m_pageNumHasBeenSet = true;
}

bool DescribeBackUpJobRequest::PageNumHasBeenSet() const
{
    return m_pageNumHasBeenSet;
}

string DescribeBackUpJobRequest::GetBeginTime() const
{
    return m_beginTime;
}

void DescribeBackUpJobRequest::SetBeginTime(const string& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool DescribeBackUpJobRequest::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

string DescribeBackUpJobRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeBackUpJobRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeBackUpJobRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeBackUpJobRequest::GetJobIdFiltersStr() const
{
    return m_jobIdFiltersStr;
}

void DescribeBackUpJobRequest::SetJobIdFiltersStr(const string& _jobIdFiltersStr)
{
    m_jobIdFiltersStr = _jobIdFiltersStr;
    m_jobIdFiltersStrHasBeenSet = true;
}

bool DescribeBackUpJobRequest::JobIdFiltersStrHasBeenSet() const
{
    return m_jobIdFiltersStrHasBeenSet;
}

vector<int64_t> DescribeBackUpJobRequest::GetEncryptionFilters() const
{
    return m_encryptionFilters;
}

void DescribeBackUpJobRequest::SetEncryptionFilters(const vector<int64_t>& _encryptionFilters)
{
    m_encryptionFilters = _encryptionFilters;
    m_encryptionFiltersHasBeenSet = true;
}

bool DescribeBackUpJobRequest::EncryptionFiltersHasBeenSet() const
{
    return m_encryptionFiltersHasBeenSet;
}


