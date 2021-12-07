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

#include <tencentcloud/tcss/v20201101/model/ClusterCheckTaskItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ClusterCheckTaskItem::ClusterCheckTaskItem() :
    m_clusterIdHasBeenSet(false),
    m_clusterRegionHasBeenSet(false),
    m_nodeIpHasBeenSet(false),
    m_workloadNameHasBeenSet(false)
{
}

CoreInternalOutcome ClusterCheckTaskItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterCheckTaskItem.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterRegion") && !value["ClusterRegion"].IsNull())
    {
        if (!value["ClusterRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterCheckTaskItem.ClusterRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterRegion = string(value["ClusterRegion"].GetString());
        m_clusterRegionHasBeenSet = true;
    }

    if (value.HasMember("NodeIp") && !value["NodeIp"].IsNull())
    {
        if (!value["NodeIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterCheckTaskItem.NodeIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeIp = string(value["NodeIp"].GetString());
        m_nodeIpHasBeenSet = true;
    }

    if (value.HasMember("WorkloadName") && !value["WorkloadName"].IsNull())
    {
        if (!value["WorkloadName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterCheckTaskItem.WorkloadName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workloadName = string(value["WorkloadName"].GetString());
        m_workloadNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterCheckTaskItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeIp.c_str(), allocator).Move(), allocator);
    }

    if (m_workloadNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkloadName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workloadName.c_str(), allocator).Move(), allocator);
    }

}


string ClusterCheckTaskItem::GetClusterId() const
{
    return m_clusterId;
}

void ClusterCheckTaskItem::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ClusterCheckTaskItem::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ClusterCheckTaskItem::GetClusterRegion() const
{
    return m_clusterRegion;
}

void ClusterCheckTaskItem::SetClusterRegion(const string& _clusterRegion)
{
    m_clusterRegion = _clusterRegion;
    m_clusterRegionHasBeenSet = true;
}

bool ClusterCheckTaskItem::ClusterRegionHasBeenSet() const
{
    return m_clusterRegionHasBeenSet;
}

string ClusterCheckTaskItem::GetNodeIp() const
{
    return m_nodeIp;
}

void ClusterCheckTaskItem::SetNodeIp(const string& _nodeIp)
{
    m_nodeIp = _nodeIp;
    m_nodeIpHasBeenSet = true;
}

bool ClusterCheckTaskItem::NodeIpHasBeenSet() const
{
    return m_nodeIpHasBeenSet;
}

string ClusterCheckTaskItem::GetWorkloadName() const
{
    return m_workloadName;
}

void ClusterCheckTaskItem::SetWorkloadName(const string& _workloadName)
{
    m_workloadName = _workloadName;
    m_workloadNameHasBeenSet = true;
}

bool ClusterCheckTaskItem::WorkloadNameHasBeenSet() const
{
    return m_workloadNameHasBeenSet;
}

