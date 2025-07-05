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

#include <tencentcloud/tke/v20180525/model/ScaleOutClusterMasterRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ScaleOutClusterMasterRequest::ScaleOutClusterMasterRequest() :
    m_clusterIdHasBeenSet(false),
    m_runInstancesForNodeHasBeenSet(false),
    m_existedInstancesForNodeHasBeenSet(false),
    m_instanceAdvancedSettingsHasBeenSet(false),
    m_extraArgsHasBeenSet(false)
{
}

string ScaleOutClusterMasterRequest::ToJsonString() const
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

    if (m_runInstancesForNodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunInstancesForNode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_runInstancesForNode.begin(); itr != m_runInstancesForNode.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_existedInstancesForNodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExistedInstancesForNode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_existedInstancesForNode.begin(); itr != m_existedInstancesForNode.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_instanceAdvancedSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceAdvancedSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceAdvancedSettings.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_extraArgsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraArgs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_extraArgs.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ScaleOutClusterMasterRequest::GetClusterId() const
{
    return m_clusterId;
}

void ScaleOutClusterMasterRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ScaleOutClusterMasterRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

vector<RunInstancesForNode> ScaleOutClusterMasterRequest::GetRunInstancesForNode() const
{
    return m_runInstancesForNode;
}

void ScaleOutClusterMasterRequest::SetRunInstancesForNode(const vector<RunInstancesForNode>& _runInstancesForNode)
{
    m_runInstancesForNode = _runInstancesForNode;
    m_runInstancesForNodeHasBeenSet = true;
}

bool ScaleOutClusterMasterRequest::RunInstancesForNodeHasBeenSet() const
{
    return m_runInstancesForNodeHasBeenSet;
}

vector<ExistedInstancesForNode> ScaleOutClusterMasterRequest::GetExistedInstancesForNode() const
{
    return m_existedInstancesForNode;
}

void ScaleOutClusterMasterRequest::SetExistedInstancesForNode(const vector<ExistedInstancesForNode>& _existedInstancesForNode)
{
    m_existedInstancesForNode = _existedInstancesForNode;
    m_existedInstancesForNodeHasBeenSet = true;
}

bool ScaleOutClusterMasterRequest::ExistedInstancesForNodeHasBeenSet() const
{
    return m_existedInstancesForNodeHasBeenSet;
}

InstanceAdvancedSettings ScaleOutClusterMasterRequest::GetInstanceAdvancedSettings() const
{
    return m_instanceAdvancedSettings;
}

void ScaleOutClusterMasterRequest::SetInstanceAdvancedSettings(const InstanceAdvancedSettings& _instanceAdvancedSettings)
{
    m_instanceAdvancedSettings = _instanceAdvancedSettings;
    m_instanceAdvancedSettingsHasBeenSet = true;
}

bool ScaleOutClusterMasterRequest::InstanceAdvancedSettingsHasBeenSet() const
{
    return m_instanceAdvancedSettingsHasBeenSet;
}

ClusterExtraArgs ScaleOutClusterMasterRequest::GetExtraArgs() const
{
    return m_extraArgs;
}

void ScaleOutClusterMasterRequest::SetExtraArgs(const ClusterExtraArgs& _extraArgs)
{
    m_extraArgs = _extraArgs;
    m_extraArgsHasBeenSet = true;
}

bool ScaleOutClusterMasterRequest::ExtraArgsHasBeenSet() const
{
    return m_extraArgsHasBeenSet;
}


