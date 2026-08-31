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

#include <tencentcloud/thpc/v20230321/model/SetQueueAutoScalingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Thpc::V20230321::Model;
using namespace std;

SetQueueAutoScalingRequest::SetQueueAutoScalingRequest() :
    m_clusterIdHasBeenSet(false),
    m_queueNameHasBeenSet(false),
    m_scalingPolicyHasBeenSet(false),
    m_expansionPolicyHasBeenSet(false)
{
}

string SetQueueAutoScalingRequest::ToJsonString() const
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

    if (m_queueNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queueName.c_str(), allocator).Move(), allocator);
    }

    if (m_scalingPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScalingPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_scalingPolicy.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_expansionPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpansionPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_expansionPolicy.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SetQueueAutoScalingRequest::GetClusterId() const
{
    return m_clusterId;
}

void SetQueueAutoScalingRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool SetQueueAutoScalingRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string SetQueueAutoScalingRequest::GetQueueName() const
{
    return m_queueName;
}

void SetQueueAutoScalingRequest::SetQueueName(const string& _queueName)
{
    m_queueName = _queueName;
    m_queueNameHasBeenSet = true;
}

bool SetQueueAutoScalingRequest::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}

ScalingPolicy SetQueueAutoScalingRequest::GetScalingPolicy() const
{
    return m_scalingPolicy;
}

void SetQueueAutoScalingRequest::SetScalingPolicy(const ScalingPolicy& _scalingPolicy)
{
    m_scalingPolicy = _scalingPolicy;
    m_scalingPolicyHasBeenSet = true;
}

bool SetQueueAutoScalingRequest::ScalingPolicyHasBeenSet() const
{
    return m_scalingPolicyHasBeenSet;
}

ExpansionPolicy SetQueueAutoScalingRequest::GetExpansionPolicy() const
{
    return m_expansionPolicy;
}

void SetQueueAutoScalingRequest::SetExpansionPolicy(const ExpansionPolicy& _expansionPolicy)
{
    m_expansionPolicy = _expansionPolicy;
    m_expansionPolicyHasBeenSet = true;
}

bool SetQueueAutoScalingRequest::ExpansionPolicyHasBeenSet() const
{
    return m_expansionPolicyHasBeenSet;
}


