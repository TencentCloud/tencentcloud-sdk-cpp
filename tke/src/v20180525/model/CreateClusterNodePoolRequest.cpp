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

#include <tencentcloud/tke/v20180525/model/CreateClusterNodePoolRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace rapidjson;
using namespace std;

CreateClusterNodePoolRequest::CreateClusterNodePoolRequest() :
    m_clusterIdHasBeenSet(false),
    m_autoScalingGroupParaHasBeenSet(false),
    m_launchConfigureParaHasBeenSet(false),
    m_instanceAdvancedSettingsHasBeenSet(false),
    m_enableAutoscaleHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_taintsHasBeenSet(false)
{
}

string CreateClusterNodePoolRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_autoScalingGroupParaHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AutoScalingGroupPara";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_autoScalingGroupPara.c_str(), allocator).Move(), allocator);
    }

    if (m_launchConfigureParaHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LaunchConfigurePara";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_launchConfigurePara.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceAdvancedSettingsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceAdvancedSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_instanceAdvancedSettings.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_enableAutoscaleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnableAutoscale";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableAutoscale, allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_labelsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labels.begin(); itr != m_labels.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_taintsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Taints";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taints.begin(); itr != m_taints.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateClusterNodePoolRequest::GetClusterId() const
{
    return m_clusterId;
}

void CreateClusterNodePoolRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CreateClusterNodePoolRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string CreateClusterNodePoolRequest::GetAutoScalingGroupPara() const
{
    return m_autoScalingGroupPara;
}

void CreateClusterNodePoolRequest::SetAutoScalingGroupPara(const string& _autoScalingGroupPara)
{
    m_autoScalingGroupPara = _autoScalingGroupPara;
    m_autoScalingGroupParaHasBeenSet = true;
}

bool CreateClusterNodePoolRequest::AutoScalingGroupParaHasBeenSet() const
{
    return m_autoScalingGroupParaHasBeenSet;
}

string CreateClusterNodePoolRequest::GetLaunchConfigurePara() const
{
    return m_launchConfigurePara;
}

void CreateClusterNodePoolRequest::SetLaunchConfigurePara(const string& _launchConfigurePara)
{
    m_launchConfigurePara = _launchConfigurePara;
    m_launchConfigureParaHasBeenSet = true;
}

bool CreateClusterNodePoolRequest::LaunchConfigureParaHasBeenSet() const
{
    return m_launchConfigureParaHasBeenSet;
}

InstanceAdvancedSettings CreateClusterNodePoolRequest::GetInstanceAdvancedSettings() const
{
    return m_instanceAdvancedSettings;
}

void CreateClusterNodePoolRequest::SetInstanceAdvancedSettings(const InstanceAdvancedSettings& _instanceAdvancedSettings)
{
    m_instanceAdvancedSettings = _instanceAdvancedSettings;
    m_instanceAdvancedSettingsHasBeenSet = true;
}

bool CreateClusterNodePoolRequest::InstanceAdvancedSettingsHasBeenSet() const
{
    return m_instanceAdvancedSettingsHasBeenSet;
}

bool CreateClusterNodePoolRequest::GetEnableAutoscale() const
{
    return m_enableAutoscale;
}

void CreateClusterNodePoolRequest::SetEnableAutoscale(const bool& _enableAutoscale)
{
    m_enableAutoscale = _enableAutoscale;
    m_enableAutoscaleHasBeenSet = true;
}

bool CreateClusterNodePoolRequest::EnableAutoscaleHasBeenSet() const
{
    return m_enableAutoscaleHasBeenSet;
}

string CreateClusterNodePoolRequest::GetName() const
{
    return m_name;
}

void CreateClusterNodePoolRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateClusterNodePoolRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<Label> CreateClusterNodePoolRequest::GetLabels() const
{
    return m_labels;
}

void CreateClusterNodePoolRequest::SetLabels(const vector<Label>& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool CreateClusterNodePoolRequest::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

vector<Taint> CreateClusterNodePoolRequest::GetTaints() const
{
    return m_taints;
}

void CreateClusterNodePoolRequest::SetTaints(const vector<Taint>& _taints)
{
    m_taints = _taints;
    m_taintsHasBeenSet = true;
}

bool CreateClusterNodePoolRequest::TaintsHasBeenSet() const
{
    return m_taintsHasBeenSet;
}


