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

#include <tencentcloud/tiems/v20190416/model/CreateRsgAsGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tiems::V20190416::Model;
using namespace std;

CreateRsgAsGroupRequest::CreateRsgAsGroupRequest() :
    m_rsgIdHasBeenSet(false),
    m_maxSizeHasBeenSet(false),
    m_minSizeHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_clusterHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_desiredSizeHasBeenSet(false)
{
}

string CreateRsgAsGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_rsgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RsgId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rsgId.c_str(), allocator).Move(), allocator);
    }

    if (m_maxSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxSize, allocator);
    }

    if (m_minSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_minSize, allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cluster";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cluster.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_desiredSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DesiredSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_desiredSize, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateRsgAsGroupRequest::GetRsgId() const
{
    return m_rsgId;
}

void CreateRsgAsGroupRequest::SetRsgId(const string& _rsgId)
{
    m_rsgId = _rsgId;
    m_rsgIdHasBeenSet = true;
}

bool CreateRsgAsGroupRequest::RsgIdHasBeenSet() const
{
    return m_rsgIdHasBeenSet;
}

uint64_t CreateRsgAsGroupRequest::GetMaxSize() const
{
    return m_maxSize;
}

void CreateRsgAsGroupRequest::SetMaxSize(const uint64_t& _maxSize)
{
    m_maxSize = _maxSize;
    m_maxSizeHasBeenSet = true;
}

bool CreateRsgAsGroupRequest::MaxSizeHasBeenSet() const
{
    return m_maxSizeHasBeenSet;
}

uint64_t CreateRsgAsGroupRequest::GetMinSize() const
{
    return m_minSize;
}

void CreateRsgAsGroupRequest::SetMinSize(const uint64_t& _minSize)
{
    m_minSize = _minSize;
    m_minSizeHasBeenSet = true;
}

bool CreateRsgAsGroupRequest::MinSizeHasBeenSet() const
{
    return m_minSizeHasBeenSet;
}

string CreateRsgAsGroupRequest::GetInstanceType() const
{
    return m_instanceType;
}

void CreateRsgAsGroupRequest::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool CreateRsgAsGroupRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string CreateRsgAsGroupRequest::GetCluster() const
{
    return m_cluster;
}

void CreateRsgAsGroupRequest::SetCluster(const string& _cluster)
{
    m_cluster = _cluster;
    m_clusterHasBeenSet = true;
}

bool CreateRsgAsGroupRequest::ClusterHasBeenSet() const
{
    return m_clusterHasBeenSet;
}

string CreateRsgAsGroupRequest::GetName() const
{
    return m_name;
}

void CreateRsgAsGroupRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateRsgAsGroupRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t CreateRsgAsGroupRequest::GetDesiredSize() const
{
    return m_desiredSize;
}

void CreateRsgAsGroupRequest::SetDesiredSize(const uint64_t& _desiredSize)
{
    m_desiredSize = _desiredSize;
    m_desiredSizeHasBeenSet = true;
}

bool CreateRsgAsGroupRequest::DesiredSizeHasBeenSet() const
{
    return m_desiredSizeHasBeenSet;
}


