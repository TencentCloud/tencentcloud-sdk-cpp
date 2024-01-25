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

#include <tencentcloud/wedata/v20210820/model/DescribeRecordListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeRecordListRequest::DescribeRecordListRequest() :
    m_scriptIdHasBeenSet(false),
    m_pageIndexHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_scriptTypeHasBeenSet(false),
    m_sqlStatementHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_isOnlyMyselfDebugHasBeenSet(false)
{
}

string DescribeRecordListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_scriptIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scriptId.c_str(), allocator).Move(), allocator);
    }

    if (m_pageIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageIndex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageIndex, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_scriptTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scriptType.c_str(), allocator).Move(), allocator);
    }

    if (m_sqlStatementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlStatement";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sqlStatement.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_isOnlyMyselfDebugHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsOnlyMyselfDebug";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isOnlyMyselfDebug, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeRecordListRequest::GetScriptId() const
{
    return m_scriptId;
}

void DescribeRecordListRequest::SetScriptId(const string& _scriptId)
{
    m_scriptId = _scriptId;
    m_scriptIdHasBeenSet = true;
}

bool DescribeRecordListRequest::ScriptIdHasBeenSet() const
{
    return m_scriptIdHasBeenSet;
}

uint64_t DescribeRecordListRequest::GetPageIndex() const
{
    return m_pageIndex;
}

void DescribeRecordListRequest::SetPageIndex(const uint64_t& _pageIndex)
{
    m_pageIndex = _pageIndex;
    m_pageIndexHasBeenSet = true;
}

bool DescribeRecordListRequest::PageIndexHasBeenSet() const
{
    return m_pageIndexHasBeenSet;
}

uint64_t DescribeRecordListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeRecordListRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeRecordListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string DescribeRecordListRequest::GetScriptType() const
{
    return m_scriptType;
}

void DescribeRecordListRequest::SetScriptType(const string& _scriptType)
{
    m_scriptType = _scriptType;
    m_scriptTypeHasBeenSet = true;
}

bool DescribeRecordListRequest::ScriptTypeHasBeenSet() const
{
    return m_scriptTypeHasBeenSet;
}

string DescribeRecordListRequest::GetSqlStatement() const
{
    return m_sqlStatement;
}

void DescribeRecordListRequest::SetSqlStatement(const string& _sqlStatement)
{
    m_sqlStatement = _sqlStatement;
    m_sqlStatementHasBeenSet = true;
}

bool DescribeRecordListRequest::SqlStatementHasBeenSet() const
{
    return m_sqlStatementHasBeenSet;
}

uint64_t DescribeRecordListRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeRecordListRequest::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeRecordListRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t DescribeRecordListRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeRecordListRequest::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeRecordListRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeRecordListRequest::GetStatus() const
{
    return m_status;
}

void DescribeRecordListRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeRecordListRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

bool DescribeRecordListRequest::GetIsOnlyMyselfDebug() const
{
    return m_isOnlyMyselfDebug;
}

void DescribeRecordListRequest::SetIsOnlyMyselfDebug(const bool& _isOnlyMyselfDebug)
{
    m_isOnlyMyselfDebug = _isOnlyMyselfDebug;
    m_isOnlyMyselfDebugHasBeenSet = true;
}

bool DescribeRecordListRequest::IsOnlyMyselfDebugHasBeenSet() const
{
    return m_isOnlyMyselfDebugHasBeenSet;
}


