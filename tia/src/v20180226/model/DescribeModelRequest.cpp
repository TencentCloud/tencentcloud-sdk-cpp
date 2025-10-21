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

#include <tencentcloud/tia/v20180226/model/DescribeModelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tia::V20180226::Model;
using namespace std;

DescribeModelRequest::DescribeModelRequest() :
    m_nameHasBeenSet(false),
    m_clusterHasBeenSet(false),
    m_servTypeHasBeenSet(false)
{
}

string DescribeModelRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cluster";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cluster.c_str(), allocator).Move(), allocator);
    }

    if (m_servTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_servType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeModelRequest::GetName() const
{
    return m_name;
}

void DescribeModelRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeModelRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeModelRequest::GetCluster() const
{
    return m_cluster;
}

void DescribeModelRequest::SetCluster(const string& _cluster)
{
    m_cluster = _cluster;
    m_clusterHasBeenSet = true;
}

bool DescribeModelRequest::ClusterHasBeenSet() const
{
    return m_clusterHasBeenSet;
}

string DescribeModelRequest::GetServType() const
{
    return m_servType;
}

void DescribeModelRequest::SetServType(const string& _servType)
{
    m_servType = _servType;
    m_servTypeHasBeenSet = true;
}

bool DescribeModelRequest::ServTypeHasBeenSet() const
{
    return m_servTypeHasBeenSet;
}


