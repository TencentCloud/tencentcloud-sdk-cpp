/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/clb/v20180317/model/DescribeModelRouterResourcePackageDeductionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

DescribeModelRouterResourcePackageDeductionRequest::DescribeModelRouterResourcePackageDeductionRequest() :
    m_deductionTimeBeginHasBeenSet(false),
    m_deductionTimeEndHasBeenSet(false),
    m_modelRouterResourcePackageIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_sortByHasBeenSet(false)
{
}

string DescribeModelRouterResourcePackageDeductionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_deductionTimeBeginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeductionTimeBegin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deductionTimeBegin.c_str(), allocator).Move(), allocator);
    }

    if (m_deductionTimeEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeductionTimeEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deductionTimeEnd.c_str(), allocator).Move(), allocator);
    }

    if (m_modelRouterResourcePackageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelRouterResourcePackageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelRouterResourcePackageId.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_sortByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortBy.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeModelRouterResourcePackageDeductionRequest::GetDeductionTimeBegin() const
{
    return m_deductionTimeBegin;
}

void DescribeModelRouterResourcePackageDeductionRequest::SetDeductionTimeBegin(const string& _deductionTimeBegin)
{
    m_deductionTimeBegin = _deductionTimeBegin;
    m_deductionTimeBeginHasBeenSet = true;
}

bool DescribeModelRouterResourcePackageDeductionRequest::DeductionTimeBeginHasBeenSet() const
{
    return m_deductionTimeBeginHasBeenSet;
}

string DescribeModelRouterResourcePackageDeductionRequest::GetDeductionTimeEnd() const
{
    return m_deductionTimeEnd;
}

void DescribeModelRouterResourcePackageDeductionRequest::SetDeductionTimeEnd(const string& _deductionTimeEnd)
{
    m_deductionTimeEnd = _deductionTimeEnd;
    m_deductionTimeEndHasBeenSet = true;
}

bool DescribeModelRouterResourcePackageDeductionRequest::DeductionTimeEndHasBeenSet() const
{
    return m_deductionTimeEndHasBeenSet;
}

string DescribeModelRouterResourcePackageDeductionRequest::GetModelRouterResourcePackageId() const
{
    return m_modelRouterResourcePackageId;
}

void DescribeModelRouterResourcePackageDeductionRequest::SetModelRouterResourcePackageId(const string& _modelRouterResourcePackageId)
{
    m_modelRouterResourcePackageId = _modelRouterResourcePackageId;
    m_modelRouterResourcePackageIdHasBeenSet = true;
}

bool DescribeModelRouterResourcePackageDeductionRequest::ModelRouterResourcePackageIdHasBeenSet() const
{
    return m_modelRouterResourcePackageIdHasBeenSet;
}

uint64_t DescribeModelRouterResourcePackageDeductionRequest::GetLimit() const
{
    return m_limit;
}

void DescribeModelRouterResourcePackageDeductionRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeModelRouterResourcePackageDeductionRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeModelRouterResourcePackageDeductionRequest::GetOffset() const
{
    return m_offset;
}

void DescribeModelRouterResourcePackageDeductionRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeModelRouterResourcePackageDeductionRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeModelRouterResourcePackageDeductionRequest::GetSortBy() const
{
    return m_sortBy;
}

void DescribeModelRouterResourcePackageDeductionRequest::SetSortBy(const string& _sortBy)
{
    m_sortBy = _sortBy;
    m_sortByHasBeenSet = true;
}

bool DescribeModelRouterResourcePackageDeductionRequest::SortByHasBeenSet() const
{
    return m_sortByHasBeenSet;
}


