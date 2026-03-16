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

#include <tencentcloud/tke/v20180525/model/DescribeExternalNodeScriptRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

DescribeExternalNodeScriptRequest::DescribeExternalNodeScriptRequest() :
    m_clusterIdHasBeenSet(false),
    m_nodePoolIdHasBeenSet(false),
    m_interfaceHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_internalHasBeenSet(false)
{
}

string DescribeExternalNodeScriptRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_nodePoolIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodePoolId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nodePoolId.c_str(), allocator).Move(), allocator);
    }

    if (m_interfaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interface";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_interface.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_internalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Internal";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_internal, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeExternalNodeScriptRequest::GetClusterId() const
{
    return m_clusterId;
}

void DescribeExternalNodeScriptRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DescribeExternalNodeScriptRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string DescribeExternalNodeScriptRequest::GetNodePoolId() const
{
    return m_nodePoolId;
}

void DescribeExternalNodeScriptRequest::SetNodePoolId(const string& _nodePoolId)
{
    m_nodePoolId = _nodePoolId;
    m_nodePoolIdHasBeenSet = true;
}

bool DescribeExternalNodeScriptRequest::NodePoolIdHasBeenSet() const
{
    return m_nodePoolIdHasBeenSet;
}

string DescribeExternalNodeScriptRequest::GetInterface() const
{
    return m_interface;
}

void DescribeExternalNodeScriptRequest::SetInterface(const string& _interface)
{
    m_interface = _interface;
    m_interfaceHasBeenSet = true;
}

bool DescribeExternalNodeScriptRequest::InterfaceHasBeenSet() const
{
    return m_interfaceHasBeenSet;
}

string DescribeExternalNodeScriptRequest::GetName() const
{
    return m_name;
}

void DescribeExternalNodeScriptRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeExternalNodeScriptRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

bool DescribeExternalNodeScriptRequest::GetInternal() const
{
    return m_internal;
}

void DescribeExternalNodeScriptRequest::SetInternal(const bool& _internal)
{
    m_internal = _internal;
    m_internalHasBeenSet = true;
}

bool DescribeExternalNodeScriptRequest::InternalHasBeenSet() const
{
    return m_internalHasBeenSet;
}


