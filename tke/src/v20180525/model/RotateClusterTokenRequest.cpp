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

#include <tencentcloud/tke/v20180525/model/RotateClusterTokenRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

RotateClusterTokenRequest::RotateClusterTokenRequest() :
    m_clusterIdHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_clusterTokenHasBeenSet(false),
    m_forceHasBeenSet(false)
{
}

string RotateClusterTokenRequest::ToJsonString() const
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

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }

    if (m_operationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operation.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterToken.c_str(), allocator).Move(), allocator);
    }

    if (m_forceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Force";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_force, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RotateClusterTokenRequest::GetClusterId() const
{
    return m_clusterId;
}

void RotateClusterTokenRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool RotateClusterTokenRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string RotateClusterTokenRequest::GetClusterType() const
{
    return m_clusterType;
}

void RotateClusterTokenRequest::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool RotateClusterTokenRequest::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

string RotateClusterTokenRequest::GetOperation() const
{
    return m_operation;
}

void RotateClusterTokenRequest::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool RotateClusterTokenRequest::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

string RotateClusterTokenRequest::GetClusterToken() const
{
    return m_clusterToken;
}

void RotateClusterTokenRequest::SetClusterToken(const string& _clusterToken)
{
    m_clusterToken = _clusterToken;
    m_clusterTokenHasBeenSet = true;
}

bool RotateClusterTokenRequest::ClusterTokenHasBeenSet() const
{
    return m_clusterTokenHasBeenSet;
}

bool RotateClusterTokenRequest::GetForce() const
{
    return m_force;
}

void RotateClusterTokenRequest::SetForce(const bool& _force)
{
    m_force = _force;
    m_forceHasBeenSet = true;
}

bool RotateClusterTokenRequest::ForceHasBeenSet() const
{
    return m_forceHasBeenSet;
}


