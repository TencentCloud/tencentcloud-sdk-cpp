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

#include <tencentcloud/tke/v20220501/model/DeleteClusterMachinesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20220501::Model;
using namespace std;

DeleteClusterMachinesRequest::DeleteClusterMachinesRequest() :
    m_clusterIdHasBeenSet(false),
    m_machineNamesHasBeenSet(false),
    m_enableScaleDownHasBeenSet(false),
    m_instanceDeleteModeHasBeenSet(false)
{
}

string DeleteClusterMachinesRequest::ToJsonString() const
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

    if (m_machineNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_machineNames.begin(); itr != m_machineNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_enableScaleDownHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableScaleDown";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableScaleDown, allocator);
    }

    if (m_instanceDeleteModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceDeleteMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceDeleteMode.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteClusterMachinesRequest::GetClusterId() const
{
    return m_clusterId;
}

void DeleteClusterMachinesRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DeleteClusterMachinesRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

vector<string> DeleteClusterMachinesRequest::GetMachineNames() const
{
    return m_machineNames;
}

void DeleteClusterMachinesRequest::SetMachineNames(const vector<string>& _machineNames)
{
    m_machineNames = _machineNames;
    m_machineNamesHasBeenSet = true;
}

bool DeleteClusterMachinesRequest::MachineNamesHasBeenSet() const
{
    return m_machineNamesHasBeenSet;
}

bool DeleteClusterMachinesRequest::GetEnableScaleDown() const
{
    return m_enableScaleDown;
}

void DeleteClusterMachinesRequest::SetEnableScaleDown(const bool& _enableScaleDown)
{
    m_enableScaleDown = _enableScaleDown;
    m_enableScaleDownHasBeenSet = true;
}

bool DeleteClusterMachinesRequest::EnableScaleDownHasBeenSet() const
{
    return m_enableScaleDownHasBeenSet;
}

string DeleteClusterMachinesRequest::GetInstanceDeleteMode() const
{
    return m_instanceDeleteMode;
}

void DeleteClusterMachinesRequest::SetInstanceDeleteMode(const string& _instanceDeleteMode)
{
    m_instanceDeleteMode = _instanceDeleteMode;
    m_instanceDeleteModeHasBeenSet = true;
}

bool DeleteClusterMachinesRequest::InstanceDeleteModeHasBeenSet() const
{
    return m_instanceDeleteModeHasBeenSet;
}


