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

#include <tencentcloud/tke/v20180525/model/ModifyClusterAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ModifyClusterAttributeRequest::ModifyClusterAttributeRequest() :
    m_clusterIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_clusterDescHasBeenSet(false),
    m_clusterLevelHasBeenSet(false),
    m_autoUpgradeClusterLevelHasBeenSet(false),
    m_qGPUShareEnableHasBeenSet(false),
    m_clusterPropertyHasBeenSet(false)
{
}

string ModifyClusterAttributeRequest::ToJsonString() const
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

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_autoUpgradeClusterLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoUpgradeClusterLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_autoUpgradeClusterLevel.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_qGPUShareEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QGPUShareEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_qGPUShareEnable, allocator);
    }

    if (m_clusterPropertyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterProperty";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clusterProperty.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyClusterAttributeRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyClusterAttributeRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyClusterAttributeRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

int64_t ModifyClusterAttributeRequest::GetProjectId() const
{
    return m_projectId;
}

void ModifyClusterAttributeRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ModifyClusterAttributeRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ModifyClusterAttributeRequest::GetClusterName() const
{
    return m_clusterName;
}

void ModifyClusterAttributeRequest::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool ModifyClusterAttributeRequest::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string ModifyClusterAttributeRequest::GetClusterDesc() const
{
    return m_clusterDesc;
}

void ModifyClusterAttributeRequest::SetClusterDesc(const string& _clusterDesc)
{
    m_clusterDesc = _clusterDesc;
    m_clusterDescHasBeenSet = true;
}

bool ModifyClusterAttributeRequest::ClusterDescHasBeenSet() const
{
    return m_clusterDescHasBeenSet;
}

string ModifyClusterAttributeRequest::GetClusterLevel() const
{
    return m_clusterLevel;
}

void ModifyClusterAttributeRequest::SetClusterLevel(const string& _clusterLevel)
{
    m_clusterLevel = _clusterLevel;
    m_clusterLevelHasBeenSet = true;
}

bool ModifyClusterAttributeRequest::ClusterLevelHasBeenSet() const
{
    return m_clusterLevelHasBeenSet;
}

AutoUpgradeClusterLevel ModifyClusterAttributeRequest::GetAutoUpgradeClusterLevel() const
{
    return m_autoUpgradeClusterLevel;
}

void ModifyClusterAttributeRequest::SetAutoUpgradeClusterLevel(const AutoUpgradeClusterLevel& _autoUpgradeClusterLevel)
{
    m_autoUpgradeClusterLevel = _autoUpgradeClusterLevel;
    m_autoUpgradeClusterLevelHasBeenSet = true;
}

bool ModifyClusterAttributeRequest::AutoUpgradeClusterLevelHasBeenSet() const
{
    return m_autoUpgradeClusterLevelHasBeenSet;
}

bool ModifyClusterAttributeRequest::GetQGPUShareEnable() const
{
    return m_qGPUShareEnable;
}

void ModifyClusterAttributeRequest::SetQGPUShareEnable(const bool& _qGPUShareEnable)
{
    m_qGPUShareEnable = _qGPUShareEnable;
    m_qGPUShareEnableHasBeenSet = true;
}

bool ModifyClusterAttributeRequest::QGPUShareEnableHasBeenSet() const
{
    return m_qGPUShareEnableHasBeenSet;
}

ClusterProperty ModifyClusterAttributeRequest::GetClusterProperty() const
{
    return m_clusterProperty;
}

void ModifyClusterAttributeRequest::SetClusterProperty(const ClusterProperty& _clusterProperty)
{
    m_clusterProperty = _clusterProperty;
    m_clusterPropertyHasBeenSet = true;
}

bool ModifyClusterAttributeRequest::ClusterPropertyHasBeenSet() const
{
    return m_clusterPropertyHasBeenSet;
}


