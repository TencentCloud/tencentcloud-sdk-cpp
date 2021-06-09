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

#include <tencentcloud/tke/v20180525/model/CreateClusterAsGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

CreateClusterAsGroupRequest::CreateClusterAsGroupRequest() :
    m_clusterIdHasBeenSet(false),
    m_autoScalingGroupParaHasBeenSet(false),
    m_launchConfigureParaHasBeenSet(false),
    m_instanceAdvancedSettingsHasBeenSet(false),
    m_labelsHasBeenSet(false)
{
}

string CreateClusterAsGroupRequest::ToJsonString() const
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

    if (m_autoScalingGroupParaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScalingGroupPara";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoScalingGroupPara.c_str(), allocator).Move(), allocator);
    }

    if (m_launchConfigureParaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaunchConfigurePara";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_launchConfigurePara.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceAdvancedSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceAdvancedSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceAdvancedSettings.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_labelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labels.begin(); itr != m_labels.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateClusterAsGroupRequest::GetClusterId() const
{
    return m_clusterId;
}

void CreateClusterAsGroupRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CreateClusterAsGroupRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string CreateClusterAsGroupRequest::GetAutoScalingGroupPara() const
{
    return m_autoScalingGroupPara;
}

void CreateClusterAsGroupRequest::SetAutoScalingGroupPara(const string& _autoScalingGroupPara)
{
    m_autoScalingGroupPara = _autoScalingGroupPara;
    m_autoScalingGroupParaHasBeenSet = true;
}

bool CreateClusterAsGroupRequest::AutoScalingGroupParaHasBeenSet() const
{
    return m_autoScalingGroupParaHasBeenSet;
}

string CreateClusterAsGroupRequest::GetLaunchConfigurePara() const
{
    return m_launchConfigurePara;
}

void CreateClusterAsGroupRequest::SetLaunchConfigurePara(const string& _launchConfigurePara)
{
    m_launchConfigurePara = _launchConfigurePara;
    m_launchConfigureParaHasBeenSet = true;
}

bool CreateClusterAsGroupRequest::LaunchConfigureParaHasBeenSet() const
{
    return m_launchConfigureParaHasBeenSet;
}

InstanceAdvancedSettings CreateClusterAsGroupRequest::GetInstanceAdvancedSettings() const
{
    return m_instanceAdvancedSettings;
}

void CreateClusterAsGroupRequest::SetInstanceAdvancedSettings(const InstanceAdvancedSettings& _instanceAdvancedSettings)
{
    m_instanceAdvancedSettings = _instanceAdvancedSettings;
    m_instanceAdvancedSettingsHasBeenSet = true;
}

bool CreateClusterAsGroupRequest::InstanceAdvancedSettingsHasBeenSet() const
{
    return m_instanceAdvancedSettingsHasBeenSet;
}

vector<Label> CreateClusterAsGroupRequest::GetLabels() const
{
    return m_labels;
}

void CreateClusterAsGroupRequest::SetLabels(const vector<Label>& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool CreateClusterAsGroupRequest::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}


