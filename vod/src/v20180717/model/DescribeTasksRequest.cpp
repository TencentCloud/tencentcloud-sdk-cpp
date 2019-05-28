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

#include <tencentcloud/vod/v20180717/model/DescribeTasksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

DescribeTasksRequest::DescribeTasksRequest() :
    m_statusHasBeenSet(false),
    m_fileIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_scrollTokenHasBeenSet(false),
    m_subAppIdHasBeenSet(false)
{
}

string DescribeTasksRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_fileIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_scrollTokenHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ScrollToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_scrollToken.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTasksRequest::GetStatus() const
{
    return m_status;
}

void DescribeTasksRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeTasksRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeTasksRequest::GetFileId() const
{
    return m_fileId;
}

void DescribeTasksRequest::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool DescribeTasksRequest::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

uint64_t DescribeTasksRequest::GetLimit() const
{
    return m_limit;
}

void DescribeTasksRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeTasksRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeTasksRequest::GetScrollToken() const
{
    return m_scrollToken;
}

void DescribeTasksRequest::SetScrollToken(const string& _scrollToken)
{
    m_scrollToken = _scrollToken;
    m_scrollTokenHasBeenSet = true;
}

bool DescribeTasksRequest::ScrollTokenHasBeenSet() const
{
    return m_scrollTokenHasBeenSet;
}

uint64_t DescribeTasksRequest::GetSubAppId() const
{
    return m_subAppId;
}

void DescribeTasksRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool DescribeTasksRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}


