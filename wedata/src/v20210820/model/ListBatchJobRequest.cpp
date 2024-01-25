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

#include <tencentcloud/wedata/v20210820/model/ListBatchJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ListBatchJobRequest::ListBatchJobRequest() :
    m_projectIdHasBeenSet(false),
    m_jobTypeHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_startOperateTimeHasBeenSet(false),
    m_endOperateTimeHasBeenSet(false),
    m_pageHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_sortTypeHasBeenSet(false),
    m_sortItemHasBeenSet(false)
{
}

string ListBatchJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_jobTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobType.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ownerId.c_str(), allocator).Move(), allocator);
    }

    if (m_startOperateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartOperateTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startOperateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endOperateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndOperateTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endOperateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_page, allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_size, allocator);
    }

    if (m_sortTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortType.c_str(), allocator).Move(), allocator);
    }

    if (m_sortItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortItem";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortItem.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListBatchJobRequest::GetProjectId() const
{
    return m_projectId;
}

void ListBatchJobRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ListBatchJobRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ListBatchJobRequest::GetJobType() const
{
    return m_jobType;
}

void ListBatchJobRequest::SetJobType(const string& _jobType)
{
    m_jobType = _jobType;
    m_jobTypeHasBeenSet = true;
}

bool ListBatchJobRequest::JobTypeHasBeenSet() const
{
    return m_jobTypeHasBeenSet;
}

string ListBatchJobRequest::GetOwnerId() const
{
    return m_ownerId;
}

void ListBatchJobRequest::SetOwnerId(const string& _ownerId)
{
    m_ownerId = _ownerId;
    m_ownerIdHasBeenSet = true;
}

bool ListBatchJobRequest::OwnerIdHasBeenSet() const
{
    return m_ownerIdHasBeenSet;
}

string ListBatchJobRequest::GetStartOperateTime() const
{
    return m_startOperateTime;
}

void ListBatchJobRequest::SetStartOperateTime(const string& _startOperateTime)
{
    m_startOperateTime = _startOperateTime;
    m_startOperateTimeHasBeenSet = true;
}

bool ListBatchJobRequest::StartOperateTimeHasBeenSet() const
{
    return m_startOperateTimeHasBeenSet;
}

string ListBatchJobRequest::GetEndOperateTime() const
{
    return m_endOperateTime;
}

void ListBatchJobRequest::SetEndOperateTime(const string& _endOperateTime)
{
    m_endOperateTime = _endOperateTime;
    m_endOperateTimeHasBeenSet = true;
}

bool ListBatchJobRequest::EndOperateTimeHasBeenSet() const
{
    return m_endOperateTimeHasBeenSet;
}

int64_t ListBatchJobRequest::GetPage() const
{
    return m_page;
}

void ListBatchJobRequest::SetPage(const int64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool ListBatchJobRequest::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

int64_t ListBatchJobRequest::GetSize() const
{
    return m_size;
}

void ListBatchJobRequest::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool ListBatchJobRequest::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string ListBatchJobRequest::GetSortType() const
{
    return m_sortType;
}

void ListBatchJobRequest::SetSortType(const string& _sortType)
{
    m_sortType = _sortType;
    m_sortTypeHasBeenSet = true;
}

bool ListBatchJobRequest::SortTypeHasBeenSet() const
{
    return m_sortTypeHasBeenSet;
}

string ListBatchJobRequest::GetSortItem() const
{
    return m_sortItem;
}

void ListBatchJobRequest::SetSortItem(const string& _sortItem)
{
    m_sortItem = _sortItem;
    m_sortItemHasBeenSet = true;
}

bool ListBatchJobRequest::SortItemHasBeenSet() const
{
    return m_sortItemHasBeenSet;
}


