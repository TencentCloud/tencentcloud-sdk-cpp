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

#include <tencentcloud/tcb/v20180608/model/DescribeCloudBaseRunBuildLogRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DescribeCloudBaseRunBuildLogRequest::DescribeCloudBaseRunBuildLogRequest() :
    m_envIdHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_serviceVersionHasBeenSet(false),
    m_buildIdHasBeenSet(false),
    m_startHasBeenSet(false)
{
}

string DescribeCloudBaseRunBuildLogRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_buildIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_buildId, allocator);
    }

    if (m_startHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Start";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_start, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCloudBaseRunBuildLogRequest::GetEnvId() const
{
    return m_envId;
}

void DescribeCloudBaseRunBuildLogRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool DescribeCloudBaseRunBuildLogRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string DescribeCloudBaseRunBuildLogRequest::GetServiceName() const
{
    return m_serviceName;
}

void DescribeCloudBaseRunBuildLogRequest::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool DescribeCloudBaseRunBuildLogRequest::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string DescribeCloudBaseRunBuildLogRequest::GetServiceVersion() const
{
    return m_serviceVersion;
}

void DescribeCloudBaseRunBuildLogRequest::SetServiceVersion(const string& _serviceVersion)
{
    m_serviceVersion = _serviceVersion;
    m_serviceVersionHasBeenSet = true;
}

bool DescribeCloudBaseRunBuildLogRequest::ServiceVersionHasBeenSet() const
{
    return m_serviceVersionHasBeenSet;
}

int64_t DescribeCloudBaseRunBuildLogRequest::GetBuildId() const
{
    return m_buildId;
}

void DescribeCloudBaseRunBuildLogRequest::SetBuildId(const int64_t& _buildId)
{
    m_buildId = _buildId;
    m_buildIdHasBeenSet = true;
}

bool DescribeCloudBaseRunBuildLogRequest::BuildIdHasBeenSet() const
{
    return m_buildIdHasBeenSet;
}

int64_t DescribeCloudBaseRunBuildLogRequest::GetStart() const
{
    return m_start;
}

void DescribeCloudBaseRunBuildLogRequest::SetStart(const int64_t& _start)
{
    m_start = _start;
    m_startHasBeenSet = true;
}

bool DescribeCloudBaseRunBuildLogRequest::StartHasBeenSet() const
{
    return m_startHasBeenSet;
}


