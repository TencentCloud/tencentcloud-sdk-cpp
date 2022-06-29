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

#include <tencentcloud/oceanus/v20190422/model/DescribeJobConfigsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

DescribeJobConfigsRequest::DescribeJobConfigsRequest() :
    m_jobIdHasBeenSet(false),
    m_jobConfigVersionsHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_onlyDraftHasBeenSet(false),
    m_workSpaceIdHasBeenSet(false)
{
}

string DescribeJobConfigsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_jobConfigVersionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobConfigVersions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_jobConfigVersions.begin(); itr != m_jobConfigVersions.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_onlyDraftHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlyDraft";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_onlyDraft, allocator);
    }

    if (m_workSpaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkSpaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workSpaceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeJobConfigsRequest::GetJobId() const
{
    return m_jobId;
}

void DescribeJobConfigsRequest::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool DescribeJobConfigsRequest::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

vector<uint64_t> DescribeJobConfigsRequest::GetJobConfigVersions() const
{
    return m_jobConfigVersions;
}

void DescribeJobConfigsRequest::SetJobConfigVersions(const vector<uint64_t>& _jobConfigVersions)
{
    m_jobConfigVersions = _jobConfigVersions;
    m_jobConfigVersionsHasBeenSet = true;
}

bool DescribeJobConfigsRequest::JobConfigVersionsHasBeenSet() const
{
    return m_jobConfigVersionsHasBeenSet;
}

int64_t DescribeJobConfigsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeJobConfigsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeJobConfigsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeJobConfigsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeJobConfigsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeJobConfigsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<Filter> DescribeJobConfigsRequest::GetFilters() const
{
    return m_filters;
}

void DescribeJobConfigsRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeJobConfigsRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

bool DescribeJobConfigsRequest::GetOnlyDraft() const
{
    return m_onlyDraft;
}

void DescribeJobConfigsRequest::SetOnlyDraft(const bool& _onlyDraft)
{
    m_onlyDraft = _onlyDraft;
    m_onlyDraftHasBeenSet = true;
}

bool DescribeJobConfigsRequest::OnlyDraftHasBeenSet() const
{
    return m_onlyDraftHasBeenSet;
}

string DescribeJobConfigsRequest::GetWorkSpaceId() const
{
    return m_workSpaceId;
}

void DescribeJobConfigsRequest::SetWorkSpaceId(const string& _workSpaceId)
{
    m_workSpaceId = _workSpaceId;
    m_workSpaceIdHasBeenSet = true;
}

bool DescribeJobConfigsRequest::WorkSpaceIdHasBeenSet() const
{
    return m_workSpaceIdHasBeenSet;
}


