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

#include <tencentcloud/cdwdoris/v20211228/model/DescribeBackUpSchedulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

DescribeBackUpSchedulesRequest::DescribeBackUpSchedulesRequest() :
    m_applicationTypeHasBeenSet(false),
    m_usersFiltersHasBeenSet(false),
    m_typeFiltersHasBeenSet(false),
    m_statusFiltersHasBeenSet(false),
    m_orderTypeHasBeenSet(false),
    m_scheduleNameFiltersHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_pageNumHasBeenSet(false),
    m_encryptionFiltersHasBeenSet(false),
    m_scheduleIdHasBeenSet(false)
{
}

string DescribeBackUpSchedulesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_applicationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_applicationType, allocator);
    }

    if (m_usersFiltersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsersFilters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_usersFilters.begin(); itr != m_usersFilters.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_orderTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderType.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduleNameFiltersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleNameFilters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scheduleNameFilters.c_str(), allocator).Move(), allocator);
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

    if (m_scheduleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scheduleId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeBackUpSchedulesRequest::GetApplicationType() const
{
    return m_applicationType;
}

void DescribeBackUpSchedulesRequest::SetApplicationType(const int64_t& _applicationType)
{
    m_applicationType = _applicationType;
    m_applicationTypeHasBeenSet = true;
}

bool DescribeBackUpSchedulesRequest::ApplicationTypeHasBeenSet() const
{
    return m_applicationTypeHasBeenSet;
}

vector<string> DescribeBackUpSchedulesRequest::GetUsersFilters() const
{
    return m_usersFilters;
}

void DescribeBackUpSchedulesRequest::SetUsersFilters(const vector<string>& _usersFilters)
{
    m_usersFilters = _usersFilters;
    m_usersFiltersHasBeenSet = true;
}

bool DescribeBackUpSchedulesRequest::UsersFiltersHasBeenSet() const
{
    return m_usersFiltersHasBeenSet;
}

vector<int64_t> DescribeBackUpSchedulesRequest::GetTypeFilters() const
{
    return m_typeFilters;
}

void DescribeBackUpSchedulesRequest::SetTypeFilters(const vector<int64_t>& _typeFilters)
{
    m_typeFilters = _typeFilters;
    m_typeFiltersHasBeenSet = true;
}

bool DescribeBackUpSchedulesRequest::TypeFiltersHasBeenSet() const
{
    return m_typeFiltersHasBeenSet;
}

vector<int64_t> DescribeBackUpSchedulesRequest::GetStatusFilters() const
{
    return m_statusFilters;
}

void DescribeBackUpSchedulesRequest::SetStatusFilters(const vector<int64_t>& _statusFilters)
{
    m_statusFilters = _statusFilters;
    m_statusFiltersHasBeenSet = true;
}

bool DescribeBackUpSchedulesRequest::StatusFiltersHasBeenSet() const
{
    return m_statusFiltersHasBeenSet;
}

string DescribeBackUpSchedulesRequest::GetOrderType() const
{
    return m_orderType;
}

void DescribeBackUpSchedulesRequest::SetOrderType(const string& _orderType)
{
    m_orderType = _orderType;
    m_orderTypeHasBeenSet = true;
}

bool DescribeBackUpSchedulesRequest::OrderTypeHasBeenSet() const
{
    return m_orderTypeHasBeenSet;
}

string DescribeBackUpSchedulesRequest::GetScheduleNameFilters() const
{
    return m_scheduleNameFilters;
}

void DescribeBackUpSchedulesRequest::SetScheduleNameFilters(const string& _scheduleNameFilters)
{
    m_scheduleNameFilters = _scheduleNameFilters;
    m_scheduleNameFiltersHasBeenSet = true;
}

bool DescribeBackUpSchedulesRequest::ScheduleNameFiltersHasBeenSet() const
{
    return m_scheduleNameFiltersHasBeenSet;
}

int64_t DescribeBackUpSchedulesRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeBackUpSchedulesRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeBackUpSchedulesRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t DescribeBackUpSchedulesRequest::GetPageNum() const
{
    return m_pageNum;
}

void DescribeBackUpSchedulesRequest::SetPageNum(const int64_t& _pageNum)
{
    m_pageNum = _pageNum;
    m_pageNumHasBeenSet = true;
}

bool DescribeBackUpSchedulesRequest::PageNumHasBeenSet() const
{
    return m_pageNumHasBeenSet;
}

vector<int64_t> DescribeBackUpSchedulesRequest::GetEncryptionFilters() const
{
    return m_encryptionFilters;
}

void DescribeBackUpSchedulesRequest::SetEncryptionFilters(const vector<int64_t>& _encryptionFilters)
{
    m_encryptionFilters = _encryptionFilters;
    m_encryptionFiltersHasBeenSet = true;
}

bool DescribeBackUpSchedulesRequest::EncryptionFiltersHasBeenSet() const
{
    return m_encryptionFiltersHasBeenSet;
}

int64_t DescribeBackUpSchedulesRequest::GetScheduleId() const
{
    return m_scheduleId;
}

void DescribeBackUpSchedulesRequest::SetScheduleId(const int64_t& _scheduleId)
{
    m_scheduleId = _scheduleId;
    m_scheduleIdHasBeenSet = true;
}

bool DescribeBackUpSchedulesRequest::ScheduleIdHasBeenSet() const
{
    return m_scheduleIdHasBeenSet;
}


