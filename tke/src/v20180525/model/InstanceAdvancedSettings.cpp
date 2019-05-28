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
    m_unschedulableHasBeenSet(false)
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

