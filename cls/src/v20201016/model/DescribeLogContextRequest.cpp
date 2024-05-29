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

#include <tencentcloud/cls/v20201016/model/DescribeLogContextRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

DescribeLogContextRequest::DescribeLogContextRequest() :
    m_topicIdHasBeenSet(false),
    m_bTimeHasBeenSet(false),
    m_pkgIdHasBeenSet(false),
    m_pkgLogIdHasBeenSet(false),
    m_prevLogsHasBeenSet(false),
    m_nextLogsHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_fromHasBeenSet(false),
    m_toHasBeenSet(false)
{
}

string DescribeLogContextRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_bTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bTime.c_str(), allocator).Move(), allocator);
    }

    if (m_pkgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pkgId.c_str(), allocator).Move(), allocator);
    }

    if (m_pkgLogIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgLogId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pkgLogId, allocator);
    }

    if (m_prevLogsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrevLogs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_prevLogs, allocator);
    }

    if (m_nextLogsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextLogs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_nextLogs, allocator);
    }

    if (m_queryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Query";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_query.c_str(), allocator).Move(), allocator);
    }

    if (m_fromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "From";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_from, allocator);
    }

    if (m_toHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "To";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_to, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeLogContextRequest::GetTopicId() const
{
    return m_topicId;
}

void DescribeLogContextRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool DescribeLogContextRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string DescribeLogContextRequest::GetBTime() const
{
    return m_bTime;
}

void DescribeLogContextRequest::SetBTime(const string& _bTime)
{
    m_bTime = _bTime;
    m_bTimeHasBeenSet = true;
}

bool DescribeLogContextRequest::BTimeHasBeenSet() const
{
    return m_bTimeHasBeenSet;
}

string DescribeLogContextRequest::GetPkgId() const
{
    return m_pkgId;
}

void DescribeLogContextRequest::SetPkgId(const string& _pkgId)
{
    m_pkgId = _pkgId;
    m_pkgIdHasBeenSet = true;
}

bool DescribeLogContextRequest::PkgIdHasBeenSet() const
{
    return m_pkgIdHasBeenSet;
}

int64_t DescribeLogContextRequest::GetPkgLogId() const
{
    return m_pkgLogId;
}

void DescribeLogContextRequest::SetPkgLogId(const int64_t& _pkgLogId)
{
    m_pkgLogId = _pkgLogId;
    m_pkgLogIdHasBeenSet = true;
}

bool DescribeLogContextRequest::PkgLogIdHasBeenSet() const
{
    return m_pkgLogIdHasBeenSet;
}

int64_t DescribeLogContextRequest::GetPrevLogs() const
{
    return m_prevLogs;
}

void DescribeLogContextRequest::SetPrevLogs(const int64_t& _prevLogs)
{
    m_prevLogs = _prevLogs;
    m_prevLogsHasBeenSet = true;
}

bool DescribeLogContextRequest::PrevLogsHasBeenSet() const
{
    return m_prevLogsHasBeenSet;
}

int64_t DescribeLogContextRequest::GetNextLogs() const
{
    return m_nextLogs;
}

void DescribeLogContextRequest::SetNextLogs(const int64_t& _nextLogs)
{
    m_nextLogs = _nextLogs;
    m_nextLogsHasBeenSet = true;
}

bool DescribeLogContextRequest::NextLogsHasBeenSet() const
{
    return m_nextLogsHasBeenSet;
}

string DescribeLogContextRequest::GetQuery() const
{
    return m_query;
}

void DescribeLogContextRequest::SetQuery(const string& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool DescribeLogContextRequest::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

uint64_t DescribeLogContextRequest::GetFrom() const
{
    return m_from;
}

void DescribeLogContextRequest::SetFrom(const uint64_t& _from)
{
    m_from = _from;
    m_fromHasBeenSet = true;
}

bool DescribeLogContextRequest::FromHasBeenSet() const
{
    return m_fromHasBeenSet;
}

uint64_t DescribeLogContextRequest::GetTo() const
{
    return m_to;
}

void DescribeLogContextRequest::SetTo(const uint64_t& _to)
{
    m_to = _to;
    m_toHasBeenSet = true;
}

bool DescribeLogContextRequest::ToHasBeenSet() const
{
    return m_toHasBeenSet;
}


