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

#include <tencentcloud/oceanus/v20190422/model/DescribeJobsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

DescribeJobsRequest::DescribeJobsRequest() :
    m_jobIdsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_workSpaceIdHasBeenSet(false),
    m_extraResultHasBeenSet(false),
    m_connectorOptionsHasBeenSet(false)
{
}

string DescribeJobsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_jobIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_jobIds.begin(); itr != m_jobIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_workSpaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkSpaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workSpaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_extraResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraResult";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_extraResult.begin(); itr != m_extraResult.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_connectorOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectorOptions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_connectorOptions.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeJobsRequest::GetJobIds() const
{
    return m_jobIds;
}

void DescribeJobsRequest::SetJobIds(const vector<string>& _jobIds)
{
    m_jobIds = _jobIds;
    m_jobIdsHasBeenSet = true;
}

bool DescribeJobsRequest::JobIdsHasBeenSet() const
{
    return m_jobIdsHasBeenSet;
}

vector<Filter> DescribeJobsRequest::GetFilters() const
{
    return m_filters;
}

void DescribeJobsRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeJobsRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

int64_t DescribeJobsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeJobsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeJobsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeJobsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeJobsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeJobsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeJobsRequest::GetWorkSpaceId() const
{
    return m_workSpaceId;
}

void DescribeJobsRequest::SetWorkSpaceId(const string& _workSpaceId)
{
    m_workSpaceId = _workSpaceId;
    m_workSpaceIdHasBeenSet = true;
}

bool DescribeJobsRequest::WorkSpaceIdHasBeenSet() const
{
    return m_workSpaceIdHasBeenSet;
}

vector<string> DescribeJobsRequest::GetExtraResult() const
{
    return m_extraResult;
}

void DescribeJobsRequest::SetExtraResult(const vector<string>& _extraResult)
{
    m_extraResult = _extraResult;
    m_extraResultHasBeenSet = true;
}

bool DescribeJobsRequest::ExtraResultHasBeenSet() const
{
    return m_extraResultHasBeenSet;
}

string DescribeJobsRequest::GetConnectorOptions() const
{
    return m_connectorOptions;
}

void DescribeJobsRequest::SetConnectorOptions(const string& _connectorOptions)
{
    m_connectorOptions = _connectorOptions;
    m_connectorOptionsHasBeenSet = true;
}

bool DescribeJobsRequest::ConnectorOptionsHasBeenSet() const
{
    return m_connectorOptionsHasBeenSet;
}


