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

#include <tencentcloud/monitor/v20180724/model/DescribePrometheusConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

DescribePrometheusConfigRequest::DescribePrometheusConfigRequest() :
    m_instanceIdHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_clusterTypeHasBeenSet(false)
{
}

string DescribePrometheusConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribePrometheusConfigRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribePrometheusConfigRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribePrometheusConfigRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribePrometheusConfigRequest::GetClusterId() const
{
    return m_clusterId;
}

void DescribePrometheusConfigRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DescribePrometheusConfigRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string DescribePrometheusConfigRequest::GetClusterType() const
{
    return m_clusterType;
}

void DescribePrometheusConfigRequest::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool DescribePrometheusConfigRequest::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}


