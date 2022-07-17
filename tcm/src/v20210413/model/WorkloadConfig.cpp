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

#include <tencentcloud/tcm/v20210413/model/WorkloadConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcm::V20210413::Model;
using namespace std;

WorkloadConfig::WorkloadConfig() :
    m_replicasHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_horizontalPodAutoscalerHasBeenSet(false),
    m_selectedNodeListHasBeenSet(false),
    m_deployModeHasBeenSet(false)
{
}

CoreInternalOutcome WorkloadConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Replicas") && !value["Replicas"].IsNull())
    {
        if (!value["Replicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkloadConfig.Replicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_replicas = value["Replicas"].GetInt64();
        m_replicasHasBeenSet = true;
    }

    if (value.HasMember("Resources") && !value["Resources"].IsNull())
    {
        if (!value["Resources"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WorkloadConfig.Resources` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resources.Deserialize(value["Resources"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourcesHasBeenSet = true;
    }

    if (value.HasMember("HorizontalPodAutoscaler") && !value["HorizontalPodAutoscaler"].IsNull())
    {
        if (!value["HorizontalPodAutoscaler"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WorkloadConfig.HorizontalPodAutoscaler` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_horizontalPodAutoscaler.Deserialize(value["HorizontalPodAutoscaler"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_horizontalPodAutoscalerHasBeenSet = true;
    }

    if (value.HasMember("SelectedNodeList") && !value["SelectedNodeList"].IsNull())
    {
        if (!value["SelectedNodeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WorkloadConfig.SelectedNodeList` is not array type"));

        const rapidjson::Value &tmpValue = value["SelectedNodeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_selectedNodeList.push_back((*itr).GetString());
        }
        m_selectedNodeListHasBeenSet = true;
    }

    if (value.HasMember("DeployMode") && !value["DeployMode"].IsNull())
    {
        if (!value["DeployMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkloadConfig.DeployMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deployMode = string(value["DeployMode"].GetString());
        m_deployModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkloadConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_replicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Replicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replicas, allocator);
    }

    if (m_resourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resources";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resources.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_horizontalPodAutoscalerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HorizontalPodAutoscaler";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_horizontalPodAutoscaler.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_selectedNodeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectedNodeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_selectedNodeList.begin(); itr != m_selectedNodeList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_deployModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deployMode.c_str(), allocator).Move(), allocator);
    }

}


int64_t WorkloadConfig::GetReplicas() const
{
    return m_replicas;
}

void WorkloadConfig::SetReplicas(const int64_t& _replicas)
{
    m_replicas = _replicas;
    m_replicasHasBeenSet = true;
}

bool WorkloadConfig::ReplicasHasBeenSet() const
{
    return m_replicasHasBeenSet;
}

ResourceRequirements WorkloadConfig::GetResources() const
{
    return m_resources;
}

void WorkloadConfig::SetResources(const ResourceRequirements& _resources)
{
    m_resources = _resources;
    m_resourcesHasBeenSet = true;
}

bool WorkloadConfig::ResourcesHasBeenSet() const
{
    return m_resourcesHasBeenSet;
}

HorizontalPodAutoscalerSpec WorkloadConfig::GetHorizontalPodAutoscaler() const
{
    return m_horizontalPodAutoscaler;
}

void WorkloadConfig::SetHorizontalPodAutoscaler(const HorizontalPodAutoscalerSpec& _horizontalPodAutoscaler)
{
    m_horizontalPodAutoscaler = _horizontalPodAutoscaler;
    m_horizontalPodAutoscalerHasBeenSet = true;
}

bool WorkloadConfig::HorizontalPodAutoscalerHasBeenSet() const
{
    return m_horizontalPodAutoscalerHasBeenSet;
}

vector<string> WorkloadConfig::GetSelectedNodeList() const
{
    return m_selectedNodeList;
}

void WorkloadConfig::SetSelectedNodeList(const vector<string>& _selectedNodeList)
{
    m_selectedNodeList = _selectedNodeList;
    m_selectedNodeListHasBeenSet = true;
}

bool WorkloadConfig::SelectedNodeListHasBeenSet() const
{
    return m_selectedNodeListHasBeenSet;
}

string WorkloadConfig::GetDeployMode() const
{
    return m_deployMode;
}

void WorkloadConfig::SetDeployMode(const string& _deployMode)
{
    m_deployMode = _deployMode;
    m_deployModeHasBeenSet = true;
}

bool WorkloadConfig::DeployModeHasBeenSet() const
{
    return m_deployModeHasBeenSet;
}

