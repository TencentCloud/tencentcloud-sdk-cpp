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

#include <tencentcloud/monitor/v20180724/model/PrometheusClusterAgentPodConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

PrometheusClusterAgentPodConfig::PrometheusClusterAgentPodConfig() :
    m_hostNetHasBeenSet(false),
    m_nodeSelectorHasBeenSet(false),
    m_tolerationsHasBeenSet(false)
{
}

CoreInternalOutcome PrometheusClusterAgentPodConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HostNet") && !value["HostNet"].IsNull())
    {
        if (!value["HostNet"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusClusterAgentPodConfig.HostNet` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hostNet = value["HostNet"].GetBool();
        m_hostNetHasBeenSet = true;
    }

    if (value.HasMember("NodeSelector") && !value["NodeSelector"].IsNull())
    {
        if (!value["NodeSelector"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrometheusClusterAgentPodConfig.NodeSelector` is not array type"));

        const rapidjson::Value &tmpValue = value["NodeSelector"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Label item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_nodeSelector.push_back(item);
        }
        m_nodeSelectorHasBeenSet = true;
    }

    if (value.HasMember("Tolerations") && !value["Tolerations"].IsNull())
    {
        if (!value["Tolerations"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrometheusClusterAgentPodConfig.Tolerations` is not array type"));

        const rapidjson::Value &tmpValue = value["Tolerations"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Toleration item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tolerations.push_back(item);
        }
        m_tolerationsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrometheusClusterAgentPodConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hostNetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostNet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostNet, allocator);
    }

    if (m_nodeSelectorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeSelector";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nodeSelector.begin(); itr != m_nodeSelector.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tolerationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tolerations";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tolerations.begin(); itr != m_tolerations.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


bool PrometheusClusterAgentPodConfig::GetHostNet() const
{
    return m_hostNet;
}

void PrometheusClusterAgentPodConfig::SetHostNet(const bool& _hostNet)
{
    m_hostNet = _hostNet;
    m_hostNetHasBeenSet = true;
}

bool PrometheusClusterAgentPodConfig::HostNetHasBeenSet() const
{
    return m_hostNetHasBeenSet;
}

vector<Label> PrometheusClusterAgentPodConfig::GetNodeSelector() const
{
    return m_nodeSelector;
}

void PrometheusClusterAgentPodConfig::SetNodeSelector(const vector<Label>& _nodeSelector)
{
    m_nodeSelector = _nodeSelector;
    m_nodeSelectorHasBeenSet = true;
}

bool PrometheusClusterAgentPodConfig::NodeSelectorHasBeenSet() const
{
    return m_nodeSelectorHasBeenSet;
}

vector<Toleration> PrometheusClusterAgentPodConfig::GetTolerations() const
{
    return m_tolerations;
}

void PrometheusClusterAgentPodConfig::SetTolerations(const vector<Toleration>& _tolerations)
{
    m_tolerations = _tolerations;
    m_tolerationsHasBeenSet = true;
}

bool PrometheusClusterAgentPodConfig::TolerationsHasBeenSet() const
{
    return m_tolerationsHasBeenSet;
}

