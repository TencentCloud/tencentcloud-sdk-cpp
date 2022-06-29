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

#include <tencentcloud/oceanus/v20190422/model/DescribeResourceRelatedJobsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

DescribeResourceRelatedJobsRequest::DescribeResourceRelatedJobsRequest() :
    m_resourceIdHasBeenSet(false),
    m_dESCByJobConfigCreateTimeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_resourceConfigVersionHasBeenSet(false),
    m_workSpaceIdHasBeenSet(false)
{
}

string DescribeResourceRelatedJobsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_dESCByJobConfigCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DESCByJobConfigCreateTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dESCByJobConfigCreateTime, allocator);
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

    if (m_resourceConfigVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceConfigVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_resourceConfigVersion, allocator);
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


string DescribeResourceRelatedJobsRequest::GetResourceId() const
{
    return m_resourceId;
}

void DescribeResourceRelatedJobsRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool DescribeResourceRelatedJobsRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

int64_t DescribeResourceRelatedJobsRequest::GetDESCByJobConfigCreateTime() const
{
    return m_dESCByJobConfigCreateTime;
}

void DescribeResourceRelatedJobsRequest::SetDESCByJobConfigCreateTime(const int64_t& _dESCByJobConfigCreateTime)
{
    m_dESCByJobConfigCreateTime = _dESCByJobConfigCreateTime;
    m_dESCByJobConfigCreateTimeHasBeenSet = true;
}

bool DescribeResourceRelatedJobsRequest::DESCByJobConfigCreateTimeHasBeenSet() const
{
    return m_dESCByJobConfigCreateTimeHasBeenSet;
}

int64_t DescribeResourceRelatedJobsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeResourceRelatedJobsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeResourceRelatedJobsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeResourceRelatedJobsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeResourceRelatedJobsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeResourceRelatedJobsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeResourceRelatedJobsRequest::GetResourceConfigVersion() const
{
    return m_resourceConfigVersion;
}

void DescribeResourceRelatedJobsRequest::SetResourceConfigVersion(const int64_t& _resourceConfigVersion)
{
    m_resourceConfigVersion = _resourceConfigVersion;
    m_resourceConfigVersionHasBeenSet = true;
}

bool DescribeResourceRelatedJobsRequest::ResourceConfigVersionHasBeenSet() const
{
    return m_resourceConfigVersionHasBeenSet;
}

string DescribeResourceRelatedJobsRequest::GetWorkSpaceId() const
{
    return m_workSpaceId;
}

void DescribeResourceRelatedJobsRequest::SetWorkSpaceId(const string& _workSpaceId)
{
    m_workSpaceId = _workSpaceId;
    m_workSpaceIdHasBeenSet = true;
}

bool DescribeResourceRelatedJobsRequest::WorkSpaceIdHasBeenSet() const
{
    return m_workSpaceIdHasBeenSet;
}


