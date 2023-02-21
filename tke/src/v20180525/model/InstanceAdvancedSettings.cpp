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

#include <tencentcloud/tke/v20180525/model/InstanceAdvancedSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

InstanceAdvancedSettings::InstanceAdvancedSettings() :
    m_desiredPodNumberHasBeenSet(false),
    m_gPUArgsHasBeenSet(false),
    m_preStartUserScriptHasBeenSet(false),
    m_taintsHasBeenSet(false),
    m_mountTargetHasBeenSet(false),
    m_dockerGraphPathHasBeenSet(false),
    m_userScriptHasBeenSet(false),
    m_unschedulableHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_dataDisksHasBeenSet(false),
    m_extraArgsHasBeenSet(false)
{
}

CoreInternalOutcome InstanceAdvancedSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DesiredPodNumber") && !value["DesiredPodNumber"].IsNull())
    {
        if (!value["DesiredPodNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAdvancedSettings.DesiredPodNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_desiredPodNumber = value["DesiredPodNumber"].GetInt64();
        m_desiredPodNumberHasBeenSet = true;
    }

    if (value.HasMember("GPUArgs") && !value["GPUArgs"].IsNull())
    {
        if (!value["GPUArgs"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAdvancedSettings.GPUArgs` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_gPUArgs.Deserialize(value["GPUArgs"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_gPUArgsHasBeenSet = true;
    }

    if (value.HasMember("PreStartUserScript") && !value["PreStartUserScript"].IsNull())
    {
        if (!value["PreStartUserScript"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAdvancedSettings.PreStartUserScript` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_preStartUserScript = string(value["PreStartUserScript"].GetString());
        m_preStartUserScriptHasBeenSet = true;
    }

    if (value.HasMember("Taints") && !value["Taints"].IsNull())
    {
        if (!value["Taints"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceAdvancedSettings.Taints` is not array type"));

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

    if (value.HasMember("MountTarget") && !value["MountTarget"].IsNull())
    {
        if (!value["MountTarget"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAdvancedSettings.MountTarget` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mountTarget = string(value["MountTarget"].GetString());
        m_mountTargetHasBeenSet = true;
    }

    if (value.HasMember("DockerGraphPath") && !value["DockerGraphPath"].IsNull())
    {
        if (!value["DockerGraphPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAdvancedSettings.DockerGraphPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dockerGraphPath = string(value["DockerGraphPath"].GetString());
        m_dockerGraphPathHasBeenSet = true;
    }

    if (value.HasMember("UserScript") && !value["UserScript"].IsNull())
    {
        if (!value["UserScript"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAdvancedSettings.UserScript` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userScript = string(value["UserScript"].GetString());
        m_userScriptHasBeenSet = true;
    }

    if (value.HasMember("Unschedulable") && !value["Unschedulable"].IsNull())
    {
        if (!value["Unschedulable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAdvancedSettings.Unschedulable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_unschedulable = value["Unschedulable"].GetInt64();
        m_unschedulableHasBeenSet = true;
    }

    if (value.HasMember("Labels") && !value["Labels"].IsNull())
    {
        if (!value["Labels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceAdvancedSettings.Labels` is not array type"));

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

    if (value.HasMember("DataDisks") && !value["DataDisks"].IsNull())
    {
        if (!value["DataDisks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceAdvancedSettings.DataDisks` is not array type"));

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

    if (value.HasMember("ExtraArgs") && !value["ExtraArgs"].IsNull())
    {
        if (!value["ExtraArgs"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAdvancedSettings.ExtraArgs` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_extraArgs.Deserialize(value["ExtraArgs"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_extraArgsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceAdvancedSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_desiredPodNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DesiredPodNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_desiredPodNumber, allocator);
    }

    if (m_gPUArgsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GPUArgs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_gPUArgs.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_preStartUserScriptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreStartUserScript";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_preStartUserScript.c_str(), allocator).Move(), allocator);
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

    if (m_mountTargetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountTarget";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mountTarget.c_str(), allocator).Move(), allocator);
    }

    if (m_dockerGraphPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DockerGraphPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dockerGraphPath.c_str(), allocator).Move(), allocator);
    }

    if (m_userScriptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserScript";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userScript.c_str(), allocator).Move(), allocator);
    }

    if (m_unschedulableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unschedulable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unschedulable, allocator);
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

    if (m_extraArgsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraArgs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_extraArgs.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t InstanceAdvancedSettings::GetDesiredPodNumber() const
{
    return m_desiredPodNumber;
}

void InstanceAdvancedSettings::SetDesiredPodNumber(const int64_t& _desiredPodNumber)
{
    m_desiredPodNumber = _desiredPodNumber;
    m_desiredPodNumberHasBeenSet = true;
}

bool InstanceAdvancedSettings::DesiredPodNumberHasBeenSet() const
{
    return m_desiredPodNumberHasBeenSet;
}

GPUArgs InstanceAdvancedSettings::GetGPUArgs() const
{
    return m_gPUArgs;
}

void InstanceAdvancedSettings::SetGPUArgs(const GPUArgs& _gPUArgs)
{
    m_gPUArgs = _gPUArgs;
    m_gPUArgsHasBeenSet = true;
}

bool InstanceAdvancedSettings::GPUArgsHasBeenSet() const
{
    return m_gPUArgsHasBeenSet;
}

string InstanceAdvancedSettings::GetPreStartUserScript() const
{
    return m_preStartUserScript;
}

void InstanceAdvancedSettings::SetPreStartUserScript(const string& _preStartUserScript)
{
    m_preStartUserScript = _preStartUserScript;
    m_preStartUserScriptHasBeenSet = true;
}

bool InstanceAdvancedSettings::PreStartUserScriptHasBeenSet() const
{
    return m_preStartUserScriptHasBeenSet;
}

vector<Taint> InstanceAdvancedSettings::GetTaints() const
{
    return m_taints;
}

void InstanceAdvancedSettings::SetTaints(const vector<Taint>& _taints)
{
    m_taints = _taints;
    m_taintsHasBeenSet = true;
}

bool InstanceAdvancedSettings::TaintsHasBeenSet() const
{
    return m_taintsHasBeenSet;
}

string InstanceAdvancedSettings::GetMountTarget() const
{
    return m_mountTarget;
}

void InstanceAdvancedSettings::SetMountTarget(const string& _mountTarget)
{
    m_mountTarget = _mountTarget;
    m_mountTargetHasBeenSet = true;
}

bool InstanceAdvancedSettings::MountTargetHasBeenSet() const
{
    return m_mountTargetHasBeenSet;
}

string InstanceAdvancedSettings::GetDockerGraphPath() const
{
    return m_dockerGraphPath;
}

void InstanceAdvancedSettings::SetDockerGraphPath(const string& _dockerGraphPath)
{
    m_dockerGraphPath = _dockerGraphPath;
    m_dockerGraphPathHasBeenSet = true;
}

bool InstanceAdvancedSettings::DockerGraphPathHasBeenSet() const
{
    return m_dockerGraphPathHasBeenSet;
}

string InstanceAdvancedSettings::GetUserScript() const
{
    return m_userScript;
}

void InstanceAdvancedSettings::SetUserScript(const string& _userScript)
{
    m_userScript = _userScript;
    m_userScriptHasBeenSet = true;
}

bool InstanceAdvancedSettings::UserScriptHasBeenSet() const
{
    return m_userScriptHasBeenSet;
}

int64_t InstanceAdvancedSettings::GetUnschedulable() const
{
    return m_unschedulable;
}

void InstanceAdvancedSettings::SetUnschedulable(const int64_t& _unschedulable)
{
    m_unschedulable = _unschedulable;
    m_unschedulableHasBeenSet = true;
}

bool InstanceAdvancedSettings::UnschedulableHasBeenSet() const
{
    return m_unschedulableHasBeenSet;
}

vector<Label> InstanceAdvancedSettings::GetLabels() const
{
    return m_labels;
}

void InstanceAdvancedSettings::SetLabels(const vector<Label>& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool InstanceAdvancedSettings::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

vector<DataDisk> InstanceAdvancedSettings::GetDataDisks() const
{
    return m_dataDisks;
}

void InstanceAdvancedSettings::SetDataDisks(const vector<DataDisk>& _dataDisks)
{
    m_dataDisks = _dataDisks;
    m_dataDisksHasBeenSet = true;
}

bool InstanceAdvancedSettings::DataDisksHasBeenSet() const
{
    return m_dataDisksHasBeenSet;
}

InstanceExtraArgs InstanceAdvancedSettings::GetExtraArgs() const
{
    return m_extraArgs;
}

void InstanceAdvancedSettings::SetExtraArgs(const InstanceExtraArgs& _extraArgs)
{
    m_extraArgs = _extraArgs;
    m_extraArgsHasBeenSet = true;
}

bool InstanceAdvancedSettings::ExtraArgsHasBeenSet() const
{
    return m_extraArgsHasBeenSet;
}

