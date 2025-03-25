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

#include <tencentcloud/cdwdoris/v20211228/model/DescribeSlowQueryRecordsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

DescribeSlowQueryRecordsRequest::DescribeSlowQueryRecordsRequest() :
    m_instanceIdHasBeenSet(false),
    m_queryDurationMsHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_pageNumHasBeenSet(false),
    m_durationMsHasBeenSet(false),
    m_dbNameHasBeenSet(false),
    m_isQueryHasBeenSet(false),
    m_catalogNameHasBeenSet(false),
    m_sqlHasBeenSet(false),
    m_readRowsHasBeenSet(false),
    m_resultBytesHasBeenSet(false),
    m_memoryUsageHasBeenSet(false),
    m_sortFieldHasBeenSet(false),
    m_sortOrderHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_computeGroupsHasBeenSet(false)
{
}

string DescribeSlowQueryRecordsRequest::ToJsonString() const
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

    if (m_queryDurationMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryDurationMs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_queryDurationMs, allocator);
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

    if (m_durationMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DurationMs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_durationMs.c_str(), allocator).Move(), allocator);
    }

    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dbName.begin(); itr != m_dbName.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isQueryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsQuery";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isQuery, allocator);
    }

    if (m_catalogNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CatalogName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_catalogName.begin(); itr != m_catalogName.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sqlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sql";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sql.c_str(), allocator).Move(), allocator);
    }

    if (m_readRowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadRows";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_readRows.c_str(), allocator).Move(), allocator);
    }

    if (m_resultBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultBytes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resultBytes.c_str(), allocator).Move(), allocator);
    }

    if (m_memoryUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemoryUsage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_memoryUsage.c_str(), allocator).Move(), allocator);
    }

    if (m_sortFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortField";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortField.c_str(), allocator).Move(), allocator);
    }

    if (m_sortOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortOrder";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortOrder.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_computeGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeGroups";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_computeGroups.begin(); itr != m_computeGroups.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeSlowQueryRecordsRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeSlowQueryRecordsRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeSlowQueryRecordsRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t DescribeSlowQueryRecordsRequest::GetQueryDurationMs() const
{
    return m_queryDurationMs;
}

void DescribeSlowQueryRecordsRequest::SetQueryDurationMs(const int64_t& _queryDurationMs)
{
    m_queryDurationMs = _queryDurationMs;
    m_queryDurationMsHasBeenSet = true;
}

bool DescribeSlowQueryRecordsRequest::QueryDurationMsHasBeenSet() const
{
    return m_queryDurationMsHasBeenSet;
}

string DescribeSlowQueryRecordsRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeSlowQueryRecordsRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeSlowQueryRecordsRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeSlowQueryRecordsRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeSlowQueryRecordsRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeSlowQueryRecordsRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeSlowQueryRecordsRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeSlowQueryRecordsRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeSlowQueryRecordsRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t DescribeSlowQueryRecordsRequest::GetPageNum() const
{
    return m_pageNum;
}

void DescribeSlowQueryRecordsRequest::SetPageNum(const int64_t& _pageNum)
{
    m_pageNum = _pageNum;
    m_pageNumHasBeenSet = true;
}

bool DescribeSlowQueryRecordsRequest::PageNumHasBeenSet() const
{
    return m_pageNumHasBeenSet;
}

string DescribeSlowQueryRecordsRequest::GetDurationMs() const
{
    return m_durationMs;
}

void DescribeSlowQueryRecordsRequest::SetDurationMs(const string& _durationMs)
{
    m_durationMs = _durationMs;
    m_durationMsHasBeenSet = true;
}

bool DescribeSlowQueryRecordsRequest::DurationMsHasBeenSet() const
{
    return m_durationMsHasBeenSet;
}

vector<string> DescribeSlowQueryRecordsRequest::GetDbName() const
{
    return m_dbName;
}

void DescribeSlowQueryRecordsRequest::SetDbName(const vector<string>& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool DescribeSlowQueryRecordsRequest::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

int64_t DescribeSlowQueryRecordsRequest::GetIsQuery() const
{
    return m_isQuery;
}

void DescribeSlowQueryRecordsRequest::SetIsQuery(const int64_t& _isQuery)
{
    m_isQuery = _isQuery;
    m_isQueryHasBeenSet = true;
}

bool DescribeSlowQueryRecordsRequest::IsQueryHasBeenSet() const
{
    return m_isQueryHasBeenSet;
}

vector<string> DescribeSlowQueryRecordsRequest::GetCatalogName() const
{
    return m_catalogName;
}

void DescribeSlowQueryRecordsRequest::SetCatalogName(const vector<string>& _catalogName)
{
    m_catalogName = _catalogName;
    m_catalogNameHasBeenSet = true;
}

bool DescribeSlowQueryRecordsRequest::CatalogNameHasBeenSet() const
{
    return m_catalogNameHasBeenSet;
}

string DescribeSlowQueryRecordsRequest::GetSql() const
{
    return m_sql;
}

void DescribeSlowQueryRecordsRequest::SetSql(const string& _sql)
{
    m_sql = _sql;
    m_sqlHasBeenSet = true;
}

bool DescribeSlowQueryRecordsRequest::SqlHasBeenSet() const
{
    return m_sqlHasBeenSet;
}

string DescribeSlowQueryRecordsRequest::GetReadRows() const
{
    return m_readRows;
}

void DescribeSlowQueryRecordsRequest::SetReadRows(const string& _readRows)
{
    m_readRows = _readRows;
    m_readRowsHasBeenSet = true;
}

bool DescribeSlowQueryRecordsRequest::ReadRowsHasBeenSet() const
{
    return m_readRowsHasBeenSet;
}

string DescribeSlowQueryRecordsRequest::GetResultBytes() const
{
    return m_resultBytes;
}

void DescribeSlowQueryRecordsRequest::SetResultBytes(const string& _resultBytes)
{
    m_resultBytes = _resultBytes;
    m_resultBytesHasBeenSet = true;
}

bool DescribeSlowQueryRecordsRequest::ResultBytesHasBeenSet() const
{
    return m_resultBytesHasBeenSet;
}

string DescribeSlowQueryRecordsRequest::GetMemoryUsage() const
{
    return m_memoryUsage;
}

void DescribeSlowQueryRecordsRequest::SetMemoryUsage(const string& _memoryUsage)
{
    m_memoryUsage = _memoryUsage;
    m_memoryUsageHasBeenSet = true;
}

bool DescribeSlowQueryRecordsRequest::MemoryUsageHasBeenSet() const
{
    return m_memoryUsageHasBeenSet;
}

string DescribeSlowQueryRecordsRequest::GetSortField() const
{
    return m_sortField;
}

void DescribeSlowQueryRecordsRequest::SetSortField(const string& _sortField)
{
    m_sortField = _sortField;
    m_sortFieldHasBeenSet = true;
}

bool DescribeSlowQueryRecordsRequest::SortFieldHasBeenSet() const
{
    return m_sortFieldHasBeenSet;
}

string DescribeSlowQueryRecordsRequest::GetSortOrder() const
{
    return m_sortOrder;
}

void DescribeSlowQueryRecordsRequest::SetSortOrder(const string& _sortOrder)
{
    m_sortOrder = _sortOrder;
    m_sortOrderHasBeenSet = true;
}

bool DescribeSlowQueryRecordsRequest::SortOrderHasBeenSet() const
{
    return m_sortOrderHasBeenSet;
}

string DescribeSlowQueryRecordsRequest::GetUserName() const
{
    return m_userName;
}

void DescribeSlowQueryRecordsRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool DescribeSlowQueryRecordsRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

vector<string> DescribeSlowQueryRecordsRequest::GetComputeGroups() const
{
    return m_computeGroups;
}

void DescribeSlowQueryRecordsRequest::SetComputeGroups(const vector<string>& _computeGroups)
{
    m_computeGroups = _computeGroups;
    m_computeGroupsHasBeenSet = true;
}

bool DescribeSlowQueryRecordsRequest::ComputeGroupsHasBeenSet() const
{
    return m_computeGroupsHasBeenSet;
}


