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

#include <tencentcloud/oceanus/v20190422/model/ExpertModeConfiguration.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

ExpertModeConfiguration::ExpertModeConfiguration() :
    m_jobGraphHasBeenSet(false),
    m_nodeConfigHasBeenSet(false),
    m_slotSharingGroupsHasBeenSet(false)
{
}

CoreInternalOutcome ExpertModeConfiguration::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("JobGraph") && !value["JobGraph"].IsNull())
    {
        if (!value["JobGraph"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ExpertModeConfiguration.JobGraph` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_jobGraph.Deserialize(value["JobGraph"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_jobGraphHasBeenSet = true;
    }

    if (value.HasMember("NodeConfig") && !value["NodeConfig"].IsNull())
    {
        if (!value["NodeConfig"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExpertModeConfiguration.NodeConfig` is not array type"));

        const rapidjson::Value &tmpValue = value["NodeConfig"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NodeConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_nodeConfig.push_back(item);
        }
        m_nodeConfigHasBeenSet = true;
    }

    if (value.HasMember("SlotSharingGroups") && !value["SlotSharingGroups"].IsNull())
    {
        if (!value["SlotSharingGroups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExpertModeConfiguration.SlotSharingGroups` is not array type"));

        const rapidjson::Value &tmpValue = value["SlotSharingGroups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SlotSharingGroup item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_slotSharingGroups.push_back(item);
        }
        m_slotSharingGroupsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExpertModeConfiguration::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_jobGraphHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobGraph";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_jobGraph.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_nodeConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nodeConfig.begin(); itr != m_nodeConfig.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_slotSharingGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlotSharingGroups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_slotSharingGroups.begin(); itr != m_slotSharingGroups.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


JobGraph ExpertModeConfiguration::GetJobGraph() const
{
    return m_jobGraph;
}

void ExpertModeConfiguration::SetJobGraph(const JobGraph& _jobGraph)
{
    m_jobGraph = _jobGraph;
    m_jobGraphHasBeenSet = true;
}

bool ExpertModeConfiguration::JobGraphHasBeenSet() const
{
    return m_jobGraphHasBeenSet;
}

vector<NodeConfig> ExpertModeConfiguration::GetNodeConfig() const
{
    return m_nodeConfig;
}

void ExpertModeConfiguration::SetNodeConfig(const vector<NodeConfig>& _nodeConfig)
{
    m_nodeConfig = _nodeConfig;
    m_nodeConfigHasBeenSet = true;
}

bool ExpertModeConfiguration::NodeConfigHasBeenSet() const
{
    return m_nodeConfigHasBeenSet;
}

vector<SlotSharingGroup> ExpertModeConfiguration::GetSlotSharingGroups() const
{
    return m_slotSharingGroups;
}

void ExpertModeConfiguration::SetSlotSharingGroups(const vector<SlotSharingGroup>& _slotSharingGroups)
{
    m_slotSharingGroups = _slotSharingGroups;
    m_slotSharingGroupsHasBeenSet = true;
}

bool ExpertModeConfiguration::SlotSharingGroupsHasBeenSet() const
{
    return m_slotSharingGroupsHasBeenSet;
}

