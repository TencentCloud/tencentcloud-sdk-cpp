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

#include <tencentcloud/oceanus/v20190422/model/CreateJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace rapidjson;
using namespace std;

CreateJobRequest::CreateJobRequest() :
    m_nameHasBeenSet(false),
    m_jobTypeHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_cuMemHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

string CreateJobRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_jobTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "JobType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_jobType, allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_clusterType, allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_cuMemHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CuMem";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cuMem, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_remark.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateJobRequest::GetName() const
{
    return m_name;
}

void CreateJobRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateJobRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t CreateJobRequest::GetJobType() const
{
    return m_jobType;
}

void CreateJobRequest::SetJobType(const int64_t& _jobType)
{
    m_jobType = _jobType;
    m_jobTypeHasBeenSet = true;
}

bool CreateJobRequest::JobTypeHasBeenSet() const
{
    return m_jobTypeHasBeenSet;
}

int64_t CreateJobRequest::GetClusterType() const
{
    return m_clusterType;
}

void CreateJobRequest::SetClusterType(const int64_t& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool CreateJobRequest::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

string CreateJobRequest::GetClusterId() const
{
    return m_clusterId;
}

void CreateJobRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CreateJobRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

uint64_t CreateJobRequest::GetCuMem() const
{
    return m_cuMem;
}

void CreateJobRequest::SetCuMem(const uint64_t& _cuMem)
{
    m_cuMem = _cuMem;
    m_cuMemHasBeenSet = true;
}

bool CreateJobRequest::CuMemHasBeenSet() const
{
    return m_cuMemHasBeenSet;
}

string CreateJobRequest::GetRemark() const
{
    return m_remark;
}

void CreateJobRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateJobRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}


