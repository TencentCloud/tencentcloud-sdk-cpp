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

#include <tencentcloud/iecp/v20210914/model/DescribeEdgeUnitApplicationLogsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

DescribeEdgeUnitApplicationLogsRequest::DescribeEdgeUnitApplicationLogsRequest() :
    m_edgeUnitIdHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_podNameHasBeenSet(false),
    m_containerNameHasBeenSet(false)
{
}

string DescribeEdgeUnitApplicationLogsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_edgeUnitIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EdgeUnitId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_edgeUnitId, allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_applicationId, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_podNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_podName.c_str(), allocator).Move(), allocator);
    }

    if (m_containerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_containerName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeEdgeUnitApplicationLogsRequest::GetEdgeUnitId() const
{
    return m_edgeUnitId;
}

void DescribeEdgeUnitApplicationLogsRequest::SetEdgeUnitId(const uint64_t& _edgeUnitId)
{
    m_edgeUnitId = _edgeUnitId;
    m_edgeUnitIdHasBeenSet = true;
}

bool DescribeEdgeUnitApplicationLogsRequest::EdgeUnitIdHasBeenSet() const
{
    return m_edgeUnitIdHasBeenSet;
}

uint64_t DescribeEdgeUnitApplicationLogsRequest::GetApplicationId() const
{
    return m_applicationId;
}

void DescribeEdgeUnitApplicationLogsRequest::SetApplicationId(const uint64_t& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool DescribeEdgeUnitApplicationLogsRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

uint64_t DescribeEdgeUnitApplicationLogsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeEdgeUnitApplicationLogsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeEdgeUnitApplicationLogsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeEdgeUnitApplicationLogsRequest::GetPodName() const
{
    return m_podName;
}

void DescribeEdgeUnitApplicationLogsRequest::SetPodName(const string& _podName)
{
    m_podName = _podName;
    m_podNameHasBeenSet = true;
}

bool DescribeEdgeUnitApplicationLogsRequest::PodNameHasBeenSet() const
{
    return m_podNameHasBeenSet;
}

string DescribeEdgeUnitApplicationLogsRequest::GetContainerName() const
{
    return m_containerName;
}

void DescribeEdgeUnitApplicationLogsRequest::SetContainerName(const string& _containerName)
{
    m_containerName = _containerName;
    m_containerNameHasBeenSet = true;
}

bool DescribeEdgeUnitApplicationLogsRequest::ContainerNameHasBeenSet() const
{
    return m_containerNameHasBeenSet;
}


