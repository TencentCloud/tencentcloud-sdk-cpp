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
using namespace rapidjson;
using namespace std;

InstanceAdvancedSettings::InstanceAdvancedSettings() :
    m_mountTargetHasBeenSet(false),
    m_dockerGraphPathHasBeenSet(false),
    m_userScriptHasBeenSet(false),
    m_unschedulableHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_dataDisksHasBeenSet(false),
    m_extraArgsHasBeenSet(false)
{
}

CoreInternalOutcome InstanceAdvancedSettings::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("MountTarget") && !value["MountTarget"].IsNull())
    {
        if (!value["MountTarget"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceAdvancedSettings.MountTarget` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mountTarget = string(value["MountTarget"].GetString());
        m_mountTargetHasBeenSet = true;
    }

    if (value.HasMember("DockerGraphPath") && !value["DockerGraphPath"].IsNull())
    {
        if (!value["DockerGraphPath"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceAdvancedSettings.DockerGraphPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dockerGraphPath = string(value["DockerGraphPath"].GetString());
        m_dockerGraphPathHasBeenSet = true;
    }

    if (value.HasMember("UserScript") && !value["UserScript"].IsNull())
    {
        if (!value["UserScript"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceAdvancedSettings.UserScript` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userScript = string(value["UserScript"].GetString());
        m_userScriptHasBeenSet = true;
    }

    if (value.HasMember("Unschedulable") && !value["Unschedulable"].IsNull())
    {
        if (!value["Unschedulable"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InstanceAdvancedSettings.Unschedulable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_unschedulable = value["Unschedulable"].GetInt64();
        m_unschedulableHasBeenSet = true;
    }

    if (value.HasMember("Labels") && !value["Labels"].IsNull())
    {
        if (!value["Labels"].IsArray())
            return CoreInternalOutcome(Error("response `InstanceAdvancedSettings.Labels` is not array type"));

        const Value &tmpValue = value["Labels"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Error("response `InstanceAdvancedSettings.DataDisks` is not array type"));

        const Value &tmpValue = value["DataDisks"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Error("response `InstanceAdvancedSettings.ExtraArgs` is not object type").SetRequestId(requestId));
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

void InstanceAdvancedSettings::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_mountTargetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MountTarget";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_mountTarget.c_str(), allocator).Move(), allocator);
    }

    if (m_dockerGraphPathHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DockerGraphPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_dockerGraphPath.c_str(), allocator).Move(), allocator);
    }

    if (m_userScriptHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UserScript";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_userScript.c_str(), allocator).Move(), allocator);
    }

    if (m_unschedulableHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Unschedulable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unschedulable, allocator);
    }

    if (m_labelsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labels.begin(); itr != m_labels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dataDisksHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DataDisks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataDisks.begin(); itr != m_dataDisks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_extraArgsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExtraArgs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_extraArgs.ToJsonObject(value[key.c_str()], allocator);
    }

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

