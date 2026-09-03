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

#include <tencentcloud/dlc/v20210125/model/ImportExternalClusterRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

ImportExternalClusterRequest::ImportExternalClusterRequest() :
    m_partitionNameHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_cosBucketIdHasBeenSet(false),
    m_prometheusInstanceIdHasBeenSet(false),
    m_loadBalancerIdHasBeenSet(false),
    m_nodeLabelsHasBeenSet(false),
    m_partitionDescriptionHasBeenSet(false),
    m_targetAppIdHasBeenSet(false),
    m_targetUinHasBeenSet(false)
{
}

string ImportExternalClusterRequest::ToJsonString() const
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

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
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

    if (m_targetAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_targetAppId, allocator);
    }

    if (m_targetUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetUin.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ImportExternalClusterRequest::GetPartitionName() const
{
    return m_partitionName;
}

void ImportExternalClusterRequest::SetPartitionName(const string& _partitionName)
{
    m_partitionName = _partitionName;
    m_partitionNameHasBeenSet = true;
}

bool ImportExternalClusterRequest::PartitionNameHasBeenSet() const
{
    return m_partitionNameHasBeenSet;
}

string ImportExternalClusterRequest::GetClusterType() const
{
    return m_clusterType;
}

void ImportExternalClusterRequest::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool ImportExternalClusterRequest::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

string ImportExternalClusterRequest::GetClusterId() const
{
    return m_clusterId;
}

void ImportExternalClusterRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ImportExternalClusterRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ImportExternalClusterRequest::GetCosBucketId() const
{
    return m_cosBucketId;
}

void ImportExternalClusterRequest::SetCosBucketId(const string& _cosBucketId)
{
    m_cosBucketId = _cosBucketId;
    m_cosBucketIdHasBeenSet = true;
}

bool ImportExternalClusterRequest::CosBucketIdHasBeenSet() const
{
    return m_cosBucketIdHasBeenSet;
}

string ImportExternalClusterRequest::GetPrometheusInstanceId() const
{
    return m_prometheusInstanceId;
}

void ImportExternalClusterRequest::SetPrometheusInstanceId(const string& _prometheusInstanceId)
{
    m_prometheusInstanceId = _prometheusInstanceId;
    m_prometheusInstanceIdHasBeenSet = true;
}

bool ImportExternalClusterRequest::PrometheusInstanceIdHasBeenSet() const
{
    return m_prometheusInstanceIdHasBeenSet;
}

string ImportExternalClusterRequest::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void ImportExternalClusterRequest::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool ImportExternalClusterRequest::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

vector<KVPair> ImportExternalClusterRequest::GetNodeLabels() const
{
    return m_nodeLabels;
}

void ImportExternalClusterRequest::SetNodeLabels(const vector<KVPair>& _nodeLabels)
{
    m_nodeLabels = _nodeLabels;
    m_nodeLabelsHasBeenSet = true;
}

bool ImportExternalClusterRequest::NodeLabelsHasBeenSet() const
{
    return m_nodeLabelsHasBeenSet;
}

string ImportExternalClusterRequest::GetPartitionDescription() const
{
    return m_partitionDescription;
}

void ImportExternalClusterRequest::SetPartitionDescription(const string& _partitionDescription)
{
    m_partitionDescription = _partitionDescription;
    m_partitionDescriptionHasBeenSet = true;
}

bool ImportExternalClusterRequest::PartitionDescriptionHasBeenSet() const
{
    return m_partitionDescriptionHasBeenSet;
}

int64_t ImportExternalClusterRequest::GetTargetAppId() const
{
    return m_targetAppId;
}

void ImportExternalClusterRequest::SetTargetAppId(const int64_t& _targetAppId)
{
    m_targetAppId = _targetAppId;
    m_targetAppIdHasBeenSet = true;
}

bool ImportExternalClusterRequest::TargetAppIdHasBeenSet() const
{
    return m_targetAppIdHasBeenSet;
}

string ImportExternalClusterRequest::GetTargetUin() const
{
    return m_targetUin;
}

void ImportExternalClusterRequest::SetTargetUin(const string& _targetUin)
{
    m_targetUin = _targetUin;
    m_targetUinHasBeenSet = true;
}

bool ImportExternalClusterRequest::TargetUinHasBeenSet() const
{
    return m_targetUinHasBeenSet;
}


