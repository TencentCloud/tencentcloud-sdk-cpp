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

#include <tencentcloud/pts/v20210728/model/DescribeProjectsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

DescribeProjectsRequest::DescribeProjectsRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_projectIdsHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_ascendHasBeenSet(false),
    m_tagFiltersHasBeenSet(false)
{
}

string DescribeProjectsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_projectIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_projectIds.begin(); itr != m_projectIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderBy.c_str(), allocator).Move(), allocator);
    }

    if (m_ascendHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ascend";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ascend, allocator);
    }

    if (m_tagFiltersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagFilters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagFilters.begin(); itr != m_tagFilters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeProjectsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeProjectsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeProjectsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeProjectsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeProjectsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeProjectsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<string> DescribeProjectsRequest::GetProjectIds() const
{
    return m_projectIds;
}

void DescribeProjectsRequest::SetProjectIds(const vector<string>& _projectIds)
{
    m_projectIds = _projectIds;
    m_projectIdsHasBeenSet = true;
}

bool DescribeProjectsRequest::ProjectIdsHasBeenSet() const
{
    return m_projectIdsHasBeenSet;
}

string DescribeProjectsRequest::GetProjectName() const
{
    return m_projectName;
}

void DescribeProjectsRequest::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool DescribeProjectsRequest::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string DescribeProjectsRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeProjectsRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeProjectsRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

bool DescribeProjectsRequest::GetAscend() const
{
    return m_ascend;
}

void DescribeProjectsRequest::SetAscend(const bool& _ascend)
{
    m_ascend = _ascend;
    m_ascendHasBeenSet = true;
}

bool DescribeProjectsRequest::AscendHasBeenSet() const
{
    return m_ascendHasBeenSet;
}

vector<TagSpec> DescribeProjectsRequest::GetTagFilters() const
{
    return m_tagFilters;
}

void DescribeProjectsRequest::SetTagFilters(const vector<TagSpec>& _tagFilters)
{
    m_tagFilters = _tagFilters;
    m_tagFiltersHasBeenSet = true;
}

bool DescribeProjectsRequest::TagFiltersHasBeenSet() const
{
    return m_tagFiltersHasBeenSet;
}


