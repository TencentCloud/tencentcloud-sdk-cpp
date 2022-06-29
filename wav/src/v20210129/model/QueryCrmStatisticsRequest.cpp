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

#include <tencentcloud/wav/v20210129/model/QueryCrmStatisticsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wav::V20210129::Model;
using namespace std;

QueryCrmStatisticsRequest::QueryCrmStatisticsRequest() :
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_cursorHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_salesIdHasBeenSet(false),
    m_orgIdHasBeenSet(false)
{
}

string QueryCrmStatisticsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_beginTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_cursorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cursor";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cursor.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_salesIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SalesId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_salesId.c_str(), allocator).Move(), allocator);
    }

    if (m_orgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_orgId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t QueryCrmStatisticsRequest::GetBeginTime() const
{
    return m_beginTime;
}

void QueryCrmStatisticsRequest::SetBeginTime(const uint64_t& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool QueryCrmStatisticsRequest::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

uint64_t QueryCrmStatisticsRequest::GetEndTime() const
{
    return m_endTime;
}

void QueryCrmStatisticsRequest::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool QueryCrmStatisticsRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string QueryCrmStatisticsRequest::GetCursor() const
{
    return m_cursor;
}

void QueryCrmStatisticsRequest::SetCursor(const string& _cursor)
{
    m_cursor = _cursor;
    m_cursorHasBeenSet = true;
}

bool QueryCrmStatisticsRequest::CursorHasBeenSet() const
{
    return m_cursorHasBeenSet;
}

int64_t QueryCrmStatisticsRequest::GetLimit() const
{
    return m_limit;
}

void QueryCrmStatisticsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool QueryCrmStatisticsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string QueryCrmStatisticsRequest::GetSalesId() const
{
    return m_salesId;
}

void QueryCrmStatisticsRequest::SetSalesId(const string& _salesId)
{
    m_salesId = _salesId;
    m_salesIdHasBeenSet = true;
}

bool QueryCrmStatisticsRequest::SalesIdHasBeenSet() const
{
    return m_salesIdHasBeenSet;
}

uint64_t QueryCrmStatisticsRequest::GetOrgId() const
{
    return m_orgId;
}

void QueryCrmStatisticsRequest::SetOrgId(const uint64_t& _orgId)
{
    m_orgId = _orgId;
    m_orgIdHasBeenSet = true;
}

bool QueryCrmStatisticsRequest::OrgIdHasBeenSet() const
{
    return m_orgIdHasBeenSet;
}


