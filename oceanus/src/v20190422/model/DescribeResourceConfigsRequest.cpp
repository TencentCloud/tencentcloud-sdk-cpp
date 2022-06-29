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

#include <tencentcloud/oceanus/v20190422/model/DescribeResourceConfigsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

DescribeResourceConfigsRequest::DescribeResourceConfigsRequest() :
    m_resourceIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_resourceConfigVersionsHasBeenSet(false),
    m_jobConfigVersionHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_workSpaceIdHasBeenSet(false)
{
}

string DescribeResourceConfigsRequest::ToJsonString() const
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

    if (m_resourceConfigVersionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceConfigVersions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resourceConfigVersions.begin(); itr != m_resourceConfigVersions.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_jobConfigVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobConfigVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_jobConfigVersion, allocator);
    }

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
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


string DescribeResourceConfigsRequest::GetResourceId() const
{
    return m_resourceId;
}

void DescribeResourceConfigsRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool DescribeResourceConfigsRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

int64_t DescribeResourceConfigsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeResourceConfigsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeResourceConfigsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeResourceConfigsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeResourceConfigsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeResourceConfigsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<int64_t> DescribeResourceConfigsRequest::GetResourceConfigVersions() const
{
    return m_resourceConfigVersions;
}

void DescribeResourceConfigsRequest::SetResourceConfigVersions(const vector<int64_t>& _resourceConfigVersions)
{
    m_resourceConfigVersions = _resourceConfigVersions;
    m_resourceConfigVersionsHasBeenSet = true;
}

bool DescribeResourceConfigsRequest::ResourceConfigVersionsHasBeenSet() const
{
    return m_resourceConfigVersionsHasBeenSet;
}

int64_t DescribeResourceConfigsRequest::GetJobConfigVersion() const
{
    return m_jobConfigVersion;
}

void DescribeResourceConfigsRequest::SetJobConfigVersion(const int64_t& _jobConfigVersion)
{
    m_jobConfigVersion = _jobConfigVersion;
    m_jobConfigVersionHasBeenSet = true;
}

bool DescribeResourceConfigsRequest::JobConfigVersionHasBeenSet() const
{
    return m_jobConfigVersionHasBeenSet;
}

string DescribeResourceConfigsRequest::GetJobId() const
{
    return m_jobId;
}

void DescribeResourceConfigsRequest::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool DescribeResourceConfigsRequest::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string DescribeResourceConfigsRequest::GetWorkSpaceId() const
{
    return m_workSpaceId;
}

void DescribeResourceConfigsRequest::SetWorkSpaceId(const string& _workSpaceId)
{
    m_workSpaceId = _workSpaceId;
    m_workSpaceIdHasBeenSet = true;
}

bool DescribeResourceConfigsRequest::WorkSpaceIdHasBeenSet() const
{
    return m_workSpaceIdHasBeenSet;
}


