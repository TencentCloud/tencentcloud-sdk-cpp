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

#include <tencentcloud/cls/v20201016/model/DescribeAsyncContextResultRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

DescribeAsyncContextResultRequest::DescribeAsyncContextResultRequest() :
    m_asyncContextTaskIdHasBeenSet(false),
    m_pkgIdHasBeenSet(false),
    m_pkgLogIdHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_prevLogsHasBeenSet(false),
    m_nextLogsHasBeenSet(false)
{
}

string DescribeAsyncContextResultRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_asyncContextTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsyncContextTaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_asyncContextTaskId.c_str(), allocator).Move(), allocator);
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
        d.AddMember(iKey, rapidjson::Value(m_pkgLogId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeAsyncContextResultRequest::GetAsyncContextTaskId() const
{
    return m_asyncContextTaskId;
}

void DescribeAsyncContextResultRequest::SetAsyncContextTaskId(const string& _asyncContextTaskId)
{
    m_asyncContextTaskId = _asyncContextTaskId;
    m_asyncContextTaskIdHasBeenSet = true;
}

bool DescribeAsyncContextResultRequest::AsyncContextTaskIdHasBeenSet() const
{
    return m_asyncContextTaskIdHasBeenSet;
}

string DescribeAsyncContextResultRequest::GetPkgId() const
{
    return m_pkgId;
}

void DescribeAsyncContextResultRequest::SetPkgId(const string& _pkgId)
{
    m_pkgId = _pkgId;
    m_pkgIdHasBeenSet = true;
}

bool DescribeAsyncContextResultRequest::PkgIdHasBeenSet() const
{
    return m_pkgIdHasBeenSet;
}

string DescribeAsyncContextResultRequest::GetPkgLogId() const
{
    return m_pkgLogId;
}

void DescribeAsyncContextResultRequest::SetPkgLogId(const string& _pkgLogId)
{
    m_pkgLogId = _pkgLogId;
    m_pkgLogIdHasBeenSet = true;
}

bool DescribeAsyncContextResultRequest::PkgLogIdHasBeenSet() const
{
    return m_pkgLogIdHasBeenSet;
}

string DescribeAsyncContextResultRequest::GetTopicId() const
{
    return m_topicId;
}

void DescribeAsyncContextResultRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool DescribeAsyncContextResultRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

int64_t DescribeAsyncContextResultRequest::GetPrevLogs() const
{
    return m_prevLogs;
}

void DescribeAsyncContextResultRequest::SetPrevLogs(const int64_t& _prevLogs)
{
    m_prevLogs = _prevLogs;
    m_prevLogsHasBeenSet = true;
}

bool DescribeAsyncContextResultRequest::PrevLogsHasBeenSet() const
{
    return m_prevLogsHasBeenSet;
}

int64_t DescribeAsyncContextResultRequest::GetNextLogs() const
{
    return m_nextLogs;
}

void DescribeAsyncContextResultRequest::SetNextLogs(const int64_t& _nextLogs)
{
    m_nextLogs = _nextLogs;
    m_nextLogsHasBeenSet = true;
}

bool DescribeAsyncContextResultRequest::NextLogsHasBeenSet() const
{
    return m_nextLogsHasBeenSet;
}


