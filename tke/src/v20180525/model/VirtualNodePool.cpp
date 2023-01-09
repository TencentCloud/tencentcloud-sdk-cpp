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

#include <tencentcloud/tke/v20180525/model/VirtualNodePool.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

VirtualNodePool::VirtualNodePool() :
    m_nodePoolIdHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_lifeStateHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_taintsHasBeenSet(false)
{
}

CoreInternalOutcome VirtualNodePool::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodePoolId") && !value["NodePoolId"].IsNull())
    {
        if (!value["NodePoolId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VirtualNodePool.NodePoolId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodePoolId = string(value["NodePoolId"].GetString());
        m_nodePoolIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetIds") && !value["SubnetIds"].IsNull())
    {
        if (!value["SubnetIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VirtualNodePool.SubnetIds` is not array type"));

        const rapidjson::Value &tmpValue = value["SubnetIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subnetIds.push_back((*itr).GetString());
        }
        m_subnetIdsHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VirtualNodePool.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("LifeState") && !value["LifeState"].IsNull())
    {
        if (!value["LifeState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VirtualNodePool.LifeState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lifeState = string(value["LifeState"].GetString());
        m_lifeStateHasBeenSet = true;
    }

    if (value.HasMember("Labels") && !value["Labels"].IsNull())
    {
        if (!value["Labels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VirtualNodePool.Labels` is not array type"));

        const rapidjson::Value &tmpValue = value["Labels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Core::Error("response `VirtualNodePool.Taints` is not array type"));

        const rapidjson::Value &tmpValue = value["Taints"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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


    return CoreInternalOutcome(true);
}

void VirtualNodePool::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodePoolIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodePoolId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodePoolId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subnetIds.begin(); itr != m_subnetIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_lifeStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lifeState.c_str(), allocator).Move(), allocator);
    }

    if (m_labelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labels.begin(); itr != m_labels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_taintsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Taints";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taints.begin(); itr != m_taints.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string VirtualNodePool::GetNodePoolId() const
{
    return m_nodePoolId;
}

void VirtualNodePool::SetNodePoolId(const string& _nodePoolId)
{
    m_nodePoolId = _nodePoolId;
    m_nodePoolIdHasBeenSet = true;
}

bool VirtualNodePool::NodePoolIdHasBeenSet() const
{
    return m_nodePoolIdHasBeenSet;
}

vector<string> VirtualNodePool::GetSubnetIds() const
{
    return m_subnetIds;
}

void VirtualNodePool::SetSubnetIds(const vector<string>& _subnetIds)
{
    m_subnetIds = _subnetIds;
    m_subnetIdsHasBeenSet = true;
}

bool VirtualNodePool::SubnetIdsHasBeenSet() const
{
    return m_subnetIdsHasBeenSet;
}

string VirtualNodePool::GetName() const
{
    return m_name;
}

void VirtualNodePool::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool VirtualNodePool::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string VirtualNodePool::GetLifeState() const
{
    return m_lifeState;
}

void VirtualNodePool::SetLifeState(const string& _lifeState)
{
    m_lifeState = _lifeState;
    m_lifeStateHasBeenSet = true;
}

bool VirtualNodePool::LifeStateHasBeenSet() const
{
    return m_lifeStateHasBeenSet;
}

vector<Label> VirtualNodePool::GetLabels() const
{
    return m_labels;
}

void VirtualNodePool::SetLabels(const vector<Label>& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool VirtualNodePool::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

vector<Taint> VirtualNodePool::GetTaints() const
{
    return m_taints;
}

void VirtualNodePool::SetTaints(const vector<Taint>& _taints)
{
    m_taints = _taints;
    m_taintsHasBeenSet = true;
}

bool VirtualNodePool::TaintsHasBeenSet() const
{
    return m_taintsHasBeenSet;
}

