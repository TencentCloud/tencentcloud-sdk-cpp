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

#include <tencentcloud/wedata/v20210820/model/DescribeOpsMakePlansRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeOpsMakePlansRequest::DescribeOpsMakePlansRequest() :
    m_projectIdHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_planIdHasBeenSet(false),
    m_planNameHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_minCreateTimeHasBeenSet(false),
    m_maxCreateTimeHasBeenSet(false),
    m_stateListHasBeenSet(false),
    m_keywordHasBeenSet(false)
{
}

string DescribeOpsMakePlansRequest::ToJsonString() const
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

    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNumber, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_planIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_planId.c_str(), allocator).Move(), allocator);
    }

    if (m_planNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_planName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_minCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinCreateTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_minCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_maxCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxCreateTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_maxCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_stateListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StateList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_stateList.begin(); itr != m_stateList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeOpsMakePlansRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeOpsMakePlansRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeOpsMakePlansRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t DescribeOpsMakePlansRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeOpsMakePlansRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeOpsMakePlansRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t DescribeOpsMakePlansRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeOpsMakePlansRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeOpsMakePlansRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string DescribeOpsMakePlansRequest::GetPlanId() const
{
    return m_planId;
}

void DescribeOpsMakePlansRequest::SetPlanId(const string& _planId)
{
    m_planId = _planId;
    m_planIdHasBeenSet = true;
}

bool DescribeOpsMakePlansRequest::PlanIdHasBeenSet() const
{
    return m_planIdHasBeenSet;
}

string DescribeOpsMakePlansRequest::GetPlanName() const
{
    return m_planName;
}

void DescribeOpsMakePlansRequest::SetPlanName(const string& _planName)
{
    m_planName = _planName;
    m_planNameHasBeenSet = true;
}

bool DescribeOpsMakePlansRequest::PlanNameHasBeenSet() const
{
    return m_planNameHasBeenSet;
}

string DescribeOpsMakePlansRequest::GetTaskName() const
{
    return m_taskName;
}

void DescribeOpsMakePlansRequest::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool DescribeOpsMakePlansRequest::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string DescribeOpsMakePlansRequest::GetTaskId() const
{
    return m_taskId;
}

void DescribeOpsMakePlansRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DescribeOpsMakePlansRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DescribeOpsMakePlansRequest::GetCreator() const
{
    return m_creator;
}

void DescribeOpsMakePlansRequest::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool DescribeOpsMakePlansRequest::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

string DescribeOpsMakePlansRequest::GetMinCreateTime() const
{
    return m_minCreateTime;
}

void DescribeOpsMakePlansRequest::SetMinCreateTime(const string& _minCreateTime)
{
    m_minCreateTime = _minCreateTime;
    m_minCreateTimeHasBeenSet = true;
}

bool DescribeOpsMakePlansRequest::MinCreateTimeHasBeenSet() const
{
    return m_minCreateTimeHasBeenSet;
}

string DescribeOpsMakePlansRequest::GetMaxCreateTime() const
{
    return m_maxCreateTime;
}

void DescribeOpsMakePlansRequest::SetMaxCreateTime(const string& _maxCreateTime)
{
    m_maxCreateTime = _maxCreateTime;
    m_maxCreateTimeHasBeenSet = true;
}

bool DescribeOpsMakePlansRequest::MaxCreateTimeHasBeenSet() const
{
    return m_maxCreateTimeHasBeenSet;
}

vector<int64_t> DescribeOpsMakePlansRequest::GetStateList() const
{
    return m_stateList;
}

void DescribeOpsMakePlansRequest::SetStateList(const vector<int64_t>& _stateList)
{
    m_stateList = _stateList;
    m_stateListHasBeenSet = true;
}

bool DescribeOpsMakePlansRequest::StateListHasBeenSet() const
{
    return m_stateListHasBeenSet;
}

string DescribeOpsMakePlansRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribeOpsMakePlansRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeOpsMakePlansRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}


