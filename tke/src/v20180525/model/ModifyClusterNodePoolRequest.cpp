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

#include <tencentcloud/tke/v20180525/model/ModifyClusterNodePoolRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ModifyClusterNodePoolRequest::ModifyClusterNodePoolRequest() :
    m_clusterIdHasBeenSet(false),
    m_nodePoolIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_maxNodesNumHasBeenSet(false),
    m_minNodesNumHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_taintsHasBeenSet(false),
    m_annotationsHasBeenSet(false),
    m_enableAutoscaleHasBeenSet(false),
    m_osNameHasBeenSet(false),
    m_osCustomizeTypeHasBeenSet(false),
    m_gPUArgsHasBeenSet(false),
    m_userScriptHasBeenSet(false),
    m_ignoreExistedNodeHasBeenSet(false),
    m_extraArgsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_unschedulableHasBeenSet(false),
    m_deletionProtectionHasBeenSet(false),
    m_dockerGraphPathHasBeenSet(false),
    m_preStartUserScriptHasBeenSet(false)
{
}

string ModifyClusterNodePoolRequest::ToJsonString() const
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

    if (m_nodePoolIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodePoolId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nodePoolId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_maxNodesNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxNodesNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxNodesNum, allocator);
    }

    if (m_minNodesNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinNodesNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_minNodesNum, allocator);
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

    if (m_enableAutoscaleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableAutoscale";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableAutoscale, allocator);
    }

    if (m_osNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_osName.c_str(), allocator).Move(), allocator);
    }

    if (m_osCustomizeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsCustomizeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_osCustomizeType.c_str(), allocator).Move(), allocator);
    }

    if (m_gPUArgsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GPUArgs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_gPUArgs.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_userScriptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserScript";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userScript.c_str(), allocator).Move(), allocator);
    }

    if (m_ignoreExistedNodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IgnoreExistedNode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ignoreExistedNode, allocator);
    }

    if (m_extraArgsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraArgs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_extraArgs.ToJsonObject(d[key.c_str()], allocator);
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

    if (m_unschedulableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unschedulable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_unschedulable, allocator);
    }

    if (m_deletionProtectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeletionProtection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deletionProtection, allocator);
    }

    if (m_dockerGraphPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DockerGraphPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dockerGraphPath.c_str(), allocator).Move(), allocator);
    }

    if (m_preStartUserScriptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreStartUserScript";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_preStartUserScript.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyClusterNodePoolRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyClusterNodePoolRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyClusterNodePoolRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ModifyClusterNodePoolRequest::GetNodePoolId() const
{
    return m_nodePoolId;
}

void ModifyClusterNodePoolRequest::SetNodePoolId(const string& _nodePoolId)
{
    m_nodePoolId = _nodePoolId;
    m_nodePoolIdHasBeenSet = true;
}

bool ModifyClusterNodePoolRequest::NodePoolIdHasBeenSet() const
{
    return m_nodePoolIdHasBeenSet;
}

string ModifyClusterNodePoolRequest::GetName() const
{
    return m_name;
}

void ModifyClusterNodePoolRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyClusterNodePoolRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t ModifyClusterNodePoolRequest::GetMaxNodesNum() const
{
    return m_maxNodesNum;
}

void ModifyClusterNodePoolRequest::SetMaxNodesNum(const int64_t& _maxNodesNum)
{
    m_maxNodesNum = _maxNodesNum;
    m_maxNodesNumHasBeenSet = true;
}

bool ModifyClusterNodePoolRequest::MaxNodesNumHasBeenSet() const
{
    return m_maxNodesNumHasBeenSet;
}

int64_t ModifyClusterNodePoolRequest::GetMinNodesNum() const
{
    return m_minNodesNum;
}

void ModifyClusterNodePoolRequest::SetMinNodesNum(const int64_t& _minNodesNum)
{
    m_minNodesNum = _minNodesNum;
    m_minNodesNumHasBeenSet = true;
}

bool ModifyClusterNodePoolRequest::MinNodesNumHasBeenSet() const
{
    return m_minNodesNumHasBeenSet;
}

vector<Label> ModifyClusterNodePoolRequest::GetLabels() const
{
    return m_labels;
}

void ModifyClusterNodePoolRequest::SetLabels(const vector<Label>& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool ModifyClusterNodePoolRequest::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

vector<Taint> ModifyClusterNodePoolRequest::GetTaints() const
{
    return m_taints;
}

void ModifyClusterNodePoolRequest::SetTaints(const vector<Taint>& _taints)
{
    m_taints = _taints;
    m_taintsHasBeenSet = true;
}

bool ModifyClusterNodePoolRequest::TaintsHasBeenSet() const
{
    return m_taintsHasBeenSet;
}

vector<AnnotationValue> ModifyClusterNodePoolRequest::GetAnnotations() const
{
    return m_annotations;
}

void ModifyClusterNodePoolRequest::SetAnnotations(const vector<AnnotationValue>& _annotations)
{
    m_annotations = _annotations;
    m_annotationsHasBeenSet = true;
}

bool ModifyClusterNodePoolRequest::AnnotationsHasBeenSet() const
{
    return m_annotationsHasBeenSet;
}

bool ModifyClusterNodePoolRequest::GetEnableAutoscale() const
{
    return m_enableAutoscale;
}

void ModifyClusterNodePoolRequest::SetEnableAutoscale(const bool& _enableAutoscale)
{
    m_enableAutoscale = _enableAutoscale;
    m_enableAutoscaleHasBeenSet = true;
}

bool ModifyClusterNodePoolRequest::EnableAutoscaleHasBeenSet() const
{
    return m_enableAutoscaleHasBeenSet;
}

string ModifyClusterNodePoolRequest::GetOsName() const
{
    return m_osName;
}

void ModifyClusterNodePoolRequest::SetOsName(const string& _osName)
{
    m_osName = _osName;
    m_osNameHasBeenSet = true;
}

bool ModifyClusterNodePoolRequest::OsNameHasBeenSet() const
{
    return m_osNameHasBeenSet;
}

string ModifyClusterNodePoolRequest::GetOsCustomizeType() const
{
    return m_osCustomizeType;
}

void ModifyClusterNodePoolRequest::SetOsCustomizeType(const string& _osCustomizeType)
{
    m_osCustomizeType = _osCustomizeType;
    m_osCustomizeTypeHasBeenSet = true;
}

bool ModifyClusterNodePoolRequest::OsCustomizeTypeHasBeenSet() const
{
    return m_osCustomizeTypeHasBeenSet;
}

GPUArgs ModifyClusterNodePoolRequest::GetGPUArgs() const
{
    return m_gPUArgs;
}

void ModifyClusterNodePoolRequest::SetGPUArgs(const GPUArgs& _gPUArgs)
{
    m_gPUArgs = _gPUArgs;
    m_gPUArgsHasBeenSet = true;
}

bool ModifyClusterNodePoolRequest::GPUArgsHasBeenSet() const
{
    return m_gPUArgsHasBeenSet;
}

string ModifyClusterNodePoolRequest::GetUserScript() const
{
    return m_userScript;
}

void ModifyClusterNodePoolRequest::SetUserScript(const string& _userScript)
{
    m_userScript = _userScript;
    m_userScriptHasBeenSet = true;
}

bool ModifyClusterNodePoolRequest::UserScriptHasBeenSet() const
{
    return m_userScriptHasBeenSet;
}

bool ModifyClusterNodePoolRequest::GetIgnoreExistedNode() const
{
    return m_ignoreExistedNode;
}

void ModifyClusterNodePoolRequest::SetIgnoreExistedNode(const bool& _ignoreExistedNode)
{
    m_ignoreExistedNode = _ignoreExistedNode;
    m_ignoreExistedNodeHasBeenSet = true;
}

bool ModifyClusterNodePoolRequest::IgnoreExistedNodeHasBeenSet() const
{
    return m_ignoreExistedNodeHasBeenSet;
}

InstanceExtraArgs ModifyClusterNodePoolRequest::GetExtraArgs() const
{
    return m_extraArgs;
}

void ModifyClusterNodePoolRequest::SetExtraArgs(const InstanceExtraArgs& _extraArgs)
{
    m_extraArgs = _extraArgs;
    m_extraArgsHasBeenSet = true;
}

bool ModifyClusterNodePoolRequest::ExtraArgsHasBeenSet() const
{
    return m_extraArgsHasBeenSet;
}

vector<Tag> ModifyClusterNodePoolRequest::GetTags() const
{
    return m_tags;
}

void ModifyClusterNodePoolRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ModifyClusterNodePoolRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

int64_t ModifyClusterNodePoolRequest::GetUnschedulable() const
{
    return m_unschedulable;
}

void ModifyClusterNodePoolRequest::SetUnschedulable(const int64_t& _unschedulable)
{
    m_unschedulable = _unschedulable;
    m_unschedulableHasBeenSet = true;
}

bool ModifyClusterNodePoolRequest::UnschedulableHasBeenSet() const
{
    return m_unschedulableHasBeenSet;
}

bool ModifyClusterNodePoolRequest::GetDeletionProtection() const
{
    return m_deletionProtection;
}

void ModifyClusterNodePoolRequest::SetDeletionProtection(const bool& _deletionProtection)
{
    m_deletionProtection = _deletionProtection;
    m_deletionProtectionHasBeenSet = true;
}

bool ModifyClusterNodePoolRequest::DeletionProtectionHasBeenSet() const
{
    return m_deletionProtectionHasBeenSet;
}

string ModifyClusterNodePoolRequest::GetDockerGraphPath() const
{
    return m_dockerGraphPath;
}

void ModifyClusterNodePoolRequest::SetDockerGraphPath(const string& _dockerGraphPath)
{
    m_dockerGraphPath = _dockerGraphPath;
    m_dockerGraphPathHasBeenSet = true;
}

bool ModifyClusterNodePoolRequest::DockerGraphPathHasBeenSet() const
{
    return m_dockerGraphPathHasBeenSet;
}

string ModifyClusterNodePoolRequest::GetPreStartUserScript() const
{
    return m_preStartUserScript;
}

void ModifyClusterNodePoolRequest::SetPreStartUserScript(const string& _preStartUserScript)
{
    m_preStartUserScript = _preStartUserScript;
    m_preStartUserScriptHasBeenSet = true;
}

bool ModifyClusterNodePoolRequest::PreStartUserScriptHasBeenSet() const
{
    return m_preStartUserScriptHasBeenSet;
}


