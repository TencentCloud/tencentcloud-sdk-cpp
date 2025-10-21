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

#include <tencentcloud/tke/v20180525/model/ModifyNodePoolDesiredCapacityAboutAsgRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ModifyNodePoolDesiredCapacityAboutAsgRequest::ModifyNodePoolDesiredCapacityAboutAsgRequest() :
    m_clusterIdHasBeenSet(false),
    m_nodePoolIdHasBeenSet(false),
    m_desiredCapacityHasBeenSet(false)
{
}

string ModifyNodePoolDesiredCapacityAboutAsgRequest::ToJsonString() const
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

    if (m_desiredCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DesiredCapacity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_desiredCapacity, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyNodePoolDesiredCapacityAboutAsgRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyNodePoolDesiredCapacityAboutAsgRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyNodePoolDesiredCapacityAboutAsgRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ModifyNodePoolDesiredCapacityAboutAsgRequest::GetNodePoolId() const
{
    return m_nodePoolId;
}

void ModifyNodePoolDesiredCapacityAboutAsgRequest::SetNodePoolId(const string& _nodePoolId)
{
    m_nodePoolId = _nodePoolId;
    m_nodePoolIdHasBeenSet = true;
}

bool ModifyNodePoolDesiredCapacityAboutAsgRequest::NodePoolIdHasBeenSet() const
{
    return m_nodePoolIdHasBeenSet;
}

int64_t ModifyNodePoolDesiredCapacityAboutAsgRequest::GetDesiredCapacity() const
{
    return m_desiredCapacity;
}

void ModifyNodePoolDesiredCapacityAboutAsgRequest::SetDesiredCapacity(const int64_t& _desiredCapacity)
{
    m_desiredCapacity = _desiredCapacity;
    m_desiredCapacityHasBeenSet = true;
}

bool ModifyNodePoolDesiredCapacityAboutAsgRequest::DesiredCapacityHasBeenSet() const
{
    return m_desiredCapacityHasBeenSet;
}


