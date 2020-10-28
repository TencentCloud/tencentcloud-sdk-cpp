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

#include <tencentcloud/tke/v20180525/model/NodePool.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace rapidjson;
using namespace std;

NodePool::NodePool() :
    m_nodePoolIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_clusterInstanceIdHasBeenSet(false),
    m_lifeStateHasBeenSet(false),
    m_launchConfigurationIdHasBeenSet(false),
    m_autoscalingGroupIdHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_taintsHasBeenSet(false),
    m_nodeCountSummaryHasBeenSet(false),
    m_autoscalingGroupStatusHasBeenSet(false),
    m_maxNodesNumHasBeenSet(false),
    m_minNodesNumHasBeenSet(false),
    m_desiredNodesNumHasBeenSet(false)
{
}

CoreInternalOutcome NodePool::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("NodePoolId") && !value["NodePoolId"].IsNull())
    {
        if (!value["NodePoolId"].IsString())
        {
            return CoreInternalOutcome(Error("response `NodePool.NodePoolId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodePoolId = string(value["NodePoolId"].GetString());
        m_nodePoolIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `NodePool.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ClusterInstanceId") && !value["ClusterInstanceId"].IsNull())
    {
        if (!value["ClusterInstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `NodePool.ClusterInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterInstanceId = string(value["ClusterInstanceId"].GetString());
        m_clusterInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("LifeState") && !value["LifeState"].IsNull())
    {
        if (!value["LifeState"].IsString())
        {
            return CoreInternalOutcome(Error("response `NodePool.LifeState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lifeState = string(value["LifeState"].GetString());
        m_lifeStateHasBeenSet = true;
    }

    if (value.HasMember("LaunchConfigurationId") && !value["LaunchConfigurationId"].IsNull())
    {
        if (!value["LaunchConfigurationId"].IsString())
        {
            return CoreInternalOutcome(Error("response `NodePool.LaunchConfigurationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_launchConfigurationId = string(value["LaunchConfigurationId"].GetString());
        m_launchConfigurationIdHasBeenSet = true;
    }

    if (value.HasMember("AutoscalingGroupId") && !value["AutoscalingGroupId"].IsNull())
    {
        if (!value["AutoscalingGroupId"].IsString())
        {
            return CoreInternalOutcome(Error("response `NodePool.AutoscalingGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoscalingGroupId = string(value["AutoscalingGroupId"].GetString());
        m_autoscalingGroupIdHasBeenSet = true;
    }

    if (value.HasMember("Labels") && !value["Labels"].IsNull())
    {
        if (!value["Labels"].IsArray())
            return CoreInternalOutcome(Error("response `NodePool.Labels` is not array type"));

        const Value &tmpValue = value["Labels"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Label item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_labels.push_back(item);
        }
        m_labelsHasBeenSet = true;
    }

    if (value.HasMember("Taints") && !value["Taints"].IsNull())
    {
        if (!value["Taints"].IsArray())
            return CoreInternalOutcome(Error("response `NodePool.Taints` is not array type"));

        const Value &tmpValue = value["Taints"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Taint item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_taints.push_back(item);
        }
        m_taintsHasBeenSet = true;
    }

    if (value.HasMember("NodeCountSummary") && !value["NodeCountSummary"].IsNull())
    {
        if (!value["NodeCountSummary"].IsObject())
        {
            return CoreInternalOutcome(Error("response `NodePool.NodeCountSummary` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_nodeCountSummary.Deserialize(value["NodeCountSummary"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_nodeCountSummaryHasBeenSet = true;
    }

    if (value.HasMember("AutoscalingGroupStatus") && !value["AutoscalingGroupStatus"].IsNull())
    {
        if (!value["AutoscalingGroupStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `NodePool.AutoscalingGroupStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoscalingGroupStatus = string(value["AutoscalingGroupStatus"].GetString());
        m_autoscalingGroupStatusHasBeenSet = true;
    }

    if (value.HasMember("MaxNodesNum") && !value["MaxNodesNum"].IsNull())
    {
        if (!value["MaxNodesNum"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `NodePool.MaxNodesNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxNodesNum = value["MaxNodesNum"].GetInt64();
        m_maxNodesNumHasBeenSet = true;
    }

    if (value.HasMember("MinNodesNum") && !value["MinNodesNum"].IsNull())
    {
        if (!value["MinNodesNum"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `NodePool.MinNodesNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minNodesNum = value["MinNodesNum"].GetInt64();
        m_minNodesNumHasBeenSet = true;
    }

    if (value.HasMember("DesiredNodesNum") && !value["DesiredNodesNum"].IsNull())
    {
        if (!value["DesiredNodesNum"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `NodePool.DesiredNodesNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_desiredNodesNum = value["DesiredNodesNum"].GetInt64();
        m_desiredNodesNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NodePool::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_nodePoolIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NodePoolId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_nodePoolId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterInstanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_clusterInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_lifeStateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LifeState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_lifeState.c_str(), allocator).Move(), allocator);
    }

    if (m_launchConfigurationIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LaunchConfigurationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_launchConfigurationId.c_str(), allocator).Move(), allocator);
    }

    if (m_autoscalingGroupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AutoscalingGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_autoscalingGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_labelsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labels.begin(); itr != m_labels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_taintsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Taints";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taints.begin(); itr != m_taints.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_nodeCountSummaryHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NodeCountSummary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_nodeCountSummary.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_autoscalingGroupStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AutoscalingGroupStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_autoscalingGroupStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_maxNodesNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaxNodesNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxNodesNum, allocator);
    }

    if (m_minNodesNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MinNodesNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minNodesNum, allocator);
    }

    if (m_desiredNodesNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DesiredNodesNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_desiredNodesNum, allocator);
    }

}


string NodePool::GetNodePoolId() const
{
    return m_nodePoolId;
}

void NodePool::SetNodePoolId(const string& _nodePoolId)
{
    m_nodePoolId = _nodePoolId;
    m_nodePoolIdHasBeenSet = true;
}

bool NodePool::NodePoolIdHasBeenSet() const
{
    return m_nodePoolIdHasBeenSet;
}

string NodePool::GetName() const
{
    return m_name;
}

void NodePool::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool NodePool::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string NodePool::GetClusterInstanceId() const
{
    return m_clusterInstanceId;
}

void NodePool::SetClusterInstanceId(const string& _clusterInstanceId)
{
    m_clusterInstanceId = _clusterInstanceId;
    m_clusterInstanceIdHasBeenSet = true;
}

bool NodePool::ClusterInstanceIdHasBeenSet() const
{
    return m_clusterInstanceIdHasBeenSet;
}

string NodePool::GetLifeState() const
{
    return m_lifeState;
}

void NodePool::SetLifeState(const string& _lifeState)
{
    m_lifeState = _lifeState;
    m_lifeStateHasBeenSet = true;
}

bool NodePool::LifeStateHasBeenSet() const
{
    return m_lifeStateHasBeenSet;
}

string NodePool::GetLaunchConfigurationId() const
{
    return m_launchConfigurationId;
}

void NodePool::SetLaunchConfigurationId(const string& _launchConfigurationId)
{
    m_launchConfigurationId = _launchConfigurationId;
    m_launchConfigurationIdHasBeenSet = true;
}

bool NodePool::LaunchConfigurationIdHasBeenSet() const
{
    return m_launchConfigurationIdHasBeenSet;
}

string NodePool::GetAutoscalingGroupId() const
{
    return m_autoscalingGroupId;
}

void NodePool::SetAutoscalingGroupId(const string& _autoscalingGroupId)
{
    m_autoscalingGroupId = _autoscalingGroupId;
    m_autoscalingGroupIdHasBeenSet = true;
}

bool NodePool::AutoscalingGroupIdHasBeenSet() const
{
    return m_autoscalingGroupIdHasBeenSet;
}

vector<Label> NodePool::GetLabels() const
{
    return m_labels;
}

void NodePool::SetLabels(const vector<Label>& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool NodePool::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

vector<Taint> NodePool::GetTaints() const
{
    return m_taints;
}

void NodePool::SetTaints(const vector<Taint>& _taints)
{
    m_taints = _taints;
    m_taintsHasBeenSet = true;
}

bool NodePool::TaintsHasBeenSet() const
{
    return m_taintsHasBeenSet;
}

NodeCountSummary NodePool::GetNodeCountSummary() const
{
    return m_nodeCountSummary;
}

void NodePool::SetNodeCountSummary(const NodeCountSummary& _nodeCountSummary)
{
    m_nodeCountSummary = _nodeCountSummary;
    m_nodeCountSummaryHasBeenSet = true;
}

bool NodePool::NodeCountSummaryHasBeenSet() const
{
    return m_nodeCountSummaryHasBeenSet;
}

string NodePool::GetAutoscalingGroupStatus() const
{
    return m_autoscalingGroupStatus;
}

void NodePool::SetAutoscalingGroupStatus(const string& _autoscalingGroupStatus)
{
    m_autoscalingGroupStatus = _autoscalingGroupStatus;
    m_autoscalingGroupStatusHasBeenSet = true;
}

bool NodePool::AutoscalingGroupStatusHasBeenSet() const
{
    return m_autoscalingGroupStatusHasBeenSet;
}

int64_t NodePool::GetMaxNodesNum() const
{
    return m_maxNodesNum;
}

void NodePool::SetMaxNodesNum(const int64_t& _maxNodesNum)
{
    m_maxNodesNum = _maxNodesNum;
    m_maxNodesNumHasBeenSet = true;
}

bool NodePool::MaxNodesNumHasBeenSet() const
{
    return m_maxNodesNumHasBeenSet;
}

int64_t NodePool::GetMinNodesNum() const
{
    return m_minNodesNum;
}

void NodePool::SetMinNodesNum(const int64_t& _minNodesNum)
{
    m_minNodesNum = _minNodesNum;
    m_minNodesNumHasBeenSet = true;
}

bool NodePool::MinNodesNumHasBeenSet() const
{
    return m_minNodesNumHasBeenSet;
}

int64_t NodePool::GetDesiredNodesNum() const
{
    return m_desiredNodesNum;
}

void NodePool::SetDesiredNodesNum(const int64_t& _desiredNodesNum)
{
    m_desiredNodesNum = _desiredNodesNum;
    m_desiredNodesNumHasBeenSet = true;
}

bool NodePool::DesiredNodesNumHasBeenSet() const
{
    return m_desiredNodesNumHasBeenSet;
}

