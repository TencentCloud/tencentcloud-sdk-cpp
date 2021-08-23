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

#include <tencentcloud/tsf/v20180326/model/InstanceAdvancedSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

InstanceAdvancedSettings::InstanceAdvancedSettings() :
    m_mountTargetHasBeenSet(false),
    m_dockerGraphPathHasBeenSet(false)
{
}

CoreInternalOutcome InstanceAdvancedSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


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


    return CoreInternalOutcome(true);
}

void InstanceAdvancedSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

