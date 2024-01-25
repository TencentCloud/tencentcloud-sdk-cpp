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

#include <tencentcloud/wedata/v20210820/model/DescribeCodeSearchCountRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeCodeSearchCountRequest::DescribeCodeSearchCountRequest() :
    m_keywordHasBeenSet(false),
    m_searchScopesHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_ownerIdsHasBeenSet(false),
    m_fileTypesHasBeenSet(false),
    m_taskTypesHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

string DescribeCodeSearchCountRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_searchScopesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchScopes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_searchScopes.begin(); itr != m_searchScopes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ownerIds.begin(); itr != m_ownerIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fileTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fileTypes.begin(); itr != m_fileTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_taskTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskTypes.begin(); itr != m_taskTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCodeSearchCountRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribeCodeSearchCountRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeCodeSearchCountRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

vector<string> DescribeCodeSearchCountRequest::GetSearchScopes() const
{
    return m_searchScopes;
}

void DescribeCodeSearchCountRequest::SetSearchScopes(const vector<string>& _searchScopes)
{
    m_searchScopes = _searchScopes;
    m_searchScopesHasBeenSet = true;
}

bool DescribeCodeSearchCountRequest::SearchScopesHasBeenSet() const
{
    return m_searchScopesHasBeenSet;
}

string DescribeCodeSearchCountRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeCodeSearchCountRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeCodeSearchCountRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<string> DescribeCodeSearchCountRequest::GetOwnerIds() const
{
    return m_ownerIds;
}

void DescribeCodeSearchCountRequest::SetOwnerIds(const vector<string>& _ownerIds)
{
    m_ownerIds = _ownerIds;
    m_ownerIdsHasBeenSet = true;
}

bool DescribeCodeSearchCountRequest::OwnerIdsHasBeenSet() const
{
    return m_ownerIdsHasBeenSet;
}

vector<string> DescribeCodeSearchCountRequest::GetFileTypes() const
{
    return m_fileTypes;
}

void DescribeCodeSearchCountRequest::SetFileTypes(const vector<string>& _fileTypes)
{
    m_fileTypes = _fileTypes;
    m_fileTypesHasBeenSet = true;
}

bool DescribeCodeSearchCountRequest::FileTypesHasBeenSet() const
{
    return m_fileTypesHasBeenSet;
}

vector<string> DescribeCodeSearchCountRequest::GetTaskTypes() const
{
    return m_taskTypes;
}

void DescribeCodeSearchCountRequest::SetTaskTypes(const vector<string>& _taskTypes)
{
    m_taskTypes = _taskTypes;
    m_taskTypesHasBeenSet = true;
}

bool DescribeCodeSearchCountRequest::TaskTypesHasBeenSet() const
{
    return m_taskTypesHasBeenSet;
}

string DescribeCodeSearchCountRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeCodeSearchCountRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeCodeSearchCountRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeCodeSearchCountRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeCodeSearchCountRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeCodeSearchCountRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeCodeSearchCountRequest::GetStatus() const
{
    return m_status;
}

void DescribeCodeSearchCountRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeCodeSearchCountRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


