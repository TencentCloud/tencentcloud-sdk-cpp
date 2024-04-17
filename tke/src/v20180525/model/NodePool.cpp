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

#include <tencentcloud/tke/v20180525/model/NodePool.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

NodePool::NodePool() :
    m_nodePoolIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_clusterInstanceIdHasBeenSet(false),
    m_lifeStateHasBeenSet(false),
    m_launchConfigurationIdHasBeenSet(false),
    m_autoscalingGroupIdHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_taintsHasBeenSet(false),
    m_annotationsHasBeenSet(false),
    m_nodeCountSummaryHasBeenSet(false),
    m_autoscalingGroupStatusHasBeenSet(false),
    m_maxNodesNumHasBeenSet(false),
    m_minNodesNumHasBeenSet(false),
    m_desiredNodesNumHasBeenSet(false),
    m_runtimeConfigHasBeenSet(false),
    m_nodePoolOsHasBeenSet(false),
    m_osCustomizeTypeHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_desiredPodNumHasBeenSet(false),
    m_userScriptHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_deletionProtectionHasBeenSet(false),
    m_extraArgsHasBeenSet(false),
    m_gPUArgsHasBeenSet(false),
    m_dockerGraphPathHasBeenSet(false),
    m_dataDisksHasBeenSet(false),
    m_unschedulableHasBeenSet(false),
    m_preStartUserScriptHasBeenSet(false)
{
}

CoreInternalOutcome NodePool::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodePoolId") && !value["NodePoolId"].IsNull())
    {
        if (!value["NodePoolId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodePool.NodePoolId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodePoolId = string(value["NodePoolId"].GetString());
        m_nodePoolIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodePool.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ClusterInstanceId") && !value["ClusterInstanceId"].IsNull())
    {
        if (!value["ClusterInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodePool.ClusterInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterInstanceId = string(value["ClusterInstanceId"].GetString());
        m_clusterInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("LifeState") && !value["LifeState"].IsNull())
    {
        if (!value["LifeState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodePool.LifeState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lifeState = string(value["LifeState"].GetString());
        m_lifeStateHasBeenSet = true;
    }

    if (value.HasMember("LaunchConfigurationId") && !value["LaunchConfigurationId"].IsNull())
    {
        if (!value["LaunchConfigurationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodePool.LaunchConfigurationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_launchConfigurationId = string(value["LaunchConfigurationId"].GetString());
        m_launchConfigurationIdHasBeenSet = true;
    }

    if (value.HasMember("AutoscalingGroupId") && !value["AutoscalingGroupId"].IsNull())
    {
        if (!value["AutoscalingGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodePool.AutoscalingGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoscalingGroupId = string(value["AutoscalingGroupId"].GetString());
        m_autoscalingGroupIdHasBeenSet = true;
    }

    if (value.HasMember("Labels") && !value["Labels"].IsNull())
    {
        if (!value["Labels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NodePool.Labels` is not array type"));

        const rapidjson::Value &tmpValue = value["Labels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Label item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_labels.push_back(item);
        }
        m_labelsHasBeenSet = true;
    }

    if (value.HasMember("Taints") && !value["Taints"].IsNull())
    {
        if (!value["Taints"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NodePool.Taints` is not array type"));

        const rapidjson::Value &tmpValue = value["Taints"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Taint item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_taints.push_back(item);
        }
        m_taintsHasBeenSet = true;
    }

    if (value.HasMember("Annotations") && !value["Annotations"].IsNull())
    {
        if (!value["Annotations"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NodePool.Annotations` is not array type"));

        const rapidjson::Value &tmpValue = value["Annotations"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AnnotationValue item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_annotations.push_back(item);
        }
        m_annotationsHasBeenSet = true;
    }

    if (value.HasMember("NodeCountSummary") && !value["NodeCountSummary"].IsNull())
    {
        if (!value["NodeCountSummary"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NodePool.NodeCountSummary` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_nodeCountSummary.Deserialize(value["NodeCountSummary"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_nodeCountSummaryHasBeenSet = true;
    }

    if (value.HasMember("AutoscalingGroupStatus") && !value["AutoscalingGroupStatus"].IsNull())
    {
        if (!value["AutoscalingGroupStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodePool.AutoscalingGroupStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoscalingGroupStatus = string(value["AutoscalingGroupStatus"].GetString());
        m_autoscalingGroupStatusHasBeenSet = true;
    }

    if (value.HasMember("MaxNodesNum") && !value["MaxNodesNum"].IsNull())
    {
        if (!value["MaxNodesNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodePool.MaxNodesNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxNodesNum = value["MaxNodesNum"].GetInt64();
        m_maxNodesNumHasBeenSet = true;
    }

    if (value.HasMember("MinNodesNum") && !value["MinNodesNum"].IsNull())
    {
        if (!value["MinNodesNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodePool.MinNodesNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minNodesNum = value["MinNodesNum"].GetInt64();
        m_minNodesNumHasBeenSet = true;
    }

    if (value.HasMember("DesiredNodesNum") && !value["DesiredNodesNum"].IsNull())
    {
        if (!value["DesiredNodesNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodePool.DesiredNodesNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_desiredNodesNum = value["DesiredNodesNum"].GetInt64();
        m_desiredNodesNumHasBeenSet = true;
    }

    if (value.HasMember("RuntimeConfig") && !value["RuntimeConfig"].IsNull())
    {
        if (!value["RuntimeConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NodePool.RuntimeConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_runtimeConfig.Deserialize(value["RuntimeConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_runtimeConfigHasBeenSet = true;
    }

    if (value.HasMember("NodePoolOs") && !value["NodePoolOs"].IsNull())
    {
        if (!value["NodePoolOs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodePool.NodePoolOs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodePoolOs = string(value["NodePoolOs"].GetString());
        m_nodePoolOsHasBeenSet = true;
    }

    if (value.HasMember("OsCustomizeType") && !value["OsCustomizeType"].IsNull())
    {
        if (!value["OsCustomizeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodePool.OsCustomizeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osCustomizeType = string(value["OsCustomizeType"].GetString());
        m_osCustomizeTypeHasBeenSet = true;
    }

    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodePool.ImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = string(value["ImageId"].GetString());
        m_imageIdHasBeenSet = true;
    }

    if (value.HasMember("DesiredPodNum") && !value["DesiredPodNum"].IsNull())
    {
        if (!value["DesiredPodNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodePool.DesiredPodNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_desiredPodNum = value["DesiredPodNum"].GetInt64();
        m_desiredPodNumHasBeenSet = true;
    }

    if (value.HasMember("UserScript") && !value["UserScript"].IsNull())
    {
        if (!value["UserScript"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodePool.UserScript` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userScript = string(value["UserScript"].GetString());
        m_userScriptHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NodePool.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("DeletionProtection") && !value["DeletionProtection"].IsNull())
    {
        if (!value["DeletionProtection"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NodePool.DeletionProtection` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deletionProtection = value["DeletionProtection"].GetBool();
        m_deletionProtectionHasBeenSet = true;
    }

    if (value.HasMember("ExtraArgs") && !value["ExtraArgs"].IsNull())
    {
        if (!value["ExtraArgs"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NodePool.ExtraArgs` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_extraArgs.Deserialize(value["ExtraArgs"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_extraArgsHasBeenSet = true;
    }

    if (value.HasMember("GPUArgs") && !value["GPUArgs"].IsNull())
    {
        if (!value["GPUArgs"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NodePool.GPUArgs` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_gPUArgs.Deserialize(value["GPUArgs"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_gPUArgsHasBeenSet = true;
    }

    if (value.HasMember("DockerGraphPath") && !value["DockerGraphPath"].IsNull())
    {
        if (!value["DockerGraphPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodePool.DockerGraphPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dockerGraphPath = string(value["DockerGraphPath"].GetString());
        m_dockerGraphPathHasBeenSet = true;
    }

    if (value.HasMember("DataDisks") && !value["DataDisks"].IsNull())
    {
        if (!value["DataDisks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NodePool.DataDisks` is not array type"));

        const rapidjson::Value &tmpValue = value["DataDisks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DataDisk item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dataDisks.push_back(item);
        }
        m_dataDisksHasBeenSet = true;
    }

    if (value.HasMember("Unschedulable") && !value["Unschedulable"].IsNull())
    {
        if (!value["Unschedulable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodePool.Unschedulable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_unschedulable = value["Unschedulable"].GetInt64();
        m_unschedulableHasBeenSet = true;
    }

    if (value.HasMember("PreStartUserScript") && !value["PreStartUserScript"].IsNull())
    {
        if (!value["PreStartUserScript"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodePool.PreStartUserScript` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_preStartUserScript = string(value["PreStartUserScript"].GetString());
        m_preStartUserScriptHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NodePool::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodePoolIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodePoolId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodePoolId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_lifeStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lifeState.c_str(), allocator).Move(), allocator);
    }

    if (m_launchConfigurationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaunchConfigurationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_launchConfigurationId.c_str(), allocator).Move(), allocator);
    }

    if (m_autoscalingGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoscalingGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoscalingGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_labelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labels.begin(); itr != m_labels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_taintsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Taints";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taints.begin(); itr != m_taints.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_annotationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Annotations";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_annotations.begin(); itr != m_annotations.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_nodeCountSummaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeCountSummary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_nodeCountSummary.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_autoscalingGroupStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoscalingGroupStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoscalingGroupStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_maxNodesNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxNodesNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxNodesNum, allocator);
    }

    if (m_minNodesNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinNodesNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minNodesNum, allocator);
    }

    if (m_desiredNodesNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DesiredNodesNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_desiredNodesNum, allocator);
    }

    if (m_runtimeConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_runtimeConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_nodePoolOsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodePoolOs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodePoolOs.c_str(), allocator).Move(), allocator);
    }

    if (m_osCustomizeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsCustomizeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osCustomizeType.c_str(), allocator).Move(), allocator);
    }

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_desiredPodNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DesiredPodNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_desiredPodNum, allocator);
    }

    if (m_userScriptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserScript";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userScript.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_deletionProtectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeletionProtection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deletionProtection, allocator);
    }

    if (m_extraArgsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraArgs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_extraArgs.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_gPUArgsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GPUArgs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_gPUArgs.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dockerGraphPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DockerGraphPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dockerGraphPath.c_str(), allocator).Move(), allocator);
    }

    if (m_dataDisksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataDisks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataDisks.begin(); itr != m_dataDisks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_unschedulableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unschedulable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unschedulable, allocator);
    }

    if (m_preStartUserScriptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreStartUserScript";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_preStartUserScript.c_str(), allocator).Move(), allocator);
    }

}


string NodePool::GetNodePoolId() const
{
    return m_nodePoolId;
}

void NodePool::SetNodePoolId(const string& _nodePoolId)
{
    m_nodePoolId = _nodePoolId;
    m_nodePoolIdHasBeenSet = true;
}

bool NodePool::NodePoolIdHasBeenSet() const
{
    return m_nodePoolIdHasBeenSet;
}

string NodePool::GetName() const
{
    return m_name;
}

void NodePool::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool NodePool::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string NodePool::GetClusterInstanceId() const
{
    return m_clusterInstanceId;
}

void NodePool::SetClusterInstanceId(const string& _clusterInstanceId)
{
    m_clusterInstanceId = _clusterInstanceId;
    m_clusterInstanceIdHasBeenSet = true;
}

bool NodePool::ClusterInstanceIdHasBeenSet() const
{
    return m_clusterInstanceIdHasBeenSet;
}

string NodePool::GetLifeState() const
{
    return m_lifeState;
}

void NodePool::SetLifeState(const string& _lifeState)
{
    m_lifeState = _lifeState;
    m_lifeStateHasBeenSet = true;
}

bool NodePool::LifeStateHasBeenSet() const
{
    return m_lifeStateHasBeenSet;
}

string NodePool::GetLaunchConfigurationId() const
{
    return m_launchConfigurationId;
}

void NodePool::SetLaunchConfigurationId(const string& _launchConfigurationId)
{
    m_launchConfigurationId = _launchConfigurationId;
    m_launchConfigurationIdHasBeenSet = true;
}

bool NodePool::LaunchConfigurationIdHasBeenSet() const
{
    return m_launchConfigurationIdHasBeenSet;
}

string NodePool::GetAutoscalingGroupId() const
{
    return m_autoscalingGroupId;
}

void NodePool::SetAutoscalingGroupId(const string& _autoscalingGroupId)
{
    m_autoscalingGroupId = _autoscalingGroupId;
    m_autoscalingGroupIdHasBeenSet = true;
}

bool NodePool::AutoscalingGroupIdHasBeenSet() const
{
    return m_autoscalingGroupIdHasBeenSet;
}

vector<Label> NodePool::GetLabels() const
{
    return m_labels;
}

void NodePool::SetLabels(const vector<Label>& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool NodePool::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

vector<Taint> NodePool::GetTaints() const
{
    return m_taints;
}

void NodePool::SetTaints(const vector<Taint>& _taints)
{
    m_taints = _taints;
    m_taintsHasBeenSet = true;
}

bool NodePool::TaintsHasBeenSet() const
{
    return m_taintsHasBeenSet;
}

vector<AnnotationValue> NodePool::GetAnnotations() const
{
    return m_annotations;
}

void NodePool::SetAnnotations(const vector<AnnotationValue>& _annotations)
{
    m_annotations = _annotations;
    m_annotationsHasBeenSet = true;
}

bool NodePool::AnnotationsHasBeenSet() const
{
    return m_annotationsHasBeenSet;
}

NodeCountSummary NodePool::GetNodeCountSummary() const
{
    return m_nodeCountSummary;
}

void NodePool::SetNodeCountSummary(const NodeCountSummary& _nodeCountSummary)
{
    m_nodeCountSummary = _nodeCountSummary;
    m_nodeCountSummaryHasBeenSet = true;
}

bool NodePool::NodeCountSummaryHasBeenSet() const
{
    return m_nodeCountSummaryHasBeenSet;
}

string NodePool::GetAutoscalingGroupStatus() const
{
    return m_autoscalingGroupStatus;
}

void NodePool::SetAutoscalingGroupStatus(const string& _autoscalingGroupStatus)
{
    m_autoscalingGroupStatus = _autoscalingGroupStatus;
    m_autoscalingGroupStatusHasBeenSet = true;
}

bool NodePool::AutoscalingGroupStatusHasBeenSet() const
{
    return m_autoscalingGroupStatusHasBeenSet;
}

int64_t NodePool::GetMaxNodesNum() const
{
    return m_maxNodesNum;
}

void NodePool::SetMaxNodesNum(const int64_t& _maxNodesNum)
{
    m_maxNodesNum = _maxNodesNum;
    m_maxNodesNumHasBeenSet = true;
}

bool NodePool::MaxNodesNumHasBeenSet() const
{
    return m_maxNodesNumHasBeenSet;
}

int64_t NodePool::GetMinNodesNum() const
{
    return m_minNodesNum;
}

void NodePool::SetMinNodesNum(const int64_t& _minNodesNum)
{
    m_minNodesNum = _minNodesNum;
    m_minNodesNumHasBeenSet = true;
}

bool NodePool::MinNodesNumHasBeenSet() const
{
    return m_minNodesNumHasBeenSet;
}

int64_t NodePool::GetDesiredNodesNum() const
{
    return m_desiredNodesNum;
}

void NodePool::SetDesiredNodesNum(const int64_t& _desiredNodesNum)
{
    m_desiredNodesNum = _desiredNodesNum;
    m_desiredNodesNumHasBeenSet = true;
}

bool NodePool::DesiredNodesNumHasBeenSet() const
{
    return m_desiredNodesNumHasBeenSet;
}

RuntimeConfig NodePool::GetRuntimeConfig() const
{
    return m_runtimeConfig;
}

void NodePool::SetRuntimeConfig(const RuntimeConfig& _runtimeConfig)
{
    m_runtimeConfig = _runtimeConfig;
    m_runtimeConfigHasBeenSet = true;
}

bool NodePool::RuntimeConfigHasBeenSet() const
{
    return m_runtimeConfigHasBeenSet;
}

string NodePool::GetNodePoolOs() const
{
    return m_nodePoolOs;
}

void NodePool::SetNodePoolOs(const string& _nodePoolOs)
{
    m_nodePoolOs = _nodePoolOs;
    m_nodePoolOsHasBeenSet = true;
}

bool NodePool::NodePoolOsHasBeenSet() const
{
    return m_nodePoolOsHasBeenSet;
}

string NodePool::GetOsCustomizeType() const
{
    return m_osCustomizeType;
}

void NodePool::SetOsCustomizeType(const string& _osCustomizeType)
{
    m_osCustomizeType = _osCustomizeType;
    m_osCustomizeTypeHasBeenSet = true;
}

bool NodePool::OsCustomizeTypeHasBeenSet() const
{
    return m_osCustomizeTypeHasBeenSet;
}

string NodePool::GetImageId() const
{
    return m_imageId;
}

void NodePool::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool NodePool::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

int64_t NodePool::GetDesiredPodNum() const
{
    return m_desiredPodNum;
}

void NodePool::SetDesiredPodNum(const int64_t& _desiredPodNum)
{
    m_desiredPodNum = _desiredPodNum;
    m_desiredPodNumHasBeenSet = true;
}

bool NodePool::DesiredPodNumHasBeenSet() const
{
    return m_desiredPodNumHasBeenSet;
}

string NodePool::GetUserScript() const
{
    return m_userScript;
}

void NodePool::SetUserScript(const string& _userScript)
{
    m_userScript = _userScript;
    m_userScriptHasBeenSet = true;
}

bool NodePool::UserScriptHasBeenSet() const
{
    return m_userScriptHasBeenSet;
}

vector<Tag> NodePool::GetTags() const
{
    return m_tags;
}

void NodePool::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool NodePool::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

bool NodePool::GetDeletionProtection() const
{
    return m_deletionProtection;
}

void NodePool::SetDeletionProtection(const bool& _deletionProtection)
{
    m_deletionProtection = _deletionProtection;
    m_deletionProtectionHasBeenSet = true;
}

bool NodePool::DeletionProtectionHasBeenSet() const
{
    return m_deletionProtectionHasBeenSet;
}

InstanceExtraArgs NodePool::GetExtraArgs() const
{
    return m_extraArgs;
}

void NodePool::SetExtraArgs(const InstanceExtraArgs& _extraArgs)
{
    m_extraArgs = _extraArgs;
    m_extraArgsHasBeenSet = true;
}

bool NodePool::ExtraArgsHasBeenSet() const
{
    return m_extraArgsHasBeenSet;
}

GPUArgs NodePool::GetGPUArgs() const
{
    return m_gPUArgs;
}

void NodePool::SetGPUArgs(const GPUArgs& _gPUArgs)
{
    m_gPUArgs = _gPUArgs;
    m_gPUArgsHasBeenSet = true;
}

bool NodePool::GPUArgsHasBeenSet() const
{
    return m_gPUArgsHasBeenSet;
}

string NodePool::GetDockerGraphPath() const
{
    return m_dockerGraphPath;
}

void NodePool::SetDockerGraphPath(const string& _dockerGraphPath)
{
    m_dockerGraphPath = _dockerGraphPath;
    m_dockerGraphPathHasBeenSet = true;
}

bool NodePool::DockerGraphPathHasBeenSet() const
{
    return m_dockerGraphPathHasBeenSet;
}

vector<DataDisk> NodePool::GetDataDisks() const
{
    return m_dataDisks;
}

void NodePool::SetDataDisks(const vector<DataDisk>& _dataDisks)
{
    m_dataDisks = _dataDisks;
    m_dataDisksHasBeenSet = true;
}

bool NodePool::DataDisksHasBeenSet() const
{
    return m_dataDisksHasBeenSet;
}

int64_t NodePool::GetUnschedulable() const
{
    return m_unschedulable;
}

void NodePool::SetUnschedulable(const int64_t& _unschedulable)
{
    m_unschedulable = _unschedulable;
    m_unschedulableHasBeenSet = true;
}

bool NodePool::UnschedulableHasBeenSet() const
{
    return m_unschedulableHasBeenSet;
}

string NodePool::GetPreStartUserScript() const
{
    return m_preStartUserScript;
}

void NodePool::SetPreStartUserScript(const string& _preStartUserScript)
{
    m_preStartUserScript = _preStartUserScript;
    m_preStartUserScriptHasBeenSet = true;
}

bool NodePool::PreStartUserScriptHasBeenSet() const
{
    return m_preStartUserScriptHasBeenSet;
}

