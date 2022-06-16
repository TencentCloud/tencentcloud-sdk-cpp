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
using namespace std;

DescribeTasksRequest::DescribeTasksRequest() :
    m_subAppIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_fileIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_finishTimeHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_scrollTokenHasBeenSet(false)
{
}

string DescribeTasksRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_createTime.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_finishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_finishTime.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_sortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sort.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_scrollTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScrollToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scrollToken.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
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

TimeRange DescribeTasksRequest::GetCreateTime() const
{
    return m_createTime;
}

void DescribeTasksRequest::SetCreateTime(const TimeRange& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DescribeTasksRequest::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

TimeRange DescribeTasksRequest::GetFinishTime() const
{
    return m_finishTime;
}

void DescribeTasksRequest::SetFinishTime(const TimeRange& _finishTime)
{
    m_finishTime = _finishTime;
    m_finishTimeHasBeenSet = true;
}

bool DescribeTasksRequest::FinishTimeHasBeenSet() const
{
    return m_finishTimeHasBeenSet;
}

SortBy DescribeTasksRequest::GetSort() const
{
    return m_sort;
}

void DescribeTasksRequest::SetSort(const SortBy& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool DescribeTasksRequest::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
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


