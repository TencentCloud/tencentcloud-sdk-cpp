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

#include <tencentcloud/lighthouse/v20200324/model/RerunDockerContainerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

RerunDockerContainerRequest::RerunDockerContainerRequest() :
    m_instanceIdHasBeenSet(false),
    m_containerConfigurationHasBeenSet(false),
    m_containerIdHasBeenSet(false)
{
}

string RerunDockerContainerRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_containerConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerConfiguration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_containerConfiguration.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_containerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_containerId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RerunDockerContainerRequest::GetInstanceId() const
{
    return m_instanceId;
}

void RerunDockerContainerRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RerunDockerContainerRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

DockerContainerConfiguration RerunDockerContainerRequest::GetContainerConfiguration() const
{
    return m_containerConfiguration;
}

void RerunDockerContainerRequest::SetContainerConfiguration(const DockerContainerConfiguration& _containerConfiguration)
{
    m_containerConfiguration = _containerConfiguration;
    m_containerConfigurationHasBeenSet = true;
}

bool RerunDockerContainerRequest::ContainerConfigurationHasBeenSet() const
{
    return m_containerConfigurationHasBeenSet;
}

string RerunDockerContainerRequest::GetContainerId() const
{
    return m_containerId;
}

void RerunDockerContainerRequest::SetContainerId(const string& _containerId)
{
    m_containerId = _containerId;
    m_containerIdHasBeenSet = true;
}

bool RerunDockerContainerRequest::ContainerIdHasBeenSet() const
{
    return m_containerIdHasBeenSet;
}


