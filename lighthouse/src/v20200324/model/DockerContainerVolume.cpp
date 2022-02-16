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

#include <tencentcloud/lighthouse/v20200324/model/DockerContainerVolume.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

DockerContainerVolume::DockerContainerVolume() :
    m_containerPathHasBeenSet(false),
    m_hostPathHasBeenSet(false)
{
}

CoreInternalOutcome DockerContainerVolume::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ContainerPath") && !value["ContainerPath"].IsNull())
    {
        if (!value["ContainerPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DockerContainerVolume.ContainerPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerPath = string(value["ContainerPath"].GetString());
        m_containerPathHasBeenSet = true;
    }

    if (value.HasMember("HostPath") && !value["HostPath"].IsNull())
    {
        if (!value["HostPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DockerContainerVolume.HostPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostPath = string(value["HostPath"].GetString());
        m_hostPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DockerContainerVolume::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_containerPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerPath.c_str(), allocator).Move(), allocator);
    }

    if (m_hostPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostPath.c_str(), allocator).Move(), allocator);
    }

}


string DockerContainerVolume::GetContainerPath() const
{
    return m_containerPath;
}

void DockerContainerVolume::SetContainerPath(const string& _containerPath)
{
    m_containerPath = _containerPath;
    m_containerPathHasBeenSet = true;
}

bool DockerContainerVolume::ContainerPathHasBeenSet() const
{
    return m_containerPathHasBeenSet;
}

string DockerContainerVolume::GetHostPath() const
{
    return m_hostPath;
}

void DockerContainerVolume::SetHostPath(const string& _hostPath)
{
    m_hostPath = _hostPath;
    m_hostPathHasBeenSet = true;
}

bool DockerContainerVolume::HostPathHasBeenSet() const
{
    return m_hostPathHasBeenSet;
}

