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

#include <tencentcloud/dlc/v20210125/model/ImportTkeClusterRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

ImportTkeClusterRequest::ImportTkeClusterRequest() :
    m_partitionNameHasBeenSet(false),
    m_emrClusterIdHasBeenSet(false),
    m_cosBucketIdHasBeenSet(false),
    m_prometheusInstanceIdHasBeenSet(false),
    m_loadBalancerIdHasBeenSet(false),
    m_containerLogTopicIdHasBeenSet(false),
    m_nodeLabelsHasBeenSet(false),
    m_partitionDescriptionHasBeenSet(false)
{
}

string ImportTkeClusterRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_partitionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_partitionName.c_str(), allocator).Move(), allocator);
    }

    if (m_emrClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmrClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_emrClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_cosBucketIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosBucketId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cosBucketId.c_str(), allocator).Move(), allocator);
    }

    if (m_prometheusInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrometheusInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_prometheusInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loadBalancerId.c_str(), allocator).Move(), allocator);
    }

    if (m_containerLogTopicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerLogTopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_containerLogTopicId.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeLabels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nodeLabels.begin(); itr != m_nodeLabels.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_partitionDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_partitionDescription.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ImportTkeClusterRequest::GetPartitionName() const
{
    return m_partitionName;
}

void ImportTkeClusterRequest::SetPartitionName(const string& _partitionName)
{
    m_partitionName = _partitionName;
    m_partitionNameHasBeenSet = true;
}

bool ImportTkeClusterRequest::PartitionNameHasBeenSet() const
{
    return m_partitionNameHasBeenSet;
}

string ImportTkeClusterRequest::GetEmrClusterId() const
{
    return m_emrClusterId;
}

void ImportTkeClusterRequest::SetEmrClusterId(const string& _emrClusterId)
{
    m_emrClusterId = _emrClusterId;
    m_emrClusterIdHasBeenSet = true;
}

bool ImportTkeClusterRequest::EmrClusterIdHasBeenSet() const
{
    return m_emrClusterIdHasBeenSet;
}

string ImportTkeClusterRequest::GetCosBucketId() const
{
    return m_cosBucketId;
}

void ImportTkeClusterRequest::SetCosBucketId(const string& _cosBucketId)
{
    m_cosBucketId = _cosBucketId;
    m_cosBucketIdHasBeenSet = true;
}

bool ImportTkeClusterRequest::CosBucketIdHasBeenSet() const
{
    return m_cosBucketIdHasBeenSet;
}

string ImportTkeClusterRequest::GetPrometheusInstanceId() const
{
    return m_prometheusInstanceId;
}

void ImportTkeClusterRequest::SetPrometheusInstanceId(const string& _prometheusInstanceId)
{
    m_prometheusInstanceId = _prometheusInstanceId;
    m_prometheusInstanceIdHasBeenSet = true;
}

bool ImportTkeClusterRequest::PrometheusInstanceIdHasBeenSet() const
{
    return m_prometheusInstanceIdHasBeenSet;
}

string ImportTkeClusterRequest::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void ImportTkeClusterRequest::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool ImportTkeClusterRequest::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

string ImportTkeClusterRequest::GetContainerLogTopicId() const
{
    return m_containerLogTopicId;
}

void ImportTkeClusterRequest::SetContainerLogTopicId(const string& _containerLogTopicId)
{
    m_containerLogTopicId = _containerLogTopicId;
    m_containerLogTopicIdHasBeenSet = true;
}

bool ImportTkeClusterRequest::ContainerLogTopicIdHasBeenSet() const
{
    return m_containerLogTopicIdHasBeenSet;
}

vector<KVPair> ImportTkeClusterRequest::GetNodeLabels() const
{
    return m_nodeLabels;
}

void ImportTkeClusterRequest::SetNodeLabels(const vector<KVPair>& _nodeLabels)
{
    m_nodeLabels = _nodeLabels;
    m_nodeLabelsHasBeenSet = true;
}

bool ImportTkeClusterRequest::NodeLabelsHasBeenSet() const
{
    return m_nodeLabelsHasBeenSet;
}

string ImportTkeClusterRequest::GetPartitionDescription() const
{
    return m_partitionDescription;
}

void ImportTkeClusterRequest::SetPartitionDescription(const string& _partitionDescription)
{
    m_partitionDescription = _partitionDescription;
    m_partitionDescriptionHasBeenSet = true;
}

bool ImportTkeClusterRequest::PartitionDescriptionHasBeenSet() const
{
    return m_partitionDescriptionHasBeenSet;
}


