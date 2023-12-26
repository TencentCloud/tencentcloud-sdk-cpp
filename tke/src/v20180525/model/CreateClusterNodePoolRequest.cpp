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
using namespace std;

CreateClusterNodePoolRequest::CreateClusterNodePoolRequest() :
    m_clusterIdHasBeenSet(false),
    m_autoScalingGroupParaHasBeenSet(false),
    m_launchConfigureParaHasBeenSet(false),
    m_instanceAdvancedSettingsHasBeenSet(false),
    m_enableAutoscaleHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_taintsHasBeenSet(false),
    m_annotationsHasBeenSet(false),
    m_containerRuntimeHasBeenSet(false),
    m_runtimeVersionHasBeenSet(false),
    m_nodePoolOsHasBeenSet(false),
    m_osCustomizeTypeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_deletionProtectionHasBeenSet(false)
{
}

string CreateClusterNodePoolRequest::ToJsonString() const
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

    if (m_enableAutoscaleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableAutoscale";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableAutoscale, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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

    if (m_taintsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Taints";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taints.begin(); itr != m_taints.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_annotationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Annotations";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_annotations.begin(); itr != m_annotations.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_containerRuntimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerRuntime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_containerRuntime.c_str(), allocator).Move(), allocator);
    }

    if (m_runtimeVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_runtimeVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_nodePoolOsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodePoolOs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nodePoolOs.c_str(), allocator).Move(), allocator);
    }

    if (m_osCustomizeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsCustomizeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_osCustomizeType.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_deletionProtectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeletionProtection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deletionProtection, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
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

vector<AnnotationValue> CreateClusterNodePoolRequest::GetAnnotations() const
{
    return m_annotations;
}

void CreateClusterNodePoolRequest::SetAnnotations(const vector<AnnotationValue>& _annotations)
{
    m_annotations = _annotations;
    m_annotationsHasBeenSet = true;
}

bool CreateClusterNodePoolRequest::AnnotationsHasBeenSet() const
{
    return m_annotationsHasBeenSet;
}

string CreateClusterNodePoolRequest::GetContainerRuntime() const
{
    return m_containerRuntime;
}

void CreateClusterNodePoolRequest::SetContainerRuntime(const string& _containerRuntime)
{
    m_containerRuntime = _containerRuntime;
    m_containerRuntimeHasBeenSet = true;
}

bool CreateClusterNodePoolRequest::ContainerRuntimeHasBeenSet() const
{
    return m_containerRuntimeHasBeenSet;
}

string CreateClusterNodePoolRequest::GetRuntimeVersion() const
{
    return m_runtimeVersion;
}

void CreateClusterNodePoolRequest::SetRuntimeVersion(const string& _runtimeVersion)
{
    m_runtimeVersion = _runtimeVersion;
    m_runtimeVersionHasBeenSet = true;
}

bool CreateClusterNodePoolRequest::RuntimeVersionHasBeenSet() const
{
    return m_runtimeVersionHasBeenSet;
}

string CreateClusterNodePoolRequest::GetNodePoolOs() const
{
    return m_nodePoolOs;
}

void CreateClusterNodePoolRequest::SetNodePoolOs(const string& _nodePoolOs)
{
    m_nodePoolOs = _nodePoolOs;
    m_nodePoolOsHasBeenSet = true;
}

bool CreateClusterNodePoolRequest::NodePoolOsHasBeenSet() const
{
    return m_nodePoolOsHasBeenSet;
}

string CreateClusterNodePoolRequest::GetOsCustomizeType() const
{
    return m_osCustomizeType;
}

void CreateClusterNodePoolRequest::SetOsCustomizeType(const string& _osCustomizeType)
{
    m_osCustomizeType = _osCustomizeType;
    m_osCustomizeTypeHasBeenSet = true;
}

bool CreateClusterNodePoolRequest::OsCustomizeTypeHasBeenSet() const
{
    return m_osCustomizeTypeHasBeenSet;
}

vector<Tag> CreateClusterNodePoolRequest::GetTags() const
{
    return m_tags;
}

void CreateClusterNodePoolRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateClusterNodePoolRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

bool CreateClusterNodePoolRequest::GetDeletionProtection() const
{
    return m_deletionProtection;
}

void CreateClusterNodePoolRequest::SetDeletionProtection(const bool& _deletionProtection)
{
    m_deletionProtection = _deletionProtection;
    m_deletionProtectionHasBeenSet = true;
}

bool CreateClusterNodePoolRequest::DeletionProtectionHasBeenSet() const
{
    return m_deletionProtectionHasBeenSet;
}


